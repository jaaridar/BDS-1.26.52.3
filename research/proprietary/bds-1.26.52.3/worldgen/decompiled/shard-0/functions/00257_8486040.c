/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8586040 (ELF vaddr 0x8486040)
 * Label: FeatureRegistryPacket::vslot8
 * Body:  [[08586040, 08586184] [08586190, 0858621b]]
 * Ghidra: wg_FeatureRegistryPacket__vslot8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FeatureRegistryPacket__vslot8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  
  uStack_58 = 0;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  puStack_98 = (undefined *)0x0;
  plStack_90 = (long *)0x0;
  uStack_50 = 0x3f600000;
  func_0x048af640(&lStack_80,8);
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  puStack_98 = &UNK_0f534768;
  plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar3 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&UNK_0ef44a60;
  plStack_90 = plVar3 + 3;
  *(undefined1 *)(plVar3 + 3) = 1;
  puStack_98 = &UNK_0ef471f0;
  plStack_88 = plVar3;
  func_0x08586280(&puStack_98);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,&puStack_98);
  plVar3 = plStack_88;
  puStack_98 = &UNK_0f534768;
  if (plStack_88 == (long *)0x0) {
    *(undefined1 *)plStack_90 = 0;
  }
  else {
    *(undefined1 *)plStack_90 = 0;
    LOCK();
    plVar1 = plStack_88 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      func_0x0412c2d0(plVar3);
    }
  }
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    for (lVar4 = CONCAT62(uStack_3e,uStack_40); lVar2 != lVar4; lVar4 = lVar4 + -0x38) {
      if ((*(byte *)(lVar4 + -0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar4 + -0x28),
                        *(ulong *)(lVar4 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_40 = (undefined2)lVar2;
    uStack_3e = (undefined6)((ulong)lVar2 >> 0x10);
    func_0x0412a280(lStack_48,CONCAT62(uStack_36,uStack_38) - lStack_48);
  }
  puStack_a0 = &uStack_68;
  func_0x048b0f50(&puStack_a0);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    func_0x0412a280(lStack_80,lStack_70 - lStack_80);
  }
  return;
}


