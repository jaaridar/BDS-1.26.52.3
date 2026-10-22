/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ec40 (ELF vaddr 0xcd3ec40)
 * Label: JigsawBlockActor::vslot10
 * Body:  [[0ce3ec40, 0ce3ece8]]
 * Ghidra: wg_JigsawBlockActor__vslot10
 */


void wg_JigsawBlockActor__vslot10(long param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar7 = (byte *)(param_1 + 0x58);
  if (pbVar7 != param_2) {
    bVar1 = *param_2;
    if ((*pbVar7 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined4 *)(param_2 + 4);
        uVar3 = *(undefined4 *)(param_2 + 8);
        uVar4 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)pbVar7 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 0x5c) = uVar2;
        *(undefined4 *)(param_1 + 0x60) = uVar3;
        *(undefined4 *)(param_1 + 100) = uVar4;
      }
      else {
        func_0x04885070(pbVar7,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      bVar8 = (bVar1 & 1) != 0;
      pbVar5 = param_2 + 1;
      if (bVar8) {
        pbVar5 = *(byte **)(param_2 + 0x10);
      }
      uVar6 = (ulong)(bVar1 >> 1);
      if (bVar8) {
        uVar6 = *(ulong *)(param_2 + 8);
      }
      func_0x04885120(pbVar7,pbVar5,uVar6);
    }
  }
  FUN_048b4400(param_1 + 0x70,param_2 + 0x18);
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    **(undefined1 **)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x90) = 0;
  return;
}


