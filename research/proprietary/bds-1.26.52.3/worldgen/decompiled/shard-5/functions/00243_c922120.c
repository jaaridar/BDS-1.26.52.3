/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca22120 (ELF vaddr 0xc922120)
 * Label: caller-of-callee
 * Body:  [[0ca22120, 0ca221ea] [0ca221f0, 0ca222b0] [0ca222c0, 0ca2242a] [0ca22430, 0ca22466] [0ca22470, 0ca224bd] [0ca224c0, 0ca2250a] [0ca22510, 0ca225e4] [0ca225f0, 0ca22621] [0ca22630, 0ca22697] [0ca226a0, 0ca226d0] [0ca226e0, 0ca2272d] [0ca22730, 0ca228e6] [0ca228f0, 0ca229ac] [0ca229b0, 0ca22acb] [0ca22ad0, 0ca22bc6] [0ca22bd0, 0ca22c50] [0ca22c60, 0ca23092] [0ca230a0, 0ca23186] [0ca23403, 0ca23447]]
 * Ghidra: FUN_0ca22120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca22120(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 uStack_249;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  ulong *puStack_228;
  ulong uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  ulong uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  ulong uStack_180;
  undefined8 uStack_178;
  undefined4 *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  byte bStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uStack_1a8 = param_1;
  piStack_d0 = param_2;
  uStack_c8 = param_4;
  cVar8 = func_0x04864260(param_3);
  if ((cVar8 == '\0') && (cVar8 = func_0x04864270(param_3), cVar8 != '\0')) {
    uStack_1c8 = 0;
    puStack_1c0 = (undefined8 *)0x0;
    puStack_1b8 = (undefined8 *)0x0;
    uVar10 = func_0x048641f0(param_3);
    func_0x0ca39b20(&uStack_1c8,uVar10);
    func_0x04865530(&puStack_208,param_3);
    uStack_48 = param_3;
    func_0x04862d40(auStack_c0,&puStack_208);
    func_0x04862b40(&puStack_208);
    while( true ) {
      func_0x048655b0(&puStack_208,uStack_48);
      cVar8 = func_0x04862c80(auStack_c0,&puStack_208);
      func_0x04862b40(&puStack_208);
      if (cVar8 != '\0') break;
      uVar11 = func_0x04862b80(auStack_c0);
      func_0x04863480(auStack_40,uVar11);
      puStack_1e8 = (undefined8 *)0x0;
      puStack_1e0 = (undefined8 *)0x0;
      puStack_1f8 = (ulong *)0x0;
      puStack_1f0 = (undefined8 *)0x0;
      puStack_208 = (ulong *)0x0;
      puStack_200 = (ulong *)0x0;
      uStack_1d8 = 0x700000001;
      uStack_1d0 = CONCAT31(uStack_1d0._1_3_,1);
      iStack_1cc = 1;
      uVar11 = func_0x04864680(auStack_40,&UNK_012e883d);
      func_0x04863480(auStack_1a0,uVar11);
      func_0x04865630(&uStack_218,auStack_1a0);
      while( true ) {
        func_0x048656b0(&uStack_248,auStack_1a0);
        cVar8 = func_0x04862c80(&uStack_218,&uStack_248);
        func_0x04862b40(&uStack_248);
        if (cVar8 != '\0') break;
        uStack_248 = 0;
        uStack_240 = 0;
        puStack_238 = (undefined8 *)0x0;
        uVar11 = func_0x04862b80(&uStack_218);
        cVar8 = func_0x0ca39c40(&uStack_248,uVar11,uStack_c8);
        if (cVar8 != '\0') {
          if (puStack_200 < puStack_1f8) {
            *puStack_200 = 0;
            puStack_200[1] = 0;
            puStack_200[2] = 0;
            *(undefined4 *)puStack_200 = (undefined4)uStack_248;
            *(undefined4 *)((long)puStack_200 + 4) = uStack_248._4_4_;
            *(undefined4 *)(puStack_200 + 1) = (undefined4)uStack_240;
            *(undefined4 *)((long)puStack_200 + 0xc) = uStack_240._4_4_;
            puStack_200[2] = (ulong)puStack_238;
            uStack_248 = 0;
            uStack_240 = 0;
            puStack_238 = (undefined8 *)0x0;
            puStack_200 = puStack_200 + 3;
          }
          else {
            puStack_200 = (ulong *)func_0x0ca3c7b0(&puStack_208,&uStack_248);
          }
        }
        uVar14 = uStack_248;
        uVar13 = uStack_240;
        if (uStack_248 != 0) {
          for (; uVar14 != uVar13; uVar13 = uVar13 - 0x120) {
            func_0x04863610(uVar13 - 0x10);
            func_0x04863610(uVar13 - 0x20);
            if ((ulong)*(uint *)(uVar13 - 0x30) != 0xffffffff) {
              (**(code **)(&UNK_0f3eb9b8 + (ulong)*(uint *)(uVar13 - 0x30) * 8))
                        (auStack_190,uVar13 - 0xe8);
            }
            *(undefined4 *)(uVar13 - 0x30) = 0xffffffff;
            lVar17 = *(long *)(uVar13 - 0x100);
            if (lVar17 != 0) {
              lVar12 = lVar17;
              lVar16 = *(long *)(uVar13 - 0xf8);
              if (lVar17 != *(long *)(uVar13 - 0xf8)) {
                do {
                  lVar12 = lVar16 + -0x30;
                  if ((ulong)*(uint *)(lVar16 + -8) != 0xffffffff) {
                    (**(code **)(&UNK_0f3eb940 + (ulong)*(uint *)(lVar16 + -8) * 8))
                              (auStack_190,lVar12);
                  }
                  *(undefined4 *)(lVar16 + -8) = 0xffffffff;
                  lVar16 = lVar12;
                } while (lVar12 != lVar17);
                lVar12 = *(long *)(uVar13 - 0x100);
              }
              *(long *)(uVar13 - 0xf8) = lVar17;
              func_0x0412a280(lVar12,*(long *)(uVar13 - 0xf0) - lVar12);
            }
            if ((*(byte *)(uVar13 - 0x118) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(uVar13 - 0x108),
                              *(ulong *)(uVar13 - 0x118) & 0xfffffffffffffffe);
            }
          }
          uStack_240 = uVar14;
          func_0x0412a280(uStack_248,(long)puStack_238 - uStack_248);
        }
        func_0x04862ba0(&uStack_218);
      }
      func_0x04862b40(&uStack_218);
      if (puStack_208 == puStack_200) {
        lStack_108 = 0;
        lStack_100 = 0;
        lStack_f8 = 0;
        func_0x048654e0(&uStack_248,auStack_1a0);
        uStack_218 = (ulong)puStack_238;
        uStack_210 = uStack_240;
        if ((uStack_248 & 1) == 0) {
          uStack_218 = (long)&uStack_248 + 1;
          uStack_210 = uStack_248 >> 1 & 0x7f;
        }
        func_0x0470d9a0(&bStack_68,&UNK_013d65cf,0x43,0xd,&uStack_218);
        func_0x0d6b13c0(uStack_1a8,8,&lStack_108,&bStack_68);
        if ((bStack_68 & 1) != 0) {
          func_0x0412a280(uStack_58,CONCAT71(uStack_67,bStack_68) & 0xfffffffffffffffe);
        }
        lVar17 = lStack_108;
        if ((uStack_248 & 1) != 0) {
          func_0x0412a280(puStack_238,uStack_248 & 0xfffffffffffffffe);
          lVar17 = lStack_108;
        }
        lStack_108 = lVar17;
        lVar12 = lStack_100;
        if (lVar17 != 0) {
          for (; lVar17 != lVar12; lVar12 = lVar12 + -0x20) {
            if ((*(byte *)(lVar12 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar12 + -8),
                              *(ulong *)(lVar12 + -0x18) & 0xfffffffffffffffe);
            }
          }
          lStack_100 = lVar17;
          func_0x0412a280(lStack_108,lStack_f8 - lStack_108);
        }
      }
      else {
        uVar11 = func_0x04864680(auStack_40,&UNK_011ca5ee);
        func_0x04863480(auStack_190,uVar11);
        func_0x04865630(&uStack_218,auStack_190);
        while( true ) {
          func_0x048656b0(&uStack_248,auStack_190);
          cVar8 = func_0x04862c80(&uStack_218,&uStack_248);
          func_0x04862b40(&uStack_248);
          if (cVar8 != '\0') break;
          uStack_248 = 0;
          uStack_240 = 0;
          puStack_238 = (undefined8 *)0x0;
          uVar11 = func_0x04862b80(&uStack_218);
          cVar8 = func_0x0ca39c40(&uStack_248,uVar11,uStack_c8);
          if (cVar8 != '\0') {
            if (puStack_1e8 < puStack_1e0) {
              *puStack_1e8 = 0;
              puStack_1e8[1] = 0;
              puStack_1e8[2] = 0;
              *(undefined4 *)puStack_1e8 = (undefined4)uStack_248;
              *(undefined4 *)((long)puStack_1e8 + 4) = uStack_248._4_4_;
              *(undefined4 *)(puStack_1e8 + 1) = (undefined4)uStack_240;
              *(undefined4 *)((long)puStack_1e8 + 0xc) = uStack_240._4_4_;
              puStack_1e8[2] = puStack_238;
              uStack_248 = 0;
              uStack_240 = 0;
              puStack_238 = (undefined8 *)0x0;
              puStack_1e8 = puStack_1e8 + 3;
            }
            else {
              puStack_1e8 = (undefined8 *)func_0x0ca3c7b0(&puStack_1f0,&uStack_248);
            }
          }
          uVar14 = uStack_248;
          uVar13 = uStack_240;
          if (uStack_248 != 0) {
            for (; uVar14 != uVar13; uVar13 = uVar13 - 0x120) {
              func_0x04863610(uVar13 - 0x10);
              func_0x04863610(uVar13 - 0x20);
              if ((ulong)*(uint *)(uVar13 - 0x30) != 0xffffffff) {
                (**(code **)(&UNK_0f3eb9b8 + (ulong)*(uint *)(uVar13 - 0x30) * 8))
                          (&uStack_249,uVar13 - 0xe8);
              }
              *(undefined4 *)(uVar13 - 0x30) = 0xffffffff;
              lVar17 = *(long *)(uVar13 - 0x100);
              if (lVar17 != 0) {
                lVar12 = lVar17;
                lVar16 = *(long *)(uVar13 - 0xf8);
                if (lVar17 != *(long *)(uVar13 - 0xf8)) {
                  do {
                    lVar12 = lVar16 + -0x30;
                    if ((ulong)*(uint *)(lVar16 + -8) != 0xffffffff) {
                      (**(code **)(&UNK_0f3eb940 + (ulong)*(uint *)(lVar16 + -8) * 8))
                                (&uStack_249,lVar12);
                    }
                    *(undefined4 *)(lVar16 + -8) = 0xffffffff;
                    lVar16 = lVar12;
                  } while (lVar12 != lVar17);
                  lVar12 = *(long *)(uVar13 - 0x100);
                }
                *(long *)(uVar13 - 0xf8) = lVar17;
                func_0x0412a280(lVar12,*(long *)(uVar13 - 0xf0) - lVar12);
              }
              if ((*(byte *)(uVar13 - 0x118) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(uVar13 - 0x108),
                                *(ulong *)(uVar13 - 0x118) & 0xfffffffffffffffe);
              }
            }
            uStack_240 = uVar14;
            func_0x0412a280(uStack_248,(long)puStack_238 - uStack_248);
          }
          func_0x04862ba0(&uStack_218);
        }
        func_0x04862b40(&uStack_218);
        if (puStack_1f0 == puStack_1e8) {
          lStack_128 = 0;
          lStack_120 = 0;
          lStack_118 = 0;
          func_0x048654e0(&uStack_248,auStack_190);
          uStack_218 = (ulong)puStack_238;
          uStack_210 = uStack_240;
          if ((uStack_248 & 1) == 0) {
            uStack_218 = (long)&uStack_248 + 1;
            uStack_210 = uStack_248 >> 1 & 0x7f;
          }
          func_0x0470d9a0(&bStack_80,&UNK_0131c116,0x3c,0xd,&uStack_218);
          func_0x0d6b13c0(uStack_1a8,8,&lStack_128,&bStack_80);
          if ((bStack_80 & 1) != 0) {
            func_0x0412a280(uStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
          }
          lVar17 = lStack_128;
          if ((uStack_248 & 1) != 0) {
            func_0x0412a280(puStack_238,uStack_248 & 0xfffffffffffffffe);
            lVar17 = lStack_128;
          }
          lStack_128 = lVar17;
          lVar12 = lVar17;
          lVar16 = lStack_120;
          lVar15 = lStack_118;
          if (lVar17 != 0) {
            for (; lStack_128 = lVar12, lStack_118 = lVar15, lVar17 != lVar16;
                lVar16 = lVar16 + -0x20) {
              if ((*(byte *)(lVar16 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar16 + -8),
                                *(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe);
              }
              lVar12 = lStack_128;
              lVar15 = lStack_118;
            }
LAB_0ca22cb5:
            lStack_120 = lVar17;
            func_0x0412a280(lVar12,lVar15 - lVar12);
          }
        }
        else {
          uVar11 = func_0x04864680(auStack_40,&UNK_0129bcbc);
          uVar10 = func_0x04863e30(uVar11,uStack_1d8 & 0xffffffff);
          uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar10);
          uVar11 = func_0x04864680(auStack_40,&UNK_011ff36c);
          uVar10 = func_0x04863e00(uVar11,7);
          uStack_1d8 = CONCAT44(uVar10,(undefined4)uStack_1d8);
          uVar11 = func_0x04864680(auStack_40,&UNK_0143ef83);
          cVar8 = func_0x04864260(uVar11);
          uVar9 = 1;
          if (cVar8 == '\0') {
            uVar11 = func_0x04864680(auStack_40,&UNK_0143ef83);
            uVar9 = func_0x04863ff0(uVar11,0);
          }
          uStack_1d0 = CONCAT31(uStack_1d0._1_3_,uVar9);
          uVar11 = func_0x04864680(auStack_40,&UNK_0123ca5a);
          iStack_1cc = func_0x04863e00(uVar11,1);
          if (iStack_1cc < 1) {
            lStack_148 = 0;
            lStack_140 = 0;
            lStack_138 = 0;
            uStack_248 = CONCAT44(uStack_248._4_4_,iStack_1cc);
            func_0x0470d9a0(&bStack_98,&UNK_012b491d,0x18,1,&uStack_248);
            func_0x0d6b13c0(uStack_1a8,8,&lStack_148,&bStack_98);
            if ((bStack_98 & 1) != 0) {
              func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
            }
            lVar16 = lStack_148;
            lVar12 = lStack_148;
            lVar17 = lStack_140;
            lVar15 = lStack_138;
            if (lStack_148 != 0) {
              for (; lStack_148 = lVar12, lStack_138 = lVar15, lVar16 != lVar17;
                  lVar17 = lVar17 + -0x20) {
                if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar17 + -8),
                                  *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
                }
                lVar12 = lStack_148;
                lVar15 = lStack_138;
              }
              lStack_140 = lVar16;
              lVar17 = lStack_120;
              goto LAB_0ca22cb5;
            }
          }
          else {
            if ((*piStack_d0 == -1) && (cVar8 = func_0x04864260(uVar11), cVar8 == '\0')) {
              lStack_168 = 0;
              lStack_160 = 0;
              lStack_158 = 0;
              func_0x0470d9a0(&bStack_b0,&UNK_01456ebd,0x9b,0,&uStack_248);
              func_0x0d6b13c0(uStack_1a8,2,&lStack_168,&bStack_b0);
              if ((bStack_b0 & 1) != 0) {
                func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
              }
              lVar12 = lStack_168;
              lVar17 = lStack_160;
              if (lStack_168 != 0) {
                for (; lVar12 != lVar17; lVar17 = lVar17 + -0x20) {
                  if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar17 + -8),
                                    *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                lStack_160 = lVar12;
                func_0x0412a280(lStack_168,lStack_158 - lStack_168);
              }
            }
            if ((puStack_208 != puStack_200) && (puStack_1f0 != puStack_1e8)) {
              if (puStack_1c0 < puStack_1b8) {
                *puStack_1c0 = 0;
                puStack_1c0[1] = 0;
                puStack_1c0[2] = 0;
                *puStack_1c0 = puStack_208;
                puStack_1c0[1] = puStack_200;
                puStack_1c0[2] = puStack_1f8;
                puStack_208 = (ulong *)0x0;
                puStack_200 = (ulong *)0x0;
                puStack_1f8 = (ulong *)0x0;
                puStack_1c0[3] = 0;
                puStack_1c0[4] = 0;
                puStack_1c0[5] = 0;
                puStack_1c0[3] = puStack_1f0;
                puStack_1c0[4] = puStack_1e8;
                puStack_1c0[5] = puStack_1e0;
                puStack_1f0 = (undefined8 *)0x0;
                puStack_1e8 = (undefined8 *)0x0;
                puStack_1e0 = (undefined8 *)0x0;
                *(undefined4 *)(puStack_1c0 + 6) = (undefined4)uStack_1d8;
                *(undefined4 *)((long)puStack_1c0 + 0x34) = uStack_1d8._4_4_;
                *(undefined4 *)(puStack_1c0 + 7) = uStack_1d0;
                *(int *)((long)puStack_1c0 + 0x3c) = iStack_1cc;
                puStack_1c0 = puStack_1c0 + 8;
              }
              else {
                lVar17 = (long)puStack_1c0 - uStack_1c8;
                uVar13 = (lVar17 >> 6) + 1;
                if (0x3ffffffffffffff < uVar13) {
                  func_0x0ca3a720();
LAB_0ca23175:
                  uVar11 = FUN_04882eb0();
                  func_0x04862b40(&puStack_208);
                  puStack_208 = &uStack_1c8;
                  func_0x0ca38540(&puStack_208);
                  uVar11 = func_0x0eee2d70(uVar11);
                  uVar11 = func_0x04882e20(uVar11);
                  uVar11 = func_0x04882e20(uVar11);
                  uVar11 = func_0x04882e20(uVar11);
                  func_0x04882e20(uVar11);
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return uVar11;
                }
                uVar14 = (long)((long)puStack_1b8 - uStack_1c8) >> 5;
                if (uVar14 <= uVar13) {
                  uVar14 = uVar13;
                }
                if (0x7fffffffffffffbf < (long)puStack_1b8 - uStack_1c8) {
                  uVar14 = 0x3ffffffffffffff;
                }
                puStack_228 = &uStack_1c8;
                if (uVar14 == 0) {
                  lVar12 = 0;
                }
                else {
                  if (0x3ffffffffffffff < uVar14) goto LAB_0ca23175;
                  lStack_50 = uVar14 << 6;
                  lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                  if (lVar12 == 0) {
                    func_0x0eec74c0(lStack_50,0);
                    lVar12 = 0;
                  }
                }
                uStack_240 = lVar12 + lVar17;
                puStack_230 = (undefined8 *)(uVar14 * 0x40 + lVar12);
                *(undefined8 *)(lVar12 + lVar17) = puStack_208;
                ((undefined8 *)(lVar12 + lVar17))[1] = puStack_200;
                *(ulong **)(lVar12 + 0x10 + lVar17) = puStack_1f8;
                puStack_208 = (ulong *)0x0;
                puStack_200 = (ulong *)0x0;
                puStack_1f8 = (ulong *)0x0;
                puVar1 = (undefined8 *)(lVar12 + 0x18 + lVar17);
                *puVar1 = puStack_1f0;
                puVar1[1] = puStack_1e8;
                *(undefined8 **)(lVar12 + 0x28 + lVar17) = puStack_1e0;
                puStack_1f0 = (undefined8 *)0x0;
                puStack_1e8 = (undefined8 *)0x0;
                puStack_1e0 = (undefined8 *)0x0;
                puVar2 = (undefined4 *)(lVar12 + 0x30 + lVar17);
                *puVar2 = (undefined4)uStack_1d8;
                puVar2[1] = uStack_1d8._4_4_;
                puVar2[2] = uStack_1d0;
                puVar2[3] = iStack_1cc;
                puStack_238 = (undefined8 *)(lVar12 + 0x40 + lVar17);
                uVar13 = (uStack_1c8 - (long)puStack_1c0) + uStack_240;
                uStack_248 = lVar12;
                func_0x0ca3a7e0(&uStack_1c8,uStack_1c8,puStack_1c0,uVar13);
                puVar6 = puStack_238;
                uStack_240 = uStack_1c8;
                puStack_238 = (undefined8 *)uStack_1c8;
                puStack_1c0 = puVar6;
                puVar1 = puStack_230;
                puStack_230 = puStack_1b8;
                uStack_248 = uStack_1c8;
                uStack_1c8 = uVar13;
                puStack_1b8 = puVar1;
                func_0x0ca3a730(&uStack_248);
                puStack_1c0 = puVar6;
              }
            }
          }
        }
        func_0x04863610(auStack_190);
      }
      func_0x04863610(auStack_1a0);
      if (puStack_1f0 != (undefined8 *)0x0) {
        func_0x0ca38100(&puStack_1f0);
        func_0x0412a280(puStack_1f0,(long)puStack_1e0 - (long)puStack_1f0);
      }
      if (puStack_208 != (ulong *)0x0) {
        func_0x0ca38100(&puStack_208);
        func_0x0412a280(puStack_208,(long)puStack_1f8 - (long)puStack_208);
      }
      func_0x04863610(auStack_40);
      func_0x04862ba0(auStack_c0);
    }
    func_0x04862b40(auStack_c0);
    piVar7 = piStack_d0;
    func_0x0ca3cf30(piStack_d0 + 2);
    *(ulong *)(piVar7 + 2) = uStack_1c8;
    *(undefined8 **)(piVar7 + 4) = puStack_1c0;
    *(undefined8 **)(piVar7 + 6) = puStack_1b8;
    uStack_1c8 = 0;
    puStack_1c0 = (undefined8 *)0x0;
    puStack_1b8 = (undefined8 *)0x0;
    puStack_208 = &uStack_1c8;
    func_0x0ca38540(&puStack_208);
    uVar11 = 1;
  }
  else {
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    puStack_170 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_170 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar11 = _UNK_01282296;
    uStack_180 = 0x21;
    uStack_178 = 0x19;
    *(ulong *)((long)puStack_170 + 9) = CONCAT17(UNK_01282295,CONCAT43(_UNK_01282291,_DAT_0128228e))
    ;
    *(undefined8 *)((long)puStack_170 + 0x11) = uVar11;
    uVar5 = _UNK_01282291;
    uVar4 = _UNK_0128228d;
    uVar10 = _UNK_01282289;
    *puStack_170 = _DAT_01282285;
    puStack_170[1] = uVar10;
    puStack_170[2] = uVar4;
    puStack_170[3] = uVar5;
    *(undefined1 *)((long)puStack_170 + 0x19) = 0;
    func_0x0d6b13c0(uStack_1a8,8,&lStack_e8,&uStack_180);
    if ((uStack_180 & 1) != 0) {
      func_0x0412a280(puStack_170,uStack_180 & 0xfffffffffffffffe);
    }
    lVar12 = lStack_e8;
    lVar17 = lStack_e0;
    if (lStack_e8 != 0) {
      for (; lVar12 != lVar17; lVar17 = lVar17 + -0x20) {
        if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar17 + -8),
                          *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_e0 = lVar12;
      func_0x0412a280(lStack_e8,lStack_d8 - lStack_e8);
    }
    uVar11 = 0;
  }
  return uVar11;
}



/* ---- referenced strings ----
 * 0x1282285  "trades" must be an array
 * 0x128228e  must be an array
 */
