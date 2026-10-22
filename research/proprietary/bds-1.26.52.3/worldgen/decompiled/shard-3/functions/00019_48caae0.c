/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48caae0
 * Label: br::worldgen::WorldGenRandom::vslot11
 * Body:  [[048caae0, 048caaeb]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot11
 */


undefined4
wg_br__worldgen__WorldGenRandom__vslot11
          (undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x77);
  *pcVar1 = *pcVar1 + param_4;
  LOCK();
  uVar2 = *(undefined4 *)(param_3 + -0x76b7f59f);
  *(undefined4 *)(param_3 + -0x76b7f59f) = in_EAX;
  UNLOCK();
  return uVar2;
}



/* ---- assembly ---- */
/* 048caae0 */  ADD byte ptr [RAX + -0x77],CL
/* 048caae3 */  FUCOMIP ST0,ST0
/* 048caae5 */  XCHG dword ptr [RDX + -0x76b7f59f],EAX
/* 048caaeb */  RET
