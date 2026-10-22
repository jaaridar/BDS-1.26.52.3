/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe872740
 * Label: callee-of:0xe706340
 * Body:  [[0e872740, 0e8727c0]]
 * Ghidra: FUN_0e872740
 */


void FUN_0e872740(void)

{
  undefined8 uVar1;
  undefined8 *unaff_RBX;
  long lVar2;
  undefined8 unaff_R13;
  long unaff_R15;
  
  uVar1 = *(undefined8 *)(unaff_R15 + 0x28);
  lVar2 = *(long *)(unaff_R15 + 0x30);
  if (lVar2 == 0) {
    (**(code **)(unaff_R15 + 0x38))(0);
    lVar2 = *(long *)(unaff_R15 + 0x30);
  }
  uVar1 = func_0x0488e200(uVar1,lVar2,0xed896d1a);
  unaff_RBX[2] = &UNK_0e8718d0;
  *(undefined4 *)(unaff_RBX + 4) = 0xed896d1a;
  unaff_RBX[3] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 4;
  *unaff_RBX = uVar1;
  unaff_RBX[5] = unaff_R13;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = &UNK_0e8718b0;
  return;
}


