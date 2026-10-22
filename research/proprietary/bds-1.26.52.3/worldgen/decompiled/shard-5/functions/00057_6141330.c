/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6241330 (ELF vaddr 0x6141330)
 * Label: Editor::Services::EditorJigsawService::vslot4
 * Body:  [[06241330, 06241367] [06241370, 062413ae] [062413b0, 062413ca] [062413d0, 06241430]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot4
 */


undefined8 * wg_Editor__Services__EditorJigsawService__vslot4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  bool bVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(long **)(param_2 + 0x1f8) != (long *)(param_2 + 0x200)) {
    puVar6 = (undefined4 *)0x0;
    plVar7 = *(long **)(param_2 + 0x1f8);
    do {
      if (puVar6 < (undefined4 *)param_1[2]) {
        if ((*(byte *)(plVar7 + 4) & 1) != 0) {
          func_0x0412e5e0(puVar6,plVar7[6],plVar7[5]);
          puVar6 = puVar6 + 6;
          param_1[1] = puVar6;
          plVar1 = (long *)plVar7[1];
          goto joined_r0x062413c7;
        }
        *(long *)(puVar6 + 4) = plVar7[6];
        uVar2 = *(undefined4 *)((long)plVar7 + 0x24);
        lVar4 = plVar7[5];
        uVar3 = *(undefined4 *)((long)plVar7 + 0x2c);
        *puVar6 = *(undefined4 *)(plVar7 + 4);
        puVar6[1] = uVar2;
        puVar6[2] = (int)lVar4;
        puVar6[3] = uVar3;
        puVar6 = puVar6 + 6;
        param_1[1] = puVar6;
        plVar1 = (long *)plVar7[1];
        if ((long *)plVar7[1] != (long *)0x0) goto LAB_06241400;
LAB_06241410:
        do {
          plVar5 = (long *)plVar7[2];
          bVar8 = plVar7 != (long *)*plVar5;
          plVar7 = plVar5;
        } while (bVar8);
      }
      else {
        puVar6 = (undefined4 *)func_0x04909a40(param_1);
        param_1[1] = puVar6;
        plVar1 = (long *)plVar7[1];
joined_r0x062413c7:
        if (plVar1 == (long *)0x0) goto LAB_06241410;
LAB_06241400:
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar7 = plVar5;
    } while (plVar5 != (long *)(param_2 + 0x200));
  }
  return param_1;
}


