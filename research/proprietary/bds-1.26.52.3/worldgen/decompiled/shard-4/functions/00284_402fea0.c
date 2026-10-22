/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412fea0 (ELF vaddr 0x402fea0)
 * Label: callee-of:0xd1d5450
 * Body:  [[0412fea0, 0412ffb6]]
 * Ghidra: FUN_0412fea0
 */


void FUN_0412fea0(ulong *param_1,byte param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    if (bVar1 != 0x2c) {
      uVar6 = (ulong)(bVar1 >> 1);
      *(byte *)param_1 = bVar1 + 2;
      pbVar7 = (byte *)((long)param_1 + 1);
      goto LAB_0412ff98;
    }
    pbVar7 = (byte *)((long)param_1 + 1);
    uVar3 = 0x16;
    uVar6 = 0x30;
LAB_0412ff2e:
    uVar5 = uVar3 + 1;
LAB_0412ff50:
    uVar4 = func_0x0ee32660(uVar6);
    func_0x0eee2ee0(uVar4,pbVar7,uVar3);
    if (uVar5 != 0x17) {
      func_0x0412a280(pbVar7,uVar5);
    }
    param_1[2] = uVar4;
    *param_1 = uVar6 | 1;
    uVar6 = uVar3;
  }
  else {
    uVar6 = param_1[1];
    uVar5 = *param_1 & 0xfffffffffffffffe;
    uVar3 = uVar5 - 1;
    if (uVar6 == uVar3) {
      if (uVar5 == 0xfffffffffffffff8) {
        func_0x04882e30();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar7 = (byte *)param_1[2];
      uVar6 = 0xfffffffffffffff7;
      if (uVar3 < 0x7ffffffffffffff3) {
        uVar6 = uVar3 * 2 | 7;
        uVar5 = 0x1a;
        if (uVar6 != 0x17) {
          uVar5 = uVar6 + 1;
        }
        uVar6 = 0x17;
        if (0xb < uVar3) {
          uVar6 = uVar5;
        }
        goto LAB_0412ff2e;
      }
      goto LAB_0412ff50;
    }
  }
  pbVar7 = (byte *)param_1[2];
  param_1[1] = uVar6 + 1;
LAB_0412ff98:
  pbVar7[uVar6] = param_2;
  pbVar7[uVar6 + 1] = 0;
  return;
}


