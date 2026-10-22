/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x41084d6 (ELF vaddr 0x40084d6)
 * Label: callee-of:0xc961580
 * Body:  [[041084d6, 04108563]]
 * Ghidra: FUN_041084d6
 */


void FUN_041084d6(long param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  iVar3 = func_0x0eee2d30(0xf546fb8);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined1 *)(param_1 + 1) = 0;
    iVar3 = func_0x0eee2d60(0xf546fb8);
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
    puVar5 = &UNK_014756f7;
  }
  else {
    puVar5 = &UNK_01239448;
  }
  uVar4 = func_0x041085a0(puVar5,&UNK_013a8ef1);
  func_0x04882e20(uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


