/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d610 (ELF vaddr 0x402d610)
 * Label: callee-of:0x517c470
 * Body:  [[0412d610, 0412d675] [0412d6b0, 0412d6b4] [04136a10, 04136a14] [0eee3140, 0eee3145]]
 * Ghidra: FUN_0412d610
 */


/* WARNING: Possible PIC construction at 0x0412d642: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0412d647) */

void FUN_0412d610(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  func_0x0412d680();
  uVar1 = (*(uint *)(param_1 + 0x88) & 0x7fffffff) - 1;
  uVar2 = *(uint *)(param_1 + 0x88) & 0x80000000 | uVar1;
  *(uint *)(param_1 + 0x88) = uVar2;
  if (((int)uVar2 < 0) && (uVar1 == 0)) {
    func_0x0412d6b0(param_1);
    (*(code *)PTR_pthread_cond_signal_0f546638)(param_1 + 0x58);
    return;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(param_1);
  return;
}


