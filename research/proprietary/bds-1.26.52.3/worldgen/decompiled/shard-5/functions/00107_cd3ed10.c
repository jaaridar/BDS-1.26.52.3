/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ed10 (ELF vaddr 0xcd3ed10)
 * Label: JigsawBlockActor::vslot55
 * Body:  [[0ce3ed10, 0ce3ed8b]]
 * Ghidra: wg_JigsawBlockActor__vslot55
 */


undefined8 * wg_JigsawBlockActor__vslot55(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  pbVar1 = (byte *)(**(code **)(*param_2 + 0x1a0))(param_2);
  if ((*pbVar1 & 1) == 0) {
    if (*pbVar1 >> 1 == 0) goto LAB_0ce3ed5a;
  }
  else if (*(long *)(pbVar1 + 8) == 0) {
LAB_0ce3ed5a:
    (**(code **)(*param_2 + 0x180))(&uStack_28,param_2);
    param_1[2] = uStack_18;
    *param_1 = uStack_28;
    param_1[1] = uStack_20;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    return param_1;
  }
  uVar2 = (**(code **)(*param_2 + 0x1a0))(param_2);
  FUN_09af1a50(param_1,uVar2);
  return param_1;
}


