/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc19e770 (ELF vaddr 0xc09e770)
 * Label: caller-of-callee
 * Body:  [[0c19e770, 0c19e7ed] [0c19e7f0, 0c19e83c] [0c19e840, 0c19e919] [0c19e920, 0c19e98e] [0c19e990, 0c19e9ec] [0c19e9f0, 0c19eb05] [0c19eb10, 0c19ec79] [0c19ec80, 0c19f08d] [0c19f090, 0c19f136] [0c19f140, 0c19f2b7] [0c19f2c0, 0c19f309] [0c19f310, 0c19fe96] [0c19fea0, 0c19fee8] [0c19fef0, 0c1a0243] [0c1a0250, 0c1a028c] [0c1a0290, 0c1a02eb] [0c1a03af, 0c1a0406] [0c1a0410, 0c1a044d] [0c1a0450, 0c1a0805]]
 * Ghidra: FUN_0c19e770
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c19e770(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *in_RAX;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  byte bVar19;
  ulong uVar20;
  long extraout_RDX;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  bool bVar29;
  long *plStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long lStack_158;
  long *plStack_150;
  ulong uStack_148;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  byte *pbStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  lStack_c0 = param_1;
  lStack_60 = param_2;
  if (*(long **)(param_2 + 8) != (long *)(param_2 + 0x10)) {
    lStack_60 = param_2 + 8;
    puStack_70 = (undefined8 *)(param_1 + 0x238);
    puStack_40 = (undefined8 *)(param_1 + 0x208);
    pbStack_78 = (byte *)(param_1 + 0x150);
    pbStack_50 = (byte *)(param_1 + 0x30);
    in_RAX = *(long **)(param_2 + 8);
    plStack_38 = (long *)(param_2 + 0x10);
    do {
      plVar16 = plStack_38;
      bVar19 = *(byte *)(in_RAX + 4) & 1;
      pbVar12 = (byte *)in_RAX[5];
      uStack_f0 = (byte *)(ulong)(*(byte *)(in_RAX + 4) >> 1);
      pbVar23 = pbVar12;
      if (bVar19 == 0) {
        pbVar23 = uStack_f0;
      }
      plStack_48 = in_RAX;
      pbVar27 = pbStack_50;
      if (pbVar23 == (byte *)0x9) {
        if (bVar19 == 0) {
          uStack_f8 = (byte *)((long)in_RAX + 0x21);
        }
        else {
          uStack_f8 = (byte *)in_RAX[6];
        }
        if (uStack_f8[8] != 0x73 || *(long *)uStack_f8 != 0x6761745f6d657469)
        goto joined_r0x0c19e86b;
        uStack_f0 = (byte *)0x9;
        plStack_100 = (long *)0xc19e8df;
        plVar8 = (long *)func_0x0d6c97a0(lStack_60,&uStack_f8);
        if ((plVar8 == plVar16) || ((int)plVar8[0xc] != 9)) {
          pbVar12 = (byte *)in_RAX[5];
          bVar19 = *(byte *)(in_RAX + 4) & 1;
          uStack_f0 = (byte *)(ulong)(*(byte *)(in_RAX + 4) >> 1);
          pbVar27 = pbStack_50;
          goto joined_r0x0c19e86b;
        }
        iVar6 = (int)((ulong)(plVar8[9] - plVar8[8]) >> 3);
        if (iVar6 != 0) {
          lVar13 = 0;
          do {
            pbVar12 = &UNK_01e79d90;
            uVar5 = (uint)lVar13;
            if (-1 < (int)uVar5) {
              pbVar12 = &UNK_01e79d90;
              if ((int)uVar5 < (int)((ulong)(plVar8[9] - plVar8[8]) >> 3)) {
                plVar16 = *(long **)(plVar8[8] + (ulong)(uVar5 & 0x7fffffff) * 8);
                pbVar12 = &UNK_01e79d90;
                if (plVar16 != (long *)0x0) {
                  plStack_100 = (long *)0xc19e96a;
                  cVar3 = (**(code **)(*plVar16 + 0x30))(plVar16);
                  pbVar12 = (byte *)(plVar16 + 1);
                  if (cVar3 != '\b') {
                    pbVar12 = &UNK_01e79d90;
                  }
                }
              }
            }
            if ((*pbVar12 & 1) == 0) {
              pbStack_a8 = *(byte **)(pbVar12 + 0x10);
              pbStack_b8 = *(byte **)pbVar12;
              uStack_b0 = *(byte **)(pbVar12 + 8);
            }
            else {
              plStack_100 = (long *)0xc19e9a2;
              func_0x0412e5e0(&pbStack_b8,*(undefined8 *)(pbVar12 + 0x10),
                              *(undefined8 *)(pbVar12 + 8));
            }
            pbVar12 = (byte *)(ulong)((byte)pbStack_b8 >> 1);
            if (((ulong)pbStack_b8 & 1) != 0) {
              pbVar12 = uStack_b0;
            }
            if (pbVar12 != (byte *)0x0) {
              uStack_f8 = (byte *)0x0;
              if (((ulong)pbStack_b8 & 1) == 0) {
                uStack_e0 = pbStack_a8;
                uStack_f0 = pbStack_b8;
                pbStack_e8 = uStack_b0;
              }
              else {
                plStack_100 = (long *)0xc19e9ff;
                func_0x0412e5e0(&uStack_f0,pbStack_a8);
              }
              uStack_d8 = (long *)0x0;
              if (((ulong)uStack_f0 & 1) == 0) {
                if ((byte)uStack_f0 >> 1 != 0) goto LAB_0c19ea2d;
LAB_0c19eb10:
                uStack_f8 = (byte *)0x0;
              }
              else {
                if (pbStack_e8 == (byte *)0x0) goto LAB_0c19eb10;
LAB_0c19ea2d:
                pbVar12 = (byte *)((long)&uStack_f0 + 1);
                if (((ulong)uStack_f0 & 1) != 0) {
                  pbVar12 = uStack_e0;
                }
                if ((pbVar12 == (byte *)0x0) || (*pbVar12 == 0)) goto LAB_0c19eb10;
                plStack_100 = (long *)0xc19ea56;
                uVar9 = func_0x0eee2e90(pbVar12);
                uStack_f8 = (byte *)0xcbf29ce484222325;
                if (uVar9 != 0) {
                  if (7 < uVar9) {
                    uVar18 = uVar9 & 0xfffffffffffffff8;
                    do {
                      uStack_f8 = (byte *)(((((((((long)uStack_f8 * 0x100000001b3 ^ (ulong)*pbVar12)
                                                 * 0x100000001b3 ^ (ulong)pbVar12[1]) *
                                                0x100000001b3 ^ (ulong)pbVar12[2]) * 0x100000001b3 ^
                                              (ulong)pbVar12[3]) * 0x100000001b3 ^ (ulong)pbVar12[4]
                                             ) * 0x100000001b3 ^ (ulong)pbVar12[5]) * 0x100000001b3
                                           ^ (ulong)pbVar12[6]) * 0x100000001b3 ^ (ulong)pbVar12[7])
                      ;
                      pbVar12 = pbVar12 + 8;
                      uVar18 = uVar18 - 8;
                    } while (uVar18 != 0);
                  }
                  if ((uVar9 & 7) != 0) {
                    uVar18 = 0;
                    do {
                      uStack_f8 = (byte *)((long)uStack_f8 * 0x100000001b3 ^ (ulong)pbVar12[uVar18])
                      ;
                      uVar18 = uVar18 + 1;
                    } while (((uint)uVar9 & 7) != uVar18);
                  }
                }
              }
              plStack_100 = (long *)0xc19eb21;
              func_0x0c49b060(param_1,&uStack_f8);
              if (((ulong)uStack_f0 & 1) != 0) {
                plStack_100 = (long *)0xc19eb42;
                func_0x0412a280(uStack_e0,(ulong)uStack_f0 & 0xfffffffffffffffe);
              }
            }
            if (((byte)pbStack_b8 & 1) != 0) {
              plStack_100 = (long *)0xc19eb64;
              func_0x0412a280(pbStack_a8,(ulong)pbStack_b8 & 0xfffffffffffffffe);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != iVar6);
        }
      }
      else {
joined_r0x0c19e86b:
        uStack_f8 = (byte *)((long)in_RAX + 0x21);
        if (bVar19 != 0) {
          uStack_f8 = (byte *)in_RAX[6];
          uStack_f0 = pbVar12;
        }
        plStack_100 = (long *)0xc19e88d;
        pbStack_50 = pbVar27;
        plVar8 = (long *)func_0x0d6c97a0(lStack_60,&uStack_f8);
        if ((plVar8 != plVar16) && ((int)plVar8[0xc] == 10)) {
          bVar19 = *(byte *)(in_RAX + 4);
          if ((bVar19 & 1) == 0) {
            if (bVar19 >> 1 == 0xf) goto LAB_0c19eb76;
          }
          else if (in_RAX[5] == 0xf) {
LAB_0c19eb76:
            plVar16 = (long *)((long)in_RAX + 0x21);
            if ((bVar19 & 1) != 0) {
              plVar16 = (long *)in_RAX[6];
            }
            if (*(long *)((long)plVar16 + 7) == 0x736569747265706f && *plVar16 == 0x6f72705f6d657469
               ) {
              if (*(long *)(param_1 + 0x248) == 0) {
                plStack_100 = (long *)0xc19ef06;
                cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e)
                ;
                if (cVar3 != '\0') {
                  _DAT_00000000 = 0xdeadc0de;
                }
              }
              if (**(char **)(param_1 + 0x248) == '\0') {
                plStack_100 = (long *)0xc19ef50;
                cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                        &UNK_013f915e);
                if (cVar3 != '\0') {
                  _DAT_00000000 = 0xdeadc0de;
                }
              }
              pbStack_90 = *(byte **)(param_1 + 600);
              uStack_f8 = &UNK_01ccbe38;
              uStack_f0 = (byte *)0xe;
              plVar16 = plVar8 + 8;
              plStack_100 = (long *)0xc19ef8e;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              plVar8 = plVar8 + 9;
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar19 = 2;
              }
              else {
                bVar19 = ((char)plVar10[8] == '\0') + 1;
              }
              *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) & 0xfc | bVar19;
              uStack_f8 = &UNK_01ccbe50;
              uStack_f0 = (byte *)0x17;
              plStack_100 = (long *)0xc19efdd;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar19 = 0;
              }
              else {
                bVar19 = ((char)plVar10[8] != '\0') * '\x02';
              }
              *(byte *)(param_1 + 0x1c9) = *(byte *)(param_1 + 0x1c9) & 0xfd | bVar19;
              uStack_f8 = &UNK_01ccbe70;
              uStack_f0 = (byte *)0x11;
              plStack_100 = (long *)0xc19f026;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar4 = 0;
              }
              else {
                uVar4 = (undefined1)plVar10[8];
              }
              *(undefined1 *)(param_1 + 0x140) = uVar4;
              uStack_f8 = &UNK_01ccbe82;
              uStack_f0 = (byte *)0xe;
              plStack_100 = (long *)0xc19f05e;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if (plVar10 == plVar8) {
                plVar17 = (long *)0x0;
              }
              else {
                plVar17 = plVar10 + 7;
                if ((int)plVar10[0xc] != 8) {
                  plVar17 = (long *)0x0;
                }
              }
              pbVar12 = (byte *)(plVar17 + 1);
              if (plVar17 == (long *)0x0) {
                pbVar12 = &UNK_01e79d90;
              }
              if (pbStack_78 != pbVar12) {
                bVar19 = *pbVar12;
                if ((*pbStack_78 & 1) == 0) {
                  if ((bVar19 & 1) == 0) {
                    *(undefined8 *)(pbStack_78 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
                    uVar7 = *(undefined4 *)(pbVar12 + 4);
                    uVar1 = *(undefined4 *)(pbVar12 + 8);
                    uVar2 = *(undefined4 *)(pbVar12 + 0xc);
                    *(undefined4 *)pbStack_78 = *(undefined4 *)pbVar12;
                    *(undefined4 *)(pbStack_78 + 4) = uVar7;
                    *(undefined4 *)(pbStack_78 + 8) = uVar1;
                    *(undefined4 *)(pbStack_78 + 0xc) = uVar2;
                  }
                  else {
                    plStack_100 = (long *)0xc19f69e;
                    func_0x04885070(pbStack_78,*(undefined8 *)(pbVar12 + 0x10),
                                    *(undefined8 *)(pbVar12 + 8));
                  }
                }
                else {
                  bVar29 = (bVar19 & 1) != 0;
                  pbVar23 = pbVar12 + 1;
                  if (bVar29) {
                    pbVar23 = *(byte **)(pbVar12 + 0x10);
                  }
                  uVar9 = (ulong)(bVar19 >> 1);
                  if (bVar29) {
                    uVar9 = *(ulong *)(pbVar12 + 8);
                  }
                  plStack_100 = (long *)0xc19f5cf;
                  FUN_04885120(pbStack_78,pbVar23,uVar9);
                }
              }
              uStack_f8 = &UNK_01ccbe91;
              uStack_f0 = (byte *)0x6;
              plStack_100 = (long *)0xc19f6bd;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (undefined4)plVar10[8];
              }
              *(undefined4 *)(param_1 + 0x1d0) = uVar7;
              uStack_f8 = &UNK_01ccbea0;
              uStack_f0 = (byte *)0x11;
              plStack_100 = (long *)0xc19f6f4;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (undefined4)plVar10[8];
              }
              *(undefined4 *)(param_1 + 0x1d8) = uVar7;
              uStack_f8 = &UNK_01ccbec0;
              uStack_f0 = (byte *)0x10;
              plStack_100 = (long *)0xc19f72b;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if (plVar10 == plVar8) {
                plVar17 = (long *)0x0;
              }
              else {
                plVar17 = plVar10 + 7;
                if ((int)plVar10[0xc] != 8) {
                  plVar17 = (long *)0x0;
                }
              }
              pbVar12 = (byte *)(plVar17 + 1);
              if (plVar17 == (long *)0x0) {
                pbVar12 = &UNK_01e79d90;
              }
              bVar29 = (*pbVar12 & 1) != 0;
              pbVar23 = pbVar12 + 1;
              if (bVar29) {
                pbVar23 = *(byte **)(pbVar12 + 0x10);
              }
              uVar9 = (ulong)(*pbVar12 >> 1);
              if (bVar29) {
                uVar9 = *(ulong *)(pbVar12 + 8);
              }
              plStack_100 = (long *)0xc19f770;
              uVar7 = func_0x0c01f9f0(pbVar23,uVar9);
              *(undefined4 *)(param_1 + 0x1d4) = uVar7;
              uStack_f8 = &UNK_01ccbed1;
              uStack_f0 = (byte *)0x4;
              plStack_100 = (long *)0xc19f795;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar29 = false;
              }
              else {
                bVar29 = (char)plVar10[8] != '\0';
              }
              *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) & 0xfe | bVar29;
              uStack_f8 = &UNK_01ccbed6;
              uStack_f0 = (byte *)0xb;
              plStack_100 = (long *)0xc19f7dc;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (undefined4)plVar10[8];
              }
              *(undefined4 *)(param_1 + 0x28) = uVar7;
              uStack_f8 = &UNK_01ccbee2;
              uStack_f0 = (byte *)0xd;
              plStack_100 = (long *)0xc19f810;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar19 = 0;
              }
              else {
                bVar19 = ((char)plVar10[8] != '\0') * '\x02';
              }
              *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) & 0xfd | bVar19;
              uStack_f8 = &UNK_01ccbef0;
              uStack_f0 = (byte *)0x12;
              plStack_100 = (long *)0xc19f859;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                uVar4 = 0;
              }
              else {
                uVar4 = (undefined1)plVar10[8];
              }
              *(undefined1 *)(param_1 + 0x170) = uVar4;
              uStack_f8 = &UNK_01ccbf03;
              uStack_f0 = (byte *)0xe;
              plStack_100 = (long *)0xc19f891;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar19 = 0;
              }
              else {
                bVar19 = ((char)plVar10[8] != '\0') << 3;
              }
              *(byte *)(param_1 + 0x1c9) = *(byte *)(param_1 + 0x1c9) & 0xf7 | bVar19;
              uStack_f8 = &UNK_01ccbf12;
              uStack_f0 = (byte *)0xe;
              plStack_100 = (long *)0xc19f8db;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar4 = 0;
              }
              else {
                uVar4 = (undefined1)plVar10[8];
              }
              *(undefined1 *)(param_1 + 0x88) = uVar4;
              uStack_f8 = &UNK_01ccbf21;
              uStack_f0 = (byte *)0xc;
              plStack_100 = (long *)0xc19f913;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 5)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (undefined4)plVar10[8];
              }
              *(undefined4 *)(param_1 + 0x1cc) = uVar7;
              uStack_f8 = &UNK_01ccbf2e;
              uStack_f0 = (byte *)0xe;
              plStack_100 = (long *)0xc19f94f;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar19 = 0;
              }
              else {
                bVar19 = ((char)plVar10[8] != '\0') << 6;
              }
              *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) & 0xbf | bVar19;
              uStack_f8 = &UNK_01ccbf40;
              uStack_f0 = (byte *)0xf;
              plStack_100 = (long *)0xc19f999;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 1)) {
                bVar19 = 0;
              }
              else {
                bVar19 = ((char)plVar10[8] != '\0') << 2;
              }
              *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) & 0xfb | bVar19;
              uStack_f8 = &UNK_01ccbf50;
              uStack_f0 = (byte *)0xd;
              plStack_100 = (long *)0xc19f9e3;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar4 = 0;
              }
              else {
                uVar4 = (undefined1)plVar10[8];
              }
              *(undefined1 *)(param_1 + 0x2e) = uVar4;
              uStack_f8 = &UNK_01ccbf5e;
              uStack_f0 = (byte *)0xc;
              plStack_100 = (long *)0xc19fa18;
              plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
              if ((plVar10 == plVar8) || ((int)plVar10[0xc] != 3)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (undefined4)plVar10[8];
              }
              *(undefined4 *)(param_1 + 0x114) = uVar7;
              uStack_f8 = &UNK_01ccbfc0;
              uStack_f0 = (byte *)0x5;
              plStack_100 = (long *)0xc19fa4f;
              puVar11 = &uStack_f8;
              plVar10 = (long *)func_0x0d6c97a0(plVar16);
              if (plVar10 == plVar8) {
LAB_0c19fbd4:
                uStack_f8 = &UNK_01ccbf70;
                uStack_f0 = (byte *)0x10;
                plStack_100 = (long *)0xc19fbf3;
                puVar11 = &uStack_f8;
                plVar10 = (long *)func_0x0d6c97a0(plVar16);
                if (plVar10 != plVar8) {
                  if ((ulong)*(uint *)(plVar10 + 0xc) == 0xffffffff) goto LAB_0c1a029e;
                  pbStack_b8 = (byte *)&uStack_88;
                  plStack_100 = (long *)0xc19fc2d;
                  lVar13 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar10 + 0xc) * 8))
                                     (&pbStack_b8,plVar10 + 7);
                  if (lVar13 != 0) {
                    uStack_f8 = &UNK_01ccbf70;
                    uStack_f0 = (byte *)0x10;
                    plStack_100 = (long *)0xc19fc55;
                    plVar10 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
                    if (plVar10 == plVar8) {
                      plVar17 = (long *)0x0;
                    }
                    else {
                      plVar17 = plVar10 + 7;
                      if ((int)plVar10[0xc] != 8) {
                        plVar17 = (long *)0x0;
                      }
                    }
                    pbVar12 = (byte *)(plVar17 + 1);
                    if (plVar17 == (long *)0x0) {
                      pbVar12 = &UNK_01e79d90;
                    }
                    if (pbVar27 != pbVar12) {
                      bVar19 = *pbVar12;
                      if ((*pbVar27 & 1) == 0) {
                        if ((bVar19 & 1) == 0) {
                          *(undefined8 *)(pbVar27 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
                          uVar7 = *(undefined4 *)(pbVar12 + 4);
                          uVar1 = *(undefined4 *)(pbVar12 + 8);
                          uVar2 = *(undefined4 *)(pbVar12 + 0xc);
                          *(undefined4 *)pbVar27 = *(undefined4 *)pbVar12;
                          *(undefined4 *)(pbVar27 + 4) = uVar7;
                          *(undefined4 *)(pbVar27 + 8) = uVar1;
                          *(undefined4 *)(pbVar27 + 0xc) = uVar2;
                        }
                        else {
                          plStack_100 = (long *)0xc1a0061;
                          func_0x04885070(pbVar27,*(undefined8 *)(pbVar12 + 0x10),
                                          *(undefined8 *)(pbVar12 + 8));
                        }
                      }
                      else {
                        bVar29 = (bVar19 & 1) != 0;
                        pbVar23 = pbVar12 + 1;
                        if (bVar29) {
                          pbVar23 = *(byte **)(pbVar12 + 0x10);
                        }
                        uVar9 = (ulong)(bVar19 >> 1);
                        if (bVar29) {
                          uVar9 = *(ulong *)(pbVar12 + 8);
                        }
                        plStack_100 = (long *)0xc19fcd3;
                        FUN_04885120(pbVar27,pbVar23,uVar9);
                      }
                    }
                  }
                }
                if (DAT_0f6d73a8 == '\0') {
                  plStack_100 = (long *)0xc1a007c;
                  iVar6 = FUN_04108328(&DAT_0f6d73a8);
                  if (iVar6 != 0) {
                    plStack_100 = (long *)0xc1a0097;
                    func_0x0ee25020(0xf6d7380,&UNK_012e772f);
                    plStack_100 = (long *)0xc1a00b1;
                    __cxa_atexit(&UNK_048c16a0,0xf6d7380,0xf53dab8);
                    plStack_100 = (long *)0xc1a00bd;
                    func_0x0410844d(&DAT_0f6d73a8);
                    param_1 = lStack_c0;
                  }
                }
                uStack_f8 = _DAT_0f6d7398;
                uStack_f0 = _DAT_0f6d7390;
                if ((DAT_0f6d7388 & 1) == 0) {
                  uStack_f8 = (byte *)0xf6d7389;
                  uStack_f0 = (byte *)(ulong)(DAT_0f6d7388 >> 1);
                }
                plStack_100 = (long *)0xc19fd1d;
                plVar16 = (long *)func_0x0d6c97a0(plVar16,&uStack_f8);
                if ((plVar16 != plVar8) && ((int)plVar16[0xc] == 10)) {
                  plStack_100 = (long *)0xc19fd49;
                  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                  if (puVar11 == (undefined8 *)0x0) {
                    plStack_100 = (long *)0xc1a01aa;
                    func_0x0eec74c0(0x50,0);
                    param_1 = lStack_c0;
                  }
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  *puVar11 = &UNK_0f361738;
                  puVar11[8] = 0;
                  puVar11[9] = 0;
                  puVar11[6] = 0;
                  puVar11[7] = 0;
                  puVar11[4] = 0;
                  puVar11[5] = 0;
                  puVar11[3] = &UNK_0f361788;
                  puVar11[7] = 0;
                  puVar11[8] = 0;
                  puVar11[5] = 0;
                  puVar11[6] = 0;
                  *(undefined4 *)(puVar11 + 9) = 0x3f800000;
                  *(undefined8 **)(param_1 + 0x218) = puVar11 + 3;
                  plVar8 = *(long **)(param_1 + 0x220);
                  *(undefined8 **)(param_1 + 0x220) = puVar11;
                  if (plVar8 != (long *)0x0) {
                    LOCK();
                    plVar10 = plVar8 + 1;
                    lVar13 = *plVar10;
                    *plVar10 = *plVar10 + -1;
                    UNLOCK();
                    if (lVar13 == 0) {
                      plStack_100 = (long *)0xc19fdc5;
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                      plStack_100 = (long *)0xc19fdcd;
                      func_0x0412c2d0(plVar8);
                    }
                  }
                  plStack_100 = (long *)0xc19fde6;
                  (**(code **)(**(long **)(param_1 + 0x218) + 0x30))
                            (*(long **)(param_1 + 0x218),plVar16 + 7,pbStack_90);
                  plVar16 = *(long **)(param_1 + 0x218);
                  plVar16[1] = param_1;
                  plStack_100 = (long *)0xc19fdfa;
                  (**(code **)(*plVar16 + 0x40))(plVar16,param_1);
                  if (DAT_0f6d73a8 == '\0') {
                    plStack_100 = (long *)0xc1a01d4;
                    iVar6 = FUN_04108328(&DAT_0f6d73a8);
                    if (iVar6 != 0) {
                      plStack_100 = (long *)0xc1a01ef;
                      func_0x0ee25020(0xf6d7380,&UNK_012e772f);
                      plStack_100 = (long *)0xc1a0209;
                      __cxa_atexit(&UNK_048c16a0,0xf6d7380,0xf53dab8);
                      plStack_100 = (long *)0xc1a0215;
                      func_0x0410844d(&DAT_0f6d73a8);
                      param_1 = lStack_c0;
                    }
                  }
                  if ((DAT_0f6d7388 & 1) == 0) {
                    pbStack_e8 = _DAT_0f6d7398;
                    uStack_f8 = (byte *)CONCAT71(uRam000000000f6d7389,DAT_0f6d7388);
                    uStack_f0 = _DAT_0f6d7390;
                  }
                  else {
                    plStack_100 = (long *)0xc19fe41;
                    func_0x0412e5e0(&uStack_f8,_DAT_0f6d7398,_DAT_0f6d7390);
                  }
                  uStack_e0 = *(byte **)(param_1 + 0x218);
                  uStack_d8 = *(long **)(param_1 + 0x220);
                  if (*(long *)(param_1 + 0x220) != 0) {
                    LOCK();
                    plVar16 = (long *)(*(long *)(param_1 + 0x220) + 8);
                    *plVar16 = *plVar16 + 1;
                    UNLOCK();
                  }
                  puVar11 = (undefined8 *)*puStack_70;
                  puVar25 = puStack_70;
                  puVar28 = puStack_70;
                  if (puVar11 != (undefined8 *)0x0) {
                    pbVar23 = (byte *)((ulong)uStack_f8 >> 1 & 0x7f);
                    pbVar12 = (byte *)((long)&uStack_f8 + 1);
                    if (((ulong)uStack_f8 & 1) != 0) {
                      pbVar12 = pbStack_e8;
                      pbVar23 = uStack_f0;
                    }
                    do {
                      while( true ) {
                        puVar25 = puVar11;
                        bVar29 = (*(byte *)(puVar25 + 4) & 1) != 0;
                        lVar13 = (long)puVar25 + 0x21;
                        if (bVar29) {
                          lVar13 = puVar25[6];
                        }
                        pbVar27 = (byte *)(ulong)(*(byte *)(puVar25 + 4) >> 1);
                        if (bVar29) {
                          pbVar27 = (byte *)puVar25[5];
                        }
                        pbVar22 = pbVar23;
                        if (pbVar27 < pbVar23) {
                          pbVar22 = pbVar27;
                        }
                        plStack_100 = (long *)0xc19fee1;
                        iVar6 = memcmp(pbVar12,lVar13,pbVar22);
                        if (iVar6 == 0) break;
                        if (iVar6 < 0) goto LAB_0c19fea0;
LAB_0c19fef5:
                        plStack_100 = (long *)0xc19ff03;
                        iVar6 = memcmp(lVar13,pbVar12,pbVar22);
                        if (iVar6 == 0) {
                          if (pbVar23 <= pbVar27) goto LAB_0c19ffb7;
                        }
                        else if (-1 < iVar6) goto LAB_0c19ffb7;
                        puVar11 = (undefined8 *)puVar25[1];
                        if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
                          puVar28 = puVar25 + 1;
                          goto LAB_0c19ff24;
                        }
                      }
                      if (pbVar27 <= pbVar23) goto LAB_0c19fef5;
LAB_0c19fea0:
                      puVar11 = (undefined8 *)*puVar25;
                      puVar28 = puVar25;
                    } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
                  }
