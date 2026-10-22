/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5296e80 (ELF vaddr 0x5196e80)
 * Label: caller-of-callee
 * Body:  [[05296e80, 052972fa] [05297300, 05297578] [05297580, 05297611] [05297620, 05297a0e] [05297a10, 05297d61]]
 * Ghidra: FUN_05296e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_05296e80(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  int *piVar5;
  byte bVar6;
  undefined **ppuVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  undefined1 auVar23 [12];
  int *piStack_d30;
  int *piStack_d28;
  long lStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  int *piStack_cf8;
  undefined5 uStack_cf0;
  undefined3 uStack_ceb;
  undefined5 uStack_ce8;
  ulong uStack_cd8;
  ulong uStack_cd0;
  long *plStack_cc8;
  undefined8 uStack_cc0;
  ulong uStack_cb8;
  long *plStack_cb0;
  uint uStack_ca4;
  int iStack_ca0;
  int iStack_c9c;
  int iStack_c94;
  undefined4 uStack_c90;
  int iStack_c8c;
  long lStack_c88;
  long lStack_c80;
  long lStack_c78;
  byte bStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  long lStack_c58;
  long lStack_c50;
  long lStack_c48;
  long lStack_c40;
  long lStack_c38;
  long lStack_c30;
  long lStack_c28;
  long lStack_c20;
  long lStack_c18;
  undefined2 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  long lStack_bf8;
  long lStack_bf0;
  long lStack_be8;
  long lStack_be0;
  long lStack_bd8;
  long lStack_bd0;
  long lStack_bc8;
  undefined2 uStack_bc0;
  undefined6 uStack_bbe;
  undefined2 uStack_bb8;
  undefined6 uStack_bb6;
  undefined2 uStack_bb0;
  undefined *apuStack_ba0 [5];
  long *plStack_b78;
  short sStack_b5e;
  undefined8 *puStack_ab8;
  undefined8 *puStack_ab0;
  uint uStack_a34;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  plStack_cc8 = param_1;
  func_0x0412d550(param_2 + 0x22);
  lVar16 = param_2[0x34];
  lVar4 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_ca0 = (int)lVar16 + 1;
  iStack_c9c = (int)lVar4 + 1;
  (**(code **)(*param_2 + 0x20))(&uStack_cb8,param_2,&iStack_ca0);
  uVar14 = uStack_cb8;
  func_0x0ca8a1f0(&lStack_c88,*(undefined8 *)(*(long *)(uStack_cb8 + 0x30) + 0x198),
                  uStack_cb8 + 0x50,param_2);
  bVar6 = bStack_c70;
  if (bStack_c70 != 0) {
    FUN_0c9d0c10(apuStack_ba0,param_2[4],param_2[5],param_2,0,1,1,0);
    apuStack_ba0[0] = &UNK_0ef9ce78;
    uStack_bb8 = 0;
    uStack_bb6 = 0;
    uStack_bb0 = 0;
    lStack_bc8 = 0;
    uStack_bc0 = 0;
    uStack_bbe = 0;
    lStack_bd8 = 0;
    lStack_bd0 = 0;
    lStack_be8 = 0;
    lStack_be0 = 0;
    lStack_bf8 = 0;
    lStack_bf0 = 0;
    uStack_c08 = 0;
    uStack_c00 = 0;
    lStack_c28 = 0;
    lStack_c20 = 0;
    lStack_c38 = 0;
    lStack_c30 = 0;
    lStack_c48 = 0;
    lStack_c40 = 0;
    lStack_c58 = 0;
    lStack_c50 = 0;
    uStack_c68 = 0;
    uStack_c60 = 0;
    lStack_c18 = 0;
    uStack_c10 = 1;
    puStack_ab0 = &uStack_c08;
    puStack_ab8 = &uStack_c68;
    uVar13 = func_0x0c9e2ed0(apuStack_ba0,uStack_cb8 + 0x38);
    uStack_cd8 = (ulong)*(uint *)(uVar14 + 0x50);
    uStack_cd0 = (ulong)*(uint *)(uVar14 + 0x54);
    uStack_a20 = *(uint *)(uVar14 + 0x54) * -0xea9a42b + *(uint *)(uVar14 + 0x50) * -0x66c60af8;
    puStack_a30 = &UNK_0f147b18;
    ppuStack_38 = &puStack_a28;
    puStack_a28 = &UNK_0f5356d0;
    uStack_48 = 0x100000000000000;
    uStack_54 = 0;
    uStack_50 = 0;
    lVar16 = 7;
    uVar17 = uStack_a20;
    while( true ) {
      uVar18 = ((ulong)((uVar17 >> 0x1e ^ uVar17) * 0x6c078965) + lVar16) - 6;
      uVar17 = (uint)uVar18;
      (&uStack_a34)[lVar16] = uVar17;
      if (lVar16 == 0x193) break;
      uVar17 = (((uint)(uVar18 >> 0x1e) & 3 ^ uVar17) * 0x6c078965 + (int)lVar16) - 5;
      *(uint *)((long)&puStack_a30 + lVar16 * 4) = uVar17;
      lVar16 = lVar16 + 2;
    }
    uStack_5c = 0x18e00000270;
    uStack_40 = 1;
    uStack_a1c = uStack_a20;
    uVar18 = (**(code **)(*(long *)plStack_cc8[4] + 0x438))();
    ppuVar7 = ppuStack_38;
    if (*(char *)((long)ppuStack_38 + 0x9e7) == '\x01') {
      *(int *)(ppuStack_38 + 1) = (int)uVar18;
      *(undefined2 *)((long)ppuVar7 + 0x9e4) = 0;
      *(undefined4 *)((long)ppuVar7 + 0x9d4) = 0;
      ppuVar7[0x13b] = (undefined *)0x0;
      *(int *)((long)ppuVar7 + 0xc) = (int)uVar18;
      lVar16 = 5;
      while( true ) {
        uVar18 = ((ulong)(((uint)(uVar18 >> 0x1e) & 3 ^ (uint)uVar18) * 0x6c078965) + lVar16) - 4;
        uVar17 = (uint)uVar18;
        *(uint *)((long)ppuVar7 + lVar16 * 4 + -4) = uVar17;
        if (lVar16 == 0x191) break;
        uVar17 = (((uint)(uVar18 >> 0x1e) & 3 ^ uVar17) * 0x6c078965 + (int)lVar16) - 3;
        uVar18 = (ulong)uVar17;
        *(uint *)((long)ppuVar7 + lVar16 * 4) = uVar17;
        lVar16 = lVar16 + 2;
      }
      *(undefined8 *)((long)ppuVar7 + 0x9cc) = 0x18e00000270;
    }
    uVar17 = func_0x0ee4a030(ppuVar7,0);
    uVar10 = func_0x0ee4a030(ppuStack_38,0);
    iVar12 = *(int *)(uVar14 + 0x50);
    uStack_cc0 = uVar14;
    iVar20 = *(int *)(uVar14 + 0x54);
    uVar11 = (**(code **)(*(long *)plStack_cc8[4] + 0x438))();
    ppuVar7 = ppuStack_38;
    plVar15 = plStack_cc8;
    if (*(char *)((long)ppuStack_38 + 0x9e7) == '\x01') {
      uVar11 = uVar11 ^ iVar12 * (uVar17 >> 1 | 1) + iVar20 * (uVar10 >> 1 | 1);
      *(uint *)(ppuStack_38 + 1) = uVar11;
      *(undefined2 *)((long)ppuVar7 + 0x9e4) = 0;
      *(undefined4 *)((long)ppuVar7 + 0x9d4) = 0;
      ppuVar7[0x13b] = (undefined *)0x0;
      *(uint *)((long)ppuVar7 + 0xc) = uVar11;
      lVar16 = 5;
      while( true ) {
        uVar14 = ((ulong)((uVar11 >> 0x1e ^ uVar11) * 0x6c078965) + lVar16) - 4;
        uVar17 = (uint)uVar14;
        *(uint *)((long)ppuVar7 + lVar16 * 4 + -4) = uVar17;
        if (lVar16 == 0x191) break;
        uVar11 = (((uint)(uVar14 >> 0x1e) & 3 ^ uVar17) * 0x6c078965 + (int)lVar16) - 3;
        *(uint *)((long)ppuVar7 + lVar16 * 4) = uVar11;
        lVar16 = lVar16 + 2;
      }
      *(undefined8 *)((long)ppuVar7 + 0x9cc) = 0x18e00000270;
    }
    (**(code **)(*plStack_cc8 + 0x1c0))(plStack_cc8,uVar13,uStack_cb8,apuStack_ba0,&puStack_a30);
    func_0x04a7d900(&piStack_d30,plVar15[4]);
    piVar5 = piStack_d28;
    uVar14 = (ulong)(uint)((int)uStack_cd8 << 4);
    uStack_cd0 = (ulong)(uint)((int)uStack_cd0 << 4);
    uStack_cd8 = uVar14;
    if (piStack_d30 != piStack_d28) {
      piVar19 = piStack_d30;
      do {
        if (((uint)uVar14 == (*piVar19 - piVar19[2] & 0xfffffff0U)) &&
           ((uint)uStack_cd0 == (piVar19[1] - piVar19[2] & 0xfffffff0U))) {
          uStack_d10 = CONCAT62(uStack_d10._2_6_,0x101);
          uStack_d08 = _DAT_0f6b3a90;
          uStack_d00 = 0;
          uStack_d18 = (int *)&UNK_0ef56a00;
          uStack_ce8 = 0;
          uStack_cf0 = 0;
          uStack_ceb = 0;
          iStack_c94 = *piVar19;
          iStack_c8c = piVar19[1];
          uStack_c90 = 0x2d;
          piStack_cf8 = piVar19;
          func_0x04ac44b0(&uStack_d18,apuStack_ba0,&iStack_c94,1);
          uVar14 = uStack_cd8;
        }
        piVar19 = piVar19 + 0xb;
      } while (piVar19 != piVar5);
    }
    uVar14 = uStack_cc0;
    if (piStack_d30 != (int *)0x0) {
      piStack_d28 = piStack_d30;
      func_0x0412a280(piStack_d30,lStack_d20 - (long)piStack_d30);
    }
    plVar15 = plStack_cc8;
    if (0x1000 < (ulong)((long)*(int *)(uVar14 + 0x54) * (long)*(int *)(uVar14 + 0x54) +
                        (long)*(int *)(uVar14 + 0x50) * (long)*(int *)(uVar14 + 0x50))) {
      fVar22 = (float)func_0x05296720(plStack_cc8);
      if ((fVar22 < _DAT_011988f8) &&
         (iVar12 = func_0x0ee4a030(ppuStack_38,0),
         ((uint)(iVar12 * -0x49249249) >> 1 | (uint)((iVar12 * -0x49249249 & 1U) != 0) << 0x1f) <
         0x12492493)) {
        uVar17 = func_0x0ee4a030(ppuStack_38,0);
        uVar10 = func_0x0ee4a030(ppuStack_38,0);
        uVar11 = func_0x0ee4a030(ppuStack_38,0);
        piStack_d30 = (int *)CONCAT44((uVar10 & 0xf) + 0x37,(int)uStack_cd8 + (uVar17 & 0xf) + 8);
        piStack_d28 = (int *)CONCAT44(piStack_d28._4_4_,(uVar11 & 0xf) + (int)uStack_cd0 + 8);
        uStack_d10 = CONCAT62(uStack_d10._2_6_,0x101);
        uStack_d08 = _DAT_0f6b3a90;
        uStack_d00 = 0;
        uStack_d18 = (int *)&UNK_0f4729e0;
        func_0x0d50fbf0(&uStack_d18,apuStack_ba0,&piStack_d30,&puStack_a30);
        uVar18 = func_0x0ee4a030(ppuStack_38,0);
        if ((uVar18 & 3) == 0) {
          func_0x0d50fbf0(&uStack_d18,apuStack_ba0,&piStack_d30,&puStack_a30);
        }
      }
      fVar22 = (float)func_0x05296720(plVar15,*(undefined4 *)(uVar14 + 0x50),
                                      *(undefined4 *)(uVar14 + 0x54));
      if (_DAT_01198850 < fVar22) {
        uVar17 = func_0x0ee4a030(ppuStack_38,0);
        uVar17 = uVar17 % 5;
        if (uVar17 != 0) {
          uStack_cc0 = CONCAT44(uStack_cc0._4_4_,(int)uStack_cd8) | 8;
          uStack_ca4 = (uint)uStack_cd0 | 8;
          do {
            uVar10 = func_0x0ee4a030(ppuStack_38,0);
            uVar11 = (uVar10 & 0xf) + (int)uStack_cc0;
            uVar10 = func_0x0ee4a030(ppuStack_38,0);
            iVar12 = (uVar10 & 0xf) + uStack_ca4;
            uStack_d10 = CONCAT44(uStack_d10._4_4_,iVar12);
            uStack_d18 = (int *)(ulong)uVar11;
            lVar16 = (**(code **)(apuStack_ba0[0] + 0x138))(apuStack_ba0);
            sVar3 = sStack_b5e;
            if (lVar16 != 0) {
              sVar3 = *(short *)(*(long *)(lVar16 + 0x30) + 0xa8) +
                      *(short *)(lVar16 + 0xbd0 +
                                (ulong)(((uint)uStack_d10 & 0xf) << 4 | (uint)uStack_d18 & 0xf) * 2)
              ;
            }
            if (0 < sVar3) {
              uStack_d10 = CONCAT44(uStack_d10._4_4_,iVar12);
              uStack_d18 = (int *)(ulong)CONCAT24(sVar3,uVar11);
              lVar16 = (**(code **)(apuStack_ba0[0] + 0x10))(apuStack_ba0);
              if (*(long *)(*(long *)(lVar16 + 0x68) + 200) == _DAT_0f6eaec0) {
                piStack_d30 = (int *)((ulong)CONCAT24(sVar3,uVar11) - 0x100000000);
                piStack_d28 = (int *)CONCAT44(piStack_d28._4_4_,iVar12);
                lVar16 = func_0x0c9d42c0(apuStack_ba0);
                if (*(long *)(*(long *)(lVar16 + 0x68) + 200) == _DAT_0f719dd8) {
                  piStack_d28 = (int *)CONCAT44(piStack_d28._4_4_,iVar12);
                  piStack_d30 = (int *)(ulong)CONCAT24(sVar3,uVar11);
                  uVar13 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71b470,1);
                  uStack_d08 = 0;
                  uStack_d00 = 0;
                  uStack_d18 = (int *)0x0;
                  uStack_d10 = 0;
                  piStack_cf8 = (int *)0x1;
                  (**(code **)(apuStack_ba0[0] + 0xf8))
                            (apuStack_ba0,&piStack_d30,uVar13,3,0,&uStack_d18);
                  func_0x0c6b70c0(apuStack_ba0,&piStack_d30,&piStack_d30,&puStack_a30,8,0);
                }
              }
            }
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        iVar12 = func_0x0ee4a030(ppuStack_38,0);
        if (((uint)(iVar12 * 0x1bcb564f) >> 2 | iVar12 * -0x40000000) < 0x5d9f74) {
          uVar17 = func_0x0ee4a030(ppuStack_38,0);
          uVar10 = func_0x0ee4a030(ppuStack_38,0);
          iVar20 = (uVar17 & 0xf) + (int)uStack_cd8;
          uVar17 = iVar20 + 8;
          uStack_d18 = (int *)(ulong)uVar17;
          iVar12 = (uVar10 & 0xf) + 8 + (int)uStack_cd0;
          uStack_d10 = CONCAT44(uStack_d10._4_4_,iVar12);
          lVar16 = (**(code **)(apuStack_ba0[0] + 0x138))(apuStack_ba0,&uStack_d18);
          if (lVar16 != 0) {
            sStack_b5e = *(short *)(*(long *)(lVar16 + 0x30) + 0xa8) +
                         *(short *)(lVar16 + 0xbd0 +
                                   (ulong)(((uint)uStack_d10 & 0xf) << 4 | (uint)uStack_d18 & 0xf) *
                                   2);
          }
          if (0 < sStack_b5e) {
            uVar10 = func_0x0ee4a030(ppuStack_38,0);
            piStack_d30 = (int *)CONCAT44((ushort)(sStack_b5e + 3) + uVar10 + (uVar10 / 7) * -7,
                                          uVar17);
            piStack_d28 = (int *)CONCAT44(piStack_d28._4_4_,iVar12);
            uStack_d18 = (int *)CONCAT44(iVar12 + -1 >> 4,iVar20 + 7 >> 4);
            lVar16 = (**(code **)(apuStack_ba0[0] + 0x148))(apuStack_ba0,&uStack_d18);
            plVar15 = plStack_cc8;
            if ((lVar16 == 0) || (*(byte *)(lVar16 + 0xb8) < 0xb)) {
              uStack_d18 = (int *)CONCAT44((int)piStack_d28 + -1 >> 4,(int)piStack_d30 + 1 >> 4);
              lVar16 = (**(code **)(apuStack_ba0[0] + 0x148))(apuStack_ba0,&uStack_d18);
              if ((lVar16 == 0) || (*(byte *)(lVar16 + 0xb8) < 0xb)) {
                uStack_d18 = (int *)CONCAT44((int)piStack_d28 + 1 >> 4,(int)piStack_d30 + -1 >> 4);
                lVar16 = (**(code **)(apuStack_ba0[0] + 0x148))(apuStack_ba0,&uStack_d18);
                if ((lVar16 == 0) || (*(byte *)(lVar16 + 0xb8) < 0xb)) {
                  uStack_d18 = (int *)CONCAT44((int)piStack_d28 + 1 >> 4,(int)piStack_d30 + 1 >> 4);
                  lVar16 = (**(code **)(apuStack_ba0[0] + 0x148))(apuStack_ba0,&uStack_d18);
                  if ((lVar16 == 0) || (*(byte *)(lVar16 + 0xb8) < 0xb)) {
                    uStack_d10 = 0x101;
                    uStack_d08 = _DAT_0f6b3a90;
                    uStack_d00 = 0;
                    uStack_d18 = (int *)&UNK_0f472988;
                    func_0x0d50f3a0(&uStack_d18,apuStack_ba0,&piStack_d30,&puStack_a30);
                    uVar13 = func_0x0c9d4450(apuStack_ba0,&piStack_d30);
                    lVar16 = func_0x05297e20(uVar13);
                    if (lVar16 != 0) {
                      auVar23 = (**(code **)(*(long *)plVar15[5] + 0xe0))();
                      *(undefined1 (*) [12])(lVar16 + 0xe0) = auVar23;
                      *(undefined2 *)(lVar16 + 0xee) = 0x100;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    plVar15 = (long *)(**(code **)(apuStack_ba0[0] + 0x150))(apuStack_ba0);
    bVar8 = (**(code **)(*plVar15 + 0xc38))(plVar15);
    bVar9 = (**(code **)(*plStack_b78 + 0x9f0))();
    if (((byte)(bVar8 | bVar9 ^ 1) == 1) && (lStack_bf0 != lStack_bf8)) {
      uVar14 = 0;
      do {
        func_0x0c9e4770(&uStack_c08,apuStack_ba0,&UNK_01d38818,0x7fffffff,1);
        if (lStack_bf0 == lStack_bf8) break;
        bVar21 = uVar14 < 0x7f;
        uVar14 = uVar14 + 1;
      } while (bVar21);
    }
    plVar15 = (long *)(**(code **)(apuStack_ba0[0] + 0x150))(apuStack_ba0);
    bVar8 = (**(code **)(*plVar15 + 0xc38))(plVar15);
    bVar9 = (**(code **)(*plStack_b78 + 0x9f0))();
    if (((byte)(bVar8 | bVar9 ^ 1) == 1) && (lStack_c50 != lStack_c58)) {
      uVar14 = 0;
      do {
        func_0x0c9e4770(&uStack_c68,apuStack_ba0,&UNK_01d38818,0x7fffffff,1);
        if (lStack_c50 == lStack_c58) break;
        bVar21 = uVar14 < 0x7f;
        uVar14 = uVar14 + 1;
      } while (bVar21);
    }
    func_0x0c9e7730(*(undefined8 *)(uStack_cb8 + 0xf8),&uStack_c08);
    func_0x0c9e7730(*(undefined8 *)(uStack_cb8 + 0x100),&uStack_c68);
    if (lStack_c28 != 0) {
      lStack_c20 = lStack_c28;
      func_0x0412a280(lStack_c28,lStack_c18 - lStack_c28);
    }
    if (lStack_c40 != 0) {
      lStack_c38 = lStack_c40;
      func_0x0412a280(lStack_c40,lStack_c30 - lStack_c40);
    }
    if (lStack_c58 != 0) {
      lStack_c50 = lStack_c58;
      func_0x0412a280(lStack_c58,lStack_c48 - lStack_c58);
    }
    if (lStack_bc8 != 0) {
      uStack_bc0 = (undefined2)lStack_bc8;
      uStack_bbe = (undefined6)((ulong)lStack_bc8 >> 0x10);
      func_0x0412a280(lStack_bc8,CONCAT62(uStack_bb6,uStack_bb8) - lStack_bc8);
    }
    if (lStack_be0 != 0) {
      lStack_bd8 = lStack_be0;
      func_0x0412a280(lStack_be0,lStack_bd0 - lStack_be0);
    }
    if (lStack_bf8 != 0) {
      lStack_bf0 = lStack_bf8;
      func_0x0412a280(lStack_bf8,lStack_be8 - lStack_bf8);
    }
    func_0x0c9d0f40(apuStack_ba0);
  }
  lVar16 = lStack_c88;
  if (((bStack_c70 & 1) != 0) && (lVar4 = lStack_c80, lStack_c88 != 0)) {
    for (; lVar16 != lVar4; lVar4 = lVar4 + -0x20) {
      if (*(char *)(lVar4 + -8) == '\x01') {
        pthread_mutex_unlock(*(undefined8 *)(lVar4 + -0x10));
      }
      plVar15 = *(long **)(lVar4 + -0x18);
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
    }
    lStack_c80 = lVar16;
    func_0x0412a280(lStack_c88,lStack_c78 - lStack_c88);
  }
  if (plStack_cb0 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_cb0 + 1;
    lVar16 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_cb0 + 0x10))(plStack_cb0);
      func_0x0412c2d0(plStack_cb0);
    }
  }
  return bVar6;
}


