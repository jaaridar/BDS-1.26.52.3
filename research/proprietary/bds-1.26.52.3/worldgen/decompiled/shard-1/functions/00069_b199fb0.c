/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb199fb0
 * Label: string:minecraft:cave_s
 * Body:  [[0b199fb0, 0b199fbb] [0b199fdd, 0b19a005]]
 * Ghidra: FUN_0b199fb0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0b199fb0(void)

{
  byte *pbVar1;
  byte bVar2;
  char *in_RAX;
  byte in_CL;
  char in_CF;
  
  *in_RAX = (*in_RAX - (char)in_RAX) - in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(in_RAX + -0x75);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_CL;
  if (*pbVar1 != 0) {
    in_RAX[-0x7b] = in_RAX[-0x7b] + in_CL + CARRY1(bVar2,in_CL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(in_RAX + 0x20))();
  return;
}


