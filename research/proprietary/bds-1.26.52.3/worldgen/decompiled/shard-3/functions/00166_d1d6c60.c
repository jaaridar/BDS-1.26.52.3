/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d6c60
 * Label: br::worldgen::processors::BlockIgnore::vslot5
 * Body:  [[0412c2d0, 0412c2f1] [0d1d6c60, 0d1d6eac]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot5
 */


/* WARNING: Possible PIC construction at 0x0d1d6c8b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d1d6e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d1d6e36: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d1d6c90) */
/* WARNING: Removing unreachable block (ram,0x0d1d6e3b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__BlockIgnore__vslot5(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_RDX;
  ulong uVar10;
  long *plVar11;
  
  plVar11 = (long *)((undefined8 *)*param_2)[1];
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
    goto SUB_0412c2d0;
  }
  lVar6 = param_2[2];
  *param_1 = *(undefined8 *)*param_2;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = (int)lVar6;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = *(uint *)(param_2 + 2);
  lVar6 = func_0x0d1e8a00(param_2[1],0xc1e354a3);
  uVar10 = (ulong)((uVar3 & 0x3ffff) >> 0xb);
  if (((uVar10 < (ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 3)) &&
      (lVar5 = *(long *)(*(long *)(lVar6 + 8) + uVar10 * 8), lVar5 != 0)) &&
     (uVar4 = *(uint *)(lVar5 + (ulong)(uVar3 & 0x7ff) * 4), (uVar3 & 0xfffc0000 ^ uVar4) < 0x3ffff)
     ) {
    uVar10 = (ulong)(uVar4 & 0x3ffff);
  }
  else {
    func_0x0d1e96d0(lVar6,uVar3,0);
    uVar10 = extraout_RDX - 1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + (uVar10 >> 7) * 8);
  uVar10 = (ulong)(((uint)uVar10 & 0x7f) << 4);
  plVar1 = (long *)(lVar6 + uVar10);
  if ((*(long *)(lVar6 + 8 + uVar10) == 0) ||
     (plVar7 = (long *)func_0x0412c300(), plVar7 == (long *)0x0)) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar1 != 0) {
    param_1[3] = *plVar1;
    plVar11 = (long *)param_1[4];
    param_1[4] = plVar7;
    if (plVar11 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar11 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 != 0) {
      return;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
    goto SUB_0412c2d0;
  }
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &UNK_0f459d28;
  puVar9 = puVar8 + 3;
  param_1[3] = puVar9;
  plVar11 = (long *)param_1[4];
  param_1[4] = puVar8;
  if (plVar11 == (long *)0x0) {
LAB_0d1d6e22:
    LOCK();
    puVar8[2] = puVar8[2] + 1;
    UNLOCK();
  }
  else {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      goto SUB_0412c2d0;
    }
    puVar9 = (undefined8 *)param_1[3];
    puVar8 = (undefined8 *)param_1[4];
    if (puVar8 != (undefined8 *)0x0) goto LAB_0d1d6e22;
    puVar8 = (undefined8 *)0x0;
  }
  *plVar1 = (long)puVar9;
  plVar11 = (long *)plVar1[1];
  plVar1[1] = (long)puVar8;
  if (plVar11 == (long *)0x0) {
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar6 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar11 = plVar7;
        goto SUB_0412c2d0;
      }
    }
    return;
  }
SUB_0412c2d0:
  if (plVar11[2] != 0) {
    LOCK();
    plVar1 = plVar11 + 2;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x20))();
  return;
}


