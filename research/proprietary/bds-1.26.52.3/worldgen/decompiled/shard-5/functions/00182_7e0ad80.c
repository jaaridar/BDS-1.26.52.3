/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7f0ad80 (ELF vaddr 0x7e0ad80)
 * Label: string:entt::meta_data cereal::BasicFactory<SubChunkPacketPayload::
 * Body:  [[07f0ad80, 07f0afde] [07f0afe0, 07f0b14b]]
 * Ghidra: FUN_07f0ad80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07f0ad80(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long lStack_38;
  undefined8 uStack_30;
  
  if ((int)param_2[5] == 4) {
    lVar7 = *param_2;
    if ((DAT_0f5c45a8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5c45a8), iVar6 != 0)) {
      func_0x0800edd0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c4528,0xf53dab8);
      func_0x0410844d(&DAT_0f5c45a8);
    }
    plVar10 = (long *)(*(long *)(lVar7 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c4528 + 4)) * 8);
    do {
      lVar9 = *plVar10;
      if (lVar9 == -1) goto LAB_07f0aea9;
      plVar10 = (long *)(*(long *)(lVar7 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5c4528 + 4));
    if (plVar10 == *(long **)(lVar7 + 0x38)) {
LAB_07f0aea9:
      puVar11 = &DAT_0f5c4528;
    }
    else {
      puVar11 = (undefined *)plVar10[2];
    }
    lVar7 = func_0x048b1040(lVar7 + 0x18,puVar11,*(undefined4 *)((long)param_2 + 0x2c),1);
    if (lVar7 == 0) {
      lStack_38 = 0;
      uStack_30 = 0;
      func_0x048b10d0(&lStack_38);
      lVar9 = *(long *)(lStack_38 + 0x38);
      lVar7 = lStack_38;
    }
    else {
      lVar9 = *(long *)(lVar7 + 0x38);
    }
    if (lVar9 != 0) goto LAB_07f0afe5;
    lStack_38 = 0;
    uStack_30 = 0;
    func_0x048b10d0(&lStack_38);
    lVar2 = lStack_38;
    while (lVar9 = lVar2, lVar9 != 0) {
LAB_07f0afe5:
      lVar7 = lVar9;
      lVar2 = *(long *)(lVar9 + 0x38);
      if (*(long *)(lVar9 + 0x38) == 0) {
        lStack_38 = 0;
        uStack_30 = 0;
        func_0x048b10d0(&lStack_38);
        lVar2 = lStack_38;
      }
    }
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  else {
    if ((int)param_2[5] != 1) goto LAB_07f0b084;
    lVar7 = *param_2;
    if ((DAT_0f5c45a8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5c45a8), iVar6 != 0)) {
      func_0x0800edd0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c4528,0xf53dab8);
      func_0x0410844d(&DAT_0f5c45a8);
    }
    plVar10 = (long *)(*(long *)(lVar7 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c4528 + 4)) * 8);
    do {
      lVar9 = *plVar10;
      if (lVar9 == -1) goto LAB_07f0ae18;
      plVar10 = (long *)(*(long *)(lVar7 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5c4528 + 4));
    if (plVar10 == *(long **)(lVar7 + 0x38)) {
LAB_07f0ae18:
      puVar11 = &DAT_0f5c4528;
      iVar6 = (int)param_2[5];
    }
    else {
      puVar11 = (undefined *)plVar10[2];
      iVar6 = (int)param_2[5];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f327d),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = func_0x048b0c90(lVar7 + 0x18,puVar11,*(undefined4 *)((long)param_2 + 0x2c),1);
    if (lVar7 == 0) {
      lStack_38 = 0;
      uStack_30 = 0;
      func_0x048b0d20(&lStack_38);
      lVar7 = lStack_38;
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  puVar8[1] = *(undefined8 *)(param_3 + 8);
  puVar8[2] = uVar1;
  *puVar8 = &UNK_0f4e3aa0;
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  puVar8[4] = *(undefined8 *)(param_3 + 0x20);
  puVar8[5] = uVar1;
  puVar8[6] = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  plVar10 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar8;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
LAB_07f0b084:
  *(char *)(param_1 + 6) = (char)param_2[6];
  lVar7 = *param_2;
  lVar9 = param_2[1];
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar4;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  *param_1 = lVar7;
  param_1[1] = lVar9;
  return;
}


