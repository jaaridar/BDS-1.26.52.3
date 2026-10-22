/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d7400
 * Label: br::worldgen::processors::BlockRules::AlwaysTrue::vslot2
 * Body:  [[0d1d7400, 0d1d7411]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__AlwaysTrue__vslot2
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_br__worldgen__processors__BlockRules__AlwaysTrue__vslot2
               (byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = (byte)param_4;
  *(char *)(param_4 + 0x570f1c68) = *(char *)(param_4 + 0x570f1c68) + bVar3;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  pbVar1 = (byte *)(param_4 * 5 + 0x70);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *(char *)(param_4 + -0x77) = *(char *)(param_4 + -0x77) + bVar3 + CARRY1(bVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


