/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed386e0
 * Label: callee-of:0x4de9260
 * Body:  [[0ed38536, 0ed3855b] [0ed386e0, 0ed387e2]]
 * Ghidra: FUN_0ed386e0
 */


undefined8 FUN_0ed386e0(undefined8 param_1,byte param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *unaff_R12;
  undefined1 *unaff_R14;
  bool in_ZF;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  code *in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  code *in_stack_00000058;
  code *in_stack_000000a8;
  
  uVar2 = in_stack_00000048;
  if (in_ZF) {
    param_4 = unaff_R14;
  }
  if ((param_4 == (undefined1 *)0x0 | param_2) == 1) {
    if (in_stack_00000050 == 0) {
      (*in_stack_00000058)(0,&stack0x00000020,0);
    }
    param_4 = (undefined1 *)func_0x0488e200(uVar2,in_stack_00000050,0xf40aabad);
  }
  uVar1 = *param_4;
  puVar3 = (undefined8 *)*unaff_R12;
  if (*(char *)((long)unaff_R12 + 0x24) == '\x02') {
    puVar3 = unaff_R12;
  }
  if (puVar3 == (undefined8 *)0x0 || *(int *)(unaff_R12 + 4) != -0xbf55453) {
    uVar2 = unaff_R12[5];
    lVar4 = unaff_R12[6];
    if (lVar4 == 0) {
      (*(code *)unaff_R12[7])(0);
      lVar4 = unaff_R12[6];
    }
    puVar3 = (undefined8 *)func_0x0488e200(uVar2,lVar4,0xf40aabad);
  }
  *(undefined1 *)puVar3 = uVar1;
  if (in_stack_00000038 != (code *)0x0) {
    (*in_stack_00000038)(&stack0x00000020);
  }
  if (in_stack_000000a8 != (code *)0x0) {
    (*in_stack_000000a8)(&stack0x00000090);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  return 1;
}


