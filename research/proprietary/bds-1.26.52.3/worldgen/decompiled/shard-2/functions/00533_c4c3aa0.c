/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c3aa0 (ELF vaddr 0xc4c3aa0)
 * Label: callee-of:0xaf95f80
 * Body:  [[0c5c3aa0, 0c5c3bcb] [0c5c3bd0, 0c5c3c56] [0c5c3c6c, 0c5c3c89]]
 * Ghidra: FUN_0c5c3aa0
 */


byte FUN_0c5c3aa0(byte *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbStack_138;
  byte *pbStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  undefined8 *puStack_108;
  byte **ppbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  uint uStack_40;
  
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0x3f800000;
  uStack_40 = 2;
  func_0x0b68d4e0(&pbStack_138,&uStack_f8,param_2);
  pbVar4 = pbStack_130;
  pbVar3 = pbStack_138;
  if (pbStack_138 == pbStack_130) {
    pbStack_120 = param_1;
    pbStack_118 = param_1;
    pbStack_110 = param_1;
    puStack_108 = &uStack_f8;
    if ((ulong)uStack_40 == 0xffffffff) {
      uVar7 = func_0x04931450();
      uVar7 = func_0x04882e20(uVar7);
      func_0x04886070(&pbStack_138);
      func_0x05472b20(&uStack_f8);
      func_0x0eee2d70(uVar7);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    ppbStack_100 = &pbStack_120;
    uVar6 = (**(code **)(&UNK_0f3957b0 + (ulong)uStack_40 * 8))(&ppbStack_100,&uStack_f8);
    param_1 = (byte *)(ulong)uVar6;
    pbVar2 = pbStack_138;
    pbVar9 = pbStack_130;
  }
  else {
    pbVar8 = pbStack_138;
    do {
      pbStack_120 = pbVar8 + 1;
      if ((*pbVar8 & 1) != 0) {
        pbStack_120 = *(byte **)(pbVar8 + 0x10);
      }
      func_0x09a3e1d0(1,3,0,&UNK_012ee1a2,&pbStack_120);
      pbVar8 = pbVar8 + 0x18;
      pbVar2 = pbStack_138;
      pbVar9 = pbStack_130;
    } while (pbVar8 != pbVar4);
  }
  pbStack_138 = pbVar2;
  if (pbVar2 != (byte *)0x0) {
    for (; pbVar2 != pbVar9; pbVar9 = pbVar9 + -0x18) {
      if ((pbVar9[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar9 + -8),*(ulong *)(pbVar9 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    func_0x0412a280(pbStack_138,lStack_128 - (long)pbStack_138);
  }
  if ((ulong)uStack_40 != 0xffffffff) {
    (**(code **)(&UNK_0f395798 + (ulong)uStack_40 * 8))(&pbStack_120,&uStack_f8);
  }
  return pbVar3 == pbVar4 & (byte)param_1;
}


