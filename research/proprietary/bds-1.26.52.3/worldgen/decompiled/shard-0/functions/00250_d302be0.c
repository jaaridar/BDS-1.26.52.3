/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd402be0 (ELF vaddr 0xd302be0)
 * Label: callee-of:0x4de9260
 * Body:  [[0d402be0, 0d403260] [0d403270, 0d403865] [0d403870, 0d4038ad] [0d4038b0, 0d404cc9] [0d40513e, 0d4051a9] [0d40535b, 0d40583f]]
 * Ghidra: FUN_0d402be0
 */


/* WARNING: Possible PIC construction at 0x0d4043d6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d404488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d404531: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d4045e3: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d404695: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d4045e8) */
/* WARNING: Removing unreachable block (ram,0x0d404606) */
/* WARNING: Removing unreachable block (ram,0x0d404611) */
/* WARNING: Removing unreachable block (ram,0x0d404618) */
/* WARNING: Removing unreachable block (ram,0x0d40462b) */
/* WARNING: Removing unreachable block (ram,0x0d404536) */
/* WARNING: Removing unreachable block (ram,0x0d404554) */
/* WARNING: Removing unreachable block (ram,0x0d40455f) */
/* WARNING: Removing unreachable block (ram,0x0d404566) */
/* WARNING: Removing unreachable block (ram,0x0d404579) */
/* WARNING: Removing unreachable block (ram,0x0d40448d) */
/* WARNING: Removing unreachable block (ram,0x0d4044ab) */
/* WARNING: Removing unreachable block (ram,0x0d4044b6) */
/* WARNING: Removing unreachable block (ram,0x0d4044bd) */
/* WARNING: Removing unreachable block (ram,0x0d4044d0) */
/* WARNING: Removing unreachable block (ram,0x0d4043db) */
/* WARNING: Removing unreachable block (ram,0x0d4043f9) */
/* WARNING: Removing unreachable block (ram,0x0d404404) */
/* WARNING: Removing unreachable block (ram,0x0d40440b) */
/* WARNING: Removing unreachable block (ram,0x0d40441e) */
/* WARNING: Removing unreachable block (ram,0x0d40469a) */
/* WARNING: Removing unreachable block (ram,0x0d4046ae) */
/* WARNING: Removing unreachable block (ram,0x0d4046b9) */
/* WARNING: Removing unreachable block (ram,0x0d4046c0) */
/* WARNING: Removing unreachable block (ram,0x0d4046d3) */
/* WARNING: Removing unreachable block (ram,0x0d404c72) */
/* WARNING: Removing unreachable block (ram,0x0d404750) */
/* WARNING: Removing unreachable block (ram,0x0d404895) */
/* WARNING: Removing unreachable block (ram,0x0d40484f) */
/* WARNING: Removing unreachable block (ram,0x0d404897) */
/* WARNING: Removing unreachable block (ram,0x0d4048e9) */
/* WARNING: Removing unreachable block (ram,0x0d4048be) */
/* WARNING: Removing unreachable block (ram,0x0d4048f6) */
/* WARNING: Removing unreachable block (ram,0x0d404903) */
/* WARNING: Removing unreachable block (ram,0x0d40490b) */
/* WARNING: Removing unreachable block (ram,0x0d404913) */
/* WARNING: Removing unreachable block (ram,0x0d4048cc) */
/* WARNING: Removing unreachable block (ram,0x0d40491d) */
/* WARNING: Removing unreachable block (ram,0x0d4048d0) */
/* WARNING: Removing unreachable block (ram,0x0d404933) */
/* WARNING: Removing unreachable block (ram,0x0d404956) */
/* WARNING: Removing unreachable block (ram,0x0d40495e) */
/* WARNING: Removing unreachable block (ram,0x0d404974) */
/* WARNING: Removing unreachable block (ram,0x0d40497f) */
/* WARNING: Removing unreachable block (ram,0x0d404c83) */
/* WARNING: Removing unreachable block (ram,0x0d4049aa) */
/* WARNING: Removing unreachable block (ram,0x0d404a61) */
/* WARNING: Removing unreachable block (ram,0x0d404a17) */
/* WARNING: Removing unreachable block (ram,0x0d404a30) */
/* WARNING: Removing unreachable block (ram,0x0d404a7f) */
/* WARNING: Removing unreachable block (ram,0x0d404a3e) */
/* WARNING: Removing unreachable block (ram,0x0d404a4c) */
/* WARNING: Removing unreachable block (ram,0x0d404ab3) */
/* WARNING: Removing unreachable block (ram,0x0d404ab9) */
/* WARNING: Removing unreachable block (ram,0x0d404ac4) */
/* WARNING: Removing unreachable block (ram,0x0d404ad8) */
/* WARNING: Removing unreachable block (ram,0x0d404add) */
/* WARNING: Removing unreachable block (ram,0x0d404aeb) */
/* WARNING: Removing unreachable block (ram,0x0d404afd) */
/* WARNING: Removing unreachable block (ram,0x0d404b0e) */
/* WARNING: Removing unreachable block (ram,0x0d404b26) */
/* WARNING: Removing unreachable block (ram,0x0d404b38) */
/* WARNING: Removing unreachable block (ram,0x0d404b49) */
/* WARNING: Removing unreachable block (ram,0x0d404baf) */
/* WARNING: Removing unreachable block (ram,0x0d404b61) */
/* WARNING: Removing unreachable block (ram,0x0d404bca) */
/* WARNING: Removing unreachable block (ram,0x0d404be8) */
/* WARNING: Removing unreachable block (ram,0x0d404b6b) */
/* WARNING: Removing unreachable block (ram,0x0d404b78) */
/* WARNING: Removing unreachable block (ram,0x0d404b83) */
/* WARNING: Removing unreachable block (ram,0x0d404b8a) */
/* WARNING: Removing unreachable block (ram,0x0d404b9d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d402be0(undefined8 param_1)

{
  byte *****pppppbVar1;
  long *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  byte *****pppppbVar5;
  byte bVar6;
  code *pcVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte ******ppppppbVar13;
  byte *******pppppppbVar14;
  byte ******ppppppbVar15;
  undefined4 *puVar16;
  byte *******pppppppbVar17;
  byte *******pppppppbVar18;
  byte ****ppppbVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  byte ******ppppppbVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  undefined **extraout_RDX;
  undefined **ppuVar28;
  byte ******ppppppbVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  byte *******pppppppbVar32;
  undefined8 uVar33;
  byte *******pppppppbVar34;
  byte *pbVar35;
  byte ******ppppppbVar36;
  byte *******pppppppbVar37;
  long *plVar38;
  bool bVar39;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [7];
  undefined1 uStack_391;
  byte *******pppppppbStack_390;
  byte *******pppppppbStack_388;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined4 uStack_377;
  undefined3 uStack_373;
  byte ******ppppppbStack_370;
  byte *******pppppppbStack_368;
  undefined8 uStack_348;
  byte bStack_340;
  undefined5 uStack_33f;
  undefined2 uStack_33a;
  undefined1 uStack_338;
  undefined5 uStack_337;
  undefined2 uStack_332;
  undefined8 uStack_330;
  undefined8 uStack_328;
  byte *******pppppppbStack_320;
  byte *******pppppppbStack_318;
  undefined8 uStack_310;
  byte ******ppppppbStack_308;
  undefined8 uStack_300;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  byte ******ppppppbStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_178;
  undefined8 uStack_170;
  long alStack_138 [8];
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar31 = (undefined8 *)auStack_398;
  uStack_338 = 0;
  uStack_337 = 0;
  uStack_332 = 0;
  uStack_330 = 0;
  uStack_348 = 0;
  bStack_340 = 0;
  uStack_33f = 0;
  uStack_33a = 0;
  uStack_328 = 0;
  uStack_3a0 = 0xd402c20;
  func_0x0412f5e0(&bStack_340,&UNK_01389016,0x18);
  uStack_348 = 0x72d289be056993d;
  ppppppbStack_2b8 = (byte ******)0x0;
  uStack_2b0 = 0;
  uStack_3a0 = 0xd402c50;
  pppppppbVar14 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pppppppbVar14 == (byte *******)0x0) {
    uStack_3a0 = 0xd404bf6;
    func_0x0eec74c0(0x1b0,0);
  }
  pppppppbVar14[1] = (byte ******)0x0;
  pppppppbVar14[2] = (byte ******)0x0;
  *pppppppbVar14 = (byte ******)&UNK_0f46f450;
  pppppppbStack_388 = (byte *******)0x0;
  uStack_380 = 0;
  uStack_37f = 0;
  if (ppppppbStack_2b8 == (byte ******)0x0) {
    pppppppbStack_388 = (byte *******)0x0;
  }
  else {
    uStack_3a0 = 0xd402c8f;
    (*(code *)*ppppppbStack_2b8)(&ppppppbStack_2b8,&pppppppbStack_388);
    pppppppbStack_388 = (byte *******)ppppppbStack_2b8;
  }
  ppppppbStack_2b8 = (byte ******)0x0;
  pppppppbVar14[4] = (byte ******)&UNK_0f2ccd78;
  pppppppbVar14[5] = (byte ******)0x0;
  pppppppbVar14[6] = (byte ******)0x0;
  pppppppbVar14[7] = (byte ******)0x0;
  pppppppbVar14[8] = (byte ******)0x0;
  pppppppbVar14[9] = (byte ******)0x0;
  pppppppbVar14[10] = (byte ******)0x0;
  pppppppbVar14[0xb] = (byte ******)0x0;
  pppppppbVar14[0xc] = (byte ******)0x0;
  *(undefined1 *)(pppppppbVar14 + 0xd) = 0;
  uStack_3a0 = 0xd402ceb;
  FUN_04aa75f0(pppppppbVar14 + 0xe,&ppppppbStack_308,&UNK_01254d89);
  *(undefined1 *)(pppppppbVar14 + 0x10) = 0;
  pppppppbVar17 = pppppppbVar14 + 0x11;
  pppppppbVar14[0x11] = (byte ******)0x0;
  pppppppbVar14[0x12] = (byte ******)0x0;
  pppppppbVar14[0x13] = (byte ******)0x0;
  pppppppbVar14[0x14] = (byte ******)0x0;
  pppppppbVar14[0x15] = (byte ******)0x0;
  pppppppbVar14[0x16] = (byte ******)0x0;
  pppppppbVar14[0x17] = (byte ******)0xffffffff;
  pppppppbVar14[0x26] = (byte ******)0x0;
  pppppppbVar14[0x27] = (byte ******)0x0;
  pppppppbVar14[0x18] = (byte ******)0x0;
  pppppppbVar14[0x19] = (byte ******)0x0;
  pppppppbVar14[0x1a] = (byte ******)0x0;
  pppppppbVar14[0x1b] = (byte ******)0x0;
  pppppppbVar14[0x1c] = (byte ******)0x0;
  pppppppbVar14[0x1d] = (byte ******)0x0;
  pppppppbVar14[0x1e] = (byte ******)0x0;
  pppppppbVar14[0x1f] = (byte ******)0x0;
  pppppppbVar14[4] = (byte ******)&UNK_0f46f4a0;
  pppppppbVar18 = pppppppbVar14 + 0x2e;
  pppppppbVar14[0x2e] = (byte ******)0x0;
  pppppppbVar14[0x2f] = (byte ******)0x0;
  if ((byte ********)pppppppbVar18 != &pppppppbStack_388) {
    if (pppppppbStack_388 == (byte *******)0x0) {
      pppppppbVar32 = (byte *******)0x0;
    }
    else {
      uStack_3a0 = 0xd402d81;
      (*(code *)*pppppppbStack_388)(&pppppppbStack_388,pppppppbVar18);
      pppppppbVar32 = pppppppbStack_388;
    }
    pppppppbStack_388 = (byte *******)0x0;
    *pppppppbVar18 = (byte ******)pppppppbVar32;
  }
  pppppppbVar18 = pppppppbVar14 + 0x12;
  if (pppppppbVar17 != (byte *******)&DAT_0f551f58) {
    if (((ulong)*pppppppbVar18 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        pppppppbVar14[0x14] = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *(uint *)pppppppbVar18 = _DAT_0f551f60;
        *(undefined4 *)((long)pppppppbVar14 + 0x94) = uVar9;
        *(undefined4 *)(pppppppbVar14 + 0x13) = uVar10;
        *(undefined4 *)((long)pppppppbVar14 + 0x9c) = uVar11;
      }
      else {
        uStack_3a0 = 0xd402e13;
        func_0x04885070(pppppppbVar18,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar39 = (_DAT_0f551f60 & 1) != 0;
      ppppppbVar15 = (byte ******)0xf551f61;
      if (bVar39) {
        ppppppbVar15 = _DAT_0f551f70;
      }
      uVar27 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar39) {
        uVar27 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      uStack_3a0 = 0xd402dfb;
      func_0x04885120(pppppppbVar18,ppppppbVar15,uVar27);
    }
  }
  pppppppbVar32 = pppppppbVar14 + 1;
  pppppppbVar14[0x11] = _DAT_0f551f58;
  pppppppbVar14[0x15] = (byte ******)0x0;
  if (pppppppbStack_388 != (byte *******)0x0) {
    uStack_3a0 = 0xd402e42;
    (*(code *)pppppppbStack_388[1])(&pppppppbStack_388);
  }
  LOCK();
  *pppppppbVar32 = (byte ******)((long)*pppppppbVar32 + 1);
  UNLOCK();
  uStack_3a0 = 0xd402e66;
  pppppppbStack_390 = pppppppbVar32;
  pppppppbStack_320 = pppppppbVar18;
  ppppppbVar15 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppbVar15 == (byte ******)0x0) {
    uStack_3a0 = 0xd404c07;
    func_0x0eec74c0(0x80,0);
  }
  ppppppbVar15[1] = (byte *****)0x0;
  ppppppbVar15[2] = (byte *****)0x0;
  *ppppppbVar15 = (byte *****)&UNK_0f46f598;
  ppppppbVar15[6] = (byte *****)0x0;
  ppppppbVar15[7] = (byte *****)0x0;
  ppppppbVar15[4] = (byte *****)&UNK_0f46f5e8;
  ppppppbVar15[0xe] = (byte *****)(pppppppbVar14 + 4);
  ppppppbVar15[0xf] = (byte *****)pppppppbVar14;
  LOCK();
  pppppppbVar14[1] = (byte ******)((long)pppppppbVar14[1] + 1);
  UNLOCK();
  uStack_380 = SUB81(ppppppbVar15,0);
  uStack_37f = (undefined7)((ulong)ppppppbVar15 >> 8);
  uStack_3a0 = 0xd402eca;
  pppppppbStack_388 = (byte *******)(ppppppbVar15 + 4);
  uStack_310 = param_1;
  puVar16 = (undefined4 *)func_0x04fc77e0(param_1,&uStack_348,1);
  pppppppbVar18 = *(byte ********)(puVar16 + 0x24);
  if (pppppppbVar18 < *(byte ********)(puVar16 + 0x26)) {
    pppppppbVar18[2] = (byte ******)0x0;
    pppppppbVar18[3] = (byte ******)0x0;
    *pppppppbVar18 = (byte ******)0x0;
    pppppppbVar18[1] = (byte ******)0x0;
    pppppppbVar18[4] = (byte ******)0x0;
    if (pppppppbVar18 == pppppppbVar17) {
LAB_0d402f11:
      *pppppppbVar18 = *pppppppbVar17;
      pppppppbVar18[5] = ppppppbVar15 + 4;
      pppppppbVar18[6] = ppppppbVar15;
LAB_0d402f7f:
      LOCK();
      ppppppbVar15[1] = (byte *****)((long)ppppppbVar15[1] + 1);
      UNLOCK();
    }
    else {
      if (((ulong)*pppppppbStack_320 & 1) == 0) {
        pppppppbVar18[3] = pppppppbStack_320[2];
        ppppppbVar23 = pppppppbStack_320[1];
        pppppppbVar18[1] = *pppppppbStack_320;
        pppppppbVar18[2] = ppppppbVar23;
        goto LAB_0d402f11;
      }
      uStack_3a0 = 0xd402f5f;
      func_0x04885070(pppppppbVar18 + 1,pppppppbVar14[0x14],pppppppbVar14[0x13]);
      *pppppppbVar18 = *pppppppbVar17;
      ppppppbVar15 = (byte ******)CONCAT71(uStack_37f,uStack_380);
      pppppppbVar18[5] = (byte ******)pppppppbStack_388;
      pppppppbVar18[6] = (byte ******)CONCAT71(uStack_37f,uStack_380);
      if (ppppppbVar15 != (byte ******)0x0) goto LAB_0d402f7f;
    }
    pppppppbVar18 = pppppppbVar18 + 7;
    *(byte ********)(puVar16 + 0x24) = pppppppbVar18;
  }
  else {
    uStack_3a0 = 0xd402f3f;
    pppppppbVar18 = (byte *******)func_0x04fcaee0(puVar16 + 0x22,pppppppbVar17,&pppppppbStack_388);
  }
  pppppppbVar17 = pppppppbStack_390;
  *(byte ********)(puVar16 + 0x24) = pppppppbVar18;
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar11 = puVar16[2];
  uVar12 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  ppppppbVar15 = pppppppbVar14[0xf];
  *(undefined4 *)(pppppppbVar14 + 0xe) = uVar9;
  *(undefined4 *)((long)pppppppbVar14 + 0x74) = uVar10;
  *(undefined4 *)(pppppppbVar14 + 0xf) = uVar11;
  *(undefined4 *)((long)pppppppbVar14 + 0x7c) = uVar12;
  if (ppppppbVar15 != (byte ******)0x0) {
    LOCK();
    ppppppbVar23 = ppppppbVar15 + 1;
    pppppbVar5 = *ppppppbVar23;
    *ppppppbVar23 = (byte *****)((long)*ppppppbVar23 + -1);
    UNLOCK();
    if (pppppbVar5 == (byte *****)0x0) {
      uStack_3a0 = 0xd402fd2;
      (*(code *)(*ppppppbVar15)[2])(ppppppbVar15);
      uStack_3a0 = 0xd402fda;
      func_0x0412c2d0(ppppppbVar15);
    }
  }
  *(undefined1 *)(pppppppbVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar20 = (long *)CONCAT71(uStack_37f,uStack_380);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar38 = plVar20 + 1;
    lVar26 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      uStack_3a0 = 0xd40300e;
      (**(code **)(*plVar20 + 0x10))(plVar20);
      uStack_3a0 = 0xd403016;
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  ppppppbVar15 = *pppppppbVar17;
  *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
  UNLOCK();
  if (ppppppbVar15 == (byte ******)0x0) {
    uStack_3a0 = 0xd40318e;
    (*(code *)(*pppppppbVar14)[2])(pppppppbVar14);
    uStack_3a0 = 0xd403196;
    func_0x0412c2d0(pppppppbVar14);
    LOCK();
    ppppppbVar15 = *pppppppbVar17;
    *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
    UNLOCK();
  }
  else {
    LOCK();
    ppppppbVar15 = *pppppppbVar17;
    *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
    UNLOCK();
  }
  if (ppppppbVar15 == (byte ******)0x0) {
    uStack_3a0 = 0xd4031ad;
    (*(code *)(*pppppppbVar14)[2])(pppppppbVar14);
    uStack_3a0 = 0xd4031b5;
    func_0x0412c2d0(pppppppbVar14);
  }
  uStack_70 = 0;
  uStack_300 = 0;
  lStack_78 = 0;
  ppppppbStack_308 = (byte ******)&UNK_0f46f638;
  uStack_3a0 = 0xd403084;
  pppppppbVar17 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pppppppbVar17 == (byte *******)0x0) {
    uStack_3a0 = 0xd404c18;
    func_0x0eec74c0(0x1b0,0);
  }
  pppppppbStack_388 = (byte *******)ppppppbStack_308;
  pppppppbVar17[1] = (byte ******)0x0;
  pppppppbVar17[2] = (byte ******)0x0;
  *pppppppbVar17 = (byte ******)&UNK_0f4688c8;
  uStack_380 = 0;
  uStack_37f = 0;
  ppppppbStack_308 = (byte ******)0x0;
  pppppppbVar17[4] = (byte ******)&UNK_0f2ccd78;
  pppppppbVar17[5] = (byte ******)0x0;
  pppppppbVar17[6] = (byte ******)0x0;
  pppppppbVar17[7] = (byte ******)0x0;
  pppppppbVar17[8] = (byte ******)0x0;
  pppppppbVar17[9] = (byte ******)0x0;
  pppppppbVar17[10] = (byte ******)0x0;
  pppppppbVar17[0xb] = (byte ******)0x0;
  pppppppbVar17[0xc] = (byte ******)0x0;
  *(undefined1 *)(pppppppbVar17 + 0xd) = 0;
  uStack_3a0 = 0xd4030f9;
  FUN_04aa75f0(pppppppbVar17 + 0xe,&uStack_391,&UNK_01254d89);
  *(undefined1 *)(pppppppbVar17 + 0x10) = 0;
  pppppppbVar17[0x11] = (byte ******)0x0;
  pppppppbVar17[0x12] = (byte ******)0x0;
  pppppppbVar17[0x13] = (byte ******)0x0;
  pppppppbVar17[0x14] = (byte ******)0x0;
  pppppppbVar17[0x15] = (byte ******)0x0;
  pppppppbVar17[0x16] = (byte ******)0x0;
  pppppppbVar17[0x17] = (byte ******)0xffffffff;
  pppppppbVar17[0x26] = (byte ******)0x0;
  pppppppbVar17[0x27] = (byte ******)0x0;
  pppppppbVar17[0x18] = (byte ******)0x0;
  pppppppbVar17[0x19] = (byte ******)0x0;
  pppppppbVar17[0x1a] = (byte ******)0x0;
  pppppppbVar17[0x1b] = (byte ******)0x0;
  pppppppbVar17[0x1c] = (byte ******)0x0;
  pppppppbVar17[0x1d] = (byte ******)0x0;
  pppppppbVar17[0x1e] = (byte ******)0x0;
  pppppppbVar17[0x1f] = (byte ******)0x0;
  pppppppbVar17[4] = (byte ******)&UNK_0f468918;
  pppppppbVar17[0x2e] = (byte ******)0x0;
  pppppppbVar17[0x2f] = (byte ******)0x0;
  if (pppppppbStack_388 == (byte *******)0x0) {
    pppppppbVar18 = (byte *******)0x0;
  }
  else {
    uStack_3a0 = 0xd40317e;
    (*(code *)*pppppppbStack_388)(&pppppppbStack_388,pppppppbVar17 + 0x2e);
    pppppppbVar18 = pppppppbStack_388;
  }
  pppppppbVar32 = pppppppbVar17 + 1;
  pppppppbVar17[0x2e] = (byte ******)pppppppbVar18;
  if (ppppppbStack_308 != (byte ******)0x0) {
    uStack_3a0 = 0xd4031db;
    (*(code *)ppppppbStack_308[1])(&ppppppbStack_308);
  }
  LOCK();
  *pppppppbVar32 = (byte ******)((long)*pppppppbVar32 + 1);
  UNLOCK();
  uStack_3a0 = 0xd4031fe;
  pppppppbStack_2c0 = pppppppbVar32;
  pppppppbVar18 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppppppbVar18 == (byte *******)0x0) {
    uStack_3a0 = 0xd404c29;
    func_0x0eec74c0(0x80,0);
  }
  pppppppbVar18[1] = (byte ******)0x0;
  pppppppbVar18[2] = (byte ******)0x0;
  *pppppppbVar18 = (byte ******)&UNK_0f4689f8;
  pppppppbVar18[6] = (byte ******)0x0;
  pppppppbVar18[7] = (byte ******)0x0;
  pppppppbVar18[4] = (byte ******)&UNK_0f468a48;
  pppppppbVar18[0xe] = (byte ******)(pppppppbVar17 + 4);
  pppppppbVar18[0xf] = (byte ******)pppppppbVar17;
  LOCK();
  pppppppbVar17[1] = (byte ******)((long)pppppppbVar17[1] + 1);
  UNLOCK();
  pppppppbStack_320 = pppppppbVar18 + 1;
  ppppppbVar36 = pppppppbVar14[0x1c];
  ppppppbVar23 = pppppppbVar14[0x1b];
  for (ppppppbVar15 = ppppppbVar23; pppppppbStack_390 = pppppppbVar18, ppppppbVar15 != ppppppbVar36;
      ppppppbVar15 = ppppppbVar15 + 0x15) {
    if ((ppppppbVar15[0xf] == (byte *****)0x0) &&
       (ppppppbVar15[0x10] == (byte *****)0xffffffffffffffff)) goto LAB_0d4035c1;
  }
  if (ppppppbVar36 < pppppppbVar14[0x1d]) {
    uStack_3a0 = 0xd4032a6;
    func_0x0d4731a0(ppppppbVar36);
    ppppppbVar36 = ppppppbVar36 + 0x15;
    pppppppbVar14[0x1c] = ppppppbVar36;
LAB_0d403558:
    pppppppbVar14[0x1c] = ppppppbVar36;
    pppppbVar5 = ppppppbVar36[-0x15];
    if (((ulong)*pppppbVar5 & 1) == 0) {
      *(byte *)pppppbVar5 = 0x26;
      ppppbVar19 = (byte ****)((long)pppppbVar5 + 1);
    }
    else {
      pppppbVar5[1] = (byte ****)0x13;
      ppppbVar19 = pppppbVar5[2];
    }
    uVar11 = _UNK_01494d69;
    uVar10 = _UNK_01494d65;
    uVar9 = _UNK_01494d61;
    *(undefined4 *)ppppbVar19 = _DAT_01494d5d;
    *(undefined4 *)((long)ppppbVar19 + 4) = uVar9;
    *(undefined4 *)(ppppbVar19 + 1) = uVar10;
    *(undefined4 *)((long)ppppbVar19 + 0xc) = uVar11;
    pbVar35 = (byte *)((long)ppppbVar19 + 0xf);
    pbVar35[0] = 0x65;
    pbVar35[1] = 0x6e;
    pbVar35[2] = 0x74;
    pbVar35[3] = 0x3e;
    *(byte *)((long)ppppbVar19 + 0x13) = 0;
    ppppppbVar23 = pppppppbVar14[0x1c];
    ppppppbVar15 = ppppppbVar23 + -0x15;
    *(undefined1 *)((long)ppppppbVar23 + -7) = *(undefined1 *)(pppppppbVar14 + 0x10);
    ppppppbVar23[-6] = (byte *****)0x0;
    ppppppbVar23[-5] = (byte *****)0xffffffffffffffff;
    *(undefined1 *)(ppppppbVar23 + -1) = 0;
LAB_0d4035c1:
    pppppppbVar34 = pppppppbVar17 + 0x11;
    pppppppbVar14 = pppppppbStack_390 + 4;
    pppppppbVar18 = (byte *******)ppppppbVar15[0x12];
    if (pppppppbVar18 < ppppppbVar15[0x13]) {
      pppppppbVar18[2] = (byte ******)0x0;
      pppppppbVar18[3] = (byte ******)0x0;
      *pppppppbVar18 = (byte ******)0x0;
      pppppppbVar18[1] = (byte ******)0x0;
      pppppppbVar18[4] = (byte ******)0x0;
      if (pppppppbVar18 != pppppppbVar34) {
        if (((ulong)pppppppbVar17[0x12] & 1) == 0) {
          pppppppbVar18[3] = pppppppbVar17[0x14];
          ppppppbVar23 = pppppppbVar17[0x13];
          pppppppbVar18[1] = pppppppbVar17[0x12];
          pppppppbVar18[2] = ppppppbVar23;
        }
        else {
          uStack_3a0 = 0xd40376d;
          func_0x04885070(pppppppbVar18 + 1,pppppppbVar17[0x14],pppppppbVar17[0x13]);
        }
      }
      *pppppppbVar18 = *pppppppbVar34;
      pppppppbVar18[5] = (byte ******)pppppppbVar14;
      pppppppbVar18[6] = (byte ******)pppppppbStack_390;
      LOCK();
      pppppppbStack_390[1] = (byte ******)((long)pppppppbStack_390[1] + 1);
      UNLOCK();
      pppppppbVar18 = pppppppbVar18 + 7;
      ppppppbVar15[0x12] = (byte *****)pppppppbVar18;
      pppppppbVar14 = pppppppbStack_2c0;
    }
    else {
      pppppppbVar18 = (byte *******)((long)pppppppbVar18 - (long)ppppppbVar15[0x11]);
      pppppppbVar32 = (byte *******)0x6db6db6db6db6db7;
      pppppppbVar37 = (byte *******)(((long)pppppppbVar18 >> 3) * 0x6db6db6db6db6db7 + 1);
      if ((byte *******)0x492492492492492 < pppppppbVar37) goto LAB_0d404c99;
      lVar26 = (long)ppppppbVar15[0x13] - (long)ppppppbVar15[0x11] >> 3;
      pppppppbVar32 = (byte *******)(lVar26 * -0x2492492492492492);
      if (pppppppbVar37 < pppppppbVar32) {
        pppppppbVar37 = pppppppbVar32;
      }
      pppppppbVar32 = (byte *******)(ppppppbVar15 + 0x11);
      if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
        pppppppbVar37 = (byte *******)0x492492492492492;
      }
      pppppppbStack_368 = pppppppbVar32;
      pppppppbStack_318 = pppppppbVar14;
      pppppppbStack_2c8 = pppppppbVar32;
      if (pppppppbVar37 == (byte *******)0x0) {
        ppppppbVar23 = (byte ******)0x0;
      }
      else {
        if ((byte *******)0x492492492492492 < pppppppbVar37) goto LAB_0d404c94;
        uStack_3a0 = 0xd4036cb;
        ppppppbVar23 = (byte ******)
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pppppppbVar37 * 0x38)
        ;
        if (ppppppbVar23 == (byte ******)0x0) {
          uStack_3a0 = 0xd4036dd;
          func_0x0eec74c0((long)pppppppbVar37 * 0x38,0);
          ppppppbVar23 = (byte ******)0x0;
        }
      }
      pppppppbVar14 = (byte *******)((long)ppppppbVar23 + (long)pppppppbVar18);
      uStack_378 = SUB81(pppppppbVar14,0);
      uStack_377 = (undefined4)((ulong)pppppppbVar14 >> 8);
      uStack_373 = (undefined3)((ulong)pppppppbVar14 >> 0x28);
      uStack_37f = (undefined7)((ulong)pppppppbVar14 >> 8);
      ppppppbStack_370 = ppppppbVar23 + (long)pppppppbVar37 * 7;
      *(undefined8 *)((long)(ppppppbVar23 + 2) + (long)pppppppbVar18) = 0;
      ((undefined8 *)((long)(ppppppbVar23 + 2) + (long)pppppppbVar18))[1] = 0;
      *(undefined8 *)((long)ppppppbVar23 + (long)pppppppbVar18) = 0;
      ((undefined8 *)((long)ppppppbVar23 + (long)pppppppbVar18))[1] = 0;
      *(undefined8 *)((long)(ppppppbVar23 + 4) + (long)pppppppbVar18) = 0;
      pppppppbVar32 = pppppppbVar14;
      pppppppbVar37 = pppppppbVar14;
      pppppppbStack_388 = (byte *******)ppppppbVar23;
      uStack_380 = uStack_378;
      if (pppppppbVar14 != pppppppbVar34) {
        puVar30 = (undefined *)((long)pppppppbVar18 + (long)ppppppbVar23);
        if (((ulong)pppppppbVar17[0x12] & 1) == 0) {
          *(byte *******)(puVar30 + 0x18) = pppppppbVar17[0x14];
          uVar9 = *(undefined4 *)((long)pppppppbVar17 + 0x94);
          uVar10 = *(undefined4 *)(pppppppbVar17 + 0x13);
          uVar11 = *(undefined4 *)((long)pppppppbVar17 + 0x9c);
          *(undefined4 *)(puVar30 + 8) = *(undefined4 *)(pppppppbVar17 + 0x12);
          *(undefined4 *)(puVar30 + 0xc) = uVar9;
          *(undefined4 *)(puVar30 + 0x10) = uVar10;
          *(undefined4 *)(puVar30 + 0x14) = uVar11;
        }
        else {
          uStack_3a0 = 0xd4037bc;
          func_0x04885070(puVar30 + 8,pppppppbVar17[0x14],pppppppbVar17[0x13]);
          pppppppbVar32 = (byte *******)CONCAT71(uStack_37f,uStack_380);
          pppppppbVar37 = (byte *******)CONCAT35(uStack_373,CONCAT41(uStack_377,uStack_378));
        }
      }
      *pppppppbVar14 = *pppppppbVar34;
      pppppppbVar14[5] = (byte ******)pppppppbStack_318;
      pppppppbVar14[6] = (byte ******)pppppppbStack_390;
      LOCK();
      pppppppbStack_390[1] = (byte ******)((long)pppppppbStack_390[1] + 1);
      UNLOCK();
      pppppppbVar18 = pppppppbVar37 + 7;
      uStack_378 = SUB81(pppppppbVar18,0);
      uStack_377 = (undefined4)((ulong)pppppppbVar18 >> 8);
      uStack_373 = (undefined3)((ulong)pppppppbVar18 >> 0x28);
      ppppppbVar23 = (byte ******)ppppppbVar15[0x11];
      ppppppbVar36 = (byte ******)ppppppbVar15[0x12];
      pppppppbVar32 =
           (byte *******)((long)pppppppbVar32 + ((long)ppppppbVar23 - (long)ppppppbVar36));
      pppppppbVar14 = pppppppbVar32;
      ppppppbVar29 = ppppppbVar23;
      if ((long)ppppppbVar23 - (long)ppppppbVar36 != 0) {
        do {
          pppppppbVar14[2] = (byte ******)0x0;
          pppppppbVar14[3] = (byte ******)0x0;
          *pppppppbVar14 = (byte ******)0x0;
          pppppppbVar14[1] = (byte ******)0x0;
          pppppppbVar14[4] = (byte ******)0x0;
          pppppppbVar14[3] = (byte ******)ppppppbVar29[3];
          ppppppbVar13 = (byte ******)ppppppbVar29[2];
          pppppppbVar14[1] = (byte ******)ppppppbVar29[1];
          pppppppbVar14[2] = ppppppbVar13;
          *(undefined2 *)(ppppppbVar29 + 1) = 0;
          *pppppppbVar14 = (byte ******)*ppppppbVar29;
          uVar9 = *(undefined4 *)((long)ppppppbVar29 + 0x2c);
          uVar10 = *(undefined4 *)(ppppppbVar29 + 6);
          uVar11 = *(undefined4 *)((long)ppppppbVar29 + 0x34);
          *(undefined4 *)(pppppppbVar14 + 5) = *(undefined4 *)(ppppppbVar29 + 5);
          *(undefined4 *)((long)pppppppbVar14 + 0x2c) = uVar9;
          *(undefined4 *)(pppppppbVar14 + 6) = uVar10;
          *(undefined4 *)((long)pppppppbVar14 + 0x34) = uVar11;
          ppppppbVar29[5] = (byte *****)0x0;
          ppppppbVar29[6] = (byte *****)0x0;
          ppppppbVar29 = ppppppbVar29 + 7;
          pppppppbVar14 = pppppppbVar14 + 7;
          pppppppbStack_318 = pppppppbVar32;
        } while (ppppppbVar29 != ppppppbVar36);
        do {
          pppppbVar5 = ppppppbVar23[6];
          if (pppppbVar5 == (byte *****)0x0) {
LAB_0d403894:
            bVar6 = *(byte *)(ppppppbVar23 + 1);
          }
          else {
            LOCK();
            pppppbVar1 = pppppbVar5 + 1;
            ppppbVar19 = *pppppbVar1;
            *pppppbVar1 = (byte ****)((long)*pppppbVar1 + -1);
            UNLOCK();
            if (ppppbVar19 != (byte ****)0x0) goto LAB_0d403894;
            uStack_3a0 = 0xd4038b9;
            (*(code *)(*pppppbVar5)[2])(pppppbVar5);
            uStack_3a0 = 0xd4038c1;
            func_0x0412c2d0(pppppbVar5);
            bVar6 = *(byte *)(ppppppbVar23 + 1);
          }
          if ((bVar6 & 1) != 0) {
            uStack_3a0 = 0xd4038ac;
            thunk_FUN_0ee326a0(ppppppbVar23[3],(ulong)ppppppbVar23[1] & 0xfffffffffffffffe);
          }
          ppppppbVar23 = ppppppbVar23 + 7;
        } while (ppppppbVar23 != ppppppbVar36);
        ppppppbVar23 = *pppppppbStack_2c8;
        pppppppbVar18 = (byte *******)CONCAT35(uStack_373,CONCAT41(uStack_377,uStack_378));
        pppppppbVar32 = pppppppbStack_318;
      }
      pppppppbVar14 = pppppppbStack_2c0;
      ppppppbVar15[0x11] = (byte *****)pppppppbVar32;
      ppppppbVar15[0x12] = (byte *****)pppppppbVar18;
      pppppbVar5 = ppppppbVar15[0x13];
      ppppppbVar15[0x13] = (byte *****)ppppppbStack_370;
      if (ppppppbVar23 != (byte ******)0x0) {
        uStack_3a0 = 0xd40391b;
        thunk_FUN_0ee326a0(ppppppbVar23,(long)pppppbVar5 - (long)ppppppbVar23);
      }
    }
    ppppppbVar15[0x12] = (byte *****)pppppppbVar18;
    uVar9 = *(undefined4 *)ppppppbVar15;
    uVar10 = *(undefined4 *)((long)ppppppbVar15 + 4);
    uVar11 = *(undefined4 *)(ppppppbVar15 + 1);
    uVar12 = *(undefined4 *)((long)ppppppbVar15 + 0xc);
    if (ppppppbVar15[1] != (byte *****)0x0) {
      LOCK();
      pppppbVar5 = ppppppbVar15[1] + 1;
      *pppppbVar5 = (byte ****)((long)*pppppbVar5 + 1);
      UNLOCK();
    }
    ppppppbVar23 = pppppppbVar17[0xf];
    *(undefined4 *)(pppppppbVar17 + 0xe) = uVar9;
    *(undefined4 *)((long)pppppppbVar17 + 0x74) = uVar10;
    *(undefined4 *)(pppppppbVar17 + 0xf) = uVar11;
    *(undefined4 *)((long)pppppppbVar17 + 0x7c) = uVar12;
    if (ppppppbVar23 != (byte ******)0x0) {
      LOCK();
      ppppppbVar36 = ppppppbVar23 + 1;
      pppppbVar5 = *ppppppbVar36;
      *ppppppbVar36 = (byte *****)((long)*ppppppbVar36 + -1);
      UNLOCK();
      if (pppppbVar5 == (byte *****)0x0) {
        uStack_3a0 = 0xd40395d;
        (*(code *)(*ppppppbVar23)[2])(ppppppbVar23);
        uStack_3a0 = 0xd403965;
        func_0x0412c2d0(ppppppbVar23);
      }
    }
    pppppppbVar18 = pppppppbStack_390;
    *(undefined1 *)(pppppppbVar17 + 0x10) = *(undefined1 *)((long)ppppppbVar15 + 0xa1);
    LOCK();
    ppppppbVar15 = *pppppppbStack_320;
    *pppppppbStack_320 = (byte ******)((long)*pppppppbStack_320 + -1);
    UNLOCK();
    if (ppppppbVar15 == (byte ******)0x0) {
      uStack_3a0 = 0xd403b9a;
      (*(code *)(*pppppppbStack_390)[2])(pppppppbStack_390);
      uStack_3a0 = 0xd403ba2;
      func_0x0412c2d0(pppppppbVar18);
      LOCK();
      ppppppbVar15 = *pppppppbVar14;
      *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
      UNLOCK();
      if (ppppppbVar15 != (byte ******)0x0) goto LAB_0d4039a3;
LAB_0d403bb1:
      uStack_3a0 = 0xd403bba;
      (*(code *)(*pppppppbVar17)[2])(pppppppbVar17);
      uStack_3a0 = 0xd403bc2;
      func_0x0412c2d0(pppppppbVar17);
      LOCK();
      ppppppbVar15 = *pppppppbVar14;
      *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
      UNLOCK();
    }
    else {
      LOCK();
      ppppppbVar15 = *pppppppbVar14;
      *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
      UNLOCK();
      if (ppppppbVar15 == (byte ******)0x0) goto LAB_0d403bb1;
LAB_0d4039a3:
      LOCK();
      ppppppbVar15 = *pppppppbVar14;
      *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
      UNLOCK();
    }
    if (ppppppbVar15 == (byte ******)0x0) {
      uStack_3a0 = 0xd403be1;
      (*(code *)(*pppppppbVar17)[2])(pppppppbVar17);
      uStack_3a0 = 0xd403be9;
      func_0x0412c2d0(pppppppbVar17);
    }
    if (lStack_78 != 0) {
      uStack_3a0 = 0xd4039d1;
      (**(code **)(lStack_78 + 8))(&lStack_78);
    }
    if (ppppppbStack_2b8 != (byte ******)0x0) {
      uStack_3a0 = 0xd4039e9;
      (*(code *)ppppppbStack_2b8[1])(&ppppppbStack_2b8);
    }
    if ((bStack_340 & 1) != 0) {
      uStack_3a0 = 0xd403a03;
      thunk_FUN_0ee326a0(uStack_330,
                         CONCAT26(uStack_33a,CONCAT51(uStack_33f,bStack_340)) & 0xfffffffffffffffe);
    }
    uStack_332 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    bStack_340 = 0x1a;
    uStack_33f = 0x72746e6563;
    uStack_33a = 0x6c61;
    uStack_338 = 0x5f;
    uStack_337 = 0x6b636f6c62;
    uStack_348 = 0xab644d524b4c7442;
    uStack_b0 = 0;
    uStack_300 = 0;
    lStack_b8 = 0;
    ppppppbStack_308 = (byte ******)&UNK_0f46f650;
    uStack_3a0 = 0xd403a87;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (plVar20 == (long *)0x0) {
      uStack_3a0 = 0xd404c3a;
      func_0x0eec74c0(0x1b0,0);
    }
    pppppppbStack_388 = (byte *******)ppppppbStack_308;
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&UNK_0f468b00;
    uStack_380 = 0;
    uStack_37f = 0;
    ppppppbStack_308 = (byte ******)0x0;
    plVar20[4] = (long)&UNK_0f2ccd78;
    plVar20[5] = 0;
    plVar20[6] = 0;
    plVar20[7] = 0;
    plVar20[8] = 0;
    plVar20[9] = 0;
    plVar20[10] = 0;
    plVar20[0xb] = 0;
    plVar20[0xc] = 0;
    *(undefined1 *)(plVar20 + 0xd) = 0;
    uStack_3a0 = 0xd403afc;
    FUN_04aa75f0(plVar20 + 0xe,&uStack_391,&UNK_01254d89);
    *(undefined1 *)(plVar20 + 0x10) = 0;
    plVar20[0x11] = 0;
    plVar20[0x12] = 0;
    plVar20[0x13] = 0;
    plVar20[0x14] = 0;
    plVar20[0x15] = 0;
    plVar20[0x16] = 0;
    plVar20[0x17] = 0xffffffff;
    plVar20[0x26] = 0;
    plVar20[0x27] = 0;
    plVar20[0x18] = 0;
    plVar20[0x19] = 0;
    plVar20[0x1a] = 0;
    plVar20[0x1b] = 0;
    plVar20[0x1c] = 0;
    plVar20[0x1d] = 0;
    plVar20[0x1e] = 0;
    plVar20[0x1f] = 0;
    plVar20[4] = (long)&UNK_0f468b50;
    plVar20[0x2e] = 0;
    plVar20[0x2f] = 0;
    if (pppppppbStack_388 == (byte *******)0x0) {
      pppppppbVar14 = (byte *******)0x0;
    }
    else {
      uStack_3a0 = 0xd403b85;
      (*(code *)*pppppppbStack_388)(&pppppppbStack_388,plVar20 + 0x2e);
      pppppppbVar14 = pppppppbStack_388;
    }
    plVar38 = plVar20 + 1;
    plVar20[0x2e] = (long)pppppppbVar14;
    if (ppppppbStack_308 != (byte ******)0x0) {
      uStack_3a0 = 0xd403c20;
      (*(code *)ppppppbStack_308[1])(&ppppppbStack_308);
    }
    LOCK();
    *plVar38 = *plVar38 + 1;
    UNLOCK();
    uStack_3a0 = 0xd403c3f;
    pppppppbStack_390 = (byte *******)plVar38;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar21 == (undefined8 *)0x0) {
      uStack_3a0 = 0xd404c4b;
      func_0x0eec74c0(0x80,0);
    }
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = &UNK_0f468c30;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar21[4] = &UNK_0f468c80;
    puVar21[0xe] = plVar20 + 4;
    puVar21[0xf] = plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    uStack_380 = SUB81(puVar21,0);
    uStack_37f = (undefined7)((ulong)puVar21 >> 8);
    uStack_3a0 = 0xd403ca9;
    pppppppbStack_388 = (byte *******)(puVar21 + 4);
    puVar16 = (undefined4 *)func_0x04fc77e0(uStack_310,&uStack_348,0);
    plVar38 = plVar20 + 0x11;
    plVar22 = *(long **)(puVar16 + 0x24);
    if (plVar22 < *(long **)(puVar16 + 0x26)) {
      plVar22[2] = 0;
      plVar22[3] = 0;
      *plVar22 = 0;
      plVar22[1] = 0;
      plVar22[4] = 0;
      if (plVar22 == plVar38) {
LAB_0d403cfd:
        *plVar22 = *plVar38;
        plVar22[5] = (long)(puVar21 + 4);
        plVar22[6] = (long)puVar21;
LAB_0d403d6b:
        LOCK();
        puVar21[1] = puVar21[1] + 1;
        UNLOCK();
      }
      else {
        if ((*(byte *)(plVar20 + 0x12) & 1) == 0) {
          plVar22[3] = plVar20[0x14];
          lVar26 = plVar20[0x13];
          plVar22[1] = plVar20[0x12];
          plVar22[2] = lVar26;
          goto LAB_0d403cfd;
        }
        uStack_3a0 = 0xd403d4a;
        func_0x04885070(plVar22 + 1,plVar20[0x14],plVar20[0x13]);
        *plVar22 = *plVar38;
        puVar21 = (undefined8 *)CONCAT71(uStack_37f,uStack_380);
        plVar22[5] = (long)pppppppbStack_388;
        plVar22[6] = CONCAT71(uStack_37f,uStack_380);
        if (puVar21 != (undefined8 *)0x0) goto LAB_0d403d6b;
      }
      plVar22 = plVar22 + 7;
      *(long **)(puVar16 + 0x24) = plVar22;
    }
    else {
      uStack_3a0 = 0xd403d27;
      plVar22 = (long *)func_0x04fcaee0(puVar16 + 0x22,plVar38,&pppppppbStack_388);
    }
    pppppppbVar14 = pppppppbStack_390;
    *(long **)(puVar16 + 0x24) = plVar22;
    uVar9 = *puVar16;
    uVar10 = puVar16[1];
    uVar11 = puVar16[2];
    uVar12 = puVar16[3];
    if (*(long *)(puVar16 + 2) != 0) {
      LOCK();
      plVar38 = (long *)(*(long *)(puVar16 + 2) + 8);
      *plVar38 = *plVar38 + 1;
      UNLOCK();
    }
    plVar38 = (long *)plVar20[0xf];
    *(undefined4 *)(plVar20 + 0xe) = uVar9;
    *(undefined4 *)((long)plVar20 + 0x74) = uVar10;
    *(undefined4 *)(plVar20 + 0xf) = uVar11;
    *(undefined4 *)((long)plVar20 + 0x7c) = uVar12;
    if (plVar38 != (long *)0x0) {
      LOCK();
      plVar22 = plVar38 + 1;
      lVar26 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        uStack_3a0 = 0xd403dbe;
        (**(code **)(*plVar38 + 0x10))(plVar38);
        uStack_3a0 = 0xd403dc6;
        func_0x0412c2d0(plVar38);
      }
    }
    *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
    plVar38 = (long *)CONCAT71(uStack_37f,uStack_380);
    if (plVar38 != (long *)0x0) {
      LOCK();
      plVar22 = plVar38 + 1;
      lVar26 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        uStack_3a0 = 0xd403dfa;
        (**(code **)(*plVar38 + 0x10))(plVar38);
        uStack_3a0 = 0xd403e02;
        func_0x0412c2d0(plVar38);
      }
    }
    LOCK();
    lVar26 = (long)*pppppppbVar14;
    *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
    UNLOCK();
    if (lVar26 == 0) {
      uStack_3a0 = 0xd40400c;
      (**(code **)(*plVar20 + 0x10))(plVar20);
      uStack_3a0 = 0xd404014;
      func_0x0412c2d0(plVar20);
      LOCK();
      lVar26 = (long)*pppppppbVar14;
      *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
      UNLOCK();
    }
    else {
      LOCK();
      lVar26 = (long)*pppppppbVar14;
      *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
      UNLOCK();
    }
    if (lVar26 == 0) {
      uStack_3a0 = 0xd40402c;
      (**(code **)(*plVar20 + 0x10))(plVar20);
      uStack_3a0 = 0xd404034;
      func_0x0412c2d0(plVar20);
    }
    if (lStack_b8 != 0) {
      uStack_3a0 = 0xd403e46;
      (**(code **)(lStack_b8 + 8))(&lStack_b8);
    }
    if ((bStack_340 & 1) != 0) {
      uStack_3a0 = 0xd403e60;
      thunk_FUN_0ee326a0(uStack_330,
                         CONCAT26(uStack_33a,CONCAT51(uStack_33f,bStack_340)) & 0xfffffffffffffffe);
    }
    uStack_338 = 0;
    uStack_337 = 0;
    uStack_332 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    bStack_340 = 0;
    uStack_33f = 0;
    uStack_33a = 0;
    uStack_328 = 0;
    uStack_3a0 = 0xd403e8c;
    func_0x0412f5e0(&bStack_340,&UNK_01219d49,0x1e);
    uStack_348 = 0xa1da27d8e2d05aad;
    uStack_f0 = 0;
    uStack_300 = 0;
    lStack_f8 = 0;
    ppppppbStack_308 = (byte ******)&UNK_0f46f668;
    uStack_3a0 = 0xd403edf;
    pppppppbVar14 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (pppppppbVar14 == (byte *******)0x0) {
      uStack_3a0 = 0xd404c5c;
      func_0x0eec74c0(0x1c0,0);
    }
    pppppppbStack_388 = (byte *******)ppppppbStack_308;
    pppppppbVar14[1] = (byte ******)0x0;
    pppppppbVar14[2] = (byte ******)0x0;
    *pppppppbVar14 = (byte ******)&UNK_0f468ce0;
    uStack_380 = 0;
    uStack_37f = 0;
    ppppppbStack_308 = (byte ******)0x0;
    pppppppbVar14[4] = (byte ******)&UNK_0f2ccd78;
    pppppppbVar14[5] = (byte ******)0x0;
    pppppppbVar14[6] = (byte ******)0x0;
    pppppppbVar14[7] = (byte ******)0x0;
    pppppppbVar14[8] = (byte ******)0x0;
    pppppppbVar14[9] = (byte ******)0x0;
    pppppppbVar14[10] = (byte ******)0x0;
    pppppppbVar14[0xb] = (byte ******)0x0;
    pppppppbVar14[0xc] = (byte ******)0x0;
    *(undefined1 *)(pppppppbVar14 + 0xd) = 0;
    uStack_3a0 = 0xd403f57;
    FUN_04aa75f0(pppppppbVar14 + 0xe,&uStack_391,&UNK_01254d89);
    *(undefined1 *)(pppppppbVar14 + 0x10) = 0;
    pppppppbVar18 = pppppppbVar14 + 0x11;
    pppppppbVar14[0x11] = (byte ******)0x0;
    pppppppbVar14[0x12] = (byte ******)0x0;
    pppppppbVar14[0x13] = (byte ******)0x0;
    pppppppbVar14[0x14] = (byte ******)0x0;
    pppppppbVar14[0x15] = (byte ******)0x0;
    pppppppbVar14[0x16] = (byte ******)0x0;
    pppppppbVar14[0x17] = (byte ******)0xffffffff;
    pppppppbVar14[0x26] = (byte ******)0x0;
    pppppppbVar14[0x27] = (byte ******)0x0;
    pppppppbVar14[0x18] = (byte ******)0x0;
    pppppppbVar14[0x19] = (byte ******)0x0;
    pppppppbVar14[0x1a] = (byte ******)0x0;
    pppppppbVar14[0x1b] = (byte ******)0x0;
    pppppppbVar14[0x1c] = (byte ******)0x0;
    pppppppbVar14[0x1d] = (byte ******)0x0;
    pppppppbVar14[0x1e] = (byte ******)0x0;
    pppppppbVar14[0x1f] = (byte ******)0x0;
    pppppppbVar14[4] = (byte ******)&UNK_0f468d30;
    pppppppbVar14[0x2e] = _DAT_014eae60;
    *(undefined1 *)(pppppppbVar14 + 0x2f) = 1;
    pppppppbVar14[0x30] = (byte ******)0x0;
    pppppppbVar14[0x31] = (byte ******)0x0;
    if (pppppppbStack_388 == (byte *******)0x0) {
      pppppppbVar17 = (byte *******)0x0;
    }
    else {
      uStack_3a0 = 0xd403ffc;
      (*(code *)*pppppppbStack_388)(&pppppppbStack_388,pppppppbVar14 + 0x30);
      pppppppbVar17 = pppppppbStack_388;
    }
    pppppppbStack_388 = (byte *******)0x0;
    pppppppbVar14[0x30] = (byte ******)pppppppbVar17;
    pppppppbVar32 = pppppppbVar14 + 0x12;
    if (pppppppbVar18 == (byte *******)&DAT_0f552018) {
      pppppppbVar14[0x15] = (byte ******)0x0;
    }
    else {
      if (((ulong)*pppppppbVar32 & 1) == 0) {
        if ((_DAT_0f552020 & 1) == 0) {
          pppppppbVar14[0x14] = _DAT_0f552030;
          uVar11 = uRam000000000f55202c;
          uVar10 = _DAT_0f552028;
          uVar9 = uRam000000000f552024;
          *(uint *)pppppppbVar32 = _DAT_0f552020;
          *(undefined4 *)((long)pppppppbVar14 + 0x94) = uVar9;
          *(undefined4 *)(pppppppbVar14 + 0x13) = uVar10;
          *(undefined4 *)((long)pppppppbVar14 + 0x9c) = uVar11;
        }
        else {
          uStack_3a0 = 0xd4040e8;
          func_0x04885070(pppppppbVar32,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
        }
      }
      else {
        bVar39 = (_DAT_0f552020 & 1) != 0;
        ppppppbVar15 = (byte ******)0xf552021;
        if (bVar39) {
          ppppppbVar15 = _DAT_0f552030;
        }
        uVar27 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
        if (bVar39) {
          uVar27 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
        }
        uStack_3a0 = 0xd4040d0;
        func_0x04885120(pppppppbVar32,ppppppbVar15,uVar27);
      }
      pppppppbVar14[0x11] = _DAT_0f552018;
      pppppppbVar14[0x15] = (byte ******)0x0;
      if (pppppppbStack_388 != (byte *******)0x0) {
        uStack_3a0 = 0xd404113;
        (*(code *)pppppppbStack_388[1])(&pppppppbStack_388);
      }
    }
    pppppppbVar17 = pppppppbVar14 + 1;
    pppppppbStack_390 = pppppppbVar18;
    if (ppppppbStack_308 != (byte ******)0x0) {
      uStack_3a0 = 0xd404134;
      (*(code *)ppppppbStack_308[1])(&ppppppbStack_308);
    }
    LOCK();
    *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + 1);
    UNLOCK();
    uStack_3a0 = 0xd404153;
    pppppppbStack_320 = pppppppbVar32;
    ppppppbVar23 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (ppppppbVar23 == (byte ******)0x0) {
      uStack_3a0 = 0xd404c6d;
      func_0x0eec74c0(0x80,0);
    }
    ppppppbVar23[1] = (byte *****)0x0;
    ppppppbVar23[2] = (byte *****)0x0;
    *ppppppbVar23 = (byte *****)&UNK_0f468e10;
    ppppppbVar23[6] = (byte *****)0x0;
    ppppppbVar23[7] = (byte *****)0x0;
    ppppppbVar23[4] = (byte *****)&UNK_0f468e60;
    ppppppbVar23[0xe] = (byte *****)(pppppppbVar14 + 4);
    ppppppbVar23[0xf] = (byte *****)pppppppbVar14;
    LOCK();
    pppppppbVar14[1] = (byte ******)((long)pppppppbVar14[1] + 1);
    UNLOCK();
    pppppppbVar37 = (byte *******)(ppppppbVar23 + 4);
    uStack_380 = SUB81(ppppppbVar23,0);
    uStack_37f = (undefined7)((ulong)ppppppbVar23 >> 8);
    uStack_3a0 = 0xd4041b9;
    pppppppbStack_388 = pppppppbVar37;
    ppppppbVar15 = (byte ******)func_0x04fc77e0(uStack_310,&uStack_348,0);
    pppppppbVar18 = (byte *******)ppppppbVar15[0x12];
    if (pppppppbVar18 < ppppppbVar15[0x13]) {
      pppppppbVar18[2] = (byte ******)0x0;
      pppppppbVar18[3] = (byte ******)0x0;
      *pppppppbVar18 = (byte ******)0x0;
      pppppppbVar18[1] = (byte ******)0x0;
      pppppppbVar18[4] = (byte ******)0x0;
      if (pppppppbVar18 == pppppppbStack_390) {
LAB_0d404201:
        *pppppppbVar18 = *pppppppbStack_390;
        pppppppbVar18[5] = (byte ******)pppppppbVar37;
        pppppppbVar18[6] = ppppppbVar23;
        pppppppbVar32 = pppppppbVar37;
LAB_0d404268:
        LOCK();
        ppppppbVar23[1] = (byte *****)((long)ppppppbVar23[1] + 1);
        UNLOCK();
      }
      else {
        pppppppbVar32 = pppppppbVar18 + 1;
        if (((ulong)*pppppppbStack_320 & 1) == 0) {
          pppppppbVar18[3] = pppppppbStack_320[2];
          ppppppbVar36 = pppppppbStack_320[1];
          *pppppppbVar32 = *pppppppbStack_320;
          pppppppbVar18[2] = ppppppbVar36;
          goto LAB_0d404201;
        }
        uStack_3a0 = 0xd40424a;
        func_0x04885070(pppppppbVar32,pppppppbVar14[0x14],pppppppbVar14[0x13]);
        *pppppppbVar18 = *pppppppbStack_390;
        ppppppbVar23 = (byte ******)CONCAT71(uStack_37f,uStack_380);
        pppppppbVar18[5] = (byte ******)pppppppbStack_388;
        pppppppbVar18[6] = (byte ******)CONCAT71(uStack_37f,uStack_380);
        if (ppppppbVar23 != (byte ******)0x0) goto LAB_0d404268;
      }
      pppppppbVar18 = pppppppbVar18 + 7;
      ppppppbVar15[0x12] = (byte *****)pppppppbVar18;
      pppppppbVar37 = pppppppbVar32;
    }
    else {
      uStack_3a0 = 0xd40422f;
      pppppppbVar18 =
           (byte *******)func_0x04fcaee0(ppppppbVar15 + 0x11,pppppppbStack_390,&pppppppbStack_388);
    }
    ppppppbVar15[0x12] = (byte *****)pppppppbVar18;
    uVar9 = *(undefined4 *)ppppppbVar15;
    uVar10 = *(undefined4 *)((long)ppppppbVar15 + 4);
    uVar11 = *(undefined4 *)(ppppppbVar15 + 1);
    uVar12 = *(undefined4 *)((long)ppppppbVar15 + 0xc);
    if (ppppppbVar15[1] != (byte *****)0x0) {
      LOCK();
      pppppbVar5 = ppppppbVar15[1] + 1;
      *pppppbVar5 = (byte ****)((long)*pppppbVar5 + 1);
      UNLOCK();
    }
    ppppppbVar23 = pppppppbVar14[0xf];
    *(undefined4 *)(pppppppbVar14 + 0xe) = uVar9;
    *(undefined4 *)((long)pppppppbVar14 + 0x74) = uVar10;
    *(undefined4 *)(pppppppbVar14 + 0xf) = uVar11;
    *(undefined4 *)((long)pppppppbVar14 + 0x7c) = uVar12;
    if (ppppppbVar23 != (byte ******)0x0) {
      LOCK();
      ppppppbVar36 = ppppppbVar23 + 1;
      pppppbVar5 = *ppppppbVar36;
      *ppppppbVar36 = (byte *****)((long)*ppppppbVar36 + -1);
      UNLOCK();
      if (pppppbVar5 == (byte *****)0x0) {
        uStack_3a0 = 0xd4042bb;
        (*(code *)(*ppppppbVar23)[2])(ppppppbVar23);
        uStack_3a0 = 0xd4042c3;
        func_0x0412c2d0(ppppppbVar23);
      }
    }
    *(undefined1 *)(pppppppbVar14 + 0x10) = *(undefined1 *)((long)ppppppbVar15 + 0xa1);
    plVar20 = (long *)CONCAT71(uStack_37f,uStack_380);
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar38 = plVar20 + 1;
      lVar26 = *plVar38;
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        uStack_3a0 = 0xd4042f6;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        uStack_3a0 = 0xd4042fe;
        func_0x0412c2d0(plVar20);
      }
    }
    uVar33 = uStack_310;
    LOCK();
    ppppppbVar23 = *pppppppbVar17;
    *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
    UNLOCK();
    if (ppppppbVar23 == (byte ******)0x0) {
      uStack_3a0 = 0xd404869;
      (*(code *)(*pppppppbVar14)[2])(pppppppbVar14);
      uStack_3a0 = 0xd404871;
      func_0x0412c2d0(pppppppbVar14);
      LOCK();
      ppppppbVar23 = *pppppppbVar17;
      *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
      UNLOCK();
    }
    else {
      LOCK();
      ppppppbVar23 = *pppppppbVar17;
      *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
      UNLOCK();
    }
    if (ppppppbVar23 == (byte ******)0x0) {
      uStack_3a0 = 0xd404888;
      (*(code *)(*pppppppbVar14)[2])(pppppppbVar14);
      uStack_3a0 = 0xd404890;
      func_0x0412c2d0(pppppppbVar14);
    }
    pppppppbVar14[0x2e] = _DAT_014e9660;
    if (lStack_f8 != 0) {
      uStack_3a0 = 0xd404359;
      (**(code **)(lStack_f8 + 8))(&lStack_f8);
    }
    if ((bStack_340 & 1) != 0) {
      uStack_3a0 = 0xd404373;
      thunk_FUN_0ee326a0(uStack_330,
                         CONCAT26(uStack_33a,CONCAT51(uStack_33f,bStack_340)) & 0xfffffffffffffffe);
    }
    uStack_373 = 0;
    ppppppbStack_370 = (byte ******)0x0;
    pppppppbStack_368 = (byte *******)0x0;
    uStack_380 = 0x18;
    uStack_37f = 0x5f726f73727563;
    uStack_378 = 99;
    uStack_377 = 0x746e756f;
    pppppppbStack_388 = (byte *******)0xbb7127d85fbd7b97;
    uStack_170 = 0;
    puStack_178 = &UNK_0f46f680;
    pppppppbVar32 = (byte *******)&pppppppbStack_388;
    ppuVar28 = &puStack_178;
    puVar31 = &uStack_3a0;
    uStack_3a0 = 0xd4043db;
    uVar24 = uVar33;
  }
  else {
    pppppppbVar37 = (byte *******)((long)ppppppbVar36 - (long)ppppppbVar23);
    pppppppbVar32 = (byte *******)0xcf3cf3cf3cf3cf3d;
    ppppppbVar15 = (byte ******)(((long)pppppppbVar37 >> 3) * -0x30c30c30c30c30c3 + 1);
    if (ppppppbVar15 < (byte ******)0x186186186186187) {
      pppppppbVar34 = pppppppbVar14 + 0x1b;
      lVar26 = (long)pppppppbVar14[0x1d] - (long)ppppppbVar23 >> 3;
      ppppppbVar23 = (byte ******)(lVar26 * -0x6186186186186186);
      if (ppppppbVar15 < ppppppbVar23) {
        ppppppbVar15 = ppppppbVar23;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar26 * -0x30c30c30c30c30c3)) {
        ppppppbVar15 = (byte ******)0x186186186186186;
      }
      pppppppbStack_368 = pppppppbVar34;
      if (ppppppbVar15 == (byte ******)0x0) {
        ppppppbVar23 = (byte ******)0x0;
LAB_0d40335b:
        pbVar35 = (byte *)((long)pppppppbVar37 + (long)ppppppbVar23);
        uStack_378 = SUB81(pbVar35,0);
        uStack_377 = (undefined4)((ulong)pbVar35 >> 8);
        uStack_373 = (undefined3)((ulong)pbVar35 >> 0x28);
        uStack_37f = (undefined7)((ulong)pbVar35 >> 8);
        ppppppbStack_370 = ppppppbVar23 + (long)ppppppbVar15 * 0x15;
        uStack_3a0 = 0xd40338c;
        pppppppbStack_388 = (byte *******)ppppppbVar23;
        uStack_380 = uStack_378;
        pppppppbStack_318 = pppppppbVar34;
        func_0x0d4731a0(pbVar35);
        ppppppbVar36 = (byte ******)(CONCAT35(uStack_373,CONCAT41(uStack_377,uStack_378)) + 0xa8);
        ppppppbVar15 = pppppppbVar14[0x1b];
        ppppppbVar23 = pppppppbVar14[0x1c];
        ppppppbVar29 = (byte ******)
                       ((long)ppppppbVar15 + (CONCAT71(uStack_37f,uStack_380) - (long)ppppppbVar23))
        ;
        if (ppppppbVar15 != ppppppbVar23) {
          lVar26 = 0;
          pppppppbStack_2c8 = pppppppbVar17;
          do {
            uVar24 = ((undefined8 *)((long)ppppppbVar15 + lVar26))[1];
            *(undefined8 *)((long)ppppppbVar29 + lVar26) =
                 *(undefined8 *)((long)ppppppbVar15 + lVar26);
            ((undefined8 *)((long)ppppppbVar29 + lVar26))[1] = uVar24;
            *(undefined8 *)((long)ppppppbVar15 + lVar26) = 0;
            ((undefined8 *)((long)ppppppbVar15 + lVar26))[1] = 0;
            puVar21 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x20);
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x10);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)((long)ppppppbVar29 + lVar26 + 0x30) = 0;
            *(undefined8 *)((long)ppppppbVar29 + lVar26 + 0x28) =
                 *(undefined8 *)((long)ppppppbVar15 + lVar26 + 0x28);
            puVar16 = (undefined4 *)((long)ppppppbVar15 + lVar26 + 0x18);
            uVar9 = puVar16[1];
            uVar10 = puVar16[2];
            uVar11 = puVar16[3];
            puVar4 = (undefined4 *)((long)ppppppbVar29 + lVar26 + 0x18);
            *puVar4 = *puVar16;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            *(undefined2 *)((long)ppppppbVar15 + lVar26 + 0x18) = 0;
            *(undefined8 *)((long)ppppppbVar29 + lVar26 + 0x10) =
                 *(undefined8 *)((long)ppppppbVar15 + lVar26 + 0x10);
            uStack_3a0 = 0xd403436;
            func_0x04167a20((long)ppppppbVar29 + lVar26 + 0x38,(long)ppppppbVar15 + lVar26 + 0x38);
            puVar21 = (undefined8 *)((long)ppppppbVar15 + lVar26 + 0x40);
            uVar24 = puVar21[1];
            puVar25 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x40);
            *puVar25 = *puVar21;
            puVar25[1] = uVar24;
            puVar21 = (undefined8 *)((long)ppppppbVar15 + lVar26 + 0x50);
            uVar24 = puVar21[1];
            puVar25 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x50);
            *puVar25 = *puVar21;
            puVar25[1] = uVar24;
            puVar21 = (undefined8 *)((long)ppppppbVar15 + lVar26 + 0x60);
            uVar24 = puVar21[1];
            puVar25 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x60);
            *puVar25 = *puVar21;
            puVar25[1] = uVar24;
            puVar21 = (undefined8 *)((long)ppppppbVar15 + lVar26 + 0x60);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)((long)ppppppbVar29 + lVar26 + 0x70) =
                 *(undefined8 *)((long)ppppppbVar15 + lVar26 + 0x70);
            puVar21 = (undefined8 *)((long)ppppppbVar15 + lVar26 + 0x78);
            uVar24 = puVar21[1];
            puVar25 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x78);
            *puVar25 = *puVar21;
            puVar25[1] = uVar24;
            puVar21 = (undefined8 *)((long)ppppppbVar29 + lVar26 + 0x88);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)((long)ppppppbVar29 + lVar26 + 0x98) = 0;
            puVar16 = (undefined4 *)((long)ppppppbVar15 + lVar26 + 0x88);
            uVar9 = puVar16[1];
            uVar10 = puVar16[2];
            uVar11 = puVar16[3];
            puVar4 = (undefined4 *)((long)ppppppbVar29 + lVar26 + 0x88);
            *puVar4 = *puVar16;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            *(undefined8 *)((long)ppppppbVar29 + lVar26 + 0x98) =
                 *(undefined8 *)((long)ppppppbVar15 + lVar26 + 0x98);
            puVar21 = (undefined8 *)((long)ppppppbVar15 + lVar26 + 0x88);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)((long)ppppppbVar15 + lVar26 + 0x98) = 0;
            *(undefined2 *)((long)ppppppbVar29 + lVar26 + 0xa0) =
                 *(undefined2 *)((long)ppppppbVar15 + lVar26 + 0xa0);
            lVar8 = lVar26 + 0xa8;
            lVar26 = lVar26 + 0xa8;
          } while ((byte ******)((long)ppppppbVar15 + lVar8) != ppppppbVar23);
          do {
            uStack_3a0 = 0xd403508;
            func_0x0d473320(ppppppbVar15);
            ppppppbVar15 = ppppppbVar15 + 0x15;
          } while (ppppppbVar15 != ppppppbVar23);
          ppppppbVar15 = *pppppppbStack_318;
          pppppppbVar17 = pppppppbStack_2c8;
        }
        pppppppbVar14[0x1b] = ppppppbVar29;
        pppppppbVar14[0x1c] = ppppppbVar36;
        ppppppbVar23 = pppppppbVar14[0x1d];
        pppppppbVar14[0x1d] = ppppppbStack_370;
        if (ppppppbVar15 != (byte ******)0x0) {
          uStack_3a0 = 0xd403558;
          thunk_FUN_0ee326a0(ppppppbVar15,(long)ppppppbVar23 - (long)ppppppbVar15);
        }
        goto LAB_0d403558;
      }
      if (ppppppbVar15 < (byte ******)0x186186186186187) {
        uStack_3a0 = 0xd403346;
        ppppppbVar23 = (byte ******)
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)ppppppbVar15 * 0xa8);
        if (ppppppbVar23 == (byte ******)0x0) {
          uStack_3a0 = 0xd403355;
          func_0x0eec74c0((long)ppppppbVar15 * 0xa8,0);
          ppppppbVar23 = (byte ******)0x0;
        }
        goto LAB_0d40335b;
      }
LAB_0d404c94:
      uStack_3a0 = 0xd404c99;
      func_0x04882eb0();
LAB_0d404c99:
      uStack_3a0 = 0xd404c9e;
      func_0x0d473540();
    }
    uStack_3a0 = 0xd404ca3;
    uVar24 = func_0x0d473310();
    if (((ulong)*pppppppbVar37 & 1) != 0) {
      pppppppbVar32 = (byte *******)((ulong)pppppppbVar18[1] & 0xfffffffffffffffe);
      uStack_3a0 = 0xd404cbe;
      thunk_FUN_0ee326a0(pppppppbVar18[3],pppppppbVar32);
    }
    ppppppbVar15[0x12] = (byte *****)pppppppbVar18;
    uStack_3a0 = 0xd405148;
    func_0x04fc6190(&pppppppbStack_388);
    LOCK();
    ppppppbVar23 = *pppppppbVar17;
    *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
    UNLOCK();
    if (ppppppbVar23 == (byte ******)0x0) {
      uStack_3a0 = 0xd405169;
      (*(code *)(*pppppppbVar14)[2])(pppppppbVar14);
      uStack_3a0 = 0xd405171;
      func_0x0412c2d0(pppppppbVar14);
    }
    LOCK();
    ppppppbVar23 = *pppppppbVar17;
    *pppppppbVar17 = (byte ******)((long)*pppppppbVar17 + -1);
    UNLOCK();
    if (ppppppbVar23 == (byte ******)0x0) {
      uStack_3a0 = 0xd405184;
      (*(code *)(*pppppppbVar14)[2])(pppppppbVar14);
      uStack_3a0 = 0xd40518c;
      func_0x0412c2d0(pppppppbVar14);
    }
    if (alStack_138[0] != 0) {
      uStack_3a0 = 0xd40535e;
      (**(code **)(alStack_138[0] + 8))(alStack_138);
    }
    if ((bStack_340 & 1) != 0) {
      pppppppbVar32 =
           (byte *******)(CONCAT26(uStack_33a,CONCAT51(uStack_33f,bStack_340)) & 0xfffffffffffffffe)
      ;
      uStack_3a0 = 0xd405378;
      thunk_FUN_0ee326a0(uStack_330,pppppppbVar32);
    }
    uStack_3a0 = 0xd405380;
    uVar33 = uVar24;
    func_0x0eee2d70(uVar24);
    ppuVar28 = extraout_RDX;
  }
  *(byte *******)((long)puVar31 + -8) = ppppppbVar15;
  *(byte ********)((long)puVar31 + -0x10) = pppppppbVar17;
  *(byte ********)((long)puVar31 + -0x18) = pppppppbVar14;
  *(byte ********)((long)puVar31 + -0x20) = pppppppbVar37;
  *(undefined8 *)((long)puVar31 + -0x28) = uVar24;
  *(byte *******)((long)puVar31 + -0x30) = ppppppbVar23;
  *(undefined8 *)((long)puVar31 + -0x78) = 0;
  *(undefined8 *)((long)puVar31 + -0x70) = 0;
  if ((undefined8 *)*ppuVar28 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
  }
  else {
    pcVar7 = *(code **)*ppuVar28;
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4053b4;
    (*pcVar7)(ppuVar28,(undefined1 *)((long)puVar31 + -0x78));
    puVar21 = (undefined8 *)*ppuVar28;
  }
  *ppuVar28 = (undefined *)0x0;
  *(undefined8 **)((long)puVar31 + -0x78) = puVar21;
  pcVar7 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4053de;
  plVar20 = (long *)(*pcVar7)(&DAT_0f5463b0,0x1c0);
  if (plVar20 == (long *)0x0) {
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd40582a;
    func_0x0eec74c0(0x1c0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f468ec0;
  *(undefined8 *)((long)puVar31 + -200) = 0;
  *(undefined8 *)((long)puVar31 + -0xc0) = 0;
  if (puVar21 == (undefined8 *)0x0) {
    uVar24 = 0;
  }
  else {
    pcVar7 = (code *)*puVar21;
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405416;
    (*pcVar7)((undefined1 *)((long)puVar31 + -0x78),(undefined1 *)((long)puVar31 + -200));
    uVar24 = *(undefined8 *)((long)puVar31 + -0x78);
  }
  *(undefined8 *)((long)puVar31 + -0x78) = 0;
  *(undefined8 *)((long)puVar31 + -200) = uVar24;
  plVar20[4] = (long)&UNK_0f2ccd78;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405464;
  FUN_04aa75f0(plVar20 + 0xe,(undefined1 *)((long)puVar31 + -0xd9),&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  *(long **)((long)puVar31 + -0xd8) = plVar20 + 0x11;
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = 0xffffffff;
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x18] = 0;
  plVar20[0x19] = 0;
  plVar20[0x1a] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[4] = (long)&UNK_0f468f10;
  plVar20[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar20 + 0x2f) = 1;
  plVar20[0x30] = 0;
  plVar20[0x31] = 0;
  if (*(undefined8 **)((long)puVar31 + -200) == (undefined8 *)0x0) {
    lVar26 = 0;
  }
  else {
    pcVar7 = (code *)**(undefined8 **)((long)puVar31 + -200);
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405503;
    (*pcVar7)((undefined1 *)((long)puVar31 + -200),plVar20 + 0x30);
    lVar26 = *(long *)((long)puVar31 + -200);
  }
  *(undefined8 *)((long)puVar31 + -200) = 0;
  plVar20[0x30] = lVar26;
  puVar3 = (uint *)(plVar20 + 0x12);
  *(uint **)((long)puVar31 + -0x80) = puVar3;
  if (*(undefined **)((long)puVar31 + -0xd8) == &DAT_0f552078) {
    plVar20[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552090;
        uVar11 = uRam000000000f55208c;
        uVar10 = _DAT_0f552088;
        uVar9 = uRam000000000f552084;
        *puVar3 = _DAT_0f552080;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar9;
        *(undefined4 *)(plVar20 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar11;
      }
      else {
        *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4055a5;
        func_0x04885070(puVar3,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar39 = (_DAT_0f552080 & 1) != 0;
      lVar26 = 0xf552081;
      if (bVar39) {
        lVar26 = _DAT_0f552090;
      }
      uVar27 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar39) {
        uVar27 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405590;
      func_0x04885120(puVar3,lVar26,uVar27);
    }
    lVar26 = *(long *)((long)puVar31 + -200);
    plVar20[0x11] = _DAT_0f552078;
    plVar20[0x15] = 0;
    if (lVar26 != 0) {
      pcVar7 = *(code **)(lVar26 + 8);
      *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4055d0;
      (*pcVar7)((undefined1 *)((long)puVar31 + -200));
    }
  }
  plVar38 = plVar20 + 1;
  if (*(long *)((long)puVar31 + -0x78) != 0) {
    pcVar7 = *(code **)(*(long *)((long)puVar31 + -0x78) + 8);
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4055e9;
    (*pcVar7)((undefined1 *)((long)puVar31 + -0x78));
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  pcVar7 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405603;
  puVar21 = (undefined8 *)(*pcVar7)(&DAT_0f5463b0,0x80);
  if (puVar21 == (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd40583b;
    func_0x0eec74c0(0x80,0);
  }
  puVar21[1] = 0;
  puVar21[2] = 0;
  *puVar21 = &UNK_0f468ff0;
  puVar21[6] = 0;
  puVar21[7] = 0;
  puVar21[4] = &UNK_0f469040;
  *(long **)((long)puVar31 + -0xd0) = plVar20 + 4;
  puVar21[0xe] = plVar20 + 4;
  puVar21[0xf] = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  *(undefined8 **)((long)puVar31 + -200) = puVar21 + 4;
  *(undefined8 **)((long)puVar31 + -0xc0) = puVar21;
  *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405663;
  puVar16 = (undefined4 *)func_0x04fc77e0(uVar33,pppppppbVar32,1);
  puVar25 = *(undefined8 **)(puVar16 + 0x24);
  pbVar35 = *(byte **)((long)puVar31 + -0x80);
  if (*(undefined8 **)(puVar16 + 0x26) <= puVar25) {
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4056e0;
    puVar25 = (undefined8 *)
              func_0x04fcaee0(puVar16 + 0x22,*(undefined8 *)((long)puVar31 + -0xd8),
                              (undefined1 *)((long)puVar31 + -200));
    uVar24 = *(undefined8 *)((long)puVar31 + -0xd0);
    goto LAB_0d405734;
  }
  puVar25[2] = 0;
  puVar25[3] = 0;
  *puVar25 = 0;
  puVar25[1] = 0;
  puVar25[4] = 0;
  if (puVar25 == *(undefined8 **)((long)puVar31 + -0xd8)) {
LAB_0d4056ad:
    *puVar25 = **(undefined8 **)((long)puVar31 + -0xd8);
    puVar25[5] = puVar21 + 4;
    puVar25[6] = puVar21;
    uVar24 = *(undefined8 *)((long)puVar31 + -0xd0);
LAB_0d405724:
    LOCK();
    puVar21[1] = puVar21[1] + 1;
    UNLOCK();
  }
  else {
    if ((*pbVar35 & 1) == 0) {
      puVar25[3] = *(undefined8 *)(pbVar35 + 0x10);
      uVar24 = *(undefined8 *)(pbVar35 + 8);
      puVar25[1] = *(undefined8 *)pbVar35;
      puVar25[2] = uVar24;
      goto LAB_0d4056ad;
    }
    lVar26 = plVar20[0x13];
    lVar8 = plVar20[0x14];
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405700;
    func_0x04885070(puVar25 + 1,lVar8,lVar26);
    *puVar25 = **(undefined8 **)((long)puVar31 + -0xd8);
    puVar21 = *(undefined8 **)((long)puVar31 + -0xc0);
    uVar24 = *(undefined8 *)((long)puVar31 + -0xc0);
    puVar25[5] = *(undefined8 *)((long)puVar31 + -200);
    puVar25[6] = uVar24;
    uVar24 = *(undefined8 *)((long)puVar31 + -0xd0);
    if (puVar21 != (undefined8 *)0x0) goto LAB_0d405724;
  }
  puVar25 = puVar25 + 7;
  *(undefined8 **)(puVar16 + 0x24) = puVar25;
LAB_0d405734:
  *(undefined8 **)(puVar16 + 0x24) = puVar25;
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar11 = puVar16[2];
  uVar12 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar10;
  *(undefined4 *)(plVar20 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar12;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar2 = plVar22 + 1;
    lVar26 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      pcVar7 = *(code **)(*plVar22 + 0x10);
      *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405776;
      (*pcVar7)(plVar22);
      *(undefined8 *)((long)puVar31 + -0xf0) = 0xd40577e;
      func_0x0412c2d0(plVar22);
    }
  }
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar22 = *(long **)((long)puVar31 + -0xc0);
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar2 = plVar22 + 1;
    lVar26 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      pcVar7 = *(code **)(*plVar22 + 0x10);
      *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4057b1;
      (*pcVar7)(plVar22);
      *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4057b9;
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar26 = *plVar38;
  *plVar38 = *plVar38 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    pcVar7 = *(code **)(*plVar20 + 0x10);
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd4057f9;
    (*pcVar7)(plVar20);
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405801;
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar26 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    pcVar7 = *(code **)(*plVar20 + 0x10);
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd405814;
    (*pcVar7)(plVar20);
    *(undefined8 *)((long)puVar31 + -0xf0) = 0xd40581c;
    func_0x0412c2d0(plVar20);
  }
  return uVar24;
}



/* ---- referenced strings ----
 * 0x1219d68  extra_growth_chance
 * 0x1494d5d  <any array element>
 */
