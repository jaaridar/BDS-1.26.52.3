/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x628c820
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[0628c820, 0628cbbc] [0628cc0f, 0628cc61] [0628cc70, 0628ccd9] [0628cd1f, 0628cd4f]]
 * Ghidra: FUN_0628c820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0628c820(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,byte param_5,
                 undefined8 param_6,undefined8 param_7,int param_8,long param_9,undefined4 param_10,
                 long *param_11,long param_12,long param_13,long param_14,long param_15,
                 long param_16,long param_17,long param_18,long param_19,long param_20,long param_21
                 ,long param_22,long param_23,long param_24,undefined4 param_25,undefined8 param_26,
                 undefined8 param_27,long param_28,undefined8 param_29,undefined8 param_30,
                 long param_31,undefined8 param_32,uint param_33,undefined4 param_34,long *param_35,
                 long *param_36,undefined8 param_37,undefined8 param_38,undefined *param_39,
                 undefined1 *param_40,undefined *param_41,undefined *param_42,undefined *param_43,
                 undefined4 param_44,undefined8 param_45,long *param_46,undefined8 param_47,
                 long *param_48)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulong in_RAX;
  char *pcVar16;
  undefined8 *puVar17;
  long *plVar18;
  int *piVar19;
  undefined4 *unaff_RBX;
  undefined4 *unaff_R14;
  undefined8 *unaff_R15;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 uStack00000000000000d4;
  
  pcVar16 = (char *)(in_RAX & 0xffffffffffffffb8);
  *pcVar16 = *pcVar16 + (char)pcVar16;
  bVar2 = *param_2;
  *param_2 = *param_2 + param_5;
  param_28 = CONCAT44(param_28._4_4_,(int)param_28 + (int)pcVar16 + (uint)CARRY1(bVar2,param_5));
  param_27 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
  param_32._0_2_ = 0xff00;
  param_32._4_4_ = param_32._4_4_ & 0xffffff00;
  param_33 = param_33 & 0xffffff00;
  uStack00000000000000d4 = 0;
  param_26 = param_1;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f02e120;
  if (param_11 != (long *)0x0) {
    lVar3 = *param_11;
    param_11 = puVar17;
    (**(code **)(lVar3 + 8))();
    puVar17 = param_11;
  }
  param_11 = puVar17;
  param_34 = param_10;
  param_35 = (long *)0x0;
  param_36 = (long *)((ulong)param_36 & 0xffffffff00000000);
  param_37 = 1;
  param_38 = 0;
  param_39 = &UNK_063e7aa0;
  param_40 = &SUB_048b06d0;
  param_41 = &UNK_063e6650;
  param_42 = &UNK_063f2f40;
  param_43 = &UNK_063f3240;
  param_44 = 0;
  param_45 = 0;
  param_46 = (long *)0x0;
  func_0x048b05a0(param_9,&param_34);
  plVar18 = param_46;
  if (param_46 != (long *)0x0) {
    LOCK();
    plVar1 = param_46 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*param_46 + 0x10))(param_46);
      func_0x0412c2d0(plVar18);
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550a20), iVar15 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  param_34 = _DAT_0f550a0c;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar3 = param_12;
  puVar17 = param_11;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0ef439d0;
  param_35 = plVar18 + 3;
  param_11 = (long *)0x0;
  param_12 = 0;
  plVar18[3] = (long)puVar17;
  plVar18[4] = lVar3;
  plVar18[7] = param_15;
  plVar18[5] = param_13;
  plVar18[6] = param_14;
  param_13 = 0;
  param_14 = 0;
  param_15 = 0;
  plVar18[10] = param_18;
  plVar18[8] = param_16;
  plVar18[9] = param_17;
  param_16 = 0;
  param_17 = 0;
  param_18 = 0;
  plVar18[0xb] = param_19;
  plVar18[0xc] = param_20;
  plVar18[0xd] = param_21;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
  plVar18[0xe] = param_22;
  plVar18[0xf] = param_23;
  plVar18[0x10] = param_24;
  param_22 = 0;
  param_23 = 0;
  param_24 = 0;
  *(undefined4 *)(plVar18 + 0x11) = param_25;
  plVar18[0x12] = param_26;
  plVar18[0x13] = param_27;
  plVar18[0x14] = param_28;
  param_26 = 0;
  param_27 = 0;
  param_28 = 0;
  plVar18[0x17] = param_31;
  *(undefined4 *)(plVar18 + 0x15) = (undefined4)param_29;
  *(undefined4 *)((long)plVar18 + 0xac) = param_29._4_4_;
  *(undefined4 *)(plVar18 + 0x16) = (undefined4)param_30;
  *(undefined4 *)((long)plVar18 + 0xb4) = param_30._4_4_;
  param_29 = 0;
  param_30 = 0;
  param_31 = 0;
  *(ulong *)((long)plVar18 + 0xc5) =
       CONCAT17(uStack00000000000000d4,CONCAT43(param_33,param_32._5_3_));
  plVar18[0x18] = CONCAT44(param_32._4_4_,CONCAT22(param_32._2_2_,(undefined2)param_32));
  param_47 = 0;
  param_48 = (long *)0x0;
  param_36 = plVar18;
  func_0x048afd20(param_9,&param_34);
  plVar18 = param_36;
  if (param_36 != (long *)0x0) {
    LOCK();
    plVar1 = param_36 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*param_36 + 0x10))(param_36);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = param_48;
  if (param_48 != (long *)0x0) {
    LOCK();
    plVar1 = param_48 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*param_48 + 0x10))(param_48);
      func_0x0412c2d0(plVar18);
    }
  }
  lVar3 = *(long *)(param_9 + 0x10);
  iVar15 = *(int *)(param_9 + 0x1c);
  if (iVar15 == 2) {
    piVar19 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
    iVar15 = *piVar19;
    while (iVar15 != *(int *)(param_9 + 0x18)) {
      piVar19 = piVar19 + 0x16;
      iVar15 = *piVar19;
    }
    for (; *(long *)(piVar19 + 0xc) != *(long *)(param_9 + 8); piVar19 = *(int **)(piVar19 + 0xe)) {
    }
  }
  else {
    if (iVar15 != 1) {
      if (iVar15 == 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | param_8 << 0x10;
      }
      goto LAB_0628cc7d;
    }
    piVar19 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
    iVar15 = *piVar19;
    while (iVar15 != *(int *)(param_9 + 0x18)) {
      piVar19 = piVar19 + 0x1a;
      iVar15 = *piVar19;
    }
  }
  piVar19[4] = piVar19[4] | param_8 << 0x10;
LAB_0628cc7d:
  *(undefined1 *)(unaff_RBX + 0xc) = *(undefined1 *)(unaff_R14 + 0xc);
  uVar4 = *unaff_R14;
  uVar5 = unaff_R14[1];
  uVar6 = unaff_R14[2];
  uVar7 = unaff_R14[3];
  uVar8 = unaff_R14[4];
  uVar9 = unaff_R14[5];
  uVar10 = unaff_R14[6];
  uVar11 = unaff_R14[7];
  uVar12 = unaff_R14[9];
  uVar13 = unaff_R14[10];
  uVar14 = unaff_R14[0xb];
  unaff_RBX[8] = unaff_R14[8];
  unaff_RBX[9] = uVar12;
  unaff_RBX[10] = uVar13;
  unaff_RBX[0xb] = uVar14;
  unaff_RBX[4] = uVar8;
  unaff_RBX[5] = uVar9;
  unaff_RBX[6] = uVar10;
  unaff_RBX[7] = uVar11;
  *unaff_RBX = uVar4;
  unaff_RBX[1] = uVar5;
  unaff_RBX[2] = uVar6;
  unaff_RBX[3] = uVar7;
  func_0x048b0bc0(&param_11);
  return;
}


