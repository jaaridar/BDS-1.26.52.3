/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcafbac0 (ELF vaddr 0xc9fbac0)
 * Label: callee-of:0x517cd10
 * Body:  [[0cafbac0, 0cafbb25] [0cafbb30, 0cafbc84] [0cafbc90, 0cafbd21] [0cafbd30, 0cafbdc1] [0cafbdd0, 0cafbed4]]
 * Ghidra: FUN_0cafbac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0cafbac0(long param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  bVar1 = *param_2;
  uVar14 = (uint)bVar1;
  uVar6 = (uint)param_2[1];
  uVar13 = (ulong)param_2[1] << 4 | (ulong)bVar1;
  sVar8 = *(short *)(param_1 + 0x1198 + uVar13 * 2);
  if (sVar8 != _DAT_0f6f9e5a) goto LAB_0cafbead;
  lVar12 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5 + -1;
  if ((short)lVar12 < 0) {
    uVar11 = 0;
    sVar9 = 0;
    sVar8 = -1;
    uVar10 = (uint)bVar1;
    if (_DAT_0f6f9e58 < 1) goto LAB_0cafbc0e;
  }
  else {
    do {
      uVar10 = (uint)lVar12;
      lVar15 = (ulong)(uVar10 & 0x7fff) * 0x68 + *(long *)(param_1 + 0x108);
      if ((_DAT_0f6ffb10 == (long *)0x0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar2 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
      plVar3 = *(long **)(lVar15 + 0x30);
      cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
      if ((cVar4 == '\0') ||
         ((plVar3 = *(long **)(lVar15 + 0x38), plVar3 != (long *)0x0 &&
          (cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar2), cVar4 == '\0')))) goto LAB_0cafbbea;
      lVar12 = lVar12 + -1;
    } while (-1 < (short)lVar12);
    uVar10 = 0xffff;
LAB_0cafbbea:
    uVar14 = (uint)*param_2;
    uVar6 = (uint)param_2[1];
    uVar11 = uVar10 * 0x10 + 0x10;
    sVar8 = -1;
    sVar9 = (short)uVar11;
    uVar10 = (uint)*param_2;
    if (_DAT_0f6f9e58 <= sVar9) {
LAB_0cafbc0e:
      sVar9 = (short)uVar11;
      uVar14 = uVar6 * 0x10 + uVar14 * 0x100;
      do {
        uVar16 = (ulong)(short)((uint)(int)(short)uVar11 >> 4);
        uVar7 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5;
        if ((uVar7 < uVar16 || uVar7 - uVar16 == 0) ||
           (plVar3 = *(long **)(*(long *)(param_1 + 0x108) + 0x30 + uVar16 * 0x68),
           plVar3 == (long *)0x0)) {
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar4 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901)
             , cVar4 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          lVar12 = *(long *)(*_DAT_0f6ffb10 + 0x200);
        }
        else {
          lVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar11 & 0xf | uVar14 & 0xffff);
        }
        pcVar5 = (char *)func_0x0cdbf900(*(undefined8 *)(*(long *)(lVar12 + 0x68) + 0x200));
        if ((pcVar5 == (char *)0x0) || ((byte)(*pcVar5 - 1U) < 2)) {
LAB_0cafbd0f:
          sVar8 = (short)uVar11 + 1;
          if (sVar8 != -1) break;
        }
        else {
          uVar7 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) *
                  0x4ec4ec4ec4ec4ec5;
          if ((uVar7 < uVar16 || uVar7 - uVar16 == 0) ||
             (plVar3 = *(long **)(*(long *)(param_1 + 0x108) + 0x38 + uVar16 * 0x68),
             plVar3 == (long *)0x0)) {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar4 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar4 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar12 = *(long *)(*_DAT_0f6ffb10 + 0x200);
          }
          else {
            lVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar11 & 0xf | uVar14 & 0xffff);
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar4 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar4 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          if ((*(long *)(lVar12 + 0x110) != *(long *)(*(long *)(*_DAT_0f6ffb10 + 0x200) + 0x110)) &&
             ((pcVar5 = (char *)func_0x0cdbf900(*(undefined8 *)(*(long *)(lVar12 + 0x68) + 0x200)),
              pcVar5 == (char *)0x0 || ((byte)(*pcVar5 - 1U) < 2)))) goto LAB_0cafbd0f;
          uVar11 = uVar11 - 1;
          sVar8 = -1;
        }
      } while (_DAT_0f6f9e58 <= (short)uVar11);
      uVar6 = (uint)param_2[1];
      uVar10 = (uint)*param_2;
    }
  }
  uVar14 = uVar10;
  if (sVar9 < sVar8) {
    sVar8 = sVar9;
  }
  *(short *)(param_1 + 0x1198 + uVar13 * 2) = sVar8;
LAB_0cafbead:
  auVar17._0_4_ = uVar14 + *(int *)(param_1 + 0x38);
  auVar17._8_4_ = uVar6 + *(int *)(param_1 + 0x40);
  auVar17._4_4_ = (int)sVar8 + *(int *)(param_1 + 0x3c);
  auVar17._12_4_ = 0;
  return auVar17;
}


