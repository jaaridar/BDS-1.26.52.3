/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd28bdb0
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[049dbe50, 049dbf90] [0d28bda0, 0d28bdac] [0d28bdb0, 0d28bdef] [0d2b89d0, 0d2b8c3b]]
 * Ghidra: FUN_0d28bdb0
 */


/* WARNING: Instruction at (ram,0x0d28bdb1) overlaps instruction at (ram,0x0d28bdb0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d28bdb0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  undefined8 in_RAX;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  
  plVar12 = (long *)(ulong)(uint)((int)param_3 + (int)param_2);
  while (*(int *)(param_3 + 8 + param_2) !=
         (int)CONCAT71((int7)((ulong)in_RAX >> 8),(char)in_RAX + 'H')) {
    if (*plVar12 == -1) {
      return;
    }
    param_2 = *plVar12 * 0x30;
    plVar12 = (long *)(param_3 + param_2);
  }
  if ((((plVar12 != *(long **)(param_1 + 0x48)) && (*(char *)((long)plVar12 + 0x2c) != '\x04')) &&
      ((int)plVar12[5] == 0x5e5faa10)) && (plVar12[2] != 0)) {
    if ((DAT_0f5a50b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5a50b8), iVar11 != 0)) {
      func_0x06e60460(0xf5a50a0);
      func_0x0410844d(&DAT_0f5a50b8);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x28) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28))
                                   >> 3) - 1U & _DAT_0f5a50a4) * 8);
    do {
      if (*plVar12 == -1) {
        return;
      }
      lVar17 = *plVar12 * 0x30;
      plVar12 = (long *)(*(long *)(param_1 + 0x40) + lVar17);
    } while (*(uint *)(*(long *)(param_1 + 0x40) + 8 + lVar17) != _DAT_0f5a50a4);
    if (((plVar12 != *(long **)(param_1 + 0x48)) && (*(char *)((long)plVar12 + 0x2c) != '\x04')) &&
       (((int)plVar12[5] == 0x5e5faa10 && (plVar12[2] != 0)))) {
      if ((DAT_0f5a50b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5a50b8), iVar11 != 0)) {
        func_0x06e60460(0xf5a50a0);
        func_0x0410844d(&DAT_0f5a50b8);
      }
      plVar12 = (long *)(*(long *)(param_1 + 0x28) +
                        (ulong)((int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28))
                                     >> 3) - 1U & _DAT_0f5a50a4) * 8);
      do {
        if (*plVar12 == -1) {
          return;
        }
        lVar17 = *plVar12 * 0x30;
        plVar12 = (long *)(*(long *)(param_1 + 0x40) + lVar17);
      } while (*(uint *)(*(long *)(param_1 + 0x40) + 8 + lVar17) != _DAT_0f5a50a4);
      if (plVar12 != *(long **)(param_1 + 0x48)) {
        lVar17 = (*(code *)plVar12[3])(0,plVar12 + 2,0);
        if ((DAT_0f5a50b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5a50b8), iVar11 != 0)) {
          func_0x06e60460(0xf5a50a0);
          func_0x0410844d(&DAT_0f5a50b8);
        }
        if (*(uint *)(lVar17 + 4) == _DAT_0f5a50a4) {
          plVar2 = (long *)(*(long *)(param_1 + 0x28) +
                           (ulong)((int)((ulong)(*(long *)(param_1 + 0x30) -
                                                *(long *)(param_1 + 0x28)) >> 3) - 1U &
                                  *(uint *)(plVar12 + 1)) * 8);
          while (plVar18 = plVar2, lVar17 = *plVar18, lVar17 != -1) {
            plVar2 = (long *)(*(long *)(param_1 + 0x40) + lVar17 * 0x30);
            if (*(uint *)(*(long *)(param_1 + 0x40) + 8 + lVar17 * 0x30) == *(uint *)(plVar12 + 1))
            {
              *plVar18 = *plVar2;
              lVar14 = *(long *)(param_1 + 0x40);
              lVar16 = *(long *)(param_1 + 0x48);
              lVar19 = (lVar16 - lVar14 >> 4) * -0x5555555555555555 + -1;
              if (lVar17 != lVar19) {
                uVar3 = *(uint *)(lVar16 + -0x28);
                lVar4 = *(long *)(param_1 + 0x28);
                lVar5 = *(long *)(param_1 + 0x30);
                lVar13 = lVar17 * 0x30;
                lVar1 = lVar14 + lVar13;
                *(undefined8 *)(lVar14 + lVar13) = *(undefined8 *)(lVar16 + -0x30);
                *(uint *)(lVar14 + 8 + lVar13) = uVar3;
                if (lVar1 != lVar16 + -0x30) {
                  puVar15 = (undefined8 *)(lVar14 + lVar13 + 0x10);
                  if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
                    (**(code **)(lVar1 + 0x20))(puVar15);
                  }
                  cVar10 = *(char *)(lVar16 + -4);
                  if (cVar10 != '\0') {
                    if (cVar10 == '\x02') {
                      (**(code **)(lVar16 + -0x18))(5);
                      cVar10 = *(char *)(lVar16 + -4);
                    }
                    else {
                      uVar6 = *(undefined8 *)(lVar16 + -0x20);
                      *(undefined8 *)(lVar16 + -0x20) = 0;
                      *puVar15 = uVar6;
                    }
                  }
                  uVar7 = *(undefined4 *)(lVar16 + -0x14);
                  uVar8 = *(undefined4 *)(lVar16 + -0x10);
                  uVar9 = *(undefined4 *)(lVar16 + -0xc);
                  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar16 + -0x18);
                  *(undefined4 *)(lVar1 + 0x1c) = uVar7;
                  *(undefined4 *)(lVar1 + 0x20) = uVar8;
                  *(undefined4 *)(lVar1 + 0x24) = uVar9;
                  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar16 + -8);
                  *(char *)(lVar1 + 0x2c) = cVar10;
                }
                plVar12 = (long *)(lVar4 + (ulong)((int)((ulong)(lVar5 - lVar4) >> 3) - 1U & uVar3)
                                           * 8);
                lVar14 = *plVar12;
                if (lVar14 != lVar19) {
                  do {
                    lVar16 = lVar14 * 0x30;
                    lVar14 = *(long *)(*(long *)(param_1 + 0x40) + lVar16);
                  } while (lVar14 != lVar19);
                  plVar12 = (long *)(*(long *)(param_1 + 0x40) + lVar16);
                }
                *plVar12 = lVar17;
                lVar16 = *(long *)(param_1 + 0x48);
              }
              if (*(code **)(lVar16 + -0x10) != (code *)0x0) {
                (**(code **)(lVar16 + -0x10))(lVar16 + -0x20);
              }
              *(long *)(param_1 + 0x48) = lVar16 + -0x30;
              return;
            }
          }
        }
      }
    }
    return;
  }
  return;
}


