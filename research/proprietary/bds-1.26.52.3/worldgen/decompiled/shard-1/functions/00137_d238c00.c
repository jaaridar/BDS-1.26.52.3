/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd238c00
 * Label: string:auto StructurePoolElement::place(BlockSource &, BlockPos, Bl
 * Body:  [[0d238080, 0d238131] [0d238140, 0d238243] [0d238250, 0d2382c2] [0d2382d0, 0d23837b] [0d238380, 0d23841d] [0d238420, 0d23844d] [0d238450, 0d238b7d] [0d238b80, 0d238be5] [0d238bf0, 0d238bfe] [0d238c00, 0d238cb5] [0d238cc0, 0d238eb5] [0d238ec0, 0d238ef9] [0d238f00, 0d2390dc] [0d2390e0, 0d239119] [0d239120, 0d2391b7]]
 * Ghidra: FUN_0d238c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d238c00(ulong param_1,long *param_2,long *param_3,uint param_4,ulong param_5,long param_6,
                 undefined8 param_7,undefined8 param_8,int *param_9,undefined8 param_10,
                 byte param_11,long *param_12,undefined8 param_13,undefined8 param_14,long *param_15
                 ,byte param_16,long param_17,ulong param_18,undefined8 param_19,undefined8 param_20
                 ,undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 long *param_25,ulong param_26,long param_27,long param_28,long param_29,
                 long param_30,long param_31,long param_32,long *param_33,ulong param_34)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined1 (*pauVar3) [16];
  ushort uVar4;
  ushort *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  ushort *puVar17;
  undefined4 *puVar18;
  long lVar19;
  long *in_RAX;
  int iVar20;
  int *piVar21;
  undefined4 *puVar22;
  int *piVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  int *piVar33;
  char *pcVar34;
  int in_R11D;
  short sVar35;
  uint unaff_R12D;
  ulong uVar36;
  long unaff_R13;
  undefined1 *puVar37;
  long *unaff_R14;
  ulong uVar38;
  long unaff_R15;
  long *plVar39;
  bool bVar40;
  undefined1 uVar41;
  float fVar42;
  undefined1 auVar43 [16];
  char cVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  char cVar47;
  char cVar48;
  char cVar51;
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  char cVar79;
  undefined1 auVar49 [16];
  char cVar52;
  char cVar54;
  char cVar56;
  char cVar58;
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  char cVar74;
  char cVar76;
  char cVar78;
  char cVar80;
  undefined1 auVar50 [16];
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  char cVar98;
  undefined1 auVar83 [16];
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar105;
  char cVar106;
  char cVar107;
  char cVar108;
  char cVar109;
  char cVar110;
  char cVar111;
  char cVar112;
  char cVar113;
  char cVar114;
  char cVar115;
  char cVar116;
  char cVar117;
  char cVar118;
  char cVar119;
  char cVar120;
  char cVar121;
  char cVar122;
  char cVar123;
  char cVar124;
  char cVar125;
  char cVar126;
  char cVar127;
  char cVar128;
  char cVar129;
  long in_stack_00000120;
  
  bVar40 = param_4 < *(uint *)(param_6 + 0x168);
  while( true ) {
    if (!bVar40) {
      param_2 = param_2 + param_1 + 1;
      param_1 = ~param_1 + param_5;
    }
    plVar28 = param_2;
    param_5 = param_1;
    if (param_1 == 0) break;
LAB_0d238bf8:
    param_1 = param_5 >> 1;
    bVar40 = (ushort)param_4 < *(ushort *)(param_2[param_1] + 0x168);
  }
  do {
    if (param_3 == plVar28) goto LAB_0d238cc0;
    if (param_3 == in_RAX) goto LAB_0d238cc0;
    if (*param_3 == 0) goto LAB_0d238cc0;
    param_24._0_4_ = in_R11D - param_9[2];
    param_23._4_4_ = (int)unaff_R14[1];
    param_24._4_4_ = *(undefined4 *)((long)unaff_R14 + 0xc);
    fVar42 = (float)func_0x0c8b8b70(*param_3,(long)&param_23 + 4,
                                    (int)(short)((short)param_9[2] + param_14._4_2_),1,&UNK_0c8b9060
                                   );
    bVar12 = fVar42 <= _DAT_01198788 & param_11 &
             param_16 & *(long *)(*(long *)(unaff_R13 + 0x68) + 200) == _DAT_0f712e90;
LAB_0d238cc8:
    lVar19 = _DAT_0f6eaec0;
    lVar30 = unaff_R14[4];
    lVar26 = unaff_R14[7];
    plVar28 = *(long **)(unaff_R13 + 0x68);
    lVar31 = plVar28[0x19];
    lVar29 = 0;
    if (lVar30 != unaff_R14[3]) {
      lVar29 = (lVar30 - unaff_R14[3]) * 0x80 + -1;
    }
    unaff_R14[7] = lVar26 + -1;
    if (0x7ff < (lVar29 - (lVar26 + unaff_R14[6])) + 1U) {
      func_0x0412a280(*(undefined8 *)(lVar30 + -8),0x1000);
      unaff_R14[4] = unaff_R14[4] + -8;
      plVar28 = *(long **)(unaff_R13 + 0x68);
    }
    bVar13 = (**(code **)(*plVar28 + 0x128))(plVar28,param_14._4_2_ < (short)unaff_R12D);
    *(uint *)(unaff_R14 + 0xb) = bVar13 - 1 | 1;
    uVar38 = unaff_R14[6];
    if (uVar38 == 0) {
      func_0x0d2689d0(param_33);
      uVar38 = unaff_R14[6];
    }
    lVar30 = unaff_R14[3];
    lVar26 = *(long *)(lVar30 + (uVar38 >> 10) * 8);
    lVar29 = 0;
    if (unaff_R14[4] != lVar30) {
      lVar29 = lVar26 + (ulong)((uint)uVar38 & 0x3ff) * 4;
    }
    if (lVar29 == lVar26) {
      lVar29 = *(long *)(lVar30 + -8 + (uVar38 >> 10) * 8) + 0x1000;
    }
    *(int *)(lVar29 + -4) = (int)unaff_R14[0xb];
    unaff_R14[6] = uVar38 - 1;
    unaff_R14[7] = unaff_R14[7] + 1;
    cVar11 = **(char **)(*(long *)(unaff_R13 + 0x68) + 0x20);
    uVar41 = 0xff;
    if ((cVar11 != '\x05') && (**(char **)(*(long *)(unaff_R15 + 0x68) + 0x20) != '\x05')) {
      uVar41 = cVar11 == '\0';
    }
    puVar37 = (undefined1 *)unaff_R14[9];
    if ((undefined1 *)unaff_R14[10] <= puVar37) {
      lVar30 = unaff_R14[8];
      lVar26 = (long)puVar37 - lVar30;
      uVar38 = lVar26 + 1;
      if (-1 < (long)uVar38) {
        uVar24 = unaff_R14[10] - lVar30;
        if (uVar38 < uVar24 * 2) {
          uVar38 = uVar24 * 2;
        }
        if (0x3ffffffffffffffe < uVar24) {
          uVar38 = 0x7fffffffffffffff;
        }
        if (uVar38 == 0) {
LAB_0d238e64:
          lVar29 = 0;
        }
        else {
          lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar38);
          if (lVar29 == 0) {
            func_0x0eec74c0(uVar38,0);
            goto LAB_0d238e64;
          }
        }
        *(undefined1 *)(lVar29 + lVar26) = uVar41;
        puVar37 = (undefined1 *)(lVar29 + lVar26 + 1);
        func_0x0eee2f00(lVar29,lVar30,lVar26);
        param_12[8] = lVar29;
        param_12[9] = (long)puVar37;
        param_12[10] = uVar38 + lVar29;
        unaff_R14 = param_12;
        if (lVar30 != 0) {
          func_0x0412a280(lVar30,uVar24);
        }
        goto LAB_0d23825a;
      }
LAB_0d2391a3:
      func_0x0d263370();
LAB_0d2391a8:
      func_0x049cdc50();
LAB_0d2391ad:
      func_0x049ce220();
LAB_0d2391b2:
      func_0x04891200();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *puVar37 = uVar41;
    puVar37 = puVar37 + 1;
LAB_0d23825a:
    param_16 = lVar31 == lVar19;
    unaff_R14[9] = (long)puVar37;
    param_23._0_4_ = (int)param_23 + 1;
    unaff_R12D = unaff_R12D - 1;
    if ((int)param_23 == (int)param_22) {
      lVar30 = param_30 + 1;
      plVar28 = (long *)*param_25;
      plVar39 = (long *)param_25[1];
      if ((int)((ulong)((long)plVar39 - (long)plVar28) >> 5) * -0x55555555 <= lVar30) {
        do {
          if (plVar28 == plVar39) {
joined_r0x0d239101:
            for (; plVar28 != plVar39; plVar28 = plVar28 + 0xc) {
              lVar30 = *plVar28;
              lVar26 = plVar28[0xb];
              if (*(float **)(param_9 + lVar30 * 6 + 0x6e) ==
                  *(float **)(param_9 + lVar30 * 6 + 0x70)) {
                func_0x0d236b00(param_9 + lVar30 * 6 + 0x6e,(long)*param_9);
                **(float **)(param_9 + lVar30 * 6 + 0x6e) = (float)(int)lVar26;
                func_0x0d2370b0(param_9,*plVar28);
              }
              else {
                **(float **)(param_9 + lVar30 * 6 + 0x6e) = (float)(int)lVar26;
                func_0x0d2370b0(param_9);
              }
            }
            return;
          }
          param_13._4_4_ = param_13._4_4_ + ~(uint)param_26;
          if ((short)(ushort)param_13._4_4_ < 0) goto joined_r0x0d239101;
          param_23._4_4_ = ((param_13._4_4_ & 0xffff) >> 4) + param_20._4_4_;
          plVar28 = *(long **)(param_29 + 0x20);
          if (plVar28 == (long *)0x0) goto LAB_0d2391b2;
          param_17 = (**(code **)(*plVar28 + 0x30))(plVar28,(long)&param_23 + 4);
          uVar25 = param_13._4_4_ & 0xf;
          plVar28 = (long *)*param_25;
          plVar39 = (long *)param_25[1];
          param_26 = (ulong)uVar25;
        } while ((int)((ulong)((long)plVar39 - (long)plVar28) >> 5) * -0x55555555 < 1);
        param_18 = (ulong)(ushort)((ushort)param_13._4_4_ >> 2);
        param_22._0_4_ = uVar25 + 1;
        param_21._4_1_ = (char)uVar25 * '\x04' & 4;
        param_21._0_4_ = 0xf << param_21._4_1_;
        lVar30 = 0;
      }
      unaff_R14 = plVar28 + lVar30 * 0xc;
      lVar26 = plVar28[lVar30 * 0xc + 1];
      uVar25 = *(uint *)((long)plVar28 + lVar30 * 0x60 + 0xc);
      bVar13 = (char)uVar25 * '\x10' + (char)(int)lVar26;
      *(byte *)(param_15 + 1) = bVar13;
      param_30 = lVar30;
      if (*(char *)((long)plVar28 + lVar30 * 0x60 + 0x5c) == '\x01') {
        sVar35 = *(short *)(*param_15 + (ulong)bVar13 * 2);
        if (sVar35 != -1) {
          lVar30 = *unaff_R14;
          lVar31 = *(long *)(param_27 + lVar30 * 0x18);
          if (lVar31 == *(long *)(param_27 + 8 + lVar30 * 0x18)) {
            func_0x0d236d70(param_27 + lVar30 * 0x18,(long)param_9[3]);
          }
          else {
            *(short *)(lVar31 + param_18 * 2) = sVar35;
          }
        }
        *(undefined1 *)((long)unaff_R14 + 0x5c) = 0;
      }
      param_22._4_4_ = (uVar25 & 0xff) * 0x10 + ((int)lVar26 << 8 | (uint)param_26) & 0xffff;
      param_34 = (ulong)(param_22._4_4_ >> 1);
      param_33 = unaff_R14 + 2;
      param_23._0_4_ = 0;
      unaff_R12D = param_13._4_4_;
      param_12 = unaff_R14;
    }
    uVar25 = param_22._4_4_ - (int)param_23 & 0xffff;
    unaff_R13 = (**(code **)(**(long **)(param_17 + 0x30) + 0x20))
                          (*(long **)(param_17 + 0x30),uVar25);
    plVar28 = *(long **)(param_17 + 0x38);
    if (plVar28 == (long *)0x0) {
      if ((_DAT_0f6ffb10 == (long *)0x0) &&
         (cVar11 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868), cVar11 != '\0')
         ) {
        _DAT_00000000 = 0xdeadc0de;
      }
      unaff_R15 = *(long *)(*_DAT_0f6ffb10 + 0x200);
    }
    else {
      unaff_R15 = (**(code **)(*plVar28 + 0x20))(plVar28,uVar25);
    }
    cVar129 = UNK_014e26cf;
    cVar128 = UNK_014e26ce;
    cVar127 = UNK_014e26cd;
    cVar126 = UNK_014e26cc;
    cVar125 = UNK_014e26cb;
    cVar124 = UNK_014e26ca;
    cVar123 = UNK_014e26c9;
    cVar122 = UNK_014e26c8;
    cVar121 = UNK_014e26c7;
    cVar120 = UNK_014e26c6;
    cVar119 = UNK_014e26c5;
    cVar118 = UNK_014e26c4;
    cVar117 = UNK_014e26c3;
    cVar116 = UNK_014e26c2;
    cVar115 = UNK_014e26c1;
    cVar11 = DAT_014e26c0;
    auVar82._8_8_ = _UNK_014e2328;
    auVar82._0_8_ = _DAT_014e2320;
    sVar35 = (short)unaff_R12D;
    if (*(long *)(param_17 + 0x10) == 0) {
      param_11 = true;
    }
    else {
      param_11 = ((*(byte *)(*(long *)(param_17 + 0x10) + param_34) & (byte)param_21) >>
                  (param_21._4_1_ & 0x1f) & 0xe) < 10;
    }
    if ((bVar12 != 0) &&
       ((lVar30 = *(long *)(*(long *)(unaff_R13 + 0x68) + 200), lVar30 == _DAT_0f713f00 ||
        (lVar30 == _DAT_0f714b20)))) {
      *(undefined4 *)(unaff_R14 + 0xb) = 0xffffffff;
      *(undefined4 *)
       (*(long *)(unaff_R14[3] + ((ulong)unaff_R14[6] >> 10) * 8) +
       (ulong)((uint)unaff_R14[6] & 0x3ff) * 4) = 0xffffffff;
    }
    if ((unaff_R12D & 3) == 0) {
      uVar4 = *(ushort *)(*param_15 + (ulong)*(byte *)(param_15 + 1) * 2);
      if (uVar4 != 0xffff) {
        lVar30 = *unaff_R14;
        puVar5 = *(ushort **)(param_27 + lVar30 * 0x18);
        puVar17 = *(ushort **)(param_27 + 8 + lVar30 * 0x18);
        if (puVar5 == puVar17) {
          pauVar3 = (undefined1 (*) [16])(param_27 + lVar30 * 0x18);
          iVar27 = param_9[3];
          uVar24 = (ulong)iVar27;
          uVar38 = *(ulong *)pauVar3[1];
          uVar25 = (uint)uVar4;
          if ((ulong)((long)(uVar38 - (long)puVar5) >> 1) < uVar24) {
            if (puVar5 != (ushort *)0x0) {
              *(ushort **)(*pauVar3 + 8) = puVar5;
              func_0x0412a280();
              *pauVar3 = (undefined1  [16])0x0;
              *(undefined8 *)pauVar3[1] = 0;
              uVar38 = 0;
            }
            if (iVar27 < 0) goto LAB_0d2391ad;
            uVar36 = uVar24;
            if (uVar24 < uVar38) {
              uVar36 = uVar38;
            }
            if (0x7ffffffffffffffd < uVar38) {
              uVar36 = 0x7fffffffffffffff;
            }
            if ((long)uVar36 < 0) goto LAB_0d2391ad;
            puVar17 = (ushort *)(**(code **)(_DAT_0f5463b0 + 0x10))();
            if (puVar17 == (ushort *)0x0) {
              func_0x0eec74c0();
            }
            *(ushort **)*pauVar3 = puVar17;
            *(ushort **)pauVar3[1] = puVar17 + uVar36;
            cVar129 = UNK_014e26cf;
            cVar128 = UNK_014e26ce;
            cVar127 = UNK_014e26cd;
            cVar126 = UNK_014e26cc;
            cVar125 = UNK_014e26cb;
            cVar124 = UNK_014e26ca;
            cVar123 = UNK_014e26c9;
            cVar122 = UNK_014e26c8;
            cVar121 = UNK_014e26c7;
            cVar120 = UNK_014e26c6;
            cVar119 = UNK_014e26c5;
            cVar118 = UNK_014e26c4;
            cVar117 = UNK_014e26c3;
            cVar116 = UNK_014e26c2;
            cVar115 = UNK_014e26c1;
            cVar11 = DAT_014e26c0;
            uVar10 = _UNK_014e2328;
            uVar9 = _DAT_014e2320;
            puVar5 = puVar17 + uVar24;
            uVar38 = uVar24 + 0x7fffffffffffffff & 0x7fffffffffffffff;
            if (uVar38 < 3) {
LAB_0d239070:
              do {
                *puVar17 = uVar4;
                puVar17 = puVar17 + 1;
              } while (puVar17 != puVar5);
            }
            else {
              uVar24 = uVar38 + 1;
              if (uVar38 < 0xf) {
                uVar38 = 0;
LAB_0d238fcb:
                uVar36 = uVar24 & 0xfffffffffffffffc;
                auVar82 = pshuflw(ZEXT416(uVar25),ZEXT416(uVar25),0);
                do {
                  *(long *)(puVar17 + uVar38) = auVar82._0_8_;
                  uVar38 = uVar38 + 4;
                } while (uVar36 != uVar38);
                puVar17 = puVar17 + uVar36;
                if (uVar24 != uVar36) goto LAB_0d239070;
              }
              else {
                uVar38 = uVar24 & 0xfffffffffffffff0;
                auVar82 = pshuflw(ZEXT416(uVar25),ZEXT416(uVar25),0);
                auVar44._0_4_ = auVar82._0_4_;
                auVar44._4_4_ = auVar44._0_4_;
                auVar44._8_4_ = auVar44._0_4_;
                auVar44._12_4_ = auVar44._0_4_;
                uVar36 = 0;
                do {
                  *(undefined1 (*) [16])(puVar17 + uVar36) = auVar44;
                  *(undefined1 (*) [16])(puVar17 + uVar36 + 8) = auVar44;
                  uVar36 = uVar36 + 0x10;
                } while (uVar38 != uVar36);
                if (uVar24 != uVar38) {
                  if ((uVar24 & 0xc) == 0) {
                    puVar17 = puVar17 + uVar38;
                    goto LAB_0d239070;
                  }
                  goto LAB_0d238fcb;
                }
              }
            }
            auVar82._8_8_ = uVar10;
            auVar82._0_8_ = uVar9;
            *(ushort **)(*pauVar3 + 8) = puVar5;
            unaff_R14 = param_12;
          }
          else {
            if (iVar27 == 0) {
              *(ushort **)(*pauVar3 + 8) = puVar5;
              goto LAB_0d2383bf;
            }
            puVar5 = puVar17 + uVar24;
            uVar38 = uVar24 + 0x7fffffffffffffff & 0x7fffffffffffffff;
            if (uVar38 < 3) {
LAB_0d239090:
              do {
                *puVar17 = uVar4;
                puVar17 = puVar17 + 1;
              } while (puVar17 != puVar5);
            }
            else {
              uVar24 = uVar38 + 1;
              if (uVar38 < 0xf) {
                uVar38 = 0;
LAB_0d23902e:
                uVar36 = uVar24 & 0xfffffffffffffffc;
                auVar45 = pshuflw(ZEXT416(uVar25),ZEXT416(uVar25),0);
                do {
                  *(long *)(puVar17 + uVar38) = auVar45._0_8_;
                  uVar38 = uVar38 + 4;
                } while (uVar36 != uVar38);
                puVar17 = puVar17 + uVar36;
                if (uVar24 != uVar36) goto LAB_0d239090;
              }
              else {
                uVar38 = uVar24 & 0xfffffffffffffff0;
                auVar45 = pshuflw(ZEXT416(uVar25),ZEXT416(uVar25),0);
                auVar45._4_4_ = auVar45._0_4_;
                auVar45._8_4_ = auVar45._0_4_;
                auVar45._12_4_ = auVar45._0_4_;
                uVar36 = 0;
                do {
                  *(undefined1 (*) [16])(puVar17 + uVar36) = auVar45;
                  *(undefined1 (*) [16])(puVar17 + uVar36 + 8) = auVar45;
                  uVar36 = uVar36 + 0x10;
                } while (uVar38 != uVar36);
                if (uVar24 != uVar38) {
                  if ((uVar24 & 0xc) == 0) {
                    puVar17 = puVar17 + uVar38;
                    goto LAB_0d239090;
                  }
                  goto LAB_0d23902e;
                }
              }
            }
            *(ushort **)(*pauVar3 + 8) = puVar5;
          }
        }
        else {
          iVar14 = (int)sVar35 >> 0x1f;
          iVar20 = iVar14 - sVar35;
          iVar27 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar27 = iVar20;
          }
          puVar5[iVar14 - (iVar27 >> 2)] = uVar4;
        }
      }
    }
