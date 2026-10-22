/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e9e80 (ELF vaddr 0xc7e9e80)
 * Label: string:Biomes in Nether are only compatible with following Surface
 * Body:  [[0c8e9e80, 0c8e9ea5] [0c8e9eb0, 0c8e9f97]]
 * Ghidra: FUN_0c8e9e80
 */


void FUN_0c8e9e80(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  param_1 = (long *)*param_1;
  plVar3 = (long *)*param_1;
  lVar8 = *plVar3;
  lVar4 = plVar3[1];
  if (lVar4 - lVar8 != 0) {
    lVar5 = lVar4;
    uVar9 = lVar4 - lVar8 >> 2;
    do {
      while( true ) {
        uVar6 = uVar9 >> 1;
        lVar1 = lVar8 + uVar6 * 4;
        iVar2 = *(int *)(lVar8 + uVar6 * 4);
        if (iVar2 < 1) break;
        if (iVar2 == 1) {
          if (uVar9 != 1) {
            do {
              uVar9 = uVar6 >> 1;
              uVar10 = ~uVar9 + uVar6;
              uVar6 = uVar9;
              if (*(int *)(lVar8 + uVar9 * 4) < 1) {
                lVar8 = lVar8 + 4 + uVar9 * 4;
                uVar6 = uVar10;
              }
            } while (uVar6 != 0);
          }
          lVar7 = lVar5 - (lVar1 + 4);
          if (lVar7 != 0) {
            uVar9 = lVar7 >> 2;
            lVar5 = lVar1 + 4;
            do {
              uVar6 = uVar9 >> 1;
              uVar9 = ~uVar6 + uVar9;
              lVar1 = lVar5 + 4 + uVar6 * 4;
              if (1 < *(int *)(lVar5 + uVar6 * 4)) {
                uVar9 = uVar6;
                lVar1 = lVar5;
              }
              lVar5 = lVar1;
            } while (uVar9 != 0);
          }
          if ((lVar8 != lVar5) && (lVar8 != lVar4)) {
            return;
          }
          goto LAB_0c8e9f74;
        }
        lVar5 = lVar1;
        uVar9 = uVar6;
        if (uVar6 == 0) goto LAB_0c8e9f74;
      }
      lVar8 = lVar1 + 4;
      uVar9 = ~uVar6 + uVar9;
    } while (uVar9 != 0);
  }
LAB_0c8e9f74:
  func_0x04e8ef80(1,3,5,&UNK_011fee39);
  *(undefined1 *)param_1[1] = 0;
  return;
}


