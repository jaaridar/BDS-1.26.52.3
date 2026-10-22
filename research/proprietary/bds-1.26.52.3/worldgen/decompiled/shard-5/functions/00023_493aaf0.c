/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3aaf0 (ELF vaddr 0x493aaf0)
 * Label: BiomeSource3d::vslot4
 * Body:  [[04a3aaf0, 04a3aca8] [04a3acb0, 04a3acd1] [04a3ace0, 04a3ad55]]
 * Ghidra: wg_BiomeSource3d__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_BiomeSource3d__vslot4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  sVar2 = *(short *)(*(long *)(param_2 + 0x30) + 0xaa);
  sVar3 = *(short *)(*(long *)(param_2 + 0x30) + 0xa8);
  uVar5 = *(ulong *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x40);
  uStack_38 = param_1;
  uVar9 = (**(code **)(**(long **)(param_2 + 0x28) + 0x438))();
  iStack_70 = uVar4 - 8;
  lStack_78 = ((ulong)((int)uVar5 - 8) | uVar5 & 0xffffffff00000000) - 0x800000000;
  uVar10 = (uint)(short)(sVar2 - sVar3);
  iStack_6c = (uVar10 >> 3) + 2;
  uVar11 = iStack_6c * 0x10;
  lVar1 = (ulong)uVar11 * 8;
  uStack_48 = uVar5;
  uStack_40 = (ulong)uVar4;
  lStack_90 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (lStack_90 == 0) {
    func_0x0eec74c0(lVar1,0);
  }
  lStack_80 = lStack_90 + (ulong)uVar11 * 8;
  lStack_88 = lStack_90;
  if ((param_3 == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,0x53,&UNK_012d6c22,&UNK_011b82db),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x04a3a2f0(uStack_38,&lStack_90,param_3);
  func_0x0c84f340(&lStack_a8,&lStack_90,uVar10,uStack_48,uStack_40,uVar9);
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  lStack_58 = lStack_98;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  func_0x0caf8fb0(param_2,&lStack_68);
  lVar7 = lStack_68;
  lVar1 = lStack_60;
  if (lStack_68 != 0) {
    for (; lVar7 != lVar1; lVar1 = lVar1 + -8) {
      plVar6 = *(long **)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    func_0x0412a280(lVar7,lStack_58 - lVar7);
  }
  lVar7 = lStack_a8;
  lVar1 = lStack_a0;
  if (lStack_a8 != 0) {
    for (; lVar7 != lVar1; lVar1 = lVar1 + -8) {
      plVar6 = *(long **)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    lStack_a0 = lVar7;
    func_0x0412a280(lStack_a8,lStack_98 - lStack_a8);
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    func_0x0412a280(lStack_90,lStack_80 - lStack_90);
  }
  return;
}


