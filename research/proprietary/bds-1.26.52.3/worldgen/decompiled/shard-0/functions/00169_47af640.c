/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48af640 (ELF vaddr 0x47af640)
 * Label: callee-of:0x82ea1a0
 * Body:  [[048af640, 048af7da]]
 * Ghidra: FUN_048af640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048af640(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  float fVar9;
  
  fVar9 = (float)(ulong)((param_1[4] - param_1[3] >> 3) * -0x5555555555555555) /
          *(float *)(param_1 + 6);
  uVar3 = (ulong)fVar9;
  uVar3 = (long)(fVar9 - _DAT_01198778) & (long)uVar3 >> 0x3f | uVar3;
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  uVar5 = 8;
  if (8 < uVar3) {
    uVar5 = uVar3;
  }
  lVar6 = 0x3f;
  if (uVar5 - 1 != 0) {
    for (; uVar5 - 1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  uVar3 = 1L << (-((byte)lVar6 ^ 0x3f) & 0x3f);
  lVar6 = *param_1;
  uVar5 = param_1[1] - lVar6 >> 3;
  if (uVar3 != uVar5) {
    if (uVar3 < uVar5) {
      lVar8 = lVar6 + uVar3 * 8;
      param_1[1] = lVar8;
    }
    else {
      func_0x048af7e0(param_1);
      lVar6 = *param_1;
      lVar8 = param_1[1];
    }
    if (lVar6 != lVar8) {
      func_0x0eee2dd0(lVar6,0xff,lVar8 - lVar6 & 0xfffffffffffffff8);
    }
    lVar1 = param_1[3];
    if (param_1[4] - lVar1 != 0) {
      uVar3 = (param_1[4] - lVar1 >> 3) * -0x5555555555555555;
      uVar4 = (int)((ulong)(lVar8 - lVar6) >> 3) - 1;
      if (uVar3 < 2) {
        uVar5 = 0;
        uVar3 = 1;
      }
      else {
        puVar7 = (uint *)(lVar1 + 0x20);
        uVar5 = 0;
        do {
          uVar2 = *(undefined8 *)(lVar6 + (ulong)(puVar7[-6] & uVar4) * 8);
          *(ulong *)(lVar6 + (ulong)(puVar7[-6] & uVar4) * 8) = uVar5;
          *(undefined8 *)(puVar7 + -8) = uVar2;
          uVar2 = *(undefined8 *)(lVar6 + (ulong)(*puVar7 & uVar4) * 8);
          *(ulong *)(lVar6 + (ulong)(*puVar7 & uVar4) * 8) = uVar5 + 1;
          *(undefined8 *)(puVar7 + -2) = uVar2;
          uVar5 = uVar5 + 2;
          puVar7 = puVar7 + 0xc;
        } while (uVar5 != (uVar3 & 0xfffffffffffffffe));
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = (ulong)(uVar4 & *(uint *)(lVar1 + 8 + uVar5 * 0x18));
        uVar2 = *(undefined8 *)(lVar6 + uVar3 * 8);
        *(ulong *)(lVar6 + uVar3 * 8) = uVar5;
        *(undefined8 *)(lVar1 + uVar5 * 0x18) = uVar2;
      }
    }
  }
  return;
}


