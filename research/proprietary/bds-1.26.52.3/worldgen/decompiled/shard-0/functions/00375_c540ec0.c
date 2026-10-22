/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc640ec0 (ELF vaddr 0xc540ec0)
 * Label: caller-of-seed
 * Body:  [[0c640ec0, 0c640f3d]]
 * Ghidra: FUN_0c640ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c640ec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f39e0d0;
  param_1[0x75] = param_4;
  *(undefined4 *)(param_1 + 0x76) = (undefined4)param_7;
  *(undefined4 *)((long)param_1 + 0x3b4) = param_7._4_4_;
  *(undefined4 *)(param_1 + 0x77) = (undefined4)param_8;
  *(undefined4 *)((long)param_1 + 0x3bc) = param_8._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)param_9;
  *(undefined4 *)((long)param_1 + 0x3c4) = param_9._4_4_;
  *(undefined4 *)(param_1 + 0x79) = (undefined4)param_10;
  *(undefined4 *)((long)param_1 + 0x3cc) = param_10._4_4_;
  *(undefined4 *)(param_1 + 0x7a) = param_11;
  func_0x0c640f60(param_1,&UNK_0c6410e0,0,0);
  return;
}


