/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x798bdd0 (ELF vaddr 0x788bdd0)
 * Label: caller-of-callee
 * Body:  [[0798bdd0, 0798c570] [0798c580, 0798e68d] [0798eca0, 0798f117]]
 * Ghidra: FUN_0798bdd0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0798bdd0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [8];
  undefined8 uVar13;
  byte *pbVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *******pppppppuVar22;
  uint uVar23;
  undefined8 ******ppppppuVar24;
  undefined *puVar25;
  byte *pbVar26;
  undefined8 ******ppppppuVar27;
  long *plVar28;
  long *plVar29;
  bool bVar30;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  char cStack_178;
  undefined *puStack_168;
  long *plStack_160;
  undefined1 auStack_158 [8];
  long *plStack_150;
  code *pcStack_148;
  code *pcStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  char cStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 *******pppppppuStack_f8;
  ulong uStack_f0;
  code *pcStack_e0;
  int iStack_d8;
  char cStack_d4;
  long lStack_d0;
  long lStack_c0;
  undefined8 *******pppppppuStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  
  bVar3 = (**(code **)(*param_1 + 0x18))();
  if ((bVar3 & 2) != 0) {
    cVar4 = *(char *)((long)param_3 + 0x24);
    puVar19 = (undefined8 *)*param_3;
    puVar16 = puVar19;
    if (cVar4 == '\x02') {
      puVar16 = param_3;
    }
    if (puVar16 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x24a0a739) {
      uVar13 = param_3[5];
      lVar9 = param_3[6];
      if (lVar9 == 0) {
        uStack_60 = 0x798ecff;
        (*(code *)param_3[7])(0,param_3,0);
        lVar9 = param_3[6];
        cVar4 = *(char *)((long)param_3 + 0x24);
        puVar19 = (undefined8 *)*param_3;
      }
      if (cVar4 == '\x02') {
        puVar19 = param_3;
      }
      uStack_60 = 0x798ed21;
      puVar16 = (undefined8 *)func_0x0488e200(uVar13,lVar9,0xdb5f58c7,puVar19);
    }
    uStack_60 = 0x798ed31;
    func_0x0ed6d600(auStack_40,*param_5);
    bVar3 = *(byte *)(param_1 + 1) | *(byte *)((long)param_1 + 9);
    *(byte *)((long)param_1 + 9) = bVar3 | 1;
    uStack_60 = 0x798ed4e;
    uVar20 = (**(code **)(*param_1 + 0x98))(param_1);
    *(byte *)((long)param_1 + 9) = bVar3;
    if ((uVar20 >> 0x20 & 1) == 0) {
      uVar10 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x798ed8e;
      uStack_60 = uVar10;
      cVar4 = func_0x0798f150(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798edbc;
      uStack_60 = uVar10;
      cVar4 = func_0x0798f360(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798edea;
      uStack_60 = uVar10;
      cVar4 = func_0x0798f580(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798ee18;
      uStack_60 = uVar10;
      cVar4 = func_0x0798f7a0(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798ee46;
      uStack_60 = uVar10;
      cVar4 = func_0x0798f9c0(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798ee74;
      uStack_60 = uVar10;
      cVar4 = func_0x0798fbe0(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798eea2;
      uStack_60 = uVar10;
      cVar4 = func_0x0798fe10(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x798eed0;
      uStack_60 = uVar10;
      cVar4 = func_0x07990030(param_1,param_3[5],puVar16,param_4,param_5,9);
      if (cVar4 != '\0') {
        return;
      }
      uVar13 = param_3[5];
      uVar20 = 9;
      uStack_60 = uVar10;
    }
    else {
      if (8 < (uint)uVar20) {
        uStack_48 = 0x2d000001258dae;
        uStack_60 = 0x798f0e5;
        func_0x0ed5ffe0(*param_5,8,&uStack_48);
        if ((uStack_48 >> 0x37 & 1) == 0) {
          return;
        }
        uStack_60 = 0x798f109;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
        return;
      }
      uStack_60 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x798ef3b;
      uStack_50 = uStack_60;
      cVar4 = func_0x0798f150(param_1,param_3[5],puVar16,param_4,param_5,uVar20 & 0xff);
      if (cVar4 != '\0') {
        return;
      }
      uVar20 = uVar20 & 0xff;
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798ef6c;
      cVar4 = func_0x0798f360(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798ef99;
      cVar4 = func_0x0798f580(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798efc6;
      cVar4 = func_0x0798f7a0(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798eff3;
      cVar4 = func_0x0798f9c0(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798f020;
      cVar4 = func_0x0798fbe0(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798f04d;
      cVar4 = func_0x0798fe10(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x798f07a;
      cVar4 = func_0x07990030(param_1,param_3[5],puVar16,param_4,param_5,uVar20);
      if (cVar4 != '\0') {
        return;
      }
      uVar13 = param_3[5];
      uStack_60 = uStack_50;
    }
    puStack_68 = puStack_58;
    uStack_70 = 0x798f0a7;
    func_0x07990250(param_1,uVar13,puVar16,param_4,param_5,uVar20);
    return;
  }
  if (bVar3 != 1) {
    uStack_70 = 0x120000012f2525;
    func_0x0ed5ffe0(*param_5,8,&uStack_70);
    if ((uStack_70 >> 0x37 & 1) == 0) {
      return;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_108 = param_4;
  func_0x0ed6d600(&puStack_68,*param_5);
  uStack_48 = param_3[5];
  pppppppuVar22 = (undefined8 *******)*param_5;
  ppppppuVar27 = (undefined8 ******)((long)param_2 + 9);
  bVar30 = (*(byte *)(param_2 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)param_2[3];
  if (bVar30) {
    ppppppuVar24 = ppppppuVar27;
  }
  uVar20 = (ulong)(*(byte *)(param_2 + 1) >> 1);
  if (!bVar30) {
    uVar20 = param_2[2];
  }
  puStack_110 = param_3;
  plStack_100 = param_5;
  plStack_b0 = param_1;
  puStack_88 = param_2;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_168 = (undefined *)((ulong)((uint)uVar20 & 0x7f) << 0x30);
  }
  else if (uVar20 < 0x80) {
    puStack_168 = (undefined *)(uVar20 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar9 = uVar20 + 9;
    pppppppuStack_b8 = pppppppuVar22;
    puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
    if (puVar8 == (ulong *)0x0 && lVar9 != 0) {
      FUN_0eec74c0(lVar9,8);
    }
    *puVar8 = uVar20;
    func_0x0eee2f00(puVar8 + 1,ppppppuVar24,uVar20);
    *(undefined1 *)((long)puVar8 + uVar20 + 8) = 0;
    puStack_168 = (undefined *)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pppppppuVar22 = pppppppuStack_b8;
  }
  plVar29 = plStack_b0;
  puVar6 = (uint *)func_0x0ed6d180(pppppppuVar22,&puStack_168,0);
  if (((ulong)puStack_168 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_168 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_168 = (undefined *)0x0;
  bVar30 = (*(byte *)(puStack_88 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_88[3];
  if (bVar30) {
    ppppppuVar24 = ppppppuVar27;
  }
  uVar20 = (ulong)(*(byte *)(puStack_88 + 1) >> 1);
  if (!bVar30) {
    uVar20 = puStack_88[2];
  }
  cVar4 = (**(code **)(*plVar29 + 0xb8))(plVar29,ppppppuVar24,uVar20);
  if (cVar4 == '\0') {
    _auStack_158 = (*(code *)*puStack_88)(uStack_48);
    func_0x0ed8bc80(&uStack_1b8,auStack_158,*(undefined1 *)((long)pppppppuVar22 + 0x2aa));
    uVar20 = (ulong)uStack_1b8 >> 1 & 0x7f;
    pcVar2 = (code *)((long)&uStack_1b8 + 1);
    if (((ulong)uStack_1b8 & 1) != 0) {
      uVar20 = uStack_1b0;
      pcVar2 = pcStack_1a8;
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (pcVar2 == (code *)0x0) {
      pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)uVar20 & 0x7f) << 0x30);
    }
    else {
      lVar9 = uVar20 + 9;
      pppppppuStack_b8 = pppppppuVar22;
      puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && puVar8 == (ulong *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *puVar8 = uVar20;
      func_0x0eee2f00(puVar8 + 1,pcVar2,uVar20);
      *(undefined1 *)((long)puVar8 + uVar20 + 8) = 0;
      pppppppuStack_f8 =
           (undefined8 *******)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      pppppppuVar22 = pppppppuStack_b8;
    }
    plVar29 = plStack_b0;
    func_0x0ed5ffe0(pppppppuVar22,8,&pppppppuStack_f8);
    if (((ulong)pppppppuStack_f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_f8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1b8 & 1) != 0) {
      func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
    }
    uStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    pcStack_98 = (code *)0x0;
  }
  else {
    (**(code **)(*plVar29 + 0x80))(auStack_158,plVar29,0x40);
    cStack_178 = cStack_118;
    if (cStack_118 == '\0') {
      uStack_1b8 = (undefined8 *)auStack_158;
      uStack_1b0 = (ulong)plStack_150;
      pcStack_1a8 = pcStack_148;
      pcStack_1a0 = pcStack_140;
      uStack_198 = lStack_138;
      lStack_190 = lStack_130;
      lStack_188 = lStack_128;
      puStack_180 = puStack_120;
      pppppppuStack_f8 = (undefined8 *******)puStack_88[3];
      uStack_f0 = puStack_88[2];
      if ((*(byte *)(puStack_88 + 1) & 1) == 0) {
        pppppppuStack_f8 = (undefined8 *******)ppppppuVar27;
        uStack_f0 = (ulong)(*(byte *)(puStack_88 + 1) >> 1);
      }
      func_0x0470d9a0(auStack_158,&UNK_01377405,0x15,0xd);
      plVar29 = (long *)((ulong)auStack_158 >> 1 & 0x7f);
      pcVar2 = (code *)(auStack_158 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar29 = plStack_150;
        pcVar2 = pcStack_148;
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (pcVar2 == (code *)0x0) {
        pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)plVar29 & 0x7f) << 0x30);
      }
      else {
        lVar9 = (long)plVar29 + 9;
        pppppppuStack_b8 = pppppppuVar22;
        puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
        if (lVar9 != 0 && puVar8 == (ulong *)0x0) {
          FUN_0eec74c0(lVar9,8);
        }
        *puVar8 = (ulong)plVar29;
        func_0x0eee2f00(puVar8 + 1,pcVar2,plVar29);
        *(undefined1 *)((long)puVar8 + (long)plVar29 + 8U) = 0;
        pppppppuStack_f8 =
             (undefined8 *******)((ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        pppppppuVar22 = pppppppuStack_b8;
      }
      plVar29 = plStack_b0;
      func_0x0ed5ffe0(pppppppuVar22,8,&pppppppuStack_f8);
      if (((ulong)pppppppuStack_f8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_f8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (((ulong)auStack_158 & 1) != 0) {
        func_0x0412a280(pcStack_148,(ulong)auStack_158 & 0xfffffffffffffffe);
      }
      uStack_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      pcStack_98 = (code *)0x0;
joined_r0x0798c509:
      if (cStack_178 == '\x01') goto LAB_0798c442;
LAB_0798c50f:
      lVar9 = lStack_190;
      if (lStack_190 != 0) {
        while (lVar9 != lStack_188) {
          func_0x048b3e80(lStack_188 + -0x40);
          lStack_188 = lStack_188 + -0x40;
        }
        lStack_188 = lVar9;
        func_0x0412a280(lStack_190,(long)puStack_180 - lStack_190);
      }
      pcVar18 = pcStack_1a8;
      pcVar2 = pcStack_1a0;
      if (pcStack_1a8 == (code *)0x0) goto LAB_0798c5c1;
      for (; pcVar18 != pcVar2; pcVar2 = pcVar2 + -0x50) {
        if ((pcVar2[-8] == (code)0x1) && (((byte)pcVar2[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pcVar2 + -0x20),
                          *(ulong *)(pcVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      pcStack_1a0 = pcVar18;
      uVar20 = uStack_198 - (long)pcStack_1a8;
    }
    else {
      pcStack_1a8 = pcStack_148;
      uStack_1b8 = (undefined8 *)auStack_158;
      uStack_1b0 = (ulong)plStack_150;
      plVar28 = (long *)(ulong)(byte)(auStack_158[0] >> 1);
      pcVar2 = (code *)((long)&uStack_1b8 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar28 = plStack_150;
        pcVar2 = pcStack_148;
      }
      bVar3 = auStack_158[0];
      if (plVar28 != (long *)0x0) {
        plVar7 = (long *)func_0x0eee3290();
        pcVar18 = pcVar2;
        for (uVar20 = (ulong)plVar28 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar18 = *(code *)(*plVar7 + (ulong)(byte)*pcVar18 * 4);
          pcVar18 = pcVar18 + 1;
        }
        if (3 < plVar28) {
          do {
            *pcVar18 = *(code *)(*plVar7 + (ulong)(byte)*pcVar18 * 4);
            pcVar18[1] = *(code *)(*plVar7 + (ulong)(byte)pcVar18[1] * 4);
            pcVar18[2] = *(code *)(*plVar7 + (ulong)(byte)pcVar18[2] * 4);
            pcVar18[3] = *(code *)(*plVar7 + (ulong)(byte)pcVar18[3] * 4);
            pcVar18 = pcVar18 + 4;
          } while (pcVar18 != pcVar2 + (long)plVar28);
        }
        bVar3 = (byte)uStack_1b8;
      }
      if ((bVar3 & 1) != 0) {
        func_0x0412e5e0(&uStack_a8,pcStack_1a8,uStack_1b0);
        goto joined_r0x0798c509;
      }
      pcStack_98 = pcStack_1a8;
      uStack_a8 = uStack_1b8;
      uStack_a0 = uStack_1b0;
      if (cStack_178 != '\x01') goto LAB_0798c50f;
LAB_0798c442:
      if (((ulong)uStack_1b8 & 1) == 0) goto LAB_0798c5c1;
      uVar20 = (ulong)uStack_1b8 & 0xfffffffffffffffe;
    }
    func_0x0412a280(pcStack_1a8,uVar20);
  }
LAB_0798c5c1:
  (**(code **)(*plVar29 + 0xd0))(plVar29);
  lVar9 = *(long *)(puVar6 + 2);
  uVar23 = *(uint *)(lVar9 + 0x1c + (ulong)*puVar6 * 0x20);
  *puVar6 = uVar23;
  if (puVar6[0x48] == 0) {
    uVar17 = puVar6[4];
LAB_0798c60f:
    lVar1 = lVar9 + (ulong)uVar17 * 0x20;
    uVar20 = (ulong)*(uint *)(lVar9 + -0x10 + (ulong)uVar17 * 0x20);
    if (uVar20 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar20 * 8))(&uStack_1b8,lVar1 + -0x18);
      uVar17 = puVar6[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar6[4] = uVar17 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar6 + 0x46) + 0x18 + (ulong)(puVar6[0x48] - 1) * 0x30) != uVar23)
          && (uVar17 = puVar6[4], uVar23 == uVar17 - 1)) goto LAB_0798c60f;
  if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
     (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
    auStack_40 = (*(code *)*puStack_88)(puStack_110[5]);
    uVar13 = auStack_40._8_8_;
    lVar9 = auStack_40._0_8_;
    uVar20 = (ulong)uStack_a8 >> 1 & 0x7f;
    pcVar2 = (code *)((long)&uStack_a8 + 1);
    if (((ulong)uStack_a8 & 1) != 0) {
      uVar20 = uStack_a0;
      pcVar2 = pcStack_98;
    }
    if (uVar20 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar20 & 3);
      if (uVar20 < 4) {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar23 = ((int)(char)pcVar2[uVar21 + 3] ^
                   ((int)(char)pcVar2[uVar21 + 2] ^
                   ((int)(char)pcVar2[uVar21 + 1] ^ ((int)(char)pcVar2[uVar21] ^ uVar23) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uVar23 = ((int)(char)pcVar2[uVar20 + uVar21] ^ uVar23) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    if (lVar9 == 0) {
      lVar9 = func_0x048aead0(uVar13);
    }
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar13,lVar9,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1b8 = (undefined8 *)0x0;
      uStack_1b0 = 0;
      FUN_048b0d20(&uStack_1b8);
      puStack_58 = uStack_1b8;
      uStack_50 = uStack_1b0;
      if (uStack_1b8 == (undefined8 *)0x0) {
        lVar9 = *plStack_100;
        func_0x0ed8bc80(&uStack_1b8,auStack_40,*(undefined1 *)(lVar9 + 0x2aa));
        uVar13 = func_0x0412f8c0(&uStack_1b8,&UNK_01479aea,10);
        uVar20 = (ulong)uStack_a8 >> 1 & 0x7f;
        pcVar2 = (code *)((long)&uStack_a8 + 1);
        if (((ulong)uStack_a8 & 1) != 0) {
          uVar20 = uStack_a0;
          pcVar2 = pcStack_98;
        }
        uVar13 = func_0x0412f8c0(uVar13,pcVar2,uVar20);
        pbVar14 = (byte *)func_0x0412f8c0(uVar13,&UNK_0125506d,1);
        bVar30 = (*pbVar14 & 1) != 0;
        pbVar26 = pbVar14 + 1;
        if (bVar30) {
          pbVar26 = *(byte **)(pbVar14 + 0x10);
        }
        uVar20 = (ulong)(*pbVar14 >> 1);
        if (bVar30) {
          uVar20 = *(ulong *)(pbVar14 + 8);
        }
        uStack_78 = 0;
        func_0x0ee387f0(&uStack_78,pbVar26,uVar20,1);
        func_0x0ed5ffe0(lVar9,8,&uStack_78);
        func_0x0ee386e0(&uStack_78);
        if (((ulong)uStack_1b8 & 1) != 0) {
          func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
        }
        goto LAB_0798e353;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_188 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_198 = 0;
    lStack_190 = 0;
    pcStack_1a8 = (code *)0x0;
    pcStack_1a0 = (code *)0x0;
    uStack_1b8 = (undefined8 *)0x0;
    uStack_1b0 = 0;
    func_0x05d84ba0(&uStack_1b8);
    func_0x05d9a920(&pppppppuStack_f8,&puStack_58,&uStack_1b8);
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&uStack_1b8);
    }
    puVar19 = puStack_110;
    bVar30 = (*(byte *)(puStack_88 + 1) & 1) != 0;
    if (bVar30) {
      ppppppuVar27 = (undefined8 ******)puStack_88[3];
    }
    uVar20 = (ulong)(*(byte *)(puStack_88 + 1) >> 1);
    if (bVar30) {
      uVar20 = puStack_88[2];
    }
    if (uVar20 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar20 & 3);
      if (uVar20 < 4) {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar27 + uVar21 + 3) ^
                   ((int)*(char *)((long)ppppppuVar27 + uVar21 + 2) ^
                   ((int)*(char *)((long)ppppppuVar27 + uVar21 + 1) ^
                   ((int)*(char *)((long)ppppppuVar27 + uVar21) ^ uVar23) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar27 + uVar20 + uVar21) ^ uVar23) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    cVar4 = *(char *)((long)puStack_110 + 0x24);
    puVar16 = (undefined8 *)*puStack_110;
    puVar11 = puVar16;
    if (cVar4 == '\x02') {
      puVar11 = puStack_110;
    }
    pppppppuStack_b8 = &pppppppuStack_f8;
    if (puVar11 == (undefined8 *)0x0 || *(int *)(puStack_110 + 4) != -0x24a0a739) {
      uVar13 = puStack_110[5];
      lVar9 = puStack_110[6];
      if (lVar9 == 0) {
        (*(code *)puStack_110[7])(0,puStack_110,0);
        lVar9 = puVar19[6];
        cVar4 = *(char *)((long)puVar19 + 0x24);
        puVar16 = (undefined8 *)*puVar19;
      }
      if (cVar4 == '\x02') {
        puVar16 = puVar19;
      }
      puVar11 = (undefined8 *)func_0x0488e200(uVar13,lVar9,0xdb5f58c7,puVar16);
    }
    plVar28 = (long *)puVar19[5];
    if (DAT_0f5b27c0 == '\0') {
      iVar5 = func_0x04108328(&DAT_0f5b27c0);
      if (iVar5 != 0) {
        func_0x07978e70();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2740,0xf53dab8);
        func_0x0410844d(&DAT_0f5b27c0);
      }
    }
    plVar7 = (long *)(*plVar28 +
                     (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                            *(uint *)(_DAT_0f5b2740 + 4)) * 8);
    do {
      lVar9 = *plVar7;
      if (lVar9 == -1) goto LAB_0798c9a0;
      plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
    } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b2740 + 4));
    if (plVar7 == (long *)plVar28[4]) {
LAB_0798c9a0:
      puVar25 = &DAT_0f5b2740;
    }
    else {
      puVar25 = (undefined *)plVar7[2];
    }
    auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
    plStack_160 = plVar28;
    if (auVar12 == (undefined1  [8])0x0) {
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      FUN_048b0d20(auStack_158);
      auVar12 = auStack_158;
      plStack_160 = plStack_150;
    }
    lStack_128 = 0;
    puStack_120 = (undefined *)0x0;
    lStack_138 = 0;
    lStack_130 = 0;
    pcStack_148 = (code *)0x0;
    pcStack_140 = (code *)0x0;
    auStack_158 = (undefined1  [8])0x0;
    plStack_150 = (long *)0x0;
    puStack_168 = (undefined *)auVar12;
    func_0x05d84ba0(auStack_158);
    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
    if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
        bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
      }
      else {
        pppppppuVar22 = pppppppuStack_f8;
        if (cStack_d4 == '\x02') {
          pppppppuVar22 = &pppppppuStack_f8;
        }
        lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
        bVar30 = lVar9 != 0;
      }
    }
    else {
      bVar30 = false;
    }
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&uStack_1b8);
    }
    if (pcStack_140 != (code *)0x0) {
      (*pcStack_140)(auStack_158);
    }
    if (bVar30) {
      lVar9 = puStack_110[5];
      if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
        (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))(auStack_158,puVar11);
      }
      *(undefined1 *)puVar11 = 0;
      *(undefined4 *)(puVar11 + 4) = 0;
      pcStack_1a8 = (code *)&UNK_07979130;
      pcStack_1a0 = (code *)0x0;
      uStack_198 = CONCAT35(uStack_198._5_3_,0x339a0371a);
      lStack_188 = 0;
      puStack_180 = &UNK_07979050;
      lStack_138 = plStack_100[4];
      auStack_158 = (undefined1  [8])*plStack_100;
      plStack_150 = (long *)plStack_100[1];
      pcStack_148 = (code *)plStack_100[2];
      pcStack_140 = (code *)plStack_100[3];
      plVar28 = (long *)plStack_100[2];
      lStack_190 = lVar9;
      if (plVar28 == (long *)0x0) {
        pcStack_148 = (code *)0x0;
        uStack_1b8 = puVar11;
      }
      else {
        uStack_1b8 = puVar11;
        pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,0);
      }
      puStack_168 = &UNK_0f0ed138;
      func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
    }
    else {
      plVar28 = (long *)puStack_110[5];
      if (DAT_0f5b2878 == '\0') {
        iVar5 = func_0x04108328(&DAT_0f5b2878);
        if (iVar5 != 0) {
          func_0x0797a6f0();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b27f8,0xf53dab8);
          func_0x0410844d(&DAT_0f5b2878);
        }
      }
      plVar7 = (long *)(*plVar28 +
                       (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                              *(uint *)(_DAT_0f5b27f8 + 4)) * 8);
      do {
        lVar9 = *plVar7;
        if (lVar9 == -1) {
          plVar15 = (long *)plVar28[4];
          plVar7 = plVar15;
          goto LAB_0798cbb4;
        }
        plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
      } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b27f8 + 4));
      plVar15 = (long *)plVar28[4];
LAB_0798cbb4:
      if (plVar7 == plVar15) {
        puVar25 = &DAT_0f5b27f8;
      }
      else {
        puVar25 = (undefined *)plVar7[2];
      }
      auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
      if (auVar12 == (undefined1  [8])0x0) {
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        FUN_048b0d20(auStack_158);
        auVar12 = auStack_158;
        plVar28 = plStack_150;
      }
      lStack_128 = 0;
      puStack_120 = (undefined *)0x0;
      lStack_138 = 0;
      lStack_130 = 0;
      pcStack_148 = (code *)0x0;
      pcStack_140 = (code *)0x0;
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      puStack_168 = (undefined *)auVar12;
      plStack_160 = plVar28;
      func_0x05d84ba0(auStack_158);
      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
      if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
        if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
          bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
        }
        else {
          pppppppuVar22 = pppppppuStack_f8;
          if (cStack_d4 == '\x02') {
            pppppppuVar22 = &pppppppuStack_f8;
          }
          lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
          bVar30 = lVar9 != 0;
        }
      }
      else {
        bVar30 = false;
      }
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(auStack_158);
      }
      if (bVar30) {
        lVar9 = puStack_110[5];
        if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
          (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))(auStack_158,puVar11);
        }
        *(undefined2 *)puVar11 = 0;
        *(undefined4 *)(puVar11 + 4) = 1;
        pcStack_1a8 = (code *)&UNK_0797a9b0;
        pcStack_1a0 = (code *)0x0;
        uStack_198 = CONCAT35(uStack_198._5_3_,0x3b933ff5e);
        lStack_188 = 0;
        puStack_180 = &UNK_0797a8d0;
        lStack_138 = plStack_100[4];
        auStack_158 = (undefined1  [8])*plStack_100;
        plStack_150 = (long *)plStack_100[1];
        pcStack_148 = (code *)plStack_100[2];
        pcStack_140 = (code *)plStack_100[3];
        plVar28 = (long *)plStack_100[2];
        lStack_190 = lVar9;
        if (plVar28 == (long *)0x0) {
          pcStack_148 = (code *)0x0;
          uStack_1b8 = puVar11;
        }
        else {
          uStack_1b8 = puVar11;
          pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,1);
        }
        puStack_168 = &UNK_0f0ed1b8;
        func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
      }
      else {
        plVar28 = (long *)puStack_110[5];
        if (DAT_0f5b2930 == '\0') {
          iVar5 = func_0x04108328(&DAT_0f5b2930);
          if (iVar5 != 0) {
            func_0x0797bce0();
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b28b0,0xf53dab8);
            func_0x0410844d(&DAT_0f5b2930);
          }
        }
        plVar7 = (long *)(*plVar28 +
                         (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                *(uint *)(_DAT_0f5b28b0 + 4)) * 8);
        do {
          lVar9 = *plVar7;
          if (lVar9 == -1) {
            plVar15 = (long *)plVar28[4];
            plVar7 = plVar15;
            goto LAB_0798cf51;
          }
          plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
        } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b28b0 + 4));
        plVar15 = (long *)plVar28[4];
LAB_0798cf51:
        if (plVar7 == plVar15) {
          puVar25 = &DAT_0f5b28b0;
        }
        else {
          puVar25 = (undefined *)plVar7[2];
        }
        auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
        if (auVar12 == (undefined1  [8])0x0) {
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          FUN_048b0d20(auStack_158);
          auVar12 = auStack_158;
          plVar28 = plStack_150;
        }
        lStack_128 = 0;
        puStack_120 = (undefined *)0x0;
        lStack_138 = 0;
        lStack_130 = 0;
        pcStack_148 = (code *)0x0;
        pcStack_140 = (code *)0x0;
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        puStack_168 = (undefined *)auVar12;
        plStack_160 = plVar28;
        func_0x05d84ba0(auStack_158);
        func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
        if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
            bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
          }
          else {
            pppppppuVar22 = pppppppuStack_f8;
            if (cStack_d4 == '\x02') {
              pppppppuVar22 = &pppppppuStack_f8;
            }
            lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
            bVar30 = lVar9 != 0;
          }
        }
        else {
          bVar30 = false;
        }
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
        if (pcStack_140 != (code *)0x0) {
          (*pcStack_140)(auStack_158);
        }
        if (bVar30) {
          lVar9 = puStack_110[5];
          if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
            (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))(auStack_158,puVar11);
          }
          *(undefined4 *)puVar11 = 0;
          *(undefined4 *)(puVar11 + 4) = 2;
          pcStack_1a8 = (code *)&UNK_0797bfa0;
          pcStack_1a0 = (code *)0x0;
          uStack_198 = CONCAT35(uStack_198._5_3_,0x35c1c0f57);
          lStack_188 = 0;
          puStack_180 = &UNK_0797bec0;
          lStack_138 = plStack_100[4];
          auStack_158 = (undefined1  [8])*plStack_100;
          plStack_150 = (long *)plStack_100[1];
          pcStack_148 = (code *)plStack_100[2];
          pcStack_140 = (code *)plStack_100[3];
          plVar28 = (long *)plStack_100[2];
          lStack_190 = lVar9;
          if (plVar28 == (long *)0x0) {
            pcStack_148 = (code *)0x0;
            uStack_1b8 = puVar11;
          }
          else {
            uStack_1b8 = puVar11;
            pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,2);
          }
          puStack_168 = &UNK_0f0ed238;
          func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
        }
        else {
          plVar28 = (long *)puStack_110[5];
          if (DAT_0f5b29e8 == '\0') {
            iVar5 = func_0x04108328(&DAT_0f5b29e8);
            if (iVar5 != 0) {
              func_0x0797d2d0();
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2968,0xf53dab8);
              func_0x0410844d(&DAT_0f5b29e8);
            }
          }
          plVar7 = (long *)(*plVar28 +
                           (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                  *(uint *)(_DAT_0f5b2968 + 4)) * 8);
          do {
            lVar9 = *plVar7;
            if (lVar9 == -1) {
              plVar15 = (long *)plVar28[4];
              plVar7 = plVar15;
              goto LAB_0798d1e9;
            }
            plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
          } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b2968 + 4));
          plVar15 = (long *)plVar28[4];
