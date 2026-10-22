/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc64ed00 (ELF vaddr 0xc54ed00)
 * Label: caller-of-seed
 * Body:  [[0c64ed00, 0c64eddc]]
 * Ghidra: FUN_0c64ed00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c64ed00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f3a4990;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e5300;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined2 *)((long)param_1 + 0x131) = 0xb0f;
  param_1[0x21] = 0x20004;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  lVar1 = func_0x0c64edf0(param_1);
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &UNK_0c64eee0;
  }
  func_0x0c64eff0(param_1,&UNK_0c64f170,0,0);
  func_0x0c64f1e0(param_1,&UNK_0c64f360,0,0);
  return;
}