LAB_0d2383bf:
    in_R11D = (int)sVar35;
    if ((unaff_R12D & 7) == 0) {
      lVar30 = unaff_R14[3];
      fVar42 = 0.0;
      if (unaff_R14[4] != lVar30) {
        uVar38 = unaff_R14[6];
        piVar21 = *(int **)(lVar30 + (uVar38 >> 10) * 8);
        piVar15 = (int *)((ulong)(((uint)(uVar38 + unaff_R14[7]) & 0x3ff) << 2) +
                         *(long *)(lVar30 + (uVar38 + unaff_R14[7] >> 10) * 8));
        if (piVar21 + ((uint)uVar38 & 0x3ff) != piVar15) {
          lVar30 = lVar30 + (uVar38 >> 10) * 8;
          iVar27 = 0;
          piVar23 = piVar21 + ((uint)uVar38 & 0x3ff);
          do {
            piVar33 = piVar23 + 1;
            if ((long)(piVar23 + 1) - (long)piVar21 == 0x1000) {
              piVar21 = *(int **)(lVar30 + 8);
              lVar30 = lVar30 + 8;
              piVar33 = piVar21;
            }
            iVar27 = iVar27 + *piVar23;
            piVar23 = piVar33;
          } while (piVar33 != piVar15);
          fVar42 = (float)iVar27;
        }
      }
      fVar42 = fVar42 / _DAT_01198358;
      iVar14 = (in_R11D >> 0x1f) - in_R11D;
      iVar27 = iVar14 + 7;
      if (-1 < iVar14) {
        iVar27 = iVar14;
      }
      lVar30 = *unaff_R14;
      puVar16 = *(undefined4 **)(param_32 + lVar30 * 0x18);
      puVar22 = *(undefined4 **)(param_32 + 8 + lVar30 * 0x18);
      if (puVar16 == puVar22) {
        puVar1 = (undefined8 *)(param_32 + lVar30 * 0x18);
        iVar14 = *param_9;
        uVar24 = (ulong)iVar14;
        uVar38 = puVar1[2];
        if (uVar24 <= (ulong)((long)(uVar38 - (long)puVar16) >> 2)) {
          puVar18 = puVar16;
          if (iVar14 != 0) {
            puVar18 = puVar22 + uVar24;
            uVar38 = uVar24 + 0x3fffffffffffffff & 0x3fffffffffffffff;
            if (6 < uVar38) {
              uVar38 = uVar38 + 1;
              uVar24 = uVar38 & 0x7ffffffffffffff8;
              uVar36 = 0;
              do {
                *(undefined1 (*) [16])(puVar22 + uVar36) = auVar82;
                *(undefined1 (*) [16])(puVar22 + uVar36 + 4) = auVar82;
                uVar36 = uVar36 + 8;
              } while (uVar24 != uVar36);
              puVar22 = puVar22 + uVar24;
              if (uVar38 == uVar24) goto LAB_0d23886f;
            }
            do {
              *puVar22 = 0xbf800000;
              puVar22 = puVar22 + 1;
            } while (puVar22 != puVar18);
          }
LAB_0d23886f:
          puVar1[1] = puVar18;
          goto LAB_0d238873;
        }
        if (puVar16 != (undefined4 *)0x0) {
          puVar1[1] = puVar16;
          func_0x0412a280(puVar16);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          uVar38 = 0;
        }
        if (-1 < iVar14) {
          uVar36 = (long)uVar38 >> 1;
          if ((ulong)((long)uVar38 >> 1) <= uVar24) {
            uVar36 = uVar24;
          }
          if (0x7ffffffffffffffb < uVar38) {
            uVar36 = 0x3fffffffffffffff;
          }
          if (uVar36 < 0x4000000000000000) {
            param_31 = uVar36 * 4;
            puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))();
            if (puVar16 == (undefined4 *)0x0) {
              func_0x0eec74c0();
            }
            *puVar1 = puVar16;
            puVar1[2] = puVar16 + uVar36;
            cVar129 = UNK_014e26cf;
            cVar128 = UNK_014e26ce;
            cVar127 = UNK_014e26cd;
            cVar126 = UNK_014e26cc;
            cVar125 = UNK_014e26cb;
            cVar124 = UNK_014e26ca;
            cVar123 = UNK_014e26c9;
            cVar122 = UNK_014e26c8;
            cVar121 = UNK_014e26c7;
            cVar120 = UNK_014e26c6;
            cVar119 = UNK_014e26c5;
            cVar118 = UNK_014e26c4;
            cVar117 = UNK_014e26c3;
            cVar116 = UNK_014e26c2;
            cVar115 = UNK_014e26c1;
            cVar11 = DAT_014e26c0;
            uVar10 = _UNK_014e2328;
            uVar9 = _DAT_014e2320;
            puVar18 = puVar16 + uVar24;
            uVar38 = uVar24 + 0x3fffffffffffffff & 0x3fffffffffffffff;
            puVar22 = puVar16;
            if (6 < uVar38) {
              uVar38 = uVar38 + 1;
              uVar24 = uVar38 & 0x7ffffffffffffff8;
              puVar22 = puVar16 + uVar24;
              uVar36 = 0;
              do {
                *(undefined8 *)(puVar16 + uVar36) = uVar9;
                *(undefined8 *)((long)(puVar16 + uVar36) + 8) = uVar10;
                *(undefined8 *)(puVar16 + uVar36 + 4) = uVar9;
                *(undefined8 *)((long)(puVar16 + uVar36 + 4) + 8) = uVar10;
                uVar36 = uVar36 + 8;
              } while (uVar24 != uVar36);
              if (uVar38 == uVar24) goto LAB_0d23886f;
            }
            do {
              *puVar22 = 0xbf800000;
              puVar22 = puVar22 + 1;
            } while (puVar22 != puVar18);
            goto LAB_0d23886f;
          }
        }
        goto LAB_0d2391a8;
      }