LAB_0798d1e9:
          if (plVar7 == plVar15) {
            puVar25 = &DAT_0f5b2968;
          }
          else {
            puVar25 = (undefined *)plVar7[2];
          }
          auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
          if (auVar12 == (undefined1  [8])0x0) {
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            FUN_048b0d20(auStack_158);
            auVar12 = auStack_158;
            plVar28 = plStack_150;
          }
          lStack_128 = 0;
          puStack_120 = (undefined *)0x0;
          lStack_138 = 0;
          lStack_130 = 0;
          pcStack_148 = (code *)0x0;
          pcStack_140 = (code *)0x0;
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          puStack_168 = (undefined *)auVar12;
          plStack_160 = plVar28;
          func_0x05d84ba0(auStack_158);
          func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
          if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0)))
          {
            if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
              bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
            }
            else {
              pppppppuVar22 = pppppppuStack_f8;
              if (cStack_d4 == '\x02') {
                pppppppuVar22 = &pppppppuStack_f8;
              }
              lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
              bVar30 = lVar9 != 0;
            }
          }
          else {
            bVar30 = false;
          }
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
          if (pcStack_140 != (code *)0x0) {
            (*pcStack_140)(auStack_158);
          }
          if (bVar30) {
            lVar9 = puStack_110[5];
            if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
              (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))(auStack_158,puVar11);
            }
            *(undefined4 *)puVar11 = 0;
            *(undefined4 *)(puVar11 + 4) = 3;
            pcStack_1a8 = (code *)&UNK_0797d590;
            pcStack_1a0 = (code *)0x0;
            uStack_198 = CONCAT35(uStack_198._5_3_,0x308fe7cfa);
            lStack_188 = 0;
            puStack_180 = &UNK_0797d4b0;
            lStack_138 = plStack_100[4];
            auStack_158 = (undefined1  [8])*plStack_100;
            plStack_150 = (long *)plStack_100[1];
            pcStack_148 = (code *)plStack_100[2];
            pcStack_140 = (code *)plStack_100[3];
            plVar28 = (long *)plStack_100[2];
            lStack_190 = lVar9;
            if (plVar28 == (long *)0x0) {
              pcStack_148 = (code *)0x0;
              uStack_1b8 = puVar11;
            }
            else {
              uStack_1b8 = puVar11;
              pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,3);
            }
            puStack_168 = &UNK_0f0ed2b8;
            func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
          }
          else {
            plVar28 = (long *)puStack_110[5];
            if (DAT_0f5b2aa0 == '\0') {
              iVar5 = func_0x04108328(&DAT_0f5b2aa0);
              if (iVar5 != 0) {
                func_0x0797e8c0();
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2a20,0xf53dab8);
                func_0x0410844d(&DAT_0f5b2aa0);
              }
            }
            plVar7 = (long *)(*plVar28 +
                             (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                    *(uint *)(_DAT_0f5b2a20 + 4)) * 8);
            do {
              lVar9 = *plVar7;
              if (lVar9 == -1) {
                plVar15 = (long *)plVar28[4];
                plVar7 = plVar15;
                goto LAB_0798d480;
              }
              plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
            } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b2a20 + 4));
            plVar15 = (long *)plVar28[4];