LAB_0c19ff24:
                  plStack_100 = (long *)0xc19ff3a;
                  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
                  if (puVar11 == (undefined8 *)0x0) {
                    plStack_100 = (long *)0xc1a01c3;
                    func_0x0eec74c0(0x48,0);
                  }
                  lVar13 = lStack_c0;
                  puVar11[6] = pbStack_e8;
                  puVar11[4] = uStack_f8;
                  puVar11[5] = uStack_f0;
                  uStack_f8 = (byte *)0x0;
                  uStack_f0 = (byte *)0x0;
                  pbStack_e8 = (byte *)0x0;
                  *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_e0;
                  *(undefined4 *)((long)puVar11 + 0x3c) = uStack_e0._4_4_;
                  *(undefined4 *)(puVar11 + 8) = (undefined4)uStack_d8;
                  *(undefined4 *)((long)puVar11 + 0x44) = uStack_d8._4_4_;
                  uStack_e0 = (byte *)0x0;
                  uStack_d8 = (long *)0x0;
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  puVar11[2] = puVar25;
                  *puVar28 = puVar11;
                  if (**(long **)(lStack_c0 + 0x230) != 0) {
                    *(long *)(lStack_c0 + 0x230) = **(long **)(lStack_c0 + 0x230);
                  }
                  plStack_100 = (long *)0xc19ffb0;
                  func_0x048bed00(*(undefined8 *)(lStack_c0 + 0x238),puVar11);
                  *(long *)(lVar13 + 0x240) = *(long *)(lVar13 + 0x240) + 1;
