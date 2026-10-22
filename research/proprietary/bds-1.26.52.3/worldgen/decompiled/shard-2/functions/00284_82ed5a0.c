/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83ed5a0 (ELF vaddr 0x82ed5a0)
 * Label: callee-of:0xd1cf130
 * Body:  [[083ed5a0, 083ed5be] [083ed5c0, 083ed616]]
 * Ghidra: FUN_083ed5a0
 */


/* WARNING: Possible PIC construction at 0x083ed5d8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_083ed5a0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_20;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    return in_RAX;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  plVar3 = plVar1;
  if (plVar1 != plVar4) {
    do {
      if ((*(byte *)(plVar4 + -3) & 1) != 0) {
        plVar3 = (long *)plVar4[-1];
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0x83ed5dd;
        goto SUB_0412a280;
      }
      plVar4 = plVar4 + -4;
      plVar3 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar3 != (long *)0x0) {
        uStack_20 = 0x83ed5f6;
        in_RAX = (**(code **)(*plVar3 + 8))();
      }
    } while (plVar4 != plVar1);
    plVar3 = *(long **)(param_1 + 0x10);
  }
  *(long **)(param_1 + 0x18) = plVar1;
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (plVar3 != (long *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,plVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


