/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd661c00 (ELF vaddr 0xd561c00)
 * Label: caller-of-callee
 * Body:  [[0d661c00, 0d661cb6] [0d661cc0, 0d661eaa] [0d661eb0, 0d662229] [0d662230, 0d662309] [0d662310, 0d662404] [0d662410, 0d66263b] [0d662640, 0d6626a1] [0d6626b0, 0d662afe] [0d662b00, 0d662b9e] [0d662ba0, 0d662ca2] [0d662cb0, 0d662d18] [0d662d20, 0d662dba] [0d662dc0, 0d662e49] [0d662e50, 0d662eb8] [0d662ec0, 0d662fbd] [0d662fc0, 0d6630c3] [0d6630d0, 0d6632a4] [0d6632b0, 0d663326] [0d663330, 0d66338b] [0d663390, 0d663561] [0d663570, 0d663589] [0d663590, 0d663614] [0d663620, 0d663645] [0d663650, 0d663668] [0d663670, 0d6636a0] [0d6636b0, 0d663753] [0d663760, 0d6637d0] [0d6637e0, 0d66385b] [0d663860, 0d6638c5] [0d6638d0, 0d66390c] [0d663910, 0d66395a] [0d663960, 0d663aba] [0d663ac0, 0d663ce1] [0d663cf0, 0d663dac] [0d663db0, 0d663f84] [0d663f90, 0d6640fe] [0d664100, 0d6642e5] [0d6642f0, 0d6642f9] [0d664300, 0d66433b] [0d664340, 0d664444] [0d664450, 0d664553] [0d664560, 0d66460a] [0d664610, 0d6647de] [0d664e8a, 0d664ea8]]
 * Ghidra: FUN_0d661c00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d661c00(long *param_1,ulong *******param_2,ulong *******param_3,long *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [8];
  undefined1 auVar14 [4];
  byte bVar15;
  undefined1 uVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  ulong *******pppppppuVar20;
  undefined1 *puVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  undefined2 *puVar25;
  long lVar26;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  undefined8 uVar29;
  byte bVar30;
  undefined4 uVar31;
  byte *pbVar32;
  long lVar33;
  undefined *puVar34;
  undefined1 auVar35 [8];
  byte *pbVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 unaff_R13;
  undefined7 uVar42;
  ulong ******ppppppuVar43;
  ulong uVar44;
  bool bVar45;
  undefined1 auStack_228 [8];
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  undefined1 uStack_210;
  undefined1 auStack_208 [4];
  undefined4 uStack_204;
  undefined8 uStack_200;
  ulong *******pppppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  ulong ******ppppppuStack_1d0;
  ulong ******ppppppuStack_1c8;
  undefined1 auStack_1b8 [8];
  ulong *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_198;
  ulong *******pppppppuStack_190;
  ulong *******pppppppuStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  ulong *******pppppppuStack_148;
  ulong *******pppppppuStack_140;
  long *plStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined4 uStack_f7;
  undefined4 uStack_f3;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  undefined1 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong *******pppppppuStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  ulong *******pppppppuStack_48;
  ulong *******pppppppuStack_40;
  ulong *******pppppppuStack_38;
  
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_1f0 = (ulong ******)CONCAT71(uStack_1f0._1_7_,1);
  uStack_1e8 = (ulong *******)((ulong)uStack_1e8 & 0xffffffffffff0000);
  _auStack_208 = (undefined1  [8])param_2;
  uStack_200 = param_3;
  pppppppuStack_1f8 = param_3;
  plStack_138 = param_4;
  plStack_c0 = param_1;
  func_0x0d664eb0(&uStack_b8,auStack_208);
  if (((ulong)uStack_1e8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
  }
  uVar42 = (undefined7)((ulong)unaff_R13 >> 8);
  if (lStack_90 == 0) {
    uVar40 = CONCAT71(uVar42,1);
  }
  else {
    pppppppuStack_80 = (ulong *******)&pppppppuStack_1d8;
    pppppppuStack_40 = (ulong *******)&UNK_0ef40ca0;
    uVar40 = CONCAT71(uVar42,1);
    do {
      lVar38 = puStack_b0[uStack_98 / 0x49];
      lVar39 = (uStack_98 % 0x49) * 0x38;
      puVar2 = (undefined4 *)(lVar38 + lVar39);
      uStack_108 = *puVar2;
      uStack_104 = puVar2[1];
      uStack_100 = puVar2[2];
      uStack_fc = puVar2[3];
      lVar26 = lVar38 + 9 + lVar39;
      uStack_f7 = *(undefined4 *)(lVar26 + 8);
      uStack_f3 = *(undefined4 *)(lVar26 + 0xc);
      uStack_f8 = (undefined1)((uint)*(undefined4 *)(lVar26 + 4) >> 0x18);
      if ((*(byte *)(lVar38 + 0x20 + lVar39) & 1) == 0) {
        lVar38 = lVar38 + lVar39;
        pppppppuStack_d8 = *(ulong ********)(lVar38 + 0x30);
        auStack_e8 = *(undefined1 (*) [4])(lVar38 + 0x20);
        uStack_e4 = *(undefined4 *)(lVar38 + 0x24);
        uStack_e0 = *(undefined4 *)(lVar38 + 0x28);
        uStack_dc = *(undefined4 *)(lVar38 + 0x2c);
        lVar26 = puStack_b0[uStack_98 / 0x49];
        lVar38 = (uStack_98 % 0x49) * 0x38;
        bVar15 = *(byte *)(lVar26 + 0x20 + lVar38);
      }
      else {
        func_0x0412e5e0(auStack_e8,*(undefined8 *)(lVar38 + lVar39 + 0x30),
                        *(undefined8 *)(lVar38 + lVar39 + 0x28));
        lVar26 = puStack_b0[uStack_98 / 0x49];
        lVar38 = (uStack_98 % 0x49) * 0x38;
        bVar15 = *(byte *)(lVar26 + 0x20 + lVar38);
      }
      if ((bVar15 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar26 + lVar38 + 0x30),
                        *(ulong *)(lVar26 + lVar38 + 0x20) & 0xfffffffffffffffe);
      }
      lStack_90 = lStack_90 + -1;
      uStack_98 = uStack_98 + 1;
      if (0x91 < uStack_98) {
        func_0x0412a280(*puStack_b0,0xff8);
        puStack_b0 = puStack_b0 + 1;
        uStack_98 = uStack_98 - 0x49;
      }
      if (uStack_f3._3_1_ == '\x01') {
        puVar9 = (undefined8 *)CONCAT44(uStack_104,uStack_108);
        bVar15 = func_0x04863800(CONCAT44(uStack_fc,uStack_100));
        pbVar32 = (byte *)*puVar9;
        pbVar36 = (byte *)puVar9[1];
        if (pbVar32 != pbVar36) {
          if (bVar15 != 2) {
            if ((*pbVar32 != bVar15) && ((*pbVar32 & 0xfe) != 2 || (bVar15 ^ 1) != 0)) {
              do {
                pbVar32 = pbVar32 + 1;
                if (pbVar32 == pbVar36) goto LAB_0d661e15;
              } while ((*pbVar32 != bVar15) && ((*pbVar32 & 0xfe) != 2 || (bVar15 ^ 1) != 0));
            }
            goto LAB_0d6622d6;
          }
          do {
            if ((byte)(*pbVar32 - 1) < 3) goto LAB_0d6622d6;
            pbVar32 = pbVar32 + 1;
          } while (pbVar32 != pbVar36);
        }
LAB_0d661e15:
        if (plStack_138 != (long *)0x0) {
          pppppppuVar20 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pppppppuVar20 == (ulong *******)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          uVar29 = _UNK_013894c7;
          auStack_168 = (undefined1  [8])0x21;
          puStack_160 = (undefined *)0x1d;
          *(ulong *)((long)pppppppuVar20 + 0xd) = CONCAT53(_UNK_013894c2,_DAT_013894bf);
          *(undefined8 *)((long)pppppppuVar20 + 0x15) = uVar29;
          uVar12 = _UNK_013894be;
          uVar11 = _UNK_013894ba;
          uVar31 = _UNK_013894b6;
          *(undefined4 *)pppppppuVar20 = _DAT_013894b2;
          *(undefined4 *)((long)pppppppuVar20 + 4) = uVar31;
          *(undefined4 *)(pppppppuVar20 + 1) = uVar11;
          *(undefined4 *)((long)pppppppuVar20 + 0xc) = uVar12;
          *(undefined1 *)((long)pppppppuVar20 + 0x1d) = 0;
          pppppppuStack_158 = pppppppuVar20;
          if (((uint)auStack_e8 & 1) == 0) {
            pppppppuStack_1f8 = pppppppuStack_d8;
            _auStack_208 = (undefined1  [8])CONCAT44(uStack_e4,auStack_e8);
            uStack_200 = (ulong *******)CONCAT44(uStack_dc,uStack_e0);
          }
          else {
            func_0x0412e5e0(auStack_208,pppppppuStack_d8,CONCAT44(uStack_dc,uStack_e0));
          }
          func_0x0d6617c0(&uStack_1f0,*(undefined8 *)CONCAT44(uStack_104,uStack_108),
                          ((undefined8 *)CONCAT44(uStack_104,uStack_108))[1]);
          uVar16 = func_0x04863800(CONCAT44(uStack_fc,uStack_100));
          puVar21 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
          if (puVar21 == (undefined1 *)0x0) {
            func_0x0eec74c0(1,0);
          }
          *puVar21 = uVar16;
          func_0x0d6617c0(&pppppppuStack_1d8,puVar21,puVar21 + 1);
          pppppppuStack_188 = (ulong *******)0x0;
          pppppppuStack_180 = (ulong *******)0x0;
          pppppppuStack_178 = (ulong *******)0x0;
          pppppppuStack_128 = (ulong *******)&pppppppuStack_188;
          pppppppuStack_120 = (ulong *******)((ulong)pppppppuStack_120 & 0xffffffffffffff00);
          pppppppuVar20 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
          if (pppppppuVar20 == (ulong *******)0x0) {
            func_0x0eec74c0(0x48,0);
          }
          pppppppuStack_178 = pppppppuVar20 + 9;
          auStack_228 = (undefined1  [8])&pppppppuStack_188;
          pppppppuStack_220 = (ulong *******)&pppppppuStack_130;
          pppppppuStack_218 = (ulong *******)&pppppppuStack_d0;
          uStack_210 = 0;
          pppppppuStack_188 = pppppppuVar20;
          pppppppuStack_180 = pppppppuVar20;
          pppppppuStack_130 = pppppppuVar20;
          if (((ulong)_auStack_208 & 1) == 0) {
            pppppppuVar20[2] = (ulong ******)pppppppuStack_1f8;
            *(undefined1 (*) [4])pppppppuVar20 = auStack_208;
            *(undefined4 *)((long)pppppppuVar20 + 4) = uStack_204;
            *(undefined4 *)(pppppppuVar20 + 1) = (undefined4)uStack_200;
            *(undefined4 *)((long)pppppppuVar20 + 0xc) = uStack_200._4_4_;
            pppppppuStack_d0 = pppppppuVar20 + 3;
            if (((ulong)uStack_1f0 & 1) != 0) goto LAB_0d662132;
LAB_0d6620cc:
            pppppppuStack_d0[2] = (ulong ******)pppppppuStack_1e0;
            *(undefined4 *)pppppppuStack_d0 = (undefined4)uStack_1f0;
            *(undefined4 *)((long)pppppppuStack_d0 + 4) = uStack_1f0._4_4_;
            *(undefined4 *)(pppppppuStack_d0 + 1) = (undefined4)uStack_1e8;
            *(undefined4 *)((long)pppppppuStack_d0 + 0xc) = uStack_1e8._4_4_;
            pppppppuStack_d0 = pppppppuStack_d0 + 3;
            if (((ulong)pppppppuStack_1d8 & 1) != 0) goto LAB_0d66215c;
LAB_0d6620f2:
            pppppppuStack_d0[2] = ppppppuStack_1c8;
            *pppppppuStack_d0 = (ulong ******)pppppppuStack_1d8;
            pppppppuStack_d0[1] = ppppppuStack_1d0;
          }
          else {
            pppppppuStack_d0 = pppppppuVar20;
            func_0x0412e5e0(pppppppuVar20,pppppppuStack_1f8,uStack_200);
            pppppppuStack_d0 = pppppppuStack_d0 + 3;
            if (((ulong)uStack_1f0 & 1) == 0) goto LAB_0d6620cc;
LAB_0d662132:
            func_0x0412e5e0(pppppppuStack_d0,pppppppuStack_1e0,uStack_1e8);
            pppppppuStack_d0 = pppppppuStack_d0 + 3;
            if (((ulong)pppppppuStack_1d8 & 1) == 0) goto LAB_0d6620f2;
LAB_0d66215c:
            func_0x0412e5e0(pppppppuStack_d0,ppppppuStack_1c8,ppppppuStack_1d0);
          }
          pppppppuStack_180 = pppppppuStack_d0 + 3;
          uStack_58 = 0;
          plStack_50 = (long *)0x0;
          (**(code **)(*plStack_c0 + 0x88))
                    (auStack_1b8,plStack_c0,auStack_168,&pppppppuStack_188,&uStack_58);
          func_0x057d8ed0(plStack_138,auStack_1b8);
          if (((ulong)auStack_1b8 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
          }
          plVar10 = plStack_50;
          pppppppuVar20 = pppppppuStack_188;
          if (plStack_50 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            lVar26 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plStack_50 + 0x10))(plStack_50);
              func_0x0412c2d0(plVar10);
              pppppppuVar20 = pppppppuStack_188;
            }
          }
          pppppppuStack_188 = pppppppuVar20;
          pppppppuVar24 = pppppppuStack_180;
          if (pppppppuVar20 != (ulong *******)0x0) {
            for (; pppppppuVar20 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
              if (((ulong)pppppppuVar24[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe);
              }
            }
            pppppppuStack_180 = pppppppuVar20;
            func_0x0412a280(pppppppuStack_188,(long)pppppppuStack_178 - (long)pppppppuStack_188);
          }
          if (((ulong)pppppppuStack_1d8 & 1) != 0) {
            func_0x0412a280(ppppppuStack_1c8,(ulong)pppppppuStack_1d8 & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_1f0 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1e0,(ulong)uStack_1f0 & 0xfffffffffffffffe);
          }
          if (((ulong)_auStack_208 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f8,(ulong)_auStack_208 & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar21,1);
          if (((ulong)auStack_168 & 1) != 0) {
            func_0x0412a280(pppppppuStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
          }
        }
        uVar40 = 0;
      }
LAB_0d6622d6:
      cVar17 = func_0x04863800(CONCAT44(uStack_fc,uStack_100));
      uVar31 = (undefined4)uVar40;
      if (cVar17 == '\a') {
        for (pppppppuVar20 = *(ulong ********)(CONCAT44(uStack_104,uStack_108) + 0x88);
            pppppppuVar20 != (ulong *******)0x0; pppppppuVar20 = (ulong *******)*pppppppuVar20) {
          pppppppuVar24 = pppppppuVar20 + 2;
          pppppppuVar22 =
               (ulong *******)func_0x04864990(CONCAT44(uStack_fc,uStack_100),pppppppuVar24);
          cVar17 = func_0x04864260(pppppppuVar22);
          auVar14 = auStack_e8;
          if (cVar17 == '\0') {
            if (((uint)auStack_e8 & 1) == 0) {
              uVar44 = (ulong)(auStack_e8[0] >> 1);
            }
            else {
              uVar44 = CONCAT44(uStack_dc,uStack_e0);
            }
            pppppppuVar24 = (ulong *******)(uVar44 + 1);
            pppppppuStack_198 = pppppppuVar20;
            if ((ulong *******)0xfffffffffffffff7 < pppppppuVar24) goto LAB_0d664790;
            pppppppuStack_150 = pppppppuVar22;
            if (pppppppuVar24 < (ulong *******)0x17) {
              uStack_200 = (ulong *******)0x0;
              pppppppuStack_1f8 = (ulong *******)0x0;
              _auStack_208 = (undefined1  [8])(ulong)(byte)((char)pppppppuVar24 * '\x02');
              pppppppuVar22 = (ulong *******)(auStack_208 + 1);
              if (uVar44 != 0) goto joined_r0x0d662697;
            }
            else {
              uVar41 = ((ulong)pppppppuVar24 | 7) + 1;
              if (((ulong)pppppppuVar24 | 7) == 0x17) {
                uVar41 = 0x1a;
              }
              pppppppuVar22 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar41,0);
              }
              _auStack_208 = (undefined1  [8])(uVar41 | 1);
              uStack_200 = pppppppuVar24;
              pppppppuStack_1f8 = pppppppuVar22;
joined_r0x0d662697:
              pppppppuVar20 = (ulong *******)(auStack_e8 + 1);
              if (((uint)auVar14 & 1) != 0) {
                pppppppuVar20 = pppppppuStack_d8;
              }
              func_0x0eee2ee0(pppppppuVar22,pppppppuVar20,uVar44);
            }
            pppppppuStack_170 = (ulong *******)CONCAT44(pppppppuStack_170._4_4_,(int)uVar40);
            *(undefined2 *)((long)pppppppuVar22 + uVar44) = 0x2f;
            pppppppuVar20 = pppppppuStack_198;
            bVar45 = (*(byte *)(pppppppuStack_198 + 2) & 1) != 0;
            pppppppuVar24 = (ulong *******)((long)pppppppuStack_198 + 0x11);
            if (bVar45) {
              pppppppuVar24 = (ulong *******)pppppppuStack_198[4];
            }
            ppppppuVar43 = (ulong ******)(ulong)(*(byte *)(pppppppuStack_198 + 2) >> 1);
            if (bVar45) {
              ppppppuVar43 = pppppppuStack_198[3];
            }
            uVar40 = ((ulong)_auStack_208 & 0xfffffffffffffffe) - 1;
            if (((ulong)_auStack_208 & 1) == 0) {
              uVar40 = 0x16;
            }
            pppppppuVar22 = (ulong *******)(ulong)((uint)((ulong)_auStack_208 >> 1) & 0x7f);
            if (((ulong)_auStack_208 & 1) != 0) {
              pppppppuVar22 = uStack_200;
            }
            if ((ulong ******)(uVar40 - (long)pppppppuVar22) < ppppppuVar43) {
              pppppppuVar20 = (ulong *******)((long)pppppppuVar22 + (long)ppppppuVar43);
              if (-uVar40 - 10 < (long)pppppppuVar20 - uVar40) goto LAB_0d6647ae;
              pppppppuStack_190 = (ulong *******)(auStack_208 + 1);
              if (((ulong)_auStack_208 & 1) != 0) {
                pppppppuStack_190 = pppppppuStack_1f8;
              }
              uVar44 = 0xfffffffffffffff7;
              if (uVar40 < 0x7ffffffffffffff3) {
                pppppppuVar27 = (ulong *******)(uVar40 * 2);
                if ((ulong *******)(uVar40 * 2) < pppppppuVar20) {
                  pppppppuVar27 = pppppppuVar20;
                }
                uVar44 = ((ulong)pppppppuVar27 | 7) + 1;
                if (((ulong)pppppppuVar27 | 7) == 0x17) {
                  uVar44 = 0x1a;
                }
                if (pppppppuVar27 < (ulong *******)0x17) {
                  uVar44 = 0x17;
                }
              }
              pppppppuStack_148 = pppppppuVar20;
              pppppppuStack_140 = pppppppuVar24;
              pppppppuVar23 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
              if (uVar44 != 0 && pppppppuVar23 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar44,0);
              }
              if (pppppppuVar22 != (ulong *******)0x0) {
                func_0x0eee2ee0(pppppppuVar23,pppppppuStack_190,pppppppuVar22);
              }
              memcpy((undefined *)((long)pppppppuVar23 + (long)pppppppuVar22),pppppppuStack_140,
                     ppppppuVar43);
              if (uVar40 + 1 != 0x17) {
                func_0x0412a280(pppppppuStack_190,uVar40 + 1);
              }
              *(undefined1 *)((long)pppppppuVar23 + (long)pppppppuStack_148) = 0;
              pppppppuVar27 = pppppppuStack_148;
              pppppppuVar20 = pppppppuStack_198;
              pppppppuVar28 = (ulong *******)(uVar44 | 1);
            }
            else {
              pppppppuVar27 = uStack_200;
              pppppppuVar23 = pppppppuStack_1f8;
              pppppppuVar28 = (ulong *******)_auStack_208;
              if (ppppppuVar43 != (ulong ******)0x0) {
                pppppppuVar27 = pppppppuStack_1f8;
                if (((ulong)_auStack_208 & 1) == 0) {
                  pppppppuVar27 = (ulong *******)(auStack_208 + 1);
                }
                func_0x0eee2ee0((undefined *)((long)pppppppuVar27 + (long)pppppppuVar22),
                                pppppppuVar24,ppppppuVar43);
                pppppppuVar22 = (ulong *******)((long)pppppppuVar22 + (long)ppppppuVar43);
                pppppppuVar24 = pppppppuVar22;
                if (((ulong)_auStack_208 & 1) == 0) {
                  _auStack_208 = (undefined1  [8])
                                 CONCAT71(stack0xfffffffffffffdf9,(char)pppppppuVar22 * '\x02');
                  pppppppuVar24 = uStack_200;
                }
                uStack_200 = pppppppuVar24;
                *(undefined1 *)((long)pppppppuVar27 + (long)pppppppuVar22) = 0;
                pppppppuVar27 = uStack_200;
                pppppppuVar23 = pppppppuStack_1f8;
                pppppppuVar28 = (ulong *******)_auStack_208;
              }
            }
            _auStack_208 = (undefined1  [8])pppppppuVar20[5];
            uStack_200 = pppppppuStack_150;
            pppppppuStack_1f8 = (ulong *******)CONCAT44(uStack_fc,uStack_100);
            uStack_1f0 = (ulong ******)CONCAT71(uStack_1f0._1_7_,1);
            pppppppuVar24 = pppppppuVar28;
            pppppppuVar22 = pppppppuVar23;
            if (((ulong)pppppppuVar28 & 1) != 0) {
              func_0x0412e5e0(&uStack_1e8,pppppppuVar23);
              pppppppuVar24 = uStack_1e8;
              pppppppuVar27 = pppppppuStack_1e0;
              pppppppuVar22 = pppppppuStack_1d8;
            }
            pppppppuStack_1d8 = pppppppuVar22;
            pppppppuStack_1e0 = pppppppuVar27;
            uStack_1e8 = pppppppuVar24;
            func_0x0d664eb0(&uStack_b8,auStack_208);
            if (((ulong)uStack_1e8 & 1) != 0) {
              func_0x0412a280(pppppppuStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
            }
            if (((ulong)pppppppuVar28 & 1) != 0) {
              func_0x0412a280(pppppppuVar23,(ulong)pppppppuVar28 & 0xfffffffffffffffe);
            }
            uVar40 = (ulong)pppppppuStack_170 & 0xffffffff;
          }
          else {
            uVar40 = (ulong)(byte)((*(byte *)(pppppppuVar20[5] + 3) ^ 1) & (byte)uVar40);
            if ((plStack_138 != (long *)0x0) && (*(byte *)(pppppppuVar20[5] + 3) != 0)) {
              pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30)
              ;
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              uVar29 = _UNK_0129d1b1;
              auStack_168 = (undefined1  [8])0x31;
              puStack_160 = (undefined *)0x29;
              *(ulong *)((long)pppppppuVar22 + 0x19) = CONCAT17(UNK_0129d1b0,_DAT_0129d1a9);
              *(undefined8 *)((long)pppppppuVar22 + 0x21) = uVar29;
              ppppppuVar43 = (ulong ******)CONCAT71(_DAT_0129d1a9,UNK_0129d1a8);
              pppppppuVar22[2] = _DAT_0129d1a0;
              pppppppuVar22[3] = ppppppuVar43;
              uVar12 = _UNK_0129d19c;
              uVar11 = _UNK_0129d198;
              uVar31 = _UNK_0129d194;
              *(undefined4 *)pppppppuVar22 = _DAT_0129d190;
              *(undefined4 *)((long)pppppppuVar22 + 4) = uVar31;
              *(undefined4 *)(pppppppuVar22 + 1) = uVar11;
              *(undefined4 *)((long)pppppppuVar22 + 0xc) = uVar12;
              *(undefined1 *)((long)pppppppuVar22 + 0x29) = 0;
              pppppppuStack_158 = pppppppuVar22;
              if (((uint)auStack_e8 & 1) == 0) {
                pppppppuStack_1f8 = pppppppuStack_d8;
                _auStack_208 = (undefined1  [8])CONCAT44(uStack_e4,auStack_e8);
                uStack_200 = (ulong *******)CONCAT44(uStack_dc,uStack_e0);
              }
              else {
                func_0x0412e5e0(auStack_208,pppppppuStack_d8,CONCAT44(uStack_dc,uStack_e0));
              }
              if (((ulong)*pppppppuVar24 & 1) == 0) {
                pppppppuStack_1e0 = (ulong *******)pppppppuVar20[4];
                uStack_1f0 = *pppppppuVar24;
                uStack_1e8 = (ulong *******)pppppppuVar20[3];
              }
              else {
                func_0x0412e5e0(&uStack_1f0,pppppppuVar20[4],pppppppuVar20[3]);
              }
              pppppppuStack_188 = (ulong *******)0x0;
              pppppppuStack_180 = (ulong *******)0x0;
              pppppppuStack_178 = (ulong *******)0x0;
              pppppppuStack_128 = (ulong *******)&pppppppuStack_188;
              pppppppuStack_120 = (ulong *******)((ulong)pppppppuStack_120 & 0xffffffffffffff00);
              pppppppuVar24 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30)
              ;
              if (pppppppuVar24 == (ulong *******)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              pppppppuStack_178 = pppppppuVar24 + 6;
              auStack_228 = (undefined1  [8])&pppppppuStack_188;
              pppppppuStack_220 = (ulong *******)&pppppppuStack_130;
              pppppppuStack_218 = (ulong *******)&pppppppuStack_d0;
              uStack_210 = 0;
              pppppppuStack_188 = pppppppuVar24;
              pppppppuStack_180 = pppppppuVar24;
              pppppppuStack_130 = pppppppuVar24;
              if (((ulong)_auStack_208 & 1) == 0) {
                pppppppuVar24[2] = (ulong ******)pppppppuStack_1f8;
                *(undefined1 (*) [4])pppppppuVar24 = auStack_208;
                *(undefined4 *)((long)pppppppuVar24 + 4) = uStack_204;
                *(undefined4 *)(pppppppuVar24 + 1) = (undefined4)uStack_200;
                *(undefined4 *)((long)pppppppuVar24 + 0xc) = uStack_200._4_4_;
                pppppppuStack_d0 = pppppppuVar24 + 3;
                if (((ulong)uStack_1f0 & 1) != 0) goto LAB_0d662858;
LAB_0d662816:
                pppppppuStack_d0[2] = (ulong ******)pppppppuStack_1e0;
                *pppppppuStack_d0 = uStack_1f0;
                pppppppuStack_d0[1] = (ulong ******)uStack_1e8;
              }
              else {
                pppppppuStack_d0 = pppppppuVar24;
                func_0x0412e5e0(pppppppuVar24,pppppppuStack_1f8,uStack_200);
                pppppppuStack_d0 = pppppppuStack_d0 + 3;
                if (((ulong)uStack_1f0 & 1) == 0) goto LAB_0d662816;
LAB_0d662858:
                func_0x0412e5e0(pppppppuStack_d0,pppppppuStack_1e0,uStack_1e8);
              }
              pppppppuStack_180 = pppppppuStack_d0 + 3;
              uStack_68 = 0;
              plStack_60 = (long *)0x0;
              (**(code **)(*plStack_c0 + 0x88))
                        (auStack_1b8,plStack_c0,auStack_168,&pppppppuStack_188,&uStack_68);
              puVar7 = (ulong *)plStack_138[1];
              if (puVar7 < (ulong *)plStack_138[2]) {
                puVar7[2] = (ulong)pppppppuStack_1a8;
                *puVar7 = (ulong)auStack_1b8;
                puVar7[1] = (ulong)pppppppuStack_1b0;
                auStack_1b8 = (undefined1  [8])0x0;
                pppppppuStack_1b0 = (ulong *******)0x0;
                pppppppuStack_1a8 = (ulong *******)0x0;
                plStack_138[1] = (long)(puVar7 + 3);
                plVar10 = plStack_60;
              }
              else {
                lVar26 = *plStack_138;
                lVar38 = (long)puVar7 - lVar26;
                uVar40 = (lVar38 >> 3) * -0x5555555555555555 + 1;
                pppppppuStack_198 = pppppppuVar20;
                if (0xaaaaaaaaaaaaaaa < uVar40) goto LAB_0d6647bd;
                lVar33 = plStack_138[2] - lVar26;
                lVar39 = lVar33 >> 3;
                uVar44 = lVar39 * 0x5555555555555556;
                if (uVar40 < uVar44) {
                  uVar40 = uVar44;
                }
                if (0x555555555555554 < (ulong)(lVar39 * -0x5555555555555555)) {
                  uVar40 = 0xaaaaaaaaaaaaaaa;
                }
                if (0xaaaaaaaaaaaaaaa < uVar40) goto LAB_0d6647b8;
                lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar40 * 0x18);
                if (lVar39 == 0) {
                  func_0x0eec74c0(uVar40 * 0x18,0);
                }
                *(ulong ********)(lVar39 + 0x10 + lVar38) = pppppppuStack_1a8;
                *(ulong *)(lVar39 + lVar38) = (ulong)auStack_1b8;
                ((ulong *)(lVar39 + lVar38))[1] = (ulong)pppppppuStack_1b0;
                auStack_1b8 = (undefined1  [8])0x0;
                pppppppuStack_1b0 = (ulong *******)0x0;
                pppppppuStack_1a8 = (ulong *******)0x0;
                lVar4 = lVar39 + 0x18 + lVar38;
                memcpy(lVar39,lVar26,lVar38);
                plVar10 = plStack_138;
                *plStack_138 = lVar39;
                plStack_138[1] = lVar4;
                plStack_138[2] = lVar39 + uVar40 * 0x18;
                if (lVar26 == 0) {
                  plStack_138[1] = lVar4;
                  pppppppuVar20 = pppppppuStack_198;
                  plVar10 = plStack_60;
                }
                else {
                  func_0x0412a280(lVar26,lVar33);
                  pppppppuVar20 = pppppppuStack_198;
                  plVar10[1] = lVar4;
                  plVar10 = plStack_60;
                  if (((ulong)auStack_1b8 & 1) != 0) {
                    func_0x0412a280(pppppppuStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
                    plVar10 = plStack_60;
                  }
                }
              }
              plStack_60 = plVar10;
              if (plVar10 != (long *)0x0) {
                LOCK();
                plVar1 = plVar10 + 1;
                lVar26 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar26 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                  func_0x0412c2d0(plVar10);
                }
              }
              pppppppuVar22 = pppppppuStack_188;
              pppppppuVar24 = pppppppuStack_180;
              if (pppppppuStack_188 != (ulong *******)0x0) {
                for (; pppppppuVar22 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
                  if (((ulong)pppppppuVar24[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                pppppppuStack_180 = pppppppuVar22;
                func_0x0412a280(pppppppuStack_188,(long)pppppppuStack_178 - (long)pppppppuStack_188)
                ;
              }
              if (((ulong)uStack_1f0 & 1) != 0) {
                func_0x0412a280(pppppppuStack_1e0,(ulong)uStack_1f0 & 0xfffffffffffffffe);
              }
              if (((ulong)_auStack_208 & 1) != 0) {
                func_0x0412a280(pppppppuStack_1f8,(ulong)_auStack_208 & 0xfffffffffffffffe);
              }
              if (((ulong)auStack_168 & 1) != 0) {
                func_0x0412a280(pppppppuStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
              }
              uVar40 = 0;
            }
          }
          uVar31 = (undefined4)uVar40;
        }
      }
      else {
        cVar17 = func_0x04863800(CONCAT44(uStack_fc,uStack_100));
        if ((cVar17 == '\x06') && (*(long *)(CONCAT44(uStack_104,uStack_108) + 0x38) != 0)) {
          uVar29 = CONCAT44(uStack_fc,uStack_100);
          func_0x04865530(&pppppppuStack_188,uVar29);
          func_0x048655b0(&pppppppuStack_128,uVar29);
          pppppppuVar20 = (ulong *******)0x0;
          pppppppuStack_170 = (ulong *******)CONCAT44(pppppppuStack_170._4_4_,uVar31);
          while( true ) {
            uVar31 = (undefined4)uVar40;
            cVar17 = func_0x04862c80(&pppppppuStack_188,&pppppppuStack_128);
            if (cVar17 != '\0') break;
            pppppppuStack_198 = pppppppuVar20;
            uStack_200 = (ulong *******)func_0x04862b80(&pppppppuStack_188);
            auVar14 = auStack_e8;
            pppppppuStack_1f8 = (ulong *******)CONCAT44(uStack_fc,uStack_100);
            _auStack_208 = *(undefined1 (*) [8])(CONCAT44(uStack_104,uStack_108) + 0x38);
            uStack_1f0 = (ulong ******)CONCAT71(uStack_1f0._1_7_,1);
            if (((uint)auStack_e8 & 1) == 0) {
              uVar40 = (ulong)(auStack_e8[0] >> 1);
            }
            else {
              uVar40 = CONCAT44(uStack_dc,uStack_e0);
            }
            pppppppuVar24 = (ulong *******)(uVar40 + 1);
            if ((ulong *******)0xfffffffffffffff7 < pppppppuVar24) goto LAB_0d6647a4;
            if (pppppppuVar24 < (ulong *******)0x17) {
              pppppppuStack_220 = (ulong *******)0x0;
              pppppppuStack_218 = (ulong *******)0x0;
              auStack_228._1_7_ = 0;
              auStack_228[0] = (char)pppppppuVar24 * '\x02';
              pppppppuVar22 = (ulong *******)(auStack_228 + 1);
              if (uVar40 != 0) goto joined_r0x0d662eae;
            }
            else {
              uVar44 = ((ulong)pppppppuVar24 | 7) + 1;
              if (((ulong)pppppppuVar24 | 7) == 0x17) {
                uVar44 = 0x1a;
              }
              pppppppuVar22 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar44,0);
              }
              auStack_228 = (undefined1  [8])(uVar44 | 1);
              pppppppuStack_220 = pppppppuVar24;
              pppppppuStack_218 = pppppppuVar22;
joined_r0x0d662eae:
              pppppppuVar24 = (ulong *******)(auStack_e8 + 1);
              if (((uint)auVar14 & 1) != 0) {
                pppppppuVar24 = pppppppuStack_d8;
              }
              func_0x0eee2ee0(pppppppuVar22,pppppppuVar24,uVar40);
            }
            *(undefined2 *)((long)pppppppuVar22 + uVar40) = 0x2f;
            pppppppuVar24 = pppppppuStack_198;
            if ((ulong)pppppppuStack_198 >> 0x20 == 0) {
              puVar25 = (undefined2 *)
                        func_0x04136630(auStack_168,(ulong)pppppppuStack_198 & 0xffffffff);
            }
            else {
              puVar25 = (undefined2 *)auStack_168;
              pppppppuVar22 = pppppppuStack_198;
              if (0x9502f8 < (ulong)pppppppuStack_198 >> 10) {
                puVar25 = (undefined2 *)
                          func_0x04136630(auStack_168,(ulong)pppppppuStack_198 / 10000000000);
                pppppppuVar22 = pppppppuVar24 + ((ulong)pppppppuVar20 / 10000000000) * -1250000000;
              }
              *puVar25 = *(undefined2 *)(&UNK_014edb10 + ((ulong)pppppppuVar22 / 100000000) * 2);
              uVar40 = (ulong)pppppppuVar22 % 100000000;
              puVar25[1] = *(undefined2 *)(&UNK_014edb10 + (uVar40 / 1000000) * 2);
              uVar37 = (int)uVar40 + (int)(uVar40 / 1000000) * -1000000;
              uVar40 = (ulong)uVar37 * 0x68db9;
              puVar25[2] = *(undefined2 *)(&UNK_014edb10 + (uVar40 >> 0x20) * 2);
              iVar19 = uVar37 + (int)(uVar40 >> 0x20) * -10000;
              uVar37 = (uint)(iVar19 * 0x147b) >> 0x13;
              puVar25[3] = *(undefined2 *)(&UNK_014edb10 + (ulong)uVar37 * 2);
              puVar25[4] = *(undefined2 *)
                            (&UNK_014edb10 + (ulong)(iVar19 + uVar37 * -100 & 0xffff) * 2);
              puVar25 = puVar25 + 5;
            }
            pppppppuVar20 = (ulong *******)((long)puVar25 - (long)auStack_168);
            if ((ulong *******)0xfffffffffffffff7 < pppppppuVar20) goto LAB_0d6647a9;
            if (pppppppuVar20 < (ulong *******)0x17) {
              auStack_1b8[0] = (char)pppppppuVar20 * '\x02';
              pppppppuVar22 = (ulong *******)(auStack_1b8 + 1);
              if (puVar25 != (undefined2 *)auStack_168) goto LAB_0d66300e;
            }
            else {
              uVar40 = ((ulong)pppppppuVar20 | 7) + 1;
              if (((ulong)pppppppuVar20 | 7) == 0x17) {
                uVar40 = 0x1a;
              }
              pppppppuVar22 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar40);
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar40,0);
              }
              auStack_1b8 = (undefined1  [8])(uVar40 | 1);
              pppppppuStack_1b0 = pppppppuVar20;
              pppppppuStack_1a8 = pppppppuVar22;
LAB_0d66300e:
              memcpy(pppppppuVar22,auStack_168,pppppppuVar20);
            }
            pppppppuVar27 = pppppppuStack_1a8;
            *(undefined1 *)((long)pppppppuVar22 + (long)pppppppuVar20) = 0;
            uVar44 = (ulong)auStack_1b8 & 0xff;
            pppppppuVar22 = pppppppuStack_1a8;
            pppppppuVar20 = pppppppuStack_1b0;
            if (((ulong)auStack_1b8 & 1) == 0) {
              pppppppuVar22 = (ulong *******)(auStack_1b8 + 1);
              pppppppuVar20 = (ulong *******)(ulong)(auStack_1b8[0] >> 1);
            }
            uVar40 = ((ulong)auStack_228 & 0xfffffffffffffffe) - 1;
            if (((ulong)auStack_228 & 1) == 0) {
              uVar40 = 0x16;
            }
            if (((ulong)auStack_228 & 1) == 0) {
              pppppppuVar23 = (ulong *******)(ulong)((uint)((ulong)auStack_228 >> 1) & 0x7f);
              if (pppppppuVar20 <= (ulong *******)(uVar40 - (long)pppppppuVar23)) goto LAB_0d663078;
LAB_0d6630e5:
              pppppppuStack_148 = pppppppuStack_1a8;
              pppppppuVar28 = (ulong *******)((long)pppppppuVar20 + (long)pppppppuVar23);
              if (-uVar40 - 10 < (long)pppppppuVar28 - uVar40) goto LAB_0d6647b3;
              pppppppuStack_150 =
                   (ulong *******)CONCAT44(pppppppuStack_150._4_4_,(uint)auStack_1b8[0]);
              pppppppuStack_190 = (ulong *******)(auStack_228 + 1);
              if (((ulong)auStack_228 & 1) != 0) {
                pppppppuStack_190 = pppppppuStack_218;
              }
              uVar44 = 0xfffffffffffffff7;
              if (uVar40 < 0x7ffffffffffffff3) {
                pppppppuVar24 = (ulong *******)(uVar40 * 2);
                if ((ulong *******)(uVar40 * 2) < pppppppuVar28) {
                  pppppppuVar24 = pppppppuVar28;
                }
                uVar44 = ((ulong)pppppppuVar24 | 7) + 1;
                if (((ulong)pppppppuVar24 | 7) == 0x17) {
                  uVar44 = 0x1a;
                }
                if (pppppppuVar24 < (ulong *******)0x17) {
                  uVar44 = 0x17;
                }
              }
              pppppppuStack_140 = pppppppuVar22;
              pppppppuVar22 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
              if (uVar44 != 0 && pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar44,0);
              }
              if (pppppppuVar23 != (ulong *******)0x0) {
                func_0x0eee2ee0(pppppppuVar22,pppppppuStack_190,pppppppuVar23);
              }
              memcpy((undefined *)((long)pppppppuVar22 + (long)pppppppuVar23),pppppppuStack_140,
                     pppppppuVar20);
              if (uVar40 + 1 != 0x17) {
                func_0x0412a280(pppppppuStack_190,uVar40 + 1);
              }
              auStack_228 = (undefined1  [8])(uVar44 | 1);
              *(undefined1 *)((long)pppppppuVar22 + (long)pppppppuVar28) = 0;
              pppppppuVar24 = pppppppuStack_198;
              pppppppuVar27 = pppppppuStack_148;
              pppppppuStack_220 = pppppppuVar28;
              pppppppuStack_218 = pppppppuVar22;
LAB_0d663228:
              uVar44 = (ulong)pppppppuStack_150 & 0xffffffff;
            }
            else {
              pppppppuVar23 = pppppppuStack_220;
              if ((ulong *******)(uVar40 - (long)pppppppuStack_220) < pppppppuVar20)
              goto LAB_0d6630e5;
LAB_0d663078:
              if (pppppppuVar20 != (ulong *******)0x0) {
                pppppppuStack_150 =
                     (ulong *******)CONCAT44(pppppppuStack_150._4_4_,(uint)auStack_1b8[0]);
                pppppppuVar28 = (ulong *******)(auStack_228 + 1);
                if (((ulong)auStack_228 & 1) != 0) {
                  pppppppuVar28 = pppppppuStack_218;
                }
                func_0x0eee2ee0((undefined *)((long)pppppppuVar28 + (long)pppppppuVar23),
                                pppppppuVar22,pppppppuVar20);
                pppppppuVar23 = (ulong *******)((long)pppppppuVar23 + (long)pppppppuVar20);
                pppppppuVar20 = pppppppuVar23;
                if (((ulong)auStack_228 & 1) == 0) {
                  auStack_228[0] = (char)pppppppuVar23 * '\x02';
                  pppppppuVar20 = pppppppuStack_220;
                }
                pppppppuStack_220 = pppppppuVar20;
                *(undefined1 *)((long)pppppppuVar28 + (long)pppppppuVar23) = 0;
                goto LAB_0d663228;
              }
            }
            pppppppuStack_1d8 = pppppppuStack_218;
            uStack_1e8 = (ulong *******)auStack_228;
            pppppppuStack_1e0 = pppppppuStack_220;
            auStack_228 = (undefined1  [8])0x0;
            pppppppuStack_220 = (ulong *******)0x0;
            pppppppuStack_218 = (ulong *******)0x0;
            func_0x0d664eb0(&uStack_b8,auStack_208);
            uVar40 = (ulong)pppppppuStack_170 & 0xffffffff;
            if (((ulong)uStack_1e8 & 1) != 0) {
              func_0x0412a280(pppppppuStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
            }
            if ((uVar44 & 1) != 0) {
              func_0x0412a280(pppppppuVar27,(ulong)auStack_1b8 & 0xfffffffffffffffe);
            }
            if (((ulong)auStack_228 & 1) != 0) {
              func_0x0412a280(pppppppuStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
            }
            pppppppuVar20 = (ulong *******)((long)pppppppuVar24 + 1);
            func_0x04862ba0(&pppppppuStack_188);
          }
          func_0x04862b40(&pppppppuStack_128);
          func_0x04862b40(&pppppppuStack_188);
        }
      }
      pppppppuStack_198 = (ulong *******)CONCAT44(pppppppuStack_198._4_4_,uVar31);
      lVar39 = CONCAT44(uStack_104,uStack_108);
      lVar26 = *(long *)(lVar39 + 0x48);
      lVar38 = *(long *)(lVar39 + 0x50);
      bVar15 = 0;
      bVar30 = 0;
      if (lVar26 == lVar38) {
        pbVar32 = *(byte **)(lVar39 + 0x60);
        pbVar36 = *(byte **)(lVar39 + 0x68);
        if (pbVar32 != pbVar36) {
LAB_0d6635a0:
          do {
            bVar18 = func_0x04863800(CONCAT44(uStack_fc,uStack_100));
            bVar6 = *pbVar32;
            if ((bVar18 == 2) && ((bVar6 & 0xfd) == 1)) {
LAB_0d6635c0:
              bVar45 = ((uint)auStack_e8 & 1) == 0;
              pppppppuVar20 = pppppppuStack_d8;
              if (bVar45) {
                pppppppuVar20 = (ulong *******)(auStack_e8 + 1);
              }
              pppppppuVar24 = (ulong *******)(ulong)(auStack_e8[0] >> 1);
              if (!bVar45) {
                pppppppuVar24 = (ulong *******)CONCAT44(uStack_dc,uStack_e0);
              }
              pppppppuVar22 = pppppppuVar24;
              if (pppppppuVar24 == (ulong *******)0x0) {
                pppppppuVar27 = (ulong *******)0xffffffffffffffff;
              }
              else {
                do {
                  if (pppppppuVar22 == (ulong *******)0x0) {
                    pppppppuVar27 = (ulong *******)0xffffffffffffffff;
                    if (pppppppuVar24 != (ulong *******)0xffffffffffffffff) {
                      pppppppuVar27 = pppppppuVar24;
                    }
                    goto joined_r0x0d663682;
                  }
                  pppppppuVar27 = (ulong *******)((long)pppppppuVar22 + -1);
                  pcVar5 = (undefined *)((long)pppppppuVar20 + -1) + (long)pppppppuVar22;
                  pppppppuVar22 = pppppppuVar27;
                } while (*pcVar5 != '/');
              }
              if (pppppppuVar24 < pppppppuVar27) {
                pppppppuVar27 = pppppppuVar24;
              }
joined_r0x0d663682:
              if ((ulong *******)0xfffffffffffffff7 < pppppppuVar27) {
                func_0x04882e30();
                goto LAB_0d664786;
              }
              if (pppppppuVar27 < (ulong *******)0x17) {
                auStack_228[0] = (char)pppppppuVar27 * '\x02';
                pppppppuVar24 = (ulong *******)(auStack_228 + 1);
                if (pppppppuVar27 != (ulong *******)0x0) goto LAB_0d6636ff;
              }
              else {
                uVar40 = ((ulong)pppppppuVar27 | 7) + 1;
                if (((ulong)pppppppuVar27 | 7) == 0x17) {
                  uVar40 = 0x1a;
                }
                pppppppuVar24 =
                     (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar40);
                if (pppppppuVar24 == (ulong *******)0x0) {
                  func_0x0eec74c0(uVar40,0);
                }
                auStack_228 = (undefined1  [8])(uVar40 | 1);
                pppppppuStack_220 = pppppppuVar27;
                pppppppuStack_218 = pppppppuVar24;
LAB_0d6636ff:
                func_0x0eee2ee0(pppppppuVar24,pppppppuVar20,pppppppuVar27);
              }
              auVar35 = auStack_228;
              *(undefined1 *)((long)pppppppuVar24 + (long)pppppppuVar27) = 0;
              _auStack_208 = *(undefined1 (*) [8])(pbVar32 + 8);
              uStack_200 = (ulong *******)
                           CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,uStack_f8));
              uStack_1f0 = (ulong ******)((ulong)uStack_1f0 & 0xffffffffffffff00);
              pppppppuStack_1f8 = uStack_200;
              if (((ulong)auStack_228 & 1) == 0) {
                pppppppuStack_1d8 = pppppppuStack_218;
                uStack_1e8 = (ulong *******)auStack_228;
                pppppppuStack_1e0 = pppppppuStack_220;
              }
              else {
                func_0x0412e5e0(&uStack_1e8,pppppppuStack_218,pppppppuStack_220);
              }
              func_0x0d664eb0(&uStack_b8,auStack_208);
              if (((ulong)uStack_1e8 & 1) != 0) {
                func_0x0412a280(pppppppuStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
              }
              if (((ulong)auVar35 & 1) != 0) {
                func_0x0412a280(pppppppuStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
              }
              bVar15 = 1;
            }
            else if ((bVar6 == bVar18) || (bVar15 = bVar30, (bVar6 & 0xfe) == 2 && bVar18 == 1))
            goto LAB_0d6635c0;
            pbVar32 = pbVar32 + 0x18;
            bVar30 = bVar15;
          } while (pbVar32 != pbVar36);
          lVar39 = CONCAT44(uStack_104,uStack_108);
        }
      }
      else {
        do {
          bVar15 = bVar30;
          iVar19 = func_0x04863810(lVar26,CONCAT44(uStack_fc,uStack_100));
          if (iVar19 == 0) {
            bVar45 = ((uint)auStack_e8 & 1) == 0;
            pppppppuVar20 = pppppppuStack_d8;
            if (bVar45) {
              pppppppuVar20 = (ulong *******)(auStack_e8 + 1);
            }
            pppppppuVar24 = (ulong *******)(ulong)(auStack_e8[0] >> 1);
            if (!bVar45) {
              pppppppuVar24 = (ulong *******)CONCAT44(uStack_dc,uStack_e0);
            }
            pppppppuVar22 = pppppppuVar24;
            if (pppppppuVar24 == (ulong *******)0x0) {
              pppppppuVar27 = (ulong *******)0xffffffffffffffff;
            }
            else {
              do {
                if (pppppppuVar22 == (ulong *******)0x0) {
                  pppppppuVar27 = (ulong *******)0xffffffffffffffff;
                  if (pppppppuVar24 != (ulong *******)0xffffffffffffffff) {
                    pppppppuVar27 = pppppppuVar24;
                  }
                  goto joined_r0x0d663431;
                }
                pppppppuVar27 = (ulong *******)((long)pppppppuVar22 + -1);
                pcVar5 = (undefined *)((long)pppppppuVar20 + -1) + (long)pppppppuVar22;
                pppppppuVar22 = pppppppuVar27;
              } while (*pcVar5 != '/');
            }
            if (pppppppuVar24 < pppppppuVar27) {
              pppppppuVar27 = pppppppuVar24;
            }
joined_r0x0d663431:
            if ((ulong *******)0xfffffffffffffff7 < pppppppuVar27) goto LAB_0d66478b;
            if (pppppppuVar27 < (ulong *******)0x17) {
              auStack_228[0] = (char)pppppppuVar27 * '\x02';
              pppppppuVar24 = (ulong *******)(auStack_228 + 1);
              if (pppppppuVar27 != (ulong *******)0x0) goto LAB_0d66349a;
            }
            else {
              uVar40 = ((ulong)pppppppuVar27 | 7) + 1;
              if (((ulong)pppppppuVar27 | 7) == 0x17) {
                uVar40 = 0x1a;
              }
              pppppppuVar24 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar40);
              if (pppppppuVar24 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar40,0);
              }
              auStack_228 = (undefined1  [8])(uVar40 | 1);
              pppppppuStack_220 = pppppppuVar27;
              pppppppuStack_218 = pppppppuVar24;
LAB_0d66349a:
              func_0x0eee2ee0(pppppppuVar24,pppppppuVar20,pppppppuVar27);
            }
            auVar35 = auStack_228;
            *(undefined1 *)((long)pppppppuVar24 + (long)pppppppuVar27) = 0;
            _auStack_208 = *(undefined1 (*) [8])(lVar26 + 0x10);
            uStack_200 = (ulong *******)
                         CONCAT35((undefined3)uStack_f3,CONCAT41(uStack_f7,uStack_f8));
            uStack_1f0 = (ulong ******)((ulong)uStack_1f0 & 0xffffffffffffff00);
            pppppppuStack_1f8 = uStack_200;
            if (((ulong)auStack_228 & 1) == 0) {
              pppppppuStack_1d8 = pppppppuStack_218;
              uStack_1e8 = (ulong *******)auStack_228;
              pppppppuStack_1e0 = pppppppuStack_220;
            }
            else {
              func_0x0412e5e0(&uStack_1e8,pppppppuStack_218,pppppppuStack_220);
            }
            func_0x0d664eb0(&uStack_b8,auStack_208);
            if (((ulong)uStack_1e8 & 1) != 0) {
              func_0x0412a280(pppppppuStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
            }
            if (((ulong)auVar35 & 1) != 0) {
              func_0x0412a280(pppppppuStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
            }
            bVar15 = 1;
          }
          lVar26 = lVar26 + 0x20;
          bVar30 = bVar15;
        } while (lVar26 != lVar38);
        lVar39 = CONCAT44(uStack_104,uStack_108);
        pbVar32 = *(byte **)(lVar39 + 0x60);
        pbVar36 = *(byte **)(lVar39 + 0x68);
        if (pbVar32 != pbVar36) goto LAB_0d6635a0;
      }
      bVar30 = *(byte *)(lVar39 + 0x19) ^ 1;
      uVar40 = (ulong)CONCAT31((int3)((ulong)pppppppuStack_198 >> 8),
                               (byte)pppppppuStack_198 & (bVar30 | bVar15));
      if ((plStack_138 != (long *)0x0) && ((bVar30 & 1) == 0 && bVar15 == 0)) {
        auStack_1b8 = (undefined1  [8])0x0;
        pppppppuStack_1b0 = (ulong *******)0x0;
        pppppppuStack_1a8 = (ulong *******)0x0;
        pppppppuVar20 = *(ulong ********)(lVar39 + 0x48);
        pppppppuStack_150 = *(ulong ********)(lVar39 + 0x50);
        pppppppuVar24 = (ulong *******)&UNK_01254d89;
        if (pppppppuVar20 != pppppppuStack_150) {
          puVar34 = &UNK_01254d89;
          do {
            func_0x04867c60(auStack_208);
            func_0x04867c90(auStack_228,auStack_208,pppppppuVar20);
            pppppppuVar24 = pppppppuStack_220;
            if (((ulong)auStack_228 & 1) == 0) {
              pppppppuVar24 = (ulong *******)((ulong)auStack_228 >> 1 & 0x7f);
            }
            pppppppuVar24 = (ulong *******)((long)pppppppuVar24 + -1);
            pppppppuVar22 = pppppppuStack_218;
            pppppppuVar27 = pppppppuVar24;
            if (((ulong)auStack_228 & 1) == 0) {
              auStack_228[0] = (char)pppppppuVar24 * '\x02';
              pppppppuVar22 = (ulong *******)(auStack_228 + 1);
              pppppppuVar27 = pppppppuStack_220;
            }
            pppppppuStack_220 = pppppppuVar27;
            pppppppuStack_198 = pppppppuVar20;
            *(undefined1 *)((long)pppppppuVar22 + (long)pppppppuVar24) = 0;
            lVar26 = func_0x0eee2e90(puVar34);
            pppppppuVar20 = pppppppuStack_220;
            if (((ulong)auStack_228 & 1) == 0) {
              pppppppuVar20 = (ulong *******)(ulong)(auStack_228[0] >> 1);
            }
            puVar3 = (undefined *)((long)pppppppuVar20 + lVar26);
            if ((undefined *)0xfffffffffffffff7 < puVar3) goto LAB_0d664786;
            pppppppuStack_170 =
                 (ulong *******)CONCAT44(pppppppuStack_170._4_4_,(uint)auStack_228[0]);
            if (puVar3 < (undefined *)0x17) {
              puStack_160 = (undefined *)0x0;
              pppppppuStack_158 = (ulong *******)0x0;
              auStack_168._1_7_ = 0;
              auStack_168[0] = (char)puVar3 * '\x02';
            }
            else {
              uVar40 = ((ulong)puVar3 | 7) + 1;
              if (((ulong)puVar3 | 7) == 0x17) {
                uVar40 = 0x1a;
              }
              pppppppuVar24 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar40);
              if (pppppppuVar24 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar40,0);
              }
              auStack_168 = (undefined1  [8])(uVar40 | 1);
              puStack_160 = puVar3;
              pppppppuStack_158 = pppppppuVar24;
            }
            pppppppuVar24 = pppppppuStack_158;
            if (((ulong)auStack_168 & 1) == 0) {
              pppppppuVar24 = (ulong *******)(auStack_168 + 1);
            }
            if (lVar26 != 0) {
              memcpy(pppppppuVar24,puVar34,lVar26);
            }
            if (pppppppuVar20 != (ulong *******)0x0) {
              pppppppuVar22 = (ulong *******)(auStack_228 + 1);
              if (((ulong)pppppppuStack_170 & 1) != 0) {
                pppppppuVar22 = pppppppuStack_218;
              }
              func_0x0eee2ee0((undefined *)((long)pppppppuVar24 + lVar26),pppppppuVar22,
                              pppppppuVar20);
            }
            auVar13 = auStack_168;
            ((undefined *)((long)pppppppuVar24 + lVar26))[(long)pppppppuVar20] = 0;
            pppppppuVar24 = pppppppuStack_158;
            auVar35 = (undefined1  [8])((ulong)auStack_168 & 0xff);
            pppppppuVar20 = pppppppuStack_158;
            puVar34 = puStack_160;
            if (((ulong)auStack_168 & 1) == 0) {
              pppppppuVar20 = (ulong *******)(auStack_168 + 1);
              puVar34 = (undefined *)(ulong)(auStack_168[0] >> 1);
            }
            uVar40 = ((ulong)auStack_1b8 & 0xfffffffffffffffe) - 1;
            if (((ulong)auStack_1b8 & 1) == 0) {
              uVar40 = 0x16;
            }
            if (((ulong)auStack_1b8 & 1) == 0) {
              pppppppuVar22 = (ulong *******)(ulong)((uint)((ulong)auStack_1b8 >> 1) & 0x7f);
              if (puVar34 <= (undefined *)(uVar40 - (long)pppppppuVar22)) goto LAB_0d663a66;
LAB_0d663ad5:
              pppppppuStack_190 = pppppppuStack_158;
              pppppppuVar24 = (ulong *******)((long)pppppppuVar22 + (long)puVar34);
              if (-uVar40 - 10 < (long)pppppppuVar24 - uVar40) goto LAB_0d664795;
              pppppppuStack_170 = (ulong *******)(auStack_1b8 + 1);
              if (((ulong)auStack_1b8 & 1) != 0) {
                pppppppuStack_170 = pppppppuStack_1a8;
              }
              uVar44 = 0xfffffffffffffff7;
              if (uVar40 < 0x7ffffffffffffff3) {
                pppppppuVar27 = (ulong *******)(uVar40 * 2);
                if ((ulong *******)(uVar40 * 2) < pppppppuVar24) {
                  pppppppuVar27 = pppppppuVar24;
                }
                uVar44 = 0x1a;
                if (((ulong)pppppppuVar27 | 7) != 0x17) {
                  uVar44 = ((ulong)pppppppuVar27 | 7) + 1;
                }
                if (pppppppuVar27 < (ulong *******)0x17) {
                  uVar44 = 0x17;
                }
              }
              pppppppuStack_148 =
                   (ulong *******)CONCAT44(pppppppuStack_148._4_4_,(uint)auStack_168[0]);
              pppppppuStack_140 = pppppppuVar24;
              pppppppuVar24 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
              if (uVar44 != 0 && pppppppuVar24 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar44,0);
              }
              if (pppppppuVar22 != (ulong *******)0x0) {
                func_0x0eee2ee0(pppppppuVar24,pppppppuStack_170,pppppppuVar22);
              }
              memcpy((undefined *)((long)pppppppuVar24 + (long)pppppppuVar22),pppppppuVar20,puVar34)
              ;
              if (uVar40 + 1 != 0x17) {
                func_0x0412a280(pppppppuStack_170,uVar40 + 1);
              }
              auStack_1b8 = (undefined1  [8])(uVar44 | 1);
              *(undefined1 *)((long)pppppppuVar24 + (long)pppppppuStack_140) = 0;
              auVar35 = (undefined1  [8])((ulong)pppppppuStack_148 & 0xffffffff);
              pppppppuStack_1b0 = pppppppuStack_140;
              pppppppuStack_1a8 = pppppppuVar24;
              pppppppuVar24 = pppppppuStack_190;
            }
            else {
              pppppppuVar22 = pppppppuStack_1b0;
              if ((undefined *)(uVar40 - (long)pppppppuStack_1b0) < puVar34) goto LAB_0d663ad5;
LAB_0d663a66:
              if (puVar34 != (undefined *)0x0) {
                pppppppuVar27 = (ulong *******)(auStack_1b8 + 1);
                if (((ulong)auStack_1b8 & 1) != 0) {
                  pppppppuVar27 = pppppppuStack_1a8;
                }
                func_0x0eee2ee0((undefined *)((long)pppppppuVar27 + (long)pppppppuVar22),
                                pppppppuVar20,puVar34);
                pppppppuVar22 = (ulong *******)((long)pppppppuVar22 + (long)puVar34);
                auVar35 = auVar13;
                if (((ulong)auStack_1b8 & 1) == 0) {
                  auStack_1b8[0] = (char)pppppppuVar22 * '\x02';
                  *(undefined1 *)((long)pppppppuVar27 + (long)pppppppuVar22) = 0;
                }
                else {
                  pppppppuStack_1b0 = pppppppuVar22;
                  *(undefined1 *)((long)pppppppuVar27 + (long)pppppppuVar22) = 0;
                }
              }
            }
            pppppppuVar20 = pppppppuStack_198;
            if (((ulong)auVar35 & 1) != 0) {
              func_0x0412a280(pppppppuVar24,(ulong)auStack_168 & 0xfffffffffffffffe);
              pppppppuVar20 = pppppppuStack_198;
            }
            pppppppuStack_198 = pppppppuVar20;
            pppppppuVar24 = pppppppuStack_40;
            if (((ulong)auStack_228 & 1) != 0) {
              func_0x0412a280(pppppppuStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
              pppppppuVar24 = pppppppuStack_40;
            }
            _auStack_208 = (undefined1  [8])pppppppuVar24;
            pppppppuStack_40 = (ulong *******)_auStack_208;
            if (((ulong)uStack_200 & 1) != 0) {
              func_0x0412a280(uStack_1f0,(ulong)uStack_200 & 0xfffffffffffffffe);
            }
            func_0x04867c50(auStack_208);
            pppppppuVar20 = (ulong *******)((long)pppppppuVar20 + 0x20);
            puVar34 = &UNK_012a0ff5;
          } while (pppppppuVar20 != pppppppuStack_150);
          lVar39 = CONCAT44(uStack_104,uStack_108);
          pppppppuVar24 = (ulong *******)&UNK_012a0ff5;
        }
        pppppppuVar20 = *(ulong ********)(lVar39 + 0x60);
        pppppppuStack_148 = *(ulong ********)(lVar39 + 0x68);
        if (pppppppuVar20 != pppppppuStack_148) {
          do {
            uVar16 = *(undefined1 *)pppppppuVar20;
            pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
            if (pppppppuVar22 == (ulong *******)0x0) {
              func_0x0eec74c0(1,0);
            }
            *(undefined1 *)pppppppuVar22 = uVar16;
            func_0x0d6617c0(auStack_228,pppppppuVar22,(undefined *)((long)pppppppuVar22 + 1));
            pppppppuStack_198 = pppppppuVar24;
            pppppppuStack_150 = pppppppuVar20;
            uVar40 = func_0x0eee2e90(pppppppuVar24);
            uVar44 = ((ulong)auStack_228 & 0xfffffffffffffffe) - 1;
            pppppppuVar20 = pppppppuStack_220;
            if (((ulong)auStack_228 & 1) == 0) {
              uVar44 = 0x16;
              pppppppuVar20 = (ulong *******)((ulong)auStack_228 >> 1 & 0x7f);
            }
            pppppppuStack_170 = pppppppuVar22;
            if (uVar44 - (long)pppppppuVar20 < uVar40) {
              pppppppuVar24 = (ulong *******)(uVar40 + (long)pppppppuVar20);
              if (-uVar44 - 10 < (long)pppppppuVar24 - uVar44) goto LAB_0d66479a;
              pppppppuStack_190 = (ulong *******)(auStack_228 + 1);
              if (((ulong)auStack_228 & 1) != 0) {
                pppppppuStack_190 = pppppppuStack_218;
              }
              uVar41 = 0xfffffffffffffff7;
              if (uVar44 < 0x7ffffffffffffff3) {
                pppppppuVar22 = (ulong *******)(uVar44 * 2);
                if ((ulong *******)(uVar44 * 2) < pppppppuVar24) {
                  pppppppuVar22 = pppppppuVar24;
                }
                uVar41 = 0x1a;
                if (((ulong)pppppppuVar22 | 7) != 0x17) {
                  uVar41 = ((ulong)pppppppuVar22 | 7) + 1;
                }
                if (pppppppuVar22 < (ulong *******)0x17) {
                  uVar41 = 0x17;
                }
              }
              pppppppuVar27 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
              if (uVar41 != 0 && pppppppuVar27 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar41,0);
              }
              memcpy(pppppppuVar27,pppppppuStack_198,uVar40);
              if (pppppppuVar20 != (ulong *******)0x0) {
                func_0x0eee2ee0((undefined *)((long)pppppppuVar27 + uVar40),pppppppuStack_190,
                                pppppppuVar20);
              }
              if (uVar44 + 1 != 0x17) {
                func_0x0412a280(pppppppuStack_190,uVar44 + 1);
              }
              auStack_228 = (undefined1  [8])(uVar41 | 1);
              *(undefined1 *)((long)pppppppuVar27 + (long)pppppppuVar24) = 0;
              pppppppuVar22 = pppppppuStack_170;
              pppppppuStack_220 = pppppppuVar24;
              pppppppuStack_218 = pppppppuVar27;
            }
            else if (uVar40 != 0) {
              pppppppuVar24 = (ulong *******)(auStack_228 + 1);
              if (((ulong)auStack_228 & 1) != 0) {
                pppppppuVar24 = pppppppuStack_218;
              }
              pppppppuVar27 = pppppppuStack_198;
              if (pppppppuVar20 != (ulong *******)0x0) {
                uVar44 = uVar40;
                if ((ulong *******)((long)pppppppuVar24 + (long)pppppppuVar20) <= pppppppuStack_198)
                {
                  uVar44 = 0;
                }
                if (pppppppuStack_198 < pppppppuVar24) {
                  uVar44 = 0;
                }
                pppppppuVar27 = (ulong *******)((long)pppppppuStack_198 + uVar44);
                func_0x0eee2ee0((undefined *)((long)pppppppuVar24 + uVar40),pppppppuVar24,
                                pppppppuVar20);
              }
              memcpy(pppppppuVar24,pppppppuVar27,uVar40);
              pppppppuVar20 = (ulong *******)((long)pppppppuVar20 + uVar40);
              pppppppuVar27 = pppppppuVar20;
              if (((ulong)auStack_228 & 1) == 0) {
                auStack_228[0] = (char)pppppppuVar20 * '\x02';
                pppppppuVar27 = pppppppuStack_220;
              }
              pppppppuStack_220 = pppppppuVar27;
              *(undefined1 *)((long)pppppppuVar24 + (long)pppppppuVar20) = 0;
            }
            pppppppuVar27 = pppppppuStack_218;
            uStack_200 = pppppppuStack_220;
            auVar13 = auStack_228;
            pppppppuVar24 = (ulong *******)auStack_228;
            pppppppuStack_1f8 = pppppppuStack_218;
            auStack_228 = (undefined1  [8])0x0;
            pppppppuStack_220 = (ulong *******)0x0;
            auStack_208[0] = auVar13[0];
            auVar35 = (undefined1  [8])((ulong)auVar13 & 0xff);
            uVar37 = (uint)auStack_208[0];
            pppppppuVar23 = pppppppuStack_218;
            pppppppuVar20 = uStack_200;
            if (((ulong)auVar13 & 1) == 0) {
              pppppppuVar23 = (ulong *******)(auStack_208 + 1);
              pppppppuVar20 = (ulong *******)(ulong)(auStack_208[0] >> 1);
            }
            uVar40 = ((ulong)auStack_1b8 & 0xfffffffffffffffe) - 1;
            pppppppuStack_218 = (ulong *******)0x0;
            if (((ulong)auStack_1b8 & 1) == 0) {
              uVar40 = 0x16;
            }
            _auStack_208 = (undefined1  [8])pppppppuVar24;
            if (((ulong)auStack_1b8 & 1) == 0) {
              pppppppuVar24 = (ulong *******)(ulong)((uint)((ulong)auStack_1b8 >> 1) & 0x7f);
              if (pppppppuVar20 <= (ulong *******)(uVar40 - (long)pppppppuVar24)) goto LAB_0d6640b6;
LAB_0d664115:
              pppppppuStack_190 = pppppppuVar27;
              pppppppuVar22 = (ulong *******)((long)pppppppuVar24 + (long)pppppppuVar20);
              if (-uVar40 - 10 < (long)pppppppuVar22 - uVar40) goto LAB_0d66479f;
              pppppppuStack_140 = (ulong *******)CONCAT44(pppppppuStack_140._4_4_,uVar37);
              pppppppuStack_198 = (ulong *******)(auStack_1b8 + 1);
              if (((ulong)auStack_1b8 & 1) != 0) {
                pppppppuStack_198 = pppppppuStack_1a8;
              }
              uVar44 = 0xfffffffffffffff7;
              if (uVar40 < 0x7ffffffffffffff3) {
                pppppppuVar27 = (ulong *******)(uVar40 * 2);
                if ((ulong *******)(uVar40 * 2) < pppppppuVar22) {
                  pppppppuVar27 = pppppppuVar22;
                }
                uVar44 = 0x1a;
                if (((ulong)pppppppuVar27 | 7) != 0x17) {
                  uVar44 = ((ulong)pppppppuVar27 | 7) + 1;
                }
                if (pppppppuVar27 < (ulong *******)0x17) {
                  uVar44 = 0x17;
                }
              }
              pppppppuStack_48 = pppppppuVar22;
              pppppppuVar28 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
              if (uVar44 != 0 && pppppppuVar28 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar44,0);
              }
              if (pppppppuVar24 != (ulong *******)0x0) {
                func_0x0eee2ee0(pppppppuVar28,pppppppuStack_198,pppppppuVar24);
              }
              memcpy((undefined *)((long)pppppppuVar28 + (long)pppppppuVar24),pppppppuVar23,
                     pppppppuVar20);
              if (uVar40 + 1 != 0x17) {
                func_0x0412a280(pppppppuStack_198,uVar40 + 1);
              }
              auStack_1b8 = (undefined1  [8])(uVar44 | 1);
              *(undefined1 *)((long)pppppppuVar28 + (long)pppppppuStack_48) = 0;
              auVar35 = (undefined1  [8])((ulong)pppppppuStack_140 & 0xffffffff);
              pppppppuVar22 = pppppppuStack_170;
              pppppppuVar27 = pppppppuStack_190;
              pppppppuStack_1b0 = pppppppuStack_48;
              pppppppuStack_1a8 = pppppppuVar28;
            }
            else {
              pppppppuVar24 = pppppppuStack_1b0;
              if ((ulong *******)(uVar40 - (long)pppppppuStack_1b0) < pppppppuVar20)
              goto LAB_0d664115;
LAB_0d6640b6:
              if (pppppppuVar20 != (ulong *******)0x0) {
                pppppppuVar28 = (ulong *******)(auStack_1b8 + 1);
                if (((ulong)auStack_1b8 & 1) != 0) {
                  pppppppuVar28 = pppppppuStack_1a8;
                }
                func_0x0eee2ee0((undefined *)((long)pppppppuVar28 + (long)pppppppuVar24),
                                pppppppuVar23,pppppppuVar20);
                pppppppuVar24 = (ulong *******)((long)pppppppuVar24 + (long)pppppppuVar20);
                pppppppuVar20 = pppppppuVar24;
                if (((ulong)auStack_1b8 & 1) == 0) {
                  auStack_1b8[0] = (char)pppppppuVar24 * '\x02';
                  pppppppuVar20 = pppppppuStack_1b0;
                }
                pppppppuStack_1b0 = pppppppuVar20;
                *(undefined1 *)((long)pppppppuVar28 + (long)pppppppuVar24) = 0;
                auVar35 = auVar13;
              }
            }
            if (((ulong)auVar35 & 1) != 0) {
              func_0x0412a280(pppppppuVar27,(ulong)_auStack_208 & 0xfffffffffffffffe);
            }
            pppppppuVar20 = pppppppuStack_150;
            if (((ulong)auStack_228 & 1) != 0) {
              func_0x0412a280(pppppppuStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
            }
            func_0x0412a280(pppppppuVar22,1);
            pppppppuVar20 = pppppppuVar20 + 3;
            pppppppuVar24 = (ulong *******)&UNK_012a0ff5;
          } while (pppppppuVar20 != pppppppuStack_148);
        }
        pppppppuVar20 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (pppppppuVar20 == (ulong *******)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        ppppppuVar43 = _UNK_01283b2b;
        pppppppuStack_188 = (ulong *******)0x29;
        pppppppuStack_180 = (ulong *******)0x25;
        pppppppuVar20[2] = _DAT_01283b23;
        pppppppuVar20[3] = ppppppuVar43;
        uVar12 = _UNK_01283b1f;
        uVar11 = _UNK_01283b1b;
        uVar31 = _UNK_01283b17;
        *(undefined4 *)pppppppuVar20 = _DAT_01283b13;
        *(undefined4 *)((long)pppppppuVar20 + 4) = uVar31;
        *(undefined4 *)(pppppppuVar20 + 1) = uVar11;
        *(undefined4 *)((long)pppppppuVar20 + 0xc) = uVar12;
        *(undefined8 *)((long)pppppppuVar20 + 0x1d) = 0x726f72724565756c;
        *(undefined1 *)((long)pppppppuVar20 + 0x25) = 0;
        pppppppuStack_178 = pppppppuVar20;
        if (((uint)auStack_e8 & 1) == 0) {
          pppppppuStack_1f8 = pppppppuStack_d8;
          _auStack_208 = (undefined1  [8])CONCAT44(uStack_e4,auStack_e8);
          uStack_200 = (ulong *******)CONCAT44(uStack_dc,uStack_e0);
        }
        else {
          func_0x0412e5e0(auStack_208,pppppppuStack_d8,CONCAT44(uStack_dc,uStack_e0));
        }
        if (((ulong)auStack_1b8 & 1) == 0) {
          pppppppuStack_1e0 = pppppppuStack_1a8;
          uStack_1f0 = (ulong ******)auStack_1b8;
          uStack_1e8 = pppppppuStack_1b0;
        }
        else {
          func_0x0412e5e0(&uStack_1f0,pppppppuStack_1a8,pppppppuStack_1b0);
        }
        pppppppuStack_128 = (ulong *******)0x0;
        pppppppuStack_120 = (ulong *******)0x0;
        pppppppuStack_118 = (ulong *******)0x0;
        pppppppuStack_d0 = (ulong *******)&pppppppuStack_128;
        uStack_c8 = 0;
        pppppppuVar20 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (pppppppuVar20 == (ulong *******)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        pppppppuStack_118 = pppppppuVar20 + 6;
        auStack_228 = (undefined1  [8])&pppppppuStack_128;
        pppppppuStack_220 = (ulong *******)&pppppppuStack_38;
        pppppppuStack_218 = (ulong *******)&pppppppuStack_130;
        uStack_210 = 0;
        pppppppuStack_128 = pppppppuVar20;
        pppppppuStack_120 = pppppppuVar20;
        pppppppuStack_38 = pppppppuVar20;
        if (((ulong)_auStack_208 & 1) == 0) {
          pppppppuVar20[2] = (ulong ******)pppppppuStack_1f8;
          *(undefined1 (*) [4])pppppppuVar20 = auStack_208;
          *(undefined4 *)((long)pppppppuVar20 + 4) = uStack_204;
          *(undefined4 *)(pppppppuVar20 + 1) = (undefined4)uStack_200;
          *(undefined4 *)((long)pppppppuVar20 + 0xc) = uStack_200._4_4_;
          pppppppuStack_130 = pppppppuVar20 + 3;
          if (((ulong)uStack_1f0 & 1) != 0) goto LAB_0d66447d;
LAB_0d664430:
          pppppppuStack_130[2] = (ulong ******)pppppppuStack_1e0;
          *pppppppuStack_130 = uStack_1f0;
          pppppppuStack_130[1] = (ulong ******)uStack_1e8;
        }
        else {
          pppppppuStack_130 = pppppppuVar20;
          func_0x0412e5e0(pppppppuVar20,pppppppuStack_1f8,uStack_200);
          pppppppuStack_130 = pppppppuStack_130 + 3;
          if (((ulong)uStack_1f0 & 1) == 0) goto LAB_0d664430;
LAB_0d66447d:
          func_0x0412e5e0(pppppppuStack_130,pppppppuStack_1e0,uStack_1e8);
        }
        pppppppuStack_120 = pppppppuStack_130 + 3;
        uStack_78 = 0;
        plStack_70 = (long *)0x0;
        (**(code **)(*plStack_c0 + 0x88))
                  (auStack_168,plStack_c0,&pppppppuStack_188,&pppppppuStack_128,&uStack_78);
        func_0x057d8ed0(plStack_138,auStack_168);
        if (((ulong)auStack_168 & 1) != 0) {
          func_0x0412a280(pppppppuStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        plVar10 = plStack_70;
        pppppppuVar20 = pppppppuStack_128;
        if (plStack_70 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar26 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar26 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            func_0x0412c2d0(plVar10);
            pppppppuVar20 = pppppppuStack_128;
          }
        }
        pppppppuStack_128 = pppppppuVar20;
        pppppppuVar24 = pppppppuStack_120;
        if (pppppppuVar20 != (ulong *******)0x0) {
          for (; pppppppuVar20 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
            if (((ulong)pppppppuVar24[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_120 = pppppppuVar20;
          func_0x0412a280(pppppppuStack_128,(long)pppppppuStack_118 - (long)pppppppuStack_128);
        }
        if (((ulong)uStack_1f0 & 1) != 0) {
          func_0x0412a280(pppppppuStack_1e0,(ulong)uStack_1f0 & 0xfffffffffffffffe);
        }
        if (((ulong)_auStack_208 & 1) != 0) {
          func_0x0412a280(pppppppuStack_1f8,(ulong)_auStack_208 & 0xfffffffffffffffe);
        }
        if (((ulong)pppppppuStack_188 & 1) != 0) {
          func_0x0412a280(pppppppuStack_178,(ulong)pppppppuStack_188 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_1b8 & 1) != 0) {
          func_0x0412a280(pppppppuStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
        }
        uVar40 = 0;
      }
      if (((uint)auStack_e8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_d8,CONCAT44(uStack_e4,auStack_e8) & 0xfffffffffffffffe);
      }
    } while (lStack_90 != 0);
  }
  func_0x0d6655d0(&uStack_b8);
  return uVar40 & 0xffffff01;
LAB_0d664786:
  func_0x04882e30();
LAB_0d66478b:
  func_0x04882e30();
LAB_0d664790:
  func_0x04882e30();
LAB_0d664795:
  func_0x04882e30();
LAB_0d66479a:
  func_0x04882e30();
LAB_0d66479f:
  func_0x04882e30();
LAB_0d6647a4:
  func_0x04882e30();
LAB_0d6647a9:
  func_0x04882e30();
LAB_0d6647ae:
  func_0x04882e30();
LAB_0d6647b3:
  func_0x04882e30();
LAB_0d6647b8:
  func_0x04882eb0();
LAB_0d6647bd:
  uVar29 = func_0x0488efe0();
  if (((ulong)uStack_1e8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
  }
  func_0x0d6655d0(&uStack_b8);
  _Unwind_Resume(uVar29);
  pcVar8 = (code *)swi(3);
  uVar40 = (*pcVar8)();
  return uVar40;
}



/* ---- referenced strings ----
 * 0x1283b13  jsonValidationError.invalidValueError
 * 0x1283b23  ror.invalidValueError
 * 0x129d190  jsonValidationError.requiredPropertyError
 * 0x129d1a0  ror.requiredPropertyError
 * 0x129d1a9  redPropertyError
 * 0x13894b2  jsonValidationError.typeError
 * 0x13894bf  nError.typeError
 */
