/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd646a30 (ELF vaddr 0xd546a30)
 * Label: caller-of-callee
 * Body:  [[0d646a30, 0d646daa] [0d646db0, 0d646e95] [0d646ea0, 0d6472af] [0d64735c, 0d6473a2]]
 * Ghidra: FUN_0d646a30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d646a30(long param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long **pplVar14;
  long **pplVar15;
  byte *pbVar16;
  byte *pbVar17;
  long **pplVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined4 *puVar22;
  bool bVar23;
  long *plStack_10d8;
  long *plStack_10d0;
  long *plStack_10c0;
  undefined4 *puStack_10b8;
  undefined4 *puStack_10b0;
  undefined8 *puStack_10a8;
  long lStack_10a0;
  long lStack_1098;
  byte *pbStack_1090;
  long lStack_1088;
  ulong uStack_1080;
  byte *pbStack_1078;
  ulong uStack_1070;
  uint auStack_1068 [2];
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  char cStack_1028;
  ulong uStack_c68;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  long lStack_c48;
  undefined4 *puStack_858;
  long *plStack_848;
  long *plStack_840;
  byte *pbStack_838;
  ulong uStack_830;
  long lStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 *puStack_38;
  
  pbVar17 = (byte *)((long)param_2 + 1);
  bVar23 = ((byte)*param_2 & 1) == 0;
  pbStack_1078 = *(byte **)(param_2 + 4);
  if (bVar23) {
    pbStack_1078 = pbVar17;
  }
  uStack_1070 = (ulong)(byte)((byte)*param_2 >> 1);
  if (!bVar23) {
    uStack_1070 = *(ulong *)(param_2 + 2);
  }
  if ((8 < uStack_1070) && (pbStack_1078[8] == 0x2f && *(long *)pbStack_1078 == 0x736b636170627573))
  {
    return;
  }
  func_0x09a8f590(auStack_1068,&pbStack_1078);
  if ((uStack_c68 != _DAT_0f552e70) || (iVar8 = func_0x0eee3000(auStack_1068,0xf552a70), iVar8 != 0)
     ) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    uVar10 = *puVar2;
    uVar3 = puVar2[1];
    if ((*param_2 & 1) == 0) {
      uStack_1058 = *(undefined8 *)(param_2 + 4);
      auStack_1068[0] = *param_2;
      auStack_1068[1] = param_2[1];
      uStack_1060._0_4_ = param_2[2];
      uStack_1060._4_4_ = param_2[3];
    }
    else {
      func_0x0412e5e0(auStack_1068,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
    }
    func_0x0d646190(&plStack_848,puVar2,uVar10,uVar3,auStack_1068);
    if ((auStack_1068[0] & 1) == 0) {
      return;
    }
    func_0x0412a280(uStack_1058,CONCAT44(auStack_1068[1],auStack_1068[0]) & 0xfffffffffffffffe);
    return;
  }
  plStack_10d8 = (long *)0x0;
  plStack_10d0 = (long *)0x0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar23 = (*(byte *)(param_1 + 0x10) & 1) != 0;
  plStack_848 = (long *)(param_1 + 0x11);
  if (bVar23) {
    plStack_848 = *(long **)(param_1 + 0x20);
  }
  plStack_840 = (long *)(ulong)(*(byte *)(param_1 + 0x10) >> 1);
  if (bVar23) {
    plStack_840 = (long *)*(ulong *)(param_1 + 0x18);
  }
  pbStack_838 = *(byte **)(param_2 + 4);
  uStack_830 = *(ulong *)(param_2 + 2);
  if (((byte)*param_2 & 1) == 0) {
    pbStack_838 = pbVar17;
    uStack_830 = (ulong)(byte)((byte)*param_2 >> 1);
  }
  func_0x048ad670(&uStack_c58,&plStack_848,2,0x2f);
  bVar23 = (uStack_c58 & 1) != 0;
  lStack_1088 = (long)&uStack_c58 + 1;
  if (bVar23) {
    lStack_1088 = lStack_c48;
  }
  uStack_1080 = (ulong)((byte)uStack_c58 >> 1);
  if (bVar23) {
    uStack_1080 = CONCAT44(uStack_c4c,uStack_c50);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x10))(auStack_1068,&DAT_0f7b8f98,&lStack_1088,&plStack_10d8,0x1a1,0)
  ;
  cVar7 = cStack_1028;
  if (cStack_1028 == '\0') {
    func_0x048e6d60(auStack_1068);
  }
  if ((uStack_c58 & 1) != 0) {
    func_0x0412a280(lStack_c48,CONCAT44(uStack_c54,uStack_c58) & 0xfffffffffffffffe);
  }
  if (cVar7 == '\0') goto joined_r0x0d647075;
  if ((DAT_0f721a28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f721a28), iVar8 != 0)) {
    _DAT_0f721a18 = (code *)&UNK_0d68b3e0;
    _DAT_0f721a20 = &UNK_0d68b620;
    func_0x0410844d(&DAT_0f721a28);
  }
  plStack_840 = plStack_10d0;
  plStack_848 = plStack_10d8;
  plStack_10d8 = (long *)0x0;
  plStack_10d0 = (long *)0x0;
  uStack_c58 = *(uint *)(param_1 + 0x28);
  uStack_c54 = *(undefined4 *)(param_1 + 0x2c);
  uStack_c50 = *(undefined4 *)(param_1 + 0x30);
  uStack_c4c = *(undefined4 *)(param_1 + 0x34);
  if (*(long *)(param_1 + 0x30) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  uStack_438 = 0;
  uStack_430 = 0;
  plVar9 = (long *)(*_DAT_0f721a18)(0,&plStack_848,&uStack_c58);
  if (CONCAT44(uStack_c4c,uStack_c50) != 0) {
    FUN_0412c2d0();
  }
  if ((plStack_848 != (long *)0x0) &&
     (func_0x0ee56810(auStack_1068,&plStack_848), cStack_1028 == '\0')) {
    func_0x048e6d60(auStack_1068);
  }
  plVar6 = plStack_840;
  plStack_840 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_848;
  plStack_848 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  cVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
  if (cVar7 != '\0') {
    bVar23 = ((byte)*param_2 & 1) == 0;
    pbVar16 = *(byte **)(param_2 + 4);
    if (bVar23) {
      pbVar16 = pbVar17;
    }
    uVar21 = (ulong)(byte)((byte)*param_2 >> 1);
    if (!bVar23) {
      uVar21 = *(ulong *)(param_2 + 2);
    }
    plStack_10c0 = plVar9;
    lStack_1098 = param_1;
    pbStack_1090 = pbVar17;
    if (uVar21 == 0) {
LAB_0d646efb:
      func_0x0eee2dd0(&plStack_848,0,0x408);
LAB_0d646f0f:
      uStack_c68 = 0;
      func_0x0eee2dd0(&uStack_c58,0,0x408);
    }
    else {
      uVar13 = 0;
      uVar11 = uVar21;
      pbVar17 = pbVar16;
      pbVar19 = pbVar16;
      pbVar20 = pbVar16;
      do {
        if (((*pbVar17 == 0x5c) || (*pbVar17 == 0x2f)) &&
           (uVar13 < 0x40 && 0 < (long)pbVar20 - (long)pbVar19)) {
          *(byte **)(auStack_1068 + uVar13 * 4) = pbVar19;
          (&uStack_1060)[uVar13 * 2] = (long)pbVar20 - (long)pbVar19;
          uVar13 = uVar13 + 1;
          pbVar19 = pbVar17 + (uVar11 != 0);
        }
        pbVar17 = pbVar17 + 1;
        pbVar20 = pbVar20 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      if (uVar13 < 0x40 && 0 < (long)(pbVar16 + (uVar21 - (long)pbVar19))) {
        *(byte **)(auStack_1068 + uVar13 * 4) = pbVar19;
        (&uStack_1060)[uVar13 * 2] = pbVar16 + (uVar21 - (long)pbVar19);
        uVar13 = uVar13 + 1;
      }
      else {
        uStack_c68 = uVar13;
        if (uVar13 == 0) goto LAB_0d646efb;
      }
      pplVar14 = &plStack_848;
      uStack_c68 = uVar13;
      func_0x049151c0(pplVar14,auStack_1068,uVar13 - 1,0x2f);
      if (lStack_448 == 0) goto LAB_0d646f0f;
      uVar21 = 0;
      lVar12 = lStack_448;
      pplVar15 = pplVar14;
      pplVar18 = pplVar14;
      do {
        if (((*(char *)pplVar18 == '\\') || (*(char *)pplVar18 == '/')) &&
           (uVar21 < 0x40 && 0 < (long)pplVar14 - (long)pplVar15)) {
          *(long ***)(auStack_1068 + uVar21 * 4) = pplVar15;
          (&uStack_1060)[uVar21 * 2] = (long)pplVar14 - (long)pplVar15;
          uVar21 = uVar21 + 1;
          pplVar15 = (long **)((long)pplVar18 + (ulong)(lVar12 != 0));
        }
        pplVar18 = (long **)((long)pplVar18 + 1);
        pplVar14 = (long **)((long)pplVar14 + 1);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      lVar12 = (long)&plStack_848 + (lStack_448 - (long)pplVar15);
      if (lVar12 < 1 || 0x3f < uVar21) {
        uStack_c68 = uVar21;
        func_0x0eee2dd0(&uStack_c58,0,0x408);
        if (uVar21 != 0) goto LAB_0d647145;
      }
      else {
        *(long ***)(auStack_1068 + uVar21 * 4) = pplVar15;
        (&uStack_1060)[uVar21 * 2] = lVar12;
        uVar21 = uVar21 + 1;
        uStack_c68 = uVar21;
        func_0x0eee2dd0(&uStack_c58,0,0x408);
LAB_0d647145:
        lVar12 = 0;
        puVar22 = (undefined4 *)0x0;
        do {
          puVar2 = *(undefined8 **)((long)auStack_1068 + lVar12);
          lVar4 = *(long *)((long)&uStack_1060 + lVar12);
          if ((lVar4 != _DAT_0f552a60) ||
             (iVar8 = func_0x0eee3000(puVar2,0xf552660,lVar4), iVar8 != 0)) {
            puStack_10b8 = &uStack_c58;
            puStack_10b0 = puVar22;
            puStack_10a8 = puVar2;
            lStack_10a0 = lVar4;
            func_0x049151c0(&uStack_438,&puStack_10b8,2,0x2f);
            puVar22 = puStack_38;
            if (puStack_38 != (undefined4 *)0xffffffffffffffff) {
              func_0x0eee2f00(&uStack_c58,&uStack_438);
            }
            puStack_858 = puVar22;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar21 * 0x10 != lVar12);
      }
    }
    bVar23 = ((byte)*param_2 & 1) != 0;
    pbVar17 = pbStack_1090;
    if (bVar23) {
      pbVar17 = *(byte **)(param_2 + 4);
    }
    uVar21 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(param_2 + 2);
    }
    uVar11 = uVar21 + 1;
    while (uVar11 != 1) {
      lVar12 = uVar11 - 2;
      uVar11 = uVar11 - 1;
      if ((pbVar17[lVar12] == 0x5c) || (pbVar17[lVar12] == 0x2f)) goto LAB_0d646f6e;
    }
    uVar11 = 0;
LAB_0d646f6e:
    uVar13 = uVar21;
    if (uVar21 == 0) {
LAB_0d646fd0:
      puVar22 = (undefined4 *)(uVar21 - uVar11);
      if (uVar21 < uVar11) {
LAB_0d647280:
        uVar10 = func_0x04882ef0(&UNK_01306d2f);
        func_0x041084d6(&DAT_0f7b8fb8);
        func_0x048f9be0(&plStack_10d8);
        uVar10 = func_0x0eee2d70(uVar10);
        (**(code **)(*plStack_10c0 + 8))();
        func_0x048f9be0(&plStack_10d8);
        uVar10 = func_0x0eee2d70(uVar10);
        if ((auStack_1068[0] & 1) != 0) {
          func_0x0412a280(uStack_1058,CONCAT44(auStack_1068[1],auStack_1068[0]) & 0xfffffffffffffffe
                         );
        }
        func_0x0eee2d70(uVar10);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      func_0x0eee2dd0(&uStack_438,0,0x408);
      if (puVar22 < (undefined4 *)0x400) {
        if (uVar21 != uVar11) {
LAB_0d646ffe:
          func_0x0eee2f00(&uStack_438,pbVar17 + uVar11,puVar22);
        }
LAB_0d647014:
        puStack_38 = puVar22;
        *(undefined1 *)((long)&uStack_438 + (long)puVar22) = 0;
      }
    }
    else {
      do {
        if (uVar13 == 0) goto LAB_0d646fd0;
        uVar1 = uVar13 - 1;
        lVar12 = uVar13 - 1;
        uVar13 = uVar1;
      } while (pbVar17[lVar12] != 0x2e);
      if (uVar1 == 0xffffffffffffffff) goto LAB_0d646fd0;
      if (uVar21 < uVar11) goto LAB_0d647280;
      puVar22 = (undefined4 *)(uVar1 - uVar11);
      if ((undefined4 *)(uVar21 - uVar11) < (undefined4 *)(uVar1 - uVar11)) {
        puVar22 = (undefined4 *)(uVar21 - uVar11);
      }
      func_0x0eee2dd0(&uStack_438,0,0x408);
      if (puVar22 < (undefined4 *)0x400) {
        if (puVar22 != (undefined4 *)0x0) goto LAB_0d646ffe;
        goto LAB_0d647014;
      }
    }
    plVar9 = plStack_10c0;
    puStack_10b8 = *(undefined4 **)(lStack_1098 + 8);
    puStack_10b0 = &uStack_c58;
    puStack_10a8 = &uStack_438;
    (**(code **)(*plStack_10c0 + 0x18))(plStack_10c0,&UNK_0d6473e0,&puStack_10b8);
  }
  (**(code **)(*plVar9 + 8))(plVar9);
joined_r0x0d647075:
  if ((plStack_10d8 != (long *)0x0) &&
     (func_0x0ee56810(auStack_1068,&plStack_10d8), cStack_1028 == '\0')) {
    func_0x048e6d60(auStack_1068);
  }
  plVar9 = plStack_10d0;
  plStack_10d0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = plStack_10d8;
  plStack_10d8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  return;
}


