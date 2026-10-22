/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53511f0 (ELF vaddr 0x52511f0)
 * Label: OverworldGenerationRulesBiomeComponentGlue::vslot2
 * Body:  [[053511f0, 053516c0]]
 * Ghidra: wg_OverworldGenerationRulesBiomeComponentGlue__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_OverworldGenerationRulesBiomeComponentGlue__vslot2
                (long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  ulong auStack_60 [3];
  undefined1 auStack_48 [24];
  
  cVar2 = *(char *)((long)param_2 + 0x24);
  puVar5 = (undefined8 *)*param_2;
  puVar4 = puVar5;
  if (cVar2 == '\x02') {
    puVar4 = param_2;
  }
  if (puVar4 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != 0x354e48fc) {
    uVar10 = param_2[5];
    lVar6 = param_2[6];
    if (lVar6 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar6 = param_2[6];
      cVar2 = *(char *)((long)param_2 + 0x24);
      puVar5 = (undefined8 *)*param_2;
    }
    if (cVar2 == '\x02') {
      puVar5 = param_2;
    }
    puVar4 = (undefined8 *)func_0x0488e200(uVar10,lVar6,0x354e48fc,puVar5);
  }
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0x2d,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x2d,8);
  }
  *puVar5 = 0x24;
  uVar10 = _UNK_01e366e8;
  puVar5[1] = _DAT_01e366e0;
  puVar5[2] = uVar10;
  uVar10 = _UNK_01e366f8;
  puVar5[3] = _DAT_01e366f0;
  puVar5[4] = uVar10;
  *(undefined4 *)(puVar5 + 5) = _DAT_01e36700;
  *(undefined1 *)((long)puVar5 + 0x2c) = 0;
  auStack_60[0] = (ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  puStack_78 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff00);
  uStack_68 = 0;
  func_0x0eeb79f0(auStack_48,auStack_60);
  if ((auStack_60[0] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_60[0] & 0xff00ffffffffffff) - 8);
  }
  if (*(char *)(puVar4 + 4) == '\x01') {
    puStack_78 = &UNK_01649600;
    puVar1 = puStack_78;
    uStack_70 = 0x14;
    uStack_68 = 1;
    uStack_80 = 0;
    uVar10 = CONCAT71(uStack_67,1);
    puStack_78._0_4_ = 0x1649600;
    uStack_70._0_4_ = 0x14;
    uVar8 = puStack_78._0_4_;
    uVar9 = (undefined4)uStack_70;
    puStack_78 = puVar1;
    func_0x0eeb79f0(auStack_60,&uStack_80);
    if ((uStack_80 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
    }
    cVar2 = func_0x05350ab0(param_1 + 8,puVar4[1],puVar4[2],param_3,param_5,param_6,uVar8,uVar9,
                            uVar10);
    func_0x0eeb81b0(auStack_60);
    if (cVar2 != '\0') goto LAB_053513cf;
LAB_0535168a:
    uVar7 = 0;
  }
  else {
LAB_053513cf:
    if (*(char *)(puVar4 + 8) == '\x01') {
      puStack_78 = &UNK_01649620;
      puVar1 = puStack_78;
      uStack_70 = 0x15;
      uStack_68 = 1;
      uStack_80 = 0;
      uVar10 = CONCAT71(uStack_67,1);
      puStack_78._0_4_ = 0x1649620;
      uStack_70._0_4_ = 0x15;
      uVar8 = puStack_78._0_4_;
      uVar9 = (undefined4)uStack_70;
      puStack_78 = puVar1;
      func_0x0eeb79f0(auStack_60,&uStack_80);
      if ((uStack_80 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
      }
      cVar2 = func_0x05350ab0(param_1 + 0x20,puVar4[5],puVar4[6],param_3,param_5,param_6,uVar8,uVar9
                              ,uVar10);
      func_0x0eeb81b0(auStack_60);
      if (cVar2 == '\0') goto LAB_0535168a;
    }
    if (*(char *)(puVar4 + 0xc) == '\x01') {
      puStack_78 = &UNK_01649640;
      puVar1 = puStack_78;
      uStack_70 = 0x15;
      uStack_68 = 1;
      uStack_80 = 0;
      uVar10 = CONCAT71(uStack_67,1);
      puStack_78._0_4_ = 0x1649640;
      uStack_70._0_4_ = 0x15;
      uVar8 = puStack_78._0_4_;
      uVar9 = (undefined4)uStack_70;
      puStack_78 = puVar1;
      func_0x0eeb79f0(auStack_60,&uStack_80);
      if ((uStack_80 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
      }
      for (lVar6 = puVar4[9]; lVar6 != puVar4[10]; lVar6 = lVar6 + 0x10) {
        if (((*(int *)(lVar6 + 4) != 0) || (*(int *)(lVar6 + 0xc) != 1)) ||
           (*(int *)(lVar6 + 8) == 0)) {
          func_0x05351760(1,3,5,&UNK_0147949b,param_5,param_6,uVar8,uVar9,uVar10);
          func_0x0eeb81b0(auStack_60);
          goto LAB_0535168a;
        }
      }
      func_0x0eeb81b0(auStack_60);
    }
    if (*(char *)(puVar4 + 0x10) == '\x01') {
      puStack_78 = &UNK_01649660;
      puVar1 = puStack_78;
      uStack_70 = 0x14;
      uStack_68 = 1;
      uStack_80 = 0;
      uVar10 = CONCAT71(uStack_67,1);
      puStack_78._0_4_ = 0x1649660;
      uStack_70._0_4_ = 0x14;
      uVar8 = puStack_78._0_4_;
      uVar9 = (undefined4)uStack_70;
      puStack_78 = puVar1;
      func_0x0eeb79f0(auStack_60,&uStack_80);
      if ((uStack_80 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
      }
      cVar2 = func_0x05350ab0(param_1 + 0x38,puVar4[0xd],puVar4[0xe],param_3,param_5,param_6,uVar8,
                              uVar9,uVar10);
      func_0x0eeb81b0(auStack_60);
      if (cVar2 == '\0') goto LAB_0535168a;
    }
    if (*(char *)(puVar4 + 0x14) == '\x01') {
      puStack_78 = &UNK_01649680;
      puVar1 = puStack_78;
      uStack_70 = 0x14;
      uStack_68 = 1;
      uStack_80 = 0;
      uVar10 = CONCAT71(uStack_67,1);
      puStack_78._0_4_ = 0x1649680;
      uStack_70._0_4_ = 0x14;
      uVar8 = puStack_78._0_4_;
      uVar9 = (undefined4)uStack_70;
      puStack_78 = puVar1;
      func_0x0eeb79f0(auStack_60,&uStack_80);
      if ((uStack_80 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
      }
      uVar3 = func_0x05350ab0(param_1 + 0x50,puVar4[0x11],puVar4[0x12],param_3,param_5,param_6,uVar8
                              ,uVar9,uVar10);
      param_3 = (ulong)uVar3;
      func_0x0eeb81b0(auStack_60);
      if ((char)uVar3 == '\0') goto LAB_0535168a;
    }
    uVar7 = CONCAT71((int7)(param_3 >> 8),1);
  }
  func_0x0eeb81b0(auStack_48);
  return uVar7 & 0xffffffff;
}



/* ---- referenced strings ----
 * 0x1e366e0  minecraft:overworld_generation_rules
 * 0x1e366f0  rld_generation_rules
 * 0x1e36700  ules
 */