LAB_0c19ffb7:
                  plVar16 = uStack_d8;
                  if (uStack_d8 != (long *)0x0) {
                    LOCK();
                    plVar8 = uStack_d8 + 1;
                    lVar13 = *plVar8;
                    *plVar8 = *plVar8 + -1;
                    UNLOCK();
                    if (lVar13 == 0) {
                      plStack_100 = (long *)0xc19ffdc;
                      (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
                      plStack_100 = (long *)0xc19ffe4;
                      func_0x0412c2d0(plVar16);
                    }
                  }
                  param_1 = lStack_c0;
                  if (((ulong)uStack_f8 & 1) != 0) {
                    plStack_100 = (long *)0xc19fffc;
                    func_0x0412a280(pbStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
                    param_1 = lStack_c0;
                  }
                }
                goto LAB_0c1a0010;
              }
              if ((ulong)*(uint *)(plVar10 + 0xc) != 0xffffffff) {
                pbStack_b8 = (byte *)&uStack_88;
                plStack_100 = (long *)0xc19fa89;
                lVar13 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar10 + 0xc) * 8))
                                   (&pbStack_b8,plVar10 + 7);
                if (lVar13 == 0) goto LAB_0c19fbd4;
                pbStack_b8 = &UNK_01ccbfc0;
                uStack_b0 = (byte *)0x5;
                plStack_100 = (long *)0xc19fab4;
                plVar10 = (long *)func_0x0d6c97a0(plVar16,&pbStack_b8);
                if (plVar10 == plVar8) {
                  plVar17 = (long *)0x0;
                }
                else {
                  plVar17 = plVar10 + 7;
                  if ((int)plVar10[0xc] != 8) {
                    plVar17 = (long *)0x0;
                  }
                }
                puVar14 = (ulong *)(plVar17 + 1);
                if (plVar17 == (long *)0x0) {
                  puVar14 = (ulong *)&UNK_01e79d90;
                }
                uStack_f8 = (byte *)0x0;
                if ((*puVar14 & 1) == 0) {
                  uStack_e0 = (byte *)puVar14[2];
                  uStack_f0 = (byte *)*puVar14;
                  pbStack_e8 = (byte *)puVar14[1];
                  uStack_d8 = (long *)0x0;
                  uVar9 = (ulong)(uint)*puVar14 & 0xff;
                  if (((uint)*puVar14 & 1) != 0) goto LAB_0c19fb3d;
LAB_0c19fb0e:
                  if (uVar9 >> 1 != 0) goto LAB_0c19fb47;
LAB_0c19fb90:
                  uStack_d8 = (long *)0x0;
                  uStack_f8 = (byte *)0x0;
                }
                else {
                  plStack_100 = (long *)0xc19fb2b;
                  func_0x0412e5e0(&uStack_f0,puVar14[2],puVar14[1]);
                  uStack_d8 = (long *)0x0;
                  uVar9 = (ulong)uStack_f0 & 0xff;
                  if (((ulong)uStack_f0 & 1) == 0) goto LAB_0c19fb0e;
LAB_0c19fb3d:
                  if (pbStack_e8 == (byte *)0x0) goto LAB_0c19fb90;
LAB_0c19fb47:
                  uStack_d8 = (long *)0x0;
                  pbVar12 = (byte *)((long)&uStack_f0 + 1);
                  if ((uVar9 & 1) != 0) {
                    pbVar12 = uStack_e0;
                  }
                  if ((pbVar12 == (byte *)0x0) || (*pbVar12 == 0)) goto LAB_0c19fb90;
                  plStack_100 = (long *)0xc19fb68;
                  uVar9 = func_0x0eee2e90(pbVar12);
                  uStack_f8 = (byte *)0xcbf29ce484222325;
                  if (uVar9 != 0) {
                    if (7 < uVar9) {
                      uVar18 = uVar9 & 0xfffffffffffffff8;
                      do {
                        uStack_f8 = (byte *)(((((((((long)uStack_f8 * 0x100000001b3 ^
                                                   (ulong)*pbVar12) * 0x100000001b3 ^
                                                  (ulong)pbVar12[1]) * 0x100000001b3 ^
                                                 (ulong)pbVar12[2]) * 0x100000001b3 ^
                                                (ulong)pbVar12[3]) * 0x100000001b3 ^
                                               (ulong)pbVar12[4]) * 0x100000001b3 ^
                                              (ulong)pbVar12[5]) * 0x100000001b3 ^ (ulong)pbVar12[6]
                                             ) * 0x100000001b3 ^ (ulong)pbVar12[7]);
                        pbVar12 = pbVar12 + 8;
                        uVar18 = uVar18 - 8;
                      } while (uVar18 != 0);
                    }
                    if ((uVar9 & 7) != 0) {
                      uVar18 = 0;
                      do {
                        uStack_f8 = (byte *)((long)uStack_f8 * 0x100000001b3 ^
                                            (ulong)pbVar12[uVar18]);
                        uVar18 = uVar18 + 1;
                      } while (((uint)uVar9 & 7) != uVar18);
                    }
                  }
                }
                plStack_100 = (long *)0xc19fbac;
                uVar15 = func_0x0cc422f0(0xf6ff9e0,&uStack_f8,0,0,0);
                *(undefined8 *)(param_1 + 0x138) = uVar15;
                if (((ulong)uStack_f0 & 1) != 0) {
                  plStack_100 = (long *)0xc19fbd4;
                  func_0x0412a280(uStack_e0,(ulong)uStack_f0 & 0xfffffffffffffffe);
                }
                goto LAB_0c19fbd4;
              }
