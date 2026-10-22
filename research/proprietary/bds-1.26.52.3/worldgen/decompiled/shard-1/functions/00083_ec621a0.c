/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed621a0 (ELF vaddr 0xec621a0)
 * Label: callee-of:0x871a310
 * Body:  [[0ed621a0, 0ed6229a]]
 * Ghidra: FUN_0ed621a0
 */


void FUN_0ed621a0(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_48;
  undefined8 uStack_40;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = func_0x048aead0(param_1[1]);
  }
  if (*(long *)(lVar2 + 0x78) != 0) {
    lVar2 = *param_1;
    lVar1 = param_1[1];
    if (lVar2 == 0) {
      lVar6 = func_0x048aead0(lVar1);
      lVar2 = *param_1;
      lVar6 = *(long *)(*(long *)(lVar6 + 0x78) + 0x18);
      if (lVar2 == 0) {
        lVar2 = func_0x048aead0(param_1[1]);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(lVar2 + 0x78) + 0x18);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x78) + 0x20);
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      uVar3 = (**(code **)(lVar6 + 8))(lVar1);
      lVar4 = func_0x048b0c90(lVar1,uVar3,param_2,1);
      if (lVar4 != 0) {
LAB_0ed62262:
        lVar2 = *(long *)(lVar4 + 0x58);
        plVar5 = (long *)*param_1;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)func_0x048aead0(param_1[1]);
        }
        func_0x0ed622a0(lVar2 + 0x78,param_1,*(undefined4 *)(*plVar5 + 4));
        return;
      }
      lStack_48 = 0;
      uStack_40 = 0;
      func_0x048b0d20(&lStack_48);
      lVar4 = lStack_48;
      if (lStack_48 != 0) goto LAB_0ed62262;
    }
  }
  return;
}


