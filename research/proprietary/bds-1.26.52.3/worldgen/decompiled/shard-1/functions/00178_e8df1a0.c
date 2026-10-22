/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9df1a0 (ELF vaddr 0xe8df1a0)
 * Label: string:virtual bool cereal::internal::TypeSchema<std::array<std::va
 * Body:  [[0e9df1a0, 0e9df4c2] [0e9df4d0, 0e9df5e3]]
 * Ghidra: FUN_0e9df1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0e9df1a0(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined7 *puVar13;
  undefined8 uVar14;
  byte bStack_168;
  undefined7 uStack_167;
  undefined7 *puStack_158;
  ulong auStack_150 [2];
  undefined4 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 auStack_108 [2];
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  if (*(code **)(param_2 + 0x38) == (code *)0x0) {
    lStack_c8 = 0;
    uStack_c0 = 0;
    func_0x048b1dc0(&lStack_c8);
    lVar8 = lStack_c8;
    uVar14 = uStack_c0;
    if (lStack_c8 != 0) goto LAB_0e9df358;
LAB_0e9df1f2:
    lVar8 = func_0x048aead0(uVar14);
    bVar1 = *(byte *)(lVar8 + 0x19);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x30);
    if (*(long *)(param_2 + 0x30) == 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      (**(code **)(param_2 + 0x38))(0,param_2,0);
      lVar8 = *(long *)(param_2 + 0x30);
      if (*(long *)(param_2 + 0x30) == 0) goto LAB_0e9df1f2;
    }
LAB_0e9df358:
    bVar1 = *(byte *)(lVar8 + 0x19);
  }
  if ((bVar1 & 4) == 0) {
    puStack_140 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_140 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar14 = _UNK_0145e908;
    auStack_150[0] = 0x29;
    auStack_150[1] = 0x27;
    *(undefined8 *)(puStack_140 + 4) = _DAT_0145e900;
    *(undefined8 *)(puStack_140 + 6) = uVar14;
    uVar4 = _UNK_0145e8fc;
    uVar3 = _UNK_0145e8f8;
    uVar2 = _UNK_0145e8f4;
    *puStack_140 = _DAT_0145e8f0;
    puStack_140[1] = uVar2;
    puStack_140[2] = uVar3;
    puStack_140[3] = uVar4;
    *(undefined8 *)((long)puStack_140 + 0x1f) = 0x72656e6961746e6f;
    *(undefined1 *)((long)puStack_140 + 0x27) = 0;
    (**(code **)(*param_4 + 0x10))(param_4,auStack_150);
    if ((auStack_150[0] & 1) != 0) {
      func_0x0412a280(puStack_140,auStack_150[0] & 0xfffffffffffffffe);
    }
    return 0;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  pcStack_a8 = (code *)0x0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  (**(code **)(param_2 + 0x38))(0x400,param_2,&lStack_c8);
  uStack_e0 = param_3[5];
  puStack_f8 = &UNK_0488e0b0;
  uStack_e8 = 0x48b5725f;
  pcStack_f0 = (code *)0x0;
  uStack_e4 = 0;
  auStack_108[0] = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  puVar9 = (undefined *)(*pcStack_a8)(uStack_c0);
  cVar6 = *(char *)((long)param_3 + 0x24);
  puVar12 = (undefined8 *)*param_3;
  puVar10 = puVar12;
  if (cVar6 == '\x02') {
    puVar10 = param_3;
  }
  if (puVar10 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0x6d7d5f5) {
    uVar14 = param_3[5];
    lVar8 = param_3[6];
    if (lVar8 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar8 = param_3[6];
      cVar6 = *(char *)((long)param_3 + 0x24);
      puVar12 = (undefined8 *)*param_3;
    }
    if (cVar6 == '\x02') {
      puVar12 = param_3;
    }
    puVar10 = (undefined8 *)func_0x0488e200(uVar14,lVar8,&UNK_06d7d5f5,puVar12);
  }
  if (puVar9 != (undefined *)0x2) {
    puStack_138 = &UNK_012d2ffc;
    uStack_130 = 0x43;
    uStack_128 = 2;
    puStack_118 = puVar9;
    func_0x0470d9a0(&bStack_168,&UNK_013e0633,0x3a,0x44d,&puStack_138);
    puVar13 = puStack_158;
    if ((bStack_168 & 1) == 0) {
      puVar13 = &uStack_167;
    }
    cVar6 = func_0x0eeddcf0(puVar13,&UNK_0128c12e,0x5a5,&UNK_013ab8cc,&UNK_0138c3bb);
    if ((bStack_168 & 1) != 0) {
      func_0x0412a280(puStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
    }
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_138 = (undefined *)0x0;
    if (puVar9 == (undefined *)0x0) goto LAB_0e9df59a;
  }
  puStack_138 = (undefined *)0x0;
  do {
    puVar5 = puStack_138;
    plStack_48 = (long *)0x0;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *plVar11 = (long)&UNK_0f4d3c10;
    plVar11[1] = (long)&lStack_c8;
    plVar11[2] = (long)&puStack_138;
    plVar11[3] = (long)auStack_108;
    plVar11[4] = (long)puVar10;
    plVar11[5] = (long)param_4;
    plStack_48 = plVar11;
    (**(code **)(*param_4 + 0x20))(param_4,puVar5,alStack_68);
    if (plStack_48 == alStack_68) {
      lVar8 = 0x20;
LAB_0e9df4d5:
      (**(code **)(*plStack_48 + lVar8))();
    }
    else {
      lVar8 = 0x28;
      if (plStack_48 != (long *)0x0) goto LAB_0e9df4d5;
    }
    puStack_138 = puStack_138 + 1;
  } while (puStack_138 < puVar9);
LAB_0e9df59a:
  uVar7 = (**(code **)(*param_4 + 0x18))(param_4);
  if (pcStack_f0 != (code *)0x0) {
    (*pcStack_f0)(auStack_108);
  }
  return uVar7 ^ 1;
}



/* ---- referenced strings ----
 * 0x145e8f0  source type is not a sequence container
 * 0x145e900  ot a sequence container
 */