LAB_0798d480:
            if (plVar7 == plVar15) {
              puVar25 = &DAT_0f5b2a20;
            }
            else {
              puVar25 = (undefined *)plVar7[2];
            }
            auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
            if (auVar12 == (undefined1  [8])0x0) {
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              FUN_048b0d20(auStack_158);
              auVar12 = auStack_158;
              plVar28 = plStack_150;
            }
            lStack_128 = 0;
            puStack_120 = (undefined *)0x0;
            lStack_138 = 0;
            lStack_130 = 0;
            pcStack_148 = (code *)0x0;
            pcStack_140 = (code *)0x0;
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            puStack_168 = (undefined *)auVar12;
            plStack_160 = plVar28;
            func_0x05d84ba0(auStack_158);
            func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
            if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))
               ) {
              if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
              }
              else {
                pppppppuVar22 = pppppppuStack_f8;
                if (cStack_d4 == '\x02') {
                  pppppppuVar22 = &pppppppuStack_f8;
                }
                lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                bVar30 = lVar9 != 0;
              }
            }
            else {
              bVar30 = false;
            }
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(auStack_158);
            }
            if (bVar30) {
              lVar9 = puStack_110[5];
              if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
                (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))
                          (auStack_158,puVar11);
              }
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              *(undefined4 *)(puVar11 + 4) = 4;
              pcStack_1a8 = (code *)&UNK_0797ebc0;
              pcStack_1a0 = (code *)0x0;
              uStack_198 = CONCAT35(uStack_198._5_3_,0x3357511a7);
              lStack_188 = 0;
              puStack_180 = &UNK_0797eae0;
              lStack_138 = plStack_100[4];
              auStack_158 = (undefined1  [8])*plStack_100;
              plStack_150 = (long *)plStack_100[1];
              pcStack_148 = (code *)plStack_100[2];
              pcStack_140 = (code *)plStack_100[3];
              plVar28 = (long *)plStack_100[2];
              lStack_190 = lVar9;
              if (plVar28 == (long *)0x0) {
                pcStack_148 = (code *)0x0;
                uStack_1b8 = puVar11;
              }
              else {
                uStack_1b8 = puVar11;
                pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,4);
              }
              puStack_168 = &UNK_0f0ed338;
              func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
            }
            else {
              plVar28 = (long *)puStack_110[5];
              if (DAT_0f5b2b58 == '\0') {
                iVar5 = func_0x04108328(&DAT_0f5b2b58);
                if (iVar5 != 0) {
                  func_0x07980140();
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2ad8,0xf53dab8);
                  func_0x0410844d(&DAT_0f5b2b58);
                }
              }
              plVar7 = (long *)(*plVar28 +
                               (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                      *(uint *)(_DAT_0f5b2ad8 + 4)) * 8);
              do {
                lVar9 = *plVar7;
                if (lVar9 == -1) {
                  plVar15 = (long *)plVar28[4];
                  plVar7 = plVar15;
                  goto LAB_0798d73d;
                }
                plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
              } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b2ad8 + 4));
              plVar15 = (long *)plVar28[4];
