/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52597f0
 * Label: string:minecraft:overworld
 * Body:  [[052597f0, 0525994d]]
 * Ghidra: FUN_052597f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052597f0(float param_1,int param_2,int param_3,int param_4,long param_5)

{
  char *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  undefined8 *unaff_RBX;
  int iVar2;
  int unaff_R13D;
  int unaff_R15D;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM7_Da;
  float in_XMM8_Da;
  float in_XMM10_Da;
  float in_XMM11_Da;
  float fStack0000000000000018;
  float fStack0000000000000030;
  float fStack0000000000000050;
  float fStack0000000000000060;
  float in_stack_00000070;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  pcVar1 = (char *)(param_5 * 5 + -0x11);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  iVar2 = param_2 - unaff_R15D;
  if (param_2 < unaff_R15D) {
    iVar2 = param_3;
  }
  fVar6 = ((float)param_4 + _DAT_011986e0) - (float)(unaff_R13D + unaff_R15D) * _DAT_011986e0;
  fVar3 = (float)iVar2 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar6);
  if (fVar6 <= 0.0) {
    fStack0000000000000050 =
         (fVar3 + _DAT_01198af0) /
         *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar3 + _DAT_01198af0) * 4);
  }
  else {
    fStack0000000000000050 = (fVar3 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar3) * 4);
  }
  if ((float)(_DAT_014e7ba0 & (uint)fStack0000000000000050) <= _DAT_01198724) {
    if ((param_1 == _DAT_01198c14) && (!NAN(param_1) && !NAN(_DAT_01198c14))) {
      _fStack0000000000000050 = ZEXT416((uint)fStack0000000000000050);
      fStack0000000000000018 = in_XMM8_Da;
      fStack0000000000000030 = in_XMM7_Da;
      fStack0000000000000060 = in_XMM10_Da;
      param_1 = (float)func_0x0d3414e0((float)(int)param_5,*unaff_RBX);
      in_XMM7_Da = fStack0000000000000030;
      in_XMM8_Da = fStack0000000000000018;
      in_XMM10_Da = fStack0000000000000060;
    }
    fStack0000000000000050 = fStack0000000000000050 + param_1;
  }
  fVar3 = 0.0;
  if (0.0 <= in_stack_00000070) {
    fVar3 = in_stack_00000070;
  }
  fVar6 = 0.0;
  if (0.0 <= in_XMM11_Da) {
    fVar6 = in_XMM11_Da;
  }
  fVar5 = 0.0;
  if (0.0 <= in_XMM8_Da) {
    fVar5 = in_XMM8_Da;
  }
  fVar4 = fVar6 * in_XMM10_Da;
  if (fVar6 * in_XMM10_Da <= fVar5 * fStack0000000000000050) {
    fVar4 = fVar5 * fStack0000000000000050;
  }
  if (in_XMM7_Da <= fVar4) {
    in_XMM7_Da = fVar4;
  }
  in_XMM7_Da = (fVar3 + fVar3) * in_XMM7_Da;
  fVar3 = 0.0;
  if (0.0 <= in_XMM7_Da) {
    fVar3 = in_XMM7_Da;
  }
  *(float *)(unaff_RBX + 4) = fVar3;
  return;
}


