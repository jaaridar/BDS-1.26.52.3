/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6835d0 (ELF vaddr 0xc5835d0)
 * Label: caller-of-seed
 * Body:  [[0c6835d0, 0c6838f4]]
 * Ghidra: FUN_0c6835d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c6835d0(long param_1,long param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  undefined8 uStack_68;
  int iStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = wg_JigsawBlock__vslot76();
  lVar1 = *(long *)(param_4 + 0x68);
  lVar9 = *(long *)(lVar1 + 0x1b0);
  if (lVar9 == 0) {
LAB_0c683643:
    plVar8 = *(long **)(lVar1 + 0x350);
    while( true ) {
      if (plVar8 == *(long **)(lVar1 + 0x358)) {
        return uVar5;
      }
      if (*(ulong *)(((undefined8 *)*plVar8)[1] + 8) == _DAT_0f6fe3a0) break;
      plVar8 = plVar8 + 2;
    }
    uVar6 = (*(code *)**(undefined8 **)*plVar8)();
    if ((int)uVar6 == 0 || (uVar6 >> 0x20 & 1) == 0) {
      return uVar5;
    }
  }
  else {
    lVar12 = lVar1 + 0x1b0;
    do {
      bVar14 = *(ulong *)(lVar9 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar14) {
        lVar12 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)bVar14 * 8);
    } while (lVar9 != 0);
    if ((lVar12 == lVar1 + 0x1b0) || (_DAT_0f6fe3a0 < *(ulong *)(lVar12 + 0x20))) goto LAB_0c683643;
    cVar2 = (char)*(undefined4 *)(lVar12 + 0x2c);
    if ((ushort)((*(ushort *)(param_4 + 0x128) >>
                 (((char)*(undefined4 *)(lVar12 + 0x30) - cVar2) + 1U & 0x1f)) <<
                (0x10U - cVar2 & 0x1f)) == 0) {
      return uVar5;
    }
  }
  cVar2 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x9f0))();
  if (cVar2 != '\0') {
    return uVar5;
  }
  iVar3 = func_0x0bbfe2d0(param_2 + 8);
  if (iVar3 == -1) {
    return uVar5;
  }
  iVar4 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x468))();
  if (iVar3 != 1) {
    if (iVar3 != 5) {
      return uVar5;
    }
    if (iVar4 != 1) {
      return uVar5;
    }
  }
  iStack_60 = param_3[2];
  uStack_68 = CONCAT44(param_3[1] + -1,*param_3);
  plVar7 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar10 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar8 = plVar7 + 1;
  lVar1 = *plVar8;
  *plVar8 = *plVar8 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  plVar8 = (long *)(**(code **)(*plVar10 + 0x68))(plVar10);
  lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_68);
  lVar1 = *(long *)(lVar9 + 0x68);
  if (lVar1 != param_1) {
    return uVar5;
  }
  lVar12 = *(long *)(lVar1 + 0x1b0);
  if (lVar12 != 0) {
    lVar13 = lVar1 + 0x1b0;
    do {
      bVar14 = *(ulong *)(lVar12 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar14) {
        lVar13 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (ulong)bVar14 * 8);
    } while (lVar12 != 0);
    if ((lVar13 != lVar1 + 0x1b0) && (*(ulong *)(lVar13 + 0x20) <= _DAT_0f6fe3a0)) {
      cVar2 = (char)*(undefined4 *)(lVar13 + 0x2c);
      if ((ushort)((*(ushort *)(lVar9 + 0x128) >>
                   (((char)*(undefined4 *)(lVar13 + 0x30) - cVar2) + 1U & 0x1f)) <<
                  (0x10U - cVar2 & 0x1f)) != 0) {
        return uVar5;
      }
      goto LAB_0c68381b;
    }
  }
  for (plVar10 = *(long **)(lVar1 + 0x350); plVar10 != *(long **)(lVar1 + 0x358);
      plVar10 = plVar10 + 2) {
    if (*(ulong *)(((undefined8 *)*plVar10)[1] + 8) == _DAT_0f6fe3a0) {
      uVar11 = (*(code *)**(undefined8 **)*plVar10)();
      if (((byte)((ulong)uVar11 >> 0x20) & (int)uVar11 != 0) != 0) {
        return uVar5;
      }
      break;
    }
  }
LAB_0c68381b:
  plVar10 = (long *)(**(code **)(*plVar8 + 0x150))(plVar8);
  uStack_58 = CONCAT44((float)(int)((ulong)uStack_68 >> 0x20) + _UNK_014e9bd4,
                       (float)(int)uStack_68 + _DAT_014e9bd0);
  uStack_50 = CONCAT44(uStack_50._4_4_,(float)iStack_60 + _DAT_011986e0);
  (**(code **)(*plVar10 + 0x698))(plVar10,plVar8,0x7d1,&uStack_58,*(undefined4 *)(lVar9 + 0x11c));
  uVar11 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_38 = 1;
  (**(code **)(*plVar8 + 0xf8))(plVar8,&uStack_68,uVar11,3,0,&uStack_58);
  return uVar5;
}


