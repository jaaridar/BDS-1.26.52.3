/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9df6a0 (ELF vaddr 0xe8df6a0)
 * Label: string:virtual void cereal::internal::TypeSchema<std::array<std::va
 * Body:  [[0e9df6a0, 0e9e00e6]]
 * Ghidra: FUN_0e9df6a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9df6a0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  undefined *puVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined7 *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined1 uStack_a8;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_78;
  ulong uStack_70;
  byte bStack_68;
  undefined7 uStack_67;
  ulong uStack_60;
  undefined7 *puStack_58;
  ulong uStack_50;
  uint uStack_44;
  undefined *puStack_40;
  long lStack_38;
  
  pcVar9 = (code *)param_3[7];
  if (pcVar9 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar19 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar19 = (undefined *)param_3[7] == &UNK_0e9de190;
    }
    param_3[2] = &UNK_0e9de320;
    *(undefined4 *)(param_3 + 4) = 0x6d7d5f5;
    param_3[3] = 0;
    *(undefined1 *)((long)param_3 + 0x24) = 2;
    *param_3 = 0;
    param_3[1] = 0;
    pcVar9 = (code *)&UNK_0e9de190;
    param_3[7] = &UNK_0e9de190;
    puVar17 = (undefined8 *)0x0;
    uVar18 = 0;
    if (bVar19) {
      uVar18 = param_3[6];
    }
    param_3[6] = uVar18;
    cVar7 = '\x02';
    puVar10 = param_3;
