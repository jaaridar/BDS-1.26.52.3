/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca72420 (ELF vaddr 0xc972420)
 * Label: callee-of:0x517c470
 * Body:  [[0ca72420, 0ca725da] [0ca725e0, 0ca7260a] [0ca72610, 0ca7271b] [0ca72720, 0ca72907]]
 * Ghidra: FUN_0ca72420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca72420(long param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined8 **ppuVar13;
  char cVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 **ppuStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  long lStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  uint uStack_98;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *plStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  plVar15 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  (**(code **)(*plVar15 + 0xc48))(auStack_88,plVar15);
  auStack_e0[0] = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  lVar17 = CONCAT44(uStack_7c,uStack_80);
  if (lVar17 == 0) {
    func_0x0ca11350(auStack_e0,&puStack_c8);
    lVar17 = CONCAT44(uStack_7c,uStack_80);
  }
  else {
    LOCK();
    *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    UNLOCK();
    func_0x0ca11350(auStack_e0,&puStack_c8);
    func_0x0412c2d0(lVar17);
    lVar17 = CONCAT44(uStack_7c,uStack_80);
  }
  if (lVar17 != 0) {
    func_0x0412c2d0();
  }
  uVar16 = (**(code **)(**(long **)(param_1 + 0x20) + 0x440))();
  puStack_c8 = &UNK_0f45e800;
  puStack_c0 = &UNK_0ef512d0;
  uStack_b8 = 0x9e3779b97f4a7c15;
  uStack_b0 = 0x6a09e667f3bcc909;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  func_0x0d2d5c30(&puStack_c8,uVar16,param_4,param_5);
  lVar17 = (**(code **)(*param_2 + 0x140))(param_2,param_4,param_5);
  if (lVar17 != 0) {
    iVar2 = *(int *)(lVar17 + 0x38);
    iVar3 = *(int *)(lVar17 + 0x3c);
    ppuVar13 = *(undefined8 ***)(lVar17 + 0x38);
    iVar4 = *(int *)(lVar17 + 0x40);
    iVar5 = *(int *)(lVar17 + 0x44);
    iVar6 = *(int *)(lVar17 + 0x48);
    iVar7 = *(int *)(lVar17 + 0x4c);
    plStack_70 = param_2;
    func_0x0d2d30f0(&puStack_48,*(long *)(param_1 + 0x78) + 0x48);
    puStack_58 = puStack_40;
    if (puStack_48 != puStack_40) {
      lStack_108 = lVar17 + 0x1538;
      lStack_68 = lVar17;
      do {
        plVar8 = (long *)puStack_48[1];
        puStack_50 = puStack_48;
        for (plVar15 = (long *)*puStack_48; plVar15 != plVar8; plVar15 = plVar15 + 2) {
          puVar9 = (undefined8 *)*plVar15;
          plVar10 = (long *)plVar15[1];
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar10[1] = plVar10[1] + 1;
            UNLOCK();
          }
          if ((((*(int *)(puVar9 + 3) <= iVar5) && (iVar2 <= *(int *)((long)puVar9 + 0x24))) &&
              (*(int *)(puVar9 + 4) <= iVar7)) &&
             (((iVar4 <= *(int *)((long)puVar9 + 0x2c) && (*(int *)((long)puVar9 + 0x1c) <= iVar6))
              && (iVar3 <= *(int *)(puVar9 + 5))))) {
            if (*(long *)(lVar17 + 0x50) == puVar9[2]) {
              if (plVar10 != (long *)0x0) {
                LOCK();
                plVar10[1] = plVar10[1] + 1;
                UNLOCK();
              }
              puStack_100 = puVar9;
              plStack_f8 = plVar10;
              func_0x0cb08ba0(lStack_108,&puStack_100);
              plVar18 = plStack_f8;
            }
            else {
              if (plVar10 != (long *)0x0) {
                LOCK();
                plVar10[1] = plVar10[1] + 1;
                UNLOCK();
              }
              puStack_f0 = puVar9;
              plStack_e8 = plVar10;
              func_0x0cb09310(lStack_108,&puStack_f0);
              plVar18 = plStack_e8;
            }
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar11 = plVar18 + 1;
              lVar17 = *plVar11;
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                func_0x0412c2d0(plVar18);
              }
            }
            plVar11 = (long *)puVar9[8];
            puStack_60 = puVar9;
            for (plVar18 = (long *)puVar9[7]; lVar17 = lStack_68, plVar18 != plVar11;
                plVar18 = plVar18 + 1) {
              if ((*plVar18 == 0) &&
                 (cVar14 = func_0x0eeddcf0(&UNK_01458338,&UNK_01388cf1,0x47,&UNK_013d7966,
                                           &UNK_014a6688), cVar14 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              piVar12 = (int *)*plVar18;
              if (((((*piVar12 <= iVar5) && (iVar2 <= piVar12[3])) && (piVar12[2] <= iVar7)) &&
                  ((iVar4 <= piVar12[5] && (piVar12[1] <= iVar6)))) && (iVar3 <= piVar12[4])) {
                ppuStack_120 = ppuVar13;
                iStack_118 = iVar4;
                iStack_114 = iVar5;
                iStack_110 = iVar6;
                iStack_10c = iVar7;
                (**(code **)(**(long **)(piVar12 + 6) + 0x40))
                          (*(long **)(piVar12 + 6),plStack_70,*(undefined8 *)(piVar12 + 10),
                           piVar12[0xc],*puStack_60,*(undefined4 *)(puStack_60 + 1),&ppuStack_120,
                           (char)piVar12[9],&puStack_c8,1,(char)piVar12[0x14]);
              }
            }
          }
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar18 = plVar10 + 1;
            lVar1 = *plVar18;
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (lVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              func_0x0412c2d0(plVar10);
            }
          }
        }
        puStack_48 = puStack_50 + 3;
      } while (puStack_48 != puStack_58);
    }
    ppuStack_120 = &puStack_48;
    func_0x0ca7b460(&ppuStack_120);
  }
  if ((ulong)uStack_98 != 0xffffffff) {
    (**(code **)(&UNK_0f3ed9b8 + (ulong)uStack_98 * 8))(&ppuStack_120,&puStack_c0);
  }
  func_0x0ca11610(auStack_e0);
  if (lStack_d0 != 0) {
    func_0x0412c2d0();
  }
  return;
}


