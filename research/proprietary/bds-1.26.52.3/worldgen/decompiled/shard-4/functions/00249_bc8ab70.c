/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbd8ab70 (ELF vaddr 0xbc8ab70)
 * Label: caller-of-callee
 * Body:  [[0bd8ab70, 0bd8b9be] [0bd8b9c0, 0bd8ba26] [0bd8ba30, 0bd8c145] [0bd8c150, 0bd8c18d] [0bd8c190, 0bd8cb66] [0bd8cb70, 0bd8cbd6] [0bd8cbe0, 0bd8d2f5] [0bd8d300, 0bd8d33d] [0bd8d340, 0bd8de12] [0bd8de20, 0bd8e405] [0bd8e410, 0bd8e44d] [0bd8e450, 0bd8e95d] [0bd8e960, 0bd8e9c0] [0bd8e9d0, 0bd8f0e5] [0bd8f0f0, 0bd8f12d] [0bd8f130, 0bd90c69] [0bd919d6, 0bd91a7e] [0bd92194, 0bd921b3]]
 * Ghidra: FUN_0bd8ab70
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bd8ab70(undefined8 param_1,undefined8 *param_2)

{
  uint *****pppppuVar1;
  uint *******pppppppuVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint ****ppppuVar6;
  byte bVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  uint *******pppppppuVar22;
  uint ******ppppppuVar23;
  uint *puVar24;
  uint *******pppppppuVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  undefined8 uVar28;
  long lVar29;
  uint *******pppppppuVar30;
  uint *******pppppppuVar31;
  uint *****pppppuVar32;
  long lVar33;
  uint ******ppppppuVar34;
  uint ******ppppppuVar35;
  long *plVar36;
  long *plVar37;
  ulong uVar38;
  uint ******ppppppuVar39;
  uint *******pppppppuVar40;
  uint *******pppppppuVar41;
  undefined1 *puVar42;
  uint ******ppppppuVar43;
  uint *******pppppppuVar44;
  ulong uVar45;
  long *plVar46;
  byte *pbVar47;
  undefined8 *puVar48;
  bool bVar49;
  uint *******pppppppuStack_850;
  uint ******ppppppuStack_848;
  uint uStack_840;
  undefined1 uStack_83c;
  undefined2 uStack_83b;
  undefined1 uStack_839;
  undefined1 uStack_838;
  undefined2 uStack_837;
  undefined1 uStack_835;
  undefined4 uStack_834;
  undefined1 uStack_830;
  undefined1 uStack_82f;
  undefined6 uStack_82e;
  uint *******pppppppuStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  uint *****pppppuStack_810;
  uint *******pppppppuStack_808;
  uint *******pppppppuStack_800;
  uint *******pppppppuStack_7f8;
  uint *******pppppppuStack_7f0;
  uint *******pppppppuStack_7e8;
  uint *******pppppppuStack_7e0;
  uint *******pppppppuStack_7d8;
  undefined1 auStack_7d0 [4];
  undefined1 uStack_7cc;
  undefined2 uStack_7cb;
  undefined1 uStack_7c9;
  undefined4 uStack_7c8;
  undefined1 uStack_7c4;
  undefined1 uStack_7c3;
  undefined2 uStack_7c2;
  undefined1 uStack_7c0;
  undefined5 uStack_7bf;
  undefined2 uStack_7ba;
  uint *******pppppppuStack_7b8;
  uint *******pppppppuStack_790;
  uint *******pppppppuStack_788;
  undefined1 uStack_779;
  uint *******pppppppuStack_778;
  uint *******pppppppuStack_770;
  uint *******pppppppuStack_768;
  undefined1 auStack_760 [4];
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined1 uStack_750;
  undefined1 uStack_74f;
  undefined6 uStack_74e;
  uint *******pppppppuStack_748;
  ulong uStack_728;
  undefined8 uStack_720;
  long lStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  undefined4 *puStack_700;
  ulong uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 *puStack_6e8;
  ulong uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 *puStack_6d0;
  uint *******pppppppuStack_6c8;
  long *plStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  uint ******ppppppuStack_6a8;
  byte bStack_6a0;
  undefined6 uStack_69f;
  undefined1 uStack_699;
  undefined1 uStack_698;
  undefined6 uStack_697;
  undefined1 uStack_691;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_660;
  byte bStack_658;
  undefined5 uStack_657;
  undefined2 uStack_652;
  undefined1 uStack_650;
  undefined5 uStack_64f;
  undefined2 uStack_64a;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  byte bStack_630;
  undefined5 uStack_62f;
  undefined2 uStack_62a;
  undefined1 uStack_628;
  undefined5 uStack_627;
  undefined2 uStack_622;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_5f8;
  byte bStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  uint ******ppppppuStack_5b8;
  undefined8 uStack_5b0;
  long *plStack_578;
  ulong uStack_570;
  uint ******ppppppuStack_538;
  undefined8 uStack_530;
  uint ******ppppppuStack_4f8;
  undefined8 uStack_4f0;
  uint ******ppppppuStack_4b8;
  undefined8 uStack_4b0;
  uint ******ppppppuStack_478;
  undefined8 uStack_470;
  long lStack_438;
  undefined8 uStack_430;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  pppppppuStack_850 = (uint *******)*param_2;
  plStack_6c0 = (long *)param_2[1];
  if (plStack_6c0 != (long *)0x0) {
    LOCK();
    plStack_6c0[1] = plStack_6c0[1] + 1;
    UNLOCK();
  }
  *(byte *)(pppppppuStack_850 + 0xc) = 1;
  uStack_690 = 0;
  uStack_688 = 0;
  bStack_6a0 = 0x1c;
  uStack_69f = 0x74616d726f66;
  uStack_699 = 0x5f;
  uStack_698 = 0x76;
  uStack_697 = 0x6e6f69737265;
  uStack_691 = 0;
  ppppppuStack_6a8 = (uint ******)0x1d1cc8100f4a575d;
  uStack_70 = 0;
  pppppppuStack_7d8 = (uint *******)0x0;
  auStack_7d0 = (undefined1  [4])0x0;
  uStack_7cc = 0;
  uStack_7cb = 0;
  uStack_7c9 = 0;
  lStack_78 = 0;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f3300a0;
  ppppppuStack_848 = (uint ******)0x0;
  uStack_840 = 0;
  uStack_83c = 0;
  uStack_83b = 0;
  uStack_839 = 0;
  pppppppuStack_7d8 = (uint *******)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&ppppppuStack_5b8,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  pppppppuStack_800 = (uint *******)(plVar19 + 0x11);
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0f3300f0;
  plVar19[0x2e] = 0x1000000000000;
  plVar19[0x2f] = (long)&UNK_01254d89;
  plVar19[0x30] = (long)&UNK_01254d89;
  plVar19[0x31] = 0x100000000ffff;
  plVar19[0x32] = (long)&UNK_01254d89;
  plVar19[0x33] = (long)&UNK_01254d89;
  plVar19[0x34] = 0;
  plVar19[0x35] = 0;
  if (ppppppuStack_848 == (uint ******)0x0) {
    ppppppuVar23 = (uint ******)0x0;
  }
  else {
    (*(code *)*ppppppuStack_848)(&ppppppuStack_848,plVar19 + 0x34);
    ppppppuVar23 = ppppppuStack_848;
  }
  pppppppuStack_7e0 = (uint *******)(plVar19 + 0x2f);
  pppppppuStack_7f0 = (uint *******)(plVar19 + 0x30);
  ppppppuStack_848 = (uint ******)0x0;
  plVar19[0x34] = (long)ppppppuVar23;
  pppppppuStack_808 = (uint *******)(plVar19 + 0x12);
  if (pppppppuStack_800 == (uint *******)&DAT_0f5521f8) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*(uint *)pppppppuStack_808 & 1) == 0) {
      if ((_DAT_0f552200 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552210;
        uVar11 = uRam000000000f55220c;
        uVar10 = _DAT_0f552208;
        uVar9 = uRam000000000f552204;
        *(uint *)pppppppuStack_808 = _DAT_0f552200;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        pppppppuStack_7f8 = (uint *******)(plVar19 + 0x32);
        func_0x04885070(pppppppuStack_808,_DAT_0f552210,CONCAT44(uRam000000000f55220c,_DAT_0f552208)
                       );
      }
    }
    else {
      bVar49 = (_DAT_0f552200 & 1) != 0;
      lVar29 = 0xf552201;
      if (bVar49) {
        lVar29 = _DAT_0f552210;
      }
      uVar45 = (ulong)((_DAT_0f552200 & 0xff) >> 1);
      if (bVar49) {
        uVar45 = CONCAT44(uRam000000000f55220c,_DAT_0f552208);
      }
      pppppppuStack_7f8 = (uint *******)(plVar19 + 0x32);
      FUN_04885120(pppppppuStack_808,lVar29,uVar45);
    }
    plVar19[0x11] = _DAT_0f5521f8;
    plVar19[0x15] = 0;
    if (ppppppuStack_848 != (uint ******)0x0) {
      (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
    }
  }
  plVar46 = plVar19 + 1;
  if (pppppppuStack_7d8 != (uint *******)0x0) {
    (*(code *)pppppppuStack_7d8[1])(&pppppppuStack_7d8);
  }
  LOCK();
  *plVar46 = *plVar46 + 1;
  UNLOCK();
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar20[1] = 0;
  puVar20[2] = 0;
  *puVar20 = &UNK_0f3301d0;
  puVar20[6] = 0;
  puVar20[7] = 0;
  puVar20[4] = &UNK_0f330220;
  puVar20[0xe] = plVar19 + 4;
  puVar20[0xf] = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  uStack_840 = (uint)puVar20;
  uStack_83c = (undefined1)((ulong)puVar20 >> 0x20);
  uStack_83b = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_839 = (undefined1)((ulong)puVar20 >> 0x38);
  ppppppuStack_848 = (uint ******)(puVar20 + 4);
  puVar21 = (undefined4 *)func_0x0bd93ff0(pppppppuStack_850,&ppppppuStack_6a8);
  plVar37 = *(long **)(puVar21 + 0x24);
  if (plVar37 < *(long **)(puVar21 + 0x26)) {
    plVar37[2] = 0;
    plVar37[3] = 0;
    *plVar37 = 0;
    plVar37[1] = 0;
    plVar37[4] = 0;
    if ((uint *******)plVar37 != pppppppuStack_800) {
      puVar24 = (uint *)(plVar37 + 1);
      if (((ulong)*pppppppuStack_808 & 1) == 0) {
        plVar37[3] = *(long *)((long)pppppppuStack_808 + 0x10);
        lVar29 = *(long *)((long)pppppppuStack_808 + 8);
        *(uint *******)puVar24 = *pppppppuStack_808;
        plVar37[2] = lVar29;
      }
      else {
        pppppppuStack_808 = (uint *******)puVar24;
        func_0x04885070(puVar24,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar37 = (long)*pppppppuStack_800;
    plVar37[5] = (long)(puVar20 + 4);
    plVar37[6] = (long)puVar20;
    LOCK();
    puVar20[1] = puVar20[1] + 1;
    UNLOCK();
    plVar37 = plVar37 + 7;
    *(long **)(puVar21 + 0x24) = plVar37;
  }
  else {
    plVar37 = (long *)func_0x0bd960f0(puVar21 + 0x22,pppppppuStack_800,&ppppppuStack_848);
  }
  *(long **)(puVar21 + 0x24) = plVar37;
  uVar9 = *puVar21;
  uVar10 = puVar21[1];
  uVar11 = puVar21[2];
  uVar12 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar37 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar37 = *plVar37 + 1;
    UNLOCK();
  }
  plVar37 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar37 != (long *)0x0) {
    LOCK();
    plVar36 = plVar37 + 1;
    lVar29 = *plVar36;
    *plVar36 = *plVar36 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
      func_0x0412c2d0(plVar37);
    }
  }
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar37 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
  if (plVar37 != (long *)0x0) {
    LOCK();
    plVar36 = plVar37 + 1;
    lVar29 = *plVar36;
    *plVar36 = *plVar36 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
      func_0x0412c2d0(plVar37);
    }
  }
  LOCK();
  lVar29 = *plVar46;
  *plVar46 = *plVar46 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar29 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar29 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
  }
  if (lVar29 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  pppppppuVar22 = pppppppuStack_7f0;
  ppppppuStack_848 = (uint ******)0x1000000080001;
  uStack_840 = 0x1254d89;
  uStack_83c = 0;
  uStack_83b = 0;
  uStack_839 = 0;
  uStack_6b0 = 0;
  uStack_838 = 0x89;
  uStack_837 = 0x254d;
  uStack_835 = 1;
  uStack_834 = 0;
  uStack_6b8 = 0;
  plVar19[0x2e] = 0x1000000080001;
  if (((ulong)plVar19[0x2f] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar19[0x2f] & 0xff00ffffffffffffU) - 8);
  }
  *pppppppuStack_7e0 = (uint ******)&UNK_01254d89;
  uVar45 = (ulong)*pppppppuVar22;
  if ((uVar45 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar45 & 0xff00ffffffffffff) - 8);
  }
  *pppppppuVar22 = (uint ******)&UNK_01254d89;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_6a0 & 1) != 0) {
    func_0x0412a280(uStack_690,
                    CONCAT17(uStack_699,CONCAT61(uStack_69f,bStack_6a0)) & 0xfffffffffffffffe);
  }
  uStack_7ba = 0;
  pppppppuStack_7b8 = (uint *******)0x0;
  auStack_7d0._1_3_ = (undefined3)_DAT_01217897;
  auStack_7d0[0] = 0x2a;
  uStack_7cc = (undefined1)((uint)_DAT_01217897 >> 0x18);
  uStack_7cb = (undefined2)_UNK_0121789b;
  uStack_7c9 = (undefined1)((uint)_UNK_0121789b >> 0x10);
  uStack_7c8._1_3_ = (undefined3)_UNK_0121789f;
  uStack_7c8 = CONCAT31(uStack_7c8._1_3_,(char)((uint)_UNK_0121789b >> 0x18));
  uStack_7c4 = (undefined1)((uint)_UNK_0121789f >> 0x18);
  uStack_7c3 = (undefined1)_UNK_012178a3;
  uStack_7c2 = 0x7274;
  uStack_7c0 = 0x6f;
  uStack_7bf = 0x7372656c6c;
  pppppppuStack_7d8 = (uint *******)0x36f958187658aa63;
  ppppppuStack_6a8 = (uint ******)0x0;
  bStack_6a0 = 0;
  uStack_69f = 0;
  uStack_699 = 0;
  pppppppuVar22 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (pppppppuVar22 == (uint *******)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  pppppppuVar22[1] = (uint ******)0x0;
  pppppppuVar22[2] = (uint ******)0x0;
  *pppppppuVar22 = (uint ******)&UNK_0f3302d8;
  ppppppuStack_848 = (uint ******)0x0;
  uStack_840 = 0;
  uStack_83c = 0;
  uStack_83b = 0;
  uStack_839 = 0;
  if (ppppppuStack_6a8 == (uint ******)0x0) {
    ppppppuStack_848 = (uint ******)0x0;
  }
  else {
    (*(code *)*ppppppuStack_6a8)(&ppppppuStack_6a8,&ppppppuStack_848);
    ppppppuStack_848 = ppppppuStack_6a8;
  }
  ppppppuStack_6a8 = (uint ******)0x0;
  pppppppuVar22[4] = (uint ******)&UNK_0f2ccd78;
  pppppppuVar22[5] = (uint ******)0x0;
  pppppppuVar22[6] = (uint ******)0x0;
  pppppppuVar22[7] = (uint ******)0x0;
  pppppppuVar22[8] = (uint ******)0x0;
  pppppppuVar22[9] = (uint ******)0x0;
  pppppppuVar22[10] = (uint ******)0x0;
  pppppppuVar22[0xb] = (uint ******)0x0;
  pppppppuVar22[0xc] = (uint ******)0x0;
  *(byte *)(pppppppuVar22 + 0xd) = 0;
  pppppppuStack_808 = pppppppuVar22;
  func_0x04aa75f0(pppppppuVar22 + 0xe,&ppppppuStack_5b8,&UNK_01254d89);
  *(byte *)(pppppppuVar22 + 0x10) = 0;
  pppppppuVar25 = pppppppuVar22 + 0x11;
  pppppppuVar22[0x11] = (uint ******)0x0;
  pppppppuVar22[0x12] = (uint ******)0x0;
  pppppppuVar22[0x13] = (uint ******)0x0;
  pppppppuVar22[0x14] = (uint ******)0x0;
  pppppppuVar22[0x15] = (uint ******)0x0;
  pppppppuVar22[0x16] = (uint ******)0x0;
  pppppppuVar22[0x17] = (uint ******)0xffffffff;
  pppppppuVar22[0x26] = (uint ******)0x0;
  pppppppuVar22[0x27] = (uint ******)0x0;
  pppppppuVar22[0x18] = (uint ******)0x0;
  pppppppuVar22[0x19] = (uint ******)0x0;
  pppppppuVar22[0x1a] = (uint ******)0x0;
  pppppppuVar22[0x1b] = (uint ******)0x0;
  pppppppuVar22[0x1c] = (uint ******)0x0;
  pppppppuVar22[0x1d] = (uint ******)0x0;
  pppppppuVar22[0x1e] = (uint ******)0x0;
  pppppppuVar22[0x1f] = (uint ******)0x0;
  pppppppuVar22[4] = (uint ******)&UNK_0f330328;
  pppppppuVar2 = pppppppuVar22 + 0x2e;
  pppppppuVar22[0x2e] = (uint ******)0x0;
  pppppppuVar22[0x2f] = (uint ******)0x0;
  *(byte *)(pppppppuVar22 + 0x36) = 0;
  if (pppppppuVar2 != &ppppppuStack_848) {
    if (ppppppuStack_848 == (uint ******)0x0) {
      ppppppuVar23 = (uint ******)0x0;
    }
    else {
      (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar2);
      ppppppuVar23 = ppppppuStack_848;
    }
    ppppppuStack_848 = (uint ******)0x0;
    *pppppppuVar2 = ppppppuVar23;
  }
  pppppppuVar2 = pppppppuVar22 + 0x12;
  if (pppppppuVar25 != (uint *******)&DAT_0f552108) {
    if (((ulong)*pppppppuVar2 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        pppppppuVar22[0x14] = _DAT_0f552120;
        uVar15 = uRam000000000f55211c;
        uVar14 = _DAT_0f552118;
        uVar13 = uRam000000000f552114;
        *(uint *)pppppppuVar2 = _DAT_0f552110;
        *(uint *)((long)pppppppuVar22 + 0x94) = uVar13;
        *(uint *)(pppppppuVar22 + 0x13) = uVar14;
        *(uint *)((long)pppppppuVar22 + 0x9c) = uVar15;
      }
      else {
        func_0x04885070(pppppppuVar2,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar49 = (_DAT_0f552110 & 1) != 0;
      ppppppuVar23 = (uint ******)0xf552111;
      if (bVar49) {
        ppppppuVar23 = _DAT_0f552120;
      }
      uVar45 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar49) {
        uVar45 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(pppppppuVar2,ppppppuVar23,uVar45);
    }
  }
  pppppppuVar26 = pppppppuVar22 + 1;
  pppppppuVar22[0x11] = _DAT_0f552108;
  pppppppuVar22[0x15] = (uint ******)0x0;
  if (ppppppuStack_848 != (uint ******)0x0) {
    (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
  }
  LOCK();
  *pppppppuVar26 = (uint ******)((long)*pppppppuVar26 + 1);
  UNLOCK();
  pppppppuStack_800 = pppppppuVar26;
  ppppppuVar23 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppuVar23 == (uint ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppuVar23[1] = (uint *****)0x0;
  ppppppuVar23[2] = (uint *****)0x0;
  *ppppppuVar23 = (uint *****)&UNK_0f330420;
  ppppppuVar23[6] = (uint *****)0x0;
  ppppppuVar23[7] = (uint *****)0x0;
  ppppppuVar23[4] = (uint *****)&UNK_0f330470;
  ppppppuVar23[0xe] = (uint *****)(pppppppuVar22 + 4);
  ppppppuVar23[0xf] = (uint *****)pppppppuVar22;
  LOCK();
  pppppppuVar22[1] = (uint ******)((long)pppppppuVar22[1] + 1);
  UNLOCK();
  uStack_840 = (uint)ppppppuVar23;
  uStack_83c = (undefined1)((ulong)ppppppuVar23 >> 0x20);
  uStack_83b = (undefined2)((ulong)ppppppuVar23 >> 0x28);
  uStack_839 = (undefined1)((ulong)ppppppuVar23 >> 0x38);
  ppppppuStack_848 = ppppppuVar23 + 4;
  puVar24 = (uint *)func_0x0bd93ff0(pppppppuStack_850,&pppppppuStack_7d8);
  pppppppuVar26 = *(uint ********)(puVar24 + 0x24);
  if (pppppppuVar26 < *(uint ********)(puVar24 + 0x26)) {
    pppppppuVar26[2] = (uint ******)0x0;
    pppppppuVar26[3] = (uint ******)0x0;
    *pppppppuVar26 = (uint ******)0x0;
    pppppppuVar26[1] = (uint ******)0x0;
    pppppppuVar26[4] = (uint ******)0x0;
    if (pppppppuVar26 != pppppppuVar25) {
      if (((ulong)*pppppppuVar2 & 1) == 0) {
        pppppppuVar26[3] = pppppppuVar22[0x14];
        ppppppuVar35 = pppppppuVar22[0x13];
        pppppppuVar26[1] = *pppppppuVar2;
        pppppppuVar26[2] = ppppppuVar35;
      }
      else {
        func_0x04885070(pppppppuVar26 + 1,pppppppuStack_808[0x14],pppppppuStack_808[0x13]);
      }
    }
    *pppppppuVar26 = *pppppppuVar25;
    pppppppuVar26[5] = ppppppuVar23 + 4;
    pppppppuVar26[6] = ppppppuVar23;
    LOCK();
    ppppppuVar23[1] = (uint *****)((long)ppppppuVar23[1] + 1);
    UNLOCK();
    pppppppuVar26 = pppppppuVar26 + 7;
    *(uint ********)(puVar24 + 0x24) = pppppppuVar26;
  }
  else {
    pppppppuVar26 = (uint *******)func_0x0bd960f0(puVar24 + 0x22,pppppppuVar25,&ppppppuStack_848);
  }
  pppppppuVar22 = pppppppuStack_808;
  *(uint ********)(puVar24 + 0x24) = pppppppuVar26;
  uVar13 = *puVar24;
  uVar14 = puVar24[1];
  uVar15 = puVar24[2];
  uVar16 = puVar24[3];
  if (*(long *)(puVar24 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar24 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  ppppppuVar23 = pppppppuStack_808[0xf];
  *(uint *)(pppppppuStack_808 + 0xe) = uVar13;
  *(uint *)((long)pppppppuStack_808 + 0x74) = uVar14;
  *(uint *)(pppppppuStack_808 + 0xf) = uVar15;
  *(uint *)((long)pppppppuStack_808 + 0x7c) = uVar16;
  if (ppppppuVar23 != (uint ******)0x0) {
    LOCK();
    ppppppuVar35 = ppppppuVar23 + 1;
    pppppuVar32 = *ppppppuVar35;
    *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
    UNLOCK();
    if (pppppuVar32 == (uint *****)0x0) {
      (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
      func_0x0412c2d0(ppppppuVar23);
    }
  }
  *(byte *)(pppppppuVar22 + 0x10) = *(byte *)((long)puVar24 + 0xa1);
  plVar19 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar46 = plVar19 + 1;
    lVar29 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  pppppppuVar25 = pppppppuStack_800;
  LOCK();
  ppppppuVar23 = *pppppppuStack_800;
  *pppppppuStack_800 = (uint ******)((long)*pppppppuStack_800 + -1);
  UNLOCK();
  if (ppppppuVar23 == (uint ******)0x0) {
    (*(code *)(*pppppppuVar22)[2])(pppppppuVar22);
    func_0x0412c2d0(pppppppuVar22);
    LOCK();
    ppppppuVar23 = *pppppppuVar25;
    *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
    UNLOCK();
  }
  else {
    LOCK();
    ppppppuVar23 = *pppppppuStack_800;
    *pppppppuStack_800 = (uint ******)((long)*pppppppuStack_800 + -1);
    UNLOCK();
  }
  if (ppppppuVar23 == (uint ******)0x0) {
    (*(code *)(*pppppppuVar22)[2])(pppppppuVar22);
    func_0x0412c2d0(pppppppuVar22);
  }
  if (ppppppuStack_6a8 != (uint ******)0x0) {
    (*(code *)ppppppuStack_6a8[1])(&ppppppuStack_6a8);
  }
  if (((uint)auStack_7d0 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                    CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,auStack_7d0))) &
                    0xfffffffffffffffe);
  }
  uStack_7c8 = 0;
  uStack_7c4 = 0;
  uStack_7c3 = 0;
  uStack_7c2 = 0;
  uStack_7c0 = 0;
  uStack_7bf = 0;
  uStack_7ba = 0;
  pppppppuStack_7d8 = (uint *******)0x0;
  auStack_7d0 = (undefined1  [4])0x0;
  uStack_7cc = 0;
  uStack_7cb = 0;
  uStack_7c9 = 0;
  pppppppuStack_7b8 = (uint *******)0x0;
  func_0x0412f5e0(auStack_7d0,&UNK_0124dda3,0x26);
  pppppppuStack_7d8 = (uint *******)0x7441ba527859c2fe;
  ppppppuStack_5b8 = (uint ******)0x0;
  uStack_5b0 = 0;
  pppppppuVar25 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (pppppppuVar25 == (uint *******)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  pppppppuVar25[1] = (uint ******)0x0;
  pppppppuVar25[2] = (uint ******)0x0;
  *pppppppuVar25 = (uint ******)&UNK_0f3304d0;
  ppppppuStack_848 = (uint ******)0x0;
  uStack_840 = 0;
  uStack_83c = 0;
  uStack_83b = 0;
  uStack_839 = 0;
  if (ppppppuStack_5b8 == (uint ******)0x0) {
    ppppppuStack_848 = (uint ******)0x0;
  }
  else {
    (*(code *)*ppppppuStack_5b8)(&ppppppuStack_5b8,&ppppppuStack_848);
    ppppppuStack_848 = ppppppuStack_5b8;
  }
  ppppppuStack_5b8 = (uint ******)0x0;
  pppppppuVar25[4] = (uint ******)&UNK_0f2ccd78;
  pppppppuVar25[5] = (uint ******)0x0;
  pppppppuVar25[6] = (uint ******)0x0;
  pppppppuVar25[7] = (uint ******)0x0;
  pppppppuVar25[8] = (uint ******)0x0;
  pppppppuVar25[9] = (uint ******)0x0;
  pppppppuVar25[10] = (uint ******)0x0;
  pppppppuVar25[0xb] = (uint ******)0x0;
  pppppppuVar25[0xc] = (uint ******)0x0;
  *(byte *)(pppppppuVar25 + 0xd) = 0;
  pppppppuStack_7f8 = pppppppuVar25;
  func_0x04aa75f0(pppppppuVar25 + 0xe,&ppppppuStack_4b8,&UNK_01254d89);
  *(byte *)(pppppppuVar25 + 0x10) = 0;
  pppppppuStack_800 = pppppppuVar25 + 0x11;
  pppppppuVar25[0x11] = (uint ******)0x0;
  pppppppuVar25[0x12] = (uint ******)0x0;
  pppppppuVar25[0x13] = (uint ******)0x0;
  pppppppuVar25[0x14] = (uint ******)0x0;
  pppppppuVar25[0x15] = (uint ******)0x0;
  pppppppuVar25[0x16] = (uint ******)0x0;
  pppppppuVar25[0x17] = (uint ******)0xffffffff;
  pppppppuVar25[0x26] = (uint ******)0x0;
  pppppppuVar25[0x27] = (uint ******)0x0;
  pppppppuVar25[0x18] = (uint ******)0x0;
  pppppppuVar25[0x19] = (uint ******)0x0;
  pppppppuVar25[0x1a] = (uint ******)0x0;
  pppppppuVar25[0x1b] = (uint ******)0x0;
  pppppppuVar25[0x1c] = (uint ******)0x0;
  pppppppuVar25[0x1d] = (uint ******)0x0;
  pppppppuVar25[0x1e] = (uint ******)0x0;
  pppppppuVar25[0x1f] = (uint ******)0x0;
  pppppppuVar25[4] = (uint ******)&UNK_0f330520;
  pppppppuVar2 = pppppppuVar25 + 0x2e;
  pppppppuVar25[0x2e] = (uint ******)0x0;
  pppppppuVar25[0x2f] = (uint ******)0x0;
  *(byte *)(pppppppuVar25 + 0x36) = 0;
  if (pppppppuVar2 != &ppppppuStack_848) {
    if (ppppppuStack_848 == (uint ******)0x0) {
      ppppppuVar23 = (uint ******)0x0;
    }
    else {
      (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar2);
      ppppppuVar23 = ppppppuStack_848;
    }
    ppppppuStack_848 = (uint ******)0x0;
    *pppppppuVar2 = ppppppuVar23;
  }
  pppppppuVar2 = pppppppuVar25 + 4;
  pppppppuVar26 = pppppppuVar25 + 0x12;
  if (pppppppuStack_800 != (uint *******)&DAT_0f552108) {
    if (((ulong)*pppppppuVar26 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        pppppppuVar25[0x14] = _DAT_0f552120;
        uVar15 = uRam000000000f55211c;
        uVar14 = _DAT_0f552118;
        uVar13 = uRam000000000f552114;
        *(uint *)pppppppuVar26 = _DAT_0f552110;
        *(uint *)((long)pppppppuVar25 + 0x94) = uVar13;
        *(uint *)(pppppppuVar25 + 0x13) = uVar14;
        *(uint *)((long)pppppppuVar25 + 0x9c) = uVar15;
      }
      else {
        func_0x04885070(pppppppuVar26,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar49 = (_DAT_0f552110 & 1) != 0;
      ppppppuVar23 = (uint ******)0xf552111;
      if (bVar49) {
        ppppppuVar23 = _DAT_0f552120;
      }
      uVar45 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar49) {
        uVar45 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(pppppppuVar26,ppppppuVar23,uVar45);
    }
  }
  pppppppuVar30 = pppppppuVar25 + 1;
  pppppppuVar25[0x11] = _DAT_0f552108;
  pppppppuVar25[0x15] = (uint ******)0x0;
  if (ppppppuStack_848 != (uint ******)0x0) {
    (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
  }
  LOCK();
  *pppppppuVar30 = (uint ******)((long)*pppppppuVar30 + 1);
  UNLOCK();
  pppppppuStack_790 = pppppppuVar30;
  pppppppuStack_778 = pppppppuVar26;
  pppppppuVar26 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pppppppuVar26 == (uint *******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pppppppuVar27 = pppppppuStack_7b8;
  pppppppuVar44 = pppppppuStack_7d8;
  pppppppuVar26[1] = (uint ******)0x0;
  pppppppuVar26[2] = (uint ******)0x0;
  *pppppppuVar26 = (uint ******)&UNK_0f330618;
  pppppppuVar26[6] = (uint ******)0x0;
  pppppppuVar26[7] = (uint ******)0x0;
  pppppppuVar26[4] = (uint ******)&UNK_0f330668;
  pppppppuVar26[0xe] = (uint ******)pppppppuVar2;
  pppppppuVar26[0xf] = (uint ******)pppppppuVar25;
  LOCK();
  pppppppuVar25[1] = (uint ******)((long)pppppppuVar25[1] + 1);
  UNLOCK();
  pppppppuStack_7e8 = pppppppuVar26 + 1;
  pppppppuStack_788 = (uint *******)pppppppuVar22[0x1b];
  pppppppuVar31 = (uint *******)pppppppuVar22[0x1c];
  pppppppuStack_7f0 = pppppppuVar26;
  pppppppuStack_7e0 = pppppppuVar26;
  if (pppppppuStack_788 != pppppppuVar31) {
    if (((uint)auStack_7d0 & 1) == 0) {
      pppppppuStack_850 = (uint *******)(auStack_7d0 + 1);
      pppppppuVar22 = (uint *******)(ulong)(auStack_7d0[0] >> 1);
    }
    else {
      pppppppuVar22 =
           (uint *******)CONCAT26(uStack_7c2,CONCAT15(uStack_7c3,CONCAT14(uStack_7c4,uStack_7c8)));
      pppppppuStack_850 = (uint *******)CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0));
    }
    pppppppuVar40 = (uint *******)((long)pppppppuStack_788 + 0x19);
    do {
      if (*(uint ********)((long)pppppppuVar40 + -9) == pppppppuVar44) {
        if (((uint ********)*(uint ********)((long)pppppppuVar40 + 0x17) == &pppppppuStack_7d8) &&
           ((uint *******)((long)pppppppuVar40 + -9) == pppppppuVar27)) {
LAB_0bd8beb0:
          pppppppuVar30 = (uint *******)((long)pppppppuVar40 + -0x19);
          pppppppuVar25 = pppppppuStack_7f8;
          goto LAB_0bd8beb9;
        }
        bVar7 = *(byte *)((long)pppppppuVar40 + -1);
        if ((bVar7 & 1) == 0) {
          pppppppuVar25 = (uint *******)(ulong)(bVar7 >> 1);
        }
        else {
          pppppppuVar25 = *(uint ********)((long)pppppppuVar40 + 7);
        }
        if (pppppppuVar25 == pppppppuVar22) {
          pppppppuVar25 = pppppppuVar40;
          if ((bVar7 & 1) != 0) {
            pppppppuVar25 = *(uint ********)((long)pppppppuVar40 + 0xf);
          }
          iVar18 = bcmp(pppppppuVar25,pppppppuStack_850,pppppppuVar22);
          if (iVar18 == 0) {
            *(uint *********)((long)pppppppuVar40 + 0x17) = &pppppppuStack_7d8;
            pppppppuStack_7b8 = (uint *******)((long)pppppppuVar40 + -9);
            goto LAB_0bd8beb0;
          }
        }
      }
      pbVar47 = (byte *)((long)pppppppuVar40 + 0x17);
      pbVar47[0] = 0;
      pbVar47[1] = 0;
      pbVar47[2] = 0;
      pbVar47[3] = 0;
      pbVar47[4] = 0;
      pbVar47[5] = 0;
      pbVar47[6] = 0;
      pbVar47[7] = 0;
      pppppppuVar30 = pppppppuVar40 + 0x15;
      pppppppuVar41 = (uint *******)((long)pppppppuVar40 + 0x8f);
      pppppppuVar26 = pppppppuVar27;
      pppppppuVar40 = pppppppuVar30;
      pppppppuVar25 = pppppppuVar44;
    } while (pppppppuVar41 != pppppppuVar31);
  }
  pppppppuVar27 = pppppppuVar26;
  pppppppuVar44 = pppppppuStack_7f8;
  pppppppuVar26 = pppppppuStack_808;
  if (pppppppuVar31 < pppppppuStack_808[0x1d]) {
    func_0x0bd9c3b0(pppppppuVar31);
    pppppppuVar31 = pppppppuVar31 + 0x15;
    pppppppuVar26[0x1c] = (uint ******)pppppppuVar31;
    pppppppuVar44 = pppppppuStack_7f8;
LAB_0bd8bd07:
    pppppppuVar26[0x1c] = (uint ******)pppppppuVar31;
    func_0x0b63b6d0(pppppppuVar31[-0x15],&pppppppuStack_7d8);
    ppppppuVar23 = pppppppuVar26[0x1c];
    *(byte *)((long)ppppppuVar23 + -7) = *(byte *)(pppppppuVar26 + 0x10);
    if ((uint ********)(ppppppuVar23 + -0x13) != &pppppppuStack_7d8) {
      ppppppuVar35 = ppppppuVar23 + -0x12;
      if (((ulong)*ppppppuVar35 & 1) == 0) {
        if (((uint)auStack_7d0 & 1) == 0) {
          ppppppuVar23[-0x10] = (uint *****)CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0));
          *(undefined1 (*) [4])ppppppuVar35 = auStack_7d0;
          *(uint *)((long)ppppppuVar23 + -0x8c) =
               CONCAT13(uStack_7c9,CONCAT21(uStack_7cb,uStack_7cc));
          *(undefined4 *)(ppppppuVar23 + -0x11) = uStack_7c8;
          *(uint *)((long)ppppppuVar23 + -0x84) =
               CONCAT22(uStack_7c2,CONCAT11(uStack_7c3,uStack_7c4));
        }
        else {
          func_0x04885070(ppppppuVar35,CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                          CONCAT26(uStack_7c2,CONCAT15(uStack_7c3,CONCAT14(uStack_7c4,uStack_7c8))))
          ;
        }
      }
      else {
        bVar49 = ((uint)auStack_7d0 & 1) != 0;
        puVar42 = auStack_7d0 + 1;
        if (bVar49) {
          puVar42 = (undefined1 *)CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0));
        }
        uVar45 = (ulong)(auStack_7d0[0] >> 1);
        if (bVar49) {
          uVar45 = CONCAT26(uStack_7c2,CONCAT15(uStack_7c3,CONCAT14(uStack_7c4,uStack_7c8)));
        }
        FUN_04885120(ppppppuVar35,puVar42,uVar45);
      }
    }
    ppppppuVar23[-0x13] = (uint *****)pppppppuStack_7d8;
    ppppppuVar23[-0xf] = (uint *****)0x0;
    func_0x04aa9390(&ppppppuStack_848,auStack_7d0,*(byte *)(pppppppuVar26 + 0x10));
    ppppppuVar23 = pppppppuVar26[0x1c];
    func_0x04167a70(ppppppuVar23 + -0xe,&ppppppuStack_848);
    ppppppuVar23[-0xd] =
         (uint *****)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
    ppppppuVar23[-0xc] =
         (uint *****)CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
    ppppppuVar23[-0xb] = (uint *****)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
    ppppppuVar23[-10] = (uint *****)pppppppuStack_828;
    uVar9 = (undefined4)uStack_820;
    uVar10 = uStack_820._4_4_;
    uVar11 = (undefined4)uStack_818;
    uVar12 = uStack_818._4_4_;
    uStack_820 = 0;
    uStack_818 = (uint *******)0x0;
    pppppuVar32 = ppppppuVar23[-8];
    *(undefined4 *)(ppppppuVar23 + -9) = uVar9;
    *(undefined4 *)((long)ppppppuVar23 + -0x44) = uVar10;
    *(undefined4 *)(ppppppuVar23 + -8) = uVar11;
    *(undefined4 *)((long)ppppppuVar23 + -0x3c) = uVar12;
    if (pppppuVar32 != (uint *****)0x0) {
      LOCK();
      pppppuVar1 = pppppuVar32 + 1;
      ppppuVar6 = *pppppuVar1;
      *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
      UNLOCK();
      if (ppppuVar6 == (uint ****)0x0) {
        (*(code *)(*pppppuVar32)[2])(pppppuVar32);
        func_0x0412c2d0(pppppuVar32);
      }
    }
    pppppppuVar27 = uStack_818;
    ppppppuVar23[-7] = pppppuStack_810;
    if (uStack_818 != (uint *******)0x0) {
      LOCK();
      pppppppuVar25 = uStack_818 + 1;
      ppppppuVar23 = *pppppppuVar25;
      *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
      UNLOCK();
      if (ppppppuVar23 == (uint ******)0x0) {
        (*(code *)(*uStack_818)[2])(uStack_818);
        func_0x0412c2d0(pppppppuVar27);
      }
    }
    func_0x04167a40(&ppppppuStack_848);
    ppppppuVar23 = pppppppuVar26[0x1c];
    *(undefined1 *)(ppppppuVar23 + -1) = 1;
    pppppppuVar30 = (uint *******)(ppppppuVar23 + -0x15);
    pppppppuVar25 = pppppppuVar44;
LAB_0bd8beb9:
    pppppppuVar31 = pppppppuStack_7f0 + 4;
    pppppppuVar26 = (uint *******)pppppppuVar30[0x12];
    if (pppppppuVar30[0x13] <= pppppppuVar26) {
      lVar29 = (long)pppppppuVar26 - (long)pppppppuVar30[0x11];
      pppppppuVar26 = (uint *******)((lVar29 >> 3) * 0x6db6db6db6db6db7 + 1);
      pppppppuVar44 = pppppppuVar22;
      pppppppuStack_7f0 = pppppppuVar31;
      if (pppppppuVar26 < (uint *******)0x492492492492493) {
        pppppppuStack_850 = pppppppuVar30 + 0x11;
        lVar33 = (long)pppppppuVar30[0x13] - (long)pppppppuVar30[0x11] >> 3;
        pppppppuVar31 = (uint *******)(lVar33 * -0x2492492492492492);
        if (pppppppuVar26 < pppppppuVar31) {
          pppppppuVar26 = pppppppuVar31;
        }
        if (0x249249249249248 < (ulong)(lVar33 * 0x6db6db6db6db6db7)) {
          pppppppuVar26 = (uint *******)0x492492492492492;
        }
        pppppppuStack_828 = pppppppuStack_850;
        if (pppppppuVar26 == (uint *******)0x0) {
          ppppppuVar23 = (uint ******)0x0;
        }
        else {
          if ((uint *******)0x492492492492492 < pppppppuVar26) goto LAB_0bd90c07;
          ppppppuVar23 = (uint ******)
                         (**(code **)(_DAT_0f5463b0 + 0x10))
                                   (&DAT_0f5463b0,(long)pppppppuVar26 * 0x38);
          if (ppppppuVar23 == (uint ******)0x0) {
            func_0x0eec74c0((long)pppppppuVar26 * 0x38,0);
            ppppppuVar23 = (uint ******)0x0;
          }
        }
        pppppppuVar31 = pppppppuStack_7f0;
        pppppppuVar22 = (uint *******)((long)ppppppuVar23 + lVar29);
        uStack_838 = SUB81(pppppppuVar22,0);
        uStack_837 = (undefined2)((ulong)pppppppuVar22 >> 8);
        uStack_835 = (undefined1)((ulong)pppppppuVar22 >> 0x18);
        uStack_834 = (undefined4)((ulong)pppppppuVar22 >> 0x20);
        uStack_840 = (uint)pppppppuVar22;
        uStack_83c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
        uStack_83b = (undefined2)((ulong)pppppppuVar22 >> 0x28);
        uStack_839 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
        ppppppuVar35 = ppppppuVar23 + (long)pppppppuVar26 * 7;
        uStack_830 = SUB81(ppppppuVar35,0);
        uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
        uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
        puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x10);
        *puVar20 = 0;
        puVar20[1] = 0;
        *(undefined8 *)((long)ppppppuVar23 + lVar29) = 0;
        ((undefined8 *)((long)ppppppuVar23 + lVar29))[1] = 0;
        *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x20) = 0;
        pppppppuVar27 = pppppppuVar22;
        pppppppuVar26 = pppppppuVar22;
        ppppppuStack_848 = ppppppuVar23;
        if (pppppppuVar22 != pppppppuStack_800) {
          puVar24 = (uint *)((long)ppppppuVar23 + lVar29 + 8);
          if (((ulong)*pppppppuStack_778 & 1) == 0) {
            *(uint *******)((long)ppppppuVar23 + lVar29 + 0x18) = pppppppuStack_778[2];
            uVar13 = *(uint *)((long)pppppppuStack_778 + 4);
            uVar14 = *(uint *)(pppppppuStack_778 + 1);
            uVar15 = *(uint *)((long)pppppppuStack_778 + 0xc);
            *puVar24 = *(uint *)pppppppuStack_778;
            *(uint *)((long)ppppppuVar23 + lVar29 + 0xc) = uVar13;
            *(uint *)((long)ppppppuVar23 + lVar29 + 0x10) = uVar14;
            *(uint *)((long)ppppppuVar23 + lVar29 + 0x14) = uVar15;
          }
          else {
            func_0x04885070(puVar24,pppppppuVar25[0x14],pppppppuVar25[0x13]);
            pppppppuVar27 =
                 (uint *******)
                 CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
            pppppppuVar26 =
                 (uint *******)
                 CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
          }
        }
        *pppppppuVar22 = *pppppppuStack_800;
        pppppppuVar22[5] = (uint ******)pppppppuVar31;
        pppppppuVar22[6] = (uint ******)pppppppuStack_7e0;
        LOCK();
        pppppppuStack_7e0[1] = (uint ******)((long)pppppppuStack_7e0[1] + 1);
        UNLOCK();
        pppppppuVar26 = pppppppuVar26 + 7;
        uStack_838 = SUB81(pppppppuVar26,0);
        uStack_837 = (undefined2)((ulong)pppppppuVar26 >> 8);
        uStack_835 = (undefined1)((ulong)pppppppuVar26 >> 0x18);
        uStack_834 = (undefined4)((ulong)pppppppuVar26 >> 0x20);
        ppppppuVar35 = pppppppuVar30[0x11];
        ppppppuVar43 = pppppppuVar30[0x12];
        ppppppuVar23 = (uint ******)
                       ((long)pppppppuVar27 + ((long)ppppppuVar35 - (long)ppppppuVar43));
        ppppppuVar34 = ppppppuVar23;
        ppppppuVar39 = ppppppuVar35;
        if ((long)ppppppuVar35 - (long)ppppppuVar43 != 0) {
          do {
            ppppppuVar34[2] = (uint *****)0x0;
            ppppppuVar34[3] = (uint *****)0x0;
            *ppppppuVar34 = (uint *****)0x0;
            ppppppuVar34[1] = (uint *****)0x0;
            ppppppuVar34[4] = (uint *****)0x0;
            ppppppuVar34[3] = ppppppuVar39[3];
            pppppuVar32 = ppppppuVar39[2];
            ppppppuVar34[1] = ppppppuVar39[1];
            ppppppuVar34[2] = pppppuVar32;
            *(undefined2 *)(ppppppuVar39 + 1) = 0;
            *ppppppuVar34 = *ppppppuVar39;
            uVar13 = *(uint *)((long)ppppppuVar39 + 0x2c);
            uVar14 = *(uint *)(ppppppuVar39 + 6);
            uVar15 = *(uint *)((long)ppppppuVar39 + 0x34);
            *(uint *)(ppppppuVar34 + 5) = *(uint *)(ppppppuVar39 + 5);
            *(uint *)((long)ppppppuVar34 + 0x2c) = uVar13;
            *(uint *)(ppppppuVar34 + 6) = uVar14;
            *(uint *)((long)ppppppuVar34 + 0x34) = uVar15;
            ppppppuVar39[5] = (uint *****)0x0;
            ppppppuVar39[6] = (uint *****)0x0;
            ppppppuVar39 = ppppppuVar39 + 7;
            ppppppuVar34 = ppppppuVar34 + 7;
          } while (ppppppuVar39 != ppppppuVar43);
          do {
            pppppuVar32 = ppppppuVar35[6];
            if (pppppuVar32 == (uint *****)0x0) {
LAB_0bd8c174:
              bVar7 = *(byte *)(ppppppuVar35 + 1);
            }
            else {
              LOCK();
              pppppuVar1 = pppppuVar32 + 1;
              ppppuVar6 = *pppppuVar1;
              *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
              UNLOCK();
              if (ppppuVar6 != (uint ****)0x0) goto LAB_0bd8c174;
              (*(code *)(*pppppuVar32)[2])(pppppuVar32);
              func_0x0412c2d0(pppppuVar32);
              bVar7 = *(byte *)(ppppppuVar35 + 1);
            }
            if ((bVar7 & 1) != 0) {
              func_0x0412a280(ppppppuVar35[3],(ulong)ppppppuVar35[1] & 0xfffffffffffffffe);
            }
            ppppppuVar35 = ppppppuVar35 + 7;
          } while (ppppppuVar35 != ppppppuVar43);
          ppppppuVar35 = *pppppppuStack_850;
          pppppppuVar26 =
               (uint *******)
               CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
        }
        pppppppuVar30[0x11] = ppppppuVar23;
        pppppppuVar30[0x12] = (uint ******)pppppppuVar26;
        ppppppuVar23 = pppppppuVar30[0x13];
        pppppppuVar30[0x13] = (uint ******)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
        if (ppppppuVar35 != (uint ******)0x0) {
          func_0x0412a280(ppppppuVar35,(long)ppppppuVar23 - (long)ppppppuVar35);
        }
        goto LAB_0bd8c1e8;
      }
LAB_0bd90c16:
      func_0x0bd9c5f0();
LAB_0bd90c1b:
      func_0x0bda3260();
LAB_0bd90c20:
      func_0x0bdb0800();
LAB_0bd90c25:
      func_0x0bdb2180();
      pppppppuVar22 = pppppppuVar44;
LAB_0bd90c2a:
      func_0x0bdb0730();
      goto LAB_0bd90c2f;
    }
    pppppppuVar26[2] = (uint ******)0x0;
    pppppppuVar26[3] = (uint ******)0x0;
    *pppppppuVar26 = (uint ******)0x0;
    pppppppuVar26[1] = (uint ******)0x0;
    pppppppuVar26[4] = (uint ******)0x0;
    if (pppppppuVar26 != pppppppuStack_800) {
      if (((ulong)*pppppppuStack_778 & 1) == 0) {
        pppppppuVar26[3] = pppppppuStack_778[2];
        ppppppuVar23 = pppppppuStack_778[1];
        pppppppuVar26[1] = *pppppppuStack_778;
        pppppppuVar26[2] = ppppppuVar23;
      }
      else {
        func_0x04885070(pppppppuVar26 + 1,pppppppuVar25[0x14],pppppppuVar25[0x13]);
      }
    }
    *pppppppuVar26 = *pppppppuStack_800;
    pppppppuVar26[5] = (uint ******)pppppppuVar31;
    pppppppuVar26[6] = (uint ******)pppppppuStack_7e0;
    LOCK();
    pppppppuStack_7e0[1] = (uint ******)((long)pppppppuStack_7e0[1] + 1);
    UNLOCK();
    pppppppuVar26 = pppppppuVar26 + 7;
    pppppppuVar30[0x12] = (uint ******)pppppppuVar26;
LAB_0bd8c1e8:
    pppppppuVar30[0x12] = (uint ******)pppppppuVar26;
    uVar13 = *(uint *)pppppppuVar30;
    uVar14 = *(uint *)((long)pppppppuVar30 + 4);
    uVar15 = *(uint *)(pppppppuVar30 + 1);
    uVar16 = *(uint *)((long)pppppppuVar30 + 0xc);
    if (pppppppuVar30[1] != (uint ******)0x0) {
      LOCK();
      ppppppuVar23 = pppppppuVar30[1] + 1;
      *ppppppuVar23 = (uint *****)((long)*ppppppuVar23 + 1);
      UNLOCK();
    }
    ppppppuVar23 = pppppppuVar25[0xf];
    *(uint *)(pppppppuVar25 + 0xe) = uVar13;
    *(uint *)((long)pppppppuVar25 + 0x74) = uVar14;
    *(uint *)(pppppppuVar25 + 0xf) = uVar15;
    *(uint *)((long)pppppppuVar25 + 0x7c) = uVar16;
    if (ppppppuVar23 != (uint ******)0x0) {
      LOCK();
      ppppppuVar35 = ppppppuVar23 + 1;
      pppppuVar32 = *ppppppuVar35;
      *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
      UNLOCK();
      if (pppppuVar32 == (uint *****)0x0) {
        (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
        func_0x0412c2d0(ppppppuVar23);
      }
    }
    pppppppuVar22 = pppppppuStack_7e0;
    *(byte *)(pppppppuVar25 + 0x10) = *(byte *)((long)pppppppuVar30 + 0xa1);
    LOCK();
    ppppppuVar23 = *pppppppuStack_7e8;
    *pppppppuStack_7e8 = (uint ******)((long)*pppppppuStack_7e8 + -1);
    UNLOCK();
    if (ppppppuVar23 == (uint ******)0x0) {
      (*(code *)(*pppppppuStack_7e0)[2])(pppppppuStack_7e0);
      func_0x0412c2d0(pppppppuVar22);
      LOCK();
      ppppppuVar23 = *pppppppuStack_790;
      *pppppppuStack_790 = (uint ******)((long)*pppppppuStack_790 + -1);
      UNLOCK();
      if (ppppppuVar23 != (uint ******)0x0) goto LAB_0bd8c277;
LAB_0bd8c3b0:
      pppppppuVar22 = pppppppuStack_790;
      (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
      func_0x0412c2d0(pppppppuVar25);
      LOCK();
      ppppppuVar23 = *pppppppuVar22;
      *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
      UNLOCK();
    }
    else {
      LOCK();
      ppppppuVar23 = *pppppppuStack_790;
      *pppppppuStack_790 = (uint ******)((long)*pppppppuStack_790 + -1);
      UNLOCK();
      if (ppppppuVar23 == (uint ******)0x0) goto LAB_0bd8c3b0;
LAB_0bd8c277:
      LOCK();
      ppppppuVar23 = *pppppppuStack_790;
      *pppppppuStack_790 = (uint ******)((long)*pppppppuStack_790 + -1);
      UNLOCK();
    }
    if (ppppppuVar23 == (uint ******)0x0) {
      (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
      func_0x0412c2d0(pppppppuVar25);
    }
    if (ppppppuStack_5b8 != (uint ******)0x0) {
      (*(code *)ppppppuStack_5b8[1])(&ppppppuStack_5b8);
    }
    if (((uint)auStack_7d0 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                      CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,auStack_7d0))) &
                      0xfffffffffffffffe);
    }
    uStack_7c8 = 0;
    uStack_7c4 = 0;
    uStack_7c3 = 0;
    uStack_7c2 = 0;
    uStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7ba = 0;
    pppppppuStack_7b8 = (uint *******)0x0;
    auStack_7d0 = (undefined1  [4])0x6174730c;
    uStack_7cc = 0x74;
    uStack_7cb = 0x7365;
    uStack_7c9 = 0;
    pppppppuStack_7d8 = (uint *******)0x1b3a38de53cf1f03;
    ppppppuStack_4b8 = (uint ******)0x0;
    uStack_4b0 = 0;
    pppppppuVar25 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (pppppppuVar25 == (uint *******)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    pppppppuVar25[1] = (uint ******)0x0;
    pppppppuVar25[2] = (uint ******)0x0;
    *pppppppuVar25 = (uint ******)&UNK_0f330720;
    ppppppuStack_848 = (uint ******)0x0;
    uStack_840 = 0;
    uStack_83c = 0;
    uStack_83b = 0;
    uStack_839 = 0;
    if (ppppppuStack_4b8 == (uint ******)0x0) {
      ppppppuStack_848 = (uint ******)0x0;
    }
    else {
      (*(code *)*ppppppuStack_4b8)(&ppppppuStack_4b8,&ppppppuStack_848);
      ppppppuStack_848 = ppppppuStack_4b8;
    }
    ppppppuStack_4b8 = (uint ******)0x0;
    pppppppuVar25[4] = (uint ******)&UNK_0f2ccd78;
    pppppppuVar25[5] = (uint ******)0x0;
    pppppppuVar25[6] = (uint ******)0x0;
    pppppppuVar25[7] = (uint ******)0x0;
    pppppppuVar25[8] = (uint ******)0x0;
    pppppppuVar25[9] = (uint ******)0x0;
    pppppppuVar25[10] = (uint ******)0x0;
    pppppppuVar25[0xb] = (uint ******)0x0;
    pppppppuVar25[0xc] = (uint ******)0x0;
    *(byte *)(pppppppuVar25 + 0xd) = 0;
    func_0x04aa75f0(pppppppuVar25 + 0xe,&ppppppuStack_4f8,&UNK_01254d89);
    *(byte *)(pppppppuVar25 + 0x10) = 0;
    pppppppuVar22 = pppppppuVar25 + 0x11;
    pppppppuVar25[0x11] = (uint ******)0x0;
    pppppppuVar25[0x12] = (uint ******)0x0;
    pppppppuVar25[0x13] = (uint ******)0x0;
    pppppppuVar25[0x14] = (uint ******)0x0;
    pppppppuVar25[0x15] = (uint ******)0x0;
    pppppppuVar25[0x16] = (uint ******)0x0;
    pppppppuVar25[0x17] = (uint ******)0xffffffff;
    pppppppuVar25[0x26] = (uint ******)0x0;
    pppppppuVar25[0x27] = (uint ******)0x0;
    pppppppuVar25[0x18] = (uint ******)0x0;
    pppppppuVar25[0x19] = (uint ******)0x0;
    pppppppuVar25[0x1a] = (uint ******)0x0;
    pppppppuVar25[0x1b] = (uint ******)0x0;
    pppppppuVar25[0x1c] = (uint ******)0x0;
    pppppppuVar25[0x1d] = (uint ******)0x0;
    pppppppuVar25[0x1e] = (uint ******)0x0;
    pppppppuVar25[0x1f] = (uint ******)0x0;
    pppppppuVar25[4] = (uint ******)&UNK_0f330770;
    pppppppuVar26 = pppppppuVar25 + 0x2e;
    pppppppuVar25[0x2e] = (uint ******)0x0;
    pppppppuVar25[0x2f] = (uint ******)0x0;
    *(byte *)(pppppppuVar25 + 0x36) = 0;
    if (pppppppuVar26 != &ppppppuStack_848) {
      if (ppppppuStack_848 == (uint ******)0x0) {
        ppppppuVar23 = (uint ******)0x0;
      }
      else {
        (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar26);
        ppppppuVar23 = ppppppuStack_848;
      }
      ppppppuStack_848 = (uint ******)0x0;
      *pppppppuVar26 = ppppppuVar23;
    }
    pppppppuVar26 = pppppppuVar25 + 0x12;
    if (pppppppuVar22 != (uint *******)&DAT_0f552108) {
      if (((ulong)*pppppppuVar26 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          pppppppuVar25[0x14] = _DAT_0f552120;
          uVar15 = uRam000000000f55211c;
          uVar14 = _DAT_0f552118;
          uVar13 = uRam000000000f552114;
          *(uint *)pppppppuVar26 = _DAT_0f552110;
          *(uint *)((long)pppppppuVar25 + 0x94) = uVar13;
          *(uint *)(pppppppuVar25 + 0x13) = uVar14;
          *(uint *)((long)pppppppuVar25 + 0x9c) = uVar15;
        }
        else {
          func_0x04885070(pppppppuVar26,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar49 = (_DAT_0f552110 & 1) != 0;
        ppppppuVar23 = (uint ******)0xf552111;
        if (bVar49) {
          ppppppuVar23 = _DAT_0f552120;
        }
        uVar45 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar49) {
          uVar45 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        FUN_04885120(pppppppuVar26,ppppppuVar23,uVar45);
      }
    }
    pppppppuVar30 = pppppppuVar25 + 1;
    pppppppuVar25[0x11] = _DAT_0f552108;
    pppppppuVar25[0x15] = (uint ******)0x0;
    if (ppppppuStack_848 != (uint ******)0x0) {
      (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
    }
    LOCK();
    *pppppppuVar30 = (uint ******)((long)*pppppppuVar30 + 1);
    UNLOCK();
    pppppppuStack_800 = pppppppuVar30;
    ppppppuVar23 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (ppppppuVar23 == (uint ******)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    ppppppuVar23[1] = (uint *****)0x0;
    ppppppuVar23[2] = (uint *****)0x0;
    *ppppppuVar23 = (uint *****)&UNK_0f330868;
    ppppppuVar23[6] = (uint *****)0x0;
    ppppppuVar23[7] = (uint *****)0x0;
    ppppppuVar23[4] = (uint *****)&UNK_0f3308b8;
    ppppppuVar23[0xe] = (uint *****)(pppppppuVar25 + 4);
    ppppppuVar23[0xf] = (uint *****)pppppppuVar25;
    LOCK();
    pppppppuVar25[1] = (uint ******)((long)pppppppuVar25[1] + 1);
    UNLOCK();
    uStack_840 = (uint)ppppppuVar23;
    uStack_83c = (undefined1)((ulong)ppppppuVar23 >> 0x20);
    uStack_83b = (undefined2)((ulong)ppppppuVar23 >> 0x28);
    uStack_839 = (undefined1)((ulong)ppppppuVar23 >> 0x38);
    ppppppuStack_848 = ppppppuVar23 + 4;
    puVar24 = (uint *)func_0x0bd9c600(pppppppuVar2,&pppppppuStack_7d8,1);
    pppppppuVar30 = *(uint ********)(puVar24 + 0x24);
    pppppppuStack_850 = pppppppuVar26;
    if (pppppppuVar30 < *(uint ********)(puVar24 + 0x26)) {
      pppppppuVar30[2] = (uint ******)0x0;
      pppppppuVar30[3] = (uint ******)0x0;
      *pppppppuVar30 = (uint ******)0x0;
      pppppppuVar30[1] = (uint ******)0x0;
      pppppppuVar30[4] = (uint ******)0x0;
      if (pppppppuVar30 != pppppppuVar22) {
        pppppppuStack_850 = pppppppuVar30 + 1;
        if (((ulong)*pppppppuVar26 & 1) == 0) {
          pppppppuVar30[3] = pppppppuVar25[0x14];
          ppppppuVar35 = pppppppuVar25[0x13];
          *pppppppuStack_850 = *pppppppuVar26;
          pppppppuVar30[2] = ppppppuVar35;
          pppppppuStack_850 = pppppppuVar26;
        }
        else {
          func_0x04885070(pppppppuStack_850,pppppppuVar25[0x14],pppppppuVar25[0x13]);
        }
      }
      *pppppppuVar30 = *pppppppuVar22;
      pppppppuVar30[5] = ppppppuVar23 + 4;
      pppppppuVar30[6] = ppppppuVar23;
      LOCK();
      ppppppuVar23[1] = (uint *****)((long)ppppppuVar23[1] + 1);
      UNLOCK();
      pppppppuVar30 = pppppppuVar30 + 7;
      *(uint ********)(puVar24 + 0x24) = pppppppuVar30;
    }
    else {
      pppppppuVar30 = (uint *******)func_0x0bd9fc90(puVar24 + 0x22,pppppppuVar22,&ppppppuStack_848);
    }
    pppppppuVar22 = pppppppuStack_800;
    *(uint ********)(puVar24 + 0x24) = pppppppuVar30;
    uVar13 = *puVar24;
    uVar14 = puVar24[1];
    uVar15 = puVar24[2];
    uVar16 = puVar24[3];
    if (*(long *)(puVar24 + 2) != 0) {
      LOCK();
      plVar19 = (long *)(*(long *)(puVar24 + 2) + 8);
      *plVar19 = *plVar19 + 1;
      UNLOCK();
    }
    ppppppuVar23 = pppppppuVar25[0xf];
    *(uint *)(pppppppuVar25 + 0xe) = uVar13;
    *(uint *)((long)pppppppuVar25 + 0x74) = uVar14;
    *(uint *)(pppppppuVar25 + 0xf) = uVar15;
    *(uint *)((long)pppppppuVar25 + 0x7c) = uVar16;
    if (ppppppuVar23 != (uint ******)0x0) {
      LOCK();
      ppppppuVar35 = ppppppuVar23 + 1;
      pppppuVar32 = *ppppppuVar35;
      *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
      UNLOCK();
      if (pppppuVar32 == (uint *****)0x0) {
        (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
        func_0x0412c2d0(ppppppuVar23);
      }
    }
    *(byte *)(pppppppuVar25 + 0x10) = *(byte *)((long)puVar24 + 0xa1);
    plVar19 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar46 = plVar19 + 1;
      lVar29 = *plVar46;
      *plVar46 = *plVar46 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
    }
    LOCK();
    ppppppuVar23 = *pppppppuVar22;
    *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
    UNLOCK();
    if (ppppppuVar23 == (uint ******)0x0) {
      (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
      func_0x0412c2d0(pppppppuVar25);
      LOCK();
      ppppppuVar23 = *pppppppuVar22;
      *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
      UNLOCK();
    }
    else {
      LOCK();
      ppppppuVar23 = *pppppppuVar22;
      *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
      UNLOCK();
    }
    if (ppppppuVar23 == (uint ******)0x0) {
      (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
      func_0x0412c2d0(pppppppuVar25);
    }
    if (ppppppuStack_4b8 != (uint ******)0x0) {
      (*(code *)ppppppuStack_4b8[1])(&ppppppuStack_4b8);
    }
    if (((uint)auStack_7d0 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                      CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,auStack_7d0))) &
                      0xfffffffffffffffe);
    }
    uStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7ba = 0;
    pppppppuStack_7b8 = (uint *******)0x0;
    auStack_7d0 = (undefined1  [4])0x2d615b1e;
    uStack_7cc = 0x7a;
    uStack_7cb = 0x2d41;
    uStack_7c9 = 0x5a;
    uStack_7c8 = 0x5f392d30;
    uStack_7c4 = 0x2e;
    uStack_7c3 = 0x2d;
    uStack_7c2 = 0x2b5d;
    pppppppuStack_7d8 = (uint *******)0x255423bc7931a16a;
    ppppppuStack_4f8 = (uint ******)0x0;
    uStack_4f0 = 0;
    pppppppuVar27 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (pppppppuVar27 == (uint *******)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    pppppppuVar27[1] = (uint ******)0x0;
    pppppppuVar27[2] = (uint ******)0x0;
    *pppppppuVar27 = (uint ******)&UNK_0f330970;
    ppppppuStack_848 = (uint ******)0x0;
    uStack_840 = 0;
    uStack_83c = 0;
    uStack_83b = 0;
    uStack_839 = 0;
    if (ppppppuStack_4f8 == (uint ******)0x0) {
      ppppppuStack_848 = (uint ******)0x0;
    }
    else {
      (*(code *)*ppppppuStack_4f8)(&ppppppuStack_4f8,&ppppppuStack_848);
      ppppppuStack_848 = ppppppuStack_4f8;
    }
    ppppppuStack_4f8 = (uint ******)0x0;
    pppppppuVar27[4] = (uint ******)&UNK_0f2ccd78;
    pppppppuVar27[5] = (uint ******)0x0;
    pppppppuVar27[6] = (uint ******)0x0;
    pppppppuVar27[7] = (uint ******)0x0;
    pppppppuVar27[8] = (uint ******)0x0;
    pppppppuVar27[9] = (uint ******)0x0;
    pppppppuVar27[10] = (uint ******)0x0;
    pppppppuVar27[0xb] = (uint ******)0x0;
    pppppppuVar27[0xc] = (uint ******)0x0;
    *(byte *)(pppppppuVar27 + 0xd) = 0;
    pppppppuStack_7e8 = pppppppuVar27;
    func_0x04aa75f0(pppppppuVar27 + 0xe,&lStack_3b8,&UNK_01254d89);
    *(byte *)(pppppppuVar27 + 0x10) = 0;
    pppppppuVar30 = pppppppuVar27 + 0x11;
    pppppppuVar27[0x11] = (uint ******)0x0;
    pppppppuVar27[0x12] = (uint ******)0x0;
    pppppppuVar27[0x13] = (uint ******)0x0;
    pppppppuVar27[0x14] = (uint ******)0x0;
    pppppppuVar27[0x15] = (uint ******)0x0;
    pppppppuVar27[0x16] = (uint ******)0x0;
    pppppppuVar27[0x17] = (uint ******)0xffffffff;
    pppppppuVar27[0x26] = (uint ******)0x0;
    pppppppuVar27[0x27] = (uint ******)0x0;
    pppppppuVar27[0x18] = (uint ******)0x0;
    pppppppuVar27[0x19] = (uint ******)0x0;
    pppppppuVar27[0x1a] = (uint ******)0x0;
    pppppppuVar27[0x1b] = (uint ******)0x0;
    pppppppuVar27[0x1c] = (uint ******)0x0;
    pppppppuVar27[0x1d] = (uint ******)0x0;
    pppppppuVar27[0x1e] = (uint ******)0x0;
    pppppppuVar27[0x1f] = (uint ******)0x0;
    pppppppuVar27[4] = (uint ******)&UNK_0f3309c0;
    pppppppuVar22 = pppppppuVar27 + 0x2e;
    pppppppuVar27[0x2e] = (uint ******)0x0;
    pppppppuVar27[0x2f] = (uint ******)0x0;
    *(byte *)(pppppppuVar27 + 0x36) = 0;
    if (pppppppuVar22 != &ppppppuStack_848) {
      if (ppppppuStack_848 == (uint ******)0x0) {
        ppppppuVar23 = (uint ******)0x0;
      }
      else {
        (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar22);
        ppppppuVar23 = ppppppuStack_848;
      }
      ppppppuStack_848 = (uint ******)0x0;
      *pppppppuVar22 = ppppppuVar23;
    }
    pppppppuStack_800 = pppppppuVar27 + 4;
    pppppppuVar22 = pppppppuVar27 + 0x12;
    if (pppppppuVar30 != (uint *******)&DAT_0f552108) {
      if (((ulong)*pppppppuVar22 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          pppppppuVar27[0x14] = _DAT_0f552120;
          uVar15 = uRam000000000f55211c;
          uVar14 = _DAT_0f552118;
          uVar13 = uRam000000000f552114;
          *(uint *)pppppppuVar22 = _DAT_0f552110;
          *(uint *)((long)pppppppuVar27 + 0x94) = uVar13;
          *(uint *)(pppppppuVar27 + 0x13) = uVar14;
          *(uint *)((long)pppppppuVar27 + 0x9c) = uVar15;
        }
        else {
          func_0x04885070(pppppppuVar22,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar49 = (_DAT_0f552110 & 1) != 0;
        ppppppuVar23 = (uint ******)0xf552111;
        if (bVar49) {
          ppppppuVar23 = _DAT_0f552120;
        }
        uVar45 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar49) {
          uVar45 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        FUN_04885120(pppppppuVar22,ppppppuVar23,uVar45);
      }
    }
    pppppppuVar26 = pppppppuVar27 + 1;
    pppppppuVar27[0x11] = _DAT_0f552108;
    pppppppuVar27[0x15] = (uint ******)0x0;
    if (ppppppuStack_848 != (uint ******)0x0) {
      (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
    }
    LOCK();
    *pppppppuVar26 = (uint ******)((long)*pppppppuVar26 + 1);
    UNLOCK();
    pppppppuStack_808 = pppppppuVar30;
    pppppppuStack_7e0 = pppppppuVar26;
    pppppppuStack_770 = pppppppuVar22;
    pppppppuVar26 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (pppppppuVar26 == (uint *******)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    pppppppuVar44 = pppppppuStack_7b8;
    pppppppuVar31 = pppppppuStack_7d8;
    pppppppuVar26[1] = (uint ******)0x0;
    pppppppuVar26[2] = (uint ******)0x0;
    *pppppppuVar26 = (uint ******)&UNK_0f330ab8;
    pppppppuVar26[6] = (uint ******)0x0;
    pppppppuVar26[7] = (uint ******)0x0;
    pppppppuVar26[4] = (uint ******)&UNK_0f330b08;
    pppppppuVar26[0xe] = (uint ******)pppppppuStack_800;
    pppppppuVar26[0xf] = (uint ******)pppppppuVar27;
    LOCK();
    pppppppuVar27[1] = (uint ******)((long)pppppppuVar27[1] + 1);
    UNLOCK();
    pppppppuStack_790 = pppppppuVar26 + 1;
    pppppppuStack_788 = (uint *******)pppppppuVar25[0x1b];
    pppppppuVar22 = (uint *******)pppppppuVar25[0x1c];
    pppppppuStack_7f8 = pppppppuVar26;
    pppppppuStack_7f0 = pppppppuVar26;
    pppppppuStack_778 = pppppppuVar25;
    if (pppppppuStack_788 != pppppppuVar22) {
      if (((uint)auStack_7d0 & 1) == 0) {
        uVar45 = (ulong)(auStack_7d0[0] >> 1);
        pppppppuStack_850 = (uint *******)(auStack_7d0 + 1);
      }
      else {
        uVar45 = CONCAT26(uStack_7c2,CONCAT15(uStack_7c3,CONCAT14(uStack_7c4,uStack_7c8)));
        pppppppuStack_850 = (uint *******)CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0));
      }
      pppppppuVar25 = (uint *******)((long)pppppppuStack_788 + 0x19);
      do {
        if (*(uint ********)((long)pppppppuVar25 + -9) == pppppppuVar31) {
          if (((uint ********)*(uint ********)((long)pppppppuVar25 + 0x17) == &pppppppuStack_7d8) &&
             ((uint *******)((long)pppppppuVar25 + -9) == pppppppuVar44)) {
LAB_0bd8d05d:
            pppppppuVar27 = (uint *******)((long)pppppppuVar25 + -0x19);
            pppppppuVar30 = pppppppuStack_7e8;
            pppppppuVar22 = pppppppuStack_7e0;
            goto LAB_0bd8d06b;
          }
          bVar7 = *(byte *)((long)pppppppuVar25 + -1);
          if ((bVar7 & 1) == 0) {
            uVar38 = (ulong)(bVar7 >> 1);
          }
          else {
            uVar38 = *(ulong *)((long)pppppppuVar25 + 7);
          }
          if (uVar38 == uVar45) {
            pppppppuVar26 = pppppppuVar25;
            if ((bVar7 & 1) != 0) {
              pppppppuVar26 = *(uint ********)((long)pppppppuVar25 + 0xf);
            }
            iVar18 = bcmp(pppppppuVar26,pppppppuStack_850,uVar45);
            if (iVar18 == 0) {
              *(uint *********)((long)pppppppuVar25 + 0x17) = &pppppppuStack_7d8;
              pppppppuStack_7b8 = (uint *******)((long)pppppppuVar25 + -9);
              goto LAB_0bd8d05d;
            }
          }
        }
        pbVar47 = (byte *)((long)pppppppuVar25 + 0x17);
        pbVar47[0] = 0;
        pbVar47[1] = 0;
        pbVar47[2] = 0;
        pbVar47[3] = 0;
        pbVar47[4] = 0;
        pbVar47[5] = 0;
        pbVar47[6] = 0;
        pbVar47[7] = 0;
        pppppppuVar27 = pppppppuVar25 + 0x15;
        pppppppuVar26 = (uint *******)((long)pppppppuVar25 + 0x8f);
        pppppppuVar25 = pppppppuVar27;
        pppppppuVar30 = pppppppuVar31;
      } while (pppppppuVar26 != pppppppuVar22);
    }
    pppppppuVar25 = pppppppuStack_778;
    pppppppuVar31 = pppppppuStack_7e8;
    if (pppppppuVar22 < pppppppuStack_778[0x1d]) {
      func_0x0bda3020(pppppppuVar22);
      pppppppuVar22 = pppppppuVar22 + 0x15;
      pppppppuVar25[0x1c] = (uint ******)pppppppuVar22;
      pppppppuVar31 = pppppppuStack_7e8;
LAB_0bd8ceb2:
      pppppppuVar25[0x1c] = (uint ******)pppppppuVar22;
      func_0x0b63b6d0(pppppppuVar22[-0x15],&pppppppuStack_7d8);
      ppppppuVar23 = pppppppuVar25[0x1c];
      *(byte *)((long)ppppppuVar23 + -7) = *(byte *)(pppppppuVar25 + 0x10);
      if ((uint ********)(ppppppuVar23 + -0x13) != &pppppppuStack_7d8) {
        ppppppuVar35 = ppppppuVar23 + -0x12;
        if (((ulong)*ppppppuVar35 & 1) == 0) {
          if (((uint)auStack_7d0 & 1) == 0) {
            ppppppuVar23[-0x10] = (uint *****)CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0));
            *(undefined1 (*) [4])ppppppuVar35 = auStack_7d0;
            *(uint *)((long)ppppppuVar23 + -0x8c) =
                 CONCAT13(uStack_7c9,CONCAT21(uStack_7cb,uStack_7cc));
            *(undefined4 *)(ppppppuVar23 + -0x11) = uStack_7c8;
            *(uint *)((long)ppppppuVar23 + -0x84) =
                 CONCAT22(uStack_7c2,CONCAT11(uStack_7c3,uStack_7c4));
          }
          else {
            func_0x04885070(ppppppuVar35,CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                            CONCAT26(uStack_7c2,CONCAT15(uStack_7c3,CONCAT14(uStack_7c4,uStack_7c8))
                                    ));
          }
        }
        else {
          bVar49 = ((uint)auStack_7d0 & 1) != 0;
          puVar42 = auStack_7d0 + 1;
          if (bVar49) {
            puVar42 = (undefined1 *)CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0));
          }
          uVar45 = (ulong)(auStack_7d0[0] >> 1);
          if (bVar49) {
            uVar45 = CONCAT26(uStack_7c2,CONCAT15(uStack_7c3,CONCAT14(uStack_7c4,uStack_7c8)));
          }
          FUN_04885120(ppppppuVar35,puVar42,uVar45);
        }
      }
      ppppppuVar23[-0x13] = (uint *****)pppppppuStack_7d8;
      ppppppuVar23[-0xf] = (uint *****)0x0;
      func_0x04aa9390(&ppppppuStack_848,auStack_7d0,*(byte *)(pppppppuVar25 + 0x10));
      ppppppuVar23 = pppppppuVar25[0x1c];
      func_0x04167a70(ppppppuVar23 + -0xe,&ppppppuStack_848);
      ppppppuVar23[-0xd] =
           (uint *****)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
      ppppppuVar23[-0xc] =
           (uint *****)CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
      ppppppuVar23[-0xb] = (uint *****)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
      ppppppuVar23[-10] = (uint *****)pppppppuStack_828;
      uVar9 = (undefined4)uStack_820;
      uVar10 = uStack_820._4_4_;
      uVar11 = (undefined4)uStack_818;
      uVar12 = uStack_818._4_4_;
      uStack_820 = 0;
      uStack_818 = (uint *******)0x0;
      pppppuVar32 = ppppppuVar23[-8];
      *(undefined4 *)(ppppppuVar23 + -9) = uVar9;
      *(undefined4 *)((long)ppppppuVar23 + -0x44) = uVar10;
      *(undefined4 *)(ppppppuVar23 + -8) = uVar11;
      *(undefined4 *)((long)ppppppuVar23 + -0x3c) = uVar12;
      if (pppppuVar32 != (uint *****)0x0) {
        LOCK();
        pppppuVar1 = pppppuVar32 + 1;
        ppppuVar6 = *pppppuVar1;
        *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
        UNLOCK();
        if (ppppuVar6 == (uint ****)0x0) {
          (*(code *)(*pppppuVar32)[2])(pppppuVar32);
          func_0x0412c2d0(pppppuVar32);
        }
      }
      pppppppuVar22 = pppppppuStack_7e0;
      pppppppuVar26 = uStack_818;
      ppppppuVar23[-7] = pppppuStack_810;
      if (uStack_818 != (uint *******)0x0) {
        LOCK();
        pppppppuVar30 = uStack_818 + 1;
        ppppppuVar23 = *pppppppuVar30;
        *pppppppuVar30 = (uint ******)((long)*pppppppuVar30 + -1);
        UNLOCK();
        if (ppppppuVar23 == (uint ******)0x0) {
          (*(code *)(*uStack_818)[2])(uStack_818);
          func_0x0412c2d0(pppppppuVar26);
        }
      }
      func_0x04167a40(&ppppppuStack_848);
      ppppppuVar23 = pppppppuVar25[0x1c];
      *(undefined1 *)(ppppppuVar23 + -1) = 1;
      pppppppuVar27 = (uint *******)(ppppppuVar23 + -0x15);
      pppppppuVar30 = pppppppuVar31;
LAB_0bd8d06b:
      pppppppuVar25 = pppppppuStack_7f0 + 4;
      pppppppuVar26 = (uint *******)pppppppuVar27[0x12];
      if (pppppppuVar27[0x13] <= pppppppuVar26) {
        pppppppuVar26 = (uint *******)((long)pppppppuVar26 - (long)pppppppuVar27[0x11]);
        pppppppuVar44 = (uint *******)(((long)pppppppuVar26 >> 3) * 0x6db6db6db6db6db7 + 1);
        if (pppppppuVar44 < (uint *******)0x492492492492493) {
          pppppppuStack_850 = pppppppuVar27 + 0x11;
          lVar29 = (long)pppppppuVar27[0x13] - (long)pppppppuVar27[0x11] >> 3;
          pppppppuVar31 = (uint *******)(lVar29 * -0x2492492492492492);
          pppppppuVar22 = pppppppuVar44;
          if (pppppppuVar44 < pppppppuVar31) {
            pppppppuVar22 = pppppppuVar31;
          }
          if (0x249249249249248 < (ulong)(lVar29 * 0x6db6db6db6db6db7)) {
            pppppppuVar22 = (uint *******)0x492492492492492;
          }
          pppppppuStack_828 = pppppppuStack_850;
          pppppppuStack_7f0 = pppppppuVar25;
          if (pppppppuVar22 == (uint *******)0x0) {
            ppppppuVar23 = (uint ******)0x0;
          }
          else {
            if ((uint *******)0x492492492492492 < pppppppuVar22) goto LAB_0bd90c0c;
            ppppppuVar23 = (uint ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))
                                     (&DAT_0f5463b0,(long)pppppppuVar22 * 0x38);
            if (ppppppuVar23 == (uint ******)0x0) {
              func_0x0eec74c0((long)pppppppuVar22 * 0x38,0);
              ppppppuVar23 = (uint ******)0x0;
            }
          }
          pppppppuVar25 = (uint *******)((long)ppppppuVar23 + (long)pppppppuVar26);
          uStack_838 = SUB81(pppppppuVar25,0);
          uStack_837 = (undefined2)((ulong)pppppppuVar25 >> 8);
          uStack_835 = (undefined1)((ulong)pppppppuVar25 >> 0x18);
          uStack_834 = (undefined4)((ulong)pppppppuVar25 >> 0x20);
          uStack_840 = (uint)pppppppuVar25;
          uStack_83c = (undefined1)((ulong)pppppppuVar25 >> 0x20);
          uStack_83b = (undefined2)((ulong)pppppppuVar25 >> 0x28);
          uStack_839 = (undefined1)((ulong)pppppppuVar25 >> 0x38);
          ppppppuVar35 = ppppppuVar23 + (long)pppppppuVar22 * 7;
          uStack_830 = SUB81(ppppppuVar35,0);
          uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
          uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
          pbVar47 = (byte *)((long)(ppppppuVar23 + 2) + (long)pppppppuVar26);
          pbVar47[0] = 0;
          pbVar47[1] = 0;
          pbVar47[2] = 0;
          pbVar47[3] = 0;
          pbVar47[4] = 0;
          pbVar47[5] = 0;
          pbVar47[6] = 0;
          pbVar47[7] = 0;
          pbVar47[8] = 0;
          pbVar47[9] = 0;
          pbVar47[10] = 0;
          pbVar47[0xb] = 0;
          pbVar47[0xc] = 0;
          pbVar47[0xd] = 0;
          pbVar47[0xe] = 0;
          pbVar47[0xf] = 0;
          pbVar47 = (byte *)((long)ppppppuVar23 + (long)pppppppuVar26);
          pbVar47[0] = 0;
          pbVar47[1] = 0;
          pbVar47[2] = 0;
          pbVar47[3] = 0;
          pbVar47[4] = 0;
          pbVar47[5] = 0;
          pbVar47[6] = 0;
          pbVar47[7] = 0;
          pbVar47[8] = 0;
          pbVar47[9] = 0;
          pbVar47[10] = 0;
          pbVar47[0xb] = 0;
          pbVar47[0xc] = 0;
          pbVar47[0xd] = 0;
          pbVar47[0xe] = 0;
          pbVar47[0xf] = 0;
          pbVar47 = (byte *)((long)(ppppppuVar23 + 4) + (long)pppppppuVar26);
          pbVar47[0] = 0;
          pbVar47[1] = 0;
          pbVar47[2] = 0;
          pbVar47[3] = 0;
          pbVar47[4] = 0;
          pbVar47[5] = 0;
          pbVar47[6] = 0;
          pbVar47[7] = 0;
          pppppppuVar22 = pppppppuVar25;
          pppppppuVar31 = pppppppuVar25;
          ppppppuStack_848 = ppppppuVar23;
          if (pppppppuVar25 != pppppppuStack_808) {
            pbVar47 = (byte *)((long)ppppppuVar23 + (long)pppppppuVar26);
            if (((ulong)*pppppppuStack_770 & 1) == 0) {
              *(uint *******)(pbVar47 + 0x18) = pppppppuStack_770[2];
              uVar13 = *(uint *)((long)pppppppuStack_770 + 4);
              uVar14 = *(uint *)(pppppppuStack_770 + 1);
              uVar15 = *(uint *)((long)pppppppuStack_770 + 0xc);
              *(uint *)(pbVar47 + 8) = *(uint *)pppppppuStack_770;
              *(uint *)(pbVar47 + 0xc) = uVar13;
              *(uint *)(pbVar47 + 0x10) = uVar14;
              *(uint *)(pbVar47 + 0x14) = uVar15;
            }
            else {
              func_0x04885070(pbVar47 + 8,pppppppuVar30[0x14],pppppppuVar30[0x13]);
              pppppppuVar22 =
                   (uint *******)
                   CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
              pppppppuVar31 =
                   (uint *******)
                   CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
            }
          }
          *pppppppuVar25 = *pppppppuStack_808;
          pppppppuVar25[5] = (uint ******)pppppppuStack_7f0;
          pppppppuVar25[6] = (uint ******)pppppppuStack_7f8;
          LOCK();
          pppppppuStack_7f8[1] = (uint ******)((long)pppppppuStack_7f8[1] + 1);
          UNLOCK();
          pppppppuVar26 = pppppppuVar31 + 7;
          uStack_838 = SUB81(pppppppuVar26,0);
          uStack_837 = (undefined2)((ulong)pppppppuVar26 >> 8);
          uStack_835 = (undefined1)((ulong)pppppppuVar26 >> 0x18);
          uStack_834 = (undefined4)((ulong)pppppppuVar26 >> 0x20);
          ppppppuVar35 = pppppppuVar27[0x11];
          ppppppuVar43 = pppppppuVar27[0x12];
          ppppppuVar23 = (uint ******)
                         ((long)pppppppuVar22 + ((long)ppppppuVar35 - (long)ppppppuVar43));
          ppppppuVar34 = ppppppuVar23;
          ppppppuVar39 = ppppppuVar35;
          if ((long)ppppppuVar35 - (long)ppppppuVar43 != 0) {
            do {
              ppppppuVar34[2] = (uint *****)0x0;
              ppppppuVar34[3] = (uint *****)0x0;
              *ppppppuVar34 = (uint *****)0x0;
              ppppppuVar34[1] = (uint *****)0x0;
              ppppppuVar34[4] = (uint *****)0x0;
              ppppppuVar34[3] = ppppppuVar39[3];
              pppppuVar32 = ppppppuVar39[2];
              ppppppuVar34[1] = ppppppuVar39[1];
              ppppppuVar34[2] = pppppuVar32;
              *(undefined2 *)(ppppppuVar39 + 1) = 0;
              *ppppppuVar34 = *ppppppuVar39;
              uVar9 = *(undefined4 *)((long)ppppppuVar39 + 0x2c);
              uVar10 = *(undefined4 *)(ppppppuVar39 + 6);
              uVar11 = *(undefined4 *)((long)ppppppuVar39 + 0x34);
              *(undefined4 *)(ppppppuVar34 + 5) = *(undefined4 *)(ppppppuVar39 + 5);
              *(undefined4 *)((long)ppppppuVar34 + 0x2c) = uVar9;
              *(undefined4 *)(ppppppuVar34 + 6) = uVar10;
              *(undefined4 *)((long)ppppppuVar34 + 0x34) = uVar11;
              ppppppuVar39[5] = (uint *****)0x0;
              ppppppuVar39[6] = (uint *****)0x0;
              ppppppuVar39 = ppppppuVar39 + 7;
              ppppppuVar34 = ppppppuVar34 + 7;
            } while (ppppppuVar39 != ppppppuVar43);
            do {
              pppppuVar32 = ppppppuVar35[6];
              if (pppppuVar32 == (uint *****)0x0) {
LAB_0bd8d324:
                bVar7 = *(byte *)(ppppppuVar35 + 1);
              }
              else {
                LOCK();
                pppppuVar1 = pppppuVar32 + 1;
                ppppuVar6 = *pppppuVar1;
                *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
                UNLOCK();
                if (ppppuVar6 != (uint ****)0x0) goto LAB_0bd8d324;
                (*(code *)(*pppppuVar32)[2])(pppppuVar32);
                func_0x0412c2d0(pppppuVar32);
                bVar7 = *(byte *)(ppppppuVar35 + 1);
              }
              if ((bVar7 & 1) != 0) {
                func_0x0412a280(ppppppuVar35[3],(ulong)ppppppuVar35[1] & 0xfffffffffffffffe);
              }
              ppppppuVar35 = ppppppuVar35 + 7;
            } while (ppppppuVar35 != ppppppuVar43);
            ppppppuVar35 = *pppppppuStack_850;
            pppppppuVar26 =
                 (uint *******)
                 CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
          }
          pppppppuVar22 = pppppppuStack_7e0;
          pppppppuVar27[0x11] = ppppppuVar23;
          pppppppuVar27[0x12] = (uint ******)pppppppuVar26;
          ppppppuVar23 = pppppppuVar27[0x13];
          pppppppuVar27[0x13] = (uint ******)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
          if (ppppppuVar35 != (uint ******)0x0) {
            func_0x0412a280(ppppppuVar35,(long)ppppppuVar23 - (long)ppppppuVar35);
          }
          goto LAB_0bd8d39d;
        }
        goto LAB_0bd90c1b;
      }
      pppppppuVar26[2] = (uint ******)0x0;
      pppppppuVar26[3] = (uint ******)0x0;
      *pppppppuVar26 = (uint ******)0x0;
      pppppppuVar26[1] = (uint ******)0x0;
      pppppppuVar26[4] = (uint ******)0x0;
      if (pppppppuVar26 != pppppppuStack_808) {
        if (((ulong)*pppppppuStack_770 & 1) == 0) {
          pppppppuVar26[3] = pppppppuStack_770[2];
          ppppppuVar23 = pppppppuStack_770[1];
          pppppppuVar26[1] = *pppppppuStack_770;
          pppppppuVar26[2] = ppppppuVar23;
        }
        else {
          func_0x04885070(pppppppuVar26 + 1,pppppppuVar30[0x14],pppppppuVar30[0x13]);
        }
      }
      *pppppppuVar26 = *pppppppuStack_808;
      pppppppuVar26[5] = (uint ******)pppppppuVar25;
      pppppppuVar26[6] = (uint ******)pppppppuStack_7f8;
      LOCK();
      pppppppuStack_7f8[1] = (uint ******)((long)pppppppuStack_7f8[1] + 1);
      UNLOCK();
      pppppppuVar26 = pppppppuVar26 + 7;
      pppppppuVar27[0x12] = (uint ******)pppppppuVar26;
LAB_0bd8d39d:
      pppppppuVar27[0x12] = (uint ******)pppppppuVar26;
      uVar13 = *(uint *)pppppppuVar27;
      uVar14 = *(uint *)((long)pppppppuVar27 + 4);
      uVar15 = *(uint *)(pppppppuVar27 + 1);
      uVar16 = *(uint *)((long)pppppppuVar27 + 0xc);
      if (pppppppuVar27[1] != (uint ******)0x0) {
        LOCK();
        ppppppuVar23 = pppppppuVar27[1] + 1;
        *ppppppuVar23 = (uint *****)((long)*ppppppuVar23 + 1);
        UNLOCK();
      }
      ppppppuVar23 = pppppppuVar30[0xf];
      *(uint *)(pppppppuVar30 + 0xe) = uVar13;
      *(uint *)((long)pppppppuVar30 + 0x74) = uVar14;
      *(uint *)(pppppppuVar30 + 0xf) = uVar15;
      *(uint *)((long)pppppppuVar30 + 0x7c) = uVar16;
      if (ppppppuVar23 != (uint ******)0x0) {
        LOCK();
        ppppppuVar35 = ppppppuVar23 + 1;
        pppppuVar32 = *ppppppuVar35;
        *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
        UNLOCK();
        if (pppppuVar32 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
          func_0x0412c2d0(ppppppuVar23);
        }
      }
      pppppppuVar25 = pppppppuStack_7f8;
      *(byte *)(pppppppuVar30 + 0x10) = *(byte *)((long)pppppppuVar27 + 0xa1);
      LOCK();
      ppppppuVar23 = *pppppppuStack_790;
      *pppppppuStack_790 = (uint ******)((long)*pppppppuStack_790 + -1);
      UNLOCK();
      if (ppppppuVar23 == (uint ******)0x0) {
        (*(code *)(*pppppppuStack_7f8)[2])(pppppppuStack_7f8);
        func_0x0412c2d0(pppppppuVar25);
        LOCK();
        ppppppuVar23 = *pppppppuVar22;
        *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
        UNLOCK();
        if (ppppppuVar23 != (uint ******)0x0) goto LAB_0bd8d425;
LAB_0bd8d6eb:
        (*(code *)(*pppppppuVar30)[2])(pppppppuVar30);
        func_0x0412c2d0(pppppppuVar30);
        LOCK();
        ppppppuVar23 = *pppppppuVar22;
        *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
        UNLOCK();
      }
      else {
        LOCK();
        ppppppuVar23 = *pppppppuVar22;
        *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
        UNLOCK();
        if (ppppppuVar23 == (uint ******)0x0) goto LAB_0bd8d6eb;
LAB_0bd8d425:
        LOCK();
        ppppppuVar23 = *pppppppuVar22;
        *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
        UNLOCK();
      }
      if (ppppppuVar23 == (uint ******)0x0) {
        (*(code *)(*pppppppuVar30)[2])(pppppppuVar30);
        func_0x0412c2d0(pppppppuVar30);
      }
      if (ppppppuStack_4f8 != (uint ******)0x0) {
        (*(code *)ppppppuStack_4f8[1])(&ppppppuStack_4f8);
      }
      if (((uint)auStack_7d0 & 1) != 0) {
        func_0x0412a280(CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                        CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,auStack_7d0))) &
                        0xfffffffffffffffe);
      }
      uStack_835 = 0;
      uStack_834 = 0;
      uStack_830 = 0;
      uStack_82f = 0;
      uStack_82e = 0;
      pppppppuStack_828 = (uint *******)0x0;
      uStack_840 = 0x72617014;
      uStack_83c = 0x61;
      uStack_83b = 0x656d;
      uStack_839 = 0x74;
      uStack_838 = 0x65;
      uStack_837 = 0x7372;
      ppppppuStack_848 = (uint ******)0xaafefc1858d0044d;
      lStack_3b8 = 0;
      uStack_3b0 = 0;
      uVar28 = FUN_0bd921f0(pppppppuStack_800,&ppppppuStack_848,&lStack_3b8);
      if (lStack_3b8 != 0) {
        (**(code **)(lStack_3b8 + 8))(&lStack_3b8);
      }
      if ((uStack_840 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                        CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))) &
                        0xfffffffffffffffe);
      }
      lStack_b8 = 0;
      uStack_b0 = 0;
      lVar29 = func_0x0bd92f30(uVar28,1,&lStack_b8);
      *(undefined1 *)(lVar29 + 0x1d0) = 1;
      if (lStack_b8 != 0) {
        (**(code **)(lStack_b8 + 8))(&lStack_b8);
      }
      uStack_835 = 0;
      uStack_834 = 0;
      uStack_830 = 0;
      uStack_82f = 0;
      uStack_82e = 0;
      pppppppuStack_828 = (uint *******)0x0;
      uStack_840 = 0x696e6114;
      uStack_83c = 0x6d;
      uStack_83b = 0x7461;
      uStack_839 = 0x69;
      uStack_838 = 0x6f;
      uStack_837 = 0x736e;
      ppppppuStack_848 = (uint ******)0xe65c574dba10944;
      lStack_f8 = 0;
      uStack_f0 = 0;
      uVar28 = FUN_0bd921f0(pppppppuStack_800,&ppppppuStack_848,&lStack_f8);
      if (lStack_f8 != 0) {
        (**(code **)(lStack_f8 + 8))(&lStack_f8);
      }
      if ((uStack_840 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                        CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))) &
                        0xfffffffffffffffe);
      }
      lStack_138 = 0;
      uStack_130 = 0;
      lVar29 = func_0x0bd93500(uVar28,1,&lStack_138);
      *(undefined8 *)(lVar29 + 0x90) = 1;
      *(undefined8 *)(lVar29 + 0x98) = 1;
      uStack_7c0 = 0;
      uStack_7bf = 0;
      uStack_7ba = 0;
      pppppppuStack_7b8 = (uint *******)0x0;
      auStack_7d0 = (undefined1  [4])0x2d615b1e;
      uStack_7cc = 0x7a;
      uStack_7cb = 0x2d41;
      uStack_7c9 = 0x5a;
      uStack_7c8 = 0x5f392d30;
      uStack_7c4 = 0x2e;
      uStack_7c3 = 0x2d;
      uStack_7c2 = 0x2b5d;
      pppppppuStack_7d8 = (uint *******)0x255423bc7931a16a;
      ppppppuStack_478 = (uint ******)0x0;
      uStack_470 = 0;
      pppppppuVar30 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (pppppppuVar30 == (uint *******)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      pppppppuVar30[1] = (uint ******)0x0;
      pppppppuVar30[2] = (uint ******)0x0;
      *pppppppuVar30 = (uint ******)&UNK_0f331240;
      ppppppuStack_848 = (uint ******)0x0;
      uStack_840 = 0;
      uStack_83c = 0;
      uStack_83b = 0;
      uStack_839 = 0;
      if (ppppppuStack_478 == (uint ******)0x0) {
        ppppppuStack_848 = (uint ******)0x0;
      }
      else {
        (*(code *)*ppppppuStack_478)(&ppppppuStack_478,&ppppppuStack_848);
        ppppppuStack_848 = ppppppuStack_478;
      }
      ppppppuStack_478 = (uint ******)0x0;
      pppppppuVar30[4] = (uint ******)&UNK_0f2ccd78;
      pppppppuVar30[5] = (uint ******)0x0;
      pppppppuVar30[6] = (uint ******)0x0;
      pppppppuVar30[7] = (uint ******)0x0;
      pppppppuVar30[8] = (uint ******)0x0;
      pppppppuVar30[9] = (uint ******)0x0;
      pppppppuVar30[10] = (uint ******)0x0;
      pppppppuVar30[0xb] = (uint ******)0x0;
      pppppppuVar30[0xc] = (uint ******)0x0;
      *(byte *)(pppppppuVar30 + 0xd) = 0;
      func_0x04aa75f0(pppppppuVar30 + 0xe,&ppppppuStack_538,&UNK_01254d89);
      *(byte *)(pppppppuVar30 + 0x10) = 0;
      pppppppuVar22 = pppppppuVar30 + 0x11;
      pppppppuVar30[0x11] = (uint ******)0x0;
      pppppppuVar30[0x12] = (uint ******)0x0;
      pppppppuVar30[0x13] = (uint ******)0x0;
      pppppppuVar30[0x14] = (uint ******)0x0;
      pppppppuVar30[0x15] = (uint ******)0x0;
      pppppppuVar30[0x16] = (uint ******)0x0;
      pppppppuVar30[0x17] = (uint ******)0xffffffff;
      pppppppuVar30[0x26] = (uint ******)0x0;
      pppppppuVar30[0x27] = (uint ******)0x0;
      pppppppuVar30[0x18] = (uint ******)0x0;
      pppppppuVar30[0x19] = (uint ******)0x0;
      pppppppuVar30[0x1a] = (uint ******)0x0;
      pppppppuVar30[0x1b] = (uint ******)0x0;
      pppppppuVar30[0x1c] = (uint ******)0x0;
      pppppppuVar30[0x1d] = (uint ******)0x0;
      pppppppuVar30[0x1e] = (uint ******)0x0;
      pppppppuVar30[0x1f] = (uint ******)0x0;
      pppppppuVar30[4] = (uint ******)&UNK_0f331290;
      pppppppuVar25 = pppppppuVar30 + 0x2e;
      pppppppuVar30[0x2e] = (uint ******)0x0;
      pppppppuVar30[0x2f] = (uint ******)0x0;
      if (pppppppuVar25 != &ppppppuStack_848) {
        if (ppppppuStack_848 == (uint ******)0x0) {
          ppppppuVar23 = (uint ******)0x0;
        }
        else {
          (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar25);
          ppppppuVar23 = ppppppuStack_848;
        }
        ppppppuStack_848 = (uint ******)0x0;
        *pppppppuVar25 = ppppppuVar23;
      }
      pppppppuVar25 = pppppppuVar30 + 0x12;
      if (pppppppuVar22 != (uint *******)&DAT_0f551f58) {
        if (((ulong)*pppppppuVar25 & 1) == 0) {
          if ((_DAT_0f551f60 & 1) == 0) {
            pppppppuVar30[0x14] = _DAT_0f551f70;
            uVar15 = uRam000000000f551f6c;
            uVar14 = _DAT_0f551f68;
            uVar13 = uRam000000000f551f64;
            *(uint *)pppppppuVar25 = _DAT_0f551f60;
            *(uint *)((long)pppppppuVar30 + 0x94) = uVar13;
            *(uint *)(pppppppuVar30 + 0x13) = uVar14;
            *(uint *)((long)pppppppuVar30 + 0x9c) = uVar15;
          }
          else {
            func_0x04885070(pppppppuVar25,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68)
                           );
          }
        }
        else {
          bVar49 = (_DAT_0f551f60 & 1) != 0;
          ppppppuVar23 = (uint ******)0xf551f61;
          if (bVar49) {
            ppppppuVar23 = _DAT_0f551f70;
          }
          uVar45 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
          if (bVar49) {
            uVar45 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
          }
          FUN_04885120(pppppppuVar25,ppppppuVar23,uVar45);
        }
      }
      pppppppuVar26 = pppppppuVar30 + 1;
      pppppppuVar30[0x11] = _DAT_0f551f58;
      pppppppuVar30[0x15] = (uint ******)0x0;
      if (ppppppuStack_848 != (uint ******)0x0) {
        (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
      }
      LOCK();
      *pppppppuVar26 = (uint ******)((long)*pppppppuVar26 + 1);
      UNLOCK();
      pppppppuStack_808 = pppppppuVar26;
      ppppppuVar23 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (ppppppuVar23 == (uint ******)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      ppppppuVar23[1] = (uint *****)0x0;
      ppppppuVar23[2] = (uint *****)0x0;
      *ppppppuVar23 = (uint *****)&UNK_0f331388;
      ppppppuVar23[6] = (uint *****)0x0;
      ppppppuVar23[7] = (uint *****)0x0;
      ppppppuVar23[4] = (uint *****)&UNK_0f3313d8;
      ppppppuVar23[0xe] = (uint *****)(pppppppuVar30 + 4);
      ppppppuVar23[0xf] = (uint *****)pppppppuVar30;
      LOCK();
      pppppppuVar30[1] = (uint ******)((long)pppppppuVar30[1] + 1);
      UNLOCK();
      uStack_840 = (uint)ppppppuVar23;
      uStack_83c = (undefined1)((ulong)ppppppuVar23 >> 0x20);
      uStack_83b = (undefined2)((ulong)ppppppuVar23 >> 0x28);
      uStack_839 = (undefined1)((ulong)ppppppuVar23 >> 0x38);
      ppppppuStack_848 = ppppppuVar23 + 4;
      puVar24 = (uint *)func_0x0bdaad90(lVar29,&pppppppuStack_7d8,1);
      pppppppuVar26 = *(uint ********)(puVar24 + 0x24);
      if (pppppppuVar26 < *(uint ********)(puVar24 + 0x26)) {
        pppppppuVar26[2] = (uint ******)0x0;
        pppppppuVar26[3] = (uint ******)0x0;
        *pppppppuVar26 = (uint ******)0x0;
        pppppppuVar26[1] = (uint ******)0x0;
        pppppppuVar26[4] = (uint ******)0x0;
        if (pppppppuVar26 != pppppppuVar22) {
          if (((ulong)*pppppppuVar25 & 1) == 0) {
            pppppppuVar26[3] = pppppppuVar30[0x14];
            ppppppuVar35 = pppppppuVar30[0x13];
            pppppppuVar26[1] = *pppppppuVar25;
            pppppppuVar26[2] = ppppppuVar35;
          }
          else {
            func_0x04885070(pppppppuVar26 + 1,pppppppuVar30[0x14],pppppppuVar30[0x13]);
          }
        }
        *pppppppuVar26 = *pppppppuVar22;
        pppppppuVar26[5] = ppppppuVar23 + 4;
        pppppppuVar26[6] = ppppppuVar23;
        LOCK();
        ppppppuVar23[1] = (uint *****)((long)ppppppuVar23[1] + 1);
        UNLOCK();
        pppppppuVar26 = pppppppuVar26 + 7;
        *(uint ********)(puVar24 + 0x24) = pppppppuVar26;
      }
      else {
        pppppppuVar26 =
             (uint *******)func_0x0bdad260(puVar24 + 0x22,pppppppuVar22,&ppppppuStack_848);
      }
      *(uint ********)(puVar24 + 0x24) = pppppppuVar26;
      uVar13 = *puVar24;
      uVar14 = puVar24[1];
      uVar15 = puVar24[2];
      uVar16 = puVar24[3];
      if (*(long *)(puVar24 + 2) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(puVar24 + 2) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      ppppppuVar23 = pppppppuVar30[0xf];
      *(uint *)(pppppppuVar30 + 0xe) = uVar13;
      *(uint *)((long)pppppppuVar30 + 0x74) = uVar14;
      *(uint *)(pppppppuVar30 + 0xf) = uVar15;
      *(uint *)((long)pppppppuVar30 + 0x7c) = uVar16;
      if (ppppppuVar23 != (uint ******)0x0) {
        LOCK();
        ppppppuVar35 = ppppppuVar23 + 1;
        pppppuVar32 = *ppppppuVar35;
        *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
        UNLOCK();
        if (pppppuVar32 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
          func_0x0412c2d0(ppppppuVar23);
        }
      }
      *(byte *)(pppppppuVar30 + 0x10) = *(byte *)((long)puVar24 + 0xa1);
      plVar19 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar46 = plVar19 + 1;
        lVar29 = *plVar46;
        *plVar46 = *plVar46 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      pppppppuVar22 = pppppppuStack_808;
      LOCK();
      ppppppuVar23 = *pppppppuStack_808;
      *pppppppuStack_808 = (uint ******)((long)*pppppppuStack_808 + -1);
      UNLOCK();
      if (ppppppuVar23 == (uint ******)0x0) {
        (*(code *)(*pppppppuVar30)[2])(pppppppuVar30);
        func_0x0412c2d0(pppppppuVar30);
        LOCK();
        ppppppuVar23 = *pppppppuVar22;
        *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
        UNLOCK();
        if (ppppppuVar23 != (uint ******)0x0) goto LAB_0bd8daaf;
LAB_0bd8db9b:
        (*(code *)(*pppppppuVar30)[2])(pppppppuVar30);
        func_0x0412c2d0(pppppppuVar30);
        pppppppuVar30[0x16] = (uint ******)0x0;
      }
      else {
        LOCK();
        ppppppuVar23 = *pppppppuStack_808;
        *pppppppuStack_808 = (uint ******)((long)*pppppppuStack_808 + -1);
        UNLOCK();
        if (ppppppuVar23 == (uint ******)0x0) goto LAB_0bd8db9b;
LAB_0bd8daaf:
        pppppppuVar30[0x16] = (uint ******)0x0;
      }
      if (ppppppuStack_478 != (uint ******)0x0) {
        (*(code *)ppppppuStack_478[1])(&ppppppuStack_478);
      }
      if (((uint)auStack_7d0 & 1) != 0) {
        func_0x0412a280(CONCAT26(uStack_7ba,CONCAT51(uStack_7bf,uStack_7c0)),
                        CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,auStack_7d0))) &
                        0xfffffffffffffffe);
      }
      if (lStack_138 != 0) {
        (**(code **)(lStack_138 + 8))(&lStack_138);
      }
      ppppppuStack_538 = (uint ******)0x0;
      uStack_530 = 0;
      pppppppuVar25 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (pppppppuVar25 == (uint *******)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      pppppppuVar25[1] = (uint ******)0x0;
      pppppppuVar25[2] = (uint ******)0x0;
      *pppppppuVar25 = (uint ******)&UNK_0f331490;
      ppppppuStack_848 = (uint ******)0x0;
      uStack_840 = 0;
      uStack_83c = 0;
      uStack_83b = 0;
      uStack_839 = 0;
      if (ppppppuStack_538 == (uint ******)0x0) {
        ppppppuStack_848 = (uint ******)0x0;
      }
      else {
        (*(code *)*ppppppuStack_538)(&ppppppuStack_538,&ppppppuStack_848);
        ppppppuStack_848 = ppppppuStack_538;
      }
      ppppppuStack_538 = (uint ******)0x0;
      pppppppuVar25[4] = (uint ******)&UNK_0f2ccd78;
      pppppppuVar25[5] = (uint ******)0x0;
      pppppppuVar25[6] = (uint ******)0x0;
      pppppppuVar25[7] = (uint ******)0x0;
      pppppppuVar25[8] = (uint ******)0x0;
      pppppppuVar25[9] = (uint ******)0x0;
      pppppppuVar25[10] = (uint ******)0x0;
      pppppppuVar25[0xb] = (uint ******)0x0;
      pppppppuVar25[0xc] = (uint ******)0x0;
      *(byte *)(pppppppuVar25 + 0xd) = 0;
      pppppppuStack_7f8 = pppppppuVar25;
      func_0x04aa75f0(pppppppuVar25 + 0xe,&pppppppuStack_7d8,&UNK_01254d89);
      *(byte *)(pppppppuVar25 + 0x10) = 0;
      pppppppuStack_850 = pppppppuVar25 + 0x11;
      pppppppuVar25[0x11] = (uint ******)0x0;
      pppppppuVar25[0x12] = (uint ******)0x0;
      pppppppuVar25[0x13] = (uint ******)0x0;
      pppppppuVar25[0x14] = (uint ******)0x0;
      pppppppuVar25[0x15] = (uint ******)0x0;
      pppppppuVar25[0x16] = (uint ******)0x0;
      pppppppuVar25[0x17] = (uint ******)0xffffffff;
      pppppppuVar25[0x26] = (uint ******)0x0;
      pppppppuVar25[0x27] = (uint ******)0x0;
      pppppppuVar25[0x18] = (uint ******)0x0;
      pppppppuVar25[0x19] = (uint ******)0x0;
      pppppppuVar25[0x1a] = (uint ******)0x0;
      pppppppuVar25[0x1b] = (uint ******)0x0;
      pppppppuVar25[0x1c] = (uint ******)0x0;
      pppppppuVar25[0x1d] = (uint ******)0x0;
      pppppppuVar25[0x1e] = (uint ******)0x0;
      pppppppuVar25[0x1f] = (uint ******)0x0;
      pppppppuVar25[4] = (uint ******)&UNK_0f3314e0;
      pppppppuVar22 = pppppppuVar25 + 0x2e;
      pppppppuVar25[0x2e] = (uint ******)0x0;
      pppppppuVar25[0x2f] = (uint ******)0x0;
      *(byte *)(pppppppuVar25 + 0x36) = 0;
      if (pppppppuVar22 != &ppppppuStack_848) {
        if (ppppppuStack_848 == (uint ******)0x0) {
          ppppppuVar23 = (uint ******)0x0;
        }
        else {
          (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar22);
          ppppppuVar23 = ppppppuStack_848;
        }
        ppppppuStack_848 = (uint ******)0x0;
        *pppppppuVar22 = ppppppuVar23;
      }
      pppppppuVar22 = pppppppuVar25 + 0x12;
      if (pppppppuStack_850 != (uint *******)&DAT_0f552108) {
        if (((ulong)*pppppppuVar22 & 1) == 0) {
          if ((_DAT_0f552110 & 1) == 0) {
            pppppppuVar25[0x14] = _DAT_0f552120;
            uVar15 = uRam000000000f55211c;
            uVar14 = _DAT_0f552118;
            uVar13 = uRam000000000f552114;
            *(uint *)pppppppuVar22 = _DAT_0f552110;
            *(uint *)((long)pppppppuVar25 + 0x94) = uVar13;
            *(uint *)(pppppppuVar25 + 0x13) = uVar14;
            *(uint *)((long)pppppppuVar25 + 0x9c) = uVar15;
          }
          else {
            func_0x04885070(pppppppuVar22,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118)
                           );
          }
        }
        else {
          bVar49 = (_DAT_0f552110 & 1) != 0;
          ppppppuVar23 = (uint ******)0xf552111;
          if (bVar49) {
            ppppppuVar23 = _DAT_0f552120;
          }
          uVar45 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
          if (bVar49) {
            uVar45 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
          }
          FUN_04885120(pppppppuVar22,ppppppuVar23,uVar45);
        }
      }
      pppppppuVar26 = pppppppuVar25 + 1;
      pppppppuVar25[0x11] = _DAT_0f552108;
      pppppppuVar25[0x15] = (uint ******)0x0;
      if (ppppppuStack_848 != (uint ******)0x0) {
        (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
      }
      LOCK();
      *pppppppuVar26 = (uint ******)((long)*pppppppuVar26 + 1);
      UNLOCK();
      pppppppuStack_7e8 = pppppppuVar22;
      pppppppuStack_7e0 = pppppppuVar26;
      pppppppuVar31 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      pppppppuVar27 = (uint *******)0x186186186186186;
      if (pppppppuVar31 == (uint *******)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      pppppppuVar31[1] = (uint ******)0x0;
      pppppppuVar31[2] = (uint ******)0x0;
      *pppppppuVar31 = (uint ******)&UNK_0f3315d8;
      pppppppuVar31[6] = (uint ******)0x0;
      pppppppuVar31[7] = (uint ******)0x0;
      pppppppuVar31[4] = (uint ******)&UNK_0f331628;
      pppppppuVar31[0xe] = (uint ******)(pppppppuVar25 + 4);
      pppppppuVar31[0xf] = (uint ******)pppppppuVar25;
      LOCK();
      pppppppuVar25[1] = (uint ******)((long)pppppppuVar25[1] + 1);
      UNLOCK();
      pppppppuStack_7f0 = pppppppuVar31 + 1;
      pppppppuVar26 = (uint *******)pppppppuVar30[0x1c];
      pppppppuVar40 = (uint *******)pppppppuVar30[0x1b];
      pppppppuVar44 = pppppppuVar40;
      while (pppppppuStack_808 = pppppppuVar31, pppppppuVar44 != pppppppuVar26) {
        if ((pppppppuVar44[0xf] == (uint ******)0x0) &&
           (pppppppuVar44[0x10] == (uint ******)0xffffffffffffffff)) goto LAB_0bd8e179;
        pppppppuVar22 = pppppppuVar44 + 0x15;
        pppppppuVar44 = pppppppuVar22;
      }
      if (pppppppuVar26 < pppppppuVar30[0x1d]) {
        func_0x0bdb05c0(pppppppuVar26);
        pppppppuVar22 = pppppppuVar26 + 0x15;
        pppppppuVar30[0x1c] = (uint ******)pppppppuVar22;
        pppppppuVar30[0x1c] = (uint ******)pppppppuVar22;
        ppppppuVar23 = *pppppppuVar26;
        bVar7 = *(byte *)ppppppuVar23;
        pppppppuVar26 = pppppppuVar22;
joined_r0x0bd8e126:
        if ((bVar7 & 1) == 0) {
          *(byte *)ppppppuVar23 = 0x26;
          pppppuVar32 = (uint *****)((long)ppppppuVar23 + 1);
        }
        else {
          ppppppuVar23[1] = (uint *****)0x13;
          pppppuVar32 = ppppppuVar23[2];
        }
        uVar15 = _UNK_01494d69;
        uVar14 = _UNK_01494d65;
        uVar13 = _UNK_01494d61;
        *(uint *)pppppuVar32 = _DAT_01494d5d;
        *(uint *)((long)pppppuVar32 + 4) = uVar13;
        *(uint *)(pppppuVar32 + 1) = uVar14;
        *(uint *)((long)pppppuVar32 + 0xc) = uVar15;
        pbVar47 = (byte *)((long)pppppuVar32 + 0xf);
        pbVar47[0] = 0x65;
        pbVar47[1] = 0x6e;
        pbVar47[2] = 0x74;
        pbVar47[3] = 0x3e;
        *(byte *)((long)pppppuVar32 + 0x13) = 0;
        ppppppuVar23 = pppppppuVar30[0x1c];
        pppppppuVar44 = (uint *******)(ppppppuVar23 + -0x15);
        *(byte *)((long)ppppppuVar23 + -7) = *(byte *)(pppppppuVar30 + 0x10);
        ppppppuVar23[-6] = (uint *****)0x0;
        ppppppuVar23[-5] = (uint *****)0xffffffffffffffff;
        *(undefined1 *)(ppppppuVar23 + -1) = 0;
LAB_0bd8e179:
        pppppppuVar27 = pppppppuVar31 + 4;
        pppppppuVar30 = (uint *******)pppppppuVar44[0x12];
        if (pppppppuVar44[0x13] <= pppppppuVar30) {
          pppppppuVar30 = (uint *******)((long)pppppppuVar30 - (long)pppppppuVar44[0x11]);
          uVar45 = ((long)pppppppuVar30 >> 3) * 0x6db6db6db6db6db7 + 1;
          if (uVar45 < 0x492492492492493) {
            pppppppuStack_828 = pppppppuVar44 + 0x11;
            lVar29 = (long)pppppppuVar44[0x13] - (long)pppppppuVar44[0x11] >> 3;
            uVar38 = lVar29 * -0x2492492492492492;
            if (uVar45 < uVar38) {
              uVar45 = uVar38;
            }
            if (0x249249249249248 < (ulong)(lVar29 * 0x6db6db6db6db6db7)) {
              uVar45 = 0x492492492492492;
            }
            pppppppuStack_790 = pppppppuStack_828;
            if (uVar45 == 0) {
              ppppppuVar23 = (uint ******)0x0;
            }
            else {
              pppppppuVar22 = pppppppuVar44;
              if (0x492492492492492 < uVar45) goto LAB_0bd90c02;
              ppppppuVar23 = (uint ******)
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45 * 0x38);
              if (ppppppuVar23 == (uint ******)0x0) {
                func_0x0eec74c0(uVar45 * 0x38,0);
                ppppppuVar23 = (uint ******)0x0;
              }
            }
            pppppppuVar22 = pppppppuStack_808;
            pppppppuVar26 = (uint *******)((long)ppppppuVar23 + (long)pppppppuVar30);
            uStack_838 = SUB81(pppppppuVar26,0);
            uStack_837 = (undefined2)((ulong)pppppppuVar26 >> 8);
            uStack_835 = (undefined1)((ulong)pppppppuVar26 >> 0x18);
            uStack_834 = (undefined4)((ulong)pppppppuVar26 >> 0x20);
            uStack_840 = (uint)pppppppuVar26;
            uStack_83c = (undefined1)((ulong)pppppppuVar26 >> 0x20);
            uStack_83b = (undefined2)((ulong)pppppppuVar26 >> 0x28);
            uStack_839 = (undefined1)((ulong)pppppppuVar26 >> 0x38);
            ppppppuVar35 = ppppppuVar23 + uVar45 * 7;
            uStack_830 = SUB81(ppppppuVar35,0);
            uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
            uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
            pbVar47 = (byte *)((long)(ppppppuVar23 + 2) + (long)pppppppuVar30);
            pbVar47[0] = 0;
            pbVar47[1] = 0;
            pbVar47[2] = 0;
            pbVar47[3] = 0;
            pbVar47[4] = 0;
            pbVar47[5] = 0;
            pbVar47[6] = 0;
            pbVar47[7] = 0;
            pbVar47[8] = 0;
            pbVar47[9] = 0;
            pbVar47[10] = 0;
            pbVar47[0xb] = 0;
            pbVar47[0xc] = 0;
            pbVar47[0xd] = 0;
            pbVar47[0xe] = 0;
            pbVar47[0xf] = 0;
            pbVar47 = (byte *)((long)ppppppuVar23 + (long)pppppppuVar30);
            pbVar47[0] = 0;
            pbVar47[1] = 0;
            pbVar47[2] = 0;
            pbVar47[3] = 0;
            pbVar47[4] = 0;
            pbVar47[5] = 0;
            pbVar47[6] = 0;
            pbVar47[7] = 0;
            pbVar47[8] = 0;
            pbVar47[9] = 0;
            pbVar47[10] = 0;
            pbVar47[0xb] = 0;
            pbVar47[0xc] = 0;
            pbVar47[0xd] = 0;
            pbVar47[0xe] = 0;
            pbVar47[0xf] = 0;
            pbVar47 = (byte *)((long)(ppppppuVar23 + 4) + (long)pppppppuVar30);
            pbVar47[0] = 0;
            pbVar47[1] = 0;
            pbVar47[2] = 0;
            pbVar47[3] = 0;
            pbVar47[4] = 0;
            pbVar47[5] = 0;
            pbVar47[6] = 0;
            pbVar47[7] = 0;
            pppppppuVar31 = pppppppuVar26;
            pppppppuVar40 = pppppppuVar26;
            ppppppuStack_848 = ppppppuVar23;
            if (pppppppuVar26 != pppppppuStack_850) {
              pbVar47 = (byte *)((long)ppppppuVar23 + (long)pppppppuVar30);
              if (((ulong)*pppppppuStack_7e8 & 1) == 0) {
                *(uint *******)(pbVar47 + 0x18) = pppppppuStack_7e8[2];
                uVar13 = *(uint *)((long)pppppppuStack_7e8 + 4);
                uVar14 = *(uint *)(pppppppuStack_7e8 + 1);
                uVar15 = *(uint *)((long)pppppppuStack_7e8 + 0xc);
                *(uint *)(pbVar47 + 8) = *(uint *)pppppppuStack_7e8;
                *(uint *)(pbVar47 + 0xc) = uVar13;
                *(uint *)(pbVar47 + 0x10) = uVar14;
                *(uint *)(pbVar47 + 0x14) = uVar15;
              }
              else {
                func_0x04885070(pbVar47 + 8,pppppppuStack_7f8[0x14],pppppppuStack_7f8[0x13]);
                pppppppuVar31 =
                     (uint *******)
                     CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
                pppppppuVar40 =
                     (uint *******)
                     CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
              }
            }
            pppppppuVar25 = pppppppuStack_7f8;
            *pppppppuVar26 = *pppppppuStack_850;
            pppppppuVar26[5] = (uint ******)pppppppuVar27;
            pppppppuVar26[6] = (uint ******)pppppppuVar22;
            LOCK();
            pppppppuVar22 = pppppppuVar22 + 1;
            *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + 1);
            UNLOCK();
            pppppppuVar40 = pppppppuVar40 + 7;
            uStack_838 = SUB81(pppppppuVar40,0);
            uStack_837 = (undefined2)((ulong)pppppppuVar40 >> 8);
            uStack_835 = (undefined1)((ulong)pppppppuVar40 >> 0x18);
            uStack_834 = (undefined4)((ulong)pppppppuVar40 >> 0x20);
            ppppppuVar43 = pppppppuVar44[0x11];
            ppppppuVar35 = pppppppuVar44[0x12];
            ppppppuVar23 = (uint ******)
                           ((long)pppppppuVar31 + ((long)ppppppuVar43 - (long)ppppppuVar35));
            ppppppuVar34 = ppppppuVar23;
            ppppppuVar39 = ppppppuVar43;
            if ((long)ppppppuVar43 - (long)ppppppuVar35 != 0) {
              do {
                ppppppuVar34[2] = (uint *****)0x0;
                ppppppuVar34[3] = (uint *****)0x0;
                *ppppppuVar34 = (uint *****)0x0;
                ppppppuVar34[1] = (uint *****)0x0;
                ppppppuVar34[4] = (uint *****)0x0;
                ppppppuVar34[3] = ppppppuVar39[3];
                pppppuVar32 = ppppppuVar39[2];
                ppppppuVar34[1] = ppppppuVar39[1];
                ppppppuVar34[2] = pppppuVar32;
                *(undefined2 *)(ppppppuVar39 + 1) = 0;
                *ppppppuVar34 = *ppppppuVar39;
                pppppuVar32 = ppppppuVar39[6];
                ppppppuVar34[5] = ppppppuVar39[5];
                ppppppuVar34[6] = pppppuVar32;
                ppppppuVar39[5] = (uint *****)0x0;
                ppppppuVar39[6] = (uint *****)0x0;
                ppppppuVar39 = ppppppuVar39 + 7;
                ppppppuVar34 = ppppppuVar34 + 7;
              } while (ppppppuVar39 != ppppppuVar35);
              do {
                pppppuVar32 = ppppppuVar43[6];
                if (pppppuVar32 == (uint *****)0x0) {
LAB_0bd8e434:
                  bVar7 = *(byte *)(ppppppuVar43 + 1);
                }
                else {
                  LOCK();
                  pppppuVar1 = pppppuVar32 + 1;
                  ppppuVar6 = *pppppuVar1;
                  *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
                  UNLOCK();
                  if (ppppuVar6 != (uint ****)0x0) goto LAB_0bd8e434;
                  (*(code *)(*pppppuVar32)[2])(pppppuVar32);
                  func_0x0412c2d0(pppppuVar32);
                  bVar7 = *(byte *)(ppppppuVar43 + 1);
                }
                if ((bVar7 & 1) != 0) {
                  func_0x0412a280(ppppppuVar43[3],(ulong)ppppppuVar43[1] & 0xfffffffffffffffe);
                }
                ppppppuVar43 = ppppppuVar43 + 7;
              } while (ppppppuVar43 != ppppppuVar35);
              ppppppuVar43 = *pppppppuStack_790;
              pppppppuVar40 =
                   (uint *******)
                   CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
            }
            pppppppuVar30 = pppppppuStack_7f0;
            pppppppuVar44[0x11] = ppppppuVar23;
            pppppppuVar44[0x12] = (uint ******)pppppppuVar40;
            ppppppuVar23 = pppppppuVar44[0x13];
            pppppppuVar44[0x13] = (uint ******)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
            if (ppppppuVar43 != (uint ******)0x0) {
              func_0x0412a280(ppppppuVar43,(long)ppppppuVar23 - (long)ppppppuVar43);
            }
            goto LAB_0bd8e4bb;
          }
          goto LAB_0bd90c20;
        }
        pppppppuVar30[2] = (uint ******)0x0;
        pppppppuVar30[3] = (uint ******)0x0;
        *pppppppuVar30 = (uint ******)0x0;
        pppppppuVar30[1] = (uint ******)0x0;
        pppppppuVar30[4] = (uint ******)0x0;
        if (pppppppuVar30 != pppppppuStack_850) {
          if (((ulong)*pppppppuStack_7e8 & 1) == 0) {
            pppppppuVar30[3] = pppppppuStack_7e8[2];
            ppppppuVar23 = pppppppuStack_7e8[1];
            pppppppuVar30[1] = *pppppppuStack_7e8;
            pppppppuVar30[2] = ppppppuVar23;
          }
          else {
            func_0x04885070(pppppppuVar30 + 1,pppppppuVar25[0x14],pppppppuVar25[0x13]);
          }
        }
        *pppppppuVar30 = *pppppppuStack_850;
        pppppppuVar30[5] = (uint ******)pppppppuVar27;
        pppppppuVar30[6] = (uint ******)pppppppuVar31;
        LOCK();
        pppppppuVar31[1] = (uint ******)((long)pppppppuVar31[1] + 1);
        UNLOCK();
        pppppppuVar40 = pppppppuVar30 + 7;
        pppppppuVar44[0x12] = (uint ******)pppppppuVar40;
        pppppppuVar30 = pppppppuStack_7f0;
LAB_0bd8e4bb:
        pppppppuVar44[0x12] = (uint ******)pppppppuVar40;
        uVar13 = *(uint *)pppppppuVar44;
        uVar14 = *(uint *)((long)pppppppuVar44 + 4);
        uVar15 = *(uint *)(pppppppuVar44 + 1);
        uVar16 = *(uint *)((long)pppppppuVar44 + 0xc);
        if (pppppppuVar44[1] != (uint ******)0x0) {
          LOCK();
          ppppppuVar23 = pppppppuVar44[1] + 1;
          *ppppppuVar23 = (uint *****)((long)*ppppppuVar23 + 1);
          UNLOCK();
        }
        ppppppuVar23 = pppppppuVar25[0xf];
        *(uint *)(pppppppuVar25 + 0xe) = uVar13;
        *(uint *)((long)pppppppuVar25 + 0x74) = uVar14;
        *(uint *)(pppppppuVar25 + 0xf) = uVar15;
        *(uint *)((long)pppppppuVar25 + 0x7c) = uVar16;
        if (ppppppuVar23 != (uint ******)0x0) {
          LOCK();
          ppppppuVar35 = ppppppuVar23 + 1;
          pppppuVar32 = *ppppppuVar35;
          *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
          UNLOCK();
          if (pppppuVar32 == (uint *****)0x0) {
            (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
            func_0x0412c2d0(ppppppuVar23);
          }
        }
        pppppppuVar22 = pppppppuStack_808;
        *(byte *)(pppppppuVar25 + 0x10) = *(byte *)((long)pppppppuVar44 + 0xa1);
        LOCK();
        ppppppuVar23 = *pppppppuVar30;
        *pppppppuVar30 = (uint ******)((long)*pppppppuVar30 + -1);
        UNLOCK();
        if (ppppppuVar23 == (uint ******)0x0) {
          (*(code *)(*pppppppuStack_808)[2])(pppppppuStack_808);
          func_0x0412c2d0(pppppppuVar22);
          LOCK();
          ppppppuVar23 = *pppppppuStack_7e0;
          *pppppppuStack_7e0 = (uint ******)((long)*pppppppuStack_7e0 + -1);
          UNLOCK();
          if (ppppppuVar23 != (uint ******)0x0) goto LAB_0bd8e548;
LAB_0bd8e738:
          pppppppuVar22 = pppppppuStack_7e0;
          (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
          func_0x0412c2d0(pppppppuVar25);
          LOCK();
          ppppppuVar23 = *pppppppuVar22;
          *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + -1);
          UNLOCK();
        }
        else {
          LOCK();
          ppppppuVar23 = *pppppppuStack_7e0;
          *pppppppuStack_7e0 = (uint ******)((long)*pppppppuStack_7e0 + -1);
          UNLOCK();
          if (ppppppuVar23 == (uint ******)0x0) goto LAB_0bd8e738;
LAB_0bd8e548:
          LOCK();
          ppppppuVar23 = *pppppppuStack_7e0;
          *pppppppuStack_7e0 = (uint ******)((long)*pppppppuStack_7e0 + -1);
          UNLOCK();
        }
        if (ppppppuVar23 == (uint ******)0x0) {
          (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
          func_0x0412c2d0(pppppppuVar25);
        }
        if (ppppppuStack_538 != (uint ******)0x0) {
          (*(code *)ppppppuStack_538[1])(&ppppppuStack_538);
        }
        uStack_74e = 0;
        pppppppuStack_748 = (uint *******)0x0;
        auStack_760._1_3_ = (undefined3)_DAT_013ed736;
        auStack_760[0] = 0x22;
        uStack_75c._1_3_ = (undefined3)_UNK_013ed73a;
        uStack_75c = CONCAT31(uStack_75c._1_3_,(char)((uint)_DAT_013ed736 >> 0x18));
        uStack_758._1_3_ = (undefined3)_UNK_013ed73e;
        uStack_758 = CONCAT31(uStack_758._1_3_,(char)((uint)_UNK_013ed73a >> 0x18));
        uStack_754._1_3_ = (undefined3)_UNK_013ed742;
        uStack_754 = CONCAT31(uStack_754._1_3_,(char)((uint)_UNK_013ed73e >> 0x18));
        uStack_750 = (undefined1)((uint)_UNK_013ed742 >> 0x18);
        uStack_74f = 0x3f;
        pppppppuStack_768 = (uint *******)0xfa30046fe4ea8ca7;
        uStack_170 = 0;
        pppppppuStack_7d8 = (uint *******)0x0;
        auStack_7d0 = (undefined1  [4])0x0;
        uStack_7cc = 0;
        uStack_7cb = 0;
        uStack_7c9 = 0;
        lStack_178 = 0;
        pppppppuVar27 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
        if (pppppppuVar27 == (uint *******)0x0) {
          func_0x0eec74c0(0x1c0,0);
        }
        pppppppuVar27[1] = (uint ******)0x0;
        pppppppuVar27[2] = (uint ******)0x0;
        *pppppppuVar27 = (uint ******)&UNK_0f3316e0;
        ppppppuStack_848 = (uint ******)0x0;
        uStack_840 = 0;
        uStack_83c = 0;
        uStack_83b = 0;
        uStack_839 = 0;
        pppppppuStack_7d8 = (uint *******)0x0;
        pppppppuVar27[4] = (uint ******)&UNK_0f2ccd78;
        pppppppuVar27[5] = (uint ******)0x0;
        pppppppuVar27[6] = (uint ******)0x0;
        pppppppuVar27[7] = (uint ******)0x0;
        pppppppuVar27[8] = (uint ******)0x0;
        pppppppuVar27[9] = (uint ******)0x0;
        pppppppuVar27[10] = (uint ******)0x0;
        pppppppuVar27[0xb] = (uint ******)0x0;
        pppppppuVar27[0xc] = (uint ******)0x0;
        *(byte *)(pppppppuVar27 + 0xd) = 0;
        pppppppuStack_7e8 = pppppppuVar27;
        func_0x04aa75f0(pppppppuVar27 + 0xe,&lStack_3f8,&UNK_01254d89);
        *(byte *)(pppppppuVar27 + 0x10) = 0;
        pppppppuStack_7e0 = pppppppuVar27 + 0x11;
        pppppppuVar27[0x11] = (uint ******)0x0;
        pppppppuVar27[0x12] = (uint ******)0x0;
        pppppppuVar27[0x13] = (uint ******)0x0;
        pppppppuVar27[0x14] = (uint ******)0x0;
        pppppppuVar27[0x15] = (uint ******)0x0;
        pppppppuVar27[0x16] = (uint ******)0x0;
        pppppppuVar27[0x17] = (uint ******)0xffffffff;
        pppppppuVar27[0x26] = (uint ******)0x0;
        pppppppuVar27[0x27] = (uint ******)0x0;
        pppppppuVar27[0x18] = (uint ******)0x0;
        pppppppuVar27[0x19] = (uint ******)0x0;
        pppppppuVar27[0x1a] = (uint ******)0x0;
        pppppppuVar27[0x1b] = (uint ******)0x0;
        pppppppuVar27[0x1c] = (uint ******)0x0;
        pppppppuVar27[0x1d] = (uint ******)0x0;
        pppppppuVar27[0x1e] = (uint ******)0x0;
        pppppppuVar27[0x1f] = (uint ******)0x0;
        pppppppuVar27[4] = (uint ******)&UNK_0f331730;
        pppppppuVar27[0x2e] = _DAT_014eae60;
        *(byte *)(pppppppuVar27 + 0x2f) = 1;
        pppppppuVar27[0x30] = (uint ******)0x0;
        pppppppuVar27[0x31] = (uint ******)0x0;
        if (ppppppuStack_848 == (uint ******)0x0) {
          ppppppuVar23 = (uint ******)0x0;
        }
        else {
          (*(code *)*ppppppuStack_848)(&ppppppuStack_848,pppppppuVar27 + 0x30);
          ppppppuVar23 = ppppppuStack_848;
        }
        ppppppuStack_848 = (uint ******)0x0;
        pppppppuVar27[0x30] = ppppppuVar23;
        pppppppuStack_6c8 = pppppppuVar27 + 0x12;
        if (pppppppuStack_7e0 == (uint *******)&DAT_0f552018) {
          pppppppuVar27[0x15] = (uint ******)0x0;
        }
        else {
          if (((ulong)*pppppppuStack_6c8 & 1) == 0) {
            if ((_DAT_0f552020 & 1) == 0) {
              pppppppuVar27[0x14] = _DAT_0f552030;
              uVar15 = uRam000000000f55202c;
              uVar14 = _DAT_0f552028;
              uVar13 = uRam000000000f552024;
              *(uint *)pppppppuStack_6c8 = _DAT_0f552020;
              *(uint *)((long)pppppppuVar27 + 0x94) = uVar13;
              *(uint *)(pppppppuVar27 + 0x13) = uVar14;
              *(uint *)((long)pppppppuVar27 + 0x9c) = uVar15;
            }
            else {
              func_0x04885070(pppppppuStack_6c8,_DAT_0f552030,
                              CONCAT44(uRam000000000f55202c,_DAT_0f552028));
            }
          }
          else {
            bVar49 = (_DAT_0f552020 & 1) != 0;
            ppppppuVar23 = (uint ******)0xf552021;
            if (bVar49) {
              ppppppuVar23 = _DAT_0f552030;
            }
            uVar45 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
            if (bVar49) {
              uVar45 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
            }
            FUN_04885120(pppppppuStack_6c8,ppppppuVar23,uVar45);
          }
          pppppppuVar27[0x11] = _DAT_0f552018;
          pppppppuVar27[0x15] = (uint ******)0x0;
          if (ppppppuStack_848 != (uint ******)0x0) {
            (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
          }
        }
        pppppppuVar22 = pppppppuVar27 + 1;
        if (pppppppuStack_7d8 != (uint *******)0x0) {
          (*(code *)pppppppuStack_7d8[1])(&pppppppuStack_7d8);
        }
        LOCK();
        *pppppppuVar22 = (uint ******)((long)*pppppppuVar22 + 1);
        UNLOCK();
        pppppppuStack_778 = pppppppuVar22;
        pppppppuVar26 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (pppppppuVar26 == (uint *******)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        pppppppuVar44 = pppppppuStack_748;
        pppppppuVar31 = pppppppuStack_768;
        pppppppuVar26[1] = (uint ******)0x0;
        pppppppuVar26[2] = (uint ******)0x0;
        *pppppppuVar26 = (uint ******)&UNK_0f331810;
        pppppppuVar26[6] = (uint ******)0x0;
        pppppppuVar26[7] = (uint ******)0x0;
        pppppppuVar26[4] = (uint ******)&UNK_0f331860;
        pppppppuVar26[0xe] = (uint ******)(pppppppuVar27 + 4);
        pppppppuVar26[0xf] = (uint ******)pppppppuVar27;
        LOCK();
        pppppppuVar27[1] = (uint ******)((long)pppppppuVar27[1] + 1);
        UNLOCK();
        pppppppuStack_788 = pppppppuVar26 + 1;
        pppppppuStack_770 = (uint *******)pppppppuVar25[0x1b];
        pppppppuVar22 = (uint *******)pppppppuVar25[0x1c];
        pppppppuStack_7f0 = pppppppuVar26;
        pppppppuStack_790 = pppppppuVar26;
        if (pppppppuStack_770 != pppppppuVar22) {
          if (((uint)auStack_760 & 1) == 0) {
            pppppppuVar26 = (uint *******)(ulong)(auStack_760[0] >> 1);
            pppppppuStack_808 = (uint *******)(auStack_760 + 1);
          }
          else {
            pppppppuVar26 = (uint *******)CONCAT44(uStack_754,uStack_758);
            pppppppuStack_808 = (uint *******)CONCAT62(uStack_74e,CONCAT11(uStack_74f,uStack_750));
          }
          pppppppuStack_850 = pppppppuStack_748;
          pppppppuVar25 = (uint *******)&pppppppuStack_768;
          pppppppuVar40 = (uint *******)((long)pppppppuStack_770 + 0x19);
          do {
            if (*(uint ********)((long)pppppppuVar40 + -9) == pppppppuVar31) {
              if ((*(uint ********)((long)pppppppuVar40 + 0x17) == pppppppuVar25) &&
                 ((uint *******)((long)pppppppuVar40 + -9) == pppppppuVar44)) {
LAB_0bd8ee40:
                pppppppuVar27 = (uint *******)((long)pppppppuVar40 + -0x19);
                pppppppuVar31 = pppppppuStack_7f0;
                pppppppuVar22 = pppppppuStack_7e8;
                goto LAB_0bd8ee4e;
              }
              bVar7 = *(byte *)((long)pppppppuVar40 + -1);
              if ((bVar7 & 1) == 0) {
                pppppppuVar30 = (uint *******)(ulong)(bVar7 >> 1);
              }
              else {
                pppppppuVar30 = *(uint ********)((long)pppppppuVar40 + 7);
              }
              if (pppppppuVar30 == pppppppuVar26) {
                pppppppuVar30 = pppppppuVar40;
                if ((bVar7 & 1) != 0) {
                  pppppppuVar30 = *(uint ********)((long)pppppppuVar40 + 0xf);
                }
                iVar18 = bcmp(pppppppuVar30,pppppppuStack_808,pppppppuVar26);
                if (iVar18 == 0) {
                  *(uint ********)((long)pppppppuVar40 + 0x17) = pppppppuVar25;
                  pppppppuStack_748 = (uint *******)((long)pppppppuVar40 + -9);
                  goto LAB_0bd8ee40;
                }
              }
            }
            pbVar47 = (byte *)((long)pppppppuVar40 + 0x17);
            pbVar47[0] = 0;
            pbVar47[1] = 0;
            pbVar47[2] = 0;
            pbVar47[3] = 0;
            pbVar47[4] = 0;
            pbVar47[5] = 0;
            pbVar47[6] = 0;
            pbVar47[7] = 0;
            pppppppuVar27 = pppppppuVar40 + 0x15;
            pppppppuVar41 = (uint *******)((long)pppppppuVar40 + 0x8f);
            pppppppuVar40 = pppppppuVar27;
            pppppppuVar30 = pppppppuVar31;
          } while (pppppppuVar41 != pppppppuVar22);
        }
        pppppppuVar31 = pppppppuStack_7f0;
        pppppppuVar25 = pppppppuStack_7f8;
        if (pppppppuVar22 < pppppppuStack_7f8[0x1d]) {
          func_0x0bdb1f40(pppppppuVar22);
          pppppppuVar22 = pppppppuVar22 + 0x15;
          pppppppuVar25[0x1c] = (uint ******)pppppppuVar22;
          pppppppuVar31 = pppppppuStack_7f0;
        }
        else {
          lVar29 = (long)pppppppuVar22 - (long)pppppppuStack_770;
          pppppppuVar22 = (uint *******)((lVar29 >> 3) * -0x30c30c30c30c30c3 + 1);
          if ((uint *******)0x186186186186186 < pppppppuVar22) goto LAB_0bd90c39;
          pppppppuVar27 = pppppppuStack_7f8 + 0x1b;
          lVar33 = (long)pppppppuStack_7f8[0x1d] - (long)pppppppuStack_770 >> 3;
          pppppppuVar30 = (uint *******)(lVar33 * -0x6186186186186186);
          if (pppppppuVar22 < pppppppuVar30) {
            pppppppuVar22 = pppppppuVar30;
          }
          if (0xc30c30c30c30c2 < (ulong)(lVar33 * -0x30c30c30c30c30c3)) {
            pppppppuVar22 = (uint *******)0x186186186186186;
          }
          pppppppuStack_828 = pppppppuVar27;
          if (pppppppuVar22 == (uint *******)0x0) {
            ppppppuVar23 = (uint ******)0x0;
          }
          else {
            pppppppuVar30 = pppppppuStack_7f0;
            if ((uint *******)0x186186186186186 < pppppppuVar22) goto LAB_0bd90c11;
            ppppppuVar23 = (uint ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))
                                     (&DAT_0f5463b0,(long)pppppppuVar22 * 0xa8);
            if (ppppppuVar23 == (uint ******)0x0) {
              func_0x0eec74c0((long)pppppppuVar22 * 0xa8,0);
              ppppppuVar23 = (uint ******)0x0;
            }
          }
          lVar29 = lVar29 + (long)ppppppuVar23;
          uStack_838 = (undefined1)lVar29;
          uStack_837 = (undefined2)((ulong)lVar29 >> 8);
          uStack_835 = (undefined1)((ulong)lVar29 >> 0x18);
          uStack_834 = (undefined4)((ulong)lVar29 >> 0x20);
          uStack_840 = (uint)lVar29;
          uStack_83c = (undefined1)((ulong)lVar29 >> 0x20);
          uStack_83b = (undefined2)((ulong)lVar29 >> 0x28);
          uStack_839 = (undefined1)((ulong)lVar29 >> 0x38);
          ppppppuVar35 = ppppppuVar23 + (long)pppppppuVar22 * 0x15;
          uStack_830 = SUB81(ppppppuVar35,0);
          uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
          uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
          ppppppuStack_848 = ppppppuVar23;
          func_0x0bdb1f40(lVar29);
          pppppppuVar22 =
               (uint *******)
               (CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838))) + 0xa8);
          ppppppuVar23 = pppppppuVar25[0x1b];
          ppppppuVar35 = pppppppuVar25[0x1c];
          ppppppuVar43 = (uint ******)
                         ((long)ppppppuVar23 +
                         (CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)))
                         - (long)ppppppuVar35));
          if (ppppppuVar23 != ppppppuVar35) {
            lVar29 = 0;
            do {
              uVar28 = ((undefined8 *)((long)ppppppuVar23 + lVar29))[1];
              *(undefined8 *)((long)ppppppuVar43 + lVar29) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29);
              ((undefined8 *)((long)ppppppuVar43 + lVar29))[1] = uVar28;
              *(undefined8 *)((long)ppppppuVar23 + lVar29) = 0;
              ((undefined8 *)((long)ppppppuVar23 + lVar29))[1] = 0;
              puVar20 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x20);
              *puVar20 = 0;
              puVar20[1] = 0;
              puVar20 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x10);
              *puVar20 = 0;
              puVar20[1] = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x30) = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x28) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x28);
              puVar21 = (undefined4 *)((long)ppppppuVar23 + lVar29 + 0x18);
              uVar9 = puVar21[1];
              uVar10 = puVar21[2];
              uVar11 = puVar21[3];
              puVar5 = (undefined4 *)((long)ppppppuVar43 + lVar29 + 0x18);
              *puVar5 = *puVar21;
              puVar5[1] = uVar9;
              puVar5[2] = uVar10;
              puVar5[3] = uVar11;
              *(undefined2 *)((long)ppppppuVar23 + lVar29 + 0x18) = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x10) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x10);
              FUN_04167a20((long)ppppppuVar43 + lVar29 + 0x38,(long)ppppppuVar23 + lVar29 + 0x38);
              puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x40);
              uVar28 = puVar20[1];
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x40);
              *puVar48 = *puVar20;
              puVar48[1] = uVar28;
              puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x50);
              uVar28 = puVar20[1];
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x50);
              *puVar48 = *puVar20;
              puVar48[1] = uVar28;
              puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x60);
              uVar28 = puVar20[1];
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x60);
              *puVar48 = *puVar20;
              puVar48[1] = uVar28;
              puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x60);
              *puVar20 = 0;
              puVar20[1] = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x70) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x70);
              puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x78);
              uVar28 = puVar20[1];
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x78);
              *puVar48 = *puVar20;
              puVar48[1] = uVar28;
              puVar20 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x88);
              *puVar20 = 0;
              puVar20[1] = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x98) = 0;
              puVar21 = (undefined4 *)((long)ppppppuVar23 + lVar29 + 0x88);
              uVar9 = puVar21[1];
              uVar10 = puVar21[2];
              uVar11 = puVar21[3];
              puVar5 = (undefined4 *)((long)ppppppuVar43 + lVar29 + 0x88);
              *puVar5 = *puVar21;
              puVar5[1] = uVar9;
              puVar5[2] = uVar10;
              puVar5[3] = uVar11;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x98) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x98);
              puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x88);
              *puVar20 = 0;
              puVar20[1] = 0;
              *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x98) = 0;
              *(undefined2 *)((long)ppppppuVar43 + lVar29 + 0xa0) =
                   *(undefined2 *)((long)ppppppuVar23 + lVar29 + 0xa0);
              lVar33 = lVar29 + 0xa8;
              lVar29 = lVar29 + 0xa8;
            } while ((uint ******)((long)ppppppuVar23 + lVar33) != ppppppuVar35);
            do {
              func_0x0bdaef20(ppppppuVar23);
              ppppppuVar23 = ppppppuVar23 + 0x15;
            } while (ppppppuVar23 != ppppppuVar35);
            ppppppuVar23 = *pppppppuVar27;
            pppppppuVar25 = pppppppuStack_7f8;
          }
          pppppppuVar25[0x1b] = ppppppuVar43;
          pppppppuVar25[0x1c] = (uint ******)pppppppuVar22;
          ppppppuVar35 = pppppppuVar25[0x1d];
          pppppppuVar25[0x1d] = (uint ******)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
          pppppppuStack_850 = pppppppuVar27;
          if (ppppppuVar23 != (uint ******)0x0) {
            func_0x0412a280(ppppppuVar23,(long)ppppppuVar35 - (long)ppppppuVar23);
          }
        }
        pppppppuVar25[0x1c] = (uint ******)pppppppuVar22;
        func_0x0b63b6d0(pppppppuVar22[-0x15],&pppppppuStack_768);
        ppppppuVar23 = pppppppuVar25[0x1c];
        *(byte *)((long)ppppppuVar23 + -7) = *(byte *)(pppppppuVar25 + 0x10);
        if ((uint ********)(ppppppuVar23 + -0x13) != &pppppppuStack_768) {
          ppppppuVar35 = ppppppuVar23 + -0x12;
          if (((ulong)*ppppppuVar35 & 1) == 0) {
            if (((uint)auStack_760 & 1) == 0) {
              ppppppuVar23[-0x10] = (uint *****)CONCAT62(uStack_74e,CONCAT11(uStack_74f,uStack_750))
              ;
              *(undefined1 (*) [4])ppppppuVar35 = auStack_760;
              *(undefined4 *)((long)ppppppuVar23 + -0x8c) = uStack_75c;
              *(undefined4 *)(ppppppuVar23 + -0x11) = uStack_758;
              *(undefined4 *)((long)ppppppuVar23 + -0x84) = uStack_754;
            }
            else {
              func_0x04885070(ppppppuVar35,CONCAT62(uStack_74e,CONCAT11(uStack_74f,uStack_750)),
                              CONCAT44(uStack_754,uStack_758));
            }
          }
          else {
            bVar49 = ((uint)auStack_760 & 1) != 0;
            puVar42 = auStack_760 + 1;
            if (bVar49) {
              puVar42 = (undefined1 *)CONCAT62(uStack_74e,CONCAT11(uStack_74f,uStack_750));
            }
            uVar45 = (ulong)(auStack_760[0] >> 1);
            if (bVar49) {
              uVar45 = CONCAT44(uStack_754,uStack_758);
            }
            FUN_04885120(ppppppuVar35,puVar42,uVar45);
          }
        }
        ppppppuVar23[-0x13] = (uint *****)pppppppuStack_768;
        ppppppuVar23[-0xf] = (uint *****)0x0;
        func_0x04aa9390(&ppppppuStack_848,auStack_760,*(byte *)(pppppppuVar25 + 0x10));
        ppppppuVar23 = pppppppuVar25[0x1c];
        func_0x04167a70(ppppppuVar23 + -0xe,&ppppppuStack_848);
        ppppppuVar23[-0xd] =
             (uint *****)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
        ppppppuVar23[-0xc] =
             (uint *****)CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
        ppppppuVar23[-0xb] = (uint *****)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
        ppppppuVar23[-10] = (uint *****)pppppppuStack_828;
        uVar9 = (undefined4)uStack_820;
        uVar10 = uStack_820._4_4_;
        uVar11 = (undefined4)uStack_818;
        uVar12 = uStack_818._4_4_;
        uStack_820 = 0;
        uStack_818 = (uint *******)0x0;
        pppppuVar32 = ppppppuVar23[-8];
        *(undefined4 *)(ppppppuVar23 + -9) = uVar9;
        *(undefined4 *)((long)ppppppuVar23 + -0x44) = uVar10;
        *(undefined4 *)(ppppppuVar23 + -8) = uVar11;
        *(undefined4 *)((long)ppppppuVar23 + -0x3c) = uVar12;
        if (pppppuVar32 != (uint *****)0x0) {
          LOCK();
          pppppuVar1 = pppppuVar32 + 1;
          ppppuVar6 = *pppppuVar1;
          *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
          UNLOCK();
          if (ppppuVar6 == (uint ****)0x0) {
            (*(code *)(*pppppuVar32)[2])(pppppuVar32);
            func_0x0412c2d0(pppppuVar32);
          }
        }
        pppppppuVar22 = pppppppuStack_7e8;
        pppppppuVar26 = uStack_818;
        ppppppuVar23[-7] = pppppuStack_810;
        if (uStack_818 != (uint *******)0x0) {
          LOCK();
          pppppppuVar30 = uStack_818 + 1;
          ppppppuVar23 = *pppppppuVar30;
          *pppppppuVar30 = (uint ******)((long)*pppppppuVar30 + -1);
          UNLOCK();
          if (ppppppuVar23 == (uint ******)0x0) {
            (*(code *)(*uStack_818)[2])(uStack_818);
            func_0x0412c2d0(pppppppuVar26);
          }
        }
        func_0x04167a40(&ppppppuStack_848);
        ppppppuVar23 = pppppppuVar25[0x1c];
        *(undefined1 *)(ppppppuVar23 + -1) = 0;
        pppppppuVar27 = (uint *******)(ppppppuVar23 + -0x15);
