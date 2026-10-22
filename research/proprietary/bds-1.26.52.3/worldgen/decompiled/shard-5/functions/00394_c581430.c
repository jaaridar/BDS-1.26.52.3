/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc681430 (ELF vaddr 0xc581430)
 * Label: caller-of-seed
 * Body:  [[0c681430, 0c681834]]
 * Ghidra: FUN_0c681430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c681430(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  char cVar14;
  long lVar15;
  bool bVar16;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = func_0x0c6ca820();
  plVar7 = (long *)func_0x0412c300(param_2[0x39]);
  plVar8 = (long *)param_2[0x38];
  LOCK();
  plVar12 = plVar7 + 1;
  lVar9 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0412c2d0(plVar7);
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8);
  uStack_6c = 0;
  uStack_64 = 0;
  (**(code **)(*param_1 + 600))(param_1,plVar8,param_3,&uStack_6c);
  lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_6c);
  plVar12 = *(long **)(lVar9 + 0x68);
  if (plVar12 != param_1) {
    return uStack_60;
  }
  lVar2 = *(long *)(param_4 + 0x68);
  lVar15 = *(long *)(lVar2 + 0x1b0);
  if (lVar15 == 0) {
LAB_0c681547:
    uVar11 = 0;
    for (plVar7 = *(long **)(lVar2 + 0x350); plVar7 != *(long **)(lVar2 + 0x358);
        plVar7 = plVar7 + 2) {
      puVar3 = (undefined8 *)*plVar7;
      if (*(ulong *)(puVar3[1] + 8) == _DAT_0f6fe3a0) {
        uVar11 = (**(code **)*puVar3)(puVar3,lVar2);
        plVar12 = *(long **)(lVar9 + 0x68);
        break;
      }
    }
    bVar16 = (int)uVar11 != 0 && (uVar11 & 0x100000000) != 0;
    uVar1 = *(ushort *)(lVar9 + 0x128);
    plVar7 = (long *)plVar12[0x36];
    if (plVar7 == (long *)0x0) goto LAB_0c681653;
LAB_0c6815bc:
    plVar13 = plVar12 + 0x36;
    do {
      if ((ulong)plVar7[4] >= _DAT_0f6fe3a0) {
        plVar13 = plVar7;
      }
      plVar7 = (long *)plVar7[(ulong)plVar7[4] < _DAT_0f6fe3a0];
    } while (plVar7 != (long *)0x0);
    if ((plVar13 == plVar12 + 0x36) || (_DAT_0f6fe3a0 < (ulong)plVar13[4])) goto LAB_0c681653;
    cVar14 = (char)*(undefined4 *)((long)plVar13 + 0x2c);
    if (bVar16 == ((ushort)((uVar1 >> (((char)(int)plVar13[6] - cVar14) + 1U & 0x1f)) <<
                           (0x10U - cVar14 & 0x1f)) != 0)) {
      return uStack_60;
    }
  }
  else {
    lVar10 = lVar2 + 0x1b0;
    do {
      bVar16 = *(ulong *)(lVar15 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar16) {
        lVar10 = lVar15;
      }
      lVar15 = *(long *)(lVar15 + (ulong)bVar16 * 8);
    } while (lVar15 != 0);
    if ((lVar10 == lVar2 + 0x1b0) || (_DAT_0f6fe3a0 < *(ulong *)(lVar10 + 0x20))) goto LAB_0c681547;
    cVar14 = (char)*(undefined4 *)(lVar10 + 0x2c);
    bVar16 = (ushort)((*(ushort *)(param_4 + 0x128) >>
                      (((char)*(undefined4 *)(lVar10 + 0x30) - cVar14) + 1U & 0x1f)) <<
                     (0x10U - cVar14 & 0x1f)) != 0;
    uVar1 = *(ushort *)(lVar9 + 0x128);
    plVar7 = (long *)plVar12[0x36];
    if (plVar7 != (long *)0x0) goto LAB_0c6815bc;
LAB_0c681653:
    uVar11 = 0;
    for (plVar7 = (long *)plVar12[0x6a]; plVar7 != (long *)plVar12[0x6b]; plVar7 = plVar7 + 2) {
      if (*(ulong *)(((undefined8 *)*plVar7)[1] + 8) == _DAT_0f6fe3a0) {
        uVar11 = (*(code *)**(undefined8 **)*plVar7)();
        break;
      }
    }
    if (bVar16 == ((int)uVar11 != 0 && (uVar11 & 0x100000000) != 0)) {
      return uStack_60;
    }
  }
  lVar2 = *(long *)(lVar9 + 0x68);
  lVar15 = *(long *)(lVar2 + 0x1b0);
  if (lVar15 == 0) {
LAB_0c681703:
    for (plVar12 = *(long **)(lVar2 + 0x350); plVar12 != *(long **)(lVar2 + 0x358);
        plVar12 = plVar12 + 2) {
      if (*(ulong *)(((undefined8 *)*plVar12)[1] + 8) == _DAT_0f6fe3a0) {
        uVar11 = (*(code *)**(undefined8 **)*plVar12)();
        if ((uVar11 & 0x100000000) != 0 && (int)uVar11 != 0) goto LAB_0c6817da;
        break;
      }
    }
LAB_0c68176b:
    iVar5 = func_0x0bbfe2d0(param_2 + 1);
    if ((iVar5 == -1) ||
       ((iVar6 = (**(code **)(*(long *)param_2[0x3a] + 0x468))(), iVar5 != 1 &&
        ((iVar5 != 5 || (iVar6 != 1)))))) {
      lVar9 = (**(code **)(*param_2 + 0x270))(param_2);
      uVar4 = 1;
      if ((*(byte *)(*(long *)(param_4 + 0x68) + 0x135) & 4) == 0) goto LAB_0c6817dc;
      if ((*(long **)(lVar9 + 8) != (long *)0x0) &&
         (plVar12 = (long *)**(long **)(lVar9 + 8), plVar12 != (long *)0x0)) {
        uVar4 = (**(code **)(*plVar12 + 0x110))(plVar12,param_4);
        goto LAB_0c6817dc;
      }
    }
  }
  else {
    lVar10 = lVar2 + 0x1b0;
    do {
      bVar16 = *(ulong *)(lVar15 + 0x20) < _DAT_0f6fe3a0;
      if (!bVar16) {
        lVar10 = lVar15;
      }
      lVar15 = *(long *)(lVar15 + (ulong)bVar16 * 8);
    } while (lVar15 != 0);
    if ((lVar10 == lVar2 + 0x1b0) || (_DAT_0f6fe3a0 < *(ulong *)(lVar10 + 0x20))) goto LAB_0c681703;
    cVar14 = (char)*(undefined4 *)(lVar10 + 0x2c);
    if ((ushort)((*(ushort *)(lVar9 + 0x128) >>
                 (((char)*(undefined4 *)(lVar10 + 0x30) - cVar14) + 1U & 0x1f)) <<
                (0x10U - cVar14 & 0x1f)) == 0) goto LAB_0c68176b;
  }
LAB_0c6817da:
  uVar4 = 0;
LAB_0c6817dc:
  plVar12 = (long *)(**(code **)(*plVar8 + 0x150))(plVar8);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_38 = 1;
  (**(code **)(*plVar12 + 2000))(plVar12,plVar8,&uStack_6c,uVar4,&uStack_58);
  return uStack_60;
}


