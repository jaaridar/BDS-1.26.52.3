/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc685120 (ELF vaddr 0xc585120)
 * Label: caller-of-seed
 * Body:  [[0c685120, 0c685455]]
 * Ghidra: FUN_0c685120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c685120(undefined8 param_1,long param_2,undefined4 *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
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
  
  uVar4 = wg_JigsawBlock__vslot76();
  lVar13 = *(long *)(param_4 + 0x68);
  lVar12 = *(long *)(lVar13 + 0x1b0);
  if (lVar12 == 0) {
LAB_0c685193:
    plVar7 = *(long **)(lVar13 + 0x350);
    while( true ) {
      if (plVar7 == *(long **)(lVar13 + 0x358)) {
        return uVar4;
      }
      if (*(ulong *)(((undefined8 *)*plVar7)[1] + 8) == _DAT_0f6fe3a0) break;
      plVar7 = plVar7 + 2;
    }
    uVar5 = (*(code *)**(undefined8 **)*plVar7)();
    if ((int)uVar5 == 0 || (uVar5 >> 0x20 & 1) == 0) {
      return uVar4;
    }
  }
  else {
    lVar8 = lVar13 + 0x1b0;
    do {
      bVar14 = *(ulong *)(lVar12 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar14) {
        lVar8 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (ulong)bVar14 * 8);
    } while (lVar12 != 0);
    if ((lVar8 == lVar13 + 0x1b0) || (_DAT_0f6fe3a0 < *(ulong *)(lVar8 + 0x20))) goto LAB_0c685193;
    cVar1 = (char)*(undefined4 *)(lVar8 + 0x2c);
    if ((ushort)((*(ushort *)(param_4 + 0x128) >>
                 (((char)*(undefined4 *)(lVar8 + 0x30) - cVar1) + 1U & 0x1f)) <<
                (0x10U - cVar1 & 0x1f)) == 0) {
      return uVar4;
    }
  }
  cVar1 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x9f0))();
  if (cVar1 != '\0') {
    return uVar4;
  }
  iVar2 = func_0x0bbfe2d0(param_2 + 8);
  if (iVar2 == -1) {
    return uVar4;
  }
  iVar3 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x468))();
  if (iVar2 != 1) {
    if (iVar2 != 5) {
      return uVar4;
    }
    if (iVar3 != 1) {
      return uVar4;
    }
  }
  plVar6 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar9 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar7 = plVar6 + 1;
  lVar13 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
  }
  plVar7 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9);
  iStack_60 = param_3[2];
  uStack_68 = CONCAT44(param_3[1] + -1,*param_3);
  lVar13 = *(long *)(param_4 + 0x68);
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,&uStack_68);
  lVar12 = *(long *)(lVar8 + 0x68);
  if (lVar12 != lVar13) {
    return uVar4;
  }
  lVar13 = *(long *)(lVar12 + 0x1b0);
  if (lVar13 != 0) {
    lVar11 = lVar12 + 0x1b0;
    do {
      bVar14 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar14) {
        lVar11 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)bVar14 * 8);
    } while (lVar13 != 0);
    if ((lVar11 != lVar12 + 0x1b0) && (*(ulong *)(lVar11 + 0x20) <= _DAT_0f6fe3a0)) {
      cVar1 = (char)*(undefined4 *)(lVar11 + 0x2c);
      if ((ushort)((*(ushort *)(lVar8 + 0x128) >>
                   (((char)*(undefined4 *)(lVar11 + 0x30) - cVar1) + 1U & 0x1f)) <<
                  (0x10U - cVar1 & 0x1f)) != 0) {
        return uVar4;
      }
      goto LAB_0c68537b;
    }
  }
  for (plVar9 = *(long **)(lVar12 + 0x350); plVar9 != *(long **)(lVar12 + 0x358);
      plVar9 = plVar9 + 2) {
    if (*(ulong *)(((undefined8 *)*plVar9)[1] + 8) == _DAT_0f6fe3a0) {
      uVar10 = (*(code *)**(undefined8 **)*plVar9)();
      if (((byte)((ulong)uVar10 >> 0x20) & (int)uVar10 != 0) != 0) {
        return uVar4;
      }
      break;
    }
  }
LAB_0c68537b:
  plVar9 = (long *)(**(code **)(*plVar7 + 0x150))(plVar7);
  uStack_58 = CONCAT44((float)(int)((ulong)uStack_68 >> 0x20) + _UNK_014e9bd4,
                       (float)(int)uStack_68 + _DAT_014e9bd0);
  uStack_50 = CONCAT44(uStack_50._4_4_,(float)iStack_60 + _DAT_011986e0);
  (**(code **)(*plVar9 + 0x698))(plVar9,plVar7,0x7d1,&uStack_58,*(undefined4 *)(lVar8 + 0x11c));
  uVar10 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_38 = 1;
  (**(code **)(*plVar7 + 0xf8))(plVar7,&uStack_68,uVar10,3,0,&uStack_58);
  return uVar4;
}


