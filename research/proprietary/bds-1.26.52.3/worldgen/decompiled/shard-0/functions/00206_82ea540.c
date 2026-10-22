/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83ea540 (ELF vaddr 0x82ea540)
 * Label: JigsawStructureDataPacket::vslot17
 * Body:  [[083ea540, 083ea68b] [083ea690, 083ea71f]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot17
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_JigsawStructureDataPacket__vslot17(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_46 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_4e = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  plStack_98 = (long *)0x0;
  lStack_90 = 0;
  puStack_a8 = (undefined *)0x0;
  plStack_a0 = (long *)0x0;
  uStack_60 = 0x3f600000;
  func_0x048af640(&lStack_90,8);
  uStack_48 = 0;
  uStack_46 = 0;
  uStack_40 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_4e = 0;
  puStack_a8 = &UNK_0f534768;
  plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar3 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&UNK_0ef44a60;
  plStack_a0 = plVar3 + 3;
  *(undefined1 *)(plVar3 + 3) = 1;
  puStack_a8 = &UNK_0ef471f0;
  plStack_98 = plVar3;
  FUN_083ea3e0(&puStack_a8);
  (**(code **)(*param_2 + 0x80))(param_1,param_2,param_3,&puStack_a8);
  plVar3 = plStack_98;
  puStack_a8 = &UNK_0f534768;
  if (plStack_98 == (long *)0x0) {
    *(undefined1 *)plStack_a0 = 0;
  }
  else {
    *(undefined1 *)plStack_a0 = 0;
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      func_0x0412c2d0(plVar3);
    }
  }
  lVar2 = lStack_58;
  if (lStack_58 != 0) {
    for (lVar4 = CONCAT62(uStack_4e,uStack_50); lVar2 != lVar4; lVar4 = lVar4 + -0x38) {
      if ((*(byte *)(lVar4 + -0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar4 + -0x28),
                        *(ulong *)(lVar4 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_50 = (undefined2)lVar2;
    uStack_4e = (undefined6)((ulong)lVar2 >> 0x10);
    func_0x0412a280(lStack_58,CONCAT62(uStack_46,uStack_48) - lStack_58);
  }
  puStack_b0 = &uStack_78;
  func_0x048b0f50(&puStack_b0);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    func_0x0412a280(lStack_90,lStack_80 - lStack_90);
  }
  return param_1;
}


