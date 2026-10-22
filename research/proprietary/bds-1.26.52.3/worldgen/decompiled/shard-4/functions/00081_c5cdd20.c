/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cdd20 (ELF vaddr 0xc5cdd20)
 * Label: JigsawBlock::vslot67
 * Body:  [[0c6cdd20, 0c6cddc2]]
 * Ghidra: wg_JigsawBlock__vslot67
 */


undefined8 wg_JigsawBlock__vslot67(long *param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  iVar1 = param_3[1];
  sVar3 = (**(code **)(*param_2 + 0x118))(param_2);
  if ((iVar1 < sVar3) &&
     (iVar1 = param_3[1], sVar3 = (**(code **)(*param_2 + 0x110))(param_2), sVar3 <= iVar1)) {
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
    cVar2 = (**(code **)(**(long **)(lVar4 + 0x68) + 0x2a0))
                      (*(long **)(lVar4 + 0x68),lVar4,param_2,param_3);
    if (cVar2 != '\0') {
      uStack_28 = param_3[2];
      uStack_30 = CONCAT44(param_3[1] + -1,*param_3);
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,param_2,&uStack_30);
      return uVar5;
    }
  }
  return 0;
}


