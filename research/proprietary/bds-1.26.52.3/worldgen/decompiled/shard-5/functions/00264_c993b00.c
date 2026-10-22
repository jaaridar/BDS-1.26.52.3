/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca93b00 (ELF vaddr 0xc993b00)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0ca93b00, 0ca93b2c] [0ca93b30, 0ca93bb8] [0ca93bc0, 0ca93c2a]]
 * Ghidra: FUN_0ca93b00
 */


/* WARNING: Possible PIC construction at 0x0ca93b8b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0ca93b90) */
/* WARNING: Removing unreachable block (ram,0x0ca93ba8) */
/* WARNING: Removing unreachable block (ram,0x0ca93bc9) */
/* WARNING: Removing unreachable block (ram,0x0ca93bda) */
/* WARNING: Removing unreachable block (ram,0x0ca93bc0) */
/* WARNING: Removing unreachable block (ram,0x0ca93be6) */
/* WARNING: Removing unreachable block (ram,0x0ca93bb7) */
/* WARNING: Removing unreachable block (ram,0x0ca93bed) */
/* WARNING: Removing unreachable block (ram,0x0ca93c03) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca93b00(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x0412d680(0xf6ed8d0);
  lVar3 = _DAT_0f6ed8b0;
  lVar2 = _DAT_0f6ed8b8;
  if (_DAT_0f6ed8b0 != 0) {
    for (; lVar3 != lVar2; lVar2 = lVar2 + -0x10) {
      plVar1 = *(long **)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -8) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    _DAT_0f6ed8b8 = lVar3;
    FUN_0412a280(_DAT_0f6ed8b0,_DAT_0f6ed8c0 - _DAT_0f6ed8b0);
  }
  _DAT_0f6ed8b0 = 0;
  _DAT_0f6ed8b8 = 0;
  _DAT_0f6ed8c0 = 0;
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(0xf6ed8d0);
  return;
}


