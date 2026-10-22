/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6241200 (ELF vaddr 0x6141200)
 * Label: Editor::Services::EditorJigsawService::vslot13
 * Body:  [[06241200, 06241237] [06241240, 0624127e] [06241280, 0624129a] [062412a0, 06241300]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot13
 */


undefined8 * wg_Editor__Services__EditorJigsawService__vslot13(undefined8 *param_1,long param_2)

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
  if (*(long **)(param_2 + 0x220) != (long *)(param_2 + 0x228)) {
    puVar6 = (undefined4 *)0x0;
    plVar7 = *(long **)(param_2 + 0x220);
    do {
      if (puVar6 < (undefined4 *)param_1[2]) {
        if ((*(byte *)(plVar7 + 4) & 1) != 0) {
          func_0x0412e5e0(puVar6,plVar7[6],plVar7[5]);
          puVar6 = puVar6 + 6;
          param_1[1] = puVar6;
          plVar1 = (long *)plVar7[1];
          goto joined_r0x06241297;
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
        if ((long *)plVar7[1] != (long *)0x0) goto LAB_062412d0;
LAB_062412e0:
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
joined_r0x06241297:
        if (plVar1 == (long *)0x0) goto LAB_062412e0;
LAB_062412d0:
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar7 = plVar5;
    } while (plVar5 != (long *)(param_2 + 0x228));
  }
  return param_1;
}


