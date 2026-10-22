/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe457870
 * Label: callee-of:0xe401380
 * Body:  [[0e457870, 0e4578b4] [0ed782f0, 0ed784a8] [0ed784b0, 0ed78608] [0ed78610, 0ed79a0b] [0ed79a10, 0ed79a16] [0ed79a20, 0ed79b3d] [0ed79b40, 0ed79c1b] [0ed79c20, 0ed79d56] [0ed79d60, 0ed79fa9]]
 * Ghidra: FUN_0e457870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e457870(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  char *in_RAX;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  byte bVar22;
  char unaff_BPL;
  uint uVar23;
  ulong *unaff_R12;
  undefined8 *unaff_R13;
  long *unaff_R14;
  long *unaff_R15;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  long lStack_40;
  long **pplStack_38;
  long **pplStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined1 uStack_4;
  long lVar17;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar2 = (char *)(param_4 * 5 + -0x16);
  *pcVar2 = *pcVar2 + (char)param_4;
  *unaff_R13 = in_RAX;
  unaff_R13[7] = &UNK_0e456ab0;
  if (unaff_BPL == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_3 + 0x30);
  }
  *(undefined8 *)(param_3 + 0x30) = uVar15;
  func_0x0ed6d600(&uStack_78,*unaff_R12);
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = 0;
    func_0x048b1dc0(&uStack_2b0);
    plVar11 = uStack_2b0;
    uVar14 = uStack_2a8;
