/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5353490 (ELF vaddr 0x5253490)
 * Label: SurfaceBuilderBiomeComponentGlue::vslot2
 * Body:  [[05353490, 05353661]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot2
 */


undefined8 wg_SurfaceBuilderBiomeComponentGlue__vslot2(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  
  iVar8 = *(int *)(param_2 + 4);
  cVar2 = *(char *)((long)param_2 + 0x24);
  puVar7 = (undefined8 *)*param_2;
  puVar3 = puVar7;
  if (cVar2 == '\x02') {
    puVar3 = param_2;
  }
  uStack_70 = param_1;
  uStack_68 = param_1;
  uStack_60 = param_1;
  uStack_50 = param_1;
  uStack_40 = param_1;
  uStack_30 = param_1;
  uStack_20 = param_1;
  if (puVar3 == (undefined8 *)0x0 || iVar8 != 0x54699842) {
    if ((code *)param_2[7] != (code *)0x0) {
      uVar5 = param_2[5];
      lVar9 = param_2[6];
      if (lVar9 == 0) {
        (*(code *)param_2[7])(0,param_2,0);
        lVar9 = param_2[6];
        cVar2 = *(char *)((long)param_2 + 0x24);
        puVar7 = (undefined8 *)*param_2;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_2;
      }
      puVar3 = (undefined8 *)func_0x0488e200(uVar5,lVar9,0x54699842,puVar7);
      if (puVar3 != (undefined8 *)0x0) goto LAB_0535351c;
      iVar8 = *(int *)(param_2 + 4);
      cVar2 = *(char *)((long)param_2 + 0x24);
      puVar7 = (undefined8 *)*param_2;
    }
    puVar3 = puVar7;
    if (cVar2 == '\x02') {
      puVar3 = param_2;
    }
    if ((iVar8 != -0x65a1c94) || (puVar3 == (undefined8 *)0x0)) {
      if ((code *)param_2[7] == (code *)0x0) {
        return 0;
      }
      uVar5 = param_2[5];
      lVar9 = param_2[6];
      if (lVar9 == 0) {
        (*(code *)param_2[7])(0,param_2,0);
        lVar9 = param_2[6];
        cVar2 = *(char *)((long)param_2 + 0x24);
        puVar7 = (undefined8 *)*param_2;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_2;
      }
      puVar3 = (undefined8 *)func_0x0488e200(uVar5,lVar9,0xf9a5e36c,puVar7);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
    }
    uVar4 = (ulong)*(uint *)(puVar3 + 0x3c);
    if (uVar4 == 0xffffffff) {
LAB_0535365c:
      puStack_28 = &uStack_70;
      puStack_58 = &uStack_70;
      puStack_48 = puStack_58;
      puStack_38 = puStack_58;
      func_0x04931450();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    puVar6 = &UNK_0efa5950;
  }
  else {
LAB_0535351c:
    uVar4 = (ulong)*(uint *)(puVar3 + 0x3c);
    if (uVar4 == 0xffffffff) goto LAB_0535365c;
    puVar6 = &UNK_0efa5918;
  }
  puStack_58 = &uStack_70;
  puStack_78 = &uStack_68;
  puStack_48 = puStack_58;
  puStack_38 = puStack_58;
  puStack_28 = puStack_58;
  uVar5 = (**(code **)(puVar6 + uVar4 * 8))(&puStack_78,puVar3 + 2);
  return uVar5;
}


