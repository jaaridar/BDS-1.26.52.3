/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88b8cf0 (ELF vaddr 0x87b8cf0)
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[088b8cf0, 088b8d91] [088b8da0, 088b8e1c] [088b8e20, 088b8e97] [088b8ea0, 088b8ee6] [088b8ef0, 088b8f7f]]
 * Ghidra: FUN_088b8cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_088b8cf0(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = func_0x048aead0(param_1[1]);
  }
  piVar2 = *(int **)(*(long *)(lVar5 + 0x68) + 0x28);
  for (piVar10 = *(int **)(*(long *)(lVar5 + 0x68) + 0x20);
      (piVar10 != piVar2 && (*piVar10 != param_3)); piVar10 = piVar10 + 0xe) {
  }
  if ((piVar10 == piVar2) &&
     (cVar4 = FUN_0eeddcf0(&UNK_014136c9,&UNK_01208bb9,0x387,&UNK_013ab8cc,&UNK_014664ce),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (piVar10 != (int *)0x0) {
    uVar9 = (ulong)param_2;
    do {
      uVar3 = *(ulong *)(piVar10 + 4);
      if (uVar3 != 0) {
        uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
        uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
        uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar6 >> 0x38 < 2) {
          uVar7 = (ulong)(param_2 & (int)uVar3 - 1U);
        }
        else {
          uVar7 = uVar9;
          if (uVar3 <= uVar9) {
            uVar7 = (ulong)param_2 % (uVar3 & 0xffffffff);
          }
        }
        plVar8 = *(long **)(*(long *)(piVar10 + 2) + uVar7 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          if ((byte)(uVar6 >> 0x38) < 2) {
            do {
              if (plVar8[1] == uVar9) {
                if (*(uint *)(plVar8 + 2) == param_2) {
LAB_088b8f6b:
                  return *(char *)((long)plVar8 + 0x14) + '\x01';
                }
              }
              else if ((plVar8[1] & uVar3 - 1) != uVar7) break;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              uVar6 = plVar8[1];
              if (uVar6 == uVar9) {
                if (*(uint *)(plVar8 + 2) == param_2) goto LAB_088b8f6b;
              }
              else {
                if (uVar3 <= uVar6) {
                  if ((uVar6 | uVar3) >> 0x20 == 0) {
                    if ((uVar6 & 0xffffffff) % (uVar3 & 0xffffffff) == uVar7) goto LAB_088b8ea9;
                    break;
                  }
                  uVar6 = uVar6 % uVar3;
                }
                if (uVar6 != uVar7) break;
              }
LAB_088b8ea9:
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      if ((char)piVar10[0xd] != '\x01') {
        return '\0';
      }
      iVar1 = piVar10[0xc];
      lVar5 = *param_1;
      if (lVar5 == 0) {
        lVar5 = func_0x048aead0(param_1[1]);
      }
      piVar2 = *(int **)(*(long *)(lVar5 + 0x68) + 0x28);
      for (piVar10 = *(int **)(*(long *)(lVar5 + 0x68) + 0x20);
          (piVar10 != piVar2 && (*piVar10 != iVar1)); piVar10 = piVar10 + 0xe) {
      }
      if ((piVar10 == piVar2) &&
         (cVar4 = FUN_0eeddcf0(&UNK_014136c9,&UNK_01208bb9,0x387,&UNK_013ab8cc,&UNK_014664ce),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    } while (piVar10 != (int *)0x0);
  }
  return '\0';
}


