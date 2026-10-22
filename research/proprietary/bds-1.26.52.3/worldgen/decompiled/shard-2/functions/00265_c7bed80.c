/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8bed80 (ELF vaddr 0xc7bed80)
 * Label: callee-of:0xc5ce6a0
 * Body:  [[0c8bed80, 0c8bf070]]
 * Ghidra: FUN_0c8bed80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c8bed80(long param_1,char *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  char cStack_45;
  int iStack_44;
  char *pcStack_40;
  int *piStack_38;
  long lStack_30;
  char *pcStack_28;
  
  lVar6 = (**(code **)(*param_3 + 0x130))(param_3);
  iVar4 = *(int *)(param_2 + 0x18);
  if ((*(short *)(lVar6 + 0xa8) <= iVar4) && (iVar4 < *(short *)(lVar6 + 0xaa))) {
    if (iVar4 < *(int *)(param_1 + 0x44)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x48) < iVar4) {
      return 0;
    }
    if ((((((param_2[1] != '\x01') || (*(char *)(param_1 + 0x6e) == '\x01')) &&
          ((param_2[2] != '\x01' || (*(char *)(param_1 + 0x6f) == '\x01')))) &&
         ((param_2[3] != '\x01' || (*(char *)(param_1 + 0x70) == '\x01')))) &&
        ((*param_2 != '\x01' || (*(char *)(param_1 + 0x6c) == '\x01')))) &&
       (((param_2[4] != '\x01' || (*(char *)(param_1 + 0x6d) == '\x01')) &&
        ((plVar7 = *(long **)(param_1 + 0x20), plVar7 == (long *)0x0 ||
         (cVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,param_2,param_3), cVar2 != '\0')))))) {
      plVar7 = (long *)(**(code **)(*param_3 + 0x150))(param_3);
      iVar4 = (**(code **)(*plVar7 + 0x128))(plVar7);
      if (iVar4 < *(int *)(param_1 + 0x58)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x5c) < iVar4) {
        return 0;
      }
      uVar5 = *(uint *)(param_2 + 0x10);
      if (((*(char *)(param_1 + 0x40) == '\x01') &&
          (lVar1 = *(long *)(lVar6 + 0x1b8), *(char *)(*(long *)(lVar1 + 0x58) + 0xe0) == '\x01'))
         && (fVar10 = (float)*(undefined8 *)(lVar1 + 0x34),
            fVar11 = (float)*(undefined8 *)(lVar1 + 0x40),
            _DAT_011983f4 <
            (((float)((ulong)*(undefined8 *)(lVar1 + 0x34) >> 0x20) - fVar10) + fVar10) *
            (((float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) - fVar11) + fVar11))) {
        uVar5 = func_0x0c9d5ba0(param_3,param_2 + 0x14,10,1);
        uVar5 = uVar5 & 0xff;
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x30)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x34) < (int)uVar5) {
        return 0;
      }
      iVar4 = (**(code **)(**(long **)(lVar6 + 0xa0) + 0x428))();
      uVar5 = -(iVar4 / 24000);
      if ((int)uVar5 < 0) {
        uVar5 = iVar4 / 24000;
      }
      fVar10 = *(float *)(&UNK_01d41980 + (ulong)((iVar4 >> 0x1f ^ uVar5) & 7) * 4);
      if (fVar10 < *(float *)(param_1 + 0x38)) {
        return 0;
      }
      if (*(float *)(param_1 + 0x3c) <= fVar10 && fVar10 != *(float *)(param_1 + 0x3c)) {
        return 0;
      }
      plVar7 = (long *)(**(code **)(*param_3 + 0x150))(param_3);
      puVar8 = (ulong *)(**(code **)(*plVar7 + 0x280))(plVar7);
      uVar9 = *puVar8 / 0x14;
      if (uVar9 < *(ulong *)(param_1 + 0x80)) {
        return 0;
      }
      if (*(ulong *)(param_1 + 0x88) < uVar9) {
        return 0;
      }
      if (*(ulong *)(param_2 + 8) < uVar9) {
        plVar7 = (long *)(**(code **)(*param_3 + 0x150))(param_3);
        cVar2 = (**(code **)(*plVar7 + 0x9f0))(plVar7);
        if (cVar2 == '\0') {
          lVar6 = (**(code **)(*param_3 + 0x150))(param_3);
          lVar6 = *(long *)(lVar6 + 0x748);
          uVar3 = func_0x0c94ee70(lVar6,param_1 + 200);
          if (uVar3 != 0xffff) {
            if (*(char *)(lVar6 + 0xf8) != '\x01') {
              return 0;
            }
            if (*(char *)(lVar6 + 0x38 + (ulong)uVar3 * 0x38) != '\x01') {
              return 0;
            }
          }
        }
        iStack_44 = *(int *)(param_1 + 0x74);
        if (iStack_44 != 0) {
          cStack_45 = '\0';
          iStack_44 = iStack_44 * iStack_44;
          plVar7 = (long *)(**(code **)(*param_3 + 0x130))(param_3);
          piStack_38 = &iStack_44;
          pcStack_28 = &cStack_45;
          pcStack_40 = param_2;
          lStack_30 = param_1;
          (**(code **)(*plVar7 + 0x58))(plVar7,&UNK_0c8cf810,&pcStack_40);
          if (cStack_45 != '\0') {
            return 0;
          }
        }
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


