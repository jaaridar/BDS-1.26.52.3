/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x534f4c0 (ELF vaddr 0x524f4c0)
 * Label: ClimateBiomeComponentGlue::vslot3
 * Body:  [[0534f4c0, 0534f5c2]]
 * Ghidra: wg_ClimateBiomeComponentGlue__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_ClimateBiomeComponentGlue__vslot3(undefined8 param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  cVar5 = *(char *)((long)param_3 + 0x24);
  puVar8 = (undefined8 *)*param_3;
  puVar6 = puVar8;
  if (cVar5 == '\x02') {
    puVar6 = param_3;
  }
  if (puVar6 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x1a0f8f0) {
    uVar4 = param_3[5];
    lVar7 = param_3[6];
    if (lVar7 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar7 = param_3[6];
      cVar5 = *(char *)((long)param_3 + 0x24);
      puVar8 = (undefined8 *)*param_3;
    }
    if (cVar5 == '\x02') {
      puVar8 = param_3;
    }
    puVar6 = (undefined8 *)FUN_0488e200(uVar4,lVar7,0xfe5f0710,puVar8);
  }
  lVar7 = func_0x0535cd40(param_2 + 0x170);
  if (*(char *)((long)puVar6 + 0xc) == '\x01') {
    fVar1 = *(float *)(puVar6 + 1);
    *(float *)(lVar7 + 0xc) = fVar1;
    *(float *)(param_2 + 0xc) = fVar1;
    if (fVar1 < _DAT_011986e8) {
      *(undefined1 *)(param_2 + 0x40) = 0;
    }
  }
  if (*(char *)(puVar6 + 3) == '\x01') {
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(puVar6 + 2);
    uVar3 = *(undefined4 *)((long)puVar6 + 0x14);
    *(undefined4 *)(lVar7 + 0x14) = uVar3;
    uVar2 = *(undefined4 *)(puVar6 + 2);
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    cVar5 = *(char *)(puVar6 + 4);
  }
  else {
    cVar5 = *(char *)(puVar6 + 4);
  }
  if (cVar5 != '\x01') {
    return;
  }
  uVar3 = *(undefined4 *)((long)puVar6 + 0x1c);
  *(undefined4 *)(lVar7 + 8) = uVar3;
  *(undefined4 *)(param_2 + 8) = uVar3;
  return;
}


