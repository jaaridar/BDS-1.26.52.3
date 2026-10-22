/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4eba80 (ELF vaddr 0xc3eba80)
 * Label: caller-of-callee
 * Body:  [[0c4eba80, 0c4ebb1d] [0c4ebb20, 0c4ebc0c] [0c4ebc10, 0c4ebc5a] [0c4ebc60, 0c4ebc80] [0c4ebc90, 0c4ebd4d] [0c4ebd50, 0c4ebd62] [0c4ebd70, 0c4ebdd9] [0c4ebde0, 0c4ebf6a] [0c4ebf70, 0c4ec941] [0c4ecd3d, 0c4ecdfc]]
 * Ghidra: FUN_0c4eba80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c4eba80(ulong *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  long *plVar14;
  int *piVar15;
  byte *pbVar16;
  undefined *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  bool bVar27;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined2 uStack_1b7;
  undefined1 uStack_1b5;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined3 uStack_1a8;
  undefined2 uStack_1a5;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  undefined3 uStack_1a0;
  undefined5 uStack_19d;
  undefined3 uStack_198;
  undefined5 uStack_195;
  undefined3 uStack_190;
  undefined2 uStack_18d;
  undefined1 uStack_18b;
  undefined2 uStack_18a;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_128;
  ulong *puStack_120;
  undefined4 uStack_114;
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  long *plStack_d8;
  undefined3 uStack_d0;
  undefined5 uStack_cd;
  undefined3 uStack_c8;
  undefined8 uStack_c5;
  undefined2 uStack_bd;
  undefined1 uStack_bb;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [24];
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  lVar18 = *param_3;
  if (param_3[1] != lVar18) {
    puStack_e8 = param_1 + 6;
    puStack_f0 = param_1 + 3;
    puStack_f8 = param_1 + 9;
    uStack_58 = 0;
    plStack_128 = param_2;
    plStack_60 = param_3;
    do {
      lVar24 = uStack_58 * 0x420;
      puVar17 = (undefined *)(lVar18 + lVar24 + 0x18);
      uStack_1c0 = (long *)func_0x0eee2e90(puVar17);
      uStack_1b8 = 1;
      puStack_e0 = (ulong *)0x0;
      uStack_1c8 = puVar17;
      func_0x0eeb79f0(auStack_48,&puStack_e0);
      if (((ulong)puStack_e0 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_e0 & 0xff00ffffffffffff) - 8);
      }
      puStack_50 = (undefined8 *)(lVar18 + lVar24);
      piVar12 = (int *)puStack_50[1];
      for (piVar15 = (int *)*puStack_50; piVar15 != piVar12; piVar15 = piVar15 + 8) {
        iVar11 = *piVar15;
        puStack_120 = puStack_f8;
        if (((iVar11 != 3) && (puStack_120 = puStack_e8, iVar11 != 2)) &&
           (puStack_120 = param_1, iVar11 == 1)) {
          puStack_120 = puStack_f0;
        }
        pbVar16 = *(byte **)(piVar15 + 2);
        if (pbVar16 != *(byte **)(piVar15 + 4)) {
          do {
            if (pbVar16[0x38] == 0) {
              puVar23 = (undefined8 *)puStack_120[1];
              if (puVar23 < (undefined8 *)puStack_120[2]) {
                puVar23[0x14] = 0;
                puVar23[0x15] = 0;
                puVar23[0x12] = 0;
                puVar23[0x13] = 0;
                puVar23[0x10] = 0;
                puVar23[0x11] = 0;
                puVar23[0xe] = 0;
                puVar23[0xf] = 0;
                puVar23[0xc] = 0;
                puVar23[0xd] = 0;
                puVar23[10] = 0;
                puVar23[0xb] = 0;
                puVar23[8] = 0;
                puVar23[9] = 0;
                puVar23[6] = 0;
                puVar23[7] = 0;
                puVar23[4] = 0;
                puVar23[5] = 0;
                puVar23[2] = 0;
                puVar23[3] = 0;
                *puVar23 = 0;
                puVar23[1] = 0;
                puVar23[0x16] = 0;
                puVar23 = puVar23 + 0x17;
                puVar19 = puStack_120;
              }
              else {
                uVar20 = *puStack_120;
                lVar18 = (long)puVar23 - uVar20;
                uVar25 = (lVar18 >> 3) * -0x2c8590b21642c859 + 1;
                if (0x1642c8590b21642 < uVar25) {
                  func_0x0c4fd710();
LAB_0c4ec916:
                  func_0x04882eb0();
LAB_0c4ec91b:
                  func_0x0c4fd710();
LAB_0c4ec920:
                  uVar13 = func_0x04882eb0();
                  uVar13 = func_0x04882e20(uVar13);
                  func_0x0ee386e0(&puStack_e0);
                  puVar23 = (undefined8 *)param_1[0xe];
                  while (puVar23 != (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)*puVar23;
                    func_0x0412a280(puVar23,0x18);
                    puVar23 = puVar4;
                  }
                  uVar20 = param_1[0xc];
                  param_1[0xc] = 0;
                  if (uVar20 != 0) {
                    func_0x0412a280(uVar20,param_1[0xd] << 3);
                  }
                  puStack_e0 = puStack_f8;
                  func_0x0c408470(&puStack_e0);
                  puStack_e0 = puStack_e8;
                  func_0x0c408470(&puStack_e0);
                  puStack_e0 = puStack_f0;
                  func_0x0c408470(&puStack_e0);
                  puStack_e0 = param_1;
                  func_0x0c408470(&puStack_e0);
                  func_0x0eee2d70(uVar13);
                  pcVar5 = (code *)swi(3);
                  plVar14 = (long *)(*pcVar5)();
                  return plVar14;
                }
                lVar24 = (long)((long)puStack_120[2] - uVar20) >> 3;
                uVar6 = lVar24 * -0x590b21642c8590b2;
                if (uVar25 < uVar6) {
                  uVar25 = uVar6;
                }
                if (0xb21642c8590b20 < (ulong)(lVar24 * -0x2c8590b21642c859)) {
                  uVar25 = 0x1642c8590b21642;
                }
                uStack_1a8 = SUB83(puStack_120,0);
                uStack_1a5 = (undefined2)((ulong)puStack_120 >> 0x18);
                uStack_1a3 = (undefined1)((ulong)puStack_120 >> 0x28);
                uStack_1a2 = (undefined2)((ulong)puStack_120 >> 0x30);
                if (uVar25 == 0) {
                  puVar17 = (undefined *)0x0;
                }
                else {
                  if (0x1642c8590b21642 < uVar25) goto LAB_0c4ec916;
                  puVar17 = (undefined *)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25 * 0xb8);
                  if (puVar17 == (undefined *)0x0) {
                    func_0x0eec74c0(uVar25 * 0xb8,0);
                    puVar17 = (undefined *)0x0;
                  }
                }
                puVar19 = puStack_120;
                uStack_1c0 = (long *)(puVar17 + lVar18);
                uStack_1b0 = puVar17 + uVar25 * 0xb8;
                *(undefined8 *)(puVar17 + lVar18 + 0xa0) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0xa0) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x90) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x90) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x80) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x80) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x70) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x70) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x60) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x60) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x50) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x50) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x40) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x40) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x30) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x30) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x20) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x20) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0x10) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18 + 0x10) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18) = 0;
                *(undefined8 *)((long)(puVar17 + lVar18) + 8) = 0;
                *(undefined8 *)(puVar17 + lVar18 + 0xb0) = 0;
                puVar1 = puVar17 + lVar18 + 0xb8;
                uStack_1b8 = SUB81(puVar1,0);
                uStack_1b7 = (undefined2)((ulong)puVar1 >> 8);
                uStack_1b5 = (undefined1)((ulong)puVar1 >> 0x18);
                uStack_1b4 = (undefined4)((ulong)puVar1 >> 0x20);
                uStack_1c8 = puVar17;
                func_0x0c4fd720(puStack_120,uVar20,puVar23,puVar17);
                uVar8 = uStack_1b4;
                uStack_1c0 = (long *)*puVar19;
                *puVar19 = (ulong)puVar17;
                uVar20 = puVar19[2];
                uVar7 = CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8));
                puVar23 = (undefined8 *)
                          CONCAT44(uStack_1b4,CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8)));
                uStack_1b8 = SUB81(uStack_1c0,0);
                uStack_1b7 = (undefined2)((ulong)uStack_1c0 >> 8);
                uStack_1b5 = (undefined1)((ulong)uStack_1c0 >> 0x18);
                uStack_1b4 = (undefined4)((ulong)uStack_1c0 >> 0x20);
                *(undefined4 *)(puVar19 + 1) = uVar7;
                *(undefined4 *)((long)puVar19 + 0xc) = uVar8;
                puVar19[2] = (ulong)uStack_1b0;
                if (uStack_1c0 != (long *)0x0) {
                  func_0x0412a280(uStack_1c0,uVar20 - (long)uStack_1c0);
                }
              }
              puVar19[1] = (ulong)puVar23;
              func_0x0c4ece00(plStack_128,*piVar15,puVar23 + -0x17,pbVar16,param_1);
            }
            else {
              bVar27 = (*pbVar16 & 1) != 0;
              pbVar22 = pbVar16 + 1;
              if (bVar27) {
                pbVar22 = *(byte **)(pbVar16 + 0x10);
              }
              uVar20 = (ulong)(*pbVar16 >> 1);
              if (bVar27) {
                uVar20 = *(ulong *)(pbVar16 + 8);
              }
              pbVar3 = (byte *)puStack_120[1];
              for (pbVar26 = (byte *)*puStack_120; pbVar26 != pbVar3; pbVar26 = pbVar26 + 0xb8) {
                if (pbVar26[0x98] == 1) {
                  bVar2 = *pbVar26;
                  if ((bVar2 & 1) == 0) {
                    uVar25 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar25 = *(ulong *)(pbVar26 + 8);
                  }
                  if (uVar20 == uVar25) {
                    if ((bVar2 & 1) == 0) {
                      pbVar21 = pbVar26 + 1;
                    }
                    else {
                      pbVar21 = *(byte **)(pbVar26 + 0x10);
                    }
                    iVar11 = bcmp(pbVar22,pbVar21,uVar20);
                    if (iVar11 == 0) break;
                  }
                }
              }
              if (pbVar26 == pbVar3 || pbVar26 == (byte *)0x0) {
                puStack_e0 = (ulong *)&UNK_0f36e918;
                uStack_c8 = 0;
                uStack_c5 = 0;
                plStack_d8 = (long *)0x0;
                uStack_d0 = 0;
                uStack_cd = 0;
                uStack_bd = 0x101;
                uStack_bb = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                lStack_88 = 0;
                lStack_80 = 0;
                uStack_98 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_a0 = 0;
                uStack_b8 = 0;
                lStack_b0 = 0;
                plStack_68 = (long *)0x0;
                func_0x0c454290(&puStack_e0);
                puStack_e0 = (ulong *)&UNK_0f36e858;
                puVar19 = puStack_120;
                if (pbVar16[0x30] == 1) {
                  uStack_114 = 0;
                  bVar27 = (pbVar16[0x18] & 1) != 0;
                  pbVar22 = pbVar16 + 0x19;
                  if (bVar27) {
                    pbVar22 = *(byte **)(pbVar16 + 0x28);
                  }
                  uVar20 = (ulong)(pbVar16[0x18] >> 1);
                  if (bVar27) {
                    uVar20 = *(ulong *)(pbVar16 + 0x20);
                  }
                  lStack_108 = 0;
                  plStack_100 = (long *)0x0;
                  if (plStack_128[1] == 0) {
LAB_0c4ebef0:
                    cVar10 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,
                                             &UNK_013bce49);
                    if (cVar10 != '\0') {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                    if (lStack_108 != 0) goto LAB_0c4ebf38;
                    bVar27 = true;
                    if (plStack_100 != (long *)0x0) goto LAB_0c4ec10b;
LAB_0c4ec11d:
                    if (!bVar27) goto LAB_0c4ec163;
LAB_0c4ec121:
                    if (DAT_0f6e2da8 == '\0') {
                      iVar11 = FUN_04108328(&DAT_0f6e2da8);
                      if (iVar11 != 0) {
                        __cxa_atexit(&SUB_04963c80,&DAT_0f6e2da0,0xf53dab8);
                        func_0x0410844d(&DAT_0f6e2da8);
                      }
                    }
                    plStack_110 = _DAT_0f6e2da0;
                    if (_DAT_0f6e2da0 != (long *)0x0) {
                      LOCK();
                      *(int *)((long)_DAT_0f6e2da0 + 0xc) = *(int *)((long)_DAT_0f6e2da0 + 0xc) + 1;
                      UNLOCK();
                      goto LAB_0c4ec163;
                    }
LAB_0c4ec200:
                    plVar14 = (long *)0x0;
LAB_0c4ec202:
                    uStack_1c8 = &UNK_0f36e918;
                    uStack_1b0._0_4_ = 0;
                    uStack_1b0._4_4_ = 0;
                    uStack_1a8 = 0;
                    uStack_1c0 = (long *)0x0;
                    uStack_1b8 = 0;
                    uStack_1b7 = 0;
                    uStack_1b5 = 0;
                    uStack_1b4 = 0;
                    uStack_1a5 = 0x101;
                    uStack_1a3 = 0;
                    lStack_160 = 0;
                    lStack_158 = 0;
                    lStack_170 = 0;
                    lStack_168 = 0;
                    lStack_180 = 0;
                    lStack_178 = 0;
                    uStack_190 = 0;
                    uStack_18d = 0;
                    uStack_18b = 0;
                    uStack_18a = 0;
                    lStack_188 = 0;
                    uStack_1a0 = 0;
                    uStack_19d = 0;
                    uStack_198 = 0;
                    uStack_195 = 0;
                    plStack_150 = (long *)0x0;
                    func_0x0c454290(&uStack_1c8);
                    uStack_1c8 = &UNK_0f36e858;
                    if (plVar14 != (long *)0x0) goto LAB_0c4ec265;
                  }
                  else {
                    plStack_100 = (long *)func_0x0412c300();
                    if ((plStack_100 == (long *)0x0) || (lStack_108 = *plStack_128, lStack_108 == 0)
                       ) goto LAB_0c4ebef0;
LAB_0c4ebf38:
                    func_0x0ca0c260(&plStack_110,lStack_108,&uStack_114,pbVar22,uVar20);
                    bVar27 = false;
                    if (plStack_100 == (long *)0x0) goto LAB_0c4ec11d;
LAB_0c4ec10b:
                    plVar9 = plStack_100;
                    LOCK();
                    plVar14 = plStack_100 + 1;
                    lVar18 = *plVar14;
                    *plVar14 = *plVar14 + -1;
                    UNLOCK();
                    if (lVar18 != 0) goto LAB_0c4ec11d;
                    (**(code **)(*plStack_100 + 0x10))(plStack_100);
                    func_0x0412c2d0(plVar9);
                    if (bVar27) goto LAB_0c4ec121;
LAB_0c4ec163:
                    plVar14 = plStack_110;
                    if (plStack_110 == (long *)0x0) goto LAB_0c4ec200;
                    if (*plStack_110 == 0) goto LAB_0c4ec202;
                    uStack_1c8 = &UNK_0f36e918;
                    uStack_1b0._0_4_ = 0;
                    uStack_1b0._4_4_ = 0;
                    uStack_1a8 = 0;
                    uStack_1c0 = (long *)0x0;
                    uStack_1b8 = 0;
                    uStack_1b7 = 0;
                    uStack_1b5 = 0;
                    uStack_1b4 = 0;
                    uStack_1a5 = 0x101;
                    uStack_1a3 = 0;
                    lStack_160 = 0;
                    lStack_158 = 0;
                    lStack_170 = 0;
                    lStack_168 = 0;
                    lStack_180 = 0;
                    lStack_178 = 0;
                    uStack_190 = 0;
                    uStack_18d = 0;
                    uStack_18b = 0;
                    uStack_18a = 0;
                    lStack_188 = 0;
                    uStack_1a0 = 0;
                    uStack_19d = 0;
                    uStack_198 = 0;
                    uStack_195 = 0;
                    plStack_150 = (long *)0x0;
                    func_0x0c455bd0(&uStack_1c8,*plStack_110,1,uStack_114,0,1);
                    func_0x0c455670(&uStack_1c8);
LAB_0c4ec265:
                    uStack_1c8 = &UNK_0f36e858;
                    LOCK();
                    *(int *)((long)plVar14 + 0xc) = *(int *)((long)plVar14 + 0xc) + -1;
                    UNLOCK();
                    if (((*(int *)((long)plVar14 + 0xc) < 1) && (*plVar14 == 0)) &&
                       (plStack_110 != (long *)0x0)) {
                      func_0x0412a280(plStack_110,0x10);
                    }
                  }
                  func_0x0c44f4e0(&puStack_e0,&uStack_1c8);
                  plVar14 = plStack_150;
                  uStack_1c8 = &UNK_0f36e918;
                  plStack_150 = (long *)0x0;
                  if (plVar14 != (long *)0x0) {
                    (**(code **)(*plVar14 + 8))();
                  }
                  puVar19 = puStack_120;
                  if (lStack_178 != 0) {
                    lStack_170 = lStack_178;
                    func_0x0412a280(lStack_178,lStack_168 - lStack_178);
                  }
                  lVar18 = CONCAT53(uStack_195,uStack_198);
                  if (lVar18 != 0) {
                    uStack_190 = uStack_198;
                    uStack_18d = (undefined2)uStack_195;
                    uStack_18b = (undefined1)((uint5)uStack_195 >> 0x10);
                    uStack_18a = (undefined2)((uint5)uStack_195 >> 0x18);
                    func_0x0412a280(lVar18,lStack_188 - lVar18);
                  }
                  plVar14 = (long *)CONCAT44(uStack_1b4,
                                             CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8)));
                  uStack_1b8 = 0;
                  uStack_1b7 = 0;
                  uStack_1b5 = 0;
                  uStack_1b4 = 0;
                  if (plVar14 != (long *)0x0) {
                    (**(code **)(*plVar14 + 8))();
                  }
                  uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
                  if (uStack_1c0 != (long *)0x0) {
                    LOCK();
                    *(int *)((long)uStack_1c0 + 0xc) = *(int *)((long)uStack_1c0 + 0xc) + -1;
                    UNLOCK();
                    uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
                    if (((*(int *)((long)uStack_1c0 + 0xc) < 1) &&
                        (uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0)
                        , *uStack_1c0 == 0)) &&
                       (uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
                       uStack_1c0 != (long *)0x0)) {
                      func_0x0412a280(uStack_1c0,0x10);
                    }
                  }
                }
                puVar23 = (undefined8 *)puVar19[1];
                if (puVar23 < (undefined8 *)puVar19[2]) {
                  puVar23[0x14] = 0;
                  puVar23[0x15] = 0;
                  puVar23[0x12] = 0;
                  puVar23[0x13] = 0;
                  puVar23[0x10] = 0;
                  puVar23[0x11] = 0;
                  puVar23[0xe] = 0;
                  puVar23[0xf] = 0;
                  puVar23[0xc] = 0;
                  puVar23[0xd] = 0;
                  puVar23[10] = 0;
                  puVar23[0xb] = 0;
                  puVar23[8] = 0;
                  puVar23[9] = 0;
                  puVar23[6] = 0;
                  puVar23[7] = 0;
                  puVar23[4] = 0;
                  puVar23[5] = 0;
                  puVar23[2] = 0;
                  puVar23[3] = 0;
                  *puVar23 = 0;
                  puVar23[1] = 0;
                  puVar23[0x16] = 0;
                  puVar23 = puVar23 + 0x17;
                }
                else {
                  uVar20 = *puVar19;
                  lVar18 = (long)puVar23 - uVar20;
                  uVar25 = (lVar18 >> 3) * -0x2c8590b21642c859 + 1;
                  if (0x1642c8590b21642 < uVar25) goto LAB_0c4ec91b;
                  lVar24 = (long)((long)puVar19[2] - uVar20) >> 3;
                  uVar6 = lVar24 * -0x590b21642c8590b2;
                  if (uVar25 < uVar6) {
                    uVar25 = uVar6;
                  }
                  if (0xb21642c8590b20 < (ulong)(lVar24 * -0x2c8590b21642c859)) {
                    uVar25 = 0x1642c8590b21642;
                  }
                  uStack_1a8 = SUB83(puVar19,0);
                  uStack_1a5 = (undefined2)((ulong)puVar19 >> 0x18);
                  uStack_1a3 = (undefined1)((ulong)puVar19 >> 0x28);
                  uStack_1a2 = (undefined2)((ulong)puVar19 >> 0x30);
                  if (uVar25 == 0) {
                    puVar17 = (undefined *)0x0;
                  }
                  else {
                    if (0x1642c8590b21642 < uVar25) goto LAB_0c4ec920;
                    puVar17 = (undefined *)
                              (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25 * 0xb8);
                    if (puVar17 == (undefined *)0x0) {
                      func_0x0eec74c0(uVar25 * 0xb8,0);
                      puVar17 = (undefined *)0x0;
                    }
                  }
                  puVar19 = puStack_120;
                  uStack_1c0 = (long *)(puVar17 + lVar18);
                  uStack_1b0 = puVar17 + uVar25 * 0xb8;
                  *(undefined8 *)(puVar17 + lVar18 + 0xa0) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0xa0) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x90) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x90) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x80) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x80) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x70) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x70) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x60) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x60) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x50) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x50) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x40) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x40) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x30) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x30) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x20) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x20) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0x10) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18 + 0x10) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18) = 0;
                  *(undefined8 *)((long)(puVar17 + lVar18) + 8) = 0;
                  *(undefined8 *)(puVar17 + lVar18 + 0xb0) = 0;
                  puVar1 = puVar17 + lVar18 + 0xb8;
                  uStack_1b8 = SUB81(puVar1,0);
                  uStack_1b7 = (undefined2)((ulong)puVar1 >> 8);
                  uStack_1b5 = (undefined1)((ulong)puVar1 >> 0x18);
                  uStack_1b4 = (undefined4)((ulong)puVar1 >> 0x20);
                  uStack_1c8 = puVar17;
                  func_0x0c4fd720(puStack_120,uVar20,puVar23,puVar17);
                  uVar8 = uStack_1b4;
                  uStack_1c0 = (long *)*puVar19;
                  *puVar19 = (ulong)puVar17;
                  uVar20 = puVar19[2];
                  uVar7 = CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8));
                  puVar23 = (undefined8 *)
                            CONCAT44(uStack_1b4,CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8))
                                    );
                  uStack_1b8 = SUB81(uStack_1c0,0);
                  uStack_1b7 = (undefined2)((ulong)uStack_1c0 >> 8);
                  uStack_1b5 = (undefined1)((ulong)uStack_1c0 >> 0x18);
                  uStack_1b4 = (undefined4)((ulong)uStack_1c0 >> 0x20);
                  *(undefined4 *)(puVar19 + 1) = uVar7;
                  *(undefined4 *)((long)puVar19 + 0xc) = uVar8;
                  puVar19[2] = (ulong)uStack_1b0;
                  if (uStack_1c0 != (long *)0x0) {
                    func_0x0412a280(uStack_1c0,uVar20 - (long)uStack_1c0);
                  }
                }
                puVar19[1] = (ulong)puVar23;
                if ((*pbVar16 & 1) == 0) {
                  uVar13 = *(undefined8 *)(pbVar16 + 0x10);
                  uStack_1b8 = (undefined1)uVar13;
                  uStack_1b7 = (undefined2)((ulong)uVar13 >> 8);
                  uStack_1b5 = (undefined1)((ulong)uVar13 >> 0x18);
                  uStack_1b4 = (undefined4)((ulong)uVar13 >> 0x20);
                  uStack_1c8 = *(undefined **)pbVar16;
                  uStack_1c0 = *(long **)(pbVar16 + 8);
                }
                else {
                  func_0x0412e5e0(&uStack_1c8,*(undefined8 *)(pbVar16 + 0x10),
                                  *(undefined8 *)(pbVar16 + 8));
                }
                uStack_1b0._0_4_ = 0xf36e918;
                uStack_1b0._4_4_ = 0;
                uStack_198 = 0;
                uStack_195 = 0;
                uStack_190 = 0;
                uStack_1a8 = 0;
                uStack_1a5 = 0;
                uStack_1a3 = 0;
                uStack_1a2 = 0;
                uStack_1a0 = 0;
                uStack_19d = 0;
                uStack_18d = 0x101;
                uStack_18b = 0;
                uStack_148 = 0;
                uStack_140 = 0;
                lStack_158 = 0;
                plStack_150 = (long *)0x0;
                lStack_168 = 0;
                lStack_160 = 0;
                lStack_178 = 0;
                lStack_170 = 0;
                lStack_188 = 0;
                lStack_180 = 0;
                plStack_138 = (long *)0x0;
                func_0x0c454290(&uStack_1b0);
                uStack_1b0._0_4_ = 0xf36e858;
                uStack_1b0._4_4_ = 0;
                func_0x0c44f4e0(&uStack_1b0,&puStack_e0);
                pbVar22 = (byte *)(puVar23 + -0x17);
                if (*(char *)(puVar23 + -4) == '\x01') {
                  if ((*pbVar22 & 1) != 0) {
                    func_0x0412a280(puVar23[-0x15],puVar23[-0x17] & 0xfffffffffffffffe);
                  }
                  puVar23[-0x15] =
                       CONCAT44(uStack_1b4,CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8)));
                  *(undefined4 *)pbVar22 = (undefined4)uStack_1c8;
                  *(undefined4 *)((long)puVar23 + -0xb4) = uStack_1c8._4_4_;
                  *(undefined4 *)(puVar23 + -0x16) = (undefined4)uStack_1c0;
                  *(undefined4 *)((long)puVar23 + -0xac) = uStack_1c0._4_4_;
                  uStack_1c8 = (undefined *)((ulong)uStack_1c8 & 0xffffffffffff0000);
                  func_0x0c44f4e0(puVar23 + -0x14,&uStack_1b0);
                }
                else {
                  puVar23[-0x15] =
                       CONCAT44(uStack_1b4,CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8)));
                  *(undefined **)pbVar22 = uStack_1c8;
                  puVar23[-0x16] = uStack_1c0;
                  uStack_1c8 = (undefined *)0x0;
                  uStack_1c0 = (long *)0x0;
                  uStack_1b8 = 0;
                  uStack_1b7 = 0;
                  uStack_1b5 = 0;
                  uStack_1b4 = 0;
                  puVar4 = puVar23 + -0x14;
                  puVar23[-0x14] = &UNK_0f36e918;
                  puVar23[-0x13] = 0;
                  puVar23[-0x12] = 0;
                  *(undefined8 *)((long)puVar23 + -0x8d) = 0;
                  *(undefined8 *)((long)puVar23 + -0x85) = 0;
                  *(undefined2 *)((long)puVar23 + -0x7d) = 0x101;
                  *(undefined1 *)((long)puVar23 + -0x7b) = 0;
                  puVar23[-0xf] = 0;
                  puVar23[-0xe] = 0;
                  puVar23[-0xd] = 0;
                  puVar23[-0xc] = 0;
                  puVar23[-0xb] = 0;
                  puVar23[-10] = 0;
                  puVar23[-9] = 0;
                  puVar23[-8] = 0;
                  puVar23[-7] = 0;
                  puVar23[-6] = 0;
                  puVar23[-5] = 0;
                  func_0x0c454290(puVar4);
                  *puVar4 = &UNK_0f36e858;
                  func_0x0c44f4e0(puVar4,&uStack_1b0);
                  *(undefined1 *)(puVar23 + -4) = 1;
                }
                plVar14 = plStack_138;
                uStack_1b0._0_4_ = 0xf36e918;
                uStack_1b0._4_4_ = 0;
                plStack_138 = (long *)0x0;
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 8))();
                }
                if (lStack_160 != 0) {
                  lStack_158 = lStack_160;
                  func_0x0412a280(lStack_160,(long)plStack_150 - lStack_160);
                }
                if (lStack_180 != 0) {
                  lStack_178 = lStack_180;
                  func_0x0412a280(lStack_180,lStack_170 - lStack_180);
                }
                plVar14 = (long *)CONCAT53(uStack_19d,uStack_1a0);
                uStack_1a0 = 0;
                uStack_19d = 0;
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 8))();
                }
                plVar14 = (long *)CONCAT26(uStack_1a2,
                                           CONCAT15(uStack_1a3,CONCAT23(uStack_1a5,uStack_1a8)));
                if (plVar14 != (long *)0x0) {
                  LOCK();
                  *(int *)((long)plVar14 + 0xc) = *(int *)((long)plVar14 + 0xc) + -1;
                  UNLOCK();
                  if (((*(int *)((long)plVar14 + 0xc) < 1) && (*plVar14 == 0)) &&
                     (lVar18 = CONCAT26(uStack_1a2,
                                        CONCAT15(uStack_1a3,CONCAT23(uStack_1a5,uStack_1a8))),
                     lVar18 != 0)) {
                    func_0x0412a280(lVar18,0x10);
                  }
                  uStack_1a8 = 0;
                  uStack_1a5 = 0;
                  uStack_1a3 = 0;
                  uStack_1a2 = 0;
                }
                if (((ulong)uStack_1c8 & 1) != 0) {
                  func_0x0412a280(CONCAT44(uStack_1b4,
                                           CONCAT13(uStack_1b5,CONCAT21(uStack_1b7,uStack_1b8))),
                                  (ulong)uStack_1c8 & 0xfffffffffffffffe);
                }
                func_0x0c4ece00(plStack_128,*piVar15,pbVar22,pbVar16,param_1);
                plVar14 = plStack_68;
                puStack_e0 = (ulong *)&UNK_0f36e918;
                plStack_68 = (long *)0x0;
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 8))();
                }
                if (lStack_90 != 0) {
                  lStack_88 = lStack_90;
                  func_0x0412a280(lStack_90,lStack_80 - lStack_90);
                }
                if (lStack_b0 != 0) {
                  lStack_a8 = lStack_b0;
                  func_0x0412a280(lStack_b0,lStack_a0 - lStack_b0);
                }
                plVar14 = (long *)CONCAT53(uStack_cd,uStack_d0);
                uStack_d0 = 0;
                uStack_cd = 0;
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 8))();
                }
                uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
                if (plStack_d8 != (long *)0x0) {
                  LOCK();
                  *(int *)((long)plStack_d8 + 0xc) = *(int *)((long)plStack_d8 + 0xc) + -1;
                  UNLOCK();
                  uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
                  if (((*(int *)((long)plStack_d8 + 0xc) < 1) &&
                      (uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
                      *plStack_d8 == 0)) &&
                     (uStack_1b0 = (undefined *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
                     plStack_d8 != (long *)0x0)) {
                    func_0x0412a280(plStack_d8,0x10);
                  }
                }
              }
              else {
                func_0x0c4ece00(plStack_128,*piVar15,pbVar26,pbVar16,param_1);
              }
            }
            pbVar16 = pbVar16 + 0x58;
          } while (pbVar16 != *(byte **)(piVar15 + 4));
          piVar12 = (int *)puStack_50[1];
        }
      }
      func_0x0eeb81b0(auStack_48);
      uStack_58 = uStack_58 + 1;
      lVar18 = *plStack_60;
    } while (uStack_58 < (ulong)((plStack_60[1] - lVar18 >> 5) * 0xf83e0f83e0f83e1));
  }
  return (long *)param_1;
}


