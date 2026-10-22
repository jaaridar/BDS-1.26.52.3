/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6336d60 (ELF vaddr 0x6236d60)
 * Label: callee-of:0x61407e0
 * Body:  [[06336d60, 06336dae]]
 * Ghidra: FUN_06336d60
 */


/* WARNING: Possible PIC construction at 0x06336d95: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06336d60(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 auStack_20 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX;
  }
  auStack_20[0] = 0x6336d77;
  FUN_06336d60(param_1,*param_2);
  auStack_20[0] = 0x6336d83;
  uVar2 = FUN_06336d60(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_2 = (undefined8 *)param_2[7];
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x6336d9a;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar2;
  if (param_2 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


