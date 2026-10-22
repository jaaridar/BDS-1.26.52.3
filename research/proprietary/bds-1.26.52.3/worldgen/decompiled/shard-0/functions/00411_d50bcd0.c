/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd60bcd0 (ELF vaddr 0xd50bcd0)
 * Label: caller-of-callee
 * Body:  [[0d60bcd0, 0d60be29] [0d60be30, 0d60beb7] [0d60bec0, 0d60bf59] [0d60bf60, 0d60bf86] [0d60bf90, 0d60c0a4] [0d60c0b0, 0d60c181] [0d60c190, 0d60c1c7] [0d60c1d0, 0d60c280] [0d60c290, 0d60c2b6] [0d60c2c0, 0d60c309] [0d60c310, 0d60c3e4] [0d60c3f0, 0d60c508] [0d60c510, 0d60c687] [0d60c690, 0d60c6a6] [0d60c6b0, 0d60c914] [0d60c920, 0d60c972] [0d60c980, 0d60ca27] [0d60ca76, 0d60cab5] [0d60cb14, 0d60cb48] [0d60cb84, 0d60cb96] [0d60cbb6, 0d60cbd5] [0d60cc44, 0d60cc4e] [0d60cc54, 0d60cc62] [0d60cc6a, 0d60cc99]]
 * Ghidra: FUN_0d60bcd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d60bcd0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint param_5,
                 byte *param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 ***pppuVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 **ppuVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong uVar24;
  int iVar25;
  undefined8 **ppuVar26;
  undefined1 auStack_138 [4];
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 *apuStack_80 [2];
  undefined8 *apuStack_70 [2];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar14 = *(undefined4 **)(param_2 + 8);
  lStack_d0 = param_2;
  lStack_c8 = param_3;
  uStack_b8 = param_4;
  lStack_40 = param_2;
  if (puVar14 < *(undefined4 **)(param_2 + 0x10)) {
    if ((*param_6 & 1) == 0) {
      *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(param_6 + 0x10);
      uVar7 = *(undefined4 *)(param_6 + 4);
      uVar8 = *(undefined4 *)(param_6 + 8);
      uVar9 = *(undefined4 *)(param_6 + 0xc);
      *puVar14 = *(undefined4 *)param_6;
      puVar14[1] = uVar7;
      puVar14[2] = uVar8;
      puVar14[3] = uVar9;
    }
    else {
      FUN_0412e5e0(puVar14,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 8));
    }
    puVar14 = puVar14 + 6;
    *(undefined4 **)(lStack_d0 + 8) = puVar14;
    param_2 = lStack_d0;
  }
  else {
    puVar14 = (undefined4 *)func_0x04909a40(param_2,param_6);
  }
  *(undefined4 **)(param_2 + 8) = puVar14;
  cVar13 = func_0x04864290(param_1);
  if (cVar13 == '\0') {
    puVar15 = &DAT_0f54fc40;
  }
  else {
    puVar15 = (undefined *)func_0x04864990(param_1,param_6);
    cVar13 = func_0x04864260(puVar15);
    if (cVar13 != '\0') {
      lVar16 = *(long *)(param_2 + 8);
      bVar2 = *(byte *)(lVar16 + -0x18);
      goto joined_r0x0d60c85a;
    }
  }
  cVar13 = func_0x04864270(puVar15);
  if (cVar13 == '\0') {
    func_0x0d5ef090(&uStack_e8,param_2);
    puStack_108 = (undefined8 *)0x0;
    puStack_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    uStack_58 = 0;
    ppuStack_60 = &puStack_108;
    apuStack_80[0] = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (apuStack_80[0] == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    puStack_f8 = apuStack_80[0] + 3;
    ppuStack_a8 = apuStack_70;
    ppuStack_a0 = apuStack_80;
    ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffffffffff00);
    uVar10 = uStack_e8 & 1;
    puStack_108 = apuStack_80[0];
    ppuStack_b0 = &puStack_108;
    apuStack_70[0] = apuStack_80[0];
    if ((uStack_e8 & 1) == 0) {
      apuStack_80[0][2] = puStack_d8;
      *apuStack_80[0] = CONCAT44(uStack_e4,uStack_e8);
      apuStack_80[0][1] = CONCAT44(uStack_dc,uStack_e0);
    }
    else {
      puStack_100 = apuStack_80[0];
      FUN_0412e5e0(apuStack_80[0],puStack_d8,CONCAT44(uStack_dc,uStack_e0));
    }
    puStack_100 = apuStack_80[0] + 3;
    _auStack_138 = (undefined8 *)&UNK_0f47cca0;
    uStack_130 = (undefined8 *)0x0;
    puStack_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    func_0x0488f040(&uStack_130,puStack_108,puStack_100,
                    ((long)puStack_100 - (long)puStack_108 >> 3) * -0x5555555555555555);
    uStack_118 = 0x200000009;
    _auStack_138 = (undefined8 *)&UNK_0f47b778;
    func_0x0d5eed10(uStack_b8,auStack_138);
    puVar18 = uStack_130;
    _auStack_138 = (undefined8 *)&UNK_0f47cca0;
    puVar22 = puStack_128;
    if (uStack_130 != (undefined8 *)0x0) {
      for (; puVar18 != puVar22; puVar22 = puVar22 + -3) {
        if ((*(byte *)(puVar22 + -3) & 1) != 0) {
          thunk_FUN_0ee326a0(puVar22[-1],puVar22[-3] & 0xfffffffffffffffe);
        }
      }
      puStack_128 = puVar18;
      thunk_FUN_0ee326a0(uStack_130,uStack_120 - (long)uStack_130);
    }
    puVar18 = puStack_108;
    puVar22 = puStack_100;
    if (puStack_108 != (undefined8 *)0x0) {
      for (; puVar18 != puVar22; puVar22 = puVar22 + -3) {
        if ((*(byte *)(puVar22 + -3) & 1) != 0) {
          thunk_FUN_0ee326a0(puVar22[-1],puVar22[-3] & 0xfffffffffffffffe);
        }
      }
      puStack_100 = puVar18;
      thunk_FUN_0ee326a0(puStack_108,(long)puStack_f8 - (long)puStack_108);
    }
    if (uVar10 != 0) {
      thunk_FUN_0ee326a0(puStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
    }
    lVar16 = *(long *)(lStack_d0 + 8);
    bVar2 = *(byte *)(lVar16 + -0x18);
    param_2 = lStack_d0;
  }
  else {
    func_0x04865530(apuStack_80,puVar15);
    func_0x048655b0(apuStack_70,puVar15);
    plStack_88 = (long *)(lStack_c8 + 0x1d0);
    iVar25 = 0;
    uStack_bc = param_5 & 0xff;
    while( true ) {
      cVar13 = func_0x04862c80(apuStack_80,apuStack_70);
      if (cVar13 != '\0') break;
      lVar16 = func_0x04862b80(apuStack_80);
      pppuVar17 = (undefined8 ***)func_0x04136630(&ppuStack_b0,iVar25);
      puVar22 = (undefined8 *)((long)pppuVar17 - (long)&ppuStack_b0);
      if ((undefined8 *)0xfffffffffffffff7 < puVar22) {
        func_0x04882e30();
LAB_0d60ca04:
        func_0x0d631990();
LAB_0d60ca09:
        uVar21 = func_0x04882eb0();
        func_0x0488eff0(&ppuStack_b0);
        puStack_100 = (undefined8 *)lVar16;
        func_0x0488ef50(&ppuStack_60);
        thunk_FUN_0ee326a0(puStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
        func_0x0d6241a0(&lStack_40);
        uVar21 = func_0x0eee2d70(uVar21);
        func_0x0d6241a0(&lStack_40);
        uVar21 = func_0x0eee2d70(uVar21);
        if (((ulong)_auStack_138 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_128,(ulong)_auStack_138 & 0xfffffffffffffffe);
        }
        if ((uStack_e8 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
        }
        if (((ulong)puStack_108 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_f8,(ulong)puStack_108 & 0xfffffffffffffffe);
        }
        func_0x0d6241a0(&lStack_48);
        func_0x04862b40(apuStack_70);
        func_0x04862b40(apuStack_80);
        func_0x0d6241a0(&lStack_40);
        func_0x0eee2d70(uVar21);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (puVar22 < (undefined8 *)0x17) {
        _auStack_138 = (undefined8 *)CONCAT71(stack0xfffffffffffffec9,(char)puVar22 * '\x02');
        puVar18 = (undefined8 *)(auStack_138 + 1);
        if (pppuVar17 != &ppuStack_b0) goto LAB_0d60bf0a;
      }
      else {
        uVar24 = ((ulong)puVar22 | 7) + 1;
        if (((ulong)puVar22 | 7) == 0x17) {
          uVar24 = 0x1a;
        }
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar24,0);
        }
        _auStack_138 = (undefined8 *)(uVar24 | 1);
        uStack_130 = puVar22;
        puStack_128 = puVar18;
LAB_0d60bf0a:
        func_0x0eee2f00(puVar18,&ppuStack_b0,puVar22);
      }
      *(undefined1 *)((long)puVar18 + (long)puVar22) = 0;
      plVar12 = plStack_88;
      lStack_48 = lStack_d0;
      puVar14 = *(undefined4 **)(lStack_d0 + 8);
      if (puVar14 < *(undefined4 **)(lStack_d0 + 0x10)) {
        if (((ulong)_auStack_138 & 1) == 0) {
          *(undefined8 **)(puVar14 + 4) = puStack_128;
          *puVar14 = auStack_138;
          puVar14[1] = uStack_134;
          puVar14[2] = (undefined4)uStack_130;
          puVar14[3] = uStack_130._4_4_;
        }
        else {
          FUN_0412e5e0(puVar14,puStack_128,uStack_130);
        }
        *(undefined4 **)(lStack_d0 + 8) = puVar14 + 6;
        *(undefined4 **)(lStack_d0 + 8) = puVar14 + 6;
        param_2 = lStack_d0;
      }
      else {
        uVar21 = func_0x04909a40(lStack_d0,auStack_138);
        *(undefined8 *)(lStack_d0 + 8) = uVar21;
        param_2 = lStack_d0;
        plVar12 = plStack_88;
      }
      lStack_d0 = param_2;
      if (((ulong)_auStack_138 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_128,(ulong)_auStack_138 & 0xfffffffffffffffe);
      }
      cVar13 = func_0x04864290(lVar16);
      if (cVar13 == '\0') {
        func_0x0d5ef090(&uStack_e8,param_2);
        puStack_108 = (undefined8 *)0x0;
        puStack_100 = (undefined8 *)0x0;
        puStack_f8 = (undefined8 *)0x0;
        ppuStack_60 = &puStack_108;
        uStack_58 = 0;
        puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (puVar22 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x18,0);
        }
        puStack_f8 = puVar22 + 3;
        ppuStack_b0 = &puStack_108;
        ppuStack_a8 = &puStack_38;
        ppuStack_a0 = &puStack_50;
        ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffffffffff00);
        uVar10 = uStack_e8 & 1;
        puStack_108 = puVar22;
        puStack_50 = puVar22;
        puStack_38 = puVar22;
        if ((uStack_e8 & 1) == 0) {
          puVar22[2] = puStack_d8;
          *puVar22 = CONCAT44(uStack_e4,uStack_e8);
          puVar22[1] = CONCAT44(uStack_dc,uStack_e0);
        }
        else {
          puStack_100 = puVar22;
          FUN_0412e5e0(puVar22,puStack_d8,CONCAT44(uStack_dc,uStack_e0));
        }
        puStack_100 = puStack_50 + 3;
        _auStack_138 = (undefined8 *)&UNK_0f47cca0;
        uStack_130 = (undefined8 *)0x0;
        puStack_128 = (undefined8 *)0x0;
        uStack_120 = 0;
        func_0x0488f040(&uStack_130,puStack_108,puStack_100,
                        ((long)puStack_100 - (long)puStack_108 >> 3) * -0x5555555555555555);
        uStack_118 = 0x200000009;
        _auStack_138 = (undefined8 *)&UNK_0f47b778;
        func_0x0d5eed10(uStack_b8,auStack_138);
        puVar18 = uStack_130;
        _auStack_138 = (undefined8 *)&UNK_0f47cca0;
        puVar22 = puStack_128;
        if (uStack_130 != (undefined8 *)0x0) {
          for (; puVar18 != puVar22; puVar22 = puVar22 + -3) {
            if ((*(byte *)(puVar22 + -3) & 1) != 0) {
              thunk_FUN_0ee326a0(puVar22[-1],puVar22[-3] & 0xfffffffffffffffe);
            }
          }
          puStack_128 = puVar18;
          thunk_FUN_0ee326a0(uStack_130,uStack_120 - (long)uStack_130);
        }
        puVar18 = puStack_108;
        puVar22 = puStack_100;
        if (puStack_108 != (undefined8 *)0x0) {
          for (; puVar18 != puVar22; puVar22 = puVar22 + -3) {
            if ((*(byte *)(puVar22 + -3) & 1) != 0) {
              thunk_FUN_0ee326a0(puVar22[-1],puVar22[-3] & 0xfffffffffffffffe);
            }
          }
          puStack_100 = puVar18;
          thunk_FUN_0ee326a0(puStack_108,(long)puStack_f8 - (long)puStack_108);
        }
        if (uVar10 != 0) {
          thunk_FUN_0ee326a0(puStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
        }
        lVar16 = *(long *)(lStack_d0 + 8);
        bVar2 = *(byte *)(lVar16 + -0x18);
        param_2 = lStack_d0;
      }
      else {
        _auStack_138 = (undefined8 *)CONCAT26(uStack_134._2_2_,0x6469757508);
        func_0x0d6050c0(&puStack_108,lVar16,auStack_138,param_2,uStack_b8,uStack_bc);
        if (((ulong)_auStack_138 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_128,(ulong)_auStack_138 & 0xfffffffffffffffe);
        }
        _auStack_138 = (undefined8 *)0x6e6f69737265760e;
        uStack_130 = (undefined8 *)((ulong)uStack_130 & 0xffffffffffffff00);
        func_0x0d6050c0(&uStack_e8,lVar16,auStack_138,param_2,uStack_b8,uStack_bc);
        lVar16 = lStack_c8;
        if (((ulong)_auStack_138 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_128,(ulong)_auStack_138 & 0xfffffffffffffffe);
        }
        if (((ulong)puStack_108 & 1) == 0) {
          puStack_128 = puStack_f8;
          _auStack_138 = puStack_108;
          uStack_130 = puStack_100;
        }
        else {
          FUN_0412e5e0(auStack_138,puStack_f8,puStack_100);
        }
        if ((uStack_e8 & 1) == 0) {
          puStack_110 = puStack_d8;
          uStack_120 = CONCAT44(uStack_e4,uStack_e8);
          uStack_118 = CONCAT44(uStack_dc,uStack_e0);
        }
        else {
          FUN_0412e5e0(&uStack_120,puStack_d8,CONCAT44(uStack_dc,uStack_e0));
        }
        puVar14 = *(undefined4 **)(lVar16 + 0x1d8);
        puVar3 = *(undefined4 **)(lVar16 + 0x1e0);
        if (puVar14 < puVar3) {
          if (((ulong)_auStack_138 & 1) == 0) {
            *(undefined8 **)(puVar14 + 4) = puStack_128;
            *puVar14 = auStack_138;
            puVar14[1] = uStack_134;
            puVar14[2] = (undefined4)uStack_130;
            puVar14[3] = uStack_130._4_4_;
          }
          else {
            FUN_0412e5e0(puVar14,puStack_128,uStack_130);
          }
          if ((uStack_120 & 1) == 0) {
            *(undefined8 **)(puVar14 + 10) = puStack_110;
            puVar14[6] = (undefined4)uStack_120;
            puVar14[7] = uStack_120._4_4_;
            puVar14[8] = (undefined4)uStack_118;
            puVar14[9] = uStack_118._4_4_;
          }
          else {
            FUN_0412e5e0(puVar14 + 6,puStack_110,uStack_118);
          }
          *(undefined4 **)(lStack_c8 + 0x1d8) = puVar14 + 0xc;
          *(undefined4 **)(lStack_c8 + 0x1d8) = puVar14 + 0xc;
        }
        else {
          lVar16 = (long)puVar14 - *plVar12;
          uVar24 = (lVar16 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar24) goto LAB_0d60ca04;
          lVar19 = (long)puVar3 - *plVar12 >> 4;
          uVar6 = lVar19 * 0x5555555555555556;
          if (uVar24 < uVar6) {
            uVar24 = uVar6;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
            uVar24 = 0x555555555555555;
          }
          plStack_90 = plVar12;
          if (uVar24 == 0) {
            ppuVar20 = (undefined8 **)0x0;
          }
          else {
            if (0x555555555555555 < uVar24) goto LAB_0d60ca09;
            ppuVar20 = (undefined8 **)
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 0x30);
            if (ppuVar20 == (undefined8 **)0x0) {
              func_0x0eec74c0(uVar24 * 0x30,0);
              ppuVar20 = (undefined8 **)0x0;
            }
          }
          ppuVar26 = (undefined8 **)(lVar16 + (long)ppuVar20);
          ppuStack_98 = ppuVar20 + uVar24 * 6;
          ppuStack_b0 = ppuVar20;
          ppuStack_a8 = ppuVar26;
          ppuStack_a0 = ppuVar26;
          if (((ulong)_auStack_138 & 1) == 0) {
            ppuVar26[2] = puStack_128;
            *(undefined1 (*) [4])ppuVar26 = auStack_138;
            *(undefined4 *)((long)ppuVar26 + 4) = uStack_134;
            *(undefined4 *)(ppuVar26 + 1) = (undefined4)uStack_130;
            *(undefined4 *)((long)ppuVar26 + 0xc) = uStack_130._4_4_;
          }
          else {
            FUN_0412e5e0(ppuVar26,puStack_128,uStack_130);
          }
          if ((uStack_120 & 1) == 0) {
            ppuVar26[5] = puStack_110;
            *(undefined4 *)(ppuVar26 + 3) = (undefined4)uStack_120;
            *(undefined4 *)((long)ppuVar26 + 0x1c) = uStack_120._4_4_;
            *(undefined4 *)(ppuVar26 + 4) = (undefined4)uStack_118;
            *(undefined4 *)((long)ppuVar26 + 0x24) = uStack_118._4_4_;
          }
          else {
            FUN_0412e5e0(ppuVar26 + 3,puStack_110,uStack_118);
          }
          ppuVar20 = ppuStack_a0;
          puVar23 = *(ulong **)(lStack_c8 + 0x1d0);
          puVar4 = *(ulong **)(lStack_c8 + 0x1d8);
          lVar16 = ((long)puVar23 - (long)puVar4) + (long)ppuStack_a8;
          if (puVar23 != puVar4) {
            lVar19 = 0;
            do {
              *(undefined8 *)(lVar16 + 0x10 + lVar19) =
                   *(undefined8 *)((long)puVar23 + lVar19 + 0x10);
              uVar21 = *(undefined8 *)((byte *)((long)puVar23 + lVar19) + 8);
              *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)((long)puVar23 + lVar19);
              ((undefined8 *)(lVar16 + lVar19))[1] = uVar21;
              pbVar1 = (byte *)((long)puVar23 + lVar19);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              pbVar1[8] = 0;
              pbVar1[9] = 0;
              pbVar1[10] = 0;
              pbVar1[0xb] = 0;
              pbVar1[0xc] = 0;
              pbVar1[0xd] = 0;
              pbVar1[0xe] = 0;
              pbVar1[0xf] = 0;
              pbVar1 = (byte *)((long)puVar23 + lVar19 + 0x10);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              *(undefined8 *)(lVar16 + 0x28 + lVar19) =
                   *(undefined8 *)((long)puVar23 + lVar19 + 0x28);
              pbVar1 = (byte *)((long)puVar23 + lVar19 + 0x18);
              uVar7 = *(undefined4 *)(pbVar1 + 4);
              uVar8 = *(undefined4 *)(pbVar1 + 8);
              uVar9 = *(undefined4 *)(pbVar1 + 0xc);
              puVar14 = (undefined4 *)(lVar16 + 0x18 + lVar19);
              *puVar14 = *(undefined4 *)pbVar1;
              puVar14[1] = uVar7;
              puVar14[2] = uVar8;
              puVar14[3] = uVar9;
              pbVar1 = (byte *)((long)puVar23 + lVar19 + 0x18);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              pbVar1[8] = 0;
              pbVar1[9] = 0;
              pbVar1[10] = 0;
              pbVar1[0xb] = 0;
              pbVar1[0xc] = 0;
              pbVar1[0xd] = 0;
              pbVar1[0xe] = 0;
              pbVar1[0xf] = 0;
              pbVar1 = (byte *)((long)puVar23 + lVar19 + 0x28);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              lVar11 = lVar19 + 0x30;
              lVar19 = lVar19 + 0x30;
            } while ((ulong *)((long)puVar23 + lVar11) != puVar4);
            do {
              if ((puVar23[3] & 1) == 0) {
                bVar2 = (byte)*puVar23;
              }
              else {
                thunk_FUN_0ee326a0(puVar23[5],puVar23[3] & 0xfffffffffffffffe);
                bVar2 = (byte)*puVar23;
              }
              if ((bVar2 & 1) != 0) {
                thunk_FUN_0ee326a0(puVar23[2],*puVar23 & 0xfffffffffffffffe);
              }
              puVar23 = puVar23 + 6;
            } while (puVar23 != puVar4);
            puVar23 = (ulong *)*plStack_88;
          }
          *(long *)(lStack_c8 + 0x1d0) = lVar16;
          *(undefined8 ***)(lStack_c8 + 0x1d8) = ppuVar20 + 6;
          lVar16 = *(long *)(lStack_c8 + 0x1e0);
          *(undefined8 ***)(lStack_c8 + 0x1e0) = ppuStack_98;
          if (puVar23 != (ulong *)0x0) {
            thunk_FUN_0ee326a0(puVar23,lVar16 - (long)puVar23);
          }
          *(undefined8 ***)(lStack_c8 + 0x1d8) = ppuVar20 + 6;
          param_2 = lStack_d0;
        }
        if ((uStack_120 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_110,uStack_120 & 0xfffffffffffffffe);
        }
        if (((ulong)_auStack_138 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_128,(ulong)_auStack_138 & 0xfffffffffffffffe);
        }
        if ((uStack_e8 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
        }
        if (((ulong)puStack_108 & 1) == 0) {
          lVar16 = *(long *)(param_2 + 8);
          bVar2 = *(byte *)(lVar16 + -0x18);
        }
        else {
          thunk_FUN_0ee326a0(puStack_f8,(ulong)puStack_108 & 0xfffffffffffffffe);
          lVar16 = *(long *)(param_2 + 8);
          bVar2 = *(byte *)(lVar16 + -0x18);
        }
      }
      if ((bVar2 & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar16 + -8),
                           *(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe);
      }
      iVar25 = iVar25 + 1;
      *(long *)(param_2 + 8) = lVar16 + -0x18;
      func_0x04862ba0(apuStack_80);
    }
    func_0x04862b40(apuStack_70);
    func_0x04862b40(apuStack_80);
    lVar16 = *(long *)(param_2 + 8);
    bVar2 = *(byte *)(lVar16 + -0x18);
  }
joined_r0x0d60c85a:
  if ((bVar2 & 1) != 0) {
    thunk_FUN_0ee326a0(*(undefined8 *)(lVar16 + -8),*(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe)
    ;
  }
  *(long *)(param_2 + 8) = lVar16 + -0x18;
  return;
}


