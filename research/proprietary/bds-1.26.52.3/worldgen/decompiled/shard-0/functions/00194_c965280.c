/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc965280
 * Label: Dimension::vslot11
 * Body:  [[0c965280, 0c96530a]]
 * Ghidra: wg_Dimension__vslot11
 */


undefined8 *
wg_Dimension__vslot11
          (undefined8 *param_1,long *param_2,undefined8 param_3,ulong param_4,byte *param_5,
          ulong param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong in_R10;
  
  while ((short)param_2[2] != (short)param_4) {
    while( true ) {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_0c9652dc;
      uVar2 = param_2[1];
      if (uVar2 == param_4) break;
      if (param_6 <= uVar2) {
        if ((uVar2 | param_6) >> 0x20 == 0) {
          uVar2 = (uVar2 & 0xffffffff) % (param_6 & 0xffffffff);
        }
        else {
          uVar2 = uVar2 % param_6;
        }
      }
      if (uVar2 != in_R10) goto LAB_0c9652dc;
    }
  }
  param_5 = (byte *)(param_2 + 3);
LAB_0c9652dc:
  if ((*param_5 & 1) != 0) {
    func_0x0412e5e0(param_1,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
    return param_1;
  }
  param_1[2] = *(undefined8 *)(param_5 + 0x10);
  uVar1 = *(undefined8 *)(param_5 + 8);
  *param_1 = *(undefined8 *)param_5;
  param_1[1] = uVar1;
  return param_1;
}


