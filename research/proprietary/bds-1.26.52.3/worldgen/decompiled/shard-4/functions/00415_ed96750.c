/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee96750 (ELF vaddr 0xed96750)
 * Label: caller-of-callee
 * Body:  [[0ee96750, 0ee973b6] [0ee97455, 0ee9749a] [0ee974a0, 0ee9755a]]
 * Ghidra: FUN_0ee96750
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee96750(undefined8 param_1,long param_2,undefined4 *param_3,long *param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  char cVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  bool bVar19;
  undefined1 uStack_a51;
  long *plStack_a50;
  long *plStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  ulong uStack_a30;
  long lStack_a28;
  undefined8 uStack_a20;
  ulong uStack_a18;
  long lStack_a10;
  byte bStack_9e0;
  undefined4 uStack_9d4;
  undefined *puStack_9d0;
  byte bStack_9c8;
  undefined1 uStack_9c7;
  undefined6 uStack_9c6;
  undefined8 uStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined1 uStack_998;
  undefined8 *puStack_990;
  ulong uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long *plStack_970;
  undefined4 *puStack_968;
  long lStack_960;
  long lStack_958;
  long *plStack_950;
  long lStack_948;
  ulong uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined8 uStack_900;
  byte bStack_8f8;
  undefined1 auStack_8e8 [16];
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined8 uStack_8b0;
  byte bStack_8a8;
  undefined1 *puStack_8a0;
  long **pplStack_898;
  long lStack_890;
  undefined4 *puStack_888;
  undefined1 uStack_880;
  undefined8 uStack_878;
  undefined *puStack_870;
  undefined8 uStack_868;
  undefined4 uStack_860;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  byte bStack_808;
  ulong uStack_448;
  undefined1 auStack_438 [1032];
  
  uStack_a40 = param_1;
  if (*param_4 == param_4[1]) {
    uVar13 = func_0x0412dc70();
    func_0x0ee97620(&uStack_848,0x16,uVar13);
    func_0x0ee37ef0(uStack_a40,&uStack_848);
    func_0x048e6d60(&uStack_848);
    return;
  }
  plStack_a48 = (long *)0x0;
  uStack_858 = *param_3;
  uStack_854 = param_3[1];
  uStack_850 = param_3[2];
  uStack_84c = param_3[3];
  func_0x0ee5f800(&uStack_848,param_2,&plStack_a48,&uStack_858,0x12e,1);
  bStack_8a8 = bStack_808;
  if (bStack_808 == 0) {
    uStack_8d8 = uStack_838;
    uStack_8d0 = uStack_830;
    uStack_8c8 = uStack_828;
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_828 = 0;
    uStack_8c0 = (undefined4)uStack_820;
    uStack_8bc = uStack_820._4_4_;
    uStack_8b8 = (undefined4)uStack_818;
    uStack_8b4 = uStack_818._4_4_;
    uStack_8b0 = uStack_810;
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_810 = 0;
    func_0x048e6d60(&uStack_848);
  }
  if ((bStack_8a8 & 1) == 0) {
    func_0x0ee97760(auStack_8e8);
    func_0x0ee37ef0(uStack_a40,auStack_8e8);
    goto joined_r0x0ee97286;
  }
  uStack_a38 = 0;
  uStack_a30 = 0;
  lStack_a28 = 0;
  lStack_9b0 = (long)&uStack_a38 + 1;
  bStack_9c8 = 0;
  uStack_9c7 = 0;
  uStack_9a8 = 0;
  uStack_9a0 = 0;
  uStack_998 = 0;
  puStack_9d0 = &UNK_0f533820;
  puStack_990 = &uStack_a38;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f53a130;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 7) = 0x3f800000;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  uStack_848 = *param_3;
  uStack_844 = param_3[1];
  uStack_840 = param_3[2];
  uStack_83c = param_3[3];
  plStack_a50 = plVar10;
  lStack_960 = param_2;
  func_0x0ee8d2f0(plVar10 + 3,&uStack_848,param_4,1,1);
  uStack_9d4 = param_5;
  plStack_970 = plVar10 + 3;
  puStack_968 = param_3;
  (**(code **)(puStack_9d0 + 0x58))(&puStack_9d0,1,&UNK_0138d19d,0);
  (**(code **)(puStack_9d0 + 0x58))(&puStack_9d0,plVar10[0xb],&UNK_0135829c,0);
  pbVar16 = (byte *)plVar10[8];
  pbVar5 = (byte *)plVar10[9];
  if (pbVar16 != pbVar5) {
    do {
      bVar19 = (*pbVar16 & 1) == 0;
      pbVar15 = *(byte **)(pbVar16 + 0x10);
      if (bVar19) {
        pbVar15 = pbVar16 + 1;
      }
      uVar11 = (ulong)(*pbVar16 >> 1);
      if (!bVar19) {
        uVar11 = *(ulong *)(pbVar16 + 8);
      }
      (**(code **)(puStack_9d0 + 0xa8))(&puStack_9d0,pbVar15,uVar11,&UNK_012c2b58,0);
      (**(code **)(puStack_9d0 + 0x58))
                (&puStack_9d0,*(undefined8 *)(pbVar16 + 0x18),&UNK_011b4e61,0);
      (**(code **)(puStack_9d0 + 0x58))
                (&puStack_9d0,*(undefined8 *)(pbVar16 + 0x20),&UNK_013b26e1,0);
      (**(code **)(puStack_9d0 + 0x20))(&puStack_9d0,pbVar16[0x28],&UNK_01360ee1,0);
      pbVar16 = pbVar16 + 0x30;
    } while (pbVar16 != pbVar5);
  }
  lVar12 = lStack_960;
  uStack_a51 = 0;
  puStack_8a0 = &uStack_a51;
  pplStack_898 = &plStack_a48;
  lStack_890 = lStack_960;
  puStack_888 = puStack_968;
  uStack_880 = 1;
  uVar11 = uStack_a38 >> 1 & 0x7f;
  lVar6 = (long)&uStack_a38 + 1;
  if ((uStack_a38 & 1) != 0) {
    uVar11 = uStack_a30;
    lVar6 = lStack_a28;
  }
  func_0x0ee76e70(&uStack_848,plStack_a48,lVar6,uVar11);
  bStack_8f8 = bStack_808;
  if (bStack_808 == 0) {
    uStack_938 = CONCAT44(uStack_844,uStack_848);
    uStack_930 = CONCAT44(uStack_83c,uStack_840);
    uStack_928 = uStack_838;
    uStack_920 = uStack_830;
    uStack_918 = uStack_828;
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_828 = 0;
    uStack_910 = (undefined4)uStack_820;
    uStack_90c = uStack_820._4_4_;
    uStack_908 = (undefined4)uStack_818;
    uStack_904 = uStack_818._4_4_;
    uStack_900 = uStack_810;
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_810 = 0;
    func_0x048e6d60(&uStack_848);
  }
  plVar10 = plStack_a50;
  if ((bStack_8f8 & 1) == 0) {
    func_0x0ee978d0(&uStack_938);
    func_0x0ee37ef0(uStack_a40,&uStack_938);
  }
  else {
    lVar6 = *(long *)(lVar12 + 0xb0);
    plVar7 = *(long **)(lVar12 + 0xb8);
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    lStack_958 = lVar6;
    plStack_950 = plVar7;
    if (lVar6 != 0) {
      lVar18 = (long)plStack_a50 + 0x69;
      bVar19 = (*(byte *)(plStack_a50 + 0xd) & 1) == 0;
      lVar12 = plStack_a50[0xf];
      if (bVar19) {
        lVar12 = lVar18;
      }
      uVar11 = (ulong)(*(byte *)(plStack_a50 + 0xd) >> 1);
      if (!bVar19) {
        uVar11 = plStack_a50[0xe];
      }
      uVar14 = uVar11 + 1;
      while (uVar14 != 1) {
        cVar4 = *(char *)(lVar12 + -2 + uVar14);
        uVar14 = uVar14 - 1;
        if ((cVar4 == '\\') || (cVar4 == '/')) goto joined_r0x0ee96c15;
      }
      uVar14 = 0;
joined_r0x0ee96c15:
      uVar17 = uVar11;
      if (uVar11 == 0) {
LAB_0ee96c71:
        uVar17 = uVar11 - uVar14;
        if (uVar11 < uVar14) goto LAB_0ee9733d;
        memset(&uStack_848,0,0x408);
        if (uVar17 < 0x400) {
          if (uVar11 != uVar14) {
LAB_0ee96c9f:
            func_0x0eee2f00(&uStack_848,lVar12 + uVar14,uVar17);
          }
LAB_0ee96cb5:
          uStack_448 = uVar17;
          *(undefined1 *)((long)&uStack_848 + uVar17) = 0;
        }
LAB_0ee96cc6:
        memset(auStack_438,0,0x408);
        if (DAT_0f7b8fb8 == '\0') goto LAB_0ee97349;
      }
      else {
        do {
          if (uVar17 == 0) goto LAB_0ee96c71;
          uVar1 = uVar17 - 1;
          pcVar3 = (char *)(lVar12 + -1 + uVar17);
          uVar17 = uVar1;
        } while (*pcVar3 != '.');
        if (uVar1 == 0xffffffffffffffff) goto LAB_0ee96c71;
        if (uVar14 <= uVar11) {
          uVar17 = uVar1 - uVar14;
          if (uVar11 - uVar14 < uVar1 - uVar14) {
            uVar17 = uVar11 - uVar14;
          }
          memset(&uStack_848,0,0x408);
          if (uVar17 < 0x400) {
            if (uVar17 != 0) goto LAB_0ee96c9f;
            goto LAB_0ee96cb5;
          }
          goto LAB_0ee96cc6;
        }
LAB_0ee9733d:
        func_0x04882ef0(&UNK_01306d2f);
LAB_0ee97349:
        iVar9 = FUN_04108328(&DAT_0f7b8fb8);
        if (iVar9 != 0) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
      }
      plVar10 = plStack_a50;
      bVar19 = (*(byte *)(plStack_a50 + 0xd) & 1) != 0;
      lStack_948 = lVar18;
      if (bVar19) {
        lStack_948 = plStack_a50[0xf];
      }
      uStack_940 = (ulong)(*(byte *)(plStack_a50 + 0xd) >> 1);
      if (bVar19) {
        uStack_940 = plStack_a50[0xe];
      }
      (**(code **)(_DAT_0f7b8f98 + 0x180))(&uStack_a20,&DAT_0f7b8f98,auStack_438,&lStack_948);
      uStack_878 = 0x91145c106636c3a3;
      puStack_870 = &UNK_0140f690;
      uStack_868 = 1;
      uStack_860 = 0x34;
      if (bStack_9e0 == 0) {
        uStack_988 = 0;
        uStack_980 = 0;
        uStack_978 = 0;
        func_0x0eedeb80(2,0x2d,&uStack_a20,&uStack_988,&uStack_878);
        if ((uStack_988 & 1) != 0) {
          func_0x0412a280(uStack_978,uStack_988 & 0xfffffffffffffffe);
        }
      }
      if ((bStack_9e0 & 1) == 0) {
        func_0x048e6d60(&uStack_a20);
      }
      func_0x0412d680(lVar6);
      if ((char)uStack_9d4 == '\0') {
        uVar11 = func_0x0eee2e90(&uStack_848);
        if (0xfffffffffffffff7 < uVar11) goto LAB_0ee9739e;
        if (uVar11 < 0x17) {
          uStack_a20 = CONCAT71(uStack_a20._1_7_,(char)uVar11 * '\x02');
          lVar12 = (long)&uStack_a20 + 1;
          if (uVar11 != 0) goto LAB_0ee96f97;
        }
        else {
          uVar14 = 0x1a;
          if ((uVar11 | 7) != 0x17) {
            uVar14 = (uVar11 | 7) + 1;
          }
          lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
          if (lVar12 == 0) {
            func_0x0eec74c0(uVar14,0);
          }
          uStack_a20 = uVar14 | 1;
          uStack_a18 = uVar11;
          lStack_a10 = lVar12;
LAB_0ee96f97:
          func_0x0eee2f00(lVar12,&uStack_848,uVar11);
        }
        *(undefined1 *)(lVar12 + uVar11) = 0;
        func_0x0eeac1b0(lVar6 + 0x28,&uStack_a20);
        if ((uStack_a20 & 1) != 0) {
          func_0x0412a280(lStack_a10,uStack_a20 & 0xfffffffffffffffe);
        }
LAB_0ee96fd7:
        uVar11 = func_0x0eee2e90(auStack_438);
        if (uVar11 < 0xfffffffffffffff8) {
          if (uVar11 < 0x17) {
            uStack_a20 = CONCAT71(uStack_a20._1_7_,(char)uVar11 * '\x02');
            lVar12 = (long)&uStack_a20 + 1;
            if (uVar11 != 0) goto LAB_0ee97057;
          }
          else {
            uVar14 = 0x1a;
            if ((uVar11 | 7) != 0x17) {
              uVar14 = (uVar11 | 7) + 1;
            }
            lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
            if (lVar12 == 0) {
              func_0x0eec74c0(uVar14,0);
            }
            uStack_a20 = uVar14 | 1;
            uStack_a18 = uVar11;
            lStack_a10 = lVar12;
LAB_0ee97057:
            func_0x0eee2f00(lVar12,auStack_438,uVar11);
          }
          *(undefined1 *)(lVar12 + uVar11) = 0;
          func_0x05cf8990(lVar6 + 0x50,&uStack_a20);
          if ((uStack_a20 & 1) != 0) {
            func_0x0412a280(lStack_a10,uStack_a20 & 0xfffffffffffffffe);
          }
          func_0x0412d6b0(lVar6);
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar7 = plVar10 + 1;
            lVar6 = *plVar7;
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (lVar6 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              func_0x0412c2d0(plVar10);
            }
          }
          uStack_a51 = 1;
          func_0x0ee37d00(uStack_a40,1);
          plVar10 = (long *)0x0;
          plVar7 = plStack_950;
          goto joined_r0x0ee970ec;
        }
        func_0x04882e30();
      }
      else {
        uVar11 = func_0x0eee2e90(&uStack_848);
        if (uVar11 < 0xfffffffffffffff8) {
          if (uVar11 < 0x17) {
            uStack_a20 = CONCAT71(uStack_a20._1_7_,(char)uVar11 * '\x02');
            lVar12 = (long)&uStack_a20 + 1;
            if (uVar11 != 0) goto LAB_0ee96ec5;
          }
          else {
            uVar14 = 0x1a;
            if ((uVar11 | 7) != 0x17) {
              uVar14 = (uVar11 | 7) + 1;
            }
            lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
            if (lVar12 == 0) {
              func_0x0eec74c0(uVar14,0);
            }
            uStack_a20 = uVar14 | 1;
            uStack_a18 = uVar11;
            lStack_a10 = lVar12;
LAB_0ee96ec5:
            func_0x0eee2f00(lVar12,&uStack_848,uVar11);
          }
          *(undefined1 *)(lVar12 + uVar11) = 0;
          lVar12 = func_0x0eeab950(lVar6 + 0x28,&uStack_a20);
          *(long **)(lVar12 + 0x28) = plStack_970;
          plVar7 = *(long **)(lVar12 + 0x30);
          *(long **)(lVar12 + 0x30) = plVar10;
          if (plVar7 != (long *)0x0) {
            LOCK();
            plVar10 = plVar7 + 1;
            lVar12 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              func_0x0412c2d0(plVar7);
            }
          }
          if ((uStack_a20 & 1) != 0) {
            func_0x0412a280(lStack_a10,uStack_a20 & 0xfffffffffffffffe);
          }
          plVar10 = (long *)0x0;
          goto LAB_0ee96fd7;
        }
      }
      func_0x04882e30();
