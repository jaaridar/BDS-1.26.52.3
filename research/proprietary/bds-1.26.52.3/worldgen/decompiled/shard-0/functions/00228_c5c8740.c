/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c8740 (ELF vaddr 0xc5c8740)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c6c8740, 0c6c87f1]]
 * Ghidra: FUN_0c6c8740
 */


ulong * FUN_0c6c8740(ulong *param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar4 = *param_2;
  lVar2 = param_2[1];
  bVar9 = (*param_3 & 1) != 0;
  pbVar7 = param_3 + 1;
  if (bVar9) {
    pbVar7 = *(byte **)(param_3 + 0x10);
  }
  uVar8 = (ulong)(*param_3 >> 1);
  if (bVar9) {
    uVar8 = *(ulong *)(param_3 + 8);
  }
  uVar1 = uVar8 + lVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar1 < 0xfffffffffffffff8) {
    if (0x16 < uVar1) {
      uVar6 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        uVar6 = uVar1 | 7;
      }
      func_0x0412f770(param_1,uVar6);
    }
    func_0x0412f8c0(param_1,uVar4,lVar2);
    func_0x0412f8c0(param_1,pbVar7,uVar8);
    return param_1;
  }
  uVar4 = func_0x04882e30();
  if ((*param_1 & 1) != 0) {
    thunk_FUN_0ee326a0(param_1[2],*param_1 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar4);
  pcVar3 = (code *)swi(3);
  puVar5 = (ulong *)(*pcVar3)();
  return puVar5;
}


