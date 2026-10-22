/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xccb5640 (ELF vaddr 0xcbb5640)
 * Label: caller-of-callee
 * Body:  [[0ccb5640, 0ccb5776] [0ccb5780, 0ccb58db] [0ccb58e0, 0ccb58fb] [0ccb5900, 0ccb59c2] [0ccb59d0, 0ccb5a1d] [0ccb5a20, 0ccb5a43] [0ccb5a50, 0ccb5f5a] [0ccb5f60, 0ccb5ff0] [0ccb609c, 0ccb60f2]]
 * Ghidra: FUN_0ccb5640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ccb5640(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 in_R9;
  ulong uVar18;
  long *plVar19;
  uint *puVar20;
  long *in_FS_OFFSET;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_f0 [4];
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  undefined1 uStack_a0;
  uint7 uStack_9f;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  long *plStack_80;
  ulong auStack_78 [3];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  if ((char)param_1[0x32] == '\0') {
    if (param_1[0x2a] != 0) {
      (**(code **)(param_1[0x2a] + 0x10))(param_1 + 0x2a,param_2);
    }
    plStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    plStack_c0 = param_1;
    uVar6 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    func_0x0ccb6b70(&plStack_d8,uVar6);
    func_0x04b0a270(param_2 + 0x40,(plStack_c0[0x18] - plStack_c0[0x17] >> 3) * -0x30c30c30c30c30c3,
                    0);
    lStack_88 = param_2;
    func_0x04865530(auStack_40,*(undefined8 *)(param_2 + 0x10));
    while( true ) {
      func_0x048655b0(&plStack_b0,*(undefined8 *)(lStack_88 + 0x10));
      cVar5 = func_0x04862c80(auStack_40,&plStack_b0);
      func_0x04862b40(&plStack_b0);
      if (cVar5 != '\0') break;
      uVar8 = func_0x04862ca0(auStack_40);
      uVar9 = func_0x0eee2e90(uVar8);
      if (0xfffffffffffffff7 < uVar9) {
LAB_0ccb5fb1:
        uVar8 = func_0x04882e30();
        func_0x041084d6(&DAT_0f7ba228);
        uVar8 = func_0x04882e20(uVar8);
        func_0x0412d6b0(&DAT_0f7ba1d0);
        uVar8 = func_0x04882e20(uVar8);
        uVar8 = func_0x04882e20(uVar8);
        func_0x0ccb6c90(&plStack_d8);
        uVar8 = func_0x0eee2d70(uVar8);
        func_0x0ee386e0(auStack_78);
        func_0x0ccb6c90(&plStack_d8);
        uVar8 = func_0x0eee2d70(uVar8);
        func_0x0eeb81b0(auStack_f0);
        func_0x0ccb6c90(&plStack_d8);
        func_0x0eee2d70(uVar8);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar9 < 0x17) {
        _auStack_f0 = CONCAT71(stack0xffffffffffffff11,(char)uVar9 * '\x02');
        plVar10 = (long *)(auStack_f0 + 1);
        if (uVar9 != 0) goto LAB_0ccb57cb;
      }
      else {
        uVar18 = (uVar9 | 7) + 1;
        if ((uVar9 | 7) == 0x17) {
          uVar18 = 0x1a;
        }
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
        if (plVar10 == (long *)0x0) {
          func_0x0eec74c0(uVar18,0);
        }
        _auStack_f0 = uVar18 | 1;
        uStack_e8 = uVar9;
        plStack_e0 = plVar10;
LAB_0ccb57cb:
        memmove(plVar10,uVar8,uVar9);
      }
      *(undefined1 *)((long)plVar10 + uVar9) = 0;
      uStack_a8 = _auStack_f0 >> 1 & 0x7f;
      plStack_b0 = (long *)(auStack_f0 + 1);
      if ((_auStack_f0 & 1) != 0) {
        uStack_a8 = uStack_e8;
        plStack_b0 = plStack_e0;
      }
      uStack_a0 = 1;
      uStack_b8 = 0;
      uVar8 = CONCAT71(uStack_9f,1);
      uVar6 = plStack_b0._0_4_;
      uVar22 = (undefined4)uStack_a8;
      func_0x0eeb79f0(auStack_78,&uStack_b8);
      if ((uStack_b8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
      }
      uVar11 = func_0x04862b80(auStack_40);
      plStack_b0 = (long *)func_0x0ccb66d0(plStack_c0,lStack_88,auStack_f0,uVar11,0,in_R9,uVar6,
                                           uVar22,uVar8);
      uVar9 = func_0x04862b80(auStack_40);
      plVar10 = plStack_d0;
      uStack_b8 = uVar9;
      if (plStack_d0 < plStack_c8) {
        *plStack_d0 = (long)plStack_b0;
        if ((_auStack_f0 & 1) == 0) {
          plStack_d0[3] = (long)plStack_e0;
          *(undefined1 (*) [4])(plStack_d0 + 1) = auStack_f0;
          *(undefined4 *)((long)plStack_d0 + 0xc) = uStack_ec;
          *(undefined4 *)(plStack_d0 + 2) = (undefined4)uStack_e8;
          *(undefined4 *)((long)plStack_d0 + 0x14) = uStack_e8._4_4_;
        }
        else {
          func_0x0412e5e0(plStack_d0 + 1,plStack_e0,uStack_e8);
        }
        plVar10[4] = uVar9;
        plStack_d0 = plVar10 + 5;
      }
      else {
        plStack_d0 = (long *)func_0x0ccb6ed0(&plStack_d8,&plStack_b0,auStack_f0,&uStack_b8);
      }
      func_0x0eeb81b0(auStack_78);
      if ((_auStack_f0 & 1) != 0) {
        func_0x0412a280(plStack_e0,_auStack_f0 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(auStack_40);
    }
    func_0x04862b40(auStack_40);
    lVar15 = plStack_c0[0x17];
    lStack_60 = plStack_c0[0x18];
    if (lVar15 != lStack_60) {
      lStack_98 = *in_FS_OFFSET;
      lStack_50 = lStack_98 + -0x28;
      plStack_80 = (long *)(lStack_98 + -0x20);
      do {
        lVar17 = *(long *)(lVar15 + 0x88);
        lStack_48 = *(long *)(lVar15 + 0x90);
        lStack_58 = lVar15;
        if ((lVar17 != lStack_48) && (plStack_d8 != plStack_d0)) {
          do {
            plStack_c0 = plStack_d0;
            plVar10 = plStack_d0;
            plVar16 = plStack_d8;
            if (plStack_d8 != plStack_d0) {
              do {
                if (*(long *)(lVar17 + 0x28) == *plVar16) {
                  bVar21 = (*(byte *)(plVar16 + 1) & 1) != 0;
                  lVar15 = (long)plVar16 + 9;
                  if (bVar21) {
                    lVar15 = plVar16[3];
                  }
                  uVar9 = (ulong)(*(byte *)(plVar16 + 1) >> 1);
                  if (bVar21) {
                    uVar9 = plVar16[2];
                  }
                  auStack_78[0] = 0;
                  if (lVar15 == 0) {
                    auStack_78[0] = (ulong)((uint)uVar9 & 0x7f) << 0x30;
                  }
                  else {
                    lVar1 = uVar9 + 9;
                    puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
                    if (lVar1 != 0 && puVar12 == (ulong *)0x0) {
                      func_0x0eec74c0(lVar1,8);
                    }
                    *puVar12 = uVar9;
                    func_0x0eee2f00(puVar12 + 1,lVar15,uVar9);
                    *(undefined1 *)((long)puVar12 + uVar9 + 8) = 0;
                    auStack_78[0] = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                  }
                  plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffffffffff00);
                  uStack_a0 = 0;
                  lVar15 = (ulong)uStack_9f << 8;
                  uVar6 = plStack_b0._0_4_;
                  uVar22 = (undefined4)uStack_a8;
                  func_0x0eeb79f0(auStack_f0,auStack_78);
                  if ((auStack_78[0] & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(auStack_78[0] & 0xff00ffffffffffff) - 8);
                  }
                  (**(code **)(*(long *)*plVar16 + 0x20))
                            ((long *)*plVar16,lStack_88,plVar16 + 1,plVar16[4],0,in_R9,uVar6,uVar22,
                             lVar15);
                  plVar13 = plStack_80;
                  if (auStack_f0[0] == '\x01') {
                    plVar10 = plStack_c0;
                    if (plStack_e0 == (long *)0x0) goto LAB_0ccb5a55;
                    plVar10 = (long *)func_0x0412c300();
                    uVar9 = uStack_e8;
                    if (plVar10 == (long *)0x0) goto joined_r0x0ccb5db8;
                    if (uStack_e8 == 0) {
LAB_0ccb5d92:
                      LOCK();
                      plVar13 = plVar10 + 1;
                      lVar15 = *plVar13;
                      *plVar13 = *plVar13 + -1;
                      UNLOCK();
                    }
                    else {
                      if ((DAT_0f7ba228 == '\0') &&
                         (iVar7 = FUN_04108328(&DAT_0f7ba228), iVar7 != 0)) {
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
                        __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
                        func_0x0410844d(&DAT_0f7ba228);
                      }
                      uStack_90 = uVar9;
                      puVar20 = (uint *)(uVar9 + 0x78);
                      uVar2 = *puVar20;
                      uVar9 = (ulong)uVar2;
                      if (*(char *)(lStack_98 + -8) == '\0') {
                        func_0x0eee07b0(lStack_98 + -0x28,&DAT_0f7ba230);
                        lVar15 = lStack_98;
                        func_0x0417d010(&UNK_0eee0b40,lStack_98 + -0x28,0xf53dab8);
                        *(undefined1 *)(lVar15 + -8) = 1;
                        plVar13 = plStack_80;
                      }
                      if (uVar9 < (ulong)(*(long *)(lStack_50 + 0x10) - *(long *)(lStack_50 + 8) >>
                                         3)) {
                        lVar15 = *(long *)(*(long *)(lStack_50 + 8) + uVar9 * 8);
                        if (lVar15 != 0) goto LAB_0ccb5c2e;
LAB_0ccb5cd9:
                        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                        if (plVar13 == (long *)0x0) {
                          func_0x0eec74c0(0x40,0);
                        }
                        *plVar13 = (long)plVar13;
                        plVar13[1] = (long)plVar13;
                        plVar19 = plVar13 + 2;
                        plVar13[2] = 0;
                        plVar13[3] = 0;
                        plVar13[4] = 0;
                        plVar13[5] = 0;
                        plVar13[6] = 0;
                        plVar13[7] = 0;
                        plVar3 = *(long **)(uStack_90 + 0x30);
                        plStack_b0 = plVar19;
                        if (plVar3 == (long *)0x0) {
                          func_0x04891200();
                          goto LAB_0ccb5fb1;
                        }
                        (**(code **)(*plVar3 + 0x30))(plVar3,&plStack_b0);
                        func_0x0eee1580(puVar20,plVar13);
                        lVar15 = uStack_90 + 0x50;
                        func_0x0412d680(lVar15);
                        puVar14 = *(undefined8 **)(uStack_90 + 0x48);
                        plVar13[1] = (long)puVar14;
                        *plVar13 = uStack_90 + 0x40;
                        *puVar14 = plVar13;
                        *(long **)(uStack_90 + 0x48) = plVar13;
                        func_0x0412d6b0(lVar15);
                        lVar15 = plVar13[3];
                        if (*plVar19 == lVar15) goto LAB_0ccb5d92;
                      }
                      else {
                        func_0x0412d680(&DAT_0f7ba1d0);
                        func_0x0eee1060(plVar13,uVar2 + 1);
                        func_0x0412d6b0(&DAT_0f7ba1d0);
                        lVar15 = *(long *)(*plVar13 + uVar9 * 8);
                        if (lVar15 == 0) goto LAB_0ccb5cd9;
LAB_0ccb5c2e:
                        plVar19 = (long *)(lVar15 + 0x10);
                        lVar15 = *(long *)(lVar15 + 0x18);
                        if (*plVar19 == lVar15) goto LAB_0ccb5d92;
                      }
                      if (*(undefined1 **)(lVar15 + -8) != auStack_f0) goto LAB_0ccb5d92;
                      if ((*(ulong *)(lVar15 + -0x10) & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,
                                   (*(ulong *)(lVar15 + -0x10) & 0xff00ffffffffffff) - 8);
                      }
                      *(undefined8 *)(lVar15 + -0x10) = 0;
                      plVar19[1] = lVar15 + -0x28;
                      LOCK();
                      plVar13 = plVar10 + 1;
                      lVar15 = *plVar13;
                      *plVar13 = *plVar13 + -1;
                      UNLOCK();
                    }
                    if (lVar15 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      func_0x0412c2d0(plVar10);
                    }
                  }
joined_r0x0ccb5db8:
                  plVar10 = plStack_c0;
                  if (plStack_e0 != (long *)0x0) {
                    func_0x0412c2d0();
                    plVar10 = plStack_c0;
                  }
                }
LAB_0ccb5a55:
                plVar16 = plVar16 + 5;
              } while (plVar16 != plVar10);
            }
            lVar17 = lVar17 + 0x38;
          } while (lVar17 != lStack_48);
        }
        lVar15 = lStack_58 + 0xa8;
      } while (lVar15 != lStack_60);
    }
    plVar16 = plStack_d8;
    plVar10 = plStack_d0;
    if (plStack_d8 != (long *)0x0) {
      for (; plVar16 != plVar10; plVar10 = plVar10 + -5) {
        if ((*(byte *)(plVar10 + -4) & 1) != 0) {
          func_0x0412a280(plVar10[-2],plVar10[-4] & 0xfffffffffffffffe);
        }
      }
      plStack_d0 = plVar16;
      func_0x0412a280(plStack_d8,(long)plStack_c8 - (long)plStack_d8);
    }
  }
  return;
}


