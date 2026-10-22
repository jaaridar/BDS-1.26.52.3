/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ce6a0 (ELF vaddr 0xc5ce6a0)
 * Label: JigsawBlock::vslot87
 * Body:  [[0c6ce6a0, 0c6ce776] [0c6ce780, 0c6ce9a2] [0c6ce9a7, 0c6ce9d6]]
 * Ghidra: wg_JigsawBlock__vslot87
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * wg_JigsawBlock__vslot87(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  byte bStack_6c;
  byte bStack_6b;
  short sStack_6a;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lStack_50 = param_2;
  lVar7 = (**(code **)(*param_3 + 0x138))(param_3,param_2 + 0x14);
  plStack_58 = param_3;
  if (lVar7 != 0) {
    iVar6 = *(int *)(lStack_50 + 0x18);
    if ((*(short *)((long)param_3 + 0x42) <= iVar6) && (iVar6 < (short)param_3[8])) {
      bStack_6c = *(byte *)(lStack_50 + 0x14) & 0xf;
      sStack_6a = (short)iVar6 - *(short *)((long)param_3 + 0x42);
      bStack_6b = *(byte *)(lStack_50 + 0x1c) & 0xf;
      lVar7 = func_0x0caf8020(lVar7,&bStack_6c);
      goto LAB_0c6ce752;
    }
  }
  plVar8 = (long *)(**(code **)(*param_3 + 0x158))(param_3);
  uVar9 = (**(code **)(*plVar8 + 0x2b0))(plVar8);
  uVar5 = (**(code **)(*(long *)param_3[7] + 0xd0))();
  lVar7 = func_0x0c8cca10(uVar9,uVar5);
LAB_0c6ce752:
  plVar8 = *(long **)(lVar7 + 0x50);
  plStack_38 = *(long **)(lVar7 + 0x58);
  plVar12 = plStack_58;
  if (plVar8 == plStack_38) {
    plVar18 = (long *)0x0;
    plVar16 = (long *)0x0;
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)0x0;
    plVar16 = (long *)0x0;
    plVar18 = (long *)0x0;
    do {
      if ((*plVar8 == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_012b4732,&UNK_0136e1b8,0x65e,&UNK_012e81cc,&UNK_011ca08b),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar4 = func_0x0c8bed80(*plVar8 + 0x90,lStack_50,plVar12);
      if (cVar4 != '\0') {
        lVar7 = *plVar8;
        if (plVar16 < plVar18) {
          *plVar16 = lVar7;
          plVar16 = plVar16 + 1;
        }
        else {
          lVar17 = (long)plVar16 - (long)plVar15;
          lVar14 = lVar17 >> 3;
          uVar1 = lVar14 + 1;
          plVar19 = plVar18;
          plStack_68 = plVar18;
          plStack_60 = plVar15;
          if (0x1fffffffffffffff < uVar1) {
LAB_0c6ce99c:
            uVar9 = func_0x0c6e2960();
            plStack_68 = plVar19;
            plStack_60 = (long *)lVar14;
            if (lVar14 != 0) {
              thunk_FUN_0ee326a0(lVar14,(long)plVar19 - lVar14);
            }
            func_0x0eee2d70(uVar9);
            pcVar2 = (code *)swi(3);
            piVar10 = (int *)(*pcVar2)();
            return piVar10;
          }
          plVar19 = (long *)((long)plVar18 - (long)plVar15);
          uVar13 = (long)plVar19 >> 2;
          if ((ulong)((long)plVar19 >> 2) <= uVar1) {
            uVar13 = uVar1;
          }
          if ((long *)0x7ffffffffffffff7 < plVar19) {
            uVar13 = 0x1fffffffffffffff;
          }
          lStack_40 = lVar7;
          if (0x1fffffffffffffff < uVar13) {
            func_0x04882eb0();
            goto LAB_0c6ce99c;
          }
          lStack_48 = uVar13 * 8;
          lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (lVar7 == 0) {
            func_0x0eec74c0(lStack_48,0);
          }
          plVar3 = plStack_60;
          plStack_68 = (long *)(lVar7 + uVar13 * 8);
          *(long *)(lVar7 + lVar17) = lStack_40;
          plVar16 = (long *)(lVar7 + lVar17 + 8);
          plVar15 = (long *)(lVar7 + lVar17 + lVar14 * -8);
          func_0x0eee2f00(plVar15,plStack_60,lVar17);
          plVar12 = plStack_58;
          plVar18 = plStack_68;
          if (plVar3 != (long *)0x0) {
            thunk_FUN_0ee326a0(plVar3,plVar19);
            plVar12 = plStack_58;
            plVar18 = plStack_68;
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plStack_38);
  }
  plVar8 = (long *)(**(code **)(*plVar12 + 0x150))(plVar12);
  lVar7 = (**(code **)(*plVar8 + 0xa78))(plVar8);
  piVar10 = (int *)0x0;
  if (plVar15 != plVar16) {
    plVar8 = plVar15;
    do {
      uVar11 = (int)piVar10 + *(int *)*plVar8;
      piVar10 = (int *)(ulong)uVar11;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar16);
    plVar8 = plVar15;
    if (uVar11 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(**(long **)(lVar7 + 0x9f8) + 0x18))(*(long **)(lVar7 + 0x9f8),uVar11);
    }
    do {
      piVar10 = (int *)*plVar8;
      iVar6 = iVar6 - *piVar10;
      if (iVar6 < 0) goto LAB_0c6ce972;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar16);
    piVar10 = (int *)0x0;
  }
LAB_0c6ce972:
  if (plVar15 != (long *)0x0) {
    thunk_FUN_0ee326a0(plVar15,(long)plVar18 - (long)plVar15);
  }
  return piVar10;
}


