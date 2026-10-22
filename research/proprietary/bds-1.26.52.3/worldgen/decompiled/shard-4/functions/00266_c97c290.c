/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7c290 (ELF vaddr 0xc97c290)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0ca7c290, 0ca7c2bb]]
 * Ghidra: FUN_0ca7c290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca7c290(undefined8 *param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_0ca7c290(*param_1);
    uVar1 = FUN_0ca7c290(param_1[1]);
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
    }
    return uVar1;
  }
  return in_RAX;
}


