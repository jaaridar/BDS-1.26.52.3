/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851650 (ELF vaddr 0xc751650)
 * Label: FixedBiomeSource::vslot6
 * Body:  [[0c851650, 0c851753] [0c851760, 0c8517ab] [0c8517b0, 0c8517d6]]
 * Ghidra: wg_FixedBiomeSource__vslot6
 */


int * wg_FixedBiomeSource__vslot6(int *param_1,long param_2,int *param_3,uint param_4)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar8 = param_3[3] - *param_3;
  uVar10 = param_3[5] - param_3[2];
  uVar9 = param_3[4] - param_3[1];
  bVar2 = false;
  uVar14 = 0;
  uVar3 = uVar9 / param_4;
  param_1[1] = uVar3;
  iVar7 = (uVar8 / param_4) * uVar3;
  *param_1 = iVar7;
  iVar4 = (uVar10 / param_4) * iVar7;
  uStack_38 = 0;
  if (iVar4 == 0) {
    lVar12 = 0;
  }
  else {
    func_0x0c859e50(param_1 + 2,iVar4,&uStack_38);
    uVar8 = param_3[3] - *param_3;
    uVar9 = param_3[4] - param_3[1];
    uVar10 = param_3[5] - param_3[2];
    iVar7 = *param_1;
    uVar3 = param_1[1];
    lVar12 = *(long *)(param_1 + 2);
  }
  uVar8 = (int)uVar8 / (int)param_4 - 1;
  uVar9 = (int)uVar9 / (int)param_4 - 1;
  uVar10 = (int)uVar10 / (int)param_4 - 1;
  uVar5 = (int)uVar8 >> 0x1f & uVar8;
  uVar11 = (int)uVar9 >> 0x1f & uVar9;
  uVar13 = (int)uVar10 >> 0x1f & uVar10;
  if ((int)uVar8 < 1) {
    uVar8 = uVar14;
  }
  if ((int)uVar9 < 1) {
    uVar9 = uVar14;
  }
  if ((int)uVar10 < 1) {
    uVar10 = uVar14;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar14 = uVar13;
  uVar6 = uVar11;
  do {
    *(undefined8 *)(lVar12 + (ulong)(iVar7 * uVar14 + uVar3 * uVar5 + uVar6) * 8) = uVar1;
    if ((int)uVar14 < (int)uVar10) {
      uVar14 = uVar14 + 1;
    }
    else if ((int)uVar6 < (int)uVar9) {
      uVar14 = uVar13;
      uVar6 = uVar6 + 1;
    }
    else if ((int)uVar5 < (int)uVar8) {
      uVar5 = uVar5 + 1;
      uVar14 = uVar13;
      uVar6 = uVar11;
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2 || (uVar14 != uVar10 || (uVar6 != uVar9 || uVar5 != uVar8)));
  return param_1;
}


