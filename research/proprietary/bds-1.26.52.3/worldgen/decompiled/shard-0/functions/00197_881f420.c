/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x891f420 (ELF vaddr 0x881f420)
 * Label: caller-of-callee
 * Body:  [[0891f420, 0891f6d8]]
 * Ghidra: FUN_0891f420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0891f420(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_68;
  code *pcStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  long *plStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3[7] == 0) {
    if ((DAT_0f5dfe90 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dfe90), iVar4 != 0)) {
      func_0x088bf780();
      func_0x0410844d(&DAT_0f5dfe90);
    }
    uStack_38 = _DAT_0f5dfe80;
    uStack_34 = uRam000000000f5dfe84;
    uStack_30 = _DAT_0f5dfe88;
    uStack_2c = uRam000000000f5dfe8c;
    FUN_0470d9a0(&uStack_78,&UNK_012075a7,0x4f,0xd,&uStack_38);
    puVar5 = puStack_68;
    if (((ulong)uStack_78 & 1) == 0) {
      puVar5 = (undefined *)((long)&uStack_78 + 1);
    }
    cVar3 = func_0x0eeddcf0(puVar5,&UNK_01288a83,0xf4,&UNK_013ab8cc,&UNK_014d02d8);
    if (((ulong)uStack_78 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
    }
    if (cVar3 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  cVar3 = *(char *)((long)param_3 + 0x24);
  puVar6 = (undefined8 *)*param_3;
  uStack_78 = puVar6;
  if (cVar3 == '\x02') {
    uStack_78 = param_3;
  }
  if (uStack_78 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x4813ca07) {
    uVar1 = param_3[5];
    lVar8 = param_3[6];
    if (lVar8 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar8 = param_3[6];
      cVar3 = *(char *)((long)param_3 + 0x24);
      puVar6 = (undefined8 *)*param_3;
    }
    if (cVar3 == '\x02') {
      puVar6 = param_3;
    }
    uStack_78 = (undefined8 *)func_0x0488e200(uVar1,lVar8,0xb7ec35f9,puVar6);
  }
  (**(code **)(*param_2 + 0x80))(param_2,*(undefined1 *)(uStack_78 + 2));
  if (*(char *)(uStack_78 + 2) == '\x01') {
    plVar2 = (long *)param_3[5];
    puStack_68 = &UNK_088bf920;
    uStack_58 = 0x399557a;
    pcStack_60 = (code *)0x0;
    uStack_54 = 4;
    puStack_48 = (undefined *)0x0;
    puStack_40 = &UNK_088bf840;
    plStack_50 = plVar2;
    if ((DAT_0f5dfe70 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dfe70), iVar4 != 0)) {
      func_0x088bf670();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dfdf0,0xf53dab8);
      func_0x0410844d(&DAT_0f5dfe70);
    }
    plVar7 = (long *)(*plVar2 +
                     (ulong)((int)((ulong)(plVar2[1] - *plVar2) >> 3) - 1U &
                            *(uint *)(_DAT_0f5dfdf0 + 4)) * 8);
    do {
      lVar8 = *plVar7;
      if (lVar8 == -1) goto LAB_0891f600;
      plVar7 = (long *)(plVar2[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar2[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5dfdf0 + 4));
    if (plVar7 == (long *)plVar2[4]) {
LAB_0891f600:
      puVar5 = &DAT_0f5dfdf0;
      puStack_48 = &DAT_0f5dfdf0;
    }
    else {
      puVar5 = (undefined *)plVar7[2];
      puStack_48 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar5 = (undefined *)func_0x048aead0();
      }
    }
    (**(code **)(*(long *)**(undefined8 **)(puVar5 + 0x68) + 0x38))
              ((long *)**(undefined8 **)(puVar5 + 0x68),param_2,&uStack_78,param_4);
    if (pcStack_60 != (code *)0x0) {
      (*pcStack_60)(&uStack_78);
    }
  }
  return;
}