LAB_0ee9739e:
      uVar13 = func_0x04882e30();
      func_0x041084d6(&DAT_0f7b8fb8);
      func_0x0ee97ad0(plStack_a50);
      plStack_a50 = (long *)0x0;
      func_0x0ee4bcb0(&lStack_958);
      if (bStack_8f8 == 0) {
        func_0x048e6d60(&uStack_938);
      }
      func_0x0ee97b00(&puStack_8a0);
      func_0x0ee97ad0(plStack_a50);
      puStack_9d0 = &UNK_0f534730;
      if ((bStack_9c8 & 1) != 0) goto LAB_0ee974ef;
      while( true ) {
        if ((uStack_a38 & 1) != 0) {
          func_0x0412a280(lStack_a28,uStack_a38 & 0xfffffffffffffffe);
        }
        plVar10 = plStack_a48;
        if (bStack_8a8 == 0) {
          func_0x048e6d60(auStack_8e8);
          plVar10 = plStack_a48;
        }
        if (plVar10 != (long *)0x0) break;
        plStack_a48 = (long *)0x0;
        func_0x0eee2d70(uVar13);
LAB_0ee974ef:
        func_0x0412a280(uStack_9b8,
                        CONCAT62(uStack_9c6,CONCAT11(uStack_9c7,bStack_9c8)) & 0xfffffffffffffffe);
      }
      plStack_a48 = (long *)0x0;
      (**(code **)(*plVar10 + 8))();
      func_0x0eee2d70(uVar13);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar13 = func_0x0412dc70();
    func_0x0ee97990(&uStack_848,0x16,uVar13);
    func_0x0ee37ef0(uStack_a40,&uStack_848);
    func_0x048e6d60(&uStack_848);
joined_r0x0ee970ec:
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar6 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
  }
  if (bStack_8f8 == 0) {
    func_0x048e6d60(&uStack_938);
  }
  func_0x0ee97b00(&puStack_8a0);
  if (plVar10 == (long *)0x0) {
LAB_0ee9714d:
    if ((bStack_9c8 & 1) == 0) goto LAB_0ee97166;
LAB_0ee971de:
    puStack_9d0 = &UNK_0f534730;
    func_0x0412a280(uStack_9b8,
                    CONCAT62(uStack_9c6,CONCAT11(uStack_9c7,bStack_9c8)) & 0xfffffffffffffffe);
  }
  else {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar6 != 0) goto LAB_0ee9714d;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    if ((bStack_9c8 & 1) != 0) goto LAB_0ee971de;
LAB_0ee97166:
    puStack_9d0 = &UNK_0f534730;
  }
  if ((uStack_a38 & 1) != 0) {
    func_0x0412a280(lStack_a28,uStack_a38 & 0xfffffffffffffffe);
  }
joined_r0x0ee97286:
  if (bStack_8a8 == 0) {
    func_0x048e6d60(auStack_8e8);
  }
  plVar10 = plStack_a48;
  plStack_a48 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  return;
}


