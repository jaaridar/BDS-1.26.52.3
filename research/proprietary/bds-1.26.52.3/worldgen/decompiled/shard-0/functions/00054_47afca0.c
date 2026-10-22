/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47afca0
 * Label: callee-of:0x871a310
 * Body:  [[047afca0, 047afcc1] [047afcca, 047afce4]]
 * Ghidra: FUN_047afca0
 */


bool FUN_047afca0(undefined8 param_1,undefined8 param_2,undefined2 param_3,byte param_4)

{
  int iVar1;
  long in_RAX;
  undefined8 unaff_retaddr;
  
  *(byte *)(in_RAX + -0x77) = *(byte *)(in_RAX + -0x77) & param_4;
  out(param_3,(int)in_RAX);
  iVar1 = (**(code **)(in_RAX + 0x130))();
  func_0x047726d0(unaff_retaddr);
  return iVar1 != 0;
}


