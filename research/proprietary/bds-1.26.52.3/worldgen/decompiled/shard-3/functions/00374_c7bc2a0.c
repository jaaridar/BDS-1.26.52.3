/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8bc2a0 (ELF vaddr 0xc7bc2a0)
 * Label: caller-of-callee
 * Body:  [[0c8bc2a0, 0c8bc44a] [0c8bc450, 0c8bc55b] [0c8bc560, 0c8bc6c4] [0c8bc6d0, 0c8bc708] [0c8bc710, 0c8bc778] [0c8bc780, 0c8bc798] [0c8bc7a0, 0c8bc8d6] [0c8bc8e0, 0c8bca91] [0c8bcaa0, 0c8bcb02] [0c8bcb10, 0c8bcb61] [0c8bcb70, 0c8bcbc2] [0c8bcbd0, 0c8bce00] [0c8bce10, 0c8bce86] [0c8bce90, 0c8bcffc] [0c8bd000, 0c8bd03c] [0c8bd040, 0c8bd061] [0c8bd070, 0c8bd098] [0c8bd0a0, 0c8bd0cc] [0c8bd0d0, 0c8bd118] [0c8bd120, 0c8bd16e] [0c8bd170, 0c8bd26e] [0c8bd270, 0c8bd2d5] [0c8bd2e0, 0c8bd307] [0c8bd310, 0c8bd522] [0c8bd530, 0c8bd634] [0c8bd71e, 0c8bd829] [0c8bd830, 0c8bd937] [0c8bd940, 0c8bdbbc] [0c8bdbc0, 0c8bdc46] [0c8bdc50, 0c8bdd9d] [0c8bddce, 0c8bddd9] [0c8bdde5, 0c8bde17]]
 * Ghidra: FUN_0c8bc2a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0c8bc2a0(long param_1,byte *param_2,undefined8 param_3,long *param_4,undefined8 *param_5,
            undefined8 param_6)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  float fVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  long *plVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long *plVar22;
  int iVar23;
  undefined *puVar24;
  long *plVar25;
  undefined1 extraout_DL;
  byte extraout_DL_00;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 extraout_RDX;
  short *psVar29;
  ushort *puVar30;
  ulong unaff_RBP;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  short *psVar37;
  short *psVar38;
  undefined8 *puVar39;
  byte *pbVar40;
  byte *pbVar41;
  ushort *puVar42;
  short *psVar43;
  long lVar44;
  int iVar45;
  long lVar46;
  short *psVar47;
  bool bVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  ulong uStack_2a0;
  float fStack_298;
  int iStack_294;
  undefined8 uStack_290;
  float fStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  char cStack_278;
  int iStack_26c;
  ulong uStack_268;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  long *plStack_250;
  long *plStack_248;
  uint uStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  char cStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined *apuStack_200 [4];
  undefined **ppuStack_1e0;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long *plStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ushort *puStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  uint *puStack_178;
  long lStack_170;
  long lStack_168;
  ushort uStack_15a;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  uint *puStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  byte *pbStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  long *plStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puStack_128 = (undefined8 *)0xd00000148a6f5;
  uStack_184 = (undefined4)((ulong)puStack_f0 >> 0x20);
  puStack_f0 = (undefined *)((ulong)puStack_f0 & 0xffffffffffffff00);
  puStack_e0 = (uint *)((ulong)puStack_e0 & 0xffffffffffffff00);
  puStack_178 = puStack_e0;
  uStack_188 = puStack_f0._0_4_;
  iStack_180 = (int)uStack_e8;
  uStack_17c = uStack_e8._4_4_;
  uStack_190 = 0xc8bc320;
  plStack_f8 = param_4;
  func_0x0eeb79f0(auStack_60,&puStack_128);
  if (((ulong)puStack_128 >> 0x37 & 1) != 0) {
    uStack_190 = 0xc8bc34e;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_128 & 0xff00ffffffffffff) - 8)
    ;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  uStack_a8 = 0x3f600000;
  uStack_190 = 0xc8bc389;
  func_0x048af640(&lStack_d8,8);
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_96 = 0;
  puStack_f0 = &UNK_0f534768;
  uStack_190 = 0xc8bc3c1;
  puVar17 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (uint *)0x0) goto LAB_0c8bd60a;
