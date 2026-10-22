/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b2a0 (ELF vaddr 0x493b2a0)
 * Label: callee-of:0x493ae30
 * Body:  [[04a3b2a0, 04a3b4b0]]
 * Ghidra: FUN_04a3b2a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04a3b2a0(long *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 auStack_68 [56];
  
  if (((char)param_2[3] == '\x01') && (*(char *)(param_1[0x19] + 0xb8) == '\0')) {
    uStack_a8 = (long *)CONCAT44(param_2[2] >> 4,*param_2 >> 4);
    FUN_0525af30(&plStack_98,param_1[0x19],&uStack_a8);
    if (plStack_98 == (long *)0x0) {
      bVar10 = true;
      lVar4 = 0;
      plVar3 = plStack_90;
    }
    else {
      iVar6 = (int)(short)plStack_98[4] >> 0x1f;
      iVar7 = iVar6 - (short)plStack_98[4];
      iVar8 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      uVar5 = ((param_2[1] >> 2) - iVar6) + (iVar8 >> 2);
      if (uVar5 < 0x60) {
        iVar8 = *param_2;
        iVar6 = param_2[2];
        pfVar9 = (float *)(((long)(iVar6 >> 2) - (long)*(int *)((long)plStack_98 + 0x1c)) * 0x198 +
                          ((long)(iVar8 >> 2) - (long)(int)plStack_98[3]) * 0x660 + *plStack_98);
        if (*(short *)((long)pfVar9 + (ulong)uVar5 * 2 + 0xac) == -1) goto LAB_04a3b3f0;
        lVar2 = *param_1;
        lVar4 = func_0x0c8ccb70(param_1[0x1a]);
        if (lVar4 == 0) goto LAB_04a3b3f0;
        fVar11 = (float)FUN_0d3414e0((float)(iVar8 >> 2) * _DAT_011987c4,0,
                                     (float)(iVar6 >> 2) * _DAT_011987c4,lVar2 + 0x118);
        fVar11 = (fVar11 * _DAT_01198494 + *pfVar9) / _DAT_011988e8;
        if (0.0 <= fVar11) {
          fVar12 = _DAT_011983f0;
          if (fVar11 <= _DAT_011983f0) {
            fVar12 = fVar11;
          }
          if (_DAT_011986e0 < fVar12) goto LAB_04a3b3f0;
        }
      }
      else {
LAB_04a3b3f0:
        lVar4 = 0;
      }
      bVar10 = lVar4 == 0;
      plVar3 = plStack_90;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    if (!bVar10) {
      return lVar4;
    }
  }
  func_0x052582f0(&plStack_98,*param_1,*(undefined8 *)param_2,param_2[2]);
  if ((char)param_1[0x18] == '\x01') {
    uStack_a8 = param_1 + 4;
    if ((char)param_1[0x16] == '\0') {
      uStack_a8 = (long *)0x0;
      uStack_a0 = 0x7fffffffffffffff;
      func_0x04a3cfe0(param_1 + 4,auStack_68,&uStack_a8);
      if (uStack_a8 == (long *)0x0) goto LAB_04a3b4a0;
    }
    lVar4 = uStack_a8[0x11];
  }
  else {
LAB_04a3b4a0:
    lVar4 = 0;
  }
  return lVar4;
}


