/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c9580 (ELF vaddr 0xd5c9580)
 * Label: callee-of:0xc9687f0
 * Body:  [[0d6c9580, 0d6c95c0] [0d6c95d0, 0d6c961a] [0d6c9620, 0d6c9712]]
 * Ghidra: FUN_0d6c9580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d6c9580(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  
  plVar3 = (long *)param_1[1];
  if (plVar3 == (long *)0x0) {
    plVar6 = param_1 + 1;
    plVar8 = plVar6;
  }
  else {
    bVar12 = (*param_2 & 1) != 0;
    pbVar11 = param_2 + 1;
    if (bVar12) {
      pbVar11 = *(byte **)(param_2 + 0x10);
    }
    uVar10 = (ulong)(*param_2 >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        plVar6 = plVar3;
        bVar12 = (*(byte *)(plVar6 + 4) & 1) != 0;
        lVar7 = (long)plVar6 + 0x21;
        if (bVar12) {
          lVar7 = plVar6[6];
        }
        uVar5 = (ulong)(*(byte *)(plVar6 + 4) >> 1);
        if (bVar12) {
          uVar5 = plVar6[5];
        }
        uVar9 = uVar10;
        if (uVar5 < uVar10) {
          uVar9 = uVar5;
        }
        iVar2 = func_0x0eee2ff0(pbVar11,lVar7,uVar9);
        if (iVar2 != 0) break;
        if (uVar5 <= uVar10) goto LAB_0d6c9625;
LAB_0d6c95d0:
        plVar3 = (long *)*plVar6;
        plVar8 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_0d6c965d;
      }
      if (iVar2 < 0) goto LAB_0d6c95d0;
LAB_0d6c9625:
      iVar2 = func_0x0eee2ff0(lVar7,pbVar11,uVar9);
      if (iVar2 == 0) {
        if (uVar5 < uVar10) goto LAB_0d6c9647;
LAB_0d6c96eb:
        uVar4 = 0;
        plVar3 = plVar6;
        goto LAB_0d6c96f0;
      }
      if (-1 < iVar2) goto LAB_0d6c96eb;
LAB_0d6c9647:
      plVar3 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar8 = plVar6 + 1;
  }
LAB_0d6c965d:
  plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (plVar3 == (long *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  plVar1 = (long *)*param_4;
  plVar3[6] = plVar1[2];
  lVar7 = plVar1[1];
  plVar3[4] = *plVar1;
  plVar3[5] = lVar7;
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar3[7] = (long)&UNK_0f0f7cf8;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar6;
  *plVar8 = (long)plVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x048bed00(param_1[1],plVar3);
  param_1[2] = param_1[2] + 1;
  uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
LAB_0d6c96f0:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar3;
  return auVar13;
}


