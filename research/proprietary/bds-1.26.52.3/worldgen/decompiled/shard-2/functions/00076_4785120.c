/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4785120
 * Label: callee-of:0x4de9260
 * Body:  [[04785120, 0478514d]]
 * Ghidra: FUN_04785120
 */


undefined8 FUN_04785120(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = func_0x04784c80();
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    func_0x04784ec0(param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}


