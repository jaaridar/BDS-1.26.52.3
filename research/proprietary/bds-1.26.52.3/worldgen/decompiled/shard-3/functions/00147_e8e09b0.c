/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8e09b0
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__15arrayINS2_7variantIJ
 * Body:  [[0e8e09b0, 0e8e0a15]]
 * Ghidra: FUN_0e8e09b0
 */


undefined8 FUN_0e8e09b0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  long lVar3;
  long unaff_R14;
  bool in_ZF;
  
  puVar2 = (undefined8 *)*unaff_RBX;
  if (in_ZF) {
    puVar2 = unaff_RBX;
  }
  if ((puVar2 == (undefined8 *)0x0 | param_2) == 1) {
    uVar1 = unaff_RBX[5];
    lVar3 = unaff_RBX[6];
    if (lVar3 == 0) {
      (*(code *)unaff_RBX[7])(0);
      lVar3 = unaff_RBX[6];
    }
    puVar2 = (undefined8 *)func_0x0488e200(uVar1,lVar3,0xa6c45d85);
  }
  *(undefined4 *)(unaff_R14 + 0xc) = *(undefined4 *)puVar2;
  return 1;
}


