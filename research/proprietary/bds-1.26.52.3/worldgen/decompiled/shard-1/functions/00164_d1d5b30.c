/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d5b30
 * Label: br::worldgen::WorldGenRandom::vslot7
 * Body:  [[0d1d5b30, 0d1d5ba7] [0d1d648d, 0d1d651f] [0d1d6521, 0d1d65d0] [0d1d65e0, 0d1d6907]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot7
 */


/* WARNING: This function may have set the stack pointer */

long * wg_br__worldgen__WorldGenRandom__vslot7
                 (undefined8 param_1,long param_2,long param_3,long param_4,char *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *in_RAX;
  ulong uVar8;
  byte *pbVar9;
  ulong unaff_R13;
  byte *unaff_R15;
  bool bVar10;
  undefined8 in_XMM0_Qb;
  long in_XMM1_Qb;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x75] = in_RAX[-0x75] + (char)param_6;
  *param_6 = param_1;
  param_6[1] = in_XMM0_Qb;
  param_6[2] = 0;
  lVar3 = lRam000000000001495c;
  bRam0000000000014904 = 0;
  lRam00000000000148c4 = lRam0000000000014934;
  uRam00000000000148cc = uRam000000000001493c;
  pcRam00000000000148d4 = param_5;
  pcRam00000000000148dc = in_RAX;
  lRam00000000000148e4 = param_4;
  lRam00000000000148ec = param_2;
  lRam00000000000148f4 = in_XMM1_Qb;
  lRam00000000000148fc = param_3;
  if (cRam0000000000014974 == '\0') {
    lVar4 = lRam0000000000014964;
    if (lRam000000000001495c != 0) {
      while (lVar3 != lVar4) {
        uRam000000000001481c = 0xd1d64bc;
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      lRam0000000000014964 = lVar3;
      uRam000000000001481c = 0xd1d64e1;
      func_0x0412a280(lRam000000000001495c,lRam000000000001496c - lRam000000000001495c);
    }
    lVar4 = lRam0000000000014944;
    lVar3 = lRam000000000001494c;
    if (lRam0000000000014944 != 0) {
      for (; lVar4 != lVar3; lVar3 = lVar3 + -0x50) {
        if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
          uRam000000000001481c = 0xd1d6528;
          func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                          *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lRam000000000001494c = lVar4;
      uRam000000000001481c = 0xd1d654a;
      func_0x0412a280(lRam0000000000014944,lRam0000000000014954 - lRam0000000000014944);
    }
  }
  if (plRam0000000000014894 != (long *)0x0) {
    uRam000000000001481c = 0xd1d6563;
    func_0x0ee56810(0x14824,0x14894);
    lVar3 = lRam000000000001484c;
    if (cRam0000000000014864 == '\0') {
      lVar4 = lRam0000000000014854;
      if (lRam000000000001484c != 0) {
        while (lVar3 != lVar4) {
          uRam000000000001481c = 0xd1d659c;
          func_0x048b3e80(lVar4 + -0x40);
          lVar4 = lVar4 + -0x40;
        }
        lRam0000000000014854 = lVar3;
        uRam000000000001481c = 0xd1d65b8;
        func_0x0412a280(lRam000000000001484c,lRam000000000001485c - lRam000000000001484c);
      }
      lVar4 = lRam0000000000014834;
      lVar3 = lRam000000000001483c;
      if (lRam0000000000014834 != 0) {
        for (; lVar4 != lVar3; lVar3 = lVar3 + -0x50) {
          if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
            uRam000000000001481c = 0xd1d6608;
            func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                            *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lRam000000000001483c = lVar4;
        uRam000000000001481c = 0xd1d6621;
        func_0x0412a280(lRam0000000000014834,lRam0000000000014844 - lRam0000000000014834);
      }
    }
  }
  plVar5 = plRam000000000001489c;
  plRam000000000001489c = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    uRam000000000001481c = 0xd1d663a;
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = plRam0000000000014894;
  plRam0000000000014894 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    uRam000000000001481c = 0xd1d6653;
    (**(code **)(*plVar5 + 8))();
  }
  if ((bRam000000000001497c & 1) != 0) {
    uRam000000000001481c = 0xd1d6676;
    func_0x0412a280(uRam000000000001498c,
                    CONCAT71(uRam000000000001497d,bRam000000000001497c) & 0xfffffffffffffffe);
  }
  puRam00000000000149f4 = &UNK_0140f690;
  uRam00000000000149fc = 1;
  uRam0000000000014a04 = 0x20a;
  auRam0000000000014824 = (undefined1  [16])0x0;
  lRam0000000000014834 = 0;
  uRam000000000001481c = 0xd1d66dd;
  uRam00000000000149ec = unaff_R13;
  func_0x0eedeb80(2,0x2d,0x148c4,0x14824,0x149ec);
  if ((auRam0000000000014824[0] & 1) != 0) {
    uRam000000000001481c = 0xd1d66f5;
    func_0x0412a280(lRam0000000000014834,auRam0000000000014824._0_8_ & 0xfffffffffffffffe);
  }
  uVar7 = uRam0000000000014994;
  lVar3 = lRam00000000000148ec;
  plVar5 = plRam000000000001488c;
  if ((bRam0000000000014904 & 1) == 0) {
    if (lRam00000000000148ec != 0) {
      while (lVar3 != lRam00000000000148f4) {
        lRam00000000000148f4 = lRam00000000000148f4 + -0x40;
        uRam000000000001481c = 0xd1d676c;
        func_0x048b3e80(lRam00000000000148f4);
      }
      lRam00000000000148f4 = lVar3;
      uRam000000000001481c = 0xd1d6791;
      func_0x0412a280(lRam00000000000148ec,lRam00000000000148fc - lRam00000000000148ec);
    }
    pcVar6 = pcRam00000000000148d4;
    if (pcRam00000000000148d4 != (char *)0x0) {
      for (; pcVar6 != pcRam00000000000148dc; pcRam00000000000148dc = pcRam00000000000148dc + -0x50)
      {
        if ((pcRam00000000000148dc[-8] == '\x01') && ((pcRam00000000000148dc[-0x30] & 1U) != 0)) {
          uRam000000000001481c = 0xd1d67d8;
          func_0x0412a280(*(undefined8 *)(pcRam00000000000148dc + -0x20),
                          *(ulong *)(pcRam00000000000148dc + -0x30) & 0xfffffffffffffffe);
        }
      }
      pcRam00000000000148dc = pcVar6;
      uRam000000000001481c = 0xd1d67fa;
      func_0x0412a280(pcRam00000000000148d4,lRam00000000000148e4 - (long)pcRam00000000000148d4);
    }
    plVar5 = plRam000000000001488c;
    plVar2 = (long *)*plRam000000000001488c;
    *plRam000000000001488c = 0;
  }
  else {
    plVar2 = (long *)*plRam000000000001488c;
    *plRam000000000001488c = lRam00000000000148c4;
  }
  if (plVar2 != (long *)0x0) {
    uRam000000000001481c = 0xd1d6812;
    (**(code **)(*plVar2 + 8))();
  }
  if ((bRam0000000000014914 & 1) != 0) {
    uRam000000000001481c = 0xd1d6835;
    func_0x0412a280(uRam0000000000014924,
                    CONCAT71(uRam0000000000014915,bRam0000000000014914) & 0xfffffffffffffffe);
  }
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    bVar10 = (*unaff_R15 & 1) != 0;
    pbVar9 = unaff_R15 + 1;
    if (bVar10) {
      pbVar9 = *(byte **)(unaff_R15 + 0x10);
    }
    uVar8 = (ulong)(*unaff_R15 >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(unaff_R15 + 8);
    }
    uRam000000000001481c = 0xd1d6866;
    func_0x0d1d3090(0x149ec,pbVar9,uVar8);
    uRam000000000001481c = 0xd1d6887;
    func_0x0d21ed30(0x149dc,uVar7,0x149ec,lVar3,8);
    plVar2 = plRam00000000000149e4;
    if (plRam00000000000149e4 != (long *)0x0) {
      LOCK();
      plVar1 = plRam00000000000149e4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        uRam000000000001481c = 0xd1d68f4;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uRam000000000001481c = 0xd1d68fc;
        func_0x0412c2d0(plVar2);
      }
    }
    if ((uRam00000000000149ec & 1) != 0) {
      uRam000000000001481c = 0xd1d68c9;
      func_0x0412a280(uRam00000000000149fc,uRam00000000000149ec & 0xfffffffffffffffe);
    }
  }
  uRam000000000001481c = 0xd1d68d6;
  func_0x0d20be50(0x14df4);
  return plVar5;
}


