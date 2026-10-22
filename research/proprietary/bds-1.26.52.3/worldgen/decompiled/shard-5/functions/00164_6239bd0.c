/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6339bd0 (ELF vaddr 0x6239bd0)
 * Label: callee-of:0x6141460
 * Body:  [[06339bd0, 06339c0c] [06339c10, 06339cbc]]
 * Ghidra: FUN_06339bd0
 */


long FUN_06339bd0(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  bool bVar10;
  
  lVar5 = *(long *)(param_1 + 8);
  param_1 = param_1 + 8;
  if (lVar5 != 0) {
    bVar10 = (*param_2 & 1) != 0;
    pbVar9 = param_2 + 1;
    if (bVar10) {
      pbVar9 = *(byte **)(param_2 + 0x10);
    }
    lVar8 = param_1;
    uVar7 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(param_2 + 8);
    }
    do {
      bVar10 = (*(byte *)(lVar5 + 0x20) & 1) != 0;
      lVar6 = lVar5 + 0x21;
      if (bVar10) {
        lVar6 = *(long *)(lVar5 + 0x30);
      }
      uVar4 = (ulong)(*(byte *)(lVar5 + 0x20) >> 1);
      if (bVar10) {
        uVar4 = *(ulong *)(lVar5 + 0x28);
      }
      uVar3 = uVar4;
      if (uVar7 < uVar4) {
        uVar3 = uVar7;
      }
      uVar1 = func_0x0eee2ff0(lVar6,pbVar9,uVar3);
      if (uVar1 == 0) {
        bVar10 = uVar4 < uVar7;
        uVar1 = (uint)bVar10 << 3;
      }
      else {
        bVar10 = SUB41(uVar1 >> 0x1f,0);
        uVar1 = uVar1 >> 0x1c & 0xfffffff8;
      }
      if (bVar10 == false) {
        lVar8 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)uVar1);
    } while (lVar5 != 0);
    if (lVar8 != param_1) {
      bVar10 = (*(byte *)(lVar8 + 0x20) & 1) != 0;
      lVar5 = lVar8 + 0x21;
      if (bVar10) {
        lVar5 = *(long *)(lVar8 + 0x30);
      }
      uVar4 = (ulong)(*(byte *)(lVar8 + 0x20) >> 1);
      if (bVar10) {
        uVar4 = *(ulong *)(lVar8 + 0x28);
      }
      uVar3 = uVar7;
      if (uVar4 < uVar7) {
        uVar3 = uVar4;
      }
      iVar2 = func_0x0eee2ff0(pbVar9,lVar5,uVar3);
      if (iVar2 == 0) {
        if (uVar4 <= uVar7) {
          return lVar8;
        }
      }
      else if (-1 < iVar2) {
        return lVar8;
      }
    }
  }
  return param_1;
}


