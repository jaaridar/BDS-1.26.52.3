/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa237580
 * Label: string:JigsawStructurePlaceOptions
 * Body:  [[0a237580, 0a23762c]]
 * Ghidra: FUN_0a237580
 */


void FUN_0a237580(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  for (; param_3 != param_5; param_3 = param_3 + -1) {
    uVar1 = *(uint *)(*param_2 + -8 + param_3 * 8);
    lVar2 = *(long *)(*(long *)(param_1 + 8) + (ulong)(uVar1 >> 0xc) * 8);
    uVar5 = (ulong)(uVar1 & 0xfff);
    uVar3 = *(ulong *)(lVar2 + uVar5 * 8);
    lVar4 = *(long *)(*(long *)(param_1 + 0x50) + (uVar3 >> 7 & 0x1ffffff) * 8);
    *(undefined8 *)(lVar2 + uVar5 * 8) = 0xffffffffffffff;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = uVar3 & 0xffffffff;
    *(ulong *)(*(long *)(param_1 + 0x20) + (uVar3 & 0xffffffff) * 8) =
         (ulong)uVar1 | 0xffffff00000000;
    func_0x0a225fd0((ulong)(((uint)uVar3 & 0x7f) << 7) + lVar4);
  }
  return;
}


