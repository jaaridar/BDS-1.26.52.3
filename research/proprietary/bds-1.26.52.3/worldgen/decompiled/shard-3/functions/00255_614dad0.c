/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624dad0 (ELF vaddr 0x614dad0)
 * Label: callee-of:0x6146460
 * Body:  [[0624dad0, 0624daf0] [0624db00, 0624db5c]]
 * Ghidra: FUN_0624dad0
 */


/* WARNING: Possible PIC construction at 0x0624db2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0624db31) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0624dad0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 auStack_30 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar4 = param_1[1];
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    do {
      lVar3 = *(long *)(lVar4 + -8);
      *(undefined8 *)(lVar4 + -8) = 0;
      if (lVar3 != 0) {
        auStack_30[0] = 0x624db24;
        in_RAX = func_0x0cadbac0(lVar3);
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0x624db31;
        goto SUB_0412a280;
      }
      lVar4 = lVar4 + -8;
    } while (lVar4 != lVar1);
    lVar3 = *param_1;
  }
  param_1[1] = lVar1;
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


