/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48057f0
 * Label: callee-of:0xe3ddaa0
 * Body:  [[048045a0, 04804644] [048057f0, 048057fe]]
 * Ghidra: FUN_048057f0
 */


long FUN_048057f0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long in_RAX;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *(char *)(in_RAX + -0x73) = *(char *)(in_RAX + -0x73) + (char)param_4;
  uStack_30 = 0;
  lVar2 = 0;
  iVar1 = func_0x04802120(&uStack_30,&uStack_28,0,param_2,param_3,param_5,param_6);
  if (iVar1 != 0) {
    uStack_20 = uStack_30;
    lVar2 = (*param_1)(param_4,&uStack_20,uStack_28);
    if (lVar2 == 0) {
      func_0x047c6f20(9,0x67,0xd,&UNK_0135af15,0x21);
    }
    func_0x047f29a0(uStack_30,&UNK_0135af15,0x22);
  }
  return lVar2;
}


