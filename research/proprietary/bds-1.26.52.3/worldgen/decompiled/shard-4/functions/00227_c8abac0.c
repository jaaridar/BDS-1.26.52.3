/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9abac0 (ELF vaddr 0xc8abac0)
 * Label: caller-of-callee
 * Body:  [[0c9abac0, 0c9ad344] [0c9ad350, 0c9ad794] [0c9ad7a0, 0c9ae078] [0c9ae147, 0c9ae158] [0c9ae291, 0c9ae2d8] [0c9ae375, 0c9ae39d] [0c9ae3f1, 0c9ae411] [0c9ae43d, 0c9ae4ce]]
 * Ghidra: FUN_0c9abac0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9abac0(long param_1)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  byte *pbVar6;
  undefined1 auVar7 [8];
  long **pplVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long ******pppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  undefined8 uVar19;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  long ******pppppplVar22;
  undefined1 unaff_R12 [8];
  long *******ppppppplVar23;
  long *******unaff_R13;
  ulong uVar24;
  long lVar25;
  long *******ppppppplVar26;
  bool bVar27;
  long ******pppppplStack_1340;
  undefined1 auStack_1338 [8];
  long *******ppppppplStack_1330;
  long *******ppppppplStack_1328;
  undefined4 uStack_1320;
  undefined1 auStack_1318 [4];
  undefined4 uStack_1314;
  undefined4 uStack_1310;
  undefined4 uStack_130c;
  long *******ppppppplStack_1308;
  long ******pppppplStack_1300;
  undefined1 auStack_12f8 [8];
  long *******ppppppplStack_12f0;
  long *******ppppppplStack_12e8;
  long *plStack_12e0;
  long *plStack_12d8;
  byte bStack_12b8;
  undefined1 auStack_12a8 [8];
  ulong uStack_12a0;
  long *******ppppppplStack_1298;
  undefined1 auStack_1290 [8];
  long *******ppppppplStack_1288;
  long *******ppppppplStack_1280;
  undefined1 auStack_1278 [5];
  undefined2 uStack_1273;
  undefined1 uStack_1271;
  undefined2 uStack_1270;
  undefined4 uStack_126e;
  undefined2 uStack_126a;
  long *******ppppppplStack_1268;
  undefined8 *puStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 *puStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined2 uStack_1230;
  undefined4 uStack_122c;
  long *******ppppppplStack_1228;
  long *******ppppppplStack_1220;
  long *******ppppppplStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined4 uStack_11f8;
  long *******ppppppplStack_11e8;
  long *plStack_11e0;
  long *plStack_11d8;
  long *******ppppppplStack_11d0;
  undefined1 auStack_11c8 [8];
  long *******ppppppplStack_11c0;
  long *******ppppppplStack_11b8;
  long **pplStack_11b0;
  long *plStack_11a8;
  undefined8 uStack_11a0;
  undefined8 *puStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined2 uStack_1180;
  undefined4 uStack_117c;
  long *******ppppppplStack_1178;
  long *******ppppppplStack_1170;
  long *******ppppppplStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined4 uStack_1148;
  long ******pppppplStack_1140;
  undefined4 uStack_1134;
  long ******pppppplStack_1130;
  long *******ppppppplStack_1128;
  undefined8 uStack_1120;
  long ******pppppplStack_1118;
  long *******ppppppplStack_1110;
  long ******pppppplStack_1108;
  long ******pppppplStack_1100;
  long ******pppppplStack_10f8;
  long *******ppppppplStack_10f0;
  long *******ppppppplStack_10e8;
  undefined8 uStack_10e0;
  long ******pppppplStack_10d8;
  long ******pppppplStack_10d0;
  undefined1 uStack_10c0;
  long *******ppppppplStack_10b8;
  long *******ppppppplStack_10b0;
  long *******ppppppplStack_10a8;
  long *******ppppppplStack_10a0;
  long *******ppppppplStack_1098;
  ulong uStack_1090;
  long *******ppppppplStack_1088;
  long *******ppppppplStack_1080;
  undefined1 auStack_1078 [8];
  long *******ppppppplStack_1070;
  long *******ppppppplStack_1068;
  undefined8 *puStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 *puStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined2 uStack_1030;
  undefined4 uStack_102c;
  long *******ppppppplStack_1028;
  long *******ppppppplStack_1020;
  long *******ppppppplStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined4 uStack_ff8;
  undefined8 uStack_c78;
  undefined1 auStack_c68 [24];
  undefined1 uStack_c50;
  long *******ppppppplStack_c48;
  ulong uStack_c40;
  byte *pbStack_c38;
  long *plStack_c30;
  long *plStack_c28;
  byte bStack_c08;
  long *******ppppppplStack_848;
  long ******pppppplStack_840;
  long *****ppppplStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  char cStack_800;
  long *******ppppppplStack_440;
  long ******apppppplStack_438 [128];
  undefined8 uStack_38;
  
  ppppppplVar17 = *(long ********)(param_1 + 8);
  pppppplVar16 = ppppppplVar17[5];
  if (*(int *)(pppppplVar16 + 5) != 0) {
    return;
  }
  pppppplStack_1340 = *ppppppplVar17;
  bVar27 = (*(byte *)(pppppplVar16 + 0x13) & 1) != 0;
  pppppplStack_840 = (long ******)((long)pppppplVar16 + 0x99);
  if (bVar27) {
    pppppplStack_840 = (long ******)pppppplVar16[0x15];
  }
  ppppplStack_838 = (long *****)(ulong)(*(byte *)(pppppplVar16 + 0x13) >> 1);
  if (bVar27) {
    ppppplStack_838 = pppppplVar16[0x14];
  }
  puStack_830 = &UNK_01479fdc;
  uStack_828 = 0xd;
  ppppppplVar21 = apppppplStack_438;
  func_0x049151c0(ppppppplVar21,&pppppplStack_840,2,0x2f);
  ppppppplVar23 = (long *******)unaff_R12;
  ppppppplStack_11d0 = ppppppplVar17;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0c9adea7;
