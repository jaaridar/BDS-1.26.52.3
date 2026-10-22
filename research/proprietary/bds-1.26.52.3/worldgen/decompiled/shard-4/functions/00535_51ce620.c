/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52ce620 (ELF vaddr 0x51ce620)
 * Label: callee-of:0x4e2bb50
 * Body:  [[052ce620, 052ce79d] [052ce7be, 052ce80e]]
 * Ghidra: FUN_052ce620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052ce620(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  *(undefined2 *)(param_1 + 1) = 0x101;
  param_1[2] = _DAT_0f6b3a90;
  param_1[3] = 0;
  *param_1 = &UNK_0efa00a8;
  pbVar1 = (byte *)(param_1 + 5);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1 + 4 != param_2) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      param_1[7] = param_2[3];
      uVar5 = *(undefined4 *)((long)param_2 + 0xc);
      uVar6 = *(undefined4 *)(param_2 + 2);
      uVar7 = *(undefined4 *)((long)param_2 + 0x14);
      *(undefined4 *)pbVar1 = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((long)param_1 + 0x2c) = uVar5;
      *(undefined4 *)(param_1 + 6) = uVar6;
      *(undefined4 *)((long)param_1 + 0x34) = uVar7;
    }
    else {
      func_0x04885070(pbVar1,param_2[3],param_2[2]);
    }
  }
  param_1[4] = *param_2;
  pbVar2 = (byte *)(param_1 + 10);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_1 + 9 != param_3) {
    if ((*(byte *)(param_3 + 1) & 1) == 0) {
      param_1[0xc] = param_3[3];
      uVar9 = param_3[2];
      *(undefined8 *)pbVar2 = param_3[1];
      param_1[0xb] = uVar9;
    }
    else {
      func_0x04885070(pbVar2,param_3[3],param_3[2]);
    }
  }
  param_1[9] = *param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar4 = *param_4;
  lVar11 = param_4[1] - lVar4;
  if (lVar11 != 0) {
    if (lVar11 < 0) {
      uVar9 = func_0x04fa52a0();
      if ((*pbVar2 & 1) == 0) goto LAB_052ce7be;
      do {
        func_0x0412a280(param_1[0xc],param_1[10] & 0xfffffffffffffffe);
        bVar3 = *pbVar1;
        while( true ) {
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(param_1[7],param_1[5] & 0xfffffffffffffffe);
          }
          uVar10 = uVar9;
          func_0x0eee2d70();
          param_1[0xf] = uVar10;
          func_0x0412a280();
          if ((*pbVar2 & 1) != 0) break;
LAB_052ce7be:
          bVar3 = *pbVar1;
        }
      } while( true );
    }
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
    if (lVar8 == 0) {
      func_0x0eec74c0(lVar11,0);
    }
    param_1[0xe] = lVar8;
    param_1[0xf] = lVar8;
    param_1[0x10] = lVar8 + lVar11;
    func_0x0eee2f00(lVar8,lVar4,lVar11);
    param_1[0xf] = lVar8 + lVar11;
  }
  return;
}


