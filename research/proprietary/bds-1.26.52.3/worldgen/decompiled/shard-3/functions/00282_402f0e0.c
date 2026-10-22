/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412f0e0 (ELF vaddr 0x402f0e0)
 * Label: callee-of:0xce76060
 * Body:  [[0412f0e0, 0412f311]]
 * Ghidra: FUN_0412f0e0
 */


ulong * FUN_0412f0e0(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar10 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar10 = param_1[1];
  }
  if (param_2 <= uVar10) {
    uVar6 = *param_1;
    uVar9 = 0x16;
    if ((bVar2 & 1) != 0) {
      uVar9 = (uVar6 & 0xfffffffffffffffe) - 1;
    }
    if (uVar9 - uVar10 < param_4) {
      uVar1 = uVar10 + param_4;
      if (-uVar9 - 10 < uVar1 - uVar9) goto LAB_0412f30c;
      if ((uVar6 & 1) == 0) {
        pbVar3 = (byte *)((long)param_1 + 1);
      }
      else {
        pbVar3 = (byte *)param_1[2];
      }
      uVar6 = 0xfffffffffffffff7;
      if (uVar9 < 0x7ffffffffffffff3) {
        uVar5 = uVar9 * 2;
        if (uVar9 * 2 < uVar1) {
          uVar5 = uVar1;
        }
        uVar8 = 0x1a;
        if ((uVar5 | 7) != 0x17) {
          uVar8 = (uVar5 | 7) + 1;
        }
        uVar6 = 0x17;
        if (0x16 < uVar5) {
          uVar6 = uVar8;
        }
      }
      uVar5 = func_0x0ee32660(uVar6);
      if (param_2 != 0) {
        memmove(uVar5,pbVar3);
      }
      func_0x0eee2f00(uVar5 + param_2,param_3,param_4);
      if (uVar10 - param_2 != 0) {
        memmove(uVar5 + param_2 + param_4,pbVar3 + param_2,uVar10 - param_2);
      }
      if (uVar9 + 1 != 0x17) {
        func_0x0412a280(pbVar3,uVar9 + 1);
      }
      param_1[2] = uVar5;
      *param_1 = uVar6 | 1;
      param_1[1] = uVar1;
      *(undefined1 *)(uVar5 + uVar1) = 0;
    }
    else if (param_4 != 0) {
      if ((uVar6 & 1) == 0) {
        pbVar3 = (byte *)((long)param_1 + 1);
      }
      else {
        pbVar3 = (byte *)param_1[2];
      }
      if (uVar10 != param_2) {
        uVar6 = 0;
        if (param_3 < pbVar3 + uVar10) {
          uVar6 = param_4;
        }
        if (param_3 < pbVar3 + param_2) {
          uVar6 = 0;
        }
        param_3 = param_3 + uVar6;
        memmove(pbVar3 + param_2 + param_4);
      }
      memmove(pbVar3 + param_2,param_3,param_4);
      uVar10 = uVar10 + param_4;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)uVar10 * '\x02';
      }
      else {
        param_1[1] = uVar10;
      }
      pbVar3[uVar10] = 0;
    }
    return param_1;
  }
  func_0x04882ee0();
LAB_0412f30c:
  func_0x04882e30();
  pcVar4 = (code *)swi(3);
  puVar7 = (ulong *)(*pcVar4)();
  return puVar7;
}


