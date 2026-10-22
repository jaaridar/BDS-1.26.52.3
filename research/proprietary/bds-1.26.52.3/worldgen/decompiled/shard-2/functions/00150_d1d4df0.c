/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d4df0 (ELF vaddr 0xd1d4df0)
 * Label: string:bool br::worldgen::StructureInstance::postProcess(BlockSourc
 * Body:  [[0d2d4df0, 0d2d4f39]]
 * Ghidra: FUN_0d2d4df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0d2d4df0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  undefined8 uStack_48;
  int iStack_40;
  undefined8 uStack_3c;
  int iStack_34;
  
  plVar6 = (long *)param_1[7];
  plVar1 = (long *)param_1[8];
  if (plVar6 == plVar1) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    do {
      if (*plVar6 == 0) {
        cVar3 = func_0x0eeddcf0(&UNK_01458338,&UNK_01388cf1,0x47,&UNK_013d7966,&UNK_014a6688);
        if (cVar3 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      piVar2 = (int *)*plVar6;
      if ((((*piVar2 <= param_4[3]) && (*param_4 <= piVar2[3])) && (piVar2[2] <= param_4[5])) &&
         (((param_4[2] <= piVar2[5] && (piVar2[1] <= param_4[4])) && (param_4[1] <= piVar2[4])))) {
        iStack_40 = param_4[2];
        uStack_48 = *(undefined8 *)param_4;
        iStack_34 = param_4[5];
        uStack_3c = *(undefined8 *)(param_4 + 3);
        bVar4 = (**(code **)(**(long **)(piVar2 + 6) + 0x40))
                          (*(long **)(piVar2 + 6),param_2,*(undefined8 *)(piVar2 + 10),piVar2[0xc],
                           *param_1,*(undefined4 *)(param_1 + 1),&uStack_48,(char)piVar2[9],param_3,
                           1,(char)piVar2[0x14]);
        bVar5 = bVar5 | bVar4;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return bVar5 & 1;
}


