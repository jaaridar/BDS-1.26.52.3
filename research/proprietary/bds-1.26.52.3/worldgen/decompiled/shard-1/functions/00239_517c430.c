/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527c430 (ELF vaddr 0x517c430)
 * Label: callee-of:0x517ab30
 * Body:  [[0527c430, 0527c467]]
 * Ghidra: FUN_0527c430
 */


/* WARNING: Possible PIC construction at 0x0527c453: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0527c430(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long *plVar3;
  undefined8 uStack_10;
  
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 == (long *)0x0) {
    return in_RAX;
  }
  plVar1 = (long *)*plVar3;
  if (plVar1 != (long *)0x0) {
    plVar3[1] = (long)plVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x527c458;
    plVar3 = plVar1;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (plVar3 != (long *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,plVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