LAB_0e9df75e:
    if (puVar10 == (undefined8 *)0x0) goto LAB_0e9df763;
  }
  else {
    cVar7 = *(char *)((long)param_3 + 0x24);
    puVar17 = (undefined8 *)*param_3;
    puVar10 = puVar17;
    if (cVar7 == '\x02') {
      puVar10 = param_3;
    }
    if (*(int *)(param_3 + 4) == 0x6d7d5f5) goto LAB_0e9df75e;
LAB_0e9df763:
    uVar18 = param_3[5];
    lVar12 = param_3[6];
    if (lVar12 == 0) {
      (*pcVar9)(0,param_3,0,puVar17);
      lVar12 = param_3[6];
      cVar7 = *(char *)((long)param_3 + 0x24);
      puVar17 = (undefined8 *)*param_3;
    }
    if (cVar7 == '\x02') {
      puVar17 = param_3;
    }
    puVar10 = (undefined8 *)FUN_0488e200(uVar18,lVar12,&UNK_06d7d5f5,puVar17);
  }
  uVar11 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar11 & 2) == 0) {
    uStack_50 = 0x1100000138ffdf;
    func_0x0ed5ffe0(*param_5,8,&uStack_50);
    if ((uStack_50 >> 0x37 & 1) == 0) {
      return;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
    return;
  }
  lVar12 = (**(code **)(*param_2 + 0xb0))(param_2,2);
  puStack_40 = &UNK_0f4d3c80;
  if (lVar12 != 2) {
    uVar18 = *param_5;
    func_0x041348b0(&uStack_c8,2);
    bVar19 = (uStack_c8 & 1) != 0;
    uStack_98 = (long)&uStack_c8 + 1;
    if (bVar19) {
      uStack_98 = uStack_b8;
    }
    uStack_90 = (ulong)((byte)uStack_c8 >> 1);
    if (bVar19) {
      uStack_90 = CONCAT44(uStack_bc,uStack_c0);
    }
    FUN_0470d9a0(&uStack_108,&UNK_0149654b,0x45,0xd,&uStack_98);
    uVar11 = (ulong)uStack_108 >> 1 & 0x7f;
    puVar5 = (undefined *)((long)&uStack_108 + 1);
    if (((ulong)uStack_108 & 1) != 0) {
      uVar11 = uStack_100;
      puVar5 = puStack_f8;
    }
    uStack_70 = 0;
    if (puVar5 == (undefined *)0x0) {
      uStack_70 = (ulong)((uint)uVar11 & 0x7f) << 0x30;
    }
    else {
      lVar12 = uVar11 + 9;
      puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && puVar14 == (ulong *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *puVar14 = uVar11;
      func_0x0eee2f00(puVar14 + 1,puVar5,uVar11);
      *(undefined1 *)((long)puVar14 + uVar11 + 8) = 0;
      uStack_70 = (ulong)(puVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(uVar18,8,&uStack_70);
    if ((uStack_70 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
    }
    uStack_70 = 0;
    if (((ulong)uStack_108 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_f8,(ulong)uStack_108 & 0xfffffffffffffffe);
    }
    if ((uStack_c8 & 1) == 0) {
      return;
    }
    thunk_FUN_0ee326a0(uStack_b8,CONCAT44(uStack_c4,uStack_c8) & 0xfffffffffffffffe);
    return;
  }
  if (((long *)param_5[2] != (long *)0x0) &&
     (uVar11 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar11 < 2)) {
    uVar18 = *param_5;
    uVar13 = (**(code **)(*(long *)param_5[2] + 0x10))();
    func_0x041348b0(&uStack_c8,uVar13);
    uStack_90 = CONCAT44(uStack_bc,uStack_c0);
    uStack_98 = uStack_b8;
    if ((uStack_c8 & 1) == 0) {
      uStack_98 = (long)&uStack_c8 + 1;
      uStack_90 = (ulong)((byte)uStack_c8 >> 1);
    }
    FUN_0470d9a0(&uStack_108,&UNK_01411e36,0x31,0xd,&uStack_98);
    uVar11 = (ulong)uStack_108 >> 1 & 0x7f;
    puVar5 = (undefined *)((long)&uStack_108 + 1);
    if (((ulong)uStack_108 & 1) != 0) {
      uVar11 = uStack_100;
      puVar5 = puStack_f8;
    }
    uStack_78 = 0;
    if (puVar5 == (undefined *)0x0) {
      uStack_78 = (ulong)((uint)uVar11 & 0x7f) << 0x30;
    }
    else {
      lVar12 = uVar11 + 9;
      puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && puVar14 == (ulong *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *puVar14 = uVar11;
      func_0x0eee2f00(puVar14 + 1,puVar5,uVar11);
      *(undefined1 *)((long)puVar14 + uVar11 + 8) = 0;
      uStack_78 = (ulong)(puVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(uVar18,0x40,&uStack_78);
    if ((uStack_78 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_78 & 0xff00ffffffffffff) - 8);
    }
    uStack_78 = 0;
    if (((ulong)uStack_108 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_f8,(ulong)uStack_108 & 0xfffffffffffffffe);
    }
    if ((uStack_c8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_b8,CONCAT44(uStack_c4,uStack_c8) & 0xfffffffffffffffe);
    }
    if ((DAT_0f767248 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767248), iVar8 != 0)) {
      func_0x0e9de0d0();
      FUN_0410844d(&DAT_0f767248);
    }
    uVar13 = _DAT_0f767240;
    uVar18 = _DAT_0f767238;
    uVar15 = (**(code **)(*(long *)param_5[2] + 0x10))();
    func_0x041348b0(&uStack_98,uVar15);
    lVar12 = lStack_88;
    uVar6 = uStack_90;
    uVar11 = uStack_98;
    func_0x041348b0(&bStack_68,2);
    puStack_f8 = (undefined *)lVar12;
    pcStack_f0 = (code *)uVar6;
    if ((uVar11 & 1) == 0) {
      puStack_f8 = (undefined *)((long)&uStack_98 + 1);
      pcStack_f0 = (code *)(uVar11 >> 1 & 0x7f);
    }
    puStack_e8 = &uStack_67;
    uStack_e0 = (ulong)(bStack_68 >> 1);
    if ((bStack_68 & 1) != 0) {
      uStack_e0 = uStack_60;
      puStack_e8 = puStack_58;
    }
    uStack_108 = (undefined8 *)uVar18;
    uStack_100 = uVar13;
    FUN_0470d9a0(&uStack_c8,&UNK_01223784,0x72,0xddd,&uStack_108);
    uVar11 = (long)&uStack_c8 + 1;
    if ((uStack_c8 & 1) != 0) {
      uVar11 = uStack_b8;
    }
    cVar7 = func_0x0eeddcf0(uVar11,&UNK_01198d5e,0x52a,&UNK_013ab8cc,&UNK_0121de29);
    if ((uStack_c8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_b8,CONCAT44(uStack_c4,uStack_c8) & 0xfffffffffffffffe);
    }
    if ((bStack_68 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_58,CONCAT71(uStack_67,bStack_68) & 0xfffffffffffffffe);
    }
    if ((uStack_98 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    if (cVar7 == '\0') {
      return;
    }
    _DAT_00000000 = 0xdeadc0de;
    return;
  }
  func_0x0ed6d600(&uStack_98,*param_5);
  uStack_e0 = param_3[5];
  puStack_f8 = &UNK_0488e0b0;
  pcStack_f0 = (code *)0x0;
  puStack_e8 = (undefined7 *)CONCAT35(puStack_e8._5_3_,0x48b5725f);
  uStack_108 = (undefined8 *)0x0;
  uStack_d8 = 0;
  puStack_d0 = (undefined *)0x0;
  uStack_c8 = *(uint *)param_5;
  uStack_c4 = *(undefined4 *)((long)param_5 + 4);
  uStack_c0 = *(undefined4 *)(param_5 + 1);
  uStack_bc = *(undefined4 *)((long)param_5 + 0xc);
  plVar3 = (long *)param_5[2];
  if (plVar3 == (long *)0x0) {
    uStack_b8 = 0;
  }
  else {
    uStack_b8 = (**(code **)(*plVar3 + 0x30))(plVar3,0);
  }
  uStack_b0 = *(undefined4 *)(param_5 + 3);
  uStack_ac = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_a8 = 1;
  if ((uint)uStack_90 <= *(uint *)(uStack_98 + 0x2b0) && *(uint *)(uStack_98 + 0x2b0) != 0xffffffff)
  goto LAB_0e9e0078;
  lStack_38 = uStack_98;
  puVar4 = (uint *)*param_5;
  func_0x0ed6d4a0(puVar4,0);
  (**(code **)(*param_2 + 200))(param_2,0);
  if (pcStack_f0 != (code *)0x0) {
    (*pcStack_f0)(&uStack_108);
  }
  puVar5 = puStack_d0;
  puStack_f8 = &UNK_0e9de910;
  pcStack_f0 = (code *)0x0;
  puStack_e8 = (undefined7 *)CONCAT35(puStack_e8._5_3_,0x3481f45c1);
  puStack_d0 = &UNK_0e9de830;
  if (puVar5 != &UNK_0e9de830) {
    uStack_d8 = 0;
  }
  uStack_108 = puVar10;
  func_0x0ed75bc0(&puStack_40,param_2,&uStack_108,param_4,&uStack_c8);
  (**(code **)(*param_2 + 0xd0))(param_2);
  lVar12 = *(long *)(puVar4 + 2);
  uVar2 = *(uint *)(lVar12 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar2;
  if (puVar4[0x48] == 0) {
    uVar16 = puVar4[4];
LAB_0e9dfc92:
    uStack_44 = (uint)uStack_90;
    lVar1 = lVar12 + (ulong)uVar16 * 0x20;
    uVar11 = (ulong)*(uint *)(lVar12 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar11 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar11 * 8))(&bStack_68,lVar1 + -0x18);
      uVar16 = puVar4[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar4[4] = uVar16 - 1;
    uStack_90._0_4_ = uStack_44;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar2)
          && (uVar16 = puVar4[4], uVar2 == uVar16 - 1)) goto LAB_0e9dfc92;
  if (*(uint *)(lStack_38 + 0x2b0) == 0xffffffff || *(uint *)(lStack_38 + 0x2b0) < (uint)uStack_90)
  {
    puVar4 = (uint *)*param_5;
    func_0x0ed6d4a0(puVar4,1);
    (**(code **)(*param_2 + 200))(param_2,1);
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(&uStack_108);
    }
    puVar5 = puStack_d0;
    uStack_108 = puVar10 + 1;
    puStack_f8 = &UNK_0e9de910;
    pcStack_f0 = (code *)0x0;
    puStack_e8 = (undefined7 *)CONCAT35(puStack_e8._5_3_,0x3481f45c1);
    puStack_d0 = &UNK_0e9de830;
    if (puVar5 != &UNK_0e9de830) {
      uStack_d8 = 0;
    }
    func_0x0ed75bc0(&puStack_40,param_2,&uStack_108,param_4,&uStack_c8);
    (**(code **)(*param_2 + 0xd0))(param_2);
    lVar12 = *(long *)(puVar4 + 2);
    uVar2 = *(uint *)(lVar12 + 0x1c + (ulong)*puVar4 * 0x20);
    *puVar4 = uVar2;
    if (puVar4[0x48] == 0) {
      uVar16 = puVar4[4];
    }
    else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) == uVar2
             ) || (uVar16 = puVar4[4], uVar2 != uVar16 - 1)) goto LAB_0e9e0078;
    lVar1 = lVar12 + (ulong)uVar16 * 0x20;
    uVar11 = (ulong)*(uint *)(lVar12 + -0x10 + (ulong)uVar16 * 0x20);
    if (uVar11 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar11 * 8))(&bStack_68,lVar1 + -0x18);
      uVar16 = puVar4[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar4[4] = uVar16 - 1;
  }
LAB_0e9e0078:
  if (pcStack_f0 != (code *)0x0) {
    (*pcStack_f0)(&uStack_108);
  }
  return;
}


