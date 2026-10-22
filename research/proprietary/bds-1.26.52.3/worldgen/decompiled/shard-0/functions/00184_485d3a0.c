/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495d3a0 (ELF vaddr 0x485d3a0)
 * Label: EditorCustomBiomeSource::vslot6
 * Body:  [[0495d3a0, 0495d3fc] [0495d400, 0495d4cc]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot6
 */


undefined8 * wg_EditorCustomBiomeSource__vslot6(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return param_1;
  }
  lVar7 = *(long *)(param_2 + 0x3f0);
  if (lVar7 != 0) {
    param_2 = param_2 + 0x3f0;
    bVar12 = (*(byte *)(param_3 + 0x198) & 1) != 0;
    lVar11 = param_3 + 0x199;
    if (bVar12) {
      lVar11 = *(long *)(param_3 + 0x1a8);
    }
    lVar10 = param_2;
    uVar9 = (ulong)(*(byte *)(param_3 + 0x198) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(param_3 + 0x1a0);
    }
    do {
      bVar12 = (*(byte *)(lVar7 + 0x20) & 1) != 0;
      lVar8 = lVar7 + 0x21;
      if (bVar12) {
        lVar8 = *(long *)(lVar7 + 0x30);
      }
      uVar6 = (ulong)(*(byte *)(lVar7 + 0x20) >> 1);
      if (bVar12) {
        uVar6 = *(ulong *)(lVar7 + 0x28);
      }
      uVar5 = uVar6;
      if (uVar9 < uVar6) {
        uVar5 = uVar9;
      }
      uVar3 = func_0x0eee2ff0(lVar8,lVar11,uVar5);
      if (uVar3 == 0) {
        bVar12 = uVar6 < uVar9;
        uVar3 = (uint)bVar12 << 3;
      }
      else {
        bVar12 = SUB41(uVar3 >> 0x1f,0);
        uVar3 = uVar3 >> 0x1c & 0xfffffff8;
      }
      if (bVar12 == false) {
        lVar10 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)uVar3);
    } while (lVar7 != 0);
    if (lVar10 != param_2) {
      bVar12 = (*(byte *)(lVar10 + 0x20) & 1) != 0;
      lVar7 = lVar10 + 0x21;
      if (bVar12) {
        lVar7 = *(long *)(lVar10 + 0x30);
      }
      uVar6 = (ulong)(*(byte *)(lVar10 + 0x20) >> 1);
      if (bVar12) {
        uVar6 = *(ulong *)(lVar10 + 0x28);
      }
      uVar5 = uVar9;
      if (uVar6 < uVar9) {
        uVar5 = uVar6;
      }
      iVar4 = func_0x0eee2ff0(lVar11,lVar7,uVar5);
      if (iVar4 == 0) {
        if (uVar6 <= uVar9) goto LAB_0495d4bd;
      }
      else if (-1 < iVar4) {
LAB_0495d4bd:
        uVar1 = *(undefined8 *)(lVar10 + 0x40);
        *param_1 = *(undefined8 *)(lVar10 + 0x38);
        param_1[1] = uVar1;
        uVar2 = 1;
        goto LAB_0495d497;
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  uVar2 = 0;
LAB_0495d497:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return param_1;
}


