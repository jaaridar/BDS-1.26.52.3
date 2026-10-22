/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4883620 (ELF vaddr 0x4783620)
 * Label: callee-of:0xbf19d20
 * Body:  [[04883620, 04883aa8]]
 * Ghidra: FUN_04883620
 */


ulong FUN_04883620(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      uVar4 = param_2[3];
      lVar8 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar5 = (lVar8 + param_3) * -0x3c5a37a36834ced9 + *param_2;
      uVar6 = uVar5 + param_2[1];
      uVar7 = uVar6 + param_2[2];
      uVar10 = param_2[2] + *(long *)((long)param_2 + (param_3 - 0x20));
      lVar14 = *(long *)((long)param_2 + (param_3 - 8)) + uVar4;
      uVar9 = lVar14 + uVar10;
      uVar11 = uVar10 + *(long *)((long)param_2 + (param_3 - 0x18));
      uVar12 = uVar11 + lVar8;
      lVar8 = (uVar7 << 0x21 | uVar7 >> 0x1f) +
              (uVar6 << 0x39 | uVar6 >> 7) + (uVar5 * 0x8000000 | uVar5 >> 0x25) +
              ((uVar5 + uVar4) * 0x1000 | uVar5 + uVar4 >> 0x34);
      uVar9 = (lVar14 + uVar12 + lVar8) * -0x3c5a37a36834ced9 +
              ((uVar10 * 0x8000000 | uVar10 >> 0x25) + uVar4 + (uVar11 << 0x39 | uVar11 >> 7) +
               (uVar9 * 0x1000 | uVar9 >> 0x34) + (uVar12 << 0x21 | uVar12 >> 0x1f) + uVar7) *
              -0x651e95c4d06fbfb1;
      uVar9 = (uVar9 >> 0x2f ^ uVar9) * -0x3c5a37a36834ced9 + lVar8;
      uVar9 = (uVar9 >> 0x2f ^ uVar9) * -0x651e95c4d06fbfb1;
    }
    else {
      lVar8 = *(long *)((long)param_2 + (param_3 - 0x28));
      lVar14 = *(long *)((long)param_2 + (param_3 - 0x10));
      lVar1 = *(long *)((long)param_2 + (param_3 - 0x38));
      lVar16 = *(long *)((long)param_2 + (param_3 - 0x30));
      uVar9 = lVar1 + lVar14;
      uVar4 = *(ulong *)((long)param_2 + (param_3 - 0x18));
      uVar5 = (lVar16 + param_3 ^ uVar4) * -0x622015f714c7d297;
      uVar5 = (uVar5 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
      uVar5 = (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
      lVar15 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
      uVar10 = lVar15 + lVar8 + uVar5;
      uVar6 = lVar16 + lVar1 + lVar15;
      uVar7 = uVar6 + lVar8;
      uVar6 = (uVar6 * 0x100000 | uVar6 >> 0x2c) + lVar15 + (uVar10 << 0x2b | uVar10 >> 0x15);
      lVar1 = *(long *)((long)param_2 + (param_3 - 8));
      lVar16 = *(long *)((long)param_2 + (param_3 - 0x20)) + uVar9 + -0x4b6d499041670d8d;
      uVar11 = lVar8 + lVar1 + lVar16;
      uVar4 = uVar4 + lVar14 + lVar16;
      uVar10 = uVar4 + lVar1;
      lVar8 = lVar8 * -0x4b6d499041670d8d + *param_2;
      uVar4 = (uVar4 * 0x100000 | uVar4 >> 0x2c) + lVar16 + (uVar11 << 0x2b | uVar11 >> 0x15);
      uVar11 = 0;
      do {
        lVar14 = *(long *)((long)param_2 + uVar11 + 8);
        lVar1 = *(long *)((long)param_2 + uVar11 + 0x10);
        uVar12 = lVar8 + uVar7 + uVar9 + lVar14;
        lVar16 = *(long *)((long)param_2 + uVar11 + 0x30);
        uVar9 = uVar9 + uVar6 + lVar16;
        uVar17 = (uVar12 * 0x8000000 | uVar12 >> 0x25) * -0x4b6d499041670d8d ^ uVar4;
        lVar15 = *(long *)((long)param_2 + uVar11 + 0x28);
        uVar9 = uVar7 + lVar15 + (uVar9 * 0x400000 | uVar9 >> 0x2a) * -0x4b6d499041670d8d;
        lVar8 = ((uVar5 + uVar10) * 0x80000000 | uVar5 + uVar10 >> 0x21) * -0x4b6d499041670d8d;
        lVar2 = *(long *)((long)param_2 + uVar11 + 0x18);
        lVar13 = uVar6 * -0x4b6d499041670d8d + *(long *)((long)param_2 + uVar11);
        uVar5 = lVar14 + lVar1 + lVar13;
        uVar7 = uVar5 + lVar2;
        lVar18 = uVar4 + lVar8 + *(long *)((long)param_2 + uVar11 + 0x20);
        lVar14 = *(long *)((long)param_2 + uVar11 + 0x38);
        uVar12 = lVar1 + uVar9 + lVar18 + lVar14;
        uVar4 = uVar10 + lVar13 + lVar2 + uVar17;
        uVar6 = lVar13 + (uVar5 * 0x100000 | uVar5 >> 0x2c) + (uVar4 << 0x2b | uVar4 >> 0x15);
        uVar4 = lVar15 + lVar16 + lVar18;
        uVar10 = uVar4 + lVar14;
        uVar4 = lVar18 + (uVar4 * 0x100000 | uVar4 >> 0x2c) + (uVar12 << 0x2b | uVar12 >> 0x15);
        uVar11 = uVar11 + 0x40;
        uVar5 = uVar17;
      } while ((param_3 - 1 & 0xffffffffffffffc0) != uVar11);
      uVar5 = (uVar7 ^ uVar10) * -0x622015f714c7d297;
      uVar5 = (uVar5 >> 0x2f ^ uVar10 ^ uVar5) * -0x622015f714c7d297;
      uVar6 = (uVar6 ^ uVar4) * -0x622015f714c7d297;
      uVar4 = (uVar6 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297 + lVar8;
      uVar9 = ((uVar9 >> 0x2f ^ uVar9) * -0x4b6d499041670d8d + uVar17 +
               (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297 ^ uVar4) * -0x622015f714c7d297;
      uVar9 = (uVar9 >> 0x2f ^ uVar4 ^ uVar9) * -0x622015f714c7d297;
      uVar9 = (uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
    }
    return uVar9;
  }
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar9 = *(ulong *)((long)param_2 + (param_3 - 8));
      uVar4 = param_3 + uVar9;
      bVar3 = (byte)param_3 & 0x3f;
      uVar4 = uVar4 >> bVar3 | uVar4 << 0x40 - bVar3;
      uVar5 = (*param_2 ^ uVar4) * -0x622015f714c7d297;
      uVar4 = (uVar5 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
      return (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297 ^ uVar9;
    }
    if (param_3 < 4) {
      uVar9 = 0x9ae16a3b2f90404f;
      if (param_3 == 0) {
        return 0x9ae16a3b2f90404f;
      }
      uVar5 = ((ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2 | param_3) * -0x36b62838af619aa9
              ^ (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                -0x651e95c4d06fbfb1;
      uVar5 = uVar5 >> 0x2f ^ uVar5;
      goto LAB_048837ee;
    }
    uVar9 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    param_3 = (uint)((int)*param_2 << 3) + param_3;
  }
  else {
    lVar8 = *(long *)((long)param_2 + (param_3 - 8));
    uVar4 = lVar8 * -0x651e95c4d06fbfb1;
    uVar5 = *param_2 * -0x4b6d499041670d8d - param_2[1];
    uVar9 = param_2[1] ^ 0xc949d7c7509e6557;
    uVar9 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar9 << 0x2c | uVar9 >> 0x14) +
            lVar8 * 0x651e95c4d06fbfb1;
    param_3 = (uVar4 << 0x22 | uVar4 >> 0x1e) +
              *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 +
              (uVar5 * 0x200000 | uVar5 >> 0x2b);
  }
  uVar5 = 0x9ddfea08eb382d69;
  uVar4 = (param_3 ^ uVar9) * -0x622015f714c7d297;
  uVar9 = (uVar4 >> 0x2f ^ uVar9 ^ uVar4) * -0x622015f714c7d297;
  uVar9 = uVar9 >> 0x2f ^ uVar9;
LAB_048837ee:
  return uVar9 * uVar5;
}


