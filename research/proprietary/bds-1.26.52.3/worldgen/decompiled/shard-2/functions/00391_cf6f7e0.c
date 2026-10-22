/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd06f7e0 (ELF vaddr 0xcf6f7e0)
 * Label: caller-of-seed
 * Body:  [[0d06f7e0, 0d06f8fb]]
 * Ghidra: FUN_0d06f7e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d06f7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_EAX;
  int iVar1;
  long lVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar2 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar2 = 8;
  }
  uStack_18 = in_EAX;
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
  *param_1 = &UNK_0f449bc0;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  _uStack_18 = CONCAT44(500,uStack_18);
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
    func_0x0c673e90(param_1 + 5,(long)&uStack_18 + 2,&UNK_0d06f920,&uStack_14);
  }
  func_0x0d06f9d0(param_1,&UNK_0d06fb50,0,0);
  func_0x0d070010(param_1,&UNK_0d070190,0,0);
  return;
}


