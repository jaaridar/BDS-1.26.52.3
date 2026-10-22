/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd057530 (ELF vaddr 0xcf57530)
 * Label: caller-of-seed
 * Body:  [[0d057530, 0d0575ee]]
 * Ghidra: FUN_0d057530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d057530(undefined8 *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = in_EAX;
  func_0x0c6c7010();
  *param_1 = &UNK_0f441808;
  _uStack_18 = CONCAT44(10,uStack_18);
  if (DAT_0f559fd0 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f559fd0);
    if (iVar1 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f559fc8 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f559fd0);
    }
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    uStack_18 = CONCAT22(_DAT_0f559fc8,(undefined2)uStack_18);
    func_0x0c673e90(param_1 + 5,(long)&uStack_18 + 2,&UNK_0d057610,&uStack_14);
  }
  *(undefined1 *)((long)param_1 + 0x131) = 0x3d;
  func_0x0d0576d0(param_1,&UNK_0d057850,0,0);
  func_0x0d057970(param_1,&UNK_0d057af0,0,0);
  return;
}


