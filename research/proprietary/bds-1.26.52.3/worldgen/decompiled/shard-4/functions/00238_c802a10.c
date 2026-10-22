/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc902a10 (ELF vaddr 0xc802a10)
 * Label: callee-of:0x517cd10
 * Body:  [[0c902a10, 0c902cb4]]
 * Ghidra: FUN_0c902a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c902a10(long *param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  bool bVar15;
  float fVar16;
  undefined8 uStack_60;
  int iStack_58;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  lVar6 = (**(code **)(*param_1 + 0x138))();
  if (lVar6 == 0) {
LAB_0c902a75:
    plVar8 = (long *)(**(code **)(*param_1 + 0x158))(param_1);
    uVar7 = (**(code **)(*plVar8 + 0x2b0))(plVar8);
    uVar5 = (**(code **)(*(long *)param_1[7] + 0xd0))();
    uVar7 = FUN_0c8cca10(uVar7,uVar5);
  }
  else {
    iVar1 = param_2[1];
    if ((iVar1 < *(short *)((long)param_1 + 0x42)) || ((short)param_1[8] <= iVar1))
    goto LAB_0c902a75;
    uStack_60 = CONCAT71(uStack_60._1_7_,(char)*param_2) & 0xffffffffffffff0f;
    uStack_60 = CONCAT62(uStack_60._2_6_,CONCAT11((char)param_2[2],(undefined1)uStack_60)) &
                0xffffffffffff0fff;
    uStack_60._0_4_ =
         CONCAT22((short)iVar1 - *(short *)((long)param_1 + 0x42),(undefined2)uStack_60);
    uVar7 = FUN_0caf8020(lVar6,&uStack_60);
  }
  fVar16 = (float)func_0x0c8b8560(uVar7,param_1,param_2);
  if (_DAT_01198788 < fVar16) {
    return 0;
  }
  iVar1 = param_2[1];
  sVar3 = (**(code **)(*param_1 + 0x110))(param_1);
  if (iVar1 < sVar3) {
    return 0;
  }
  iVar1 = param_2[1];
  sVar3 = (**(code **)(*param_1 + 0x118))(param_1);
  if (sVar3 <= iVar1) {
    return 0;
  }
  uVar4 = func_0x0c9d58e0(param_1,param_2);
  if (0x9ff < uVar4) {
    return 0;
  }
  lVar9 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  lVar6 = *(long *)(lVar9 + 0x68);
  if ((*(long *)(lVar6 + 200) != _DAT_0f713f00) && (*(long *)(lVar6 + 200) != _DAT_0f714b20)) {
    return 0;
  }
  lVar14 = *(long *)(lVar6 + 0x1b0);
  if (lVar14 != 0) {
    lVar12 = lVar6 + 0x1b0;
    do {
      bVar15 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff1d0;
      if (!bVar15) {
        lVar12 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar15 * 8);
    } while (lVar14 != 0);
    if ((lVar12 != lVar6 + 0x1b0) && (*(ulong *)(lVar12 + 0x20) <= _DAT_0f6ff1d0)) {
      cVar13 = (char)*(undefined4 *)(lVar12 + 0x2c);
      uVar10 = (ulong)((uint)(*(ushort *)(lVar9 + 0x128) >>
                             (((char)*(undefined4 *)(lVar12 + 0x30) - cVar13) + 1U & 0x1f)) &
                      0xffffU >> (0x10U - cVar13 & 0x1f));
LAB_0c902be2:
      if ((int)uVar10 != 0) {
        return 0;
      }
      goto LAB_0c902bea;
    }
  }
  for (plVar8 = *(long **)(lVar6 + 0x350); plVar8 != *(long **)(lVar6 + 0x358); plVar8 = plVar8 + 2)
  {
    puVar2 = (undefined8 *)*plVar8;
    if (*(ulong *)(puVar2[1] + 8) == _DAT_0f6ff1d0) {
      uVar10 = (**(code **)*puVar2)(puVar2,lVar6,*(ushort *)(lVar9 + 0x128));
      if ((uVar10 >> 0x20 & 1) != 0) goto LAB_0c902be2;
      break;
    }
  }
LAB_0c902bea:
  uVar7 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  if (param_3 == '\0') {
    return uVar7;
  }
  iStack_58 = param_2[2];
  uStack_60 = CONCAT44(param_2[1],*param_2 + -1);
  pcVar11 = (char *)(**(code **)(*param_1 + 0x60))(param_1,&uStack_60);
  if (*pcVar11 != '\x05') {
    return uVar7;
  }
  iStack_28 = param_2[2];
  uStack_30 = CONCAT44(param_2[1],*param_2 + 1);
  pcVar11 = (char *)(**(code **)(*param_1 + 0x60))(param_1,&uStack_30);
  if (*pcVar11 != '\x05') {
    return uVar7;
  }
  uStack_40 = *(undefined8 *)param_2;
  iStack_38 = param_2[2] + -1;
  pcVar11 = (char *)(**(code **)(*param_1 + 0x60))(param_1,&uStack_40);
  if (*pcVar11 == '\x05') {
    uStack_50 = *(undefined8 *)param_2;
    iStack_48 = param_2[2] + 1;
    pcVar11 = (char *)(**(code **)(*param_1 + 0x60))(param_1,&uStack_50);
    if (*pcVar11 == '\x05') {
      return 0;
    }
    return uVar7;
  }
  return uVar7;
}


