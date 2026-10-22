/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca2cd50
 * Label: string:surfaceBuildersResolved
 * Body:  [[0ca2cd50, 0ca2cd88] [0ca2cd90, 0ca2cded]]
 * Ghidra: FUN_0ca2cd50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0ca2cd50(long *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                   undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  char *in_RAX;
  long unaff_RBX;
  long lVar2;
  long unaff_R12;
  long unaff_R15;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = in_RAX + -0x75;
  *pcVar1 = *pcVar1 + param_4;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
    *(undefined8 *)(unaff_RBX + 0x20) = 0;
    if (param_1 != (long *)0x0) {
      in_RAX = (char *)(**(code **)(*param_1 + 8))();
    }
    unaff_R15 = *(long *)(unaff_RBX + 8);
    if (unaff_R15 == 0) {
      return in_RAX;
    }
    unaff_R12 = *(long *)(unaff_RBX + 0x10);
  }
  lVar2 = unaff_R15;
  if (unaff_R15 != unaff_R12) {
    do {
      if (*(char *)(unaff_R12 + -8) == '\x01') {
        param_7 = *(undefined4 *)(unaff_R12 + -0x10);
        *(undefined1 *)(unaff_R12 + -8) = 0;
        in_RAX = (char *)func_0x0d87c640(*(long *)(unaff_R12 + -0x20) + 0x28,&param_7);
      }
      unaff_R12 = unaff_R12 + -0x20;
    } while (unaff_R12 != unaff_R15);
    lVar2 = *(long *)(unaff_RBX + 8);
  }
  *(long *)(unaff_RBX + 0x10) = unaff_R15;
  in_stack_00000030 = in_RAX;
  if (lVar2 != 0) {
    in_stack_00000028 = 0xee326ba;
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return in_stack_00000030;
}


