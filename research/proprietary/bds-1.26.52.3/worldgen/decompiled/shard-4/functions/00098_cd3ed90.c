/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ed90 (ELF vaddr 0xcd3ed90)
 * Label: JigsawBlockActor::vslot12
 * Body:  [[0ce3ed90, 0ce3edfe]]
 * Ghidra: wg_JigsawBlockActor__vslot12
 */


long wg_JigsawBlockActor__vslot12(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2 + -0x30;
  pbVar2 = (byte *)(**(code **)(*(long *)(param_2 + -0x30) + 0x1a0))(lVar1);
  if ((*pbVar2 & 1) == 0) {
    lVar4 = *(long *)(param_2 + -0x30);
    if (*pbVar2 >> 1 == 0) goto LAB_0ce3ede2;
  }
  else {
    lVar4 = *(long *)(param_2 + -0x30);
    if (*(long *)(pbVar2 + 8) == 0) {
LAB_0ce3ede2:
      (**(code **)(lVar4 + 0x180))(param_1,lVar1);
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      return param_1;
    }
  }
  uVar3 = (**(code **)(lVar4 + 0x1a0))(lVar1);
  func_0x09af1a50(param_1,uVar3);
  return param_1;
}


