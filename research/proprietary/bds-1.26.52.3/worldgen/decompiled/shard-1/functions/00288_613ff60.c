/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x623ff60 (ELF vaddr 0x613ff60)
 * Label: callee-of:0xd1d87a0
 * Body:  [[0623ff60, 0623ffd1]]
 * Ghidra: FUN_0623ff60
 */


/* WARNING: Possible PIC construction at 0x0623ffb7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0623ff89: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623ffbc) */
/* WARNING: Removing unreachable block (ram,0x0623ff8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0623ff60(byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uStack_10;
  
  if ((param_1[0x48] & 1) == 0) {
    if ((param_1[0x30] & 1) == 0) {
      bVar1 = param_1[0x18];
    }
    else {
      uStack_10 = 0x623ffa5;
      in_RAX = func_0x0412a280(*(undefined8 *)(param_1 + 0x40),
                               *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffe);
      bVar1 = param_1[0x18];
    }
    if ((bVar1 & 1) == 0) {
      if ((*param_1 & 1) == 0) {
        return in_RAX;
      }
      lVar3 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x623ffbc;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x58);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x623ff8e;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


