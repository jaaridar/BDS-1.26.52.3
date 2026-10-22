/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624db60 (ELF vaddr 0x614db60)
 * Label: callee-of:0x6146460
 * Body:  [[0624db60, 0624db85] [0624db90, 0624dbfe]]
 * Ghidra: FUN_0624db60
 */


/* WARNING: Possible PIC construction at 0x0624dbcd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0624dbd2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0624db60(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  undefined8 auStack_30 [2];
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = lVar1;
  if (lVar1 != lVar5) {
    do {
      lVar2 = *(long *)(lVar5 + -8);
      *(undefined8 *)(lVar5 + -8) = 0;
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x38);
        if (lVar4 != 0) {
          *(long *)(lVar2 + 0x40) = lVar4;
          register0x00000020 = (BADSPACEBASE *)auStack_30;
          auStack_30[0] = 0x624dbd2;
          goto SUB_0412a280;
        }
        auStack_30[0] = 0x624db9d;
        in_RAX = func_0x0412a280(lVar2,0x58);
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != lVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x20) = lVar1;
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar4 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