LAB_0798d73d:
              if (plVar7 == plVar15) {
                puVar25 = &DAT_0f5b2ad8;
              }
              else {
                puVar25 = (undefined *)plVar7[2];
              }
              auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
              if (auVar12 == (undefined1  [8])0x0) {
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                FUN_048b0d20(auStack_158);
                auVar12 = auStack_158;
                plVar28 = plStack_150;
              }
              lStack_128 = 0;
              puStack_120 = (undefined *)0x0;
              lStack_138 = 0;
              lStack_130 = 0;
              pcStack_148 = (code *)0x0;
              pcStack_140 = (code *)0x0;
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              puStack_168 = (undefined *)auVar12;
              plStack_160 = plVar28;
              func_0x05d84ba0(auStack_158);
              func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
              if ((lStack_190 == lStack_d0) &&
                 ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                  bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                }
                else {
                  pppppppuVar22 = pppppppuStack_f8;
                  if (cStack_d4 == '\x02') {
                    pppppppuVar22 = &pppppppuStack_f8;
                  }
                  lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                  bVar30 = lVar9 != 0;
                }
              }
              else {
                bVar30 = false;
              }
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
              if (pcStack_140 != (code *)0x0) {
                (*pcStack_140)(auStack_158);
              }
              if (bVar30) {
                lVar9 = puStack_110[5];
                if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
                  (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))
                            (auStack_158,puVar11);
                }
                *puVar11 = &UNK_0f47e0b0;
                puVar11[2] = 0;
                puVar11[3] = 0;
                puVar11[1] = puVar11 + 2;
                *(undefined4 *)(puVar11 + 4) = 5;
                pcStack_1a8 = (code *)&UNK_07980450;
                pcStack_1a0 = (code *)0x0;
                uStack_198 = CONCAT35(uStack_198._5_3_,0x376683839);
                lStack_188 = 0;
                puStack_180 = &UNK_07980370;
                lStack_138 = plStack_100[4];
                auStack_158 = (undefined1  [8])*plStack_100;
                plStack_150 = (long *)plStack_100[1];
                pcStack_148 = (code *)plStack_100[2];
                pcStack_140 = (code *)plStack_100[3];
                plVar28 = (long *)plStack_100[2];
                lStack_190 = lVar9;
                if (plVar28 == (long *)0x0) {
                  pcStack_148 = (code *)0x0;
                  uStack_1b8 = puVar11;
                }
                else {
                  uStack_1b8 = puVar11;
                  pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,5);
                }
                puStack_168 = &UNK_0f0ed3b8;
                func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
              }
              else {
                plVar28 = (long *)puStack_110[5];
                if (DAT_0f5b2c10 == '\0') {
                  iVar5 = func_0x04108328(&DAT_0f5b2c10);
                  if (iVar5 != 0) {
                    func_0x079818b0();
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2b90,0xf53dab8);
                    func_0x0410844d(&DAT_0f5b2c10);
                  }
                }
                plVar7 = (long *)(*plVar28 +
                                 (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                        *(uint *)(_DAT_0f5b2b90 + 4)) * 8);
                do {
                  lVar9 = *plVar7;
                  if (lVar9 == -1) {
                    plVar15 = (long *)plVar28[4];
                    plVar7 = plVar15;
                    goto LAB_0798da05;
                  }
                  plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
                } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b2b90 + 4));
                plVar15 = (long *)plVar28[4];
