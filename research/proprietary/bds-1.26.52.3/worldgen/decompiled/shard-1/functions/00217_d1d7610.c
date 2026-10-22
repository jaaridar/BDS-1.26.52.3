/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d7610 (ELF vaddr 0xd1d7610)
 * Label: br::worldgen::processors::BlockRules::BlockStateMatch::vslot3
 * Body:  [[0d2d7610, 0d2d768b]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockStateMatch__vslot3
 */


/* WARNING: Possible PIC construction at 0x0d2d7629: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2d762e) */
/* WARNING: Removing unreachable block (ram,0x0d2d764a) */
/* WARNING: Removing unreachable block (ram,0x0d2d7641) */
/* WARNING: Removing unreachable block (ram,0x0d2d764e) */
/* WARNING: Removing unreachable block (ram,0x0d2d7654) */
/* WARNING: Removing unreachable block (ram,0x0d2d7666) */
/* WARNING: Removing unreachable block (ram,0x0d2d7658) */
/* WARNING: Removing unreachable block (ram,0x0d2d7672) */
/* WARNING: Removing unreachable block (ram,0x0d2d7686) */
/* WARNING: Removing unreachable block (ram,0x0d2d7664) */
/* WARNING: Removing unreachable block (ram,0x0d2d7677) */

void wg_br__worldgen__processors__BlockRules__BlockStateMatch__vslot3
               (undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)&UNK_01219bf4;
  plVar1 = (long *)*param_2;
  *plVar1 = *plVar1 + 0x11;
  uVar2 = (ulong)*(uint *)(plVar1 + 9);
  if (uVar2 + 0x11 < 0x20) {
    memcpy((long)plVar1 + uVar2 + 0x28,&UNK_01219bf4,0x11);
    *(int *)(plVar1 + 9) = (int)plVar1[9] + 0x11;
  }
  else {
    if (uVar2 != 0) {
      memcpy((long)plVar1 + uVar2 + 0x28,&UNK_01219bf4,0x20 - *(uint *)(plVar1 + 9));
      uVar2 = plVar1[5] * -0x3d4d51c2d82b14b1 + plVar1[1];
      plVar1[1] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[6] * -0x3d4d51c2d82b14b1 + plVar1[2];
      plVar1[2] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[7] * -0x3d4d51c2d82b14b1 + plVar1[3];
      plVar1[3] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[8] * -0x3d4d51c2d82b14b1 + plVar1[4];
      plVar1[4] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      plVar4 = (long *)(&UNK_01219bf4 + (0x20 - (int)plVar1[9]));
      *(undefined4 *)(plVar1 + 9) = 0;
    }
    if (plVar4 + 4 < &UNK_01219c06) {
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
      } while (plVar4 < &UNK_01219be6);
    }
    if (plVar4 < &UNK_01219c05) {
      memcpy(plVar1 + 5,plVar4,(long)&UNK_01219c05 - (long)plVar4);
      *(int *)(plVar1 + 9) = (int)((long)&UNK_01219c05 - (long)plVar4);
    }
  }
  return;
}


