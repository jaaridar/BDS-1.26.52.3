/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe55c3c0
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e55c3b0, 0e55c3bd] [0e55c3c0, 0e55c3d2] [0e55c3d5, 0e55c3d8] [0e55c3de, 0e55c40a]]
 * Ghidra: FUN_0e55c3c0
 */


/* WARNING: Instruction at (ram,0x0e55c3c1) overlaps instruction at (ram,0x0e55c3c0)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_0e55c3c0(undefined8 param_1,undefined1 *param_2,undefined2 param_3,uint param_4)

{
  long in_RAX;
  byte *pbVar1;
  byte *unaff_RBX;
  byte *unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  
  param_4 = param_4 ^ *(uint *)(in_RAX + -0x75);
  if ((POPCOUNT(param_4 & 0xff) & 1U) != 0) {
    if (param_4 == 0) {
      out(*param_2,param_3);
      *(undefined1 *)(in_RAX + -0x7b) = *(undefined1 *)(in_RAX + -0x7b);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0e55c3d7:
    *unaff_R14 = unaff_R15;
    unaff_R14[1] = unaff_R12;
    unaff_R14[2] = unaff_R13;
    if (unaff_RBX != (byte *)0x0) {
      func_0x0412a280(unaff_RBX,(long)param_2 - (long)unaff_RBX);
    }
    return;
  }
  do {
    func_0x0412a280(param_1,(ulong)param_2 & 0xfffffffffffffffe);
    do {
      pbVar1 = unaff_RBX;
      unaff_RBX = pbVar1 + 0x18;
      if (unaff_RBX == unaff_RBP) {
        unaff_RBX = (byte *)*unaff_R14;
        param_2 = (undefined1 *)unaff_R14[2];
        goto code_r0x0e55c3d7;
      }
    } while ((*unaff_RBX & 1) == 0);
    param_2 = *(undefined1 **)unaff_RBX;
    param_1 = *(undefined8 *)(pbVar1 + 0x28);
  } while( true );
}


