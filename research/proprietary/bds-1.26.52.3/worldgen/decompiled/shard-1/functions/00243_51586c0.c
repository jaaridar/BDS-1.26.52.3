/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52586c0 (ELF vaddr 0x51586c0)
 * Label: callee-of:0x51884e0
 * Body:  [[052586c0, 052588c6]]
 * Ghidra: FUN_052586c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052586c0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  uint uStack_54;
  undefined4 **ppuStack_50;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 *puStack_30;
  undefined8 uVar8;
  
  fVar2 = (float)(int)*param_2;
  fVar3 = (float)FUN_0d3414e0(fVar2,0,(float)(int)((ulong)*param_2 >> 0x20),param_1 + 0x118);
  fVar2 = fVar3 * _DAT_011987f8 + fVar2;
  fStack_48 = (float)(int)((ulong)*param_2 >> 0x20);
  fVar3 = (float)FUN_0d3414e0(fStack_48,(float)(int)*param_2,0,param_1 + 0x118);
  fStack_48 = _DAT_011987f8 * fVar3 + fStack_48;
  uVar4 = FUN_0d3414e0(fVar2,0,fStack_48,param_1 + 0x70);
  uVar5 = FUN_0d3414e0(fVar2,0,fStack_48,param_1 + 0xa8);
  uVar8 = FUN_0d3414e0(fVar2,0,fStack_48,param_1 + 0xe0);
  uVar6 = (uint)uVar8;
  uStack_44 = (uint)((ulong)uVar8 >> 0x20) & _UNK_014e7ba4 & _UNK_014e7ba4;
  uStack_40 = extraout_XMM0_Dc & _UNK_014e7ba8 & _UNK_014e7ba8;
  uStack_3c = extraout_XMM0_Dd & _UNK_014e7bac & _UNK_014e7bac;
  fStack_58 = ((float)((uint)((float)(uVar6 & _DAT_014e7ba0) + _DAT_0119852c) & _DAT_014e7ba0) +
              _DAT_011988a8) * _DAT_01198930;
  fStack_48 = fStack_58;
  if ((ulong)*(uint *)(param_1 + 0x200) != 0xffffffff) {
    uStack_60 = uVar4;
    uStack_5c = uVar5;
    uStack_54 = uVar6;
    ppuStack_50 = &puStack_30;
    puStack_30 = &uStack_60;
    fVar2 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_1 + 0x200) * 8))
                             (&ppuStack_50,param_1 + 0x188);
    fVar3 = *(float *)(param_1 + 0x350);
    fStack_58 = fStack_48;
    if ((ulong)*(uint *)(param_1 + 0x298) != 0xffffffff) {
      uStack_60 = uVar4;
      uStack_5c = uVar5;
      uStack_54 = uVar6;
      ppuStack_50 = &puStack_30;
      puStack_30 = &uStack_60;
      fVar7 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_1 + 0x298) * 8))
                               (&ppuStack_50,param_1 + 0x220);
      return CONCAT44(fVar7 * *(float *)(param_1 + 0x354),fVar2 + fVar3);
    }
  }
  uStack_60 = uVar4;
  uStack_5c = uVar5;
  fStack_58 = fStack_48;
  uStack_54 = uVar6;
  puStack_30 = &uStack_60;
  FUN_04931450();
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}


