/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe456b90
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e456b90, 0e456bbb] [0e456d96, 0e456da0]]
 * Ghidra: FUN_0e456b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0e456b90(undefined4 param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (*(byte *)((long)param_2 + 0x24) != 2) {
    param_2 = (ulong *)*param_2;
  }
  switch(param_1) {
  case 0:
    param_3 = (ulong *)0xf7527b8;
    if ((cRam000000000f7527d0 == '\0') && (iVar2 = func_0x04108328(0xf7527d0), iVar2 != 0)) {
      func_0x0e4569a0();
      func_0x0410844d(0xf7527d0);
    }
    break;
  case 1:
    if ((*param_2 & 1) != 0) {
      func_0x0412a280(param_2[2],*param_2 & 0xfffffffffffffffe);
    }
    param_2[2] = param_3[2];
    uVar6 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar6;
    *(undefined2 *)param_3 = 0;
    break;
  case 2:
    if (param_2 != param_3) {
      bVar1 = (byte)*param_3;
      if ((*param_2 & 1) == 0) {
        if ((bVar1 & 1) == 0) {
          param_2[2] = param_3[2];
          uVar6 = param_3[1];
          *param_2 = *param_3;
          param_2[1] = uVar6;
        }
        else {
          func_0x04885070(param_2,param_3[2],param_3[1]);
        }
      }
      else {
        bVar8 = (bVar1 & 1) != 0;
        pbVar7 = (byte *)((long)param_3 + 1);
        if (bVar8) {
          pbVar7 = (byte *)param_3[2];
        }
        uVar6 = (ulong)(bVar1 >> 1);
        if (bVar8) {
          uVar6 = param_3[1];
        }
        func_0x04885120(param_2,pbVar7,uVar6);
      }
    }
    break;
  case 3:
    bVar1 = (byte)*param_2;
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulong)(bVar1 >> 1);
      uVar5 = (ulong)(byte)*param_3;
      if (((byte)*param_3 & 1) == 0) goto code_r0x0e456ca5;
code_r0x0e456cf5:
      if (uVar6 != param_3[1]) goto LAB_0e456d96;
    }
    else {
      uVar6 = param_2[1];
      uVar5 = (ulong)(byte)*param_3;
      if (((byte)*param_3 & 1) != 0) goto code_r0x0e456cf5;
code_r0x0e456ca5:
      if (uVar6 != uVar5 >> 1) goto LAB_0e456d96;
    }
    if ((bVar1 & 1) == 0) {
      pbVar7 = (byte *)((long)param_2 + 1);
      if ((uVar5 & 1) == 0) goto code_r0x0e456d0f;
code_r0x0e456d3f:
      pbVar4 = (byte *)param_3[2];
    }
    else {
      pbVar7 = (byte *)param_2[2];
      if ((uVar5 & 1) != 0) goto code_r0x0e456d3f;
code_r0x0e456d0f:
      pbVar4 = (byte *)((long)param_3 + 1);
    }
    iVar2 = func_0x0eee3000(pbVar7,pbVar4);
    if (iVar2 != 0) {
      param_3 = (ulong *)0x0;
    }
    break;
  case 4:
    param_3[2] = (ulong)FUN_0e456b90;
    *(undefined4 *)(param_3 + 4) = 0x5069153;
    param_3[3] = (ulong)&UNK_0e456dc0;
    *(byte *)((long)param_3 + 0x24) = 1;
    puVar3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x0eec74c0(0x18,0);
      if ((*param_2 & 1) == 0) goto code_r0x0e456c4c;
code_r0x0e456d83:
      func_0x0412e5e0(puVar3,param_2[2],param_2[1]);
    }
    else {
      if ((*param_2 & 1) != 0) goto code_r0x0e456d83;
code_r0x0e456c4c:
      puVar3[2] = param_2[2];
      uVar6 = param_2[1];
      *puVar3 = *param_2;
      puVar3[1] = uVar6;
    }
    *param_3 = (ulong)puVar3;
  default:
LAB_0e456d96:
    param_3 = (ulong *)0x0;
  }
  return param_3;
}


