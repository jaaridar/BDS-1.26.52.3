/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6779d0 (ELF vaddr 0xc5779d0)
 * Label: caller-of-seed
 * Body:  [[0c6779d0, 0c677b32]]
 * Ghidra: FUN_0c6779d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6779d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  *param_1 = &UNK_0f3acf88;
  param_1[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c66ed20(param_1,0x429,0,0);
  *param_1 = &UNK_0f3b0540;
  param_1[0x31] = (ulong)_DAT_01198a9c;
  *(undefined4 *)(param_1 + 0x32) = 0x3dcccccd;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e53e0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f666666;
  _uStack_18 = CONCAT44(0x96,uStack_18);
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
    func_0x0c673e90(param_1 + 5,(long)&uStack_18 + 2,&UNK_0c677b50,&uStack_14);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14e53e0  fff?
 */
