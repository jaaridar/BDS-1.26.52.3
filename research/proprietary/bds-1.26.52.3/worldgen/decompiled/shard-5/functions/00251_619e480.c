/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629e480 (ELF vaddr 0x619e480)
 * Label: callee-of:0x6146460
 * Body:  [[0629e480, 0629e4d0] [0629e4e0, 0629e530]]
 * Ghidra: FUN_0629e480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0629e480(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 in_RAX;
  
  if (param_2 == (long *)0x0) {
    return in_RAX;
  }
  puVar4 = (undefined8 *)param_2[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    plVar3 = (long *)puVar4[3];
    puVar4[3] = 0;
    if (plVar3 != (long *)0x0) {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        plVar3[1] = lVar1;
        FUN_0412a280(lVar1,plVar3[2] - lVar1);
      }
      FUN_0412a280(plVar3,0x18);
    }
    in_RAX = FUN_0412a280(puVar4,0x20);
    puVar4 = puVar2;
  }
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    in_RAX = FUN_0412a280(lVar1,param_2[1] << 3);
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_2);
  }
  return in_RAX;
}


