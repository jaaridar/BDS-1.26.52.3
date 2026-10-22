/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48e6d60 (ELF vaddr 0x47e6d60)
 * Label: callee-of:0x82e9c40
 * Body:  [[048e6d60, 048e6dbb] [048e6dc0, 048e6e08]]
 * Ghidra: FUN_048e6d60
 */


/* WARNING: Possible PIC construction at 0x048e6da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x048e6de3: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048e6de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048e6d60(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
      return in_RAX;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        if ((*(char *)(lVar4 + -8) == '\x01') && ((*(byte *)(lVar4 + -0x30) & 1) != 0)) {
          lVar3 = *(long *)(lVar4 + -0x20);
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0x48e6de8;
          goto SUB_0412a280;
        }
        lVar4 = lVar4 + -0x50;
      } while (lVar4 != lVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x18) = lVar1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        lVar4 = lVar4 + -0x40;
        uStack_20 = 0x48e6d8c;
        in_RAX = func_0x048b3e80(lVar4);
      } while (lVar4 != lVar1);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x30) = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x48e6da5;
  }
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


