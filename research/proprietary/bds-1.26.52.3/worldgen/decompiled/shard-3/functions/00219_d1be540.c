/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2be540 (ELF vaddr 0xd1be540)
 * Label: br::worldgen::processors::ProtectedBlock::vslot2
 * Body:  [[0d2be540, 0d2be5aa]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot2
 */


undefined8 *
wg_br__worldgen__processors__ProtectedBlock__vslot2(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 *in_stack_00000018;
  
  uVar7 = (**(code **)(*param_3 + 0x10))(param_3,in_stack_00000018);
  cVar5 = func_0x0c8338a0(uVar7,param_2 + 8);
  if (cVar5 == '\0') {
    uVar7 = *in_stack_00000018;
    uVar3 = in_stack_00000018[1];
    uVar4 = in_stack_00000018[3];
    param_1[2] = in_stack_00000018[2];
    param_1[3] = uVar4;
    *param_1 = uVar7;
    param_1[1] = uVar3;
    lVar2 = in_stack_00000018[5];
    uVar7 = in_stack_00000018[5];
    param_1[4] = in_stack_00000018[4];
    param_1[5] = uVar7;
    uVar6 = 1;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
  }
  else {
    *(undefined1 *)param_1 = 0;
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar6;
  return param_1;
}


