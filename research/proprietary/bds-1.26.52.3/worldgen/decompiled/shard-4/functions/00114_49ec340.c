/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4aec340 (ELF vaddr 0x49ec340)
 * Label: NoSurfaceOreFeature::vslot0
 * Body:  [[04abe980, 04abea07] [04abea10, 04abea28] [04abea30, 04abeac2] [04aec340, 04aec372]]
 * Ghidra: wg_NoSurfaceOreFeature__vslot0
 */


/* WARNING: Possible PIC construction at 0x04aec355: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abe9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04aec35a) */
/* WARNING: Removing unreachable block (ram,0x04abea59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_NoSurfaceOreFeature__vslot0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_10;
  
  *param_1 = &UNK_0ef568d8;
  uStack_10 = 0x4aec35a;
  puStack_28 = param_1;
  lVar5 = param_1[0x41];
  if ((lVar5 != param_1[0x3f]) || (*(int *)(param_1 + 0x40) != 0)) {
    uStack_30 = 0x4abe9c9;
    lVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if ((char)lVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lVar7 = param_1[0x39];
  if (lVar7 != 0) {
    param_1[0x3a] = lVar7;
    puVar6 = &uStack_30;
    uStack_30 = 0x4abe9f1;
    goto SUB_0412a280;
  }
  lVar7 = param_1[0x36];
  if (lVar7 != 0) {
    lVar9 = param_1[0x37];
    lVar8 = lVar7;
    if (lVar7 != lVar9) {
      do {
        if ((*(byte *)(lVar9 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar9 + -0x40);
        }
        else {
          uStack_30 = 0x4abea41;
          lVar5 = func_0x0412a280(*(undefined8 *)(lVar9 + -0x10),
                                  *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
          bVar2 = *(byte *)(lVar9 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          lVar7 = *(long *)(lVar9 + -0x30);
          puVar6 = &uStack_30;
          uStack_30 = 0x4abea59;
          goto SUB_0412a280;
        }
        lVar9 = lVar9 + -0x48;
      } while (lVar9 != lVar7);
      lVar8 = param_1[0x36];
    }
    param_1[0x37] = lVar7;
    uStack_30 = 0x4abea6f;
    lVar5 = func_0x0412a280(lVar8,param_1[0x38] - lVar8);
  }
  plVar3 = (long *)param_1[0x35];
  if (plVar3 == (long *)0x0) {
LAB_04abea8a:
    bVar2 = *(byte *)(param_1 + 0x2f);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 != 0) goto LAB_04abea8a;
    uStack_30 = 0x4abea9f;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uStack_30 = 0x4abeaa7;
    lVar5 = func_0x0412c2d0(plVar3);
    bVar2 = *(byte *)(param_1 + 0x2f);
  }
  if ((bVar2 & 1) == 0) {
    return lVar5;
  }
  lVar7 = param_1[0x31];
  puVar6 = &uStack_10;
SUB_0412a280:
  *(long *)((long)puVar6 + -8) = lVar5;
  if (lVar7 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar6 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar7);
  }
  return *(long *)((long)puVar6 + -8);
}