LAB_0bd8ee4e:
        pppppppuVar30 = pppppppuVar31 + 4;
        pppppppuVar26 = (uint *******)pppppppuVar27[0x12];
        if (pppppppuVar26 < pppppppuVar27[0x13]) {
          pppppppuVar26[2] = (uint ******)0x0;
          pppppppuVar26[3] = (uint ******)0x0;
          *pppppppuVar26 = (uint ******)0x0;
          pppppppuVar26[1] = (uint ******)0x0;
          pppppppuVar26[4] = (uint ******)0x0;
          if (pppppppuVar26 != pppppppuStack_7e0) {
            if (((ulong)*pppppppuStack_6c8 & 1) == 0) {
              pppppppuVar26[3] = pppppppuStack_6c8[2];
              ppppppuVar23 = pppppppuStack_6c8[1];
              pppppppuVar26[1] = *pppppppuStack_6c8;
              pppppppuVar26[2] = ppppppuVar23;
            }
            else {
              func_0x04885070(pppppppuVar26 + 1,pppppppuVar22[0x14],pppppppuVar22[0x13]);
            }
          }
          *pppppppuVar26 = *pppppppuStack_7e0;
          pppppppuVar26[5] = (uint ******)pppppppuVar30;
          pppppppuVar26[6] = (uint ******)pppppppuStack_790;
          LOCK();
          pppppppuStack_790[1] = (uint ******)((long)pppppppuStack_790[1] + 1);
          UNLOCK();
          pppppppuVar26 = pppppppuVar26 + 7;
          pppppppuVar27[0x12] = (uint ******)pppppppuVar26;
          goto LAB_0bd8f18d;
        }
        pppppppuVar26 = (uint *******)((long)pppppppuVar26 - (long)pppppppuVar27[0x11]);
        pppppppuVar44 = (uint *******)(((long)pppppppuVar26 >> 3) * 0x6db6db6db6db6db7 + 1);
        if (pppppppuVar44 < (uint *******)0x492492492492493) {
          pppppppuStack_850 = pppppppuVar27 + 0x11;
          lVar29 = (long)pppppppuVar27[0x13] - (long)pppppppuVar27[0x11] >> 3;
          pppppppuVar31 = (uint *******)(lVar29 * -0x2492492492492492);
          pppppppuVar22 = pppppppuVar44;
          if (pppppppuVar44 < pppppppuVar31) {
            pppppppuVar22 = pppppppuVar31;
          }
          if (0x249249249249248 < (ulong)(lVar29 * 0x6db6db6db6db6db7)) {
            pppppppuVar22 = (uint *******)0x492492492492492;
          }
          pppppppuStack_828 = pppppppuStack_850;
          if (pppppppuVar22 == (uint *******)0x0) {
            ppppppuVar23 = (uint ******)0x0;
          }
          else {
            if ((uint *******)0x492492492492492 < pppppppuVar22) goto LAB_0bd90c11;
            ppppppuVar23 = (uint ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))
                                     (&DAT_0f5463b0,(long)pppppppuVar22 * 0x38);
            if (ppppppuVar23 == (uint ******)0x0) {
              func_0x0eec74c0((long)pppppppuVar22 * 0x38,0);
              ppppppuVar23 = (uint ******)0x0;
            }
          }
          pppppppuVar25 = (uint *******)((long)ppppppuVar23 + (long)pppppppuVar26);
          uStack_838 = SUB81(pppppppuVar25,0);
          uStack_837 = (undefined2)((ulong)pppppppuVar25 >> 8);
          uStack_835 = (undefined1)((ulong)pppppppuVar25 >> 0x18);
          uStack_834 = (undefined4)((ulong)pppppppuVar25 >> 0x20);
          uStack_840 = (uint)pppppppuVar25;
          uStack_83c = (undefined1)((ulong)pppppppuVar25 >> 0x20);
          uStack_83b = (undefined2)((ulong)pppppppuVar25 >> 0x28);
          uStack_839 = (undefined1)((ulong)pppppppuVar25 >> 0x38);
          ppppppuVar35 = ppppppuVar23 + (long)pppppppuVar22 * 7;
          uStack_830 = SUB81(ppppppuVar35,0);
          uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
          uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
          pbVar47 = (byte *)((long)(ppppppuVar23 + 2) + (long)pppppppuVar26);
          pbVar47[0] = 0;
          pbVar47[1] = 0;
          pbVar47[2] = 0;
          pbVar47[3] = 0;
          pbVar47[4] = 0;
          pbVar47[5] = 0;
          pbVar47[6] = 0;
          pbVar47[7] = 0;
          pbVar47[8] = 0;
          pbVar47[9] = 0;
          pbVar47[10] = 0;
          pbVar47[0xb] = 0;
          pbVar47[0xc] = 0;
          pbVar47[0xd] = 0;
          pbVar47[0xe] = 0;
          pbVar47[0xf] = 0;
          pbVar47 = (byte *)((long)ppppppuVar23 + (long)pppppppuVar26);
          pbVar47[0] = 0;
          pbVar47[1] = 0;
          pbVar47[2] = 0;
          pbVar47[3] = 0;
          pbVar47[4] = 0;
          pbVar47[5] = 0;
          pbVar47[6] = 0;
          pbVar47[7] = 0;
          pbVar47[8] = 0;
          pbVar47[9] = 0;
          pbVar47[10] = 0;
          pbVar47[0xb] = 0;
          pbVar47[0xc] = 0;
          pbVar47[0xd] = 0;
          pbVar47[0xe] = 0;
          pbVar47[0xf] = 0;
          pbVar47 = (byte *)((long)(ppppppuVar23 + 4) + (long)pppppppuVar26);
          pbVar47[0] = 0;
          pbVar47[1] = 0;
          pbVar47[2] = 0;
          pbVar47[3] = 0;
          pbVar47[4] = 0;
          pbVar47[5] = 0;
          pbVar47[6] = 0;
          pbVar47[7] = 0;
          pppppppuVar22 = pppppppuVar25;
          pppppppuVar31 = pppppppuVar25;
          ppppppuStack_848 = ppppppuVar23;
          pppppppuStack_7f0 = pppppppuVar30;
          if (pppppppuVar25 != pppppppuStack_7e0) {
            pbVar47 = (byte *)((long)ppppppuVar23 + (long)pppppppuVar26);
            if (((ulong)*pppppppuStack_6c8 & 1) == 0) {
              *(uint *******)(pbVar47 + 0x18) = pppppppuStack_6c8[2];
              uVar13 = *(uint *)((long)pppppppuStack_6c8 + 4);
              uVar14 = *(uint *)(pppppppuStack_6c8 + 1);
              uVar15 = *(uint *)((long)pppppppuStack_6c8 + 0xc);
              *(uint *)(pbVar47 + 8) = *(uint *)pppppppuStack_6c8;
              *(uint *)(pbVar47 + 0xc) = uVar13;
              *(uint *)(pbVar47 + 0x10) = uVar14;
              *(uint *)(pbVar47 + 0x14) = uVar15;
            }
            else {
              func_0x04885070(pbVar47 + 8,pppppppuStack_7e8[0x14],pppppppuStack_7e8[0x13]);
              pppppppuVar22 =
                   (uint *******)
                   CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)));
              pppppppuVar31 =
                   (uint *******)
                   CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
            }
          }
          *pppppppuVar25 = *pppppppuStack_7e0;
          pppppppuVar25[5] = (uint ******)pppppppuStack_7f0;
          pppppppuVar25[6] = (uint ******)pppppppuStack_790;
          LOCK();
          pppppppuStack_790[1] = (uint ******)((long)pppppppuStack_790[1] + 1);
          UNLOCK();
          pppppppuVar26 = pppppppuVar31 + 7;
          uStack_838 = SUB81(pppppppuVar26,0);
          uStack_837 = (undefined2)((ulong)pppppppuVar26 >> 8);
          uStack_835 = (undefined1)((ulong)pppppppuVar26 >> 0x18);
          uStack_834 = (undefined4)((ulong)pppppppuVar26 >> 0x20);
          ppppppuVar35 = pppppppuVar27[0x11];
          ppppppuVar43 = pppppppuVar27[0x12];
          ppppppuVar23 = (uint ******)
                         ((long)pppppppuVar22 + ((long)ppppppuVar35 - (long)ppppppuVar43));
          ppppppuVar34 = ppppppuVar23;
          ppppppuVar39 = ppppppuVar35;
          if ((long)ppppppuVar35 - (long)ppppppuVar43 != 0) {
            do {
              ppppppuVar34[2] = (uint *****)0x0;
              ppppppuVar34[3] = (uint *****)0x0;
              *ppppppuVar34 = (uint *****)0x0;
              ppppppuVar34[1] = (uint *****)0x0;
              ppppppuVar34[4] = (uint *****)0x0;
              ppppppuVar34[3] = ppppppuVar39[3];
              pppppuVar32 = ppppppuVar39[2];
              ppppppuVar34[1] = ppppppuVar39[1];
              ppppppuVar34[2] = pppppuVar32;
              *(undefined2 *)(ppppppuVar39 + 1) = 0;
              *ppppppuVar34 = *ppppppuVar39;
              pppppuVar32 = ppppppuVar39[6];
              ppppppuVar34[5] = ppppppuVar39[5];
              ppppppuVar34[6] = pppppuVar32;
              ppppppuVar39[5] = (uint *****)0x0;
              ppppppuVar39[6] = (uint *****)0x0;
              ppppppuVar39 = ppppppuVar39 + 7;
              ppppppuVar34 = ppppppuVar34 + 7;
            } while (ppppppuVar39 != ppppppuVar43);
            do {
              pppppuVar32 = ppppppuVar35[6];
              if (pppppuVar32 == (uint *****)0x0) {
LAB_0bd8f114:
                bVar7 = *(byte *)(ppppppuVar35 + 1);
              }
              else {
                LOCK();
                pppppuVar1 = pppppuVar32 + 1;
                ppppuVar6 = *pppppuVar1;
                *pppppuVar1 = (uint ****)((long)*pppppuVar1 + -1);
                UNLOCK();
                if (ppppuVar6 != (uint ****)0x0) goto LAB_0bd8f114;
                (*(code *)(*pppppuVar32)[2])(pppppuVar32);
                func_0x0412c2d0(pppppuVar32);
                bVar7 = *(byte *)(ppppppuVar35 + 1);
              }
              if ((bVar7 & 1) != 0) {
                func_0x0412a280(ppppppuVar35[3],(ulong)ppppppuVar35[1] & 0xfffffffffffffffe);
              }
              ppppppuVar35 = ppppppuVar35 + 7;
            } while (ppppppuVar35 != ppppppuVar43);
            ppppppuVar35 = *pppppppuStack_850;
            pppppppuVar26 =
                 (uint *******)
                 CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
          }
          pppppppuVar22 = pppppppuStack_7e8;
          pppppppuVar27[0x11] = ppppppuVar23;
          pppppppuVar27[0x12] = (uint ******)pppppppuVar26;
          ppppppuVar23 = pppppppuVar27[0x13];
          pppppppuVar27[0x13] = (uint ******)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
          if (ppppppuVar35 != (uint ******)0x0) {
            func_0x0412a280(ppppppuVar35,(long)ppppppuVar23 - (long)ppppppuVar35);
          }
