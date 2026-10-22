/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb0aa80 (ELF vaddr 0xca0aa80)
 * Label: caller-of-seed
 * Body:  [[0cb0aa80, 0cb0aaeb]]
 * Ghidra: FUN_0cb0aa80
 */


undefined4 * FUN_0cb0aa80(undefined4 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  func_0x0cb31410();
  uStack_20 = param_3;
  lVar7 = func_0x0caaf3d0(param_2 + 0x70,param_3,&UNK_01563a4f,&uStack_20,&uStack_21);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  if (*(long *)(param_1 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 2) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(lVar7 + 0x20);
  *(undefined4 *)(lVar7 + 0x18) = uVar3;
  *(undefined4 *)(lVar7 + 0x1c) = uVar4;
  *(undefined4 *)(lVar7 + 0x20) = uVar5;
  *(undefined4 *)(lVar7 + 0x24) = uVar6;
  if (lVar2 != 0) {
    func_0x0412c2d0();
  }
  return param_1;
}


