/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb18130 (ELF vaddr 0xca18130)
 * Label: callee-of:0x523dc50
 * Body:  [[0cb18130, 0cb18232] [0cb18240, 0cb182a9] [0cb182b0, 0cb182d3]]
 * Ghidra: FUN_0cb18130
 */


long * FUN_0cb18130(long *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return (long *)0x0;
  }
  bVar1 = *param_2;
  sVar3 = *(short *)(param_2 + 2);
  bVar2 = param_2[1];
  uVar7 = (ulong)bVar1 + 0x9e3779b9;
  uVar7 = (uVar7 >> 2 & 0x3fffffff) + 0x9e3779b9 + uVar7 * 0x40 + (long)sVar3 ^ uVar7;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + (ulong)bVar2 ^ uVar7;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar5 >> 0x38 < 2) {
    uVar6 = uVar4 - 1 & uVar7;
  }
  else {
    uVar6 = uVar7;
    if (uVar4 <= uVar7) {
      uVar6 = uVar7 % uVar4;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar6 * 8);
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    if ((byte)(uVar5 >> 0x38) < 2) {
      do {
        if (uVar7 == plVar8[1]) {
          if (((*(byte *)(plVar8 + 2) == bVar1) && (*(short *)((long)plVar8 + 0x12) == sVar3)) &&
             (*(byte *)((long)plVar8 + 0x11) == bVar2)) {
            return plVar8;
          }
        }
        else if ((plVar8[1] & uVar4 - 1) != uVar6) {
          return (long *)0x0;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar8[1];
        if (uVar7 == uVar5) {
          if (((*(byte *)(plVar8 + 2) == bVar1) && (*(short *)((long)plVar8 + 0x12) == sVar3)) &&
             (*(byte *)((long)plVar8 + 0x11) == bVar2)) {
            return plVar8;
          }
        }
        else {
          if (uVar4 <= uVar5) {
            if ((uVar5 | uVar4) >> 0x20 == 0) {
              uVar5 = (uVar5 & 0xffffffff) % (uVar4 & 0xffffffff);
            }
            else {
              uVar5 = uVar5 % uVar4;
            }
          }
          if (uVar5 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


