/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49ca900 (ELF vaddr 0x48ca900)
 * Label: XoroshiroRandom::vslot8
 * Body:  [[049ca900, 049caa58]]
 * Ghidra: wg_XoroshiroRandom__vslot8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double wg_XoroshiroRandom__vslot8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    return *(double *)(param_1 + 0x18);
  }
  uVar4 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  do {
    do {
      uVar1 = uVar3 ^ uVar4;
      uVar5 = uVar1 << 0x15 ^ (uVar4 << 0x31 | uVar4 >> 0xf) ^ uVar1;
      uVar2 = uVar1 << 0x1c | uVar1 >> 0x24;
      dVar7 = (double)(((uVar4 + uVar3) * 0x20000 | uVar4 + uVar3 >> 0x2f) + uVar4 >> 0xb) *
              _DAT_014f04b8;
      uVar1 = uVar5 + uVar2;
      uVar2 = uVar2 ^ uVar5;
      dVar8 = dVar7 + dVar7 + _DAT_014f0160;
      uVar4 = uVar2 << 0x15 ^ (uVar5 << 0x31 | uVar5 >> 0xf) ^ uVar2;
      uVar3 = uVar2 << 0x1c | uVar2 >> 0x24;
      dVar7 = (double)((uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar5 >> 0xb) * _DAT_014f04b8;
      dVar9 = dVar7 + dVar7 + _DAT_014f0160;
      dVar7 = dVar9 * dVar9 + dVar8 * dVar8;
    } while (_DAT_014f0478 <= dVar7);
  } while ((dVar7 == 0.0) && (!NAN(dVar7)));
  *(ulong *)(param_1 + 8) = uVar4;
  *(ulong *)(param_1 + 0x10) = uVar3;
  dVar6 = (double)func_0x0eee37c0();
  dVar7 = (dVar6 * _DAT_014f04a0) / dVar7;
  if (dVar7 < 0.0) {
    dVar7 = (double)func_0x0eee3800();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  *(double *)(param_1 + 0x18) = dVar9 * dVar7;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return dVar8 * dVar7;
}


