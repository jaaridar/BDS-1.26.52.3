/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5353380 (ELF vaddr 0x5253380)
 * Label: callee-of:0xe055e60
 * Body:  [[05353380, 0535339e] [053533a0, 053533f6]]
 * Ghidra: FUN_05353380
 */


/* WARNING: Possible PIC construction at 0x053533d2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x053533bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x053533c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05353380(byte *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    if ((*param_1 & 1) == 0) {
      return in_RAX;
    }
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
          lVar3 = *(long *)(lVar4 + -8);
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0x53533c1;
          goto SUB_0412a280;
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != lVar1);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x53533d7;
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


