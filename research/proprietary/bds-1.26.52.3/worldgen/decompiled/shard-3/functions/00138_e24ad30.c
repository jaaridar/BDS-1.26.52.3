/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe24ad30
 * Label: string:minecraft:biome_music
 * Body:  [[0e24ad30, 0e24ad5f] [0e24ad65, 0e24ae8b]]
 * Ghidra: FUN_0e24ad30
 */


/* WARNING: Instruction at (ram,0x0e24ad65) overlaps instruction at (ram,0x0e24ad60)
    */

void FUN_0e24ad30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char *in_RAX;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  long lVar4;
  char *unaff_R15;
  
  pbVar1 = (byte *)(in_RAX + -0x75);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 >> 1 | bVar2 << 7;
  if ((bool)(bVar2 & 1)) {
    param_3 = (undefined8 *)func_0x0488e200();
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)*unaff_RBX;
      if (*(char *)((long)unaff_RBX + 0x24) == '\x02') {
        param_3 = unaff_RBX;
      }
      if ((*(int *)(unaff_RBX + 4) != -0x4eb53f1c) || (param_3 == (undefined8 *)0x0)) {
        if ((code *)unaff_RBX[7] == (code *)0x0) {
LAB_0e24ae52:
          uVar3 = unaff_RBX[5];
          *(undefined **)(unaff_R15 + 0x10) = &UNK_0488e0b0;
          unaff_R15[0x20] = '_';
          unaff_R15[0x21] = 'r';
          unaff_R15[0x22] = -0x4b;
          unaff_R15[0x23] = 'H';
          unaff_R15[0x18] = '\0';
          unaff_R15[0x19] = '\0';
          unaff_R15[0x1a] = '\0';
          unaff_R15[0x1b] = '\0';
          unaff_R15[0x1c] = '\0';
          unaff_R15[0x1d] = '\0';
          unaff_R15[0x1e] = '\0';
          unaff_R15[0x1f] = '\0';
          unaff_R15[0x24] = '\0';
          unaff_R15[0] = '\0';
          unaff_R15[1] = '\0';
          unaff_R15[2] = '\0';
          unaff_R15[3] = '\0';
          unaff_R15[4] = '\0';
          unaff_R15[5] = '\0';
          unaff_R15[6] = '\0';
          unaff_R15[7] = '\0';
          *(undefined8 *)(unaff_R15 + 0x28) = uVar3;
          unaff_R15[0x30] = '\0';
          unaff_R15[0x31] = '\0';
          unaff_R15[0x32] = '\0';
          unaff_R15[0x33] = '\0';
          unaff_R15[0x34] = '\0';
          unaff_R15[0x35] = '\0';
          unaff_R15[0x36] = '\0';
          unaff_R15[0x37] = '\0';
          unaff_R15[0x38] = '\0';
          unaff_R15[0x39] = '\0';
          unaff_R15[0x3a] = '\0';
          unaff_R15[0x3b] = '\0';
          unaff_R15[0x3c] = '\0';
          unaff_R15[0x3d] = '\0';
          unaff_R15[0x3e] = '\0';
          unaff_R15[0x3f] = '\0';
          return;
        }
        uVar3 = unaff_RBX[5];
        lVar4 = unaff_RBX[6];
        if (lVar4 == 0) {
          (*(code *)unaff_RBX[7])(0);
          lVar4 = unaff_RBX[6];
        }
        param_3 = (undefined8 *)func_0x0488e200(uVar3,lVar4,0xb14ac0e4);
        if (param_3 == (undefined8 *)0x0) goto LAB_0e24ae52;
      }
      uVar3 = unaff_RBX[5];
      *(undefined **)(unaff_R15 + 0x10) = &UNK_07c53f10;
      unaff_R15[0x20] = 'g';
      unaff_R15[0x21] = -0x72;
      unaff_R15[0x22] = -0x5f;
      unaff_R15[0x23] = '\"';
      unaff_R15[0x18] = '\0';
      unaff_R15[0x19] = '\0';
      unaff_R15[0x1a] = '\0';
      unaff_R15[0x1b] = '\0';
      unaff_R15[0x1c] = '\0';
      unaff_R15[0x1d] = '\0';
      unaff_R15[0x1e] = '\0';
      unaff_R15[0x1f] = '\0';
      unaff_R15[0x24] = '\x04';
      goto LAB_0e24ae32;
    }
  }
  else {
    *in_RAX = *in_RAX + (char)in_RAX;
    unaff_R15 = in_RAX;
  }
  uVar3 = unaff_RBX[5];
  *(undefined **)(unaff_R15 + 0x10) = &UNK_07c53f10;
  unaff_R15[0x20] = 'g';
  unaff_R15[0x21] = -0x72;
  unaff_R15[0x22] = -0x5f;
  unaff_R15[0x23] = '\"';
  unaff_R15[0x18] = '\0';
  unaff_R15[0x19] = '\0';
  unaff_R15[0x1a] = '\0';
  unaff_R15[0x1b] = '\0';
  unaff_R15[0x1c] = '\0';
  unaff_R15[0x1d] = '\0';
  unaff_R15[0x1e] = '\0';
  unaff_R15[0x1f] = '\0';
  unaff_R15[0x24] = '\x03';
LAB_0e24ae32:
  *(undefined8 **)unaff_R15 = param_3 + 0x20;
  *(undefined8 *)(unaff_R15 + 0x28) = uVar3;
  unaff_R15[0x30] = '\0';
  unaff_R15[0x31] = '\0';
  unaff_R15[0x32] = '\0';
  unaff_R15[0x33] = '\0';
  unaff_R15[0x34] = '\0';
  unaff_R15[0x35] = '\0';
  unaff_R15[0x36] = '\0';
  unaff_R15[0x37] = '\0';
  *(undefined **)(unaff_R15 + 0x38) = &UNK_07c53e30;
  return;
}


