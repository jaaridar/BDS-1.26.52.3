/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6cd6520 (ELF vaddr 0x6bd6520)
 * Label: caller-of-callee
 * Body:  [[06cd6520, 06cd6c67] [06cd6ca6, 06cd6cbc] [06cd6df8, 06cd6e23]]
 * Ghidra: FUN_06cd6520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06cd6520(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plStack_148;
  long *plStack_140;
  long lStack_108;
  undefined4 uStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [16];
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long **pplStack_a8;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  plStack_80 = (long *)param_2[2];
  plVar4 = (long *)*param_2;
  plVar12 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lStack_108 = *param_4;
  uStack_100 = (undefined4)param_4[1];
  if ((*(byte *)(param_4 + 2) & 1) == 0) {
    lStack_e8 = param_4[4];
    uStack_f8 = *(uint *)(param_4 + 2);
    uStack_f4 = *(undefined4 *)((long)param_4 + 0x14);
    uStack_f0 = (undefined4)param_4[3];
    uStack_ec = *(undefined4 *)((long)param_4 + 0x1c);
  }
  else {
    func_0x0412e5e0(&uStack_f8,param_4[4],param_4[3]);
  }
  uStack_e0 = (undefined1)param_4[5];
  func_0x04863480(auStack_d8,param_4 + 6);
  plStack_70 = (long *)0x0;
  plStack_78 = (long *)&UNK_0f087390;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  plVar9 = param_3;
  if (plVar7 == (long *)0x0) goto LAB_06cd6c3c;
  while( true ) {
    param_3 = plVar12;
    *plVar7 = lStack_108;
    *(undefined4 *)(plVar7 + 1) = uStack_100;
    if ((uStack_f8 & 1) == 0) {
      plVar7[4] = lStack_e8;
      *(uint *)(plVar7 + 2) = uStack_f8;
      *(undefined4 *)((long)plVar7 + 0x14) = uStack_f4;
      *(undefined4 *)(plVar7 + 3) = uStack_f0;
      *(undefined4 *)((long)plVar7 + 0x1c) = uStack_ec;
    }
    else {
      func_0x0412e5e0(plVar7 + 2,lStack_e8,CONCAT44(uStack_ec,uStack_f0));
    }
    *(undefined1 *)(plVar7 + 5) = uStack_e0;
    func_0x04863480(plVar7 + 6,auStack_d8);
    plVar12 = plStack_80;
    plStack_70 = plVar7;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x160);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x160,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0f087190;
    if (plVar12 != (long *)0x0) break;
    func_0x04890760();
    plVar12 = (long *)0x0;
LAB_06cd6c3c:
    func_0x0eec74c0(0x40,0);
    plVar9 = param_3;
  }
  plVar1 = plVar7 + 4;
  plStack_148 = (long *)0x0;
  plStack_140 = (long *)0x0;
  if (plStack_78 == (long *)0x0) {
    plStack_148 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_78)(&plStack_78,&plStack_148);
    plStack_148 = plStack_78;
  }
  plStack_78 = (long *)0x0;
  func_0x0ee25c30(plVar1,plVar12,plVar9,0);
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  if (plStack_148 == (long *)0x0) {
    plStack_c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_148)(&plStack_148,&plStack_c8);
    plStack_c8 = plStack_148;
  }
  plStack_148 = (long *)0x0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x12] = (long)&UNK_0f0872c8;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  if (plStack_c8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_c8)(&plStack_c8,plVar7 + 0x16);
    plVar8 = plStack_c8;
  }
  plStack_c8 = (long *)0x0;
  plVar7[0x16] = (long)plVar8;
  *(undefined4 *)(plVar7 + 0x1e) = 0;
  *(undefined1 *)((long)plVar7 + 0xf4) = 1;
  *(undefined2 *)(plVar7 + 0x1f) = 0;
  plVar7[4] = (long)&UNK_0f0871e0;
  plVar7[0x12] = (long)&UNK_0f087230;
  plVar7[0x20] = 0;
  plVar7[0x21] = 0;
  plVar7[0x22] = 0;
  plVar7[0x23] = 0;
  plVar7[0x24] = 0;
  *(undefined4 *)(plVar7 + 0x25) = 1;
  plVar7[0x2a] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x26] = 0;
  plVar7[0x27] = 0;
  *(undefined8 *)((long)plVar7 + 0x139) = 0;
  *(undefined8 *)((long)plVar7 + 0x141) = 0;
  if ((plVar8 == (long *)0x0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_01498aca),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (plStack_148 != (long *)0x0) {
    (*(code *)plStack_148[1])(&plStack_148);
  }
  if (plVar7[0x14] == 0) {
    LOCK();
    plVar7[1] = plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar7[2] = plVar7[2] + 1;
    UNLOCK();
    plVar7[0x13] = (long)(plVar7 + 0x13);
    plVar7[0x14] = (long)plVar7;
LAB_06cd68ca:
    plVar8 = plVar7 + 1;
    LOCK();
    lVar10 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  else if (*(long *)(plVar7[0x14] + 8) == -1) {
    LOCK();
    plVar7[1] = plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar7[2] = plVar7[2] + 1;
    UNLOCK();
    plVar7[0x13] = (long)(plVar7 + 0x13);
    plVar7[0x14] = (long)plVar7;
    func_0x0412c2d0();
    goto LAB_06cd68ca;
  }
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  plStack_148 = plVar1;
  plStack_140 = plVar7;
  (**(code **)(*plVar12 + 0x20))(plVar12,&plStack_148);
  plVar8 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_140 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      func_0x0412c2d0(plVar8);
    }
  }
  if (plVar4 != (long *)0x0) {
    func_0x06cf1b60(plVar1,0,0,0);
    lVar10 = plVar9[4];
    FUN_0412d680(plVar7 + 0x20);
    *(char *)(plVar7 + 0x29) = (char)lVar10;
    if (param_3 != (long *)0x0) {
      LOCK();
      param_3[1] = param_3[1] + 1;
      UNLOCK();
    }
    plVar7[0x2a] = (long)plVar4;
    plVar9 = (long *)plVar7[0x2b];
    plVar7[0x2b] = (long)param_3;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar10 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0412d6b0(plVar7 + 0x20);
    if (plVar7[0x14] == 0) {
LAB_06cd6c5e:
      uVar11 = func_0x04891290();
      func_0x0488fce0(&plStack_148);
      func_0x06cf1b30(plVar7);
      func_0x06cd6e30(&lStack_108);
      func_0x06cd6e60(0);
      func_0x06cd6e60(0);
      uVar11 = _Unwind_Resume(uVar11);
      func_0x04882e20(uVar11);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = plVar7[0x13];
    plVar9 = (long *)func_0x0412c300();
    if (plVar9 == (long *)0x0) goto LAB_06cd6c5e;
    plVar8 = (long *)(lVar10 + -0x78);
    if (lVar10 == 0) {
      plVar8 = (long *)0x0;
    }
    LOCK();
    plVar9[2] = plVar9[2] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar9 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    plStack_c8 = (long *)&UNK_0f087310;
    plStack_c0 = plVar8;
    plStack_b8 = plVar9;
    pplStack_a8 = &plStack_c8;
    (**(code **)(*plVar4 + 0x30))(plVar4,&plStack_c8);
    if (pplStack_a8 == &plStack_c8) {
      lVar10 = 0x20;
LAB_06cd6aba:
      (**(code **)((long)*pplStack_a8 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (pplStack_a8 != (long **)0x0) goto LAB_06cd6aba;
    }
    if (param_3 != (long *)0x0) {
      LOCK();
      plVar4 = param_3 + 1;
      lVar10 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
        func_0x0412c2d0(param_3);
      }
    }
    param_3 = (long *)0x0;
  }
  if (plStack_78 != (long *)0x0) {
    (*(code *)plStack_78[1])(&plStack_78);
  }
  if (param_3 != (long *)0x0) {
    LOCK();
    plVar4 = param_3 + 1;
    lVar10 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      func_0x0412c2d0(param_3);
    }
  }
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  iVar3 = (int)plVar12[0x10];
  plStack_148 = plVar1;
  plStack_140 = plVar7;
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      *(undefined4 *)(plVar7 + 10) = 0;
    }
    else if (iVar3 == 2) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      goto LAB_06cd6bbe;
    }
    LOCK();
    plVar7[1] = plVar7[1] + 1;
    UNLOCK();
    plStack_c8 = plVar1;
    plStack_c0 = plVar7;
    (**(code **)(*plVar12 + 0x28))(plVar12,&plStack_c8,0);
    plVar4 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_c0 + 1;
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        func_0x0412c2d0(plVar4);
      }
    }
  }
LAB_06cd6bbe:
  plVar4 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_140 + 1;
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      func_0x0412c2d0(plVar4);
    }
  }
  *param_1 = plVar7 + 0x12;
  param_1[1] = plVar7;
  param_1[2] = plVar12;
  func_0x04863610(auStack_d8);
  if ((uStack_f8 & 1) != 0) {
    func_0x0412a280(lStack_e8,CONCAT44(uStack_f4,uStack_f8) & 0xfffffffffffffffe);
  }
  return;
}


