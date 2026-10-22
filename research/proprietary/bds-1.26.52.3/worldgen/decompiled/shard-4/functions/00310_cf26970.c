/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd026970 (ELF vaddr 0xcf26970)
 * Label: caller-of-seed
 * Body:  [[0d026970, 0d026a61]]
 * Ghidra: FUN_0d026970
 */


void FUN_0d026970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f4360d0;
  *(char *)(param_1 + 0x75) = (char)param_4;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  if (param_1 + 0x76 != param_6) {
    if ((*(byte *)(param_6 + 1) & 1) == 0) {
      param_1[0x79] = param_6[3];
      uVar2 = param_6[2];
      param_1[0x77] = param_6[1];
      param_1[0x78] = uVar2;
    }
    else {
      func_0x04885070(param_1 + 0x77,param_6[3],param_6[2]);
      param_4 = (uint)*(byte *)(param_1 + 0x75);
    }
  }
  param_1[0x76] = *param_6;
  bVar3 = (param_4 & 1) == 0;
  uVar1 = 0xf;
  if (bVar3) {
    uVar1 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x136) = uVar1;
  *(ushort *)((long)param_1 + 0x133) =
       (short)((param_4 & 1) << 0xc) + 0x400 +
       ((ushort)((param_4 & 1) << 9) | *(ushort *)((long)param_1 + 0x133) & 0xe9ff);
  uVar2 = 2;
  if (!bVar3) {
    uVar2 = 0x40000;
  }
  param_1[0x21] = uVar2;
  return;
}


