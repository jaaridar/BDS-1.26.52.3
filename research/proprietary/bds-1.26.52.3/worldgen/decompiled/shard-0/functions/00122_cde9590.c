/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcee9590 (ELF vaddr 0xcde9590)
 * Label: caller-of-callee
 * Body:  [[0cee9590, 0cee9708] [0cee9710, 0cee9787] [0cee9790, 0cee9994] [0cee99a0, 0cee9a06] [0cee9a10, 0cee9ad1] [0cee9ae0, 0cee9b6b] [0cee9b70, 0cee9bbd] [0cee9bc0, 0cee9be3] [0cee9bf0, 0ceea10a] [0ceea110, 0ceea1d8] [0ceea298, 0ceea2ee]]
 * Ghidra: FUN_0cee9590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cee9590(long *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined8 in_R9;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *in_FS_OFFSET;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_100 [4];
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  long **pplStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  ulong auStack_78 [3];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  if ((char)param_1[0x32] == '\0') {
    lStack_a8 = param_2;
    if (param_1[0x2a] != 0) {
      (**(code **)(param_1[0x2a] + 0x10))(param_1 + 0x2a,param_2);
    }
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    plStack_a0 = param_1;
    uVar4 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    plVar16 = plStack_e0;
    plVar11 = plStack_e8;
    uVar7 = (ulong)uVar4;
    if ((ulong)(((long)plStack_d8 - (long)plStack_e8 >> 3) * -0x3333333333333333) < uVar7) {
      pplStack_b0 = &plStack_e8;
      plStack_d0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7 * 0x28);
      if (plStack_d0 == (long *)0x0) {
        func_0x0eec74c0(uVar7 * 0x28,0);
      }
      uStack_c8 = ((long)plVar16 - (long)plVar11) + (long)plStack_d0;
      plStack_b8 = plStack_d0 + uVar7 * 5;
      uStack_c0 = uStack_c8;
      func_0x0ceead90(&plStack_e8,&plStack_d0);
      uVar18 = uStack_c8;
      for (uVar7 = uStack_c0; uVar18 != uVar7; uVar7 = uVar7 - 0x28) {
        if ((*(byte *)(uVar7 - 0x20) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(uVar7 - 0x10),
                             *(ulong *)(uVar7 - 0x20) & 0xfffffffffffffffe);
        }
      }
      if (plStack_d0 != (long *)0x0) {
        thunk_FUN_0ee326a0(plStack_d0,(long)plStack_b8 - (long)plStack_d0);
      }
    }
    func_0x04b0a270(lStack_a8 + 0x40,
                    (plStack_a0[0x18] - plStack_a0[0x17] >> 3) * -0x30c30c30c30c30c3,0);
    func_0x04865530(auStack_40,*(undefined8 *)(lStack_a8 + 0x10));
    while( true ) {
      func_0x048655b0(&plStack_d0,*(undefined8 *)(lStack_a8 + 0x10));
      cVar3 = func_0x04862c80(auStack_40,&plStack_d0);
      func_0x04862b40(&plStack_d0);
      if (cVar3 != '\0') break;
      uVar6 = func_0x04862ca0(auStack_40);
      uVar7 = func_0x0eee2e90(uVar6);
      if (0xfffffffffffffff7 < uVar7) goto LAB_0ceea170;
      if (uVar7 < 0x17) {
        _auStack_100 = CONCAT71(stack0xffffffffffffff01,(char)uVar7 * '\x02');
        plVar11 = (long *)(auStack_100 + 1);
        if (uVar7 != 0) goto LAB_0cee97db;
      }
      else {
        uVar18 = (uVar7 | 7) + 1;
        if ((uVar7 | 7) == 0x17) {
          uVar18 = 0x1a;
        }
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
        if (plVar11 == (long *)0x0) {
          func_0x0eec74c0(uVar18,0);
        }
        _auStack_100 = uVar18 | 1;
        uStack_f8 = uVar7;
        plStack_f0 = plVar11;
LAB_0cee97db:
        func_0x0eee2ee0(plVar11,uVar6,uVar7);
      }
      *(undefined1 *)((long)plVar11 + uVar7) = 0;
      uStack_c8 = _auStack_100 >> 1 & 0x7f;
      plStack_d0 = (long *)(auStack_100 + 1);
      if ((_auStack_100 & 1) != 0) {
        uStack_c8 = uStack_f8;
        plStack_d0 = plStack_f0;
      }
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_88 = 0;
      uVar22 = plStack_d0._0_4_;
      uVar23 = (undefined4)uStack_c8;
      uVar7 = uStack_c0;
      func_0x0eeb79f0(auStack_78,&uStack_88);
      if ((uStack_88 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
      }
      uVar6 = func_0x04862b80(auStack_40);
      lVar8 = func_0x0ceea890(plStack_a0,lStack_a8,auStack_100,uVar6,0,in_R9,uVar22,uVar23,uVar7);
      lVar9 = func_0x04862b80(auStack_40);
      plVar11 = plStack_e0;
      if (plStack_e0 < plStack_d8) {
        *plStack_e0 = lVar8;
        if ((_auStack_100 & 1) == 0) {
          plStack_e0[3] = (long)plStack_f0;
          *(undefined1 (*) [4])(plStack_e0 + 1) = auStack_100;
          *(undefined4 *)((long)plStack_e0 + 0xc) = uStack_fc;
          *(undefined4 *)(plStack_e0 + 2) = (undefined4)uStack_f8;
          *(undefined4 *)((long)plStack_e0 + 0x14) = uStack_f8._4_4_;
        }
        else {
          FUN_0412e5e0(plStack_e0 + 1,plStack_f0,uStack_f8);
        }
        plVar11[4] = lVar9;
        plVar11 = plVar11 + 5;
      }
      else {
        lVar19 = (long)plStack_e0 - (long)plStack_e8;
        uVar7 = (lVar19 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar7) goto LAB_0ceea175;
        lVar10 = (long)plStack_d8 - (long)plStack_e8 >> 3;
        uVar18 = lVar10 * -0x6666666666666666;
        if (uVar7 < uVar18) {
          uVar7 = uVar18;
        }
        if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
          uVar7 = 0x666666666666666;
        }
        pplStack_b0 = &plStack_e8;
        if (uVar7 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          if (0x666666666666666 < uVar7) goto LAB_0ceea17a;
          plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7 * 0x28);
          if (plVar11 == (long *)0x0) {
            func_0x0eec74c0(uVar7 * 0x28,0);
            plVar11 = (long *)0x0;
          }
        }
        uVar18 = (long)plVar11 + lVar19;
        plStack_b8 = plVar11 + uVar7 * 5;
        *(long *)((long)plVar11 + lVar19) = lVar8;
        puVar17 = (undefined4 *)((long)plVar11 + lVar19 + 8);
        uStack_c0 = uVar18;
        uStack_c8 = uVar18;
        plStack_d0 = plVar11;
        if ((_auStack_100 & 1) == 0) {
          *(long **)((long)plVar11 + lVar19 + 0x18) = plStack_f0;
          *puVar17 = auStack_100;
          *(undefined4 *)((long)plVar11 + lVar19 + 0xc) = uStack_fc;
          *(undefined4 *)((long)plVar11 + lVar19 + 0x10) = (undefined4)uStack_f8;
          *(undefined4 *)((long)plVar11 + lVar19 + 0x14) = uStack_f8._4_4_;
        }
        else {
          FUN_0412e5e0(puVar17,plStack_f0,uStack_f8);
        }
        *(long *)(uVar18 + 0x20) = lVar9;
        uStack_c0 = uStack_c0 + 0x28;
        func_0x0ceead90(&plStack_e8,&plStack_d0);
        uVar18 = uStack_c8;
        plVar11 = plStack_e0;
        for (uVar7 = uStack_c0; uVar18 != uVar7; uVar7 = uVar7 - 0x28) {
          if ((*(byte *)(uVar7 - 0x20) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(uVar7 - 0x10),
                               *(ulong *)(uVar7 - 0x20) & 0xfffffffffffffffe);
          }
        }
        if (plStack_d0 != (long *)0x0) {
          thunk_FUN_0ee326a0(plStack_d0,(long)plStack_b8 - (long)plStack_d0);
        }
      }
      plStack_e0 = plVar11;
      func_0x0eeb81b0(auStack_78);
      if ((_auStack_100 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_f0,_auStack_100 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(auStack_40);
    }
    func_0x04862b40(auStack_40);
    lVar8 = plStack_a0[0x17];
    lStack_60 = plStack_a0[0x18];
    if (lVar8 != lStack_60) {
      lStack_98 = *in_FS_OFFSET;
      lStack_50 = lStack_98 + -0x28;
      plStack_80 = (long *)(lStack_98 + -0x20);
      do {
        lVar9 = *(long *)(lVar8 + 0x88);
        lStack_48 = *(long *)(lVar8 + 0x90);
        lStack_58 = lVar8;
        if ((lVar9 != lStack_48) && (plStack_e8 != plStack_e0)) {
          do {
            plStack_a0 = plStack_e0;
            plVar11 = plStack_e0;
            plVar16 = plStack_e8;
            if (plStack_e8 != plStack_e0) {
              do {
                if (*(long *)(lVar9 + 0x28) == *plVar16) {
                  bVar21 = (*(byte *)(plVar16 + 1) & 1) != 0;
                  lVar8 = (long)plVar16 + 9;
                  if (bVar21) {
                    lVar8 = plVar16[3];
                  }
                  uVar7 = (ulong)(*(byte *)(plVar16 + 1) >> 1);
                  if (bVar21) {
                    uVar7 = plVar16[2];
                  }
                  auStack_78[0] = 0;
                  if (lVar8 == 0) {
                    auStack_78[0] = (ulong)((uint)uVar7 & 0x7f) << 0x30;
                  }
                  else {
                    lVar19 = uVar7 + 9;
                    puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
                    if (lVar19 != 0 && puVar12 == (ulong *)0x0) {
                      func_0x0eec74c0(lVar19,8);
                    }
                    *puVar12 = uVar7;
                    func_0x0eee2f00(puVar12 + 1,lVar8,uVar7);
                    *(undefined1 *)((long)puVar12 + uVar7 + 8) = 0;
                    auStack_78[0] = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                  }
                  plStack_d0 = (long *)((ulong)plStack_d0 & 0xffffffffffffff00);
                  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
                  uVar22 = plStack_d0._0_4_;
                  uVar23 = (undefined4)uStack_c8;
                  uVar7 = uStack_c0;
                  func_0x0eeb79f0(auStack_100,auStack_78);
                  plVar13 = plStack_80;
                  if ((auStack_78[0] & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(auStack_78[0] & 0xff00ffffffffffff) - 8);
                  }
                  (**(code **)(*(long *)*plVar16 + 0x20))
                            ((long *)*plVar16,lStack_a8,plVar16 + 1,plVar16[4],0,in_R9,uVar22,uVar23
                             ,uVar7);
                  if (auStack_100[0] == '\x01') {
                    plVar11 = plStack_a0;
                    if (plStack_f0 == (long *)0x0) goto LAB_0cee9bf5;
                    plVar11 = (long *)func_0x0412c300();
                    uVar7 = uStack_f8;
                    if (plVar11 == (long *)0x0) goto joined_r0x0cee9f68;
                    if (uStack_f8 == 0) {
LAB_0cee9f43:
                      LOCK();
                      plVar13 = plVar11 + 1;
                      lVar8 = *plVar13;
                      *plVar13 = *plVar13 + -1;
                      UNLOCK();
                    }
                    else {
                      if ((DAT_0f7ba228 == '\0') &&
                         (iVar5 = func_0x04108328(&DAT_0f7ba228), iVar5 != 0)) {
                        _DAT_0f7ba200 = (undefined8 *)0x0;
                        _DAT_0f7ba208 = (undefined8 *)0x0;
                        _DAT_0f7ba1f0 = 0;
                        _DAT_0f7ba1f8 = (undefined8 *)0x0;
                        _DAT_0f7ba1e0 = 0;
                        uRam000000000f7ba1e8 = 0;
                        _DAT_0f7ba1d0 = 0;
                        uRam000000000f7ba1d8 = 0;
                        puVar14 = (undefined8 *)
                                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                        if (puVar14 == (undefined8 *)0x0) {
                          func_0x0eec74c0(0x80,0);
                        }
                        _DAT_0f7ba200 = puVar14 + 0x10;
                        _DAT_0f7ba1f8 = puVar14;
                        _DAT_0f7ba208 = _DAT_0f7ba200;
                        puVar14[0xe] = 0;
                        puVar14[0xf] = 0;
                        puVar14[0xc] = 0;
                        puVar14[0xd] = 0;
                        puVar14[10] = 0;
                        puVar14[0xb] = 0;
                        puVar14[8] = 0;
                        puVar14[9] = 0;
                        puVar14[6] = 0;
                        puVar14[7] = 0;
                        puVar14[4] = 0;
                        puVar14[5] = 0;
                        puVar14[2] = 0;
                        puVar14[3] = 0;
                        *puVar14 = 0;
                        puVar14[1] = 0;
                        _DAT_0f7ba210 = 0;
                        _DAT_0f7ba218 = 0;
                        _DAT_0f7ba220 = 0;
                        _DAT_0f7ba230 = &DAT_0f7ba1d0;
                        func_0x0eee2f40(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
                        func_0x0410844d(&DAT_0f7ba228);
                      }
                      uStack_90 = uVar7;
                      puVar15 = (uint *)(uVar7 + 0x78);
                      uVar4 = *puVar15;
                      uVar7 = (ulong)uVar4;
                      if (*(char *)(lStack_98 + -8) == '\0') {
                        func_0x0eee07b0(lStack_98 + -0x28,&DAT_0f7ba230);
                        lVar8 = lStack_98;
                        func_0x0417d010(&UNK_0eee0b40,lStack_98 + -0x28,0xf53dab8);
                        *(undefined1 *)(lVar8 + -8) = 1;
                        plVar13 = plStack_80;
                      }
                      if (uVar7 < (ulong)(*(long *)(lStack_50 + 0x10) - *(long *)(lStack_50 + 8) >>
                                         3)) {
                        lVar8 = *(long *)(*(long *)(lStack_50 + 8) + uVar7 * 8);
                        if (lVar8 != 0) goto LAB_0cee9dd3;
LAB_0cee9e83:
                        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                        if (plVar13 == (long *)0x0) {
                          func_0x0eec74c0(0x40,0);
                        }
                        *plVar13 = (long)plVar13;
                        plVar13[1] = (long)plVar13;
                        plVar20 = plVar13 + 2;
                        plVar13[2] = 0;
                        plVar13[3] = 0;
                        plVar13[4] = 0;
                        plVar13[5] = 0;
                        plVar13[6] = 0;
                        plVar13[7] = 0;
                        plVar1 = *(long **)(uStack_90 + 0x30);
                        plStack_d0 = plVar20;
                        if (plVar1 == (long *)0x0) {
                          FUN_04891200();
                          goto LAB_0ceea170;
                        }
                        (**(code **)(*plVar1 + 0x30))(plVar1,&plStack_d0);
                        func_0x0eee1580(puVar15,plVar13);
                        lVar8 = uStack_90 + 0x50;
                        func_0x0412d680(lVar8);
                        puVar14 = *(undefined8 **)(uStack_90 + 0x48);
                        plVar13[1] = (long)puVar14;
                        *plVar13 = uStack_90 + 0x40;
                        *puVar14 = plVar13;
                        *(long **)(uStack_90 + 0x48) = plVar13;
                        func_0x0412d6b0(lVar8);
                        lVar8 = plVar13[3];
                        if (*plVar20 == lVar8) goto LAB_0cee9f43;
                      }
                      else {
                        func_0x0412d680(&DAT_0f7ba1d0);
                        func_0x0eee1060(plVar13,uVar4 + 1);
                        func_0x0412d6b0(&DAT_0f7ba1d0);
                        lVar8 = *(long *)(*plVar13 + uVar7 * 8);
                        if (lVar8 == 0) goto LAB_0cee9e83;
LAB_0cee9dd3:
                        plVar20 = (long *)(lVar8 + 0x10);
                        lVar8 = *(long *)(lVar8 + 0x18);
                        if (*plVar20 == lVar8) goto LAB_0cee9f43;
                      }
                      if (*(undefined1 **)(lVar8 + -8) != auStack_100) goto LAB_0cee9f43;
                      if ((*(ulong *)(lVar8 + -0x10) & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,
                                   (*(ulong *)(lVar8 + -0x10) & 0xff00ffffffffffff) - 8);
                      }
                      *(undefined8 *)(lVar8 + -0x10) = 0;
                      plVar20[1] = lVar8 + -0x28;
                      LOCK();
                      plVar13 = plVar11 + 1;
                      lVar8 = *plVar13;
                      *plVar13 = *plVar13 + -1;
                      UNLOCK();
                    }
                    if (lVar8 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      func_0x0412c2d0(plVar11);
                    }
                  }
joined_r0x0cee9f68:
                  plVar11 = plStack_a0;
                  if (plStack_f0 != (long *)0x0) {
                    func_0x0412c2d0();
                    plVar11 = plStack_a0;
                  }
                }
LAB_0cee9bf5:
                plVar16 = plVar16 + 5;
              } while (plVar16 != plVar11);
            }
            lVar9 = lVar9 + 0x38;
          } while (lVar9 != lStack_48);
        }
        lVar8 = lStack_58 + 0xa8;
      } while (lVar8 != lStack_60);
    }
    plVar16 = plStack_e8;
    plVar11 = plStack_e0;
    if (plStack_e8 != (long *)0x0) {
      for (; plVar16 != plVar11; plVar11 = plVar11 + -5) {
        if ((*(byte *)(plVar11 + -4) & 1) != 0) {
          thunk_FUN_0ee326a0(plVar11[-2],plVar11[-4] & 0xfffffffffffffffe);
        }
      }
      plStack_e0 = plVar16;
      thunk_FUN_0ee326a0(plStack_e8,(long)plStack_d8 - (long)plStack_e8);
    }
  }
  return;
LAB_0ceea170:
  func_0x04882e30();
LAB_0ceea175:
  func_0x0ceead80();
LAB_0ceea17a:
  uVar6 = func_0x04882eb0();
  func_0x041084d6(&DAT_0f7ba228);
  uVar6 = FUN_04882e20(uVar6);
  func_0x0412d6b0(&DAT_0f7ba1d0);
  uVar6 = FUN_04882e20(uVar6);
  uVar6 = FUN_04882e20(uVar6);
  func_0x0ceeaee0(&plStack_d0);
  func_0x0ceead10(&plStack_e8);
  uVar6 = func_0x0eee2d70(uVar6);
  func_0x0ceead10(&plStack_e8);
  uVar6 = func_0x0eee2d70(uVar6);
  func_0x0ee386e0(auStack_78);
  func_0x0ceead10(&plStack_e8);
  uVar6 = func_0x0eee2d70(uVar6);
  func_0x0eeb81b0(auStack_100);
  func_0x0ceead10(&plStack_e8);
  func_0x0eee2d70(uVar6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


