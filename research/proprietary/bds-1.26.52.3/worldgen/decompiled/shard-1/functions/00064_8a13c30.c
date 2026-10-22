/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b13c30 (ELF vaddr 0x8a13c30)
 * Label: JigsawStructureDataPacket::vslot5
 * Body:  [[08b13c30, 08b13cb9]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot5
 */


undefined8 *
wg_JigsawStructureDataPacket__vslot5(undefined8 *param_1,long *param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [64];
  
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((param_4 == 0) || (param_3 <= uVar1)) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar2 = func_0x0412dc70();
    func_0x08b13cd0(auStack_68,0x5a,uVar2,param_2,param_3);
    func_0x052bddf0(param_1,auStack_68);
    FUN_048e6d60(auStack_68);
  }
  return param_1;
}


