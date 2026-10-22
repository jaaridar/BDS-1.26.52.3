/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4931450 (ELF vaddr 0x4831450)
 * Label: callee-of:0x5253490
 * Body:  [[04931450, 0493147f]]
 * Ghidra: FUN_04931450
 */


void FUN_04931450(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)func_0x041086b0(8);
  *puVar2 = &UNK_0eef04d0;
  func_0x041088a0(puVar2,&UNK_0eef04e8,&SUB_0412a380);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


