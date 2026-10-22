/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4908570 (ELF vaddr 0x4808570)
 * Label: callee2-of:0xd207a00
 * Body:  [[04908570, 04908633]]
 * Ghidra: FUN_04908570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04908570(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_04908570(param_1,*param_2);
    FUN_04908570(param_1,param_2[1]);
    plVar1 = (long *)param_2[7];
    param_2[7] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (((ulong)param_2[6] >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2[6] & 0xff00ffffffffffff) - 8);
    }
    uVar2 = 0x80000000000000;
    param_2[6] = 0;
    if ((param_2[5] & 0x80000000000000) != 0) {
      uVar2 = (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(param_2[5] & 0xff00ffffffffffff) - 8);
    }
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_2);
    }
    return uVar2;
  }
  return in_RAX;
}


