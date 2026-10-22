/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b5060 (ELF vaddr 0x47b5060)
 * Label: callee-of:0xda370f0
 * Body:  [[048b5060, 048b512d] [048b5130, 048b52a1]]
 * Ghidra: FUN_048b5060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_048b5060(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  bool bVar13;
  float fVar14;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  byte *pbStack_38;
  
  pbVar12 = param_2 + 1;
  bVar13 = (*param_2 & 1) == 0;
  pbVar9 = *(byte **)(param_2 + 0x10);
  if (bVar13) {
    pbVar9 = pbVar12;
  }
  uVar3 = (ulong)(*param_2 >> 1);
  if (!bVar13) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  uVar3 = func_0x04883620(&uStack_51,pbVar9,uVar3);
  lStack_40 = *param_1;
  uVar3 = (param_1[1] - lStack_40 >> 3) - 1U & uVar3;
  lVar10 = *(long *)(lStack_40 + uVar3 * 8);
  plStack_50 = param_1;
  lStack_48 = lVar10;
  if (lVar10 != -1) {
    if ((*param_2 & 1) == 0) {
      uVar8 = (ulong)(*param_2 >> 1);
    }
    else {
      uVar8 = *(ulong *)(param_2 + 8);
      pbVar12 = *(byte **)(param_2 + 0x10);
    }
    lVar7 = param_1[3];
    do {
      lVar10 = lVar10 * 0x50;
      bVar1 = *(byte *)(lVar7 + 8 + lVar10);
      if ((bVar1 & 1) == 0) {
        uVar6 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10 + lVar10);
      }
      if (uVar6 == uVar8) {
        plVar11 = (long *)(lVar10 + lVar7);
        if ((bVar1 & 1) == 0) {
          lVar5 = (long)plVar11 + 9;
        }
        else {
          lVar5 = plVar11[3];
        }
        iVar2 = func_0x0eee3000(lVar5,pbVar12,uVar8);
        if (iVar2 == 0) {
          plVar4 = (long *)plStack_50[4];
          if (plVar11 != plVar4) {
            return plVar11;
          }
          goto LAB_048b516c;
        }
      }
      lVar10 = *(long *)(lVar10 + lVar7);
    } while (lVar10 != -1);
  }
  plVar4 = (long *)plStack_50[4];
LAB_048b516c:
  plVar11 = plStack_50;
  pbStack_38 = param_2;
  if (plVar4 < (long *)plStack_50[5]) {
    *plVar4 = lStack_48;
    plVar4[3] = *(long *)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 8);
    plVar4[1] = *(long *)param_2;
    plVar4[2] = lVar10;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[7] = (long)&UNK_0488e0b0;
    *(undefined4 *)(plVar4 + 9) = 0x48b5725f;
    plVar4[8] = 0;
    *(undefined1 *)((long)plVar4 + 0x4c) = 0;
    plVar4 = plVar4 + 10;
  }
  else {
    plVar4 = (long *)func_0x048b52b0(plStack_50 + 3,lStack_40 + uVar3 * 8,&UNK_01563a4f,&pbStack_38,
                                     &uStack_52);
  }
  plVar11[4] = (long)plVar4;
  lVar10 = *plVar11;
  lVar7 = plVar11[3];
  lVar5 = (long)plVar4 - lVar7;
  uVar8 = (lVar5 >> 4) * -0x3333333333333333;
  *(ulong *)(lVar10 + uVar3 * 8) = uVar8 - 1;
  lVar10 = plVar11[1] - lVar10;
  fVar14 = (float)(ulong)(lVar10 >> 3) * *(float *)(plVar11 + 6);
  uVar3 = (ulong)fVar14;
  uVar3 = (long)(fVar14 - _DAT_01198778) & (long)uVar3 >> 0x3f | uVar3;
  if (uVar3 <= uVar8 && uVar8 - uVar3 != 0) {
    func_0x048afb10(plVar11,lVar10 >> 2);
    lVar7 = plVar11[3];
    lVar5 = plVar11[4] - lVar7;
  }
  return (long *)(lVar7 + lVar5 + -0x50);
}


