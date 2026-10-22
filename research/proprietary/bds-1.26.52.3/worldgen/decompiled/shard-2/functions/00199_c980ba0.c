/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca80ba0 (ELF vaddr 0xc980ba0)
 * Label: caller-of-callee
 * Body:  [[0ca80ba0, 0ca81ee0] [0ca81ef0, 0ca83f67] [0ca84070, 0ca84081] [0ca8434e, 0ca8435c] [0ca84386, 0ca84397] [0ca8454b, 0ca84583]]
 * Ghidra: FUN_0ca80ba0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca80ba0(long param_1,byte *param_2)

{
  long *plVar1;
  ushort uVar2;
  long **pplVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  undefined *puVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  undefined8 *******pppppppuVar22;
  long **pplVar23;
  undefined8 ******ppppppuVar24;
  int *piVar25;
  code *pcVar26;
  undefined8 ******ppppppuVar27;
  bool bVar28;
  long *plStack_9e0;
  undefined8 ******ppppppuStack_9d8;
  undefined8 ******ppppppuStack_9d0;
  long *plStack_9c8;
  undefined8 ******ppppppuStack_9c0;
  undefined8 ******ppppppuStack_9b8;
  short sStack_9a8;
  short sStack_9a6;
  short sStack_9a4;
  undefined2 uStack_9a2;
  undefined8 ******ppppppuStack_9a0;
  undefined8 ******ppppppuStack_998;
  short sStack_990;
  short sStack_98e;
  short sStack_98c;
  undefined2 uStack_98a;
  undefined8 ******ppppppuStack_988;
  undefined8 ******ppppppuStack_980;
  long *plStack_978;
  undefined8 ******ppppppuStack_970;
  undefined8 uStack_968;
  long lStack_960;
  long *plStack_958;
  long **pplStack_950;
  char *pcStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 *puStack_928;
  undefined8 *******pppppppuStack_920;
  ulong uStack_918;
  undefined8 ******ppppppuStack_910;
  undefined8 ******ppppppuStack_908;
  int iStack_900;
  char cStack_8fc;
  long **pplStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  undefined8 uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined4 uStack_8b0;
  byte bStack_8ac;
  long *plStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  long *plStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  char *pcStack_868;
  ulong uStack_860;
  long *plStack_858;
  undefined8 uStack_850;
  undefined8 *puStack_848;
  undefined8 *******apppppppuStack_840 [3];
  code *pcStack_828;
  undefined1 auStack_818 [32];
  uint uStack_7f8;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  uint uStack_78c;
  undefined8 *puStack_788;
  undefined8 *******pppppppuStack_780;
  undefined8 uStack_778;
  ulong uStack_770;
  code *pcStack_768;
  undefined *puStack_758;
  undefined *puStack_750;
  long lStack_748;
  undefined **ppuStack_738;
  undefined1 uStack_728;
  undefined2 uStack_726;
  undefined1 uStack_724;
  long **pplStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined8 uStack_6c8;
  undefined4 uStack_6c0;
  byte bStack_6bc;
  long *plStack_6b0;
  undefined8 uStack_6a8;
  ulong uStack_6a0;
  int *piStack_698;
  undefined8 *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  long *aplStack_678 [4];
  long **pplStack_658;
  undefined8 uStack_628;
  long *plStack_618;
  long **pplStack_610;
  char *pcStack_608;
  char *pcStack_600;
  long *plStack_5f8;
  long lStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 ******ppppppuStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  ulong uStack_5b8;
  long lStack_5b0;
  long **pplStack_5a8;
  long **pplStack_5a0;
  long **pplStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  undefined8 *******apppppppuStack_570 [3];
  code *pcStack_558;
  int iStack_550;
  char cStack_54c;
  undefined1 auStack_548 [76];
  byte bStack_4fc;
  byte *pbStack_4f8;
  ulong uStack_4f0;
  long *plStack_4e8;
  long **pplStack_4e0;
  char *pcStack_4d8;
  ulong uStack_4d0;
  long **pplStack_4c8;
  ulong uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 ******ppppppuStack_4a0;
  undefined8 ******appppppuStack_498 [6];
  undefined8 uStack_468;
  undefined1 uStack_458;
  undefined2 uStack_456;
  undefined1 uStack_454;
  uint uStack_438;
  undefined1 auStack_430 [840];
  ulong uStack_e8;
  undefined1 auStack_e0 [38];
  char cStack_ba;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [24];
  code *pcStack_90;
  undefined1 auStack_80 [76];
  byte bStack_34;
  
  bVar28 = (*param_2 & 1) != 0;
  pbStack_4f8 = param_2 + 1;
  if (bVar28) {
    pbStack_4f8 = *(byte **)(param_2 + 0x10);
  }
  uStack_4f0 = (ulong)(*param_2 >> 1);
  if (bVar28) {
    uStack_4f0 = *(ulong *)(param_2 + 8);
  }
  lStack_7c0 = *(long *)(param_1 + 8);
  func_0x05f72110(&plStack_4e8,&pbStack_4f8);
  if (0xfffffffffffffff7 < uStack_e8) {
    FUN_04882e30();
LAB_0ca83f56:
    func_0x04890760();
    goto LAB_0ca83f5b;
  }
  if (uStack_e8 < 0x17) {
    uStack_6a8 = CONCAT71(uStack_6a8._1_7_,(char)uStack_e8 * '\x02');
    piVar25 = (int *)((long)&uStack_6a8 + 1);
    if (uStack_e8 != 0) goto LAB_0ca80cbe;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_6a8._1_1_ = 0;
    if ((uStack_6a8 & 1) == 0) goto LAB_0ca80ce6;
LAB_0ca80c48:
    bVar5 = (byte)uStack_6a8;
    if (uStack_6a0 == 4) goto LAB_0ca80cf7;
LAB_0ca80c5a:
    bVar28 = false;
  }
  else {
    uVar19 = 0x1a;
    if ((uStack_e8 | 7) != 0x17) {
      uVar19 = (uStack_e8 | 7) + 1;
    }
    piVar25 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
    if (piVar25 == (int *)0x0) {
      func_0x0eec74c0(uVar19,0);
    }
    uStack_6a8 = uVar19 | 1;
    uStack_6a0 = uStack_e8;
    piStack_698 = piVar25;
LAB_0ca80cbe:
    func_0x0eee2f00(piVar25,&plStack_4e8,uStack_e8);
    *(undefined1 *)((long)piVar25 + uStack_e8) = 0;
    if ((uStack_6a8 & 1) != 0) goto LAB_0ca80c48;
LAB_0ca80ce6:
    bVar5 = (byte)uStack_6a8;
    if ((byte)uStack_6a8 >> 1 != 4) goto LAB_0ca80c5a;
LAB_0ca80cf7:
    piVar25 = piStack_698;
    if ((bVar5 & 1) == 0) {
      piVar25 = (int *)((long)&uStack_6a8 + 1);
    }
    bVar28 = *piVar25 == 0x6e6f736a;
  }
  if ((bVar5 & 1) != 0) {
    func_0x0412a280(piStack_698,uStack_6a8 & 0xfffffffffffffffe);
  }
  if (!bVar28) {
    return;
  }
  plStack_8a8 = (long *)0x0;
  uStack_8a0 = 0;
  uStack_898 = 0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  func_0x0d62a0d0(*(undefined8 *)(lVar15 + -0x28),param_2,&plStack_8a8,*(undefined4 *)(lVar15 + -8))
  ;
  lVar15 = *(long *)(param_1 + 0x18);
  lStack_960 = param_1;
  func_0x05d54750(&plStack_4e8,&UNK_0f0863e8);
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  piStack_698 = (int *)0x0;
  puStack_690 = &uStack_688;
  uStack_688 = 0;
  uStack_680 = 0;
  pplStack_658 = (long **)0x0;
  uStack_628 = 0;
  plStack_618 = plStack_4e8;
  pplStack_610 = (long **)0x0;
  pplVar23 = pplStack_4e0;
  if (((ulong)pplStack_4e0 >> 0x37 & 1) != 0) {
    uVar19 = (ulong)pplStack_4e0 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uVar19 - 8);
    lVar17 = lVar12 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar7 = lVar12;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar12);
    *(undefined1 *)((long)plVar7 + lVar12 + 8) = 0;
    pplVar23 = (long **)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pcStack_608 = (char *)0x0;
  pplStack_610 = pplVar23;
  if (((ulong)pcStack_4d8 & 0x80000000000000) == 0) {
    pcStack_608 = pcStack_4d8;
    pcStack_600 = (char *)0x0;
    plStack_5f8 = (long *)0x0;
    lStack_5f0 = 0;
    puStack_5e8 = (undefined8 *)0x0;
    puStack_5e0 = (undefined8 *)0x0;
    uStack_5d8 = 0;
    ppppppuStack_5d0 = (undefined8 ******)0x0;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
  }
  else {
    uVar19 = (ulong)pcStack_4d8 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uVar19 - 8);
    lVar17 = lVar12 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar7 = lVar12;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar12);
    *(undefined1 *)((long)plVar7 + lVar12 + 8) = 0;
    pcStack_608 = (char *)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    ppppppuStack_5d0 = (undefined8 ******)0x0;
    uStack_5c8 = 0;
    puStack_5e0 = (undefined8 *)0x0;
    uStack_5d8 = 0;
    lStack_5f0 = 0;
    puStack_5e8 = (undefined8 *)0x0;
    pcStack_600 = (char *)0x0;
    plStack_5f8 = (long *)0x0;
    uStack_5c0 = 0;
    if (((ulong)pcStack_4d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_4d8 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_4d8 = (char *)0x0;
  if (((ulong)pplStack_4e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_4e0 & 0xff00ffffffffffff) - 8);
  }
  plVar7 = plStack_5f8;
  pcStack_600 = (char *)0x0;
  plStack_5f8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    lVar17 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0412c2d0(plVar7);
    }
  }
  plVar9 = plStack_5f8;
  lStack_5f0 = 0;
  pcStack_600 = *(char **)(lVar15 + 8);
  plVar7 = *(long **)(lVar15 + 0x10);
  if (plVar7 != (long *)0x0) {
    LOCK();
    *(long *)((long)plVar7 + 8U) = *(long *)((long)plVar7 + 8U) + 1;
    UNLOCK();
  }
  if (plStack_5f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5f8 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_5f8;
      plStack_5f8 = plVar7;
      (**(code **)(lVar17 + 0x10))(plVar9);
      FUN_0412c2d0(plVar9);
      plVar7 = plStack_5f8;
    }
  }
  plStack_5f8 = plVar7;
  plVar7 = plStack_5f8;
  pcVar10 = pcStack_600;
  uStack_870 = &plStack_618;
  if (pcStack_600 != (char *)0x0) {
    lStack_5f0 = lVar15;
  }
  lVar17 = lStack_5f0;
  uStack_878 = (long ***)&uStack_6a8;
  uStack_860 = (ulong)plStack_5f8;
  if (plStack_5f8 != (long *)0x0) {
    LOCK();
    *(long *)((long)plStack_5f8 + 8U) = *(long *)((long)plStack_5f8 + 8U) + 1;
    UNLOCK();
  }
  plStack_858 = (long *)lStack_5f0;
  uStack_850 = puStack_5e8;
  pcStack_868 = pcStack_600;
  if (puStack_5e8 == (undefined8 *)0x0) {
    uStack_850 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (uStack_850 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *uStack_850 = 0;
  }
  puStack_5e8 = uStack_850;
  if (puStack_5e0 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = 0;
    puStack_5e0 = puVar8;
  }
  apppppppuStack_840[0] = &ppppppuStack_5d0;
  uStack_7b8 = (long *)uStack_878;
  uStack_7b0 = uStack_870;
  uStack_7a0 = (ulong)plVar7;
  pcStack_868 = (char *)0x0;
  uStack_860 = 0;
  uStack_798 = (uint)lVar17;
  uStack_794 = (undefined4)((ulong)lVar17 >> 0x20);
  plStack_858 = (long *)0x0;
  uStack_790 = (undefined4)uStack_850;
  uStack_78c = uStack_850._4_4_;
  uStack_778 = _DAT_0f6ed570;
  uStack_770 = 0;
  uVar19 = _DAT_0f6ed578;
  puStack_848 = puStack_5e0;
  uStack_7a8 = pcVar10;
  puStack_788 = puStack_5e0;
  pppppppuStack_780 = apppppppuStack_840[0];
  if ((_DAT_0f6ed578 & 0x80000000000000) != 0) {
    uVar19 = _DAT_0f6ed578 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uVar19 - 8);
    lVar17 = lVar12 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar7 = lVar12;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar12);
    *(undefined1 *)((long)plVar7 + lVar12 + 8) = 0;
    uVar19 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  pcStack_768 = (code *)0x0;
  pcVar26 = _DAT_0f6ed580;
  uStack_770 = uVar19;
  if (((ulong)_DAT_0f6ed580 & 0x80000000000000) != 0) {
    uVar19 = (ulong)_DAT_0f6ed580 & 0xff00ffffffffffff;
    lVar12 = *(long *)(uVar19 - 8);
    lVar17 = lVar12 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar7 = lVar12;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar12);
    *(undefined1 *)((long)plVar7 + lVar12 + 8) = 0;
    pcVar26 = (code *)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppuStack_738 = &puStack_758;
  puStack_758 = &UNK_0f3ed590;
  puStack_750 = &UNK_0ca6a9a0;
  uStack_728 = 1;
  uStack_726 = 0xfffc;
  uStack_724 = 1;
  pcStack_768 = pcVar26;
  lStack_748 = lVar15;
  func_0x05d54750(&sStack_990,&UNK_0f3ed7f8);
  pppppppuVar18 = pppppppuStack_780;
  if (*(char *)((long)pppppppuStack_780 + 6) == '\0') {
    *pppppppuStack_780 =
         (undefined8 ******)
         CONCAT26(uStack_98a,CONCAT24(sStack_98c,CONCAT22(sStack_98e,sStack_990)));
    if (((ulong)pppppppuStack_780[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_780[1] & 0xff00ffffffffffff) - 8);
    }
    pppppppuVar18[1] = (undefined8 ******)0x0;
    ppppppuVar24 = ppppppuStack_988;
    if (((ulong)ppppppuStack_988 & 0x80000000000000) != 0) {
      uVar19 = (ulong)ppppppuStack_988 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar19 - 8);
      lVar15 = lVar17 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar7 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar7 = lVar17;
      func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
      *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
      ppppppuVar24 = (undefined8 ******)
                     ((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuVar18[1] = ppppppuVar24;
    if (((ulong)pppppppuVar18[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuVar18[2] & 0xff00ffffffffffff) - 8);
    }
    pppppppuVar18[2] = (undefined8 ******)0x0;
    ppppppuVar24 = ppppppuStack_980;
    if (((ulong)ppppppuStack_980 & 0x80000000000000) != 0) {
      uVar19 = (ulong)ppppppuStack_980 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar19 - 8);
      lVar15 = lVar17 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar7 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar7 = lVar17;
      func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
      *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
      ppppppuVar24 = (undefined8 ******)
                     ((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuVar18[2] = ppppppuVar24;
  }
  plVar7 = uStack_7b8;
  func_0x0ca75990(&uStack_878,&uStack_7b8,0,&sStack_990,uStack_724);
  if (uStack_878 != (long ***)0x0) {
    plVar9 = (long *)*plVar7;
    plVar1 = (long *)plVar7[1];
    if (plVar9 != plVar1) {
      plVar20 = (long *)(uStack_878 + 7);
      do {
        cVar6 = func_0x04fa7a10(*plVar9 + 0x20,plVar20);
        if (cVar6 == '\0') break;
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
    func_0x0d6af860(plVar7,plVar9,&uStack_878);
    plVar7 = (long *)uStack_878;
    uStack_878 = (long ***)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  plVar7 = uStack_7b8;
  uStack_728 = 0;
  if (((ulong)ppppppuStack_988 & 0x80000000000000) == 0) {
    if (((ulong)ppppppuStack_988 & 0x7f000000000000) == 0) goto LAB_0ca8169d;
    uVar19 = (ulong)((ushort)((ulong)ppppppuStack_988 >> 0x30) & 0x7f);
LAB_0ca81664:
    if ((((uVar19 != 4) || (*(int *)((ulong)ppppppuStack_988 & 0xff00ffffffffffff) != 0x61746562))
        || (sStack_990 != 9999)) || ((sStack_98e != 9999 || (sStack_98c != 9999))))
    goto LAB_0ca8169d;
  }
  else {
    uVar19 = *(ulong *)(((ulong)ppppppuStack_988 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0ca81664;
LAB_0ca8169d:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    func_0x0d6b23d0(plVar9,&uStack_778,&sStack_990);
    *plVar9 = (long)&UNK_0f3ed718;
    plVar9[8] = (long)&UNK_0f3ed758;
    plVar9[9] = (long)&UNK_0ca6b480;
    plVar9[0xc] = (long)(plVar9 + 8);
    uStack_878 = (long ***)plVar9;
    func_0x0d6afb30(plVar7,&uStack_878);
    if (uStack_878 != (long ***)0x0) {
      (**(code **)((long)*uStack_878 + 8))();
    }
  }
  plStack_958 = uStack_7b8;
  pplStack_950 = uStack_7b0;
  pcStack_948 = uStack_7a8;
  uStack_940 = uStack_7a0;
  uStack_7a8 = (char *)0x0;
  uStack_7a0 = 0;
  uStack_938 = (long *)CONCAT44(uStack_794,uStack_798);
  uStack_798 = 0;
  uStack_794 = 0;
  uStack_930 = (long **)CONCAT44(uStack_78c,uStack_790);
  puStack_928 = puStack_788;
  pppppppuStack_920 = pppppppuStack_780;
  ppppppuStack_910 = (undefined8 ******)0x0;
  ppppppuVar24 = ppppppuStack_988;
  if (((ulong)ppppppuStack_988 & 0x80000000000000) != 0) {
    uVar19 = (ulong)ppppppuStack_988 & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar24 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppppppuStack_908 = (undefined8 ******)0x0;
  ppppppuVar27 = ppppppuStack_980;
  ppppppuStack_910 = ppppppuVar24;
  if (((ulong)ppppppuStack_980 & 0x80000000000000) != 0) {
    uVar19 = (ulong)ppppppuStack_980 & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar27 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar19 = uStack_8c8;
  uStack_8d8 = 0;
  uStack_8c8 = CONCAT71(uStack_8c8._1_7_,1);
  uStack_8c8._0_4_ = CONCAT22(0xfbf8,(undefined2)uStack_8c8);
  uStack_8c8._5_3_ = SUB83(uVar19,5);
  uStack_8c8._0_5_ = CONCAT14(1,(undefined4)uStack_8c8);
  ppppppuStack_908 = ppppppuVar27;
  func_0x05d54750(&sStack_9a8,&UNK_0f3ed978);
  pppppppuVar18 = pppppppuStack_920;
  if (*(char *)((long)pppppppuStack_920 + 6) == '\0') {
    *pppppppuStack_920 =
         (undefined8 ******)
         CONCAT26(uStack_9a2,CONCAT24(sStack_9a4,CONCAT22(sStack_9a6,sStack_9a8)));
    if (((ulong)pppppppuStack_920[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_920[1] & 0xff00ffffffffffff) - 8);
    }
    pppppppuVar18[1] = (undefined8 ******)0x0;
    ppppppuVar24 = ppppppuStack_9a0;
    if (((ulong)ppppppuStack_9a0 & 0x80000000000000) != 0) {
      uVar19 = (ulong)ppppppuStack_9a0 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar19 - 8);
      lVar15 = lVar17 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar7 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar7 = lVar17;
      func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
      *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
      ppppppuVar24 = (undefined8 ******)
                     ((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuVar18[1] = ppppppuVar24;
    if (((ulong)pppppppuVar18[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuVar18[2] & 0xff00ffffffffffff) - 8);
    }
    pppppppuVar18[2] = (undefined8 ******)0x0;
    ppppppuVar24 = ppppppuStack_998;
    if (((ulong)ppppppuStack_998 & 0x80000000000000) != 0) {
      uVar19 = (ulong)ppppppuStack_998 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar19 - 8);
      lVar15 = lVar17 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar7 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar7 = lVar17;
      func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
      *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
      ppppppuVar24 = (undefined8 ******)
                     ((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppppuVar18[2] = ppppppuVar24;
  }
  plVar7 = plStack_958;
  func_0x0ca75990(&uStack_878,&plStack_958,1,&sStack_9a8,uStack_8c8._4_1_);
  if (uStack_878 != (long ***)0x0) {
    plVar9 = (long *)*plVar7;
    plVar1 = (long *)plVar7[1];
    while ((plVar9 != plVar1 &&
           (cVar6 = func_0x04fa7a10(*plVar9 + 0x20,uStack_878 + 7), cVar6 != '\0'))) {
      plVar9 = plVar9 + 1;
    }
    func_0x0d6af860(plVar7,plVar9,&uStack_878);
    plVar7 = (long *)uStack_878;
    uStack_878 = (long ***)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  plVar7 = plStack_958;
  uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
  if (((ulong)ppppppuStack_9a0 & 0x80000000000000) == 0) {
    if (((ulong)ppppppuStack_9a0 & 0x7f000000000000) == 0) goto LAB_0ca81b96;
    uVar19 = (ulong)((ushort)((ulong)ppppppuStack_9a0 >> 0x30) & 0x7f);
LAB_0ca81b5d:
    if ((((uVar19 != 4) || (*(int *)((ulong)ppppppuStack_9a0 & 0xff00ffffffffffff) != 0x61746562))
        || (sStack_9a8 != 9999)) || ((sStack_9a6 != 9999 || (sStack_9a4 != 9999))))
    goto LAB_0ca81b96;
  }
  else {
    uVar19 = *(ulong *)(((ulong)ppppppuStack_9a0 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0ca81b5d;
LAB_0ca81b96:
    if (((pcStack_948 == (char *)0x0) || (*pcStack_948 == '\0')) &&
       (cVar6 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_01300e11),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((puStack_928 == (undefined8 *)0x0) &&
       (cVar6 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_01300e11),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_948 == (char *)0x0) &&
       (cVar6 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*pcStack_948 == '\0') &&
       (cVar6 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar15 = (long)uStack_938;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(plVar9,&uStack_918,&sStack_9a8);
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    pcVar10 = *(char **)(lVar15 + 8);
    lVar17 = *(long *)(lVar15 + 0x10);
    if (lVar17 == 0) {
      plVar9[8] = (long)pcVar10;
      plVar9[9] = 0;
    }
    else {
      LOCK();
      *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 1;
      UNLOCK();
      plVar1 = (long *)plVar9[9];
      plVar9[8] = (long)pcVar10;
      plVar9[9] = lVar17;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar20 = plVar1 + 1;
        lVar17 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          FUN_0412c2d0(plVar1);
        }
        pcVar10 = (char *)plVar9[8];
      }
    }
    if ((pcVar10 == (char *)0x0) || (plVar9[10] = lVar15, *pcVar10 == '\0')) goto LAB_0ca83f56;
    plVar9[0xe] = 0;
    plVar9[0xf] = 0;
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    *(undefined4 *)(plVar9 + 0x10) = 0x3f800000;
    *(undefined1 *)(plVar9 + 0x12) = 0;
    *(undefined1 *)(plVar9 + 0x24) = 0;
    *plVar9 = (long)&UNK_0f3ed830;
    plVar9[0x2a] = 0;
    plVar9[0x30] = 0;
    plVar9[0x32] = 0;
    pplStack_5a8 = (long **)0x0;
    pplStack_5a0 = (long **)0x0;
    pplStack_598 = (long **)0x0;
    uStack_878 = &pplStack_5a8;
    uStack_870 = (long **)((ulong)uStack_870 & 0xffffffffffffff00);
    pplVar23 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pplVar23 == (long **)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    pplStack_5a0 = pplVar23 + 3;
    *pplVar23 = (long *)0x617263656e696d26;
    pplVar23[1] = (long *)0x6e656d69643a7466;
    pplVar23[2] = (long *)0x6e6f6973;
    uStack_7f8 = 0;
    pplStack_5a8 = pplVar23;
    pplStack_598 = pplStack_5a0;
    func_0x0d6ad9e0(plVar9 + 0xc,pplVar23,pplStack_5a0,&uStack_878);
    if ((ulong)uStack_7f8 != 0xffffffff) {
      (**(code **)(&UNK_0f47df80 + (ulong)uStack_7f8 * 8))(&pplStack_708,&uStack_878);
    }
    pplVar3 = pplStack_5a8;
    pplVar23 = pplStack_5a0;
    if (pplStack_5a8 != (long **)0x0) {
      for (; pplVar3 != pplVar23; pplVar23 = pplVar23 + -3) {
        if (((ulong)pplVar23[-3] & 1) != 0) {
          func_0x0412a280(pplVar23[-1],(ulong)pplVar23[-3] & 0xfffffffffffffffe);
        }
      }
      pplStack_5a0 = pplVar3;
      func_0x0412a280(pplStack_5a8,(long)pplStack_598 - (long)pplStack_5a8);
    }
    plVar1 = (long *)plVar9[0x2a];
    puVar11 = &UNK_0f3edc60;
    uStack_878 = (long ***)&UNK_0f3edc60;
    plVar20 = plVar9 + 0x26;
    plVar9[0x2a] = 0;
    plStack_858 = &uStack_878;
    if (plVar1 == plVar20) {
      lVar15 = 0x20;
LAB_0ca81f7e:
      (**(code **)(*plVar1 + lVar15))();
      if (plStack_858 == (long *)0x0) {
        plVar9[0x2a] = 0;
      }
      else {
        if (plStack_858 == &uStack_878) {
          puVar11 = (undefined *)*plStack_858;
          goto LAB_0ca81fb9;
        }
        plVar9[0x2a] = (long)plStack_858;
      }
    }
    else {
      lVar15 = 0x28;
      if (plVar1 != (long *)0x0) goto LAB_0ca81f7e;
LAB_0ca81fb9:
      plVar9[0x2a] = (long)plVar20;
      (**(code **)(puVar11 + 0x18))(plStack_858,plVar20);
      if (plStack_858 == &uStack_878) {
        lVar15 = 0x20;
      }
      else {
        lVar15 = 0x28;
        if (plStack_858 == (long *)0x0) goto LAB_0ca81ff6;
      }
      (**(code **)(*plStack_858 + lVar15))();
    }
LAB_0ca81ff6:
    uStack_878 = (long ***)plVar9;
    func_0x0d6afb30(plVar7,&uStack_878);
    if (uStack_878 != (long ***)0x0) {
      (**(code **)((long)*uStack_878 + 8))();
    }
  }
  plStack_4e8 = plStack_958;
  pplStack_4e0 = pplStack_950;
  pcStack_4d8 = pcStack_948;
  uStack_4d0 = uStack_940;
  pcStack_948 = (char *)0x0;
  uStack_940 = 0;
  pplStack_4c8 = (long **)uStack_938;
  uStack_938 = (long *)0x0;
  uStack_4c0 = (ulong)uStack_930;
  puStack_4b8 = puStack_928;
  pppppppuStack_4b0 = pppppppuStack_920;
  uStack_4a8 = (long *)CONCAT26(uStack_9a2,CONCAT24(sStack_9a4,CONCAT22(sStack_9a6,sStack_9a8)));
  ppppppuStack_4a0 = (undefined8 ******)0x0;
  ppppppuVar24 = ppppppuStack_9a0;
  if (((ulong)ppppppuStack_9a0 & 0x80000000000000) != 0) {
    uVar19 = (ulong)ppppppuStack_9a0 & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar24 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  appppppuStack_498[0] = (undefined8 ******)0x0;
  ppppppuVar27 = ppppppuStack_998;
  ppppppuStack_4a0 = ppppppuVar24;
  if (((ulong)ppppppuStack_998 & 0x80000000000000) != 0) {
    uVar19 = (ulong)ppppppuStack_998 & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar27 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplVar23 = pplStack_4e0;
  uStack_468 = 0;
  uStack_458 = 1;
  uStack_456 = 0xfbf8;
  uStack_454 = 1;
  plStack_6b0 = plStack_4e8;
  plStack_9e0 = *pplStack_4e0;
  ppppppuStack_9d8 = (undefined8 ******)pplStack_4e0[1];
  appppppuStack_498[0] = ppppppuVar27;
  if (((ulong)ppppppuStack_9d8 & 0x80000000000000) != 0) {
    lVar17 = *(long *)(((ulong)ppppppuStack_9d8 & 0xff00ffffffffffff) - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,(ulong)ppppppuStack_9d8 & 0xff00ffffffffffff,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuStack_9d8 =
         (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppppppuStack_9d0 = (undefined8 ******)0x0;
  ppppppuVar24 = (undefined8 ******)pplVar23[2];
  if (((ulong)ppppppuVar24 & 0x80000000000000) != 0) {
    lVar17 = *(long *)(((ulong)ppppppuVar24 & 0xff00ffffffffffff) - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,(ulong)ppppppuVar24 & 0xff00ffffffffffff,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar24 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pplVar3 = pplStack_4e0;
  uVar19 = (ulong)ppppppuStack_4a0 & 0x80000000000000;
  uVar2 = (ushort)((ulong)ppppppuStack_4a0 >> 0x30);
  ppppppuStack_9d0 = ppppppuVar24;
  if (uVar19 == 0) {
    if (((ulong)ppppppuStack_4a0 & 0x7f000000000000) == 0) goto LAB_0ca823cb;
    uVar16 = (ulong)(uVar2 & 0x7f);
LAB_0ca82379:
    if ((((uVar16 != 4) || (*(int *)((ulong)ppppppuStack_4a0 & 0xff00ffffffffffff) != 0x61746562))
        || ((short)uStack_4a8 != 9999)) ||
       ((uStack_4a8._2_2_ != 9999 || (uStack_4a8._4_2_ != 9999)))) goto LAB_0ca823cb;
LAB_0ca825bc:
    if (uVar19 == 0) {
      if (((ulong)ppppppuStack_4a0 & 0x7f000000000000) != 0) {
        uVar16 = (ulong)(uVar2 & 0x7f);
LAB_0ca82607:
        if ((((uVar16 == 4) &&
             (piVar25 = (int *)((ulong)ppppppuStack_4a0 & 0xff00ffffffffffff),
             *piVar25 == 0x61746562)) && ((short)uStack_4a8 == 9999)) &&
           ((uStack_4a8._2_2_ == 9999 && (uStack_4a8._4_2_ == 9999)))) {
          plStack_9e0 = uStack_4a8;
          if (((ulong)ppppppuStack_9d8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_9d8 & 0xff00ffffffffffff) - 8);
            piVar25 = (int *)((ulong)ppppppuStack_4a0 & 0xff00ffffffffffff);
            uVar19 = (ulong)ppppppuStack_4a0 & 0x80000000000000;
          }
          ppppppuStack_9d8 = (undefined8 ******)0x0;
          ppppppuVar24 = ppppppuStack_4a0;
          if (uVar19 != 0) {
            lVar17 = *(long *)(piVar25 + -2);
            lVar15 = lVar17 + 9;
            plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
            if (lVar15 != 0 && plVar7 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            *plVar7 = lVar17;
            func_0x0eee2f00(plVar7 + 1,piVar25,lVar17);
            *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
            ppppppuVar24 = (undefined8 ******)
                           ((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppppppuStack_9d8 = ppppppuVar24;
          if (((ulong)ppppppuStack_9d0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_9d0 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_9d0 = (undefined8 ******)0x0;
          ppppppuVar24 = appppppuStack_498[0];
          if (((ulong)appppppuStack_498[0] & 0x80000000000000) != 0) {
            uVar19 = (ulong)appppppuStack_498[0] & 0xff00ffffffffffff;
            lVar17 = *(long *)(uVar19 - 8);
            lVar15 = lVar17 + 9;
            plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
            if (lVar15 != 0 && plVar7 == (long *)0x0) {
              func_0x0eec74c0(lVar15,8);
            }
            goto LAB_0ca827a3;
          }
        }
      }
    }
    else {
      uVar16 = *(ulong *)(((ulong)ppppppuStack_4a0 & 0xff00ffffffffffff) - 8);
      if (uVar16 != 0) goto LAB_0ca82607;
    }
  }
  else {
    uVar16 = *(ulong *)(((ulong)ppppppuStack_4a0 & 0xff00ffffffffffff) - 8);
    if (uVar16 != 0) goto LAB_0ca82379;
LAB_0ca823cb:
    plVar7 = pplVar23[1];
    if (((ulong)plVar7 & 0x80000000000000) != 0) {
      uVar16 = *(ulong *)(((ulong)plVar7 & 0xff00ffffffffffff) - 8);
      if (uVar16 != 0) goto LAB_0ca82410;
      goto LAB_0ca825bc;
    }
    if (((ulong)plVar7 & 0x7f000000000000) == 0) goto LAB_0ca825bc;
    uVar16 = (ulong)((ushort)((ulong)plVar7 >> 0x30) & 0x7f);
LAB_0ca82410:
    if (((uVar16 != 4) || (*(int *)((ulong)plVar7 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((*(short *)pplVar23 != 9999 ||
        ((*(short *)((long)pplVar23 + 2) != 9999 || (*(short *)((long)pplVar23 + 4) != 9999))))))
    goto LAB_0ca825bc;
    plStack_9e0 = *pplStack_4e0;
    if (((ulong)ppppppuStack_9d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_9d8 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_9d8 = (undefined8 ******)0x0;
    ppppppuVar24 = (undefined8 ******)pplVar3[1];
    if (((ulong)ppppppuVar24 & 0x80000000000000) != 0) {
      lVar17 = *(long *)(((ulong)ppppppuVar24 & 0xff00ffffffffffff) - 8);
      lVar15 = lVar17 + 9;
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
      if (lVar15 != 0 && plVar7 == (long *)0x0) {
        func_0x0eec74c0(lVar15,8);
      }
      *plVar7 = lVar17;
      func_0x0eee2f00(plVar7 + 1,(ulong)ppppppuVar24 & 0xff00ffffffffffff,lVar17);
      *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
      ppppppuVar24 = (undefined8 ******)
                     ((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppppuStack_9d8 = ppppppuVar24;
    if (((ulong)ppppppuStack_9d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppuStack_9d0 & 0xff00ffffffffffff) - 8);
    }
    ppppppuStack_9d0 = (undefined8 ******)0x0;
    ppppppuVar24 = (undefined8 ******)pplVar3[2];
    if (((ulong)ppppppuVar24 & 0x80000000000000) == 0) goto LAB_0ca827d9;
    uVar19 = (ulong)ppppppuVar24 & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
LAB_0ca827a3:
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar24 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
LAB_0ca827d9:
  ppppppuStack_9d0 = ppppppuVar24;
  func_0x0d6b3300(&pplStack_708,&uStack_4a8,&plStack_9e0,1);
  if ((uStack_4c0 == 0) &&
     (cVar6 = FUN_0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0148ab03),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_4d8 == (char *)0x0) || (uVar19 = uStack_4c0, *pcStack_4d8 != '\x01')) {
    cVar6 = FUN_0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0148ab03);
    uVar19 = uStack_4c0;
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pcStack_4d8 == (char *)0x0) &&
       (cVar6 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*pcStack_4d8 == '\0') &&
     (cVar6 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pplVar23 = pplStack_4c8;
  plStack_888 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_888 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_978 = uStack_4a8;
  lStack_5b0 = (long)pplVar23;
  ppppppuVar24 = ppppppuStack_4a0;
  uStack_5b8 = uVar19;
  if (((ulong)ppppppuStack_4a0 & 0x80000000000000) != 0) {
    uVar19 = (ulong)ppppppuStack_4a0 & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuVar24 = (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_968 = 0;
  ppppppuStack_9b8 = appppppuStack_498[0];
  if (((ulong)appppppuStack_498[0] & 0x80000000000000) != 0) {
    uVar19 = (ulong)appppppuStack_498[0] & 0xff00ffffffffffff;
    lVar17 = *(long *)(uVar19 - 8);
    lVar15 = lVar17 + 9;
    ppppppuStack_970 = ppppppuVar24;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
    if (lVar15 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar15,8);
    }
    *plVar7 = lVar17;
    func_0x0eee2f00(plVar7 + 1,uVar19,lVar17);
    *(undefined1 *)((long)plVar7 + lVar17 + 8) = 0;
    ppppppuStack_9b8 =
         (undefined8 ******)((ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uVar4 = uStack_456;
  uStack_850 = (undefined8 *)uStack_6e0;
  plStack_858 = (long *)uStack_6e8;
  pcStack_868 = (char *)uStack_6f8;
  uStack_870 = (long **)uStack_700;
  uStack_578 = CONCAT62(uStack_578._2_6_,(undefined2)uStack_6d8);
  plStack_9c8 = uStack_4a8;
  ppppppuStack_970 = (undefined8 ******)0x0;
  uStack_968 = 0;
  pplStack_5a8 = pplStack_708;
  uStack_700 = 0;
  uStack_6f8 = 0;
  uStack_878 = (long ***)pplStack_708;
  pplStack_5a0 = (long **)0x0;
  pplStack_598 = (long **)0x0;
  uStack_590 = uStack_6f0;
  uStack_860 = uStack_6f0;
  uStack_588 = 0;
  uStack_6e8 = 0;
  uStack_6e0 = 0;
  uStack_580 = 0;
  puStack_848 = (undefined8 *)CONCAT62(puStack_848._2_6_,(undefined2)uStack_6d8);
  ppppppuStack_9c0 = ppppppuVar24;
  func_0x0d6a8a30(plStack_888,lStack_5b0,&plStack_9c8,&uStack_878);
  if (((ulong)uStack_850 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_850 & 0xff00ffffffffffff) - 8);
  }
  plVar7 = plStack_888;
  uStack_850 = (undefined8 *)0x0;
  if (((ulong)plStack_858 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_858 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_858 = (long *)0x0;
  if (((ulong)pcStack_868 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_868 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_868 = (char *)0x0;
  if (((ulong)uStack_870 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_870 & 0xff00ffffffffffff) - 8);
  }
  uStack_870 = (long **)0x0;
  if (((ulong)ppppppuStack_9b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9b8 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_9b8 = (undefined8 ******)0x0;
  if (((ulong)ppppppuStack_9c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9c0 & 0xff00ffffffffffff) - 8);
  }
  *plVar7 = (long)&UNK_0f3edb90;
  plVar7[0xe] = uStack_5b8;
  *(undefined2 *)(plVar7 + 0xf) = uVar4;
  *(undefined1 *)((long)plVar7 + 0x7a) = 1;
  uStack_878 = (long ***)plVar7;
  if ((uStack_6e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6e0 & 0xff00ffffffffffff) - 8);
  }
  lVar15 = lStack_960;
  uStack_6e0 = 0;
  if ((uStack_6e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_6e8 = 0;
  if ((uStack_6f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6f8 & 0xff00ffffffffffff) - 8);
  }
  uStack_6f8 = 0;
  if ((uStack_700 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_700 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppppppuStack_9d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9d0 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_9d0 = (undefined8 ******)0x0;
  if (((ulong)ppppppuStack_9d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9d8 & 0xff00ffffffffffff) - 8);
  }
  plVar9 = (long *)*plStack_6b0;
  plVar1 = (long *)plStack_6b0[1];
  if (plVar9 != plVar1) {
    do {
      cVar6 = func_0x04fa7a10(*plVar9 + 0x20,plVar7 + 7);
      if (cVar6 == '\0') break;
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  func_0x0d6af860(plStack_6b0,plVar9,&uStack_878);
  plVar7 = (long *)uStack_878;
  uStack_878 = (long ***)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  uStack_458 = 0;
  func_0x0ca6b4d0(&plStack_4e8);
  if (((ulong)ppppppuStack_998 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_998 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_998 = (undefined8 ******)0x0;
  if (((ulong)ppppppuStack_9a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9a0 & 0xff00ffffffffffff) - 8);
  }
  func_0x0ca6b630(&plStack_958);
  if (((ulong)ppppppuStack_980 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_980 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_980 = (undefined8 ******)0x0;
  if (((ulong)ppppppuStack_988 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_988 & 0xff00ffffffffffff) - 8);
  }
  func_0x0ca6b630(&uStack_7b8);
  pplVar23 = pplStack_658;
  plVar7 = (long *)&UNK_0f3edbd0;
  plStack_4e8 = (long *)&UNK_0f3edbd0;
  pplStack_658 = (long **)0x0;
  pplStack_4c8 = &plStack_4e8;
  if (pplVar23 == aplStack_678) {
    lVar17 = 0x20;
LAB_0ca82fa5:
    (**(code **)((long)*pplVar23 + lVar17))();
    if (pplStack_4c8 == (long **)0x0) {
      pplStack_658 = (long **)0x0;
    }
    else {
      if (pplStack_4c8 == &plStack_4e8) {
        plVar7 = *pplStack_4c8;
        goto LAB_0ca82fe1;
      }
      pplStack_658 = pplStack_4c8;
    }
  }
  else {
    lVar17 = 0x28;
    if (pplVar23 != (long **)0x0) goto LAB_0ca82fa5;
LAB_0ca82fe1:
    pplStack_658 = aplStack_678;
    (*(code *)plVar7[3])(pplStack_4c8,aplStack_678);
    if (pplStack_4c8 == &plStack_4e8) {
      lVar17 = 0x20;
    }
    else {
      lVar17 = 0x28;
      if (pplStack_4c8 == (long **)0x0) goto LAB_0ca8301e;
    }
    (**(code **)((long)*pplStack_4c8 + lVar17))();
  }
LAB_0ca8301e:
  lVar17 = **(long **)(**(long **)(*(long *)(*(long *)(lVar15 + 0x10) + 8) + -0x28) + 8);
  plStack_888 = *(long **)(lVar17 + 0x128);
  uStack_880 = *(undefined8 *)(lVar17 + 0x130);
  plStack_958 = (long *)0x0;
  pplStack_950 = (long **)0x0;
  pcStack_948 = (char *)0x0;
  if (((ulong)plStack_8a8 & 1) == 0) {
    uStack_968 = uStack_898;
    plStack_978 = plStack_8a8;
    ppppppuStack_970 = (undefined8 ******)uStack_8a0;
  }
  else {
    func_0x0412e5e0(&plStack_978,uStack_898,uStack_8a0);
  }
  func_0x0d686f30(&plStack_4e8,&DAT_0136e43a,0x13,&plStack_958,&plStack_978);
  if (((ulong)plStack_978 & 1) != 0) {
    func_0x0412a280(uStack_968,(ulong)plStack_978 & 0xfffffffffffffffe);
  }
  if (((ulong)pcStack_948 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_948 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_948 = (char *)0x0;
  if (((ulong)pplStack_950 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pplStack_950 & 0xff00ffffffffffff) - 8);
  }
  plStack_9c8 = (long *)0x0;
  ppppppuStack_9c0 = (undefined8 ******)0x0;
  ppppppuStack_9b8 = (undefined8 ******)0x0;
  func_0x0d6afff0(&plStack_958,&uStack_6a8,&plStack_4e8,&plStack_9c8,1);
  if (((uStack_938._6_1_ == 1) && ((bStack_8ac & 1) == 0)) && (pplStack_658 != (long **)0x0)) {
    lVar17 = func_0x0417cc60();
    if (pplStack_658 == (long **)0x0) {
LAB_0ca83f5b:
      uVar14 = func_0x04891200();
      func_0x0ca6cae0(&plStack_958);
      func_0x05ebba90(&pplStack_5a8);
      func_0x05d59d60(&plStack_4e8);
      func_0x0ca6b790(&uStack_6a8);
      if (((ulong)plStack_8a8 & 1) != 0) {
        func_0x0412a280(uStack_898,(ulong)plStack_8a8 & 0xfffffffffffffffe);
      }
      func_0x0eee2d70(uVar14);
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
      return;
    }
    pppppppuVar18 = pppppppuStack_920;
    if (cStack_8fc == '\x02') {
      pppppppuVar18 = &pppppppuStack_920;
    }
    pppppppuVar22 = (undefined8 *******)0x0;
    if (iStack_900 == -0x34f71903) {
      pppppppuVar22 = pppppppuVar18;
    }
    (*(code *)(*pplStack_658)[6])(pplStack_658,pppppppuVar22,&pplStack_8f8);
    lVar12 = func_0x0417cc60();
    pcStack_948 = (char *)((double)(lVar12 - lVar17) / _DAT_014f0138);
    uStack_940 = CONCAT71(uStack_940._1_7_,(byte)uStack_940 & ~bStack_8ac & uStack_938._6_1_);
  }
  if (((~uStack_938._6_1_ | bStack_8ac) & 1) == 0) {
    func_0x05ebb920(&uStack_7b8,&plStack_958);
    func_0x05ebb920(&pplStack_5a8,&uStack_7b8);
    func_0x05d85c50(&puStack_758);
    if (pcStack_768 != (code *)0x0) {
      (*pcStack_768)(&pppppppuStack_780);
    }
    if (((ulong)puStack_788 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_788 & 0xff00ffffffffffff) - 8);
    }
    puStack_788 = (undefined8 *)0x0;
    if ((uStack_78c & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_78c,uStack_790) & 0xff00ffffffffffff) - 8);
    }
    uStack_790 = 0;
    uStack_78c = 0;
  }
  else {
    pplStack_708 = pplStack_8f8;
    uStack_700 = uStack_8f0;
    uStack_6f8 = uStack_8e8;
    pplStack_8f8 = (long **)0x0;
    uStack_8f0 = 0;
    uStack_8e8 = 0;
    uStack_6f0 = uStack_8e0;
    uStack_6e8 = uStack_8d8;
    uStack_6e0 = uStack_8d0;
    uStack_8e0 = 0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_6d8 = (undefined4)uStack_8c8;
    uStack_6d4 = uStack_8c8._4_4_;
    uStack_6d0 = (undefined4)uStack_8c0;
    uStack_6cc = uStack_8c0._4_4_;
    uStack_6c8 = uStack_8b8;
    uStack_8c8 = 0;
    uStack_8c0 = 0;
    uStack_8b8 = 0;
    bStack_6bc = bStack_8ac;
    uStack_6c0 = uStack_8b0;
    func_0x0ca6c8f0(&uStack_878,&pplStack_708);
    func_0x05ebb920(&uStack_7b8,&uStack_878);
    func_0x05ebb920(&pplStack_5a8,&uStack_7b8);
    func_0x05d85c50(&puStack_758);
    if (pcStack_768 != (code *)0x0) {
      (*pcStack_768)(&pppppppuStack_780);
    }
    if (((ulong)puStack_788 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_788 & 0xff00ffffffffffff) - 8);
    }
    puStack_788 = (undefined8 *)0x0;
    if ((uStack_78c & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_78c,uStack_790) & 0xff00ffffffffffff) - 8);
    }
    uStack_790 = 0;
    uStack_78c = 0;
    func_0x05d85c50(auStack_818);
    if (pcStack_828 != (code *)0x0) {
      (*pcStack_828)(apppppppuStack_840);
    }
    if (((ulong)puStack_848 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_848 & 0xff00ffffffffffff) - 8);
    }
    puStack_848 = (undefined8 *)0x0;
    if (((ulong)uStack_850 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_850 & 0xff00ffffffffffff) - 8);
    }
    uStack_850 = (undefined8 *)0x0;
    func_0x05d85c50(&pplStack_708);
  }
  func_0x05d85c50(&pplStack_8f8);
  if (ppppppuStack_908 != (undefined8 ******)0x0) {
    (*(code *)ppppppuStack_908)(&pppppppuStack_920);
  }
  if (((ulong)puStack_928 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_928 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_928 = (undefined8 *)0x0;
  if (((ulong)uStack_930 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_930 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppppppuStack_9b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9b8 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_9b8 = (undefined8 ******)0x0;
  if (((ulong)ppppppuStack_9c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_9c0 & 0xff00ffffffffffff) - 8);
  }
  plStack_958 = (long *)0xffffffff;
  pplStack_950 = (long **)0x0;
  pcStack_948 = (char *)0x0;
  uStack_940 = 0;
  uStack_938 = (long *)0x0;
  uStack_930 = (long **)0x0;
  puStack_928 = (undefined8 *)0x0;
  pppppppuStack_920 = (undefined8 *******)0x0;
  uStack_918 = 0;
  ppppppuStack_910 = (undefined8 ******)0x0;
  cVar6 = func_0x0d5cf650(&pplStack_5a8,0x27,&plStack_958);
  func_0x05f43a40(&plStack_958);
  if (cVar6 == '\0') {
    func_0x0714efb0(1,3,0x27,&UNK_0142379c);
  }
  lVar17 = lStack_7c0;
  if ((uStack_588._6_1_ == '\x01') && ((bStack_4fc & 1) == 0)) {
    if (cStack_54c == '\x02') {
      apppppppuStack_570[0] = apppppppuStack_570;
    }
    pppppppuVar18 = (undefined8 *******)0x0;
    if (iStack_550 == -0x34f71903) {
      pppppppuVar18 = apppppppuStack_570[0];
    }
    func_0x0ca7aee0(&plStack_958,pppppppuVar18);
    iVar21 = 0x180ffc0;
    if (uStack_940._4_1_ != '\0') {
      iVar21 = (int)uStack_940;
    }
    if ((char)pppppppuStack_920 == '\x01') {
      if (((ulong)uStack_938 & 1) == 0) {
        pcStack_868 = (char *)puStack_928;
        uStack_878 = (long ***)uStack_938;
        uStack_870 = uStack_930;
      }
      else {
        func_0x0412e5e0(&uStack_878,puStack_928,uStack_930);
      }
    }
    else {
      uStack_878 = (long ***)0x617263656e696d1e;
      uStack_870 = (long **)0x6e6165636f3a7466;
      pcStack_868 = (char *)0x0;
    }
    lVar15 = func_0x085fe970(lVar17,&plStack_958);
    if (lVar15 == lVar17 + 8) {
      uStack_798 = 0x6e696d1e;
      uStack_794 = 0x61726365;
      uStack_790 = 0x6f3a7466;
      uStack_78c = 0x6e616563;
      puStack_788 = (undefined8 *)((ulong)puStack_788 & 0xffffffffffffff00);
      uStack_7b8 = (long *)CONCAT44(iVar21 >> 0x10,(int)(short)iVar21);
      uStack_7b0 = (long **)0x300000005;
      uStack_7a8 = (char *)plStack_888;
      uStack_7a0 = uStack_880;
      if (((ulong)uStack_878 & 1) == 0) {
        puStack_788 = (undefined8 *)pcStack_868;
        uStack_798 = (uint)uStack_878;
        uStack_794 = uStack_878._4_4_;
        uStack_790 = (undefined4)uStack_870;
        uStack_78c = uStack_870._4_4_;
      }
      else {
        func_0x04885070(&uStack_798,pcStack_868,uStack_870);
      }
      lVar15 = lStack_960;
      pplStack_708 = &plStack_958;
      lVar17 = func_0x085feb50(lStack_7c0,&plStack_958,&UNK_01563a4f,&pplStack_708,&plStack_9c8);
      *(undefined4 *)(lVar17 + 0x48) = (undefined4)uStack_7a8;
      *(undefined4 *)(lVar17 + 0x4c) = uStack_7a8._4_4_;
      *(undefined4 *)(lVar17 + 0x50) = (undefined4)uStack_7a0;
      *(undefined4 *)(lVar17 + 0x54) = uStack_7a0._4_4_;
      *(undefined4 *)(lVar17 + 0x38) = (undefined4)uStack_7b8;
      *(undefined4 *)(lVar17 + 0x3c) = uStack_7b8._4_4_;
      *(undefined4 *)(lVar17 + 0x40) = (undefined4)uStack_7b0;
      *(undefined4 *)(lVar17 + 0x44) = uStack_7b0._4_4_;
      if ((undefined8 *)(lVar17 + 0x38) != &uStack_7b8) {
        puVar13 = (uint *)(lVar17 + 0x58);
        if ((*(byte *)puVar13 & 1) == 0) {
          if ((uStack_798 & 1) == 0) {
            *(undefined8 **)(lVar17 + 0x68) = puStack_788;
            *puVar13 = uStack_798;
            *(undefined4 *)(lVar17 + 0x5c) = uStack_794;
            *(undefined4 *)(lVar17 + 0x60) = uStack_790;
            *(uint *)(lVar17 + 100) = uStack_78c;
          }
          else {
            func_0x04885070(puVar13,puStack_788,CONCAT44(uStack_78c,uStack_790));
          }
        }
        else {
          bVar28 = (uStack_798 & 1) != 0;
          puVar8 = (undefined8 *)((long)&uStack_798 + 1);
          if (bVar28) {
            puVar8 = puStack_788;
          }
          uVar19 = (ulong)((byte)uStack_798 >> 1);
          if (bVar28) {
            uVar19 = CONCAT44(uStack_78c,uStack_790);
          }
          func_0x04885120(puVar13,puVar8,uVar19);
        }
      }
      func_0x05ebb920(auStack_e0,&pplStack_5a8);
      if ((uStack_798 & 1) != 0) {
        func_0x0412a280(puStack_788,CONCAT44(uStack_794,uStack_798) & 0xfffffffffffffffe);
      }
    }
    else {
      func_0x05d86750(&uStack_7b8,auStack_548);
      func_0x0ca6c8f0(auStack_e0,&uStack_7b8);
      lVar15 = lStack_960;
      func_0x05d85c50(&uStack_7b8);
    }
    if (((ulong)uStack_878 & 1) != 0) {
      func_0x0412a280(pcStack_868,(ulong)uStack_878 & 0xfffffffffffffffe);
    }
    if ((uStack_918 & 1) == 0) {
    }
    else {
      func_0x0412a280(ppppppuStack_908,uStack_918 & 0xfffffffffffffffe);
    }
    if (((char)pppppppuStack_920 == '\x01') && (((ulong)uStack_938 & 1) != 0)) {
      func_0x0412a280(puStack_928,(ulong)uStack_938 & 0xfffffffffffffffe);
    }
    if (((ulong)plStack_958 & 1) != 0) {
      func_0x0412a280(pcStack_948,(ulong)plStack_958 & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x06cfb7b0(1,3,0x27,&UNK_0148aae2);
    func_0x05ebb920(auStack_e0,&pplStack_5a8);
  }
  func_0x05d85c50(auStack_548);
  if (pcStack_558 != (code *)0x0) {
    (*pcStack_558)(apppppppuStack_570);
  }
  if ((uStack_578 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_578 & 0xff00ffffffffffff) - 8);
  }
  uStack_578 = 0;
  if ((uStack_580 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_580 & 0xff00ffffffffffff) - 8);
  }
  func_0x05d85c50(auStack_430);
  if ((ulong)uStack_438 != 0xffffffff) {
    (**(code **)(&UNK_0f3ed9a0 + (ulong)uStack_438 * 8))(&plStack_958,appppppuStack_498);
  }
  uStack_438 = 0xffffffff;
  if (((ulong)pppppppuStack_4b0 & 1) != 0) {
    func_0x0412a280(ppppppuStack_4a0,(ulong)pppppppuStack_4b0 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_4b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_4b8 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_4b8 = (undefined8 *)0x0;
  if ((uStack_4c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4c0 & 0xff00ffffffffffff) - 8);
  }
  uStack_4c0 = 0;
  if ((uStack_4d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4d0 & 0xff00ffffffffffff) - 8);
  }
  uStack_4d0 = 0;
  if (((ulong)pcStack_4d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_4d8 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x0ca6b790(&uStack_6a8);
  func_0x0d6b1c60(*(undefined8 *)(lVar15 + 0x20),auStack_e0);
  if ((cStack_ba == '\x01') && ((bStack_34 & 1) == 0)) {
    **(undefined1 **)(lVar15 + 0x28) = 1;
  }
  func_0x05d85c50(auStack_80);
  if (pcStack_90 != (code *)0x0) {
    (*pcStack_90)(auStack_a8);
  }
  if ((uStack_b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & 0xff00ffffffffffff) - 8);
  }
  uStack_b0 = 0;
  if ((uStack_b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)plStack_8a8 & 1) != 0) {
    func_0x0412a280(uStack_898,(ulong)plStack_8a8 & 0xfffffffffffffffe);
  }
  return;
}


