/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a6530 (ELF vaddr 0xd2a6530)
 * Label: caller-of-callee
 * Body:  [[0d3a6530, 0d3a6926] [0d3a6930, 0d3a6c1a] [0d3a6c20, 0d3a6f16] [0d3a6f20, 0d3a7221] [0d3a72c0, 0d3a72ec]]
 * Ghidra: FUN_0d3a6530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0d3a6530(int *param_1,undefined8 param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined *puVar2;
  code *pcVar3;
  ushort uVar4;
  int *piVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 uVar17;
  undefined *puVar18;
  char *pcVar19;
  ulong uVar20;
  byte bVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  char *pcVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char cStack_88;
  byte bStack_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  undefined8 uStack_70;
  ulong uStack_68;
  int *piStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar13 = func_0x048648e0(param_2,&UNK_013be16f);
  iVar10 = func_0x04863e00(uVar13,0);
  *param_1 = iVar10;
  uVar13 = func_0x048648e0(param_2,&UNK_013f199b);
  uVar9 = func_0x04863e00(uVar13,0);
  *(undefined2 *)(param_1 + 8) = uVar9;
  uVar13 = func_0x048648e0(param_2,&UNK_014c10a8);
  piStack_60 = param_1;
  func_0x04863740(param_1 + 10,uVar13);
  uVar13 = func_0x048648e0(param_2,&UNK_0148c422);
  bStack_80 = 0;
  uStack_7f = 0;
  func_0x04863cb0(&uStack_a0,uVar13,&bStack_80);
  pcVar14 = (char *)((ulong)uStack_a0 >> 1 & 0x7f);
  pcVar19 = (char *)((long)&uStack_a0 + 1);
  if (((ulong)uStack_a0 & 1) != 0) {
    pcVar14 = pcStack_98;
    pcVar19 = pcStack_90;
  }
  if (pcVar14 == (char *)0x11) {
    auVar29[0] = -(*pcVar19 == DAT_014e6b90);
    auVar29[1] = -(pcVar19[1] == UNK_014e6b91);
    auVar29[2] = -(pcVar19[2] == UNK_014e6b92);
    auVar29[3] = -(pcVar19[3] == UNK_014e6b93);
    auVar29[4] = -(pcVar19[4] == UNK_014e6b94);
    auVar29[5] = -(pcVar19[5] == UNK_014e6b95);
    auVar29[6] = -(pcVar19[6] == UNK_014e6b96);
    auVar29[7] = -(pcVar19[7] == UNK_014e6b97);
    auVar29[8] = -(pcVar19[8] == UNK_014e6b98);
    auVar29[9] = -(pcVar19[9] == UNK_014e6b99);
    auVar29[10] = -(pcVar19[10] == UNK_014e6b9a);
    auVar29[0xb] = -(pcVar19[0xb] == UNK_014e6b9b);
    auVar29[0xc] = -(pcVar19[0xc] == UNK_014e6b9c);
    auVar29[0xd] = -(pcVar19[0xd] == UNK_014e6b9d);
    auVar29[0xe] = -(pcVar19[0xe] == UNK_014e6b9e);
    auVar29[0xf] = -(pcVar19[0xf] == UNK_014e6b9f);
    auVar30[0] = -(pcVar19[0x10] == DAT_014e70b0);
    auVar30[1] = -(UNK_014e70b1 == '\0');
    auVar30[2] = -(UNK_014e70b2 == '\0');
    auVar30[3] = -(UNK_014e70b3 == '\0');
    auVar30[4] = -(UNK_014e70b4 == '\0');
    auVar30[5] = -(UNK_014e70b5 == '\0');
    auVar30[6] = -(UNK_014e70b6 == '\0');
    auVar30[7] = -(UNK_014e70b7 == '\0');
    auVar30[8] = -(UNK_014e70b8 == '\0');
    auVar30[9] = -(UNK_014e70b9 == '\0');
    auVar30[10] = -(UNK_014e70ba == '\0');
    auVar30[0xb] = -(UNK_014e70bb == '\0');
    auVar30[0xc] = -(UNK_014e70bc == '\0');
    auVar30[0xd] = -(UNK_014e70bd == '\0');
    auVar30[0xe] = -(UNK_014e70be == '\0');
    auVar30[0xf] = -(UNK_014e70bf == '\0');
    auVar30 = auVar30 & auVar29;
    uVar4 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
    pcVar19 = (char *)(ulong)uVar4;
    if (uVar4 != 0xffff) goto LAB_0d3a6644;
    uVar17 = 1;
    uVar8 = 1;
    bVar21 = 0;
  }
  else {
    if (pcVar14 == &DAT_00000010) {
      auVar28[0] = -(*pcVar19 == DAT_014e45d0);
      auVar28[1] = -(pcVar19[1] == UNK_014e45d1);
      auVar28[2] = -(pcVar19[2] == UNK_014e45d2);
      auVar28[3] = -(pcVar19[3] == UNK_014e45d3);
      auVar28[4] = -(pcVar19[4] == UNK_014e45d4);
      auVar28[5] = -(pcVar19[5] == UNK_014e45d5);
      auVar28[6] = -(pcVar19[6] == UNK_014e45d6);
      auVar28[7] = -(pcVar19[7] == UNK_014e45d7);
      auVar28[8] = -(pcVar19[8] == UNK_014e45d8);
      auVar28[9] = -(pcVar19[9] == UNK_014e45d9);
      auVar28[10] = -(pcVar19[10] == UNK_014e45da);
      auVar28[0xb] = -(pcVar19[0xb] == UNK_014e45db);
      auVar28[0xc] = -(pcVar19[0xc] == UNK_014e45dc);
      auVar28[0xd] = -(pcVar19[0xd] == UNK_014e45dd);
      auVar28[0xe] = -(pcVar19[0xe] == UNK_014e45de);
      auVar28[0xf] = -(pcVar19[0xf] == UNK_014e45df);
      pcVar19 = (char *)(ulong)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(auVar28[0xf] >> 7) << 0xf);
    }
LAB_0d3a6644:
    bVar21 = 1;
    uVar17 = 0;
    uVar8 = 0;
  }
  if (((ulong)uStack_a0 & 1) != 0) {
    func_0x0412a280(pcStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe,pcVar14,pcVar19);
    uVar8 = uVar17;
  }
  if ((bStack_80 & 1) != 0) {
    func_0x0412a280(uStack_70,CONCAT62(uStack_7e,CONCAT11(uStack_7f,bStack_80)) & 0xfffffffffffffffe
                   );
  }
  *(undefined1 *)(piStack_60 + 0xe) = uVar8;
  *(undefined8 *)(piStack_60 + 4) = *(undefined8 *)(piStack_60 + 2);
  iVar10 = *piStack_60;
  if (3 < iVar10) {
    if (iVar10 == 6) {
      cVar6 = func_0x04865100(param_2,&UNK_01283713);
      if (cVar6 == '\0') goto LAB_0d3a6dd6;
      uVar13 = func_0x048648e0(param_2,&UNK_01283713);
      puVar22 = (undefined *)(param_3 + 0x50);
      puVar18 = puVar22;
      if ((*(char *)(param_3 + 0x77) == '\0') &&
         (((puVar2 = (undefined *)(param_3 + 0x70), *(char *)(param_3 + 0x68) != '\0' ||
           (puVar18 = puVar2, (*(byte *)(param_3 + 0x56) & 1) != 0)) &&
          (cVar6 = func_0x04fa7a10(puVar2,puVar22), puVar18 = puVar22, cVar6 != '\0')))) {
        puVar18 = puVar2;
      }
      puVar22 = &DAT_0f72b850;
      if (((puVar18[6] | puVar18[0x18]) & 1) != 0) {
        puVar22 = puVar18;
      }
      if ((DAT_0f5a2858 == '\0') && (puVar22[0x18] == '\0')) {
        bVar7 = 1;
        if (((DAT_0f5a2846 & 1) != 0) && (puVar22[7] == '\0')) {
          bVar7 = func_0x04fa7a10(puVar22,0xf5a2840);
          bVar7 = bVar7 ^ 1;
        }
        if ((bVar21 & bVar7) != 1) goto LAB_0d3a6bf2;
        uVar15 = func_0x04864650(uVar13,0);
        cVar6 = func_0x04865100(uVar15,&UNK_01488ede);
        if ((cVar6 != '\0') && (cVar6 = func_0x04865100(uVar15,&UNK_011d1a34), cVar6 != '\0')) {
          lVar25 = func_0x0d3a6250(uVar15);
          uVar15 = func_0x048648e0(uVar15,&UNK_011d1a34);
          iVar10 = func_0x04863e00(uVar15,0);
          lVar16 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
          if ((iVar10 == 0x40) && (lVar25 == lVar16)) goto LAB_0d3a6bf2;
        }
        uVar15 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
        pcStack_c0 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (pcStack_c0 == (char *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        pcVar19 = pcStack_c0 + 0x10;
        *(undefined8 *)pcStack_c0 = uVar15;
        pcStack_c0[8] = '@';
        pcStack_c0[9] = '\0';
        pcStack_c0[10] = '\0';
        pcStack_c0[0xb] = '\0';
      }
      else {
LAB_0d3a6bf2:
        pcStack_c0 = (char *)0x0;
        pcVar19 = (char *)0x0;
      }
      func_0x04865530(&uStack_a0,uVar13);
      func_0x048655b0(&bStack_80,uVar13);
      pcStack_b8 = pcVar19;
      while (cVar6 = func_0x04862c80(&uStack_a0,&bStack_80), cVar6 == '\0') {
        uVar13 = func_0x04862b80(&uStack_a0);
        cVar6 = func_0x04865100(uVar13,&UNK_01488ede);
        if ((cVar6 == '\0') || (cVar6 = func_0x04865100(uVar13,&UNK_011d1a34), cVar6 == '\0'))
        goto LAB_0d3a6dab;
        uVar15 = func_0x0d3a6250(uVar13);
        uVar13 = func_0x048648e0(uVar13,&UNK_011d1a34);
        uVar11 = func_0x04863e00(uVar13,0);
        if (pcVar19 < pcStack_b8) {
          *(undefined8 *)pcVar19 = uVar15;
          *(undefined4 *)(pcVar19 + 8) = uVar11;
          pcVar14 = pcStack_c0;
        }
        else {
          lVar25 = (long)pcVar19 - (long)pcStack_c0;
          pcVar14 = (char *)(lVar25 >> 4);
          pcVar19 = pcVar14 + 1;
          if ((char *)0xfffffffffffffff < pcVar19) goto LAB_0d3a7201;
          uVar26 = (long)pcStack_b8 - (long)pcStack_c0;
          pcVar27 = (char *)((long)uVar26 >> 3);
          if ((char *)((long)uVar26 >> 3) <= pcVar19) {
            pcVar27 = pcVar19;
          }
          if (0x7fffffffffffffef < uVar26) {
            pcVar27 = (char *)0xfffffffffffffff;
          }
          if ((char *)0xfffffffffffffff < pcVar27) goto LAB_0d3a7206;
          lVar24 = (long)pcVar27 * 0x10;
          lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
          if (lVar16 == 0) {
            func_0x0eec74c0(lVar24,0);
          }
          pcStack_b8 = (char *)(lVar24 + lVar16);
          *(undefined8 *)(lVar16 + lVar25) = uVar15;
          *(undefined4 *)(lVar16 + 8 + lVar25) = uVar11;
          pcVar19 = (char *)(lVar25 + lVar16);
          pcVar14 = (char *)(lVar25 + lVar16 + (long)pcVar14 * -0x10);
          func_0x0eee2f00(pcVar14,pcStack_c0);
          if (pcStack_c0 != (char *)0x0) {
            func_0x0412a280(pcStack_c0,uVar26);
          }
        }
        pcVar19 = pcVar19 + 0x10;
        func_0x04862ba0(&uStack_a0);
        pcStack_c0 = pcVar14;
      }
    }
    else {
      if (iVar10 != 5) {
        if (iVar10 != 4) goto LAB_0d3a6ddd;
        cVar6 = func_0x04865100(param_2,&UNK_01283713);
        if (cVar6 == '\0') {
          uStack_a0 = (char *)((ulong)uStack_a0 & 0xffffffffffffff00);
          cStack_88 = '\0';
        }
        else {
          uStack_58 = func_0x048648e0(param_2,&UNK_01283713);
          puVar22 = (undefined *)(param_3 + 0x50);
          puVar18 = puVar22;
          if ((*(char *)(param_3 + 0x77) == '\0') &&
             (((puVar2 = (undefined *)(param_3 + 0x70), *(char *)(param_3 + 0x68) != '\0' ||
               (puVar18 = puVar2, (*(byte *)(param_3 + 0x56) & 1) != 0)) &&
              (cVar6 = func_0x04fa7a10(puVar2,puVar22), puVar18 = puVar22, cVar6 != '\0')))) {
            puVar18 = puVar2;
          }
          puVar22 = &DAT_0f72b850;
          if (((puVar18[6] | puVar18[0x18]) & 1) != 0) {
            puVar22 = puVar18;
          }
          if (((DAT_0f5a2858 == '\0') && (puVar22[0x18] == '\0')) &&
             (((DAT_0f5a2846 & 1) == 0 ||
              ((puVar22[7] != '\0' || (cVar6 = func_0x04fa7a10(puVar22,0xf5a2840), cVar6 == '\0'))))
             )) {
            uVar13 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
            pcVar14 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
            if (pcVar14 == (char *)0x0) {
              func_0x0eec74c0(0x10,0);
            }
            pcStack_b0 = pcVar14 + 0x10;
            *(undefined8 *)pcVar14 = uVar13;
            pcVar14[8] = '@';
            pcVar14[9] = '\0';
            pcVar14[10] = '\0';
            pcVar14[0xb] = '\0';
          }
          else {
            pcVar14 = (char *)0x0;
            pcStack_b0 = (char *)0x0;
          }
          uStack_40 = func_0x0cc41df0(0xf6ff9e0,0xf710f98,1);
          uVar13 = uStack_58;
          func_0x04865530(&bStack_80,uStack_58);
          func_0x048655b0(auStack_50,uVar13);
          uStack_68 = 0;
          pcVar19 = pcStack_b0;
          while( true ) {
            cVar6 = func_0x04862c80(&bStack_80,auStack_50);
            if (cVar6 != '\0') break;
            uVar13 = func_0x04862b80(&bStack_80);
            cVar6 = func_0x04865100(uVar13,&UNK_014daf09);
            if (cVar6 != '\0') {
              uVar15 = func_0x048648e0(uVar13,&UNK_014daf09);
              iVar10 = func_0x04863e00(uVar15,0);
              if ((iVar10 != 0) || (cVar6 = func_0x04865100(uVar13,&UNK_01488ede), cVar6 != '\0'))
              goto LAB_0d3a6fb0;
              uStack_68 = uStack_68 + 1;
              uVar11 = 1;
              uVar15 = uStack_40;
              if (pcVar19 < pcStack_b0) goto LAB_0d3a6f20;
LAB_0d3a7014:
              lStack_38 = (long)pcVar19 - (long)pcVar14;
              lVar25 = lStack_38 >> 4;
              uVar26 = lVar25 + 1;
              if (uVar26 < 0x1000000000000000) {
                uVar20 = (long)pcStack_b0 - (long)pcVar14;
                uVar23 = (long)uVar20 >> 3;
                if ((ulong)((long)uVar20 >> 3) <= uVar26) {
                  uVar23 = uVar26;
                }
                if (0x7fffffffffffffef < uVar20) {
                  uVar23 = 0xfffffffffffffff;
                }
                if (uVar23 < 0x1000000000000000) {
                  lVar24 = uVar23 * 0x10;
                  lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
                  if (lVar16 == 0) {
                    func_0x0eec74c0(lVar24,0);
                  }
                  pcVar19 = (char *)(lVar16 + lStack_38);
                  pcStack_b0 = (char *)(lVar24 + lVar16);
                  *(undefined8 *)(lVar16 + lStack_38) = uVar15;
                  *(undefined4 *)(lVar16 + 8 + lStack_38) = uVar11;
                  pcVar27 = pcVar19 + lVar25 * -0x10;
                  func_0x0eee2f00(pcVar27,pcVar14);
                  if (pcVar14 != (char *)0x0) {
                    func_0x0412a280(pcVar14,uVar20);
                  }
                  goto LAB_0d3a6f26;
                }
              }
              else {
                func_0x0d3c6200();
              }
              func_0x04882eb0();
LAB_0d3a7201:
              func_0x0d3c6200();
LAB_0d3a7206:
              func_0x04882eb0();
              goto LAB_0d3a720b;
            }
LAB_0d3a6fb0:
            cVar6 = func_0x04865100(uVar13,&UNK_01488ede);
            if ((cVar6 == '\0') || (cVar6 = func_0x04865100(uVar13,&UNK_011d1a34), cVar6 == '\0')) {
              FUN_0d3a5e10(&uStack_a0,param_2,param_3);
              func_0x04862b40(auStack_50);
              func_0x04862b40(&bStack_80);
              goto joined_r0x0d3a719f;
            }
            uVar15 = func_0x0d3a6250(uVar13);
            uVar13 = func_0x048648e0(uVar13,&UNK_011d1a34);
            uVar11 = func_0x04863e00(uVar13,0);
            if (pcStack_b0 <= pcVar19) goto LAB_0d3a7014;
LAB_0d3a6f20:
            *(undefined8 *)pcVar19 = uVar15;
            *(undefined4 *)(pcVar19 + 8) = uVar11;
            pcVar27 = pcVar14;
LAB_0d3a6f26:
            pcVar19 = pcVar19 + 0x10;
            func_0x04862ba0(&bStack_80);
            pcVar14 = pcVar27;
          }
          func_0x04862b40(auStack_50);
          func_0x04862b40(&bStack_80);
          if ((uStack_68 == 0) || (uVar12 = func_0x048641f0(uStack_58), uStack_68 != uVar12)) {
            pcStack_90 = pcStack_b0;
            cStack_88 = '\x01';
            uStack_a0 = pcVar14;
            pcStack_98 = pcVar19;
          }
          else {
            uStack_a0 = (char *)((ulong)uStack_a0 & 0xffffffffffffff00);
            cStack_88 = '\0';
joined_r0x0d3a719f:
            if (pcVar14 != (char *)0x0) {
              func_0x0412a280(pcVar14,(long)pcStack_b0 - (long)pcVar14);
            }
          }
        }
        goto LAB_0d3a66a0;
      }
      cVar6 = func_0x04865100(param_2,&UNK_01283713);
      if (cVar6 == '\0') goto LAB_0d3a6dd6;
      uVar13 = func_0x048648e0(param_2,&UNK_01283713);
      puVar22 = (undefined *)(param_3 + 0x50);
      puVar18 = puVar22;
      if ((*(char *)(param_3 + 0x77) == '\0') &&
         (((puVar2 = (undefined *)(param_3 + 0x70), *(char *)(param_3 + 0x68) != '\0' ||
           (puVar18 = puVar2, (*(byte *)(param_3 + 0x56) & 1) != 0)) &&
          (cVar6 = func_0x04fa7a10(puVar2,puVar22), puVar18 = puVar22, cVar6 != '\0')))) {
        puVar18 = puVar2;
      }
      puVar22 = &DAT_0f72b850;
      if (((puVar18[6] | puVar18[0x18]) & 1) != 0) {
        puVar22 = puVar18;
      }
      if (((DAT_0f5a2858 == '\0') && (puVar22[0x18] == '\0')) &&
         (((DAT_0f5a2846 & 1) == 0 ||
          ((puVar22[7] != '\0' || (cVar6 = func_0x04fa7a10(puVar22,0xf5a2840), cVar6 == '\0')))))) {
        uVar15 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
        pcStack_c0 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (pcStack_c0 == (char *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        pcVar19 = pcStack_c0 + 0x10;
        *(undefined8 *)pcStack_c0 = uVar15;
        pcStack_c0[8] = '@';
        pcStack_c0[9] = '\0';
        pcStack_c0[10] = '\0';
        pcStack_c0[0xb] = '\0';
      }
      else {
        pcStack_c0 = (char *)0x0;
        pcVar19 = (char *)0x0;
      }
      func_0x04865530(&uStack_a0,uVar13);
      func_0x048655b0(&bStack_80,uVar13);
      pcStack_b8 = pcVar19;
      while( true ) {
        cVar6 = func_0x04862c80(&uStack_a0,&bStack_80);
        if (cVar6 != '\0') break;
        uVar13 = func_0x04862b80(&uStack_a0);
        cVar6 = func_0x04865100(uVar13,&UNK_01488ede);
        if ((cVar6 == '\0') || (cVar6 = func_0x04865100(uVar13,&UNK_011d1a34), cVar6 == '\0'))
        goto LAB_0d3a6dab;
        uVar15 = func_0x0d3a6250(uVar13);
        uVar13 = func_0x048648e0(uVar13,&UNK_011d1a34);
        uVar11 = func_0x04863e00(uVar13,0);
        if (pcVar19 < pcStack_b8) {
          *(undefined8 *)pcVar19 = uVar15;
          *(undefined4 *)(pcVar19 + 8) = uVar11;
          pcVar14 = pcStack_c0;
        }
        else {
          lVar25 = (long)pcVar19 - (long)pcStack_c0;
          pcVar14 = (char *)(lVar25 >> 4);
          pcVar19 = pcVar14 + 1;
          if ((char *)0xfffffffffffffff < pcVar19) goto LAB_0d3a7210;
          uVar26 = (long)pcStack_b8 - (long)pcStack_c0;
          pcVar27 = (char *)((long)uVar26 >> 3);
          if ((char *)((long)uVar26 >> 3) <= pcVar19) {
            pcVar27 = pcVar19;
          }
          if (0x7fffffffffffffef < uVar26) {
            pcVar27 = (char *)0xfffffffffffffff;
          }
          if ((char *)0xfffffffffffffff < pcVar27) goto LAB_0d3a720b;
          lVar24 = (long)pcVar27 * 0x10;
          lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
          if (lVar16 == 0) {
            func_0x0eec74c0(lVar24,0);
          }
          pcStack_b8 = (char *)(lVar24 + lVar16);
          *(undefined8 *)(lVar16 + lVar25) = uVar15;
          *(undefined4 *)(lVar16 + 8 + lVar25) = uVar11;
          pcVar19 = (char *)(lVar25 + lVar16);
          pcVar14 = (char *)(lVar25 + lVar16 + (long)pcVar14 * -0x10);
          func_0x0eee2f00(pcVar14,pcStack_c0);
          if (pcStack_c0 != (char *)0x0) {
            func_0x0412a280(pcStack_c0,uVar26);
          }
        }
        pcVar19 = pcVar19 + 0x10;
        func_0x04862ba0(&uStack_a0);
        pcStack_c0 = pcVar14;
      }
    }
    func_0x04862b40(&bStack_80);
    func_0x04862b40(&uStack_a0);
LAB_0d3a66bf:
    piVar5 = piStack_60;
    pauVar1 = (undefined1 (*) [16])(piStack_60 + 2);
    lVar25 = *(long *)*pauVar1;
    if (lVar25 != 0) {
      *(long *)(piStack_60 + 4) = lVar25;
      func_0x0412a280(lVar25,*(long *)(piStack_60 + 6) - lVar25);
      *pauVar1 = (undefined1  [16])0x0;
      piVar5[6] = 0;
      piVar5[7] = 0;
    }
    *(char **)(piVar5 + 2) = pcStack_c0;
    *(char **)(piVar5 + 4) = pcVar19;
    *(char **)(piVar5 + 6) = pcStack_b8;
    return true;
  }
  FUN_0d3a5e10(&uStack_a0,param_2,param_3);
LAB_0d3a66a0:
  if (cStack_88 != '\0') {
    pcStack_b8 = pcStack_90;
    pcVar19 = pcStack_98;
    pcStack_c0 = uStack_a0;
    goto LAB_0d3a66bf;
  }
LAB_0d3a6dd6:
  iVar10 = *piStack_60;
LAB_0d3a6ddd:
  return 5 < iVar10;
LAB_0d3a6dab:
  func_0x04862b40(&bStack_80);
  func_0x04862b40(&uStack_a0);
  if (pcStack_c0 != (char *)0x0) {
    func_0x0412a280(pcStack_c0,(long)pcStack_b8 - (long)pcStack_c0);
  }
  goto LAB_0d3a6dd6;
LAB_0d3a720b:
  func_0x04882eb0();
LAB_0d3a7210:
  uVar13 = func_0x0d3c6200();
  func_0x04862b40(&bStack_80);
  if (pcVar14 != (char *)0x0) {
    func_0x0412a280(pcVar14,(long)pcStack_b0 - (long)pcVar14);
  }
  func_0x0eee2d70(uVar13);
  pcVar3 = (code *)swi(3);
  uVar8 = (*pcVar3)();
  return (bool)uVar8;
}


