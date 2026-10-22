/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3b0690
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e3b0690, 0e3b06bf] [0e3b06c5, 0e3b07dd]]
 * Ghidra: FUN_0e3b0690
 */


/* WARNING: Instruction at (ram,0x0e3b06c5) overlaps instruction at (ram,0x0e3b06c0)
    */

void FUN_0e3b0690(long param_1,byte param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *in_RAX;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  long lVar4;
  undefined8 *unaff_R15;
  
  pbVar1 = (byte *)((long)in_RAX + -0x75);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 >> 1 | bVar2 << 7;
  if ((bool)(bVar2 & 1)) {
    param_3 = (undefined8 *)func_0x0488e200();
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)*unaff_RBX;
      if (*(char *)((long)unaff_RBX + 0x24) == '\x02') {
        param_3 = unaff_RBX;
      }
      if ((*(int *)(unaff_RBX + 4) != 0x6462cc10) || (param_3 == (undefined8 *)0x0)) {
        if ((code *)unaff_RBX[7] == (code *)0x0) {
LAB_0e3b07a4:
          uVar3 = unaff_RBX[5];
          unaff_R15[2] = &UNK_0488e0b0;
          *(undefined4 *)(unaff_R15 + 4) = 0x48b5725f;
          unaff_R15[3] = 0;
          *(undefined1 *)((long)unaff_R15 + 0x24) = 0;
          *unaff_R15 = 0;
          unaff_R15[5] = uVar3;
          unaff_R15[6] = 0;
          unaff_R15[7] = 0;
          return;
        }
        uVar3 = unaff_RBX[5];
        lVar4 = unaff_RBX[6];
        if (lVar4 == 0) {
          (*(code *)unaff_RBX[7])(0);
          lVar4 = unaff_RBX[6];
        }
        param_3 = (undefined8 *)func_0x0488e200(uVar3,lVar4,0x6462cc10);
        if (param_3 == (undefined8 *)0x0) goto LAB_0e3b07a4;
      }
      uVar3 = unaff_RBX[5];
      unaff_R15[2] = &UNK_048b1ea0;
      *(undefined4 *)(unaff_R15 + 4) = 0xa24c74b7;
      unaff_R15[3] = 0;
      *(undefined1 *)((long)unaff_R15 + 0x24) = 4;
      goto LAB_0e3b0784;
    }
  }
  else {
    unaff_RBX = (undefined8 *)
                CONCAT62((int6)((ulong)unaff_RBX >> 0x10),
                         CONCAT11((char)((ulong)unaff_RBX >> 8) + (char)in_RAX,(char)unaff_RBX));
    *(byte *)(param_1 + 0x48a24c74) = *(byte *)(param_1 + 0x48a24c74) & param_2;
    *(undefined4 *)(in_RAX + 3) = 0;
    unaff_R15 = in_RAX;
  }
  uVar3 = unaff_RBX[5];
  unaff_R15[2] = &UNK_048b1ea0;
  *(undefined4 *)(unaff_R15 + 4) = 0xa24c74b7;
  unaff_R15[3] = 0;
  *(undefined1 *)((long)unaff_R15 + 0x24) = 3;
LAB_0e3b0784:
  *unaff_R15 = param_3;
  unaff_R15[5] = uVar3;
  unaff_R15[6] = 0;
  unaff_R15[7] = &UNK_048b1e80;
  return;
}


