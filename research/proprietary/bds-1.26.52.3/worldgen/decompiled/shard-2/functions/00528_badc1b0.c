/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbbdc1b0 (ELF vaddr 0xbadc1b0)
 * Label: caller-of-callee
 * Body:  [[0bbdc1b0, 0bbdc2a9] [0bbdc2c3, 0bbdc31c] [0bbdc360, 0bbdc38a] [0bbdc3bf, 0bbdc407] [0bbdc57e, 0bbdc585] [0bbdc847, 0bbdc85b]]
 * Ghidra: FUN_0bbdc1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0bbdc1b0(ulong param_1,byte *param_2,undefined8 param_3,ulong param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  short sVar21;
  ulong uVar22;
  undefined4 uVar23;
  float extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  float fVar24;
  undefined1 auVar25 [16];
  byte *pbStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  ulong uStack_d0;
  byte *pbStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  byte *pbStack_40;
  byte *pbStack_38;
  
  param_4 = param_4 & 0xffffffff;
  cVar3 = func_0x04864260(param_3);
  if (cVar3 != '\0') {
    if ((*param_2 & 1) == 0) {
      pbStack_e0 = param_2 + 1;
    }
    else {
      pbStack_e0 = *(byte **)(param_2 + 0x10);
    }
    uVar22 = 0;
    func_0x07230290(1,3,0,&UNK_0146e70c,&pbStack_e0);
    goto LAB_0bbdc847;
  }
  cVar3 = func_0x0b5f94a0(param_2,0,1,0);
  if (cVar3 == '\0') {
    if ((*param_2 & 1) == 0) {
      pbStack_e0 = param_2 + 1;
    }
    else {
      pbStack_e0 = *(byte **)(param_2 + 0x10);
    }
    uVar22 = 0;
    func_0x09b53520(1,3,0,&UNK_012ff7a8,&pbStack_e0);
    goto LAB_0bbdc847;
  }
  uVar13 = func_0x048648e0(param_3,&UNK_0142a5c6);
  bVar4 = func_0x0bbdbef0(uVar13);
  uStack_68 = func_0x048648e0(param_3,&UNK_013747db);
  cVar3 = func_0x04864260(uStack_68);
  if (cVar3 != '\0') {
    if ((*param_2 & 1) == 0) {
      pbStack_e0 = param_2 + 1;
    }
    else {
      pbStack_e0 = *(byte **)(param_2 + 0x10);
    }
    uVar22 = 0;
    func_0x06cfb620(1,3,0,&UNK_01335441,&pbStack_e0);
    goto LAB_0bbdc847;
  }
  uVar22 = (ulong)bVar4;
  sVar21 = (short)param_4;
  uStack_a0 = param_1;
  switch(uVar22) {
  case 0:
    cVar5 = func_0x04863800(uStack_68);
    cVar3 = '\x02';
    if (cVar5 != '\x01') goto code_r0x0bbdc337;
    goto code_r0x0bbdc38b;
  case 1:
    cVar3 = func_0x04863800(uStack_68);
    if (cVar3 == '\x03') goto code_r0x0bbdc371;
    break;
  case 2:
    cVar3 = func_0x04863800(uStack_68);
    if (cVar3 == '\x05') goto code_r0x0bbdc371;
    break;
  case 3:
    cVar3 = '\x04';
code_r0x0bbdc337:
    cVar5 = func_0x04863800(uStack_68);
    if (cVar5 != cVar3) break;
    goto code_r0x0bbdc371;
  }
  cVar3 = func_0x04863800(uStack_68);
  if (cVar3 != '\x04') {
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    if (bVar4 < 4) {
      pbVar20 = &UNK_01c6d904 + *(int *)(&UNK_01c6d904 + uVar22 * 4);
    }
    else {
      pbVar20 = &UNK_01c6ce58;
    }
    if ((*pbVar20 & 1) == 0) {
      pbVar20 = pbVar20 + 1;
    }
    else {
      pbVar20 = *(byte **)(pbVar20 + 0x10);
    }
    func_0x0bbde980(param_2,pbVar20);
    uVar22 = 0;
    goto LAB_0bbdc847;
  }
code_r0x0bbdc371:
  switch(uVar22) {
  case 0:
code_r0x0bbdc38b:
    uVar13 = func_0x048648e0(param_3,&UNK_011a11b7);
    cVar3 = func_0x04864260(uVar13);
    if (cVar3 == '\0') {
      cVar3 = func_0x04864270(uVar13);
      if (cVar3 != '\0') {
        iVar7 = func_0x048641f0(uVar13);
        if (iVar7 != 2) {
          if ((*param_2 & 1) == 0) {
            pbStack_e0 = param_2 + 1;
          }
          else {
            pbStack_e0 = *(byte **)(param_2 + 0x10);
          }
          uVar22 = 0;
          func_0x0bbd52c0(1,3,0,&UNK_013a0b2b,&pbStack_e0);
          goto LAB_0bbdc847;
        }
        uVar14 = func_0x04864650(uVar13,0);
        uVar13 = func_0x04864650(uVar13,1);
        cVar3 = func_0x04863800(uVar14);
        if (((cVar3 != '\x01') && (cVar3 = func_0x04863800(uVar14), cVar3 != '\x02')) ||
           ((cVar3 = func_0x04863800(uVar13), cVar3 != '\x01' &&
            (cVar3 = func_0x04863800(uVar13), cVar3 != '\x02')))) {
          if ((*param_2 & 1) == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = *(byte **)(param_2 + 0x10);
          }
          puVar17 = &UNK_01c6cde1;
code_r0x0bbdcc1a:
          func_0x0bbdd710(param_2,puVar17);
          uVar22 = 0;
          goto LAB_0bbdc847;
        }
        iVar7 = func_0x04863e00(uVar14,0);
        iVar8 = func_0x04863e00(uVar13,0);
        uVar13 = uStack_68;
        if (iVar8 <= iVar7) {
code_r0x0bbdcb5e:
          if ((*param_2 & 1) == 0) {
            pbStack_e0 = param_2 + 1;
          }
          else {
            pbStack_e0 = *(byte **)(param_2 + 0x10);
          }
          uVar22 = 0;
          func_0x072305b0(1,3,0,&UNK_0121768f,&pbStack_e0);
          goto LAB_0bbdc847;
        }
        cVar3 = func_0x04863800(uStack_68);
        if (cVar3 != '\x04') {
          iVar10 = func_0x04863e00(uVar13,0);
          param_4 = uStack_a0;
          if (iVar10 < iVar7 || iVar8 < iVar10) {
            if ((*param_2 & 1) == 0) {
              pbVar20 = param_2 + 1;
            }
            else {
              pbVar20 = *(byte **)(param_2 + 0x10);
            }
            func_0x0bbddc50(pbVar20,iVar10,iVar7,iVar8);
          }
          iVar11 = iVar7;
          if (iVar7 < iVar10) {
            iVar11 = iVar10;
          }
          if (iVar8 < iVar10) {
            iVar11 = iVar8;
          }
          func_0x0bbd7ee0(param_4,param_2,param_5,iVar11,iVar7,iVar8);
          goto code_r0x0bbdca4e;
        }
        uStack_98 = 0;
        uStack_90 = 0;
        func_0x04160690(&puStack_b8,&UNK_01254d89);
        uVar15 = uStack_a0;
        func_0x04863cb0(&pbStack_e0,uStack_68,&puStack_b8);
        uVar9 = func_0x0bbdd8a0(&uStack_98,&pbStack_e0,(int)sVar21);
        uVar22 = (ulong)uVar9;
        if (((ulong)pbStack_e0 & 1) != 0) {
          func_0x0412a280(uStack_d0,(ulong)pbStack_e0 & 0xfffffffffffffffe);
        }
        if (((ulong)puStack_b8 & 1) != 0) {
          func_0x0412a280(puStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
        }
        if ((char)uVar9 != '\0') {
          uVar16 = func_0x0bbddbc0(&uStack_98);
          if (uVar16 >> 0x20 == 0) {
            func_0x0bbd9400(uVar15,param_2,param_5,&uStack_98,iVar7,iVar8);
          }
          else {
            iVar11 = (int)((float)uVar16 + _DAT_011986e8);
            iVar10 = iVar7;
            if (iVar7 < iVar11) {
              iVar10 = iVar11;
            }
            if (iVar8 < iVar11) {
              iVar10 = iVar8;
            }
            func_0x0bbd7ee0(uVar15,param_2,param_5,iVar10,iVar7,iVar8);
          }
        }
        break;
      }
code_r0x0bbdc7ea:
      if ((*param_2 & 1) == 0) {
        pbStack_e0 = param_2 + 1;
      }
      else {
        pbStack_e0 = *(byte **)(param_2 + 0x10);
      }
      puVar17 = &UNK_0133540c;
    }
    else {
      if ((*param_2 & 1) == 0) goto code_r0x0bbdc56a;
code_r0x0bbdc3b6:
      pbStack_e0 = *(byte **)(param_2 + 0x10);
code_r0x0bbdc56d:
      puVar17 = &UNK_012cc51b;
    }
    uVar22 = 0;
    func_0x04b0ace0(1,3,0,puVar17,&pbStack_e0);
    goto LAB_0bbdc847;
  case 1:
    uVar13 = func_0x048648e0(param_3,&UNK_011a11b7);
    cVar3 = func_0x04864260(uVar13);
    if (cVar3 != '\0') {
      if ((*param_2 & 1) != 0) goto code_r0x0bbdc3b6;
code_r0x0bbdc56a:
      pbStack_e0 = param_2 + 1;
      goto code_r0x0bbdc56d;
    }
    cVar3 = func_0x04864270(uVar13);
    if (cVar3 == '\0') goto code_r0x0bbdc7ea;
    iVar7 = func_0x048641f0(uVar13);
    if (iVar7 != 2) {
      if ((*param_2 & 1) == 0) {
        pbStack_e0 = param_2 + 1;
      }
      else {
        pbStack_e0 = *(byte **)(param_2 + 0x10);
      }
      uVar22 = 0;
      func_0x0bbdddf0(1,3,0,&UNK_01385dd5,&pbStack_e0);
      goto LAB_0bbdc847;
    }
    uVar14 = func_0x04864650(uVar13,0);
    uVar13 = func_0x04864650(uVar13,1);
    cVar3 = func_0x04863800(uVar14);
    if ((cVar3 != '\x03') || (cVar3 = func_0x04863800(uVar13), cVar3 != '\x03')) {
      if ((*param_2 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
      }
      puVar17 = &UNK_01c6cdf9;
      goto code_r0x0bbdcc1a;
    }
    uVar23 = func_0x04863f80(uVar14);
    pbStack_80 = (byte *)CONCAT44(pbStack_80._4_4_,uVar23);
    uStack_58 = func_0x04863f80(uVar13);
    uVar13 = uStack_68;
    if ((float)uStack_58 <= pbStack_80._0_4_) goto code_r0x0bbdcb5e;
    cVar3 = func_0x04863800(uStack_68);
    if (cVar3 != '\x04') {
      func_0x04863f80(uVar13);
      if ((extraout_XMM0_Da < pbStack_80._0_4_) ||
         (fVar24 = extraout_XMM0_Da, uVar9 = extraout_XMM0_Db, (float)uStack_58 < extraout_XMM0_Da))
      {
        if ((*param_2 & 1) == 0) {
          pbVar20 = param_2 + 1;
        }
        else {
          pbVar20 = *(byte **)(param_2 + 0x10);
        }
        uStack_68 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        uStack_60 = (int)extraout_XMM0_Qb;
        uStack_5c = (int)((ulong)extraout_XMM0_Qb >> 0x20);
        func_0x0bbddf80(pbVar20);
        fVar24 = (float)uStack_68;
        uVar9 = uStack_68._4_4_;
      }
      fVar12 = fVar24;
      if (fVar24 <= pbStack_80._0_4_) {
        fVar12 = pbStack_80._0_4_;
      }
      func_0x0bbd8280(CONCAT44(uStack_58._4_4_,
                               -(uint)((float)uStack_58 < fVar24) & (uint)(float)uStack_58) |
                      CONCAT44(~uStack_58._4_4_ & uVar9,
                               ~-(uint)((float)uStack_58 < fVar24) & (uint)fVar12),uStack_a0,param_2
                      ,param_5);
      goto code_r0x0bbdca4e;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    func_0x04160690(&puStack_b8,&UNK_01254d89);
    func_0x04863cb0(&pbStack_e0,uVar13,&puStack_b8);
    uVar9 = func_0x0bbdd8a0(&uStack_98,&pbStack_e0,(int)sVar21);
    uVar22 = (ulong)uVar9;
    if (((ulong)pbStack_e0 & 1) != 0) {
      func_0x0412a280(uStack_d0,(ulong)pbStack_e0 & 0xfffffffffffffffe);
    }
    if (((ulong)puStack_b8 & 1) != 0) {
      func_0x0412a280(puStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
    }
    if ((char)uVar9 != '\0') {
      uVar15 = func_0x0bbddbc0(&uStack_98);
      if (uVar15 >> 0x20 == 0) {
        func_0x0bbd9820(uStack_a0,param_2,param_5,&uStack_98);
      }
      else {
        fVar12 = (float)uVar15;
        fVar24 = fVar12;
        if (fVar12 <= pbStack_80._0_4_) {
          fVar24 = pbStack_80._0_4_;
        }
        func_0x0bbd8280(CONCAT44(uStack_58._4_4_,
                                 -(uint)((float)uStack_58 < fVar12) & (uint)(float)uStack_58) |
                        (ulong)(~-(uint)((float)uStack_58 < fVar12) & (uint)fVar24),uStack_a0,
                        param_2,param_5);
      }
    }
    break;
  case 2:
    uVar13 = func_0x048648e0(param_3,&UNK_011a11b7);
    cVar3 = func_0x04864260(uVar13);
    uVar13 = uStack_68;
    if (cVar3 == '\0') {
      if ((*param_2 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
      }
      func_0x0bbde130(param_2,&UNK_01c6ce11);
      uVar22 = 0;
      goto LAB_0bbdc847;
    }
    cVar3 = func_0x04863800(uStack_68);
    if (cVar3 != '\x04') {
      uVar6 = func_0x04863ff0(uVar13,0);
      func_0x0bbd8630(uStack_a0,param_2,param_5,uVar6);
code_r0x0bbdca4e:
      uVar22 = CONCAT71((int7)(param_4 >> 8),1);
      goto LAB_0bbdc847;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    func_0x04160690(&puStack_b8,&UNK_01254d89);
    uVar15 = uStack_a0;
    func_0x04863cb0(&pbStack_e0,uVar13,&puStack_b8);
    uVar9 = func_0x0bbdd8a0(&uStack_98,&pbStack_e0,(int)sVar21);
    uVar22 = (ulong)uVar9;
    if (((ulong)pbStack_e0 & 1) != 0) {
      func_0x0412a280(uStack_d0,(ulong)pbStack_e0 & 0xfffffffffffffffe);
    }
    if (((ulong)puStack_b8 & 1) != 0) {
      func_0x0412a280(puStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
    }
    if ((char)uVar9 != '\0') {
      uVar16 = func_0x0bbddbc0(&uStack_98);
      if (uVar16 >> 0x20 == 0) {
        func_0x0bbd9c40(uVar15,param_2,param_5,&uStack_98);
      }
      else {
        func_0x0bbd8630(uVar15,param_2,param_5,(uVar16 & 0x7fffffff) != 0);
      }
    }
    break;
  case 3:
    uVar13 = func_0x04863ca0(uStack_68);
    uVar14 = func_0x048648e0(param_3,&UNK_011d18ec);
    cVar3 = func_0x04864260(uVar14);
    if ((cVar3 != '\0') || (cVar3 = func_0x04864270(uVar14), cVar3 == '\0')) {
      if ((*param_2 & 1) == 0) {
        pbStack_e0 = param_2 + 1;
      }
      else {
        pbStack_e0 = *(byte **)(param_2 + 0x10);
      }
      uVar22 = 0;
      func_0x06ef7140(1,3,0,&UNK_011e1cd4,&pbStack_e0);
      goto LAB_0bbdc847;
    }
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    func_0x04865530(&uStack_98,uVar14);
    uStack_58 = uVar13;
    func_0x048655b0(&uStack_78,uVar14);
    while( true ) {
      cVar3 = func_0x04862c80(&uStack_98,&uStack_78);
      if (cVar3 != '\0') break;
      uVar13 = func_0x04862b80(&uStack_98);
      cVar3 = func_0x04864260(uVar13);
      if ((cVar3 != '\0') || (cVar3 = func_0x04863800(uVar13), cVar3 != '\x04')) {
        if ((*param_2 & 1) == 0) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = *(byte **)(param_2 + 0x10);
        }
        func_0x0bbde5f0(param_2,&UNK_01c6ce41);
code_r0x0bbdcf1f:
        func_0x04862b40(&uStack_78);
        func_0x04862b40(&uStack_98);
        goto code_r0x0bbdcf33;
      }
      uVar13 = func_0x04863ca0(uVar13);
      func_0x0ee25020(&pbStack_e0,uVar13);
      puVar2 = puStack_b0;
      pbVar20 = pbStack_e0;
      uVar22 = uStack_d0;
      if ((bStack_d8 & 1) == 0) {
        uVar22 = (ulong)(bStack_d8 >> 1);
      }
      if (0x20 < uVar22) {
        if ((*param_2 & 1) == 0) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = *(byte **)(param_2 + 0x10);
        }
        pbVar20 = (byte *)&uStack_d7;
        if ((bStack_d8 & 1) != 0) {
          pbVar20 = pbStack_c8;
        }
        func_0x0bbde2c0(param_2,pbVar20);
code_r0x0bbdccec:
        if ((bStack_d8 & 1) != 0) {
          func_0x0412a280(pbStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
        }
        goto code_r0x0bbdcf1f;
      }
      pbVar18 = (byte *)&uStack_d7;
      if ((bStack_d8 & 1) != 0) {
        pbVar18 = pbStack_c8;
      }
      if ((uVar22 == 0) || (0x19 < (byte)((*pbVar18 & 0xdf) + 0xbf))) {
code_r0x0bbdcb3a:
        if ((*param_2 & 1) == 0) {
          pbStack_38 = param_2 + 1;
        }
        else {
          pbStack_38 = *(byte **)(param_2 + 0x10);
        }
        pbStack_40 = pbVar18;
        func_0x0bbde450(1,3,0,&UNK_0140810a,&pbStack_38,&pbStack_40);
        goto code_r0x0bbdccec;
      }
      puVar1 = puStack_b8;
      if (uVar22 != 1) {
        uVar15 = 1;
        do {
          bVar4 = pbVar18[uVar15];
          if (((bVar4 != 0x5f) && (9 < (byte)(bVar4 - 0x30))) &&
             (0x19 < (byte)((bVar4 & 0xdf) + 0xbf))) goto code_r0x0bbdcb3a;
          uVar15 = uVar15 + 1;
        } while (uVar22 != uVar15);
      }
      for (; pbStack_80 = pbVar18, puVar1 != puVar2; puVar1 = puVar1 + 5) {
        if ((byte *)*puVar1 == pbVar20) {
          if (((byte **)puVar1[4] == &pbStack_e0) && (puVar1 == puStack_c0)) {
code_r0x0bbdcca1:
            if ((*param_2 & 1) == 0) {
              pbStack_38 = param_2 + 1;
            }
            else {
              pbStack_38 = *(byte **)(param_2 + 0x10);
            }
            pbStack_40 = pbStack_80;
            func_0x07167bb0(1,3,0,&UNK_0123202f,&pbStack_38,&pbStack_40);
            goto code_r0x0bbdccec;
          }
          bVar4 = *(byte *)(puVar1 + 1);
          if ((bVar4 & 1) == 0) {
            uVar15 = (ulong)(bVar4 >> 1);
          }
          else {
            uVar15 = puVar1[2];
          }
          if (uVar15 == uVar22) {
            if ((bVar4 & 1) == 0) {
              lVar19 = (long)puVar1 + 9;
            }
            else {
              lVar19 = puVar1[3];
            }
            iVar7 = func_0x0eee3000(lVar19,pbStack_80,uVar22);
            if (iVar7 == 0) {
              puVar1[4] = &pbStack_e0;
              puStack_c0 = puVar1;
              goto code_r0x0bbdcca1;
            }
          }
        }
        puVar1[4] = 0;
        pbVar18 = pbStack_80;
      }
      if (puVar2 < puStack_a8) {
        func_0x0ee24d30(puVar2,&pbStack_e0);
        puStack_b0 = puVar2 + 5;
      }
      else {
        puStack_b0 = (undefined8 *)func_0x04fa4bf0(&puStack_b8,&pbStack_e0);
      }
      if ((bStack_d8 & 1) != 0) {
        func_0x0412a280(pbStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
      }
      func_0x04862ba0(&uStack_98);
    }
    func_0x04862b40(&uStack_78);
    func_0x04862b40(&uStack_98);
    if (((long)puStack_b0 - (long)puStack_b8 >> 3) * -0x3333333333333333 - 2U < 0xf) {
      if (puStack_b0 != puStack_b8) {
        lVar19 = 0;
        uVar15 = 0;
        do {
          puVar2 = puStack_b8;
          func_0x0ee25020(&pbStack_e0,uStack_58);
          cVar3 = func_0x0ee24b80((long)puVar2 + lVar19,&pbStack_e0);
          if ((bStack_d8 & 1) != 0) {
            func_0x0412a280(pbStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
          }
          if (cVar3 != '\0') {
            uVar22 = CONCAT71((int7)(param_4 >> 8),1);
            func_0x0bbd8880(uStack_a0,param_2,param_5,uVar15,&puStack_b8);
            goto code_r0x0bbdcf36;
          }
          uVar15 = uVar15 + 1;
          lVar19 = lVar19 + 0x28;
        } while (uVar15 < (ulong)(((long)puStack_b0 - (long)puStack_b8 >> 3) * -0x3333333333333333))
        ;
      }
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x04160690(&uStack_98,&UNK_01254d89);
      func_0x04863cb0(&pbStack_e0,uStack_68,&uStack_98);
      uVar9 = func_0x0bbdd8a0(&uStack_78,&pbStack_e0,(int)sVar21);
      uVar22 = (ulong)uVar9;
      if (((ulong)pbStack_e0 & 1) == 0) {
        if ((uStack_98 & 1) != 0) goto code_r0x0bbdd0e3;
code_r0x0bbdcebd:
        if ((char)uVar9 == '\0') goto code_r0x0bbdd0ff;
code_r0x0bbdcec6:
        auVar25 = func_0x0bbde780(&uStack_78);
        if ((auVar25._8_8_ & 1) == 0) {
          func_0x0bbd9f10(uStack_a0,param_2,param_5,&uStack_78,&puStack_b8);
        }
        else {
          uVar13 = func_0x0bbd7e60(auVar25._0_8_,puStack_b8,puStack_b0,param_2);
          func_0x0bbd8880(uStack_a0,param_2,param_5,uVar13,&puStack_b8);
        }
      }
      else {
        func_0x0412a280(uStack_d0,(ulong)pbStack_e0 & 0xfffffffffffffffe);
        if ((uStack_98 & 1) == 0) goto code_r0x0bbdcebd;
code_r0x0bbdd0e3:
        func_0x0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
        if ((char)uVar9 != '\0') goto code_r0x0bbdcec6;
code_r0x0bbdd0ff:
        if ((*param_2 & 1) == 0) {
          pbStack_e0 = param_2 + 1;
        }
        else {
          pbStack_e0 = *(byte **)(param_2 + 0x10);
        }
        func_0x09f91650(1,3,0,&UNK_014a4251,&pbStack_e0);
      }
      func_0x04a8b170(&uStack_78);
    }
    else {
      if ((*param_2 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
      }
      func_0x0bbde7f0(param_2);
code_r0x0bbdcf33:
      uVar22 = 0;
    }
code_r0x0bbdcf36:
    FUN_04aa5c60(&puStack_b8);
    goto LAB_0bbdc847;
  default:
    uVar22 = 0;
    goto LAB_0bbdc847;
  }
  func_0x04a8b170(&uStack_98);
LAB_0bbdc847:
  return uVar22 & 0xffffffff;
}


