/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x410844d (ELF vaddr 0x400844d)
 * Label: callee-of:0x517ab30
 * Body:  [[0410844d, 04108563]]
 * Ghidra: FUN_0410844d
 */


void FUN_0410844d(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  *param_1 = 1;
  iVar3 = func_0x0eee2d30(0xf546fb8);
  if (iVar3 == 0) {
    bVar1 = param_1[1];
    param_1[1] = 1;
    iVar3 = pthread_mutex_unlock(0xf546fb8);
    if (iVar3 == 0) {
      if ((bVar1 & 4) == 0) {
        return;
      }
      iVar3 = func_0x0eee2d80(0xf546f88);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      func_0x041085a0(&UNK_011b4e86,&UNK_01287bcb);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  lVar4 = func_0x041085a0(puVar6,&UNK_01287bcb);
  FUN_04882e20();
  iVar3 = func_0x0eee2d30(0xf546fb8);
  if (iVar3 == 0) {
    *(undefined4 *)(lVar4 + 4) = 0;
    bVar1 = *(byte *)(lVar4 + 1);
    *(undefined1 *)(lVar4 + 1) = 0;
    iVar3 = pthread_mutex_unlock(0xf546fb8);
    if (iVar3 == 0) {
      if ((bVar1 & 4) == 0) {
        return;
      }
      iVar3 = func_0x0eee2d80(0xf546f88);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      func_0x041085a0(&UNK_011b4e86,&UNK_013a8ef1);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  uVar5 = func_0x041085a0(puVar6,&UNK_013a8ef1);
  FUN_04882e20(uVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


