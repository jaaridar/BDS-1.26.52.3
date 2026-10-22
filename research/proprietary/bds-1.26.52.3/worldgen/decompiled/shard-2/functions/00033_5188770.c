/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288770 (ELF vaddr 0x5188770)
 * Label: OverworldGeneratorMultinoise::vslot51
 * Body:  [[05288770, 05288ab7]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot51
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] wg_OverworldGeneratorMultinoise__vslot51(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (_DAT_0f5566f0 == 1) {
    puStack_b8 = &UNK_0f1e0e30;
    puStack_b0 = &DAT_0f5566f8;
    plStack_98 = (long *)&puStack_b8;
    auVar6 = func_0x09c7abc0(0,0,*(undefined8 *)(param_1 + 0x28),&puStack_b8);
    if ((undefined **)plStack_98 == &puStack_b8) {
      lVar4 = 0x20;
LAB_052887e8:
      (**(code **)(*plStack_98 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (plStack_98 != (long *)0x0) goto LAB_052887e8;
    }
    if ((auVar6._8_8_ >> 0x20 & 1) != 0) goto LAB_05288a7e;
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0xa0) + 0x568))();
  if ((*(char *)(lVar4 + 0x77) == '\0') &&
     ((*(char *)(lVar4 + 0x68) != '\0' || ((*(byte *)(lVar4 + 0x56) & 1) != 0)))) {
    func_0x04fa7a10(lVar4 + 0x70,lVar4 + 0x50);
  }
  uVar3 = _DAT_0f5568f8;
  uVar1 = CONCAT44(uRam000000000f556744,_DAT_0f556740);
  uVar2 = CONCAT44(uRam000000000f55674c,_DAT_0f556748);
  uStack_48 = _DAT_0f556740;
  uStack_44 = uRam000000000f556744;
  uStack_40 = _DAT_0f556748;
  uStack_3c = uRam000000000f55674c;
  uStack_88 = _DAT_0f556740;
  uStack_84 = uRam000000000f556744;
  uStack_80 = _DAT_0f556748;
  uStack_7c = uRam000000000f55674c;
  uStack_68 = _DAT_0f556740;
  uStack_64 = uRam000000000f556744;
  uStack_60 = _DAT_0f556748;
  uStack_5c = uRam000000000f55674c;
  uStack_58 = _DAT_0f556740;
  uStack_54 = uRam000000000f556744;
  uStack_50 = _DAT_0f556748;
  uStack_4c = uRam000000000f55674c;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar1;
  puVar5[3] = uVar2;
  puVar5[4] = uVar3;
  puVar5[5] = uVar2;
  puVar5[6] = CONCAT44(uStack_84,uStack_88);
  puVar5[7] = CONCAT44(uStack_7c,uStack_80);
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0xffffffffffffd8f0;
  puVar5[0xb] = 0xfffffffffffff9c1;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar1;
  puVar5[0xe] = uVar2;
  puVar5[0xf] = uVar1;
  puVar5[0x10] = uVar2;
  puVar5[0x11] = uVar3;
  puVar5[0x12] = uVar2;
  puVar5[0x13] = CONCAT44(uStack_44,uStack_48);
  puVar5[0x14] = CONCAT44(uStack_3c,uStack_40);
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0xffffffffffffd8f0;
  puVar5[0x18] = 0xfffffffffffff9c1;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = uVar1;
  puVar5[0x1c] = uVar2;
  puVar5[0x1d] = uVar1;
  puVar5[0x1e] = uVar2;
  puVar5[0x1f] = uVar3;
  puVar5[0x20] = uVar2;
  puVar5[0x21] = CONCAT44(uStack_54,uStack_58);
  puVar5[0x22] = CONCAT44(uStack_4c,uStack_50);
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0x63f;
  puVar5[0x26] = 10000;
  puVar5[0x27] = 0;
  puVar5[0x28] = uVar1;
  puVar5[0x29] = uVar2;
  puVar5[0x2a] = uVar1;
  puVar5[0x2b] = uVar2;
  puVar5[0x2c] = uVar3;
  puVar5[0x2d] = uVar2;
  *(uint *)(puVar5 + 0x2e) = uStack_68;
  *(undefined4 *)((long)puVar5 + 0x174) = uStack_64;
  *(undefined4 *)(puVar5 + 0x2f) = uStack_60;
  *(undefined4 *)((long)puVar5 + 0x17c) = uStack_5c;
  puVar5[0x30] = 0;
  puVar5[0x31] = 0;
  puVar5[0x32] = 0x63f;
  puVar5[0x33] = 10000;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puStack_b0 = (undefined *)(*(long *)(param_1 + 0x28) + 0xa8);
  puStack_b8 = (undefined *)(param_1 + 0x908);
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (lVar4 == 0) {
    func_0x0eec74c0(0x1b0,0);
  }
  lStack_a8 = lVar4;
  plStack_98 = (long *)(lVar4 + 0x1b0);
  func_0x0eee2f00(lVar4,puVar5,0x1b0);
  lStack_a0 = lVar4 + 0x1b0;
  func_0x0412a280(puVar5,0x1b0);
  func_0x04a43200(&uStack_88,&puStack_b8);
  auVar6._8_4_ = uStack_80;
  auVar6._0_8_ = (ulong)uStack_88 | 0x7fff00000000;
  auVar6._12_4_ = 0;
  func_0x0412a280(lVar4,0x1b0);
LAB_05288a7e:
  auVar7._8_8_ = auVar6._8_8_ & 0xffffffff;
  auVar7._0_8_ = auVar6._0_8_;
  return auVar7;
}


