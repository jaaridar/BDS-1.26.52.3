/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4167a20 (ELF vaddr 0x4067a20)
 * Label: callee-of:0x4de9260
 * Body:  [[04167a20, 04167a37]]
 * Ghidra: FUN_04167a20
 */


void FUN_04167a20(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0xf5478c0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}


