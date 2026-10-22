/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6336cd0 (ELF vaddr 0x6236cd0)
 * Label: callee-of:0x61407e0
 * Body:  [[06336cd0, 06336d51]]
 * Ghidra: FUN_06336cd0
 */


/* WARNING: Possible PIC construction at 0x06336d21: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06336cd0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 auStack_20 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX;
  }
  auStack_20[0] = 0x6336ce7;
  FUN_06336cd0(param_1,*param_2);
  auStack_20[0] = 0x6336cf3;
  FUN_06336cd0(param_1,param_2[1]);
  auStack_20[0] = 0x6336d00;
  uVar3 = func_0x0629d8f0(param_2 + 8,param_2[9]);
  puVar1 = (undefined8 *)param_2[7];
  param_2[7] = 0;
  if (puVar1 == (undefined8 *)0x0) {
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      auStack_20[0] = 0x6336d3d;
      uVar3 = func_0x0412a280(param_2[6],param_2[4] & 0xfffffffffffffffe);
    }
  }
  else {
    auStack_20[0] = 0x6336d19;
    uVar3 = func_0x0d328aa0(puVar1);
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x6336d26;
    param_2 = puVar1;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar3;
  if (param_2 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