LAB_0c1a029e:
              plStack_100 = (long *)0xc1a02a3;
              uVar15 = func_0x04931450();
              plStack_100 = (long *)0xc1a02b4;
              func_0x041084d6(&DAT_0f6d73a8);
              plStack_100 = (long *)0xc1a02bc;
              uVar15 = func_0x0eee2d70(uVar15);
              plStack_100 = (long *)0xc1a02c7;
              func_0x0c19c990(&uStack_f8);
              plStack_100 = (long *)0xc1a02cf;
              plVar10 = (long *)func_0x0eee2d70(uVar15);
              if (((ulong)uStack_f0 & 1) != 0) {
                puVar11 = (undefined8 *)((ulong)uStack_f0 & 0xfffffffffffffffe);
                plStack_100 = (long *)0xc1a03b8;
                func_0x0412a280(uStack_e0);
              }
              plStack_100 = (long *)0xc1a03c0;
              plVar24 = plVar10;
              func_0x0eee2d70();
              puStack_108 = &UNK_01e79d90;
              *plVar24 = 0;
              plVar24[1] = 0;
              plVar24[2] = 0;
              plVar17 = (long *)(extraout_RDX + 0x10);
              if (*(long **)(extraout_RDX + 8) == plVar17) {
                return plVar24;
              }
              lStack_158 = extraout_RDX + 8;
              plVar26 = *(long **)(extraout_RDX + 8);
              plStack_160 = plVar24;
              plStack_128 = plVar10;
              pbStack_120 = pbVar27;
              plStack_118 = plVar8;
              plStack_110 = plVar16;
              plStack_100 = in_RAX;
              goto LAB_0c1a0421;
            }
          }
          if (*(long *)(param_1 + 0x248) == 0) {
            plStack_100 = (long *)0xc19ebdd;
            cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300);
            if (cVar3 != '\0') {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          plStack_68 = plVar8;
          if (**(char **)(param_1 + 0x248) == '\0') {
            plStack_100 = (long *)0xc19ec2c;
            cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130);
            if (cVar3 != '\0') {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          puVar11 = *(undefined8 **)(param_1 + 0x238);
          uStack_58 = *(undefined8 *)(param_1 + 600);
          if (puVar11 == (undefined8 *)0x0) {
LAB_0c19ed20:
            pbVar12 = (byte *)(in_RAX + 4);
            plStack_100 = (long *)0xc19ed39;
            func_0x0c4033d0(&uStack_88,pbVar12,uStack_58);
            lVar21 = lStack_c0;
            lVar13 = CONCAT44(uStack_84,uStack_88);
            if (lVar13 == 0) {
              plVar16 = (long *)CONCAT44(uStack_7c,uStack_80);
              param_1 = lStack_c0;
            }
            else {
              pbStack_b8 = (byte *)0x0;
              if ((*pbVar12 & 1) == 0) {
                pbStack_a0 = (byte *)in_RAX[6];
                uStack_b0 = *(byte **)pbVar12;
                pbStack_a8 = (byte *)in_RAX[5];
              }
              else {
                plStack_100 = (long *)0xc19edbc;
                func_0x0412e5e0(&uStack_b0,plStack_48[6],plStack_48[5]);
              }
              pbVar23 = pbStack_a8;
              pbVar12 = uStack_b0;
              uStack_98 = 0;
              pbVar27 = (byte *)((ulong)uStack_b0 >> 1 & 0x7f);
              if (((ulong)uStack_b0 & 1) != 0) {
                pbVar27 = pbStack_a8;
              }
              if (pbVar27 == (byte *)0x0) {
LAB_0c19ee2d:
                pbStack_b8 = (byte *)0x0;
              }
              else {
                pbVar27 = (byte *)((long)&uStack_b0 + 1);
                if (((ulong)uStack_b0 & 1) != 0) {
                  pbVar27 = pbStack_a0;
                }
                if ((pbVar27 == (byte *)0x0) || (*pbVar27 == 0)) goto LAB_0c19ee2d;
                plStack_100 = (long *)0xc19ee05;
                uVar9 = func_0x0eee2e90(pbVar27);
                pbStack_b8 = (byte *)0xcbf29ce484222325;
                if (uVar9 != 0) {
                  if (7 < uVar9) {
                    uVar18 = uVar9 & 0xfffffffffffffff8;
                    do {
                      pbStack_b8 = (byte *)(((((((((long)pbStack_b8 * 0x100000001b3 ^
                                                  (ulong)*pbVar27) * 0x100000001b3 ^
                                                 (ulong)pbVar27[1]) * 0x100000001b3 ^
                                                (ulong)pbVar27[2]) * 0x100000001b3 ^
                                               (ulong)pbVar27[3]) * 0x100000001b3 ^
                                              (ulong)pbVar27[4]) * 0x100000001b3 ^ (ulong)pbVar27[5]
                                             ) * 0x100000001b3 ^ (ulong)pbVar27[6]) * 0x100000001b3
                                           ^ (ulong)pbVar27[7]);
                      pbVar27 = pbVar27 + 8;
                      uVar18 = uVar18 - 8;
                    } while (uVar18 != 0);
                  }
                  if ((uVar9 & 7) != 0) {
                    uVar18 = 0;
                    do {
                      pbStack_b8 = (byte *)((long)pbStack_b8 * 0x100000001b3 ^
                                           (ulong)pbVar27[uVar18]);
                      uVar18 = uVar18 + 1;
                    } while (((uint)uVar9 & 7) != uVar18);
                  }
                }
              }
              pbStack_e8 = (byte *)0x0;
              uStack_e0 = (byte *)0x0;
              uStack_f8 = (byte *)0x0;
              uStack_f0 = (byte *)0x0;
              uStack_d8 = (long *)0x0;
              if (((ulong)pbVar12 & 1) == 0) {
                uStack_e0 = pbStack_a0;
                uStack_f0 = uStack_b0;
                pbStack_e8 = pbStack_a8;
              }
              else {
                plStack_100 = (long *)0xc19ee7c;
                func_0x04885070(&uStack_f0,pbStack_a0,pbVar23);
              }
              pbVar12 = pbStack_b8;
              plStack_c8 = (long *)CONCAT44(uStack_7c,uStack_80);
              if (plStack_c8 != (long *)0x0) {
                LOCK();
                plStack_c8[1] = plStack_c8[1] + 1;
                UNLOCK();
              }
              puVar11 = (undefined8 *)*puStack_40;
              puVar25 = puStack_40;
              puVar28 = puStack_40;
              uStack_f8 = pbStack_b8;
              lStack_d0 = lVar13;
              if (puVar11 != (undefined8 *)0x0) {
                pbStack_90 = uStack_e0;
                pbVar23 = pbStack_e8;
                if (((ulong)uStack_f0 & 1) == 0) {
                  pbStack_90 = (byte *)((long)&uStack_f0 + 1);
                  pbVar23 = (byte *)((ulong)uStack_f0 >> 1 & 0x7f);
                }
                do {
                  while( true ) {
                    puVar25 = puVar11;
                    pbVar27 = (byte *)puVar25[4];
                    if (pbVar12 != pbVar27) break;
                    bVar29 = (*(byte *)(puVar25 + 5) & 1) != 0;
                    lVar13 = (long)puVar25 + 0x29;
                    if (bVar29) {
                      lVar13 = puVar25[7];
                    }
                    pbVar27 = (byte *)(ulong)(*(byte *)(puVar25 + 5) >> 1);
                    if (bVar29) {
                      pbVar27 = (byte *)puVar25[6];
                    }
                    pbVar22 = pbVar27;
                    if (pbVar23 <= pbVar27) {
                      pbVar22 = pbVar23;
                    }
                    plStack_100 = (long *)0xc19f0f0;
                    iVar6 = memcmp(pbStack_90,lVar13,pbVar22);
                    bVar29 = pbVar23 < pbVar27;
                    if (iVar6 != 0) {
                      bVar29 = iVar6 < 0;
                    }
                    if (bVar29) goto LAB_0c19f090;
                    plStack_100 = (long *)0xc19f119;
                    iVar6 = memcmp(lVar13,pbStack_90,pbVar22);
                    bVar29 = pbVar27 < pbVar23;
                    if (iVar6 != 0) {
                      bVar29 = iVar6 < 0;
                    }
                    if (!bVar29) goto LAB_0c19f1fa;
LAB_0c19f14c:
                    puVar11 = (undefined8 *)puVar25[1];
                    if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
                      lVar21 = lStack_c0;
                      puVar28 = puVar25 + 1;
                      goto LAB_0c19f164;
                    }
                  }
                  if (pbVar27 <= pbVar12) {
                    if (pbVar27 < pbVar12) goto LAB_0c19f14c;
                    goto LAB_0c19f1fa;
                  }
LAB_0c19f090:
                  puVar11 = (undefined8 *)*puVar25;
                  lVar21 = lStack_c0;
                  puVar28 = puVar25;
                } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
              }
LAB_0c19f164:
              plStack_100 = (long *)0xc19f17a;
              puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
              if (puVar11 == (undefined8 *)0x0) {
                plStack_100 = (long *)0xc1a0185;
                func_0x0eec74c0(0x58,0);
              }
              puVar11[8] = 0;
              puVar11[7] = uStack_e0;
              puVar11[5] = uStack_f0;
              puVar11[6] = pbStack_e8;
              uStack_f0 = (byte *)((ulong)uStack_f0 & 0xffffffffffff0000);
              puVar11[4] = uStack_f8;
              puVar11[9] = lStack_d0;
              puVar11[10] = plStack_c8;
              lStack_d0 = 0;
              plStack_c8 = (long *)0x0;
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = puVar25;
              *puVar28 = puVar11;
              if (**(long **)(lVar21 + 0x200) != 0) {
                *(long *)(lVar21 + 0x200) = **(long **)(lVar21 + 0x200);
              }
              plStack_100 = (long *)0xc19f1f3;
              func_0x048bed00(*(undefined8 *)(lVar21 + 0x208),puVar11);
              *(long *)(lVar21 + 0x210) = *(long *)(lVar21 + 0x210) + 1;
LAB_0c19f1fa:
              plVar16 = plStack_c8;
              if (plStack_c8 != (long *)0x0) {
                LOCK();
                plVar8 = plStack_c8 + 1;
                lVar13 = *plVar8;
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  plStack_100 = (long *)0xc19f4a4;
                  (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                  plStack_100 = (long *)0xc19f4ac;
                  func_0x0412c2d0(plVar16);
                }
              }
              if (((ulong)uStack_f0 & 1) != 0) {
                plStack_100 = (long *)0xc19f234;
                func_0x0412a280(uStack_e0,(ulong)uStack_f0 & 0xfffffffffffffffe);
              }
              if (((ulong)uStack_b0 & 1) == 0) {
                pbStack_e8 = pbStack_a0;
                uStack_f8 = uStack_b0;
                uStack_f0 = pbStack_a8;
              }
              else {
                plStack_100 = (long *)0xc19f264;
                func_0x0412e5e0(&uStack_f8,pbStack_a0,pbStack_a8);
              }
              uStack_e0 = (byte *)CONCAT44(uStack_84,uStack_88);
              uStack_d8 = (long *)CONCAT44(uStack_7c,uStack_80);
              if (CONCAT44(uStack_7c,uStack_80) != 0) {
                LOCK();
                plVar16 = (long *)(CONCAT44(uStack_7c,uStack_80) + 8);
                *plVar16 = *plVar16 + 1;
                UNLOCK();
              }
              puVar11 = (undefined8 *)*puStack_70;
              puVar25 = puStack_70;
              puVar28 = puStack_70;
              if (puVar11 != (undefined8 *)0x0) {
                pbVar23 = (byte *)((ulong)uStack_f8 >> 1 & 0x7f);
                pbVar12 = (byte *)((long)&uStack_f8 + 1);
                if (((ulong)uStack_f8 & 1) != 0) {
                  pbVar12 = pbStack_e8;
                  pbVar23 = uStack_f0;
                }
                do {
                  while( true ) {
                    puVar25 = puVar11;
                    bVar29 = (*(byte *)(puVar25 + 4) & 1) != 0;
                    lVar13 = (long)puVar25 + 0x21;
                    if (bVar29) {
                      lVar13 = puVar25[6];
                    }
                    pbVar27 = (byte *)(ulong)(*(byte *)(puVar25 + 4) >> 1);
                    if (bVar29) {
                      pbVar27 = (byte *)puVar25[5];
                    }
                    pbVar22 = pbVar23;
                    if (pbVar27 < pbVar23) {
                      pbVar22 = pbVar27;
                    }
                    plStack_100 = (long *)0xc19f302;
                    iVar6 = memcmp(pbVar12,lVar13,pbVar22);
                    if (iVar6 == 0) break;
                    if (iVar6 < 0) goto LAB_0c19f2c0;
LAB_0c19f315:
                    plStack_100 = (long *)0xc19f323;
                    iVar6 = memcmp(lVar13,pbVar12,pbVar22);
                    if (iVar6 == 0) {
                      if (pbVar23 <= pbVar27) goto LAB_0c19f3d9;
                    }
                    else if (-1 < iVar6) goto LAB_0c19f3d9;
                    puVar11 = (undefined8 *)puVar25[1];
                    if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
                      puVar28 = puVar25 + 1;
                      goto LAB_0c19f346;
                    }
                  }
                  if (pbVar27 <= pbVar23) goto LAB_0c19f315;
LAB_0c19f2c0:
                  puVar11 = (undefined8 *)*puVar25;
                  puVar28 = puVar25;
                } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
              }
LAB_0c19f346:
              plStack_100 = (long *)0xc19f35c;
              puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
              if (puVar11 == (undefined8 *)0x0) {
                plStack_100 = (long *)0xc1a0196;
                func_0x0eec74c0(0x48,0);
              }
              lVar13 = lStack_c0;
              puVar11[6] = pbStack_e8;
              puVar11[4] = uStack_f8;
              puVar11[5] = uStack_f0;
              uStack_f8 = (byte *)0x0;
              uStack_f0 = (byte *)0x0;
              pbStack_e8 = (byte *)0x0;
              *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_e0;
              *(undefined4 *)((long)puVar11 + 0x3c) = uStack_e0._4_4_;
              *(undefined4 *)(puVar11 + 8) = (undefined4)uStack_d8;
              *(undefined4 *)((long)puVar11 + 0x44) = uStack_d8._4_4_;
              uStack_e0 = (byte *)0x0;
              uStack_d8 = (long *)0x0;
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = puVar25;
              *puVar28 = puVar11;
              if (**(long **)(lStack_c0 + 0x230) != 0) {
                *(long *)(lStack_c0 + 0x230) = **(long **)(lStack_c0 + 0x230);
              }
              plStack_100 = (long *)0xc19f3d2;
              func_0x048bed00(*(undefined8 *)(lStack_c0 + 0x238),puVar11);
              *(long *)(lVar13 + 0x240) = *(long *)(lVar13 + 0x240) + 1;
LAB_0c19f3d9:
              plVar16 = uStack_d8;
              param_1 = lStack_c0;
              plVar8 = plStack_68;
              if (uStack_d8 != (long *)0x0) {
                LOCK();
                plVar10 = uStack_d8 + 1;
                lVar13 = *plVar10;
                *plVar10 = *plVar10 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  plStack_100 = (long *)0xc19f4c5;
                  (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
                  plStack_100 = (long *)0xc19f4cd;
                  func_0x0412c2d0(plVar16);
                  param_1 = lStack_c0;
                  plVar8 = plStack_68;
                }
              }
              lStack_c0 = param_1;
              plStack_68 = plVar8;
              if (((ulong)uStack_f8 & 1) != 0) {
                plStack_100 = (long *)0xc19f41e;
                func_0x0412a280(pbStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
              }
              plVar10 = (long *)CONCAT44(uStack_84,uStack_88);
              plVar16 = (long *)CONCAT44(uStack_7c,uStack_80);
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar16[1] = plVar16[1] + 1;
                UNLOCK();
              }
              if (((ulong)uStack_b0 & 1) != 0) {
                plStack_100 = (long *)0xc19f44c;
                func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
              }
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar17 = plVar16 + 1;
                lVar13 = *plVar17;
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  plStack_100 = (long *)0xc19f4f2;
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  plStack_100 = (long *)0xc19f4fa;
                  func_0x0412c2d0(plVar16);
                }
              }
              if (plVar10 != (long *)0x0) goto LAB_0c19f55c;
            }
          }
          else {
            bVar29 = (*(byte *)(in_RAX + 4) & 1) != 0;
            plVar16 = (long *)((long)in_RAX + 0x21);
            if (bVar29) {
              plVar16 = (long *)in_RAX[6];
            }
            puVar25 = puStack_70;
            uVar9 = (ulong)(*(byte *)(in_RAX + 4) >> 1);
            if (bVar29) {
              uVar9 = in_RAX[5];
            }
            do {
              bVar29 = (*(byte *)(puVar11 + 4) & 1) != 0;
              lVar13 = (long)puVar11 + 0x21;
              if (bVar29) {
                lVar13 = puVar11[6];
              }
              uVar18 = (ulong)(*(byte *)(puVar11 + 4) >> 1);
              if (bVar29) {
                uVar18 = puVar11[5];
              }
              uVar20 = uVar18;
              if (uVar9 < uVar18) {
                uVar20 = uVar9;
              }
              plStack_100 = (long *)0xc19ecc6;
              uVar5 = memcmp(lVar13,plVar16,uVar20);
              if (uVar5 == 0) {
                bVar29 = uVar18 < uVar9;
                uVar5 = (uint)bVar29 << 3;
              }
              else {
                bVar29 = SUB41(uVar5 >> 0x1f,0);
                uVar5 = uVar5 >> 0x1c & 0xfffffff8;
              }
              if (bVar29 == false) {
                puVar25 = puVar11;
              }
              puVar11 = *(undefined8 **)((long)puVar11 + (ulong)uVar5);
            } while (puVar11 != (undefined8 *)0x0);
            if (puVar25 == puStack_70) goto LAB_0c19ed20;
            bVar29 = (*(byte *)(puVar25 + 4) & 1) != 0;
            lVar13 = (long)puVar25 + 0x21;
            if (bVar29) {
              lVar13 = puVar25[6];
            }
            uVar18 = (ulong)(*(byte *)(puVar25 + 4) >> 1);
            if (bVar29) {
              uVar18 = puVar25[5];
            }
            uVar20 = uVar9;
            if (uVar18 < uVar9) {
              uVar20 = uVar18;
            }
            plStack_100 = (long *)0xc19ed12;
            iVar6 = memcmp(plVar16,lVar13,uVar20);
            if (iVar6 == 0) {
              if (uVar9 < uVar18) goto LAB_0c19ed20;
            }
            else if (iVar6 < 0) goto LAB_0c19ed20;
            plVar10 = (long *)puVar25[7];
            plVar16 = (long *)puVar25[8];
            if (plVar16 == (long *)0x0) {
              plVar16 = (long *)0x0;
            }
            else {
              LOCK();
              plVar16[1] = plVar16[1] + 1;
              UNLOCK();
            }
            param_1 = lStack_c0;
            plVar8 = plStack_68;
            if (plVar10 == (long *)0x0) goto LAB_0c19f578;
LAB_0c19f55c:
            plVar10[1] = param_1;
            plStack_100 = (long *)0xc19f578;
            (**(code **)(*plVar10 + 0x30))(plVar10,plVar8 + 7,uStack_58);
          }
