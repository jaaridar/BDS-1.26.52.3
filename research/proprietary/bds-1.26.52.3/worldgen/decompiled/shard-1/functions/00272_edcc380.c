/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeecc380 (ELF vaddr 0xedcc380)
 * Label: callee-of:0xc961580
 * Body:  [[0eecc380, 0eecc3a2]]
 * Ghidra: FUN_0eecc380
 */


undefined8 FUN_0eecc380(long *param_1)

{
  undefined8 in_RAX;
  
  if ((char)param_1[1] == '\x01') {
    func_0x0eec86b0(0xf5463d0,param_1 + 2,*param_1 + 0x60);
  }
  return in_RAX;
}