LAB_0d238873:
      lVar30 = (long)(((in_R11D >> 0x1f) - (iVar27 >> 3)) + 1);
      puVar16[lVar30] = fVar42;
      pcVar6 = (char *)param_12[8];
      pcVar7 = (char *)param_12[9];
      if (pcVar6 == pcVar7) {
        cVar51 = '\0';
        cVar47 = '\0';
      }
      else {
        uVar38 = (long)pcVar7 - (long)pcVar6;
        if (uVar38 < 0x10) {
          uVar25 = 0;
          uVar32 = 0;
          pcVar34 = pcVar6;
        }
        else {
          if (uVar38 < 0x20) {
            uVar36 = 0;
            cVar47 = '\0';
            uVar32 = 0;
          }
          else {
            uVar36 = uVar38 & 0xffffffffffffffe0;
            cVar47 = '\0';
            cVar84 = '\0';
            cVar85 = '\0';
            cVar86 = '\0';
            cVar87 = '\0';
            cVar88 = '\0';
            cVar89 = '\0';
            cVar90 = '\0';
            cVar91 = '\0';
            cVar92 = '\0';
            cVar93 = '\0';
            cVar94 = '\0';
            cVar95 = '\0';
            cVar96 = '\0';
            cVar97 = '\0';
            cVar98 = '\0';
            uVar24 = 0;
            cVar99 = '\0';
            cVar100 = '\0';
            cVar101 = '\0';
            cVar102 = '\0';
            cVar103 = '\0';
            cVar104 = '\0';
            cVar105 = '\0';
            cVar106 = '\0';
            cVar107 = '\0';
            cVar108 = '\0';
            cVar109 = '\0';
            cVar110 = '\0';
            cVar111 = '\0';
            cVar112 = '\0';
            cVar113 = '\0';
            cVar114 = '\0';
            cVar48 = '\0';
            cVar52 = '\0';
            cVar54 = '\0';
            cVar56 = '\0';
            cVar58 = '\0';
            cVar60 = '\0';
            cVar62 = '\0';
            cVar64 = '\0';
            cVar66 = '\0';
            cVar68 = '\0';
            cVar70 = '\0';
            cVar72 = '\0';
            cVar74 = '\0';
            cVar76 = '\0';
            cVar78 = '\0';
            cVar80 = '\0';
            cVar51 = '\0';
            cVar53 = '\0';
            cVar55 = '\0';
            cVar57 = '\0';
            cVar59 = '\0';
            cVar61 = '\0';
            cVar63 = '\0';
            cVar65 = '\0';
            cVar67 = '\0';
            cVar69 = '\0';
            cVar71 = '\0';
            cVar73 = '\0';
            cVar75 = '\0';
            cVar77 = '\0';
            cVar79 = '\0';
            cVar46 = '\0';
            do {
              pcVar34 = pcVar6 + uVar24;
              pcVar2 = pcVar6 + uVar24 + 0x10;
              cVar48 = cVar48 + (*pcVar34 == -1);
              cVar52 = cVar52 + (pcVar34[1] == -1);
              cVar54 = cVar54 + (pcVar34[2] == -1);
              cVar56 = cVar56 + (pcVar34[3] == -1);
              cVar58 = cVar58 + (pcVar34[4] == -1);
              cVar60 = cVar60 + (pcVar34[5] == -1);
              cVar62 = cVar62 + (pcVar34[6] == -1);
              cVar64 = cVar64 + (pcVar34[7] == -1);
              cVar66 = cVar66 + (pcVar34[8] == -1);
              cVar68 = cVar68 + (pcVar34[9] == -1);
              cVar70 = cVar70 + (pcVar34[10] == -1);
              cVar72 = cVar72 + (pcVar34[0xb] == -1);
              cVar74 = cVar74 + (pcVar34[0xc] == -1);
              cVar76 = cVar76 + (pcVar34[0xd] == -1);
              cVar78 = cVar78 + (pcVar34[0xe] == -1);
              cVar80 = cVar80 + (pcVar34[0xf] == -1);
              cVar51 = cVar51 + (*pcVar2 == -1);
              cVar53 = cVar53 + (pcVar2[1] == -1);
              cVar55 = cVar55 + (pcVar2[2] == -1);
              cVar57 = cVar57 + (pcVar2[3] == -1);
              cVar59 = cVar59 + (pcVar2[4] == -1);
              cVar61 = cVar61 + (pcVar2[5] == -1);
              cVar63 = cVar63 + (pcVar2[6] == -1);
              cVar65 = cVar65 + (pcVar2[7] == -1);
              cVar67 = cVar67 + (pcVar2[8] == -1);
              cVar69 = cVar69 + (pcVar2[9] == -1);
              cVar71 = cVar71 + (pcVar2[10] == -1);
              cVar73 = cVar73 + (pcVar2[0xb] == -1);
              cVar75 = cVar75 + (pcVar2[0xc] == -1);
              cVar77 = cVar77 + (pcVar2[0xd] == -1);
              cVar79 = cVar79 + (pcVar2[0xe] == -1);
              cVar46 = cVar46 + (pcVar2[0xf] == -1);
              cVar47 = cVar47 + (*pcVar34 == cVar11);
              cVar84 = cVar84 + (pcVar34[1] == cVar115);
              cVar85 = cVar85 + (pcVar34[2] == cVar116);
              cVar86 = cVar86 + (pcVar34[3] == cVar117);
              cVar87 = cVar87 + (pcVar34[4] == cVar118);
              cVar88 = cVar88 + (pcVar34[5] == cVar119);
              cVar89 = cVar89 + (pcVar34[6] == cVar120);
              cVar90 = cVar90 + (pcVar34[7] == cVar121);
              cVar91 = cVar91 + (pcVar34[8] == cVar122);
              cVar92 = cVar92 + (pcVar34[9] == cVar123);
              cVar93 = cVar93 + (pcVar34[10] == cVar124);
              cVar94 = cVar94 + (pcVar34[0xb] == cVar125);
              cVar95 = cVar95 + (pcVar34[0xc] == cVar126);
              cVar96 = cVar96 + (pcVar34[0xd] == cVar127);
              cVar97 = cVar97 + (pcVar34[0xe] == cVar128);
              cVar98 = cVar98 + (pcVar34[0xf] == cVar129);
              cVar99 = cVar99 + (*pcVar2 == cVar11);
              cVar100 = cVar100 + (pcVar2[1] == cVar115);
              cVar101 = cVar101 + (pcVar2[2] == cVar116);
              cVar102 = cVar102 + (pcVar2[3] == cVar117);
              cVar103 = cVar103 + (pcVar2[4] == cVar118);
              cVar104 = cVar104 + (pcVar2[5] == cVar119);
              cVar105 = cVar105 + (pcVar2[6] == cVar120);
              cVar106 = cVar106 + (pcVar2[7] == cVar121);
              cVar107 = cVar107 + (pcVar2[8] == cVar122);
              cVar108 = cVar108 + (pcVar2[9] == cVar123);
              cVar109 = cVar109 + (pcVar2[10] == cVar124);
              cVar110 = cVar110 + (pcVar2[0xb] == cVar125);
              cVar111 = cVar111 + (pcVar2[0xc] == cVar126);
              cVar112 = cVar112 + (pcVar2[0xd] == cVar127);
              cVar113 = cVar113 + (pcVar2[0xe] == cVar128);
              cVar114 = cVar114 + (pcVar2[0xf] == cVar129);
              uVar24 = uVar24 + 0x20;
            } while (uVar36 != uVar24);
            auVar83[0] = cVar107 + cVar91 + cVar99 + cVar47;
            auVar83[1] = cVar108 + cVar92 + cVar100 + cVar84;
            auVar83[2] = cVar109 + cVar93 + cVar101 + cVar85;
            auVar83[3] = cVar110 + cVar94 + cVar102 + cVar86;
            auVar83[4] = cVar111 + cVar95 + cVar103 + cVar87;
            auVar83[5] = cVar112 + cVar96 + cVar104 + cVar88;
            auVar83[6] = cVar113 + cVar97 + cVar105 + cVar89;
            auVar83[7] = cVar114 + cVar98 + cVar106 + cVar90;
            auVar83[8] = (cVar107 + cVar91) * '\x02';
            auVar83[9] = (cVar108 + cVar92) * '\x02';
            auVar83[10] = (cVar109 + cVar93) * '\x02';
            auVar83[0xb] = (cVar110 + cVar94) * '\x02';
            auVar83[0xc] = (cVar111 + cVar95) * '\x02';
            auVar83[0xd] = (cVar112 + cVar96) * '\x02';
            auVar83[0xe] = (cVar113 + cVar97) * '\x02';
            auVar83[0xf] = (cVar114 + cVar98) * '\x02';
            auVar82 = psadbw(auVar83,(undefined1  [16])0x0);
            uVar25 = auVar82._0_4_;
            cVar47 = auVar82[0];
            auVar50[0] = cVar67 + cVar66 + cVar51 + cVar48;
            auVar50[1] = cVar69 + cVar68 + cVar53 + cVar52;
            auVar50[2] = cVar71 + cVar70 + cVar55 + cVar54;
            auVar50[3] = cVar73 + cVar72 + cVar57 + cVar56;
            auVar50[4] = cVar75 + cVar74 + cVar59 + cVar58;
            auVar50[5] = cVar77 + cVar76 + cVar61 + cVar60;
            auVar50[6] = cVar79 + cVar78 + cVar63 + cVar62;
            auVar50[7] = cVar46 + cVar80 + cVar65 + cVar64;
            auVar50[8] = (cVar67 + cVar66) * '\x02';
            auVar50[9] = (cVar69 + cVar68) * '\x02';
            auVar50[10] = (cVar71 + cVar70) * '\x02';
            auVar50[0xb] = (cVar73 + cVar72) * '\x02';
            auVar50[0xc] = (cVar75 + cVar74) * '\x02';
            auVar50[0xd] = (cVar77 + cVar76) * '\x02';
            auVar50[0xe] = (cVar79 + cVar78) * '\x02';
            auVar50[0xf] = (cVar46 + cVar80) * '\x02';
            auVar82 = psadbw(auVar50,(undefined1  [16])0x0);
            uVar32 = auVar82._0_4_;
            cVar51 = auVar82[0];
            if (uVar38 == uVar36) goto LAB_0d238a10;
            if ((uVar38 & 0x10) == 0) {
              pcVar34 = pcVar6 + uVar36;
              goto LAB_0d238f0f;
            }
          }
          uVar24 = uVar38 & 0xfffffffffffffff0;
          pcVar34 = pcVar6 + uVar24;
          cVar51 = '\0';
          cVar53 = '\0';
          cVar55 = '\0';
          cVar57 = '\0';
          cVar59 = '\0';
          cVar61 = '\0';
          cVar63 = '\0';
          cVar65 = '\0';
          cVar67 = '\0';
          cVar69 = '\0';
          cVar71 = '\0';
          cVar73 = '\0';
          cVar75 = '\0';
          cVar77 = '\0';
          cVar79 = '\0';
          auVar82 = ZEXT416(uVar32 & 0xff);
          do {
            pcVar2 = pcVar6 + uVar36;
            auVar43[0] = auVar82[0] + (*pcVar2 == -1);
            auVar43[1] = auVar82[1] + (pcVar2[1] == -1);
            auVar43[2] = auVar82[2] + (pcVar2[2] == -1);
            auVar43[3] = auVar82[3] + (pcVar2[3] == -1);
            auVar43[4] = auVar82[4] + (pcVar2[4] == -1);
            auVar43[5] = auVar82[5] + (pcVar2[5] == -1);
            auVar43[6] = auVar82[6] + (pcVar2[6] == -1);
            auVar43[7] = auVar82[7] + (pcVar2[7] == -1);
            auVar43[8] = auVar82[8] + (pcVar2[8] == -1);
            auVar43[9] = auVar82[9] + (pcVar2[9] == -1);
            auVar43[10] = auVar82[10] + (pcVar2[10] == -1);
            auVar43[0xb] = auVar82[0xb] + (pcVar2[0xb] == -1);
            auVar43[0xc] = auVar82[0xc] + (pcVar2[0xc] == -1);
            auVar43[0xd] = auVar82[0xd] + (pcVar2[0xd] == -1);
            auVar43[0xe] = auVar82[0xe] + (pcVar2[0xe] == -1);
            auVar43[0xf] = auVar82[0xf] + (pcVar2[0xf] == -1);
            cVar47 = cVar47 + (*pcVar2 == cVar11);
            cVar51 = cVar51 + (pcVar2[1] == cVar115);
            cVar53 = cVar53 + (pcVar2[2] == cVar116);
            cVar55 = cVar55 + (pcVar2[3] == cVar117);
            cVar57 = cVar57 + (pcVar2[4] == cVar118);
            cVar59 = cVar59 + (pcVar2[5] == cVar119);
            cVar61 = cVar61 + (pcVar2[6] == cVar120);
            cVar63 = cVar63 + (pcVar2[7] == cVar121);
            cVar65 = cVar65 + (pcVar2[8] == cVar122);
            cVar67 = cVar67 + (pcVar2[9] == cVar123);
            cVar69 = cVar69 + (pcVar2[10] == cVar124);
            cVar71 = cVar71 + (pcVar2[0xb] == cVar125);
            cVar73 = cVar73 + (pcVar2[0xc] == cVar126);
            cVar75 = cVar75 + (pcVar2[0xd] == cVar127);
            cVar77 = cVar77 + (pcVar2[0xe] == cVar128);
            cVar79 = cVar79 + (pcVar2[0xf] == cVar129);
            uVar36 = uVar36 + 0x10;
            auVar82 = auVar43;
          } while (uVar24 != uVar36);
          auVar81[0] = cVar65 + cVar47;
          auVar81[1] = cVar67 + cVar51;
          auVar81[2] = cVar69 + cVar53;
          auVar81[3] = cVar71 + cVar55;
          auVar81[4] = cVar73 + cVar57;
          auVar81[5] = cVar75 + cVar59;
          auVar81[6] = cVar77 + cVar61;
          auVar81[7] = cVar79 + cVar63;
          auVar81[8] = cVar65 * '\x02';
          auVar81[9] = cVar67 * '\x02';
          auVar81[10] = cVar69 * '\x02';
          auVar81[0xb] = cVar71 * '\x02';
          auVar81[0xc] = cVar73 * '\x02';
          auVar81[0xd] = cVar75 * '\x02';
          auVar81[0xe] = cVar77 * '\x02';
          auVar81[0xf] = cVar79 * '\x02';
          auVar82 = psadbw(auVar81,(undefined1  [16])0x0);
          uVar25 = auVar82._0_4_;
          cVar47 = auVar82[0];
          auVar49[0] = auVar43[8] + auVar43[0];
          auVar49[1] = auVar43[9] + auVar43[1];
          auVar49[2] = auVar43[10] + auVar43[2];
          auVar49[3] = auVar43[0xb] + auVar43[3];
          auVar49[4] = auVar43[0xc] + auVar43[4];
          auVar49[5] = auVar43[0xd] + auVar43[5];
          auVar49[6] = auVar43[0xe] + auVar43[6];
          auVar49[7] = auVar43[0xf] + auVar43[7];
          auVar49[8] = auVar43[8] * '\x02';
          auVar49[9] = auVar43[9] * '\x02';
          auVar49[10] = auVar43[10] * '\x02';
          auVar49[0xb] = auVar43[0xb] * '\x02';
          auVar49[0xc] = auVar43[0xc] * '\x02';
          auVar49[0xd] = auVar43[0xd] * '\x02';
          auVar49[0xe] = auVar43[0xe] * '\x02';
          auVar49[0xf] = auVar43[0xf] * '\x02';
          auVar82 = psadbw(auVar49,(undefined1  [16])0x0);
          uVar32 = auVar82._0_4_;
          cVar51 = auVar82[0];
          if (uVar38 == uVar24) goto LAB_0d238a10;
        }
LAB_0d238f0f:
        do {
          if (*pcVar34 == '\x01') {
            uVar25 = (uint)(byte)((char)uVar25 + 1);
          }
          else if (*pcVar34 == -1) {
            uVar32 = (uint)(byte)((char)uVar32 + 1);
          }
          cVar51 = (char)uVar32;
          cVar47 = (char)uVar25;
          pcVar34 = pcVar34 + 1;
        } while (pcVar34 != pcVar7);
      }
