/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6070 (ELF vaddr 0xd1d6070)
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot2
 * Body:  [[0d2d6070, 0d2d62eb]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot2
                 (long *param_1,long param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uStack_81;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_58;
  undefined5 uStack_57;
  undefined2 uStack_52;
  undefined1 uStack_50;
  undefined5 uStack_4f;
  undefined1 uStack_4a;
  undefined8 uStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined8 uStack_30;
  
  if (param_4 == 0) {
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar5 = &UNK_0f47e0b0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = puVar5 + 2;
    *param_1 = (long)puVar5;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar5 = &UNK_0f47e0b0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = puVar5 + 2;
    *param_1 = (long)puVar5;
    func_0x0d6bd5f0(puVar5,param_4);
  }
  bStack_40 = 0x12;
  uStack_3f = 0x626154746f6f4c;
  uStack_38 = 0x6c;
  uStack_37 = 0x65;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uStack_78 = *(undefined8 *)(param_2 + 8);
    uStack_70 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_78,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  pbStack_80 = &bStack_40;
  lVar6 = FUN_0d6c9580(puVar5 + 1,pbStack_80,&UNK_01563a4f,&pbStack_80,&uStack_81);
  if ((ulong)*(uint *)(lVar6 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar6 + 0x60) * 8))(&pbStack_80,lVar6 + 0x38);
  }
  uVar7 = uStack_68;
  uVar1 = (undefined4)uStack_78;
  uVar2 = uStack_78._4_4_;
  uVar3 = (undefined4)uStack_70;
  uVar4 = uStack_70._4_4_;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  *(undefined **)(lVar6 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar6 + 0x40) = uVar1;
  *(undefined4 *)(lVar6 + 0x44) = uVar2;
  *(undefined4 *)(lVar6 + 0x48) = uVar3;
  *(undefined4 *)(lVar6 + 0x4c) = uVar4;
  *(undefined8 *)(lVar6 + 0x50) = uVar7;
  *(undefined4 *)(lVar6 + 0x60) = 8;
  if ((bStack_40 & 1) != 0) {
    func_0x0412a280(uStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
  }
  lVar6 = *param_1;
  bStack_58 = 0x1a;
  uStack_57 = 0x54746f6f4c;
  uStack_52 = 0x6261;
  uStack_50 = 0x6c;
  uStack_4f = 0x6465655365;
  uStack_4a = 0;
  uVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  pbStack_80 = &bStack_58;
  lVar6 = FUN_0d6c9580(lVar6 + 8,pbStack_80,&UNK_01563a4f,&pbStack_80,&uStack_81);
  if ((ulong)*(uint *)(lVar6 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar6 + 0x60) * 8))(&pbStack_80,lVar6 + 0x38);
  }
  *(undefined **)(lVar6 + 0x38) = &UNK_0f47e200;
  *(undefined8 *)(lVar6 + 0x40) = uVar7;
  *(undefined4 *)(lVar6 + 0x60) = 4;
  if ((bStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,CONCAT26(uStack_52,CONCAT51(uStack_57,bStack_58)) & 0xfffffffffffffffe
                   );
  }
  return param_1;
}