LAB_0c9abb82:
  uStack_1120 = uStack_38;
  ppppppplStack_1128 = ppppppplVar21;
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&pppppplStack_840,&DAT_0f7b8f98,&ppppppplStack_1128);
  if (cStack_800 == '\0') {
    func_0x048e6d60(&pppppplStack_840);
  }
  cVar10 = *(char *)(ppppppplVar17 + 4);
  pppppplStack_1300 = ppppppplVar17[5];
  pppppplStack_1130 = ppppppplVar17[6];
  pppppplVar16 = pppppplStack_1300;
  if (pppppplStack_1130 != (long ******)0x0) {
    LOCK();
    pppppplStack_1130[1] = (long *****)((long)pppppplStack_1130[1] + 1);
    UNLOCK();
    pppppplVar16 = ppppppplVar17[5];
  }
  if (((ulong)pppppplVar16[0x13] & 1) == 0) {
    ppppppplStack_1308 = (long *******)pppppplVar16[0x15];
    auStack_1318 = *(undefined1 (*) [4])(pppppplVar16 + 0x13);
    uStack_1314 = *(undefined4 *)((long)pppppplVar16 + 0x9c);
    uStack_1310 = *(undefined4 *)(pppppplVar16 + 0x14);
    uStack_130c = *(undefined4 *)((long)pppppplVar16 + 0xa4);
  }
  else {
    func_0x0412e5e0(auStack_1318,pppppplVar16[0x15],pppppplVar16[0x14]);
  }
  LOCK();
  *(undefined4 *)(pppppplStack_1340 + 4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((long)pppppplStack_1340 + 0x24) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(pppppplStack_1340 + 5) = 0;
  UNLOCK();
  func_0x0412d680(pppppplStack_1340 + 9);
  pppppplVar16 = pppppplStack_1340 + 0xe;
  if (pppppplVar16 != (long ******)&UNK_01e79d90) {
    if (((ulong)*pppppplVar16 & 1) == 0) {
      *pppppplVar16 = (long *****)0x0;
      pppppplStack_1340[0xf] = (long *****)0x0;
      pppppplStack_1340[0x10] = (long *****)0x0;
    }
    else {
      FUN_04885120(pppppplVar16,&UNK_01e79d91,0);
    }
  }
  func_0x0412d6b0(pppppplStack_1340 + 9);
  pppppplStack_1140 = pppppplStack_1340 + 3;
  func_0x0c97bf40(pppppplStack_1340 + 3,&UNK_01e79d90);
  LOCK();
  *(undefined4 *)(pppppplStack_1340 + 5) = *(undefined4 *)(pppppplStack_1300 + 4);
  UNLOCK();
  if (cVar10 == '\0') {
    bVar27 = ((uint)auStack_1318 & 1) == 0;
    ppppppplVar18 = (long *******)(auStack_1318 + 1);
    ppppppplVar17 = ppppppplStack_1308;
    if (bVar27) {
      ppppppplVar17 = ppppppplVar18;
    }
    ppppppplVar21 = (long *******)(ulong)(auStack_1318[0] >> 1);
    if (!bVar27) {
      ppppppplVar21 = (long *******)CONCAT44(uStack_130c,uStack_1310);
    }
    if (ppppppplVar21 < (long *******)0xfffffffffffffff8) {
      unaff_R13 = (long *******)(auStack_1278 + 1);
      if (ppppppplVar21 < (long *******)0x17) {
        auStack_1278[0] = (char)ppppppplVar21 * '\x02';
        unaff_R12 = (undefined1  [8])ppppppplVar23;
        ppppppplVar26 = unaff_R13;
        if (ppppppplVar21 != (long *******)0x0) goto LAB_0c9ac0f6;
        goto LAB_0c9ac104;
      }
      unaff_R12 = (undefined1  [8])(long *******)0x1a;
      if (((ulong)ppppppplVar21 | 7) != 0x17) {
        unaff_R12 = (undefined1  [8])(((ulong)ppppppplVar21 | 7) + 1);
      }
      ppppppplVar26 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R12);
      if (ppppppplVar26 == (long *******)0x0) goto LAB_0c9ade34;
      goto LAB_0c9ac0da;
    }
    func_0x04882e30();
LAB_0c9adeff:
    iVar14 = FUN_04108328(&DAT_0f7b8fb8);
    if (iVar14 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      ppppppplVar21 = &pppppplStack_840;
    }
  }
  else {
    bVar27 = ((uint)auStack_1318 & 1) == 0;
    ppppppplStack_c48 = ppppppplStack_1308;
    if (bVar27) {
      ppppppplStack_c48 = (long *******)(auStack_1318 + 1);
    }
    uStack_c40 = (ulong)(auStack_1318[0] >> 1);
    if (!bVar27) {
      uStack_c40 = CONCAT44(uStack_130c,uStack_1310);
    }
    pbStack_c38 = &UNK_0133741b;
    plStack_c30 = (long *)0x8;
    ppppppplVar21 = &pppppplStack_840;
    func_0x049151c0(ppppppplVar21,&ppppppplStack_c48,2,0x2f);
    if (DAT_0f7b8fb8 == '\0') goto LAB_0c9adeff;
  }
  ppppppplStack_1080 = ppppppplStack_440;
  ppppppplStack_1088 = ppppppplVar21;
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&ppppppplStack_c48,&DAT_0f7b8f98,&ppppppplStack_1088);
  auStack_1078 = (undefined1  [8])0x4e11f0a723cb56a9;
  ppppppplStack_1070 = (long *******)&UNK_0140f690;
  ppppppplStack_1068 = (long *******)0x1;
  puStack_1060 = (undefined8 *)CONCAT44(puStack_1060._4_4_,0x367);
  if (bStack_c08 == 0) {
    auStack_11c8 = (undefined1  [8])0x0;
    ppppppplStack_11c0 = (long *******)0x0;
    ppppppplStack_11b8 = (long *******)0x0;
    func_0x0eedeb80(2,0x2d,&ppppppplStack_c48,auStack_11c8,auStack_1078);
    if (((ulong)auStack_11c8 & 1) != 0) {
      func_0x0412a280(ppppppplStack_11b8,(ulong)auStack_11c8 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_c08 & 1) == 0) {
    func_0x048e6d60(&ppppppplStack_c48);
  }
  auStack_11c8 = (undefined1  [8])&ppppppplStack_11c0;
  ppppppplStack_11c0 = (long *******)0x0;
  ppppppplStack_11b8 = (long *******)0x0;
  pplStack_11b0 = &plStack_11a8;
  plStack_11a8 = (long *)0x0;
  uStack_11a0 = 0;
  puStack_1198 = &uStack_1190;
  uStack_1190 = 0;
  uStack_1188 = 0;
  uStack_117c = 0xffffffff;
  ppppppplStack_1178 = (long *******)0x0;
  ppppppplStack_1170 = (long *******)0x0;
  ppppppplStack_1168 = (long *******)0x0;
  uStack_1160 = 0;
  uStack_1158 = 0;
  uStack_1150 = 0;
  uStack_1148 = 1;
  uStack_1180 = 1;
  FUN_0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar3 = _DAT_0f5523a0;
  pbVar6 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
  bVar11 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar11 = *pbVar6;
  }
  plVar1 = _DAT_0f5523a8;
  ppppppplStack_c48 = (long *******)0xf5522b8;
  uStack_c40 = CONCAT71(uStack_c40._1_7_,1);
  pbStack_c38 = pbVar6;
  plStack_c30 = plVar3;
  plStack_c28 = _DAT_0f5523a8;
  if (((bVar11 & 1) == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar1 + 0x228))(auStack_1078,plVar1,2);
  ppppppplVar23 = ppppppplStack_1068;
  ppppppplVar21 = ppppppplStack_1070;
  auVar7 = auStack_1078;
  ppppppplVar17 = ppppppplStack_1170;
  if (ppppppplStack_1070 != (long *******)0x0) {
    LOCK();
    ppppppplStack_1070[1] = (long ******)((long)ppppppplStack_1070[1] + 1);
    UNLOCK();
  }
  ppppppplStack_1178 = (long *******)0x0;
  ppppppplStack_1170 = (long *******)0x0;
  if (ppppppplVar17 == (long *******)0x0) {
    ppppppplStack_1178 = (long *******)auStack_1078;
    ppppppplStack_1170 = ppppppplStack_1070;
  }
  else {
    LOCK();
    ppppppplVar18 = ppppppplVar17 + 1;
    pppppplVar16 = *ppppppplVar18;
    *ppppppplVar18 = (long ******)((long)*ppppppplVar18 + -1);
    UNLOCK();
    if (pppppplVar16 == (long ******)0x0) {
      (*(code *)(*ppppppplVar17)[2])(ppppppplVar17);
      func_0x0412c2d0(ppppppplVar17);
    }
    ppppppplVar17 = ppppppplStack_1170;
    ppppppplStack_1168 = (long *******)0x0;
    ppppppplStack_1178 = (long *******)auVar7;
    ppppppplStack_1170 = ppppppplVar21;
    if (ppppppplVar17 != (long *******)0x0) {
      LOCK();
      plVar3 = (long *)(ppppppplVar17 + 1);
      lVar25 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)((long)*ppppppplVar17 + 0x10))(ppppppplVar17);
        func_0x0412c2d0(ppppppplVar17);
      }
    }
  }
  ppppppplVar17 = ppppppplStack_1070;
  ppppppplStack_1168 = ppppppplVar23;
  auStack_1078 = (undefined1  [8])0x0;
  ppppppplStack_1070 = (long *******)0x0;
  if (ppppppplVar17 == (long *******)0x0) {
    ppppppplStack_1068 = (long *******)0x0;
  }
  else {
    LOCK();
    ppppppplVar21 = ppppppplVar17 + 1;
    pppppplVar16 = *ppppppplVar21;
    *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + -1);
    UNLOCK();
    if (pppppplVar16 == (long ******)0x0) {
      (*(code *)(*ppppppplVar17)[2])(ppppppplVar17);
      func_0x0412c2d0(ppppppplVar17);
    }
    ppppppplVar17 = ppppppplStack_1070;
    ppppppplStack_1068 = (long *******)0x0;
    if (ppppppplStack_1070 != (long *******)0x0) {
      LOCK();
      ppppppplVar21 = ppppppplStack_1070 + 1;
      pppppplVar16 = *ppppppplVar21;
      *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_1070)[2])(ppppppplStack_1070);
        func_0x0412c2d0(ppppppplVar17);
      }
    }
  }
  plVar3 = plStack_c30;
  pbStack_c38 = (undefined *)0x0;
  plStack_c30 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar25 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    plVar3 = plStack_c30;
    plStack_c28 = (long *)0x0;
    if (plStack_c30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c30 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plStack_c30 + 0x10))(plStack_c30);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  if ((char)uStack_c40 == '\x01') {
    func_0x0eee02f0(ppppppplStack_c48);
  }
  FUN_0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  ppppppplVar26 = (long *******)0xf5522b8;
  func_0x0412d610(0xf5522b8);
  plVar3 = _DAT_0f5523a0;
  pbVar6 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
  bVar11 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar11 = *pbVar6;
  }
  plVar1 = _DAT_0f5523a8;
  ppppppplStack_c48 = (long *******)0xf5522b8;
  uStack_c40 = CONCAT71(uStack_c40._1_7_,1);
  pbStack_c38 = pbVar6;
  plStack_c30 = plVar3;
  plStack_c28 = _DAT_0f5523a8;
  if (((bVar11 & 1) == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  bVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
  pbStack_c38 = (undefined *)0x0;
  plStack_c30 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar25 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    plVar3 = plStack_c30;
    plStack_c28 = (long *)0x0;
    if (plStack_c30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c30 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plStack_c30 + 0x10))(plStack_c30);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  if ((char)uStack_c40 == '\x01') {
    func_0x0eee02f0(ppppppplStack_c48);
  }
  bVar27 = ((uint)auStack_1318 & 1) == 0;
  ppppppplStack_1098 = ppppppplStack_1308;
  if (bVar27) {
    ppppppplStack_1098 = (long *******)(auStack_1318 + 1);
  }
  uStack_1090 = (ulong)(auStack_1318[0] >> 1);
  if (!bVar27) {
    uStack_1090 = CONCAT44(uStack_130c,uStack_1310);
  }
  uStack_126a = 0;
  ppppppplStack_1268 = (long *******)0x0;
  auStack_1278[0] = 0x1a;
  ppppppplStack_1068 = (long *******)(auStack_1278 + 1);
  auStack_1278._1_4_ = 0x6c726f77;
  uStack_1273 = 0x2e64;
  uStack_1271 = 0x6d;
  uStack_1270 = 0x7763;
  uStack_126e = 0x646c726f;
  ppppppplStack_1070 = ppppppplStack_440;
  puStack_1060 = (undefined8 *)0xd;
  ppppppplVar17 = (long *******)&ppppppplStack_c48;
  auStack_1078 = (undefined1  [8])&pppppplStack_840;
  func_0x049151c0(ppppppplVar17,auStack_1078,2,0x2f);
  ppppppplStack_10a0 = ppppppplStack_848;
  unaff_R12 = (undefined1  [8])(ulong)bVar11;
  ppppppplStack_10a8 = ppppppplVar17;
  iVar14 = func_0x0ee3d1a0(&ppppppplStack_1098,&ppppppplStack_10a8,pppppplStack_1140,unaff_R12,
                           auStack_11c8);
  if ((auStack_1278[0] & 1) != 0) {
    func_0x0412a280(ppppppplStack_1268,
                    CONCAT17(uStack_1271,
                             CONCAT25(uStack_1273,CONCAT41(auStack_1278._1_4_,auStack_1278[0]))) &
                    0xfffffffffffffffe);
  }
  if (iVar14 == 0) {
    bVar27 = ((uint)auStack_1318 & 1) != 0;
    ppppppplVar18 = (long *******)(auStack_1318 + 1);
    if (bVar27) {
      ppppppplVar18 = ppppppplStack_1308;
    }
    ppppppplVar21 = (long *******)(ulong)(auStack_1318[0] >> 1);
    if (bVar27) {
      ppppppplVar21 = (long *******)CONCAT44(uStack_130c,uStack_1310);
    }
    if ((long *******)0xfffffffffffffff7 < ppppppplVar21) goto LAB_0c9adf6b;
    ppppppplVar17 = (long *******)(auStack_1290 + 1);
    if (ppppppplVar21 < (long *******)0x17) {
      auStack_1290[0] = (char)ppppppplVar21 * '\x02';
      if (ppppppplVar21 == (long *******)0x0) goto LAB_0c9acfbb;
    }
    else {
      uVar24 = 0x1a;
      if (((ulong)ppppppplVar21 | 7) != 0x17) {
        uVar24 = ((ulong)ppppppplVar21 | 7) + 1;
      }
      ppppppplVar17 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (ppppppplVar17 == (long *******)0x0) {
        func_0x0eec74c0(uVar24,0);
      }
      ppppppplVar26 = (long *******)(uVar24 | 1);
      auStack_1290 = (undefined1  [8])ppppppplVar26;
      ppppppplStack_1288 = ppppppplVar21;
      ppppppplStack_1280 = ppppppplVar17;
    }
    memmove(ppppppplVar17,ppppppplVar18,ppppppplVar21);
LAB_0c9acfbb:
    *(char *)((long)ppppppplVar17 + (long)ppppppplVar21) = '\0';
    ppppppplStack_1070 = (long *******)((ulong)auStack_1290 >> 1 & 0x7f);
    auStack_1078 = (undefined1  [8])(auStack_1290 + 1);
    if (((ulong)auStack_1290 & 1) != 0) {
      ppppppplStack_1070 = ppppppplStack_1288;
      auStack_1078 = (undefined1  [8])ppppppplStack_1280;
    }
    ppppppplStack_1068 = (long *******)&UNK_012d82f4;
    puStack_1060 = (undefined8 *)0x19;
    ppppppplVar21 = (long *******)&ppppppplStack_c48;
    func_0x049151c0(ppppppplVar21,auStack_1078,2,0x2f);
    if (DAT_0f7b8fb8 == '\0') goto LAB_0c9adf70;
LAB_0c9ad047:
    ppppppplStack_10b0 = ppppppplStack_848;
    ppppppplStack_10b8 = ppppppplVar21;
    (**(code **)(_DAT_0f7b8f98 + 0x60))(auStack_1078,&DAT_0f7b8f98,&ppppppplStack_10b8);
    auStack_1278[0] = 0xa9;
    auStack_1278._1_4_ = 0xa723cb56;
    uStack_1273 = 0x11f0;
    uStack_1271 = 0x4e;
    uStack_1270 = 0xf690;
    uStack_126e = 0x140;
    uStack_126a = 0;
    ppppppplStack_1268 = (long *******)0x1;
    puStack_1260 = (undefined8 *)CONCAT44(puStack_1260._4_4_,0x37e);
    if ((byte)uStack_1038 == 0) {
      auStack_12f8 = (undefined1  [8])0x0;
      ppppppplStack_12f0 = (long *******)0x0;
      ppppppplStack_12e8 = (long *******)0x0;
      func_0x0eedeb80(2,0x2d,auStack_1078,auStack_12f8,auStack_1278);
      if (((ulong)auStack_12f8 & 1) != 0) {
        func_0x0412a280(ppppppplStack_12e8,(ulong)auStack_12f8 & 0xfffffffffffffffe);
      }
    }
    auVar7 = auStack_1078;
    if (((byte)uStack_1038 & 1) == 0) {
      auStack_1338 = (undefined1  [8])((ulong)auStack_1338 & 0xffffffffffff0000);
      bVar11 = 0;
    }
    else {
      auStack_1338 = auStack_1078;
      ppppppplStack_1330 = ppppppplStack_1070;
      ppppppplStack_1328 = ppppppplStack_1068;
      auStack_1078 = (undefined1  [8])0x0;
      ppppppplStack_1070 = (long *******)0x0;
      ppppppplStack_1068 = (long *******)0x0;
      auStack_1338[0] = auVar7[0];
      bVar11 = auStack_1338[0];
      auStack_1338 = auVar7;
    }
    bVar27 = (bVar11 & 1) != 0;
    ppppppplVar23 = (long *******)(auStack_1338 + 1);
    if (bVar27) {
      ppppppplVar23 = ppppppplStack_1328;
    }
    ppppppplVar20 = (long *******)(ulong)(bVar11 >> 1);
    if (bVar27) {
      ppppppplVar20 = ppppppplStack_1330;
    }
    ppppplVar4 = pppppplStack_1340[0x24];
    auStack_1278[0] = (byte)ppppplVar4;
    auStack_1278._1_4_ = (undefined4)((ulong)ppppplVar4 >> 8);
    uStack_1273 = (undefined2)((ulong)ppppplVar4 >> 0x28);
    uStack_1271 = (undefined1)((ulong)ppppplVar4 >> 0x38);
    ppppplVar5 = pppppplStack_1340[0x25];
    uStack_1270 = SUB82(ppppplVar5,0);
    uStack_126e = (undefined4)((ulong)ppppplVar5 >> 0x10);
    uStack_126a = (undefined2)((ulong)ppppplVar5 >> 0x30);
    if (ppppplVar5 != (long *****)0x0) {
      LOCK();
      ppppplVar5[1] = (long ****)((long)ppppplVar5[1] + 1);
      UNLOCK();
    }
    ppppppplStack_1268 = (long *******)pppppplStack_1340[0x26];
    if ((ppppplVar4 != (long *****)0x0) && (*(char *)ppppplVar4 != '\0')) {
      pppppplStack_10d8 = (long ******)((ulong)pppppplStack_10d8 & 0xffffffffffffff00);
      uStack_10c0 = 0;
      func_0x0d62d820(&plStack_11d8,ppppppplVar23,ppppppplVar20,auStack_1278,&pppppplStack_10d8);
      plVar3 = (long *)CONCAT26(uStack_126a,CONCAT42(uStack_126e,uStack_1270));
      auStack_1278[0] = 0;
      auStack_1278._1_4_ = 0;
      uStack_1273 = 0;
      uStack_1271 = 0;
      uStack_1270 = 0;
      uStack_126e = 0;
      uStack_126a = 0;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0412c2d0(plVar3);
        }
        plVar3 = (long *)CONCAT26(uStack_126a,CONCAT42(uStack_126e,uStack_1270));
        ppppppplStack_1268 = (long *******)0x0;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar25 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar25 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            func_0x0412c2d0(plVar3);
          }
        }
      }
      if (((ulong)auStack_1338 & 1) != 0) {
        func_0x0412a280(ppppppplStack_1328,(ulong)auStack_1338 & 0xfffffffffffffffe);
      }
      uStack_1134 = SUB84(unaff_R12,0);
      if ((byte)uStack_1038 == '\x01') {
        if (((ulong)auStack_1078 & 1) != 0) {
          func_0x0412a280(ppppppplStack_1068,(ulong)auStack_1078 & 0xfffffffffffffffe);
        }
      }
      else {
        func_0x048e6d60(auStack_1078);
      }
      ppppppplVar21 = (long *******)plStack_11d8[1];
      ppppppplVar18 = (long *******)plStack_11d8[2];
      if (ppppppplVar21 != ppppppplVar18) {
        unaff_R12 = (undefined1  [8])(pppppplStack_1300 + 5);
        unaff_R13 = (long *******)auStack_1078;
        ppppppplStack_11e8 = (long *******)unaff_R12;
        do {
          ppppppplVar17 = ppppppplStack_440;
          if ((long *******)0xfffffffffffffff7 < ppppppplStack_440) {
            func_0x04882e30();
            goto LAB_0c9adea2;
          }
          if (ppppppplStack_440 < (long *******)0x17) {
            auStack_1078[0] = (char)ppppppplStack_440 * '\x02';
            ppppppplVar26 = (long *******)(auStack_1078 + 1);
            if (ppppppplStack_440 != (long *******)0x0) goto LAB_0c9ad3b8;
          }
          else {
            uVar24 = ((ulong)ppppppplStack_440 | 7) + 1;
            if (((ulong)ppppppplStack_440 | 7) == 0x17) {
              uVar24 = 0x1a;
            }
            ppppppplVar26 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
            if (ppppppplVar26 == (long *******)0x0) {
              func_0x0eec74c0(uVar24,0);
            }
            auStack_1078 = (undefined1  [8])(uVar24 | 1);
            ppppppplStack_1070 = ppppppplVar17;
            unaff_R12 = (undefined1  [8])ppppppplStack_11e8;
            ppppppplStack_1068 = ppppppplVar26;
LAB_0c9ad3b8:
            func_0x0eee2f00(ppppppplVar26,&pppppplStack_840,ppppppplVar17);
          }
          *(char *)((long)ppppppplVar26 + (long)ppppppplVar17) = '\0';
          func_0x0c978970(pppppplStack_1340,ppppppplVar21,unaff_R13,unaff_R12);
          if (((ulong)auStack_1078 & 1) != 0) {
            func_0x0412a280(ppppppplStack_1068,(ulong)auStack_1078 & 0xfffffffffffffffe);
          }
          if (*(int *)unaff_R12 == 2) {
            bVar27 = false;
            uVar15 = 0;
            goto LAB_0c9add38;
          }
          ppppppplVar21 = ppppppplVar21 + 0x22;
        } while (ppppppplVar21 != ppppppplVar18);
      }
      ppppppplVar23 = (long *******)((ulong)auStack_1290 >> 1 & 0x7f);
      ppppppplVar21 = (long *******)(auStack_1290 + 1);
      if (((ulong)auStack_1290 & 1) != 0) {
        ppppppplVar23 = ppppppplStack_1288;
        ppppppplVar21 = ppppppplStack_1280;
      }
      auStack_1278[0] = (byte)ppppppplVar21;
      auStack_1278._1_4_ = (undefined4)((ulong)ppppppplVar21 >> 8);
      uStack_1273 = (undefined2)((ulong)ppppppplVar21 >> 0x28);
      uStack_1271 = (undefined1)((ulong)ppppppplVar21 >> 0x38);
      uStack_1270 = SUB82(ppppppplVar23,0);
      uStack_126e = (undefined4)((ulong)ppppppplVar23 >> 0x10);
      uStack_126a = (undefined2)((ulong)ppppppplVar23 >> 0x30);
      ppppppplStack_1268 = (long *******)&UNK_014af2c8;
      puStack_1260 = (undefined8 *)0x19;
      ppppppplVar21 = (long *******)auStack_1078;
      func_0x049151c0(ppppppplVar21,auStack_1278,2,0x2f);
      if ((DAT_0f7b8fb8 == '\0') && (iVar14 = FUN_04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      uStack_10e0 = uStack_c78;
      ppppppplStack_10e8 = ppppppplVar21;
      (**(code **)(_DAT_0f7b8f98 + 0x60))(auStack_1278,&DAT_0f7b8f98,&ppppppplStack_10e8);
      auStack_12f8 = (undefined1  [8])0x4e11f0a723cb56a9;
      ppppppplStack_12f0 = (long *******)&UNK_0140f690;
      ppppppplStack_12e8 = (long *******)0x1;
      plStack_12e0 = (long *)CONCAT44(plStack_12e0._4_4_,0x38b);
      if ((byte)uStack_1238 == 0) {
        auStack_1338 = (undefined1  [8])0x0;
        ppppppplStack_1330 = (long *******)0x0;
        ppppppplStack_1328 = (long *******)0x0;
        func_0x0eedeb80(2,0x2d,auStack_1278,auStack_1338,auStack_12f8);
        if (((ulong)auStack_1338 & 1) != 0) {
          func_0x0412a280(ppppppplStack_1328,(ulong)auStack_1338 & 0xfffffffffffffffe);
        }
      }
      bVar11 = auStack_1278[0];
      if (((byte)uStack_1238 & 1) == 0) {
        auStack_12a8 = (undefined1  [8])((ulong)auStack_12a8 & 0xffffffffffff0000);
        bVar11 = 0;
      }
      else {
        auStack_12a8 = (undefined1  [8])
                       CONCAT17(uStack_1271,
                                CONCAT25(uStack_1273,CONCAT41(auStack_1278._1_4_,auStack_1278[0])));
        uStack_12a0 = CONCAT26(uStack_126a,CONCAT42(uStack_126e,uStack_1270));
        ppppppplStack_1298 = ppppppplStack_1268;
        auStack_1278[0] = 0;
        auStack_1278._1_4_ = 0;
        uStack_1273 = 0;
        uStack_1271 = 0;
        uStack_1270 = 0;
        uStack_126e = 0;
        uStack_126a = 0;
        ppppppplStack_1268 = (long *******)0x0;
      }
      bVar27 = (bVar11 & 1) != 0;
      ppppppplVar23 = (long *******)(auStack_12a8 + 1);
      if (bVar27) {
        ppppppplVar23 = ppppppplStack_1298;
      }
      uVar24 = (ulong)(bVar11 >> 1);
      if (bVar27) {
        uVar24 = uStack_12a0;
      }
      auStack_12f8 = (undefined1  [8])pppppplStack_1340[0x24];
      ppppppplStack_12f0 = (long *******)pppppplStack_1340[0x25];
      if (ppppppplStack_12f0 != (long *******)0x0) {
        LOCK();
        ppppppplStack_12f0[1] = (long ******)((long)ppppppplStack_12f0[1] + 1);
        UNLOCK();
      }
      ppppppplStack_12e8 = (long *******)pppppplStack_1340[0x26];
      if ((auStack_12f8 != (undefined1  [8])0x0) && (*(char *)auStack_12f8 != '\0'))
      goto code_r0x0c9ad639;
    }
    func_0x04890760();
LAB_0c9ade34:
    func_0x0eec74c0(unaff_R12,0);
LAB_0c9ac0da:
    ppppppplVar23 = (long *******)((ulong)unaff_R12 | 1);
    auStack_1278[0] = (byte)ppppppplVar23;
    auStack_1278._1_4_ = (undefined4)((ulong)unaff_R12 >> 8);
    uStack_1273 = (undefined2)((ulong)unaff_R12 >> 0x28);
    uStack_1271 = (undefined1)((ulong)unaff_R12 >> 0x38);
    uStack_1270 = SUB82(ppppppplVar21,0);
    uStack_126e = (undefined4)((ulong)ppppppplVar21 >> 0x10);
    uStack_126a = (undefined2)((ulong)ppppppplVar21 >> 0x30);
    ppppppplStack_1268 = ppppppplVar26;
LAB_0c9ac0f6:
    memmove(ppppppplVar26,ppppppplVar17,ppppppplVar21);
    unaff_R12 = (undefined1  [8])ppppppplVar23;
LAB_0c9ac104:
    *(char *)((long)ppppppplVar26 + (long)ppppppplVar21) = '\0';
    bVar27 = (auStack_1278[0] & 1) == 0;
    ppppppplStack_c48 = ppppppplStack_1268;
    if (bVar27) {
      ppppppplStack_c48 = unaff_R13;
    }
    uStack_c40 = (ulong)(auStack_1278[0] >> 1);
    if (!bVar27) {
      uStack_c40 = CONCAT26(uStack_126a,CONCAT42(uStack_126e,uStack_1270));
    }
    pbStack_c38 = &UNK_012d82f4;
    plStack_c30 = (long *)0x19;
    func_0x049151c0(&pppppplStack_840,&ppppppplStack_c48,2,0x2f);
    bVar27 = (auStack_1278[0] & 1) != 0;
    if (bVar27) {
      unaff_R13 = ppppppplStack_1268;
    }
    ppppppplStack_1070 = (long *******)(ulong)(auStack_1278[0] >> 1);
    if (bVar27) {
      ppppppplStack_1070 = (long *******)CONCAT26(uStack_126a,CONCAT42(uStack_126e,uStack_1270));
    }
    ppppppplStack_1068 = (long *******)&UNK_014af2c8;
    puStack_1060 = (undefined8 *)0x19;
    auStack_1078 = (undefined1  [8])unaff_R13;
    func_0x049151c0(&ppppppplStack_c48,auStack_1078,2,0x2f);
    ppppppplVar21 = ppppppplStack_440;
    if (ppppppplStack_440 < (long *******)0xfffffffffffffff8) {
      if (ppppppplStack_440 < (long *******)0x17) {
        auStack_1078[0] = (char)ppppppplStack_440 * '\x02';
        ppppppplVar17 = (long *******)(auStack_1078 + 1);
        if (ppppppplStack_440 != (long *******)0x0) goto LAB_0c9ac266;
      }
      else {
        uVar24 = 0x1a;
        if (((ulong)ppppppplStack_440 | 7) != 0x17) {
          uVar24 = ((ulong)ppppppplStack_440 | 7) + 1;
        }
        ppppppplVar17 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
        if (ppppppplVar17 == (long *******)0x0) {
          func_0x0eec74c0(uVar24,0);
        }
        ppppppplVar26 = (long *******)(uVar24 | 1);
        ppppppplStack_1070 = ppppppplVar21;
        auStack_1078 = (undefined1  [8])ppppppplVar26;
        ppppppplStack_1068 = ppppppplVar17;
LAB_0c9ac266:
        func_0x0eee2f00(ppppppplVar17,&pppppplStack_840,ppppppplVar21);
      }
      *(char *)((long)ppppppplVar17 + (long)ppppppplVar21) = '\0';
      uVar12 = func_0x0c979740(pppppplStack_1340,auStack_1078);
      unaff_R12 = (undefined1  [8])(ulong)uVar12;
      if (((ulong)auStack_1078 & 1) != 0) {
        func_0x0412a280(ppppppplStack_1068,(ulong)auStack_1078 & 0xfffffffffffffffe);
      }
      ppppppplVar21 = ppppppplStack_848;
      if ((long *******)0xfffffffffffffff7 < ppppppplStack_848) goto LAB_0c9adf57;
      if (ppppppplStack_848 < (long *******)0x17) {
        auStack_1078[0] = (char)ppppppplStack_848 * '\x02';
        ppppppplVar17 = (long *******)(auStack_1078 + 1);
        if (ppppppplStack_848 != (long *******)0x0) goto LAB_0c9ac33c;
      }
      else {
        uVar24 = 0x1a;
        if (((ulong)ppppppplStack_848 | 7) != 0x17) {
          uVar24 = ((ulong)ppppppplStack_848 | 7) + 1;
        }
        ppppppplVar17 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
        if (ppppppplVar17 == (long *******)0x0) {
          func_0x0eec74c0(uVar24,0);
        }
        auStack_1078 = (undefined1  [8])(uVar24 | 1);
        ppppppplStack_1070 = ppppppplVar21;
        ppppppplStack_1068 = ppppppplVar17;
LAB_0c9ac33c:
        func_0x0eee2f00(ppppppplVar17,&ppppppplStack_c48,ppppppplVar21);
      }
      *(char *)((long)ppppppplVar17 + (long)ppppppplVar21) = '\0';
      uVar13 = func_0x0c979740(pppppplStack_1340,auStack_1078);
      unaff_R13 = (long *******)(ulong)uVar13;
      if (((ulong)auStack_1078 & 1) != 0) {
        func_0x0412a280(ppppppplStack_1068,(ulong)auStack_1078 & 0xfffffffffffffffe);
      }
      auStack_1078 = (undefined1  [8])&ppppppplStack_1070;
      ppppppplStack_1070 = (long *******)0x0;
      ppppppplStack_1068 = (long *******)0x0;
      puStack_1060 = &uStack_1058;
      uStack_1058 = 0;
      uStack_1050 = 0;
      puStack_1048 = &uStack_1040;
      uStack_1040 = 0;
      uStack_1038 = 0;
      uStack_102c = 0xffffffff;
      ppppppplStack_1028 = (long *******)0x0;
      ppppppplStack_1020 = (long *******)0x0;
      ppppppplStack_1018 = (long *******)0x0;
      uStack_1010 = 0;
      uStack_1008 = 0;
      uStack_1000 = 0;
      uStack_ff8 = 1;
      uStack_1030 = 0x101;
      FUN_0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      func_0x0412d610(0xf5522b8);
      plVar3 = _DAT_0f5523a0;
      pbVar6 = _DAT_0f552398;
      if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
      bVar11 = 1;
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
        bVar11 = *pbVar6;
      }
      plVar1 = _DAT_0f5523a8;
      auStack_11c8 = (undefined1  [8])0xf5522b8;
      ppppppplStack_11c0 = (long *******)CONCAT71(ppppppplStack_11c0._1_7_,1);
      ppppppplStack_11b8 = (long *******)pbVar6;
      pplStack_11b0 = (long **)plVar3;
      plStack_11a8 = _DAT_0f5523a8;
      if (((bVar11 & 1) == 0) &&
         (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(*plVar1 + 0x228))(auStack_12f8,plVar1,2);
      ppppppplVar23 = ppppppplStack_1020;
      ppppppplVar21 = ppppppplStack_12e8;
      ppppppplVar17 = ppppppplStack_12f0;
      unaff_R12 = auStack_12f8;
      pppppplStack_1340 = (long ******)CONCAT71(pppppplStack_1340._1_7_,(char)uVar12);
      if (ppppppplStack_12f0 != (long *******)0x0) {
        LOCK();
        ppppppplStack_12f0[1] = (long ******)((long)ppppppplStack_12f0[1] + 1);
        UNLOCK();
      }
      ppppppplStack_1028 = (long *******)0x0;
      ppppppplStack_1020 = (long *******)0x0;
      if (ppppppplVar23 == (long *******)0x0) {
        ppppppplStack_1028 = (long *******)auStack_12f8;
        ppppppplStack_1020 = ppppppplStack_12f0;
      }
      else {
        LOCK();
        ppppppplVar26 = ppppppplVar23 + 1;
        pppppplVar16 = *ppppppplVar26;
        *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + -1);
        UNLOCK();
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*ppppppplVar23)[2])(ppppppplVar23);
          func_0x0412c2d0(ppppppplVar23);
        }
        ppppppplVar23 = ppppppplStack_1020;
        ppppppplStack_1018 = (long *******)0x0;
        ppppppplStack_1028 = (long *******)unaff_R12;
        ppppppplStack_1020 = ppppppplVar17;
        if (ppppppplVar23 != (long *******)0x0) {
          LOCK();
          plVar3 = (long *)(ppppppplVar23 + 1);
          lVar25 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar25 == 0) {
            (**(code **)((long)*ppppppplVar23 + 0x10))(ppppppplVar23);
            func_0x0412c2d0(ppppppplVar23);
          }
        }
      }
      ppppppplVar17 = ppppppplStack_12f0;
      ppppppplStack_1018 = ppppppplVar21;
      auStack_12f8 = (undefined1  [8])0x0;
      ppppppplStack_12f0 = (long *******)0x0;
      if (ppppppplVar17 == (long *******)0x0) {
        ppppppplStack_12e8 = (long *******)0x0;
      }
      else {
        LOCK();
        ppppppplVar21 = ppppppplVar17 + 1;
        pppppplVar16 = *ppppppplVar21;
        *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + -1);
        UNLOCK();
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*ppppppplVar17)[2])(ppppppplVar17);
          func_0x0412c2d0(ppppppplVar17);
        }
        ppppppplVar17 = ppppppplStack_12f0;
        ppppppplStack_12e8 = (long *******)0x0;
        if (ppppppplStack_12f0 != (long *******)0x0) {
          LOCK();
          ppppppplVar21 = ppppppplStack_12f0 + 1;
          pppppplVar16 = *ppppppplVar21;
          *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + -1);
          UNLOCK();
          if (pppppplVar16 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_12f0)[2])(ppppppplStack_12f0);
            func_0x0412c2d0(ppppppplVar17);
          }
        }
      }
      pplVar8 = pplStack_11b0;
      ppppppplStack_11b8 = (long *******)0x0;
      pplStack_11b0 = (long **)0x0;
      if (pplVar8 != (long **)0x0) {
        LOCK();
        plVar3 = (long *)(pplVar8 + 1);
        lVar25 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)((long)*pplVar8 + 0x10))(pplVar8);
          func_0x0412c2d0(pplVar8);
        }
        pplVar8 = pplStack_11b0;
        plStack_11a8 = (long *)0x0;
        if (pplStack_11b0 != (long **)0x0) {
          LOCK();
          pplVar2 = pplStack_11b0 + 1;
          plVar3 = *pplVar2;
          *pplVar2 = (long *)((long)*pplVar2 + -1);
          UNLOCK();
          if (plVar3 == (long *)0x0) {
            (*(code *)(*pplStack_11b0)[2])(pplStack_11b0);
            func_0x0412c2d0(pplVar8);
          }
        }
      }
      if ((char)ppppppplStack_11c0 == '\x01') {
        func_0x0eee02f0(auStack_11c8);
      }
      FUN_0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      ppppppplVar26 = (long *******)0xf5522b8;
      func_0x0412d610(0xf5522b8);
      plVar3 = _DAT_0f5523a0;
      pbVar6 = _DAT_0f552398;
      if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
      bVar11 = 1;
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
        bVar11 = *pbVar6;
      }
      plVar1 = _DAT_0f5523a8;
      auStack_11c8 = (undefined1  [8])0xf5522b8;
      ppppppplStack_11c0 = (long *******)CONCAT71(ppppppplStack_11c0._1_7_,1);
      ppppppplStack_11b8 = (long *******)pbVar6;
      pplStack_11b0 = (long **)plVar3;
      plStack_11a8 = _DAT_0f5523a8;
      if (((bVar11 & 1) == 0) &&
         (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar15 = (**(code **)(*plVar1 + 0x20))(plVar1);
      ppppppplVar21 = (long *******)(ulong)uVar15;
      ppppppplStack_11b8 = (long *******)0x0;
      pplStack_11b0 = (long **)0x0;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0412c2d0(plVar3);
        }
        pplVar8 = pplStack_11b0;
        plStack_11a8 = (long *)0x0;
        if (pplStack_11b0 != (long **)0x0) {
          LOCK();
          pplVar2 = pplStack_11b0 + 1;
          plVar3 = *pplVar2;
          *pplVar2 = (long *)((long)*pplVar2 + -1);
          UNLOCK();
          if (plVar3 == (long *)0x0) {
            (*(code *)(*pplStack_11b0)[2])(pplStack_11b0);
            func_0x0412c2d0(pplVar8);
          }
        }
      }
      if ((char)ppppppplStack_11c0 == '\x01') {
        func_0x0eee02f0(auStack_11c8);
      }
      bVar27 = ((uint)auStack_1318 & 1) != 0;
      if (bVar27) {
        ppppppplVar18 = ppppppplStack_1308;
      }
      ppppppplVar17 = (long *******)(ulong)(auStack_1318[0] >> 1);
      if (bVar27) {
        ppppppplVar17 = (long *******)CONCAT44(uStack_130c,uStack_1310);
      }
      if ((long *******)0xfffffffffffffff7 < ppppppplVar17) goto LAB_0c9adf5c;
      unaff_R12 = (undefined1  [8])(auStack_11c8 + 1);
      if (ppppppplVar17 < (long *******)0x17) {
        auStack_11c8[0] = (char)ppppppplVar17 * '\x02';
        ppppppplVar26 = (long *******)unaff_R12;
        if (ppppppplVar17 != (long *******)0x0) goto LAB_0c9accee;
      }
      else {
        ppppppplStack_11e8 = (long *******)CONCAT71(ppppppplStack_11e8._1_7_,(char)uVar15);
        uVar24 = 0x1a;
        if (((ulong)ppppppplVar17 | 7) != 0x17) {
          uVar24 = ((ulong)ppppppplVar17 | 7) + 1;
        }
        ppppppplVar26 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
        if (ppppppplVar26 == (long *******)0x0) {
          func_0x0eec74c0(uVar24,0);
        }
        auStack_11c8 = (undefined1  [8])(uVar24 | 1);
        ppppppplVar21 = (long *******)((ulong)ppppppplStack_11e8 & 0xff);
        ppppppplStack_11c0 = ppppppplVar17;
        ppppppplStack_11b8 = ppppppplVar26;
LAB_0c9accee:
        memmove(ppppppplVar26,ppppppplVar18,ppppppplVar17);
      }
      *(char *)((long)ppppppplVar26 + (long)ppppppplVar17) = '\0';
      ppppppplStack_1330 = (long *******)((ulong)auStack_11c8 >> 1 & 0x7f);
      if (((ulong)auStack_11c8 & 1) != 0) {
        ppppppplStack_1330 = ppppppplStack_11c0;
        unaff_R12 = (undefined1  [8])ppppppplStack_11b8;
      }
      bVar27 = (*(byte *)(ppppppplStack_11d0 + 1) & 1) != 0;
      pppppplStack_10d8 = (long ******)((long)ppppppplStack_11d0 + 9);
      if (bVar27) {
        pppppplStack_10d8 = ppppppplStack_11d0[3];
      }
      pppppplStack_10d0 = (long ******)(ulong)(*(byte *)(ppppppplStack_11d0 + 1) >> 1);
      if (bVar27) {
        pppppplStack_10d0 = ppppppplStack_11d0[2];
      }
      auStack_1338 = unaff_R12;
      uVar15 = func_0x0ee3d1a0(auStack_1338,&pppppplStack_10d8,pppppplStack_1140,
                               (ulong)ppppppplVar21 & 0xff,auStack_1078);
      ppppppplVar21 = ppppppplStack_440;
      ppppppplVar18 = (long *******)(ulong)uVar15;
      if ((char)uVar12 != '\0') {
        if (ppppppplStack_440 < (long *******)0xfffffffffffffff8) {
          if (ppppppplStack_440 < (long *******)0x17) {
            auStack_12f8[0] = (char)ppppppplStack_440 * '\x02';
            ppppppplVar17 = (long *******)(auStack_12f8 + 1);
            if (ppppppplStack_440 != (long *******)0x0) goto LAB_0c9ace04;
          }
          else {
            uVar24 = 0x1a;
            if (((ulong)ppppppplStack_440 | 7) != 0x17) {
              uVar24 = ((ulong)ppppppplStack_440 | 7) + 1;
            }
            ppppppplVar17 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
            if (ppppppplVar17 == (long *******)0x0) {
              func_0x0eec74c0(uVar24,0);
            }
            ppppppplVar26 = (long *******)(uVar24 | 1);
            ppppppplStack_12f0 = ppppppplVar21;
            auStack_12f8 = (undefined1  [8])ppppppplVar26;
            ppppppplStack_12e8 = ppppppplVar17;
LAB_0c9ace04:
            func_0x0eee2f00(ppppppplVar17,&pppppplStack_840,ppppppplVar21);
          }
          *(char *)((long)ppppppplVar17 + (long)ppppppplVar21) = '\0';
          func_0x0c97a850(auStack_12f8);
          if (((ulong)auStack_12f8 & 1) != 0) {
            func_0x0412a280(ppppppplStack_12e8,(ulong)auStack_12f8 & 0xfffffffffffffffe);
          }
          goto LAB_0c9ace40;
        }
        goto LAB_0c9adf61;
      }
