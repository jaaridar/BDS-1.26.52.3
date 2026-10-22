/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9d4e90 (ELF vaddr 0xc8d4e90)
 * Label: caller-of-seed
 * Body:  [[0c9d4e90, 0c9d4fef]]
 * Ghidra: FUN_0c9d4e90
 */


ulong FUN_0c9d4e90(long *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iStack_48;
  int iStack_44;
  long lStack_40;
  long lStack_38;
  
  uVar8 = 0;
  if (((int)*(short *)((long)param_1 + 0x42) <= (int)param_2[1]) &&
     ((int)param_2[1] < (int)(short)param_1[8])) {
    iStack_48 = (int)*param_2 >> 4;
    iStack_44 = (int)param_2[2] >> 4;
    lStack_38 = (**(code **)(*param_1 + 0x148))(param_1,&iStack_48);
    if ((lStack_38 == 0) || (*(char *)(lStack_38 + 0x5a) == '\x01')) {
      uVar8 = 0;
    }
    else {
      uVar7 = (short)param_2[1] - *(short *)((long)param_1 + 0x42);
      uVar10 = (ulong)(short)((uint)(int)(short)uVar7 >> 4);
      lVar3 = *(long *)(lStack_38 + 0x108);
      uVar11 = (*(long *)(lStack_38 + 0x110) - lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5;
      uVar8 = CONCAT71((int7)((ulong)param_2 >> 8),1);
      if (uVar10 <= uVar11 && uVar11 - uVar10 != 0) {
        uVar1 = *param_2;
        uVar2 = param_2[2];
        lStack_40 = uVar10 * 0x68;
        uVar5 = (uVar1 & 0xf) << 8;
        uVar9 = (uVar2 & 0xf) << 4;
        plVar4 = *(long **)(lVar3 + 0x30 + lStack_40);
        lVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar9 | uVar7 & 0xf | uVar5);
        if (*(long *)(lVar6 + 0x110) != *(long *)(param_3 + 0x110)) {
          func_0x0ca92a80(lVar3 + lStack_40,0,uVar9 | uVar7 & 0xf | uVar5,param_3);
          func_0x0ca6a5d0(*(long *)(lStack_38 + 0x30),
                          CONCAT44((int)*(short *)(*(long *)(lStack_38 + 0x30) + 0xa8) +
                                   (int)(short)uVar7,*(int *)(lStack_38 + 0x50) << 4 | uVar1 & 0xf),
                          *(int *)(lStack_38 + 0x54) << 4 | uVar2 & 0xf,lVar6,param_3);
        }
      }
    }
  }
  return uVar8 & 0xffffffff;
}


