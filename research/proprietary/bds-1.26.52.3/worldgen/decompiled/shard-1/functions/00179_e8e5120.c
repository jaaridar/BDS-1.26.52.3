/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9e5120 (ELF vaddr 0xe8e5120)
 * Label: string:virtual void cereal::internal::TypeSchema<std::optional<std:
 * Body:  [[0e9e5120, 0e9e52ed]]
 * Ghidra: FUN_0e9e5120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9e5120(undefined8 param_1,long *param_2,undefined8 *param_3)

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
    if ((DAT_0f767448 == '\0') && (iVar3 = FUN_04108328(&DAT_0f767448), iVar3 != 0)) {
      func_0x0e9e7020();
      func_0x0410844d(&DAT_0f767448);
    }
    uStack_38 = _DAT_0f767438;
    uStack_34 = uRam000000000f76743c;
    uStack_30 = _DAT_0f767440;
    uStack_2c = uRam000000000f767444;
    func_0x0470d9a0(&uStack_78,&UNK_012075a7,0x4f,0xd,&uStack_38);
    puVar6 = puStack_68;
    if (((ulong)uStack_78 & 1) == 0) {
      puVar6 = (undefined *)((long)&uStack_78 + 1);
    }
    cVar2 = func_0x0eeddcf0(puVar6,&UNK_01288a83,0xf4,&UNK_013ab8cc,&UNK_011b3c06);
    if (((ulong)uStack_78 & 1) != 0) {
      func_0x0412a280(puStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
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
  if (uStack_78 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x2d50c664) {
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
    uStack_78 = (undefined8 *)func_0x0488e200(uVar1,lVar5,0xd2af399c,puVar4);
  }
  (**(code **)(*param_2 + 0x80))(param_2,*(undefined1 *)(uStack_78 + 3));
  if (*(char *)(uStack_78 + 3) == '\x01') {
    uStack_50 = param_3[5];
    puStack_68 = &UNK_0e9e6cf0;
    uStack_58 = 0xaa10f8a7;
    pcStack_60 = (code *)0x0;
    uStack_54 = 4;
    uStack_48 = 0;
    puStack_40 = &UNK_0e9e6b60;
    func_0x0e9e60d0();
    if (pcStack_60 != (code *)0x0) {
      (*pcStack_60)(&uStack_78);
    }
  }
  return;
}


