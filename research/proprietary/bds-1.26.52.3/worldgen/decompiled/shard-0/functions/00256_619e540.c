/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629e540 (ELF vaddr 0x619e540)
 * Label: callee-of:0x6146460
 * Body:  [[0629e540, 0629e590] [0629e5a0, 0629e5f0]]
 * Ghidra: FUN_0629e540
 */


/* WARNING: Possible PIC construction at 0x0629e574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0629e5e9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0629e5b5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0629e5ee) */
/* WARNING: Removing unreachable block (ram,0x0629e5ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0629e540(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 in_RAX;
  undefined8 auStack_30 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX;
  }
  puVar1 = (undefined8 *)param_2[2];
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    *param_2 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x629e579;
      param_2 = puVar1;
    }
  }
  else {
    puVar2 = (undefined8 *)puVar1[3];
    puVar1[3] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      param_2 = (undefined8 *)*puVar2;
      if (param_2 != (undefined8 *)0x0) {
        puVar2[1] = param_2;
        register0x00000020 = (BADSPACEBASE *)auStack_30;
        auStack_30[0] = 0x629e5ee;
        goto SUB_0412a280;
      }
      auStack_30[0] = 0x629e5ad;
      in_RAX = func_0x0412a280(puVar2,0x18);
    }
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x629e5ba;
    param_2 = puVar1;
  }
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (param_2 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


