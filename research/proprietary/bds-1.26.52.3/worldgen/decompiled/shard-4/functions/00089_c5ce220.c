/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ce220 (ELF vaddr 0xc5ce220)
 * Label: JigsawBlock::vslot115
 * Body:  [[0c6ce220, 0c6ce2a3] [0d14fae0, 0d14fce7] [0d14fcf0, 0d14fd6e]]
 * Ghidra: wg_JigsawBlock__vslot115
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot115(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  char cVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lStack_48;
  undefined4 uStack_40;
  char cStack_38;
  
  plVar12 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  cVar11 = (**(code **)(*plVar12 + 0x9f0))(plVar12);
  if (cVar11 != '\0') {
    return;
  }
  lVar13 = (**(code **)(*param_2 + 0x130))(param_2);
  pcVar4 = *(char **)(lVar13 + 0x1d0);
  if (*pcVar4 != '\0') {
    return;
  }
  lVar13 = func_0x0d175fd0(pcVar4 + 8,param_3);
  if (lVar13 == 0) {
LAB_0c6ce28a:
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x20);
    if (lVar13 == 0) {
      func_0x04890760();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)(lVar13 + 0x5d) == '\x01') goto LAB_0c6ce28a;
  }
  lVar14 = func_0x0d177090(pcVar4 + 0x80);
  if ((lVar14 != 0) && (func_0x0d176e40(&lStack_48,pcVar4 + 0x80,lVar14), lStack_48 != 0)) {
    if (cStack_38 == '\x01') {
      plVar12 = *(long **)(lStack_48 + 0x28);
      *(undefined8 *)(lStack_48 + 0x28) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    func_0x0412a280(lStack_48,0x40);
  }
  if (lVar13 == 0) {
    return;
  }
  *(undefined1 *)(lVar13 + 0x5d) = 1;
  uStack_40 = (undefined4)param_3[1];
  lStack_48 = *param_3;
  plVar12 = *(long **)(pcVar4 + 0x100);
  if (plVar12 < *(long **)(pcVar4 + 0x108)) {
    plVar12[1] = 0;
    *plVar12 = lVar13;
    plVar12[2] = lStack_48;
    *(undefined4 *)(plVar12 + 3) = uStack_40;
    plVar17 = plVar12 + 4;
    goto LAB_0d14fd4e;
  }
  plVar20 = *(long **)(pcVar4 + 0xf8);
  lVar14 = (long)plVar12 - (long)plVar20;
  lVar21 = lVar14 >> 5;
  uVar1 = lVar21 + 1;
  if (uVar1 >> 0x3b != 0) {
    func_0x0d1656c0();
LAB_0d14fd69:
    func_0x04882eb0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = (long)*(long **)(pcVar4 + 0x108) - (long)plVar20;
  uVar19 = (long)uVar15 >> 4;
  if (uVar19 <= uVar1) {
    uVar19 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar15) {
    uVar19 = 0x7ffffffffffffff;
  }
  if (uVar19 == 0) {
LAB_0d14fc39:
    lVar16 = 0;
  }
  else {
    if (0x7ffffffffffffff < uVar19) goto LAB_0d14fd69;
    lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (lVar16 == 0) {
      func_0x0eec74c0(uVar19 << 5,0);
      goto LAB_0d14fc39;
    }
  }
  *(undefined8 *)(lVar16 + 8 + lVar14) = 0;
  *(long *)(lVar16 + lVar14) = lVar13;
  *(long *)(lVar16 + 0x10 + lVar14) = lStack_48;
  *(undefined4 *)(lVar16 + 0x18 + lVar14) = uStack_40;
  plVar17 = (long *)(lVar16 + lVar14 + 0x20);
  if (plVar20 != plVar12) {
    lVar13 = lVar16 + lVar14 + lVar21 * -0x20;
    lVar18 = 0;
    do {
      *(undefined4 *)(lVar13 + 0x18 + lVar18) = 0;
      *(undefined8 *)(lVar13 + 0x10 + lVar18) = 0;
      puVar2 = (undefined4 *)((long)plVar20 + lVar18);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined8 *)((long)plVar20 + lVar18 + 8) = 0;
      puVar3 = (undefined4 *)(lVar13 + lVar18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(undefined8 *)(lVar13 + 0x10 + lVar18) = *(undefined8 *)((long)plVar20 + lVar18 + 0x10);
      *(undefined4 *)(lVar13 + 0x18 + lVar18) = *(undefined4 *)((long)plVar20 + lVar18 + 0x18);
      lVar10 = lVar18 + 0x20;
      lVar18 = lVar18 + 0x20;
    } while ((long *)((long)plVar20 + lVar10) != plVar12);
    do {
      plVar5 = (long *)plVar20[1];
      plVar20[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar20 = plVar20 + 4;
    } while (plVar20 != plVar12);
    plVar20 = *(long **)(pcVar4 + 0xf8);
  }
  *(long *)(pcVar4 + 0xf8) = lVar16 + lVar14 + lVar21 * -0x20;
  *(long **)(pcVar4 + 0x100) = plVar17;
  lVar13 = *(long *)(pcVar4 + 0x108);
  *(ulong *)(pcVar4 + 0x108) = uVar19 * 0x20 + lVar16;
  if (plVar20 != (long *)0x0) {
    func_0x0412a280(plVar20,lVar13 - (long)plVar20);
  }
LAB_0d14fd4e:
  *(long **)(pcVar4 + 0x100) = plVar17;
  return;
}


