/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf091b0 (ELF vaddr 0xce091b0)
 * Label: JigsawBlockActor::vslot3
 * Body:  [[0ce3def0, 0ce3e17b] [0cf091b0, 0cf091dc]]
 * Ghidra: wg_JigsawBlockActor__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 wg_JigsawBlockActor__vslot3(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 uStack_99;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  byte bStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xcf091ca;
  func_0x0d3b0940(param_1 + 0xd8);
  uVar7 = func_0x0cf74920(param_1,param_2,param_3);
  if ((char)uVar7 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x88);
    uVar9 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x90);
    }
    if (uVar9 != 0) {
      bStack_38 = 0x14;
      uStack_37 = 0x4e6d6f74737543;
      uStack_30 = 0x61;
      uStack_2f = 0x656d;
      uStack_2d = 0;
      if ((bVar1 & 1) == 0) {
        uStack_58 = *(undefined8 *)(param_1 + 0x98);
        uStack_68 = *(undefined8 *)(param_1 + 0x88);
        uStack_60 = *(undefined8 *)(param_1 + 0x90);
      }
      else {
        func_0x0412e5e0(&uStack_68,*(undefined8 *)(param_1 + 0x98));
      }
      pbStack_98 = &bStack_38;
      lVar8 = func_0x0d6c9580(param_2 + 8,pbStack_98,&UNK_01563a4f,&pbStack_98,&uStack_99);
      if ((ulong)*(uint *)(lVar8 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar8 + 0x60) * 8))(&pbStack_98,lVar8 + 0x38);
      }
      uVar6 = uStack_58;
      uVar2 = (undefined4)uStack_68;
      uVar3 = uStack_68._4_4_;
      uVar4 = (undefined4)uStack_60;
      uVar5 = uStack_60._4_4_;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      *(undefined **)(lVar8 + 0x38) = &UNK_0f47e5e8;
      *(undefined4 *)(lVar8 + 0x40) = uVar2;
      *(undefined4 *)(lVar8 + 0x44) = uVar3;
      *(undefined4 *)(lVar8 + 0x48) = uVar4;
      *(undefined4 *)(lVar8 + 0x4c) = uVar5;
      *(undefined8 *)(lVar8 + 0x50) = uVar6;
      *(undefined4 *)(lVar8 + 0x60) = 8;
      if ((bStack_38 & 1) != 0) {
        func_0x0412a280(uStack_28,CONCAT71(uStack_37,bStack_38) & 0xfffffffffffffffe);
      }
    }
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      bStack_50 = 0x24;
      uStack_4f = _DAT_013b0565;
      uStack_4b = _UNK_013b0569;
      uStack_47 = _UNK_013b056d;
      uStack_43 = _UNK_013b0571;
      uStack_3f = 0x656d;
      uStack_3d = 0;
      if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
        uStack_78 = *(undefined8 *)(param_1 + 0xb0);
        uStack_88 = *(undefined8 *)(param_1 + 0xa0);
        uStack_80 = *(undefined8 *)(param_1 + 0xa8);
      }
      else {
        func_0x0412e5e0(&uStack_88,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8));
      }
      pbStack_98 = &bStack_50;
      lVar8 = func_0x0d6c9580(param_2 + 8,pbStack_98,&UNK_01563a4f,&pbStack_98,&uStack_99);
      if ((ulong)*(uint *)(lVar8 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar8 + 0x60) * 8))(&pbStack_98,lVar8 + 0x38);
      }
      uVar6 = uStack_78;
      uVar2 = (undefined4)uStack_88;
      uVar3 = uStack_88._4_4_;
      uVar4 = (undefined4)uStack_80;
      uVar5 = uStack_80._4_4_;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      *(undefined **)(lVar8 + 0x38) = &UNK_0f47e5e8;
      *(undefined4 *)(lVar8 + 0x40) = uVar2;
      *(undefined4 *)(lVar8 + 0x44) = uVar3;
      *(undefined4 *)(lVar8 + 0x48) = uVar4;
      *(undefined4 *)(lVar8 + 0x4c) = uVar5;
      *(undefined8 *)(lVar8 + 0x50) = uVar6;
      *(undefined4 *)(lVar8 + 0x60) = 8;
      if ((bStack_50 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT21(uStack_3f,uStack_43._3_1_))),
                        CONCAT35((undefined3)uStack_4b,CONCAT41(uStack_4f,bStack_50)) &
                        0xfffffffffffffffe);
      }
    }
    else {
      pbStack_98 = &DAT_013b0565;
      uStack_90 = 0x12;
      lVar8 = FUN_0d6c9880(param_2 + 8,&pbStack_98);
      if (lVar8 != param_2 + 0x10) {
        func_0x0d6c9f40(param_2 + 8,lVar8);
      }
    }
  }
  return uVar7;
}



/* ---- referenced strings ----
 * 0x13b0565  FilteredCustomName
 */
