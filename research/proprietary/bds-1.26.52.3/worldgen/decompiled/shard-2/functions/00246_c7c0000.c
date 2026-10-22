/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8c0000 (ELF vaddr 0xc7c0000)
 * Label: callee-of:0x5253d60
 * Body:  [[0c8c0000, 0c8c00be]]
 * Ghidra: FUN_0c8c0000
 */


long FUN_0c8c0000(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbStack_30;
  byte *pbStack_28;
  
  func_0x0c6c5aa0(&pbStack_30);
  if (pbStack_30 != (byte *)0x0) {
    lVar3 = func_0x0c6e93f0();
    pbVar2 = pbStack_30;
    pbStack_30 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) {
      func_0x04abe980(pbVar2);
      func_0x0412a280(pbVar2,0xa8);
    }
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  if ((*param_1 & 1) == 0) {
    pbStack_30 = param_1 + 1;
    bVar1 = *param_2;
  }
  else {
    pbStack_30 = *(byte **)(param_1 + 0x10);
    bVar1 = *param_2;
  }
  if ((bVar1 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  else {
    pbStack_28 = *(byte **)(param_2 + 0x10);
  }
  func_0x0c5c4ec0(1,3,5,&UNK_01456d5a,&pbStack_30,&pbStack_28);
  return 0;
}