LAB_0798da05:
                if (plVar7 == plVar15) {
                  puVar25 = &DAT_0f5b2b90;
                }
                else {
                  puVar25 = (undefined *)plVar7[2];
                }
                auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
                if (auVar12 == (undefined1  [8])0x0) {
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  FUN_048b0d20(auStack_158);
                  auVar12 = auStack_158;
                  plVar28 = plStack_150;
                }
                lStack_128 = 0;
                puStack_120 = (undefined *)0x0;
                lStack_138 = 0;
                lStack_130 = 0;
                pcStack_148 = (code *)0x0;
                pcStack_140 = (code *)0x0;
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                puStack_168 = (undefined *)auVar12;
                plStack_160 = plVar28;
                func_0x05d84ba0(auStack_158);
                func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                if ((lStack_190 == lStack_d0) &&
                   ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                  if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                    bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                  }
                  else {
                    pppppppuVar22 = pppppppuStack_f8;
                    if (cStack_d4 == '\x02') {
                      pppppppuVar22 = &pppppppuStack_f8;
                    }
                    lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                    bVar30 = lVar9 != 0;
                    plVar29 = plStack_b0;
                  }
                }
                else {
                  bVar30 = false;
                }
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
                if (pcStack_140 != (code *)0x0) {
                  (*pcStack_140)(auStack_158);
                }
                if (bVar30) {
                  lVar9 = puStack_110[5];
                  if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
                    (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))
                              (auStack_158,puVar11);
                  }
                  *(undefined4 *)(puVar11 + 1) = 0;
                  *puVar11 = 0;
                  *(undefined4 *)(puVar11 + 4) = 6;
                  pcStack_1a8 = (code *)&UNK_07981b70;
                  pcStack_1a0 = (code *)0x0;
                  uStack_198 = CONCAT35(uStack_198._5_3_,0x32a21877a);
                  lStack_188 = 0;
                  puStack_180 = &UNK_07981a90;
                  lStack_138 = plStack_100[4];
                  auStack_158 = (undefined1  [8])*plStack_100;
                  plStack_150 = (long *)plStack_100[1];
                  pcStack_148 = (code *)plStack_100[2];
                  pcStack_140 = (code *)plStack_100[3];
                  plVar28 = (long *)plStack_100[2];
                  lStack_190 = lVar9;
                  if (plVar28 == (long *)0x0) {
                    pcStack_148 = (code *)0x0;
                    uStack_1b8 = puVar11;
                  }
                  else {
                    uStack_1b8 = puVar11;
                    pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,6);
                  }
                  puStack_168 = &UNK_0f0ed438;
                  func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                }
                else {
                  plVar28 = (long *)puStack_110[5];
                  if (DAT_0f5b2cc8 == '\0') {
                    iVar5 = func_0x04108328(&DAT_0f5b2cc8);
                    if (iVar5 != 0) {
                      func_0x07982ee0();
                      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2c48,0xf53dab8);
                      func_0x0410844d(&DAT_0f5b2cc8);
                    }
                  }
                  plVar7 = (long *)(*plVar28 +
                                   (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                          *(uint *)(_DAT_0f5b2c48 + 4)) * 8);
                  do {
                    lVar9 = *plVar7;
                    if (lVar9 == -1) {
                      plVar15 = (long *)plVar28[4];
                      plVar7 = plVar15;
                      goto LAB_0798dcc2;
                    }
                    plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
                  } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b2c48 + 4))
                  ;
                  plVar15 = (long *)plVar28[4];
