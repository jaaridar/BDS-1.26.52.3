/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x723deb0 (ELF vaddr 0x713deb0)
 * Label: callee-of:0xc95fb20
 * Body:  [[0723deb0, 0723e018] [0723e020, 0723e062] [0723e070, 0723e0bc] [0723e0c0, 0723e174]]
 * Ghidra: FUN_0723deb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0723deb0(long *param_1,undefined4 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = param_1[1] - *param_1;
  uVar10 = (lVar15 >> 5) + 1;
  if (uVar10 >> 0x3b != 0) {
    func_0x0723e180();
LAB_0723e16f:
    func_0x04882eb0();
    pcVar8 = (code *)swi(3);
    lVar15 = (*pcVar8)();
    return lVar15;
  }
  uVar14 = param_1[2] - *param_1;
  uVar13 = (long)uVar14 >> 4;
  if (uVar13 <= uVar10) {
    uVar13 = uVar10;
  }
  if (0x7fffffffffffffdf < uVar14) {
    uVar13 = 0x7ffffffffffffff;
  }
  if (uVar13 == 0) {
    lVar11 = 0;
  }
  else {
    if (0x7ffffffffffffff < uVar13) goto LAB_0723e16f;
    lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 << 5);
    if (lVar11 == 0) {
      lVar11 = 0;
      FUN_0eec74c0(uVar13 << 5,0);
    }
  }
  lVar2 = lVar11 + lVar15;
  *(undefined4 *)(lVar11 + lVar15) = *param_2;
  lVar16 = *param_3;
  puVar3 = (undefined8 *)(lVar11 + 8 + lVar15);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar11 + 0x18 + lVar15) = 0;
  if (lVar16 != 0) {
    lVar5 = *(long *)(lVar16 + 8);
    lVar12 = *(long *)(lVar16 + 0x10);
    if (lVar12 == 0) {
      *(long *)(lVar2 + 8) = lVar5;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    else {
      LOCK();
      *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
      UNLOCK();
      plVar6 = *(long **)(lVar2 + 0x10);
      *(long *)(lVar2 + 8) = lVar5;
      *(long *)(lVar2 + 0x10) = lVar12;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
        lVar5 = *(long *)(lVar15 + lVar11 + 8);
      }
    }
    if (lVar5 != 0) {
      *(long *)(lVar2 + 0x18) = lVar16;
    }
  }
  lVar16 = *param_1;
  lVar5 = param_1[1];
  lVar15 = lVar2 + (lVar16 - lVar5);
  if (lVar16 - lVar5 != 0) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lVar15 + lVar12) = *(undefined4 *)(lVar16 + lVar12);
      lVar7 = *(long *)(lVar16 + 0x10 + lVar12);
      puVar3 = (undefined8 *)(lVar16 + 8 + lVar12);
      uVar9 = puVar3[1];
      puVar4 = (undefined8 *)(lVar15 + 8 + lVar12);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      if (lVar7 != 0) {
        LOCK();
        plVar6 = (long *)(lVar7 + 8);
        *plVar6 = *plVar6 + 1;
        UNLOCK();
      }
      lVar7 = lVar16 + lVar12;
      *(undefined8 *)(lVar15 + 0x18 + lVar12) = *(undefined8 *)(lVar7 + 0x18);
      lVar12 = lVar12 + 0x20;
    } while (lVar7 + 0x20 != lVar5);
    do {
      plVar6 = *(long **)(lVar16 + 0x10);
      *(undefined8 *)(lVar16 + 8) = 0;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      if (plVar6 == (long *)0x0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
      }
      else {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
          plVar6 = *(long **)(lVar16 + 0x10);
          *(undefined8 *)(lVar16 + 0x18) = 0;
        }
        else {
          plVar6 = *(long **)(lVar16 + 0x10);
          *(undefined8 *)(lVar16 + 0x18) = 0;
        }
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            func_0x0412c2d0(plVar6);
          }
        }
      }
      lVar16 = lVar16 + 0x20;
    } while (lVar16 != lVar5);
    lVar16 = *param_1;
  }
  *param_1 = lVar15;
  param_1[1] = lVar2 + 0x20;
  lVar15 = param_1[2];
  param_1[2] = lVar11 + uVar13 * 0x20;
  if (lVar16 != 0) {
    func_0x0412a280(lVar16,lVar15 - lVar16);
  }
  return lVar2 + 0x20;
}


