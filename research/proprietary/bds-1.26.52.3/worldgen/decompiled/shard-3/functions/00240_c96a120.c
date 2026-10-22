/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca6a120 (ELF vaddr 0xc96a120)
 * Label: Dimension::vslot43
 * Body:  [[0ca6a120, 0ca6a1db]]
 * Ghidra: wg_Dimension__vslot43
 */


undefined8 * wg_Dimension__vslot43(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined8 uStack_48;
  int iStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
  uVar1 = *(undefined4 *)(param_3 + 1);
  uStack_38 = *param_3;
  uStack_30 = 0;
  uStack_28 = func_0x0eee4390();
  fVar4 = (float)func_0x0eee4390(uStack_38._4_4_);
  uStack_48 = CONCAT44((int)fVar4,(int)(float)uStack_28);
  fVar4 = (float)func_0x0eee4390(uVar1);
  iStack_40 = (int)fVar4;
  lVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,&uStack_48);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x0cb01e90((int)*param_3,*(undefined4 *)(param_3 + 1),param_1,lVar3 + 0x1568);
  }
  return param_1;
}


