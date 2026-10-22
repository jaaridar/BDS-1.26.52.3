/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca67ab0 (ELF vaddr 0xc967ab0)
 * Label: Dimension::vslot21
 * Body:  [[0ca67370, 0ca674b5] [0ca67ab0, 0ca67ab8]]
 * Ghidra: wg_Dimension__vslot21
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot21(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_198 [368];
  
  cVar3 = func_0x0cafcba0(param_3);
  if (cVar3 != '\0') {
    func_0x0c9d0c10(auStack_198,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                    param_2,1,0,0,0);
    func_0x0cafca30(param_3,auStack_198);
    func_0x0c9d0f40(auStack_198);
  }
  cVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x9f0))();
  if (cVar3 == '\0') {
    iVar4 = (**(code **)(**(long **)(param_3 + 0x30) + 0x18))();
    if (iVar4 == *(int *)(param_1 + 0x168)) {
      func_0x0ca674d0(param_1 + -8,param_3 + 0x50);
      if (*(long *)(param_1 + 0x3f8) != 0) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x98) + 0x558))();
        uVar1 = *(undefined8 *)(param_1 + 0x3f8);
        if (*(long *)(param_1 + 0x1a0) == 0) {
          cVar3 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98);
          if (cVar3 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
        }
        uVar2 = *(undefined8 *)(param_1 + 0x1a0);
        puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x98) + 0x280))();
        FUN_0cb27310(uVar1,uVar5,uVar2,param_1 + 0x18,param_3,*puVar6);
      }
    }
  }
  return;
}


