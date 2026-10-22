/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412f8c0 (ELF vaddr 0x402f8c0)
 * Label: callee-of:0xd1d5450
 * Body:  [[0412f8c0, 0412fa52]]
 * Ghidra: FUN_0412f8c0
 */


ulong * FUN_0412f8c0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = *param_1;
  uVar8 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar8 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar7 & 1) == 0) {
    uVar9 = (ulong)((uint)(uVar7 >> 1) & 0x7f);
  }
  else {
    uVar9 = param_1[1];
  }
  if (uVar8 - uVar9 < param_3) {
    uVar1 = uVar9 + param_3;
    if (-uVar8 - 10 < uVar1 - uVar8) {
      func_0x04882e30();
      pcVar2 = (code *)swi(3);
      puVar5 = (ulong *)(*pcVar2)();
      return puVar5;
    }
    if ((uVar7 & 1) == 0) {
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar3 = (byte *)param_1[2];
    }
    uVar7 = 0xfffffffffffffff7;
    if (uVar8 < 0x7ffffffffffffff3) {
      uVar4 = uVar8 * 2;
      if (uVar8 * 2 < uVar1) {
        uVar4 = uVar1;
      }
      uVar6 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        uVar6 = (uVar4 | 7) + 1;
      }
      uVar7 = 0x17;
      if (0x16 < uVar4) {
        uVar7 = uVar6;
      }
    }
    uVar4 = func_0x0ee32660(uVar7);
    if (uVar9 != 0) {
      func_0x0eee2ee0(uVar4,pbVar3,uVar9);
    }
    func_0x0eee2f00(uVar4 + uVar9,param_2,param_3);
    if (uVar8 + 1 != 0x17) {
      FUN_0412a280(pbVar3,uVar8 + 1);
    }
    param_1[2] = uVar4;
    *param_1 = uVar7 | 1;
    param_1[1] = uVar1;
    *(undefined1 *)(uVar4 + uVar1) = 0;
  }
  else if (param_3 != 0) {
    if ((uVar7 & 1) == 0) {
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar3 = (byte *)param_1[2];
    }
    func_0x0eee2ee0(pbVar3 + uVar9,param_2,param_3);
    uVar9 = uVar9 + param_3;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)uVar9 * '\x02';
    }
    else {
      param_1[1] = uVar9;
    }
    pbVar3[uVar9] = 0;
  }
  return param_1;
}


