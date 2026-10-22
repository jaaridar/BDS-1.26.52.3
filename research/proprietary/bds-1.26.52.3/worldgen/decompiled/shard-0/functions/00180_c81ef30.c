/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc91ef30 (ELF vaddr 0xc81ef30)
 * Label: string:world_gen
 * Body:  [[0c91ef30, 0c91f157] [0c91f160, 0c91f1c8]]
 * Ghidra: FUN_0c91ef30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c91ef30(undefined4 param_1,short param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_98;
  uint uStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  
  uStack_6e = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  bStack_78 = 0x12;
  uStack_6f = DAT_01591884;
  uStack_77 = (undefined7)_DAT_0159187c;
  uStack_70 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
  uStack_80 = 0x838dddc83a29ed6c;
  bVar1 = *param_3;
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  if (uVar5 == 0) {
    return;
  }
  if (param_2 == -1) {
    return;
  }
  if (param_2 == 0x3d) {
    auStack_58[0] = 0;
    if ((bVar1 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    iVar4 = func_0x09ded4b0(param_3,uVar5,auStack_58,0,0);
    if (iVar4 == 0) {
      uVar2 = param_4[2];
      param_1 = auStack_58[0];
    }
    else {
      uVar2 = param_4[2];
    }
    if ((ulong)uVar2 == 1) {
      *param_4 = param_1;
      return;
    }
    if (uVar2 != 0xffffffff) {
      auStack_58[0] = param_1;
      (**(code **)(&UNK_0f3e4e98 + (ulong)uVar2 * 8))(&uStack_98,param_4);
    }
    *param_4 = param_1;
    param_4[2] = 1;
    return;
  }
  auStack_58[0] = CONCAT22(auStack_58[0]._2_2_,1);
  uStack_50 = 1;
  puStack_48 = &uStack_80;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = 0x1fffffffffff;
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_18 = 0;
  if ((bVar1 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0b5be630(&uStack_98,param_3,uVar5,auStack_58);
  if ((ulong)(uint)param_4[2] == 0xffffffff) {
    if (uStack_90 == 0xffffffff) goto LAB_0c91f13c;
LAB_0c91f0fe:
    puStack_88 = param_4;
    (**(code **)(&UNK_0f3e4ea8 + (ulong)uStack_90 * 8))(&puStack_88,param_4,&uStack_98);
  }
  else {
    if (uStack_90 != 0xffffffff) goto LAB_0c91f0fe;
    (**(code **)(&UNK_0f3e4e98 + (ulong)(uint)param_4[2] * 8))(&puStack_88,param_4);
    param_4[2] = 0xffffffff;
  }
  if ((ulong)uStack_90 != 0xffffffff) {
    (**(code **)(&UNK_0f3e4e98 + (ulong)uStack_90 * 8))(&puStack_88,&uStack_98);
  }
LAB_0c91f13c:
  lVar3 = lStack_30;
  if (lStack_30 != 0) {
    for (lVar6 = CONCAT71(uStack_27,uStack_28); lVar3 != lVar6; lVar6 = lVar6 + -0x18) {
      if ((*(byte *)(lVar6 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar6 + -8),*(ulong *)(lVar6 + -0x18) & 0xfffffffffffffffe);
      }
    }
    uStack_28 = (undefined1)lVar3;
    uStack_27 = (undefined7)((ulong)lVar3 >> 8);
    func_0x0412a280(lStack_30,CONCAT71(uStack_1f,uStack_20) - lStack_30);
  }
  if ((bStack_78 & 1) == 0) {
    return;
  }
  func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
  return;
}



/* ---- referenced strings ----
 * 0x159187c  world_gen
 */