LAB_0798dcc2:
                  if (plVar7 == plVar15) {
                    puVar25 = &DAT_0f5b2c48;
                  }
                  else {
                    puVar25 = (undefined *)plVar7[2];
                  }
                  auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
                  if (auVar12 == (undefined1  [8])0x0) {
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    FUN_048b0d20(auStack_158);
                    auVar12 = auStack_158;
                    plVar28 = plStack_150;
                  }
                  lStack_128 = 0;
                  puStack_120 = (undefined *)0x0;
                  lStack_138 = 0;
                  lStack_130 = 0;
                  pcStack_148 = (code *)0x0;
                  pcStack_140 = (code *)0x0;
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  puStack_168 = (undefined *)auVar12;
                  plStack_160 = plVar28;
                  func_0x05d84ba0(auStack_158);
                  func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                  if ((lStack_190 == lStack_d0) &&
                     ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                    if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                      bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                    }
                    else {
                      pppppppuVar22 = pppppppuStack_f8;
                      if (cStack_d4 == '\x02') {
                        pppppppuVar22 = &pppppppuStack_f8;
                      }
                      lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar22);
                      bVar30 = lVar9 != 0;
                      plVar29 = plStack_b0;
                    }
                  }
                  else {
                    bVar30 = false;
                  }
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                  if (pcStack_140 != (code *)0x0) {
                    (*pcStack_140)(auStack_158);
                  }
                  if (bVar30) {
                    lVar9 = puStack_110[5];
                    if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
                      (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))
                                (auStack_158,puVar11);
                    }
                    *puVar11 = 0;
                    *(undefined4 *)(puVar11 + 4) = 7;
                    pcStack_1a8 = (code *)&UNK_07983190;
                    pcStack_1a0 = (code *)0x0;
                    uStack_198 = CONCAT35(uStack_198._5_3_,0x3414a4c15);
                    lStack_188 = 0;
                    puStack_180 = &UNK_079830b0;
                    lStack_138 = plStack_100[4];
                    auStack_158 = (undefined1  [8])*plStack_100;
                    plStack_150 = (long *)plStack_100[1];
                    pcStack_148 = (code *)plStack_100[2];
                    pcStack_140 = (code *)plStack_100[3];
                    plVar28 = (long *)plStack_100[2];
                    lStack_190 = lVar9;
                    if (plVar28 == (long *)0x0) {
                      pcStack_148 = (code *)0x0;
                      uStack_1b8 = puVar11;
                    }
                    else {
                      uStack_1b8 = puVar11;
                      pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,7);
                    }
                    puStack_168 = &UNK_0f0ed4b8;
                    func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                  }
                  else {
                    plVar28 = (long *)puStack_110[5];
                    if (DAT_0f5b2d80 == '\0') {
                      iVar5 = func_0x04108328(&DAT_0f5b2d80);
                      if (iVar5 != 0) {
                        func_0x079844c0();
                        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b2d00,0xf53dab8);
                        func_0x0410844d(&DAT_0f5b2d80);
                      }
                    }
                    plVar7 = (long *)(*plVar28 +
                                     (ulong)((int)((ulong)(plVar28[1] - *plVar28) >> 3) - 1U &
                                            *(uint *)(_DAT_0f5b2d00 + 4)) * 8);
                    do {
                      lVar9 = *plVar7;
                      if (lVar9 == -1) {
                        plVar15 = (long *)plVar28[4];
                        plVar7 = plVar15;
                        goto LAB_0798df77;
                      }
                      plVar7 = (long *)(plVar28[3] + lVar9 * 0x18);
                    } while (*(uint *)(plVar28[3] + 8 + lVar9 * 0x18) !=
                             *(uint *)(_DAT_0f5b2d00 + 4));
                    plVar15 = (long *)plVar28[4];
