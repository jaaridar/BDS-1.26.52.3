/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2a59c0
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e2a59c0, 0e2a5a26]]
 * Ghidra: FUN_0e2a59c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2a59c0(void)

{
  long lVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  char *in_RAX;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  byte bVar21;
  char unaff_BPL;
  uint uVar22;
  ulong *unaff_R12;
  undefined8 *unaff_R13;
  long *unaff_R14;
  long *unaff_R15;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long *plStack_330;
  ulong uStack_328;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  char cStack_28c;
  ulong uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *aplStack_270 [2];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  char cStack_24c;
  ulong uStack_248;
  long lStack_240;
  long lStack_238;
  long *aplStack_230 [2];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  char cStack_20c;
  ulong uStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long *aplStack_1d8 [2];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  char cStack_1b4;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  code *pcStack_180;
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long *aplStack_118 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  char cStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  uint uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  char cStack_ac;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  uint uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  ulong uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  long **pplStack_38;
  long **pplStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined1 uStack_4;
  long lVar16;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[0x48894840] = in_RAX[0x48894840] + (char)in_RAX;
  uVar4 = _UNK_014e91e4;
  *(undefined4 *)(in_RAX + 0x10) = _DAT_014e91e0;
  *(undefined4 *)(in_RAX + 0x14) = uVar4;
  in_RAX[0x18] = 'h';
  in_RAX[0x19] = '\x01';
  in_RAX[0x1a] = '\0';
  in_RAX[0x1b] = '\0';
  in_RAX[0x1c] = 'h';
  in_RAX[0x1d] = '\x01';
  in_RAX[0x1e] = '\0';
  in_RAX[0x1f] = '\0';
  *unaff_R13 = in_RAX;
  unaff_R13[7] = &UNK_0e27bfb0;
  if (unaff_BPL == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = unaff_R13[6];
  }
  unaff_R13[6] = uVar14;
  func_0x0ed6d600(&uStack_78,*unaff_R12);
  if ((code *)unaff_R13[7] == (code *)0x0) {
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = 0;
    func_0x048b1dc0(&uStack_2b0);
    plVar10 = uStack_2b0;
    uVar13 = uStack_2a8;
joined_r0x0ed78377:
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)func_0x048aead0(uVar13);
    }
  }
  else {
    uVar13 = unaff_R13[5];
    plVar10 = (long *)unaff_R13[6];
    if (plVar10 == (long *)0x0) {
      (*(code *)unaff_R13[7])(0);
      plVar10 = (long *)unaff_R13[6];
      goto joined_r0x0ed78377;
    }
  }
  lVar16 = plVar10[0xf];
  if (lVar16 != 0) {
    for (plStack_330 = *(long **)(lVar16 + 0x60); plStack_330 != *(long **)(lVar16 + 0x68);
        plStack_330 = plStack_330 + 0xb) {
      if ((int)*plStack_330 == 0x1e1bc4d5) {
        uStack_328 = uVar13;
        goto LAB_0ed78402;
      }
    }
  }
  uStack_2b0 = (long *)0x0;
  uStack_2a8 = 0;
  func_0x048b10d0(&uStack_2b0);
  plStack_330 = uStack_2b0;
  uStack_328 = uStack_2a8;
  if (uStack_2b0 != (long *)0x0) {
LAB_0ed78402:
    bVar21 = *(byte *)(unaff_R14 + 1);
    bVar7 = *(byte *)((long)unaff_R14 + 9);
    puStack_188 = &UNK_0488e0b0;
    uStack_178 = 0x48b5725f;
    pcStack_180 = (code *)0x0;
    uStack_174 = 0;
    uStack_198 = 0;
    uStack_170 = unaff_R13[5];
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_20 = (int)*unaff_R12;
    uStack_1c = *(undefined4 *)((long)unaff_R12 + 4);
    uStack_18 = (int)unaff_R12[1];
    uStack_14 = *(undefined4 *)((long)unaff_R12 + 0xc);
    uStack_10 = 0;
    uStack_8 = (int)unaff_R12[3];
    uStack_4 = *(undefined1 *)((long)unaff_R12 + 0x1c);
    do {
      if (((((bVar21 | bVar7) & 0x10) == 0) || ((*(byte *)((long)plStack_330 + 0x12) & 2) != 0)) &&
         (puVar11 = (undefined8 *)plStack_330[9],
         (*(byte *)(*unaff_R12 + 0x2aa) & *(byte *)(puVar11 + 2)) != 0)) {
        func_0x0ed6d600(&lStack_88);
        if (pcStack_180 != (code *)0x0) {
          (*pcStack_180)(&uStack_198);
        }
        puStack_188 = &UNK_0488e0b0;
        uStack_178 = 0x48b5725f;
        pcStack_180 = (code *)0x0;
        uStack_174 = 0;
        uStack_198 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_10 = puVar11[1];
        func_0x0ed75bc0(*puVar11,unaff_R14,&uStack_198,unaff_R15,&uStack_20);
        plVar10 = plStack_330;
        if ((*(uint *)(lStack_88 + 0x2b0) == 0xffffffff) ||
           (*(uint *)(lStack_88 + 0x2b0) < uStack_80)) {
          lVar16 = plStack_330[3];
          if (lVar16 == 1) {
            func_0x049e8590(&uStack_2f0,&uStack_198);
            func_0x0ed7a460(&uStack_2b0,&plStack_330,unaff_R13,&uStack_2f0);
            if (pcStack_2d8 != (code *)0x0) {
              (*pcStack_2d8)(&uStack_2f0);
            }
            if ((lStack_278 == 0) &&
               (cVar8 = func_0x0eeddcf0(&UNK_012eddd8,&UNK_012d3a42,0x1cc,&UNK_0145b87a,
                                        &UNK_0126df4c), cVar8 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if (uStack_298 != (code *)0x0) {
              (*uStack_298)(&uStack_2b0);
            }
          }
          else if (lVar16 == 2) {
            func_0x049e8590(&uStack_2f0,&uStack_198);
            uStack_130 = unaff_R13[5];
            uStack_158 = *unaff_R12;
            puStack_148 = &UNK_07d98e10;
            uStack_138 = 0x685ff748;
            pcStack_140 = (code *)0x0;
            uStack_134 = 4;
            uStack_128 = 0;
            puStack_120 = &UNK_07d98df0;
            func_0x0ed7a5f0(&uStack_2b0,&plStack_330,unaff_R13,&uStack_2f0,&uStack_158);
            if (lStack_278 == 0) {
              func_0x049e8590(aplStack_118,&uStack_198);
              aplStack_1d8[0] = unaff_R15;
              if (*(char *)((long)unaff_R15 + 0x24) != '\x02') {
                aplStack_1d8[0] = (long *)*unaff_R15;
              }
              uStack_1c8 = (code *)unaff_R15[2];
              uStack_1b8 = (undefined4)unaff_R15[4];
              uStack_1c0 = (code *)0x0;
              cStack_1b4 = '\x04';
              uStack_1b0 = unaff_R15[5];
              lStack_1a8 = unaff_R15[6];
              puStack_1a0 = (undefined *)unaff_R15[7];
              func_0x0ed7a5f0(&plStack_d0,&plStack_330,unaff_R13,aplStack_118,aplStack_1d8);
              bVar23 = lStack_98 == 0;
              if ((code *)CONCAT44(uStack_b4,uStack_b8) != (code *)0x0) {
                (*(code *)CONCAT44(uStack_b4,uStack_b8))(&plStack_d0);
              }
              if (uStack_1c0 != (code *)0x0) {
                (*uStack_1c0)(aplStack_1d8);
              }
              if (uStack_100 != (code *)0x0) {
                (*uStack_100)(aplStack_118);
              }
            }
            else {
              bVar23 = false;
            }
            if (uStack_298 != (code *)0x0) {
              (*uStack_298)(&uStack_2b0);
            }
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(&uStack_158);
            }
            if (pcStack_2d8 != (code *)0x0) {
              (*pcStack_2d8)(&uStack_2f0);
            }
            if (bVar23) {
              if ((ulong)plVar10[3] < 2) {
                uStack_2b0 = (long *)0x0;
                uStack_2a8 = 0;
                func_0x048b1dc0(&uStack_2b0);
                auVar25._8_8_ = uStack_2a8;
                auVar25._0_8_ = uStack_2b0;
                plVar10 = uStack_2b0;
              }
              else {
                auVar25 = (*(code *)plVar10[5])(uStack_328,1);
                plVar10 = auVar25._0_8_;
              }
              if (plVar10 == (long *)0x0) {
                plVar10 = auVar25._0_8_;
                uVar14 = func_0x048aead0(auVar25._8_8_);
                auVar25._8_8_ = auVar25._8_8_;
                auVar25._0_8_ = uVar14;
              }
              lVar16 = *auVar25._0_8_;
              if ((DAT_0f5bd818 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5bd818), iVar9 != 0)) {
                func_0x07d98ca0(0xf5bd800);
                func_0x0410844d(&DAT_0f5bd818);
              }
              if (*(int *)(lVar16 + 4) != _DAT_0f5bd804) {
                if (plVar10 == (long *)0x0) {
                  plVar10 = (long *)func_0x048aead0(auVar25._8_8_);
                }
                uStack_2f0 = *(long **)(*plVar10 + 8);
                uStack_2e8 = *(ulong *)(*plVar10 + 0x10);
                func_0x0470d9a0(&uStack_2b0,&UNK_012d3ad2,0x39,0xd,&uStack_2f0);
                cVar8 = func_0x0ed7a850(&plStack_330);
                if (cVar8 == '\0') {
                  puVar18 = (undefined *)((long)&uStack_2b0 + 1);
                  if (((ulong)uStack_2b0 & 1) != 0) {
                    puVar18 = uStack_2a0;
                  }
                  cVar8 = func_0x0eeddcf0(puVar18,&UNK_0121ebcf,0x1e5,&UNK_0145b87a,&UNK_0126df4c);
                  if (cVar8 != '\0') {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                }
                uVar13 = *unaff_R12;
                puVar18 = uStack_2a0;
                uVar17 = uStack_2a8;
                if (((ulong)uStack_2b0 & 1) == 0) {
                  puVar18 = (undefined *)((long)&uStack_2b0 + 1);
                  uVar17 = (ulong)uStack_2b0 >> 1 & 0x7f;
                }
                uStack_300 = 0;
                if (puVar18 == (undefined *)0x0) {
                  uStack_300 = (ulong)((uint)uVar17 & 0x7f) << 0x30;
                }
                else {
                  lVar16 = uVar17 + 9;
                  puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
                  if (lVar16 != 0 && puVar15 == (ulong *)0x0) {
                    func_0x0eec74c0(lVar16,8);
                  }
                  *puVar15 = uVar17;
                  func_0x0eee2f00(puVar15 + 1,puVar18,uVar17);
                  *(undefined1 *)((long)puVar15 + uVar17 + 8) = 0;
                  uStack_300 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                }
                func_0x0ed5ffe0(uVar13,8,&uStack_300);
                if ((uStack_300 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
                }
                uStack_300 = 0;
                goto joined_r0x0ed793e6;
              }
              cVar8 = func_0x0ed7a850(&plStack_330);
              if ((cVar8 == '\0') &&
                 (cVar8 = func_0x0eeddcf0(&DAT_012b9fd7,&UNK_0121ebcf,0x1dc,&UNK_0145b87a,
                                          &UNK_0126df4c), cVar8 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              uVar13 = *unaff_R12;
              uStack_2f8 = 0;
              puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0x5f,8);
              if (puVar11 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x5f,8);
              }
              *puVar11 = 0x56;
              uVar14 = _UNK_012b9fdf;
              puVar11[1] = _DAT_012b9fd7;
              puVar11[2] = uVar14;
              uVar14 = _UNK_012b9fef;
              puVar11[3] = _DAT_012b9fe7;
              puVar11[4] = uVar14;
              uVar14 = _UNK_012b9fff;
              puVar11[5] = _DAT_012b9ff7;
              puVar11[6] = uVar14;
              uVar14 = _UNK_012ba00f;
              puVar11[7] = _DAT_012ba007;
              puVar11[8] = uVar14;
              uVar6 = _UNK_012ba023;
              uVar5 = _UNK_012ba01f;
              uVar4 = _UNK_012ba01b;
              *(undefined4 *)(puVar11 + 9) = _DAT_012ba017;
              *(undefined4 *)((long)puVar11 + 0x4c) = uVar4;
              *(undefined4 *)(puVar11 + 10) = uVar5;
              *(undefined4 *)((long)puVar11 + 0x54) = uVar6;
              *(undefined8 *)((long)puVar11 + 0x56) = 0x2226747865746e6f;
              *(undefined1 *)((long)puVar11 + 0x5e) = 0;
              uStack_2f8 = (ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              func_0x0ed5ffe0(uVar13,8,&uStack_2f8);
              if ((uStack_2f8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
              }
              uStack_2f8 = 0;
            }
          }
          else {
            if (lVar16 != 3) {
              cVar8 = func_0x0eeddcf0(&UNK_01239032,&UNK_01198d5e,0x1ff,&UNK_0145b87a,&UNK_0126df4c)
              ;
              if (cVar8 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
              goto LAB_0ed785a6;
            }
            func_0x049e8590(&plStack_d0,&uStack_198);
            uVar13 = uStack_328;
            aplStack_118[0] = unaff_R15;
            if (*(char *)((long)unaff_R15 + 0x24) != '\x02') {
              aplStack_118[0] = (long *)*unaff_R15;
            }
            uStack_108 = (code *)unaff_R15[2];
            uStack_100 = (code *)0x0;
            uStack_f8 = (int)unaff_R15[4];
            cStack_f4 = '\x04';
            uStack_f0 = (int)unaff_R15[5];
            uStack_ec = *(undefined4 *)((long)unaff_R15 + 0x2c);
            lStack_e8 = unaff_R15[6];
            lStack_e0 = unaff_R15[7];
            uStack_1c8 = (code *)&UNK_07d98e10;
            uStack_1b8 = 0x685ff748;
            uStack_1c0 = (code *)0x0;
            cStack_1b4 = '\x04';
            aplStack_1d8[0] = (long *)*unaff_R12;
            uStack_1b0 = unaff_R13[5];
            lStack_1a8 = 0;
            puStack_1a0 = &UNK_07d98df0;
            if (plVar10[3] == 3) {
              pcVar2 = (code *)plVar10[6];
              func_0x09b1d320(&uStack_2f0,0,unaff_R13,uStack_328);
              plVar12 = plStack_d0;
              uStack_2b0 = (long *)0x0;
              uStack_2a0 = (undefined *)CONCAT44(uStack_bc,uStack_c0);
              uStack_298 = (code *)CONCAT44(uStack_b4,uStack_b8);
              uStack_290 = uStack_b0;
              cStack_28c = cStack_ac;
              if (cStack_ac == '\0') {
LAB_0ed7879c:
                if (uVar13 != uStack_a8) goto LAB_0ed787b2;
LAB_0ed78e5a:
                uStack_280 = uStack_a0;
                uStack_a0 = 0;
              }
              else {
                if (cStack_ac == '\x02') {
                  (*(code *)CONCAT44(uStack_bc,uStack_c0))(5,&plStack_d0,&uStack_2b0);
                  goto LAB_0ed7879c;
                }
                uStack_2b0 = plStack_d0;
                plStack_d0 = (long *)0x0;
                if (uVar13 == uStack_a8) goto LAB_0ed78e5a;
LAB_0ed787b2:
                uStack_280 = 0;
              }
              lStack_278 = lStack_98;
              plVar12 = aplStack_118[0];
              uStack_288 = uVar13;
              lStack_98 = 0;
              aplStack_270[0] = (long *)0x0;
              uStack_260 = (undefined4)uStack_108;
              uStack_25c = uStack_108._4_4_;
              uStack_258 = (undefined4)uStack_100;
              uStack_254 = uStack_100._4_4_;
              uStack_250 = uStack_f8;
              cStack_24c = cStack_f4;
              if (cStack_f4 == '\0') {
LAB_0ed78ef3:
                if (uVar13 != CONCAT44(uStack_ec,uStack_f0)) goto LAB_0ed78f05;
LAB_0ed78f37:
                lStack_240 = lStack_e8;
                lStack_e8 = 0;
              }
              else {
                if (cStack_f4 == '\x02') {
                  (*uStack_108)(5,aplStack_118,aplStack_270);
                  goto LAB_0ed78ef3;
                }
                aplStack_270[0] = aplStack_118[0];
                aplStack_118[0] = (long *)0x0;
                if (uVar13 == CONCAT44(uStack_ec,uStack_f0)) goto LAB_0ed78f37;
LAB_0ed78f05:
                lStack_240 = 0;
              }
              lStack_238 = lStack_e0;
              plVar12 = aplStack_1d8[0];
              uStack_248 = uVar13;
              lStack_e0 = 0;
              aplStack_230[0] = (long *)0x0;
              uStack_220 = (undefined4)uStack_1c8;
              uStack_21c = uStack_1c8._4_4_;
              uStack_218 = (undefined4)uStack_1c0;
              uStack_214 = uStack_1c0._4_4_;
              uStack_210 = uStack_1b8;
              cStack_20c = cStack_1b4;
              if (cStack_1b4 == '\0') {
LAB_0ed78fd0:
                if (uVar13 != uStack_1b0) goto LAB_0ed78fe2;
LAB_0ed79014:
                lStack_200 = lStack_1a8;
                lStack_1a8 = 0;
              }
              else {
                if (cStack_1b4 == '\x02') {
                  (*uStack_1c8)(5,aplStack_1d8,aplStack_230);
                  goto LAB_0ed78fd0;
                }
                aplStack_230[0] = aplStack_1d8[0];
                aplStack_1d8[0] = (long *)0x0;
                if (uVar13 == uStack_1b0) goto LAB_0ed79014;
LAB_0ed78fe2:
                lStack_200 = 0;
              }
              puStack_1f8 = puStack_1a0;
              uStack_208 = uVar13;
              puStack_1a0 = (undefined *)0x0;
              (*pcVar2)(&uStack_158,&uStack_2f0,&uStack_2b0);
              if ((code *)CONCAT44(uStack_214,uStack_218) != (code *)0x0) {
                (*(code *)CONCAT44(uStack_214,uStack_218))(aplStack_230);
              }
              if ((code *)CONCAT44(uStack_254,uStack_258) != (code *)0x0) {
                (*(code *)CONCAT44(uStack_254,uStack_258))(aplStack_270);
              }
              if (uStack_298 != (code *)0x0) {
                (*uStack_298)(&uStack_2b0);
              }
              if (pcStack_2d8 != (code *)0x0) {
                (*pcStack_2d8)(&uStack_2f0);
              }
              puVar18 = puStack_120;
              if (pcStack_140 != (code *)0x0) {
                (*pcStack_140)(&uStack_158);
              }
            }
            else {
              puStack_148 = &UNK_0488e0b0;
              uStack_138 = 0x48b5725f;
              pcStack_140 = (code *)0x0;
              uStack_134 = 0;
              uStack_158 = 0;
              uStack_130 = uStack_328;
              uStack_128 = 0;
              puStack_120 = (undefined *)0x0;
              puVar18 = (undefined *)0x0;
            }
            if (uStack_1c0 != (code *)0x0) {
              (*uStack_1c0)(aplStack_1d8);
            }
            if (uStack_100 != (code *)0x0) {
              (*uStack_100)(aplStack_118);
            }
            if ((code *)CONCAT44(uStack_b4,uStack_b8) != (code *)0x0) {
              (*(code *)CONCAT44(uStack_b4,uStack_b8))(&plStack_d0);
            }
            if (puVar18 == (undefined *)0x0) {
              if ((ulong)plVar10[3] < 2) {
                uStack_2f0 = (long *)0x0;
                uStack_2e8 = 0;
                func_0x048b1dc0(&uStack_2f0);
                auVar24._8_8_ = uStack_2e8;
                auVar24._0_8_ = uStack_2f0;
                plVar10 = uStack_2f0;
              }
              else {
                auVar24 = (*(code *)plVar10[5])(uVar13,1);
                plVar10 = auVar24._0_8_;
              }
              plVar12 = auVar24._0_8_;
              if (plVar10 == (long *)0x0) {
                plVar12 = (long *)func_0x048aead0(auVar24._8_8_);
              }
              uStack_2f0 = *(long **)(*plVar12 + 8);
              uStack_2e8 = *(ulong *)(*plVar12 + 0x10);
              func_0x0470d9a0(&uStack_2b0,&UNK_011b4afb,0x85,0xd,&uStack_2f0);
              cVar8 = func_0x0ed7a850(&plStack_330);
              if (cVar8 == '\0') {
                puVar18 = (undefined *)((long)&uStack_2b0 + 1);
                if (((ulong)uStack_2b0 & 1) != 0) {
                  puVar18 = uStack_2a0;
                }
                cVar8 = func_0x0eeddcf0(puVar18,&UNK_0121ebcf,0x1f8,&UNK_0145b87a,&UNK_0126df4c);
                if (cVar8 != '\0') {
                  _DAT_00000000 = 0xdeadc0de;
                }
              }
              uVar13 = *unaff_R12;
              puVar18 = uStack_2a0;
              uVar17 = uStack_2a8;
              if (((ulong)uStack_2b0 & 1) == 0) {
                puVar18 = (undefined *)((long)&uStack_2b0 + 1);
                uVar17 = (ulong)uStack_2b0 >> 1 & 0x7f;
              }
              uStack_308 = 0;
              if (puVar18 == (undefined *)0x0) {
                uStack_308 = (ulong)((uint)uVar17 & 0x7f) << 0x30;
              }
              else {
                lVar16 = uVar17 + 9;
                puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
                if (lVar16 != 0 && puVar15 == (ulong *)0x0) {
                  func_0x0eec74c0(lVar16,8);
                }
                *puVar15 = uVar17;
                func_0x0eee2f00(puVar15 + 1,puVar18,uVar17);
                *(undefined1 *)((long)puVar15 + uVar17 + 8) = 0;
                uStack_308 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              func_0x0ed5ffe0(uVar13,8,&uStack_308);
              if ((uStack_308 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_308 & 0xff00ffffffffffff) - 8);
              }
              uStack_308 = 0;
joined_r0x0ed793e6:
              if (((ulong)uStack_2b0 & 1) != 0) {
                func_0x0412a280(uStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
              }
            }
          }
        }
LAB_0ed785a6:
        if ((*(uint *)(lStack_88 + 0x2b0) == 0xffffffff) ||
           (*(uint *)(lStack_88 + 0x2b0) < uStack_80)) {
          func_0x0ed6bc70(uStack_78,uStack_70,uStack_80,0xffff);
          if (pcStack_180 == (code *)0x0) {
            return;
          }
          (*pcStack_180)(&uStack_198);
          return;
        }
      }
      plVar10 = (long *)plStack_330[7];
      puVar15 = &uStack_328;
      if ((long *)plStack_330[7] == (long *)0x0) {
        uStack_2b0 = (long *)0x0;
        uStack_2a8 = 0;
        func_0x048b10d0(&uStack_2b0);
        plVar10 = uStack_2b0;
        puVar15 = &uStack_2a8;
      }
      uStack_328 = *puVar15;
      plStack_330 = plVar10;
    } while (plVar10 != (long *)0x0);
    if ((code *)unaff_R13[7] == (code *)0x0) {
      uStack_2b0 = (long *)0x0;
      uStack_2a8 = 0;
      func_0x048b1dc0(&uStack_2b0);
      plVar10 = uStack_2b0;
      uVar13 = uStack_2a8;
    }
    else {
      uVar13 = unaff_R13[5];
      plVar10 = (long *)unaff_R13[6];
      if ((long *)unaff_R13[6] == (long *)0x0) {
        (*(code *)unaff_R13[7])(0,unaff_R13,0);
        plVar10 = (long *)unaff_R13[6];
      }
    }
    uStack_2f0 = plVar10;
    uStack_2e8 = uVar13;
    cVar8 = func_0x0ed7a9b0(&uStack_2f0);
    if (pcStack_180 != (code *)0x0) {
      (*pcStack_180)(&uStack_198);
    }
    if (cVar8 == '\0') {
      return;
    }
  }
  uVar13 = (**(code **)(*unaff_R14 + 0x18))(unaff_R14);
  if ((uVar13 & 1) == 0) {
    uStack_d8 = 0x120000012f2525;
    func_0x0ed5ffe0(*unaff_R12,8,&uStack_d8);
    if ((uStack_d8 & 0x80000000000000) == 0) {
      return;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
    return;
  }
  aplStack_118[0] = (long *)0x0;
  func_0x0ed6d600(&plStack_d0,*unaff_R12);
  if (*(char *)unaff_R12[1] == '\0') {
    cVar8 = (**(code **)(*unaff_R14 + 0x18))(unaff_R14);
    bVar23 = cVar8 != '\x01';
  }
  else {
    bVar23 = false;
  }
  aplStack_1d8[0] = (long *)CONCAT71(aplStack_1d8[0]._1_7_,bVar23);
  if ((code *)unaff_R13[7] == (code *)0x0) {
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = 0;
    func_0x048b1dc0(&uStack_2b0);
    puVar18 = (undefined *)uStack_2b0;
    uVar13 = uStack_2a8;
  }
  else {
    uVar13 = unaff_R13[5];
    puVar18 = (undefined *)unaff_R13[6];
    if ((undefined *)unaff_R13[6] == (undefined *)0x0) {
      (*(code *)unaff_R13[7])(0,unaff_R13,0);
      puVar18 = (undefined *)unaff_R13[6];
    }
  }
  uStack_58 = CONCAT31(uStack_58._1_3_,1);
  pplStack_38 = aplStack_1d8;
  pplStack_30 = aplStack_118;
  uStack_2b0 = (long *)puVar18;
  uStack_2a8 = uVar13;
  func_0x0ed7ab30(&uStack_2b0);
  if (((long *)unaff_R12[2] != (long *)0x0) &&
     (plVar10 = (long *)(**(code **)(*(long *)unaff_R12[2] + 0x18))(), aplStack_118[0] < plVar10)) {
    uVar13 = *unaff_R12;
    uVar14 = (**(code **)(*(long *)unaff_R12[2] + 0x18))();
    func_0x041348b0(&uStack_198,uVar14);
    puVar18 = puStack_188;
    uVar17 = uStack_198;
    func_0x041348b0(&uStack_158,aplStack_118[0]);
    uStack_2b0 = (long *)puVar18;
    uStack_2a8 = uStack_190;
    if ((uVar17 & 1) == 0) {
      uStack_2b0 = (long *)((long)&uStack_198 + 1);
      uStack_2a8 = uVar17 >> 1 & 0x7f;
    }
    uStack_2a0 = (undefined *)((long)&uStack_158 + 1);
    uStack_298 = (code *)(uStack_158 >> 1 & 0x7f);
    if ((uStack_158 & 1) != 0) {
      uStack_298 = pcStack_150;
      uStack_2a0 = puStack_148;
    }
    func_0x0470d9a0(&uStack_2f0,&UNK_01287a61,0x35,0xdd,&uStack_2b0);
    uVar17 = (ulong)uStack_2f0 >> 1 & 0x7f;
    lVar16 = (long)&uStack_2f0 + 1;
    if (((ulong)uStack_2f0 & 1) != 0) {
      uVar17 = uStack_2e8;
      lVar16 = lStack_2e0;
    }
    if (lVar16 == 0) {
      uStack_1e0 = (ulong)((uint)uVar17 & 0x7f) << 0x30;
    }
    else {
      lVar1 = uVar17 + 9;
      puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && puVar15 == (ulong *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *puVar15 = uVar17;
      func_0x0eee2f00(puVar15 + 1,lVar16,uVar17);
      *(undefined1 *)((long)puVar15 + uVar17 + 8) = 0;
      uStack_1e0 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(uVar13,0x40,&uStack_1e0);
    if ((uStack_1e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1e0 = 0;
    if (((ulong)uStack_2f0 & 1) != 0) {
      func_0x0412a280(lStack_2e0,(ulong)uStack_2f0 & 0xfffffffffffffffe);
    }
    if ((uStack_158 & 1) != 0) {
      func_0x0412a280(puStack_148,uStack_158 & 0xfffffffffffffffe);
    }
    if ((uStack_198 & 1) != 0) {
      func_0x0412a280(puStack_188,uStack_198 & 0xfffffffffffffffe);
    }
  }
  if ((*(uint *)(plStack_d0 + 0x56) != 0xffffffff) && (uStack_c8 <= *(uint *)(plStack_d0 + 0x56))) {
    return;
  }
  plStack_60 = (long *)(**(code **)(*unaff_R14 + 0xa8))(unaff_R14);
  if (plStack_60 <= aplStack_118[0]) goto LAB_0ed79f49;
  bVar21 = (byte)unaff_R12[4] ^ 1;
  plStack_90 = unaff_R13 + 6;
  uStack_68 = 0x440000011b4b81;
  plVar10 = (long *)0x0;
  do {
    auVar25 = (**(code **)(*unaff_R14 + 0xc0))(unaff_R14);
    uVar13 = auVar25._8_8_;
    lVar16 = auVar25._0_8_;
    if (uVar13 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      if (uVar13 < 4) {
        uVar22 = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar17 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar16 + 3 + uVar17) ^
                   ((int)*(char *)(lVar16 + 2 + uVar17) ^
                   ((int)*(char *)(lVar16 + 1 + uVar17) ^
                   ((int)*(char *)(lVar16 + uVar17) ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar17);
      }
      if ((uVar13 & 3) != 0) {
        uVar20 = 0;
        do {
          uVar22 = ((int)*(char *)(uVar17 + lVar16 + uVar20) ^ uVar22) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while ((auVar25._8_4_ & 3) != uVar20);
      }
    }
    if ((code *)unaff_R13[7] == (code *)0x0) {
      uStack_2b0 = (long *)0x0;
      uStack_2a8 = 0;
      func_0x048b1dc0(&uStack_2b0);
      puVar18 = (undefined *)uStack_2b0;
      uVar17 = uStack_2a8;
joined_r0x0ed79b69:
      if (puVar18 == (undefined *)0x0) {
        puVar18 = (undefined *)func_0x048aead0(uVar17);
      }
    }
    else {
      uVar17 = unaff_R13[5];
      puVar18 = (undefined *)unaff_R13[6];
      if (puVar18 == (undefined *)0x0) {
        (*(code *)unaff_R13[7])(0,unaff_R13,0);
        puVar18 = (undefined *)*plStack_90;
        goto joined_r0x0ed79b69;
      }
    }
    puVar18 = (undefined *)func_0x048b0c90(uVar17,puVar18,uVar22,1);
    if (puVar18 == (undefined *)0x0) {
      uStack_2b0 = (long *)0x0;
      uStack_2a8 = 0;
      func_0x048b0d20(&uStack_2b0);
      puVar18 = (undefined *)uStack_2b0;
      if (uStack_2b0 != (long *)0x0) goto LAB_0ed79b08;
      bVar7 = 1;
LAB_0ed79b90:
      puVar3 = (uint *)*unaff_R12;
      uStack_310 = 0;
      if (lVar16 == 0) {
        uStack_310 = (uVar13 & 0x7f) << 0x30;
      }
      else {
        lVar1 = uVar13 + 9;
        puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
        if (lVar1 != 0 && puVar15 == (ulong *)0x0) {
          func_0x0eec74c0(lVar1,8);
        }
        *puVar15 = uVar13;
        func_0x0eee2f00(puVar15 + 1,lVar16,uVar13);
        *(undefined1 *)((long)puVar15 + uVar13 + 8) = 0;
        uStack_310 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      func_0x0ed6d180(puVar3,&uStack_310,(ulong)uVar22 | 0x100000000);
      if ((uStack_310 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_310 & 0xff00ffffffffffff) - 8);
      }
      uStack_310 = 0;
      uStack_1e8 = uStack_68;
      func_0x0ed5ffe0(*unaff_R12,4,&uStack_1e8);
      if ((uStack_1e8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
      }
      uStack_1e8 = 0;
      bVar7 = bVar7 | bVar21;
      lVar16 = *(long *)(puVar3 + 2);
      uVar22 = *(uint *)(lVar16 + 0x1c + (ulong)*puVar3 * 0x20);
      *puVar3 = uVar22;
      if (puVar3[0x48] == 0) {
        uVar19 = puVar3[4];
      }
      else if ((*(uint *)(*(long *)(puVar3 + 0x46) + 0x18 + (ulong)(puVar3[0x48] - 1) * 0x30) ==
                uVar22) || (uVar19 = puVar3[4], uVar22 != uVar19 - 1)) goto LAB_0ed79da8;
      lVar1 = lVar16 + (ulong)uVar19 * 0x20;
      uVar13 = (ulong)*(uint *)(lVar16 + -0x10 + (ulong)uVar19 * 0x20);
      if (uVar13 != 0xffffffff) {
        (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_2b0,lVar1 + -0x18);
        uVar19 = puVar3[4];
      }
      *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
      puVar3[4] = uVar19 - 1;
    }
    else {
LAB_0ed79b08:
      bVar7 = 1;
      if ((*(int *)(puVar18 + 0x50) != -0x45dcb126) || (*(long *)(puVar18 + 0x58) == 0))
      goto LAB_0ed79b90;
      bVar7 = 1;
      if ((*(byte *)(*unaff_R12 + 0x2aa) & *(byte *)(*(long *)(puVar18 + 0x58) + 0xa9)) == 0) {
        bVar7 = 0;
        goto LAB_0ed79b90;
      }
    }
LAB_0ed79da8:
    bVar21 = bVar7;
    (**(code **)(*unaff_R14 + 0xd0))(unaff_R14);
    plVar12 = plStack_90;
    plVar10 = (long *)((long)plVar10 + 1);
  } while (plVar10 != plStack_60);
  if ((bVar21 & 1) != 0) goto LAB_0ed79f49;
  if ((code *)unaff_R13[7] == (code *)0x0) {
    uStack_2f0 = (long *)0x0;
    uStack_2e8 = 0;
    plVar12 = &uStack_2f0;
    func_0x048b1dc0(plVar12);
    uVar13 = uStack_2e8;
LAB_0ed79e93:
    plVar10 = (long *)*plVar12;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)func_0x048aead0(uVar13);
    }
  }
  else {
    plVar10 = (long *)*plStack_90;
    if (plVar10 == (long *)0x0) {
      uVar13 = unaff_R13[5];
      (*(code *)unaff_R13[7])(0,unaff_R13,0);
      goto LAB_0ed79e93;
    }
  }
  uStack_2f0 = *(long **)(*plVar10 + 8);
  uStack_2e8 = *(ulong *)(*plVar10 + 0x10);
  func_0x0470d9a0(&uStack_2b0,&UNK_0121ebe0,0x91,0xd,&uStack_2f0);
  puVar18 = uStack_2a0;
  if (((ulong)uStack_2b0 & 1) == 0) {
    puVar18 = (undefined *)((long)&uStack_2b0 + 1);
  }
  cVar8 = func_0x0eeddcf0(puVar18,&UNK_013580de,0x2d7,&UNK_0145b87a,&UNK_0126df4c);
  if (((ulong)uStack_2b0 & 1) != 0) {
    func_0x0412a280(uStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
  }
  if (cVar8 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_0ed79f49:
  if (*(uint *)(plStack_d0 + 0x56) == 0xffffffff || *(uint *)(plStack_d0 + 0x56) < uStack_c8) {
    func_0x0ed6bc70(uStack_78,uStack_70,uStack_c8,0xffff);
  }
  return;
}