LAB_0c8bc3cd:
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[5] = 0;
  *(undefined **)puVar17 = &UNK_0ef44a60;
  *(byte *)(puVar17 + 6) = 1;
  uStack_e8 = puVar17 + 6;
  puStack_e0 = puVar17;
  puStack_f0 = &UNK_0ef471f0;
  uStack_190 = 0xc8bc419;
  (**(code **)(*(long *)param_2 + 0x88))(param_2);
  plVar18 = *(long **)(param_1 + 0x380);
  plStack_70 = *(long **)(param_1 + 0x388);
  lStack_168 = param_1;
  if (plVar18 != plStack_70) {
    lStack_78 = param_1 + 0x18;
LAB_0c8bc488:
    lVar34 = *plVar18;
    if (lVar34 == *(long *)(param_1 + 0x3b8)) goto LAB_0c8bc476;
    puVar17 = (uint *)(lVar34 + 0x199);
    bVar48 = (*(byte *)(lVar34 + 0x198) & 1) == 0;
    puVar19 = *(uint **)(lVar34 + 0x1a8);
    if (bVar48) {
      puVar19 = puVar17;
    }
    uVar33 = (ulong)(*(byte *)(lVar34 + 0x198) >> 1);
    if (!bVar48) {
      uVar33 = *(ulong *)(lVar34 + 0x1a0);
    }
    puStack_148 = (uint *)CONCAT71(puStack_148._1_7_,1);
    uStack_130 = 0;
    puStack_178 = puStack_148;
    uStack_158._0_4_ = SUB84(puVar19,0);
    uStack_158._4_4_ = (undefined4)((ulong)puVar19 >> 0x20);
    uStack_150._0_4_ = (int)uVar33;
    uStack_150._4_4_ = (undefined4)(uVar33 >> 0x20);
    uStack_188 = (undefined4)uStack_158;
    uStack_184 = uStack_158._4_4_;
    iStack_180 = (int)uStack_150;
    uStack_17c = uStack_150._4_4_;
    uStack_190 = 0xc8bc500;
    uStack_158 = puVar19;
    uStack_150 = uVar33;
    plStack_68 = plVar18;
    func_0x0eeb79f0(auStack_48,&uStack_130);
    if ((uStack_130 & 0x80000000000000) != 0) {
      uStack_190 = 0xc8bc536;
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_130 & 0xff00ffffffffffff) - 8);
    }
    pbVar2 = (byte *)(lVar34 + 0x198);
    lStack_170 = lVar34;
    if ((*pbVar2 & 1) == 0) {
      puStack_148 = *(uint **)(lVar34 + 0x1a8);
      uStack_158 = *(uint **)pbVar2;
      uStack_150 = *(ulong *)(lVar34 + 0x1a0);
    }
    else {
      uStack_190 = 0xc8bc578;
      func_0x0412e5e0(&uStack_158,*(undefined8 *)(lVar34 + 0x1a8),*(undefined8 *)(lVar34 + 0x1a0));
    }
    uVar33 = (ulong)uStack_158 >> 1 & 0x7f;
    puVar19 = (uint *)((long)&uStack_158 + 1);
    if (((ulong)uStack_158 & 1) != 0) {
      uVar33 = uStack_150;
      puVar19 = puStack_148;
    }
    uStack_190 = 0xc8bc5a1;
    uVar20 = FUN_04883620(&uStack_130,puVar19,uVar33);
    uVar33 = plStack_f8[1];
    pbStack_100 = pbVar2;
    if (uVar33 != 0) {
      uVar26 = uVar33 - (uVar33 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        unaff_RBP = uVar33 - 1 & uVar20;
      }
      else {
        unaff_RBP = uVar20;
        if (uVar33 <= uVar20) {
          if ((uVar20 | uVar33) >> 0x20 == 0) {
            unaff_RBP = (uVar20 & 0xffffffff) % (uVar33 & 0xffffffff);
          }
          else {
            unaff_RBP = uVar20 % uVar33;
          }
        }
      }
      plVar18 = *(long **)(*plStack_f8 + unaff_RBP * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (((ulong)uStack_158 & 1) == 0) {
          puStack_138 = (uint *)((long)&uStack_158 + 1);
          uVar28 = (ulong)uStack_158 >> 1 & 0x7f;
        }
        else {
          puStack_138 = puStack_148;
          uVar28 = uStack_150;
        }
        if ((byte)(uVar26 >> 0x38) < 2) {
          do {
            if (plVar18[1] == uVar20) {
              bVar4 = *(byte *)(plVar18 + 2);
              if ((bVar4 & 1) == 0) {
                uVar26 = (ulong)(bVar4 >> 1);
              }
              else {
                uVar26 = plVar18[3];
              }
              if (uVar26 == uVar28) {
                if ((bVar4 & 1) == 0) {
                  lVar34 = (long)plVar18 + 0x11;
                }
                else {
                  lVar34 = plVar18[4];
                }
                uStack_190 = 0xc8bc736;
                iVar12 = func_0x0eee3000(lVar34,puStack_138,uVar28);
                if (iVar12 == 0) goto LAB_0c8bc7d3;
              }
            }
            else if ((plVar18[1] & uVar33 - 1) != unaff_RBP) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar26 = plVar18[1];
            if (uVar26 == uVar20) {
              bVar4 = *(byte *)(plVar18 + 2);
              if ((bVar4 & 1) == 0) {
                uVar26 = (ulong)(bVar4 >> 1);
              }
              else {
                uVar26 = plVar18[3];
              }
              if (uVar26 == uVar28) {
                if ((bVar4 & 1) == 0) {
                  lVar34 = (long)plVar18 + 0x11;
                }
                else {
                  lVar34 = plVar18[4];
                }
                uStack_190 = 0xc8bc7c6;
                iVar12 = func_0x0eee3000(lVar34,puStack_138,uVar28);
                if (iVar12 == 0) goto LAB_0c8bc7d3;
              }
            }
            else {
              if (uVar33 <= uVar26) {
                if ((uVar26 | uVar33) >> 0x20 == 0) {
                  uVar26 = (uVar26 & 0xffffffff) % (uVar33 & 0xffffffff);
                }
                else {
                  uVar26 = uVar26 % uVar33;
                }
              }
              if (uVar26 != unaff_RBP) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = (long *)0x0;
LAB_0c8bc7d3:
    param_1 = lStack_168;
    if (((ulong)uStack_158 & 1) != 0) {
      uStack_190 = 0xc8bc7f2;
      func_0x0412a280(puStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    iVar35 = (int)param_6;
    iVar12 = (int)param_5;
    if ((plVar18 != (long *)0x0) && (puVar6 = (undefined8 *)plVar18[5], puVar6 != (undefined8 *)0x0)
       ) {
      puVar7 = (undefined8 *)puVar6[1];
      for (puVar39 = (undefined8 *)*puVar6; puVar39 != puVar7; puVar39 = puVar39 + 10) {
        uStack_190 = 0xc8bc835;
        (**(code **)(*(long *)*puVar39 + 0x18))((long *)*puVar39,lStack_170,puVar39 + 2);
      }
      param_2 = (byte *)puVar6[3];
      pbVar2 = (byte *)puVar6[4];
      if (param_2 != pbVar2) {
        pbVar40 = param_2 + 0x28;
        do {
          uStack_190 = 0xc8bc866;
          (**(code **)(**(long **)(pbVar40 + -0x10) + 0x10))
                    (*(long **)(pbVar40 + -0x10),lStack_170,pbVar40 + -0x28,pbVar40);
          param_2 = pbVar40 + 0x68;
          pbVar41 = pbVar40 + 0x40;
          pbVar40 = param_2;
        } while (pbVar41 != pbVar2);
      }
      if (*(char *)(lStack_170 + 0x188) == '\x01') {
        if (DAT_0f5574a0 == '\0') {
          uStack_190 = 0xc8bcecd;
          iVar12 = func_0x04108328(&DAT_0f5574a0);
          if (iVar12 != 0) {
            LOCK();
            UNLOCK();
            _DAT_0f557498 = _DAT_0f556458;
            uStack_190 = 0xc8bcef5;
            _DAT_0f556458 = _DAT_0f556458 + 1;
            func_0x0410844d(&DAT_0f5574a0);
          }
        }
        for (psVar29 = *(short **)(lStack_170 + 0x170); psVar29 != *(short **)(lStack_170 + 0x178);
            psVar29 = psVar29 + 8) {
          if (*psVar29 == _DAT_0f557498) {
            lVar34 = *(long *)(psVar29 + 4);
            if (lVar34 != 0) {
              puVar19 = *(uint **)(lVar34 + 8);
              puVar17 = *(uint **)(lVar34 + 0x10);
              goto LAB_0c8bcaa4;
            }
            break;
          }
        }
      }
      goto LAB_0c8bcd80;
    }
    uVar5 = *(ushort *)(lStack_170 + 0x168);
    uVar33 = (ulong)uVar5;
    puVar30 = *(ushort **)(param_1 + 0x3a0);
    puVar42 = *(ushort **)(param_1 + 0x3a8);
    if (puVar30 < puVar42) {
      *puVar30 = uVar5;
      *(byte **)(puVar30 + 4) = pbStack_100;
      *(ushort **)(param_1 + 0x3a0) = puVar30 + 8;
      bVar4 = *(byte *)(lStack_170 + 0x198);
      uStack_158 = puVar17;
joined_r0x0c8bc92b:
      if ((bVar4 & 1) != 0) {
        uStack_158 = *(uint **)(lStack_170 + 0x1a8);
      }
      param_5 = &uStack_158;
      uStack_190 = 0xc8bc959;
      func_0x07230290(1,3,5,&UNK_011e2f66);
      goto LAB_0c8bc461;
    }
    lVar34 = *(long *)(param_1 + 0x398);
    lVar44 = (long)puVar30 - lVar34;
    lVar46 = lVar44 >> 4;
    uVar20 = lVar46 + 1;
    iVar23 = -1;
    puStack_138 = puVar17;
    if (uVar20 < 0x1000000000000000) {
      puVar42 = (ushort *)((long)puVar42 - lVar34);
      unaff_RBP = (long)puVar42 >> 3;
      if ((ulong)((long)puVar42 >> 3) <= uVar20) {
        unaff_RBP = uVar20;
      }
      if ((ushort *)0x7fffffffffffffef < puVar42) {
        unaff_RBP = 0xfffffffffffffff;
      }
      uStack_15a = uVar5;
      lStack_80 = lVar34;
      if (unaff_RBP < 0x1000000000000000) {
        lVar31 = unaff_RBP * 0x10;
        uStack_190 = 0xc8bc9db;
        lVar34 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
        if (lVar34 == 0) {
          uStack_190 = 0xc8bcebc;
          FUN_0eec74c0(lVar31,0);
        }
        lVar10 = lStack_80;
        unaff_RBP = lVar31 + lVar34;
        *(ushort *)(lVar34 + lVar44) = uStack_15a;
        *(byte **)(lVar34 + 8 + lVar44) = pbStack_100;
        lVar31 = lVar34 + lVar44 + 0x10;
        lVar34 = lVar34 + lVar44 + lVar46 * -0x10;
        uStack_190 = 0xc8bca29;
        func_0x0eee2f00(lVar34,lStack_80,lVar44);
        param_1 = lStack_168;
        *(long *)(lStack_168 + 0x398) = lVar34;
        *(long *)(lStack_168 + 0x3a0) = lVar31;
        *(ulong *)(lStack_168 + 0x3a8) = unaff_RBP;
        if (lVar10 != 0) {
          uStack_190 = 0xc8bca58;
          func_0x0412a280(lVar10,puVar42);
        }
        *(long *)(param_1 + 0x3a0) = lVar31;
        bVar4 = *(byte *)(lStack_170 + 0x198);
        uStack_158 = puStack_138;
        goto joined_r0x0c8bc92b;
      }
      uStack_190 = 0xc8bd620;
      iVar23 = -1;
      func_0x04882eb0();
    }
    uStack_190 = 0xc8bd625;
    uVar21 = func_0x0c8dfcb0();
    uStack_190 = 0xc8bd62d;
    plVar22 = (long *)func_0x04882e20(uVar21);
    uStack_190 = 0xc8bd72b;
    func_0x04904f60(&puStack_f0);
    uStack_190 = 0xc8bd738;
    func_0x0eeb81b0(auStack_60);
    uStack_190 = 0xc8bd740;
    plVar18 = plVar22;
    func_0x0eee2d70();
    lStack_1a8 = param_1;
    iVar36 = (int)lStack_170;
    uStack_210 = uVar33;
    plStack_1b8 = plVar22;
    lStack_1b0 = lVar44;
    puStack_1a0 = puVar42;
    lStack_198 = lVar46;
    uStack_190 = unaff_RBP;
    lVar34 = (**(code **)(*plVar18 + 0x130))();
    plStack_250 = *(long **)(lVar34 + 0xa0);
    plVar22 = (long *)(**(code **)(*plStack_250 + 0xa70))();
    puVar24 = &UNK_0f3e32e8;
    if (iVar36 == 1) {
      puVar24 = &UNK_0f3e3258;
    }
    apuStack_200[0] = puVar24 + 0x10;
    ppuStack_1e0 = apuStack_200;
    plStack_248 = plVar22;
    if (iVar12 < 1) {
      uVar21 = 0;
      lVar34 = 0x20;
      goto LAB_0c8bdcab;
    }
    iStack_26c = iVar35 * 2 + 1;
    uVar13 = (int)((ulong)extraout_RDX >> 0x20) + iStack_180;
    uStack_268 = (ulong)uVar13 << 0x20;
    if (iStack_180 < 0) {
      iVar36 = (int)extraout_RDX - iVar35;
      if (iVar35 < 0) {
        plVar18 = *(long **)(puStack_178 + 8);
        if (plVar18 != (long *)0x0) {
          uVar20 = CONCAT44(uVar13,iVar36);
          uVar33 = uStack_290;
          while( true ) {
            uStack_290 = uVar20;
            iVar12 = iVar12 + -1;
            uStack_268 = uStack_290;
            if (plVar18 != (long *)0x0) {
              fStack_288 = (float)(iVar23 - iVar35);
              (**(code **)(*plVar18 + 0x30))(plVar18,&uStack_290);
              uVar33 = uStack_290;
            }
            uStack_290 = uVar33;
            if (iVar12 == 0) break;
            plVar18 = *(long **)(puStack_178 + 8);
            uVar20 = uStack_268;
            uVar33 = uStack_290;
          }
        }
      }
      else {
        do {
          iVar14 = iStack_26c;
          iVar45 = (**(code **)(*plVar22 + 0x18))(plVar22,iStack_26c);
          iVar14 = (**(code **)(*plVar22 + 0x18))(plVar22,iVar14);
          plVar18 = *(long **)(puStack_178 + 8);
          if (plVar18 != (long *)0x0) {
            uStack_290 = (uint)(iVar45 + iVar36) | uStack_268;
            fStack_288 = (float)(iVar14 + (iVar23 - iVar35));
            (**(code **)(*plVar18 + 0x30))(plVar18,&uStack_290);
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      uVar21 = 0;
      goto LAB_0c8bdc8c;
    }
    iStack_254 = -iVar35;
    iVar36 = -iStack_180;
    iVar45 = iStack_180 + 1;
    iVar14 = 0;
    iStack_25c = iVar36;
    iStack_258 = iVar12;
    uStack_208 = extraout_RDX;
    goto LAB_0c8bd840;
  }
LAB_0c8bcf6c:
  puVar30 = *(ushort **)(param_1 + 0x398);
  puVar42 = *(ushort **)(param_1 + 0x3a0);
  if ((puVar30 != puVar42) && (*(long *)(lStack_168 + 0x388) != *(long *)(lStack_168 + 0x380))) {
    plVar18 = (long *)(lStack_168 + 0x368);
    do {
      plVar22 = *(long **)(lStack_168 + 0x380);
      plVar25 = *(long **)(lStack_168 + 0x388);
      if ((long)plVar25 - (long)plVar22 != 0) {
        uVar5 = *puVar30;
        uVar20 = (long)plVar25 - (long)plVar22 >> 3;
        plVar27 = plVar22;
        plVar32 = plVar25;
        uVar33 = uVar20;
        while( true ) {
          uVar26 = uVar33 >> 1;
          plVar3 = plVar27 + uVar26;
          if (uVar5 <= *(ushort *)(plVar27[uVar26] + 0x168)) break;
          plVar27 = plVar3 + 1;
          uVar26 = ~uVar26 + uVar33;
          plVar3 = plVar32;
joined_r0x0c8bd013:
          plVar32 = plVar3;
          uVar33 = uVar26;
          if (uVar33 == 0) goto LAB_0c8bcfc0;
        }
        if (uVar5 < *(ushort *)(plVar27[uVar26] + 0x168)) goto joined_r0x0c8bd013;
        if (uVar33 != 1) {
          do {
            uVar33 = uVar26 >> 1;
            if (*(ushort *)(plVar27[uVar33] + 0x168) < uVar5) {
              plVar27 = plVar27 + uVar33 + 1;
              uVar33 = ~uVar33 + uVar26;
            }
            uVar26 = uVar33;
          } while (uVar33 != 0);
        }
        lVar34 = (long)plVar32 - (long)(plVar3 + 1);
        if (lVar34 != 0) {
          plVar32 = plVar3 + 1;
          uVar33 = lVar34 >> 3;
          do {
            uVar26 = uVar33 >> 1;
            if (*(ushort *)(plVar32[uVar26] + 0x168) <= uVar5) {
              plVar32 = plVar32 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar33;
            }
            uVar33 = uVar26;
          } while (uVar26 != 0);
        }
        if (((plVar27 != plVar32) && (plVar27 != plVar25)) && (lVar34 = *plVar27, lVar34 != 0)) {
          uVar5 = *(ushort *)(lVar34 + 0x168);
          plVar27 = plVar25;
LAB_0c8bd0e9:
          uVar33 = uVar20 >> 1;
          plVar32 = plVar22 + uVar33;
          if (*(ushort *)(plVar22[uVar33] + 0x168) < uVar5) goto LAB_0c8bd0d0;
          if (uVar5 < *(ushort *)(plVar22[uVar33] + 0x168)) goto joined_r0x0c8bd10d;
          if (uVar20 != 1) {
            do {
              uVar20 = uVar33 >> 1;
              if (*(ushort *)(plVar22[uVar20] + 0x168) < uVar5) {
                plVar22 = plVar22 + uVar20 + 1;
                uVar20 = ~uVar20 + uVar33;
              }
              uVar33 = uVar20;
            } while (uVar20 != 0);
          }
          lVar44 = (long)plVar27 - (long)(plVar32 + 1);
          if (lVar44 != 0) {
            plVar27 = plVar32 + 1;
            uVar33 = lVar44 >> 3;
            do {
              uVar20 = uVar33 >> 1;
              if (*(ushort *)(plVar27[uVar20] + 0x168) <= uVar5) {
                plVar27 = plVar27 + uVar20 + 1;
                uVar20 = ~uVar20 + uVar33;
              }
              uVar33 = uVar20;
            } while (uVar20 != 0);
          }
          if (plVar22 != plVar27) {
            lVar44 = (long)plVar25 - (long)plVar27;
            if (lVar44 != 0) {
              uStack_190 = 0xc8bd1b3;
              func_0x0eee2ee0(plVar22,plVar27,lVar44);
            }
            *(long *)(lStack_168 + 0x388) = (long)plVar22 + lVar44;
          }
LAB_0c8bd1c2:
          uVar33 = *(ulong *)(lStack_168 + 0x360);
          if (uVar33 == 0) goto LAB_0c8bcfc0;
          uVar20 = *(ulong *)(lVar34 + 400);
          uVar26 = uVar33 - (uVar33 >> 1 & 0x5555555555555555);
          uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
          uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar26 >> 0x38 < 2) {
            uVar28 = uVar33 - 1 & uVar20;
          }
          else {
            uVar28 = uVar20;
            if (uVar33 <= uVar20) {
              if ((uVar20 | uVar33) >> 0x20 == 0) {
                uVar28 = (uVar20 & 0xffffffff) % (uVar33 & 0xffffffff);
              }
              else {
                uVar28 = uVar20 % uVar33;
              }
            }
          }
          lVar34 = *(long *)(lStack_168 + 0x358);
          puVar6 = *(undefined8 **)(lVar34 + uVar28 * 8);
          if ((puVar6 != (undefined8 *)0x0) && (plVar22 = (long *)*puVar6, plVar22 != (long *)0x0))
          {
            uVar1 = uVar33 - 1;
            bVar4 = (byte)(uVar26 >> 0x38);
            if (bVar4 < 2) {
LAB_0c8bd2f2:
              if (plVar22[1] == uVar20) {
                if (plVar22[2] != uVar20) goto LAB_0c8bd2e6;
LAB_0c8bd35e:
                if (bVar4 < 2) {
                  uVar20 = uVar20 & uVar1;
                }
                else if (uVar33 <= uVar20) {
                  if ((uVar20 | uVar33) >> 0x20 == 0) {
                    uVar20 = (uVar20 & 0xffffffff) % (uVar33 & 0xffffffff);
                  }
                  else {
                    uVar20 = uVar20 % uVar33;
                  }
                }
                plVar25 = *(long **)(lVar34 + uVar20 * 8);
                do {
                  plVar27 = plVar25;
                  plVar25 = (long *)*plVar27;
                } while ((long *)*plVar27 != plVar22);
                if (plVar27 == plVar18) {
LAB_0c8bd3e5:
                  if (*plVar22 != 0) {
                    uVar26 = *(ulong *)(*plVar22 + 8);
                    if (bVar4 < 2) {
                      uVar26 = uVar26 & uVar1;
                    }
                    else if (uVar33 <= uVar26) {
                      if ((uVar26 | uVar33) >> 0x20 == 0) {
                        uVar26 = (uVar26 & 0xffffffff) % (uVar33 & 0xffffffff);
                      }
                      else {
                        uVar26 = uVar26 % uVar33;
                      }
                    }
                    if (uVar26 == uVar20) goto LAB_0c8bd42a;
                  }
                  *(undefined8 *)(lVar34 + uVar20 * 8) = 0;
                }
                else {
                  uVar26 = plVar27[1];
                  if (bVar4 < 2) {
                    uVar26 = uVar26 & uVar1;
                  }
                  else if (uVar33 <= uVar26) {
                    if ((uVar26 | uVar33) >> 0x20 == 0) {
                      uVar26 = (uVar26 & 0xffffffff) % (uVar33 & 0xffffffff);
                    }
                    else {
                      uVar26 = uVar26 % uVar33;
                    }
                  }
                  if (uVar26 != uVar20) goto LAB_0c8bd3e5;
                }
LAB_0c8bd42a:
                lVar44 = *plVar22;
                if (lVar44 == 0) {
                  lVar44 = 0;
                }
                else {
                  uVar26 = *(ulong *)(lVar44 + 8);
                  if (bVar4 < 2) {
                    uVar26 = uVar26 & uVar1;
                  }
                  else if (uVar33 <= uVar26) {
                    if ((uVar26 | uVar33) >> 0x20 == 0) {
                      uVar26 = (uVar26 & 0xffffffff) % (uVar33 & 0xffffffff);
                    }
                    else {
                      uVar26 = uVar26 % uVar33;
                    }
                  }
                  if (uVar26 != uVar20) {
                    *(long **)(lVar34 + uVar26 * 8) = plVar27;
                    lVar44 = *plVar22;
                  }
                }
                *plVar27 = lVar44;
                *plVar22 = 0;
                *(long *)(lStack_168 + 0x370) = *(long *)(lStack_168 + 0x370) + -1;
                plVar25 = (long *)plVar22[3];
                plVar22[3] = 0;
                if (plVar25 != (long *)0x0) {
                  uStack_190 = 0xc8bd4a4;
                  (**(code **)(*plVar25 + 8))();
                }
                uStack_190 = 0xc8bcfb7;
                func_0x0412a280(plVar22,0x20);
              }
              else if ((plVar22[1] & uVar1) == uVar28) goto LAB_0c8bd2e6;
              goto LAB_0c8bcfc0;
            }
            do {
              uVar26 = plVar22[1];
              if (uVar26 == uVar20) {
                if (plVar22[2] == uVar20) goto LAB_0c8bd35e;
              }
              else {
                if (uVar33 <= uVar26) {
                  if ((uVar26 | uVar33) >> 0x20 == 0) {
                    uVar26 = (uVar26 & 0xffffffff) % (uVar33 & 0xffffffff);
                  }
                  else {
                    uVar26 = uVar26 % uVar33;
                  }
                }
                if (uVar26 != uVar28) break;
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
LAB_0c8bcfc0:
      puVar30 = puVar30 + 8;
    } while (puVar30 != puVar42);
  }
  puVar17 = puStack_e0;
  puStack_f0 = &UNK_0f534768;
  if (puStack_e0 == (uint *)0x0) {
    *(byte *)uStack_e8 = 0;
  }
  else {
    *(byte *)uStack_e8 = 0;
    LOCK();
    puVar19 = puStack_e0 + 2;
    lVar34 = *(long *)puVar19;
    *(long *)puVar19 = *(long *)puVar19 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      uStack_190 = 0xc8bd4ef;
      (**(code **)(*(long *)puStack_e0 + 0x10))(puStack_e0);
      uStack_190 = 0xc8bd4f7;
      func_0x0412c2d0(puVar17);
    }
  }
  lVar34 = lStack_a0;
  if (lStack_a0 != 0) {
    for (lVar44 = CONCAT62(uStack_96,uStack_98); lVar34 != lVar44; lVar44 = lVar44 + -0x38) {
      if ((*(byte *)(lVar44 + -0x38) & 1) != 0) {
        uStack_190 = 0xc8bd551;
        func_0x0412a280(*(undefined8 *)(lVar44 + -0x28),
                        *(ulong *)(lVar44 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_98 = (undefined2)lVar34;
    uStack_96 = (undefined6)((ulong)lVar34 >> 0x10);
    uStack_190 = 0xc8bd573;
    func_0x0412a280(lStack_a0,CONCAT62(uStack_8e,uStack_90) - lStack_a0);
  }
  puStack_128 = &uStack_c0;
  uStack_190 = 0xc8bd58a;
  func_0x048b0f50(&puStack_128);
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    uStack_190 = 0xc8bd5af;
    func_0x0412a280(lStack_d8,lStack_c8 - lStack_d8);
  }
  uStack_190 = 0xc8bd5bc;
  uVar21 = func_0x0eeb81b0(auStack_60);
  return uVar21;
LAB_0c8bcaa4:
  if (puVar19 == puVar17) goto LAB_0c8bcd12;
  puStack_128 = (undefined8 *)0x0;
  if ((*puVar19 & 1) == 0) {
    pbStack_110 = *(byte **)(puVar19 + 4);
    uStack_120 = *puVar19;
    uStack_11c = puVar19[1];
    uStack_118 = puVar19[2];
    uStack_114 = puVar19[3];
  }
  else {
    uStack_190 = 0xc8bcae2;
    func_0x0412e5e0(&uStack_120,*(undefined8 *)(puVar19 + 4),*(undefined8 *)(puVar19 + 2));
  }
  uStack_108 = 0;
  if ((uStack_120 & 1) == 0) {
    if ((byte)uStack_120 >> 1 != 0) goto LAB_0c8bcb19;
LAB_0c8bcb70:
    puStack_128 = (undefined8 *)0x0;
  }
  else {
    if (CONCAT44(uStack_114,uStack_118) == 0) goto LAB_0c8bcb70;
LAB_0c8bcb19:
    param_2 = (byte *)((long)&uStack_120 + 1);
    if ((uStack_120 & 1) != 0) {
      param_2 = pbStack_110;
    }
    if ((param_2 == (byte *)0x0) || (*param_2 == 0)) goto LAB_0c8bcb70;
    uStack_190 = 0xc8bcb3a;
    uVar33 = strlen(param_2);
    puStack_128 = (undefined8 *)0xcbf29ce484222325;
    if (uVar33 != 0) {
      if (7 < uVar33) {
        uVar20 = uVar33 & 0xfffffffffffffff8;
        do {
          puStack_128 = (undefined8 *)
                        (((((((((long)puStack_128 * 0x100000001b3 ^ (ulong)*param_2) * 0x100000001b3
                              ^ (ulong)param_2[1]) * 0x100000001b3 ^ (ulong)param_2[2]) *
                             0x100000001b3 ^ (ulong)param_2[3]) * 0x100000001b3 ^ (ulong)param_2[4])
                           * 0x100000001b3 ^ (ulong)param_2[5]) * 0x100000001b3 ^ (ulong)param_2[6])
                         * 0x100000001b3 ^ (ulong)param_2[7]);
          param_2 = param_2 + 8;
          uVar20 = uVar20 - 8;
        } while (uVar20 != 0);
      }
      if ((uVar33 & 7) != 0) {
        uVar20 = 0;
        do {
          puStack_128 = (undefined8 *)((long)puStack_128 * 0x100000001b3 ^ (ulong)param_2[uVar20]);
          uVar20 = uVar20 + 1;
        } while (((uint)uVar33 & 7) != uVar20);
      }
    }
  }
  if (DAT_0f5573c8 == '\0') {
    uStack_190 = 0xc8bcce5;
    iVar12 = func_0x04108328(&DAT_0f5573c8);
    if (iVar12 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f5573c0 = _DAT_0f556458;
      uStack_190 = 0xc8bcd0d;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573c8);
    }
  }
  lVar34 = lStack_78;
  psVar29 = *(short **)(lStack_170 + 0x170);
  if (psVar29 != *(short **)(lStack_170 + 0x178)) {
    while (*psVar29 != _DAT_0f5573c0) {
      psVar29 = psVar29 + 8;
      if (psVar29 == *(short **)(lStack_170 + 0x178)) goto LAB_0c8bd5ce;
    }
    param_2 = *(byte **)(psVar29 + 4);
    if (param_2 == (byte *)0x0) goto LAB_0c8bd605;
    uStack_190 = 0xc8bcbf2;
    uVar21 = func_0x05345600(lStack_78,&uStack_120);
    uStack_190 = 0xc8bcc04;
    uVar21 = func_0x05345a30(lVar34,uVar21,extraout_DL,param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar21;
    param_2[0x10] = extraout_DL_00;
    if ((uStack_120 & 1) != 0) {
      uStack_190 = 0xc8bcc2a;
      func_0x0412a280(pbStack_110,CONCAT44(uStack_11c,uStack_120) & 0xfffffffffffffffe);
    }
    puVar19 = puVar19 + 6;
    goto LAB_0c8bcaa4;
  }
LAB_0c8bd5ce:
  param_5 = (undefined8 *)&UNK_0120874d;
  uStack_190 = 0xc8bd5f6;
  cVar11 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x60,&UNK_012086f1);
  if (cVar11 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_0c8bd605:
  uStack_190 = 0xc8bd60a;
  func_0x04890760();
LAB_0c8bd60a:
  uStack_190 = 0xc8bd616;
  FUN_0eec74c0(0x20,0);
  goto LAB_0c8bc3cd;
LAB_0c8bcd12:
  if (DAT_0f5574a0 == '\0') {
    uStack_190 = 0xc8bcf3f;
    iVar12 = func_0x04108328(&DAT_0f5574a0);
    if (iVar12 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f557498 = _DAT_0f556458;
      uStack_190 = 0xc8bcf67;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5574a0);
    }
  }
  if (*(char *)(lStack_170 + 0x188) == '\x01') {
    psVar29 = *(short **)(lStack_170 + 0x170);
    psVar43 = *(short **)(lStack_170 + 0x178);
    psVar37 = psVar29;
    if (psVar29 != psVar43) {
LAB_0c8bcd60:
      if (*psVar29 != _DAT_0f557498) goto code_r0x0c8bcd69;
      psVar38 = psVar29 + 8;
      psVar47 = psVar37;
      if (psVar38 != psVar43) {
        do {
          psVar38[-8] = *psVar38;
          uVar21 = *(undefined8 *)(psVar38 + 4);
          psVar38[4] = 0;
          psVar38[5] = 0;
          psVar38[6] = 0;
          psVar38[7] = 0;
          plVar18 = *(long **)(psVar38 + -4);
          *(undefined8 *)(psVar38 + -4) = uVar21;
          if (plVar18 != (long *)0x0) {
            uStack_190 = 0xc8bce46;
            (**(code **)(*plVar18 + 8))();
          }
          psVar38 = psVar38 + 8;
          psVar47 = psVar47 + 8;
        } while (psVar38 != psVar43);
        psVar43 = *(short **)(lStack_170 + 0x178);
      }
      param_1 = lStack_168;
      psVar29 = (short *)((long)psVar29 + ((long)psVar47 - (long)psVar37));
      for (; psVar29 != psVar43; psVar43 = psVar43 + -8) {
        plVar18 = *(long **)(psVar43 + -4);
        psVar43[-4] = 0;
        psVar43[-3] = 0;
        psVar43[-2] = 0;
        psVar43[-1] = 0;
        if (plVar18 != (long *)0x0) {
          uStack_190 = 0xc8bceb0;
          (**(code **)(*plVar18 + 8))();
        }
      }
      *(short **)(lStack_170 + 0x178) = psVar29;
      cVar11 = *(char *)(lStack_170 + 0x188);
      goto joined_r0x0c8bce7c;
    }
  }
LAB_0c8bcd80:
  cVar11 = *(char *)(lStack_170 + 0x188);
joined_r0x0c8bce7c:
  if (cVar11 == '\x01') {
    if (DAT_0f5574b0 == '\0') {
      uStack_190 = 0xc8bcf06;
      iVar12 = func_0x04108328(&DAT_0f5574b0);
      if (iVar12 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f5574a8 = _DAT_0f556458;
        uStack_190 = 0xc8bcf2e;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f5574b0);
      }
    }
    for (psVar29 = *(short **)(lStack_170 + 0x170); psVar29 != *(short **)(lStack_170 + 0x178);
        psVar29 = psVar29 + 8) {
      if (*psVar29 == _DAT_0f5574a8) {
        if (*(long *)(psVar29 + 4) != 0) goto LAB_0c8bc461;
        break;
      }
    }
  }
  uStack_190 = 0xc8bc461;
  func_0x0535d010(lStack_170 + 0x170);
LAB_0c8bc461:
  uStack_190 = 0xc8bc46e;
  func_0x0eeb81b0(auStack_48);
  plVar18 = plStack_68;
LAB_0c8bc476:
  plVar18 = plVar18 + 1;
  if (plVar18 == plStack_70) goto LAB_0c8bcf6c;
  goto LAB_0c8bc488;
code_r0x0c8bcd69:
  psVar29 = psVar29 + 8;
  psVar37 = psVar37 + 8;
  if (psVar29 == psVar43) goto LAB_0c8bcd80;
  goto LAB_0c8bcd60;
LAB_0c8bd0d0:
  plVar22 = plVar32 + 1;
  uVar33 = ~uVar33 + uVar20;
  plVar32 = plVar27;
joined_r0x0c8bd10d:
  plVar27 = plVar32;
  uVar20 = uVar33;
  if (uVar20 == 0) goto LAB_0c8bd1c2;
  goto LAB_0c8bd0e9;
LAB_0c8bd2e6:
  plVar22 = (long *)*plVar22;
  if (plVar22 == (long *)0x0) goto LAB_0c8bcfc0;
  goto LAB_0c8bd2f2;
  while (lVar44 = *plVar25 * 0x20, plVar25 = (long *)(*(long *)(lVar34 + 400) + lVar44),
        *(ushort *)(*(long *)(lVar34 + 400) + 8 + lVar44) != _DAT_0f6b2718) {
LAB_0c8bdaa0:
    if (*plVar25 == -1) goto LAB_0c8bdaf0;
  }
  if ((plVar25 != *(long **)(lVar34 + 0x198)) && (lVar34 = plVar25[2], lVar34 != 0)) {
    func_0x0b3d5fc0(*(undefined4 *)(lVar34 + 0x20),*(undefined4 *)(lVar34 + 0x24),plVar22);
  }
LAB_0c8bdaf0:
  cVar11 = (**(code **)(*plVar22 + 0x490))(plVar22,0);
  if ((cVar11 == '\0') || (cVar11 = (**(code **)(*plVar22 + 0x498))(plVar22), cVar11 == '\0')) {
LAB_0c8bdb20:
    if (cStack_278 == '\x01') {
      cStack_278 = '\0';
      uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_280);
      func_0x0d87c640(uStack_290 + 0x28,&uStack_2a0);
    }
    while (iVar14 = iStack_294 + 1, iVar14 != iStack_258) {
LAB_0c8bd840:
      plVar22 = plStack_248;
      iVar12 = iStack_26c;
      iVar16 = iStack_254;
      iVar15 = iStack_254;
      iStack_294 = iVar14;
      if (-1 < iVar35) {
        iVar15 = (**(code **)(*plStack_248 + 0x18))(plStack_248,iStack_26c);
        iVar16 = (**(code **)(*plVar22 + 0x18))(plVar22,iVar12);
        iVar15 = iVar15 - iVar35;
        iVar16 = iVar16 - iVar35;
        iVar36 = iStack_25c;
      }
      uVar33 = (uint)(iVar15 + (int)uStack_208) | uStack_268;
      plVar22 = *(long **)(puStack_178 + 8);
      if ((plVar22 == (long *)0x0) ||
         (uStack_290 = uVar33, fStack_288 = (float)(iVar16 + iVar23),
         cVar11 = (**(code **)(*plVar22 + 0x30))(plVar22,&uStack_290), cVar11 != '\0')) {
        iVar12 = iVar45;
        uStack_290 = uVar33;
        fStack_288 = (float)(iVar16 + iVar23);
        do {
          uStack_2a0 = uStack_290;
          uStack_290 = CONCAT44(uStack_290._4_4_ + -1,(uint)uStack_290);
          fStack_298 = fStack_288;
          if (ppuStack_1e0 == (undefined **)0x0) {
            uVar21 = func_0x04891200();
            uVar21 = func_0x04882e20(uVar21);
            uVar21 = func_0x04882e20(uVar21);
            func_0x0d87ba30(&uStack_240);
            func_0x0d87ba30(&uStack_290);
            lVar34 = 0x20;
            if ((ppuStack_1e0 == apuStack_200) || (lVar34 = 0x28, ppuStack_1e0 != (undefined **)0x0)
               ) {
              (**(code **)(*ppuStack_1e0 + lVar34))();
            }
            func_0x0eee2d70(uVar21);
            pcVar8 = (code *)swi(3);
            uVar21 = (*pcVar8)();
            return uVar21;
          }
          cVar11 = (**(code **)(*ppuStack_1e0 + 0x30))(ppuStack_1e0,plVar18,&uStack_2a0,&uStack_290)
          ;
          fVar9 = fStack_298;
          uVar33 = uStack_2a0;
          if (cVar11 != '\0') {
            uVar21 = (**(code **)(*plStack_250 + 0x908))();
            fStack_298 = (float)(int)fVar9 + _DAT_011986e0;
            uStack_2a0 = CONCAT44((float)(int)(uVar33 >> 0x20),(float)(int)uVar33 + _DAT_011986e0);
            func_0x0b054630(&uStack_290,uVar21,uStack_210,0,&uStack_2a0,&UNK_01e7b238);
            if ((cStack_278 != '\x01') ||
               (plVar22 = (long *)func_0x0bf8e2b0(&uStack_290,1), plVar22 == (long *)0x0))
            goto LAB_0c8bdb20;
            lVar34 = (**(code **)(*plVar18 + 0x150))(plVar18);
            plVar22[0x3a] = lVar34;
            lVar44 = (**(code **)(*plVar18 + 0x130))(plVar18);
            lVar34 = *(long *)(lVar44 + 0x58);
            uVar49 = *(undefined4 *)(lVar44 + 0x50);
            uVar50 = *(undefined4 *)(lVar44 + 0x54);
            uVar51 = *(undefined4 *)(lVar44 + 0x58);
            uVar52 = *(undefined4 *)(lVar44 + 0x5c);
            if (lVar34 != 0) {
              LOCK();
              *(long *)(lVar34 + 0x10) = *(long *)(lVar34 + 0x10) + 1;
              UNLOCK();
              LOCK();
              *(long *)(lVar34 + 0x10) = *(long *)(lVar34 + 0x10) + 1;
              UNLOCK();
              uStack_1d0 = uVar49;
              uStack_1cc = uVar50;
              uStack_1c8 = uVar51;
              uStack_1c4 = uVar52;
              func_0x0412c2d0();
              uVar49 = uStack_1d0;
              uVar50 = uStack_1cc;
              uVar51 = uStack_1c8;
              uVar52 = uStack_1c4;
            }
            uStack_220 = uVar49;
            uStack_21c = uVar50;
            uStack_218 = uVar51;
            uStack_214 = uVar52;
            func_0x0b3e7f80(plVar22,&uStack_220);
            if (CONCAT44(uStack_214,uStack_218) != 0) {
              func_0x0412c2d0();
            }
            lVar34 = plVar22[0x12];
            if (lVar34 == 0) goto LAB_0c8bdaf0;
            if ((DAT_0f6b2720 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6b2720), iVar12 != 0)) {
              LOCK();
              UNLOCK();
              _DAT_0f6b2718 = _DAT_0f555550;
              _DAT_0f555550 = _DAT_0f555550 + 1;
              func_0x0410844d(&DAT_0f6b2720);
            }
            plVar25 = (long *)(*(long *)(lVar34 + 0x178) +
                              (ulong)(((uint)(*(int *)(lVar34 + 0x180) -
                                             (int)*(long *)(lVar34 + 0x178)) >> 3) - 1 &
                                     (uint)_DAT_0f6b2718) * 8);
            goto LAB_0c8bdaa0;
          }
          iVar12 = iVar12 + -1;
        } while (iVar36 < iVar12);
      }
    }
    uVar21 = 0;
  }
  else {
    uStack_240 = uStack_240 & 0xffffff00;
    cStack_228 = cStack_278 == '\x01';
    if ((bool)cStack_228) {
      uStack_240 = (uint)uStack_290;
      uStack_23c = uStack_290._4_4_;
      fStack_238 = fStack_288;
      uStack_234 = uStack_284;
      uStack_230 = uStack_280;
      cStack_278 = '\0';
    }
    uVar21 = (**(code **)(*plStack_250 + 0x160))(plStack_250,plVar18,&uStack_240);
    if (cStack_228 == '\x01') {
      cStack_228 = '\0';
      uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_230);
      func_0x0d87c640(CONCAT44(uStack_23c,uStack_240) + 0x28,&uStack_2a0);
    }
    if (cStack_278 == '\x01') {
      cStack_278 = '\0';
      uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_280);
      func_0x0d87c640(uStack_290 + 0x28,&uStack_2a0);
    }
  }
LAB_0c8bdc8c:
  lVar34 = 0x20;
  if ((ppuStack_1e0 == apuStack_200) || (lVar34 = 0x28, ppuStack_1e0 != (undefined **)0x0)) {
LAB_0c8bdcab:
    (**(code **)(*ppuStack_1e0 + lVar34))();
  }
  return uVar21;
}


