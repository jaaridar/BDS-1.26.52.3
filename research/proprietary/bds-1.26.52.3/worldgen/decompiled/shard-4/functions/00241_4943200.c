/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a43200 (ELF vaddr 0x4943200)
 * Label: callee-of:0x5188770
 * Body:  [[04a43200, 04a43249] [04a43250, 04a43332] [04a43340, 04a43437]]
 * Ghidra: FUN_04a43200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_04a43200(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iStack_5c;
  ulong uStack_58;
  ulong uStack_50;
  
  uStack_58 = 0;
  lVar1 = func_0x04a43440(param_2,0,0);
  uVar2 = lVar1 << 0x16;
  uVar7 = 0x200;
  fVar9 = 0.0;
  iVar6 = 1;
  iStack_5c = 0;
  do {
    fVar10 = (float)func_0x0eee3830();
    fVar11 = (float)(int)uVar7;
    uVar8 = (uint)(fVar10 * fVar11);
    fVar10 = (float)cosf(fVar9);
    iVar4 = (int)(fVar10 * fVar11);
    lVar1 = func_0x04a43440(param_2,(ulong)uVar8,iVar4);
    uVar3 = lVar1 * 0x400000 + (ulong)(iVar4 * iVar4 + uVar8 * uVar8);
    if ((long)uVar3 < (long)uVar2) {
      uStack_58 = (ulong)uVar8;
      iStack_5c = iVar4;
      uVar2 = uVar3;
    }
    fVar10 = _DAT_01198580 / fVar11 + fVar9;
    fVar9 = 0.0;
    if (fVar10 <= _DAT_01198348) {
      fVar9 = fVar10;
    }
    uVar7 = uVar7 + (uint)(_DAT_01198348 < fVar10) * 0x200;
    iVar6 = iVar6 + 1;
  } while (uVar7 < 0x801);
  uVar7 = 0x20;
  fVar9 = 0.0;
  iVar4 = iStack_5c;
  uStack_50 = uStack_58;
  do {
    fVar10 = (float)func_0x0eee3830();
    fVar11 = (float)(int)uVar7;
    uVar8 = (int)(fVar10 * fVar11) + (int)uStack_58;
    fVar10 = (float)cosf(fVar9);
    iVar5 = (int)(fVar10 * fVar11) + iStack_5c;
    lVar1 = func_0x04a43440(param_2,(ulong)uVar8,iVar5);
    uVar3 = lVar1 * 0x400000 + (ulong)(iVar5 * iVar5 + uVar8 * uVar8);
    if ((long)uVar3 < (long)uVar2) {
      uStack_50 = (ulong)uVar8;
      iVar4 = iVar5;
      uVar2 = uVar3;
    }
    fVar10 = _DAT_01198c60 / fVar11 + fVar9;
    fVar9 = 0.0;
    if (fVar10 <= _DAT_01198348) {
      fVar9 = fVar10;
    }
    uVar7 = uVar7 + (uint)(_DAT_01198348 < fVar10) * 0x20;
    iVar6 = iVar6 + 1;
  } while (uVar7 < 0x201);
  *param_1 = uStack_50;
  *(int *)(param_1 + 1) = iVar4;
  *(int *)((long)param_1 + 0xc) = iVar6;
  param_1[2] = uVar2;
  return param_1;
}


