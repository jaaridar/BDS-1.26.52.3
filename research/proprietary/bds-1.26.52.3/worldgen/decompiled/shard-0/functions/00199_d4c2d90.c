/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5c2d90 (ELF vaddr 0xd4c2d90)
 * Label: caller-of-callee
 * Body:  [[0d5c2d90, 0d5c2ed3] [0d5c2ee0, 0d5c30f5] [0d5c3100, 0d5c3221] [0d5c3230, 0d5c3909] [0d5c39be, 0d5c39dc] [0d5c39e0, 0d5c39fb] [0d5c3a25, 0d5c3a44]]
 * Ghidra: FUN_0d5c2d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d5c2d90(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  uint uStack_84;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_68 [16];
  long *plStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  lVar15 = *param_1;
  for (lVar20 = param_1[1]; lVar15 != lVar20; lVar20 = lVar20 + -0x88) {
    func_0x04882f60(lVar20 + -0x40);
    if ((*(byte *)(lVar20 + -0x58) & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + -0x48),
                         *(ulong *)(lVar20 + -0x58) & 0xfffffffffffffffe);
    }
    if ((*(ulong *)(lVar20 + -0x68) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + -0x68) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + -0x68) = 0;
    if ((*(ulong *)(lVar20 + -0x70) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + -0x70) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + -0x70) = 0;
  }
  param_1[1] = lVar15;
  uVar13 = func_0x048648e0(param_2,&UNK_01209143);
  cVar9 = func_0x04864270(uVar13);
  uVar16 = 0;
  if (cVar9 != '\0') {
    func_0x04865530(auStack_50,uVar13);
    func_0x048655b0(auStack_40,uVar13);
    uStack_84 = 2;
    plStack_58 = param_1;
    while (cVar9 = func_0x04862c80(auStack_50,auStack_40), cVar9 == '\0') {
      uStack_90 = func_0x04862b80(auStack_50);
      cVar9 = func_0x04864260(uStack_90);
      if ((cVar9 == '\0') && (cVar9 = func_0x04864290(uStack_90), cVar9 != '\0')) {
        puVar22 = (undefined8 *)param_1[1];
        if (puVar22 < (undefined8 *)param_1[2]) {
          *(undefined8 *)((long)puVar22 + 0x19) = 0;
          *(undefined8 *)((long)puVar22 + 0x21) = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[6] = 0;
          puVar22[7] = 0;
          puVar22[8] = 0;
          puVar22[9] = 0;
          puVar22[10] = 0;
          puVar22[0xb] = 0;
          puVar22[0xc] = 0;
          *(undefined4 *)(puVar22 + 0xd) = 0x3f800000;
          *(undefined4 *)(puVar22 + 0xe) = 0xffffffff;
          *(undefined1 *)((long)puVar22 + 0x74) = 0;
          puVar22[0xf] = 0;
          puVar22[0x10] = 0;
          puVar22 = puVar22 + 0x11;
          param_1[1] = (long)puVar22;
        }
        else {
          puVar14 = (undefined8 *)*param_1;
          lVar15 = (long)puVar22 - (long)puVar14;
          uVar16 = (lVar15 >> 3) * -0xf0f0f0f0f0f0f0f + 1;
          puStack_70 = puVar22;
          if (0x1e1e1e1e1e1e1e1 < uVar16) {
            func_0x09b18be0();
LAB_0d5c38fb:
            func_0x04882eb0();
LAB_0d5c3900:
            uVar13 = func_0x04882e30();
            if ((uStack_c0 & 1) != 0) {
              thunk_FUN_0ee326a0(lStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
            }
            if ((uStack_a8 & 1) != 0) {
              thunk_FUN_0ee326a0(lStack_98,uStack_a8 & 0xfffffffffffffffe);
            }
            func_0x04862b40(auStack_40);
            func_0x04862b40(auStack_50);
            func_0x0eee2d70(uVar13);
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return uVar16;
          }
          lVar20 = param_1[2] - (long)puVar14 >> 3;
          uVar21 = lVar20 * -0x1e1e1e1e1e1e1e1e;
          if (uVar16 < uVar21) {
            uVar16 = uVar21;
          }
          if (0xf0f0f0f0f0f0ef < (ulong)(lVar20 * -0xf0f0f0f0f0f0f0f)) {
            uVar16 = 0x1e1e1e1e1e1e1e1;
          }
          puStack_78 = puVar14;
          if (uVar16 == 0) {
            lVar20 = 0;
          }
          else {
            if (0x1e1e1e1e1e1e1e1 < uVar16) goto LAB_0d5c38fb;
            lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0x88);
            if (lVar20 == 0) {
              func_0x0eec74c0(uVar16 * 0x88,0);
              lVar20 = 0;
            }
          }
          puVar22 = (undefined8 *)(lVar20 + 0x19 + lVar15);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar20 + 0x10 + lVar15);
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined8 *)(lVar20 + lVar15) = 0;
          ((undefined8 *)(lVar20 + lVar15))[1] = 0;
          puVar22 = (undefined8 *)(lVar20 + 0x30 + lVar15);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar20 + 0x40 + lVar15);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar20 + 0x50 + lVar15);
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined8 *)(lVar20 + 0x60 + lVar15) = 0;
          *(undefined4 *)(lVar20 + 0x68 + lVar15) = 0x3f800000;
          *(undefined4 *)(lVar20 + 0x70 + lVar15) = 0xffffffff;
          *(undefined1 *)(lVar20 + 0x74 + lVar15) = 0;
          puVar22 = (undefined8 *)(lVar20 + 0x78 + lVar15);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar14 = (undefined8 *)*param_1;
          puVar22 = (undefined8 *)param_1[1];
          lVar18 = (long)puVar22 - (long)puVar14;
          if (lVar18 != 0) {
            puVar17 = (undefined8 *)
                      ((long)puStack_70 + lVar20 + ((lVar18 >> 3) * -8 - (long)puStack_78) + 0x58);
            puVar19 = puVar14;
            do {
              uVar13 = puVar19[1];
              puVar17[-0xb] = *puVar19;
              puVar17[-10] = uVar13;
              puVar17[-9] = puVar19[2];
              puVar17[-8] = 0;
              puVar17[-8] = puVar19[3];
              puVar19[3] = 0;
              puVar17[-7] = 0;
              puVar17[-7] = puVar19[4];
              puVar19[4] = 0;
              *(undefined1 *)(puVar17 + -6) = *(undefined1 *)(puVar19 + 5);
              puVar17[-3] = puVar19[8];
              uVar13 = puVar19[7];
              puVar17[-5] = puVar19[6];
              puVar17[-4] = uVar13;
              puVar19[6] = 0;
              puVar19[7] = 0;
              puVar19[8] = 0;
              lVar2 = puVar19[9];
              puVar19[9] = 0;
              puVar17[-2] = lVar2;
              lVar3 = puVar19[0xb];
              uVar13 = puVar19[0xb];
              puVar17[-1] = puVar19[10];
              *puVar17 = uVar13;
              puVar19[10] = 0;
              lVar4 = puVar19[0xc];
              puVar17[1] = lVar4;
              *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar19 + 0xd);
              if (lVar4 != 0) {
                uVar21 = *(ulong *)(lVar3 + 8);
                uVar5 = puVar17[-1];
                if ((uVar5 & uVar5 - 1) == 0) {
                  uVar21 = uVar21 & uVar5 - 1;
                }
                else if (uVar5 <= uVar21) {
                  if ((uVar21 | uVar5) >> 0x20 == 0) {
                    uVar21 = (uVar21 & 0xffffffff) % (uVar5 & 0xffffffff);
                  }
                  else {
                    uVar21 = uVar21 % uVar5;
                  }
                }
                *(undefined8 **)(lVar2 + uVar21 * 8) = puVar17;
                puVar19[0xb] = 0;
                puVar19[0xc] = 0;
              }
              puVar17[5] = puVar19[0x10];
              uVar12 = *(undefined4 *)((long)puVar19 + 0x74);
              uVar7 = *(undefined4 *)(puVar19 + 0xf);
              uVar8 = *(undefined4 *)((long)puVar19 + 0x7c);
              *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar19 + 0xe);
              *(undefined4 *)((long)puVar17 + 0x1c) = uVar12;
              *(undefined4 *)(puVar17 + 4) = uVar7;
              *(undefined4 *)((long)puVar17 + 0x24) = uVar8;
              puVar19 = puVar19 + 0x11;
              puVar17 = puVar17 + 0x11;
            } while (puVar19 != puVar22);
            puVar14 = puVar14 + 9;
            lStack_80 = lVar18;
            do {
              func_0x04882f60(puVar14);
              if ((*(byte *)(puVar14 + -3) & 1) != 0) {
                thunk_FUN_0ee326a0(puVar14[-1],puVar14[-3] & 0xfffffffffffffffe);
              }
              if ((puVar14[-5] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(puVar14[-5] & 0xff00ffffffffffff) - 8);
              }
              puVar14[-5] = 0;
              if ((puVar14[-6] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(puVar14[-6] & 0xff00ffffffffffff) - 8);
              }
              puVar14[-6] = 0;
              puVar19 = puVar14 + 8;
              puVar14 = puVar14 + 0x11;
            } while (puVar19 != puVar22);
            puVar14 = (undefined8 *)*plStack_58;
            lVar18 = lStack_80;
          }
          param_1 = plStack_58;
          puVar22 = (undefined8 *)(lVar15 + lVar20 + 0x88);
          *plStack_58 = (lVar15 + lVar20) - lVar18;
          plStack_58[1] = (long)puVar22;
          lVar15 = plStack_58[2];
          plStack_58[2] = uVar16 * 0x88 + lVar20;
          if (puVar14 != (undefined8 *)0x0) {
            thunk_FUN_0ee326a0(puVar14,lVar15 - (long)puVar14);
          }
        }
        param_1[1] = (long)puVar22;
        uVar13 = func_0x048648e0(uStack_90,&UNK_01377950);
        cVar9 = func_0x04865490(uVar13);
        if (cVar9 != '\0') {
          uStack_a8 = uStack_a8 & 0xffffffffffff0000;
          func_0x04863cb0(&uStack_c0,uVar13,&uStack_a8);
          bVar23 = (uStack_c0 & 1) == 0;
          lVar15 = lStack_b0;
          if (bVar23) {
            lVar15 = (long)&uStack_c0 + 1;
          }
          uVar16 = (ulong)((byte)uStack_c0 >> 1);
          if (!bVar23) {
            uVar16 = CONCAT44(uStack_b4,uStack_b8);
          }
          auVar24 = func_0x0eedb4e0(lVar15,uVar16);
          *(undefined1 (*) [16])(puVar22 + -0x11) = auVar24;
          if ((uStack_c0 & 1) == 0) {
            if ((uStack_a8 & 1) == 0) goto LAB_0d5c33b5;
LAB_0d5c33e1:
            thunk_FUN_0ee326a0(lStack_98,uStack_a8 & 0xfffffffffffffffe);
            if (puVar22[-0x11] == _DAT_0f7ba058) goto LAB_0d5c3404;
          }
          else {
            thunk_FUN_0ee326a0(lStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
            if ((uStack_a8 & 1) != 0) goto LAB_0d5c33e1;
LAB_0d5c33b5:
            if (puVar22[-0x11] == _DAT_0f7ba058) {
LAB_0d5c3404:
              if (puVar22[-0x10] == _DAT_0f7ba060) goto LAB_0d5c3830;
            }
          }
          uVar13 = func_0x048648e0(uStack_90,&UNK_013236a8);
          cVar9 = func_0x04864260(uVar13);
          if (((cVar9 == '\0') && (cVar9 = func_0x04864270(uVar13), cVar9 != '\0')) &&
             (iVar11 = func_0x0ee380c0(uVar13,puVar22 + -0xf), iVar11 != 2)) {
            puVar14 = (undefined8 *)func_0x048648e0(uStack_90,&UNK_01410416);
            cVar9 = func_0x04865490(puVar14);
            if (cVar9 == '\0') {
              cVar9 = func_0x04864260(puVar14);
              if ((cVar9 != '\0') || (cVar9 = func_0x04864290(puVar14), cVar9 == '\0'))
              goto LAB_0d5c3830;
              func_0x04865530(auStack_68,puVar14);
              puStack_78 = puVar22 + -8;
              puStack_70 = puVar14;
              while( true ) {
                func_0x048655b0(&uStack_c0,puStack_70);
                cVar9 = func_0x04862c80(auStack_68,&uStack_c0);
                func_0x04862b40(&uStack_c0);
                if (cVar9 != '\0') break;
                uVar13 = func_0x04862b80(auStack_68);
                cVar9 = func_0x04865490(uVar13);
                if (cVar9 == '\0') {
                  func_0x04862b40(auStack_68);
                  goto LAB_0d5c3830;
                }
                lVar15 = func_0x04862ca0(auStack_68);
                uStack_a8 = uStack_a8 & 0xffffffffffff0000;
                func_0x04863cb0(&uStack_c0,uVar13,&uStack_a8);
                if ((uStack_a8 & 1) != 0) {
                  thunk_FUN_0ee326a0(lStack_98,uStack_a8 & 0xfffffffffffffffe);
                }
                uVar16 = func_0x0eee2e90(lVar15);
                if (0xfffffffffffffff7 < uVar16) goto LAB_0d5c3900;
                if (uVar16 < 0x17) {
                  uStack_a8 = CONCAT71(uStack_a8._1_7_,(char)uVar16 * '\x02');
                  lVar20 = (long)&uStack_a8 + 1;
                  if (uVar16 != 0) goto LAB_0d5c3626;
                }
                else {
                  uVar21 = (uVar16 | 7) + 1;
                  if ((uVar16 | 7) == 0x17) {
                    uVar21 = 0x1a;
                  }
                  lStack_80 = lVar15;
                  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
                  if (lVar20 == 0) {
                    func_0x0eec74c0(uVar21,0);
                  }
                  uStack_a8 = uVar21 | 1;
                  lVar15 = lStack_80;
                  uStack_a0 = uVar16;
                  lStack_98 = lVar20;
LAB_0d5c3626:
                  func_0x0eee2ee0(lVar20,lVar15,uVar16);
                }
                *(undefined1 *)(lVar20 + uVar16) = 0;
                func_0x0604c6f0(puStack_78,&uStack_a8,&uStack_a8,&uStack_c0);
                if ((uStack_a8 & 1) != 0) {
                  thunk_FUN_0ee326a0(lStack_98,uStack_a8 & 0xfffffffffffffffe);
                }
                if ((uStack_c0 & 1) != 0) {
                  thunk_FUN_0ee326a0(lStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
                }
                func_0x04862ba0(auStack_68);
              }
              func_0x04862b40(auStack_68);
            }
            else {
              uStack_a8 = uStack_a8 & 0xffffffffffff0000;
              func_0x04863cb0(&uStack_c0,puVar14,&uStack_a8);
              puVar1 = (uint *)(puVar22 + -0xb);
              if (puVar1 != &uStack_c0) {
                if ((*puVar1 & 1) == 0) {
                  if ((uStack_c0 & 1) == 0) {
                    puVar22[-9] = lStack_b0;
                    *puVar1 = uStack_c0;
                    *(undefined4 *)((long)puVar22 + -0x54) = uStack_bc;
                    *(undefined4 *)(puVar22 + -10) = uStack_b8;
                    *(undefined4 *)((long)puVar22 + -0x4c) = uStack_b4;
                  }
                  else {
                    func_0x04885070(puVar1,lStack_b0,CONCAT44(uStack_b4,uStack_b8));
                  }
                }
                else {
                  bVar23 = (uStack_c0 & 1) == 0;
                  lVar15 = lStack_b0;
                  if (bVar23) {
                    lVar15 = (long)&uStack_c0 + 1;
                  }
                  uVar16 = (ulong)((byte)uStack_c0 >> 1);
                  if (!bVar23) {
                    uVar16 = CONCAT44(uStack_b4,uStack_b8);
                  }
                  func_0x04885120(puVar1,lVar15,uVar16);
                }
              }
              if ((uStack_c0 & 1) != 0) {
                thunk_FUN_0ee326a0(lStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
              }
              if ((uStack_a8 & 1) != 0) {
                thunk_FUN_0ee326a0(lStack_98,uStack_a8 & 0xfffffffffffffffe);
              }
            }
            uVar13 = func_0x048648e0(uStack_90,&UNK_01353be8);
            cVar9 = func_0x04865410(uVar13);
            if (cVar9 != '\0') {
              uVar10 = func_0x04863ff0(uVar13,0);
              *(undefined1 *)((long)puVar22 + -0x14) = uVar10;
              uVar13 = func_0x048648e0(uStack_90,&UNK_014c15e9);
              cVar9 = func_0x04865440(uVar13);
              if (cVar9 != '\0') {
                uVar12 = func_0x04863e00(uVar13,0);
                *(undefined4 *)(puVar22 + -3) = uVar12;
              }
              uVar13 = func_0x048648e0(uStack_90,&UNK_0131dc20);
              cVar9 = func_0x04865490(uVar13);
              if (cVar9 != '\0') {
                func_0x04160690(&uStack_a8,&UNK_01254d89);
                func_0x04863cb0(&uStack_c0,uVar13,&uStack_a8);
                bVar23 = (uStack_c0 & 1) == 0;
                lVar15 = lStack_b0;
                if (bVar23) {
                  lVar15 = (long)&uStack_c0 + 1;
                }
                uVar16 = (ulong)((byte)uStack_c0 >> 1);
                if (!bVar23) {
                  uVar16 = CONCAT44(uStack_b4,uStack_b8);
                }
                auVar24 = func_0x0eedb4e0(lVar15,uVar16);
                *(undefined1 (*) [16])(puVar22 + -2) = auVar24;
                if ((uStack_c0 & 1) != 0) {
                  thunk_FUN_0ee326a0(lStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
                }
                if ((uStack_a8 & 1) != 0) {
                  thunk_FUN_0ee326a0(lStack_98,uStack_a8 & 0xfffffffffffffffe);
                }
              }
              goto LAB_0d5c2efb;
            }
          }
        }
LAB_0d5c3830:
        lVar15 = param_1[1];
        func_0x04882f60(lVar15 + -0x40);
        if ((*(byte *)(lVar15 + -0x58) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x48),
                             *(ulong *)(lVar15 + -0x58) & 0xfffffffffffffffe);
        }
        if ((*(ulong *)(lVar15 + -0x68) & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(*(ulong *)(lVar15 + -0x68) & 0xff00ffffffffffff) - 8);
        }
        *(undefined8 *)(lVar15 + -0x68) = 0;
        if ((*(ulong *)(lVar15 + -0x70) & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(*(ulong *)(lVar15 + -0x70) & 0xff00ffffffffffff) - 8);
        }
        *(undefined8 *)(lVar15 + -0x70) = 0;
        param_1[1] = lVar15 + -0x88;
        uStack_84 = 1;
      }
LAB_0d5c2efb:
      func_0x04862ba0(auStack_50);
    }
    func_0x04862b40(auStack_40);
    func_0x04862b40(auStack_50);
    uVar16 = (ulong)uStack_84;
  }
  return uVar16;
}


