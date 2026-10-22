/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d748a0 (ELF vaddr 0x5c748a0)
 * Label: callee-of:0x6146460
 * Body:  [[05d748a0, 05d749f5]]
 * Ghidra: FUN_05d748a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d748a0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *in_R8;
  float fVar4;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 uStack_28;
  
  func_0x0c9d0c10();
  *param_1 = &UNK_0f008780;
  uVar1 = *(undefined4 *)((long)in_R8 + 4);
  uVar2 = *(undefined4 *)(in_R8 + 1);
  uVar3 = *(undefined4 *)((long)in_R8 + 0xc);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)in_R8;
  *(undefined4 *)((long)param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)((long)param_1 + 0x17c) = uVar3;
  param_1[0x30] = in_R8[2];
  func_0x05d64270(param_1 + 0x31,&UNK_011d4c52,0x1a);
  *(undefined4 *)(param_1 + 0x66) = in_stack_00000010;
  param_1[0x65] = in_stack_00000008;
  fStack_5c = (*(float *)((long)in_R8 + 0x14) - *(float *)(in_R8 + 1)) + _DAT_011983f0;
  fStack_38 = ((float)*(undefined8 *)((long)in_R8 + 0xc) - (float)*in_R8) + _DAT_014e5300;
  fStack_34 = ((float)((ulong)*(undefined8 *)((long)in_R8 + 0xc) >> 0x20) -
              (float)((ulong)*in_R8 >> 0x20)) + _UNK_014e5304;
  fStack_30 = _UNK_014e5308 + 0.0;
  fStack_2c = _UNK_014e530c + 0.0;
  uStack_28 = func_0x0eee4390();
  fVar4 = (float)func_0x0eee4390(fStack_34);
  iStack_68 = (int)(float)uStack_28;
  iStack_64 = (int)fVar4;
  fVar4 = (float)func_0x0eee4390(fStack_5c);
  iStack_60 = (int)fVar4;
  func_0x0d36d980(param_1 + 0x31,&iStack_68);
  func_0x05d64720(param_1 + 0x52);
  iStack_3c = iStack_60 + -1;
  uStack_44 = CONCAT44(iStack_64 + -1,iStack_68 + -1);
  puStack_58 = &UNK_0f435c20;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x05d65120(param_1 + 0x52,&puStack_58);
  return;
}


