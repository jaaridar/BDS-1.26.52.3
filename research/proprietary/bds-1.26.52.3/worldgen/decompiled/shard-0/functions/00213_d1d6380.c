/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6380 (ELF vaddr 0xd1d6380)
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot3
 * Body:  [[0d2d6380, 0d2d63ec] [0ee47730, 0ee478e6]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot3
 */


/* WARNING: Possible PIC construction at 0x0d2d6399: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2d639e) */
/* WARNING: Removing unreachable block (ram,0x0d2d63ad) */
/* WARNING: Removing unreachable block (ram,0x0d2d63a7) */
/* WARNING: Removing unreachable block (ram,0x0d2d63b1) */
/* WARNING: Removing unreachable block (ram,0x0d2d63b7) */
/* WARNING: Removing unreachable block (ram,0x0d2d63c1) */
/* WARNING: Removing unreachable block (ram,0x0d2d63bb) */
/* WARNING: Removing unreachable block (ram,0x0d2d63c5) */
/* WARNING: Removing unreachable block (ram,0x0d2d63e7) */
/* WARNING: Removing unreachable block (ram,0x0d2d63d5) */

void wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot3
               (undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)&UNK_011cb7f2;
  plVar1 = (long *)*param_2;
  *plVar1 = *plVar1 + 0xc;
  uVar2 = (ulong)*(uint *)(plVar1 + 9);
  if (uVar2 + 0xc < 0x20) {
    func_0x0eee2f00((long)plVar1 + uVar2 + 0x28,&UNK_011cb7f2,0xc);
    *(int *)(plVar1 + 9) = (int)plVar1[9] + 0xc;
  }
  else {
    if (uVar2 != 0) {
      func_0x0eee2f00((long)plVar1 + uVar2 + 0x28,&UNK_011cb7f2,0x20 - *(uint *)(plVar1 + 9));
      uVar2 = plVar1[5] * -0x3d4d51c2d82b14b1 + plVar1[1];
      plVar1[1] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[6] * -0x3d4d51c2d82b14b1 + plVar1[2];
      plVar1[2] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[7] * -0x3d4d51c2d82b14b1 + plVar1[3];
      plVar1[3] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      uVar2 = plVar1[8] * -0x3d4d51c2d82b14b1 + plVar1[4];
      plVar1[4] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
      plVar4 = (long *)(&UNK_011cb7f2 + (0x20 - (int)plVar1[9]));
      *(undefined4 *)(plVar1 + 9) = 0;
    }
    if (plVar4 + 4 < &UNK_011cb7ff) {
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
      } while (plVar4 < &UNK_011cb7df);
    }
    if (plVar4 < &UNK_011cb7fe) {
      func_0x0eee2f00(plVar1 + 5,plVar4,(long)&UNK_011cb7fe - (long)plVar4);
      *(int *)(plVar1 + 9) = (int)((long)&UNK_011cb7fe - (long)plVar4);
    }
  }
  return;
}


