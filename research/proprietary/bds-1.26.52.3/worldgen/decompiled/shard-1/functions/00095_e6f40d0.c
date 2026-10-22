/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6f40d0
 * Label: caller-of-seed
 * Body:  [[0e6f40d0, 0e6f40fb] [0e6f424c, 0e6f425c]]
 * Ghidra: FUN_0e6f40d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0e6f40d0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (undefined8 *)*param_2;
  }
  switch(param_1) {
  case 0:
    param_3 = (undefined8 *)0xf75e100;
    if (cRam000000000f75e118 == '\0') {
      iVar3 = func_0x04108328(0xf75e118);
      if (iVar3 == 0) {
        param_3 = (undefined8 *)0xf75e100;
      }
      else {
        func_0x0e6f4300();
        func_0x0410844d(0xf75e118);
        param_3 = (undefined8 *)0xf75e100;
      }
    }
    break;
  case 1:
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
      func_0x0412a280(param_2[3],param_2[1] & 0xfffffffffffffffe);
    }
    param_2[3] = param_3[3];
    uVar2 = param_3[2];
    param_2[1] = param_3[1];
    param_2[2] = uVar2;
    *(undefined2 *)(param_3 + 1) = 0;
    break;
  case 2:
    if (param_2 != param_3) {
      pbVar7 = (byte *)(param_2 + 1);
      bVar1 = *(byte *)(param_3 + 1);
      if ((*pbVar7 & 1) == 0) {
        if ((bVar1 & 1) == 0) {
          param_2[3] = param_3[3];
          uVar2 = param_3[2];
          *(undefined8 *)pbVar7 = param_3[1];
          param_2[2] = uVar2;
        }
        else {
          func_0x04885070(pbVar7,param_3[3],param_3[2]);
        }
      }
      else {
        bVar8 = (bVar1 & 1) != 0;
        lVar5 = (long)param_3 + 9;
        if (bVar8) {
          lVar5 = param_3[3];
        }
        uVar6 = (ulong)(bVar1 >> 1);
        if (bVar8) {
          uVar6 = param_3[2];
        }
        func_0x04885120(pbVar7,lVar5,uVar6);
      }
    }
    break;
  case 3:
    if (param_2 != param_3) {
      param_3 = (undefined8 *)0x0;
    }
    break;
  case 4:
    param_3[2] = FUN_0e6f40d0;
    *(undefined4 *)(param_3 + 4) = 0x81aff188;
    param_3[3] = &UNK_0e6f42e0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar4 = &UNK_0f4c6f98;
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      puVar4[3] = param_2[3];
      uVar2 = param_2[2];
      puVar4[1] = param_2[1];
      puVar4[2] = uVar2;
    }
    else {
      func_0x0412e5e0(puVar4 + 1,param_2[3],param_2[2]);
    }
    *param_3 = puVar4;
  default:
    param_3 = (undefined8 *)0x0;
  }
  return param_3;
}


