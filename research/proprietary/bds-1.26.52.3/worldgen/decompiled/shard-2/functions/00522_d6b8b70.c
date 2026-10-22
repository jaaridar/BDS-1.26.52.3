/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd7b8b70 (ELF vaddr 0xd6b8b70)
 * Label: caller-of-callee
 * Body:  [[0d7b8b70, 0d7b8ca0] [0d7b8cb0, 0d7b8f15] [0d7b8f20, 0d7bb8c3] [0d7bbbef, 0d7bbc07] [0d7bbc3d, 0d7bbc4e] [0d7bbd21, 0d7bbd48] [0d7c48b0, 0d7c4a6c] [0d7c4a70, 0d7c4c01] [0d7c4c10, 0d7c5008] [0d7c5041, 0d7c505c]]
 * Ghidra: FUN_0d7b8b70
 */


/* WARNING: Possible PIC construction at 0x0d7bb886: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d7bb88b) */
/* WARNING: Removing unreachable block (ram,0x0d7c48e7) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0d7b8b70(long param_1,long *param_2,uint param_3,long param_4,undefined1 *param_5,
            undefined1 *param_6)

{
  code ******ppppppcVar1;
  code *****pppppcVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  code ******ppppppcVar15;
  code *******pppppppcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  undefined *puVar25;
  ulong uVar26;
  ulong unaff_RBX;
  long *plVar27;
  long *unaff_RBP;
  undefined1 *puVar28;
  ulong unaff_R12;
  undefined1 *unaff_R13;
  undefined1 *unaff_R14;
  byte bVar29;
  undefined8 unaff_R15;
  undefined8 *puVar30;
  code *******pppppppcVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte abStack_668 [936];
  undefined8 uStack_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  code *******pppppppcStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_290;
  uint uStack_28c;
  undefined1 auStack_288 [4];
  undefined4 uStack_284;
  undefined8 uStack_280;
  code *******pppppppcStack_278;
  code ******ppppppcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  code ******ppppppcStack_250;
  long *plStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  undefined1 *puStack_218;
  code *******pppppppcStack_210;
  long *plStack_208;
  undefined1 *puStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [16];
  code *******apppppppcStack_1d8 [2];
  code *******pppppppcStack_1c8;
  code ******ppppppcStack_1c0;
  undefined4 uStack_1b8;
  char cStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  code ******ppppppcStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  ulong uStack_188;
  uint uStack_17c;
  code *******pppppppcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  code *******pppppppcStack_158;
  undefined1 auStack_148 [16];
  code *******pppppppcStack_138;
  code *pcStack_130;
  undefined4 uStack_128;
  char cStack_124;
  code ******ppppppcStack_120;
  code *******pppppppcStack_118;
  code ******ppppppcStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *******pppppppcStack_e8;
  code ******ppppppcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  code ******ppppppcStack_c0;
  code *******pppppppcStack_b8;
  code ******ppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  undefined4 uStack_94;
  code ******ppppppcStack_90;
  code *******pppppppcStack_88;
  code *******pppppppcStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar21 = (undefined1 *)(ulong)param_3;
  uStack_2c0 = 0xd7b8b9a;
  puVar28 = param_5;
  lStack_50 = param_4;
  lVar14 = func_0x04522600();
  if (lVar14 != 0) {
    uStack_188 = *(ulong *)(lVar14 + 0x20);
    uStack_2c0 = 0xd7b8bc4;
    puStack_190 = param_5;
    uVar11 = (**(code **)(*param_2 + 0x20))(param_2);
    auVar33._8_8_ = auStack_1e8._8_8_;
    auVar33._0_8_ = auStack_1e8._0_8_;
    iVar13 = (int)param_2[2];
    uVar22 = uVar11 - *(int *)((long)param_2 + 0xc);
    uStack_290 = uVar11;
    if (iVar13 + param_3 < uVar22 || uVar11 < iVar13 + param_3) {
      if (*(int *)((long)param_2 + 0xc) == 0) {
        uVar17 = (ulong)(uVar11 - iVar13);
        puVar25 = &UNK_011b0dfe;
        puVar28 = puVar21;
        puVar21 = unaff_R13;
      }
      else {
        uVar17 = (ulong)(uVar22 - iVar13);
        puVar25 = &UNK_014c1c8e;
        puVar28 = (undefined1 *)(ulong)(uVar11 - iVar13);
        param_6 = puVar21;
        puVar21 = unaff_R13;
        auStack_1e8 = auVar33;
      }
SUB_0d7c48b0:
      *(long **)((long)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
      *(undefined1 **)((long)register0x00000020 + -0x18) = unaff_R14;
      *(undefined1 **)((long)register0x00000020 + -0x20) = puVar21;
      *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
      *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
      *(long *)((long)register0x00000020 + -0x390) = lVar14;
      *(long *)((long)register0x00000020 + -0x370) = param_1;
      *(ulong *)((long)register0x00000020 + -0x1d0) = uVar17;
      *(undefined1 **)((long)register0x00000020 + -0x1c8) = puVar28;
      *(undefined1 **)((long)register0x00000020 + -0x1c0) = param_6;
      *(undefined1 **)((long)register0x00000020 + -0x308) =
           (undefined1 *)((long)register0x00000020 + -0x1e8);
      *(undefined1 **)((long)register0x00000020 + -0x310) =
           (undefined1 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x318) = 0x3000000018;
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4976;
      func_0x0eee3540((undefined1 *)((long)register0x00000020 + -0x138),0x100,puVar25,
                      (undefined1 *)((long)register0x00000020 + -0x318));
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c497e;
      uVar17 = func_0x0eee2e90((undefined1 *)((long)register0x00000020 + -0x138));
      if (0xfffffffffffffff7 < uVar17) {
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4fd4;
        uVar18 = FUN_04882e30();
        if ((*(byte *)((long)register0x00000020 + -0x3a8) & 1) != 0) goto LAB_0d7c4fed;
        bVar29 = *(byte *)((long)register0x00000020 + -0x388);
        while ((bVar29 & 1) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4fed;
          func_0x0eee2d70(uVar18);
LAB_0d7c4fed:
          *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c5000;
          func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x398),
                          *(ulong *)((long)register0x00000020 + -0x3a8) & 0xfffffffffffffffe);
          bVar29 = *(byte *)((long)register0x00000020 + -0x388);
        }
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c5054;
        func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x378),
                        *(ulong *)((long)register0x00000020 + -0x388) & 0xfffffffffffffffe);
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c505c;
        func_0x0eee2d70(uVar18);
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return uVar18;
      }
      if (0x16 < uVar17) {
        unaff_R12 = 0x1a;
        if ((uVar17 | 7) != 0x17) {
          unaff_R12 = (uVar17 | 7) + 1;
        }
        pcVar6 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c49d1;
        puVar28 = (undefined1 *)(*pcVar6)(&DAT_0f5463b0,unaff_R12);
        if (puVar28 == (undefined1 *)0x0) goto LAB_0d7c4fb1;
        goto LAB_0d7c49dd;
      }
      *(char *)((long)register0x00000020 + -0x388) = (char)uVar17 * '\x02';
      puVar28 = (undefined1 *)((long)register0x00000020 + -0x387);
      if (uVar17 != 0) goto LAB_0d7c49f0;
      do {
        puVar28[uVar17] = 0;
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4a15;
        func_0x04886140((undefined1 *)((long)register0x00000020 + -0x300));
        lVar14 = *(long *)(*(long *)((long)register0x00000020 + -0x390) + 400) -
                 *(long *)(*(long *)((long)register0x00000020 + -0x390) + 0x188);
        if (lVar14 != 0) {
          lVar24 = (lVar14 >> 3) * -0x71c71c71c71c71c7;
          *(long *)((long)register0x00000020 + -0x368) = lVar24 + -1;
          *(ulong *)((long)register0x00000020 + -0x360) = lVar24 + (ulong)(lVar24 == 0);
          bVar29 = 6;
          uVar17 = 0;
          do {
            puVar28 = (undefined1 *)((long)register0x00000020 + -0x2f0);
            lVar14 = lVar14 + -0x48;
            unaff_R12 = *(ulong *)(*(long *)((long)register0x00000020 + -0x390) + 0x188);
            *(uint *)((long)register0x00000020 + -0x3ac) = (uint)bVar29;
            if ((bVar29 < 6) &&
               ((0x2cU >> (*(uint *)((long)register0x00000020 + -0x3ac) & 0x1f) & 1) != 0)) {
              puVar25 = &UNK_01254d89;
              if (uVar17 < 2) {
                puVar25 = &UNK_012ee262;
              }
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4afe;
              uVar18 = func_0x04885260(puVar28,puVar25,(uVar17 < 2) * '\x02');
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4b12;
              func_0x04885260(uVar18,&UNK_011b0e42,0xf);
              puVar25 = &UNK_01302c88;
              if (bVar29 == 3) {
                puVar25 = &UNK_011b0e52;
              }
              if (bVar29 == 2) {
                puVar25 = &UNK_01411d3a;
              }
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4b3f;
              uVar18 = func_0x0eee2e90(puVar25);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4b4d;
              func_0x04885260(puVar28,puVar25,uVar18);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4b61;
              func_0x04885260(puVar28,&UNK_01302c92,3);
            }
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4b75;
            uVar19 = func_0x04885260(puVar28,&UNK_011d0654,1);
            uVar18 = *(undefined8 *)(&UNK_0f485070 + (ulong)*(byte *)(unaff_R12 + lVar14) * 8);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4b90;
            uVar20 = func_0x0eee2e90(uVar18);
            puVar28 = (undefined1 *)((long)register0x00000020 + -0x2f0);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4ba6;
            func_0x04885260(uVar19,uVar18,uVar20);
            bVar3 = *(byte *)(unaff_R12 + 0x20 + lVar14);
            if ((bVar3 & 1) == 0) {
              if (bVar3 >> 1 == 0) goto LAB_0d7c4c17;
LAB_0d7c4bba:
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4bce;
              uVar18 = func_0x04885260(puVar28,&UNK_011cc570,3);
              bVar3 = *(byte *)(unaff_R12 + 0x20 + lVar14);
              bVar32 = (bVar3 & 1) != 0;
              lVar24 = unaff_R12 + 0x21 + lVar14;
              if (bVar32) {
                lVar24 = *(long *)(unaff_R12 + 0x30 + lVar14);
              }
              uVar26 = (ulong)(bVar3 >> 1);
              if (bVar32) {
                uVar26 = *(ulong *)(unaff_R12 + 0x28 + lVar14);
              }
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4bf4;
              uVar18 = func_0x04885260(uVar18,lVar24,uVar26);
              uVar19 = 2;
              puVar25 = &UNK_013be897;
LAB_0d7c4c4c:
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4c54;
              func_0x04885260(uVar18,puVar25,uVar19);
            }
            else {
              if (*(long *)(unaff_R12 + 0x28 + lVar14) != 0) goto LAB_0d7c4bba;
LAB_0d7c4c17:
              if (*(char *)(unaff_R12 + 0x1c + lVar14) == '\x01') {
                *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4c33;
                uVar18 = func_0x04885260(puVar28,&UNK_0123a10a,2);
                uVar4 = *(undefined4 *)(unaff_R12 + 0x18 + lVar14);
                *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4c40;
                uVar18 = func_0x0413b720(uVar18,uVar4);
                uVar19 = 1;
                puVar25 = &UNK_0138d4e9;
                goto LAB_0d7c4c4c;
              }
            }
            if ((bVar29 < 6) &&
               ((0x2cU >> (*(uint *)((long)register0x00000020 + -0x3ac) & 0x1f) & 1) != 0)) {
              puVar25 = &UNK_0121f022;
              if (*(ulong *)((long)register0x00000020 + -0x368) == uVar17) {
                puVar25 = &UNK_01198f58;
              }
              uVar18 = 2;
LAB_0d7c4a8c:
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4a94;
              func_0x04885260(puVar28,puVar25,uVar18);
            }
            else {
              if (*(long *)(unaff_R12 + 8 + lVar14) == 0) {
                uVar18 = 0x19;
                puVar25 = &UNK_012b62df;
                goto LAB_0d7c4a8c;
              }
              plVar27 = (long *)(unaff_R12 + lVar14 + 8);
              uVar18 = *(undefined8 *)(*(long *)((long)register0x00000020 + -0x390) + 0x18);
              uVar19 = *(undefined8 *)(*(long *)((long)register0x00000020 + -0x390) + 0x20);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4c99;
              func_0x0d7b38b0((undefined1 *)((long)register0x00000020 + -0x358),uVar18,uVar19,
                              plVar27,0);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4cad;
              uVar18 = func_0x04885260(puVar28,&UNK_01302c96,0x10);
              if (*(char *)((long)register0x00000020 + -800) == '\x01') {
                puVar28 = (undefined1 *)((long)register0x00000020 + -0x357);
                if ((*(byte *)((long)register0x00000020 + -0x358) & 1) != 0) {
                  puVar28 = *(undefined1 **)((long)register0x00000020 + -0x348);
                }
                *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4cd3;
                uVar19 = func_0x0eee2e90(puVar28);
              }
              else {
                plVar27 = (long *)*plVar27;
                if (plVar27 == (long *)0x0) {
                  uVar19 = *(undefined8 *)(unaff_R12 + 0x10 + lVar14);
                  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4cfb;
                  plVar27 = (long *)func_0x048aead0(uVar19);
                }
                puVar28 = *(undefined1 **)(*plVar27 + 8);
                uVar19 = *(undefined8 *)(*plVar27 + 0x10);
              }
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4d11;
              func_0x04885260(uVar18,puVar28,uVar19);
              if (*(char *)((long)register0x00000020 + -800) == '\x01') {
                if ((*(byte *)((long)register0x00000020 + -0x340) & 1) != 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4d44;
                  func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x330),
                                  *(ulong *)((long)register0x00000020 + -0x340) & 0xfffffffffffffffe
                                 );
                }
                if ((*(byte *)((long)register0x00000020 + -0x358) & 1) != 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4d62;
                  func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x348),
                                  *(ulong *)((long)register0x00000020 + -0x358) & 0xfffffffffffffffe
                                 );
                }
              }
            }
            bVar29 = *(byte *)(unaff_R12 + lVar14);
            uVar17 = uVar17 + 1;
          } while (*(ulong *)((long)register0x00000020 + -0x360) != uVar17);
        }
        if ((*(uint *)((long)register0x00000020 + -0x288) & 0x10) == 0) {
          if ((*(uint *)((long)register0x00000020 + -0x288) & 8) == 0) {
            *(undefined1 *)((long)register0x00000020 + -0x3a8) = 0;
            puVar21 = (undefined1 *)((long)register0x00000020 + -0x3a7);
            uVar17 = 0;
            goto LAB_0d7c4e38;
          }
          puVar28 = *(undefined1 **)((long)register0x00000020 + -0x2d8);
          uVar17 = *(long *)((long)register0x00000020 + -0x2c8) - (long)puVar28;
        }
        else {
          uVar26 = *(ulong *)((long)register0x00000020 + -0x2b8);
          uVar17 = *(ulong *)((long)register0x00000020 + -0x290);
          if (*(ulong *)((long)register0x00000020 + -0x290) < uVar26) {
            *(ulong *)((long)register0x00000020 + -0x290) = uVar26;
            uVar17 = uVar26;
          }
          puVar28 = *(undefined1 **)((long)register0x00000020 + -0x2c0);
          uVar17 = uVar17 - (long)puVar28;
        }
        if (uVar17 < 0xfffffffffffffff8) goto LAB_0d7c4dc3;
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4fb1;
        FUN_04882e30();
LAB_0d7c4fb1:
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4fbb;
        func_0x0eec74c0(unaff_R12,0);
LAB_0d7c49dd:
        *(undefined1 **)((long)register0x00000020 + -0x378) = puVar28;
        unaff_R12 = unaff_R12 | 1;
        *(ulong *)((long)register0x00000020 + -0x388) = unaff_R12;
        *(ulong *)((long)register0x00000020 + -0x380) = uVar17;
LAB_0d7c49f0:
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4a03;
        func_0x0eee2f00(puVar28,(undefined1 *)((long)register0x00000020 + -0x138),uVar17);
      } while( true );
    }
    uStack_2c0 = 0xd7b8c3c;
    iVar12 = (**(code **)(*param_2 + 0x20))(param_2);
    auVar34._8_8_ = puStack_218;
    auVar34._0_8_ = pppppppcStack_210;
    if (uVar11 != 0 || param_3 != 0) {
      uStack_17c = iVar12 - (iVar13 + *(int *)((long)param_2 + 0xc));
      pppppppcStack_88 = (code *******)(lVar14 + 0x90);
      pppppppcStack_a0 = (code *******)(lVar14 + 8);
      unaff_R12 = 0;
      uStack_28c = 0;
      unaff_RBX = (ulong)uStack_290;
      unaff_RBP = param_2;
      unaff_R14 = puVar21;
      plStack_208 = param_2;
      puStack_200 = puVar21;
      lStack_1f0 = param_1;
      lStack_198 = lVar14;
      do {
        puStack_218 = auVar34._8_8_;
        pppppppcStack_210 = auVar34._0_8_;
        iVar13 = (int)unaff_R12;
        uStack_2c0 = 0xd7b8cd6;
        auVar33 = (**(code **)(*unaff_RBP + 0x28))(unaff_RBP,unaff_R12);
        if (*(long *)(uStack_188 + 0x1c8) == auVar33._8_8_) {
          auStack_1e8 = auVar33;
          if (*(long *)(uStack_188 + 0x1c0) == 0) {
            uStack_2c0 = 0xd7b8f82;
            lVar14 = func_0x048aead0();
            iVar12 = *(int *)(lVar14 + 8);
            if (auStack_1e8._0_8_ == 0) goto LAB_0d7b8f95;
LAB_0d7b8f34:
            auVar33 = auStack_1e8;
            if (iVar12 != *(int *)(auStack_1e8._0_8_ + 8)) {
LAB_0d7b8fa7:
              auStack_1e8._8_8_ = auVar33._8_8_;
              unaff_RBX = (ulong)uStack_290;
              if (*(long *)(uStack_188 + 0x1d8) == auStack_1e8._8_8_) goto LAB_0d7b8fce;
              goto LAB_0d7b8d14;
            }
          }
          else {
            iVar12 = *(int *)(*(long *)(uStack_188 + 0x1c0) + 8);
            if (auVar33._0_8_ != 0) goto LAB_0d7b8f34;
LAB_0d7b8f95:
            uStack_2c0 = 0xd7b8fa2;
            lVar14 = func_0x048aead0(auStack_1e8._8_8_);
            auVar33 = auStack_1e8;
            if (iVar12 != *(int *)(lVar14 + 8)) goto LAB_0d7b8fa7;
          }
          ppppppcVar15 = *pppppppcStack_a0;
          if ((ppppppcVar15 == (code ******)0x0) ||
             (*(int *)(ppppppcVar15 + 1) != *(int *)(lStack_198 + 0x10))) {
            pppppppcVar31 = (code *******)0x0;
          }
          else {
            pppppppcVar31 = (code *******)*ppppppcVar15;
          }
          ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
          if (ppppppcVar15 == (code ******)0x0) {
            uStack_2c0 = 0xd7b9169;
            func_0x048b0de0(auStack_288,apppppppcStack_1d8);
            _DAT_0f54fd90 = auStack_288;
            uRam000000000f54fd94 = uStack_284;
            uVar4 = (undefined4)uStack_280;
            uVar9 = uStack_280._4_4_;
            _auStack_288 = (code *******)0x0;
            uStack_280 = (code ******)0x0;
            plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
            _DAT_0f54fd98 = uVar4;
            uRam000000000f54fd9c = uVar9;
            if (plVar27 != (long *)0x0) {
              LOCK();
              plVar23 = plVar27 + 1;
              lVar14 = *plVar23;
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (lVar14 == 0) {
                uStack_2c0 = 0xd7b91a4;
                (**(code **)(*plVar27 + 0x10))(plVar27);
                uStack_2c0 = 0xd7b91ac;
                FUN_0412c2d0(plVar27);
              }
            }
            ppppppcVar15 = uStack_280;
            if (uStack_280 != (code ******)0x0) {
              LOCK();
              ppppppcVar1 = uStack_280 + 1;
              pppppcVar2 = *ppppppcVar1;
              *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
              UNLOCK();
              if (pppppcVar2 == (code *****)0x0) {
                uStack_2c0 = 0xd7b91d1;
                (*(code *)(*uStack_280)[2])(uStack_280);
                uStack_2c0 = 0xd7b91d9;
                FUN_0412c2d0(ppppppcVar15);
              }
            }
            ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
          }
          unaff_RBX = (ulong)uStack_290;
          pppppppcStack_278 = (code *******)&UNK_06528820;
          ppppppcStack_270 = (code ******)0x0;
          uStack_268 = CONCAT35(uStack_268._5_3_,0x36475973a);
          uStack_258 = (code *******)0x0;
          puVar25 = &UNK_065287d0;
          ppppppcStack_250 = (code ******)&UNK_065287d0;
          puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
          _auStack_288 = pppppppcVar31;
          uStack_260 = ppppppcVar15;
          if (puVar30 == (undefined8 *)auStack_288) {
LAB_0d7b967b:
            auVar34._8_8_ = puStack_218;
            auVar34._0_8_ = pppppppcStack_210;
            uStack_258 = (code *******)0x0;
            ppppppcStack_270 = (code ******)0x0;
            puVar30[5] = uStack_260;
            puVar30[6] = 0;
            puVar30[7] = puVar25;
            unaff_R12 = (ulong)(iVar13 + 1);
            unaff_RBP = plStack_208;
            puVar21 = puStack_200;
          }
          else {
            if ((code *)puVar30[3] == (code *)0x0) {
              cVar10 = '\x03';
LAB_0d7b9b94:
              _auStack_288 = (code *******)0x0;
              *puVar30 = pppppppcVar31;
              unaff_RBP = plStack_208;
              puVar21 = puStack_200;
            }
            else {
              uStack_2c0 = 0xd7b9254;
              (*(code *)puVar30[3])(puVar30);
              puVar21 = puStack_200;
              unaff_RBP = plStack_208;
              cVar10 = uStack_268._4_1_;
              if (uStack_268._4_1_ != '\0') {
                pppppppcVar31 = _auStack_288;
                if (uStack_268._4_1_ != '\x02') goto LAB_0d7b9b94;
                uStack_2c0 = 0xd7b928b;
                (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                cVar10 = uStack_268._4_1_;
              }
            }
            ppppppcVar15 = ppppppcStack_250;
            puVar30[2] = pppppppcStack_278;
            puVar30[3] = ppppppcStack_270;
            *(int *)(puVar30 + 4) = (int)uStack_268;
            *(char *)((long)puVar30 + 0x24) = cVar10;
            uVar4 = (undefined4)uStack_258;
            uVar9 = uStack_258._4_4_;
            uStack_258 = (code *******)0x0;
            *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
            *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
            *(undefined4 *)(puVar30 + 6) = uVar4;
            *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
            ppppppcStack_250 = (code ******)0x0;
            puVar30[7] = ppppppcVar15;
            if (ppppppcStack_270 != (code ******)0x0) {
              uStack_2c0 = 0xd7b9c00;
              (*(code *)ppppppcStack_270)(auStack_288);
            }
LAB_0d7b8cb0:
            auVar34._8_8_ = puStack_218;
            auVar34._0_8_ = pppppppcStack_210;
            unaff_R12 = (ulong)(iVar13 + 1);
          }
        }
        else {
          if (*(long *)(uStack_188 + 0x1d8) == auVar33._8_8_) {
LAB_0d7b8fce:
            auStack_1e8._0_8_ = auVar33._0_8_;
            uVar17 = uStack_188;
            auStack_1e8 = auVar33;
            if (*(long *)(uStack_188 + 0x1d0) == 0) {
              uStack_2c0 = 0xd7b929a;
              lVar14 = func_0x048aead0();
              iVar12 = *(int *)(lVar14 + 8);
              if (auStack_1e8._0_8_ == 0) goto LAB_0d7b92ae;
LAB_0d7b8ff2:
              auVar33 = auStack_1e8;
              if (iVar12 != *(int *)(auStack_1e8._0_8_ + 8)) {
LAB_0d7b92c4:
                auStack_1e8._8_8_ = auVar33._8_8_;
                unaff_RBX = (ulong)uStack_290;
                if (*(long *)(uStack_188 + 0x1e8) == auStack_1e8._8_8_) goto LAB_0d7b92e8;
                goto LAB_0d7b8d24;
              }
            }
            else {
              iVar12 = *(int *)(*(long *)(uStack_188 + 0x1d0) + 8);
              bVar32 = auStack_1e8._0_8_ != 0;
              if (bVar32) goto LAB_0d7b8ff2;
LAB_0d7b92ae:
              uStack_2c0 = 0xd7b92bb;
              lVar14 = func_0x048aead0(auStack_1e8._8_8_);
              auVar33 = auStack_1e8;
              if (iVar12 != *(int *)(lVar14 + 8)) goto LAB_0d7b92c4;
            }
            ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            if (ppppppcVar15 == (code ******)0x0) {
              uStack_2c0 = 0xd7b9021;
              func_0x048b0de0(auStack_288,apppppppcStack_1d8);
              _DAT_0f54fd90 = auStack_288;
              uRam000000000f54fd94 = uStack_284;
              uVar4 = (undefined4)uStack_280;
              uVar9 = uStack_280._4_4_;
              _auStack_288 = (code *******)0x0;
              uStack_280 = (code ******)0x0;
              plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
              _DAT_0f54fd98 = uVar4;
              uRam000000000f54fd9c = uVar9;
              if (plVar27 != (long *)0x0) {
                LOCK();
                plVar23 = plVar27 + 1;
                lVar14 = *plVar23;
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (lVar14 == 0) {
                  uStack_2c0 = 0xd7b905c;
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  uStack_2c0 = 0xd7b9064;
                  FUN_0412c2d0(plVar27);
                }
              }
              ppppppcVar15 = uStack_280;
              if (uStack_280 != (code ******)0x0) {
                LOCK();
                ppppppcVar1 = uStack_280 + 1;
                pppppcVar2 = *ppppppcVar1;
                *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                UNLOCK();
                if (pppppcVar2 == (code *****)0x0) {
                  uStack_2c0 = 0xd7b9089;
                  (*(code *)(*uStack_280)[2])(uStack_280);
                  uStack_2c0 = 0xd7b9091;
                  FUN_0412c2d0(ppppppcVar15);
                }
              }
              ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            }
            unaff_RBX = (ulong)uStack_290;
            pppppppcStack_278 = (code *******)&UNK_06528b60;
            ppppppcStack_270 = (code ******)0x0;
            uStack_268 = CONCAT35(uStack_268._5_3_,0x33f1072b7);
            _auStack_288 = pppppppcStack_a0;
            uStack_258 = (code *******)0x0;
            puVar25 = &UNK_06528b40;
            ppppppcStack_250 = (code ******)&UNK_06528b40;
            puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
            uStack_260 = ppppppcVar15;
            if (puVar30 != (undefined8 *)auStack_288) {
              if ((code *)puVar30[3] == (code *)0x0) {
                pppppppcVar31 = pppppppcStack_a0;
                cVar10 = '\x03';
LAB_0d7ba13c:
                _auStack_288 = (code *******)0x0;
                *puVar30 = pppppppcVar31;
              }
              else {
                uStack_2c0 = 0xd7b9114;
                (*(code *)puVar30[3])(puVar30);
                cVar10 = uStack_268._4_1_;
                if (uStack_268._4_1_ != '\0') {
                  pppppppcVar31 = _auStack_288;
                  if (uStack_268._4_1_ != '\x02') goto LAB_0d7ba13c;
                  uStack_2c0 = 0xd7b913b;
                  (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                  cVar10 = uStack_268._4_1_;
                }
              }
              ppppppcVar15 = ppppppcStack_250;
              puVar30[2] = pppppppcStack_278;
              puVar30[3] = ppppppcStack_270;
              *(int *)(puVar30 + 4) = (int)uStack_268;
              *(char *)((long)puVar30 + 0x24) = cVar10;
              uVar4 = (undefined4)uStack_258;
              uVar9 = uStack_258._4_4_;
              uStack_258 = (code *******)0x0;
              *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
              *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
              *(undefined4 *)(puVar30 + 6) = uVar4;
              *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
              ppppppcStack_250 = (code ******)0x0;
              puVar30[7] = ppppppcVar15;
              if (ppppppcStack_270 != (code ******)0x0) {
                uStack_2c0 = 0xd7ba198;
                (*(code *)ppppppcStack_270)(auStack_288);
              }
              goto LAB_0d7b8cb0;
            }
          }
          else {
LAB_0d7b8d14:
            auStack_1e8._8_8_ = auVar33._8_8_;
            uVar17 = uStack_188;
            if (*(long *)(uStack_188 + 0x1e8) == auStack_1e8._8_8_) {
LAB_0d7b92e8:
              auStack_1e8._0_8_ = auVar33._0_8_;
              auStack_1e8 = auVar33;
              if (*(long *)(uStack_188 + 0x1e0) == 0) {
                uStack_2c0 = 0xd7b9478;
                lVar14 = func_0x048aead0();
                iVar12 = *(int *)(lVar14 + 8);
                if (auStack_1e8._0_8_ == 0) goto LAB_0d7b948c;
LAB_0d7b930c:
                auVar33 = auStack_1e8;
                if (iVar12 != *(int *)(auStack_1e8._0_8_ + 8)) {
LAB_0d7b94a2:
                  auStack_1e8._8_8_ = auVar33._8_8_;
                  unaff_RBX = (ulong)uStack_290;
                  if (*(long *)(uStack_188 + 0x1f8) == auStack_1e8._8_8_) goto LAB_0d7b94c6;
                  goto LAB_0d7b8d34;
                }
              }
              else {
                iVar12 = *(int *)(*(long *)(uStack_188 + 0x1e0) + 8);
                bVar32 = auStack_1e8._0_8_ != 0;
                if (bVar32) goto LAB_0d7b930c;
LAB_0d7b948c:
                uStack_2c0 = 0xd7b9499;
                lVar14 = func_0x048aead0(auStack_1e8._8_8_);
                auVar33 = auStack_1e8;
                if (iVar12 != *(int *)(lVar14 + 8)) goto LAB_0d7b94a2;
              }
              pppppppcVar31 = *(code ********)(lStack_198 + 0x58);
              ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
              if (ppppppcVar15 == (code ******)0x0) {
                uStack_2c0 = 0xd7b9347;
                func_0x048b0de0(auStack_288,apppppppcStack_1d8);
                _DAT_0f54fd90 = auStack_288;
                uRam000000000f54fd94 = uStack_284;
                uVar4 = (undefined4)uStack_280;
                uVar9 = uStack_280._4_4_;
                _auStack_288 = (code *******)0x0;
                uStack_280 = (code ******)0x0;
                plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
                _DAT_0f54fd98 = uVar4;
                uRam000000000f54fd9c = uVar9;
                if (plVar27 != (long *)0x0) {
                  LOCK();
                  plVar23 = plVar27 + 1;
                  lVar14 = *plVar23;
                  *plVar23 = *plVar23 + -1;
                  UNLOCK();
                  if (lVar14 == 0) {
                    uStack_2c0 = 0xd7b9382;
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    uStack_2c0 = 0xd7b938a;
                    FUN_0412c2d0(plVar27);
                  }
                }
                ppppppcVar15 = uStack_280;
                if (uStack_280 != (code ******)0x0) {
                  LOCK();
                  ppppppcVar1 = uStack_280 + 1;
                  pppppcVar2 = *ppppppcVar1;
                  *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                  UNLOCK();
                  if (pppppcVar2 == (code *****)0x0) {
                    uStack_2c0 = 0xd7b93af;
                    (*(code *)(*uStack_280)[2])(uStack_280);
                    uStack_2c0 = 0xd7b93b7;
                    FUN_0412c2d0(ppppppcVar15);
                  }
                }
                ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
              }
              unaff_RBX = (ulong)uStack_290;
              pppppppcStack_278 = (code *******)&UNK_06529070;
              ppppppcStack_270 = (code ******)0x0;
              uStack_268 = CONCAT35(uStack_268._5_3_,0x3940bfbb0);
              uStack_258 = (code *******)0x0;
              puVar25 = &UNK_06529010;
              ppppppcStack_250 = (code ******)&UNK_06529010;
              puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
              _auStack_288 = pppppppcVar31;
              uStack_260 = ppppppcVar15;
              if (puVar30 == (undefined8 *)auStack_288) goto LAB_0d7b967b;
              if ((code *)puVar30[3] == (code *)0x0) {
                cVar10 = '\x03';
LAB_0d7ba1a2:
                _auStack_288 = (code *******)0x0;
                *puVar30 = pppppppcVar31;
                unaff_RBP = plStack_208;
                puVar21 = puStack_200;
              }
              else {
                uStack_2c0 = 0xd7b9432;
                (*(code *)puVar30[3])(puVar30);
                puVar21 = puStack_200;
                unaff_RBP = plStack_208;
                cVar10 = uStack_268._4_1_;
                if (uStack_268._4_1_ != '\0') {
                  pppppppcVar31 = _auStack_288;
                  if (uStack_268._4_1_ != '\x02') goto LAB_0d7ba1a2;
                  uStack_2c0 = 0xd7b9469;
                  (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                  cVar10 = uStack_268._4_1_;
                }
              }
              ppppppcVar15 = ppppppcStack_250;
              puVar30[2] = pppppppcStack_278;
              puVar30[3] = ppppppcStack_270;
              *(int *)(puVar30 + 4) = (int)uStack_268;
              *(char *)((long)puVar30 + 0x24) = cVar10;
              uVar4 = (undefined4)uStack_258;
              uVar9 = uStack_258._4_4_;
              uStack_258 = (code *******)0x0;
              *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
              *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
              *(undefined4 *)(puVar30 + 6) = uVar4;
              *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
              ppppppcStack_250 = (code ******)0x0;
              puVar30[7] = ppppppcVar15;
              if (ppppppcStack_270 != (code ******)0x0) {
                uStack_2c0 = 0xd7ba20e;
                (*(code *)ppppppcStack_270)(auStack_288);
              }
              goto LAB_0d7b8cb0;
            }
LAB_0d7b8d24:
            auStack_1e8._8_8_ = auVar33._8_8_;
            if (*(long *)(uStack_188 + 0x1f8) == auStack_1e8._8_8_) {
LAB_0d7b94c6:
              auStack_1e8._8_8_ = auVar33._8_8_;
              unaff_R15 = auStack_1e8._8_8_;
              auStack_1e8._0_8_ = auVar33._0_8_;
              auStack_1e8 = auVar33;
              if (*(long *)(uStack_188 + 0x1f0) == 0) {
                uStack_2c0 = 0xd7b96a8;
                lVar14 = func_0x048aead0();
                iVar12 = *(int *)(lVar14 + 8);
                if (auStack_1e8._0_8_ == 0) goto LAB_0d7b96bc;
LAB_0d7b94ea:
                if (iVar12 != *(int *)(auStack_1e8._0_8_ + 8)) {
LAB_0d7b96d2:
                  unaff_RBX = (ulong)uStack_290;
                  auVar33 = auStack_1e8;
                  lVar14 = auStack_1e8._0_8_;
                  goto joined_r0x0d7b96ec;
                }
              }
              else {
                iVar12 = *(int *)(*(long *)(uStack_188 + 0x1f0) + 8);
                bVar32 = auStack_1e8._0_8_ != 0;
                if (bVar32) goto LAB_0d7b94ea;
LAB_0d7b96bc:
                uStack_2c0 = 0xd7b96c9;
                lVar14 = func_0x048aead0(auStack_1e8._8_8_);
                if (iVar12 != *(int *)(lVar14 + 8)) goto LAB_0d7b96d2;
              }
              unaff_RBX = (ulong)uStack_290;
              if (lStack_1f0 != 0) {
                uStack_2c0 = 0xd7b9513;
                uVar18 = func_0x04522af0(lStack_1f0);
                uStack_2c0 = 0xd7b951b;
                lVar14 = func_0x0451e770(uVar18);
                if (lVar14 != 0) {
                  pppppppcVar31 = *(code ********)(lVar14 + 8);
                  unaff_RBP = (long *)0x0;
                  if (pppppppcVar31 != (code *******)0x0) {
                    ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                    if (ppppppcVar15 == (code ******)0x0) {
                      uStack_2c0 = 0xd7b9553;
                      func_0x048b0de0(auStack_288,apppppppcStack_1d8);
                      _DAT_0f54fd90 = auStack_288;
                      uRam000000000f54fd94 = uStack_284;
                      uVar4 = (undefined4)uStack_280;
                      uVar9 = uStack_280._4_4_;
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
                      _DAT_0f54fd98 = uVar4;
                      uRam000000000f54fd9c = uVar9;
                      if (plVar27 != (long *)0x0) {
                        LOCK();
                        plVar23 = plVar27 + 1;
                        lVar14 = *plVar23;
                        *plVar23 = *plVar23 + -1;
                        UNLOCK();
                        if (lVar14 == 0) {
                          uStack_2c0 = 0xd7b958e;
                          (**(code **)(*plVar27 + 0x10))(plVar27);
                          uStack_2c0 = 0xd7b9596;
                          FUN_0412c2d0(plVar27);
                        }
                      }
                      ppppppcVar15 = uStack_280;
                      if (uStack_280 != (code ******)0x0) {
                        LOCK();
                        ppppppcVar1 = uStack_280 + 1;
                        pppppcVar2 = *ppppppcVar1;
                        *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                        UNLOCK();
                        if (pppppcVar2 == (code *****)0x0) {
                          uStack_2c0 = 0xd7b95bb;
                          (*(code *)(*uStack_280)[2])(uStack_280);
                          uStack_2c0 = 0xd7b95c3;
                          FUN_0412c2d0(ppppppcVar15);
                        }
                      }
                      ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                      unaff_RBX = (ulong)uStack_290;
                    }
                    pppppppcStack_278 = (code *******)&UNK_0652a650;
                    ppppppcStack_270 = (code ******)0x0;
                    uStack_268 = CONCAT35(uStack_268._5_3_,0x3a2ae78eb);
                    uStack_258 = (code *******)0x0;
                    puVar25 = &UNK_0652a630;
                    ppppppcStack_250 = (code ******)&UNK_0652a630;
                    puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
                    _auStack_288 = pppppppcVar31;
                    uStack_260 = ppppppcVar15;
                    if (puVar30 == (undefined8 *)auStack_288) goto LAB_0d7b967b;
                    if ((code *)puVar30[3] == (code *)0x0) {
                      cVar10 = '\x03';
LAB_0d7ba274:
                      _auStack_288 = (code *******)0x0;
                      *puVar30 = pppppppcVar31;
                      unaff_RBP = plStack_208;
                      puVar21 = puStack_200;
                    }
                    else {
                      uStack_2c0 = 0xd7b963a;
                      (*(code *)puVar30[3])(puVar30);
                      puVar21 = puStack_200;
                      unaff_RBP = plStack_208;
                      cVar10 = uStack_268._4_1_;
                      if (uStack_268._4_1_ != '\0') {
                        pppppppcVar31 = _auStack_288;
                        if (uStack_268._4_1_ != '\x02') goto LAB_0d7ba274;
                        uStack_2c0 = 0xd7b9671;
                        (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                        cVar10 = uStack_268._4_1_;
                      }
                    }
                    ppppppcVar15 = ppppppcStack_250;
                    puVar30[2] = pppppppcStack_278;
                    puVar30[3] = ppppppcStack_270;
                    *(int *)(puVar30 + 4) = (int)uStack_268;
                    *(char *)((long)puVar30 + 0x24) = cVar10;
                    uVar4 = (undefined4)uStack_258;
                    uVar9 = uStack_258._4_4_;
                    uStack_258 = (code *******)0x0;
                    *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
                    *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
                    *(undefined4 *)(puVar30 + 6) = uVar4;
                    *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
                    ppppppcStack_250 = (code ******)0x0;
                    puVar30[7] = ppppppcVar15;
                    if (ppppppcStack_270 != (code ******)0x0) {
                      uStack_2c0 = 0xd7ba2e0;
                      (*(code *)ppppppcStack_270)(auStack_288);
                    }
                    goto LAB_0d7b8cb0;
                  }
                }
              }
              puVar25 = &UNK_014c1cd5;
              register0x00000020 = (BADSPACEBASE *)&uStack_2c0;
              uStack_2c0 = 0xd7bb88b;
              lVar14 = lStack_198;
              param_1 = lStack_1f0;
              goto SUB_0d7c48b0;
            }
LAB_0d7b8d34:
            auStack_1e8._0_8_ = auVar33._0_8_;
            lVar14 = auStack_1e8._0_8_;
joined_r0x0d7b96ec:
            auStack_1e8 = auVar33;
            auVar8 = auStack_1e8;
            if (lVar14 == 0) {
              uVar18 = auStack_1e8._8_8_;
              uStack_2c0 = 0xd7b8d4c;
              uVar19 = func_0x048aead0(auStack_1e8._8_8_);
              auVar8._8_8_ = uVar18;
              auVar8._0_8_ = uVar19;
            }
            uStack_2c0 = 0xd7b8d57;
            lVar14 = (**(code **)(auVar8._0_8_ + 0x28))(auStack_1e8._8_8_);
            if (*(long *)(uStack_188 + 0x1f8) == auVar8._8_8_) {
              if (*(long *)(uStack_188 + 0x1f0) == 0) {
                uStack_2c0 = 0xd7b9851;
                lVar24 = func_0x048aead0();
                unaff_RBX = (ulong)uStack_290;
                if (*(int *)(lVar24 + 8) == *(int *)(lVar14 + 8)) goto LAB_0d7b8d93;
              }
              else if (*(int *)(*(long *)(uStack_188 + 0x1f0) + 8) == *(int *)(lVar14 + 8)) {
LAB_0d7b8d93:
                if (lStack_1f0 != 0) {
                  uStack_2c0 = 0xd7b8daf;
                  uVar18 = func_0x04522af0(lStack_1f0);
                  uStack_2c0 = 0xd7b8db7;
                  lVar14 = func_0x0451e770(uVar18);
                  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
                    ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                    if (ppppppcVar15 == (code ******)0x0) {
                      uStack_2c0 = 0xd7b8df0;
                      func_0x048b0de0(auStack_288,apppppppcStack_1d8);
                      _DAT_0f54fd90 = auStack_288;
                      uRam000000000f54fd94 = uStack_284;
                      uVar4 = (undefined4)uStack_280;
                      uVar9 = uStack_280._4_4_;
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
                      _DAT_0f54fd98 = uVar4;
                      uRam000000000f54fd9c = uVar9;
                      if (plVar27 != (long *)0x0) {
                        LOCK();
                        plVar23 = plVar27 + 1;
                        lVar24 = *plVar23;
                        *plVar23 = *plVar23 + -1;
                        UNLOCK();
                        if (lVar24 == 0) {
                          uStack_2c0 = 0xd7b8e2b;
                          (**(code **)(*plVar27 + 0x10))(plVar27);
                          uStack_2c0 = 0xd7b8e33;
                          FUN_0412c2d0(plVar27);
                        }
                      }
                      ppppppcVar15 = uStack_280;
                      if (uStack_280 != (code ******)0x0) {
                        LOCK();
                        ppppppcVar1 = uStack_280 + 1;
                        pppppcVar2 = *ppppppcVar1;
                        *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                        UNLOCK();
                        if (pppppcVar2 == (code *****)0x0) {
                          uStack_2c0 = 0xd7b8e5b;
                          (*(code *)(*uStack_280)[2])(uStack_280);
                          uStack_2c0 = 0xd7b8e63;
                          FUN_0412c2d0(ppppppcVar15);
                        }
                      }
                      ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                      unaff_RBX = (ulong)uStack_290;
                    }
                    auVar34._8_8_ = puStack_218;
                    auVar34._0_8_ = pppppppcStack_210;
                    _auStack_288 = (code *******)(lVar14 + 8);
                    pppppppcStack_278 = (code *******)&UNK_0652ab10;
                    ppppppcStack_270 = (code ******)0x0;
                    uStack_268 = CONCAT35(uStack_268._5_3_,0x31cb68b61);
                    uStack_258 = (code *******)0x0;
                    ppppppcStack_250 = (code ******)&UNK_0652aa70;
                    puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
                    uStack_260 = ppppppcVar15;
                    if (puVar30 == (undefined8 *)auStack_288) {
                      puVar30[5] = ppppppcVar15;
                      puVar30[6] = 0;
                      puVar30[7] = &UNK_0652aa70;
                      unaff_R12 = (ulong)(iVar13 + 1);
                      goto LAB_0d7b8cb3;
                    }
                    if ((code *)puVar30[3] == (code *)0x0) {
                      pppppppcVar31 = _auStack_288;
                      cVar10 = '\x03';
LAB_0d7bb153:
                      _auStack_288 = (code *******)0x0;
                      *puVar30 = pppppppcVar31;
                    }
                    else {
                      uStack_2c0 = 0xd7b8ee5;
                      (*(code *)puVar30[3])(puVar30);
                      cVar10 = uStack_268._4_1_;
                      if (uStack_268._4_1_ != '\0') {
                        pppppppcVar31 = _auStack_288;
                        if (uStack_268._4_1_ != '\x02') goto LAB_0d7bb153;
                        uStack_2c0 = 0xd7b8f0c;
                        (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                        cVar10 = uStack_268._4_1_;
                      }
                    }
                    ppppppcVar15 = ppppppcStack_250;
                    puVar30[2] = pppppppcStack_278;
                    puVar30[3] = ppppppcStack_270;
                    *(int *)(puVar30 + 4) = (int)uStack_268;
                    *(char *)((long)puVar30 + 0x24) = cVar10;
                    uVar4 = (undefined4)uStack_258;
                    uVar9 = uStack_258._4_4_;
                    uStack_258 = (code *******)0x0;
                    *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
                    *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
                    *(undefined4 *)(puVar30 + 6) = uVar4;
                    *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
                    ppppppcStack_250 = (code ******)0x0;
                    puVar30[7] = ppppppcVar15;
                    if (ppppppcStack_270 != (code ******)0x0) {
                      uStack_2c0 = 0xd7bb1af;
                      (*(code *)ppppppcStack_270)(auStack_288);
                    }
                    goto LAB_0d7b8cb0;
                  }
                }
                apppppppcStack_1d8[0] = (code *******)0x0;
                ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                if (ppppppcVar15 == (code ******)0x0) {
                  uStack_2c0 = 0xd7b9725;
                  func_0x048b0de0(auStack_288,auStack_148);
                  _DAT_0f54fd90 = auStack_288;
                  uRam000000000f54fd94 = uStack_284;
                  uVar4 = (undefined4)uStack_280;
                  uVar9 = uStack_280._4_4_;
                  _auStack_288 = (code *******)0x0;
                  uStack_280 = (code ******)0x0;
                  plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
                  _DAT_0f54fd98 = uVar4;
                  uRam000000000f54fd9c = uVar9;
                  if (plVar27 != (long *)0x0) {
                    LOCK();
                    plVar23 = plVar27 + 1;
                    lVar14 = *plVar23;
                    *plVar23 = *plVar23 + -1;
                    UNLOCK();
                    if (lVar14 == 0) {
                      uStack_2c0 = 0xd7b9760;
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      uStack_2c0 = 0xd7b9768;
                      FUN_0412c2d0(plVar27);
                    }
                  }
                  ppppppcVar15 = uStack_280;
                  if (uStack_280 != (code ******)0x0) {
                    LOCK();
                    ppppppcVar1 = uStack_280 + 1;
                    pppppcVar2 = *ppppppcVar1;
                    *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                    UNLOCK();
                    if (pppppcVar2 == (code *****)0x0) {
                      uStack_2c0 = 0xd7b978d;
                      (*(code *)(*uStack_280)[2])(uStack_280);
                      uStack_2c0 = 0xd7b9795;
                      FUN_0412c2d0(ppppppcVar15);
                    }
                  }
                  ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                  unaff_RBX = (ulong)uStack_290;
                }
                pppppppcStack_278 = (code *******)&UNK_0652ab10;
                ppppppcStack_270 = (code ******)0x0;
                uStack_268 = CONCAT35(uStack_268._5_3_,0x31cb68b61);
                _auStack_288 = (code *******)apppppppcStack_1d8;
                uStack_258 = (code *******)0x0;
                puVar25 = &UNK_0652aa70;
                ppppppcStack_250 = (code ******)&UNK_0652aa70;
                puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
                uStack_260 = ppppppcVar15;
                if (puVar30 == (undefined8 *)auStack_288) goto LAB_0d7b9a00;
                if ((code *)puVar30[3] == (code *)0x0) {
                  pppppppcVar31 = (code *******)apppppppcStack_1d8;
                  cVar10 = '\x03';
LAB_0d7ba96e:
                  _auStack_288 = (code *******)0x0;
                  *puVar30 = pppppppcVar31;
                }
                else {
                  uStack_2c0 = 0xd7b9818;
                  (*(code *)puVar30[3])(puVar30);
                  cVar10 = uStack_268._4_1_;
                  if (uStack_268._4_1_ != '\0') {
                    pppppppcVar31 = _auStack_288;
                    if (uStack_268._4_1_ != '\x02') goto LAB_0d7ba96e;
                    uStack_2c0 = 0xd7b983f;
                    (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                    cVar10 = uStack_268._4_1_;
                  }
                }
                ppppppcVar15 = ppppppcStack_250;
                puVar30[2] = pppppppcStack_278;
                puVar30[3] = ppppppcStack_270;
                *(int *)(puVar30 + 4) = (int)uStack_268;
                *(char *)((long)puVar30 + 0x24) = cVar10;
                uVar4 = (undefined4)uStack_258;
                uVar9 = uStack_258._4_4_;
                uStack_258 = (code *******)0x0;
                *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
                *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
                *(undefined4 *)(puVar30 + 6) = uVar4;
                *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
                ppppppcStack_250 = (code ******)0x0;
                puVar30[7] = ppppppcVar15;
                if (ppppppcStack_270 != (code ******)0x0) {
                  uStack_2c0 = 0xd7ba9ca;
                  (*(code *)ppppppcStack_270)(auStack_288);
                }
                goto LAB_0d7b8cb0;
              }
            }
            if (*(long *)(uStack_188 + 0x208) != auStack_1e8._8_8_) {
LAB_0d7b9a50:
              uStack_2c0 = 0xd7b9a5d;
              func_0x05d84ba0(apppppppcStack_1d8);
              uVar11 = uStack_17c;
              if (uStack_28c < (uint)puVar21) {
                uStack_48 = uStack_28c;
                uStack_38 = 1;
                uStack_2c0 = 0xd7b9a8f;
                uVar18 = (**(code **)(*unaff_RBP + 0x50))(unaff_RBP);
                pppppppcStack_2a8 = (code *******)CONCAT44(uStack_34,uStack_38);
                uStack_2b8 = uStack_48;
                uStack_2b4 = uStack_44;
                uStack_2b0 = uStack_40;
                uStack_2ac = uStack_3c;
                uStack_2c0 = 0xd7b9ac5;
                func_0x0d7bf7b0(lStack_198,0,auStack_1e8,uVar18,0);
                puVar28 = auStack_1e8;
                uStack_2c0 = 0xd7b9af8;
                func_0x0d7bfa90(auStack_288,lStack_1f0,
                                *(undefined8 *)(lStack_50 + (ulong)uStack_28c * 0x10),
                                *(undefined8 *)(lStack_50 + 8 + (ulong)uStack_28c * 0x10));
                if ((int)plStack_248 == 0) {
                  if (ppppppcStack_1c0 != (code ******)0x0) {
                    uStack_2c0 = 0xd7b9b3f;
                    (*(code *)ppppppcStack_1c0)(apppppppcStack_1d8);
                  }
                  pppppppcVar31 = _auStack_288;
                  if (uStack_268._4_1_ != '\0') {
                    if (uStack_268._4_1_ == '\x02') {
                      uStack_2c0 = 0xd7b9b6b;
                      (*(code *)pppppppcStack_278)(5,auStack_288,apppppppcStack_1d8);
                    }
                    else {
                      _auStack_288 = (code *******)0x0;
                      apppppppcStack_1d8[0] = pppppppcVar31;
                    }
                  }
                  ppppppcStack_1a0 = ppppppcStack_250;
                  uStack_1a8 = uStack_258;
                  pppppppcStack_1c8 = pppppppcStack_278;
                  ppppppcStack_1c0 = ppppppcStack_270;
                  uStack_1b8 = (int)uStack_268;
                  uStack_258 = (code *******)0x0;
                  ppppppcStack_250 = (code ******)0x0;
                  uStack_1b0 = uStack_260;
                  lVar14 = *(long *)(lStack_198 + 400);
                  cStack_1b4 = uStack_268._4_1_;
                  if (*(long *)(lStack_198 + 0x188) != lVar14) {
                    if ((*(byte *)(lVar14 + -0x28) & 1) != 0) {
                      uStack_2c0 = 0xd7b9c8b;
                      func_0x0412a280(*(undefined8 *)(lVar14 + -0x18),
                                      *(ulong *)(lVar14 + -0x28) & 0xfffffffffffffffe);
                    }
                    *(long *)(lStack_198 + 400) = lVar14 + -0x48;
                  }
                  uVar11 = uStack_17c;
                  if (((ulong)plStack_248 & 0xffffffff) != 0xffffffff) {
                    uStack_2c0 = 0xd7b9cca;
                    (**(code **)(&UNK_0f4855b0 + ((ulong)plStack_248 & 0xffffffff) * 8))
                              (auStack_148,auStack_288);
                  }
                  goto LAB_0d7b9cca;
                }
                if ((int)plStack_248 != 1) {
                  uStack_2c0 = 0xd7bb8a2;
                  func_0x04931450();
                  goto LAB_0d7bb8a2;
                }
                auVar34._8_8_ = uStack_280;
                auVar34._0_8_ = _auStack_288;
LAB_0d7bb630:
                bVar7 = false;
                bVar32 = false;
              }
              else {
LAB_0d7b9cca:
                if (ppppppcStack_1a0 == (code ******)0x0) {
                  if ((uVar11 <= uStack_28c) &&
                     (uStack_28c < *(int *)((long)unaff_RBP + 0xc) + (uint)puVar21)) {
                    uStack_2c0 = 0xd7b9e2a;
                    pppppppcVar31 =
                         (code *******)(**(code **)(*unaff_RBP + 0x30))(unaff_RBP,uStack_28c);
                    if (apppppppcStack_1d8 != (code ********)pppppppcVar31) {
                      uStack_1b0 = pppppppcVar31[5];
                      if (ppppppcStack_1c0 != (code ******)0x0) {
                        uStack_2c0 = 0xd7b9e61;
                        (*(code *)ppppppcStack_1c0)(apppppppcStack_1d8);
                      }
                      if (*(char *)((long)pppppppcVar31 + 0x24) == '\0') {
                        pppppppcStack_1c8 = (code *******)&UNK_0488e0b0;
                        uStack_1b8 = 0x48b5725f;
                        ppppppcStack_1c0 = (code ******)0x0;
                        cStack_1b4 = '\0';
                        apppppppcStack_1d8[0] = (code *******)0x0;
                        if (*(char *)((long)pppppppcVar31 + 0x24) == '\0') goto LAB_0d7b9e9b;
                      }
                      else {
                        uStack_2c0 = 0xd7b9e80;
                        (*(code *)pppppppcVar31[2])(4,pppppppcVar31,apppppppcStack_1d8);
                        if (*(char *)((long)pppppppcVar31 + 0x24) == '\0' || cStack_1b4 != '\0') {
LAB_0d7b9e9b:
                          uStack_1a8 = (code *******)pppppppcVar31[6];
                          ppppppcStack_1a0 = pppppppcVar31[7];
                          goto LAB_0d7bab3c;
                        }
                      }
                      uStack_1a8 = (code *******)0x0;
                      ppppppcStack_1a0 = (code ******)0x0;
                    }
LAB_0d7bab3c:
                    if (ppppppcStack_1a0 != (code ******)0x0) goto LAB_0d7b9cd9;
                  }
                  puVar28 = (undefined1 *)0x0;
                  uStack_2c0 = 0xd7bab6a;
                  func_0x0d7b38b0(auStack_288,*(undefined8 *)(lStack_198 + 0x18),
                                  *(undefined8 *)(lStack_198 + 0x20),auStack_1e8);
                  auStack_148._0_8_ = &UNK_014ab9ed;
                  if (((char)ppppppcStack_250 == '\x01') &&
                     (auStack_148._0_8_ = auStack_288 + 1, ((ulong)_auStack_288 & 1) != 0)) {
                    auStack_148._0_8_ = pppppppcStack_278;
                  }
                  uStack_2c0 = 0xd7babaf;
                  auVar34 = func_0x0d7d1a10(lStack_1f0,auStack_148,3,uStack_28c);
LAB_0d7babbf:
                  puStack_218 = auVar34._8_8_;
                  pppppppcStack_210 = auVar34._0_8_;
                  if ((char)ppppppcStack_250 != '\x01') goto LAB_0d7bb630;
                  pppppppcVar31 = _auStack_288;
                  pppppppcVar16 = pppppppcStack_278;
                  if (((ulong)ppppppcStack_270 & 1) != 0) {
                    uStack_2c0 = 0xd7babe4;
                    func_0x0412a280(uStack_260,(ulong)ppppppcStack_270 & 0xfffffffffffffffe);
                    auVar34._8_8_ = puStack_218;
                    auVar34._0_8_ = pppppppcStack_210;
                    pppppppcVar31 = _auStack_288;
                    pppppppcVar16 = pppppppcStack_278;
                  }
joined_r0x0d7babe9:
                  if (((ulong)pppppppcVar31 & 1) != 0) {
                    puStack_218 = auVar34._8_8_;
                    pppppppcStack_210 = auVar34._0_8_;
                    uStack_2c0 = 0xd7bb62d;
                    func_0x0412a280(pppppppcVar16,(ulong)pppppppcVar31 & 0xfffffffffffffffe);
                    auVar34._8_8_ = puStack_218;
                    auVar34._0_8_ = pppppppcStack_210;
                  }
                  goto LAB_0d7bb630;
                }
LAB_0d7b9cd9:
                uVar11 = uStack_28c;
                uStack_2c0 = 0xd7b9ceb;
                unaff_R14 = (undefined1 *)(**(code **)(*unaff_RBP + 0x50))(unaff_RBP,uStack_28c);
                bVar29 = unaff_R14[0xd4];
                bVar3 = unaff_R14[0xd5];
                uStack_2c0 = 0xd7b9d10;
                cVar10 = (**(code **)(*unaff_RBP + 0x38))(unaff_RBP,apppppppcStack_1d8,uVar11);
                if (cVar10 == '\0') {
LAB_0d7b9db1:
                  ppppppcVar15 = uStack_1b0;
                  puVar21 = puStack_200;
                  unaff_RBP = plStack_208;
                  auVar34._8_8_ = puStack_218;
                  auVar34._0_8_ = pppppppcStack_210;
                  if (((bVar29 | bVar3) & 1) == 0) {
                    if (unaff_R14[0xd6] != '\x01') {
                      if (*(long *)(unaff_R14 + 0x110) != 0) {
                        puVar28 = (undefined1 *)0x0;
                        uStack_2c0 = 0xd7b9fa1;
                        func_0x0d7b38b0(auStack_288,*(undefined8 *)(lStack_198 + 0x18),
                                        *(undefined8 *)(lStack_198 + 0x20),auStack_1e8);
                        auStack_148._0_8_ = &UNK_014ab9ed;
                        if (((char)ppppppcStack_250 == '\x01') &&
                           (auStack_148._0_8_ = auStack_288 + 1, ((ulong)_auStack_288 & 1) != 0)) {
                          auStack_148._0_8_ = pppppppcStack_278;
                        }
                        uStack_2c0 = 0xd7b9fe6;
                        auVar34 = func_0x0d7d1a10(lStack_1f0,auStack_148,4,uStack_28c);
                        goto LAB_0d7babbf;
                      }
                      bVar7 = true;
                      bVar32 = true;
                      goto joined_r0x0d7ba2f2;
                    }
                    puVar28 = (undefined1 *)0x0;
                    uStack_2c0 = 0xd7b9ee6;
                    func_0x0d7b38b0(auStack_148,*(undefined8 *)(lStack_198 + 0x18),
                                    *(undefined8 *)(lStack_198 + 0x20),auStack_1e8);
                    ppppppcVar15 = uStack_1b0;
                    unaff_RBP = plStack_208;
                    pppppppcVar31 = (code *******)&UNK_014ab9ed;
                    if (((char)ppppppcStack_110 == '\x01') &&
                       (pppppppcVar31 = (code *******)(auStack_148 + 1),
                       (auStack_148._0_8_ & 1) != 0)) {
                      pppppppcVar31 = pppppppcStack_138;
                    }
                    pppppppcStack_80 = pppppppcVar31;
                    if (ppppppcStack_1a0 == (code ******)0x0) {
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      uStack_2c0 = 0xd7ba30f;
                      func_0x048b1dc0(auStack_288);
                      pppppppcVar16 = _auStack_288;
                      ppppppcVar15 = uStack_280;
                    }
                    else {
                      pppppppcVar16 = uStack_1a8;
                      if (uStack_1a8 == (code *******)0x0) {
                        uStack_2c0 = 0xd7b9f59;
                        (*(code *)ppppppcStack_1a0)(0,apppppppcStack_1d8,0);
                        pppppppcVar16 = uStack_1a8;
                      }
                    }
                    uStack_2c0 = 0xd7ba336;
                    pppppppcStack_178 = pppppppcVar16;
                    uStack_170 = ppppppcVar15;
                    cVar10 = func_0x091396f0(&pppppppcStack_178);
                    ppppppcVar15 = uStack_1b0;
                    if (cVar10 == '\0') {
                      puStack_d8 = &UNK_0488e0b0;
                      pcStack_d0 = (code *)0x0;
                      uStack_c8 = (code *******)CONCAT35(uStack_c8._5_3_,0x48b5725f);
                      pppppppcStack_e8 = (code *******)0x0;
                      uStack_2c0 = 0xd7ba3ca;
                      (*(code *)pppppppcStack_1c8)(4,apppppppcStack_1d8,&pppppppcStack_e8);
                      ppppppcStack_c0 = uStack_1b0;
                      if (cStack_1b4 == '\0' || uStack_c8._4_1_ != '\0') {
                        pppppppcStack_b8 = uStack_1a8;
                        ppppppcStack_b0 = ppppppcStack_1a0;
                        if (ppppppcStack_1a0 != (code ******)0x0) goto LAB_0d7baed6;
                      }
                      else {
                        pppppppcStack_b8 = (code *******)0x0;
                        ppppppcStack_b0 = (code ******)0x0;
                      }
LAB_0d7baa94:
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      uStack_2c0 = 0xd7baaa6;
                      func_0x048b1dc0(auStack_288);
                      pppppppcVar16 = _auStack_288;
                      ppppppcVar15 = uStack_280;
                    }
                    else {
                      puStack_218 = unaff_R14;
                      if (ppppppcStack_1a0 == (code ******)0x0) {
                        _auStack_288 = (code *******)0x0;
                        uStack_280 = (code ******)0x0;
                        uStack_2c0 = 0xd7baacd;
                        func_0x048b1dc0(auStack_288);
                        pppppppcVar16 = _auStack_288;
                        ppppppcVar15 = uStack_280;
                      }
                      else {
                        pppppppcVar16 = uStack_1a8;
                        if (uStack_1a8 == (code *******)0x0) {
                          uStack_2c0 = 0xd7bae86;
                          (*(code *)ppppppcStack_1a0)(0,apppppppcStack_1d8,0);
                          pppppppcVar16 = uStack_1a8;
                        }
                      }
                      uStack_2c0 = 0xd7baeba;
                      _auStack_288 = pppppppcVar16;
                      uStack_280 = ppppppcVar15;
                      func_0x09b1cf80(&pppppppcStack_e8,auStack_288,0xf55160ec,apppppppcStack_1d8);
                      unaff_R14 = puStack_218;
                      if (ppppppcStack_b0 == (code ******)0x0) goto LAB_0d7baa94;
LAB_0d7baed6:
                      ppppppcVar15 = ppppppcStack_c0;
                      pppppppcVar16 = pppppppcStack_b8;
                      if (pppppppcStack_b8 == (code *******)0x0) {
                        uStack_2c0 = 0xd7baef9;
                        (*(code *)ppppppcStack_b0)(0,&pppppppcStack_e8,0);
                        pppppppcVar16 = pppppppcStack_b8;
                      }
                    }
                    uStack_2c0 = 0xd7baf1e;
                    pppppppcStack_178 = pppppppcVar16;
                    uStack_170 = ppppppcVar15;
                    cVar10 = func_0x0d7d18f0(&pppppppcStack_178);
                    ppppppcVar15 = ppppppcStack_c0;
                    if (cVar10 != '\0') goto LAB_0d7baf26;
                    if (ppppppcStack_b0 == (code ******)0x0) {
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      uStack_2c0 = 0xd7bb041;
                      func_0x048b1dc0(auStack_288);
                      pppppppcVar16 = _auStack_288;
                      ppppppcVar15 = uStack_280;
                    }
                    else {
                      pppppppcVar16 = pppppppcStack_b8;
                      if (pppppppcStack_b8 == (code *******)0x0) {
                        uStack_2c0 = 0xd7baff7;
                        (*(code *)ppppppcStack_b0)(0,&pppppppcStack_e8,0);
                        pppppppcVar16 = pppppppcStack_b8;
                      }
                    }
                    uStack_2c0 = 0xd7bb050;
                    auVar33 = func_0x0d8543b0();
                    if (ppppppcVar15 == auVar33._8_8_) {
                      if (pppppppcVar16 == (code *******)0x0) {
                        uStack_2c0 = 0xd7bb1bf;
                        lVar14 = func_0x048aead0(ppppppcVar15);
                        iVar13 = *(int *)(lVar14 + 8);
                      }
                      else {
                        iVar13 = *(int *)(pppppppcVar16 + 1);
                      }
                      if (auVar33._0_8_ == 0) {
                        uStack_2c0 = 0xd7bb1d9;
                        lVar14 = func_0x048aead0(auVar33._8_8_);
                        unaff_RBP = plStack_208;
                        puVar21 = puStack_200;
                        if (iVar13 == *(int *)(lVar14 + 8)) goto LAB_0d7baf26;
                        goto LAB_0d7bb1f2;
                      }
                      unaff_RBP = plStack_208;
                      puVar21 = puStack_200;
                      if (iVar13 != *(int *)(auVar33._0_8_ + 8)) goto LAB_0d7bb1f2;
LAB_0d7baf26:
                      uStack_2c0 = 0xd7baf33;
                      lVar14 = func_0x04522600(lStack_1f0);
                      uVar11 = _DAT_0f728a58;
                      pppppppcVar16 = _DAT_0f728a50;
                      if (lVar14 == 0) {
                        auVar34 = ZEXT816(0);
                      }
                      else {
                        puVar5 = *(ulong **)(lVar14 + 8);
                        if ((puVar5 == (ulong *)0x0) ||
                           (uVar17 = *puVar5,
                           uVar17 == 0 || (int)puVar5[1] != *(int *)(lVar14 + 0x10))) {
                          uStack_108 = _DAT_0f728a50;
                          uStack_100 = _DAT_0f728a58;
                          puVar30 = &uStack_f8;
                          uStack_f8 = (undefined1 *)CONCAT44(uRam000000000f728a64,_DAT_0f728a60);
                          uStack_f0 = uRam000000000f728a68;
                          uStack_ec = uRam000000000f728a6c;
                          if (_DAT_0f728a50 != (code *******)0x0) {
                            uVar22 = *(uint *)(_DAT_0f728a50 + 1);
                            if (*_DAT_0f728a50 != (code ******)0x0 &&
                                *(uint *)(_DAT_0f728a50 + 1) == _DAT_0f728a58) {
                              uStack_2c0 = 0xd7bafbf;
                              func_0x0d8568b0(*_DAT_0f728a50,uStack_f8);
                              uVar22 = *(uint *)(pppppppcVar16 + 1);
                            }
                            goto LAB_0d7bb49b;
                          }
LAB_0d7bb50e:
                          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,
                                                (int)CONCAT71((int7)((ulong)puVar30 >> 8),1));
                          pppppppcVar16 = (code *******)0x0;
                          uVar11 = uStack_100;
LAB_0d7bb519:
                          uStack_258 = (code *******)0x0;
                          ppppppcStack_250 = (code ******)0x0;
                          uStack_268 = 0;
                          uStack_260 = (code ******)0x0;
                          pppppppcStack_278 = (code *******)0x0;
                          ppppppcStack_270 = (code ******)0x0;
                          _auStack_288 = (code *******)0x0;
                          uStack_280 = (code ******)0x0;
                          uStack_2c0 = 0xd7bb53d;
                          func_0x05d84ba0(auStack_288);
                        }
                        else {
                          uStack_170 = (code ******)(uVar17 + 0x10);
                          _auStack_288 = (code *******)((ulong)_auStack_288 & 0xffffffffffff0000);
                          uStack_280 = (code ******)&UNK_0d80ce90;
                          pppppppcStack_278 = (code *******)&UNK_0d80d080;
                          plStack_248 = (long *)0x0;
                          uStack_238 = 0;
                          uStack_230 = 0x1000000b0;
                          plStack_228 = (long *)0x0;
                          pppppppcStack_178 = (code *******)&UNK_0f4864f0;
                          uStack_2c0 = 0xd7bb12a;
                          pppppppcStack_158 = (code *******)&pppppppcStack_178;
                          func_0x065bdd40(&pppppppcStack_178,&uStack_268);
                          if ((code ********)pppppppcStack_158 == &pppppppcStack_178) {
                            lVar14 = 0x20;
LAB_0d7bb23b:
                            uStack_2c0 = 0xd7bb241;
                            (**(code **)((long)*pppppppcStack_158 + lVar14))();
                          }
                          else {
                            lVar14 = 0x28;
                            if (pppppppcStack_158 != (code *******)0x0) goto LAB_0d7bb23b;
                          }
                          uStack_2c0 = 0xd7bb24e;
                          puStack_218 = (undefined1 *)func_0x0d856c70(uVar17,auStack_288);
                          plVar27 = plStack_228;
                          plStack_228 = (long *)0x0;
                          if (plVar27 != (long *)0x0) {
                            uStack_2c0 = 0xd7bb277;
                            (**(code **)(*plVar27 + 8))();
                          }
                          if (plStack_248 == &uStack_268) {
                            lVar14 = 0x20;
LAB_0d7bb297:
                            uStack_2c0 = 0xd7bb29d;
                            (**(code **)(*plStack_248 + lVar14))();
                          }
                          else {
                            lVar14 = 0x28;
                            if (plStack_248 != (long *)0x0) goto LAB_0d7bb297;
                          }
                          pppppppcStack_210 =
                               (code *******)CONCAT71(pppppppcStack_210._1_7_,extraout_DL_00);
                          if ((int)puStack_218 != -1) {
                            uStack_94 = 0xecc9f586;
                            uStack_1f8 = uVar17 + 0x70;
                            plVar27 = (long *)(*(long *)(uVar17 + 0x70) +
                                              (ulong)((int)((ulong)(*(long *)(uVar17 + 0x78) -
                                                                   *(long *)(uVar17 + 0x70)) >> 3) -
                                                      1U & 0xecc9f586) * 8);
                            do {
                              if (*plVar27 == -1) {
                                plVar27 = *(long **)(uVar17 + 0x90);
                                plVar23 = plVar27;
                                goto LAB_0d7bb325;
                              }
                              lVar14 = *plVar27 * 0x20;
                              plVar27 = (long *)(*(long *)(uVar17 + 0x88) + lVar14);
                            } while (*(int *)(*(long *)(uVar17 + 0x88) + 8 + lVar14) != -0x13360a7a)
                            ;
                            plVar23 = *(long **)(uVar17 + 0x90);
LAB_0d7bb325:
                            if (plVar27 == plVar23) {
                              uStack_2c0 = 0xd7bb670;
                              ppppppcVar15 = (code ******)
                                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80)
                              ;
                              if (ppppppcVar15 == (code ******)0x0) {
                                uStack_2c0 = 0xd7bb7c8;
                                func_0x0eec74c0(0x80,0);
                              }
                              ppppppcVar15[1] = (code *****)0x0;
                              ppppppcVar15[2] = (code *****)0x0;
                              *ppppppcVar15 = (code *****)&UNK_0f486570;
                              if (DAT_0f641910 == '\0') {
                                uStack_2c0 = 0xd7bb7d9;
                                iVar13 = func_0x04108328(&DAT_0f641910);
                                if (iVar13 != 0) {
                                  uStack_2c0 = 0xd7bb7f0;
                                  func_0x099de840(0xf6418f8);
                                  uStack_2c0 = 0xd7bb7fc;
                                  func_0x0410844d(&DAT_0f641910);
                                }
                              }
                              pppppppcStack_178 = (code *******)(ppppppcVar15 + 3);
                              ppppppcVar15[8] = (code *****)0x0;
                              ppppppcVar15[9] = (code *****)0x0;
                              ppppppcVar15[6] = (code *****)0x0;
                              ppppppcVar15[7] = (code *****)0x0;
                              ppppppcVar15[4] = (code *****)0x0;
                              ppppppcVar15[5] = (code *****)0x0;
                              ppppppcVar15[10] = (code *****)0xf6418f8;
                              *(undefined1 *)(ppppppcVar15 + 0xb) = 1;
                              ppppppcVar15[0xc] = (code *****)0xffffffff;
                              ppppppcVar15[3] = (code *****)&UNK_0f4865c0;
                              ppppppcVar15[0xd] = (code *****)0x0;
                              ppppppcVar15[0xe] = (code *****)0x0;
                              ppppppcVar15[0xf] = (code *****)0x0;
                              uStack_2c0 = 0xd7bb70c;
                              uStack_170 = ppppppcVar15;
                              func_0x065bf170(uStack_1f8,&uStack_94,&pppppppcStack_178);
                              pppppppcStack_278 = (code *******)&UNK_065bf690;
                              ppppppcStack_270 = (code ******)0x0;
                              uStack_268 = CONCAT35(uStack_268._5_3_,0x3145ad657);
                              uStack_2c0 = 0xd7bb749;
                              _auStack_288 = (code *******)(uVar17 + 0x38);
                              (*(code *)(*pppppppcStack_178)[5])(pppppppcStack_178,auStack_288);
                              if (ppppppcStack_270 != (code ******)0x0) {
                                uStack_2c0 = 0xd7bb758;
                                (*(code *)ppppppcStack_270)(auStack_288);
                              }
                              ppppppcVar15 = uStack_170;
                              pppppppcVar16 = pppppppcStack_178;
                              if (uStack_170 != (code ******)0x0) {
                                LOCK();
                                ppppppcVar1 = uStack_170 + 1;
                                pppppcVar2 = *ppppppcVar1;
                                *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                                UNLOCK();
                                if (pppppcVar2 == (code *****)0x0) {
                                  pppppppcStack_a8 = pppppppcStack_178;
                                  uStack_2c0 = 0xd7bb798;
                                  (*(code *)(*uStack_170)[2])(uStack_170);
                                  uStack_2c0 = 0xd7bb7a0;
                                  FUN_0412c2d0(ppppppcVar15);
                                  pppppppcVar16 = pppppppcStack_a8;
                                }
                              }
                            }
                            else {
                              pppppppcVar16 = (code *******)plVar27[2];
                            }
                            uStack_2c0 = 0xd7bb349;
                            auVar33 = func_0x0d8547a0(pppppppcVar16,puStack_218,0,0);
                            lStack_60 = auVar33._8_8_;
                            uStack_58 = auVar33._0_8_;
                            lStack_68 = lStack_60 + -1;
                            uStack_2c0 = 0xd7bb375;
                            pppppppcStack_a8 = pppppppcVar16;
                            uVar18 = func_0x0d80f500(pppppppcVar16);
                            uStack_2c0 = 0xd7bb380;
                            ppppppcVar15 = (code ******)func_0x0eee2e90(pppppppcVar31);
                            if ((code ******)0xfffffffffffffff7 < ppppppcVar15) {
LAB_0d7bb8a2:
                              uStack_2c0 = 0xd7bb8a7;
                              uVar18 = FUN_04882e30();
                              uStack_2c0 = 0xd7bb8af;
                              uVar18 = func_0x04882e20(uVar18);
                              uStack_2c0 = 0xd7bb8bf;
                              func_0x065be050(&pppppppcStack_178);
                              if (pcStack_d0 != (code *)0x0) {
                                uStack_2c0 = 0xd7bbc06;
                                (*pcStack_d0)(&pppppppcStack_e8);
                              }
                              uStack_2c0 = 0xd7bbc4a;
                              func_0x098f3800(auStack_148);
                              if (ppppppcStack_1c0 != (code ******)0x0) {
                                uStack_2c0 = 0xd7bbd38;
                                (*(code *)ppppppcStack_1c0)(apppppppcStack_1d8);
                              }
                              uStack_2c0 = 0xd7bbd40;
                              uVar18 = func_0x0eee2d70(uVar18);
                              uStack_2c0 = 0xd7bbd48;
                              func_0x04882e20(uVar18);
                              pcVar6 = (code *)swi(3);
                              uVar18 = (*pcVar6)();
                              return uVar18;
                            }
                            uStack_1f8 = uVar17;
                            if (ppppppcVar15 < (code ******)0x17) {
                              _auStack_288 = (code *******)
                                             CONCAT71(stack0xfffffffffffffd79,
                                                      (char)ppppppcVar15 * '\x02');
                              pppppppcVar16 = (code *******)(auStack_288 + 1);
                              if (ppppppcVar15 != (code ******)0x0) goto LAB_0d7bb40e;
                            }
                            else {
                              uVar17 = ((ulong)ppppppcVar15 | 7) + 1;
                              if (((ulong)ppppppcVar15 | 7) == 0x17) {
                                uVar17 = 0x1a;
                              }
                              uStack_2c0 = 0xd7bb3e4;
                              uStack_70 = uVar18;
                              pppppppcVar16 =
                                   (code *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
                              if (pppppppcVar16 == (code *******)0x0) {
                                uStack_2c0 = 0xd7bb7b7;
                                func_0x0eec74c0(uVar17,0);
                              }
                              _auStack_288 = (code *******)(uVar17 | 1);
                              uVar18 = uStack_70;
                              uStack_280 = ppppppcVar15;
                              pppppppcStack_278 = pppppppcVar16;
LAB_0d7bb40e:
                              uStack_2c0 = 0xd7bb41f;
                              func_0x0eee2ee0(pppppppcVar16,pppppppcVar31,ppppppcVar15);
                            }
                            *(undefined1 *)((long)pppppppcVar16 + (long)ppppppcVar15) = 0;
                            uStack_2c0 = 0xd7bb43c;
                            func_0x0d859dc0(uVar18,auStack_288,*(undefined4 *)(unaff_R14 + 0xd0));
                            uVar17 = uStack_1f8;
                            if (((ulong)_auStack_288 & 1) != 0) {
                              uStack_2c0 = 0xd7bb45e;
                              func_0x0412a280(pppppppcStack_278,
                                              (ulong)_auStack_288 & 0xfffffffffffffffe);
                            }
                          }
                          pppppppcVar16 = *(code ********)(uVar17 + 8);
                          if (pppppppcVar16 == (code *******)0x0) {
                            uStack_108 = (code *******)0x0;
                            uStack_100 = 0;
                            uStack_f8 = puStack_218;
                            puVar30 = (undefined8 *)0x0;
                            uStack_f0 = CONCAT31(uStack_f0._1_3_,pppppppcStack_210._0_1_);
                            goto LAB_0d7bb50e;
                          }
                          uVar11 = *(uint *)(pppppppcVar16 + 1);
                          uStack_f8 = puStack_218;
                          uStack_f0 = CONCAT31(uStack_f0._1_3_,pppppppcStack_210._0_1_);
                          uVar22 = uVar11;
                          uStack_108 = pppppppcVar16;
                          uStack_100 = uVar11;
LAB_0d7bb49b:
                          uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
                          if ((uVar22 != uVar11) || (*pppppppcVar16 == (code ******)0x0))
                          goto LAB_0d7bb519;
                          uStack_2c0 = 0xd7bb4c8;
                          func_0x0d8572c0(auStack_288,*pppppppcVar16,uStack_f8);
                          uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
                          uVar11 = uVar22;
                        }
                        lVar14 = lStack_1f0;
                        uStack_2c0 = 0xd7bb553;
                        uVar18 = func_0x0d7b7490(lStack_1f0,auStack_288);
                        uStack_2c0 = 0xd7bb55e;
                        auVar34 = func_0x04527d20(lVar14,uVar18);
                        unaff_R14 = auVar34._0_8_;
                        if (ppppppcStack_270 != (code ******)0x0) {
                          uStack_2c0 = 0xd7bb575;
                          (*(code *)ppppppcStack_270)(auStack_288);
                        }
                        unaff_RBP = plStack_208;
                        puVar21 = puStack_200;
                        if (((char)uStack_1f8 == '\0') &&
                           (*pppppppcVar16 != (code ******)0x0 &&
                            *(uint *)(pppppppcVar16 + 1) == uVar11)) {
                          uStack_2c0 = 0xd7bb5b6;
                          puStack_218 = (undefined1 *)auVar34._8_8_;
                          pppppppcStack_210 = (code *******)unaff_R14;
                          func_0x0d8569b0(*pppppppcVar16,uStack_f8,uStack_f0);
                          auVar34._8_8_ = puStack_218;
                          auVar34._0_8_ = pppppppcStack_210;
                          unaff_RBP = plStack_208;
                          puVar21 = puStack_200;
                        }
                      }
                    }
                    else {
LAB_0d7bb1f2:
                      puVar21 = puStack_200;
                      unaff_RBP = plStack_208;
                      uStack_2c0 = 0xd7bb210;
                      auVar34 = func_0x0d7d1a10(lStack_1f0,&pppppppcStack_80,3,uStack_28c);
                    }
                    if (pcStack_d0 != (code *)0x0) {
                      puStack_218 = auVar34._8_8_;
                      pppppppcStack_210 = auVar34._0_8_;
                      uStack_2c0 = 0xd7bb5dd;
                      (*pcStack_d0)(&pppppppcStack_e8);
                      auVar34._8_8_ = puStack_218;
                      auVar34._0_8_ = pppppppcStack_210;
                    }
                    puStack_218 = auVar34._8_8_;
                    pppppppcStack_210 = auVar34._0_8_;
                    if ((char)ppppppcStack_110 != '\x01') goto LAB_0d7bb630;
                    pppppppcVar31 = (code *******)auStack_148._0_8_;
                    pppppppcVar16 = pppppppcStack_138;
                    if (((ulong)pcStack_130 & 1) != 0) {
                      uStack_2c0 = 0xd7bb60a;
                      func_0x0412a280(ppppppcStack_120,(ulong)pcStack_130 & 0xfffffffffffffffe);
                      auVar34._8_8_ = puStack_218;
                      auVar34._0_8_ = pppppppcStack_210;
                      pppppppcVar31 = (code *******)auStack_148._0_8_;
                      pppppppcVar16 = pppppppcStack_138;
                    }
                    goto joined_r0x0d7babe9;
                  }
                  if (ppppppcStack_1a0 == (code ******)0x0) {
                    _auStack_288 = (code *******)0x0;
                    uStack_280 = (code ******)0x0;
                    uStack_2c0 = 0xd7ba014;
                    func_0x048b1dc0(auStack_288);
                    pppppppcVar31 = _auStack_288;
                    ppppppcVar15 = uStack_280;
                  }
                  else {
                    pppppppcVar31 = uStack_1a8;
                    if (uStack_1a8 == (code *******)0x0) {
                      uStack_2c0 = 0xd7b9df5;
                      (*(code *)ppppppcStack_1a0)(0,apppppppcStack_1d8,0);
                      pppppppcVar31 = uStack_1a8;
                    }
                  }
                  uStack_2c0 = 0xd7ba03b;
                  pppppppcStack_e8 = pppppppcVar31;
                  ppppppcStack_e0 = ppppppcVar15;
                  cVar10 = func_0x091396f0(&pppppppcStack_e8);
                  ppppppcVar15 = uStack_1b0;
                  if (cVar10 == '\0') {
                    pppppppcStack_138 = (code *******)&UNK_0488e0b0;
                    uStack_128 = 0x48b5725f;
                    pcStack_130 = (code *)0x0;
                    cStack_124 = '\0';
                    auStack_148._0_8_ = (code *******)0x0;
                    uStack_2c0 = 0xd7ba0db;
                    (*(code *)pppppppcStack_1c8)(4,apppppppcStack_1d8,auStack_148);
                    ppppppcStack_120 = uStack_1b0;
                    if (cStack_1b4 == '\0' || cStack_124 != '\0') {
                      pppppppcStack_118 = uStack_1a8;
                      ppppppcStack_110 = ppppppcStack_1a0;
                      if (ppppppcStack_1a0 != (code ******)0x0) goto LAB_0d7ba47d;
                    }
                    else {
                      pppppppcStack_118 = (code *******)0x0;
                      ppppppcStack_110 = (code ******)0x0;
                    }
LAB_0d7ba24e:
                    _auStack_288 = (code *******)0x0;
                    uStack_280 = (code ******)0x0;
                    uStack_2c0 = 0xd7ba260;
                    func_0x048b1dc0(auStack_288);
                    pppppppcVar31 = _auStack_288;
                    ppppppcVar15 = uStack_280;
                  }
                  else {
                    if (ppppppcStack_1a0 == (code ******)0x0) {
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      uStack_2c0 = 0xd7ba43b;
                      func_0x048b1dc0(auStack_288);
                      pppppppcVar31 = _auStack_288;
                      ppppppcVar15 = uStack_280;
                    }
                    else {
                      pppppppcVar31 = uStack_1a8;
                      if (uStack_1a8 == (code *******)0x0) {
                        uStack_2c0 = 0xd7ba073;
                        (*(code *)ppppppcStack_1a0)(0,apppppppcStack_1d8,0);
                        pppppppcVar31 = uStack_1a8;
                      }
                    }
                    uStack_2c0 = 0xd7ba46c;
                    _auStack_288 = pppppppcVar31;
                    uStack_280 = ppppppcVar15;
                    func_0x09b1cf80(auStack_148,auStack_288,0xf55160ec,apppppppcStack_1d8);
                    if (ppppppcStack_110 == (code ******)0x0) goto LAB_0d7ba24e;
LAB_0d7ba47d:
                    ppppppcVar15 = ppppppcStack_120;
                    pppppppcVar31 = pppppppcStack_118;
                    if (pppppppcStack_118 == (code *******)0x0) {
                      uStack_2c0 = 0xd7ba4a0;
                      (*(code *)ppppppcStack_110)(0,auStack_148,0);
                      pppppppcVar31 = pppppppcStack_118;
                    }
                  }
                  uStack_2c0 = 0xd7ba4c5;
                  pppppppcStack_e8 = pppppppcVar31;
                  ppppppcStack_e0 = ppppppcVar15;
                  cVar10 = func_0x0d7d18f0(&pppppppcStack_e8);
                  if (cVar10 == '\0') {
                    uStack_2c0 = 0xd7ba5f7;
                    func_0x078fd850(auStack_288,auStack_148);
                    ppppppcVar15 = uStack_260;
                    pppppppcVar31 = _auStack_288;
                    if (uStack_268._4_1_ == '\x02') {
                      pppppppcVar31 = (code *******)auStack_288;
                    }
                    if (pppppppcVar31 == (code *******)0x0 || (int)uStack_268 != -0x5f14f0f8) {
                      if (uStack_258 == (code *******)0x0) {
                        uStack_2c0 = 0xd7ba643;
                        (*(code *)ppppppcStack_250)(0,auStack_288,0);
                      }
                      pppppppcVar31 = _auStack_288;
                      if (uStack_268._4_1_ == '\x02') {
                        pppppppcVar31 = (code *******)auStack_288;
                      }
                      uStack_2c0 = 0xd7ba66b;
                      pppppppcVar31 =
                           (code *******)
                           func_0x0488e200(ppppppcVar15,uStack_258,0xa0eb0f08,pppppppcVar31);
                    }
                    ppppppcStack_90 = *pppppppcVar31;
                    uVar18 = 0;
                    if (ppppppcStack_270 != (code ******)0x0) {
                      uStack_2c0 = 0xd7ba687;
                      uVar18 = (*(code *)ppppppcStack_270)(auStack_288);
                    }
                    puStack_218 = (undefined1 *)
                                  CONCAT44(puStack_218._4_4_,
                                           (int)CONCAT71((int7)((ulong)uVar18 >> 8),1));
                    if (bVar29 == 0) goto LAB_0d7ba699;
LAB_0d7ba4ed:
                    uStack_2c0 = 0xd7ba4fe;
                    func_0x078fd850(auStack_288,unaff_R14 + 0x50);
                    ppppppcVar15 = uStack_260;
                    pppppppcVar31 = _auStack_288;
                    if (uStack_268._4_1_ == '\x02') {
                      pppppppcVar31 = (code *******)auStack_288;
                    }
                    if (pppppppcVar31 == (code *******)0x0 || (int)uStack_268 != -0x5f14f0f8) {
                      if (uStack_258 == (code *******)0x0) {
                        uStack_2c0 = 0xd7ba55a;
                        (*(code *)ppppppcStack_250)(0,auStack_288,0);
                      }
                      pppppppcVar31 = _auStack_288;
                      if (uStack_268._4_1_ == '\x02') {
                        pppppppcVar31 = (code *******)auStack_288;
                      }
                      uStack_2c0 = 0xd7ba582;
                      pppppppcVar31 =
                           (code *******)
                           func_0x0488e200(ppppppcVar15,uStack_258,0xa0eb0f08,pppppppcVar31);
                    }
                    puVar21 = puStack_200;
                    unaff_RBP = plStack_208;
                    pppppppcStack_210 = (code *******)*pppppppcVar31;
                    if (ppppppcStack_270 != (code ******)0x0) {
                      uStack_2c0 = 0xd7ba5b0;
                      (*(code *)ppppppcStack_270)(auStack_288);
                    }
                    uStack_108 = pppppppcStack_210;
                    uStack_100 = CONCAT31(uStack_100._1_3_,1);
                    if (bVar3 == 0) goto LAB_0d7ba5d3;
LAB_0d7ba6c2:
                    unaff_R14 = unaff_R14 + 0x90;
                    uStack_2c0 = 0xd7ba6d9;
                    func_0x078fd850(auStack_288,unaff_R14);
                    ppppppcVar15 = uStack_260;
                    pppppppcVar31 = _auStack_288;
                    if (uStack_268._4_1_ == '\x02') {
                      pppppppcVar31 = (code *******)auStack_288;
                    }
                    if (pppppppcVar31 == (code *******)0x0 || (int)uStack_268 != -0x5f14f0f8) {
                      if (uStack_258 == (code *******)0x0) {
                        uStack_2c0 = 0xd7ba725;
                        (*(code *)ppppppcStack_250)(0,auStack_288,0);
                      }
                      pppppppcVar31 = _auStack_288;
                      if (uStack_268._4_1_ == '\x02') {
                        pppppppcVar31 = (code *******)auStack_288;
                      }
                      uStack_2c0 = 0xd7ba74d;
                      pppppppcVar31 =
                           (code *******)
                           func_0x0488e200(ppppppcVar15,uStack_258,0xa0eb0f08,pppppppcVar31);
                    }
                    pppppppcStack_210 = (code *******)*pppppppcVar31;
                    if (ppppppcStack_270 != (code ******)0x0) {
                      uStack_2c0 = 0xd7ba76b;
                      (*(code *)ppppppcStack_270)(auStack_288);
                    }
                    pppppppcStack_80 = pppppppcStack_210;
                    uStack_78 = 1;
                  }
                  else {
                    ppppppcStack_90 = (code ******)((ulong)ppppppcStack_90 & 0xffffffffffffff00);
                    puStack_218 = (undefined1 *)((ulong)puStack_218 & 0xffffffff00000000);
                    if (bVar29 != 0) goto LAB_0d7ba4ed;
LAB_0d7ba699:
                    uStack_108 = (code *******)((ulong)uStack_108 & 0xffffffffffffff00);
                    uStack_100 = uStack_100 & 0xffffff00;
                    unaff_RBP = plStack_208;
                    puVar21 = puStack_200;
                    if (bVar3 != 0) goto LAB_0d7ba6c2;
LAB_0d7ba5d3:
                    pppppppcStack_80 = (code *******)((ulong)pppppppcStack_80 & 0xffffffffffffff00);
                    uStack_78 = 0;
                  }
                  uStack_2c0 = 0xd7ba793;
                  lVar14 = func_0x04522600(lStack_1f0);
                  iVar13 = _DAT_0f728968;
                  pppppppcVar31 = _DAT_0f728960;
                  if (lVar14 == 0) {
                    auVar34 = ZEXT816(0);
                  }
                  else {
                    plVar27 = *(long **)(lVar14 + 8);
                    if ((plVar27 == (long *)0x0) ||
                       (lVar24 = *plVar27, lVar24 == 0 || (int)plVar27[1] != *(int *)(lVar14 + 0x10)
                       )) {
                      pppppppcStack_178 = _DAT_0f728960;
                      uStack_170 = (code ******)CONCAT44(uStack_170._4_4_,_DAT_0f728968);
                      puVar30 = &uStack_168;
                      uStack_168 = CONCAT44(uRam000000000f728974,_DAT_0f728970);
                      uStack_160 = uRam000000000f728978;
                      uStack_15c = uRam000000000f72897c;
                      if (_DAT_0f728960 != (code *******)0x0) {
                        iVar12 = *(int *)(_DAT_0f728960 + 1);
                        if (*_DAT_0f728960 != (code ******)0x0 &&
                            *(int *)(_DAT_0f728960 + 1) == _DAT_0f728968) {
                          uStack_2c0 = 0xd7ba81f;
                          func_0x0d8568b0(*_DAT_0f728960,uStack_168);
                          iVar12 = *(int *)(pppppppcVar31 + 1);
                        }
                        goto LAB_0d7bad39;
                      }
LAB_0d7bad9d:
                      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,
                                            (int)CONCAT71((int7)((ulong)puVar30 >> 8),1));
                      pppppppcVar31 = (code *******)0x0;
LAB_0d7bada8:
                      uStack_258 = (code *******)0x0;
                      ppppppcStack_250 = (code ******)0x0;
                      uStack_268 = 0;
                      uStack_260 = (code ******)0x0;
                      pppppppcStack_278 = (code *******)0x0;
                      ppppppcStack_270 = (code ******)0x0;
                      _auStack_288 = (code *******)0x0;
                      uStack_280 = (code ******)0x0;
                      uStack_2c0 = 0xd7badcc;
                      func_0x05d84ba0(auStack_288);
                    }
                    else {
                      ppppppcStack_e0 = (code ******)(lVar24 + 0x10);
                      _auStack_288 = (code *******)((ulong)_auStack_288 & 0xffffffffffff0000);
                      uStack_280 = (code ******)&UNK_0d7fb0c0;
                      pppppppcStack_278 = (code *******)&UNK_0d7fb2b0;
                      plStack_248 = (long *)0x0;
                      uStack_238 = 0;
                      uStack_230 = 0x1000000e8;
                      plStack_228 = (long *)0x0;
                      pppppppcStack_e8 = (code *******)&UNK_0f485d10;
                      uStack_2c0 = 0xd7ba8df;
                      uStack_c8 = (code *******)&pppppppcStack_e8;
                      func_0x065bdd40(&pppppppcStack_e8,&uStack_268);
                      if ((code ********)uStack_c8 == &pppppppcStack_e8) {
                        lVar14 = 0x20;
LAB_0d7bac0a:
                        uStack_2c0 = 0xd7bac10;
                        (**(code **)((long)*uStack_c8 + lVar14))();
                      }
                      else {
                        lVar14 = 0x28;
                        if (uStack_c8 != (code *******)0x0) goto LAB_0d7bac0a;
                      }
                      uStack_2c0 = 0xd7bac1d;
                      uVar18 = func_0x0d856c70(lVar24,auStack_288);
                      plVar27 = plStack_228;
                      plStack_228 = (long *)0x0;
                      if (plVar27 != (long *)0x0) {
                        uStack_2c0 = 0xd7bac42;
                        (**(code **)(*plVar27 + 8))();
                      }
                      if (plStack_248 == &uStack_268) {
                        puVar30 = (undefined8 *)0x20;
LAB_0d7bac62:
                        uStack_2c0 = 0xd7bac68;
                        puVar30 = (undefined8 *)(**(code **)(*plStack_248 + (long)puVar30))();
                      }
                      else {
                        puVar30 = (undefined8 *)0x28;
                        if (plStack_248 != (long *)0x0) goto LAB_0d7bac62;
                      }
                      if ((int)uVar18 != -1) {
                        uStack_2c0 = 0xd7bac7e;
                        uVar19 = func_0x0d7fced0(lVar24 + 0x38);
                        uStack_2c0 = 0xd7bac90;
                        auVar33 = func_0x0d8547a0(uVar19,uVar18,0,0);
                        uStack_1f8 = auVar33._8_8_;
                        pppppppcStack_210 = auVar33._0_8_;
                        uStack_2c0 = 0xd7bacaf;
                        uVar19 = func_0x0d7fda30(uVar19,uStack_1f8 - 1);
                        _auStack_288 = (code *******)((ulong)_auStack_288 & 0xffffffffffff0000);
                        uStack_2a0 = CONCAT71(uStack_77,uStack_78);
                        pppppppcStack_2a8 = pppppppcStack_80;
                        uStack_2b8 = (uint)uStack_108;
                        uStack_2b4 = uStack_108._4_4_;
                        uStack_2b0 = uStack_100;
                        uStack_2ac = uStack_fc;
                        puVar28 = (undefined1 *)((ulong)puStack_218 & 0xff);
                        uStack_2c0 = 0xd7bacf1;
                        puVar30 = (undefined8 *)
                                  func_0x0d859670(uVar19,auStack_288,uStack_28c,ppppppcStack_90);
                        if (((ulong)_auStack_288 & 1) != 0) {
                          uStack_2c0 = 0xd7bad0b;
                          puVar30 = (undefined8 *)
                                    func_0x0412a280(pppppppcStack_278,
                                                    (ulong)_auStack_288 & 0xfffffffffffffffe);
                        }
                      }
                      pppppppcVar31 = *(code ********)(lVar24 + 8);
                      uStack_168 = uVar18;
                      if (pppppppcVar31 == (code *******)0x0) {
                        pppppppcStack_178 = (code *******)0x0;
                        uStack_170 = (code ******)((ulong)uStack_170._4_4_ << 0x20);
                        uStack_160 = CONCAT31(uStack_160._1_3_,extraout_DL);
                        iVar13 = 0;
                        goto LAB_0d7bad9d;
                      }
                      iVar13 = *(int *)(pppppppcVar31 + 1);
                      uStack_170 = (code ******)CONCAT44(uStack_170._4_4_,iVar13);
                      uStack_160 = CONCAT31(uStack_160._1_3_,extraout_DL);
                      iVar12 = iVar13;
                      pppppppcStack_178 = pppppppcVar31;
LAB_0d7bad39:
                      uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
                      if ((iVar12 != iVar13) || (*pppppppcVar31 == (code ******)0x0))
                      goto LAB_0d7bada8;
                      uStack_2c0 = 0xd7bad66;
                      func_0x0d8572c0(auStack_288,*pppppppcVar31,uStack_168);
                      uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
                      iVar13 = iVar12;
                    }
                    lVar14 = lStack_1f0;
                    uStack_2c0 = 0xd7bade2;
                    uVar18 = func_0x0d7b7490(lStack_1f0,auStack_288);
                    uStack_2c0 = 0xd7baded;
                    auVar34 = func_0x04527d20(lVar14,uVar18);
                    unaff_R14 = auVar34._0_8_;
                    if (ppppppcStack_270 != (code ******)0x0) {
                      uStack_2c0 = 0xd7bae04;
                      (*(code *)ppppppcStack_270)(auStack_288);
                    }
                    unaff_RBP = plStack_208;
                    puVar21 = puStack_200;
                    if (((char)uStack_1f8 == '\0') &&
                       (*pppppppcVar31 != (code ******)0x0 && *(int *)(pppppppcVar31 + 1) == iVar13)
                       ) {
                      uStack_2c0 = 0xd7bae45;
                      puStack_218 = (undefined1 *)auVar34._8_8_;
                      pppppppcStack_210 = (code *******)unaff_R14;
                      func_0x0d8569b0(*pppppppcVar31,uStack_168,uStack_160);
                      auVar34._8_8_ = puStack_218;
                      auVar34._0_8_ = pppppppcStack_210;
                      unaff_RBP = plStack_208;
                      puVar21 = puStack_200;
                    }
                  }
                  if (pcStack_130 != (code *)0x0) {
                    puStack_218 = auVar34._8_8_;
                    pppppppcStack_210 = auVar34._0_8_;
                    uStack_2c0 = 0xd7bae70;
                    (*pcStack_130)(auStack_148);
                    auVar34._8_8_ = puStack_218;
                    auVar34._0_8_ = pppppppcStack_210;
                  }
                  goto LAB_0d7bb630;
                }
                uStack_2c0 = 0xd7b9d32;
                cVar10 = (**(code **)(*plStack_208 + 0x40))
                                   (plStack_208,apppppppcStack_1d8,uStack_28c);
                puVar21 = puStack_200;
                unaff_RBP = plStack_208;
                if (cVar10 == '\0') goto LAB_0d7b9db1;
                pppppppcVar31 = (code *******)(puStack_190 + unaff_R12 * 0x40);
                if ((code ********)pppppppcVar31 != apppppppcStack_1d8) {
                  if (pppppppcVar31[3] != (code ******)0x0) {
                    uStack_2c0 = 0xd7b9d74;
                    (*(code *)pppppppcVar31[3])(pppppppcVar31);
                  }
                  pppppppcVar16 = apppppppcStack_1d8[0];
                  if (cStack_1b4 != '\0') {
                    if (cStack_1b4 == '\x02') {
                      uStack_2c0 = 0xd7b9da4;
                      (*(code *)pppppppcStack_1c8)(5,apppppppcStack_1d8,pppppppcVar31);
                    }
                    else {
                      apppppppcStack_1d8[0] = (code *******)0x0;
                      *pppppppcVar31 = (code ******)pppppppcVar16;
                    }
                  }
                  pppppppcVar31[2] = (code ******)pppppppcStack_1c8;
                  pppppppcVar31[3] = ppppppcStack_1c0;
                  *(undefined4 *)(pppppppcVar31 + 4) = uStack_1b8;
                  *(char *)((long)pppppppcVar31 + 0x24) = cStack_1b4;
                }
                ppppppcVar15 = ppppppcStack_1a0;
                auVar34._8_8_ = puStack_218;
                auVar34._0_8_ = pppppppcStack_210;
                uVar4 = (undefined4)uStack_1a8;
                uVar9 = uStack_1a8._4_4_;
                uStack_1a8 = (code *******)0x0;
                *(undefined4 *)(pppppppcVar31 + 5) = (undefined4)uStack_1b0;
                *(undefined4 *)((long)pppppppcVar31 + 0x2c) = uStack_1b0._4_4_;
                *(undefined4 *)(pppppppcVar31 + 6) = uVar4;
                *(undefined4 *)((long)pppppppcVar31 + 0x34) = uVar9;
                ppppppcStack_1a0 = (code ******)0x0;
                pppppppcVar31[7] = ppppppcVar15;
                unaff_R12 = (ulong)(iVar13 + 1);
                uStack_28c = uStack_28c + 1;
                bVar7 = true;
                bVar32 = true;
              }
joined_r0x0d7ba2f2:
              if (ppppppcStack_1c0 != (code ******)0x0) {
                puStack_218 = auVar34._8_8_;
                pppppppcStack_210 = auVar34._0_8_;
                uStack_2c0 = 0xd7bb649;
                (*(code *)ppppppcStack_1c0)(apppppppcStack_1d8);
                auVar34._8_8_ = puStack_218;
                auVar34._0_8_ = pppppppcStack_210;
                bVar32 = bVar7;
              }
              pppppppcStack_210 = auVar34._0_8_;
              unaff_RBX = (ulong)uStack_290;
              if (!bVar32) {
                return pppppppcStack_210;
              }
              goto LAB_0d7b8cb3;
            }
            if (*(long *)(uStack_188 + 0x200) == 0) {
              uStack_2c0 = 0xd7b9a1d;
              lVar14 = func_0x048aead0();
              iVar12 = *(int *)(lVar14 + 8);
              if (auStack_1e8._0_8_ == 0) goto LAB_0d7b9a31;
LAB_0d7b98b1:
              if (iVar12 != *(int *)(auStack_1e8._0_8_ + 8)) goto LAB_0d7b9a50;
            }
            else {
              iVar12 = *(int *)(*(long *)(uStack_188 + 0x200) + 8);
              if (auStack_1e8._0_8_ != 0) goto LAB_0d7b98b1;
LAB_0d7b9a31:
              uStack_2c0 = 0xd7b9a3e;
              lVar14 = func_0x048aead0(auStack_1e8._8_8_);
              if (iVar12 != *(int *)(lVar14 + 8)) goto LAB_0d7b9a50;
            }
            ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            if (ppppppcVar15 == (code ******)0x0) {
              uStack_2c0 = 0xd7b98e0;
              func_0x048b0de0(auStack_288,apppppppcStack_1d8);
              _DAT_0f54fd90 = auStack_288;
              uRam000000000f54fd94 = uStack_284;
              uVar4 = (undefined4)uStack_280;
              uVar9 = uStack_280._4_4_;
              _auStack_288 = (code *******)0x0;
              uStack_280 = (code ******)0x0;
              plVar27 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
              _DAT_0f54fd98 = uVar4;
              uRam000000000f54fd9c = uVar9;
              if (plVar27 != (long *)0x0) {
                LOCK();
                plVar23 = plVar27 + 1;
                lVar14 = *plVar23;
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (lVar14 == 0) {
                  uStack_2c0 = 0xd7b991b;
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  uStack_2c0 = 0xd7b9923;
                  FUN_0412c2d0(plVar27);
                }
              }
              ppppppcVar15 = uStack_280;
              if (uStack_280 != (code ******)0x0) {
                LOCK();
                ppppppcVar1 = uStack_280 + 1;
                pppppcVar2 = *ppppppcVar1;
                *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + -1);
                UNLOCK();
                if (pppppcVar2 == (code *****)0x0) {
                  uStack_2c0 = 0xd7b9948;
                  (*(code *)(*uStack_280)[2])(uStack_280);
                  uStack_2c0 = 0xd7b9950;
                  FUN_0412c2d0(ppppppcVar15);
                }
              }
              ppppppcVar15 = (code ******)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            }
            unaff_RBX = (ulong)uStack_290;
            pppppppcStack_278 = (code *******)&UNK_06529670;
            ppppppcStack_270 = (code ******)0x0;
            uStack_268 = CONCAT35(uStack_268._5_3_,0x4807e99e7);
            _auStack_288 = pppppppcStack_88;
            uStack_258 = (code *******)0x0;
            puVar25 = &UNK_06529390;
            ppppppcStack_250 = (code ******)&UNK_06529390;
            puVar30 = (undefined8 *)(puStack_190 + unaff_R12 * 0x40);
            uStack_260 = ppppppcVar15;
            if (puVar30 != (undefined8 *)auStack_288) {
              if ((code *)puVar30[3] == (code *)0x0) {
                pppppppcVar31 = pppppppcStack_88;
                cVar10 = '\x04';
LAB_0d7ba908:
                _auStack_288 = (code *******)0x0;
                *puVar30 = pppppppcVar31;
              }
              else {
                uStack_2c0 = 0xd7b99cf;
                (*(code *)puVar30[3])(puVar30);
                cVar10 = uStack_268._4_1_;
                if (uStack_268._4_1_ != '\0') {
                  pppppppcVar31 = _auStack_288;
                  if (uStack_268._4_1_ != '\x02') goto LAB_0d7ba908;
                  uStack_2c0 = 0xd7b99f6;
                  (*(code *)pppppppcStack_278)(5,auStack_288,puVar30);
                  cVar10 = uStack_268._4_1_;
                }
              }
              ppppppcVar15 = ppppppcStack_250;
              puVar30[2] = pppppppcStack_278;
              puVar30[3] = ppppppcStack_270;
              *(int *)(puVar30 + 4) = (int)uStack_268;
              *(char *)((long)puVar30 + 0x24) = cVar10;
              uVar4 = (undefined4)uStack_258;
              uVar9 = uStack_258._4_4_;
              uStack_258 = (code *******)0x0;
              *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_260;
              *(undefined4 *)((long)puVar30 + 0x2c) = uStack_260._4_4_;
              *(undefined4 *)(puVar30 + 6) = uVar4;
              *(undefined4 *)((long)puVar30 + 0x34) = uVar9;
              ppppppcStack_250 = (code ******)0x0;
              puVar30[7] = ppppppcVar15;
              if (ppppppcStack_270 != (code ******)0x0) {
                uStack_2c0 = 0xd7ba964;
                (*(code *)ppppppcStack_270)(auStack_288);
              }
              goto LAB_0d7b8cb0;
            }
          }
LAB_0d7b9a00:
          auVar34._8_8_ = puStack_218;
          auVar34._0_8_ = pppppppcStack_210;
          uStack_258 = (code *******)0x0;
          ppppppcStack_270 = (code ******)0x0;
          puVar30[5] = uStack_260;
          puVar30[6] = 0;
          puVar30[7] = puVar25;
          unaff_R12 = (ulong)(iVar13 + 1);
        }
LAB_0d7b8cb3:
      } while ((uint)unaff_R12 < (uint)unaff_RBX || uStack_28c < (uint)puVar21);
    }
  }
  return 0;
LAB_0d7c4dc3:
  if (uVar17 < 0x17) {
    *(char *)((long)register0x00000020 + -0x3a8) = (char)uVar17 * '\x02';
    puVar21 = (undefined1 *)((long)register0x00000020 + -0x3a7);
    if (uVar17 == 0) {
      uVar17 = 0;
      goto LAB_0d7c4e38;
    }
  }
  else {
    uVar26 = 0x1a;
    if ((uVar17 | 7) != 0x17) {
      uVar26 = (uVar17 | 7) + 1;
    }
    pcVar6 = *(code **)(_DAT_0f5463b0 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4e0b;
    puVar21 = (undefined1 *)(*pcVar6)(&DAT_0f5463b0,uVar26);
    if (puVar21 == (undefined1 *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4fca;
      func_0x0eec74c0(uVar26,0);
    }
    *(undefined1 **)((long)register0x00000020 + -0x398) = puVar21;
    *(ulong *)((long)register0x00000020 + -0x3a8) = uVar26 | 1;
    *(ulong *)((long)register0x00000020 + -0x3a0) = uVar17;
  }
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4e38;
  func_0x0eee2ee0(puVar21,puVar28,uVar17);
LAB_0d7c4e38:
  puVar21[uVar17] = 0;
  *(long *)((long)register0x00000020 + -0x300) = _UNK_0eeed4d8;
  *(undefined8 *)((long)register0x00000020 + *(long *)(_UNK_0eeed4d8 + -0x18) + -0x300) =
       _UNK_0eeed518;
  *(undefined8 *)((long)register0x00000020 + -0x2f0) = _UNK_0eeed520;
  *(undefined **)((long)register0x00000020 + -0x2e8) = &UNK_0eeed150;
  if ((*(byte *)((long)register0x00000020 + -0x2a8) & 1) != 0) {
    *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4ea1;
    func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x298),
                    *(ulong *)((long)register0x00000020 + -0x2a8) & 0xfffffffffffffffe);
  }
  *(undefined **)((long)register0x00000020 + -0x2e8) = &UNK_0eeece20;
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4ec1;
  FUN_04167a40((undefined1 *)((long)register0x00000020 + -0x2e0));
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4ed5;
  func_0x0413c8a0((undefined1 *)((long)register0x00000020 + -0x300),&UNK_0eeed4e0);
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4ee2;
  func_0x04138180((undefined1 *)((long)register0x00000020 + -0x280));
  bVar32 = (*(byte *)((long)register0x00000020 + -0x3a8) & 1) != 0;
  puVar28 = (undefined1 *)((long)register0x00000020 + -0x3a7);
  if (bVar32) {
    puVar28 = *(undefined1 **)((long)register0x00000020 + -0x398);
  }
  uVar17 = (ulong)(*(byte *)((long)register0x00000020 + -0x3a8) >> 1);
  if (bVar32) {
    uVar17 = *(ulong *)((long)register0x00000020 + -0x3a0);
  }
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4f08;
  func_0x0412f8c0((undefined1 *)((long)register0x00000020 + -0x388),puVar28,uVar17);
  if ((*(byte *)((long)register0x00000020 + -0x3a8) & 1) != 0) {
    *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4f22;
    func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x398),
                    *(ulong *)((long)register0x00000020 + -0x3a8) & 0xfffffffffffffffe);
  }
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4f2e;
  func_0x0d7c5060(*(undefined8 *)((long)register0x00000020 + -0x390),0);
  if ((*(byte *)((long)register0x00000020 + -0x388) & 1) == 0) {
    puVar28 = (undefined1 *)((long)register0x00000020 + -0x387);
  }
  else {
    puVar28 = *(undefined1 **)((long)register0x00000020 + -0x378);
  }
  *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4f54;
  uVar18 = func_0x04527f80(*(undefined8 *)((long)register0x00000020 + -0x370),&UNK_012ee1a2,puVar28)
  ;
  if ((*(byte *)((long)register0x00000020 + -0x388) & 1) != 0) {
    *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0xd7c4f74;
    func_0x0412a280(*(undefined8 *)((long)register0x00000020 + -0x378),
                    *(ulong *)((long)register0x00000020 + -0x388) & 0xfffffffffffffffe);
  }
  return uVar18;
}


