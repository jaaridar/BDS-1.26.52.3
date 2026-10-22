/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa2279c0
 * Label: string:PlaceJigsawError
 * Body:  [[0a2279c0, 0a227a02]]
 * Ghidra: FUN_0a2279c0
 */


/* WARNING: Instruction at (ram,0x0a2279d7) overlaps instruction at (ram,0x0a2279d6)
    */

void FUN_0a2279c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x77);
  *pcVar1 = *pcVar1 + (char)param_4;
  *(undefined4 *)(CONCAT44(in_register_00000004,in_EAX) + 0x20) = 0x886b3962;
  *(undefined8 *)(CONCAT44(in_register_00000004,in_EAX) + 0x18) = 0;
  if (param_3 == 0) {
    *(undefined1 *)(CONCAT44(in_register_00000004,in_EAX) + 0x24) = 4;
    *(undefined8 *)CONCAT44(in_register_00000004,in_EAX) = param_4;
  }
  else {
    *(undefined1 *)(CONCAT44(in_register_00000004,in_EAX) + 0x24) = 3;
    *(long *)CONCAT44(in_register_00000004,in_EAX) = param_3;
  }
  *(undefined8 *)(CONCAT44(in_register_00000004,in_EAX) + 0x28) = param_2;
  *(undefined8 *)(CONCAT44(in_register_00000004,in_EAX) + 0x30) = 0;
  *(undefined **)(CONCAT44(in_register_00000004,in_EAX) + 0x38) = &UNK_0a227a10;
  return;
}


