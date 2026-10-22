/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1e35a0 (ELF vaddr 0xd0e35a0)
 * Label: caller-of-callee
 * Body:  [[0d1e35a0, 0d1e37dd] [0d1e37e0, 0d1e3899] [0d1e38a0, 0d1e39cb] [0d1e39d0, 0d1e3ba1] [0d1e3bb0, 0d1e3cba] [0d1e3cc0, 0d1e3f42] [0d1e3f50, 0d1e40cc] [0d1e40d0, 0d1e42d5] [0d1e42e0, 0d1e4550] [0d1e4560, 0d1e4693] [0d1e46a0, 0d1e46bc] [0d1e46c0, 0d1e470d] [0d1e4710, 0d1e4975] [0d1e4bcf, 0d1e4c0b]]
 * Ghidra: FUN_0d1e35a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1e35a0(long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *in_FS_OFFSET;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  uint uStack_16c;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  long *plStack_148;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long *plStack_108;
  byte bStack_100;
  undefined1 auStack_ff [15];
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 *apuStack_50 [2];
  undefined1 auStack_40 [16];
  
  uStack_120 = *param_4;
  uStack_118 = param_4[1];
  uStack_138 = param_2;
  lStack_e0 = param_1;
  if ((uStack_118 >> 0x37 & 1) != 0) {
    plStack_148 = (long *)CONCAT44(plStack_148._4_4_,param_3);
    lVar12 = *(long *)((uStack_118 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar12 + 9;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (plVar5 == (long *)0x0 && lVar17 != 0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar5 = lVar12;
    func_0x0eee2f00(plVar5 + 1,uStack_118 & 0xff00ffffffffffff,lVar12);
    *(undefined1 *)((long)plVar5 + lVar12 + 8) = 0;
    uStack_118 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    param_3 = (uint)plStack_148;
  }
  uStack_110 = 0;
  uVar13 = param_4[2];
  if ((uVar13 & 0x80000000000000) != 0) {
    lVar17 = *(long *)((uVar13 & 0xff00ffffffffffff) - 8);
    lVar12 = lVar17 + 9;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
    if (lVar12 != 0 && plVar5 == (long *)0x0) {
      func_0x0eec74c0(lVar12,8);
    }
    *plVar5 = lVar17;
    func_0x0eee2f00(plVar5 + 1,uVar13 & 0xff00ffffffffffff,lVar17);
    *(undefined1 *)((long)plVar5 + lVar17 + 8) = 0;
    uVar13 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar9 = uStack_138;
  uStack_110 = uVar13;
  cVar3 = func_0x04865100(uStack_138,&UNK_013771cd);
  if (cVar3 != '\0') {
    uVar6 = func_0x048648e0(puVar9,&UNK_013771cd);
    func_0x0b633750(&uStack_120,uVar6);
  }
  uVar6 = func_0x048648e0(puVar9,&UNK_01381eab);
  func_0x04863480(auStack_a8,uVar6);
  func_0x04865630(auStack_b8,auStack_a8);
  func_0x048656b0(auStack_80,auStack_a8);
  lStack_e8 = *in_FS_OFFSET;
  puStack_98 = (undefined8 *)(lStack_e8 + -0xb78);
  uStack_16c = param_3 & 0xff;
  do {
    cVar3 = func_0x04862c80(auStack_b8,auStack_80);
    if (cVar3 != '\0') {
      func_0x04862b40(auStack_80);
      func_0x04862b40(auStack_b8);
      func_0x04863610(auStack_a8);
      if ((uStack_110 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
      }
      uStack_110 = 0;
      if ((uStack_118 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
      }
      return;
    }
    uVar6 = func_0x04862b80(auStack_b8);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[8] = 0;
    plStack_190 = plVar5;
    cVar3 = func_0x04864290(uVar6);
    if (cVar3 != '\0') {
      uVar7 = func_0x048648e0(uVar6,&UNK_01296b23);
      cVar3 = func_0x04865470(uVar7);
      if (cVar3 == '\0') {
        uVar8 = func_0x048648e0(uVar7,&UNK_011e9523);
        uVar19 = func_0x04863f80(0,uVar8);
        *(undefined4 *)(plVar5 + 7) = uVar19;
        uVar7 = func_0x048648e0(uVar7,&UNK_012ba56c);
        uVar19 = func_0x04863f80(0,uVar7);
      }
      else {
        uVar19 = func_0x04863f80(0,uVar7);
        *(undefined4 *)(plVar5 + 7) = uVar19;
      }
      *(undefined4 *)((long)plVar5 + 0x3c) = uVar19;
      cVar3 = func_0x04865100(uVar6,&UNK_0133861d);
      if (cVar3 != '\0') {
        uVar7 = func_0x048648e0(uVar6,&UNK_0133861d);
        cVar3 = func_0x04865470(uVar7);
        if (cVar3 == '\0') {
          uVar8 = func_0x048648e0(uVar7,&UNK_011e9523);
          uVar19 = func_0x04863f80(0,uVar8);
          *(undefined4 *)(plVar5 + 8) = uVar19;
          uVar7 = func_0x048648e0(uVar7,&UNK_012ba56c);
          uVar19 = func_0x04863f80(0,uVar7);
        }
        else {
          uVar19 = func_0x04863f80(0,uVar7);
          *(undefined4 *)(plVar5 + 8) = uVar19;
        }
        *(undefined4 *)((long)plVar5 + 0x44) = uVar19;
      }
      cVar3 = func_0x04865100(uVar6,&UNK_014526bb);
      if (cVar3 != '\0') {
        uVar7 = func_0x048648e0(uVar6,&UNK_014526bb);
        func_0x04863480(auStack_60,uVar7);
        func_0x0d1b85e0(&uStack_1a8,auStack_60,uStack_16c);
        lVar12 = plVar5[3];
        if (lVar12 != 0) {
          lVar17 = plVar5[4];
          lVar15 = lVar12;
          if (lVar12 != lVar17) {
            do {
              plVar1 = *(long **)(lVar17 + -8);
              *(undefined8 *)(lVar17 + -8) = 0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              lVar17 = lVar17 + -8;
            } while (lVar17 != lVar12);
            lVar15 = plVar5[3];
          }
          plVar5[4] = lVar12;
          func_0x0412a280(lVar15,plVar5[5] - lVar15);
          plVar5[3] = 0;
          plVar5[4] = 0;
          plVar5[5] = 0;
        }
        plVar5[3] = uStack_1a8;
        plVar5[4] = uStack_1a0;
        plVar5[5] = lStack_198;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        lStack_198 = 0;
        func_0x04863610(auStack_60);
      }
      cVar3 = func_0x04865100(uVar6,&UNK_014a08a1);
      if (cVar3 != '\0') {
        uVar7 = func_0x048648e0(uVar6,&UNK_014a08a1);
        func_0x04863480(auStack_c8,uVar7);
        puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc);
        if (puVar9 == (undefined8 *)0x0) {
          func_0x0eec74c0(0xc,0);
        }
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = 0;
        uVar7 = func_0x04864680(auStack_c8,&UNK_014a655a);
        uVar19 = func_0x04863e00(uVar7,0);
        *(undefined4 *)puVar9 = uVar19;
        uVar7 = func_0x04864680(auStack_c8,&UNK_0133861d);
        uVar19 = func_0x04863e00(uVar7,0);
        *(undefined4 *)((long)puVar9 + 4) = uVar19;
        uVar7 = func_0x04864680(auStack_c8,&UNK_011afd72);
        uVar19 = func_0x04863f80(0,uVar7);
        *(undefined4 *)(puVar9 + 1) = uVar19;
        lVar12 = plVar5[6];
        plVar5[6] = (long)puVar9;
        if (lVar12 != 0) {
          func_0x0412a280(lVar12,0xc);
        }
        func_0x04863610(auStack_c8);
      }
      uVar7 = func_0x048648e0(uVar6,&UNK_012a20a3);
      cVar3 = func_0x04864270(uVar7);
      if (cVar3 == '\0') {
        func_0x05a37630(1,3,0x23,&UNK_012b5a52);
      }
      else {
        uVar6 = func_0x048648e0(uVar6,&UNK_012a20a3);
        func_0x04865530(auStack_d8,uVar6);
        plStack_148 = plVar5;
        func_0x048655b0(auStack_70,uVar6);
        while (cVar3 = func_0x04862c80(auStack_d8,auStack_70), cVar3 == '\0') {
          uVar6 = func_0x04862b80(auStack_d8);
          cVar3 = func_0x04864290(uVar6);
          if (cVar3 == '\0') {
            func_0x0b60fe70(1,3,0x23,&UNK_01269286);
          }
          else {
            uVar7 = func_0x048648e0(uVar6,&UNK_0123ca5a);
            uVar19 = func_0x04863e00(uVar7,1);
            uVar7 = func_0x048648e0(uVar6,&UNK_012632e0);
            uVar4 = func_0x04863e00(uVar7,0);
            uStack_168 = 0;
            uStack_160 = 0;
            lStack_158 = 0;
            cVar3 = func_0x04865100(uVar6,&UNK_014526bb);
            if (cVar3 != '\0') {
              uVar7 = func_0x048648e0(uVar6,&UNK_014526bb);
              func_0x04863480(auStack_40,uVar7);
              func_0x0d1b85e0(&uStack_1a8,auStack_40,uStack_16c);
              uVar16 = uStack_168;
              uVar13 = uStack_160;
              if (uStack_168 != 0) {
                for (; uVar16 != uVar13; uVar13 = uVar13 - 8) {
                  plVar5 = *(long **)(uVar13 - 8);
                  *(undefined8 *)(uVar13 - 8) = 0;
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 8))();
                  }
                }
                uStack_160 = uVar16;
                func_0x0412a280(uStack_168,lStack_158 - uStack_168);
              }
              uStack_168 = uStack_1a8;
              uStack_160 = uStack_1a0;
              lStack_158 = lStack_198;
              uStack_1a8 = 0;
              uStack_1a0 = 0;
              lStack_198 = 0;
              func_0x04863610(auStack_40);
            }
            uVar7 = func_0x048648e0(uVar6,&UNK_0142a5c6);
            uStack_1a8 = uStack_1a8 & 0xffffffffffff0000;
            func_0x04863cb0(&bStack_100,uVar7,&uStack_1a8);
            if ((uStack_1a8 & 1) != 0) {
              func_0x0412a280(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
            }
            if ((bStack_100 & 1) == 0) {
              uVar13 = (ulong)(bStack_100 >> 1);
              plVar5 = (long *)auStack_ff;
              if (uVar13 != 10) goto LAB_0d1e3d95;
LAB_0d1e3f67:
              if ((short)plVar5[1] == 0x656c && *plVar5 == 0x6261745f746f6f6c) {
                func_0x04863480(&uStack_1a8,uVar6);
                func_0x0d1c07d0(&uStack_188,&uStack_1a8,uVar19,uVar4,&uStack_168);
                puVar9 = uStack_188;
                uStack_188 = (undefined8 *)0x0;
                func_0x04863610(&uStack_1a8);
              }
              else {
LAB_0d1e3fdf:
                func_0x0d1e5e50();
                puVar9 = (undefined8 *)0x0;
              }
            }
            else {
              uVar13 = auStack_ff._7_8_;
              plVar5 = plStack_f0;
              if (auStack_ff._7_8_ == 10) goto LAB_0d1e3f67;
LAB_0d1e3d95:
              if (uVar13 == 5) {
                if (*(char *)((long)plVar5 + 4) == 'y' && (int)*plVar5 == 0x74706d65) {
                  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
                  if (puVar9 == (undefined8 *)0x0) {
                    func_0x0eec74c0(0x48,0);
                  }
                  *(undefined4 *)(puVar9 + 1) = uVar19;
                  *(undefined4 *)((long)puVar9 + 0xc) = uVar4;
                  puVar9[2] = uStack_168;
                  puVar9[3] = uStack_160;
                  puVar9[4] = lStack_158;
                  uStack_168 = 0;
                  uStack_160 = 0;
                  lStack_158 = 0;
                  puVar9[7] = 0;
                  puVar9[8] = 0;
                  puVar9[5] = 0;
                  puVar9[6] = 0;
                  *puVar9 = &UNK_0f4599e8;
                  goto LAB_0d1e3fe6;
                }
                goto LAB_0d1e3fdf;
              }
              if ((uVar13 != 4) || ((int)*plVar5 != 0x6d657469)) goto LAB_0d1e3fdf;
              uVar7 = func_0x048648e0(uVar6,&UNK_01410416);
              uStack_188 = (undefined8 *)((ulong)uStack_188 & 0xffffffffffff0000);
              func_0x04863cb0(&uStack_1a8,uVar7,&uStack_188);
              if (((ulong)uStack_188 & 1) != 0) {
                func_0x0412a280(lStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
              }
              uStack_13c = 0;
              if (*(char *)(lStack_e8 + -0xb68) == '\0') {
                *(undefined1 *)(lStack_e8 + -0xb68) = 1;
                func_0x0417d010(&UNK_0ca00780,lStack_e8 + -0xb78,0xf53dab8);
              }
              lVar12 = puStack_98[1];
              puVar9 = (undefined8 *)*puStack_98;
              uVar22 = *(undefined4 *)(puStack_98 + 1);
              uVar23 = *(undefined4 *)((long)puStack_98 + 0xc);
              uVar20 = *(undefined4 *)puStack_98;
              uVar21 = *(undefined4 *)((long)puStack_98 + 4);
              if (lVar12 != 0) {
                LOCK();
                *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
                UNLOCK();
                LOCK();
                *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
                UNLOCK();
                uStack_138 = puVar9;
                uStack_130 = uVar22;
                uStack_12c = uVar23;
                func_0x0412c2d0(lVar12);
                uVar20 = (undefined4)uStack_138;
                uVar21 = uStack_138._4_4_;
                uVar22 = uStack_130;
                uVar23 = uStack_12c;
              }
              bVar18 = (uStack_1a8 & 1) == 0;
              lVar17 = lStack_198;
              if (bVar18) {
                lVar17 = (long)&uStack_1a8 + 1;
              }
              uStack_188 = (undefined8 *)CONCAT44(uVar21,uVar20);
              uStack_180 = (undefined8 *)CONCAT44(uVar23,uVar22);
              uVar13 = uStack_1a8 >> 1 & 0x7f;
              if (!bVar18) {
                uVar13 = uStack_1a0;
              }
              func_0x0ca12710(&plStack_108,&uStack_188,&uStack_13c,lVar17,uVar13);
              if (lVar12 != 0) {
                func_0x0412c2d0(lVar12);
              }
              plVar5 = plStack_108;
              if ((plStack_108 == (long *)0x0) || (*plStack_108 == 0)) {
                uStack_188 = (undefined8 *)((long)&uStack_1a8 + 1);
                if ((uStack_1a8 & 1) != 0) {
                  uStack_188 = (undefined8 *)lStack_198;
                }
                func_0x04aa8460(1,3,0x10,&UNK_011cb792,&uStack_188);
              }
              uVar7 = func_0x048648e0(uVar6,&UNK_01380236);
              func_0x04863480(apuStack_50,uVar7);
              func_0x0d1c28e0(&uStack_188,apuStack_50,uStack_16c);
              func_0x04863610(apuStack_50);
              puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
              if (puVar9 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x88,0);
              }
              if (plVar5 == (long *)0x0) {
                lVar12 = 0;
              }
              else {
                lVar12 = *plVar5;
              }
              *(undefined4 *)(puVar9 + 1) = uVar19;
              *(undefined4 *)((long)puVar9 + 0xc) = uVar4;
              puVar9[2] = uStack_168;
              puVar9[3] = uStack_160;
              puVar9[4] = lStack_158;
              uStack_168 = 0;
              uStack_160 = 0;
              lStack_158 = 0;
              puVar9[7] = 0;
              puVar9[8] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              *puVar9 = &UNK_0f459a30;
              puVar9[9] = lVar12;
              *(undefined4 *)(puVar9 + 10) = uStack_13c;
              *(undefined4 *)(puVar9 + 0xb) = (undefined4)uStack_188;
              *(undefined4 *)((long)puVar9 + 0x5c) = uStack_188._4_4_;
              *(undefined4 *)(puVar9 + 0xc) = (undefined4)uStack_180;
              *(undefined4 *)((long)puVar9 + 100) = uStack_180._4_4_;
              puVar9[0xd] = lStack_178;
              uStack_188 = (undefined8 *)0x0;
              uStack_180 = (undefined8 *)0x0;
              lStack_178 = 0;
              if ((uStack_1a8 & 1) == 0) {
                puVar9[0x10] = lStack_198;
                *(undefined4 *)(puVar9 + 0xe) = (undefined4)uStack_1a8;
                *(undefined4 *)((long)puVar9 + 0x74) = uStack_1a8._4_4_;
                *(undefined4 *)(puVar9 + 0xf) = (undefined4)uStack_1a0;
                *(undefined4 *)((long)puVar9 + 0x7c) = uStack_1a0._4_4_;
              }
              else {
                func_0x0412e5e0(puVar9 + 0xe,lStack_198,uStack_1a0);
                puVar11 = uStack_188;
                puVar10 = uStack_180;
                if (uStack_188 != (undefined8 *)0x0) {
                  for (; puVar11 != puVar10; puVar10 = puVar10 + -1) {
                    plVar1 = (long *)puVar10[-1];
                    puVar10[-1] = 0;
                    if (plVar1 != (long *)0x0) {
                      (**(code **)(*plVar1 + 8))();
                    }
                  }
                  uStack_180 = puVar11;
                  func_0x0412a280(uStack_188,lStack_178 - (long)uStack_188);
                }
              }
              if (plVar5 != (long *)0x0) {
                LOCK();
                *(int *)((long)plVar5 + 0xc) = *(int *)((long)plVar5 + 0xc) + -1;
                UNLOCK();
                if (((*(int *)((long)plVar5 + 0xc) < 1) && (*plVar5 == 0)) &&
                   (plStack_108 != (long *)0x0)) {
                  func_0x0412a280(plStack_108,0x10);
                }
              }
              if ((uStack_1a8 & 1) != 0) {
                func_0x0412a280(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
              }
            }
LAB_0d1e3fe6:
            cVar3 = func_0x04865100(uVar6,&UNK_01381eab);
            if (cVar3 == '\0') {
              if (puVar9 != (undefined8 *)0x0) goto LAB_0d1e40d9;
            }
            else if (puVar9 != (undefined8 *)0x0) {
              func_0x04863480(&uStack_188,uVar6);
              puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (puVar10 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              *puVar10 = 0;
              puVar10[1] = 0;
              apuStack_50[0] = puVar10;
              FUN_0d1e35a0(puVar10,&uStack_188,uStack_16c,&uStack_120);
              puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
              if (puVar11 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x50,0);
              }
              puVar11[7] = 0;
              puVar11[8] = 0;
              puVar11[5] = 0;
              puVar11[6] = 0;
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              *puVar11 = &UNK_0f458260;
              puVar11[9] = puVar10;
              plVar5 = (long *)puVar9[5];
              puVar9[5] = puVar11;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x10))();
              }
              func_0x04863610(&uStack_188);
LAB_0d1e40d9:
              puVar9[6] = uStack_120;
              if ((puVar9[7] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(puVar9[7] & 0xff00ffffffffffff) - 8);
              }
              puVar9[7] = 0;
              uVar13 = uStack_118;
              if ((uStack_118 & 0x80000000000000) != 0) {
                uVar13 = uStack_118 & 0xff00ffffffffffff;
                lVar17 = *(long *)(uVar13 - 8);
                lVar12 = lVar17 + 9;
                plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
                if (lVar12 != 0 && plVar5 == (long *)0x0) {
                  func_0x0eec74c0(lVar12,8);
                }
                *plVar5 = lVar17;
                func_0x0eee2f00(plVar5 + 1,uVar13,lVar17);
                *(undefined1 *)((long)plVar5 + lVar17 + 8) = 0;
                uVar13 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              puVar9[7] = uVar13;
              if ((puVar9[8] & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(puVar9[8] & 0xff00ffffffffffff) - 8);
              }
              puVar9[8] = 0;
              uVar13 = uStack_110;
              if ((uStack_110 & 0x80000000000000) != 0) {
                uVar13 = uStack_110 & 0xff00ffffffffffff;
                lVar17 = *(long *)(uVar13 - 8);
                lVar12 = lVar17 + 9;
                plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
                if (lVar12 != 0 && plVar5 == (long *)0x0) {
                  func_0x0eec74c0(lVar12,8);
                }
                *plVar5 = lVar17;
                func_0x0eee2f00(plVar5 + 1,uVar13,lVar17);
                *(undefined1 *)((long)plVar5 + lVar17 + 8) = 0;
                uVar13 = (ulong)(plVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              puVar9[8] = uVar13;
            }
            uStack_138 = puVar9;
            if ((bStack_100 & 1) != 0) {
              func_0x0412a280(plStack_f0,CONCAT71(auStack_ff._0_7_,bStack_100) & 0xfffffffffffffffe)
              ;
            }
            uVar16 = uStack_168;
            uVar13 = uStack_160;
            if (uStack_168 != 0) {
              for (; uVar16 != uVar13; uVar13 = uVar13 - 8) {
                plVar5 = *(long **)(uVar13 - 8);
                *(undefined8 *)(uVar13 - 8) = 0;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 8))();
                }
              }
              uStack_160 = uVar16;
              func_0x0412a280(uStack_168,lStack_158 - uStack_168);
            }
            if (uStack_138 != (undefined8 *)0x0) {
              puVar9 = (undefined8 *)plStack_148[1];
              if ((undefined8 *)plStack_148[2] <= puVar9) {
                lVar12 = *plStack_148;
                lVar17 = (long)puVar9 - lVar12;
                uVar13 = (lVar17 >> 3) + 1;
                if (uVar13 < 0x2000000000000000) {
                  uVar14 = plStack_148[2] - lVar12;
                  uVar16 = (long)uVar14 >> 2;
                  if ((ulong)((long)uVar14 >> 2) <= uVar13) {
                    uVar16 = uVar13;
                  }
                  if (0x7ffffffffffffff7 < uVar14) {
                    uVar16 = 0x1fffffffffffffff;
                  }
                  lStack_88 = lVar12;
                  if (uVar16 < 0x2000000000000000) {
                    lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
                    if (lVar12 == 0) {
                      func_0x0eec74c0(uVar16 * 8,0);
                    }
                    lVar15 = lStack_88;
                    lStack_90 = lVar12 + uVar16 * 8;
                    *(undefined8 **)(lVar12 + lVar17) = uStack_138;
                    puVar9 = (undefined8 *)(lVar12 + lVar17 + 8);
                    lVar12 = lVar12 + lVar17 + (lVar17 >> 3) * -8;
                    func_0x0eee2f00(lVar12,lStack_88,lVar17);
                    *plStack_148 = lVar12;
                    plStack_148[1] = (long)puVar9;
                    plStack_148[2] = lStack_90;
                    if (lVar15 != 0) {
                      func_0x0412a280(lVar15,uVar14);
                    }
                    goto LAB_0d1e442d;
                  }
                }
                else {
                  func_0x0d1e7ca0();
                }
                func_0x04882eb0();
                goto LAB_0d1e493c;
              }
              *puVar9 = uStack_138;
              puVar9 = puVar9 + 1;
LAB_0d1e442d:
              plStack_148[1] = (long)puVar9;
            }
          }
          func_0x04862ba0(auStack_d8);
        }
        func_0x04862b40(auStack_70);
        func_0x04862b40(auStack_d8);
      }
    }
    plVar5 = plStack_190;
    puVar9 = *(undefined8 **)(lStack_e0 + 0x20);
    if (puVar9 < *(undefined8 **)(lStack_e0 + 0x28)) {
      plStack_190 = (long *)0x0;
      *puVar9 = plVar5;
      puVar9 = puVar9 + 1;
      lVar12 = lStack_e0;
    }
    else {
      puVar10 = *(undefined8 **)(lStack_e0 + 0x18);
      lVar12 = (long)puVar9 - (long)puVar10;
      uVar13 = (lVar12 >> 3) + 1;
      if (0x1fffffffffffffff < uVar13) {
LAB_0d1e493c:
        func_0x0d1e8430();
LAB_0d1e4941:
        uVar6 = func_0x04882eb0();
        uVar6 = func_0x04882e20(uVar6);
        uVar6 = func_0x04882e20(uVar6);
        func_0x0ee386e0(&uStack_118);
        uVar6 = func_0x0eee2d70(uVar6);
        func_0x04862b40(auStack_b8);
        func_0x04863610(auStack_a8);
        func_0x0ee386e0(&uStack_110);
        func_0x0ee386e0(&uStack_118);
        func_0x0eee2d70(uVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = (long)*(undefined8 **)(lStack_e0 + 0x28) - (long)puVar10;
      uVar16 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar16 = 0x1fffffffffffffff;
      }
      uStack_138 = puVar10;
      if (0x1fffffffffffffff < uVar16) goto LAB_0d1e4941;
      lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
      if (lVar17 == 0) {
        func_0x0eec74c0(uVar16 * 8,0);
      }
      puVar10 = uStack_138;
      plVar5 = plStack_190;
      plStack_148 = (long *)(lVar17 + uVar16 * 8);
      plStack_190 = (long *)0x0;
      *(long **)(lVar17 + lVar12) = plVar5;
      puVar9 = (undefined8 *)(lVar17 + lVar12 + 8);
      lVar17 = lVar17 + lVar12 + (lVar12 >> 3) * -8;
      func_0x0eee2f00(lVar17,uStack_138,lVar12);
      lVar12 = lStack_e0;
      *(long *)(lStack_e0 + 0x18) = lVar17;
      *(undefined8 **)(lStack_e0 + 0x20) = puVar9;
      *(long **)(lStack_e0 + 0x28) = plStack_148;
      if (puVar10 != (undefined8 *)0x0) {
        func_0x0412a280(puVar10,uVar14);
      }
    }
    plVar5 = plStack_190;
    *(undefined8 **)(lVar12 + 0x20) = puVar9;
    plStack_190 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x0d1cdb50(&plStack_190);
    }
    func_0x04862ba0(auStack_b8);
  } while( true );
}


