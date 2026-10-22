/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb8502f0
 * Label: string:Custom biome source with provided ID not found
 * Body:  [[0b8502f0, 0b850334] [0d8543b0, 0d85445b]]
 * Ghidra: FUN_0b8502f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b8502f0(undefined8 param_1,int param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long unaff_RBX;
  long lVar7;
  uint in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined1 uStack_19;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  piVar2 = (int *)(unaff_RBX + 0x48 + param_3);
  *piVar2 = *piVar2 + param_2;
  func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffe);
  uVar6 = func_0x0eee2d70();
  uVar6 = func_0x0eee2d70(uVar6);
  uVar6 = func_0x04882e20(uVar6);
  uVar6 = func_0x04882e20(uVar6);
  func_0x04882e20(uVar6);
  lVar7 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar7 == 0) {
    func_0x048b0de0(&uStack_18,&uStack_19);
    _DAT_0f54fd90 = (undefined4)uStack_18;
    uRam000000000f54fd94 = uStack_18._4_4_;
    uVar4 = (undefined4)uStack_10;
    uVar5 = uStack_10._4_4_;
    uStack_18 = 0;
    uStack_10 = (long *)0x0;
    plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar5;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    plVar3 = uStack_10;
    if (uStack_10 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_10 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_10 + 0x10))(uStack_10);
        func_0x0412c2d0(plVar3);
      }
    }
    lVar7 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  func_0x048b2190(lVar7);
  return;
}


