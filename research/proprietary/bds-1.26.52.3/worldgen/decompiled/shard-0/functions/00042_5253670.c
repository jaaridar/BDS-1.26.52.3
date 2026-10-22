/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5353670 (ELF vaddr 0x5253670)
 * Label: SurfaceBuilderBiomeComponentGlue::vslot3
 * Body:  [[05353670, 0535371d] [05353720, 0535391f]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SurfaceBuilderBiomeComponentGlue__vslot3
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  short *psVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  
  if (*(char *)(param_2 + 0x31) != '\x01') goto LAB_053536d9;
  if (DAT_0f5570f0 == '\0') goto LAB_053538de;
  do {
    for (psVar7 = (short *)param_2[0x2e]; psVar7 != (short *)param_2[0x2f]; psVar7 = psVar7 + 8) {
      if (*psVar7 == _DAT_0f5570e8) {
        lVar8 = *(long *)(psVar7 + 4);
        if (lVar8 != 0) goto LAB_053536eb;
        break;
      }
    }
LAB_053536d9:
    lVar8 = func_0x0535db40(param_2 + 0x2e);
LAB_053536eb:
    plStack_a8 = (long *)(lVar8 + 8);
    if (*(char *)(param_1 + 0xf8) == '\x01') {
      plVar1 = (long *)(lVar8 + 0x28);
      if ((*(char *)(lVar8 + 0x48) == '\x01') && (lVar2 = *plVar1, lVar2 != 0)) {
        lVar10 = *(long *)(lVar8 + 0x30);
        lVar11 = lVar2;
        if (lVar2 != lVar10) {
          do {
            plVar3 = *(long **)(lVar10 + -8);
            *(undefined8 *)(lVar10 + -8) = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            lVar10 = lVar10 + -0x10;
          } while (lVar10 != lVar2);
          lVar11 = *plVar1;
        }
        *(long *)(lVar8 + 0x30) = lVar2;
        thunk_FUN_0ee326a0(lVar11,*(long *)(lVar8 + 0x38) - lVar11);
      }
      *(undefined8 *)(lVar8 + 0x38) = 0;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *plVar1 = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(undefined1 *)(lVar8 + 0x40) = 1;
      *(undefined1 *)(lVar8 + 0x48) = 1;
      plStack_a8 = plVar1;
    }
    iVar6 = *(int *)(param_3 + 4);
    cVar5 = *(char *)((long)param_3 + 0x24);
    puVar9 = (undefined8 *)*param_3;
    param_2 = puVar9;
    if (cVar5 == '\x02') {
      param_2 = param_3;
    }
    if (param_2 == (undefined8 *)0x0 || iVar6 != 0x54699842) {
      if ((code *)param_3[7] != (code *)0x0) {
        uVar4 = param_3[5];
        lVar8 = param_3[6];
        if (lVar8 == 0) {
          (*(code *)param_3[7])(0,param_3,0);
          lVar8 = param_3[6];
          cVar5 = *(char *)((long)param_3 + 0x24);
          puVar9 = (undefined8 *)*param_3;
        }
        if (cVar5 == '\x02') {
          puVar9 = param_3;
        }
        param_2 = (undefined8 *)func_0x0488e200(uVar4,lVar8,0x54699842,puVar9);
        if (param_2 != (undefined8 *)0x0) goto LAB_05353859;
        iVar6 = *(int *)(param_3 + 4);
        cVar5 = *(char *)((long)param_3 + 0x24);
        puVar9 = (undefined8 *)*param_3;
      }
      param_2 = puVar9;
      if (cVar5 == '\x02') {
        param_2 = param_3;
      }
      if ((iVar6 != -0x65a1c94) || (param_2 == (undefined8 *)0x0)) {
        if ((code *)param_3[7] == (code *)0x0) {
          return;
        }
        uVar4 = param_3[5];
        lVar8 = param_3[6];
        if (lVar8 == 0) {
          (*(code *)param_3[7])(0,param_3,0);
          lVar8 = param_3[6];
          cVar5 = *(char *)((long)param_3 + 0x24);
          puVar9 = (undefined8 *)*param_3;
        }
        if (cVar5 == '\x02') {
          puVar9 = param_3;
        }
        param_2 = (undefined8 *)func_0x0488e200(uVar4,lVar8,0xf9a5e36c,puVar9);
        if (param_2 == (undefined8 *)0x0) {
          return;
        }
      }
    }
LAB_05353859:
    lStack_90 = param_1;
    lStack_80 = param_1;
    lStack_70 = param_1;
    lStack_60 = param_1;
    lStack_50 = param_1;
    lStack_40 = param_1;
    if ((ulong)*(uint *)(param_2 + 0x3c) != 0xffffffff) {
      ppuStack_a0 = &puStack_98;
      puStack_98 = (undefined1 *)&plStack_a8;
      puStack_88 = (undefined1 *)&plStack_a8;
      puStack_78 = (undefined1 *)&plStack_a8;
      puStack_68 = (undefined1 *)&plStack_a8;
      puStack_58 = (undefined1 *)&plStack_a8;
      puStack_48 = (undefined1 *)&plStack_a8;
      puStack_38 = (undefined1 *)&plStack_a8;
      (**(code **)(&UNK_0efa5988 + (ulong)*(uint *)(param_2 + 0x3c) * 8))(&ppuStack_a0,param_2 + 2);
      return;
    }
    puStack_98 = (undefined1 *)&plStack_a8;
    puStack_88 = (undefined1 *)&plStack_a8;
    puStack_78 = (undefined1 *)&plStack_a8;
    puStack_68 = (undefined1 *)&plStack_a8;
    puStack_58 = (undefined1 *)&plStack_a8;
    puStack_48 = (undefined1 *)&plStack_a8;
    puStack_38 = (undefined1 *)&plStack_a8;
    func_0x04931450();
LAB_053538de:
    iVar6 = func_0x04108328(&DAT_0f5570f0);
    if (iVar6 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f5570e8 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5570f0);
    }
  } while( true );
}


