/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc972c80 (ELF vaddr 0xc872c80)
 * Label: caller-of-callee
 * Body:  [[0c972c80, 0c9734b8] [0c97353e, 0c97356e]]
 * Ghidra: FUN_0c972c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c972c80(undefined4 *param_1,long param_2,uint *param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  bool bVar16;
  undefined4 uStack_8a8;
  uint uStack_8a4;
  uint uStack_8a0;
  uint uStack_89c;
  long lStack_898;
  int iStack_88c;
  byte bStack_888;
  undefined7 uStack_887;
  undefined1 uStack_880;
  undefined7 uStack_87f;
  long lStack_878;
  ulong uStack_870;
  undefined4 *puStack_860;
  uint *puStack_858;
  long lStack_850;
  ulong uStack_848;
  undefined8 uStack_840;
  char acStack_838 [5];
  undefined1 auStack_833 [3];
  byte *pbStack_830;
  long *plStack_828;
  long *plStack_820;
  byte bStack_800;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  ulong uStack_38;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  lVar2 = param_2 + 0xa0;
  iStack_88c = param_5;
  func_0x0412d680(lVar2);
  iVar7 = *(int *)(param_2 + 200);
  func_0x0412d6b0(lVar2);
  if (iVar7 != 0) goto LAB_0c972cdd;
  LOCK();
  *(undefined4 *)(param_2 + 0x20) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_2 + 0x24) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_2 + 0x28) = 0;
  UNLOCK();
  func_0x0412d680(param_2 + 0x48);
  pbVar1 = (byte *)(param_2 + 0x70);
  puStack_858 = param_3;
  if (pbVar1 != &UNK_01e79d90) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
    }
    else {
      FUN_04885120(pbVar1,&UNK_01e79d91,0);
    }
  }
  func_0x0412d6b0(param_2 + 0x48);
  func_0x0c97bf40(param_2 + 0x18,&UNK_01e79d90);
  func_0x0412d680(lVar2);
  *(undefined4 *)(param_2 + 200) = 0;
  func_0x0412d6b0(lVar2);
  func_0x0412d680(lVar2);
  *(undefined4 *)(param_2 + 200) = 2;
  func_0x0412d6b0(lVar2);
  bVar10 = *param_4;
  if ((bVar10 & 1) == 0) {
    if (bVar10 >> 1 != 0) goto LAB_0c972da4;
LAB_0c972dc2:
    if ((*(long *)(param_2 + 0xd0) == 0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_2 + 0xd0) == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar11 = *(long *)(param_2 + 0xe0);
    bVar16 = (*(byte *)(lVar11 + 0x78) & 1) != 0;
    lVar15 = lVar11 + 0x79;
    if (bVar16) {
      lVar15 = *(long *)(lVar11 + 0x88);
    }
    uVar13 = (ulong)(*(byte *)(lVar11 + 0x78) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar11 + 0x80);
    }
    puStack_860 = param_1 + 2;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *plVar8 = lVar15;
    plVar8[1] = uVar13;
    if ((*puStack_858 & 1) == 0) {
      lStack_898 = *(long *)(puStack_858 + 4);
      uStack_8a8 = *puStack_858;
      uStack_8a4 = puStack_858[1];
      uStack_8a0 = puStack_858[2];
      uStack_89c = puStack_858[3];
    }
    else {
      func_0x0412e5e0(&uStack_8a8,*(undefined8 *)(puStack_858 + 4),*(undefined8 *)(puStack_858 + 2))
      ;
    }
    func_0x08bac160(&uStack_840,plVar8,1,0x2f);
    bVar16 = (uStack_8a8 & 1) != 0;
    lStack_878 = (long)&uStack_8a8 + 1;
    if (bVar16) {
      lStack_878 = lStack_898;
    }
    bStack_888 = (byte)&uStack_840;
    uStack_887 = (undefined7)((ulong)&uStack_840 >> 8);
    uStack_870 = (ulong)((byte)uStack_8a8 >> 1);
    if (bVar16) {
      uStack_870 = CONCAT44(uStack_89c,uStack_8a0);
    }
    uStack_880 = (undefined1)uStack_440;
    uStack_87f = (undefined7)(uStack_440 >> 8);
    func_0x049151c0(&uStack_438,&bStack_888,2,0x2f);
    bStack_888 = 0x10;
    uStack_887 = 0x6c726f77636d2e;
    uStack_880 = 100;
    uStack_87f = 0;
    memset(&uStack_840,0,0x408);
    uVar13 = 0;
    if (uStack_38 < 0x400) {
      if (uStack_38 != 0) {
        func_0x0eee2f00(&uStack_840,&uStack_438,uStack_38);
      }
      uStack_440 = uStack_38;
      acStack_838[uStack_38 - 8] = '\0';
      uVar13 = uStack_440;
      if ((uStack_440 & 0xfffffffffffffff8) != 0x3f8) goto LAB_0c972fe0;
      uStack_840 = uStack_840 & 0xffffffffffffff00;
      uStack_440 = 0;
      lVar11 = 1;
LAB_0c97301a:
      uStack_38 = uStack_440;
      func_0x0eee2f00(&uStack_438,&uStack_840,lVar11);
    }
    else {
LAB_0c972fe0:
      *(ulong *)(acStack_838 + (uVar13 - 8)) = CONCAT17(uStack_880,uStack_887);
      pcVar4 = acStack_838 + uStack_440;
      uStack_440 = uStack_440 + 8;
      *pcVar4 = '\0';
      uStack_38 = 0xffffffffffffffff;
      lVar11 = uStack_440 + 1;
      if (lVar11 != 0) goto LAB_0c97301a;
    }
    func_0x0412f5e0(puStack_860,&uStack_438,uStack_38);
    if ((uStack_8a8 & 1) != 0) {
      func_0x0412a280(lStack_898,CONCAT44(uStack_8a4,uStack_8a8) & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar8,0x10);
    if ((DAT_0f7b8fb8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    if ((*(long *)(param_2 + 0xd0) == 0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_2 + 0xd0) == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar11 = *(long *)(param_2 + 0xe0);
    bVar16 = (*(byte *)(lVar11 + 0x78) & 1) != 0;
    lStack_850 = lVar11 + 0x79;
    if (bVar16) {
      lStack_850 = *(long *)(lVar11 + 0x88);
    }
    uStack_848 = (ulong)(*(byte *)(lVar11 + 0x78) >> 1);
    if (bVar16) {
      uStack_848 = *(ulong *)(lVar11 + 0x80);
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_840,&DAT_0f7b8f98,&lStack_850);
    uStack_438 = 0x4e11f0a723cb56a9;
    puStack_430 = &UNK_0140f690;
    uStack_428 = 1;
    uStack_420 = 0x20b;
    if (bStack_800 == 0) {
      bStack_888 = 0;
      uStack_887 = 0;
      uStack_880 = 0;
      uStack_87f = 0;
      lStack_878 = 0;
      func_0x0eedeb80(2,0x2d,&uStack_840,&bStack_888,&uStack_438);
      if ((bStack_888 & 1) != 0) {
        func_0x0412a280(lStack_878,CONCAT71(uStack_887,bStack_888) & 0xfffffffffffffffe);
      }
    }
    if ((bStack_800 & 1) == 0) {
      func_0x048e6d60(&uStack_840);
LAB_0c972cdd:
      *param_1 = 1;
      return;
    }
  }
  else {
    if (*(long *)(param_4 + 8) == 0) goto LAB_0c972dc2;
LAB_0c972da4:
    if ((bVar10 & 1) == 0) {
      param_4 = param_4 + 1;
    }
    else {
      param_4 = *(byte **)(param_4 + 0x10);
    }
    func_0x0412f5e0(param_1 + 2,param_4);
  }
  if (iStack_88c != 0) {
    return;
  }
  FUN_0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar8 = _DAT_0f5523a0;
  pbStack_830 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar9 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x09e00460(param_1);
    uVar9 = func_0x0eee2d70(uVar9);
    func_0x0412a280(0xf5522b8,0x10);
    func_0x09e00460(param_1);
    uVar9 = func_0x0eee2d70(uVar9);
    func_0x09e00460(param_1);
    func_0x0eee2d70(uVar9);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar10 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar10 = *pbStack_830;
  }
  plVar3 = _DAT_0f5523a8;
  uStack_840 = 0xf5522b8;
  acStack_838[0] = '\x01';
  plStack_828 = plVar8;
  plStack_820 = _DAT_0f5523a8;
  if (((bVar10 & 1) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar6 = (**(code **)(*plVar3 + 0x608))(plVar3);
  pbStack_830 = (byte *)0x0;
  plStack_828 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
    plVar8 = plStack_828;
    plStack_820 = (long *)0x0;
    if (plStack_828 != (long *)0x0) {
      LOCK();
      plVar3 = plStack_828 + 1;
      lVar11 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_828 + 0x10))(plStack_828);
        func_0x0412c2d0(plVar8);
      }
    }
  }
  if (acStack_838[0] == '\x01') {
    func_0x0eee02f0(uStack_840);
  }
  if (cVar6 != '\0') {
    return;
  }
  puVar12 = &UNK_0120767b;
  bVar16 = *(char *)(param_2 + 0x170) != '\0';
  if (bVar16) {
    puVar12 = &UNK_0131c045;
  }
  cVar6 = '\x05';
  puVar14 = (undefined1 *)((long)&uStack_840 + 6);
  if (bVar16) {
    cVar6 = '\f';
    puVar14 = auStack_833;
  }
  uStack_840 = CONCAT71(uStack_840._1_7_,cVar6 * '\x02');
  func_0x0eee2f00((long)&uStack_840 + 1,puVar12);
  *puVar14 = 0;
  func_0x0412d680(lVar2);
  iVar7 = *(int *)(param_2 + 200);
  func_0x0412d6b0(lVar2);
  if (iVar7 == 1) {
    puVar12 = &UNK_011ff111;
  }
  else {
    bVar10 = cVar6 * '\x02';
    if (iVar7 != 2) goto LAB_0c9733ff;
    puVar12 = &UNK_013d6565;
  }
  func_0x0412f8c0(&uStack_840,puVar12,0xf);
  func_0x0c97b1f0(param_2,&uStack_840);
  bVar10 = (byte)uStack_840;
LAB_0c9733ff:
  if ((bVar10 & 1) != 0) {
    func_0x0412a280(pbStack_830,uStack_840 & 0xfffffffffffffffe);
  }
  return;
}


