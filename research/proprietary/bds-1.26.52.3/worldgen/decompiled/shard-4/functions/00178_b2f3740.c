/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb3f3740 (ELF vaddr 0xb2f3740)
 * Label: caller-of-callee
 * Body:  [[0b3f3740, 0b3f4e28] [0b3f4e30, 0b3f4e66] [0b3f4e70, 0b3f88d1] [0b3f8a4a, 0b3f8a62]]
 * Ghidra: FUN_0b3f3740
 */


/* WARNING: Removing unreachable block (ram,0x0b3f51c2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0b3f3740(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,ulong *param_5)

{
  ulong *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  char cVar8;
  undefined1 uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  long extraout_RDX;
  long *plVar21;
  ulong *puVar22;
  long *plVar23;
  ulong uVar24;
  ulong *puVar25;
  long lVar26;
  ulong *unaff_R14;
  bool bVar27;
  int iVar28;
  undefined4 uVar29;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  float fVar36;
  ulong *puStack_168;
  ulong *puStack_158;
  ulong *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  uint uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  byte bStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  byte bStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  float fStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined4 uStack_64;
  ulong uStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auVar34 [16];
  
  uStack_148 = &UNK_014a2680;
  uStack_140 = (long *)0x8;
  puVar18 = param_2 + 1;
  puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
  puVar19 = param_2 + 2;
  if (puVar13 == puVar19) {
LAB_0b3f39d7:
    uStack_148 = &UNK_014a269f;
    uStack_140 = (long *)0xb;
    puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
    if ((puVar13 == puVar19) || ((int)puVar13[0xc] != 1)) {
      bVar27 = false;
    }
    else {
      bVar27 = (char)puVar13[8] != '\0';
    }
    *(bool *)((long)param_1 + 0x296) = bVar27;
    uVar20 = param_1[2];
    uVar31 = (uint)param_1[3];
    puVar13 = (ulong *)(*(long *)(uVar20 + 0x38) +
                       (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) - *(long *)(uVar20 + 0x38)) >>
                                    3) - 1U & 0xe642016b) * 8);
    puVar16 = *(ulong **)(uVar20 + 0x50);
    do {
      uVar24 = *puVar13;
      if (uVar24 == 0xffffffffffffffff) {
        puVar22 = *(ulong **)(uVar20 + 0x58);
        puVar25 = (ulong *)0xffffffffffffffff;
        puVar13 = puVar22;
        goto LAB_0b3f3a78;
      }
      puVar25 = (ulong *)(uVar24 * 0x20);
      puVar13 = puVar16 + uVar24 * 4;
    } while ((int)(puVar16 + 1)[uVar24 * 4] != -0x19bdfe95);
    puVar22 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f3a78:
    if ((puVar13 != puVar22) && (uVar20 = puVar13[2], uVar20 != 0)) {
      puVar16 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
      puVar25 = *(ulong **)(uVar20 + 8);
      param_5 = (ulong *)(*(long *)(uVar20 + 0x10) - (long)puVar25 >> 3);
      if ((puVar16 < param_5) &&
         (((puVar16 = (ulong *)puVar25[(long)puVar16], puVar16 != (ulong *)0x0 &&
           (uVar11 = *(uint *)((long)puVar16 + (ulong)(uVar31 & 0x7ff) * 4),
           (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)) &&
          (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 != 0
          )))) {
        unaff_R14 = (ulong *)(lVar14 + (ulong)(uVar11 & 0x7f) * 0x48);
        uStack_148 = &UNK_0128b4e6;
        uStack_140 = (long *)0x5;
        puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
        if ((puVar13 == puVar19) || ((int)puVar13[0xc] != 1)) {
          puVar22 = (ulong *)0x0;
        }
        else {
          puVar22 = (ulong *)0xa;
          if ((byte)puVar13[8] < 0x10) {
            puVar22 = (ulong *)(ulong)(byte)puVar13[8];
          }
        }
        plVar21 = *(long **)(*unaff_R14 + 0x18);
        cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
        puStack_158 = puVar19;
        if ((cVar8 == '\0') && (*(char *)((long)plVar21 + 0xc) != (char)puVar22)) {
          *(char *)((long)plVar21 + 0xc) = (char)puVar22;
          uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
          if (0x8c < uVar10) goto LAB_0b3f887e;
          unaff_R14[(ulong)(uVar10 >> 6) + 3] =
               unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
        }
        uStack_148 = &UNK_011abf92;
        uStack_140 = (long *)0x6;
        puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
        if ((puVar13 == puVar19) || ((int)puVar13[0xc] != 1)) {
          puVar22 = (ulong *)0x0;
        }
        else {
          puVar22 = (ulong *)0xa;
          if ((byte)puVar13[8] < 0x10) {
            puVar22 = (ulong *)(ulong)(byte)puVar13[8];
          }
        }
        plVar21 = *(long **)(*unaff_R14 + 0x290);
        cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
        if ((cVar8 == '\0') && (*(char *)((long)plVar21 + 0xc) != (char)puVar22)) {
          *(char *)((long)plVar21 + 0xc) = (char)puVar22;
          uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
          if (0x8c < uVar10) {
LAB_0b3f887e:
            func_0x04882ef0(&UNK_012d4a56);
            goto LAB_0b3f888a;
          }
          unaff_R14[(ulong)(uVar10 >> 6) + 3] =
               unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
        }
        uStack_148 = &UNK_011abf99;
        uStack_140 = (long *)0x8;
        puVar16 = &uStack_148;
        puVar25 = puVar18;
        puVar13 = (ulong *)func_0x0d6c97a0();
        if ((puVar13 == puVar19) || ((int)puVar13[0xc] != 3)) {
          uVar31 = 0;
        }
        else {
          uVar31 = (uint)puVar13[8];
        }
        plVar21 = (long *)param_1[0x24];
        if (plVar21 != (long *)0x0) {
          uVar11 = 0;
          if (((0x260 < ((int)plVar21[1] - (int)*plVar21 & 0x7fff8U)) &&
              (puVar13 = *(ulong **)(*plVar21 + 0x260), uVar11 = 0, puVar13 != (ulong *)0x0)) &&
             (puVar25 = puVar13, cVar8 = (**(code **)(*puVar13 + 0x18))(), cVar8 == '\x02')) {
            uVar11 = *(uint *)((long)puVar13 + 0xc);
          }
          if ((int)uVar11 < (int)uVar31) {
            uVar31 = uVar11;
          }
          puVar22 = (ulong *)(ulong)uVar31;
          unaff_R14 = (ulong *)param_1[0x24];
          if (unaff_R14 != (ulong *)0x0) {
            plVar21 = *(long **)(*unaff_R14 + 600);
            cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
            puVar13 = puVar18;
            if ((cVar8 == '\x02') && (*(uint *)((long)plVar21 + 0xc) != uVar31)) {
              *(uint *)((long)plVar21 + 0xc) = uVar31;
              uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
              if (0x8c < uVar10) goto LAB_0b3f8329;
              unaff_R14[(ulong)(uVar10 >> 6) + 3] =
                   unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
            }
            uStack_148 = &UNK_0124bee4;
            uStack_140 = (long *)0xb;
            puVar16 = &uStack_148;
            puVar25 = puVar18;
            puVar22 = (ulong *)func_0x0d6c97a0();
            if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 3)) {
              uVar31 = 0;
            }
            else {
              uVar31 = (uint)puVar22[8];
            }
            plVar21 = (long *)param_1[0x24];
            if (plVar21 != (long *)0x0) {
              uVar11 = 0;
              if (((0x260 < ((int)plVar21[1] - (int)*plVar21 & 0x7fff8U)) &&
                  (puVar22 = *(ulong **)(*plVar21 + 0x260), uVar11 = 0, puVar22 != (ulong *)0x0)) &&
                 (puVar25 = puVar22, cVar8 = (**(code **)(*puVar22 + 0x18))(), cVar8 == '\x02')) {
                uVar11 = *(uint *)((long)puVar22 + 0xc);
              }
              if ((int)uVar11 < (int)uVar31) {
                uVar31 = uVar11;
              }
              puVar22 = (ulong *)(ulong)uVar31;
              unaff_R14 = (ulong *)param_1[0x24];
              if (unaff_R14 != (ulong *)0x0) {
                plVar21 = *(long **)(*unaff_R14 + 600);
                cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
                if ((cVar8 == '\x02') && (*(uint *)((long)plVar21 + 0xc) != uVar31)) {
                  *(uint *)((long)plVar21 + 0xc) = uVar31;
                  uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
                  if (0x8c < uVar10) goto LAB_0b3f8329;
                  unaff_R14[(ulong)(uVar10 >> 6) + 3] =
                       unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
                }
                uStack_148 = &UNK_0127f342;
                uStack_140 = (long *)0x7;
                puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar22[8] != '\0';
                }
                puVar1 = param_1 + 1;
                func_0x0d879c70(puVar1,0x1f,bVar27);
                uStack_148 = &UNK_011abfa2;
                uStack_140 = (long *)0x10;
                puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar22[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x52,bVar27);
                uStack_148 = &UNK_01318759;
                uStack_140 = (long *)0x7;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                unaff_R14 = puVar19;
                puVar22 = puVar1;
                if (puVar16 != puVar19) {
                  if ((ulong)(uint)puVar16[0xc] == 0xffffffff) goto LAB_0b3f831f;
                  uStack_b8 = &uStack_80;
                  lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar16[0xc] * 8))
                                     (&uStack_b8,puVar16 + 7);
                  if (lVar14 != 0) {
                    uStack_148 = &UNK_01318759;
                    uStack_140 = (long *)0x7;
                    puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                    if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                      bVar27 = false;
                    }
                    else {
                      bVar27 = (char)puVar16[8] != '\0';
                    }
                    func_0x0d879c70(puVar1,0x18,bVar27);
                  }
                }
                uStack_148 = &UNK_01230316;
                uStack_140 = (long *)0x6;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0xb,bVar27);
                uStack_148 = &UNK_012fe2c5;
                uStack_140 = (long *)0x7;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x1c,bVar27);
                uStack_148 = &UNK_011e0ceb;
                uStack_140 = (long *)0xa;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x42,bVar27);
                uStack_148 = &UNK_013d3205;
                uStack_140 = (long *)0xa;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x1d,bVar27);
                uStack_148 = &UNK_013d3210;
                uStack_140 = (long *)0x7;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x19,bVar27);
                uStack_148 = &UNK_01298bdd;
                uStack_140 = (long *)0xe;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x60,bVar27);
                uStack_148 = &UNK_0123031d;
                uStack_140 = (long *)0x7;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,8,bVar27);
                uStack_148 = &UNK_0127f34a;
                uStack_140 = (long *)0x7;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x24,bVar27);
                uStack_148 = &UNK_012cb12d;
                uStack_140 = (long *)0xa;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x26,bVar27);
                uStack_148 = &UNK_0134eafb;
                uStack_140 = (long *)0x9;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x20,bVar27);
                uStack_148 = &UNK_013ecec1;
                uStack_140 = (long *)0xa;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x39,bVar27);
                uStack_148 = &UNK_013ba3ca;
                uStack_140 = (long *)0x8;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x3f,bVar27);
                uStack_148 = &UNK_011fbcdd;
                uStack_140 = (long *)0x8;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x44,bVar27);
                uStack_148 = &UNK_014bc5bd;
                uStack_140 = (long *)0x9;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x53,bVar27);
                uStack_148 = &UNK_01298bec;
                uStack_140 = (long *)0x9;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x54,bVar27);
                uStack_148 = &UNK_012fe2cd;
                uStack_140 = (long *)0xc;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if ((puVar16 == puVar19) || ((int)puVar16[0xc] != 1)) {
                  bVar27 = false;
                }
                else {
                  bVar27 = (char)puVar16[8] != '\0';
                }
                func_0x0d879c70(puVar1,0x40,bVar27);
                uStack_148 = &UNK_012086dc;
                uStack_140 = (long *)0x5;
                puVar16 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                if (puVar16 == puVar19) {
LAB_0b3f4454:
                  uStack_148 = &UNK_01479485;
                  uStack_140 = (long *)0x8;
                  puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                  if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 4)) {
LAB_0b3f4487:
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = puVar22[8];
                  }
                }
                else {
                  if ((ulong)(uint)puVar16[0xc] == 0xffffffff) goto LAB_0b3f831f;
                  uStack_b8 = &uStack_80;
                  lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar16[0xc] * 8))
                                     (&uStack_b8,puVar16 + 7);
                  if (lVar14 == 0) goto LAB_0b3f4454;
                  uStack_148 = &UNK_012086dc;
                  uStack_140 = (long *)0x5;
                  puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                  if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 3)) goto LAB_0b3f4487;
                  uVar20 = (ulong)(uint)puVar22[8];
                }
                uVar15 = (**(code **)(*param_3 + 0x78))(param_3,uVar20);
                (**(code **)(*param_1 + 0x1b8))(param_1,uVar15);
                uStack_148 = &UNK_013c559d;
                uStack_140 = (long *)0x7;
                puVar16 = &uStack_148;
                puVar25 = puVar18;
                puVar22 = (ulong *)func_0x0d6c97a0();
                if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 3)) {
                  puVar22 = (ulong *)0x0;
                }
                else {
                  puVar22 = (ulong *)(ulong)(uint)puVar22[8];
                }
                unaff_R14 = (ulong *)param_1[0x24];
                if (unaff_R14 != (ulong *)0x0) {
                  plVar21 = *(long **)(*unaff_R14 + 0x10);
                  cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
                  puStack_168 = puVar1;
                  if ((cVar8 == '\x02') && (*(int *)((long)plVar21 + 0xc) != (int)puVar22)) {
                    *(int *)((long)plVar21 + 0xc) = (int)puVar22;
                    uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
                    if (0x8c < uVar10) goto LAB_0b3f8329;
                    unaff_R14[(ulong)(uVar10 >> 6) + 3] =
                         unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
                  }
                  uStack_148 = &UNK_01340bca;
                  uStack_140 = (long *)0xb;
                  puVar16 = &uStack_148;
                  puVar25 = puVar18;
                  puVar22 = (ulong *)func_0x0d6c97a0();
                  if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 3)) {
                    puVar22 = (ulong *)0x0;
                  }
                  else {
                    puVar22 = (ulong *)(ulong)(uint)puVar22[8];
                  }
                  unaff_R14 = (ulong *)param_1[0x24];
                  if (unaff_R14 != (ulong *)0x0) {
                    plVar21 = *(long **)(*unaff_R14 + 0x158);
                    cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
                    if ((cVar8 == '\x02') && (*(int *)((long)plVar21 + 0xc) != (int)puVar22)) {
                      *(int *)((long)plVar21 + 0xc) = (int)puVar22;
                      uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
                      if (0x8c < uVar10) goto LAB_0b3f8329;
                      unaff_R14[(ulong)(uVar10 >> 6) + 3] =
                           unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
                    }
                    uStack_148 = &UNK_014bc5c7;
                    uStack_140 = (long *)0x6;
                    puVar16 = &uStack_148;
                    puVar25 = puVar18;
                    puVar22 = (ulong *)func_0x0d6c97a0();
                    if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 3)) {
                      puVar22 = (ulong *)0x0;
                    }
                    else {
                      puVar22 = (ulong *)(ulong)(uint)puVar22[8];
                    }
                    unaff_R14 = (ulong *)param_1[0x24];
                    if (unaff_R14 != (ulong *)0x0) {
                      plVar21 = *(long **)(*unaff_R14 + 0x340);
                      cVar8 = (**(code **)(*plVar21 + 0x18))(plVar21);
                      if ((cVar8 == '\x02') && (*(int *)((long)plVar21 + 0xc) != (int)puVar22)) {
                        *(int *)((long)plVar21 + 0xc) = (int)puVar22;
                        uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21);
                        if (0x8c < uVar10) goto LAB_0b3f8329;
                        unaff_R14[(ulong)(uVar10 >> 6) + 3] =
                             unaff_R14[(ulong)(uVar10 >> 6) + 3] | 1L << ((byte)uVar10 & 0x3f);
                      }
                      uStack_148 = &UNK_012a485d;
                      uStack_140 = (long *)0xb;
                      puStack_58 = param_3;
                      puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      puStack_150 = puVar18;
                      puStack_50 = param_2;
                      if ((puVar22 == puVar19) || ((int)puVar22[0xc] != 9)) {
                        if (param_2[3] != 0) {
                          func_0x0b05d290(param_1,param_2);
                          func_0x0b3c6a40(&uStack_148,param_1[0x55],1);
                          puVar7 = uStack_148;
                          uStack_148 = (undefined *)0x0;
                          uVar20 = param_1[0x12];
                          param_1[0x12] = (ulong)puVar7;
                          if (uVar20 != 0) {
                            func_0x0b0c2520(uVar20);
                            func_0x0412a280(uVar20,0x378);
                            uVar20 = (ulong)uStack_148;
                            uStack_148 = (undefined *)0x0;
                            if (uVar20 != 0) {
                              func_0x0b0c2520(uVar20);
                              func_0x0412a280(uVar20,0x378);
                            }
                          }
                          func_0x0b3c6f10(param_1,0);
                        }
                        goto LAB_0b3f4788;
                      }
                      param_2 = (ulong *)(puVar22[9] - (long)puVar22[8] >> 3);
                      uVar31 = (uint)param_2;
                      if ((int)uVar31 < 1) goto LAB_0b3f4788;
                      plVar21 = *(long **)puVar22[8];
                      cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                      if (cVar8 == '\b') {
                        bVar2 = *(byte *)(plVar21 + 1);
                        if ((bVar2 & 1) == 0) {
                          uVar20 = (ulong)(bVar2 >> 1);
                        }
                        else {
                          uVar20 = plVar21[2];
                        }
                        if (uVar20 == 0) {
                          uVar15 = func_0x04882ee0();
                          func_0x0eeb81b0(&uStack_b8);
                          func_0x0eee2d70(uVar15);
                          pcVar6 = (code *)swi(3);
                          uVar15 = (*pcVar6)();
                          return uVar15;
                        }
                        if ((bVar2 & 1) == 0) {
                          lVar14 = (long)plVar21 + 9;
                        }
                        else {
                          lVar14 = plVar21[3];
                        }
                        unaff_R14 = (ulong *)(uVar20 - 1);
                        param_3 = param_1;
                        if ((ulong *)0xfffffffffffffff7 < unaff_R14) goto LAB_0b3f8335;
                        if (uVar20 < 0x18) {
                          uStack_b8 = (undefined8 *)
                                      CONCAT71(uStack_b8._1_7_,(char)unaff_R14 * '\x02');
                          uVar24 = (long)&uStack_b8 + 1;
                          if (unaff_R14 != (ulong *)0x0) goto LAB_0b3f4d5c;
                        }
                        else {
                          uVar20 = 0x1a;
                          if (((ulong)unaff_R14 | 7) != 0x17) {
                            uVar20 = ((ulong)unaff_R14 | 7) + 1;
                          }
                          uVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
                          if (uVar24 == 0) {
                            func_0x0eec74c0(uVar20,0);
                          }
                          uStack_b8 = (undefined8 *)(uVar20 | 1);
                          puStack_b0 = unaff_R14;
                          uStack_a8 = uVar24;
LAB_0b3f4d5c:
                          memmove(uVar24,lVar14 + 1,unaff_R14);
                        }
                        *(char *)(uVar24 + (long)unaff_R14) = '\0';
                        func_0x0b04cfb0(&uStack_148,&uStack_b8);
                        if (((ulong)uStack_b8 & 1) != 0) {
                          func_0x0412a280(uStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
                        }
                        func_0x0b3c40b0(param_1,&uStack_148,1,0);
                        if ((bStack_e0 & 1) != 0) {
                          func_0x0412a280(uStack_d0,
                                          CONCAT71(uStack_df,bStack_e0) & 0xfffffffffffffffe);
                        }
                        if ((bStack_100 & 1) != 0) {
                          func_0x0412a280(uStack_f0,
                                          CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
                        }
                        if ((uStack_118 & 1) != 0) {
                          func_0x0412a280(uStack_108,
                                          CONCAT44(uStack_114,uStack_118) & 0xfffffffffffffffe);
                        }
                        if (((ulong)puStack_130 & 1) != 0) {
                          func_0x0412a280(uStack_120,(ulong)puStack_130 & 0xfffffffffffffffe);
                        }
                        if (((ulong)uStack_148 & 1) != 0) {
                          func_0x0412a280(uStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
                        }
                      }
                      if (uVar31 != 1) {
                        param_2 = (ulong *)(ulong)(uVar31 & 0x7fffffff);
                        param_3 = (ulong *)0x1;
                        puStack_98 = param_2;
                        do {
                          plVar21 = *(long **)(puVar22[8] + (long)param_3 * 8);
                          cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                          if (cVar8 == '\b') {
                            bVar2 = *(byte *)(plVar21 + 1);
                            if ((bVar2 & 1) == 0) {
                              uVar20 = (ulong)(bVar2 >> 1);
                              if (bVar2 >> 1 != 0) goto LAB_0b3f4e79;
                            }
                            else {
                              uVar20 = plVar21[2];
                              if (uVar20 != 0) {
LAB_0b3f4e79:
                                if ((bVar2 & 1) == 0) {
                                  puVar13 = (ulong *)((long)plVar21 + 9);
                                  unaff_R14 = (ulong *)((long)plVar21 + 10);
                                  if (*(char *)puVar13 != '+') goto LAB_0b3f4e91;
LAB_0b3f4ece:
                                  plVar21 = (long *)(uVar20 - 1);
                                  if ((long *)0xfffffffffffffff7 < plVar21) goto LAB_0b3f8335;
                                  if (uVar20 < 0x18) {
                                    uStack_148 = (undefined *)
                                                 CONCAT71(uStack_148._1_7_,(char)plVar21 * '\x02');
                                    uVar24 = (long)&uStack_148 + 1;
                                    if (plVar21 != (long *)0x0) goto LAB_0b3f4fca;
                                  }
                                  else {
                                    uVar20 = ((ulong)plVar21 | 7) + 1;
                                    if (((ulong)plVar21 | 7) == 0x17) {
                                      uVar20 = 0x1a;
                                    }
                                    uVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                       (&DAT_0f5463b0,uVar20);
                                    if (uVar24 == 0) {
                                      func_0x0eec74c0(uVar20,0);
                                    }
                                    uStack_148 = (undefined *)(uVar20 | 1);
                                    param_2 = puStack_98;
                                    uStack_140 = plVar21;
                                    uStack_138 = uVar24;
LAB_0b3f4fca:
                                    memmove(uVar24,unaff_R14,plVar21);
                                  }
                                  *(undefined1 *)(uVar24 + (long)plVar21) = 0;
                                  func_0x0b3cdd80(param_1[0x55],&uStack_148);
                                }
                                else {
                                  puVar13 = (ulong *)plVar21[3];
                                  unaff_R14 = (ulong *)((long)puVar13 + 1);
                                  if ((char)*puVar13 == '+') goto LAB_0b3f4ece;
LAB_0b3f4e91:
                                  plVar21 = (long *)(uVar20 - 1);
                                  if ((long *)0xfffffffffffffff7 < plVar21) goto LAB_0b3f8335;
                                  if (uVar20 < 0x18) {
                                    uStack_148 = (undefined *)
                                                 CONCAT71(uStack_148._1_7_,(char)plVar21 * '\x02');
                                    uVar24 = (long)&uStack_148 + 1;
                                    if (plVar21 != (long *)0x0) goto LAB_0b3f4f4f;
                                  }
                                  else {
                                    uVar20 = ((ulong)plVar21 | 7) + 1;
                                    if (((ulong)plVar21 | 7) == 0x17) {
                                      uVar20 = 0x1a;
                                    }
                                    uVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                       (&DAT_0f5463b0,uVar20);
                                    if (uVar24 == 0) {
                                      func_0x0eec74c0(uVar20,0);
                                    }
                                    uStack_148 = (undefined *)(uVar20 | 1);
                                    param_2 = puStack_98;
                                    uStack_140 = plVar21;
                                    uStack_138 = uVar24;
LAB_0b3f4f4f:
                                    memmove(uVar24,unaff_R14,plVar21);
                                  }
                                  *(undefined1 *)(uVar24 + (long)plVar21) = 0;
                                  func_0x0b3cde80(param_1[0x55],&uStack_148);
                                }
                                if (((ulong)uStack_148 & 1) != 0) {
                                  func_0x0412a280(uStack_138,(ulong)uStack_148 & 0xfffffffffffffffe)
                                  ;
                                }
                              }
                            }
                          }
                          param_3 = (ulong *)((long)param_3 + 1);
                        } while (param_2 != param_3);
                      }
LAB_0b3f4788:
                      uStack_148 = &UNK_0146141a;
                      uStack_140 = (long *)0xa;
                      puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      if ((puVar13 != puVar19) && ((int)puVar13[0xc] == 10)) {
                        puVar17 = (undefined8 *)
                                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                        if (puVar17 == (undefined8 *)0x0) {
                          func_0x0eec74c0(0x20,0);
                        }
                        *puVar17 = &UNK_0f47e0b0;
                        puVar17[2] = 0;
                        puVar17[3] = 0;
                        puVar17[1] = puVar17 + 2;
                        func_0x0d6bd5f0(puVar17,puVar13 + 7);
                        plVar21 = (long *)param_1[0x56];
                        param_1[0x56] = (ulong)puVar17;
                        if (plVar21 != (long *)0x0) {
                          (**(code **)(*plVar21 + 8))();
                        }
                      }
                      uStack_148 = &UNK_0184bed1;
                      uStack_140 = (long *)0x11;
                      puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      if ((puVar13 != puVar19) && ((int)puVar13[0xc] == 10)) {
                        uVar31 = (uint)param_1[3];
                        lVar14 = func_0x0b463d80(param_1[2],0xbef5aaf6);
                        uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                        if ((uVar20 < (ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3)
                            ) && ((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                  lVar26 != 0 &&
                                  (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                  (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)))) {
                          lVar14 = (ulong)((uVar11 & 0x7f) * 0x28) +
                                   *(long *)(*(long *)(lVar14 + 0x50) +
                                            (ulong)((uVar11 & 0x3ff80) >> 4));
                        }
                        else {
                          uStack_148 = (undefined *)CONCAT44(uStack_148._4_4_,uVar31);
                          func_0x0b465090(lVar14,&uStack_148,0);
                          lVar14 = (ulong)(((uint)(extraout_RDX - 1U) & 0x7f) * 0x28) +
                                   *(long *)(*(long *)(lVar14 + 0x50) + (extraout_RDX - 1U >> 7) * 8
                                            );
                        }
                        uVar15 = (**(code **)(*(long *)param_1[0x3a] + 0xc60))();
                        func_0x0d1949a0(lVar14,puVar13 + 7,uVar15);
                      }
                      uStack_148 = &UNK_012658cb;
                      uStack_140 = (long *)0xc;
                      puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      if ((puVar13 != puVar19) && ((int)puVar13[0xc] == 3)) {
                        *(int *)((long)param_1 + 0x204) = (int)puVar13[8];
                      }
                      func_0x0b3c6a40(&uStack_148,param_1[0x55],1);
                      puVar7 = uStack_148;
                      uStack_148 = (undefined *)0x0;
                      uVar20 = param_1[0x12];
                      param_1[0x12] = (ulong)puVar7;
                      if (uVar20 != 0) {
                        func_0x0b0c2520(uVar20);
                        func_0x0412a280(uVar20,0x378);
                        uVar20 = (ulong)uStack_148;
                        uStack_148 = (undefined *)0x0;
                        if (uVar20 != 0) {
                          func_0x0b0c2520(uVar20);
                          func_0x0412a280(uVar20,0x378);
                        }
                      }
                      func_0x0b3c6f10(param_1,0);
                      uStack_148 = &UNK_01495721;
                      uStack_140 = (long *)0x3;
                      puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      puVar13 = (ulong *)0x0;
                      if (puVar22 != puVar19) {
                        puVar13 = (ulong *)0x0;
                        if ((int)puVar22[0xc] == 9) {
                          puVar13 = puVar22 + 7;
                        }
                      }
                      uStack_148 = &UNK_011bc5f3;
                      uStack_140 = (long *)0x6;
                      puVar22 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      if (puVar22 == puVar19) {
                        param_2 = (ulong *)0x0;
                      }
                      else {
                        param_2 = (ulong *)0x0;
                        if ((int)puVar22[0xc] == 9) {
                          param_2 = puVar22 + 7;
                        }
                      }
                      uStack_148 = &UNK_0128f37c;
                      uStack_140 = (long *)0x8;
                      puVar18 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
                      if (puVar18 == puVar19) {
                        unaff_R14 = (ulong *)0x0;
                      }
                      else {
                        unaff_R14 = (ulong *)0x0;
                        if ((int)puVar18[0xc] == 9) {
                          unaff_R14 = puVar18 + 7;
                        }
                      }
                      param_3 = param_1;
                      if (DAT_0f6b2dc0 != '\0') goto LAB_0b3f4acf;
                      do {
                        iVar12 = FUN_04108328(&DAT_0f6b2dc0);
                        if (iVar12 != 0) {
                          _DAT_0f6b2d98 = &UNK_0f47e350;
                          _DAT_0f6b2da0 = 0;
                          uRam000000000f6b2da8 = 0;
                          _DAT_0f6b2da9 = 0;
                          uRam000000000f6b2db0 = 0;
                          uRam000000000f6b2db1 = 0;
                          __cxa_atexit(&UNK_05339d40,&DAT_0f6b2d98,0xf53dab8);
                          func_0x0410844d(&DAT_0f6b2dc0);
                        }
LAB_0b3f4acf:
                        if (puVar13 == (ulong *)0x0) {
                          puVar13 = (ulong *)&DAT_0f6b2d98;
                        }
                        if (param_2 == (ulong *)0x0) {
                          param_2 = (ulong *)&DAT_0f6b2d98;
                        }
                        if (unaff_R14 == (ulong *)0x0) {
                          unaff_R14 = (ulong *)&DAT_0f6b2d98;
                        }
                        puVar22 = puVar19;
                        if ((param_3[0x40] & 1) == 0) {
                          uStack_148 = &UNK_012a7a73;
                          uStack_140 = (long *)0xa;
                          puVar16 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if (puVar16 == puVar19) goto LAB_0b3f52ea;
                          puVar18 = puVar13;
                          param_3 = (ulong *)&UNK_012a7a73;
                          if ((ulong)(uint)puVar16[0xc] != 0xffffffff) {
                            uStack_b8 = &uStack_80;
                            plVar21 = (long *)&UNK_0f47e980;
                            lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar16[0xc] * 8))
                                               (&uStack_b8,puVar16 + 7);
                            if (lVar14 == 0) goto LAB_0b3f52ea;
                            uStack_b8 = (undefined8 *)&UNK_012a7a73;
                            puStack_b0 = (ulong *)0xa;
                            puVar22 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_b8);
                            if (puVar22 == puVar19) {
                              puVar19 = (ulong *)0x0;
                            }
                            else {
                              puVar19 = (ulong *)0x0;
                              if ((int)puVar22[0xc] == 8) {
                                puVar19 = puVar22 + 7;
                              }
                            }
                            puVar22 = puVar19 + 1;
                            param_3 = (ulong *)&UNK_01e79d90;
                            if (puVar19 == (ulong *)0x0) {
                              puVar22 = (ulong *)&UNK_01e79d90;
                            }
                            if ((*puVar22 & 1) == 0) {
                              uStack_138 = puVar22[2];
                              uStack_148 = (undefined *)*puVar22;
                              uStack_140 = (long *)puVar22[1];
                            }
                            else {
                              func_0x0412e5e0(&uStack_148,puVar22[2],puVar22[1]);
                            }
                            puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffffffffff00);
                            uStack_118 = uStack_118 & 0xffffff00;
                            puVar22 = (ulong *)&UNK_013b0565;
                            uStack_b8 = (undefined8 *)&UNK_013b0565;
                            puStack_b0 = (ulong *)0x12;
                            puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_b8);
                            if (puVar19 == puStack_158) {
LAB_0b3f51db:
                              func_0x0b3f8b30(param_1,&uStack_148);
                              param_3 = (ulong *)&UNK_012cb11b;
                              uStack_b8 = (undefined8 *)&UNK_012cb11b;
                              puStack_b0 = (ulong *)0x11;
                              puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_b8);
                              if (puVar19 == puStack_158) {
LAB_0b3f5292:
                                bVar27 = true;
                              }
                              else {
                                if ((ulong)(uint)puVar19[0xc] == 0xffffffff) goto LAB_0b3f888a;
                                uStack_80 = &uStack_90;
                                lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar19[0xc] * 8)
                                         )(&uStack_80,puVar19 + 7);
                                if (lVar14 == 0) goto LAB_0b3f5292;
                                uStack_b8 = (undefined8 *)&UNK_012cb11b;
                                puStack_b0 = (ulong *)0x11;
                                puVar18 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_b8);
                                if ((puVar18 == puStack_158) || ((int)puVar18[0xc] != 1)) {
                                  bVar27 = false;
                                }
                                else {
                                  bVar27 = (char)puVar18[8] != '\0';
                                }
                              }
                              func_0x0d879c70(puStack_168,0xe,bVar27);
                              if (((char)uStack_118 == '\x01') && (((ulong)puStack_130 & 1) != 0)) {
                                func_0x0412a280(uStack_120,(ulong)puStack_130 & 0xfffffffffffffffe);
                              }
                              puVar22 = puStack_158;
                              if (((ulong)uStack_148 & 1) != 0) {
                                func_0x0412a280(uStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
                              }
                              goto LAB_0b3f52ea;
                            }
                            if ((ulong)(uint)puVar19[0xc] != 0xffffffff) {
                              uStack_80 = &uStack_90;
                              lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar19[0xc] * 8))
                                                 (&uStack_80,puVar19 + 7);
                              if (lVar14 != 0) {
                                uStack_80 = (ulong *)&UNK_013b0565;
                                uStack_78 = 0x12;
                                puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_80);
                                if (puVar19 == puStack_158) {
                                  puVar16 = (ulong *)0x0;
                                }
                                else {
                                  puVar16 = (ulong *)0x0;
                                  if ((int)puVar19[0xc] == 8) {
                                    puVar16 = puVar19 + 7;
                                  }
                                }
                                puVar19 = puVar16 + 1;
                                if (puVar16 == (ulong *)0x0) {
                                  puVar19 = (ulong *)&UNK_01e79d90;
                                }
                                if ((*puVar19 & 1) == 0) {
                                  uStack_a8 = puVar19[2];
                                  uStack_b8 = (undefined8 *)*puVar19;
                                  puStack_b0 = (ulong *)puVar19[1];
                                }
                                else {
                                  func_0x0412e5e0(&uStack_b8,puVar19[2],puVar19[1]);
                                }
                                bStack_a0 = 1;
                                if ((char)uStack_118 == '\0') {
                                  uStack_120 = uStack_a8;
                                  puStack_130 = uStack_b8;
                                  puStack_128 = puStack_b0;
                                  uStack_b8 = (undefined8 *)0x0;
                                  puStack_b0 = (ulong *)0x0;
                                  uStack_a8 = 0;
                                  uStack_118 = CONCAT31(uStack_118._1_3_,1);
                                }
                                else if (((ulong)puStack_130 & 1) == 0) {
                                  uStack_120 = uStack_a8;
                                  puStack_130 = uStack_b8;
                                  puStack_128 = puStack_b0;
                                  uStack_b8 = (undefined8 *)((ulong)uStack_b8 & 0xffffffffffff0000);
                                }
                                else {
                                  func_0x0412a280(uStack_120,(ulong)puStack_130 & 0xfffffffffffffffe
                                                 );
                                  uStack_120 = uStack_a8;
                                  puStack_130 = uStack_b8;
                                  puStack_128 = puStack_b0;
                                  uStack_b8 = (undefined8 *)((ulong)uStack_b8 & 0xffffffffffff0000);
                                  if ((bStack_a0 & 1) == 0) goto LAB_0b3f51db;
                                }
                              }
                              goto LAB_0b3f51db;
                            }
LAB_0b3f888a:
                            func_0x04931450();
LAB_0b3f888f:
                            iVar12 = FUN_04108328(&DAT_0f5a6498);
                            if (iVar12 != 0) {
                              LOCK();
                              UNLOCK();
                              _DAT_0f5a6490 = _DAT_0f555550;
                              _DAT_0f555550 = _DAT_0f555550 + 1;
                              func_0x0410844d(&DAT_0f5a6498);
                            }
LAB_0b3f60ef:
                            plVar23 = (long *)(plVar21[0x2f] +
                                              (ulong)(((uint)((int)plVar21[0x30] -
                                                             (int)plVar21[0x2f]) >> 3) - 1 &
                                                     (uint)_DAT_0f5a6490) * 8);
                            do {
                              if (*plVar23 == -1) goto LAB_0b3f616f;
                              lVar14 = *plVar23 * 0x20;
                              plVar23 = (long *)(plVar21[0x32] + lVar14);
                            } while (*(ushort *)(plVar21[0x32] + 8 + lVar14) != _DAT_0f5a6490);
                            if ((plVar23 != (long *)plVar21[0x33]) &&
                               (plVar21 = (long *)plVar23[2], plVar21 != (long *)0x0)) {
                              (**(code **)(*plVar21 + 0x18))(plVar21,puStack_168,unaff_R14,puVar18);
                            }
                            goto LAB_0b3f616f;
                          }
LAB_0b3f831f:
                          func_0x04931450();
                        }
                        else {
LAB_0b3f52ea:
                          fVar30 = 0.0;
                          if ((0 < (int)(puVar13[2] - (long)puVar13[1] >> 3)) &&
                             (plVar21 = *(long **)puVar13[1], plVar21 != (long *)0x0)) {
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            fVar30 = 0.0;
                            if (cVar8 == '\x05') {
                              fVar30 = *(float *)(plVar21 + 1);
                            }
                          }
                          uVar29 = 0;
                          if ((1 < (int)(puVar13[2] - puVar13[1] >> 3)) &&
                             (plVar21 = *(long **)(puVar13[1] + 8), plVar21 != (long *)0x0)) {
                            puStack_98 = (ulong *)CONCAT44(puStack_98._4_4_,fVar30);
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            uVar29 = 0;
                            fVar30 = puStack_98._0_4_;
                            if (cVar8 == '\x05') {
                              uVar29 = (undefined4)plVar21[1];
                            }
                          }
                          puVar18 = puStack_58;
                          uVar32 = 0;
                          if ((2 < (int)(puVar13[2] - puVar13[1] >> 3)) &&
                             (plVar21 = *(long **)(puVar13[1] + 0x10), plVar21 != (long *)0x0)) {
                            puStack_98 = (ulong *)CONCAT44(puStack_98._4_4_,fVar30);
                            uStack_64 = uVar29;
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            uVar32 = 0;
                            uVar29 = uStack_64;
                            fVar30 = puStack_98._0_4_;
                            if (cVar8 == '\x05') {
                              uVar32 = (undefined4)plVar21[1];
                            }
                          }
                          uStack_148 = (undefined *)CONCAT44(uVar29,fVar30);
                          uStack_140 = (long *)CONCAT44(uStack_140._4_4_,uVar32);
                          uVar29 = (**(code **)(*puVar18 + 0x10))(puVar18,&uStack_148);
                          uStack_90 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
                          fVar36 = _DAT_011985c0;
                          if (_DAT_011985c0 <= (float)((uint)fVar30 & _DAT_014e7ba0)) {
                            fVar36 = (float)((uint)fVar30 & _DAT_014e7ba0);
                          }
                          auVar33._4_4_ = extraout_XMM0_Db & _UNK_014e7ba4;
                          auVar33._0_4_ = extraout_XMM0_Da & _DAT_014e7ba0;
                          auVar33._8_4_ = extraout_XMM0_Dc & _UNK_014e7ba8;
                          auVar33._12_4_ = extraout_XMM0_Dd & _UNK_014e7bac;
                          auVar33 = maxps(_DAT_014e98a0,auVar33);
                          iVar12 = -(uint)(auVar33._0_4_ == (float)DAT_014e98a0);
                          iVar28 = -(uint)(auVar33._4_4_ == DAT_014e98a0._4_4_);
                          auVar35._4_4_ = iVar28;
                          auVar35._0_4_ = iVar12;
                          auVar35._8_4_ = iVar28;
                          auVar35._12_4_ = iVar28;
                          auVar34._8_8_ = auVar35._8_8_;
                          auVar34._4_4_ = iVar12;
                          auVar34._0_4_ = iVar12;
                          iVar12 = movmskpd(uVar29,auVar34);
                          uVar20 = param_1[2];
                          uVar31 = (uint)param_1[3];
                          plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                            (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                 *(long *)(uVar20 + 0x38)) >> 3) -
                                                    1U & 0xf95d258f) * 8);
                          do {
                            fStack_88 = fVar30;
                            if (*plVar21 == -1) {
                              param_5 = (ulong *)0xffffffffffffffff;
                              goto LAB_0b3f5545;
                            }
                            param_5 = (ulong *)(*plVar21 * 0x20);
                            plVar21 = (long *)(*(long *)(uVar20 + 0x50) + (long)param_5);
                          } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + (long)param_5) !=
                                   -0x6a2da71);
                          if ((plVar21 != *(long **)(uVar20 + 0x58)) &&
                             (lVar14 = plVar21[2], lVar14 != 0)) {
                            uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                            param_5 = *(ulong **)(lVar14 + 8);
                            if ((uVar20 < (ulong)(*(long *)(lVar14 + 0x10) - (long)param_5 >> 3)) &&
                               ((param_5[uVar20] != 0 &&
                                ((fVar36 != _DAT_011985c0 || iVar12 != 3) &&
                                 (uVar31 & 0xfffc0000 ^
                                 *(uint *)(param_5[uVar20] + (ulong)(uVar31 & 0x7ff) * 4)) < 0x3ffff
                                )))) {
                              puVar17 = (undefined8 *)
                                        (**(code **)(*(long *)param_1[0x3a] + 0x458))();
                              uStack_90 = CONCAT44((float)(int)((ulong)*puVar17 >> 0x20),
                                                   (float)(int)*puVar17);
                              fStack_88 = (float)*(int *)(puVar17 + 1);
                            }
                          }
LAB_0b3f5545:
                          uVar20 = param_1[0x41];
                          uVar31 = 0;
                          if ((0 < (int)(param_2[2] - (long)param_2[1] >> 3)) &&
                             (plVar21 = *(long **)param_2[1], plVar21 != (long *)0x0)) {
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            uVar31 = 0;
                            if (cVar8 == '\x05') {
                              uVar31 = *(uint *)(plVar21 + 1);
                            }
                          }
                          uVar29 = 0;
                          if ((1 < (int)(param_2[2] - param_2[1] >> 3)) &&
                             (plVar21 = *(long **)(param_2[1] + 8), plVar21 != (long *)0x0)) {
                            puStack_98 = (ulong *)CONCAT44(puStack_98._4_4_,uVar31);
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            uVar29 = 0;
                            uVar31 = (uint)puStack_98._0_4_;
                            if (cVar8 == '\x05') {
                              uVar29 = (undefined4)plVar21[1];
                            }
                          }
                          uVar32 = 0;
                          if ((2 < (int)(param_2[2] - param_2[1] >> 3)) &&
                             (plVar21 = *(long **)(param_2[1] + 0x10), plVar21 != (long *)0x0)) {
                            puStack_98 = (ulong *)CONCAT44(puStack_98._4_4_,uVar31);
                            uStack_64 = uVar29;
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            uVar32 = 0;
                            uVar29 = uStack_64;
                            uVar31 = (uint)puStack_98._0_4_;
                            if (cVar8 == '\x05') {
                              uVar32 = (undefined4)plVar21[1];
                            }
                          }
                          uStack_148 = (undefined *)CONCAT44(uVar29,uVar31);
                          uStack_140 = (long *)CONCAT44(uStack_140._4_4_,uVar32);
                          uVar15 = (**(code **)(*puVar18 + 0x50))(puVar18,&uStack_148);
                          *(undefined8 *)(uVar20 + 0x18) = uVar15;
                          *(uint *)(uVar20 + 0x20) = uVar31;
                          fVar30 = (float)(_DAT_014e7ba0 & (uint)uVar15);
                          if ((_DAT_01198400 < fVar30) || (fVar30 <= _DAT_011986e8)) {
                            *(undefined4 *)(uVar20 + 0x18) = 0;
                          }
                          fVar30 = (float)((uint)((ulong)uVar15 >> 0x20) & _DAT_014e7ba0);
                          if ((_DAT_01198400 < fVar30) || (fVar30 <= _DAT_011986e8)) {
                            *(undefined4 *)(uVar20 + 0x1c) = 0;
                          }
                          if ((_DAT_01198400 < (float)(uVar31 & _DAT_014e7ba0)) ||
                             ((float)(uVar31 & _DAT_014e7ba0) <= _DAT_011986e8)) {
                            *(undefined4 *)(uVar20 + 0x20) = 0;
                          }
                          fVar30 = uStack_90._4_4_;
                          if (uStack_90._4_4_ <= _DAT_01198430) {
                            fVar30 = _DAT_01198430;
                          }
                          uStack_90 = CONCAT44(~-(uint)(_DAT_01198580 < uStack_90._4_4_) &
                                               (uint)fVar30 |
                                               (uint)_DAT_01198580 &
                                               -(uint)(_DAT_01198580 < uStack_90._4_4_),
                                               (undefined4)uStack_90);
                          func_0x0bf4a220(&uStack_90,&UNK_01333bf4);
                          func_0x0bf4a220(&uStack_90,&UNK_011c6e69);
                          puVar19 = (ulong *)param_1[0x41];
                          *puVar19 = uStack_90;
                          *(float *)(puVar19 + 1) = fStack_88;
                          uVar20 = param_1[0x41];
                          *(float *)(uVar20 + 0x14) = fStack_88;
                          *(ulong *)(uVar20 + 0xc) = uStack_90;
                          uVar20 = param_1[2];
                          uVar31 = (uint)param_1[3];
                          puVar19 = (ulong *)(*(long *)(uVar20 + 0x38) +
                                             (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                  *(long *)(uVar20 + 0x38)) >> 3) -
                                                     1U & 0xe53c7221) * 8);
                          puVar16 = *(ulong **)(uVar20 + 0x50);
                          do {
                            uVar24 = *puVar19;
                            if (uVar24 == 0xffffffffffffffff) {
                              puVar13 = *(ulong **)(uVar20 + 0x58);
                              puVar25 = (ulong *)0xffffffffffffffff;
                              puVar19 = puVar13;
                              goto LAB_0b3f57b8;
                            }
                            puVar25 = (ulong *)(uVar24 * 0x20);
                            puVar19 = puVar16 + uVar24 * 4;
                          } while ((int)(puVar16 + 1)[uVar24 * 4] != -0x1ac38ddf);
                          puVar13 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f57b8:
                          param_3 = param_1;
                          if ((puVar19 == puVar13) || (uVar20 = puVar19[2], uVar20 == 0)) break;
                          puVar16 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
                          puVar25 = *(ulong **)(uVar20 + 8);
                          param_5 = (ulong *)(*(long *)(uVar20 + 0x10) - (long)puVar25 >> 3);
                          if ((param_5 <= puVar16) ||
                             (((puVar16 = (ulong *)puVar25[(long)puVar16], puVar16 == (ulong *)0x0
                               || (uVar11 = *(uint *)((long)puVar16 + (ulong)(uVar31 & 0x7ff) * 4),
                                  0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))) ||
                              (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) +
                                                 (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 == 0))))
                          break;
                          *(float *)(lVar14 + 8 + (ulong)(uVar11 & 0x7f) * 0xc) = fStack_88;
                          *(ulong *)(lVar14 + (ulong)(uVar11 & 0x7f) * 0xc) = uStack_90;
                          uVar29 = 0;
                          if ((1 < (int)(unaff_R14[2] - unaff_R14[1] >> 3)) &&
                             (plVar21 = *(long **)(unaff_R14[1] + 8), plVar21 != (long *)0x0)) {
                            cVar8 = (**(code **)(*plVar21 + 0x30))(0,plVar21);
                            uVar29 = 0;
                            if (cVar8 == '\x05') {
                              uVar29 = (undefined4)plVar21[1];
                            }
                          }
                          uVar29 = (**(code **)(*puVar18 + 0x28))(uVar29,puVar18);
                          uVar29 = func_0x0eee37e0(uVar29,_DAT_01198934);
                          puStack_98 = (ulong *)CONCAT44(puStack_98._4_4_,uVar29);
                          if (((int)(unaff_R14[2] - (long)unaff_R14[1] >> 3) < 1) ||
                             (plVar21 = *(long **)unaff_R14[1], plVar21 == (long *)0x0)) {
                            uVar29 = 0;
                          }
                          else {
                            cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21);
                            uVar29 = 0;
                            if (cVar8 == '\x05') {
                              uVar29 = (undefined4)plVar21[1];
                            }
                          }
                          uVar29 = (**(code **)(*puVar18 + 0x30))(uVar29,puVar18);
                          uVar29 = func_0x0eee37e0(uVar29,_DAT_01198934);
                          puVar3 = (undefined4 *)param_1[0x43];
                          *puVar3 = puStack_98._0_4_;
                          puVar3[1] = uVar29;
                          puVar3[2] = puStack_98._0_4_;
                          puVar3[3] = uVar29;
                          uStack_148 = &UNK_0127f335;
                          uStack_140 = (long *)0xc;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if ((puVar19 == puVar22) || ((int)puVar19[0xc] != 5)) {
                            uVar29 = 0;
                          }
                          else {
                            uVar29 = (undefined4)puVar19[8];
                          }
                          uVar20 = param_1[2];
                          uVar31 = (uint)param_1[3];
                          puVar19 = (ulong *)(*(long *)(uVar20 + 0x38) +
                                             (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                  *(long *)(uVar20 + 0x38)) >> 3) -
                                                     1U & 0xce6b34f6) * 8);
                          puVar16 = *(ulong **)(uVar20 + 0x50);
                          do {
                            uVar24 = *puVar19;
                            if (uVar24 == 0xffffffffffffffff) {
                              puVar13 = *(ulong **)(uVar20 + 0x58);
                              puVar25 = (ulong *)0xffffffffffffffff;
                              puVar19 = puVar13;
                              goto LAB_0b3f59b8;
                            }
                            puVar25 = (ulong *)(uVar24 * 0x20);
                            puVar19 = puVar16 + uVar24 * 4;
                          } while ((int)(puVar16 + 1)[uVar24 * 4] != -0x3194cb0a);
                          puVar13 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f59b8:
                          if ((puVar19 == puVar13) || (uVar20 = puVar19[2], uVar20 == 0)) break;
                          puVar16 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
                          puVar25 = *(ulong **)(uVar20 + 8);
                          param_5 = (ulong *)(*(long *)(uVar20 + 0x10) - (long)puVar25 >> 3);
                          if ((param_5 <= puVar16) ||
                             (((puVar16 = (ulong *)puVar25[(long)puVar16], puVar16 == (ulong *)0x0
                               || (uVar11 = *(uint *)((long)puVar16 + (ulong)(uVar31 & 0x7ff) * 4),
                                  0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))) ||
                              (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) +
                                                 (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 == 0))))
                          break;
                          *(undefined4 *)(lVar14 + (ulong)(uVar11 & 0x7f) * 8) = uVar29;
                          uStack_148 = &UNK_01487380;
                          uStack_140 = (long *)0x8;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if ((puVar19 == puVar22) || ((int)puVar19[0xc] != 1)) {
                            bVar27 = false;
                          }
                          else {
                            bVar27 = (char)puVar19[8] != '\0';
                          }
                          func_0x0bbfab90(puStack_168,bVar27);
                          uStack_148 = &UNK_0146cdc8;
                          uStack_140 = (long *)0xc;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if ((puVar19 == puVar22) || ((int)puVar19[0xc] != 1)) {
                            bVar27 = false;
                          }
                          else {
                            bVar27 = (char)puVar19[8] != '\0';
                          }
                          *(bool *)((long)param_1 + 0x19c) = bVar27;
                          uStack_148 = &UNK_014d77c2;
                          uStack_140 = (long *)0xe;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if ((puVar19 == puVar22) || ((int)puVar19[0xc] != 3)) {
                            uVar29 = 0;
                          }
                          else {
                            uVar29 = (undefined4)puVar19[8];
                          }
                          uVar20 = param_1[2];
                          uVar31 = (uint)param_1[3];
                          puVar16 = (ulong *)(*(long *)(uVar20 + 0x38) +
                                             (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                  *(long *)(uVar20 + 0x38)) >> 3) -
                                                     1U & 0x94211021) * 8);
                          puVar25 = *(ulong **)(uVar20 + 0x50);
                          do {
                            uVar24 = *puVar16;
                            if (uVar24 == 0xffffffffffffffff) {
                              puVar19 = *(ulong **)(uVar20 + 0x58);
                              param_5 = (ulong *)0xffffffffffffffff;
                              puVar16 = puVar19;
                              goto LAB_0b3f5b59;
                            }
                            param_5 = (ulong *)(uVar24 * 0x20);
                            puVar16 = puVar25 + uVar24 * 4;
                          } while ((int)(puVar25 + 1)[uVar24 * 4] != -0x6bdeefdf);
                          puVar19 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f5b59:
                          if ((puVar16 == puVar19) || (uVar20 = puVar16[2], uVar20 == 0)) break;
                          puVar16 = (ulong *)(ulong)(uVar31 & 0x3ffff);
                          puVar25 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
                          param_5 = *(ulong **)(uVar20 + 8);
                          if (((ulong *)(*(long *)(uVar20 + 0x10) - (long)param_5 >> 3) <= puVar25)
                             || (puVar25 = (ulong *)param_5[(long)puVar25], puVar25 == (ulong *)0x0)
                             ) break;
                          uVar11 = *(uint *)((long)puVar25 + (ulong)(uVar31 & 0x7ff) * 4);
                          puVar16 = (ulong *)(ulong)uVar11;
                          if ((0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11)) ||
                             (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) +
                                                (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 == 0)) break;
                          *(undefined4 *)(lVar14 + 0x10 + (ulong)(uVar11 & 0x7f) * 0x1c) = uVar29;
                          uStack_148 = &UNK_014a2689;
                          uStack_140 = (long *)0x8;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if ((puVar19 != puVar22) &&
                             (((int)puVar19[0xc] == 1 && ((char)puVar19[8] != '\0')))) {
                            func_0x0bbfc8a0(puStack_168);
                          }
                          uStack_148 = &UNK_014a2692;
                          uStack_140 = (long *)0xc;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if (((puVar19 != puVar22) && ((int)puVar19[0xc] == 1)) &&
                             ((char)puVar19[8] != '\0')) {
                            uVar31 = (uint)param_1[3];
                            lVar14 = func_0x0b463020(param_1[2],0x7ee81405);
                            uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                            if ((((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <=
                                  uVar20) ||
                                (lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8), lVar26 == 0
                                )) || (0x3fffe < (uVar31 & 0xfffc0000 ^
                                                 *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4))))
                            {
                              uStack_148 = (undefined *)CONCAT44(uStack_148._4_4_,uVar31);
                              func_0x0492f360(lVar14,&uStack_148,0,0);
                            }
                            uStack_148 = &UNK_01230a34;
                            uStack_140 = (long *)0xf;
                            puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                            if (puVar19 != puVar22) {
                              unaff_R14 = puStack_150;
                              if ((ulong)(uint)puVar19[0xc] == 0xffffffff) goto LAB_0b3f831f;
                              uStack_b8 = &uStack_80;
                              lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar19[0xc] * 8))
                                                 (&uStack_b8,puVar19 + 7);
                              if ((lVar14 != 0) && (param_1[0x3a] != 0)) {
                                uStack_148 = &UNK_01230a34;
                                uStack_140 = (long *)0xf;
                                puVar18 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                                if ((puVar18 == puVar22) || ((int)puVar18[0xc] != 3)) {
                                  uVar29 = 0;
                                }
                                else {
                                  uVar29 = (undefined4)puVar18[8];
                                }
                                (**(code **)(*(long *)param_1[0x3a] + 0x30))
                                          (&uStack_148,(long *)param_1[0x3a],uVar29);
                                plVar21 = uStack_140;
                                uStack_48 = (undefined4)uStack_148;
                                uStack_44 = uStack_148._4_4_;
                                uStack_40 = (undefined4)uStack_140;
                                uStack_3c = uStack_140._4_4_;
                                if (uStack_140 != (long *)0x0) {
                                  LOCK();
                                  uStack_140[2] = uStack_140[2] + 1;
                                  UNLOCK();
                                }
                                func_0x0b3e7f80(param_1,&uStack_48);
                                if (plVar21 != (long *)0x0) {
                                  func_0x0412c2d0(plVar21);
                                }
                                if (uStack_140 != (long *)0x0) {
                                  func_0x0412c2d0();
                                }
                              }
                            }
                          }
                          uVar20 = param_1[0x41];
                          if ((long *)param_1[0x3a] == (long *)0x0) {
                            uVar9 = 1;
                          }
                          else {
                            uVar9 = (**(code **)(*(long *)param_1[0x3a] + 0x9f0))();
                          }
                          func_0x06e044c0(puStack_168,uVar20,uVar9);
                          lVar14 = func_0x0b3cd8b0(param_1);
                          bVar27 = (*(byte *)(lVar14 + 0x48) & 1) != 0;
                          uStack_148 = (undefined *)(lVar14 + 0x49);
                          if (bVar27) {
                            uStack_148 = (undefined *)*(ulong *)(lVar14 + 0x58);
                          }
                          puVar3 = (undefined4 *)param_1[0x41];
                          uStack_140 = (long *)(ulong)(*(byte *)(lVar14 + 0x48) >> 1);
                          if (bVar27) {
                            uStack_140 = *(long **)(lVar14 + 0x50);
                          }
                          uStack_138 = CONCAT44(uStack_138._4_4_,*puVar3);
                          puStack_128 = (ulong *)CONCAT44(puStack_128._4_4_,puVar3[1]);
                          uStack_118 = puVar3[2];
                          func_0x0470d9a0(&uStack_80,&UNK_01333c01,0x2a,0x999d,&uStack_148);
                          uVar20 = (ulong)uStack_80 >> 1 & 0x7f;
                          lVar14 = (long)&uStack_80 + 1;
                          if (((ulong)uStack_80 & 1) != 0) {
                            uVar20 = uStack_78;
                            lVar14 = lStack_70;
                          }
                          uStack_60 = 0;
                          if (lVar14 == 0) {
                            uStack_60 = (ulong)((uint)uVar20 & 0x7f) << 0x30;
                          }
                          else {
                            lVar26 = uVar20 + 9;
                            puVar18 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                         (&DAT_0f5463b0,lVar26,8);
                            if (lVar26 != 0 && puVar18 == (ulong *)0x0) {
                              func_0x0eec74c0(lVar26,8);
                            }
                            *puVar18 = uVar20;
                            func_0x0eee2f00(puVar18 + 1,lVar14,uVar20);
                            *(undefined1 *)((long)puVar18 + uVar20 + 8) = 0;
                            uStack_60 = (ulong)(puVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000
                            ;
                          }
                          uStack_148 = (undefined *)((ulong)uStack_148 & 0xffffffffffffff00);
                          uStack_138 = uStack_138 & 0xffffffffffffff00;
                          puVar22 = &uStack_60;
                          func_0x0eeb79f0(&uStack_b8,puVar22);
                          unaff_R14 = puStack_50;
                          puVar18 = puStack_58;
                          if ((uStack_60 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_60 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_60 = 0;
                          if (((ulong)uStack_80 & 1) != 0) {
                            func_0x0412a280(lStack_70,(ulong)uStack_80 & 0xfffffffffffffffe);
                          }
                          uVar15 = (**(code **)(*(long *)param_1[0x3a] + 0x130))();
                          func_0x0bf6aca0(uVar15,param_1,unaff_R14,puVar18);
                          (**(code **)(*param_1 + 0x438))(param_1,unaff_R14,puVar18);
                          uVar20 = param_1[0x3a];
                          if (uVar20 != 0) {
                            if ((*(long *)(uVar20 + 0x310) == 0) &&
                               (cVar8 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,
                                                        &UNK_0142bd41,&UNK_013b6dd1), cVar8 != '\0')
                               ) {
                              _DAT_00000000 = 0xdeadc0de;
                            }
                            if ((**(char **)(uVar20 + 0x310) == '\0') &&
                               (cVar8 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,
                                                        &UNK_0142bd41,&UNK_013b6dd1), cVar8 != '\0')
                               ) {
                              _DAT_00000000 = 0xdeadc0de;
                            }
                            (**(code **)(**(long **)(uVar20 + 800) + 0x10))(&uStack_148);
                            if (uStack_148 != (undefined *)0x0) {
                              cVar8 = func_0x09b94b50();
                              if (cVar8 != '\0') {
                                plVar21 = (long *)param_1[0x12];
                                if (DAT_0f5a6498 == '\0') goto LAB_0b3f888f;
                                goto LAB_0b3f60ef;
                              }
LAB_0b3f616f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f559440 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f559440), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f559438 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f559440);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f559438) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f61ff;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f559438);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f61ff:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b27c8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b27c8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b27c0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b27c8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b27c0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f628f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b27c0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f628f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f603ea0 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f603ea0), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f603e98 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f603ea0);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f603e98) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f631f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f603e98);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f631f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f5a6030 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f5a6030), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f5a6028 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f5a6030);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f5a6028) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f63af;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f5a6028);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f63af:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b32e8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b32e8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b32e0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b32e8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b32e0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f643f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b32e0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f643f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b27d8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b27d8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b27d0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b27d8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b27d0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f64cf;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b27d0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f64cf:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b32d8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b32d8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b32d0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b32d8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b32d0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f655f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b32d0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f655f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b3398 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b3398), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b3390 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b3398);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b3390) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f65ef;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b3390);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f65ef:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b27e8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b27e8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b27e0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b27e8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b27e0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f667f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b27e0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f667f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f5aa570 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f5aa570), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f5aa568 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f5aa570);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f5aa568) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f670f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f5aa568);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f670f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b27f8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b27f8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b27f0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b27f8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b27f0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f679f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b27f0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f679f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f5a5d50 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f5a5d50), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f5a5d48 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f5a5d50);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f5a5d48) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f682f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f5a5d48);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f682f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f559b70 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f559b70), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f559b68 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f559b70);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f559b68) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f68bf;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f559b68);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f68bf:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f5a5c00 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f5a5c00), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f5a5bf8 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f5a5c00);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f5a5bf8) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f694f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f5a5bf8);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f694f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b33a8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b33a8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b33a0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b33a8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b33a0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f69df;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b33a0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f69df:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f5a91a0 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f5a91a0), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f5a9198 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f5a91a0);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f5a9198) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6a6f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f5a9198);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f6a6f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b33b8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b33b8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b33b0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b33b8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b33b0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6aff;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b33b0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f6aff:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b33c8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b33c8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b33c0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b33c8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b33c0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6b8f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b33c0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f6b8f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b2808 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b2808), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b2800 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b2808);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b2800) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6c1f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b2800);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f6c1f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b2818 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b2818), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b2810 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b2818);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b2810) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6caf;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b2810);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f6caf:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b2828 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b2828), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b2820 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b2828);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b2820) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6d3f;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b2820);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
LAB_0b3f6d3f:
                              uVar20 = param_3[0x12];
                              if ((DAT_0f6b33d8 == '\0') &&
                                 (iVar12 = FUN_04108328(&DAT_0f6b33d8), iVar12 != 0)) {
                                LOCK();
                                UNLOCK();
                                _DAT_0f6b33d0 = _DAT_0f555550;
                                _DAT_0f555550 = _DAT_0f555550 + 1;
                                func_0x0410844d(&DAT_0f6b33d8);
                              }
                              plVar21 = (long *)(*(long *)(uVar20 + 0x178) +
                                                (ulong)(((uint)(*(int *)(uVar20 + 0x180) -
                                                               (int)*(long *)(uVar20 + 0x178)) >> 3)
                                                        - 1 & (uint)_DAT_0f6b33d0) * 8);
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f6dcf;
                                lVar14 = *plVar21 * 0x20;
                                plVar21 = (long *)(*(long *)(uVar20 + 400) + lVar14);
                              } while (*(ushort *)(*(long *)(uVar20 + 400) + 8 + lVar14) !=
                                       _DAT_0f6b33d0);
                              if ((plVar21 != *(long **)(uVar20 + 0x198)) &&
                                 (plVar21 = (long *)plVar21[2], plVar21 != (long *)0x0)) {
                                (**(code **)(*plVar21 + 0x18))
                                          (plVar21,puStack_168,unaff_R14,puVar18);
                              }
                            }
LAB_0b3f6dcf:
                            plVar21 = uStack_140;
                            if (uStack_140 != (long *)0x0) {
                              LOCK();
                              plVar23 = uStack_140 + 1;
                              lVar14 = *plVar23;
                              *plVar23 = *plVar23 + -1;
                              UNLOCK();
                              if (lVar14 == 0) {
                                (**(code **)(*uStack_140 + 0x10))(uStack_140);
                                func_0x0412c2d0(plVar21);
                              }
                            }
                          }
                          uVar20 = param_3[2];
                          uVar31 = (uint)param_3[3];
                          plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                            (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                 *(long *)(uVar20 + 0x38)) >> 3) -
                                                    1U & 0x89abb47b) * 8);
                          do {
                            if (*plVar21 == -1) goto LAB_0b3f6f7b;
                            lVar14 = *plVar21 * 0x20;
                            plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
                          } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != -0x76544b85);
                          if ((plVar21 == *(long **)(uVar20 + 0x58)) ||
                             (lVar14 = plVar21[2], lVar14 == 0)) {
LAB_0b3f6f7b:
                            func_0x0b460ed0();
                          }
                          else {
                            uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                            if (((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <=
                                 uVar20) ||
                               (((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                 lVar26 == 0 ||
                                 (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                 0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))) ||
                                (*(long *)(*(long *)(lVar14 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8))
                                 == 0)))) goto LAB_0b3f6f7b;
                            uStack_148 = &UNK_013c87f6;
                            uStack_140 = (long *)0x4;
                            puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                            if (((puVar19 != puStack_158) && ((int)puVar19[0xc] == 9)) &&
                               (uVar20 = puVar19[8], 0 < (int)(puVar19[9] - uVar20 >> 3))) {
                              lVar14 = 0;
                              do {
                                plVar21 = *(long **)(uVar20 + lVar14 * 8);
                                plVar23 = (long *)&UNK_01e79d90;
                                if (plVar21 != (long *)0x0) {
                                  cVar8 = (**(code **)(*plVar21 + 0x30))(plVar21,&UNK_01e79d90);
                                  if (cVar8 == '\b') {
                                    plVar23 = plVar21 + 1;
                                  }
                                  else {
                                    plVar23 = (long *)&UNK_01e79d90;
                                  }
                                }
                                func_0x0b3ce800(param_1,plVar23);
                                lVar14 = lVar14 + 1;
                                uVar20 = puVar19[8];
                              } while (lVar14 < (int)(puVar19[9] - uVar20 >> 3));
                            }
                          }
                          param_2 = puStack_50;
                          if (*(long *)(param_1[0x12] + 0x260) != 0) {
                            uVar20 = param_1[2];
                            uVar31 = (uint)param_1[3];
                            plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                              (ulong)(((uint)(*(int *)(uVar20 + 0x40) -
                                                             (int)*(long *)(uVar20 + 0x38)) >> 3) -
                                                      1 & 0x1779e2c7) * 8);
                            do {
                              if (*plVar21 == -1) goto LAB_0b3f708e;
                              lVar14 = *plVar21 * 0x20;
                              plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
                            } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != 0x1779e2c7);
                            if ((plVar21 != *(long **)(uVar20 + 0x58)) &&
                               (lVar14 = plVar21[2], lVar14 != 0)) {
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if ((uVar20 < (ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8)
                                                   >> 3)) &&
                                 (((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                   lVar26 != 0 &&
                                   (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                   (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)) &&
                                  (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                     (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 != 0))))
                              {
                                func_0x07164fd0(lVar14 + (ulong)(uVar11 & 0x7f) * 0x1a0,param_1,
                                                puStack_50,puVar18);
                                goto LAB_0b3f7093;
                              }
                            }
LAB_0b3f708e:
                            func_0x0b460ed0();
                          }
LAB_0b3f7093:
                          if (*(long *)(param_1[0x12] + 0x310) != 0) {
                            uVar20 = param_1[2];
                            uVar31 = (uint)param_1[3];
                            plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                              (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                   *(long *)(uVar20 + 0x38)) >> 3) -
                                                      1U & 0x94488499) * 8);
                            do {
                              if (*plVar21 == -1) goto LAB_0b3f719e;
                              lVar14 = *plVar21 * 0x20;
                              plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
                            } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != -0x6bb77b67)
                            ;
                            if ((plVar21 != *(long **)(uVar20 + 0x58)) &&
                               (lVar14 = plVar21[2], lVar14 != 0)) {
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if (((uVar20 < (ulong)(*(long *)(lVar14 + 0x10) -
                                                     *(long *)(lVar14 + 8) >> 3)) &&
                                  ((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                   lVar26 != 0 &&
                                   (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                   (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)))) &&
                                 (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                    (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 != 0)) {
                                func_0x06e6e2a0(lVar14 + (ulong)(uVar11 & 0x7f) * 0x2f8,param_1,
                                                param_2,puVar18);
                                goto LAB_0b3f71a3;
                              }
                            }
LAB_0b3f719e:
                            func_0x0b460ed0();
                          }
LAB_0b3f71a3:
                          lVar14 = *(long *)(param_1[0x12] + 0x350);
                          uVar31 = (uint)param_1[3];
                          unaff_R14 = (ulong *)(ulong)uVar31;
                          plVar21 = (long *)func_0x0b45c110(param_1[2]);
                          uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                          lVar26 = plVar21[1];
                          uVar24 = plVar21[2] - lVar26 >> 3;
                          if (lVar14 == 0) {
                            if ((uVar20 < uVar24) &&
                               (lVar14 = *(long *)(lVar26 + uVar20 * 8), lVar14 != 0)) {
                              uVar11 = *(uint *)(lVar14 + (ulong)(uVar31 & 0x7ff) * 4);
                              uVar31 = uVar31 & 0xfffc0000 ^ uVar11;
                              unaff_R14 = (ulong *)(ulong)uVar31;
                              if (uVar31 < 0x3ffff) {
                                (**(code **)(*plVar21 + 0x10))
                                          (plVar21,plVar21 + 4,(uVar11 & 0x3ffff) + 1);
                              }
                            }
                          }
                          else {
                            if (((uVar20 < uVar24) &&
                                (lVar14 = *(long *)(lVar26 + uVar20 * 8), lVar14 != 0)) &&
                               (uVar11 = *(uint *)(lVar14 + (ulong)(uVar31 & 0x7ff) * 4),
                               (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)) {
                              uVar20 = (ulong)(uVar11 & 0x3ffff);
                            }
                            else {
                              lVar14 = func_0x0b463c70(plVar21,uVar31,param_1);
                              uVar20 = lVar14 - 1;
                            }
                            func_0x07175d00((ulong)(((uint)uVar20 & 0x7f) * 0x60) +
                                            *(long *)(plVar21[10] + (uVar20 >> 7) * 8),param_2,
                                            puVar18);
                          }
                          if (*(long *)(param_1[0x12] + 0x268) != 0) {
                            uVar20 = param_1[2];
                            uVar31 = (uint)param_1[3];
                            plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                              (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                   *(long *)(uVar20 + 0x38)) >> 3) -
                                                      1U & 0x629ef917) * 8);
                            do {
                              if (*plVar21 == -1) goto LAB_0b3f739b;
                              lVar14 = *plVar21 * 0x20;
                              plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
                            } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != 0x629ef917);
                            if ((plVar21 != *(long **)(uVar20 + 0x58)) &&
                               (lVar14 = plVar21[2], lVar14 != 0)) {
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if (((uVar20 < (ulong)(*(long *)(lVar14 + 0x10) -
                                                     *(long *)(lVar14 + 8) >> 3)) &&
                                  ((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                   lVar26 != 0 &&
                                   (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                   (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)))) &&
                                 (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                    (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 != 0)) {
                                func_0x07172bd0(lVar14 + (ulong)(uVar11 & 0x7f) * 0x68,param_1,
                                                param_2,puVar18);
                                goto LAB_0b3f73a0;
                              }
                            }
LAB_0b3f739b:
                            func_0x0b460ed0();
                          }
LAB_0b3f73a0:
                          if (*(long *)(param_1[0x12] + 0x348) != 0) {
                            uVar20 = param_1[2];
                            uVar31 = (uint)param_1[3];
                            plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                              (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                   *(long *)(uVar20 + 0x38)) >> 3) -
                                                      1U & 0x8d862070) * 8);
                            do {
                              if (*plVar21 == -1) goto LAB_0b3f74ac;
                              lVar14 = *plVar21 * 0x20;
                              plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
                            } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != -0x7279df90)
                            ;
                            if ((plVar21 != *(long **)(uVar20 + 0x58)) &&
                               (lVar14 = plVar21[2], lVar14 != 0)) {
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if ((uVar20 < (ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8)
                                                   >> 3)) &&
                                 (((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                   lVar26 != 0 &&
                                   (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                   (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)) &&
                                  (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                     (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 != 0))))
                              {
                                func_0x07286740(lVar14 + (ulong)(uVar11 & 0x7f) * 0x28,param_1,
                                                param_2,puVar18);
                                goto LAB_0b3f74b1;
                              }
                            }
LAB_0b3f74ac:
                            func_0x0b460ed0();
                          }
LAB_0b3f74b1:
                          uVar20 = param_1[2];
                          uVar31 = (uint)param_1[3];
                          plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                            (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                 *(long *)(uVar20 + 0x38)) >> 3) -
                                                    1U & 0x81576d3b) * 8);
                          lVar14 = *(long *)(uVar20 + 0x50);
                          plVar23 = plVar21;
                          do {
                            if (*plVar23 == -1) goto LAB_0b3f7636;
                            lVar26 = *plVar23 * 0x20;
                            plVar23 = (long *)(lVar14 + lVar26);
                          } while (*(int *)(lVar14 + 8 + lVar26) != -0x7ea892c5);
                          plVar4 = *(long **)(uVar20 + 0x58);
                          if ((plVar23 != plVar4) && (lVar26 = plVar23[2], lVar26 != 0)) {
                            uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                            if ((uVar20 < (ulong)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8)
                                                 >> 3)) &&
                               (lVar5 = *(long *)(*(long *)(lVar26 + 8) + uVar20 * 8), lVar5 != 0))
                            {
                              uVar11 = *(uint *)(lVar5 + (ulong)(uVar31 & 0x7ff) * 4);
                              if (((uVar11 ^ uVar31 & 0xfffc0000) < 0x3ffff) &&
                                 (*(long *)(*(long *)(lVar26 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8)
                                           ) != 0)) {
                                do {
                                  lVar26 = *plVar21;
                                  plVar21 = plVar4;
                                  if (lVar26 == -1) break;
                                  lVar26 = lVar26 * 0x20;
                                  plVar21 = (long *)(lVar14 + lVar26);
                                } while (*(int *)(lVar14 + 8 + lVar26) != -0x7ea892c5);
                                if (((((plVar21 == plVar4) || (lVar14 = plVar21[2], lVar14 == 0)) ||
                                     ((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3)
                                      <= uVar20)) ||
                                    ((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                     lVar26 == 0 ||
                                     (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                     0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))))) ||
                                   (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                      (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 == 0))
                                {
                                  func_0x0b460ed0();
                                }
                                else {
                                  func_0x072ae3e0(lVar14 + (ulong)(uVar11 & 0x7f) * 0x18,param_1,
                                                  param_2,puVar18);
                                }
                              }
                            }
                          }
LAB_0b3f7636:
                          lVar14 = (**(code **)(*(long *)param_1[0x3a] + 0x570))();
                          puVar19 = (ulong *)(lVar14 + 0x50);
                          puVar13 = puVar19;
                          if (((*(char *)(lVar14 + 0x77) == '\0') &&
                              ((unaff_R14 = (ulong *)(lVar14 + 0x70),
                               *(char *)(lVar14 + 0x68) != '\0' ||
                               (puVar13 = unaff_R14, (*(byte *)(lVar14 + 0x56) & 1) != 0)))) &&
                             (cVar8 = func_0x04fa7a10(unaff_R14,puVar19), puVar13 = puVar19,
                             cVar8 != '\0')) {
                            puVar13 = unaff_R14;
                          }
                          puVar19 = (ulong *)&DAT_0f72b850;
                          if (((*(byte *)((long)puVar13 + 6) | (byte)puVar13[3]) & 1) != 0) {
                            puVar19 = puVar13;
                          }
                          cVar8 = func_0x04fa7a10(puVar19,0xf5a29a0);
                          if (cVar8 == '\0') {
                            uVar20 = param_1[2];
                            uVar31 = (uint)param_1[3];
                            plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                              (ulong)(((uint)(*(int *)(uVar20 + 0x40) -
                                                             (int)*(long *)(uVar20 + 0x38)) >> 3) -
                                                      1 & 0x174be3d7) * 8);
                            lVar14 = *(long *)(uVar20 + 0x50);
                            plVar23 = plVar21;
                            do {
                              if (*plVar23 == -1) goto LAB_0b3f76a1;
                              lVar26 = *plVar23 * 0x20;
                              plVar23 = (long *)(lVar14 + lVar26);
                            } while (*(int *)(lVar14 + 8 + lVar26) != 0x174be3d7);
                            plVar4 = *(long **)(uVar20 + 0x58);
                            if ((plVar23 != plVar4) && (lVar26 = plVar23[2], lVar26 != 0)) {
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if ((uVar20 < (ulong)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8)
                                                   >> 3)) &&
                                 (lVar5 = *(long *)(*(long *)(lVar26 + 8) + uVar20 * 8), lVar5 != 0)
                                 ) {
                                uVar11 = *(uint *)(lVar5 + (ulong)(uVar31 & 0x7ff) * 4);
                                if (((uVar11 ^ uVar31 & 0xfffc0000) < 0x3ffff) &&
                                   (*(long *)(*(long *)(lVar26 + 0x50) +
                                             (ulong)(uVar11 >> 4 & 0x3ff8)) != 0)) {
                                  do {
                                    lVar26 = *plVar21;
                                    plVar21 = plVar4;
                                    if (lVar26 == -1) break;
                                    lVar26 = lVar26 * 0x20;
                                    plVar21 = (long *)(lVar14 + lVar26);
                                  } while (*(int *)(lVar14 + 8 + lVar26) != 0x174be3d7);
                                  if ((((plVar21 == plVar4) || (lVar14 = plVar21[2], lVar14 == 0))
                                      || ((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8)
                                                 >> 3) <= uVar20)) ||
                                     (((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                       lVar26 == 0 ||
                                       (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                       0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))) ||
                                      (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                         (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 == 0
                                      )))) {
                                    func_0x0b460ed0();
                                  }
                                  else {
                                    func_0x072877e0(lVar14 + (ulong)(uVar11 & 0x7f) * 0x70,param_1,
                                                    param_2,puVar18);
                                  }
                                }
                              }
                            }
                          }
LAB_0b3f76a1:
                          *(char *)((long)param_1 + 0x297) = '\x01';
                          uStack_148 = &UNK_0120be67;
                          uStack_140 = (long *)0x16;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if (puVar19 != puStack_158) {
                            param_3 = param_1;
                            if ((ulong)(uint)puVar19[0xc] == 0xffffffff) goto LAB_0b3f8324;
                            uStack_80 = puVar22;
                            lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar19[0xc] * 8))
                                               (&uStack_80,puVar19 + 7);
                            if (lVar14 != 0) {
                              uVar31 = (uint)param_1[3];
                              lVar14 = func_0x07322400(param_1[2],0x47e62980);
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if ((((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3)
                                    <= uVar20) ||
                                  (lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                  lVar26 == 0)) ||
                                 (0x3fffe < (uVar31 & 0xfffc0000 ^
                                            *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4)))) {
                                uStack_148 = (undefined *)CONCAT44(uStack_148._4_4_,uVar31);
                                func_0x07323260(lVar14,&uStack_148,0);
                              }
                              uVar20 = param_1[2];
                              uVar31 = (uint)param_1[3];
                              plVar23 = (long *)(*(long *)(uVar20 + 0x38) +
                                                (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                     *(long *)(uVar20 + 0x38)) >> 3)
                                                        - 1U & 0x47e62980) * 8);
                              lVar14 = *(long *)(uVar20 + 0x50);
                              plVar21 = plVar23;
                              do {
                                if (*plVar21 == -1) goto LAB_0b3f7aa8;
                                lVar26 = *plVar21 * 0x20;
                                plVar21 = (long *)(lVar14 + lVar26);
                              } while (*(int *)(lVar14 + 8 + lVar26) != 0x47e62980);
                              plVar4 = *(long **)(uVar20 + 0x58);
                              if ((plVar21 != plVar4) && (lVar26 = plVar21[2], lVar26 != 0)) {
                                uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                                if ((uVar20 < (ulong)(*(long *)(lVar26 + 0x10) -
                                                      *(long *)(lVar26 + 8) >> 3)) &&
                                   (lVar5 = *(long *)(*(long *)(lVar26 + 8) + uVar20 * 8),
                                   lVar5 != 0)) {
                                  uVar11 = *(uint *)(lVar5 + (ulong)(uVar31 & 0x7ff) * 4);
                                  if (((uVar11 ^ uVar31 & 0xfffc0000) < 0x3ffff) &&
                                     (*(long *)(*(long *)(lVar26 + 0x50) +
                                               (ulong)(uVar11 >> 4 & 0x3ff8)) != 0)) {
                                    do {
                                      lVar26 = *plVar23;
                                      plVar23 = plVar4;
                                      if (lVar26 == -1) break;
                                      lVar26 = lVar26 * 0x20;
                                      plVar23 = (long *)(lVar14 + lVar26);
                                    } while (*(int *)(lVar14 + 8 + lVar26) != 0x47e62980);
                                    if ((((plVar23 == plVar4) || (lVar14 = plVar23[2], lVar14 == 0))
                                        || ((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8)
                                                   >> 3) <= uVar20)) ||
                                       (((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                         lVar26 == 0 ||
                                         (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                         0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))) ||
                                        (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                           (ulong)(uVar11 >> 4 & 0x3ff8)),
                                        lVar14 == 0)))) {
                                      func_0x0b460ed0();
                                    }
                                    else {
                                      func_0x072ae930(lVar14 + (ulong)(uVar11 & 0x7f) * 4,param_1,
                                                      param_2,puVar18);
                                    }
                                  }
                                }
                              }
                            }
                          }
LAB_0b3f7aa8:
                          uStack_148 = &UNK_0184beb9;
                          uStack_140 = (long *)0x11;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if (puVar19 != puStack_158) {
                            param_3 = param_1;
                            if ((ulong)(uint)puVar19[0xc] == 0xffffffff) goto LAB_0b3f8324;
                            uStack_80 = puVar22;
                            lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar19[0xc] * 8))
                                               (&uStack_80,puVar19 + 7);
                            if (lVar14 != 0) {
                              uVar31 = (uint)param_1[3];
                              lVar14 = func_0x05851ba0(param_1[2],0x39c58d8b);
                              uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                              if ((((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3)
                                    <= uVar20) ||
                                  (lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                  lVar26 == 0)) ||
                                 (0x3fffe < (uVar31 & 0xfffc0000 ^
                                            *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4)))) {
                                uStack_148 = (undefined *)CONCAT44(uStack_148._4_4_,uVar31);
                                func_0x05852a50(lVar14,&uStack_148,0);
                              }
                              uVar20 = param_1[2];
                              uVar31 = (uint)param_1[3];
                              plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                                                (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) -
                                                                     *(long *)(uVar20 + 0x38)) >> 3)
                                                        - 1U & 0x39c58d8b) * 8);
                              lVar14 = *(long *)(uVar20 + 0x50);
                              plVar23 = plVar21;
                              do {
                                if (*plVar23 == -1) goto LAB_0b3f7d06;
                                lVar26 = *plVar23 * 0x20;
                                plVar23 = (long *)(lVar14 + lVar26);
                              } while (*(int *)(lVar14 + 8 + lVar26) != 0x39c58d8b);
                              plVar4 = *(long **)(uVar20 + 0x58);
                              if ((plVar23 != plVar4) && (lVar26 = plVar23[2], lVar26 != 0)) {
                                uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
                                if ((uVar20 < (ulong)(*(long *)(lVar26 + 0x10) -
                                                      *(long *)(lVar26 + 8) >> 3)) &&
                                   (lVar5 = *(long *)(*(long *)(lVar26 + 8) + uVar20 * 8),
                                   lVar5 != 0)) {
                                  uVar11 = *(uint *)(lVar5 + (ulong)(uVar31 & 0x7ff) * 4);
                                  if (((uVar11 ^ uVar31 & 0xfffc0000) < 0x3ffff) &&
                                     (*(long *)(*(long *)(lVar26 + 0x50) +
                                               (ulong)(uVar11 >> 4 & 0x3ff8)) != 0)) {
                                    do {
                                      lVar26 = *plVar21;
                                      plVar21 = plVar4;
                                      if (lVar26 == -1) break;
                                      lVar26 = lVar26 * 0x20;
                                      plVar21 = (long *)(lVar14 + lVar26);
                                    } while (*(int *)(lVar14 + 8 + lVar26) != 0x39c58d8b);
                                    if (((((plVar21 == plVar4) || (lVar14 = plVar21[2], lVar14 == 0)
                                          ) || ((ulong)(*(long *)(lVar14 + 0x10) -
                                                        *(long *)(lVar14 + 8) >> 3) <= uVar20)) ||
                                        ((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8),
                                         lVar26 == 0 ||
                                         (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
                                         0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))))) ||
                                       (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) +
                                                          (ulong)(uVar11 >> 4 & 0x3ff8)),
                                       lVar14 == 0)) {
                                      func_0x0b460ed0();
                                    }
                                    else {
                                      func_0x072ac530(lVar14 + (ulong)(uVar11 & 0x7f) * 0x24,param_1
                                                      ,param_2,puVar18);
                                    }
                                  }
                                }
                              }
                            }
                          }
LAB_0b3f7d06:
                          uStack_148 = &UNK_0184b691;
                          uStack_140 = (long *)0x10;
                          puVar19 = (ulong *)func_0x0d6c97a0(puStack_150,&uStack_148);
                          if (puVar19 == puStack_158) goto LAB_0b3f7f55;
                          param_3 = param_1;
                          if ((ulong)(uint)puVar19[0xc] != 0xffffffff) goto code_r0x0b3f7d46;
                        }
LAB_0b3f8324:
                        func_0x04931450();
                        puVar13 = puVar18;
LAB_0b3f8329:
                        func_0x04882ef0(&UNK_012d4a56);
LAB_0b3f8335:
                        puVar19 = puVar22;
                        func_0x04882e30();
                      } while( true );
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    puVar22 = puVar19;
    if ((ulong)(uint)puVar13[0xc] == 0xffffffff) goto LAB_0b3f831f;
    uStack_b8 = &uStack_80;
    lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar13[0xc] * 8))(&uStack_b8,puVar13 + 7);
    if (lVar14 == 0) goto LAB_0b3f39d7;
    uVar20 = param_1[2];
    uVar31 = (uint)param_1[3];
    puVar13 = (ulong *)(*(long *)(uVar20 + 0x38) +
                       (ulong)(((uint)(*(int *)(uVar20 + 0x40) - (int)*(long *)(uVar20 + 0x38)) >> 3
                               ) - 1 & 0x18f957af) * 8);
    puVar16 = *(ulong **)(uVar20 + 0x50);
    do {
      uVar24 = *puVar13;
      if (uVar24 == 0xffffffffffffffff) {
        puVar22 = *(ulong **)(uVar20 + 0x58);
        puVar25 = (ulong *)0xffffffffffffffff;
        puVar13 = puVar22;
        goto LAB_0b3f3828;
      }
      puVar25 = (ulong *)(uVar24 * 0x20);
      puVar13 = puVar16 + uVar24 * 4;
    } while ((int)(puVar16 + 1)[uVar24 * 4] != 0x18f957af);
    puVar22 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f3828:
    if ((puVar13 != puVar22) && (uVar20 = puVar13[2], uVar20 != 0)) {
      puVar16 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
      puVar25 = *(ulong **)(uVar20 + 8);
      param_5 = (ulong *)(*(long *)(uVar20 + 0x10) - (long)puVar25 >> 3);
      if ((puVar16 < param_5) &&
         (((puVar16 = (ulong *)puVar25[(long)puVar16], puVar16 != (ulong *)0x0 &&
           (uVar11 = *(uint *)((long)puVar16 + (ulong)(uVar31 & 0x7ff) * 4),
           (uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff)) &&
          (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8)), lVar14 != 0
          )))) {
        if (*(long *)(lVar14 + (ulong)(uVar11 & 0x7f) * 8) != -1) goto LAB_0b3f39d7;
        uStack_148 = &UNK_014a2680;
        uStack_140 = (long *)0x8;
        puVar13 = (ulong *)func_0x0d6c97a0(puVar18,&uStack_148);
        if ((puVar13 == puVar19) || ((int)puVar13[0xc] != 4)) {
          uVar20 = 0;
        }
        else {
          uVar20 = puVar13[8];
        }
        uVar15 = (**(code **)(*param_3 + 0x70))(param_3,uVar20);
        uVar20 = param_1[2];
        uVar31 = (uint)param_1[3];
        puVar16 = (ulong *)(*(long *)(uVar20 + 0x38) +
                           (ulong)(((uint)(*(int *)(uVar20 + 0x40) - (int)*(long *)(uVar20 + 0x38))
                                   >> 3) - 1 & 0x18f957af) * 8);
        puVar25 = *(ulong **)(uVar20 + 0x50);
        do {
          uVar24 = *puVar16;
          if (uVar24 == 0xffffffffffffffff) {
            puVar13 = *(ulong **)(uVar20 + 0x58);
            param_5 = (ulong *)0xffffffffffffffff;
            puVar16 = puVar13;
            goto LAB_0b3f3949;
          }
          param_5 = (ulong *)(uVar24 * 0x20);
          puVar16 = puVar25 + uVar24 * 4;
        } while ((int)(puVar25 + 1)[uVar24 * 4] != 0x18f957af);
        puVar13 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f3949:
        if ((puVar16 != puVar13) && (uVar20 = puVar16[2], uVar20 != 0)) {
          puVar16 = (ulong *)(ulong)(uVar31 & 0x3ffff);
          puVar25 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
          param_5 = *(ulong **)(uVar20 + 8);
          if ((puVar25 < (ulong *)(*(long *)(uVar20 + 0x10) - (long)param_5 >> 3)) &&
             (puVar25 = (ulong *)param_5[(long)puVar25], puVar25 != (ulong *)0x0)) {
            uVar11 = *(uint *)((long)puVar25 + (ulong)(uVar31 & 0x7ff) * 4);
            puVar16 = (ulong *)(ulong)uVar11;
            if (((uVar31 & 0xfffc0000 ^ uVar11) < 0x3ffff) &&
               (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8)),
               lVar14 != 0)) {
              *(undefined8 *)(lVar14 + (ulong)(uVar11 & 0x7f) * 8) = uVar15;
              goto LAB_0b3f39d7;
            }
          }
        }
      }
    }
  }
  uVar11 = func_0x04890760();
  puVar22 = puVar25;
  goto LAB_0b3f8257;
code_r0x0b3f7d46:
  uStack_80 = puVar22;
  lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)(uint)puVar19[0xc] * 8))(&uStack_80,puVar19 + 7);
  if (lVar14 != 0) {
    uVar31 = (uint)param_1[3];
    lVar14 = func_0x07537840(param_1[2],0x174be3d7);
    uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
    if ((((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <= uVar20) ||
        (lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8), lVar26 == 0)) ||
       (0x3fffe < (uVar31 & 0xfffc0000 ^ *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4)))) {
      uStack_148 = (undefined *)CONCAT44(uStack_148._4_4_,uVar31);
      func_0x07538d00(lVar14,&uStack_148,0);
    }
    uVar20 = param_1[2];
    uVar31 = (uint)param_1[3];
    plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                      (ulong)(((uint)(*(int *)(uVar20 + 0x40) - (int)*(long *)(uVar20 + 0x38)) >> 3)
                              - 1 & 0x174be3d7) * 8);
    lVar14 = *(long *)(uVar20 + 0x50);
    plVar23 = plVar21;
    do {
      if (*plVar23 == -1) goto LAB_0b3f7f55;
      lVar26 = *plVar23 * 0x20;
      plVar23 = (long *)(lVar14 + lVar26);
    } while (*(int *)(lVar14 + 8 + lVar26) != 0x174be3d7);
    plVar4 = *(long **)(uVar20 + 0x58);
    if ((plVar23 != plVar4) && (lVar26 = plVar23[2], lVar26 != 0)) {
      uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
      if ((uVar20 < (ulong)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 3)) &&
         (lVar5 = *(long *)(*(long *)(lVar26 + 8) + uVar20 * 8), lVar5 != 0)) {
        uVar11 = *(uint *)(lVar5 + (ulong)(uVar31 & 0x7ff) * 4);
        if (((uVar11 ^ uVar31 & 0xfffc0000) < 0x3ffff) &&
           (*(long *)(*(long *)(lVar26 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8)) != 0)) {
          do {
            lVar26 = *plVar21;
            plVar21 = plVar4;
            if (lVar26 == -1) break;
            lVar26 = lVar26 * 0x20;
            plVar21 = (long *)(lVar14 + lVar26);
          } while (*(int *)(lVar14 + 8 + lVar26) != 0x174be3d7);
          if ((((plVar21 == plVar4) || (lVar14 = plVar21[2], lVar14 == 0)) ||
              ((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <= uVar20)) ||
             (((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8), lVar26 == 0 ||
               (uVar11 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4),
               0x3fffe < (uVar31 & 0xfffc0000 ^ uVar11))) ||
              (lVar14 = *(long *)(*(long *)(lVar14 + 0x50) + (ulong)(uVar11 >> 4 & 0x3ff8)),
              lVar14 == 0)))) {
            func_0x0b460ed0();
          }
          else {
            func_0x072877e0(lVar14 + (ulong)(uVar11 & 0x7f) * 0x70,param_1,param_2,puVar18);
          }
        }
      }
    }
  }
LAB_0b3f7f55:
  uVar20 = param_1[2];
  uVar31 = (uint)param_1[3];
  plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) - *(long *)(uVar20 + 0x38)) >> 3)
                            - 1U & 0xf95d258f) * 8);
  do {
    if (*plVar21 == -1) goto LAB_0b3f82cc;
    lVar14 = *plVar21 * 0x20;
    plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
  } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != -0x6a2da71);
  if ((plVar21 == *(long **)(uVar20 + 0x58)) || (lVar14 = plVar21[2], lVar14 == 0))
  goto LAB_0b3f82cc;
  uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
  if ((((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <= uVar20) ||
      (((lVar14 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8), lVar14 == 0 ||
        (0x3fffe < (uVar31 & 0xfffc0000 ^ *(uint *)(lVar14 + (ulong)(uVar31 & 0x7ff) * 4)))) ||
       ((long *)param_1[0x3a] == (long *)0x0)))) ||
     (cVar8 = (**(code **)(*(long *)param_1[0x3a] + 0x9f0))(), cVar8 != '\0')) goto LAB_0b3f82cc;
  uVar20 = param_1[2];
  uVar31 = (uint)param_1[3];
  plVar21 = (long *)(*(long *)(uVar20 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) - *(long *)(uVar20 + 0x38)) >> 3)
                            - 1U & 0xcbdc1c08) * 8);
  do {
    if (*plVar21 == -1) {
      plVar21 = *(long **)(uVar20 + 0x58);
      plVar23 = plVar21;
      goto LAB_0b3f8098;
    }
    lVar14 = *plVar21 * 0x20;
    plVar21 = (long *)(*(long *)(uVar20 + 0x50) + lVar14);
  } while (*(int *)(*(long *)(uVar20 + 0x50) + 8 + lVar14) != -0x3423e3f8);
  plVar23 = *(long **)(uVar20 + 0x58);
LAB_0b3f8098:
  if ((plVar21 == plVar23) || (lVar14 = plVar21[2], lVar14 == 0)) {
LAB_0b3f80e7:
    lVar14 = func_0x07413050(uVar20,0xcbdc1c08);
    uVar20 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <= uVar20) ||
       ((lVar26 = *(long *)(*(long *)(lVar14 + 8) + uVar20 * 8), lVar26 == 0 ||
        (0x3fffe < (uVar31 & 0xfffc0000 ^ *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4)))))) {
      uStack_148 = (undefined *)CONCAT44(uStack_148._4_4_,uVar31);
      func_0x07413ee0(lVar14,&uStack_148,0);
    }
  }
  else {
    uVar24 = (ulong)((uVar31 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 3) <= uVar24) ||
       ((lVar14 = *(long *)(*(long *)(lVar14 + 8) + uVar24 * 8), lVar14 == 0 ||
        (0x3fffe < (uVar31 & 0xfffc0000 ^ *(uint *)(lVar14 + (ulong)(uVar31 & 0x7ff) * 4))))))
    goto LAB_0b3f80e7;
  }
  uVar20 = param_1[2];
  uVar31 = (uint)param_1[3];
  puVar19 = (ulong *)(*(long *)(uVar20 + 0x38) +
                     (ulong)((int)((ulong)(*(long *)(uVar20 + 0x40) - *(long *)(uVar20 + 0x38)) >> 3
                                  ) - 1U & 0xcbdc1c08) * 8);
  lVar14 = *(long *)(uVar20 + 0x50);
  puVar13 = puVar19;
  do {
    if (*puVar13 == 0xffffffffffffffff) {
      puVar22 = *(ulong **)(uVar20 + 0x58);
      puVar13 = puVar22;
      goto LAB_0b3f81a8;
    }
    lVar26 = *puVar13 * 0x20;
    puVar13 = (ulong *)(lVar14 + lVar26);
  } while (*(int *)(lVar14 + 8 + lVar26) != -0x3423e3f8);
  puVar22 = *(ulong **)(uVar20 + 0x58);
LAB_0b3f81a8:
  if ((puVar13 == puVar22) || (uVar20 = puVar13[2], uVar20 == 0)) goto LAB_0b3f82cc;
  param_5 = (ulong *)(ulong)((uVar31 & 0x3ffff) >> 0xb);
  if (((ulong *)(*(long *)(uVar20 + 0x10) - *(long *)(uVar20 + 8) >> 3) <= param_5) ||
     (lVar26 = *(long *)(*(long *)(uVar20 + 8) + (long)param_5 * 8), lVar26 == 0))
  goto LAB_0b3f82cc;
  puVar16 = (ulong *)(ulong)(uVar31 & 0x7ff);
  uVar11 = uVar31 & 0xfffc0000;
  uVar31 = *(uint *)(lVar26 + (ulong)(uVar31 & 0x7ff) * 4);
  if ((0x3fffe < (uVar31 ^ uVar11)) ||
     (*(long *)(*(long *)(uVar20 + 0x50) + (ulong)(uVar31 >> 4 & 0x3ff8)) == 0)) goto LAB_0b3f82cc;
  do {
    puVar25 = puVar22;
    param_3 = param_1;
    if (*puVar19 == 0xffffffffffffffff) break;
    lVar26 = *puVar19 * 0x20;
    puVar19 = (ulong *)(lVar14 + lVar26);
    puVar25 = puVar19;
  } while (*(int *)(lVar14 + 8 + lVar26) != -0x3423e3f8);
LAB_0b3f8257:
  if (((((puVar25 == puVar22) || (uVar20 = puVar25[2], uVar20 == 0)) ||
       ((ulong *)(*(long *)(uVar20 + 0x10) - *(long *)(uVar20 + 8) >> 3) <= param_5)) ||
      ((lVar14 = *(long *)(*(long *)(uVar20 + 8) + (long)param_5 * 8), lVar14 == 0 ||
       (uVar31 = *(uint *)(lVar14 + (long)puVar16 * 4), 0x3fffe < (uVar11 ^ uVar31))))) ||
     (lVar14 = *(long *)(*(long *)(uVar20 + 0x50) + (ulong)(uVar31 >> 4 & 0x3ff8)), lVar14 == 0)) {
    func_0x0b460ed0();
  }
  else {
    func_0x07224e80(lVar14 + (ulong)(uVar31 & 0x7f) * 0xc,param_3,param_2,puVar18);
  }
LAB_0b3f82cc:
  func_0x0eeb81b0(&uStack_b8);
  return 1;
}