LAB_0c9ace40:
      if ((char)uVar13 == '\0') {
LAB_0c9acefc:
        if (((ulong)auStack_11c8 & 1) != 0) {
          func_0x0412a280(ppppppplStack_11b8,(ulong)auStack_11c8 & 0xfffffffffffffffe);
        }
        func_0x0ee3cd80(auStack_1078);
        if ((auStack_1278[0] & 1) != 0) {
          func_0x0412a280(ppppppplStack_1268,
                          CONCAT17(uStack_1271,
                                   CONCAT25(uStack_1273,CONCAT41(auStack_1278._1_4_,auStack_1278[0])
                                           )) & 0xfffffffffffffffe);
        }
        goto LAB_0c9add8b;
      }
      ppppppplVar21 = ppppppplStack_848;
      if (ppppppplStack_848 < (long *******)0xfffffffffffffff8) {
        if (ppppppplStack_848 < (long *******)0x17) {
          auStack_12f8[0] = (char)ppppppplStack_848 * '\x02';
          ppppppplVar17 = (long *******)(auStack_12f8 + 1);
          if (ppppppplStack_848 != (long *******)0x0) goto LAB_0c9acec0;
        }
        else {
          uVar24 = 0x1a;
          if (((ulong)ppppppplStack_848 | 7) != 0x17) {
            uVar24 = ((ulong)ppppppplStack_848 | 7) + 1;
          }
          ppppppplVar17 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
          if (ppppppplVar17 == (long *******)0x0) {
            func_0x0eec74c0(uVar24,0);
          }
          auStack_12f8 = (undefined1  [8])(uVar24 | 1);
          ppppppplStack_12f0 = ppppppplStack_848;
          ppppppplStack_12e8 = ppppppplVar17;
LAB_0c9acec0:
          func_0x0eee2f00(ppppppplVar17,&ppppppplStack_c48,ppppppplStack_848);
        }
        *(char *)((long)ppppppplVar17 + (long)ppppppplStack_848) = '\0';
        func_0x0c97a850(auStack_12f8);
        if (((ulong)auStack_12f8 & 1) != 0) {
          func_0x0412a280(ppppppplStack_12e8,(ulong)auStack_12f8 & 0xfffffffffffffffe);
        }
        goto LAB_0c9acefc;
      }
    }
    else {
      func_0x04882e30();
LAB_0c9adf57:
      func_0x04882e30();
LAB_0c9adf5c:
      func_0x04882e30();
LAB_0c9adf61:
      func_0x04882e30();
    }
    func_0x04882e30();
