/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6380 (ELF vaddr 0xd1d6380)
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot3
 * Body:  [[0d2d6380, 0d2d63ec]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot3
 */


void wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot3(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  FUN_0ee47730(param_2,&UNK_011cb7f2,0xc);
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x10);
  }
  if (uVar5 != 0xffffffffffffffff) {
    if ((bVar1 & 1) == 0) {
      plVar8 = (long *)(param_1 + 9);
    }
    else {
      plVar8 = *(long **)(param_1 + 0x18);
    }
    if (uVar5 == 0 || plVar8 != (long *)0x0) {
      if (plVar8 != (long *)0x0) {
        plVar2 = (long *)*param_2;
        *plVar2 = *plVar2 + uVar5;
        uVar4 = (ulong)*(uint *)(plVar2 + 9);
        if (uVar5 + uVar4 < 0x20) {
          func_0x0eee2f00((long)plVar2 + uVar4 + 0x28,plVar8,uVar5);
          *(int *)(plVar2 + 9) = (int)plVar2[9] + (int)uVar5;
        }
        else {
          plVar7 = (long *)(uVar5 + (long)plVar8);
          if (uVar4 != 0) {
            func_0x0eee2f00((long)plVar2 + uVar4 + 0x28,plVar8,0x20 - *(uint *)(plVar2 + 9));
            uVar5 = plVar2[5] * -0x3d4d51c2d82b14b1 + plVar2[1];
            plVar2[1] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
            uVar5 = plVar2[6] * -0x3d4d51c2d82b14b1 + plVar2[2];
            plVar2[2] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
            uVar5 = plVar2[7] * -0x3d4d51c2d82b14b1 + plVar2[3];
            plVar2[3] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
            uVar5 = plVar2[8] * -0x3d4d51c2d82b14b1 + plVar2[4];
            plVar2[4] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
            plVar8 = (long *)((long)plVar8 + (ulong)(0x20 - (int)plVar2[9]));
            *(undefined4 *)(plVar2 + 9) = 0;
          }
          if (plVar8 + 4 <= plVar7) {
            lVar6 = plVar2[1];
            lVar10 = plVar2[2];
            lVar11 = plVar2[3];
            lVar9 = plVar2[4];
            do {
              uVar5 = *plVar8 * -0x3d4d51c2d82b14b1 + lVar6;
              lVar6 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
              plVar2[1] = lVar6;
              uVar5 = plVar8[1] * -0x3d4d51c2d82b14b1 + lVar10;
              lVar10 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
              plVar2[2] = lVar10;
              uVar5 = plVar8[2] * -0x3d4d51c2d82b14b1 + lVar11;
              lVar11 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
              plVar2[3] = lVar11;
              uVar5 = plVar8[3] * -0x3d4d51c2d82b14b1 + lVar9;
              lVar9 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
              plVar2[4] = lVar9;
              plVar8 = plVar8 + 4;
            } while (plVar8 <= plVar7 + -4);
          }
          if (plVar8 < plVar7) {
            func_0x0eee2f00(plVar2 + 5,plVar8,(long)plVar7 - (long)plVar8);
            *(int *)(plVar2 + 9) = (int)((long)plVar7 - (long)plVar8);
          }
        }
      }
      return;
    }
  }
  func_0x04890760();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


