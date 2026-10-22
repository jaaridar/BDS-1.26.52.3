/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaffb10 (ELF vaddr 0xc9ffb10)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0caffb10, 0caffc8b] [0caffc90, 0caffd48]]
 * Ghidra: FUN_0caffb10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0caffb10(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  undefined8 *puVar6;
  
  if (((param_1[0x1c] != param_1[0x1a]) || ((int)param_1[0x1b] != 0)) &&
     (cVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    param_1[0x17] = lVar2;
    func_0x0412a280(lVar2,param_1[0x18] - lVar2);
  }
  puVar6 = (undefined8 *)param_1[0x13];
  while (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar6;
    func_0x0412a280(puVar6,0x20);
    puVar6 = puVar3;
  }
  lVar2 = param_1[0x11];
  param_1[0x11] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0x12] << 3);
  }
  if (((param_1[0x10] != param_1[0xe]) || ((int)param_1[0xf] != 0)) &&
     (cVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    param_1[0xc] = lVar2;
    func_0x0412a280(lVar2,param_1[0xd] - lVar2);
  }
  if (((param_1[10] != param_1[8]) || ((int)param_1[9] != 0)) &&
     (cVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar6 = (undefined8 *)param_1[5];
  while (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar6;
    plVar4 = (long *)puVar6[4];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        func_0x0412c2d0(plVar4);
      }
    }
    func_0x0412a280(puVar6,0x28);
    puVar6 = puVar3;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[4] << 3);
  }
  if (((param_1[2] != *param_1) || ((int)param_1[1] != 0)) &&
     (cVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  return;
}


