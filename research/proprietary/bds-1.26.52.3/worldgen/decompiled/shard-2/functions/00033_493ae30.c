/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3ae30 (ELF vaddr 0x493ae30)
 * Label: BiomeSource3d::vslot6
 * Body:  [[04a3ae30, 04a3affd]]
 * Ghidra: wg_BiomeSource3d__vslot6
 */


undefined1  [16]
wg_BiomeSource3d__vslot6(int *param_1,long param_2,int *param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_58;
  int iStack_50;
  undefined1 uStack_4c;
  long lStack_48;
  int *piStack_40;
  long lStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar6 = param_3[3] - *param_3;
  uVar8 = param_3[5] - param_3[2];
  uVar5 = param_3[4] - param_3[1];
  param_1[1] = uVar5 / param_4;
  iVar7 = (uVar6 / param_4) * (uVar5 / param_4);
  *param_1 = iVar7;
  iVar7 = (uVar8 / param_4) * iVar7;
  uStack_58 = 0;
  lStack_48 = param_2;
  lStack_38 = param_5;
  if (iVar7 != 0) {
    func_0x0c859e50(param_1 + 2,iVar7,&uStack_58);
    uVar6 = param_3[3] - *param_3;
    uVar5 = param_3[4] - param_3[1];
    uVar8 = param_3[5] - param_3[2];
  }
  uVar4 = (long)(int)uVar8 % (long)(int)param_4 & 0xffffffff;
  if ((((int)uVar6 / (int)param_4 != 0) && ((int)uVar8 / (int)param_4 != 0)) &&
     ((int)uVar5 / (int)param_4 != 0)) {
    lStack_48 = lStack_48 + 8;
    iVar7 = 0;
    piStack_40 = param_1 + 2;
    do {
      iVar1 = *param_3;
      iVar9 = 0;
      do {
        iVar2 = param_3[2];
        iVar10 = 0;
        iVar11 = 0;
        do {
          uStack_4c = *(undefined1 *)(lStack_38 + 0xc);
          uStack_58 = CONCAT44(param_3[1] + iVar10,iVar7 * param_4 + iVar1);
          iStack_50 = iVar9 * param_4 + iVar2;
          uVar3 = func_0x04a3b2a0(lStack_48,&uStack_58);
          uVar4 = (ulong)(uint)(*param_1 * iVar9 + param_1[1] * iVar7 + iVar11);
          *(undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 8) = uVar3;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + param_4;
        } while ((int)uVar5 / (int)param_4 != iVar11);
        iVar9 = iVar9 + 1;
      } while (iVar9 != (int)uVar8 / (int)param_4);
      iVar7 = iVar7 + 1;
    } while (iVar7 != (int)uVar6 / (int)param_4);
  }
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = param_1;
  return auVar12;
}


