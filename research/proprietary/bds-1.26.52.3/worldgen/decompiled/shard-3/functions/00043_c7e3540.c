/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e3540
 * Label: string:The SurfaceBuilderComponent could not be resolved.
 * Body:  [[0c7e3540, 0c7e3543]]
 * Ghidra: FUN_0c7e3540
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0c7e3540(undefined8 param_1,undefined8 param_2,undefined2 param_3,long param_4)

{
  undefined1 in_AL;
  
  out(param_3,in_AL);
  *(char *)(param_4 + -0x77) = *(char *)(param_4 + -0x77) + (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


