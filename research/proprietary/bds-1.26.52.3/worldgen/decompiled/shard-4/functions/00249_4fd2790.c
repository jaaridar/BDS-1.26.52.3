/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x50d2790 (ELF vaddr 0x4fd2790)
 * Label: callee-of:0x61416e0
 * Body:  [[050d2790, 050d27f4]]
 * Ghidra: FUN_050d2790
 */


/* WARNING: Possible PIC construction at 0x050d27b2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x050d27e0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_050d2790(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  undefined8 uStack_10;
  
  pbVar3 = (byte *)*param_1;
  *param_1 = 0;
  if (pbVar3 == (byte *)0x0) {
    return in_RAX;
  }
  if ((pbVar3[0x30] & 1) == 0) {
    lVar1 = *(long *)(pbVar3 + 0x18);
    if (lVar1 != 0) {
      *(long *)(pbVar3 + 0x20) = lVar1;
      uStack_10 = 0x50d27d0;
      in_RAX = func_0x0412a280(lVar1,*(long *)(pbVar3 + 0x28) - lVar1);
    }
    if ((*pbVar3 & 1) != 0) {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x50d27e5;
    }
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x40);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x50d27b7;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (pbVar3 != (byte *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,pbVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


