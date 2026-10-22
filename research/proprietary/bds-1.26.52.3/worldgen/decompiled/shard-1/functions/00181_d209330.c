/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd209330
 * Label: br::worldgen::ConstantHeight::vslot1
 * Body:  [[0d209330, 0d20933d]]
 * Ghidra: wg_br__worldgen__ConstantHeight__vslot1
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__ConstantHeight__vslot1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  char cVar11;
  int iVar12;
  int *in_RAX;
  int *piVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  char cVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 unaff_BPL;
  undefined1 uVar25;
  byte *unaff_R13;
  uint *unaff_R15;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  cVar19 = (char)param_4;
  *(char *)(param_4 + -0x73) = *(char *)(param_4 + -0x73) + cVar19;
  *in_RAX = *in_RAX + (int)in_RAX;
  pcVar1 = (char *)((long)in_RAX + -0x77);
  cVar11 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar19;
  if (SCARRY1(cVar11,cVar19) == *pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar13 = (int *)((ulong)&stack0x00000000 & 0xffffffff);
  uVar24 = (ulong)in_RAX & 0xffffffff;
  *piVar13 = *piVar13 + (int)&stack0x00000000;
  *(char *)((long)piVar13 + 0x16883) = *(char *)((long)piVar13 + 0x16883) + cVar19;
  *(char *)((long)piVar13 + -0x73) = *(char *)((long)piVar13 + -0x73) + cVar19;
  lVar23 = 0x170;
  *(undefined8 *)(uVar24 + 0x98) = param_1;
  *(undefined8 *)(uVar24 - 8) = 0xd209386;
  func_0x0bc259a0(param_1,1);
  uRam00000000000003d0 = 0x100;
  pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd2093a5;
  plVar14 = (long *)(*pcVar4)(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    *(undefined8 *)(uVar24 - 8) = 0xd20a462;
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 (*) [16])(plVar14 + 1) = (undefined1  [16])0x0;
  *plVar14 = (long)&UNK_0f30ccf0;
  plRam00000000000003d8 = plVar14 + 3;
  plVar14[6] = 0;
  plVar14[4] = (long)(plVar14 + 4);
  plVar14[5] = (long)(plVar14 + 4);
  plVar14[3] = (long)&UNK_0ef513e0;
  plVar14[7] = (long)&UNK_0ef51410;
  plRam00000000000003e0 = plVar14;
  if ((*unaff_R13 & 1) == 0) {
    uRam00000000000003f8 = *(undefined8 *)(unaff_R13 + 0x10);
    uRam00000000000003e8 = *(undefined8 *)unaff_R13;
    uRam00000000000003f0 = *(undefined8 *)(unaff_R13 + 8);
  }
  else {
    uVar18 = *(undefined8 *)(unaff_R13 + 8);
    uVar6 = *(undefined8 *)(unaff_R13 + 0x10);
    *(undefined8 *)(uVar24 - 8) = 0xd209437;
    func_0x0412e5e0(1000,uVar6,uVar18);
  }
  uRam0000000000000400 = 10;
  uRam0000000000000418 = _DAT_0f5a2780;
  uRam0000000000000408 = _DAT_0f5a2770;
  uRam0000000000000410 = uRam000000000f5a2778;
  bVar8 = DAT_0f5a2788 & 1;
  *(undefined8 *)(uVar24 + 0x88) = 1000;
  uVar6 = _DAT_0f5a2798;
  uVar18 = _DAT_0f5a2790;
  if (bVar8 == 0) {
    uRam0000000000000430 = _DAT_0f5a2798;
    uRam0000000000000420 = CONCAT71(uRam000000000f5a2789,DAT_0f5a2788);
    uRam0000000000000428 = _DAT_0f5a2790;
  }
  else {
    *(undefined8 *)(uVar24 - 8) = 0xd2094a1;
    func_0x0412e5e0(0x420,uVar6,uVar18);
  }
  uVar3 = _DAT_01de6244;
  uVar18 = _DAT_01de623c;
  uRam0000000000000438 = 0x891;
  auRam0000000000000440 = (undefined1  [16])0x0;
  auRam0000000000000450 = (undefined1  [16])0x0;
  uRam0000000000000460 = 0;
  uRam0000000000000464 = _DAT_01de623c;
  uRam000000000000046c = _DAT_01de6244;
  uRam0000000000000470 = unaff_R15[0x1d];
  auRam0000000000000478 = (undefined1  [16])0x0;
  auRam0000000000000488 = (undefined1  [16])0x0;
  uRam0000000000000498 = unaff_R15[0x29];
  uRam000000000000049c = *(undefined4 *)(uVar24 + 0x38);
  iRam00000000000004a0 = 0;
  uRam00000000000004a4 = *(undefined4 *)(uVar24 + 0x10);
  uRam00000000000004a8 = 0x800000000;
  *(undefined8 *)(uVar24 - 8) = 0xd209564;
  func_0x06cfd9a0(0x4b0,1,0x1a,0x34,3,0);
  uRam00000000000004e0 = unaff_R15[4];
  uRam00000000000004e4 = (undefined1)unaff_R15[5];
  uRam00000000000004e5 = (undefined1)unaff_R15[3];
  uRam00000000000004e6 = 0x100;
  uRam00000000000004e8 = *(undefined1 *)((long)unaff_R15 + 0x97);
  *(undefined8 *)(uVar24 + 0x38) = 0x4f0;
  *(undefined8 *)(uVar24 - 8) = 0xd2095b0;
  func_0x04863480(0x4f0,unaff_R15 + 8);
  iRam0000000000000518 = *(int *)(uVar24 + 0xac0);
  uRam0000000000000500 = 0xffffffff;
  uRam0000000000000508 = unaff_R15[0x19];
  uRam000000000000050c = (undefined1)unaff_R15[0x1a];
  uRam0000000000000510 = unaff_R15[0x1b];
  uRam0000000000000514 = (undefined1)unaff_R15[0x1c];
  uRam0000000000000515 = *(undefined1 *)((long)unaff_R15 + 0x71);
  uRam0000000000000504 = unaff_BPL;
  *(undefined8 *)(uVar24 - 8) = 0xd20960b;
  cVar11 = func_0x0c9448b0();
  *(undefined8 *)(uVar24 + 0x58) = 0x520;
  if (cVar11 == '\0') {
    uRam0000000000000520 = 0;
    uVar25 = 0;
  }
  else {
    if ((char)unaff_R15[0x10e] == '\0') {
      *(undefined8 *)(uVar24 - 8) = 0xd20a4ea;
      uVar18 = func_0x048a88b0();
      *(undefined8 *)(uVar24 - 8) = 0xd20a4f9;
      func_0x041084d6(&DAT_0f776b18);
      *(undefined8 *)(uVar24 - 8) = 0xd20a6fa;
      func_0x0d2090b0(0x6f0);
      *(undefined8 *)(uVar24 - 8) = 0xd20a702;
      func_0x05cf9f90(0x6e0);
      plVar14 = plRam00000000000006d8;
      plRam00000000000006d8 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        pcVar4 = *(code **)(*plVar14 + 8);
        *(undefined8 *)(uVar24 - 8) = 0xd20a71f;
        (*pcVar4)();
      }
      uVar6 = uRam00000000000006c0;
      if ((bRam00000000000006b0 & 1) != 0) {
        uVar21 = CONCAT71(uRam00000000000006b1,bRam00000000000006b0);
        *(undefined8 *)(uVar24 - 8) = 0xd20a749;
        func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
      }
      *(undefined8 *)(uVar24 - 8) = 0xd20a751;
      func_0x06cf79c0(0x688);
      uVar6 = *(undefined8 *)(uVar24 + 0x10);
      *(undefined8 *)(uVar24 - 8) = 0xd20a75b;
      func_0x06cf79c0(uVar6);
      if ((**(byte **)(uVar24 + 0x60) & 1) != 0) goto LAB_0d20a880;
      if ((**(byte **)(uVar24 + 0x68) & 1) != 0) goto LAB_0d20a8a5;
LAB_0d20a777:
      if ((**(byte **)(uVar24 + 0x70) & 1) != 0) goto LAB_0d20a8ca;
LAB_0d20a785:
      if ((**(byte **)(uVar24 + 0x78) & 1) != 0) goto LAB_0d20a8ef;
LAB_0d20a793:
      if ((**(byte **)(uVar24 + 0x80) & 1) != 0) goto LAB_0d20a917;
      do {
        cVar11 = *(char *)(lVar23 + 0x430);
        while( true ) {
          if (cVar11 == '\x01') {
            uVar6 = *(undefined8 *)(uVar24 + 0x58);
            *(undefined8 *)(uVar24 - 8) = 0xd20a7b7;
            func_0x048f6240(uVar6);
          }
          uVar6 = *(undefined8 *)(uVar24 + 0x38);
          *(undefined8 *)(uVar24 - 8) = 0xd20a7c1;
          func_0x04863610(uVar6);
          if ((*(byte *)(lVar23 + 0x358) & 1) != 0) {
            uVar21 = *(ulong *)(lVar23 + 0x358);
            uVar6 = *(undefined8 *)(lVar23 + 0x368);
            *(undefined8 *)(uVar24 - 8) = 0xd20a7e1;
            func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          }
          *(undefined8 *)(uVar24 - 8) = 0xd20a7ed;
          func_0x0c8f4a90(lVar23 + 0x308);
          *(undefined8 *)(uVar24 - 8) = 0xd20a7f9;
          func_0x0ee386e0(lVar23 + 0x2e0);
          *(undefined8 *)(uVar24 - 8) = 0xd20a805;
          func_0x0ee386e0(lVar23 + 0x2d8);
          if ((*(byte *)(lVar23 + 0x2b0) & 1) != 0) {
            uVar21 = *(ulong *)(lVar23 + 0x2b0);
            uVar6 = *(undefined8 *)(lVar23 + 0x2c0);
            *(undefined8 *)(uVar24 - 8) = 0xd20a825;
            func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          }
          if ((**(byte **)(uVar24 + 0x88) & 1) != 0) {
            uVar21 = *(ulong *)(lVar23 + 0x278);
            uVar6 = *(undefined8 *)(lVar23 + 0x288);
            *(undefined8 *)(uVar24 - 8) = 0xd20a849;
            func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          }
          *(undefined8 *)(uVar24 - 8) = 0xd20a855;
          func_0x048f6210(lVar23 + 0x260);
          uVar6 = *(undefined8 *)(uVar24 + 0x48);
          *(undefined8 *)(uVar24 - 8) = 0xd20a85f;
          func_0x048f60c0(uVar6);
          uVar6 = *(undefined8 *)(uVar24 + 0x90);
          *(undefined8 *)(uVar24 - 8) = 0xd20a86c;
          func_0x0d200c80(uVar6);
          lVar23 = lVar23 + 8;
          *(undefined8 *)(uVar24 - 8) = 0xd20a878;
          func_0x0d209130(lVar23);
          *(undefined8 *)(uVar24 - 8) = 0xd20a880;
          func_0x0eee2d70(uVar18);
LAB_0d20a880:
          uVar21 = *(ulong *)(lVar23 + 0x4d0);
          uVar6 = *(undefined8 *)(lVar23 + 0x4e0);
          *(undefined8 *)(uVar24 - 8) = 0xd20a897;
          func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          if ((**(byte **)(uVar24 + 0x68) & 1) == 0) goto LAB_0d20a777;
LAB_0d20a8a5:
          uVar21 = *(ulong *)(lVar23 + 0x4a0);
          uVar6 = *(undefined8 *)(lVar23 + 0x4b0);
          *(undefined8 *)(uVar24 - 8) = 0xd20a8bc;
          func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          if ((**(byte **)(uVar24 + 0x70) & 1) == 0) goto LAB_0d20a785;
LAB_0d20a8ca:
          uVar21 = *(ulong *)(lVar23 + 0x488);
          uVar6 = *(undefined8 *)(lVar23 + 0x498);
          *(undefined8 *)(uVar24 - 8) = 0xd20a8e1;
          func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          if ((**(byte **)(uVar24 + 0x78) & 1) == 0) goto LAB_0d20a793;
LAB_0d20a8ef:
          uVar21 = *(ulong *)(lVar23 + 0x470);
          uVar6 = *(undefined8 *)(lVar23 + 0x480);
          *(undefined8 *)(uVar24 - 8) = 0xd20a906;
          func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          if ((**(byte **)(uVar24 + 0x80) & 1) == 0) break;
LAB_0d20a917:
          uVar21 = *(ulong *)(lVar23 + 0x458);
          uVar6 = *(undefined8 *)(lVar23 + 0x468);
          *(undefined8 *)(uVar24 - 8) = 0xd20a92e;
          func_0x0412a280(uVar6,uVar21 & 0xfffffffffffffffe);
          cVar11 = *(char *)(lVar23 + 0x430);
        }
      } while( true );
    }
    uVar25 = 1;
    *(undefined8 *)(uVar24 - 8) = 0xd209638;
    func_0x0491d030(0x520,unaff_R15 + 0xee);
  }
  uRam00000000000005a8 = (undefined1)unaff_R15[0x1f];
  uRam00000000000005a9 = 0;
  uRam00000000000005aa = (undefined1)unaff_R15[0x22];
  uRam00000000000005ab = *(undefined1 *)((long)unaff_R15 + 0x89);
  uRam00000000000005ad = *(undefined1 *)((long)unaff_R15 + 0x8a);
  uRam00000000000005b0 = (undefined4)*(undefined8 *)(unaff_R15 + 0x23);
  uRam00000000000005b8 = (undefined4)((ulong)*(undefined8 *)(unaff_R15 + 0x23) >> 0x20);
  uRam00000000000005c0 = *(undefined1 *)((long)unaff_R15 + 0x96);
  uRam00000000000005c1 = unaff_R15[0x26];
  uRam00000000000005c5 = (undefined1)unaff_R15[0x27];
  uRam00000000000005c6 = *(undefined1 *)((long)unaff_R15 + 0x9d);
  uVar20 = unaff_R15[0x82];
  uRam00000000000005a0 = uVar25;
  uRam00000000000005ac = uRam00000000000005ab;
  uRam00000000000005ae = uRam00000000000005ad;
  uRam00000000000005b4 = uRam00000000000005b0;
  uRam00000000000005bc = uRam00000000000005b8;
  *(undefined8 *)(uVar24 + 0x80) = 0x5c8;
  if ((uVar20 & 1) == 0) {
    uRam00000000000005d8 = *(undefined8 *)(unaff_R15 + 0x86);
    uRam00000000000005c8 = *(undefined8 *)(unaff_R15 + 0x82);
    uRam00000000000005d0 = *(undefined8 *)(unaff_R15 + 0x84);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_R15 + 0x84);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x86);
    *(undefined8 *)(uVar24 - 8) = 0xd209720;
    func_0x0412e5e0(0x5c8,uVar5,uVar6);
  }
  uVar20 = unaff_R15[0x88];
  *(undefined8 *)(uVar24 + 0x78) = 0x5e0;
  if ((uVar20 & 1) == 0) {
    uRam00000000000005f0 = *(undefined8 *)(unaff_R15 + 0x8c);
    uRam00000000000005e0 = *(undefined8 *)(unaff_R15 + 0x88);
    uRam00000000000005e8 = *(undefined8 *)(unaff_R15 + 0x8a);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_R15 + 0x8a);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x8c);
    *(undefined8 *)(uVar24 - 8) = 0xd209762;
    func_0x0412e5e0(0x5e0,uVar5,uVar6);
  }
  uVar20 = unaff_R15[0x8e];
  *(undefined8 *)(uVar24 + 0x70) = 0x5f8;
  if ((uVar20 & 1) == 0) {
    uRam0000000000000608 = *(undefined8 *)(unaff_R15 + 0x92);
    uRam00000000000005f8 = *(undefined8 *)(unaff_R15 + 0x8e);
    uRam0000000000000600 = *(undefined8 *)(unaff_R15 + 0x90);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_R15 + 0x90);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x92);
    *(undefined8 *)(uVar24 - 8) = 0xd2097a4;
    func_0x0412e5e0(0x5f8,uVar5,uVar6);
  }
  uVar20 = unaff_R15[0x94];
  *(undefined8 *)(uVar24 + 0x68) = 0x610;
  if ((uVar20 & 1) == 0) {
    uRam0000000000000620 = *(undefined8 *)(unaff_R15 + 0x98);
    uRam0000000000000610 = *(undefined8 *)(unaff_R15 + 0x94);
    uRam0000000000000618 = *(undefined8 *)(unaff_R15 + 0x96);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_R15 + 0x96);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x98);
    *(undefined8 *)(uVar24 - 8) = 0xd2097e6;
    func_0x0412e5e0(0x610,uVar5,uVar6);
  }
  uRam0000000000000628 = *(undefined1 *)((long)unaff_R15 + 0x9e);
  uRam0000000000000629 = (undefined1)unaff_R15[0x28];
  uRam000000000000062a = 0;
  uRam000000000000062b = *(undefined1 *)((long)unaff_R15 + 0xa1);
  uRam000000000000062c = 0;
  uRam000000000000062e = *(undefined4 *)((long)unaff_R15 + 0xaa);
  uRam0000000000000632 = 0;
  uRam0000000000000633 = *(undefined1 *)((long)unaff_R15 + 0x31);
  uRam0000000000000638 = (undefined2)unaff_R15[0xe];
  uVar20 = unaff_R15[0x10];
  *(undefined8 *)(uVar24 + 0x60) = 0x640;
  if ((uVar20 & 1) == 0) {
    uRam0000000000000650 = *(undefined8 *)(unaff_R15 + 0x14);
    uRam0000000000000640 = *(undefined8 *)(unaff_R15 + 0x10);
    uRam0000000000000648 = *(undefined8 *)(unaff_R15 + 0x12);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_R15 + 0x12);
    uVar5 = *(undefined8 *)(unaff_R15 + 0x14);
    *(undefined8 *)(uVar24 - 8) = 0xd209881;
    func_0x0412e5e0(0x640,uVar5,uVar6);
  }
  uRam0000000000000658 = unaff_R15[0x16];
  *(undefined8 *)(uVar24 + 0x10) = 0x660;
  auRam0000000000000660 = (undefined1  [16])0x0;
  auRam0000000000000670 = (undefined1  [16])0x0;
  uRam0000000000000680 = 0x3f800000;
  auRam0000000000000688 = (undefined1  [16])0x0;
  auRam0000000000000698 = (undefined1  [16])0x0;
  uRam00000000000006a8 = 0x3f800000;
  uRam00000000000006cc = 0;
  bRam00000000000006b0 = 0;
  uRam00000000000006b1 = 0;
  uRam00000000000006b8 = 0;
  uRam00000000000006b9 = 0;
  uRam00000000000006c0 = 0;
  uRam00000000000006c8 = 0;
  uRam00000000000006d0 = (undefined1)unaff_R15[0xac];
  pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd20990a;
  puVar15 = (undefined8 *)(*pcVar4)(&DAT_0f5463b0,0x28);
  if (puVar15 == (undefined8 *)0x0) {
    *(undefined8 *)(uVar24 - 8) = 0xd20a473;
    func_0x0eec74c0(0x28,0);
  }
  *(undefined1 (*) [16])(puVar15 + 2) = (undefined1  [16])0x0;
  puVar15[1] = puVar15 + 1;
  puVar15[2] = puVar15 + 1;
  *puVar15 = &UNK_0f02e910;
  puVar15[4] = &UNK_0f02e940;
  auRam00000000000006e0 = (undefined1  [16])0x0;
  auRam00000000000006f0 = (undefined1  [16])0x0;
  auRam0000000000000700 = (undefined1  [16])0x0;
  auRam0000000000000710 = (undefined1  [16])0x0;
  uRam0000000000000720 = 0;
  plRam00000000000006d8 = puVar15;
  *(undefined8 *)(uVar24 - 8) = 0xd20997d;
  func_0x0d208450(0x170);
  *(undefined8 *)(uVar24 - 8) = 0xd20998c;
  func_0x0d20a940(0x170,unaff_R15 + 0x9a);
  uVar6 = *(undefined8 *)unaff_R15;
  *(undefined8 *)(uVar24 - 8) = 0xd209997;
  func_0x0d208b60(0x170,uVar6);
  *(undefined4 *)(uVar24 + 0xa8) = uVar3;
  *(undefined8 *)(uVar24 + 0xa0) = uVar18;
  *(undefined4 *)(uVar24 + 0xb8) = 6;
  *(undefined8 *)(uVar24 + 0x18) = 0xf71d600;
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd2099d9;
  lVar23 = func_0x09be9cc0(uVar18,0xf71d600,&UNK_01563a4f,uVar24 + 0x18,uVar24 + 0xf);
  uVar20 = *(uint *)(uVar24 + 0xb8);
  if ((ulong)*(uint *)(lVar23 + 0x50) == 0xffffffff) {
    if (uVar20 != 0xffffffff) goto LAB_0d209a1a;
  }
  else {
    if (uVar20 == 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar23 + 0x50) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209a0b;
      (*pcVar4)(uVar24 + 0x18);
      *(undefined4 *)(lVar23 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209a1a:
      *(long *)(uVar24 + 0x18) = lVar23 + 0x38;
      pcVar4 = *(code **)(&UNK_0f45a900 + (ulong)uVar20 * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209a36;
      (*pcVar4)(uVar24 + 0x18,lVar23 + 0x38,uVar24 + 0xa0);
    }
    if ((ulong)*(uint *)(uVar24 + 0xb8) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(uVar24 + 0xb8) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209a5e;
      (*pcVar4)(uVar24 + 0x18,uVar24 + 0xa0);
    }
  }
  *(uint *)(uVar24 + 0xa0) = unaff_R15[0x2c];
  *(undefined4 *)(uVar24 + 0xb8) = 0;
  *(undefined8 *)(uVar24 + 0x18) = 0xf71d748;
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209a9e;
  lVar23 = func_0x09be9cc0(uVar18,0xf71d748,&UNK_01563a4f,uVar24 + 0x18,uVar24 + 0xf);
  uVar20 = *(uint *)(uVar24 + 0xb8);
  if ((ulong)*(uint *)(lVar23 + 0x50) == 0xffffffff) {
    if (uVar20 != 0xffffffff) goto LAB_0d209adf;
  }
  else {
    if (uVar20 == 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar23 + 0x50) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209ad0;
      (*pcVar4)(uVar24 + 0x18);
      *(undefined4 *)(lVar23 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209adf:
      *(long *)(uVar24 + 0x18) = lVar23 + 0x38;
      pcVar4 = *(code **)(&UNK_0f45a900 + (ulong)uVar20 * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209afb;
      (*pcVar4)(uVar24 + 0x18,lVar23 + 0x38,uVar24 + 0xa0);
    }
    if ((ulong)*(uint *)(uVar24 + 0xb8) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(uVar24 + 0xb8) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209b23;
      (*pcVar4)(uVar24 + 0x18,uVar24 + 0xa0);
    }
  }
  *(uint *)(uVar24 + 0xa0) = unaff_R15[0x2d];
  *(undefined4 *)(uVar24 + 0xb8) = 0;
  *(undefined8 *)(uVar24 + 0x18) = 0xf71d770;
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209b63;
  lVar23 = func_0x09be9cc0(uVar18,0xf71d770,&UNK_01563a4f,uVar24 + 0x18,uVar24 + 0xf);
  uVar20 = *(uint *)(uVar24 + 0xb8);
  if ((ulong)*(uint *)(lVar23 + 0x50) == 0xffffffff) {
    if (uVar20 != 0xffffffff) goto LAB_0d209ba4;
  }
  else {
    if (uVar20 == 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar23 + 0x50) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209b95;
      (*pcVar4)(uVar24 + 0x18);
      *(undefined4 *)(lVar23 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209ba4:
      *(long *)(uVar24 + 0x18) = lVar23 + 0x38;
      pcVar4 = *(code **)(&UNK_0f45a900 + (ulong)uVar20 * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209bc0;
      (*pcVar4)(uVar24 + 0x18,lVar23 + 0x38,uVar24 + 0xa0);
    }
    if ((ulong)*(uint *)(uVar24 + 0xb8) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(uVar24 + 0xb8) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209be8;
      (*pcVar4)(uVar24 + 0x18,uVar24 + 0xa0);
    }
  }
  *(char *)(uVar24 + 0xa0) = (char)unaff_R15[0x25];
  *(undefined4 *)(uVar24 + 0xb8) = 9;
  *(undefined8 *)(uVar24 + 0x18) = 0xf71d560;
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209c29;
  lVar23 = func_0x09be9cc0(uVar18,0xf71d560,&UNK_01563a4f,uVar24 + 0x18,uVar24 + 0xf);
  uVar20 = *(uint *)(uVar24 + 0xb8);
  if ((ulong)*(uint *)(lVar23 + 0x50) == 0xffffffff) {
    if (uVar20 != 0xffffffff) goto LAB_0d209c6a;
  }
  else {
    if (uVar20 == 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar23 + 0x50) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209c5b;
      (*pcVar4)(uVar24 + 0x18);
      *(undefined4 *)(lVar23 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209c6a:
      *(long *)(uVar24 + 0x18) = lVar23 + 0x38;
      pcVar4 = *(code **)(&UNK_0f45a900 + (ulong)uVar20 * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209c86;
      (*pcVar4)(uVar24 + 0x18,lVar23 + 0x38,uVar24 + 0xa0);
    }
    if ((ulong)*(uint *)(uVar24 + 0xb8) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(uVar24 + 0xb8) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209cae;
      (*pcVar4)(uVar24 + 0x18,uVar24 + 0xa0);
    }
  }
  uVar20 = unaff_R15[2];
  *(undefined8 *)(uVar24 - 8) = 0xd209cba;
  func_0x0d208ea0(0x170,uVar20);
  uVar3 = *(undefined4 *)(uVar24 + 0x44);
  *(undefined8 *)(uVar24 - 8) = 0xd209cc6;
  func_0x0d208c60(0x170,uVar3);
  uVar20 = unaff_R15[0xc];
  *(undefined8 *)(uVar24 - 8) = 0xd209cd3;
  func_0x0d208dd0(0x170,(char)uVar20);
  *(undefined1 (*) [16])(uVar24 + 0xa0) = (undefined1  [16])0x0;
  *(undefined8 *)(uVar24 + 0xb0) = 0;
  *(undefined8 *)(uVar24 - 8) = 0xd209cfc;
  func_0x0d208fa0(0x170,uVar24 + 0xa0);
  *(undefined **)(uVar24 + 0xa0) = &UNK_0f47e0b0;
  pauVar2 = (undefined1 (*) [16])(uVar24 + 0xb0);
  *(undefined1 (*) [16])(uVar24 + 0xb0) = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(uVar24 + 0xa8) = pauVar2;
  pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209d46;
  puVar15 = (undefined8 *)(*pcVar4)(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) {
    *(undefined8 *)(uVar24 - 8) = 0xd20a484;
    func_0x0eec74c0(0x20,0);
  }
  *puVar15 = &UNK_0f47e0b0;
  puVar15[1] = *(undefined8 *)(uVar24 + 0xa8);
  lVar23 = *(long *)(uVar24 + 0xb0);
  puVar15[2] = lVar23;
  lVar7 = *(long *)(uVar24 + 0xb8);
  puVar15[3] = lVar7;
  if (lVar7 == 0) {
    puVar15[1] = puVar15 + 2;
  }
  else {
    *(undefined8 **)(lVar23 + 0x10) = puVar15 + 2;
    *(undefined1 (**) [16])(uVar24 + 0xa8) = pauVar2;
    *pauVar2 = (undefined1  [16])0x0;
    lVar23 = 0;
  }
  *(undefined **)(uVar24 + 0xa0) = &UNK_0f47e0b0;
  *(undefined8 *)(uVar24 - 8) = 0xd209db3;
  func_0x0d6c9500(uVar24 + 0xa8,lVar23);
  *(undefined8 **)(uVar24 + 0x18) = puVar15;
  *(undefined4 *)(uVar24 + 0x30) = 8;
  *(undefined8 *)(uVar24 + 0xa0) = 0xf71d5d8;
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209ded;
  lVar23 = func_0x09be9cc0(uVar18,0xf71d5d8,&UNK_01563a4f,uVar24 + 0xa0,uVar24 + 0xf);
  uVar20 = *(uint *)(uVar24 + 0x30);
  if ((ulong)*(uint *)(lVar23 + 0x50) == 0xffffffff) {
    if (uVar20 != 0xffffffff) goto LAB_0d209e2e;
  }
  else {
    if (uVar20 == 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar23 + 0x50) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209e1f;
      (*pcVar4)(uVar24 + 0xa0);
      *(undefined4 *)(lVar23 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209e2e:
      *(long *)(uVar24 + 0xa0) = lVar23 + 0x38;
      pcVar4 = *(code **)(&UNK_0f45a900 + (ulong)uVar20 * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209e4d;
      (*pcVar4)(uVar24 + 0xa0,lVar23 + 0x38,uVar24 + 0x18);
    }
    if ((ulong)*(uint *)(uVar24 + 0x30) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(uVar24 + 0x30) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209e72;
      (*pcVar4)(uVar24 + 0xa0,uVar24 + 0x18);
    }
  }
  *(undefined **)(uVar24 + 0xa0) = &UNK_0f47e0b0;
  *(undefined1 (*) [16])(uVar24 + 0xb0) = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(uVar24 + 0xa8) = pauVar2;
  pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209ead;
  puVar15 = (undefined8 *)(*pcVar4)(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) {
    *(undefined8 *)(uVar24 - 8) = 0xd20a495;
    func_0x0eec74c0(0x20,0);
  }
  *puVar15 = &UNK_0f47e0b0;
  puVar15[1] = *(undefined8 *)(uVar24 + 0xa8);
  lVar23 = *(long *)(uVar24 + 0xb0);
  puVar15[2] = lVar23;
  lVar7 = *(long *)(uVar24 + 0xb8);
  puVar15[3] = lVar7;
  if (lVar7 == 0) {
    puVar15[1] = puVar15 + 2;
  }
  else {
    *(undefined8 **)(lVar23 + 0x10) = puVar15 + 2;
    *(undefined1 (**) [16])(uVar24 + 0xa8) = pauVar2;
    *pauVar2 = (undefined1  [16])0x0;
    lVar23 = 0;
  }
  piVar13 = *(int **)(uVar24 + 0x50);
  *(undefined **)(uVar24 + 0xa0) = &UNK_0f47e0b0;
  *(undefined8 *)(uVar24 - 8) = 0xd209f1f;
  func_0x0d6c9500(uVar24 + 0xa8,lVar23);
  *(undefined8 **)(uVar24 + 0x18) = puVar15;
  *(undefined4 *)(uVar24 + 0x30) = 8;
  *(undefined8 *)(uVar24 + 0xa0) = 0xf71d628;
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd209f59;
  lVar23 = func_0x09be9cc0(uVar18,0xf71d628,&UNK_01563a4f,uVar24 + 0xa0,uVar24 + 0xf);
  uVar20 = *(uint *)(uVar24 + 0x30);
  if ((ulong)*(uint *)(lVar23 + 0x50) == 0xffffffff) {
    if (uVar20 != 0xffffffff) goto LAB_0d209f9a;
  }
  else {
    if (uVar20 == 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar23 + 0x50) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209f8b;
      (*pcVar4)(uVar24 + 0xa0);
      *(undefined4 *)(lVar23 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209f9a:
      *(long *)(uVar24 + 0xa0) = lVar23 + 0x38;
      pcVar4 = *(code **)(&UNK_0f45a900 + (ulong)uVar20 * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209fb9;
      (*pcVar4)(uVar24 + 0xa0,lVar23 + 0x38,uVar24 + 0x18);
    }
    if ((ulong)*(uint *)(uVar24 + 0x30) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(uVar24 + 0x30) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd209fde;
      (*pcVar4)(uVar24 + 0xa0,uVar24 + 0x18);
    }
  }
  *(undefined8 *)(uVar24 - 8) = 0xd209fed;
  func_0x0d20aaa0(0x170,unaff_R15 + 0xa0);
  uVar18 = *(undefined8 *)(uVar24 + 0x38);
  *(undefined8 *)(uVar24 - 8) = 0xd209ff7;
  cVar11 = func_0x04864260(uVar18);
  if (cVar11 == '\0') goto LAB_0d20a24b;
  *(undefined8 *)(uVar24 - 8) = 0xd20a00f;
  func_0x0d3a5d30(uVar24 + 0xa0,0x170);
  uVar18 = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar24 - 8) = 0xd20a020;
  plVar14 = (long *)func_0x0d227700(uVar18,0xf71d5b0);
  if (plVar14 != (long *)0x0) {
    lVar23 = *plVar14;
    uVar21 = plVar14[1];
    uVar9 = auRam0000000000000660._8_8_;
    uVar16 = auRam0000000000000660._8_8_ - (auRam0000000000000660._8_8_ >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
    uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar16 >> 0x38 < 2) {
      uVar21 = uVar21 & auRam0000000000000660._8_8_ - 1;
    }
    else if (auRam0000000000000660._8_8_ <= uVar21) {
      if ((uVar21 | auRam0000000000000660._8_8_) >> 0x20 == 0) {
        uVar21 = (uVar21 & 0xffffffff) % (auRam0000000000000660._8_8_ & 0xffffffff);
      }
      else {
        uVar21 = uVar21 % auRam0000000000000660._8_8_;
      }
    }
    lVar7 = **(long **)(uVar24 + 0x10);
    plVar10 = *(long **)(lVar7 + uVar21 * 8);
    do {
      plVar17 = plVar10;
      plVar10 = (long *)*plVar17;
    } while ((long *)*plVar17 != plVar14);
    bVar8 = (byte)(uVar16 >> 0x38);
    if (plVar17 == (long *)0x670) {
LAB_0d20a131:
      if (lVar23 == 0) {
LAB_0d20a173:
        *(undefined8 *)(lVar7 + uVar21 * 8) = 0;
        lVar23 = *plVar14;
        goto LAB_0d20a17e;
      }
      uVar16 = *(ulong *)(lVar23 + 8);
      if (bVar8 < 2) {
        uVar22 = auRam0000000000000660._8_8_ - 1 & uVar16;
      }
      else {
        uVar22 = uVar16;
        if (auRam0000000000000660._8_8_ <= uVar16) {
          if ((uVar16 | auRam0000000000000660._8_8_) >> 0x20 == 0) {
            uVar22 = (uVar16 & 0xffffffff) % (auRam0000000000000660._8_8_ & 0xffffffff);
          }
          else {
            uVar22 = uVar16 % auRam0000000000000660._8_8_;
          }
        }
      }
      if (uVar22 != uVar21) goto LAB_0d20a173;
LAB_0d20a187:
      if (bVar8 < 2) {
        uVar16 = uVar16 & uVar9 - 1;
      }
      else if (uVar9 <= uVar16) {
        if ((uVar16 | uVar9) >> 0x20 == 0) {
          uVar16 = (uVar16 & 0xffffffff) % (uVar9 & 0xffffffff);
        }
        else {
          uVar16 = uVar16 % uVar9;
        }
      }
      if (uVar16 != uVar21) {
        *(long **)(lVar7 + uVar16 * 8) = plVar17;
        lVar23 = *plVar14;
      }
    }
    else {
      uVar16 = plVar17[1];
      if (bVar8 < 2) {
        uVar16 = uVar16 & auRam0000000000000660._8_8_ - 1;
      }
      else if (auRam0000000000000660._8_8_ <= uVar16) {
        if ((uVar16 | auRam0000000000000660._8_8_) >> 0x20 == 0) {
          uVar16 = (uVar16 & 0xffffffff) % (auRam0000000000000660._8_8_ & 0xffffffff);
        }
        else {
          uVar16 = uVar16 % auRam0000000000000660._8_8_;
        }
      }
      if (uVar16 != uVar21) goto LAB_0d20a131;
LAB_0d20a17e:
      if (lVar23 != 0) {
        uVar16 = *(ulong *)(lVar23 + 8);
        goto LAB_0d20a187;
      }
      lVar23 = 0;
    }
    *plVar17 = lVar23;
    *plVar14 = 0;
    auRam0000000000000670._8_8_ = auRam0000000000000670._8_8_ + -1;
    if ((ulong)*(uint *)(plVar14 + 10) != 0xffffffff) {
      pcVar4 = *(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(plVar14 + 10) * 8);
      *(undefined8 *)(uVar24 - 8) = 0xd20a1ff;
      (*pcVar4)(uVar24 + 0x18,plVar14 + 7);
    }
    *(undefined4 *)(plVar14 + 10) = 0xffffffff;
    if ((*(byte *)(plVar14 + 3) & 1) != 0) {
      uVar21 = plVar14[3];
      lVar23 = plVar14[5];
      *(undefined8 *)(uVar24 - 8) = 0xd20a21f;
      func_0x0412a280(lVar23,uVar21 & 0xfffffffffffffffe);
    }
    *(undefined8 *)(uVar24 - 8) = 0xd20a22c;
    func_0x0412a280(plVar14,0x58);
  }
  uVar18 = *(undefined8 *)(uVar24 + 0x38);
  *(undefined8 *)(uVar24 - 8) = 0xd20a23e;
  func_0x04863740(uVar18,uVar24 + 0xa0);
  *(undefined8 *)(uVar24 - 8) = 0xd20a24b;
  func_0x04863610(uVar24 + 0xa0);
LAB_0d20a24b:
  if (iRam0000000000000518 != 0) {
    uRam00000000000005c1._0_2_ = CONCAT11(1,(undefined1)uRam00000000000005c1);
  }
  if (((!SBORROW4(0,*piVar13)) || (!SBORROW4(0,piVar13[1]))) || (!SBORROW4(0,piVar13[2]))) {
    *(undefined8 *)(uVar24 - 8) = 0xd20a27b;
    func_0x0d20ac00(0x170,piVar13);
  }
  uVar20 = *unaff_R15;
  *(undefined **)(uVar24 + 0xa0) = &UNK_0f5356d0;
  *(undefined8 *)(uVar24 + 0xa80) = 0x100000000000000;
  *(uint *)(uVar24 + 0xa8) = uVar20;
  *(undefined4 *)(uVar24 + 0xa74) = 0;
  *(undefined8 *)(uVar24 + 0xa78) = 0;
  *(uint *)(uVar24 + 0xac) = uVar20;
  lVar23 = 5;
  while( true ) {
    uVar21 = ((ulong)((uVar20 >> 0x1e ^ uVar20) * 0x6c078965) + lVar23) - 4;
    uVar20 = (uint)uVar21;
    *(uint *)(uVar24 + 0x9c + lVar23 * 4) = uVar20;
    if (lVar23 == 0x191) break;
    uVar20 = (((uint)(uVar21 >> 0x1e) & 3 ^ uVar20) * 0x6c078965 + (int)lVar23) - 3;
    *(uint *)(uVar24 + 0xa0 + lVar23 * 4) = uVar20;
    lVar23 = lVar23 + 2;
  }
  *(undefined8 *)(uVar24 + 0xa6c) = 0x18e00000270;
  *(undefined8 *)(uVar24 - 8) = 0xd20a339;
  iRam00000000000004a0 = func_0x0ee4a260(uVar24 + 0xa0,0x29040);
  iRam00000000000004a0 = iRam00000000000004a0 + 12000;
  pcVar4 = *(code **)(*(long *)(uVar24 + 0xa0) + 0x18);
  *(undefined8 *)(uVar24 - 8) = 0xd20a357;
  iVar12 = (*pcVar4)(uVar24 + 0xa0,0x29040);
  uRam00000000000004a8 = CONCAT44(uRam00000000000004a8._4_4_,iVar12 + 12000);
  uRam00000000000003d0 = (undefined2)unaff_R15[0x2e];
  plRam00000000000003d8 = *(long **)(unaff_R15 + 0x30);
  uVar18 = *(undefined8 *)(unaff_R15 + 0x32);
  if (*(long *)(unaff_R15 + 0x32) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(unaff_R15 + 0x32) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = plRam00000000000003e0;
  if (plRam00000000000003e0 != (long *)0x0) {
    LOCK();
    plVar10 = plRam00000000000003e0 + 1;
    lVar23 = *plVar10;
    plRam00000000000003e0 = (long *)uVar18;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    uVar18 = plRam00000000000003e0;
    if (lVar23 == 0) {
      pcVar4 = *(code **)(*plVar14 + 0x10);
      *(undefined8 *)(uVar24 - 8) = 0xd20a3bc;
      (*pcVar4)(plVar14);
      *(undefined8 *)(uVar24 - 8) = 0xd20a3c4;
      func_0x0412c2d0(plVar14);
      uVar18 = plRam00000000000003e0;
    }
  }
  plRam00000000000003e0 = (long *)uVar18;
  iVar12 = (int)uRam00000000000003d0._1_1_;
  uVar18 = *(undefined8 *)(uVar24 + 0x98);
  *(undefined8 *)(uVar24 - 8) = 0xd20a3d8;
  func_0x0bc26b90(uVar18,iVar12);
  uRam0000000000000172 = *(undefined1 *)((long)unaff_R15 + 0x7d);
  if (DAT_0f776b18 == '\0') {
    *(undefined8 *)(uVar24 - 8) = 0xd20a4a6;
    iVar12 = func_0x04108328(&DAT_0f776b18);
    if (iVar12 != 0) {
      *(undefined8 *)(uVar24 - 8) = 0xd20a4ba;
      func_0x0edf5500(0xf776968);
      *(undefined8 *)(uVar24 - 8) = 0xd20a4d4;
      func_0x0eee2f40(&SUB_0edf6010,0xf776968,0xf53dab8);
      *(undefined8 *)(uVar24 - 8) = 0xd20a4e0;
      func_0x0410844d(&DAT_0f776b18);
    }
  }
  *(undefined8 *)(uVar24 - 8) = 0xd20a403;
  func_0x0ee32f20(0xf7769b0,0x440,1);
  return;
}


