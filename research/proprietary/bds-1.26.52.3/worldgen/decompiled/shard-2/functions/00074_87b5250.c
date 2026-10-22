/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x87b5250
 * Label: callee-of:0x871a310
 * Body:  [[087b5250, 087b5389]]
 * Ghidra: FUN_087b5250
 */


void FUN_087b5250(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_RCX;
  undefined8 *unaff_RBX;
  long lVar5;
  long unaff_R12;
  long unaff_R13;
  undefined8 *unaff_R14;
  long unaff_R15;
  code *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  pcVar1 = (char *)((long)unaff_RBX + in_RCX * 4 + 0x6c);
  *pcVar1 = *pcVar1 + (char)in_RCX;
  if ((unaff_R13 != 0) && ((byte)(in_stack_00000020._4_1_ - 1U) < 2)) {
    func_0x048b0900();
  }
  if (in_stack_00000018 != (code *)0x0) {
    (*in_stack_00000018)(&stack0x00000000);
  }
  if ((unaff_R13 == 0) || (*(char *)((long)unaff_R14 + 0x24) == '\x04')) {
    uVar2 = *(undefined8 *)(unaff_R12 + 0x28);
    unaff_RBX[2] = &UNK_0488e0b0;
    *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
    unaff_RBX[3] = 0;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
    *unaff_RBX = 0;
    unaff_RBX[5] = uVar2;
    unaff_RBX[6] = 0;
    unaff_RBX[7] = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_R12 + 0x28);
    puVar4 = (undefined8 *)*unaff_R14;
    if (*(char *)((long)unaff_R14 + 0x24) == '\x02') {
      puVar4 = unaff_R14;
    }
    if (puVar4 == (undefined8 *)0x0 || *(int *)(unaff_R14 + 4) != 0x3d7dc826) {
      uVar3 = unaff_R14[5];
      lVar5 = unaff_R14[6];
      if (lVar5 == 0) {
        (*(code *)unaff_R14[7])(0);
        lVar5 = unaff_R14[6];
      }
      puVar4 = (undefined8 *)func_0x0488e200(uVar3,lVar5,0x3d7dc826);
    }
    *(undefined4 *)(unaff_R15 + 0x34) = *(undefined4 *)(puVar4 + 1);
    *(undefined8 *)(unaff_R15 + 0x2c) = *puVar4;
    unaff_RBX[2] = &UNK_0488e0b0;
    *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
    unaff_RBX[3] = 0;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
    *unaff_RBX = 0;
    unaff_RBX[5] = uVar2;
    unaff_RBX[6] = 0;
    unaff_RBX[7] = &UNK_04905b90;
  }
  return;
}


