/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9d4820 (ELF vaddr 0xc8d4820)
 * Label: callee-of:0x517cd10
 * Body:  [[0c9d4820, 0c9d4c78]]
 * Ghidra: FUN_0c9d4820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c9d4820(long *param_1,ushort *param_2,long param_3,uint param_4,undefined8 *param_5,
                  undefined8 param_6,long param_7)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined7 uVar15;
  ulong uVar16;
  bool bVar17;
  uint uStack_60;
  int iStack_5c;
  uint uStack_54;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  uVar13 = 0;
  if ((*(int *)(param_2 + 2) < (int)*(short *)((long)param_1 + 0x42)) ||
     ((int)(short)param_1[8] <= *(int *)(param_2 + 2))) goto LAB_0c9d4c68;
  uStack_60 = *(int *)param_2 >> 4;
  iStack_5c = *(int *)(param_2 + 4) >> 4;
  uStack_54 = param_4;
  uStack_38 = param_6;
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1,&uStack_60);
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x5a) == '\x01')) {
LAB_0c9d4892:
    uVar13 = 0;
    goto LAB_0c9d4c68;
  }
  lVar9 = *(long *)(param_3 + 0x68);
  lVar14 = *(long *)(lVar9 + 0x1b0);
  if (lVar14 == 0) {
LAB_0c9d48e3:
    for (plVar12 = *(long **)(lVar9 + 0x350); plVar12 != *(long **)(lVar9 + 0x358);
        plVar12 = plVar12 + 2) {
      if (*(ulong *)(*(long *)(*plVar12 + 8) + 8) == _DAT_0f6fce60) goto LAB_0c9d4918;
    }
  }
  else {
    lVar10 = lVar9 + 0x1b0;
    do {
      bVar17 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6fce60;
      if (!bVar17) {
        lVar10 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar17 * 8);
    } while (lVar14 != 0);
    if ((lVar10 == lVar9 + 0x1b0) || (_DAT_0f6fce60 < *(ulong *)(lVar10 + 0x20))) goto LAB_0c9d48e3;
LAB_0c9d4918:
    uVar3 = (**(code **)(*(long *)param_1[5] + 0x9f0))();
    cVar4 = func_0x0cdba320(param_1,param_3,param_2,uVar3,param_7);
    if (cVar4 != '\0') goto LAB_0c9d4892;
  }
  cVar4 = (**(code **)(*param_1 + 0xa0))(param_1,lVar8);
  uStack_60 = CONCAT22(param_2[2] - *(short *)((long)param_1 + 0x42),
                       CONCAT11((char)param_2[4],(char)*param_2)) & 0xffff0f0f;
  plVar12 = (long *)0x0;
  if (cVar4 != '\0') {
    plVar12 = param_1;
  }
  uStack_48 = *param_5;
  plStack_40 = (long *)param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  lStack_50 = func_0x0cadd930(lVar8,&uStack_60,param_3,plVar12,&uStack_48,param_7);
  plVar12 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar12);
    }
  }
  uVar6 = param_2[2] - *(short *)((long)param_1 + 0x42);
  uVar13 = (ulong)(short)((uint)(int)(short)uVar6 >> 4);
  uVar16 = (*(long *)(lVar8 + 0x110) - *(long *)(lVar8 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5;
  if ((uVar16 < uVar13 || uVar16 - uVar13 == 0) ||
     (plVar12 = *(long **)(*(long *)(lVar8 + 0x108) + 0x30 + uVar13 * 0x68), plVar12 == (long *)0x0)
     ) {
    if ((_DAT_0f6ffb10 == (long *)0x0) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar9 = *(long *)(*_DAT_0f6ffb10 + 0x200);
    if ((*(byte *)(*(long *)(param_3 + 0x68) + 0x134) & 0x40) == 0) goto LAB_0c9d4af1;
LAB_0c9d4a5f:
    bVar17 = *(long *)(*(long *)(lVar9 + 0x68) + 200) == _DAT_0f6eaec0;
    uVar15 = (undefined7)((ulong)param_7 >> 8);
    if (*(char *)((long)param_1 + 0x22) == '\x01' && cVar4 == '\0') {
LAB_0c9d4b00:
      if (*(long *)(lStack_50 + 0x110) != *(long *)(lVar9 + 0x110)) {
        uVar13 = (ulong)(short)((uint)(int)(short)(param_2[2] - *(short *)((long)param_1 + 0x42)) >>
                               4);
        lVar14 = *(long *)(lVar8 + 0x108);
        uVar16 = (*(long *)(lVar8 + 0x110) - lVar14 >> 3) * 0x4ec4ec4ec4ec4ec5;
        if (uVar13 <= uVar16 && uVar16 - uVar13 != 0) {
          puVar2 = (undefined4 *)(lVar14 + uVar13 * 0x68);
          iVar7 = *(int *)(lVar14 + uVar13 * 0x68);
          if (iVar7 < 0) {
            *puVar2 = 0;
            iVar7 = 0;
          }
          puVar2[1] = iVar7;
        }
      }
    }
  }
  else {
    lVar9 = (**(code **)(*plVar12 + 0x20))
                      (plVar12,(param_2[4] & 0xf) << 4 | uVar6 & 0xf | (*param_2 & 0xf) << 8);
    if ((*(byte *)(*(long *)(param_3 + 0x68) + 0x134) & 0x40) != 0) goto LAB_0c9d4a5f;
LAB_0c9d4af1:
    bVar17 = false;
    uVar15 = 0;
    if (*(char *)((long)param_1 + 0x22) == '\x01' && cVar4 == '\0') goto LAB_0c9d4b00;
  }
  lVar8 = (**(code **)(*(long *)param_1[5] + 0xbd8))();
  if ((*(long *)(lVar8 + 200) != _DAT_0f6eaec0) &&
     (((lVar14 = *(long *)(param_3 + 0x68), *(long *)(lStack_50 + 0x68) == lVar8 ||
       (lVar14 == lVar8)) &&
      (lVar10 = (**(code **)(*param_1 + 0x138))(param_1,param_2), lVar10 != 0)))) {
    uStack_60 = CONCAT22(param_2[2] - *(short *)((long)param_1 + 0x42),
                         CONCAT11((char)param_2[4],(char)*param_2)) & 0xffff0f0f;
    func_0x0cadefb0(lVar10,&uStack_60,lVar14 == lVar8);
  }
  lVar10 = lStack_50;
  lVar8 = *(long *)(lStack_50 + 0x110);
  lVar14 = lVar8;
  if ((byte)((byte)((uStack_54 & 0x10) >> 4) | bVar17 | lVar8 != *(long *)(lVar9 + 0x110)) == 1) {
    uVar11 = 0;
    if (*(int *)(param_7 + 0x18) == 2) {
      uVar11 = *(undefined8 *)(param_7 + 8);
    }
    func_0x0c9d4d00(param_1,param_2,0,lVar9,lStack_50,uStack_54,cVar4,uStack_38,uVar11);
    lVar14 = *(long *)(lVar10 + 0x110);
    lVar8 = *(long *)(lVar9 + 0x110);
  }
  uVar13 = CONCAT71(uVar15,bVar17 | lVar14 != lVar8);
LAB_0c9d4c68:
  return uVar13 & 0xffffffff;
}


