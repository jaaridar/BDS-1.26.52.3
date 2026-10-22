/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b4400 (ELF vaddr 0x47b4400)
 * Label: callee-of:0xcd3eb90
 * Body:  [[04885070, 04885259] [048b4400, 048b44bc]]
 * Ghidra: FUN_048b4400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_048b4400(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  
  bVar1 = (byte)param_1[3];
  puVar4 = (ulong *)(ulong)bVar1;
  if (bVar1 == (byte)param_2[3]) {
    puVar4 = (ulong *)(ulong)(bVar1 ^ 1);
    if (param_1 != param_2 && (bVar1 ^ 1) == 0) {
      bVar1 = (byte)*param_2;
      if ((*param_1 & 1) == 0) {
        if ((bVar1 & 1) == 0) {
          puVar4 = (ulong *)param_2[2];
          param_1[2] = (ulong)puVar4;
          uVar6 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = uVar6;
          return puVar4;
        }
        uVar6 = param_2[1];
        uVar10 = param_2[2];
        if (uVar6 < 0x17) {
          pbVar3 = (byte *)((long)param_1 + 1);
          *(char *)param_1 = (char)uVar6 * '\x02';
          if (uVar6 != 0) {
            func_0x0eee2ee0(pbVar3,uVar10,uVar6);
          }
        }
        else {
          if (uVar6 + 9 < 0x1f) {
            func_0x04882e30();
            pcVar2 = (code *)swi(3);
            puVar4 = (ulong *)(*pcVar2)();
            return puVar4;
          }
          uVar7 = 0x2c;
          if (0x2c < uVar6) {
            uVar7 = uVar6;
          }
          uVar7 = (uVar7 | 7) + 1;
          pbVar3 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
          if (pbVar3 == (byte *)0x0) {
            func_0x0eec74c0(uVar7,0);
          }
          func_0x0eee2f00(pbVar3,uVar10,uVar6);
          param_1[2] = (ulong)pbVar3;
          *param_1 = uVar7 | 1;
          param_1[1] = uVar6;
        }
        pbVar3[uVar6] = 0;
        return param_1;
      }
      bVar11 = (bVar1 & 1) != 0;
      pbVar3 = (byte *)((long)param_2 + 1);
      if (bVar11) {
        pbVar3 = (byte *)param_2[2];
      }
      uVar6 = (ulong)(bVar1 >> 1);
      if (bVar11) {
        uVar6 = param_2[1];
      }
      uVar10 = *param_1 & 0xfffffffffffffffe;
      if (uVar6 < uVar10) {
        uVar7 = param_1[2];
        param_1[1] = uVar6;
        if (uVar6 != 0) {
          func_0x0eee2ee0(uVar7,pbVar3,uVar6);
        }
      }
      else {
        if (-uVar10 - 9 < (uVar6 - uVar10) + 1) {
          func_0x04882e30();
          pcVar2 = (code *)swi(3);
          puVar4 = (ulong *)(*pcVar2)();
          return puVar4;
        }
        if ((*param_1 & 1) == 0) {
          pbVar8 = (byte *)((long)param_1 + 1);
        }
        else {
          pbVar8 = (byte *)param_1[2];
        }
        uVar9 = 0xfffffffffffffff7;
        if (uVar10 - 1 < 0x7ffffffffffffff3) {
          uVar7 = (uVar10 - 1) * 2;
          if (uVar7 < uVar6) {
            uVar7 = uVar6;
          }
          uVar5 = 0x1a;
          if ((uVar7 | 7) != 0x17) {
            uVar5 = (uVar7 | 7) + 1;
          }
          uVar9 = 0x17;
          if (0x16 < uVar7) {
            uVar9 = uVar5;
          }
        }
        uVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
        if (uVar9 != 0 && uVar7 == 0) {
          func_0x0eec74c0(uVar9,0);
        }
        if (uVar6 != 0) {
          func_0x0eee2f00(uVar7,pbVar3,uVar6);
        }
        func_0x0412a280(pbVar8,uVar10);
        param_1[2] = uVar7;
        *param_1 = uVar9 | 1;
        param_1[1] = uVar6;
      }
      *(undefined1 *)(uVar7 + uVar6) = 0;
      return param_1;
    }
  }
  else {
    if (bVar1 != 0) {
      if ((*param_1 & 1) != 0) {
        puVar4 = (ulong *)func_0x0412a280(param_1[2],*param_1 & 0xfffffffffffffffe);
      }
      *(byte *)(param_1 + 3) = 0;
      return puVar4;
    }
    if ((*param_2 & 1) == 0) {
      puVar4 = (ulong *)param_2[2];
      param_1[2] = (ulong)puVar4;
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
    }
    else {
      puVar4 = (ulong *)func_0x0412e5e0(param_1,param_2[2],param_2[1]);
    }
    *(byte *)(param_1 + 3) = 1;
  }
  return puVar4;
}


