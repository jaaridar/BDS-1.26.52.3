/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4353b0
 * Label: callee-of:0xe4118a0
 * Body:  [[0e435306, 0e435385] [0e4353b0, 0e4353de]]
 * Ghidra: FUN_0e4353b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4353b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_R14;
  
  func_0x0eee2f40(param_1,&DAT_0f752170,0xf53dab8);
  func_0x0410844d(0xf7521f0);
  plVar2 = (long *)(*unaff_R14 +
                   (ulong)((int)((ulong)(unaff_R14[1] - *unaff_R14) >> 3) - 1U &
                          *(uint *)(_DAT_0f752170 + 4)) * 8);
  do {
    lVar1 = *plVar2;
    if (lVar1 == -1) break;
    plVar2 = (long *)(unaff_R14[3] + lVar1 * 0x18);
  } while (*(uint *)(unaff_R14[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f752170 + 4));
  func_0x0ed76130();
  return;
}


