/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc695290 (ELF vaddr 0xc595290)
 * Label: caller-of-seed
 * Body:  [[0c695290, 0c6952d2]]
 * Ghidra: FUN_0c695290
 */


undefined8 FUN_0c695290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  
  func_0x0c6cb4d0();
  if (param_4 != (long *)0x0) {
    cVar1 = (**(code **)(*param_4 + 0x88))(param_4,0x3c);
    if (cVar1 != '\0') {
      func_0x0cf26f30(param_1,(int)param_4[0x30]);
    }
  }
  return param_1;
}


