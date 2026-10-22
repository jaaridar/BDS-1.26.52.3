/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd005bb0 (ELF vaddr 0xcf05bb0)
 * Label: callee-of:0x5a1f120
 * Body:  [[0d005bb0, 0d005c98]]
 * Ghidra: FUN_0d005bb0
 */


void FUN_0d005bb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined8 uStack_48;
  ulong auStack_40 [4];
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f42eef8;
  param_1[0x75] = param_4;
  *(undefined1 *)(param_1 + 0x76) = param_5;
  *(undefined1 *)((long)param_1 + 0x3b1) = param_6;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  *(undefined1 *)((long)param_1 + 0x132) = *(undefined1 *)(param_4 + 0x132);
  param_1[0x21] = 1;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  uStack_48 = 0;
  auStack_40[0] = 0;
  auStack_40[3] = 0;
  FUN_0412f5e0(auStack_40,&UNK_011cb559,0x1b);
  uStack_48 = 0xbba4bd8c77530dfc;
  func_0x0c6cf060(param_1,&uStack_48);
  if ((auStack_40[0] & 1) != 0) {
    func_0x0412a280(auStack_40[2],auStack_40[0] & 0xfffffffffffffffe);
  }
  return;
}


