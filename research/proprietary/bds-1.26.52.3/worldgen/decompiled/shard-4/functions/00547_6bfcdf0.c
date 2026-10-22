/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6cfcdf0 (ELF vaddr 0x6bfcdf0)
 * Label: callee2-of:0xca35860
 * Body:  [[06cfcdf0, 06cfce00]]
 * Ghidra: FUN_06cfcdf0
 */


undefined8 FUN_06cfcdf0(undefined8 *param_1)

{
  undefined8 in_RAX;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x0412d610(*param_1);
  }
  return in_RAX;
}


