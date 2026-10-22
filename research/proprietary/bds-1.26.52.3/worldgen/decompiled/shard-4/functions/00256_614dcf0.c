/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624dcf0 (ELF vaddr 0x614dcf0)
 * Label: callee-of:0x6146460
 * Body:  [[0624dcf0, 0624dd2d] [0629e540, 0629e590] [0629e5a0, 0629e5f0]]
 * Ghidra: FUN_0624dcf0
 */


/* WARNING: Possible PIC construction at 0x0629e574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0629e5e9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0629e5b5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0629e5ee) */
/* WARNING: Removing unreachable block (ram,0x0629e5ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0624dcf0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 in_RAX;
  undefined8 *puVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    in_RAX = func_0x0629e480(param_1 + 0x18);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (puVar5 == (undefined8 *)0x0) {
    return in_RAX;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return in_RAX;
  }
  uStack_28 = in_RAX;
  puVar2 = (undefined8 *)puVar5[2];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar5;
    *puVar5 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      register0x00000020 = (BADSPACEBASE *)&uStack_30;
      uStack_30 = 0x629e579;
      puVar5 = puVar2;
    }
  }
  else {
    puVar3 = (undefined8 *)puVar2[3];
    puVar2[3] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar3;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3[1] = puVar5;
        register0x00000020 = (BADSPACEBASE *)&uStack_30;
        uStack_30 = 0x629e5ee;
        goto SUB_0412a280;
      }
      uStack_30 = 0x629e5ad;
      in_RAX = func_0x0412a280(puVar3,0x18);
    }
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    uStack_30 = 0x629e5ba;
    puVar5 = puVar2;
  }
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (puVar5 != (undefined8 *)0x0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,puVar5);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


