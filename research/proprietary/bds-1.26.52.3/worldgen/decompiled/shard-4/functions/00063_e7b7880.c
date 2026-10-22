/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8b7880 (ELF vaddr 0xe7b7880)
 * Label: callee-of:0xe7af270
 * Body:  [[0e8b7880, 0e8b79d2] [0e8b79e0, 0e8b7ac5]]
 * Ghidra: FUN_0e8b7880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8b7880(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lStack_38;
  undefined8 uStack_30;
  
  if ((int)param_2[5] == 4) {
    lVar7 = *param_2;
    uVar6 = func_0x0db80510(lVar7 + 0x18);
    lVar7 = func_0x048b1040(lVar7 + 0x18,uVar6,*(undefined4 *)((long)param_2 + 0x2c),1);
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
    if (lVar9 != 0) goto LAB_0e8b79e5;
    lStack_38 = 0;
    uStack_30 = 0;
    func_0x048b10d0(&lStack_38);
    lVar2 = lStack_38;
    while (lVar9 = lVar2, lVar9 != 0) {
LAB_0e8b79e5:
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
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if ((int)param_2[5] != 1) goto LAB_0e8b7a86;
    lVar7 = *param_2;
    uVar6 = func_0x0db80510(lVar7 + 0x18);
    if ((1 < (int)param_2[5] - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0121db83),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = FUN_048b0c90(lVar7 + 0x18,uVar6,*(undefined4 *)((long)param_2 + 0x2c),1);
    if (lVar7 == 0) {
      lStack_38 = 0;
      uStack_30 = 0;
      func_0x048b0d20(&lStack_38);
      lVar7 = lStack_38;
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  puVar8[1] = *(undefined8 *)(param_3 + 8);
  puVar8[2] = uVar6;
  *puVar8 = &UNK_0f4e3cf0;
  puVar8[4] = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  puVar8[5] = *(undefined8 *)(param_3 + 0x28);
  puVar8[6] = uVar6;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined1 *)(puVar8 + 7) = *(undefined1 *)(param_3 + 0x38);
  plVar1 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar8;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
LAB_0e8b7a86:
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


