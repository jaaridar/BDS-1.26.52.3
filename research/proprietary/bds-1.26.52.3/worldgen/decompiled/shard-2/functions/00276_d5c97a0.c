/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c97a0 (ELF vaddr 0xd5c97a0)
 * Label: callee-of:0xc967b50
 * Body:  [[0d6c97a0, 0d6c97ca] [0d6c97d0, 0d6c987a]]
 * Ghidra: FUN_0d6c97a0
 */


long FUN_0d6c97a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  lVar8 = *(long *)(param_1 + 8);
  param_1 = param_1 + 8;
  if (lVar8 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar9 = param_1;
    do {
      bVar10 = (*(byte *)(lVar8 + 0x20) & 1) != 0;
      lVar7 = lVar8 + 0x21;
      if (bVar10) {
        lVar7 = *(long *)(lVar8 + 0x30);
      }
      uVar6 = (ulong)(*(byte *)(lVar8 + 0x20) >> 1);
      if (bVar10) {
        uVar6 = *(ulong *)(lVar8 + 0x28);
      }
      uVar5 = uVar2;
      if (uVar6 < uVar2) {
        uVar5 = uVar6;
      }
      uVar3 = func_0x0eee2ff0(uVar1,lVar7,uVar5);
      if (uVar3 == 0) {
        uVar3 = 0;
        if (uVar2 != uVar6) {
          uVar3 = -(uint)(uVar2 < uVar6) | 1;
        }
      }
      if ((int)uVar3 < 1) {
        lVar9 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)(0 < (int)uVar3) * 8);
    } while (lVar8 != 0);
    if (lVar9 != param_1) {
      bVar10 = (*(byte *)(lVar9 + 0x20) & 1) != 0;
      lVar8 = lVar9 + 0x21;
      if (bVar10) {
        lVar8 = *(long *)(lVar9 + 0x30);
      }
      uVar6 = (ulong)(*(byte *)(lVar9 + 0x20) >> 1);
      if (bVar10) {
        uVar6 = *(ulong *)(lVar9 + 0x28);
      }
      uVar5 = uVar2;
      if (uVar6 < uVar2) {
        uVar5 = uVar6;
      }
      iVar4 = func_0x0eee2ff0(uVar1,lVar8,uVar5);
      if (iVar4 == 0) {
        if (uVar6 <= uVar2) {
          return lVar9;
        }
      }
      else if (-1 < iVar4) {
        return lVar9;
      }
    }
  }
  return param_1;
}


