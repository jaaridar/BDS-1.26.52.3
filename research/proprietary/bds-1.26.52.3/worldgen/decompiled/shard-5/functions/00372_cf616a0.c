/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0616a0 (ELF vaddr 0xcf616a0)
 * Label: caller-of-seed
 * Body:  [[0d0616a0, 0d061709]]
 * Ghidra: FUN_0d0616a0
 */


void FUN_0d0616a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x0cf9a5d0();
  *param_1 = &UNK_0f444b90;
  *(undefined1 *)((long)param_1 + 0x3ac) = param_4;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  func_0x0d061720(param_1,&UNK_0d0618a0,0,1);
  func_0x0cf9a230(param_1,&UNK_0cf9a3b0,0,1);
  func_0x0d061970(param_1,&UNK_0d061af0,0,0);
  return;
}


