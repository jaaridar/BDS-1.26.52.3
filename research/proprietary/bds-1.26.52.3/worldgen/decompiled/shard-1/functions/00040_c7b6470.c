/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7b6470
 * Label: string:Returns a Perlin simplex noise value for the given (x, z) po
 * Body:  [[0c7b6470, 0c7b6474]]
 * Ghidra: FUN_0c7b6470
 */


void FUN_0c7b6470(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\v';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