LAB_0798df77:
                    if (plVar7 == plVar15) {
                      puVar25 = &DAT_0f5b2d00;
                    }
                    else {
                      puVar25 = (undefined *)plVar7[2];
                    }
                    auVar12 = (undefined1  [8])func_0x048b0c90(plVar28,puVar25,uVar23,1);
                    if (auVar12 == (undefined1  [8])0x0) {
                      auStack_158 = (undefined1  [8])0x0;
                      plStack_150 = (long *)0x0;
                      FUN_048b0d20(auStack_158);
                      auVar12 = auStack_158;
                      plVar28 = plStack_150;
                    }
                    lStack_128 = 0;
                    puStack_120 = (undefined *)0x0;
                    lStack_138 = 0;
                    lStack_130 = 0;
                    pcStack_148 = (code *)0x0;
                    pcStack_140 = (code *)0x0;
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    puStack_168 = (undefined *)auVar12;
                    plStack_160 = plVar28;
                    func_0x05d84ba0(auStack_158);
                    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                    if ((lStack_190 == lStack_d0) &&
                       ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                        bVar30 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                      }
                      else {
                        if (cStack_d4 != '\x02') {
                          pppppppuStack_b8 = pppppppuStack_f8;
                        }
                        lVar9 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuStack_b8);
                        bVar30 = lVar9 != 0;
                        plVar29 = plStack_b0;
                      }
                    }
                    else {
                      bVar30 = false;
                    }
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                    if (pcStack_140 != (code *)0x0) {
                      (*pcStack_140)(auStack_158);
                    }
                    if (bVar30) {
                      lVar9 = puStack_110[5];
                      if ((ulong)*(uint *)(puVar11 + 4) != 0xffffffff) {
                        (**(code **)(&UNK_0f0ece48 + (ulong)*(uint *)(puVar11 + 4) * 8))
                                  (auStack_158,puVar11);
                      }
                      *(undefined4 *)(puVar11 + 1) = 0;
                      *puVar11 = 0;
                      *(undefined4 *)(puVar11 + 4) = 8;
                      pcStack_1a8 = (code *)&UNK_07984780;
                      pcStack_1a0 = (code *)0x0;
                      uStack_198 = CONCAT35(uStack_198._5_3_,0x3ace4c2b5);
                      lStack_188 = 0;
                      puStack_180 = &UNK_079846a0;
                      lStack_138 = plStack_100[4];
                      auStack_158 = (undefined1  [8])*plStack_100;
                      plStack_150 = (long *)plStack_100[1];
                      pcStack_148 = (code *)plStack_100[2];
                      pcStack_140 = (code *)plStack_100[3];
                      plVar28 = (long *)plStack_100[2];
                      lStack_190 = lVar9;
                      if (plVar28 == (long *)0x0) {
                        pcStack_148 = (code *)0x0;
                        uStack_1b8 = puVar11;
                      }
                      else {
                        uStack_1b8 = puVar11;
                        pcStack_148 = (code *)(**(code **)(*plVar28 + 0x30))(plVar28,8);
                      }
                      puStack_168 = &UNK_0f0ed538;
                      func_0x0ed75bc0(&puStack_168,plVar29,&uStack_1b8,uStack_108,auStack_158);
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                    }
                    else if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
                            (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
                      uStack_80 = 0x2300000149614c;
                      func_0x0ed5ffe0(*plStack_100,8,&uStack_80);
                      if ((uStack_80 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
                      }
                      uStack_80 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (pcStack_e0 != (code *)0x0) {
      (*pcStack_e0)(&pppppppuStack_f8);
    }
  }
LAB_0798e353:
  if (((ulong)uStack_a8 & 1) != 0) {
    func_0x0412a280(pcStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
  }
  return;
}


