/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6c6560 (ELF vaddr 0xe5c6560)
 * Label: string:virtual void cereal::internal::TypeSchema<std::optional<std:
 * Body:  [[0e6c6560, 0e6c672d]]
 * Ghidra: FUN_0e6c6560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6c6560(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_78;
  undefined *puStack_68;
  code *pcStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3[7] == 0) {
    if ((DAT_0f75d648 == '\0') && (iVar3 = func_0x04108328(&DAT_0f75d648), iVar3 != 0)) {
      func_0x0e6beab0();
      FUN_0410844d(&DAT_0f75d648);
    }
    uStack_38 = _DAT_0f75d638;
    uStack_34 = uRam000000000f75d63c;
    uStack_30 = _DAT_0f75d640;
    uStack_2c = uRam000000000f75d644;
    FUN_0470d9a0(&uStack_78,&UNK_012075a7,0x4f,0xd,&uStack_38);
    puVar6 = puStack_68;
    if (((ulong)uStack_78 & 1) == 0) {
      puVar6 = (undefined *)((long)&uStack_78 + 1);
    }
    cVar2 = func_0x0eeddcf0(puVar6,&UNK_01288a83,0xf4,&UNK_013ab8cc,&UNK_01372261);
    if (((ulong)uStack_78 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
    }
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  cVar2 = *(char *)((long)param_3 + 0x24);
  puVar4 = (undefined8 *)*param_3;
  uStack_78 = puVar4;
  if (cVar2 == '\x02') {
    uStack_78 = param_3;
  }
  if (uStack_78 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x4b97bce4) {
    uVar1 = param_3[5];
    lVar5 = param_3[6];
    if (lVar5 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar5 = param_3[6];
      cVar2 = *(char *)((long)param_3 + 0x24);
      puVar4 = (undefined8 *)*param_3;
    }
    if (cVar2 == '\x02') {
      puVar4 = param_3;
    }
    uStack_78 = (undefined8 *)FUN_0488e200(uVar1,lVar5,0xb468431c,puVar4);
  }
  (**(code **)(*param_2 + 0x80))(param_2,*(undefined1 *)(uStack_78 + 4));
  if (*(char *)(uStack_78 + 4) == '\x01') {
    uStack_50 = param_3[5];
    puStack_68 = &UNK_0e6beca0;
    uStack_58 = 0xf76a965b;
    pcStack_60 = (code *)0x0;
    uStack_54 = 4;
    uStack_48 = 0;
    puStack_40 = &UNK_0e6bebc0;
    func_0x0e6c1170();
    if (pcStack_60 != (code *)0x0) {
      (*pcStack_60)(&uStack_78);
    }
  }
  return;
}


