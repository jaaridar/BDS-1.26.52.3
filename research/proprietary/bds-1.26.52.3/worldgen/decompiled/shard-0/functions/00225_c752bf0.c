/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc852bf0 (ELF vaddr 0xc752bf0)
 * Label: callee-of:0x51f1390
 * Body:  [[0c852bf0, 0c852cca]]
 * Ghidra: FUN_0c852bf0
 */


void FUN_0c852bf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf718af0,1);
    *(undefined8 *)(param_1 + 8) = uVar2;
    lVar1 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
  }
  if (lVar1 == 0) {
    uVar2 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf7194f0,1);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if (lVar1 == 0) {
    uVar2 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f714ce0,1);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (lVar1 == 0) {
    uVar2 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f71bd88,1);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    lVar1 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  if (lVar1 != 0) {
    return;
  }
  uVar2 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713f00,1);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}


