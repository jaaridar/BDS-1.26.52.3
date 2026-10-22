/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412f5e0 (ELF vaddr 0x402f5e0)
 * Label: callee-of:0xe3f1ef0
 * Body:  [[0412f5e0, 0412f714]]
 * Ghidra: FUN_0412f5e0
 */


ulong * FUN_0412f5e0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = *param_1;
  uVar8 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar8 = (uVar2 & 0xfffffffffffffffe) - 1;
  }
  if (uVar8 < param_3) {
    if (-uVar8 - 10 < param_3 - uVar8) {
      func_0x04882e30();
      pcVar1 = (code *)swi(3);
      puVar6 = (ulong *)(*pcVar1)();
      return puVar6;
    }
    if ((uVar2 & 1) == 0) {
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar3 = (byte *)param_1[2];
    }
    uVar2 = 0xfffffffffffffff7;
    if (uVar8 < 0x7ffffffffffffff3) {
      uVar4 = uVar8 * 2;
      if (uVar8 * 2 < param_3) {
        uVar4 = param_3;
      }
      uVar7 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        uVar7 = (uVar4 | 7) + 1;
      }
      uVar2 = 0x17;
      if (0x16 < uVar4) {
        uVar2 = uVar7;
      }
    }
    pbVar5 = (byte *)func_0x0ee32660(uVar2);
    memcpy(pbVar5,param_2,param_3);
    if (uVar8 + 1 != 0x17) {
      func_0x0412a280(pbVar3,uVar8 + 1);
    }
    param_1[2] = (ulong)pbVar5;
    *param_1 = uVar2 | 1;
  }
  else {
    if ((uVar2 & 1) == 0) {
      pbVar5 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar5 = (byte *)param_1[2];
    }
    if (param_3 != 0) {
      func_0x0eee2ee0(pbVar5,param_2,param_3);
      uVar2 = (ulong)(byte)*param_1;
    }
    if ((uVar2 & 1) == 0) {
      *(char *)param_1 = (char)param_3 * '\x02';
      goto LAB_0412f6f8;
    }
  }
  param_1[1] = param_3;
LAB_0412f6f8:
  pbVar5[param_3] = 0;
  return param_1;
}


