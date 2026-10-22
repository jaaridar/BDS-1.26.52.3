/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d4f40 (ELF vaddr 0xd1d4f40)
 * Label: string:void br::worldgen::StructureInstance::placeEntities(BlockSou
 * Body:  [[0d2d4f40, 0d2d4f68] [0d2d4f70, 0d2d50b1]]
 * Ghidra: FUN_0d2d4f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d2d4f40(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint *puVar14;
  char cVar15;
  long *plVar16;
  ulong uStack_48;
  uint uStack_40;
  undefined8 uStack_3c;
  uint uStack_34;
  
  plVar13 = *(long **)(param_1 + 0x40);
  for (plVar16 = *(long **)(param_1 + 0x38); plVar16 != plVar13; plVar16 = plVar16 + 1) {
    if ((*plVar16 == 0) &&
       (cVar15 = func_0x0eeddcf0(&UNK_01458338,&UNK_01388cf1,0x51,&UNK_013d7966,&UNK_013024d7),
       cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar14 = (uint *)*plVar16;
    uVar1 = param_3[3];
    uVar2 = *puVar14;
    if ((int)uVar2 <= (int)uVar1) {
      uVar3 = *param_3;
      uVar4 = puVar14[3];
      if ((int)uVar3 <= (int)uVar4) {
        uVar5 = param_3[5];
        uVar6 = puVar14[2];
        if ((int)uVar6 <= (int)uVar5) {
          uVar7 = param_3[2];
          uVar8 = puVar14[5];
          if ((int)uVar7 <= (int)uVar8) {
            uVar9 = param_3[4];
            uVar10 = puVar14[1];
            if ((int)uVar10 <= (int)uVar9) {
              uVar11 = param_3[1];
              uVar12 = puVar14[4];
              if ((int)uVar11 <= (int)uVar12) {
                if ((int)uVar2 < (int)uVar3) {
                  uVar2 = uVar3;
                }
                if ((int)uVar10 < (int)uVar11) {
                  uVar10 = uVar11;
                }
                uStack_40 = uVar6;
                if ((int)uVar6 < (int)uVar7) {
                  uStack_40 = uVar7;
                }
                if ((int)uVar4 < (int)uVar1) {
                  uVar1 = uVar4;
                }
                if ((int)uVar12 < (int)uVar9) {
                  uVar9 = uVar12;
                }
                uStack_34 = uVar5;
                if ((int)uVar8 < (int)uVar5) {
                  uStack_34 = uVar8;
                }
                uStack_3c = CONCAT44(uVar9,uVar1);
                uStack_48 = (ulong)uVar2 & 0xff | CONCAT44(uVar10,uVar2) & 0xffffffffffffff00;
                (**(code **)(**(long **)(puVar14 + 6) + 0x50))
                          (*(long **)(puVar14 + 6),param_2,*(undefined8 *)(puVar14 + 10),
                           puVar14[0xc],(char)puVar14[9],&uStack_48);
              }
            }
          }
        }
      }
    }
  }
  return;
}


