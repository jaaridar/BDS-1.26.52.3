/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d97a0 (ELF vaddr 0xd1d97a0)
 * Label: br::worldgen::processors::JigsawReplacement::vslot5
 * Body:  [[0d2d97a0, 0d2d97b3] [0ee47730, 0ee478e6]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot5
 */


void wg_br__worldgen__processors__JigsawReplacement__vslot5(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)&UNK_0120051e;
  plVar1 = (long *)*param_2;
  *plVar1 = *plVar1 + 0x13;
  uVar2 = (ulong)*(uint *)(plVar1 + 9);
  if (uVar2 + 0x13 < 0x20) {
    func_0x0eee2f00((long)plVar1 + uVar2 + 0x28,&UNK_0120051e,0x13);
    *(int *)(plVar1 + 9) = (int)plVar1[9] + 0x13;
  }
  else {
    if (uVar2 != 0) {
      func_0x0eee2f00((long)plVar1 + uVar2 + 0x28,&UNK_0120051e,0x20 - *(uint *)(plVar1 + 9));
      uVar2 = plVar1[5] * -0x3d4d51c2d82b14b1 + plVar1[1];
      plVar1[1] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[6] * -0x3d4d51c2d82b14b1 + plVar1[2];
      plVar1[2] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[7] * -0x3d4d51c2d82b14b1 + plVar1[3];
      plVar1[3] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[8] * -0x3d4d51c2d82b14b1 + plVar1[4];
      plVar1[4] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      plVar4 = (long *)(&UNK_0120051e + (0x20 - (int)plVar1[9]));
      *(undefined4 *)(plVar1 + 9) = 0;
    }
    if (plVar4 + 4 < &UNK_01200532) {
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
      } while (plVar4 < &UNK_01200512);
    }
    if (plVar4 < &UNK_01200531) {
      func_0x0eee2f00(plVar1 + 5,plVar4,(long)&UNK_01200531 - (long)plVar4);
      *(int *)(plVar1 + 9) = (int)((long)&UNK_01200531 - (long)plVar4);
    }
  }
  return;
}


