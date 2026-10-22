/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5515b40 (ELF vaddr 0x5415b40)
 * Label: caller-of-callee
 * Body:  [[05515b40, 05515cc0] [05515cd0, 05515d53] [05515d60, 05515f7a] [05515f80, 05515ff4] [05516000, 05516124] [05516130, 0551617d] [05516180, 055161a6] [055161b0, 055166ca] [055166d0, 05516798] [05516858, 055168ae]]
 * Ghidra: FUN_05515b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05515b40(long *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 in_R9;
  ulong uVar18;
  long lVar19;
  long *in_FS_OFFSET;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  ulong auStack_68 [3];
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((char)param_1[0x32] == '\0') {
    lStack_c8 = param_2;
    if (param_1[0x2a] != 0) {
      (**(code **)(param_1[0x2a] + 0x10))(param_1 + 0x2a,param_2);
    }
    plStack_108 = (long *)0x0;
    plStack_100 = (long *)0x0;
    plStack_f8 = (long *)0x0;
    plStack_d0 = param_1;
    uVar4 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    plVar11 = plStack_100;
    plVar9 = plStack_108;
    uVar18 = (ulong)uVar4;
    plVar6 = plStack_108;
    plVar8 = plStack_f8;
    if ((ulong)(((long)plStack_f8 - (long)plStack_108 >> 3) * -0x3333333333333333) < uVar18) {
      pplStack_a0 = &plStack_108;
      plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x28);
      if (plVar6 == (long *)0x0) {
        func_0x0eec74c0(uVar18 * 0x28,0);
      }
      plVar14 = (long *)(((long)plVar11 - (long)plVar9) + (long)plVar6);
      plVar8 = plVar6 + uVar18 * 5;
      plStack_c0 = plVar6;
      plStack_b8 = plVar14;
      plStack_b0 = plVar14;
      plStack_a8 = plVar8;
      func_0x05517130(&plStack_108,plVar9,plVar11,plVar6);
      plVar9 = plStack_108;
      plStack_100 = plVar14;
      if (plStack_108 != (long *)0x0) {
        lVar16 = (long)plStack_f8 - (long)plStack_108;
        plStack_108 = plVar6;
        plStack_f8 = plVar8;
        thunk_FUN_0ee326a0(plVar9,lVar16);
        plVar6 = plStack_108;
        plVar8 = plStack_f8;
      }
    }
    plStack_f8 = plVar8;
    plStack_108 = plVar6;
    func_0x04b0a270(lStack_c8 + 0x40,
                    (plStack_d0[0x18] - plStack_d0[0x17] >> 3) * -0x30c30c30c30c30c3,0);
    func_0x04865530(auStack_80,*(undefined8 *)(lStack_c8 + 0x10));
    while( true ) {
      func_0x048655b0(&plStack_c0,*(undefined8 *)(lStack_c8 + 0x10));
      cVar3 = func_0x04862c80(auStack_80,&plStack_c0);
      func_0x04862b40(&plStack_c0);
      if (cVar3 != '\0') break;
      uVar7 = func_0x04862ca0(auStack_80);
      plVar8 = (long *)func_0x0eee2e90(uVar7);
      if ((long *)0xfffffffffffffff7 < plVar8) {
LAB_05516730:
        func_0x04882e30();
LAB_05516735:
        func_0x055170b0();
LAB_0551673a:
        uVar7 = func_0x04882eb0();
        func_0x041084d6(&DAT_0f7ba228);
        uVar7 = FUN_04882e20(uVar7);
        func_0x0412d6b0(&DAT_0f7ba1d0);
        uVar7 = FUN_04882e20(uVar7);
        uVar7 = FUN_04882e20(uVar7);
        func_0x055170c0(&plStack_c0);
        func_0x05517040(&plStack_108);
        uVar7 = func_0x0eee2d70(uVar7);
        func_0x05517040(&plStack_108);
        uVar7 = func_0x0eee2d70(uVar7);
        func_0x0ee386e0(auStack_68);
        func_0x05517040(&plStack_108);
        uVar7 = func_0x0eee2d70(uVar7);
        func_0x0eeb81b0(auStack_e8);
        func_0x05517040(&plStack_108);
        func_0x0eee2d70(uVar7);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (plVar8 < (long *)0x17) {
        _auStack_e8 = CONCAT71(stack0xffffffffffffff19,(char)plVar8 * '\x02');
        plVar9 = (long *)(auStack_e8 + 1);
        if (plVar8 != (long *)0x0) goto LAB_05515dab;
      }
      else {
        uVar18 = ((ulong)plVar8 | 7) + 1;
        if (((ulong)plVar8 | 7) == 0x17) {
          uVar18 = 0x1a;
        }
        plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
        if (plVar9 == (long *)0x0) {
          func_0x0eec74c0(uVar18,0);
        }
        _auStack_e8 = uVar18 | 1;
        uStack_e0 = plVar8;
        plStack_d8 = plVar9;
LAB_05515dab:
        func_0x0eee2ee0(plVar9,uVar7,plVar8);
      }
      *(undefined1 *)((long)plVar9 + (long)plVar8) = 0;
      plStack_b8 = (long *)(_auStack_e8 >> 1 & 0x7f);
      plStack_c0 = (long *)(auStack_e8 + 1);
      if ((_auStack_e8 & 1) != 0) {
        plStack_b8 = uStack_e0;
        plStack_c0 = plStack_d8;
      }
      plStack_b0 = (long *)CONCAT71(plStack_b0._1_7_,1);
      uStack_70 = 0;
      uVar21 = plStack_c0._0_4_;
      uVar22 = plStack_b8._0_4_;
      plVar8 = plStack_b0;
      func_0x0eeb79f0(auStack_68,&uStack_70);
      if ((uStack_70 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
      }
      uVar7 = func_0x04862b80(auStack_80);
      lVar16 = func_0x05516bc0(plStack_d0,lStack_c8,auStack_e8,uVar7,0,in_R9,uVar21,uVar22,plVar8);
      plStack_98 = (long *)func_0x04862b80(auStack_80);
      plVar9 = plStack_100;
      plVar8 = plStack_108;
      if (plStack_100 < plStack_f8) {
        *plStack_100 = lVar16;
        if ((_auStack_e8 & 1) == 0) {
          plStack_100[3] = (long)plStack_d8;
          *(undefined1 (*) [4])(plStack_100 + 1) = auStack_e8;
          *(undefined4 *)((long)plStack_100 + 0xc) = uStack_e4;
          *(undefined4 *)(plStack_100 + 2) = (undefined4)uStack_e0;
          *(undefined4 *)((long)plStack_100 + 0x14) = uStack_e0._4_4_;
        }
        else {
          FUN_0412e5e0(plStack_100 + 1,plStack_d8,uStack_e0);
        }
        plVar9[4] = (long)plStack_98;
        plVar9 = plVar9 + 5;
        plVar11 = plStack_108;
        plVar6 = plStack_f8;
      }
      else {
        lVar19 = (long)plStack_100 - (long)plStack_108;
        uVar18 = (lVar19 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar18) goto LAB_05516735;
        lVar10 = (long)plStack_f8 - (long)plStack_108 >> 3;
        uVar2 = lVar10 * -0x6666666666666666;
        if (uVar18 < uVar2) {
          uVar18 = uVar2;
        }
        if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
          uVar18 = 0x666666666666666;
        }
        pplStack_a0 = &plStack_108;
        if (uVar18 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          if (0x666666666666666 < uVar18) goto LAB_0551673a;
          plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x28);
          if (plVar11 == (long *)0x0) {
            func_0x0eec74c0(uVar18 * 0x28,0);
            plVar11 = (long *)0x0;
          }
        }
        plVar6 = (long *)((long)plVar11 + lVar19);
        plStack_a8 = plVar11 + uVar18 * 5;
        *(long *)((long)plVar11 + lVar19) = lVar16;
        puVar17 = (undefined4 *)((long)plVar11 + lVar19 + 8);
        plStack_b0 = plVar6;
        plStack_b8 = plVar6;
        plStack_c0 = plVar11;
        if ((_auStack_e8 & 1) == 0) {
          *(long **)((long)plVar11 + lVar19 + 0x18) = plStack_d8;
          *puVar17 = auStack_e8;
          *(undefined4 *)((long)plVar11 + lVar19 + 0xc) = uStack_e4;
          *(undefined4 *)((long)plVar11 + lVar19 + 0x10) = (undefined4)uStack_e0;
          *(undefined4 *)((long)plVar11 + lVar19 + 0x14) = uStack_e0._4_4_;
        }
        else {
          FUN_0412e5e0(puVar17,plStack_d8,uStack_e0);
          lVar19 = (long)plStack_100 - (long)plStack_108;
          plVar9 = plStack_100;
          plVar8 = plStack_108;
        }
        plVar11 = (long *)((long)plStack_b8 - lVar19);
        plVar6[4] = (long)plStack_98;
        plStack_b0 = plStack_b0 + 5;
        func_0x05517130(&plStack_108,plVar8,plVar9,plVar11);
        plVar9 = plStack_b0;
        plVar8 = plStack_108;
        plStack_100 = plStack_b0;
        plVar6 = plStack_a8;
        if (plStack_108 != (long *)0x0) {
          lVar16 = (long)plStack_f8 - (long)plStack_108;
          plStack_108 = plVar11;
          plStack_f8 = plStack_a8;
          thunk_FUN_0ee326a0(plVar8,lVar16);
          plVar11 = plStack_108;
          plVar6 = plStack_f8;
        }
      }
      plStack_f8 = plVar6;
      plStack_108 = plVar11;
      plStack_100 = plVar9;
      func_0x0eeb81b0(auStack_68);
      if ((_auStack_e8 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_d8,_auStack_e8 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(auStack_80);
    }
    func_0x04862b40(auStack_80);
    lVar16 = plStack_d0[0x17];
    lStack_50 = plStack_d0[0x18];
    if (lVar16 != lStack_50) {
      lStack_90 = *in_FS_OFFSET;
      lStack_40 = lStack_90 + -0x28;
      plStack_d0 = (long *)(lStack_90 + -0x20);
      do {
        lVar19 = *(long *)(lVar16 + 0x88);
        lStack_38 = *(long *)(lVar16 + 0x90);
        lStack_48 = lVar16;
        if ((lVar19 != lStack_38) && (plStack_108 != plStack_100)) {
          do {
            plStack_98 = plStack_100;
            plVar8 = plStack_100;
            plVar9 = plStack_108;
            if (plStack_108 != plStack_100) {
              do {
                if (*(long *)(lVar19 + 0x28) == *plVar9) {
                  bVar20 = (*(byte *)(plVar9 + 1) & 1) != 0;
                  lVar16 = (long)plVar9 + 9;
                  if (bVar20) {
                    lVar16 = plVar9[3];
                  }
                  uVar18 = (ulong)(*(byte *)(plVar9 + 1) >> 1);
                  if (bVar20) {
                    uVar18 = plVar9[2];
                  }
                  auStack_68[0] = 0;
                  if (lVar16 == 0) {
                    auStack_68[0] = (ulong)((uint)uVar18 & 0x7f) << 0x30;
                  }
                  else {
                    lVar10 = uVar18 + 9;
                    puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
                    if (lVar10 != 0 && puVar12 == (ulong *)0x0) {
                      func_0x0eec74c0(lVar10,8);
                    }
                    *puVar12 = uVar18;
                    func_0x0eee2f00(puVar12 + 1,lVar16,uVar18);
                    *(undefined1 *)((long)puVar12 + uVar18 + 8) = 0;
                    auStack_68[0] = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                  }
                  plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
                  plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffffffffff00);
                  uVar21 = plStack_c0._0_4_;
                  uVar22 = plStack_b8._0_4_;
                  plVar8 = plStack_b0;
                  func_0x0eeb79f0(auStack_e8,auStack_68);
                  plVar11 = plStack_d0;
                  if ((auStack_68[0] & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(auStack_68[0] & 0xff00ffffffffffff) - 8);
                  }
                  (**(code **)(*(long *)*plVar9 + 0x20))
                            ((long *)*plVar9,lStack_c8,plVar9 + 1,plVar9[4],0,in_R9,uVar21,uVar22,
                             plVar8);
                  if (auStack_e8[0] == '\x01') {
                    plVar8 = plStack_98;
                    if (plStack_d8 == (long *)0x0) goto LAB_055161b8;
                    plVar6 = (long *)func_0x0412c300();
                    plVar8 = uStack_e0;
                    if (plVar6 == (long *)0x0) goto joined_r0x05516528;
                    if (uStack_e0 == (long *)0x0) {
LAB_05516500:
                      LOCK();
                      plVar8 = plVar6 + 1;
                      lVar16 = *plVar8;
                      *plVar8 = *plVar8 + -1;
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
                        puVar13 = (undefined8 *)
                                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                        if (puVar13 == (undefined8 *)0x0) {
                          func_0x0eec74c0(0x80,0);
                        }
                        _DAT_0f7ba200 = puVar13 + 0x10;
                        _DAT_0f7ba1f8 = puVar13;
                        _DAT_0f7ba208 = _DAT_0f7ba200;
                        puVar13[0xe] = 0;
                        puVar13[0xf] = 0;
                        puVar13[0xc] = 0;
                        puVar13[0xd] = 0;
                        puVar13[10] = 0;
                        puVar13[0xb] = 0;
                        puVar13[8] = 0;
                        puVar13[9] = 0;
                        puVar13[6] = 0;
                        puVar13[7] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        *puVar13 = 0;
                        puVar13[1] = 0;
                        _DAT_0f7ba210 = 0;
                        _DAT_0f7ba218 = 0;
                        _DAT_0f7ba220 = 0;
                        _DAT_0f7ba230 = &DAT_0f7ba1d0;
                        func_0x0eee2f40(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
                        func_0x0410844d(&DAT_0f7ba228);
                      }
                      plStack_88 = plVar8;
                      puVar15 = (uint *)(plVar8 + 0xf);
                      uVar4 = *puVar15;
                      uVar18 = (ulong)uVar4;
                      if (*(char *)(lStack_90 + -8) == '\0') {
                        func_0x0eee07b0(lStack_90 + -0x28,&DAT_0f7ba230);
                        lVar16 = lStack_90;
                        func_0x0417d010(&UNK_0eee0b40,lStack_90 + -0x28,0xf53dab8);
                        *(undefined1 *)(lVar16 + -8) = 1;
                        plVar11 = plStack_d0;
                      }
                      if (uVar18 < (ulong)(*(long *)(lStack_40 + 0x10) - *(long *)(lStack_40 + 8) >>
                                          3)) {
                        lVar16 = *(long *)(*(long *)(lStack_40 + 8) + uVar18 * 8);
                        if (lVar16 != 0) goto LAB_05516393;
LAB_05516440:
                        plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                        if (plVar8 == (long *)0x0) {
                          func_0x0eec74c0(0x40,0);
                        }
                        *plVar8 = (long)plVar8;
                        plVar8[1] = (long)plVar8;
                        plVar14 = plVar8 + 2;
                        plVar8[2] = 0;
                        plVar8[3] = 0;
                        plVar8[4] = 0;
                        plVar8[5] = 0;
                        plVar8[6] = 0;
                        plVar8[7] = 0;
                        plVar11 = (long *)plStack_88[6];
                        plStack_c0 = plVar14;
                        if (plVar11 == (long *)0x0) {
                          FUN_04891200();
                          goto LAB_05516730;
                        }
                        (**(code **)(*plVar11 + 0x30))(plVar11,&plStack_c0);
                        func_0x0eee1580(puVar15,plVar8);
                        plVar11 = plStack_88 + 10;
                        func_0x0412d680(plVar11);
                        puVar13 = (undefined8 *)plStack_88[9];
                        plVar8[1] = (long)puVar13;
                        *plVar8 = (long)(plStack_88 + 8);
                        *puVar13 = plVar8;
                        plStack_88[9] = (long)plVar8;
                        func_0x0412d6b0(plVar11);
                        lVar16 = plVar8[3];
                        if (*plVar14 == lVar16) goto LAB_05516500;
                      }
                      else {
                        func_0x0412d680(&DAT_0f7ba1d0);
                        func_0x0eee1060(plVar11,uVar4 + 1);
                        func_0x0412d6b0(&DAT_0f7ba1d0);
                        lVar16 = *(long *)(*plVar11 + uVar18 * 8);
                        if (lVar16 == 0) goto LAB_05516440;
LAB_05516393:
                        plVar14 = (long *)(lVar16 + 0x10);
                        lVar16 = *(long *)(lVar16 + 0x18);
                        if (*plVar14 == lVar16) goto LAB_05516500;
                      }
                      if (*(undefined1 **)(lVar16 + -8) != auStack_e8) goto LAB_05516500;
                      if ((*(ulong *)(lVar16 + -0x10) & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,
                                   (*(ulong *)(lVar16 + -0x10) & 0xff00ffffffffffff) - 8);
                      }
                      *(undefined8 *)(lVar16 + -0x10) = 0;
                      plVar14[1] = lVar16 + -0x28;
                      LOCK();
                      plVar8 = plVar6 + 1;
                      lVar16 = *plVar8;
                      *plVar8 = *plVar8 + -1;
                      UNLOCK();
                    }
                    if (lVar16 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                      func_0x0412c2d0(plVar6);
                    }
                  }
joined_r0x05516528:
                  plVar8 = plStack_98;
                  if (plStack_d8 != (long *)0x0) {
                    func_0x0412c2d0();
                    plVar8 = plStack_98;
                  }
                }
LAB_055161b8:
                plVar9 = plVar9 + 5;
              } while (plVar9 != plVar8);
            }
            lVar19 = lVar19 + 0x38;
          } while (lVar19 != lStack_38);
        }
        lVar16 = lStack_48 + 0xa8;
      } while (lVar16 != lStack_50);
    }
    plVar9 = plStack_108;
    plVar8 = plStack_100;
    if (plStack_108 != (long *)0x0) {
      for (; plVar9 != plVar8; plVar8 = plVar8 + -5) {
        if ((*(byte *)(plVar8 + -4) & 1) != 0) {
          thunk_FUN_0ee326a0(plVar8[-2],plVar8[-4] & 0xfffffffffffffffe);
        }
      }
      plStack_100 = plVar9;
      thunk_FUN_0ee326a0(plStack_108,(long)plStack_f8 - (long)plStack_108);
    }
  }
  return;
}


