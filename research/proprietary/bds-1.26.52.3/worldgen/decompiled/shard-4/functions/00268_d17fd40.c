/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd27fd40 (ELF vaddr 0xd17fd40)
 * Label: callee-of:0xc95fb20
 * Body:  [[0d27fd40, 0d27fec1]]
 * Ghidra: FUN_0d27fd40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d27fd40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f600000;
  func_0x0d29af10(param_1 + 2,8);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((long)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f600000;
  func_0x048af640(param_1 + 0x1d,8);
  *(undefined8 *)((long)param_1 + 0x12a) = 0;
  *(undefined8 *)((long)param_1 + 0x132) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x1a] = &UNK_0f534768;
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UNK_0ef44a60;
  *(undefined1 *)(puVar1 + 3) = 1;
  param_1[0x1b] = puVar1 + 3;
  param_1[0x1c] = puVar1;
  param_1[0x1a] = &UNK_0ef471f0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x2d] = 0;
  return;
}