LAB_0bd8f18d:
          pppppppuVar25 = pppppppuStack_778;
          pppppppuVar27[0x12] = (uint ******)pppppppuVar26;
          uVar13 = *(uint *)pppppppuVar27;
          uVar14 = *(uint *)((long)pppppppuVar27 + 4);
          uVar15 = *(uint *)(pppppppuVar27 + 1);
          uVar16 = *(uint *)((long)pppppppuVar27 + 0xc);
          if (pppppppuVar27[1] != (uint ******)0x0) {
            LOCK();
            ppppppuVar23 = pppppppuVar27[1] + 1;
            *ppppppuVar23 = (uint *****)((long)*ppppppuVar23 + 1);
            UNLOCK();
          }
          ppppppuVar23 = pppppppuVar22[0xf];
          *(uint *)(pppppppuVar22 + 0xe) = uVar13;
          *(uint *)((long)pppppppuVar22 + 0x74) = uVar14;
          *(uint *)(pppppppuVar22 + 0xf) = uVar15;
          *(uint *)((long)pppppppuVar22 + 0x7c) = uVar16;
          if (ppppppuVar23 != (uint ******)0x0) {
            LOCK();
            ppppppuVar35 = ppppppuVar23 + 1;
            pppppuVar32 = *ppppppuVar35;
            *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + -1);
            UNLOCK();
            if (pppppuVar32 == (uint *****)0x0) {
              (*(code *)(*ppppppuVar23)[2])(ppppppuVar23);
              func_0x0412c2d0(ppppppuVar23);
            }
          }
          pppppppuVar26 = pppppppuStack_790;
          *(byte *)(pppppppuVar22 + 0x10) = *(byte *)((long)pppppppuVar27 + 0xa1);
          LOCK();
          ppppppuVar23 = *pppppppuStack_788;
          *pppppppuStack_788 = (uint ******)((long)*pppppppuStack_788 + -1);
          UNLOCK();
          if (ppppppuVar23 == (uint ******)0x0) {
            (*(code *)(*pppppppuStack_790)[2])(pppppppuStack_790);
            func_0x0412c2d0(pppppppuVar26);
            LOCK();
            ppppppuVar23 = *pppppppuVar25;
            *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
            UNLOCK();
          }
          else {
            LOCK();
            ppppppuVar23 = *pppppppuVar25;
            *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
            UNLOCK();
          }
          if (ppppppuVar23 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar22)[2])(pppppppuVar22);
            func_0x0412c2d0(pppppppuVar22);
            LOCK();
            ppppppuVar23 = *pppppppuVar25;
            *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
            UNLOCK();
          }
          else {
            LOCK();
            ppppppuVar23 = *pppppppuVar25;
            *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
            UNLOCK();
          }
          if (ppppppuVar23 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar22)[2])(pppppppuVar22);
            func_0x0412c2d0(pppppppuVar22);
          }
          if (lStack_178 != 0) {
            (**(code **)(lStack_178 + 8))(&lStack_178);
          }
          if (((uint)auStack_760 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_74e,CONCAT11(uStack_74f,uStack_750)),
                            CONCAT44(uStack_75c,auStack_760) & 0xfffffffffffffffe);
          }
          uStack_834 = 0;
          uStack_830 = 0;
          uStack_82f = 0;
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840 = 0x61727416;
          uStack_83c = 0x6e;
          uStack_83b = 0x6973;
          uStack_839 = 0x74;
          uStack_838 = 0x69;
          uStack_837 = 0x6e6f;
          uStack_835 = 0x73;
          ppppppuStack_848 = (uint ******)0x99f401b528fc23a3;
          pppppppuStack_768 = (uint *******)0x0;
          auStack_760 = (undefined1  [4])0x0;
          uStack_75c = 0;
          uVar28 = FUN_0bd921f0(pppppppuStack_800,&ppppppuStack_848,&pppppppuStack_768);
          if (pppppppuStack_768 != (uint *******)0x0) {
            (*(code *)pppppppuStack_768[1])(&pppppppuStack_768);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          lStack_3f8 = 0;
          uStack_3f0 = 0;
          lVar29 = func_0x0bd93500(uVar28,0,&lStack_3f8);
          *(undefined8 *)(lVar29 + 0x90) = 1;
          *(undefined8 *)(lVar29 + 0x98) = 1;
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          bStack_5f0 = 0x1e;
          uStack_5ef = 0x5a2d417a2d615b;
          uStack_5e8 = 0x30;
          uStack_5e7 = 0x2b5d2d2e5f392d;
          lStack_5f8 = 0x255423bc7931a16a;
          uStack_1b0 = 0;
          pppppppuStack_7d8 = (uint *******)0x0;
          auStack_7d0 = (undefined1  [4])0x0;
          uStack_7cc = 0;
          uStack_7cb = 0;
          uStack_7c9 = 0;
          lStack_1b8 = 0;
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(0x1d0,0);
          }
          plVar19[1] = 0;
          plVar19[2] = 0;
          *plVar19 = (long)&UNK_0f331918;
          ppppppuStack_848 = (uint ******)0x0;
          uStack_840 = 0;
          uStack_83c = 0;
          uStack_83b = 0;
          uStack_839 = 0;
          pppppppuStack_7d8 = (uint *******)0x0;
          plVar19[4] = (long)&UNK_0f2ccd78;
          plVar19[5] = 0;
          plVar19[6] = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          plVar19[9] = 0;
          plVar19[10] = 0;
          plVar19[0xb] = 0;
          plVar19[0xc] = 0;
          *(undefined1 *)(plVar19 + 0xd) = 0;
          func_0x04aa75f0(plVar19 + 0xe,&plStack_578,&UNK_01254d89);
          *(undefined1 *)(plVar19 + 0x10) = 0;
          plVar19[0x11] = 0;
          plVar19[0x12] = 0;
          plVar19[0x13] = 0;
          plVar19[0x14] = 0;
          plVar19[0x15] = 0;
          plVar19[0x16] = 0;
          plVar19[0x17] = 0xffffffff;
          plVar19[0x26] = 0;
          plVar19[0x27] = 0;
          plVar19[0x18] = 0;
          plVar19[0x19] = 0;
          plVar19[0x1a] = 0;
          plVar19[0x1b] = 0;
          plVar19[0x1c] = 0;
          plVar19[0x1d] = 0;
          plVar19[0x1e] = 0;
          plVar19[0x1f] = 0;
          plVar19[4] = (long)&UNK_0f331968;
          plVar19[0x2e] = 0;
          plVar19[0x2f] = 0;
          if (ppppppuStack_848 == (uint ******)0x0) {
            ppppppuVar23 = (uint ******)0x0;
          }
          else {
            (*(code *)*ppppppuStack_848)(&ppppppuStack_848,plVar19 + 0x2e);
            ppppppuVar23 = ppppppuStack_848;
          }
          ppppppuStack_848 = (uint ******)0x0;
          plVar19[0x2e] = (long)ppppppuVar23;
          plStack_578 = plVar19 + 0x36;
          plVar19[0x36] = 0;
          plVar19[0x37] = 0;
          plVar19[0x38] = 0;
          uStack_570 = uStack_570 & 0xffffffffffffff00;
          puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar20 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          plVar46 = plVar19 + 0x11;
          plVar19[0x36] = (long)puVar20;
          plVar19[0x38] = (long)(puVar20 + 5);
          puVar20[4] = 0;
          puVar20[1] = 0x746c75616665640e;
          puVar20[2] = 0;
          puVar20[3] = 0;
          *puVar20 = 0xdead4915c9c6c0d8;
          plVar19[0x37] = (long)(puVar20 + 5);
          puVar24 = (uint *)(plVar19 + 0x12);
          if (plVar46 != (long *)&DAT_0f5520d8) {
            if ((*puVar24 & 1) == 0) {
              if ((_DAT_0f5520e0 & 1) == 0) {
                plVar19[0x14] = _DAT_0f5520f0;
                uVar11 = uRam000000000f5520ec;
                uVar10 = _DAT_0f5520e8;
                uVar9 = uRam000000000f5520e4;
                *puVar24 = _DAT_0f5520e0;
                *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
                *(undefined4 *)(plVar19 + 0x13) = uVar10;
                *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
              }
              else {
                func_0x04885070(puVar24,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
              }
            }
            else {
              bVar49 = (_DAT_0f5520e0 & 1) != 0;
              lVar33 = 0xf5520e1;
              if (bVar49) {
                lVar33 = _DAT_0f5520f0;
              }
              uVar45 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
              if (bVar49) {
                uVar45 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
              }
              FUN_04885120(puVar24,lVar33,uVar45);
            }
          }
          plVar19[0x11] = _DAT_0f5520d8;
          plVar19[0x15] = 0;
          pppppppuStack_808 = (uint *******)puVar24;
          if (ppppppuStack_848 != (uint ******)0x0) {
            (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
          }
          plVar37 = plVar19 + 1;
          if (pppppppuStack_7d8 != (uint *******)0x0) {
            (*(code *)pppppppuStack_7d8[1])(&pppppppuStack_7d8);
          }
          LOCK();
          *plVar37 = *plVar37 + 1;
          UNLOCK();
          puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (puVar20 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x80,0);
          }
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = &UNK_0f331a48;
          puVar20[6] = 0;
          puVar20[7] = 0;
          puVar20[4] = &UNK_0f331a98;
          puVar20[0xe] = plVar19 + 4;
          puVar20[0xf] = plVar19;
          LOCK();
          plVar19[1] = plVar19[1] + 1;
          UNLOCK();
          uStack_840 = (uint)puVar20;
          uStack_83c = (undefined1)((ulong)puVar20 >> 0x20);
          uStack_83b = (undefined2)((ulong)puVar20 >> 0x28);
          uStack_839 = (undefined1)((ulong)puVar20 >> 0x38);
          ppppppuStack_848 = (uint ******)(puVar20 + 4);
          puVar21 = (undefined4 *)func_0x0bdaad90(lVar29,&lStack_5f8,1);
          plVar36 = *(long **)(puVar21 + 0x24);
          if (plVar36 < *(long **)(puVar21 + 0x26)) {
            plVar36[2] = 0;
            plVar36[3] = 0;
            *plVar36 = 0;
            plVar36[1] = 0;
            plVar36[4] = 0;
            if (plVar36 != plVar46) {
              puVar24 = (uint *)(plVar36 + 1);
              if (((ulong)*pppppppuStack_808 & 1) == 0) {
                plVar36[3] = *(long *)((long)pppppppuStack_808 + 0x10);
                lVar29 = *(long *)((long)pppppppuStack_808 + 8);
                *(uint *******)puVar24 = *pppppppuStack_808;
                plVar36[2] = lVar29;
              }
              else {
                pppppppuStack_808 = (uint *******)puVar24;
                func_0x04885070(puVar24,plVar19[0x14],plVar19[0x13]);
              }
            }
            *plVar36 = *plVar46;
            plVar36[5] = (long)(puVar20 + 4);
            plVar36[6] = (long)puVar20;
            LOCK();
            puVar20[1] = puVar20[1] + 1;
            UNLOCK();
            plVar36 = plVar36 + 7;
            *(long **)(puVar21 + 0x24) = plVar36;
          }
          else {
            plVar36 = (long *)func_0x0bdad260(puVar21 + 0x22,plVar46,&ppppppuStack_848);
          }
          *(long **)(puVar21 + 0x24) = plVar36;
          uVar9 = *puVar21;
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          if (*(long *)(puVar21 + 2) != 0) {
            LOCK();
            plVar46 = (long *)(*(long *)(puVar21 + 2) + 8);
            *plVar46 = *plVar46 + 1;
            UNLOCK();
          }
          plVar46 = (long *)plVar19[0xf];
          *(undefined4 *)(plVar19 + 0xe) = uVar9;
          *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
          *(undefined4 *)(plVar19 + 0xf) = uVar11;
          *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
          if (plVar46 != (long *)0x0) {
            LOCK();
            plVar36 = plVar46 + 1;
            lVar29 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar46 + 0x10))(plVar46);
              func_0x0412c2d0(plVar46);
            }
          }
          *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
          plVar46 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    );
          if (plVar46 != (long *)0x0) {
            LOCK();
            plVar36 = plVar46 + 1;
            lVar29 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar46 + 0x10))(plVar46);
              func_0x0412c2d0(plVar46);
            }
          }
          LOCK();
          lVar29 = *plVar37;
          *plVar37 = *plVar37 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
            LOCK();
            lVar29 = *plVar37;
            *plVar37 = *plVar37 + -1;
            UNLOCK();
          }
          else {
            LOCK();
            lVar29 = *plVar37;
            *plVar37 = *plVar37 + -1;
            UNLOCK();
          }
          if (lVar29 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
          }
          if (lStack_1b8 != 0) {
            (**(code **)(lStack_1b8 + 8))(&lStack_1b8);
          }
          if ((bStack_5f0 & 1) != 0) {
            func_0x0412a280(uStack_5e0,CONCAT71(uStack_5ef,bStack_5f0) & 0xfffffffffffffffe);
          }
          if (lStack_3f8 != 0) {
            (**(code **)(lStack_3f8 + 8))(&lStack_3f8);
          }
          uStack_82f = 0;
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840._1_3_ = (undefined3)_DAT_014082b1;
          uStack_840 = CONCAT31(uStack_840._1_3_,0x20);
          uStack_83c = (undefined1)((uint)_DAT_014082b1 >> 0x18);
          uStack_83b = (undefined2)_UNK_014082b5;
          uStack_839 = (undefined1)((uint)_UNK_014082b5 >> 0x10);
          uStack_838 = (undefined1)((uint)_UNK_014082b5 >> 0x18);
          uStack_837 = (undefined2)_UNK_014082b9;
          uStack_835 = (undefined1)((uint)_UNK_014082b9 >> 0x10);
          uStack_834._1_3_ = (undefined3)_UNK_014082bd;
          uStack_834 = CONCAT31(uStack_834._1_3_,(char)((uint)_UNK_014082b9 >> 0x18));
          uStack_830 = (undefined1)((uint)_UNK_014082bd >> 0x18);
          ppppppuStack_848 = (uint ******)0x63d42d252a8e6c14;
          lStack_5f8 = 0;
          bStack_5f0 = 0;
          uStack_5ef = 0;
          uVar28 = FUN_0bd921f0(pppppppuStack_800,&ppppppuStack_848,&lStack_5f8);
          if (lStack_5f8 != 0) {
            (**(code **)(lStack_5f8 + 8))(&lStack_5f8);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          plStack_578 = (long *)0x0;
          uStack_570 = 0;
          uVar28 = func_0x0bd93500(uVar28,0,&plStack_578);
          if (plStack_578 != (long *)0x0) {
            (*(code *)plStack_578[1])(&plStack_578);
          }
          uStack_838 = 0;
          uStack_837 = 0;
          uStack_835 = 0;
          uStack_834 = 0;
          uStack_830 = 0;
          uStack_82f = 0;
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840 = 0x6666650c;
          uStack_83c = 0x65;
          uStack_83b = 0x7463;
          uStack_839 = 0;
          ppppppuStack_848 = (uint ******)0x8a6443c516e15cbe;
          lStack_1f8 = 0;
          uStack_1f0 = 0;
          plVar19 = (long *)func_0x0bd93a10(uVar28,&ppppppuStack_848,1,&lStack_1f8);
          *(undefined1 *)(plVar19 + 0x3a) = 1;
          puStack_6d0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (puStack_6d0 == (undefined4 *)0x0) {
            func_0x0eec74c0(0x38,0);
          }
          uVar17 = _UNK_013508b2;
          uStack_6e0 = 0x39;
          uStack_6d8 = 0x33;
          *(undefined8 *)(puStack_6d0 + 8) = _DAT_013508aa;
          *(undefined8 *)(puStack_6d0 + 10) = uVar17;
          uVar17 = _UNK_013508a2;
          *(undefined8 *)(puStack_6d0 + 4) = _DAT_0135089a;
          *(undefined8 *)(puStack_6d0 + 6) = uVar17;
          uVar11 = _UNK_01350896;
          uVar10 = _UNK_01350892;
          uVar9 = _UNK_0135088e;
          *puStack_6d0 = _DAT_0135088a;
          puStack_6d0[1] = uVar9;
          puStack_6d0[2] = uVar10;
          puStack_6d0[3] = uVar11;
          *(undefined4 *)((long)puStack_6d0 + 0x2f) = 0x64657961;
          *(undefined1 *)((long)puStack_6d0 + 0x33) = 0;
          (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_6e0);
          if ((uStack_6e0 & 1) != 0) {
            func_0x0412a280(puStack_6d0,uStack_6e0 & 0xfffffffffffffffe);
          }
          if (lStack_1f8 != 0) {
            (**(code **)(lStack_1f8 + 8))(&lStack_1f8);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_838 = 0;
          uStack_837 = 0;
          uStack_835 = 0;
          uStack_834 = 0;
          uStack_830 = 0;
          uStack_82f = 0;
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840 = 0x636f6c0e;
          uStack_83c = 0x61;
          uStack_83b = 0x6f74;
          uStack_839 = 0x72;
          ppppppuStack_848 = (uint ******)0x1631bdf97bc29369;
          lStack_238 = 0;
          uStack_230 = 0;
          plVar19 = (long *)func_0x0bd93a10(uVar28,&ppppppuStack_848,0,&lStack_238);
          *(undefined1 *)(plVar19 + 0x3a) = 1;
          puStack_6e8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
          if (puStack_6e8 == (undefined4 *)0x0) {
            func_0x0eec74c0(0x48,0);
          }
          uVar17 = _UNK_0143d78b;
          uStack_6f8 = 0x49;
          uStack_6f0 = 0x45;
          *(undefined8 *)(puStack_6e8 + 0xc) = _DAT_0143d783;
          *(undefined8 *)(puStack_6e8 + 0xe) = uVar17;
          uVar17 = _UNK_0143d77b;
          *(undefined8 *)(puStack_6e8 + 8) = _DAT_0143d773;
          *(undefined8 *)(puStack_6e8 + 10) = uVar17;
          uVar17 = _UNK_0143d76b;
          *(undefined8 *)(puStack_6e8 + 4) = _DAT_0143d763;
          *(undefined8 *)(puStack_6e8 + 6) = uVar17;
          uVar11 = _UNK_0143d75f;
          uVar10 = _UNK_0143d75b;
          uVar9 = _UNK_0143d757;
          *puStack_6e8 = _DAT_0143d753;
          puStack_6e8[1] = uVar9;
          puStack_6e8[2] = uVar10;
          puStack_6e8[3] = uVar11;
          *(undefined8 *)((long)puStack_6e8 + 0x3d) = 0x64657461636f6c20;
          *(undefined1 *)((long)puStack_6e8 + 0x45) = 0;
          (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_6f8);
          if ((uStack_6f8 & 1) != 0) {
            func_0x0412a280(puStack_6e8,uStack_6f8 & 0xfffffffffffffffe);
          }
          if (lStack_238 != 0) {
            (**(code **)(lStack_238 + 8))(&lStack_238);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840._1_3_ = (undefined3)_DAT_013508be;
          uStack_840 = CONCAT31(uStack_840._1_3_,0x22);
          uStack_83c = (undefined1)((uint)_DAT_013508be >> 0x18);
          uStack_83b = (undefined2)_UNK_013508c2;
          uStack_839 = (undefined1)((uint)_UNK_013508c2 >> 0x10);
          uStack_838 = (undefined1)((uint)_UNK_013508c2 >> 0x18);
          uStack_837 = (undefined2)_UNK_013508c6;
          uStack_835 = (undefined1)((uint)_UNK_013508c6 >> 0x10);
          uStack_834._1_3_ = (undefined3)_UNK_013508ca;
          uStack_834 = CONCAT31(uStack_834._1_3_,(char)((uint)_UNK_013508c6 >> 0x18));
          uStack_830 = (undefined1)((uint)_UNK_013508ca >> 0x18);
          uStack_82f = 0x74;
          ppppppuStack_848 = (uint ******)0x42cd0bbc5cb5583a;
          lStack_278 = 0;
          uStack_270 = 0;
          plVar19 = (long *)func_0x0bd93a10(uVar28,&ppppppuStack_848,0,&lStack_278);
          *(undefined1 *)(plVar19 + 0x3a) = 1;
          puStack_700 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
          if (puStack_700 == (undefined4 *)0x0) {
            func_0x0eec74c0(0x50,0);
          }
          uVar17 = _UNK_014d9474;
          uStack_710 = 0x51;
          uStack_708 = 0x49;
          *(ulong *)((long)puStack_700 + 0x39) = CONCAT17(UNK_014d9473,_DAT_014d946c);
          *(undefined8 *)((long)puStack_700 + 0x41) = uVar17;
          uVar17 = CONCAT71(_DAT_014d946c,UNK_014d946b);
          *(undefined8 *)(puStack_700 + 0xc) = _DAT_014d9463;
          *(undefined8 *)(puStack_700 + 0xe) = uVar17;
          uVar17 = _UNK_014d945b;
          *(undefined8 *)(puStack_700 + 8) = _DAT_014d9453;
          *(undefined8 *)(puStack_700 + 10) = uVar17;
          uVar17 = _UNK_014d944b;
          *(undefined8 *)(puStack_700 + 4) = _DAT_014d9443;
          *(undefined8 *)(puStack_700 + 6) = uVar17;
          uVar11 = _UNK_014d943f;
          uVar10 = _UNK_014d943b;
          uVar9 = _UNK_014d9437;
          *puStack_700 = _DAT_014d9433;
          puStack_700[1] = uVar9;
          puStack_700[2] = uVar10;
          puStack_700[3] = uVar11;
          *(undefined1 *)((long)puStack_700 + 0x49) = 0;
          (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_710);
          if ((uStack_710 & 1) != 0) {
            func_0x0412a280(puStack_700,uStack_710 & 0xfffffffffffffffe);
          }
          if (lStack_278 != 0) {
            (**(code **)(lStack_278 + 8))(&lStack_278);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_622 = 0;
          uStack_620 = 0;
          uStack_618 = 0;
          bStack_630 = 0x1a;
          uStack_62f = 0x5f646e6962;
          uStack_62a = 0x6f74;
          uStack_628 = 0x5f;
          uStack_627 = 0x726f746361;
          lStack_638 = 0x34b992eeebc13eba;
          uStack_2b0 = 0;
          pppppppuStack_7d8 = (uint *******)0x0;
          auStack_7d0 = (undefined1  [4])0x0;
          uStack_7cc = 0;
          uStack_7cb = 0;
          uStack_7c9 = 0;
          lStack_2b8 = 0;
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(0x1d0,0);
          }
          plVar19[1] = 0;
          plVar19[2] = 0;
          *plVar19 = (long)&UNK_0f331cd8;
          ppppppuStack_848 = (uint ******)0x0;
          uStack_840 = 0;
          uStack_83c = 0;
          uStack_83b = 0;
          uStack_839 = 0;
          pppppppuStack_7d8 = (uint *******)0x0;
          plVar19[4] = (long)&UNK_0f2ccd78;
          plVar19[5] = 0;
          plVar19[6] = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          plVar19[9] = 0;
          plVar19[10] = 0;
          plVar19[0xb] = 0;
          plVar19[0xc] = 0;
          *(undefined1 *)(plVar19 + 0xd) = 0;
          func_0x04aa75f0(plVar19 + 0xe,&lStack_438,&UNK_01254d89);
          *(undefined1 *)(plVar19 + 0x10) = 0;
          plVar46 = plVar19 + 0x11;
          plVar19[0x11] = 0;
          plVar19[0x12] = 0;
          plVar19[0x13] = 0;
          plVar19[0x14] = 0;
          plVar19[0x15] = 0;
          plVar19[0x16] = 0;
          plVar19[0x17] = 0xffffffff;
          plVar19[0x26] = 0;
          plVar19[0x27] = 0;
          plVar19[0x18] = 0;
          plVar19[0x19] = 0;
          plVar19[0x1a] = 0;
          plVar19[0x1b] = 0;
          plVar19[0x1c] = 0;
          plVar19[0x1d] = 0;
          plVar19[0x1e] = 0;
          plVar19[0x1f] = 0;
          plVar19[4] = (long)&UNK_0f331d28;
          plVar19[0x2f] = 0;
          plVar19[0x30] = 0;
          plVar19[0x2e] = (long)(plVar19 + 0x2f);
          ppppppuVar23 = (uint ******)(plVar19 + 0x32);
          plVar19[0x32] = 0;
          plVar19[0x33] = 0;
          if ((uint *******)ppppppuVar23 != &ppppppuStack_848) {
            if (ppppppuStack_848 == (uint ******)0x0) {
              ppppppuVar35 = (uint ******)0x0;
            }
            else {
              (*(code *)*ppppppuStack_848)(&ppppppuStack_848,ppppppuVar23);
              ppppppuVar35 = ppppppuStack_848;
            }
            ppppppuStack_848 = (uint ******)0x0;
            *ppppppuVar23 = (uint *****)ppppppuVar35;
          }
          pppppppuStack_808 = (uint *******)(plVar19 + 0x12);
          if (plVar46 != (long *)&DAT_0f551f88) {
            if ((*(uint *)pppppppuStack_808 & 1) == 0) {
              if ((_DAT_0f551f90 & 1) == 0) {
                plVar19[0x14] = _DAT_0f551fa0;
                uVar11 = uRam000000000f551f9c;
                uVar10 = _DAT_0f551f98;
                uVar9 = uRam000000000f551f94;
                *(uint *)pppppppuStack_808 = _DAT_0f551f90;
                *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
                *(undefined4 *)(plVar19 + 0x13) = uVar10;
                *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
              }
              else {
                func_0x04885070(pppppppuStack_808,_DAT_0f551fa0,
                                CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
              }
            }
            else {
              bVar49 = (_DAT_0f551f90 & 1) != 0;
              lVar29 = 0xf551f91;
              if (bVar49) {
                lVar29 = _DAT_0f551fa0;
              }
              uVar45 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
              if (bVar49) {
                uVar45 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
              }
              FUN_04885120(pppppppuStack_808,lVar29,uVar45);
            }
          }
          plVar19[0x11] = _DAT_0f551f88;
          plVar19[0x15] = 0;
          if (ppppppuStack_848 != (uint ******)0x0) {
            (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
          }
          plVar37 = plVar19 + 1;
          if (pppppppuStack_7d8 != (uint *******)0x0) {
            (*(code *)pppppppuStack_7d8[1])(&pppppppuStack_7d8);
          }
          LOCK();
          *plVar37 = *plVar37 + 1;
          UNLOCK();
          puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (puVar20 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x80,0);
          }
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = &UNK_0f331388;
          puVar20[6] = 0;
          puVar20[7] = 0;
          puVar20[4] = &UNK_0f3313d8;
          puVar20[0xe] = plVar19 + 4;
          puVar20[0xf] = plVar19;
          LOCK();
          plVar19[1] = plVar19[1] + 1;
          UNLOCK();
          uStack_840 = (uint)puVar20;
          uStack_83c = (undefined1)((ulong)puVar20 >> 0x20);
          uStack_83b = (undefined2)((ulong)puVar20 >> 0x28);
          uStack_839 = (undefined1)((ulong)puVar20 >> 0x38);
          ppppppuStack_848 = (uint ******)(puVar20 + 4);
          pppppppuStack_7f0 = (uint *******)(plVar19 + 4);
          puVar21 = (undefined4 *)func_0x0bdaad90(uVar28,&lStack_638,0);
          plVar36 = *(long **)(puVar21 + 0x24);
          if (plVar36 < *(long **)(puVar21 + 0x26)) {
            plVar36[2] = 0;
            plVar36[3] = 0;
            *plVar36 = 0;
            plVar36[1] = 0;
            plVar36[4] = 0;
            if (plVar36 != plVar46) {
              puVar24 = (uint *)(plVar36 + 1);
              if (((ulong)*pppppppuStack_808 & 1) == 0) {
                plVar36[3] = *(long *)((long)pppppppuStack_808 + 0x10);
                lVar29 = *(long *)((long)pppppppuStack_808 + 8);
                *(uint *******)puVar24 = *pppppppuStack_808;
                plVar36[2] = lVar29;
              }
              else {
                pppppppuStack_808 = (uint *******)puVar24;
                func_0x04885070(puVar24,plVar19[0x14],plVar19[0x13]);
              }
            }
            *plVar36 = *plVar46;
            plVar36[5] = (long)(puVar20 + 4);
            plVar36[6] = (long)puVar20;
            LOCK();
            puVar20[1] = puVar20[1] + 1;
            UNLOCK();
            plVar36 = plVar36 + 7;
            *(long **)(puVar21 + 0x24) = plVar36;
          }
          else {
            plVar36 = (long *)func_0x0bdad260(puVar21 + 0x22,plVar46,&ppppppuStack_848);
          }
          pppppppuVar22 = pppppppuStack_7f0;
          *(long **)(puVar21 + 0x24) = plVar36;
          uVar9 = *puVar21;
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          if (*(long *)(puVar21 + 2) != 0) {
            LOCK();
            plVar46 = (long *)(*(long *)(puVar21 + 2) + 8);
            *plVar46 = *plVar46 + 1;
            UNLOCK();
          }
          plVar46 = (long *)plVar19[0xf];
          *(undefined4 *)(plVar19 + 0xe) = uVar9;
          *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
          *(undefined4 *)(plVar19 + 0xf) = uVar11;
          *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
          if (plVar46 != (long *)0x0) {
            LOCK();
            plVar36 = plVar46 + 1;
            lVar29 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar46 + 0x10))(plVar46);
              func_0x0412c2d0(plVar46);
            }
          }
          *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
          plVar46 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    );
          if (plVar46 != (long *)0x0) {
            LOCK();
            plVar36 = plVar46 + 1;
            lVar29 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar46 + 0x10))(plVar46);
              func_0x0412c2d0(plVar46);
            }
          }
          LOCK();
          lVar29 = *plVar37;
          *plVar37 = *plVar37 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
            LOCK();
            lVar29 = *plVar37;
            *plVar37 = *plVar37 + -1;
            UNLOCK();
          }
          else {
            LOCK();
            lVar29 = *plVar37;
            *plVar37 = *plVar37 + -1;
            UNLOCK();
          }
          if (lVar29 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
          }
          lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
          if (lVar29 == 0) {
            func_0x0eec74c0(0x88,0);
          }
          uStack_728 = 0x89;
          uStack_720 = 0x82;
          lStack_718 = lVar29;
          func_0x0eee2f00(lVar29,&UNK_013508d0,0x82);
          *(undefined1 *)(lVar29 + 0x82) = 0;
          lVar29 = (**(code **)((long)*pppppppuVar22 + 0x10))(pppppppuVar22,&uStack_728);
          puVar20 = *(undefined8 **)(lVar29 + 0x158);
          if (*(undefined8 **)(lVar29 + 0x158) == (undefined8 *)0x0) {
            puVar48 = (undefined8 *)(lVar29 + 0x158);
          }
          else {
            do {
              puVar48 = puVar20;
              if (*(char *)((long)puVar48 + 0x19) == '\0') goto LAB_0bd90318;
              puVar20 = (undefined8 *)*puVar48;
            } while ((undefined8 *)*puVar48 != (undefined8 *)0x0);
          }
          puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar20 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *(undefined1 *)((long)puVar20 + 0x19) = 0;
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20[2] = puVar48;
          *puVar48 = puVar20;
          if (**(long **)(lVar29 + 0x150) != 0) {
            *(long *)(lVar29 + 0x150) = **(long **)(lVar29 + 0x150);
          }
          func_0x048bed00(*(undefined8 *)(lVar29 + 0x158),puVar20);
          *(long *)(lVar29 + 0x160) = *(long *)(lVar29 + 0x160) + 1;
