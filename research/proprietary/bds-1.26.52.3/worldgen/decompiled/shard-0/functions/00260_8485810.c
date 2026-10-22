/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8585810 (ELF vaddr 0x8485810)
 * Label: callee-of:0x8486630
 * Body:  [[08585810, 08585834] [08585840, 0858585b] [08585860, 085858b8]]
 * Ghidra: FUN_08585810
 */


/* WARNING: Possible PIC construction at 0x08585888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0858588d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08585810(long *param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  undefined8 auStack_30 [2];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return in_RAX;
  }
  lVar5 = param_1[1];
  lVar4 = lVar2;
  if (lVar2 != lVar5) {
    do {
      if ((*(byte *)(lVar5 + -0x18) & 1) == 0) {
        bVar1 = *(byte *)(lVar5 + -0x30);
      }
      else {
        auStack_30[0] = 0x8585871;
        in_RAX = func_0x0412a280(*(undefined8 *)(lVar5 + -8),
                                 *(ulong *)(lVar5 + -0x18) & 0xfffffffffffffffe);
        bVar1 = *(byte *)(lVar5 + -0x30);
      }
      if ((bVar1 & 1) != 0) {
        lVar4 = *(long *)(lVar5 + -0x20);
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0x858588d;
        goto SUB_0412a280;
      }
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != lVar2);
    lVar4 = *param_1;
  }
  param_1[1] = lVar2;
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar4 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


