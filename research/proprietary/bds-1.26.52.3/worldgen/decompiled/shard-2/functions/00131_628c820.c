/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x638c820 (ELF vaddr 0x628c820)
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[0638c820, 0638ca9c]]
 * Ghidra: FUN_0638c820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0638c820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  undefined *puStack_98;
  code *pcStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  long *plStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 auStack_68 [2];
  undefined *puStack_58;
  code *pcStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  long *plStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  
  puStack_f0 = &UNK_0f02b4e8;
  plVar7 = (long *)(*(long *)(param_1 + 8) + 0x18);
  puStack_58 = &UNK_04913860;
  uStack_48 = 0x8240cd28;
  pcStack_50 = (code *)0x0;
  uStack_44 = 4;
  puStack_30 = &UNK_04913840;
  auStack_68[0] = param_4;
  plStack_40 = plVar7;
  uStack_e8 = func_0x04913c20(plVar7);
  plStack_e0 = plVar7;
  uStack_38 = uStack_e8;
  uStack_108 = func_0x04913c20(plVar7);
  uStack_100 = plVar7;
  cVar5 = func_0x04913500(&uStack_e8,&uStack_108);
  if (cVar5 == '\0') {
    cVar5 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_0128cdfb);
    if (cVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lStack_c0 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lStack_c0 == 0) {
    func_0x048b0de0(&uStack_108,&uStack_109);
    _DAT_0f54fd90 = (undefined4)uStack_108;
    uRam000000000f54fd94 = uStack_108._4_4_;
    uVar6 = (undefined4)uStack_100;
    uVar4 = uStack_100._4_4_;
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar6;
    uRam000000000f54fd9c = uVar4;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    plVar3 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_100 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar3);
      }
    }
    lStack_c0 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_d8 = &UNK_0638c040;
  uStack_c8 = 0x14c1f52e;
  pcStack_d0 = (code *)0x0;
  uStack_c4 = 3;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_98 = &UNK_0638c040;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0x14c1f52e;
  uStack_84 = 3;
  uStack_e8 = 0;
  uStack_78 = 0;
  puStack_70 = &UNK_0638c020;
  auStack_a8[0] = param_3;
  plStack_80 = plVar7;
  uVar6 = func_0x0ed6b4a0(param_1,param_2,auStack_a8,auStack_68,&puStack_f0);
  if (pcStack_90 != (code *)0x0) {
    (*pcStack_90)(auStack_a8);
    if (pcStack_d0 != (code *)0x0) {
      (*pcStack_d0)(&uStack_e8);
    }
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_68);
  }
  return uVar6;
}


