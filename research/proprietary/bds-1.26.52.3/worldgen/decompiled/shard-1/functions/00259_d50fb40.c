/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd60fb40 (ELF vaddr 0xd50fb40)
 * Label: caller-of-callee
 * Body:  [[0d60fb40, 0d60fcc3] [0d60fcd0, 0d60fe49] [0d60fe50, 0d60fef9] [0d60ff00, 0d60ff2b] [0d60ff30, 0d60ffe3] [0d60fff0, 0d610042] [0d610050, 0d6107f3] [0d610800, 0d610856] [0d610860, 0d6109e2] [0d6109f0, 0d610ae4] [0d610af0, 0d610c77] [0d610c80, 0d611207] [0d611210, 0d6112ed] [0d6112f0, 0d6113cd] [0d6113d0, 0d61142d] [0d611430, 0d611489] [0d611490, 0d6115db] [0d6115e0, 0d611eb6] [0d611f1c, 0d611f5a] [0d6125b7, 0d6125cc]]
 * Ghidra: FUN_0d60fb40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d60fb40(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint param_5,
                 long *param_6)

{
  uint *puVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint ******ppppppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  uint *******pppppppuVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  uint ******ppppppuVar18;
  uint uVar19;
  uint *******pppppppuVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auVar25 [8];
  uint *******pppppppuVar26;
  undefined1 auVar27 [16];
  uint *******pppppppuStack_248;
  uint *******pppppppuStack_240;
  uint *******pppppppuStack_238;
  undefined1 auStack_228 [8];
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_218;
  undefined1 uStack_210;
  undefined1 auStack_200 [4];
  undefined1 uStack_1fc;
  undefined1 uStack_1fb;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  char cStack_1f8;
  undefined1 uStack_1f7;
  undefined2 uStack_1f6;
  uint uStack_1f4;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  uint ******ppppppuStack_1e0;
  uint ******appppppuStack_1d8 [3];
  uint uStack_1c0;
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  uint ******ppppppuStack_180;
  uint ******ppppppuStack_178;
  undefined8 uStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  uint ******ppppppuStack_158;
  uint ******ppppppuStack_148;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  uint uStack_10c;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******apppppppuStack_f0 [2];
  undefined8 uStack_e0;
  uint *******pppppppuStack_d8;
  uint uStack_cc;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint *******pppppppuStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  uint *******pppppppuStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  auStack_200 = (undefined1  [4])0x646f6d0e;
  uStack_1fc = 0x75;
  uStack_1fb = 0x6c;
  uStack_1fa = 0x65;
  uStack_1f9 = 0x73;
  cStack_1f8 = '\0';
  puVar14 = *(undefined4 **)(param_2 + 8);
  lStack_118 = param_3;
  uStack_10c = param_5;
  lStack_48 = param_2;
  if (puVar14 < *(undefined4 **)(param_2 + 0x10)) {
    *(uint ********)(puVar14 + 4) = pppppppuStack_1f0;
    *puVar14 = 0x646f6d0e;
    puVar14[1] = 0x73656c75;
    puVar14[2] = (uint)CONCAT21(uStack_1f6,uStack_1f7) << 8;
    puVar14[3] = uStack_1f4;
    *(undefined4 **)(param_2 + 8) = puVar14 + 6;
  }
  else {
    uVar10 = func_0x04909a40(param_2,auStack_200);
    *(undefined8 *)(param_2 + 8) = uVar10;
    if (((uint)auStack_200 & 1) != 0) {
      func_0x0412a280(pppppppuStack_1f0,
                      CONCAT17(uStack_1f9,
                               CONCAT16(uStack_1fa,
                                        CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))) &
                      0xfffffffffffffffe);
    }
  }
  auStack_200 = (undefined1  [4])0x646f6d0e;
  uStack_1fc = 0x75;
  uStack_1fb = 0x6c;
  uStack_1fa = 0x65;
  uStack_1f9 = 0x73;
  cStack_1f8 = '\0';
  cVar6 = func_0x04864290(param_1);
  if (cVar6 == '\0') {
    bVar7 = 1;
    puVar9 = &DAT_0f54fc40;
  }
  else {
    puVar9 = (undefined *)func_0x04864990(param_1,auStack_200);
    bVar7 = func_0x04864260(puVar9);
    bVar7 = bVar7 ^ 1;
  }
  if (((uint)auStack_200 & 1) != 0) {
    func_0x0412a280(pppppppuStack_1f0,
                    CONCAT17(uStack_1f9,
                             CONCAT16(uStack_1fa,
                                      CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))) &
                    0xfffffffffffffffe);
  }
  uStack_b0 = param_4;
  if (bVar7 == 0) {
    if ((char)uStack_10c != '\0') {
      func_0x0d5ef090(&pppppppuStack_248,param_2);
      auStack_228 = (undefined1  [8])0x0;
      pppppppuStack_220 = (uint *******)0x0;
      pppppppuStack_218 = (uint *******)0x0;
      ppppppuStack_180 = (uint ******)((ulong)ppppppuStack_180 & 0xffffffffffffff00);
      auStack_188 = (undefined1  [8])auStack_228;
      uStack_168 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (uStack_168 == (uint *******)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      pppppppuStack_218 = uStack_168 + 3;
      pppppppuStack_138 = (uint *******)&uStack_168;
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      uVar21 = (ulong)pppppppuStack_248 & 1;
      auStack_228 = (undefined1  [8])uStack_168;
      ppppppuStack_148 = (uint ******)auStack_228;
      pppppppuStack_140 = (uint *******)apppppppuStack_f0;
      apppppppuStack_f0[0] = uStack_168;
      if (((ulong)pppppppuStack_248 & 1) == 0) {
        uStack_168[2] = (uint ******)pppppppuStack_238;
        *uStack_168 = (uint ******)pppppppuStack_248;
        uStack_168[1] = (uint ******)pppppppuStack_240;
      }
      else {
        pppppppuStack_220 = uStack_168;
        func_0x0412e5e0(uStack_168,pppppppuStack_238,pppppppuStack_240);
      }
      pppppppuStack_220 = uStack_168 + 3;
      auStack_200 = (undefined1  [4])0xf47cca0;
      uStack_1fc = 0;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      cStack_1f8 = '\0';
      uStack_1f7 = 0;
      uStack_1f6 = 0;
      uStack_1f4 = 0;
      pppppppuStack_1f0 = (uint *******)0x0;
      pppppppuStack_1e8 = (uint *******)0x0;
      func_0x0488f040(&cStack_1f8,auStack_228,pppppppuStack_220,
                      ((long)pppppppuStack_220 - (long)auStack_228 >> 3) * -0x5555555555555555);
      ppppppuStack_1e0 = (uint ******)0x200000014;
      auStack_200 = (undefined1  [4])0xf47b778;
      uStack_1fc = 0;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      func_0x0d604f40(uStack_b0,auStack_200);
      auStack_200 = (undefined1  [4])0xf47cca0;
      uStack_1fc = 0;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      pppppppuVar15 =
           (uint *******)CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
      if (pppppppuVar15 != (uint *******)0x0) {
        pppppppuVar20 = pppppppuVar15;
        pppppppuVar26 = pppppppuStack_1f0;
        if (pppppppuVar15 != pppppppuStack_1f0) {
          do {
            if (((ulong)pppppppuVar26[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar26[-1],(ulong)pppppppuVar26[-3] & 0xfffffffffffffffe);
            }
            pppppppuVar26 = pppppppuVar26 + -3;
          } while (pppppppuVar26 != pppppppuVar15);
          pppppppuVar20 =
               (uint *******)
               CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
        }
        pppppppuStack_1f0 = pppppppuVar15;
        func_0x0412a280(pppppppuVar20,(long)pppppppuStack_1e8 - (long)pppppppuVar20);
      }
      auVar25 = auStack_228;
      pppppppuVar15 = pppppppuStack_220;
      if (auStack_228 != (undefined1  [8])0x0) {
        for (; auVar25 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
          if (((ulong)pppppppuVar15[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_220 = (uint *******)auVar25;
        func_0x0412a280(auStack_228,(long)pppppppuStack_218 - (long)auStack_228);
      }
      if (uVar21 != 0) {
        func_0x0412a280(pppppppuStack_238,(ulong)pppppppuStack_248 & 0xfffffffffffffffe);
      }
      lVar23 = lStack_118;
      *(undefined1 *)(lStack_118 + 0x159) = 6;
      ppppppuStack_148 = (uint ******)0x1000000000001;
      pppppppuStack_140 = (uint *******)&UNK_01254d89;
      uStack_50 = 0;
      pppppppuStack_138 = (uint *******)&UNK_01254d89;
      uStack_58 = 0;
      pbVar17 = (byte *)(lStack_118 + 0xf8);
      cVar6 = (**(code **)(*param_6 + 0xe8))(param_6,pbVar17);
      lVar13 = lStack_118;
      if (cVar6 == '\0') {
        if ((*pbVar17 & 1) == 0) {
          pppppppuStack_238 = *(uint ********)(lVar23 + 0x108);
          pppppppuStack_248 = *(uint ********)pbVar17;
          pppppppuStack_240 = *(uint ********)(lVar23 + 0x100);
        }
        else {
          func_0x0412e5e0(&pppppppuStack_248,*(undefined8 *)(lStack_118 + 0x108),
                          *(undefined8 *)(lStack_118 + 0x100));
        }
      }
      else {
        (**(code **)(*param_6 + 0x98))(&pppppppuStack_248,param_6,lStack_118,pbVar17);
      }
      pbVar17 = (byte *)(lVar13 + 0x110);
      cVar6 = (**(code **)(*param_6 + 0xe8))(param_6,pbVar17);
      if (cVar6 == '\0') {
        if ((*pbVar17 & 1) == 0) {
          ppppppuStack_178 = *(uint *******)(lVar13 + 0x120);
          auStack_188 = *(undefined1 (*) [8])pbVar17;
          ppppppuStack_180 = *(uint *******)(lVar13 + 0x118);
        }
        else {
          func_0x0412e5e0(auStack_188,*(undefined8 *)(lStack_118 + 0x120),
                          *(undefined8 *)(lStack_118 + 0x118));
        }
      }
      else {
        (**(code **)(*param_6 + 0x98))(auStack_188,param_6,lStack_118,pbVar17);
      }
      ppppppuVar18 = (uint ******)((ulong)auStack_188 >> 1 & 0x7f);
      ppppppuVar11 = (uint ******)(auStack_188 + 1);
      if (((ulong)auStack_188 & 1) != 0) {
        ppppppuVar18 = ppppppuStack_180;
        ppppppuVar11 = ppppppuStack_178;
      }
      puVar16 = (undefined8 *)func_0x0412f8c0(&pppppppuStack_248,ppppppuVar11,ppppppuVar18);
      lVar23 = lStack_118;
      pppppppuStack_218 = (uint *******)puVar16[2];
      auStack_228 = (undefined1  [8])*puVar16;
      pppppppuStack_220 = (uint *******)puVar16[1];
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      if (((ulong)auStack_228 & 1) == 0) {
        uVar21 = (ulong)auStack_228 >> 1 & 0x7f;
        pppppppuVar15 = (uint *******)(auStack_228 + 1);
      }
      else {
        uVar21 = (ulong)pppppppuStack_220 & 0xffffffff;
        pppppppuVar15 = pppppppuStack_218;
      }
      auStack_c8 = func_0x0eed8710(pppppppuVar15,uVar21,0);
      uStack_168 = (uint *******)((ulong)uStack_168 & 0xffffffffffff0000);
      apppppppuStack_f0[0] = (uint *******)((ulong)apppppppuStack_f0[0] & 0xffffffffffff0000);
      func_0x0ee36220(auStack_200,&UNK_01e79d90,&ppppppuStack_148,auStack_c8,1,&uStack_168,
                      apppppppuStack_f0);
      if (uStack_1c0 == 3) {
        lVar13 = 0x1b1;
LAB_0d6117cc:
        *(undefined1 *)(lVar23 + lVar13) = 1;
      }
      else if (uStack_1c0 == 4) {
        lVar13 = 0x1af;
        goto LAB_0d6117cc;
      }
      uVar21 = *(ulong *)(lVar23 + 0x1c0);
      if (uVar21 < *(ulong *)(lVar23 + 0x1c8)) {
        func_0x0d6125d0(uVar21,auStack_200);
        *(ulong *)(lVar23 + 0x1c0) = uVar21 + 0x78;
        *(ulong *)(lVar23 + 0x1c0) = uVar21 + 0x78;
      }
      else {
        uVar10 = func_0x0d6334d0(lVar23 + 0x1b8,auStack_200);
        *(undefined8 *)(lVar23 + 0x1c0) = uVar10;
      }
      if ((bStack_1a0 & 1) != 0) {
        func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
      }
      if ((bStack_1b8 & 1) != 0) {
        func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
      }
      if (((ulong)appppppuStack_1d8[0] >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)appppppuStack_1d8[0] & 0xff00ffffffffffff) - 8);
      }
      appppppuStack_1d8[0] = (uint ******)0x0;
      if (((ulong)ppppppuStack_1e0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppppuStack_1e0 & 0xff00ffffffffffff) - 8);
      }
      ppppppuStack_1e0 = (uint ******)0x0;
      if (((uint)auStack_200 & 1) != 0) {
        func_0x0412a280(pppppppuStack_1f0,
                        CONCAT17(uStack_1f9,
                                 CONCAT16(uStack_1fa,
                                          CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))) &
                        0xfffffffffffffffe);
      }
      if (((ulong)apppppppuStack_f0[0] & 1) != 0) {
        func_0x0412a280(uStack_e0,(ulong)apppppppuStack_f0[0] & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_168 & 1) != 0) {
        func_0x0412a280(ppppppuStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
      }
      if (((ulong)auStack_228 & 1) != 0) {
        func_0x0412a280(pppppppuStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
      }
      if (((ulong)auStack_188 & 1) != 0) {
        func_0x0412a280(ppppppuStack_178,(ulong)auStack_188 & 0xfffffffffffffffe);
      }
      if (((ulong)pppppppuStack_248 & 1) != 0) {
        func_0x0412a280(pppppppuStack_238,(ulong)pppppppuStack_248 & 0xfffffffffffffffe);
      }
      if (((ulong)pppppppuStack_138 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_138 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_138 = (uint *******)0x0;
      if (((ulong)pppppppuStack_140 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_140 & 0xff00ffffffffffff) - 8);
      }
      goto LAB_0d611a53;
    }
    func_0x0d5ef090(&pppppppuStack_248,param_2);
    auStack_228 = (undefined1  [8])0x0;
    pppppppuStack_220 = (uint *******)0x0;
    pppppppuStack_218 = (uint *******)0x0;
    ppppppuStack_180 = (uint ******)((ulong)ppppppuStack_180 & 0xffffffffffffff00);
    auStack_188 = (undefined1  [8])auStack_228;
    uStack_168 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (uStack_168 == (uint *******)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    pppppppuStack_218 = uStack_168 + 3;
    pppppppuStack_140 = (uint *******)apppppppuStack_f0;
    pppppppuStack_138 = (uint *******)&uStack_168;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    bVar7 = (byte)pppppppuStack_248 & 1;
    auStack_228 = (undefined1  [8])uStack_168;
    ppppppuStack_148 = (uint ******)auStack_228;
    apppppppuStack_f0[0] = uStack_168;
    if (((ulong)pppppppuStack_248 & 1) == 0) {
      uStack_168[2] = (uint ******)pppppppuStack_238;
      *uStack_168 = (uint ******)pppppppuStack_248;
      uStack_168[1] = (uint ******)pppppppuStack_240;
    }
    else {
      pppppppuStack_220 = uStack_168;
      func_0x0412e5e0(uStack_168,pppppppuStack_238,pppppppuStack_240);
    }
    pppppppuStack_220 = uStack_168 + 3;
    auStack_200 = (undefined1  [4])0xf47cca0;
    uStack_1fc = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    cStack_1f8 = '\0';
    uStack_1f7 = 0;
    uStack_1f6 = 0;
    uStack_1f4 = 0;
    pppppppuStack_1f0 = (uint *******)0x0;
    pppppppuStack_1e8 = (uint *******)0x0;
    func_0x0488f040(&cStack_1f8,auStack_228,pppppppuStack_220,
                    ((long)pppppppuStack_220 - (long)auStack_228 >> 3) * -0x5555555555555555);
    ppppppuStack_1e0 = (uint ******)0x200000014;
    auStack_200 = (undefined1  [4])0xf47b778;
    uStack_1fc = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    func_0x0d5eed10(param_4,auStack_200);
    auStack_200 = (undefined1  [4])0xf47cca0;
    uStack_1fc = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    pppppppuVar15 =
         (uint *******)CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
    if (pppppppuVar15 != (uint *******)0x0) {
      pppppppuVar20 = pppppppuVar15;
      pppppppuVar26 = pppppppuStack_1f0;
      if (pppppppuVar15 != pppppppuStack_1f0) {
        do {
          if (((ulong)pppppppuVar26[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar26[-1],(ulong)pppppppuVar26[-3] & 0xfffffffffffffffe);
          }
          pppppppuVar26 = pppppppuVar26 + -3;
        } while (pppppppuVar26 != pppppppuVar15);
        pppppppuVar20 =
             (uint *******)CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)))
        ;
      }
      pppppppuStack_1f0 = pppppppuVar15;
      func_0x0412a280(pppppppuVar20,(long)pppppppuStack_1e8 - (long)pppppppuVar20);
    }
    auVar25 = auStack_228;
    pppppppuVar15 = pppppppuStack_220;
    if (auStack_228 != (undefined1  [8])0x0) {
      for (; auVar25 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
        if (((ulong)pppppppuVar15[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
        }
      }
      goto LAB_0d611608;
    }
  }
  else {
    cVar6 = func_0x04864270(puVar9);
    lVar23 = lStack_118;
    if (cVar6 != '\0') {
      func_0x04865530(auStack_98,puVar9);
      func_0x048655b0(auStack_68,puVar9);
      lStack_a0 = lVar23 + 0x1b8;
      uVar19 = 0;
      uStack_cc = uStack_10c & 0xff;
      while( true ) {
        cVar6 = func_0x04862c80(auStack_98,auStack_68);
        if (cVar6 != '\0') break;
        uVar10 = func_0x04862b80(auStack_98);
        cVar6 = func_0x04864290(uVar10);
        if (cVar6 == '\0') {
          func_0x0d5ef090(&pppppppuStack_248,param_2);
          auStack_228 = (undefined1  [8])0x0;
          pppppppuStack_220 = (uint *******)0x0;
          pppppppuStack_218 = (uint *******)0x0;
          auStack_188 = (undefined1  [8])auStack_228;
          ppppppuStack_180 = (uint ******)((ulong)ppppppuStack_180 & 0xffffffffffffff00);
          pppppppuVar15 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar15 == (uint *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          pppppppuStack_218 = pppppppuVar15 + 3;
          ppppppuStack_148 = (uint ******)auStack_228;
          pppppppuStack_140 = (uint *******)apppppppuStack_f0;
          pppppppuStack_138 = (uint *******)&uStack_168;
          uStack_130 = uStack_130 & 0xffffffffffffff00;
          uVar21 = (ulong)pppppppuStack_248 & 1;
          auStack_228 = (undefined1  [8])pppppppuVar15;
          uStack_168 = pppppppuVar15;
          apppppppuStack_f0[0] = pppppppuVar15;
          if (((ulong)pppppppuStack_248 & 1) == 0) {
            pppppppuVar15[2] = (uint ******)pppppppuStack_238;
            *pppppppuVar15 = (uint ******)pppppppuStack_248;
            pppppppuVar15[1] = (uint ******)pppppppuStack_240;
          }
          else {
            pppppppuStack_220 = pppppppuVar15;
            func_0x0412e5e0(pppppppuVar15,pppppppuStack_238,pppppppuStack_240);
          }
          pppppppuStack_220 = uStack_168 + 3;
          auStack_200 = (undefined1  [4])0xf47cca0;
          uStack_1fc = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          cStack_1f8 = '\0';
          uStack_1f7 = 0;
          uStack_1f6 = 0;
          uStack_1f4 = 0;
          pppppppuStack_1f0 = (uint *******)0x0;
          pppppppuStack_1e8 = (uint *******)0x0;
          func_0x0488f040(&cStack_1f8,auStack_228,pppppppuStack_220,
                          ((long)pppppppuStack_220 - (long)auStack_228 >> 3) * -0x5555555555555555);
          ppppppuStack_1e0 = (uint ******)0x200000009;
          auStack_200 = (undefined1  [4])0xf47b778;
          uStack_1fc = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          func_0x0d5eed10(param_4,auStack_200);
          auStack_200 = (undefined1  [4])0xf47cca0;
          uStack_1fc = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          pppppppuVar15 =
               (uint *******)
               CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
          if (pppppppuVar15 != (uint *******)0x0) {
            pppppppuVar20 = pppppppuVar15;
            pppppppuVar26 = pppppppuStack_1f0;
            if (pppppppuVar15 != pppppppuStack_1f0) {
              do {
                if (((ulong)pppppppuVar26[-3] & 1) != 0) {
                  func_0x0412a280(pppppppuVar26[-1],(ulong)pppppppuVar26[-3] & 0xfffffffffffffffe);
                }
                pppppppuVar26 = pppppppuVar26 + -3;
              } while (pppppppuVar26 != pppppppuVar15);
              pppppppuVar20 =
                   (uint *******)
                   CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
            }
            pppppppuStack_1f0 = pppppppuVar15;
            func_0x0412a280(pppppppuVar20,(long)pppppppuStack_1e8 - (long)pppppppuVar20);
          }
          auVar25 = auStack_228;
          pppppppuVar15 = pppppppuStack_220;
          if (auStack_228 != (undefined1  [8])0x0) {
            for (; auVar25 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
              if (((ulong)pppppppuVar15[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
              }
            }
            pppppppuStack_220 = (uint *******)auVar25;
            func_0x0412a280(auStack_228,(long)pppppppuStack_218 - (long)auStack_228);
          }
          lVar23 = lStack_118;
          if (uVar21 != 0) {
            func_0x0412a280(pppppppuStack_238,(ulong)pppppppuStack_248 & 0xfffffffffffffffe);
            lVar23 = lStack_118;
          }
        }
        else {
          ppppppuVar11 = (uint ******)func_0x04136630(&ppppppuStack_148,uVar19);
          uVar21 = (long)ppppppuVar11 - (long)&ppppppuStack_148;
          if (0xfffffffffffffff7 < uVar21) {
            uVar12 = func_0x04882e30();
            func_0x0488eff0(auStack_228);
            pppppppuStack_240 = (uint *******)uVar10;
            func_0x0488ef50(&uStack_168);
            if (((ulong)auStack_188 & 1) != 0) {
              func_0x0412a280(ppppppuStack_178,(ulong)auStack_188 & 0xfffffffffffffffe);
            }
            func_0x06272ec0(auStack_200);
            func_0x0d6241a0(&lStack_48);
            _Unwind_Resume(uVar12);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar21 < 0x17) {
            auStack_200[0] = (char)uVar21 * '\x02';
            pppppppuVar15 = (uint *******)(auStack_200 + 1);
            uVar22 = uStack_cc;
            if ((uint *******)ppppppuVar11 != &ppppppuStack_148) goto LAB_0d60fea3;
          }
          else {
            lVar23 = (uVar21 | 7) + 1;
            if ((uVar21 | 7) == 0x17) {
              lVar23 = 0x1a;
            }
            pppppppuVar15 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar23);
            if (pppppppuVar15 == (uint *******)0x0) {
              func_0x0eec74c0(lVar23,0);
            }
            auStack_200 = (undefined1  [4])((uint)lVar23 | 1);
            uStack_1fc = (undefined1)((ulong)lVar23 >> 0x20);
            uStack_1fb = (undefined1)((ulong)lVar23 >> 0x28);
            uStack_1fa = (undefined1)((ulong)lVar23 >> 0x30);
            uStack_1f9 = (undefined1)((ulong)lVar23 >> 0x38);
            uStack_1f7 = (undefined1)(uVar21 >> 8);
            uStack_1f6 = (undefined2)(uVar21 >> 0x10);
            uStack_1f4 = (uint)(uVar21 >> 0x20);
            cStack_1f8 = (char)uVar21;
            pppppppuStack_1f0 = pppppppuVar15;
LAB_0d60fea3:
            uVar22 = uStack_cc;
            memcpy(pppppppuVar15,&ppppppuStack_148,uVar21);
          }
          *(undefined1 *)((long)pppppppuVar15 + uVar21) = 0;
          param_4 = uStack_b0;
          puVar1 = *(uint **)(param_2 + 8);
          lStack_70 = param_2;
          if (puVar1 < *(uint **)(param_2 + 0x10)) {
            if (((uint)auStack_200 & 1) == 0) {
              *(uint ********)(puVar1 + 4) = pppppppuStack_1f0;
              *puVar1 = (uint)auStack_200;
              puVar1[1] = CONCAT13(uStack_1f9,CONCAT12(uStack_1fa,CONCAT11(uStack_1fb,uStack_1fc)));
              puVar1[2] = CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8));
              puVar1[3] = uStack_1f4;
            }
            else {
              func_0x0412e5e0(puVar1,pppppppuStack_1f0,
                              CONCAT44(uStack_1f4,
                                       CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8))));
            }
            *(uint **)(param_2 + 8) = puVar1 + 6;
            *(uint **)(param_2 + 8) = puVar1 + 6;
          }
          else {
            uVar12 = func_0x04909a40(param_2,auStack_200);
            *(undefined8 *)(param_2 + 8) = uVar12;
            param_4 = uStack_b0;
          }
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          auStack_200 = (undefined1  [4])0x69757508;
          uStack_1fc = 100;
          uStack_1fb = 0;
          auVar27 = func_0x0d606550(uVar10,auStack_200,&UNK_01e79d90,param_2,param_4,uVar22);
          lVar23 = lStack_118;
          auStack_40 = auVar27;
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_1fb = 0x69;
          uStack_1fa = 0x6f;
          uStack_1f9 = 0x6e;
          auStack_200 = (undefined1  [4])0x7265760e;
          uStack_1fc = 0x73;
          cStack_1f8 = '\0';
          func_0x0d605200(&pppppppuStack_248,uVar10,auStack_200,param_2,param_4,uVar22);
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          auStack_200 = (undefined1  [4])0x73656416;
          uStack_1fc = 99;
          uStack_1fb = 0x72;
          uStack_1fa = 0x69;
          uStack_1f9 = 0x70;
          cStack_1f8 = 't';
          uStack_1f7 = 0x69;
          uStack_1f6 = 0x6e6f;
          uStack_1f4 = uStack_1f4 & 0xffffff00;
          func_0x0d6050c0(auStack_188,uVar10,auStack_200,param_2,param_4,1);
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          auStack_200 = (undefined1  [4])0x70797408;
          uStack_1fc = 0x65;
          uStack_1fb = 0;
          func_0x0d6050c0(&uStack_168,uVar10,auStack_200,param_2,param_4,uVar22);
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          auStack_200 = (undefined1  [4])0x6e616c10;
          uStack_1fc = 0x67;
          uStack_1fb = 0x75;
          uStack_1fa = 0x61;
          uStack_1f9 = 0x67;
          cStack_1f8 = 'e';
          uStack_1f7 = 0;
          func_0x0d6050c0(apppppppuStack_f0,uVar10,auStack_200,param_2,param_4,1);
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          uStack_1fb = 0x79;
          auStack_200 = (undefined1  [4])0x746e650a;
          uStack_1fc = 0x72;
          uStack_1fa = 0;
          func_0x0d6050c0(auStack_c8,uVar10,auStack_200,param_2,param_4,1);
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          func_0x0ee34a30();
          lVar13 = func_0x0ee39a90(&DAT_0f7788e0,&uStack_168);
          if (lVar13 == 0) {
            cVar6 = '\0';
          }
          else {
            cVar6 = *(char *)(lVar13 + 0x28);
          }
          *(char *)(lVar23 + 0x159) = cVar6;
          iVar8 = func_0x0ee35e20(&uStack_168);
          if (iVar8 == 4) {
            *(undefined1 *)(lVar23 + 0x1af) = 1;
          }
          else if (iVar8 == 3) {
            *(undefined1 *)(lVar23 + 0x1b1) = 1;
          }
          if (cVar6 == '\0') {
            auStack_200 = (undefined1  [4])0x70797408;
            uStack_1fc = 0x65;
            uStack_1fb = 0;
            puVar14 = *(undefined4 **)(param_2 + 8);
            lStack_78 = param_2;
            if (puVar14 < *(undefined4 **)(param_2 + 0x10)) {
              *(uint ********)(puVar14 + 4) = pppppppuStack_1f0;
              *puVar14 = 0x70797408;
              puVar14[1] = CONCAT13(uStack_1f9,CONCAT12(uStack_1fa,0x65));
              puVar14[2] = CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8));
              puVar14[3] = uStack_1f4;
              puVar14 = puVar14 + 6;
              *(undefined4 **)(param_2 + 8) = puVar14;
            }
            else {
              puVar14 = (undefined4 *)func_0x04909a40(param_2,auStack_200);
            }
            *(undefined4 **)(param_2 + 8) = puVar14;
            if (((uint)auStack_200 & 1) != 0) {
              func_0x0412a280(pppppppuStack_1f0,
                              CONCAT17(uStack_1f9,
                                       CONCAT16(uStack_1fa,
                                                CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)
                                                        ))) & 0xfffffffffffffffe);
            }
            if ((char)uStack_10c == '\0') {
              func_0x0d5ef090(&pppppppuStack_108,param_2);
              auStack_228 = (undefined1  [8])0x0;
              pppppppuStack_220 = (uint *******)0x0;
              pppppppuStack_218 = (uint *******)0x0;
              pppppppuStack_88 = (uint *******)auStack_228;
              uStack_80 = 0;
              pppppppuVar15 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (pppppppuVar15 == (uint *******)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              pppppppuStack_218 = pppppppuVar15 + 3;
              ppppppuStack_148 = (uint ******)auStack_228;
              pppppppuStack_140 = (uint *******)&pppppppuStack_a8;
              pppppppuStack_138 = (uint *******)&pppppppuStack_d8;
              uStack_130 = uStack_130 & 0xffffffffffffff00;
              uVar21 = (ulong)pppppppuStack_108 & 1;
              auStack_228 = (undefined1  [8])pppppppuVar15;
              pppppppuStack_d8 = pppppppuVar15;
              pppppppuStack_a8 = pppppppuVar15;
              if (((ulong)pppppppuStack_108 & 1) == 0) {
                pppppppuVar15[2] = (uint ******)pppppppuStack_f8;
                *pppppppuVar15 = (uint ******)pppppppuStack_108;
                pppppppuVar15[1] = (uint ******)pppppppuStack_100;
              }
              else {
                pppppppuStack_220 = pppppppuVar15;
                func_0x0412e5e0(pppppppuVar15,pppppppuStack_f8,pppppppuStack_100);
              }
              pppppppuStack_220 = pppppppuStack_d8 + 3;
              auStack_200 = (undefined1  [4])0xf47cca0;
              uStack_1fc = 0;
              uStack_1fb = 0;
              uStack_1fa = 0;
              uStack_1f9 = 0;
              cStack_1f8 = '\0';
              uStack_1f7 = 0;
              uStack_1f6 = 0;
              uStack_1f4 = 0;
              pppppppuStack_1f0 = (uint *******)0x0;
              pppppppuStack_1e8 = (uint *******)0x0;
              func_0x0488f040(&cStack_1f8,auStack_228,pppppppuStack_220,
                              ((long)pppppppuStack_220 - (long)auStack_228 >> 3) *
                              -0x5555555555555555);
              ppppppuStack_1e0 = (uint ******)0x20000000c;
              auStack_200 = (undefined1  [4])0xf47b778;
              uStack_1fc = 0;
              uStack_1fb = 0;
              uStack_1fa = 0;
              uStack_1f9 = 0;
              func_0x0d5eed10(param_4,auStack_200);
              auStack_200 = (undefined1  [4])0xf47cca0;
              uStack_1fc = 0;
              uStack_1fb = 0;
              uStack_1fa = 0;
              uStack_1f9 = 0;
              pppppppuVar15 =
                   (uint *******)
                   CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
              if (pppppppuVar15 != (uint *******)0x0) {
                pppppppuVar20 = pppppppuVar15;
                pppppppuVar26 = pppppppuStack_1f0;
                if (pppppppuVar15 != pppppppuStack_1f0) {
                  do {
                    if (((ulong)pppppppuVar26[-3] & 1) != 0) {
                      func_0x0412a280(pppppppuVar26[-1],
                                      (ulong)pppppppuVar26[-3] & 0xfffffffffffffffe);
                    }
                    pppppppuVar26 = pppppppuVar26 + -3;
                  } while (pppppppuVar26 != pppppppuVar15);
                  pppppppuVar20 =
                       (uint *******)
                       CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
                }
                pppppppuStack_1f0 = pppppppuVar15;
                func_0x0412a280(pppppppuVar20,(long)pppppppuStack_1e8 - (long)pppppppuVar20);
              }
              auVar25 = auStack_228;
              pppppppuVar15 = pppppppuStack_220;
              if (auStack_228 != (undefined1  [8])0x0) {
                for (; auVar25 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3
                    ) {
                  if (((ulong)pppppppuVar15[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                pppppppuStack_220 = (uint *******)auVar25;
                func_0x0412a280(auStack_228,(long)pppppppuStack_218 - (long)auStack_228);
              }
              if (uVar21 != 0) {
                func_0x0412a280(pppppppuStack_f8,(ulong)pppppppuStack_108 & 0xfffffffffffffffe);
              }
              lVar13 = *(long *)(param_2 + 8);
              bVar7 = *(byte *)(lVar13 + -0x18);
              lVar23 = lStack_118;
            }
            else {
              func_0x0d5ef090(auStack_200,param_2);
              if (((ulong)uStack_168 & 1) == 0) {
                appppppuStack_1d8[0] = ppppppuStack_158;
                ppppppuStack_1e0 = (uint ******)CONCAT44(uStack_15c,uStack_160);
                pppppppuStack_1e8 = uStack_168;
              }
              else {
                func_0x0412e5e0(&pppppppuStack_1e8,ppppppuStack_158,CONCAT44(uStack_15c,uStack_160))
                ;
              }
              pppppppuStack_108 = (uint *******)0x0;
              pppppppuStack_100 = (uint *******)0x0;
              pppppppuStack_f8 = (uint *******)0x0;
              pppppppuStack_88 = (uint *******)&pppppppuStack_108;
              uStack_80 = 0;
              pppppppuVar15 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (pppppppuVar15 == (uint *******)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              pppppppuStack_f8 = pppppppuVar15 + 6;
              auStack_228 = (undefined1  [8])&pppppppuStack_108;
              pppppppuStack_220 = (uint *******)&pppppppuStack_a8;
              pppppppuStack_218 = (uint *******)&pppppppuStack_d8;
              uStack_210 = 0;
              pppppppuStack_108 = pppppppuVar15;
              pppppppuStack_100 = pppppppuVar15;
              pppppppuStack_a8 = pppppppuVar15;
              if (((uint)auStack_200 & 1) == 0) {
                pppppppuVar15[2] = (uint ******)pppppppuStack_1f0;
                *(undefined1 (*) [4])pppppppuVar15 = auStack_200;
                *(uint *)((long)pppppppuVar15 + 4) =
                     CONCAT13(uStack_1f9,CONCAT12(uStack_1fa,CONCAT11(uStack_1fb,uStack_1fc)));
                *(uint *)(pppppppuVar15 + 1) = CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8));
                *(uint *)((long)pppppppuVar15 + 0xc) = uStack_1f4;
                pppppppuStack_d8 = pppppppuVar15 + 3;
                if (((ulong)pppppppuStack_1e8 & 1) != 0) goto LAB_0d610718;
LAB_0d6105e7:
                pppppppuStack_d8[2] = appppppuStack_1d8[0];
                *pppppppuStack_d8 = (uint ******)pppppppuStack_1e8;
                pppppppuStack_d8[1] = ppppppuStack_1e0;
              }
              else {
                pppppppuStack_d8 = pppppppuVar15;
                func_0x0412e5e0(pppppppuVar15,pppppppuStack_1f0,
                                CONCAT44(uStack_1f4,
                                         CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8))));
                pppppppuStack_d8 = pppppppuStack_d8 + 3;
                if (((ulong)pppppppuStack_1e8 & 1) == 0) goto LAB_0d6105e7;
LAB_0d610718:
                func_0x0412e5e0(pppppppuStack_d8,appppppuStack_1d8[0],ppppppuStack_1e0);
              }
              pppppppuStack_100 = pppppppuStack_d8 + 3;
              ppppppuStack_148 = (uint ******)&UNK_0f47cca0;
              pppppppuStack_140 = (uint *******)0x0;
              pppppppuStack_138 = (uint *******)0x0;
              uStack_130 = 0;
              func_0x0488f040();
              uStack_128 = 0x200000013;
              ppppppuStack_148 = (uint ******)&UNK_0f47b778;
              func_0x0d604f40(param_4,&ppppppuStack_148);
              pppppppuVar20 = pppppppuStack_140;
              ppppppuStack_148 = (uint ******)&UNK_0f47cca0;
              pppppppuVar15 = pppppppuStack_138;
              if (pppppppuStack_140 != (uint *******)0x0) {
                for (; pppppppuVar20 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
                  if (((ulong)pppppppuVar15[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                pppppppuStack_138 = pppppppuVar20;
                func_0x0412a280(pppppppuStack_140,uStack_130 - (long)pppppppuStack_140);
              }
              pppppppuVar20 = pppppppuStack_108;
              pppppppuVar15 = pppppppuStack_100;
              if (pppppppuStack_108 != (uint *******)0x0) {
                for (; pppppppuVar20 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
                  if (((ulong)pppppppuVar15[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                pppppppuStack_100 = pppppppuVar20;
                func_0x0412a280(pppppppuStack_108,(long)pppppppuStack_f8 - (long)pppppppuStack_108);
              }
              if (((ulong)pppppppuStack_1e8 & 1) != 0) {
                func_0x0412a280(appppppuStack_1d8[0],(ulong)pppppppuStack_1e8 & 0xfffffffffffffffe);
              }
              uVar22 = _UNK_01e7b0a0;
              uVar4 = _UNK_01e7b0a4;
              ppppppuVar11 = _DAT_01e7b0a8;
              if (((uint)auStack_200 & 1) != 0) {
                func_0x0412a280(pppppppuStack_1f0,
                                CONCAT17(uStack_1f9,
                                         CONCAT16(uStack_1fa,
                                                  CONCAT15(uStack_1fb,
                                                           CONCAT14(uStack_1fc,auStack_200)))) &
                                0xfffffffffffffffe);
                uVar22 = _UNK_01e7b0a0;
                uVar4 = _UNK_01e7b0a4;
                ppppppuVar11 = _DAT_01e7b0a8;
              }
              _UNK_01e7b0a0 = uVar22;
              _UNK_01e7b0a4 = uVar4;
              _DAT_01e7b0a8 = ppppppuVar11;
              if (((ulong)uStack_168 & 1) == 0) {
                uStack_168 = (uint *******)CONCAT44(_UNK_01e7b09c,_DAT_01e7b098);
                *(undefined1 *)(lVar23 + 0x159) = 6;
                lVar13 = *(long *)(param_2 + 8);
                bVar7 = *(byte *)(lVar13 + -0x18);
                uStack_160 = uVar22;
                uStack_15c = uVar4;
                ppppppuStack_158 = ppppppuVar11;
              }
              else {
                func_0x04885120(&uStack_168,&UNK_01e7b099,9);
                *(undefined1 *)(lVar23 + 0x159) = 6;
                lVar13 = *(long *)(param_2 + 8);
                bVar7 = *(byte *)(lVar13 + -0x18);
              }
            }
            if ((bVar7 & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar13 + -8),
                              *(ulong *)(lVar13 + -0x18) & 0xfffffffffffffffe);
            }
            *(long *)(param_2 + 8) = lVar13 + -0x18;
          }
          func_0x0ee35f70(auStack_200,auStack_188,&pppppppuStack_248,auStack_40,&uStack_168,
                          apppppppuStack_f0,auStack_c8);
          if (uStack_1c0 == 3) {
            lVar13 = 0x1b1;
LAB_0d61093c:
            *(undefined1 *)(lVar23 + lVar13) = 1;
          }
          else if (uStack_1c0 == 4) {
            lVar13 = 0x1af;
            goto LAB_0d61093c;
          }
          uVar21 = *(ulong *)(lVar23 + 0x1c0);
          if (uVar21 < *(ulong *)(lVar23 + 0x1c8)) {
            func_0x0d6125d0(uVar21,auStack_200);
            *(ulong *)(lVar23 + 0x1c0) = uVar21 + 0x78;
            *(ulong *)(lVar23 + 0x1c0) = uVar21 + 0x78;
          }
          else {
            uVar10 = func_0x0d6334d0(lStack_a0,auStack_200);
            *(undefined8 *)(lVar23 + 0x1c0) = uVar10;
          }
          if ((bStack_1a0 & 1) != 0) {
            func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
          }
          if ((bStack_1b8 & 1) != 0) {
            func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
          }
          if (((ulong)appppppuStack_1d8[0] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)appppppuStack_1d8[0] & 0xff00ffffffffffff) - 8);
          }
          appppppuStack_1d8[0] = (uint ******)0x0;
          if (((ulong)ppppppuStack_1e0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_1e0 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_1e0 = (uint ******)0x0;
          if (((uint)auStack_200 & 1) != 0) {
            func_0x0412a280(pppppppuStack_1f0,
                            CONCAT17(uStack_1f9,
                                     CONCAT16(uStack_1fa,
                                              CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                                    ) & 0xfffffffffffffffe);
          }
          if ((auStack_c8._0_8_ & 1) != 0) {
            func_0x0412a280(uStack_b8,auStack_c8._0_8_ & 0xfffffffffffffffe);
          }
          if (((ulong)apppppppuStack_f0[0] & 1) != 0) {
            func_0x0412a280(uStack_e0,(ulong)apppppppuStack_f0[0] & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_168 & 1) != 0) {
            func_0x0412a280(ppppppuStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
          }
          if (((ulong)auStack_188 & 1) != 0) {
            func_0x0412a280(ppppppuStack_178,(ulong)auStack_188 & 0xfffffffffffffffe);
          }
          if (((ulong)pppppppuStack_238 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuStack_238 & 0xff00ffffffffffff) - 8);
          }
          pppppppuStack_238 = (uint *******)0x0;
          if (((ulong)pppppppuStack_240 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppppuStack_240 & 0xff00ffffffffffff) - 8);
          }
          lVar13 = *(long *)(param_2 + 8);
          if ((*(byte *)(lVar13 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar13 + -8),
                            *(ulong *)(lVar13 + -0x18) & 0xfffffffffffffffe);
          }
          *(long *)(param_2 + 8) = lVar13 + -0x18;
        }
        uVar19 = uVar19 + 1;
        func_0x04862ba0(auStack_98);
      }
      func_0x04862b40(auStack_68);
      func_0x04862b40(auStack_98);
      auVar5._8_8_ = auStack_c8._8_8_;
      auVar5._0_8_ = auStack_c8._0_8_;
      auVar27._8_8_ = auStack_c8._8_8_;
      auVar27._0_8_ = auStack_c8._0_8_;
      if (1 < uVar19) {
        lVar13 = *(long *)(lVar23 + 0x1b8);
        lVar2 = *(long *)(lVar23 + 0x1c0);
        auStack_c8 = auVar27;
        if (lVar13 != lVar2) {
          uVar21 = 0;
LAB_0d6110b0:
          uVar24 = 0x8000604040600U >> ((char)*(uint *)(lVar13 + 0x40) * '\b' & 0x3fU) & 0xffffffff;
          if (6 < *(uint *)(lVar13 + 0x40)) {
            uVar24 = 0;
          }
          if (((char)uVar21 == '\0') ||
             (cVar6 = (char)uVar24, uVar24 = uVar21, (char)uVar21 == cVar6)) goto LAB_0d6110a3;
          if ((char)uStack_10c != '\0') {
            func_0x0d6125d0(auStack_200,lVar2 + -0x78);
            uVar21 = *(ulong *)(lVar23 + 0x1b8);
            uVar24 = *(ulong *)(lVar23 + 0x1c0);
            while (uVar21 != uVar24) {
              uVar24 = uVar24 - 0x78;
              func_0x0d631800(uVar24);
            }
            *(ulong *)(lVar23 + 0x1c0) = uVar21;
            if (uStack_1c0 == 3) {
              lVar13 = 0x1b1;
LAB_0d611adf:
              *(undefined1 *)(lVar23 + lVar13) = 1;
            }
            else if (uStack_1c0 == 4) {
              lVar13 = 0x1af;
              goto LAB_0d611adf;
            }
            if (uVar21 < *(ulong *)(lVar23 + 0x1c8)) {
              func_0x0d6125d0(uVar21,auStack_200);
              lVar13 = uVar21 + 0x78;
              *(long *)(lVar23 + 0x1c0) = lVar13;
            }
            else {
              lVar13 = func_0x0d6334d0(lStack_a0,auStack_200);
            }
            *(long *)(lVar23 + 0x1c0) = lVar13;
            pbVar17 = &UNK_01e7b080 + (ulong)uStack_1c0 * 0x18;
            if (6 < (ulong)uStack_1c0) {
              pbVar17 = &UNK_01e7b080;
            }
            if ((*pbVar17 & 1) == 0) {
              ppppppuStack_178 = *(uint *******)(pbVar17 + 0x10);
              auStack_188 = *(undefined1 (*) [8])pbVar17;
              ppppppuStack_180 = *(uint *******)(pbVar17 + 8);
            }
            else {
              func_0x0412e5e0(auStack_188,*(undefined8 *)(pbVar17 + 0x10),
                              *(undefined8 *)(pbVar17 + 8));
            }
            pppppppuStack_248 = (uint *******)0x0;
            pppppppuStack_240 = (uint *******)0x0;
            pppppppuStack_238 = (uint *******)0x0;
            uStack_168 = (uint *******)&pppppppuStack_248;
            uStack_160 = uStack_160 & 0xffffff00;
            auStack_c8._0_8_ = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if ((uint *******)auStack_c8._0_8_ == (uint *******)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            pppppppuStack_238 = (uint *******)(auStack_c8._0_8_ + 0x18);
            auStack_228 = (undefined1  [8])&pppppppuStack_248;
            pppppppuStack_220 = (uint *******)auStack_c8;
            pppppppuStack_218 = (uint *******)apppppppuStack_f0;
            uStack_210 = 0;
            pppppppuStack_248 = (uint *******)auStack_c8._0_8_;
            apppppppuStack_f0[0] = (uint *******)auStack_c8._0_8_;
            if (((ulong)auStack_188 & 1) == 0) {
              *(uint *******)(auStack_c8._0_8_ + 0x10) = ppppppuStack_178;
              *(undefined1 (*) [8])auStack_c8._0_8_ = auStack_188;
              *(uint *******)(auStack_c8._0_8_ + 8) = ppppppuStack_180;
            }
            else {
              pppppppuStack_240 = (uint *******)auStack_c8._0_8_;
              func_0x0412e5e0(auStack_c8._0_8_,ppppppuStack_178,ppppppuStack_180);
            }
            pppppppuStack_240 = apppppppuStack_f0[0] + 3;
            ppppppuStack_148 = (uint ******)&UNK_0f47cca0;
            pppppppuStack_140 = (uint *******)0x0;
            pppppppuStack_138 = (uint *******)0x0;
            uStack_130 = 0;
            func_0x0488f040(&pppppppuStack_140,pppppppuStack_248,pppppppuStack_240,
                            ((long)pppppppuStack_240 - (long)pppppppuStack_248 >> 3) *
                            -0x5555555555555555);
            uStack_128 = 0x200000017;
            ppppppuStack_148 = (uint ******)&UNK_0f47b778;
            func_0x0d604f40(param_4,&ppppppuStack_148);
            pppppppuVar20 = pppppppuStack_140;
            ppppppuStack_148 = (uint ******)&UNK_0f47cca0;
            pppppppuVar15 = pppppppuStack_138;
            if (pppppppuStack_140 != (uint *******)0x0) {
              for (; pppppppuVar20 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
                if (((ulong)pppppppuVar15[-3] & 1) != 0) {
                  func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
                }
              }
              pppppppuStack_138 = pppppppuVar20;
              func_0x0412a280(pppppppuStack_140,uStack_130 - (long)pppppppuStack_140);
            }
            pppppppuVar20 = pppppppuStack_248;
            pppppppuVar15 = pppppppuStack_240;
            if (pppppppuStack_248 != (uint *******)0x0) {
              for (; pppppppuVar20 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
                if (((ulong)pppppppuVar15[-3] & 1) != 0) {
                  func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
                }
              }
              pppppppuStack_240 = pppppppuVar20;
              func_0x0412a280(pppppppuStack_248,(long)pppppppuStack_238 - (long)pppppppuStack_248);
            }
            if (((ulong)auStack_188 & 1) != 0) {
              func_0x0412a280(ppppppuStack_178,(ulong)auStack_188 & 0xfffffffffffffffe);
            }
            if ((bStack_1a0 & 1) != 0) {
              func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
            }
            if ((bStack_1b8 & 1) != 0) {
              func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
            }
            func_0x0ee386e0(appppppuStack_1d8);
            func_0x0ee386e0(&ppppppuStack_1e0);
            if (((uint)auStack_200 & 1) == 0) goto LAB_0d611a53;
            pppppppuVar15 =
                 (uint *******)
                 CONCAT17(uStack_1f9,
                          CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT14(uStack_1fc,auStack_200)))
                         );
            pppppppuVar20 = pppppppuStack_1f0;
            goto LAB_0d61162d;
          }
          ppppppuStack_148 = (uint ******)0x0;
          pppppppuStack_140 = (uint *******)0x0;
          pppppppuStack_138 = (uint *******)0x0;
          cStack_1f8 = '\0';
          uStack_1f7 = 0;
          uStack_1f6 = 0;
          uStack_1f4 = 0;
          pppppppuStack_1f0 = (uint *******)0x0;
          pppppppuStack_1e8 = (uint *******)0x0;
          ppppppuStack_1e0 = (uint ******)0x200000016;
          auStack_200 = (undefined1  [4])0xf47b778;
          uStack_1fc = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          func_0x0d5eed10(param_4,auStack_200);
        }
      }
      goto LAB_0d611a53;
    }
    func_0x0d5ef090(&pppppppuStack_248,param_2);
    auStack_228 = (undefined1  [8])0x0;
    pppppppuStack_220 = (uint *******)0x0;
    pppppppuStack_218 = (uint *******)0x0;
    ppppppuStack_180 = (uint ******)((ulong)ppppppuStack_180 & 0xffffffffffffff00);
    auStack_188 = (undefined1  [8])auStack_228;
    uStack_168 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (uStack_168 == (uint *******)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    pppppppuStack_218 = uStack_168 + 3;
    pppppppuStack_140 = (uint *******)apppppppuStack_f0;
    pppppppuStack_138 = (uint *******)&uStack_168;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    bVar7 = (byte)pppppppuStack_248 & 1;
    auStack_228 = (undefined1  [8])uStack_168;
    ppppppuStack_148 = (uint ******)auStack_228;
    apppppppuStack_f0[0] = uStack_168;
    if (((ulong)pppppppuStack_248 & 1) == 0) {
      uStack_168[2] = (uint ******)pppppppuStack_238;
      *uStack_168 = (uint ******)pppppppuStack_248;
      uStack_168[1] = (uint ******)pppppppuStack_240;
    }
    else {
      pppppppuStack_220 = uStack_168;
      func_0x0412e5e0(uStack_168,pppppppuStack_238,pppppppuStack_240);
    }
    pppppppuStack_220 = uStack_168 + 3;
    auStack_200 = (undefined1  [4])0xf47cca0;
    uStack_1fc = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    cStack_1f8 = '\0';
    uStack_1f7 = 0;
    uStack_1f6 = 0;
    uStack_1f4 = 0;
    pppppppuStack_1f0 = (uint *******)0x0;
    pppppppuStack_1e8 = (uint *******)0x0;
    func_0x0488f040(&cStack_1f8,auStack_228,pppppppuStack_220,
                    ((long)pppppppuStack_220 - (long)auStack_228 >> 3) * -0x5555555555555555);
    ppppppuStack_1e0 = (uint ******)0x200000009;
    auStack_200 = (undefined1  [4])0xf47b778;
    uStack_1fc = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    func_0x0d5eed10(param_4,auStack_200);
    auStack_200 = (undefined1  [4])0xf47cca0;
    uStack_1fc = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    pppppppuVar15 =
         (uint *******)CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)));
    if (pppppppuVar15 != (uint *******)0x0) {
      pppppppuVar20 = pppppppuVar15;
      pppppppuVar26 = pppppppuStack_1f0;
      if (pppppppuVar15 != pppppppuStack_1f0) {
        do {
          if (((ulong)pppppppuVar26[-3] & 1) != 0) {
            func_0x0412a280(pppppppuVar26[-1],(ulong)pppppppuVar26[-3] & 0xfffffffffffffffe);
          }
          pppppppuVar26 = pppppppuVar26 + -3;
        } while (pppppppuVar26 != pppppppuVar15);
        pppppppuVar20 =
             (uint *******)CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,cStack_1f8)))
        ;
      }
      pppppppuStack_1f0 = pppppppuVar15;
      func_0x0412a280(pppppppuVar20,(long)pppppppuStack_1e8 - (long)pppppppuVar20);
    }
    auVar25 = auStack_228;
    pppppppuVar15 = pppppppuStack_220;
    if (auStack_228 != (undefined1  [8])0x0) {
      for (; auVar25 != (undefined1  [8])pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
        if (((ulong)pppppppuVar15[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
        }
      }
LAB_0d611608:
      pppppppuStack_220 = (uint *******)auVar25;
      func_0x0412a280(auStack_228,(long)pppppppuStack_218 - (long)auStack_228);
    }
  }
  pppppppuVar15 = pppppppuStack_248;
  pppppppuVar20 = pppppppuStack_238;
  if (bVar7 != 0) {
LAB_0d61162d:
    func_0x0412a280(pppppppuVar20,(ulong)pppppppuVar15 & 0xfffffffffffffffe);
  }
LAB_0d611a53:
  lVar23 = *(long *)(param_2 + 8);
  if ((*(byte *)(lVar23 + -0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar23 + -8),*(ulong *)(lVar23 + -0x18) & 0xfffffffffffffffe);
  }
  *(long *)(param_2 + 8) = lVar23 + -0x18;
  return;
LAB_0d6110a3:
  lVar13 = lVar13 + 0x78;
  uVar21 = uVar24;
  auStack_c8 = auVar5;
  if (lVar13 == lVar2) goto LAB_0d611a53;
  goto LAB_0d6110b0;
}


