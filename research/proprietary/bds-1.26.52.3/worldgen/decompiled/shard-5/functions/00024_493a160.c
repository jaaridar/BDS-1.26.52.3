/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3a160 (ELF vaddr 0x493a160)
 * Label: BiomeSource3d::vslot2
 * Body:  [[04a3a160, 04a3a2bb]]
 * Ghidra: wg_BiomeSource3d__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_BiomeSource3d__vslot2
          (undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,undefined8 param_5,
          undefined4 param_6,long param_7)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iStack_48 = (int)param_5 + -8;
  lStack_50 = ((ulong)((int)param_4 - 8) | param_4 & 0xffffffff00000000) - 0x800000000;
  iStack_44 = (param_3 >> 3) + 2;
  uVar3 = iStack_44 * 0x10;
  lVar1 = (ulong)uVar3 * 8;
  uStack_40 = param_5;
  uStack_38 = param_2;
  lStack_68 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (lStack_68 == 0) {
    func_0x0eec74c0(lVar1,0);
  }
  lStack_58 = (ulong)uVar3 * 8 + lStack_68;
  lStack_60 = lStack_68;
  if (param_7 == 0) {
    cVar2 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,0x20,&UNK_012d6c22,&UNK_01207c1f);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  func_0x04a3a2f0(uStack_38,&lStack_68,param_7);
  func_0x0c84eb20(param_1,&lStack_68,(int)(short)param_3,param_4,uStack_40,param_6);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x0412a280(lStack_68,lStack_58 - lStack_68);
  }
  return param_1;
}


