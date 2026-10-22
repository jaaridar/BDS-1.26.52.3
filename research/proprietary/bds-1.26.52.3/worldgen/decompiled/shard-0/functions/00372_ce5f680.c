/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf5f680 (ELF vaddr 0xce5f680)
 * Label: caller-of-seed
 * Body:  [[0cf5f680, 0cf5f786]]
 * Ghidra: FUN_0cf5f680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf5f680(undefined4 param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  int in_R8D;
  undefined1 in_R9B;
  
  func_0x0c6c7010();
  *param_3 = &UNK_0f3acf88;
  param_3[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_3 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_3 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_3 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)param_3 + 0x136) = 0;
  *(byte *)((long)param_3 + 0x134) = *(byte *)((long)param_3 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_3 + 0x132) = 0xb;
  param_3[0x21] = 0;
  *(undefined4 *)((long)param_3 + 300) = 0x3f800000;
  func_0x0c66ed20(param_3,0x429,0,0);
  *param_3 = &UNK_0f41c5b8;
  iVar1 = 1;
  if (1 < in_R8D) {
    iVar1 = in_R8D;
  }
  *(int *)(param_3 + 0x75) = iVar1 + -1;
  *(undefined1 *)((long)param_3 + 0x3ac) = in_R9B;
  *(undefined4 *)(param_3 + 0x76) = param_1;
  *(float *)((long)param_3 + 0x3b4) = param_2;
  if ((param_2 != _DAT_011983f0) || (NAN(param_2) || NAN(_DAT_011983f0))) {
    lVar2 = func_0x0cf5f7a0(param_3,&UNK_0cf5f920,0,0);
    *(undefined1 *)(lVar2 + 0x60) = 0;
  }
  return;
}


