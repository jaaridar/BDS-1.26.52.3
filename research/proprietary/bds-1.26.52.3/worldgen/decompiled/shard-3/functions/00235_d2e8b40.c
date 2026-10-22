/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e8b40 (ELF vaddr 0xd2e8b40)
 * Label: callee-of:0x49bead0
 * Body:  [[0d3e8b40, 0d3e8cac]]
 * Ghidra: FUN_0d3e8b40
 */


ulong FUN_0d3e8b40(long *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  ulong uVar4;
  undefined8 uStack_30;
  int iStack_28;
  
  iStack_28 = param_2[2];
  uStack_30 = CONCAT44(param_2[1] + -1,*param_2);
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&uStack_30);
  cVar1 = func_0x0c6e95e0(param_3,uVar3);
  uVar4 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    iStack_28 = param_2[2];
    uStack_30 = CONCAT44(param_2[1] + 1,*param_2);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&uStack_30);
    cVar1 = func_0x0c6e95e0(param_3,uVar3);
    if (cVar1 == '\0') {
      uStack_30 = *(undefined8 *)param_2;
      iStack_28 = param_2[2] + -1;
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&uStack_30);
      cVar1 = func_0x0c6e95e0(param_3,uVar3);
      if (cVar1 == '\0') {
        uStack_30 = *(undefined8 *)param_2;
        iStack_28 = param_2[2] + 1;
        uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&uStack_30);
        cVar1 = func_0x0c6e95e0(param_3,uVar3);
        if (cVar1 == '\0') {
          iStack_28 = param_2[2];
          uStack_30 = CONCAT44(param_2[1],*param_2 + -1);
          uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&uStack_30);
          cVar1 = func_0x0c6e95e0(param_3,uVar3);
          if (cVar1 == '\0') {
            iStack_28 = param_2[2];
            uStack_30 = CONCAT44(param_2[1],*param_2 + 1);
            uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&uStack_30);
            uVar2 = func_0x0c6e95e0(param_3,uVar3);
            uVar4 = (ulong)uVar2;
          }
        }
      }
    }
  }
  return uVar4 & 0xffffffff;
}


