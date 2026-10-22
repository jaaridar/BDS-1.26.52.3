/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc690220 (ELF vaddr 0xc590220)
 * Label: caller-of-seed
 * Body:  [[0c690220, 0c690656] [0c690663, 0c69067e] [0c690684, 0c6906a6]]
 * Ghidra: FUN_0c690220
 */


undefined8 FUN_0c690220(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  lVar6 = param_2[2];
  uVar1 = *(uint *)(param_2 + 3);
  plVar8 = (long *)(*(long *)(lVar6 + 0x38) +
                   (ulong)((int)((ulong)(*(long *)(lVar6 + 0x40) - *(long *)(lVar6 + 0x38)) >> 3) -
                           1U & 0x4f6ba419) * 8);
  do {
    if (*plVar8 == -1) {
      plVar11 = *(long **)(lVar6 + 0x58);
      plVar8 = plVar11;
      goto LAB_0c690289;
    }
    lVar14 = *plVar8 * 0x20;
    plVar8 = (long *)(*(long *)(lVar6 + 0x50) + lVar14);
  } while (*(int *)(*(long *)(lVar6 + 0x50) + 8 + lVar14) != 0x4f6ba419);
  plVar11 = *(long **)(lVar6 + 0x58);
LAB_0c690289:
  if ((plVar8 == plVar11) || (lVar6 = plVar8[2], lVar6 == 0)) {
LAB_0c69064d:
    uVar10 = FUN_04890760();
    if ((uStack_a0 & 1) != 0) {
      func_0x0412a280(uStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    if ((uStack_d0 & 1) != 0) {
      func_0x0412a280(uStack_c0,uStack_d0 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar10);
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  }
  uVar13 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
  if (((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 3) <= uVar13) ||
     (((lVar14 = *(long *)(*(long *)(lVar6 + 8) + uVar13 * 8), lVar14 == 0 ||
       (uVar2 = *(uint *)(lVar14 + (ulong)(uVar1 & 0x7ff) * 4),
       0x3fffe < (uVar1 & 0xfffc0000 ^ uVar2))) ||
      (lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + (ulong)(uVar2 >> 4 & 0x3ff8)), lVar6 == 0))))
  goto LAB_0c69064d;
  if (*(int *)(lVar6 + (ulong)(uVar2 & 0x7f) * 4) != 0x42) goto LAB_0c6905fd;
  plVar8 = (long *)param_2[0x24];
  if (plVar8 == (long *)0x0) goto LAB_0c69064d;
  uVar12 = 0;
  if (((0x10 < ((int)plVar8[1] - (int)*plVar8 & 0x7fff8U)) &&
      (plVar8 = *(long **)(*plVar8 + 0x10), uVar12 = 0, plVar8 != (long *)0x0)) &&
     (cVar5 = (**(code **)(*plVar8 + 0x18))(plVar8), cVar5 == '\x02')) {
    uVar12 = *(undefined4 *)((long)plVar8 + 0xc);
  }
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar12);
  lVar6 = (**(code **)(**(long **)(param_2[0x3a] + 0x148) + 0x20))
                    (*(long **)(param_2[0x3a] + 0x148),&uStack_d8);
  lVar6 = *(long *)(lVar6 + 0x68);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  if (&uStack_d8 != (undefined8 *)(lVar6 + 200)) {
    if ((*(byte *)(lVar6 + 0xd0) & 1) == 0) {
      uStack_c0 = *(undefined8 *)(lVar6 + 0xe0);
      uStack_d0 = *(ulong *)(lVar6 + 0xd0);
      uStack_c8 = *(undefined8 *)(lVar6 + 0xd8);
    }
    else {
      FUN_04885070(&uStack_d0,*(undefined8 *)(lVar6 + 0xe0),*(undefined8 *)(lVar6 + 0xd8));
    }
  }
  uStack_d8 = *(undefined8 *)(lVar6 + 200);
  plVar7 = (long *)func_0x0412c300(param_2[0x39]);
  plVar11 = (long *)param_2[0x38];
  LOCK();
  plVar8 = plVar7 + 1;
  lVar6 = *plVar8;
  *plVar8 = *plVar8 + -1;
  UNLOCK();
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  plVar8 = (long *)(**(code **)(*plVar11 + 0x68))();
  uVar12 = *(undefined4 *)((undefined8 *)param_2[0x41] + 1);
  uStack_78 = *(undefined8 *)param_2[0x41];
  uStack_70 = 0;
  uStack_68 = floorf();
  fVar15 = (float)floorf(uStack_78._4_4_);
  uStack_40 = CONCAT44((int)fVar15,(int)(float)uStack_68);
  fVar15 = (float)floorf(uVar12);
  iStack_38 = (int)fVar15;
  pcVar9 = (char *)(**(code **)(*plVar8 + 0x60))(plVar8,&uStack_40);
  if (*pcVar9 == '\x05') {
    plVar7 = (long *)func_0x0412c300(param_2[0x39]);
    plVar11 = (long *)param_2[0x38];
    LOCK();
    plVar8 = plVar7 + 1;
    lVar6 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
    uVar10 = (**(code **)(*plVar11 + 0x68))();
    uVar12 = *(undefined4 *)((undefined8 *)param_2[0x41] + 1);
    uStack_78 = *(undefined8 *)param_2[0x41];
    uStack_70 = 0;
    uVar16 = floorf();
    uStack_68 = uVar16;
    fVar15 = (float)floorf(uStack_78._4_4_);
    uStack_50 = CONCAT44((int)fVar15,(int)(float)uStack_68);
    fVar15 = (float)floorf(uVar12);
    iStack_48 = (int)fVar15;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    if ((uStack_d0 & 1) == 0) {
      uStack_90 = uStack_c0;
      uStack_a0 = uStack_d0;
      uStack_98 = uStack_c8;
    }
    else {
      FUN_04885070(&uStack_a0,uStack_c0,uStack_c8);
    }
    uStack_a8 = uStack_d8;
    cStack_80 = '\x01';
    cVar5 = func_0x0c68f880(uVar10,&uStack_50,&uStack_a8);
    if ((cStack_80 == '\x01') && ((uStack_a0 & 1) != 0)) {
      func_0x0412a280(uStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    if (cVar5 == '\0') goto joined_r0x0c69058f;
    (**(code **)(*param_2 + 0x60))(param_2);
    bVar4 = false;
  }
  else {
joined_r0x0c69058f:
    bVar4 = true;
  }
  if ((uStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,uStack_d0 & 0xfffffffffffffffe);
  }
  if (!bVar4) {
    return 0;
  }
LAB_0c6905fd:
  uVar10 = func_0x0c6cf380(param_1,param_2);
  return uVar10;
}