LAB_0bd90318:
          if ((uStack_728 & 1) != 0) {
            func_0x0412a280(lStack_718,uStack_728 & 0xfffffffffffffffe);
          }
          if (lStack_2b8 != 0) {
            (**(code **)(lStack_2b8 + 8))(&lStack_2b8);
          }
          if ((bStack_630 & 1) != 0) {
            func_0x0412a280(uStack_620,
                            CONCAT26(uStack_62a,CONCAT51(uStack_62f,bStack_630)) &
                            0xfffffffffffffffe);
          }
          uStack_837 = 0;
          uStack_835 = 0;
          uStack_834 = 0;
          uStack_830 = 0;
          uStack_82f = 0;
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840 = 0x5f6e6f10;
          uStack_83c = 0x65;
          uStack_83b = 0x746e;
          uStack_839 = 0x72;
          uStack_838 = 0x79;
          ppppppuStack_848 = (uint ******)0x80ca54b169bb7e13;
          lStack_638 = 0;
          bStack_630 = 0;
          uStack_62f = 0;
          uStack_62a = 0;
          uVar28 = FUN_0bd921f0(pppppppuStack_800,&ppppppuStack_848,&lStack_638);
          lStack_438 = 0;
          uStack_430 = 0;
          func_0x0bd92f30(uVar28,0,&lStack_438);
          if (lStack_438 != 0) {
            (**(code **)(lStack_438 + 8))(&lStack_438);
          }
          if (lStack_638 != 0) {
            (**(code **)(lStack_638 + 8))(&lStack_638);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_838 = 0;
          uStack_837 = 0;
          uStack_835 = 0;
          uStack_834 = 0;
          uStack_830 = 0;
          uStack_82f = 0;
          uStack_82e = 0;
          pppppppuStack_828 = (uint *******)0x0;
          uStack_840 = 0x5f6e6f0e;
          uStack_83c = 0x65;
          uStack_83b = 27000;
          uStack_839 = 0x74;
          ppppppuStack_848 = (uint ******)0x32e3c863ddc39b45;
          lStack_2f8 = 0;
          uStack_2f0 = 0;
          uVar28 = FUN_0bd921f0(pppppppuStack_800,&ppppppuStack_848,&lStack_2f8);
          lStack_338 = 0;
          uStack_330 = 0;
          func_0x0bd92f30(uVar28,0,&lStack_338);
          if (lStack_338 != 0) {
            (**(code **)(lStack_338 + 8))(&lStack_338);
          }
          if (lStack_2f8 != 0) {
            (**(code **)(lStack_2f8 + 8))(&lStack_2f8);
          }
          if ((uStack_840 & 1) != 0) {
            func_0x0412a280(CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830)),
                            CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_64a = 0;
          uStack_648 = 0;
          uStack_640 = 0;
          bStack_658 = 0x1a;
          uStack_657 = 0x6974696e69;
          uStack_652 = 0x6c61;
          uStack_650 = 0x5f;
          uStack_64f = 0x6574617473;
          uStack_660 = 0xc55f0f81198d76b9;
          uStack_370 = 0;
          pppppppuStack_7d8 = (uint *******)0x0;
          auStack_7d0 = (undefined1  [4])0x0;
          uStack_7cc = 0;
          uStack_7cb = 0;
          uStack_7c9 = 0;
          lStack_378 = 0;
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(0x200,0);
          }
          plVar19[1] = 0;
          plVar19[2] = 0;
          *plVar19 = (long)&UNK_0f331d98;
          ppppppuStack_848 = (uint ******)0x0;
          uStack_840 = 0;
          uStack_83c = 0;
          uStack_83b = 0;
          uStack_839 = 0;
          pppppppuStack_7d8 = (uint *******)0x0;
          plVar19[4] = (long)&UNK_0f2ccd78;
          plVar19[5] = 0;
          plVar19[6] = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          plVar19[9] = 0;
          plVar19[10] = 0;
          plVar19[0xb] = 0;
          plVar19[0xc] = 0;
          *(undefined1 *)(plVar19 + 0xd) = 0;
          func_0x04aa75f0(plVar19 + 0xe,&uStack_779,&UNK_01254d89);
          *(undefined1 *)(plVar19 + 0x10) = 0;
          plVar46 = plVar19 + 0x11;
          plVar19[0x11] = 0;
          plVar19[0x12] = 0;
          plVar19[0x13] = 0;
          plVar19[0x14] = 0;
          plVar19[0x15] = 0;
          plVar19[0x16] = 0;
          plVar19[0x17] = 0xffffffff;
          plVar19[0x26] = 0;
          plVar19[0x27] = 0;
          plVar19[0x18] = 0;
          plVar19[0x19] = 0;
          plVar19[0x1a] = 0;
          plVar19[0x1b] = 0;
          plVar19[0x1c] = 0;
          plVar19[0x1d] = 0;
          plVar19[0x1e] = 0;
          plVar19[0x1f] = 0;
          plVar19[4] = (long)&UNK_0f331de8;
          plVar19[0x2e] = 0;
          plVar19[0x2f] = 0;
          plVar19[0x30] = 0;
          plVar19[0x31] = 0;
          plVar19[0x32] = 0;
          plVar19[0x33] = 0;
          plVar19[0x34] = 0;
          *(undefined4 *)(plVar19 + 0x35) = 0x3f800000;
          plVar19[0x36] = 0;
          plVar19[0x37] = 0;
          if (ppppppuStack_848 == (uint ******)0x0) {
            ppppppuVar23 = (uint ******)0x0;
          }
          else {
            (*(code *)*ppppppuStack_848)(&ppppppuStack_848,plVar19 + 0x36);
            ppppppuVar23 = ppppppuStack_848;
          }
          ppppppuStack_848 = (uint ******)0x0;
          plVar19[0x36] = (long)ppppppuVar23;
          *(undefined1 *)(plVar19 + 0x3e) = 0;
          puVar24 = (uint *)(plVar19 + 0x12);
          if (plVar46 != (long *)&DAT_0f552138) {
            if ((*puVar24 & 1) == 0) {
              if ((_DAT_0f552140 & 1) == 0) {
                plVar19[0x14] = _DAT_0f552150;
                uVar11 = uRam000000000f55214c;
                uVar10 = _DAT_0f552148;
                uVar9 = uRam000000000f552144;
                *puVar24 = _DAT_0f552140;
                *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
                *(undefined4 *)(plVar19 + 0x13) = uVar10;
                *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
              }
              else {
                func_0x04885070(puVar24,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
              }
            }
            else {
              bVar49 = (_DAT_0f552140 & 1) != 0;
              lVar29 = 0xf552141;
              if (bVar49) {
                lVar29 = _DAT_0f552150;
              }
              uVar45 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
              if (bVar49) {
                uVar45 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
              }
              FUN_04885120(puVar24,lVar29,uVar45);
            }
          }
          plVar19[0x11] = _DAT_0f552138;
          plVar19[0x15] = 0;
          pppppppuStack_800 = (uint *******)plVar46;
          if (ppppppuStack_848 != (uint ******)0x0) {
            (*(code *)ppppppuStack_848[1])(&ppppppuStack_848);
          }
          plVar46 = plVar19 + 1;
          if (pppppppuStack_7d8 != (uint *******)0x0) {
            (*(code *)pppppppuStack_7d8[1])(&pppppppuStack_7d8);
          }
          LOCK();
          *plVar46 = *plVar46 + 1;
          UNLOCK();
          puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (puVar20 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x80,0);
          }
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = &UNK_0f331ec8;
          puVar20[6] = 0;
          puVar20[7] = 0;
          puVar20[4] = &UNK_0f331f18;
          puVar20[0xe] = plVar19 + 4;
          puVar20[0xf] = plVar19;
          LOCK();
          plVar19[1] = plVar19[1] + 1;
          UNLOCK();
          uStack_840 = (uint)puVar20;
          uStack_83c = (undefined1)((ulong)puVar20 >> 0x20);
          uStack_83b = (undefined2)((ulong)puVar20 >> 0x28);
          uStack_839 = (undefined1)((ulong)puVar20 >> 0x38);
          ppppppuStack_848 = (uint ******)(puVar20 + 4);
          puVar21 = (undefined4 *)func_0x0bd9c600(pppppppuVar2,&uStack_660,0);
          plVar37 = *(long **)(puVar21 + 0x24);
          if (plVar37 < *(long **)(puVar21 + 0x26)) {
            plVar37[2] = 0;
            plVar37[3] = 0;
            *plVar37 = 0;
            plVar37[1] = 0;
            plVar37[4] = 0;
            if ((uint *******)plVar37 != pppppppuStack_800) {
              if ((*puVar24 & 1) == 0) {
                plVar37[3] = plVar19[0x14];
                lVar29 = plVar19[0x13];
                plVar37[1] = *(long *)puVar24;
                plVar37[2] = lVar29;
              }
              else {
                func_0x04885070(plVar37 + 1,plVar19[0x14],plVar19[0x13]);
              }
            }
            *plVar37 = (long)*pppppppuStack_800;
            plVar37[5] = (long)(puVar20 + 4);
            plVar37[6] = (long)puVar20;
            LOCK();
            puVar20[1] = puVar20[1] + 1;
            UNLOCK();
            plVar37 = plVar37 + 7;
            *(long **)(puVar21 + 0x24) = plVar37;
          }
          else {
            plVar37 = (long *)func_0x0bd9fc90(puVar21 + 0x22,pppppppuStack_800,&ppppppuStack_848);
          }
          *(long **)(puVar21 + 0x24) = plVar37;
          uVar9 = *puVar21;
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          if (*(long *)(puVar21 + 2) != 0) {
            LOCK();
            plVar37 = (long *)(*(long *)(puVar21 + 2) + 8);
            *plVar37 = *plVar37 + 1;
            UNLOCK();
          }
          plVar37 = (long *)plVar19[0xf];
          *(undefined4 *)(plVar19 + 0xe) = uVar9;
          *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
          *(undefined4 *)(plVar19 + 0xf) = uVar11;
          *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
          if (plVar37 != (long *)0x0) {
            LOCK();
            plVar36 = plVar37 + 1;
            lVar29 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar37 + 0x10))(plVar37);
              func_0x0412c2d0(plVar37);
            }
          }
          *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
          plVar37 = (long *)CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))
                                    );
          if (plVar37 != (long *)0x0) {
            LOCK();
            plVar36 = plVar37 + 1;
            lVar29 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar37 + 0x10))(plVar37);
              func_0x0412c2d0(plVar37);
            }
          }
          plVar37 = plStack_6c0;
          LOCK();
          lVar29 = *plVar46;
          *plVar46 = *plVar46 + -1;
          UNLOCK();
          if (lVar29 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
            LOCK();
            lVar29 = *plVar46;
            *plVar46 = *plVar46 + -1;
            UNLOCK();
          }
          else {
            LOCK();
            lVar29 = *plVar46;
            *plVar46 = *plVar46 + -1;
            UNLOCK();
          }
          if (lVar29 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
            *(undefined1 *)(plVar19 + 0x3e) = 1;
          }
          else {
            *(undefined1 *)(plVar19 + 0x3e) = 1;
          }
          if (lStack_378 != 0) {
            (**(code **)(lStack_378 + 8))(&lStack_378);
          }
          if ((bStack_658 & 1) != 0) {
            func_0x0412a280(uStack_648,
                            CONCAT26(uStack_652,CONCAT51(uStack_657,bStack_658)) &
                            0xfffffffffffffffe);
          }
          if (plVar37 != (long *)0x0) {
            LOCK();
            plVar19 = plVar37 + 1;
            lVar29 = *plVar19;
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (lVar29 == 0) {
              (**(code **)(*plVar37 + 0x10))(plVar37);
              func_0x0412c2d0(plVar37);
            }
          }
          return;
        }
        goto LAB_0bd90c25;
      }
      pppppppuVar26 = (uint *******)((long)pppppppuVar26 - (long)pppppppuVar40);
      uVar45 = ((long)pppppppuVar26 >> 3) * -0x30c30c30c30c30c3 + 1;
      if (uVar45 < 0x186186186186187) {
        pppppppuStack_828 = pppppppuVar30 + 0x1b;
        lVar29 = (long)pppppppuVar30[0x1d] - (long)pppppppuVar40 >> 3;
        uVar38 = lVar29 * -0x6186186186186186;
        if (uVar45 < uVar38) {
          uVar45 = uVar38;
        }
        if (0xc30c30c30c30c2 < (ulong)(lVar29 * -0x30c30c30c30c30c3)) {
          uVar45 = 0x186186186186186;
        }
        pppppppuStack_790 = pppppppuStack_828;
        if (uVar45 == 0) {
          ppppppuVar23 = (uint ******)0x0;
LAB_0bd8df28:
          pbVar47 = (byte *)((long)pppppppuVar26 + (long)ppppppuVar23);
          uStack_838 = SUB81(pbVar47,0);
          uStack_837 = (undefined2)((ulong)pbVar47 >> 8);
          uStack_835 = (undefined1)((ulong)pbVar47 >> 0x18);
          uStack_834 = (undefined4)((ulong)pbVar47 >> 0x20);
          uStack_840 = (uint)pbVar47;
          uStack_83c = (undefined1)((ulong)pbVar47 >> 0x20);
          uStack_83b = (undefined2)((ulong)pbVar47 >> 0x28);
          uStack_839 = (undefined1)((ulong)pbVar47 >> 0x38);
          ppppppuVar35 = ppppppuVar23 + uVar45 * 0x15;
          uStack_830 = SUB81(ppppppuVar35,0);
          uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
          uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
          ppppppuStack_848 = ppppppuVar23;
          func_0x0bdb05c0(pbVar47);
          puVar20 = (undefined8 *)
                    CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838)));
          pppppppuVar26 = (uint *******)(puVar20 + 0x15);
          ppppppuVar23 = pppppppuVar30[0x1b];
          ppppppuVar35 = pppppppuVar30[0x1c];
          ppppppuVar43 = (uint ******)
                         ((long)ppppppuVar23 +
                         (CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840)))
                         - (long)ppppppuVar35));
          if (ppppppuVar23 != ppppppuVar35) {
            lVar29 = 0;
            do {
              uVar28 = ((undefined8 *)((long)ppppppuVar23 + lVar29))[1];
              *(undefined8 *)((long)ppppppuVar43 + lVar29) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29);
              ((undefined8 *)((long)ppppppuVar43 + lVar29))[1] = uVar28;
              *(undefined8 *)((long)ppppppuVar23 + lVar29) = 0;
              ((undefined8 *)((long)ppppppuVar23 + lVar29))[1] = 0;
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x20);
              *puVar48 = 0;
              puVar48[1] = 0;
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x10);
              *puVar48 = 0;
              puVar48[1] = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x30) = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x28) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x28);
              puVar21 = (undefined4 *)((long)ppppppuVar23 + lVar29 + 0x18);
              uVar9 = puVar21[1];
              uVar10 = puVar21[2];
              uVar11 = puVar21[3];
              puVar5 = (undefined4 *)((long)ppppppuVar43 + lVar29 + 0x18);
              *puVar5 = *puVar21;
              puVar5[1] = uVar9;
              puVar5[2] = uVar10;
              puVar5[3] = uVar11;
              *(undefined2 *)((long)ppppppuVar23 + lVar29 + 0x18) = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x10) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x10);
              FUN_04167a20((long)ppppppuVar43 + lVar29 + 0x38,(long)ppppppuVar23 + lVar29 + 0x38);
              pppppppuVar25 = pppppppuStack_7f8;
              puVar48 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x40);
              uVar28 = puVar48[1];
              puVar4 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x40);
              *puVar4 = *puVar48;
              puVar4[1] = uVar28;
              puVar48 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x50);
              uVar28 = puVar48[1];
              puVar4 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x50);
              *puVar4 = *puVar48;
              puVar4[1] = uVar28;
              puVar48 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x60);
              uVar28 = puVar48[1];
              puVar4 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x60);
              *puVar4 = *puVar48;
              puVar4[1] = uVar28;
              puVar48 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x60);
              *puVar48 = 0;
              puVar48[1] = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x70) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x70);
              puVar48 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x78);
              uVar28 = puVar48[1];
              puVar4 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x78);
              *puVar4 = *puVar48;
              puVar4[1] = uVar28;
              puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x88);
              *puVar48 = 0;
              puVar48[1] = 0;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x98) = 0;
              puVar21 = (undefined4 *)((long)ppppppuVar23 + lVar29 + 0x88);
              uVar9 = puVar21[1];
              uVar10 = puVar21[2];
              uVar11 = puVar21[3];
              puVar5 = (undefined4 *)((long)ppppppuVar43 + lVar29 + 0x88);
              *puVar5 = *puVar21;
              puVar5[1] = uVar9;
              puVar5[2] = uVar10;
              puVar5[3] = uVar11;
              *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x98) =
                   *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x98);
              puVar48 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x88);
              *puVar48 = 0;
              puVar48[1] = 0;
              *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x98) = 0;
              *(undefined2 *)((long)ppppppuVar43 + lVar29 + 0xa0) =
                   *(undefined2 *)((long)ppppppuVar23 + lVar29 + 0xa0);
              lVar33 = lVar29 + 0xa8;
              lVar29 = lVar29 + 0xa8;
            } while ((uint ******)((long)ppppppuVar23 + lVar33) != ppppppuVar35);
            do {
              func_0x0bdabbf0(ppppppuVar23);
              ppppppuVar23 = ppppppuVar23 + 0x15;
            } while (ppppppuVar23 != ppppppuVar35);
            ppppppuVar23 = *pppppppuStack_790;
          }
          pppppppuVar30[0x1b] = ppppppuVar43;
          pppppppuVar30[0x1c] = (uint ******)pppppppuVar26;
          ppppppuVar35 = pppppppuVar30[0x1d];
          pppppppuVar30[0x1d] = (uint ******)CONCAT62(uStack_82e,CONCAT11(uStack_82f,uStack_830));
          if (ppppppuVar23 != (uint ******)0x0) {
            func_0x0412a280(ppppppuVar23,(long)ppppppuVar35 - (long)ppppppuVar23);
          }
          pppppppuVar30[0x1c] = (uint ******)pppppppuVar26;
          ppppppuVar23 = (uint ******)*puVar20;
          bVar7 = *(byte *)ppppppuVar23;
          pppppppuVar31 = pppppppuStack_808;
          goto joined_r0x0bd8e126;
        }
        if (uVar45 < 0x186186186186187) {
          ppppppuVar23 = (uint ******)
                         (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45 * 0xa8);
          if (ppppppuVar23 == (uint ******)0x0) {
            func_0x0eec74c0(uVar45 * 0xa8,0);
            ppppppuVar23 = (uint ******)0x0;
          }
          goto LAB_0bd8df28;
        }
