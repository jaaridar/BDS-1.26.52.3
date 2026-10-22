/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b9dde0 (ELF vaddr 0x9a9dde0)
 * Label: caller-of-callee
 * Body:  [[09b9dde0, 09b9e31d] [09b9e33a, 09b9e37d]]
 * Ghidra: FUN_09b9dde0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_09b9dde0(ulong *param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  byte bVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 uStack_78;
  ulong uStack_70;
  byte *pbStack_68;
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  ulong uStack_48;
  byte *pbStack_40;
  ulong uStack_38;
  
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  FUN_0412d610(0xf5522b8);
  plVar4 = _DAT_0f5523a0;
  pbVar13 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar10 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    if ((uStack_78 & 1) != 0) {
      func_0x0412a280(pbStack_68,uStack_78 & 0xfffffffffffffffe);
      uVar10 = func_0x0eee2d70(uVar10);
      uVar10 = func_0x04882e20(uVar10);
      uVar10 = func_0x04882e20(uVar10);
      func_0x048c3ac0(&uStack_78);
    }
    func_0x0eee2d70(uVar10);
    pcVar3 = (code *)swi(3);
    puVar11 = (ulong *)(*pcVar3)();
    return puVar11;
  }
  bVar12 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar12 = *pbVar13;
  }
  plVar1 = _DAT_0f5523a8;
  uStack_78 = 0xf5522b8;
  uStack_70 = CONCAT71(uStack_70._1_7_,1);
  pbStack_68 = pbVar13;
  plStack_60 = plVar4;
  plStack_58 = _DAT_0f5523a8;
  if (((bVar12 & 1) == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar5 = (**(code **)(*plVar1 + 0x610))(plVar1);
  pbStack_68 = (byte *)0x0;
  plStack_60 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
LAB_09b9df22:
  }
  else {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      plStack_58 = (long *)0x0;
      goto LAB_09b9df22;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
    plVar4 = plStack_60;
    plStack_58 = (long *)0x0;
    if (plStack_60 == (long *)0x0) goto LAB_09b9df22;
    plStack_58 = (long *)0x0;
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) goto LAB_09b9df22;
    (**(code **)(*plStack_60 + 0x10))(plStack_60);
    func_0x0412c2d0(plVar4);
  }
  if ((char)uStack_70 == '\x01') {
    func_0x0eee02f0(uStack_78);
  }
  if (cVar5 == '\0') {
    if (DAT_0f7b8fb8 == '\0') goto LAB_09b9e26b;
    goto LAB_09b9df8c;
  }
  bVar16 = (*param_2 & 1) != 0;
  pbVar13 = param_2 + 1;
  if (bVar16) {
    pbVar13 = *(byte **)(param_2 + 0x10);
  }
  uVar7 = (ulong)(*param_2 >> 1);
  if (bVar16) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if (0xfffffffffffffff7 < uVar7) {
    do {
      while( true ) {
        func_0x04882e30();
LAB_09b9e26b:
        iVar6 = func_0x04108328(&DAT_0f7b8fb8);
        if (iVar6 != 0) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
LAB_09b9df8c:
        pbVar13 = param_2 + 1;
        bVar16 = (*param_2 & 1) == 0;
        pbStack_40 = *(byte **)(param_2 + 0x10);
        if (bVar16) {
          pbStack_40 = pbVar13;
        }
        uStack_38 = (ulong)(*param_2 >> 1);
        if (!bVar16) {
          uStack_38 = *(ulong *)(param_2 + 8);
        }
        cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&pbStack_40);
        if (cVar5 == '\0') break;
        bVar16 = (*param_2 & 1) != 0;
        if (bVar16) {
          pbVar13 = *(byte **)(param_2 + 0x10);
        }
        uVar7 = (ulong)(*param_2 >> 1);
        if (bVar16) {
          uVar7 = *(ulong *)(param_2 + 8);
        }
        if (uVar7 < 0xfffffffffffffff8) {
          if (uVar7 < 0x17) {
            *(char *)param_1 = (char)uVar7 * '\x02';
            pcVar8 = (char *)((long)param_1 + 1);
            if (uVar7 == 0) goto LAB_09b9e12a;
          }
          else {
            uVar14 = 0x1a;
            if ((uVar7 | 7) != 0x17) {
              uVar14 = (uVar7 | 7) + 1;
            }
            pcVar8 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
            if (pcVar8 == (char *)0x0) {
              FUN_0eec74c0(uVar14,0);
            }
            param_1[2] = (ulong)pcVar8;
            *param_1 = uVar14 | 1;
            param_1[1] = uVar7;
          }
          func_0x0eee2ee0(pcVar8,pbVar13,uVar7);
LAB_09b9e12a:
          pcVar8[uVar7] = '\0';
          return param_1;
        }
      }
      if ((*param_2 & 1) != 0) {
        pbVar13 = *(byte **)(param_2 + 0x10);
      }
      uVar7 = strlen(pbVar13);
    } while (0xfffffffffffffff7 < uVar7);
    uVar14 = (long)&uStack_78 + 1;
    if (uVar7 < 0x17) {
      uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
      uVar9 = uVar14;
      if (uVar7 == 0) goto LAB_09b9e18d;
    }
    else {
      uVar15 = 0x1a;
      if ((uVar7 | 7) != 0x17) {
        uVar15 = (uVar7 | 7) + 1;
      }
      uVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (uVar9 == 0) {
        FUN_0eec74c0(uVar15,0);
      }
      uStack_78 = uVar15 | 1;
      uStack_70 = uVar7;
      pbStack_68 = (byte *)uVar9;
    }
    func_0x0eee2ee0(uVar9,pbVar13,uVar7);
LAB_09b9e18d:
    *(undefined1 *)(uVar9 + uVar7) = 0;
    func_0x0412f8c0(&uStack_78,&UNK_011dd7c5,4);
    if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    uStack_48 = uStack_78 >> 1 & 0x7f;
    uStack_50 = uVar14;
    if ((uStack_78 & 1) != 0) {
      uStack_48 = uStack_70;
      uStack_50 = (ulong)pbStack_68;
    }
    cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&uStack_50);
    if (cVar5 != '\0') {
      param_1[2] = (ulong)pbStack_68;
      *param_1 = uStack_78;
      param_1[1] = uStack_70;
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((uStack_78 & 1) == 0) {
      return param_1;
    }
    func_0x0412a280(pbStack_68,uStack_78 & 0xfffffffffffffffe);
    return param_1;
  }
  if (uVar7 < 0x17) {
    *(char *)param_1 = (char)uVar7 * '\x02';
    pcVar8 = (char *)((long)param_1 + 1);
    if (uVar7 == 0) goto LAB_09b9e0a9;
  }
  else {
    uVar14 = 0x1a;
    if ((uVar7 | 7) != 0x17) {
      uVar14 = (uVar7 | 7) + 1;
    }
    pcVar8 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
    if (pcVar8 == (char *)0x0) {
      FUN_0eec74c0(uVar14,0);
    }
    param_1[2] = (ulong)pcVar8;
    *param_1 = uVar14 | 1;
    param_1[1] = uVar7;
  }
  func_0x0eee2ee0(pcVar8,pbVar13,uVar7);
LAB_09b9e0a9:
  pcVar8[uVar7] = '\0';
  return param_1;
}


