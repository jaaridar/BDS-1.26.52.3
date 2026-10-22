/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca64ea0 (ELF vaddr 0xc964ea0)
 * Label: Dimension::vslot32
 * Body:  [[0ca64ea0, 0ca64f5c]]
 * Ghidra: wg_Dimension__vslot32
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * wg_Dimension__vslot32(undefined4 param_1,float *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  
  *(undefined1 *)(param_2 + 4) = 0;
  lVar4 = (**(code **)(*(long *)param_3[0x14] + 0xac0))();
  lVar1 = *(long *)(lVar4 + 0x18);
  uVar6 = 0;
  if ((lVar1 != 0) && (1 < (int)((ulong)(*(long *)(lVar4 + 0x20) - lVar1) >> 4) * -0x11111111)) {
    if (*(int *)(lVar1 + 0xf8) != 1) {
      func_0x04931450();
      pcVar2 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
    }
    if (*(char *)(lVar1 + 0xf4) == '\x01') {
      uVar6 = param_1;
    }
  }
  uVar3 = (**(code **)(*(long *)param_3[0x14] + 0x428))();
  fVar7 = (float)(**(code **)(*param_3 + 0x170))(uVar6,param_3,uVar3);
  *param_2 = fVar7 * _DAT_01198b3c + fVar7 * _DAT_01198b3c;
  *(undefined8 *)(param_2 + 1) = _DAT_014e9660;
  param_2[3] = 0.0;
  return param_2;
}


