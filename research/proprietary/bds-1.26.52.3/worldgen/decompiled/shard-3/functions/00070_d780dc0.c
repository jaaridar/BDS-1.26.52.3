/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd780dc0
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::JigsawJointT
 * Body:  [[0d780dc0, 0d780dc8]]
 * Ghidra: FUN_0d780dc0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0d780dc0(void)

{
  code *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined8 in_RCX;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)((ulong)in_RCX >> 8);
  pcVar1 = (code *)swi(0x40);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


