/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527aaa0 (ELF vaddr 0x517aaa0)
 * Label: callee-of:0x517a850
 * Body:  [[0527aaa0, 0527aad8]]
 * Ghidra: FUN_0527aaa0
 */


/* WARNING: Possible PIC construction at 0x0527aac4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0527aaa0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uStack_10;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return in_RAX;
  }
  lVar1 = *(long *)(lVar3 + 0x40);
  if (lVar1 != 0) {
    *(long *)(lVar3 + 0x48) = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x527aac9;
    lVar3 = lVar1;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


