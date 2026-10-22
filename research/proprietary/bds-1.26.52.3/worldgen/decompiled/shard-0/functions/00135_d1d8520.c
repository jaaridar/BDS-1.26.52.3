/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d8520 (ELF vaddr 0xd1d8520)
 * Label: br::worldgen::processors::Gravity::vslot2
 * Body:  [[0d2d8520, 0d2d86a8]]
 * Ghidra: wg_br__worldgen__processors__Gravity__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_br__worldgen__processors__Gravity__vslot2
          (undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
          long param_6,undefined8 param_7,undefined8 param_8,undefined4 *param_9)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(char *)(param_2 + 8) == '\x02') {
    puStack_50 = &UNK_0cad6eb0;
  }
  else {
    puStack_50 = &UNK_0cad6e90;
  }
  uVar3 = *param_9;
  uVar4 = param_9[2];
  puStack_58 = &UNK_0cb142f0;
  sVar8 = (**(code **)(*param_3 + 0x180))(param_3,&puStack_58,uVar3);
  iVar5 = *(int *)(param_2 + 0xc);
  iVar6 = *(int *)(param_6 + 4);
  uStack_48 = param_9[4];
  uStack_44 = param_9[5];
  uStack_40 = param_9[6];
  uStack_3c = param_9[7];
  uVar7 = *(undefined8 *)(param_9 + 8);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *puVar9 = &UNK_0f47e0b0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[1] = puVar9 + 2;
  func_0x0d6bd5f0(puVar9,uVar7);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f0c2950;
  plVar10[3] = (long)puVar9;
  *param_1 = CONCAT44(sVar8 + iVar5 + iVar6,uVar3);
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)(param_1 + 2) = uStack_48;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_44;
  *(undefined4 *)(param_1 + 3) = uStack_40;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_3c;
  param_1[4] = puVar9;
  param_1[5] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 6) = 1;
  LOCK();
  plVar1 = plVar10 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  return param_1;
}


