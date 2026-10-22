/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca5e9d0 (ELF vaddr 0xc95e9d0)
 * Label: caller-of-seed
 * Body:  [[0ca5e9d0, 0ca5ecbc]]
 * Ghidra: FUN_0ca5e9d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca5e9d0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,
                 short *param_5)

{
  short sVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  short sVar7;
  byte *pbVar8;
  undefined8 auStack_d8 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_88;
  undefined4 uStack_78;
  short sStack_74;
  short sStack_72;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  sVar1 = *param_5;
  sVar7 = param_5[1] + sVar1;
  auStack_d8[0] = *param_2;
  lStack_c8 = 0;
  uStack_c0 = 0;
  if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
    lStack_c8 = 0;
  }
  else {
    (**(code **)param_2[2])(param_2 + 2,&lStack_c8);
    lStack_c8 = param_2[2];
  }
  param_2[2] = 0;
  plStack_88 = (long *)param_2[10];
  param_2[10] = 0;
  uStack_78 = param_3;
  sStack_74 = sVar1;
  sStack_72 = sVar7;
  if ((*param_4 & 1) == 0) {
    uStack_60 = *(undefined8 *)(param_4 + 4);
    uStack_70 = *param_4;
    uStack_6c = param_4[1];
    uStack_68 = param_4[2];
    uStack_64 = param_4[3];
    if ((*param_4 & 1) != 0) goto LAB_0ca5eac9;
LAB_0ca5ea97:
    uStack_48 = *(undefined8 *)(param_4 + 4);
    uStack_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
  }
  else {
    func_0x0412e5e0(&uStack_70,*(undefined8 *)(param_4 + 4),*(undefined8 *)(param_4 + 2));
    if ((*param_4 & 1) == 0) goto LAB_0ca5ea97;
LAB_0ca5eac9:
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_4 + 4),*(undefined8 *)(param_4 + 2));
  }
  func_0x0ca5c8c0(param_1,auStack_d8);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
  }
  plVar2 = plStack_88;
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(uStack_60,CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffe);
    plVar2 = plStack_88;
  }
  plStack_88 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plStack_88 = (long *)0x0;
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_c8 != 0) {
    (**(code **)(lStack_c8 + 8))(&lStack_c8);
  }
  *param_1 = &UNK_0f3ec808;
  param_1[1] = &UNK_0f3ec9a8;
  param_1[2] = &UNK_0f3ecab8;
  param_1[7] = &UNK_0f3ecae8;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x48,0);
  }
  puVar4 = &UNK_0f3ed310;
  *puVar3 = &UNK_0f3ed310;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  plVar2 = (long *)param_1[0x24];
  param_1[0x24] = puVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    puVar3 = (undefined8 *)param_1[0x24];
    puVar4 = (undefined *)*puVar3;
  }
  (**(code **)(puVar4 + 0x10))(puVar3);
  uVar5 = (**(code **)(*(long *)param_1[0x14] + 0x2b0))();
  lVar6 = func_0x0c8ba8f0(uVar5,param_5 + 4);
  if (lVar6 != 0) {
    *(undefined2 *)(param_1 + 0x9e) = *(undefined2 *)(lVar6 + 0x168);
    goto LAB_0ca5ec96;
  }
  if ((*(byte *)(param_5 + 4) & 1) == 0) {
    lVar6 = (long)param_5 + 9;
    if ((*param_4 & 1) == 0) goto LAB_0ca5ec71;
LAB_0ca5ec80:
    pbVar8 = *(byte **)(param_4 + 4);
  }
  else {
    lVar6 = *(long *)(param_5 + 0xc);
    if ((*param_4 & 1) != 0) goto LAB_0ca5ec80;
LAB_0ca5ec71:
    pbVar8 = (byte *)((long)param_4 + 1);
  }
  func_0x0ca5edc0(lVar6,pbVar8,&UNK_012a6b5d);
LAB_0ca5ec96:
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