joined_r0x0ed78377:
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)func_0x048aead0(uVar14);
    }
  }
  else {
    uVar14 = *(ulong *)(param_3 + 0x28);
    plVar11 = *(long **)(param_3 + 0x30);
    if (plVar11 == (long *)0x0) {
      (**(code **)(param_3 + 0x38))(0,param_3,0);
      plVar11 = *(long **)(param_3 + 0x30);
      goto joined_r0x0ed78377;
    }
  }
  lVar17 = plVar11[0xf];
  if (lVar17 != 0) {
    for (plStack_330 = *(long **)(lVar17 + 0x60); plStack_330 != *(long **)(lVar17 + 0x68);
        plStack_330 = plStack_330 + 0xb) {
      if ((int)*plStack_330 == 0x1e1bc4d5) {
        uStack_328 = uVar14;
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
    bVar22 = *(byte *)(unaff_R14 + 1);
    bVar8 = *(byte *)((long)unaff_R14 + 9);
    puStack_188 = &UNK_0488e0b0;
    uStack_178 = 0x48b5725f;
    pcStack_180 = (code *)0x0;
    uStack_174 = 0;
    uStack_198 = 0;
    uStack_170 = *(undefined8 *)(param_3 + 0x28);
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
      if (((((bVar22 | bVar8) & 0x10) == 0) || ((*(byte *)((long)plStack_330 + 0x12) & 2) != 0)) &&
         (puVar12 = (undefined8 *)plStack_330[9],
         (*(byte *)(*unaff_R12 + 0x2aa) & *(byte *)(puVar12 + 2)) != 0)) {
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
        uStack_10 = puVar12[1];
        func_0x0ed75bc0(*puVar12,unaff_R14,&uStack_198,unaff_R15,&uStack_20);
        plVar11 = plStack_330;
        if ((*(uint *)(lStack_88 + 0x2b0) == 0xffffffff) ||
           (*(uint *)(lStack_88 + 0x2b0) < uStack_80)) {
          lVar17 = plStack_330[3];
          if (lVar17 == 1) {
            func_0x049e8590(&uStack_2f0,&uStack_198);
            func_0x0ed7a460(&uStack_2b0,&plStack_330,param_3,&uStack_2f0);
            if (pcStack_2d8 != (code *)0x0) {
              (*pcStack_2d8)(&uStack_2f0);
            }
            if ((lStack_278 == 0) &&
               (cVar9 = func_0x0eeddcf0(&UNK_012eddd8,&UNK_012d3a42,0x1cc,&UNK_0145b87a,
                                        &UNK_0126df4c), cVar9 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if (uStack_298 != (code *)0x0) {
              (*uStack_298)(&uStack_2b0);
            }
          }
          else if (lVar17 == 2) {
            func_0x049e8590(&uStack_2f0,&uStack_198);
            uStack_130 = *(ulong *)(param_3 + 0x28);
            uStack_158 = *unaff_R12;
            puStack_148 = &UNK_07d98e10;
            uStack_138 = 0x685ff748;
            pcStack_140 = (code *)0x0;
            uStack_134 = 4;
            uStack_128 = 0;
            puStack_120 = &UNK_07d98df0;
            func_0x0ed7a5f0(&uStack_2b0,&plStack_330,param_3,&uStack_2f0,&uStack_158);
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
              func_0x0ed7a5f0(&plStack_d0,&plStack_330,param_3,aplStack_118,aplStack_1d8);
              bVar24 = lStack_98 == 0;
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
              bVar24 = false;
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
            if (bVar24) {
              if ((ulong)plVar11[3] < 2) {
                uStack_2b0 = (long *)0x0;
                uStack_2a8 = 0;
                func_0x048b1dc0(&uStack_2b0);
                auVar26._8_8_ = uStack_2a8;
                auVar26._0_8_ = uStack_2b0;
                plVar11 = uStack_2b0;
              }
              else {
                auVar26 = (*(code *)plVar11[5])(uStack_328,1);
                plVar11 = auVar26._0_8_;
              }
              if (plVar11 == (long *)0x0) {
                plVar11 = auVar26._0_8_;
                uVar15 = func_0x048aead0(auVar26._8_8_);
                auVar26._8_8_ = auVar26._8_8_;
                auVar26._0_8_ = uVar15;
              }
              lVar17 = *auVar26._0_8_;
              if ((DAT_0f5bd818 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bd818), iVar10 != 0))
              {
                func_0x07d98ca0(0xf5bd800);
                func_0x0410844d(&DAT_0f5bd818);
              }
              if (*(int *)(lVar17 + 4) != _DAT_0f5bd804) {
                if (plVar11 == (long *)0x0) {
                  plVar11 = (long *)func_0x048aead0(auVar26._8_8_);
                }
                uStack_2f0 = *(long **)(*plVar11 + 8);
                uStack_2e8 = *(ulong *)(*plVar11 + 0x10);
                func_0x0470d9a0(&uStack_2b0,&UNK_012d3ad2,0x39,0xd,&uStack_2f0);
                cVar9 = func_0x0ed7a850(&plStack_330);
                if (cVar9 == '\0') {
                  puVar19 = (undefined *)((long)&uStack_2b0 + 1);
                  if (((ulong)uStack_2b0 & 1) != 0) {
                    puVar19 = uStack_2a0;
                  }
                  cVar9 = func_0x0eeddcf0(puVar19,&UNK_0121ebcf,0x1e5,&UNK_0145b87a,&UNK_0126df4c);
                  if (cVar9 != '\0') {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                }
                uVar14 = *unaff_R12;
                puVar19 = uStack_2a0;
                uVar18 = uStack_2a8;
                if (((ulong)uStack_2b0 & 1) == 0) {
                  puVar19 = (undefined *)((long)&uStack_2b0 + 1);
                  uVar18 = (ulong)uStack_2b0 >> 1 & 0x7f;
                }
                uStack_300 = 0;
                if (puVar19 == (undefined *)0x0) {
                  uStack_300 = (ulong)((uint)uVar18 & 0x7f) << 0x30;
                }
                else {
                  lVar17 = uVar18 + 9;
                  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
                  if (lVar17 != 0 && puVar16 == (ulong *)0x0) {
                    func_0x0eec74c0(lVar17,8);
                  }
                  *puVar16 = uVar18;
                  func_0x0eee2f00(puVar16 + 1,puVar19,uVar18);
                  *(undefined1 *)((long)puVar16 + uVar18 + 8) = 0;
                  uStack_300 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                }
                func_0x0ed5ffe0(uVar14,8,&uStack_300);
                if ((uStack_300 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
                }
                uStack_300 = 0;
                goto joined_r0x0ed793e6;
              }
              cVar9 = func_0x0ed7a850(&plStack_330);
              if ((cVar9 == '\0') &&
                 (cVar9 = func_0x0eeddcf0(&DAT_012b9fd7,&UNK_0121ebcf,0x1dc,&UNK_0145b87a,
                                          &UNK_0126df4c), cVar9 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              uVar14 = *unaff_R12;
              uStack_2f8 = 0;
              puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0x5f,8);
              if (puVar12 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x5f,8);
              }
              *puVar12 = 0x56;
              uVar15 = _UNK_012b9fdf;
              puVar12[1] = _DAT_012b9fd7;
              puVar12[2] = uVar15;
              uVar15 = _UNK_012b9fef;
              puVar12[3] = _DAT_012b9fe7;
              puVar12[4] = uVar15;
              uVar15 = _UNK_012b9fff;
              puVar12[5] = _DAT_012b9ff7;
              puVar12[6] = uVar15;
              uVar15 = _UNK_012ba00f;
              puVar12[7] = _DAT_012ba007;
              puVar12[8] = uVar15;
              uVar7 = _UNK_012ba023;
              uVar6 = _UNK_012ba01f;
              uVar5 = _UNK_012ba01b;
              *(undefined4 *)(puVar12 + 9) = _DAT_012ba017;
              *(undefined4 *)((long)puVar12 + 0x4c) = uVar5;
              *(undefined4 *)(puVar12 + 10) = uVar6;
              *(undefined4 *)((long)puVar12 + 0x54) = uVar7;
              *(undefined8 *)((long)puVar12 + 0x56) = 0x2226747865746e6f;
              *(undefined1 *)((long)puVar12 + 0x5e) = 0;
              uStack_2f8 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              func_0x0ed5ffe0(uVar14,8,&uStack_2f8);
              if ((uStack_2f8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
              }
              uStack_2f8 = 0;
            }
          }
          else {
            if (lVar17 != 3) {
              cVar9 = func_0x0eeddcf0(&UNK_01239032,&UNK_01198d5e,0x1ff,&UNK_0145b87a,&UNK_0126df4c)
              ;
              if (cVar9 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
              goto LAB_0ed785a6;
            }
            func_0x049e8590(&plStack_d0,&uStack_198);
            uVar14 = uStack_328;
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
            uStack_1b0 = *(ulong *)(param_3 + 0x28);
            lStack_1a8 = 0;
            puStack_1a0 = &UNK_07d98df0;
            if (plVar11[3] == 3) {
              pcVar3 = (code *)plVar11[6];
              func_0x09b1d320(&uStack_2f0,0,param_3,uStack_328);
              plVar13 = plStack_d0;
              uStack_2b0 = (long *)0x0;
              uStack_2a0 = (undefined *)CONCAT44(uStack_bc,uStack_c0);
              uStack_298 = (code *)CONCAT44(uStack_b4,uStack_b8);
              uStack_290 = uStack_b0;
              cStack_28c = cStack_ac;
              if (cStack_ac == '\0') {
LAB_0ed7879c:
                if (uVar14 != uStack_a8) goto LAB_0ed787b2;
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
                if (uVar14 == uStack_a8) goto LAB_0ed78e5a;
LAB_0ed787b2:
                uStack_280 = 0;
              }
              lStack_278 = lStack_98;
              plVar13 = aplStack_118[0];
              uStack_288 = uVar14;
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
                if (uVar14 != CONCAT44(uStack_ec,uStack_f0)) goto LAB_0ed78f05;
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
                if (uVar14 == CONCAT44(uStack_ec,uStack_f0)) goto LAB_0ed78f37;
LAB_0ed78f05:
                lStack_240 = 0;
              }
              lStack_238 = lStack_e0;
              plVar13 = aplStack_1d8[0];
              uStack_248 = uVar14;
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
                if (uVar14 != uStack_1b0) goto LAB_0ed78fe2;
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
                if (uVar14 == uStack_1b0) goto LAB_0ed79014;
LAB_0ed78fe2:
                lStack_200 = 0;
              }
              puStack_1f8 = puStack_1a0;
              uStack_208 = uVar14;
              puStack_1a0 = (undefined *)0x0;
              (*pcVar3)(&uStack_158,&uStack_2f0,&uStack_2b0);
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
              puVar19 = puStack_120;
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
              puVar19 = (undefined *)0x0;
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
            if (puVar19 == (undefined *)0x0) {
              if ((ulong)plVar11[3] < 2) {
                uStack_2f0 = (long *)0x0;
                uStack_2e8 = 0;
                func_0x048b1dc0(&uStack_2f0);
                auVar25._8_8_ = uStack_2e8;
                auVar25._0_8_ = uStack_2f0;
                plVar11 = uStack_2f0;
              }
              else {
                auVar25 = (*(code *)plVar11[5])(uVar14,1);
                plVar11 = auVar25._0_8_;
              }
              plVar13 = auVar25._0_8_;
              if (plVar11 == (long *)0x0) {
                plVar13 = (long *)func_0x048aead0(auVar25._8_8_);
              }
              uStack_2f0 = *(long **)(*plVar13 + 8);
              uStack_2e8 = *(ulong *)(*plVar13 + 0x10);
              func_0x0470d9a0(&uStack_2b0,&UNK_011b4afb,0x85,0xd,&uStack_2f0);
              cVar9 = func_0x0ed7a850(&plStack_330);
              if (cVar9 == '\0') {
                puVar19 = (undefined *)((long)&uStack_2b0 + 1);
                if (((ulong)uStack_2b0 & 1) != 0) {
                  puVar19 = uStack_2a0;
                }
                cVar9 = func_0x0eeddcf0(puVar19,&UNK_0121ebcf,0x1f8,&UNK_0145b87a,&UNK_0126df4c);
                if (cVar9 != '\0') {
                  _DAT_00000000 = 0xdeadc0de;
                }
              }
              uVar14 = *unaff_R12;
              puVar19 = uStack_2a0;
              uVar18 = uStack_2a8;
              if (((ulong)uStack_2b0 & 1) == 0) {
                puVar19 = (undefined *)((long)&uStack_2b0 + 1);
                uVar18 = (ulong)uStack_2b0 >> 1 & 0x7f;
              }
              uStack_308 = 0;
              if (puVar19 == (undefined *)0x0) {
                uStack_308 = (ulong)((uint)uVar18 & 0x7f) << 0x30;
              }
              else {
                lVar17 = uVar18 + 9;
                puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
                if (lVar17 != 0 && puVar16 == (ulong *)0x0) {
                  func_0x0eec74c0(lVar17,8);
                }
                *puVar16 = uVar18;
                func_0x0eee2f00(puVar16 + 1,puVar19,uVar18);
                *(undefined1 *)((long)puVar16 + uVar18 + 8) = 0;
                uStack_308 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              func_0x0ed5ffe0(uVar14,8,&uStack_308);
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
      plVar11 = (long *)plStack_330[7];
      puVar16 = &uStack_328;
      if ((long *)plStack_330[7] == (long *)0x0) {
        uStack_2b0 = (long *)0x0;
        uStack_2a8 = 0;
        func_0x048b10d0(&uStack_2b0);
        plVar11 = uStack_2b0;
        puVar16 = &uStack_2a8;
      }
      uStack_328 = *puVar16;
      plStack_330 = plVar11;
    } while (plVar11 != (long *)0x0);
    if (*(code **)(param_3 + 0x38) == (code *)0x0) {
      uStack_2b0 = (long *)0x0;
      uStack_2a8 = 0;
      func_0x048b1dc0(&uStack_2b0);
      plVar11 = uStack_2b0;
      uVar14 = uStack_2a8;
    }
    else {
      uVar14 = *(ulong *)(param_3 + 0x28);
      plVar11 = *(long **)(param_3 + 0x30);
      if (*(long **)(param_3 + 0x30) == (long *)0x0) {
        (**(code **)(param_3 + 0x38))(0,param_3,0);
        plVar11 = *(long **)(param_3 + 0x30);
      }
    }
    uStack_2f0 = plVar11;
    uStack_2e8 = uVar14;
    cVar9 = func_0x0ed7a9b0(&uStack_2f0);
    if (pcStack_180 != (code *)0x0) {
      (*pcStack_180)(&uStack_198);
    }
    if (cVar9 == '\0') {
      return;
    }
  }
  uVar14 = (**(code **)(*unaff_R14 + 0x18))(unaff_R14);
  if ((uVar14 & 1) == 0) {
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
    cVar9 = (**(code **)(*unaff_R14 + 0x18))(unaff_R14);
    bVar24 = cVar9 != '\x01';
  }
  else {
    bVar24 = false;
  }
  aplStack_1d8[0] = (long *)CONCAT71(aplStack_1d8[0]._1_7_,bVar24);
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = 0;
    func_0x048b1dc0(&uStack_2b0);
    puVar19 = (undefined *)uStack_2b0;
    uVar14 = uStack_2a8;
  }
  else {
    uVar14 = *(ulong *)(param_3 + 0x28);
    puVar19 = *(undefined **)(param_3 + 0x30);
    if (*(undefined **)(param_3 + 0x30) == (undefined *)0x0) {
      (**(code **)(param_3 + 0x38))(0,param_3,0);
      puVar19 = *(undefined **)(param_3 + 0x30);
    }
  }
  uStack_58 = CONCAT31(uStack_58._1_3_,1);
  pplStack_38 = aplStack_1d8;
  pplStack_30 = aplStack_118;
  uStack_2b0 = (long *)puVar19;
  uStack_2a8 = uVar14;
  lStack_40 = param_3;
  func_0x0ed7ab30(&uStack_2b0);
  if (((long *)unaff_R12[2] != (long *)0x0) &&
     (plVar11 = (long *)(**(code **)(*(long *)unaff_R12[2] + 0x18))(), aplStack_118[0] < plVar11)) {
    uVar14 = *unaff_R12;
    uVar15 = (**(code **)(*(long *)unaff_R12[2] + 0x18))();
    func_0x041348b0(&uStack_198,uVar15);
    puVar19 = puStack_188;
    uVar18 = uStack_198;
    func_0x041348b0(&uStack_158,aplStack_118[0]);
    uStack_2b0 = (long *)puVar19;
    uStack_2a8 = uStack_190;
    if ((uVar18 & 1) == 0) {
      uStack_2b0 = (long *)((long)&uStack_198 + 1);
      uStack_2a8 = uVar18 >> 1 & 0x7f;
    }
    uStack_2a0 = (undefined *)((long)&uStack_158 + 1);
    uStack_298 = (code *)(uStack_158 >> 1 & 0x7f);
    if ((uStack_158 & 1) != 0) {
      uStack_298 = pcStack_150;
      uStack_2a0 = puStack_148;
    }
    func_0x0470d9a0(&uStack_2f0,&UNK_01287a61,0x35,0xdd,&uStack_2b0);
    uVar18 = (ulong)uStack_2f0 >> 1 & 0x7f;
    lVar17 = (long)&uStack_2f0 + 1;
    if (((ulong)uStack_2f0 & 1) != 0) {
      uVar18 = uStack_2e8;
      lVar17 = lStack_2e0;
    }
    if (lVar17 == 0) {
      uStack_1e0 = (ulong)((uint)uVar18 & 0x7f) << 0x30;
    }
    else {
      lVar1 = uVar18 + 9;
      puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
      if (lVar1 != 0 && puVar16 == (ulong *)0x0) {
        func_0x0eec74c0(lVar1,8);
      }
      *puVar16 = uVar18;
      func_0x0eee2f00(puVar16 + 1,lVar17,uVar18);
      *(undefined1 *)((long)puVar16 + uVar18 + 8) = 0;
      uStack_1e0 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(uVar14,0x40,&uStack_1e0);
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
  bVar22 = (byte)unaff_R12[4] ^ 1;
  plStack_90 = (long *)(param_3 + 0x30);
  uStack_68 = 0x440000011b4b81;
  plVar11 = (long *)0x0;
  do {
    auVar26 = (**(code **)(*unaff_R14 + 0xc0))(unaff_R14);
    uVar14 = auVar26._8_8_;
    lVar17 = auVar26._0_8_;
    if (uVar14 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      if (uVar14 < 4) {
        uVar23 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar23 = ((int)*(char *)(lVar17 + 3 + uVar18) ^
                   ((int)*(char *)(lVar17 + 2 + uVar18) ^
                   ((int)*(char *)(lVar17 + 1 + uVar18) ^
                   ((int)*(char *)(lVar17 + uVar18) ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if ((uVar14 & 3) != 0) {
        uVar21 = 0;
        do {
          uVar23 = ((int)*(char *)(uVar18 + lVar17 + uVar21) ^ uVar23) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while ((auVar26._8_4_ & 3) != uVar21);
      }
    }
    if (*(code **)(param_3 + 0x38) == (code *)0x0) {
      uStack_2b0 = (long *)0x0;
      uStack_2a8 = 0;
      func_0x048b1dc0(&uStack_2b0);
      puVar19 = (undefined *)uStack_2b0;
      uVar18 = uStack_2a8;
joined_r0x0ed79b69:
      if (puVar19 == (undefined *)0x0) {
        puVar19 = (undefined *)func_0x048aead0(uVar18);
      }
    }
    else {
      uVar18 = *(ulong *)(param_3 + 0x28);
      puVar19 = *(undefined **)(param_3 + 0x30);
      if (puVar19 == (undefined *)0x0) {
        (**(code **)(param_3 + 0x38))(0,param_3,0);
        puVar19 = (undefined *)*plStack_90;
        goto joined_r0x0ed79b69;
      }
    }
    puVar19 = (undefined *)func_0x048b0c90(uVar18,puVar19,uVar23,1);
    if (puVar19 == (undefined *)0x0) {
      uStack_2b0 = (long *)0x0;
      uStack_2a8 = 0;
      func_0x048b0d20(&uStack_2b0);
      puVar19 = (undefined *)uStack_2b0;
      if (uStack_2b0 != (long *)0x0) goto LAB_0ed79b08;
      bVar8 = 1;
LAB_0ed79b90:
      puVar4 = (uint *)*unaff_R12;
      uStack_310 = 0;
      if (lVar17 == 0) {
        uStack_310 = (uVar14 & 0x7f) << 0x30;
      }
      else {
        lVar1 = uVar14 + 9;
        puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
        if (lVar1 != 0 && puVar16 == (ulong *)0x0) {
          func_0x0eec74c0(lVar1,8);
        }
        *puVar16 = uVar14;
        func_0x0eee2f00(puVar16 + 1,lVar17,uVar14);
        *(undefined1 *)((long)puVar16 + uVar14 + 8) = 0;
        uStack_310 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      func_0x0ed6d180(puVar4,&uStack_310,(ulong)uVar23 | 0x100000000);
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
      bVar8 = bVar8 | bVar22;
      lVar17 = *(long *)(puVar4 + 2);
      uVar23 = *(uint *)(lVar17 + 0x1c + (ulong)*puVar4 * 0x20);
      *puVar4 = uVar23;
      if (puVar4[0x48] == 0) {
        uVar20 = puVar4[4];
      }
      else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) ==
                uVar23) || (uVar20 = puVar4[4], uVar23 != uVar20 - 1)) goto LAB_0ed79da8;
      lVar1 = lVar17 + (ulong)uVar20 * 0x20;
      uVar14 = (ulong)*(uint *)(lVar17 + -0x10 + (ulong)uVar20 * 0x20);
      if (uVar14 != 0xffffffff) {
        (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_2b0,lVar1 + -0x18);
        uVar20 = puVar4[4];
      }
      *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
      puVar4[4] = uVar20 - 1;
    }
    else {
LAB_0ed79b08:
      bVar8 = 1;
      if ((*(int *)(puVar19 + 0x50) != -0x45dcb126) || (*(long *)(puVar19 + 0x58) == 0))
      goto LAB_0ed79b90;
      bVar8 = 1;
      if ((*(byte *)(*unaff_R12 + 0x2aa) & *(byte *)(*(long *)(puVar19 + 0x58) + 0xa9)) == 0) {
        bVar8 = 0;
        goto LAB_0ed79b90;
      }
    }
LAB_0ed79da8:
    bVar22 = bVar8;
    (**(code **)(*unaff_R14 + 0xd0))(unaff_R14);
    plVar13 = plStack_90;
    plVar11 = (long *)((long)plVar11 + 1);
  } while (plVar11 != plStack_60);
  if ((bVar22 & 1) != 0) goto LAB_0ed79f49;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    uStack_2f0 = (long *)0x0;
    uStack_2e8 = 0;
    plVar13 = &uStack_2f0;
    func_0x048b1dc0(plVar13);
    uVar14 = uStack_2e8;
LAB_0ed79e93:
    plVar11 = (long *)*plVar13;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)func_0x048aead0(uVar14);
    }
  }
  else {
    plVar11 = (long *)*plStack_90;
    if (plVar11 == (long *)0x0) {
      uVar14 = *(ulong *)(param_3 + 0x28);
      (**(code **)(param_3 + 0x38))(0,param_3,0);
      goto LAB_0ed79e93;
    }
  }
  uStack_2f0 = *(long **)(*plVar11 + 8);
  uStack_2e8 = *(ulong *)(*plVar11 + 0x10);
  func_0x0470d9a0(&uStack_2b0,&UNK_0121ebe0,0x91,0xd,&uStack_2f0);
  puVar19 = uStack_2a0;
  if (((ulong)uStack_2b0 & 1) == 0) {
    puVar19 = (undefined *)((long)&uStack_2b0 + 1);
  }
  cVar9 = func_0x0eeddcf0(puVar19,&UNK_013580de,0x2d7,&UNK_0145b87a,&UNK_0126df4c);
  if (((ulong)uStack_2b0 & 1) != 0) {
    func_0x0412a280(uStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
  }
  if (cVar9 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_0ed79f49:
  if (*(uint *)(plStack_d0 + 0x56) == 0xffffffff || *(uint *)(plStack_d0 + 0x56) < uStack_c8) {
    func_0x0ed6bc70(uStack_78,uStack_70,uStack_c8,0xffff);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12b9fd7  For type setter, the third argument must be of type "const cereal::SerializerContext&"
 * 0x12b9fe7   the third argument must be of type "const cereal::SerializerContext&"
 * 0x12b9ff7  ent must be of type "const cereal::SerializerContext&"
 * 0x12ba007  ype "const cereal::SerializerContext&"
 * 0x12ba017  l::SerializerContext&"
 */
