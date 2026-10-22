/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc543930
 * Label: string:minecraft:mangrove_tree_feature
 * Body:  [[0c5438d3, 0c5438e2] [0c5438f0, 0c543b1c]]
 * Ghidra: FUN_0c543930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0c543930(ulong param_1,ulong param_2,ulong param_3,long *param_4,char param_5)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  long unaff_RBX;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_R15;
  bool bVar6;
  float fVar7;
  
code_r0x0c543930:
  if ((param_3 & 0xffffffff) == param_1) {
    do {
      while( true ) {
        param_4 = (long *)*param_4;
        if (param_4 == (long *)0x0) goto LAB_0c5438d3;
        uVar5 = param_4[1];
        if (uVar5 != param_2) break;
        if (*(char *)(param_4 + 2) == param_5) {
          return (long)param_4;
        }
      }
      if (unaff_R15 <= uVar5) {
        if ((uVar5 | unaff_R15) >> 0x20 == 0) goto LAB_0c54392b;
        uVar5 = uVar5 % unaff_R15;
      }
      if (uVar5 != param_1) break;
    } while( true );
  }
LAB_0c5438d3:
  fVar7 = (float)(*(long *)(unaff_RBX + 0x18) + 1);
  if ((long)unaff_R15 < 0) {
    fVar1 = *(float *)(unaff_RBX + 0x20);
  }
  else {
    fVar1 = *(float *)(unaff_RBX + 0x20);
  }
  if ((unaff_R15 != 0) && (fVar7 <= (float)unaff_R15 * fVar1)) {
    return 0;
  }
  uVar5 = 1;
  if (2 < unaff_R15) {
    uVar5 = (ulong)((unaff_R15 & unaff_R15 - 1) != 0);
  }
  uVar5 = uVar5 | unaff_R15 * 2;
  fVar7 = (float)func_0x0eee3ab0(fVar7 / fVar1);
  uVar4 = (long)(fVar7 - _DAT_01198778) & (long)fVar7 >> 0x3f | (long)fVar7;
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = 2;
  if ((uVar4 == 1) || (uVar5 = uVar4, (uVar4 & uVar4 - 1) == 0)) {
    bVar6 = uVar5 < unaff_R15;
    if (unaff_R15 < uVar5) goto LAB_0c5439fc;
  }
  else {
    uVar5 = func_0x0412c3f0();
    unaff_R15 = *(ulong *)(unaff_RBX + 8);
    bVar6 = uVar5 < unaff_R15;
    if (unaff_R15 < uVar5) goto LAB_0c5439fc;
  }
  if (!bVar6) {
    return 0;
  }
  fVar7 = (float)func_0x0eee3ab0((float)*(ulong *)(unaff_RBX + 0x18) / *(float *)(unaff_RBX + 0x20))
  ;
  uVar4 = (long)(fVar7 - _DAT_01198778) & (long)fVar7 >> 0x3f | (long)fVar7;
  if ((unaff_R15 < 3) ||
     (uVar3 = unaff_R15 - (unaff_R15 >> 1 & 0x5555555555555555),
     uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333),
     1 < (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
    uVar4 = func_0x0412c3f0(uVar4);
  }
  else if (1 < uVar4) {
    lVar2 = 0x3f;
    if (uVar4 - 1 != 0) {
      for (; uVar4 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (unaff_R15 <= uVar5) {
    return 0;
  }
LAB_0c5439fc:
  func_0x0c543b20();
  return 0;
LAB_0c54392b:
  param_3 = (uVar5 & 0xffffffff) % (unaff_R15 & 0xffffffff);
  goto code_r0x0c543930;
}


