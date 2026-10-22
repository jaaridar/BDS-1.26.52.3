/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc856760 (ELF vaddr 0xc756760)
 * Label: callee-of:0x517ab30
 * Body:  [[0c856760, 0c8567c1] [0c8567d0, 0c8567f8] [0c856800, 0c8568a8] [0c8568b0, 0c85693e]]
 * Ghidra: FUN_0c856760
 */


void FUN_0c856760(long param_1,long param_2,long *param_3,uint param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  long *plVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  long lStack_58;
  int *piStack_50;
  undefined4 uStack_48;
  ulong uStack_44;
  undefined8 *puStack_38;
  
  sVar4 = (short)param_4;
  uVar5 = (param_4 >> 0x10) - 1;
  uStack_80 = (ulong)(*(int *)(param_2 + 0x14) - 1) << 0x20;
  lStack_b8 = 0;
  lStack_a0 = param_7;
  lStack_a8 = param_5;
  uStack_88 = param_6;
  lStack_78 = param_2;
  lStack_70 = param_5;
  do {
    lVar10 = 0;
    lVar8 = 0;
    do {
      lVar7 = (ulong)((uint)*(byte *)(lStack_a0 + lVar10) * 0x50) + *(long *)(param_7 + 0x100);
      iVar9 = *(int *)(param_1 + 0x38) + (int)lStack_b8;
      iStack_90 = *(int *)(param_1 + 0x40) + (int)lVar8;
      _iStack_98 = CONCAT44(*(int *)(param_1 + 0x3c) - (int)sVar4,iVar9);
      uVar3 = (**(code **)(*param_3 + 0x10))(param_3,CONCAT44(iStack_90 >> 2,iVar9 >> 2));
      uVar6 = param_4;
      if ((uVar3 & 0x10000) != 0) {
        sVar2 = (short)(uVar3 - 8);
        if ((sVar4 <= sVar2) && (uVar6 = uVar3 - 8, (short)uVar5 < sVar2)) {
          uVar6 = uVar5;
        }
      }
      if (lStack_70 == 0) {
        uStack_48 = 0;
      }
      else {
        uStack_48 = *(undefined4 *)(lStack_a8 + lVar10 * 4);
      }
      uStack_44 = (uint)((int)(short)uVar6 - (int)sVar4) | uStack_80;
      uStack_68 = *(undefined8 *)(param_1 + 0xfd0);
      uStack_60 = *(undefined2 *)(param_1 + 0x3c);
      lStack_58 = lStack_78;
      piStack_50 = &iStack_98;
      puStack_38 = &uStack_68;
      plVar1 = *(long **)(lVar7 + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,uStack_88,lVar7,&lStack_58);
      }
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar8 != 0x10);
    lStack_b8 = lStack_b8 + 1;
    lStack_a0 = lStack_a0 + 1;
    lStack_a8 = lStack_a8 + 4;
  } while (lStack_b8 != 0x10);
  return;
}


