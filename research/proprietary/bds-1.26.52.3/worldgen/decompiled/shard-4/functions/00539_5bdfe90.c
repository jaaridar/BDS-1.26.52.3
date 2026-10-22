/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cdfe90 (ELF vaddr 0x5bdfe90)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cdfe90, 05ce0169]]
 * Ghidra: FUN_05cdfe90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05cdfe90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a4;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined2 uStack_55;
  undefined *puStack_50;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined *puStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  
  lVar6 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar6 = 8;
  }
  uStack_a4 = param_3;
  lVar6 = func_0x05cf92c0(param_1,param_2,&uStack_a4,*(undefined8 *)(_DAT_0f71e690 + lVar6));
  *(undefined1 *)(lVar6 + 0x130) = 1;
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar4 = _UNK_013ad096;
  uVar3 = _UNK_013ad092;
  uVar2 = _UNK_013ad08e;
  *puVar5 = _DAT_013ad08a;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined8 *)((long)puVar5 + 0xf) = 0x65746572636e6f63;
  *(undefined1 *)((long)puVar5 + 0x17) = 0;
  if ((*(byte *)(lVar6 + 0x110) & 1) == 0) {
    func_0x04885070(lVar6 + 0x110,puVar5,0x17);
  }
  else {
    FUN_04885120(lVar6 + 0x110,puVar5,0x17);
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(lVar6 + 0x138) = *param_4;
  *(undefined4 *)(lVar6 + 0x13c) = uVar2;
  *(undefined4 *)(lVar6 + 0x140) = uVar3;
  *(undefined4 *)(lVar6 + 0x144) = uVar4;
  bStack_a0 = (char)param_6 * '\x02';
  func_0x0eee2f00(&uStack_9f,param_5,param_6);
  *(undefined1 *)((long)&uStack_9f + param_6) = 0;
  func_0x0c6c8740(&uStack_88,&UNK_0f3c5758,&bStack_a0);
  if ((*(byte *)(lVar6 + 8) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar6 + 0x18),*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
  }
  *(long *)(lVar6 + 0x18) = lStack_78;
  *(undefined4 *)(lVar6 + 8) = (undefined4)uStack_88;
  *(undefined4 *)(lVar6 + 0xc) = uStack_88._4_4_;
  *(undefined4 *)(lVar6 + 0x10) = uStack_80;
  *(undefined4 *)(lVar6 + 0x14) = uStack_7c;
  *(byte *)(lVar6 + 0x135) = *(byte *)(lVar6 + 0x135) | 4;
  func_0x0c6cf060(lVar6,0xf70ba30);
  uStack_88 = &UNK_0f40da60;
  uStack_7c = 0x3fe66666;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = CONCAT31(uStack_80._1_3_,1);
  lVar7 = lVar6 + 0x28;
  lStack_b8 = lVar7;
  lStack_b0 = lVar6;
  func_0x0cc81a40(&uStack_88,&lStack_b8);
  puStack_40 = &UNK_0f40dd80;
  uStack_34 = 0x41100000;
  uStack_38 = 1;
  lStack_b8 = lVar7;
  lStack_b0 = lVar6;
  func_0x0cc81a40(&puStack_40,&lStack_b8);
  puStack_50 = &UNK_0f4033e0;
  uStack_46 = 1;
  uStack_48 = 0x101;
  lStack_b8 = lVar7;
  lStack_b0 = lVar6;
  func_0x0cc81a40(&puStack_50,&lStack_b8);
  puStack_60 = &UNK_0f406c60;
  uStack_56 = 0;
  uStack_55 = 0x101;
  uStack_58 = 1;
  lStack_b8 = lVar7;
  lStack_b0 = lVar6;
  func_0x0cc81a40(&puStack_60,&lStack_b8);
  lVar7 = lStack_78;
  uStack_88 = &UNK_0f40da60;
  lVar6 = lStack_70;
  if (lStack_78 != 0) {
    for (; lVar7 != lVar6; lVar6 = lVar6 + -0x18) {
      *(undefined **)(lVar6 + -0x18) = &UNK_0f3773c0;
      plVar1 = *(long **)(lVar6 + -0x10);
      *(undefined8 *)(lVar6 + -0x10) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x90))();
      }
    }
    lStack_70 = lVar7;
    func_0x0412a280(lStack_78,lStack_68 - lStack_78);
  }
  if ((bStack_a0 & 1) != 0) {
    func_0x0412a280(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar5,0x1a);
  return;
}



/* ---- referenced strings ----
 * 0x13ad08a  itemGroup.name.concrete
 */
