/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xea888c0
 * Label: callee-of:0xea7cb80
 * Body:  [[0ea888c0, 0ea889c6]]
 * Ghidra: FUN_0ea888c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ea888c0(void)

{
  int iVar1;
  undefined8 in_RAX;
  
  if (DAT_0f76a3a8 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f76a3a8);
    if (iVar1 != 0) {
      func_0x0ea889d0();
      func_0x0410844d(&DAT_0f76a3a8);
    }
  }
  if (DAT_0f76a3a8 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f76a3a8);
    if (iVar1 != 0) {
      func_0x0ea889d0();
      func_0x0410844d(&DAT_0f76a3a8);
    }
  }
  _DAT_0f76a308 = &DAT_0f76a390;
  _DAT_0f76a310 = _DAT_0f76a394;
  _DAT_0f76a318 = 0;
  _DAT_0f76a320 = 0x80;
  _DAT_0f76a328 = 0x268;
  _DAT_0f76a330 = &UNK_0ea88800;
  _DAT_0f76a338 = &UNK_0ea88a50;
  _DAT_0f76a340 = 0;
  _DAT_0f76a348 = &UNK_0ea89ad0;
  _DAT_0f76a350 = 0;
  uRam000000000f76a358 = 0;
  _DAT_0f76a35c = 0;
  uRam000000000f76a360 = 0;
  uRam000000000f76a364 = 0;
  _DAT_0f76a370 = 0;
  uRam000000000f76a378 = 0;
  _DAT_0f76a380 = 0;
  return in_RAX;
}