LAB_0c9adf6b:
    func_0x04882e30();
LAB_0c9adf70:
    iVar14 = FUN_04108328(&DAT_0f7b8fb8);
    if (iVar14 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    goto LAB_0c9ad047;
  }
  *(undefined4 *)(pppppplStack_1300 + 5) = 2;
  func_0x0ee3cd80(auStack_11c8);
  goto LAB_0c9addd8;
code_r0x0c9ad639:
  auStack_c68[0] = 0;
  uStack_c50 = 0;
  func_0x0d62d820(&plStack_11e0,ppppppplVar23,uVar24,auStack_12f8,auStack_c68);
  ppppppplVar17 = ppppppplStack_12f0;
  auStack_12f8 = (undefined1  [8])0x0;
  ppppppplStack_12f0 = (long *******)0x0;
  if (ppppppplVar17 != (long *******)0x0) {
    LOCK();
    ppppppplVar21 = ppppppplVar17 + 1;
    pppppplVar16 = *ppppppplVar21;
    *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + -1);
    UNLOCK();
    if (pppppplVar16 == (long ******)0x0) {
      (*(code *)(*ppppppplVar17)[2])(ppppppplVar17);
      func_0x0412c2d0(ppppppplVar17);
    }
    ppppppplVar17 = ppppppplStack_12f0;
    ppppppplStack_12e8 = (long *******)0x0;
    if (ppppppplStack_12f0 != (long *******)0x0) {
      LOCK();
      ppppppplVar21 = ppppppplStack_12f0 + 1;
      pppppplVar16 = *ppppppplVar21;
      *ppppppplVar21 = (long ******)((long)*ppppppplVar21 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_12f0)[2])(ppppppplStack_12f0);
        func_0x0412c2d0(ppppppplVar17);
      }
    }
  }
  if (((ulong)auStack_12a8 & 1) != 0) {
    func_0x0412a280(ppppppplStack_1298,(ulong)auStack_12a8 & 0xfffffffffffffffe);
  }
  if ((byte)uStack_1238 == '\x01') {
    if ((auStack_1278[0] & 1) != 0) {
      func_0x0412a280(ppppppplStack_1268,
                      CONCAT17(uStack_1271,
                               CONCAT25(uStack_1273,CONCAT41(auStack_1278._1_4_,auStack_1278[0]))) &
                      0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(auStack_1278);
  }
  ppppppplVar21 = (long *******)plStack_11e0[1];
  ppppppplVar23 = (long *******)plStack_11e0[2];
  if (ppppppplVar21 == ppppppplVar23) {
LAB_0c9ad882:
    uStack_1270 = 0;
    uStack_126e = 0;
    uStack_126a = 0;
    ppppppplStack_1268 = (long *******)0x0;
    auStack_1278[0] = (byte)&uStack_1270;
    auStack_1278._1_4_ = (undefined4)((ulong)&uStack_1270 >> 8);
    uStack_1273 = (undefined2)((ulong)&uStack_1270 >> 0x28);
    uStack_1271 = (undefined1)((ulong)&uStack_1270 >> 0x38);
    puStack_1260 = &uStack_1258;
    uStack_1258 = 0;
    uStack_1250 = 0;
    puStack_1248 = &uStack_1240;
    uStack_1240 = 0;
    uStack_1238 = 0;
    uStack_1230 = 0;
    ppppppplStack_1228 = (long *******)0x0;
    ppppppplStack_1220 = (long *******)0x0;
    ppppppplStack_1218 = (long *******)0x0;
    uStack_1210 = 0;
    uStack_1208 = 0;
    uStack_1200 = 0;
    uStack_11f8 = 1;
    uStack_122c = 0;
    FUN_0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    ppppppplVar17 = ppppppplStack_11d0;
    plVar3 = _DAT_0f5523a0;
    pbVar6 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_0c9ae059:
      uVar19 = func_0x0eee02f0(0xf5522b8);
      func_0x041084d6(&DAT_0f7b8fb8);
      func_0x0ee3cd80(auStack_1278);
      plVar3 = plStack_11e0;
      plStack_11e0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_11d8;
      plStack_11d8 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (((ulong)auStack_1290 & 1) != 0) {
        func_0x0412a280(ppppppplStack_1280,(ulong)auStack_1290 & 0xfffffffffffffffe);
      }
      func_0x0ee3cd80(auStack_11c8);
      do {
        while (((uint)auStack_1318 & 1) != 0) {
          func_0x0412a280(ppppppplStack_1308,CONCAT44(uStack_1314,auStack_1318) & 0xfffffffffffffffe
                         );
          func_0x0c978530(pppppplStack_1130);
          uVar19 = func_0x0eee2d70(uVar19);
        }
        func_0x0c978530(pppppplStack_1130);
        func_0x0eee2d70(uVar19);
        func_0x0412a280(ppppppplStack_1068,(ulong)auStack_1078 & 0xfffffffffffffffe);
        if ((auStack_1278[0] & 1) != 0) {
          func_0x0412a280(ppppppplStack_1268,
                          CONCAT17(uStack_1271,
                                   CONCAT25(uStack_1273,CONCAT41(auStack_1278._1_4_,auStack_1278[0])
                                           )) & 0xfffffffffffffffe);
        }
      } while( true );
    }
    bVar11 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar11 = *pbVar6;
    }
    plVar1 = _DAT_0f5523a8;
    auStack_12f8 = (undefined1  [8])0xf5522b8;
    ppppppplStack_12f0 = (long *******)CONCAT71(ppppppplStack_12f0._1_7_,1);
    ppppppplStack_12e8 = (long *******)pbVar6;
    plStack_12e0 = plVar3;
    plStack_12d8 = _DAT_0f5523a8;
    if (((bVar11 & 1) == 0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(*plVar1 + 0x228))(auStack_1338,plVar1,2);
    ppppppplVar18 = ppppppplStack_1220;
    ppppppplVar23 = ppppppplStack_1328;
    ppppppplVar21 = ppppppplStack_1330;
    auVar7 = auStack_1338;
    if (ppppppplStack_1330 != (long *******)0x0) {
      LOCK();
      ppppppplStack_1330[1] = (long ******)((long)ppppppplStack_1330[1] + 1);
      UNLOCK();
    }
    ppppppplStack_1228 = (long *******)0x0;
    ppppppplStack_1220 = (long *******)0x0;
    if (ppppppplVar18 == (long *******)0x0) {
      ppppppplStack_1228 = (long *******)auStack_1338;
      ppppppplStack_1220 = ppppppplStack_1330;
    }
    else {
      LOCK();
      ppppppplVar26 = ppppppplVar18 + 1;
      pppppplVar16 = *ppppppplVar26;
      *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
        func_0x0412c2d0(ppppppplVar18);
      }
      ppppppplVar18 = ppppppplStack_1220;
      ppppppplStack_1218 = (long *******)0x0;
      ppppppplStack_1228 = (long *******)auVar7;
      ppppppplStack_1220 = ppppppplVar21;
      if (ppppppplVar18 != (long *******)0x0) {
        LOCK();
        plVar3 = (long *)(ppppppplVar18 + 1);
        lVar25 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)((long)*ppppppplVar18 + 0x10))(ppppppplVar18);
          func_0x0412c2d0(ppppppplVar18);
        }
      }
    }
    uVar9 = uStack_1134;
    ppppppplVar21 = ppppppplStack_1330;
    ppppppplStack_1218 = ppppppplVar23;
    auStack_1338 = (undefined1  [8])0x0;
    ppppppplStack_1330 = (long *******)0x0;
    if (ppppppplVar21 == (long *******)0x0) {
      ppppppplStack_1328 = (long *******)0x0;
    }
    else {
      LOCK();
      ppppppplVar23 = ppppppplVar21 + 1;
      pppppplVar16 = *ppppppplVar23;
      *ppppppplVar23 = (long ******)((long)*ppppppplVar23 + -1);
      UNLOCK();
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplVar21)[2])(ppppppplVar21);
        func_0x0412c2d0(ppppppplVar21);
      }
      ppppppplVar21 = ppppppplStack_1330;
      ppppppplStack_1328 = (long *******)0x0;
      if (ppppppplStack_1330 != (long *******)0x0) {
        LOCK();
        plVar3 = (long *)(ppppppplStack_1330 + 1);
        lVar25 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)((long)*ppppppplStack_1330 + 0x10))(ppppppplStack_1330);
          func_0x0412c2d0(ppppppplVar21);
        }
      }
    }
    plVar3 = plStack_12e0;
    ppppppplStack_12e8 = (long *******)0x0;
    plStack_12e0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
      plVar3 = plStack_12e0;
      plStack_12d8 = (long *)0x0;
      if (plStack_12e0 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_12e0 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plStack_12e0 + 0x10))(plStack_12e0);
          func_0x0412c2d0(plVar3);
        }
      }
    }
    if ((char)ppppppplStack_12f0 == '\x01') {
      func_0x0eee02f0(auStack_12f8);
    }
    ppppppplStack_10f0 = ppppppplStack_440;
    bVar27 = (*(byte *)(ppppppplVar17 + 1) & 1) != 0;
    pppppplStack_1108 = (long ******)((long)ppppppplVar17 + 9);
    if (bVar27) {
      pppppplStack_1108 = ppppppplVar17[3];
    }
    pppppplStack_1100 = (long ******)(ulong)(*(byte *)(ppppppplVar17 + 1) >> 1);
    if (bVar27) {
      pppppplStack_1100 = ppppppplVar17[2];
    }
    pppppplStack_10f8 = (long ******)&pppppplStack_840;
    uVar15 = func_0x0ee3d1a0(&pppppplStack_10f8,&pppppplStack_1108,pppppplStack_1140,uVar9,
                             auStack_1278);
    if ((DAT_0f7b8fb8 == '\0') && (iVar14 = FUN_04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    pppppplStack_1118 = (long ******)&pppppplStack_840;
    ppppppplStack_1110 = ppppppplStack_440;
    (**(code **)(_DAT_0f7b8f98 + 0x98))(auStack_12f8,&DAT_0f7b8f98,&pppppplStack_1118);
    auStack_1338 = (undefined1  [8])0x4e11f0a723cb56a9;
    ppppppplStack_1330 = (long *******)&UNK_0140f690;
    ppppppplStack_1328 = (long *******)0x1;
    uStack_1320 = 0x39d;
    if (bStack_12b8 == 0) {
      auStack_12a8 = (undefined1  [8])0x0;
      uStack_12a0 = 0;
      ppppppplStack_1298 = (long *******)0x0;
      func_0x0eedeb80(2,0x2d,auStack_12f8,auStack_12a8,auStack_1338);
      if (((ulong)auStack_12a8 & 1) != 0) {
        func_0x0412a280(ppppppplStack_1298,(ulong)auStack_12a8 & 0xfffffffffffffffe);
      }
    }
    if ((bStack_12b8 & 1) == 0) {
      func_0x048e6d60(auStack_12f8);
    }
    func_0x0ee3cd80(auStack_1278);
    bVar27 = true;
LAB_0c9add19:
    plVar3 = plStack_11e0;
    plStack_11e0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
LAB_0c9add38:
    plVar3 = plStack_11d8;
    plStack_11d8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (((ulong)auStack_1290 & 1) != 0) {
      func_0x0412a280(ppppppplStack_1280,(ulong)auStack_1290 & 0xfffffffffffffffe);
    }
    func_0x0ee3cd80(auStack_11c8);
    if (bVar27) {
LAB_0c9add8b:
      if (uVar15 == 0) {
        *(undefined4 *)(pppppplStack_1300 + 5) = 0;
        if ((*(byte *)(ppppppplStack_11d0 + 1) & 1) == 0) {
          pppppplVar16 = (long ******)(ulong)(*(byte *)(ppppppplStack_11d0 + 1) >> 1);
          pppppplVar22 = (long ******)((long)ppppppplStack_11d0 + 9);
        }
        else {
          pppppplVar16 = ppppppplStack_11d0[2];
          pppppplVar22 = ppppppplStack_11d0[3];
        }
        func_0x0412f5e0(pppppplStack_1300 + 6,pppppplVar22,pppppplVar16);
      }
      else {
        *(undefined4 *)(pppppplStack_1300 + 5) = 2;
      }
    }
LAB_0c9addd8:
    if (((uint)auStack_1318 & 1) != 0) {
      func_0x0412a280(ppppppplStack_1308,CONCAT44(uStack_1314,auStack_1318) & 0xfffffffffffffffe);
    }
    pppppplVar16 = pppppplStack_1130;
    if (pppppplStack_1130 != (long ******)0x0) {
      LOCK();
      pppppplVar22 = pppppplStack_1130 + 1;
      ppppplVar4 = *pppppplVar22;
      *pppppplVar22 = (long *****)((long)*pppppplVar22 + -1);
      UNLOCK();
      if (ppppplVar4 == (long *****)0x0) {
        (*(code *)(*pppppplStack_1130)[2])(pppppplStack_1130);
        func_0x0412c2d0(pppppplVar16);
      }
    }
    return;
  }
  unaff_R12 = (undefined1  [8])(pppppplStack_1300 + 5);
  unaff_R13 = (long *******)auStack_1278;
  ppppppplStack_11e8 = (long *******)unaff_R12;
  while (ppppppplVar17 = ppppppplStack_440, ppppppplStack_440 < (long *******)0xfffffffffffffff8) {
    if (ppppppplStack_440 < (long *******)0x17) {
      auStack_1278[0] = (char)ppppppplStack_440 * '\x02';
      ppppppplVar18 = (long *******)(auStack_1278 + 1);
      if (ppppppplStack_440 != (long *******)0x0) goto LAB_0c9ad808;
    }
    else {
      lVar25 = ((ulong)ppppppplStack_440 | 7) + 1;
      if (((ulong)ppppppplStack_440 | 7) == 0x17) {
        lVar25 = 0x1a;
      }
      ppppppplVar18 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
      if (ppppppplVar18 == (long *******)0x0) {
        func_0x0eec74c0(lVar25,0);
      }
      auStack_1278[0] = (byte)lVar25 | 1;
      auStack_1278._1_4_ = (undefined4)((ulong)lVar25 >> 8);
      uStack_1273 = (undefined2)((ulong)lVar25 >> 0x28);
      uStack_1271 = (undefined1)((ulong)lVar25 >> 0x38);
      uStack_1270 = SUB82(ppppppplVar17,0);
      uStack_126e = (undefined4)((ulong)ppppppplVar17 >> 0x10);
      uStack_126a = (undefined2)((ulong)ppppppplVar17 >> 0x30);
      unaff_R12 = (undefined1  [8])ppppppplStack_11e8;
      ppppppplStack_1268 = ppppppplVar18;
LAB_0c9ad808:
      func_0x0eee2f00(ppppppplVar18,&pppppplStack_840,ppppppplVar17);
    }
    *(char *)((long)ppppppplVar18 + (long)ppppppplVar17) = '\0';
    func_0x0c978970(pppppplStack_1340,ppppppplVar21,unaff_R13,unaff_R12);
    if ((auStack_1278[0] & 1) != 0) {
      func_0x0412a280(ppppppplStack_1268,
                      CONCAT17(uStack_1271,
                               CONCAT25(uStack_1273,CONCAT41(auStack_1278._1_4_,auStack_1278[0]))) &
                      0xfffffffffffffffe);
    }
    if (*(int *)unaff_R12 == 2) {
      bVar27 = false;
      uVar15 = 0;
      goto LAB_0c9add19;
    }
    ppppppplVar21 = ppppppplVar21 + 0x22;
    if (ppppppplVar21 == ppppppplVar23) goto LAB_0c9ad882;
  }
LAB_0c9adea2:
  func_0x04882e30();
LAB_0c9adea7:
  iVar14 = FUN_04108328(&DAT_0f7b8fb8);
  ppppppplVar23 = (long *******)unaff_R12;
  if (iVar14 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    ppppppplVar17 = ppppppplStack_11d0;
  }
  goto LAB_0c9abb82;
}