LAB_0bd90c02:
        pppppppuStack_828 = pppppppuStack_790;
        func_0x04882eb0();
        goto LAB_0bd90c07;
      }
      goto LAB_0bd90c2a;
    }
    pppppppuVar22 = (uint *******)((long)pppppppuVar22 - (long)pppppppuStack_788);
    pppppppuVar26 = (uint *******)(((long)pppppppuVar22 >> 3) * -0x30c30c30c30c30c3 + 1);
    if (pppppppuVar26 < (uint *******)0x186186186186187) {
      pppppppuVar27 = pppppppuStack_778 + 0x1b;
      lVar29 = (long)pppppppuStack_778[0x1d] - (long)pppppppuStack_788 >> 3;
      pppppppuVar30 = (uint *******)(lVar29 * -0x6186186186186186);
      if (pppppppuVar26 < pppppppuVar30) {
        pppppppuVar26 = pppppppuVar30;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar29 * -0x30c30c30c30c30c3)) {
        pppppppuVar26 = (uint *******)0x186186186186186;
      }
      pppppppuStack_828 = pppppppuVar27;
      if (pppppppuVar26 == (uint *******)0x0) {
        ppppppuVar23 = (uint ******)0x0;
LAB_0bd8ccdc:
        pbVar47 = (byte *)((long)pppppppuVar22 + (long)ppppppuVar23);
        uStack_838 = SUB81(pbVar47,0);
        uStack_837 = (undefined2)((ulong)pbVar47 >> 8);
        uStack_835 = (undefined1)((ulong)pbVar47 >> 0x18);
        uStack_834 = (undefined4)((ulong)pbVar47 >> 0x20);
        uStack_840 = (uint)pbVar47;
        uStack_83c = (undefined1)((ulong)pbVar47 >> 0x20);
        uStack_83b = (undefined2)((ulong)pbVar47 >> 0x28);
        uStack_839 = (undefined1)((ulong)pbVar47 >> 0x38);
        ppppppuVar35 = ppppppuVar23 + (long)pppppppuVar26 * 0x15;
        uStack_830 = SUB81(ppppppuVar35,0);
        uStack_82f = (undefined1)((ulong)ppppppuVar35 >> 8);
        uStack_82e = (undefined6)((ulong)ppppppuVar35 >> 0x10);
        ppppppuStack_848 = ppppppuVar23;
        func_0x0bda3020(pbVar47);
        pppppppuVar22 =
             (uint *******)
             (CONCAT44(uStack_834,CONCAT13(uStack_835,CONCAT21(uStack_837,uStack_838))) + 0xa8);
        ppppppuVar23 = pppppppuVar25[0x1b];
        ppppppuVar35 = pppppppuVar25[0x1c];
        ppppppuVar43 = (uint ******)
                       ((long)ppppppuVar23 +
                       (CONCAT17(uStack_839,CONCAT25(uStack_83b,CONCAT14(uStack_83c,uStack_840))) -
                       (long)ppppppuVar35));
        if (ppppppuVar23 != ppppppuVar35) {
          lVar29 = 0;
          do {
            uVar28 = ((undefined8 *)((long)ppppppuVar23 + lVar29))[1];
            *(undefined8 *)((long)ppppppuVar43 + lVar29) =
                 *(undefined8 *)((long)ppppppuVar23 + lVar29);
            ((undefined8 *)((long)ppppppuVar43 + lVar29))[1] = uVar28;
            *(undefined8 *)((long)ppppppuVar23 + lVar29) = 0;
            ((undefined8 *)((long)ppppppuVar23 + lVar29))[1] = 0;
            puVar20 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x20);
            *puVar20 = 0;
            puVar20[1] = 0;
            puVar20 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x10);
            *puVar20 = 0;
            puVar20[1] = 0;
            *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x30) = 0;
            *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x28) =
                 *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x28);
            puVar21 = (undefined4 *)((long)ppppppuVar23 + lVar29 + 0x18);
            uVar9 = puVar21[1];
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            puVar5 = (undefined4 *)((long)ppppppuVar43 + lVar29 + 0x18);
            *puVar5 = *puVar21;
            puVar5[1] = uVar9;
            puVar5[2] = uVar10;
            puVar5[3] = uVar11;
            *(undefined2 *)((long)ppppppuVar23 + lVar29 + 0x18) = 0;
            *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x10) =
                 *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x10);
            FUN_04167a20((long)ppppppuVar43 + lVar29 + 0x38,(long)ppppppuVar23 + lVar29 + 0x38);
            puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x40);
            uVar28 = puVar20[1];
            puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x40);
            *puVar48 = *puVar20;
            puVar48[1] = uVar28;
            puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x50);
            uVar28 = puVar20[1];
            puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x50);
            *puVar48 = *puVar20;
            puVar48[1] = uVar28;
            puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x60);
            uVar28 = puVar20[1];
            puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x60);
            *puVar48 = *puVar20;
            puVar48[1] = uVar28;
            puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x60);
            *puVar20 = 0;
            puVar20[1] = 0;
            *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x70) =
                 *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x70);
            puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x78);
            uVar28 = puVar20[1];
            puVar48 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x78);
            *puVar48 = *puVar20;
            puVar48[1] = uVar28;
            puVar20 = (undefined8 *)((long)ppppppuVar43 + lVar29 + 0x88);
            *puVar20 = 0;
            puVar20[1] = 0;
            *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x98) = 0;
            puVar21 = (undefined4 *)((long)ppppppuVar23 + lVar29 + 0x88);
            uVar9 = puVar21[1];
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            puVar5 = (undefined4 *)((long)ppppppuVar43 + lVar29 + 0x88);
            *puVar5 = *puVar21;
            puVar5[1] = uVar9;
            puVar5[2] = uVar10;
            puVar5[3] = uVar11;
            *(undefined8 *)((long)ppppppuVar43 + lVar29 + 0x98) =
                 *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x98);
            puVar20 = (undefined8 *)((long)ppppppuVar23 + lVar29 + 0x88);
            *puVar20 = 0;
            puVar20[1] = 0;
            *(undefined8 *)((long)ppppppuVar23 + lVar29 + 0x98) = 0;
            *(undefined2 *)((long)ppppppuVar43 + lVar29 + 0xa0) =
                 *(undefined2 *)((long)ppppppuVar23 + lVar29 + 0xa0);
            lVar33 = lVar29 + 0xa8;
            lVar29 = lVar29 + 0xa8;
          } while ((uint ******)((long)ppppppuVar23 + lVar33) != ppppppuVar35);
          do {
            func_0x0bd9e470(ppppppuVar23);
            ppppppuVar23 = pppppp
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1217897  animation_controllers
 * 0x135088a  The name of a particle effect that should be played
 * 0x135089a  rticle effect that should be played
 * 0x13508aa  at should be played
 * 0x13508be  pre_effect_script
 * 0x13ed736  [0-9]+(\.[0-9]+)?
 * 0x14082b1  particle_effects
 * 0x143d753  The name of a locator on the actor where the effect should be located
 * 0x143d763  cator on the actor where the effect should be located
 * 0x143d773  or where the effect should be located
 * 0x143d783  ect should be located
 * 0x1494d5d  <any array element>
 * 0x14d9433  A Molang script that will be run when the particle emitter is initialized
 * 0x14d9443  that will be run when the particle emitter is initialized
 * 0x14d9453   when the particle emitter is initialized
 * 0x14d9463  le emitter is initialized
 * 0x14d946c  r is initialized
 */
