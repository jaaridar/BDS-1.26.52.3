/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe424600
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::v1_21_20::Ji
 * Body:  [[0e4245bb, 0e4245ea] [0e424600, 0e424622]]
 * Ghidra: FUN_0e424600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e424600(void)

{
  undefined8 in_RAX;
  char *in_RCX;
  char in_CF;
  
  _DAT_0f751c58 = (int)CONCAT71((int7)((ulong)in_RAX >> 8),(char)in_RAX + *in_RCX + in_CF);
  _DAT_0f550af0 = _DAT_0f751c58 + 1;
  func_0x0410844d(0xf751c60);
  _DAT_0f751c38 = _DAT_0f751c58;
  _DAT_0f751c3c = 0xbd0b0110;
  _DAT_0f751c40 = &UNK_0138b1c5;
  _DAT_0f751c48 = 0x53;
  return;
}


