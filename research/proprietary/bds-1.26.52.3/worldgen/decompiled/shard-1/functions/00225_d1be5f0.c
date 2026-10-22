/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2be5f0 (ELF vaddr 0xd1be5f0)
 * Label: br::worldgen::processors::ProtectedBlock::vslot5
 * Body:  [[0d2be5f0, 0d2be65c]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot5
 */


/* WARNING: Possible PIC construction at 0x0d2be609: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2be60e) */
/* WARNING: Removing unreachable block (ram,0x0d2be61d) */
/* WARNING: Removing unreachable block (ram,0x0d2be617) */
/* WARNING: Removing unreachable block (ram,0x0d2be621) */
/* WARNING: Removing unreachable block (ram,0x0d2be627) */
/* WARNING: Removing unreachable block (ram,0x0d2be631) */
/* WARNING: Removing unreachable block (ram,0x0d2be62b) */
/* WARNING: Removing unreachable block (ram,0x0d2be635) */
/* WARNING: Removing unreachable block (ram,0x0d2be657) */
/* WARNING: Removing unreachable block (ram,0x0d2be645) */

void wg_br__worldgen__processors__ProtectedBlock__vslot5(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)&UNK_01338829;
  plVar1 = (long *)*param_2;
  *plVar1 = *plVar1 + 0x10;
  uVar2 = (ulong)*(uint *)(plVar1 + 9);
  if (uVar2 + 0x10 < 0x20) {
    memcpy((long)plVar1 + uVar2 + 0x28,&UNK_01338829,0x10);
    *(int *)(plVar1 + 9) = (int)plVar1[9] + 0x10;
  }
  else {
    if (uVar2 != 0) {
      memcpy((long)plVar1 + uVar2 + 0x28,&UNK_01338829,0x20 - *(uint *)(plVar1 + 9));
      uVar2 = plVar1[5] * -0x3d4d51c2d82b14b1 + plVar1[1];
      plVar1[1] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[6] * -0x3d4d51c2d82b14b1 + plVar1[2];
      plVar1[2] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[7] * -0x3d4d51c2d82b14b1 + plVar1[3];
      plVar1[3] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[8] * -0x3d4d51c2d82b14b1 + plVar1[4];
      plVar1[4] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      plVar4 = (long *)(&UNK_01338829 + (0x20 - (int)plVar1[9]));
      *(undefined4 *)(plVar1 + 9) = 0;
    }
    if (plVar4 + 4 < &UNK_0133883a) {
      lVar3 = plVar1[1];
      lVar6 = plVar1[2];
      lVar7 = plVar1[3];
      lVar5 = plVar1[4];
      do {
        uVar2 = *plVar4 * -0x3d4d51c2d82b14b1 + lVar3;
        lVar3 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        plVar1[1] = lVar3;
        uVar2 = plVar4[1] * -0x3d4d51c2d82b14b1 + lVar6;
        lVar6 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        plVar1[2] = lVar6;
        uVar2 = plVar4[2] * -0x3d4d51c2d82b14b1 + lVar7;
        lVar7 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        plVar1[3] = lVar7;
        uVar2 = plVar4[3] * -0x3d4d51c2d82b14b1 + lVar5;
        lVar5 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        plVar1[4] = lVar5;
        plVar4 = plVar4 + 4;
      } while (plVar4 < &UNK_0133881a);
    }
    if (plVar4 < &UNK_01338839) {
      memcpy(plVar1 + 5,plVar4,(long)&UNK_01338839 - (long)plVar4);
      *(int *)(plVar1 + 9) = (int)((long)&UNK_01338839 - (long)plVar4);
    }
  }
  return;
}


