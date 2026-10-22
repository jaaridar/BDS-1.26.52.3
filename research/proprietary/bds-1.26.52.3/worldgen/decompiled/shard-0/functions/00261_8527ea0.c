/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8627ea0 (ELF vaddr 0x8527ea0)
 * Label: callee-of:0x8486630
 * Body:  [[08627ea0, 08627f3b] [08627f40, 08627f88]]
 * Ghidra: FUN_08627ea0
 */


/* WARNING: Possible PIC construction at 0x08627ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08627f20: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08627ea0(byte *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  if (param_1[0x40] == 1) {
    if ((param_1[0x18] & 1) == 0) {
      if ((*param_1 & 1) == 0) {
        return in_RAX;
      }
      lVar3 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x8627ec5;
    }
  }
  else {
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
            uStack_20 = 0x8627f68;
            in_RAX = func_0x0412a280(*(undefined8 *)(lVar4 + -0x20),
                                     *(ulong *)(lVar4 + -0x30) & 0xfffffffffffffffe);
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
          uStack_20 = 0x8627f0c;
          in_RAX = func_0x048b3e80(lVar4);
        } while (lVar4 != lVar1);
        lVar3 = *(long *)(param_1 + 0x28);
      }
      *(long *)(param_1 + 0x30) = lVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x8627f25;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


