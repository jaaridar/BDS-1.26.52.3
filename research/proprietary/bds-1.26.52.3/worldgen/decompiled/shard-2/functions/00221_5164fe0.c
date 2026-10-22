/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5264fe0 (ELF vaddr 0x5164fe0)
 * Label: callee-of:0x517c470
 * Body:  [[05264fe0, 05265031]]
 * Ghidra: FUN_05264fe0
 */


/* WARNING: Possible PIC construction at 0x05264ff8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05264fe0(long param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uStack_10;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x30) = lVar2;
      uStack_10 = 0x5265016;
      in_RAX = func_0x0412a280(lVar2,*(long *)(param_1 + 0x38) - lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
      return in_RAX;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  else {
    *(long *)(param_1 + 0x48) = lVar2;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x5264ffd;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