LAB_0c19f578:
          if (plVar16 != (long *)0x0) {
            LOCK();
            plVar8 = plVar16 + 1;
            lVar13 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              plStack_100 = (long *)0xc19f5a0;
              (**(code **)(*plVar16 + 0x10))(plVar16);
              plStack_100 = (long *)0xc19f5a8;
              func_0x0412c2d0(plVar16);
            }
          }
        }
      }
LAB_0c1a0010:
      plVar16 = (long *)plStack_48[1];
      plVar8 = plStack_48;
      if ((long *)plStack_48[1] == (long *)0x0) {
        do {
          in_RAX = (long *)plVar8[2];
          bVar29 = plVar8 != (long *)*in_RAX;
          plVar8 = in_RAX;
        } while (bVar29);
      }
      else {
        do {
          in_RAX = plVar16;
          plVar16 = (long *)*in_RAX;
        } while ((long *)*in_RAX != (long *)0x0);
      }
    } while (in_RAX != plStack_38);
  }
  plVar16 = *(long **)(param_1 + 0x200);
  while (plVar16 != (long *)(param_1 + 0x208)) {
    plVar8 = (long *)plVar16[9];
    plVar8[1] = lStack_c0;
    plStack_100 = (long *)0xc1a026b;
    (**(code **)(*plVar8 + 0x40))();
    plVar8 = (long *)plVar16[1];
    plVar10 = plVar16;
    if ((long *)plVar16[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar10[2];
        bVar29 = plVar10 != (long *)*plVar16;
        plVar10 = plVar16;
        in_RAX = plVar16;
      } while (bVar29);
    }
    else {
      do {
        plVar16 = plVar8;
        plVar8 = (long *)*plVar16;
        in_RAX = plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
  }
  return in_RAX;
LAB_0c1a0421:
  bVar19 = *(byte *)(plVar26 + 4) & 1;
  uVar9 = plVar26[5];
  uStack_170 = (ulong)(*(byte *)(plVar26 + 4) >> 1);
  uVar18 = uVar9;
  if (bVar19 == 0) {
    uVar18 = uStack_170;
  }
  if (uVar18 == 9) {
    if (bVar19 == 0) {
      plStack_178 = (long *)((long)plVar26 + 0x21);
    }
    else {
      plStack_178 = (long *)plVar26[6];
    }
    if ((char)plStack_178[1] != 's' || *plStack_178 != 0x6761745f6d657469) goto joined_r0x0c1a047d;
    uStack_170 = 9;
    plVar16 = (long *)func_0x0d6c97a0(lStack_158,&plStack_178);
    if ((plVar16 == plVar17) || ((int)plVar16[0xc] != 9)) {
      uVar9 = plVar26[5];
      bVar19 = *(byte *)(plVar26 + 4) & 1;
      uStack_170 = (ulong)(*(byte *)(plVar26 + 4) >> 1);
      goto joined_r0x0c1a047d;
    }
LAB_0c1a07a0:
    plVar16 = (long *)plVar26[1];
    if ((long *)plVar26[1] == (long *)0x0) goto LAB_0c1a07e0;
LAB_0c1a07b0:
    do {
      plVar8 = plVar16;
      plVar16 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  else {
joined_r0x0c1a047d:
    plStack_178 = (long *)((long)plVar26 + 0x21);
    if (bVar19 != 0) {
      plStack_178 = (long *)plVar26[6];
      uStack_170 = uVar9;
    }
    plVar8 = (long *)((long)plVar26 + 0x21);
    plVar16 = (long *)func_0x0d6c97a0(lStack_158,&plStack_178);
    if ((plVar16 == plVar17) || ((int)plVar16[0xc] != 10)) goto LAB_0c1a07a0;
    bVar19 = *(byte *)(plVar26 + 4);
    if ((bVar19 & 1) == 0) {
      if (bVar19 >> 1 == 0xf) goto LAB_0c1a052c;
    }
    else if (plVar26[5] == 0xf) {
LAB_0c1a052c:
      plVar10 = plVar8;
      if ((bVar19 & 1) != 0) {
        plVar10 = (long *)plVar26[6];
      }
      if (*(long *)((long)plVar10 + 7) == 0x736569747265706f && *plVar10 == 0x6f72705f6d657469)
      goto LAB_0c1a07a0;
    }
    if ((*(long *)((long)puVar11 + 0x248) == 0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)((long)puVar11 + 0x248) == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x0c4033d0(&plStack_138,plVar26 + 4,*(undefined8 *)((long)puVar11 + 600));
    plVar10 = plStack_138;
    if (plStack_138 == (long *)0x0) {
      bVar29 = (*(byte *)(plVar26 + 4) & 1) != 0;
      plStack_150 = plVar8;
      if (bVar29) {
        plStack_150 = (long *)plVar26[6];
      }
      uStack_148 = (ulong)(*(byte *)(plVar26 + 4) >> 1);
      if (bVar29) {
        uStack_148 = plVar26[5];
      }
      func_0x0470d9a0(&plStack_178,&UNK_013a13cf,0x22,0xd,&plStack_150);
      func_0x057d8ed0(plStack_160,&plStack_178);
LAB_0c1a0765:
      if (((ulong)plStack_178 & 1) != 0) {
        func_0x0412a280(uStack_168,(ulong)plStack_178 & 0xfffffffffffffffe);
      }
    }
    else {
      if ((*(long *)((long)puVar11 + 0x248) == 0) &&
         (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)((long)puVar11 + 0x248) == '\0') &&
         (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
         cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar15 = *(undefined8 *)((long)puVar11 + 600);
      plVar10[1] = (long)puVar11;
      cVar3 = (**(code **)(*plVar10 + 0x30))(plVar10,plVar16 + 7,uVar15);
      if (cVar3 == '\0') {
        bVar29 = (*(byte *)(plVar26 + 4) & 1) != 0;
        plStack_150 = plVar8;
        if (bVar29) {
          plStack_150 = (long *)plVar26[6];
        }
        uStack_148 = (ulong)(*(byte *)(plVar26 + 4) >> 1);
        if (bVar29) {
          uStack_148 = plVar26[5];
        }
        func_0x0470d9a0(&plStack_178,&UNK_0131aa99,0x21,0xd,&plStack_150);
        func_0x057d8ed0(plStack_160,&plStack_178);
        goto LAB_0c1a0765;
      }
    }
    plVar16 = plStack_130;
    if (plStack_130 == (long *)0x0) goto LAB_0c1a07a0;
    LOCK();
    plVar8 = plStack_130 + 1;
    lVar13 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar13 != 0) goto LAB_0c1a07a0;
    (**(code **)(*plStack_130 + 0x10))(plStack_130);
    func_0x0412c2d0(plVar16);
    plVar16 = (long *)plVar26[1];
    if ((long *)plVar26[1] != (long *)0x0) goto LAB_0c1a07b0;
LAB_0c1a07e0:
    do {
      plVar8 = (long *)plVar26[2];
      bVar29 = plVar26 != (long *)*plVar8;
      plVar26 = plVar8;
    } while (bVar29);
  }
  plVar26 = plVar8;
  if (plVar8 == plVar17) {
    return plStack_160;
  }
  goto LAB_0c1a0421;
}


