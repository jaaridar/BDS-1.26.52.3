/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ce1570 (ELF vaddr 0x5be1570)
 * Label: callee-of:0x5a1f120
 * Body:  [[05ce1570, 05ce17ee] [05ce17f0, 05ce188a]]
 * Ghidra: FUN_05ce1570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05ce1570(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a4;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
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
  
  lVar8 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar8 = 8;
  }
  uStack_a4 = param_3;
  lVar8 = func_0x05cf92c0(param_1,param_2,&uStack_a4,*(undefined8 *)(_DAT_0f71e690 + lVar8));
  *(byte *)(lVar8 + 0x134) = *(byte *)(lVar8 + 0x134) | 1;
  *(undefined1 *)(lVar8 + 0x130) = 1;
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar6 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar5 = _UNK_012be24f;
  *(ulong *)((long)puVar6 + 10) = CONCAT26(_UNK_012be24d,CONCAT42(_UNK_012be249,_DAT_012be247));
  *(undefined8 *)((long)puVar6 + 0x12) = uVar5;
  uVar4 = _UNK_012be249;
  uVar3 = _UNK_012be241;
  uVar2 = CONCAT22(_DAT_012be247,_UNK_012be245);
  *puVar6 = _DAT_012be23d;
  puVar6[1] = uVar3;
  puVar6[2] = uVar2;
  puVar6[3] = uVar4;
  *(undefined1 *)((long)puVar6 + 0x1a) = 0;
  if ((*(byte *)(lVar8 + 0x110) & 1) == 0) {
    FUN_04885070(lVar8 + 0x110,puVar6,0x1a);
  }
  else {
    func_0x04885120(lVar8 + 0x110,puVar6,0x1a);
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(lVar8 + 0x138) = *param_4;
  *(undefined4 *)(lVar8 + 0x13c) = uVar2;
  *(undefined4 *)(lVar8 + 0x140) = uVar3;
  *(undefined4 *)(lVar8 + 0x144) = uVar4;
  lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (lVar7 == 0) {
    FUN_0eec74c0(0x20,0);
  }
  uStack_a0 = 0x21;
  lStack_98 = param_6;
  lStack_90 = lVar7;
  func_0x0eee2f00(lVar7,param_5,param_6);
  *(undefined1 *)(lVar7 + param_6) = 0;
  func_0x0c6c8740(&uStack_88,&UNK_0f3c5758,&uStack_a0);
  if ((*(byte *)(lVar8 + 8) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar8 + 0x18),*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
  }
  *(long *)(lVar8 + 0x18) = lStack_78;
  *(undefined4 *)(lVar8 + 8) = (undefined4)uStack_88;
  *(undefined4 *)(lVar8 + 0xc) = uStack_88._4_4_;
  *(undefined4 *)(lVar8 + 0x10) = uStack_80;
  *(undefined4 *)(lVar8 + 0x14) = uStack_7c;
  *(byte *)(lVar8 + 0x135) = *(byte *)(lVar8 + 0x135) | 4;
  func_0x0c6cf060(lVar8,0xf70ba30);
  uStack_88 = &UNK_0f40da60;
  uStack_7c = 0x3fa00000;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = CONCAT31(uStack_80._1_3_,1);
  lVar7 = lVar8 + 0x28;
  lStack_b8 = lVar7;
  lStack_b0 = lVar8;
  func_0x0cc81a40(&uStack_88,&lStack_b8);
  puStack_40 = &UNK_0f40dd80;
  uStack_34 = 0x40c80000;
  uStack_38 = 1;
  lStack_b8 = lVar7;
  lStack_b0 = lVar8;
  func_0x0cc81a40(&puStack_40,&lStack_b8);
  puStack_50 = &UNK_0f4033e0;
  uStack_46 = 1;
  uStack_48 = 0x101;
  lStack_b8 = lVar7;
  lStack_b0 = lVar8;
  func_0x0cc81a40(&puStack_50,&lStack_b8);
  puStack_60 = &UNK_0f406c60;
  uStack_56 = 0;
  uStack_55 = 0x101;
  uStack_58 = 1;
  lStack_b8 = lVar7;
  lStack_b0 = lVar8;
  func_0x0cc81a40(&puStack_60,&lStack_b8);
  lVar7 = lStack_78;
  uStack_88 = &UNK_0f40da60;
  lVar8 = lStack_70;
  if (lStack_78 != 0) {
    for (; lVar7 != lVar8; lVar8 = lVar8 + -0x18) {
      *(undefined **)(lVar8 + -0x18) = &UNK_0f3773c0;
      plVar1 = *(long **)(lVar8 + -0x10);
      *(undefined8 *)(lVar8 + -0x10) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x90))();
      }
    }
    lStack_70 = lVar7;
    func_0x0412a280(lStack_78,lStack_68 - lStack_78);
  }
  if ((uStack_a0 & 1) != 0) {
    func_0x0412a280(lStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar6,0x20);
  return;
}



/* ---- referenced strings ----
 * 0x12be23d  itemGroup.name.stainedClay
 * 0x12be247  name.stainedClay
 */