LAB_0d238a10:
      bVar13 = -((char)(cVar47 - cVar51) < '\x01') | 1;
      bVar12 = 0;
      if ('\0' < cVar51) {
        bVar12 = bVar13;
      }
      if ('\0' < cVar47) {
        bVar12 = bVar13;
      }
      param_12[9] = (long)pcVar6;
      lVar26 = *param_12;
      lVar31 = *(long *)(param_28 + lVar26 * 0x18);
      lVar19 = *(long *)(param_28 + 8 + lVar26 * 0x18);
      if (lVar31 == lVar19) {
        pauVar3 = (undefined1 (*) [16])(param_28 + lVar26 * 0x18);
        iVar27 = *param_9;
        uVar24 = (ulong)iVar27;
        uVar38 = *(ulong *)pauVar3[1];
        if (uVar38 - lVar31 < uVar24) {
          if (lVar31 != 0) {
            *(long *)(*pauVar3 + 8) = lVar31;
            func_0x0412a280();
            *pauVar3 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar3[1] = 0;
            uVar38 = 0;
          }
          if (iVar27 < 0) goto LAB_0d2391a3;
          uVar36 = uVar38 * 2;
          if (uVar38 * 2 <= uVar24) {
            uVar36 = uVar24;
          }
          if (0x3ffffffffffffffe < uVar38) {
            uVar36 = 0x7fffffffffffffff;
          }
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36);
          if (lVar19 == 0) {
            func_0x0eec74c0(uVar36,0);
          }
          *(long *)*pauVar3 = lVar19;
          *(ulong *)pauVar3[1] = uVar36 + lVar19;
          lVar31 = lVar19;
LAB_0d238afc:
          func_0x0eee2dd0(lVar19,0,uVar24);
          lVar26 = lVar19;
        }
        else {
          lVar26 = lVar31;
          if (iVar27 != 0) goto LAB_0d238afc;
        }
        *(ulong *)(*pauVar3 + 8) = lVar26 + uVar24;
      }
      *(byte *)(lVar31 + lVar30) = bVar12;
      unaff_R14 = param_12;
    }
    uVar4 = *(ushort *)(*param_15 + (ulong)*(byte *)(param_15 + 1) * 2);
    param_4 = (uint)uVar4;
    if (uVar4 == 0xffff) {
LAB_0d238cc0:
      bVar12 = 0;
      goto LAB_0d238cc8;
    }
    param_3 = *(long **)(in_stack_00000120 + 0x380);
    in_RAX = *(long **)(in_stack_00000120 + 0x388);
    if ((long)in_RAX - (long)param_3 == 0) goto LAB_0d238cc0;
    uVar38 = (long)in_RAX - (long)param_3 >> 3;
    plVar28 = in_RAX;
    while( true ) {
      uVar24 = uVar38 >> 1;
      param_2 = param_3 + uVar24;
      if (uVar4 <= *(ushort *)(param_3[uVar24] + 0x168)) break;
      param_3 = param_2 + 1;
      uVar24 = ~uVar24 + uVar38;
      param_2 = plVar28;
joined_r0x0d238b93:
      plVar28 = param_2;
      uVar38 = uVar24;
      if (uVar38 == 0) goto LAB_0d238cc0;
    }
    if (uVar4 < *(ushort *)(param_3[uVar24] + 0x168)) goto joined_r0x0d238b93;
    if (uVar38 != 1) {
      do {
        uVar38 = uVar24 >> 1;
        if (*(ushort *)(param_3[uVar38] + 0x168) < uVar4) {
          param_3 = param_3 + uVar38 + 1;
          uVar38 = ~uVar38 + uVar24;
        }
        uVar24 = uVar38;
      } while (uVar38 != 0);
    }
    param_2 = param_2 + 1;
    if ((long)plVar28 - (long)param_2 != 0) {
      param_5 = (long)plVar28 - (long)param_2 >> 3;
      goto LAB_0d238bf8;
    }
  } while( true );
}


