/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69010 (ELF vaddr 0xc969010)
 * Label: Dimension::vslot46
 * Body:  [[0ca69010, 0ca690d5]]
 * Ghidra: wg_Dimension__vslot46
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float wg_Dimension__vslot46(float param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  
  fVar1 = ((float)(param_3 % 24000) + param_1) / _DAT_011986b0 + _DAT_01198ae8;
  fVar1 = (float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 |
                 (uint)(fVar1 + _DAT_011983f0) & -(uint)(fVar1 < 0.0));
  fVar1 = (float)(~-(uint)(_DAT_011983f0 < fVar1) & (uint)fVar1 |
                 (uint)(fVar1 + _DAT_011985d4) & -(uint)(_DAT_011983f0 < fVar1));
  return (((*(float *)((ulong)((int)(_DAT_01198b3c * fVar1 * _DAT_01198bd8 + _DAT_01198b38) & 0xffff
                              ) * 4 + 0xf778a04) + _DAT_011983f0) * _DAT_01198780 + _DAT_011983f0) -
         fVar1) / _DAT_01198af0 + fVar1;
}


