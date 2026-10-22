/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd4eb50 (ELF vaddr 0xcc4eb50)
 * Label: callee-of:0xc5c9d20
 * Body:  [[0cd4eb50, 0cd4ee50]]
 * Ghidra: FUN_0cd4eb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cd4eb50(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = (long)((ulong)*param_2 * 0x2fc20f00000001) >> 0x20 ^ (long)(int)param_2[2] * 0x6ebfff5;
  uVar3 = (long)(int)((uVar2 * 0x285b825 + 0xb) * uVar2 >> 0x10) ^ 0x6a09e667f3bcc909;
  uVar2 = (uVar3 >> 0x1e ^ uVar3) * -0x40a7b892e31b1a47;
  uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
  uVar2 = uVar2 >> 0x1f ^ uVar2;
  uVar3 = (uVar3 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar3 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47;
  uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
  uVar3 = uVar3 >> 0x1f ^ uVar3;
  if (uVar3 == 0 && uVar2 == 0) {
    uVar2 = 0x9e3779b97f4a7c15;
    uVar3 = 0x6a09e667f3bcc909;
  }
  fVar7 = (float)*param_1;
  fVar8 = (float)((ulong)*param_1 >> 0x20);
  uVar4 = uVar3 ^ uVar2;
  if (fVar7 < fVar8) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 == 1) {
      fVar7 = (fVar8 + fVar7) * _DAT_011986e0;
    }
    else {
      fVar5 = (float)(uint)(((uVar3 + uVar2) * 0x20000 | uVar3 + uVar2 >> 0x2f) + uVar2 >> 0x28) *
              _DAT_01198a44;
      if (uVar1 == 0) {
        fVar7 = fVar7 + (fVar8 - fVar7) * fVar5;
      }
      else {
        fVar5 = (float)func_0x0eee4390(fVar5 * (float)uVar1);
        fVar7 = fVar7 + fVar5 * ((fVar8 - fVar7) / (float)(uVar1 - 1));
      }
    }
  }
  uVar3 = uVar4 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar4;
  uVar2 = uVar4 << 0x1c | uVar4 >> 0x24;
  fVar8 = (float)*(undefined8 *)((long)param_1 + 0xc);
  fVar5 = (float)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  if (fVar8 < fVar5) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if (uVar1 == 1) {
      fVar8 = (fVar5 + fVar8) * _DAT_011986e0;
    }
    else {
      uVar4 = uVar3 + uVar2;
      fVar6 = (float)(uint)((uVar4 * 0x20000 | uVar4 >> 0x2f) + uVar3 >> 0x28) * _DAT_01198a44;
      if (uVar1 == 0) {
        fVar8 = fVar8 + (fVar5 - fVar8) * fVar6;
      }
      else {
        fVar6 = (float)func_0x0eee4390(fVar6 * (float)uVar1);
        fVar8 = fVar8 + fVar6 * ((fVar5 - fVar8) / (float)(uVar1 - 1));
      }
    }
  }
  if (((float)param_1[3] < (float)((ulong)param_1[3] >> 0x20)) &&
     (uVar1 = *(uint *)(param_1 + 4), uVar1 != 1)) {
    uVar2 = uVar2 ^ uVar3;
    uVar3 = uVar2 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar2;
    uVar2 = (uVar2 << 0x1c | uVar2 >> 0x24) + uVar3;
    if (uVar1 != 0) {
      func_0x0eee4390((float)(uint)((uVar2 * 0x20000 | uVar2 >> 0x2f) + uVar3 >> 0x28) *
                      _DAT_01198a44 * (float)uVar1);
    }
  }
  return CONCAT44(fVar8,fVar7);
}


