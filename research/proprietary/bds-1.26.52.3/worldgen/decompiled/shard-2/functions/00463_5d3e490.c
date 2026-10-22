/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5e3e490 (ELF vaddr 0x5d3e490)
 * Label: caller-of-callee
 * Body:  [[05e3e490, 05e3ec40] [05e3ec50, 05e41462] [05e41b60, 05e4208d]]
 * Ghidra: FUN_05e3e490
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05e3e490(long *param_1,undefined8 *******param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [8];
  undefined8 uVar13;
  byte *pbVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  code *pcVar18;
  undefined8 ******ppppppuVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *******pppppppuVar25;
  uint uVar26;
  undefined *puVar27;
  byte *pbVar28;
  undefined8 ******ppppppuVar29;
  long *plVar30;
  bool bVar31;
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
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  code *pcStack_e0;
  int iStack_d8;
  char cStack_d4;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
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
    puVar6 = (undefined8 *)*param_3;
    puVar16 = puVar6;
    if (cVar4 == '\x02') {
      puVar16 = param_3;
    }
    if (puVar16 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != 0xc4aa3c2) {
      uVar13 = param_3[5];
      lVar10 = param_3[6];
      if (lVar10 == 0) {
        uStack_60 = 0x5e41bbf;
        (*(code *)param_3[7])(0,param_3,0);
        lVar10 = param_3[6];
        cVar4 = *(char *)((long)param_3 + 0x24);
        puVar6 = (undefined8 *)*param_3;
      }
      if (cVar4 == '\x02') {
        puVar6 = param_3;
      }
      uStack_60 = 0x5e41be1;
      puVar16 = (undefined8 *)func_0x0488e200(uVar13,lVar10,&UNK_0c4aa3c2,puVar6);
    }
    uStack_60 = 0x5e41bf1;
    func_0x0ed6d600(auStack_40,*param_5);
    bVar3 = *(byte *)(param_1 + 1) | *(byte *)((long)param_1 + 9);
    *(byte *)((long)param_1 + 9) = bVar3 | 1;
    uStack_60 = 0x5e41c0e;
    uVar23 = (**(code **)(*param_1 + 0x98))(param_1);
    *(byte *)((long)param_1 + 9) = bVar3;
    if ((uVar23 >> 0x20 & 1) == 0) {
      uVar24 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x5e41c4e;
      uStack_60 = uVar24;
      cVar4 = func_0x05e42a10(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41c7c;
      uStack_60 = uVar24;
      cVar4 = func_0x05e42c60(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41caa;
      uStack_60 = uVar24;
      cVar4 = func_0x05e42eb0(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41cd8;
      uStack_60 = uVar24;
      cVar4 = func_0x05e430e0(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41d06;
      uStack_60 = uVar24;
      cVar4 = func_0x05e43320(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41d34;
      uStack_60 = uVar24;
      cVar4 = func_0x05e43550(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41d62;
      uStack_60 = uVar24;
      cVar4 = func_0x05e43790(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41d90;
      uStack_60 = uVar24;
      cVar4 = func_0x05e43a30(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41dbe;
      uStack_60 = uVar24;
      cVar4 = func_0x05e43cc0(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41dec;
      uStack_60 = uVar24;
      cVar4 = func_0x05e43ee0(param_1,param_3[5],puVar16,param_4,param_5,0xb);
      if (cVar4 != '\0') {
        return;
      }
      uVar13 = param_3[5];
      uVar23 = 0xb;
      uStack_60 = uVar24;
    }
    else {
      if (10 < (uint)uVar23) {
        uStack_48 = 0x2d000001258dae;
        uStack_60 = 0x5e4205b;
        func_0x0ed5ffe0(*param_5,8,&uStack_48);
        if ((uStack_48 >> 0x37 & 1) == 0) {
          return;
        }
        uStack_60 = 0x5e4207f;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
        return;
      }
      uStack_60 = auStack_40._8_8_ & 0xffffffff;
      puStack_58 = (undefined8 *)auStack_40._0_8_;
      puStack_68 = (undefined8 *)auStack_40._0_8_;
      uStack_70 = 0x5e41e57;
      uStack_50 = uStack_60;
      cVar4 = func_0x05e42a10(param_1,param_3[5],puVar16,param_4,param_5,uVar23 & 0xff);
      if (cVar4 != '\0') {
        return;
      }
      uVar23 = uVar23 & 0xff;
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41e88;
      cVar4 = func_0x05e42c60(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41eb5;
      cVar4 = func_0x05e42eb0(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41ee2;
      cVar4 = func_0x05e430e0(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41f0f;
      cVar4 = func_0x05e43320(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41f3c;
      cVar4 = func_0x05e43550(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41f69;
      cVar4 = func_0x05e43790(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41f96;
      cVar4 = func_0x05e43a30(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41fc3;
      cVar4 = func_0x05e43cc0(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uStack_60 = uStack_50;
      puStack_68 = puStack_58;
      uStack_70 = 0x5e41ff0;
      cVar4 = func_0x05e43ee0(param_1,param_3[5],puVar16,param_4,param_5,uVar23);
      if (cVar4 != '\0') {
        return;
      }
      uVar13 = param_3[5];
      uStack_60 = uStack_50;
    }
    puStack_68 = puStack_58;
    uStack_70 = 0x5e4201d;
    func_0x05e44120(param_1,uVar13,puVar16,param_4,param_5,uVar23);
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
  func_0x0ed6d600(&puStack_68,*param_5);
  uStack_48 = param_3[5];
  lStack_78 = *param_5;
  ppppppuVar29 = (undefined8 ******)((long)param_2 + 9);
  bVar31 = (*(byte *)(param_2 + 1) & 1) == 0;
  ppppppuVar19 = param_2[3];
  if (bVar31) {
    ppppppuVar19 = ppppppuVar29;
  }
  ppppppuVar22 = (undefined8 ******)(ulong)(*(byte *)(param_2 + 1) >> 1);
  if (!bVar31) {
    ppppppuVar22 = param_2[2];
  }
  uStack_110 = param_4;
  plStack_108 = param_5;
  puStack_100 = param_3;
  plStack_b8 = param_1;
  pppppppuStack_b0 = param_2;
  if (ppppppuVar19 == (undefined8 ******)0x0) {
    puStack_168 = (undefined *)((ulong)((uint)ppppppuVar22 & 0x7f) << 0x30);
  }
  else if (ppppppuVar22 < (undefined8 ******)0x80) {
    puStack_168 = (undefined *)
                  ((long)ppppppuVar22 << 0x30 | (ulong)ppppppuVar19 & 0xff00ffffffffffff);
  }
  else {
    lVar10 = (long)ppppppuVar22 + 9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
    if (puVar6 == (undefined8 *)0x0 && lVar10 != 0) {
      func_0x0eec74c0(lVar10,8);
    }
    *puVar6 = ppppppuVar22;
    func_0x0eee2f00(puVar6 + 1,ppppppuVar19,ppppppuVar22);
    *(undefined1 *)((long)puVar6 + (long)(ppppppuVar22 + 1)) = 0;
    puStack_168 = (undefined *)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  lVar10 = lStack_78;
  plVar30 = plStack_b8;
  puVar7 = (uint *)func_0x0ed6d180(lStack_78,&puStack_168,0);
  puVar6 = puStack_100;
  if (((ulong)puStack_168 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_168 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_168 = (undefined *)0x0;
  bVar31 = (*(byte *)(pppppppuStack_b0 + 1) & 1) == 0;
  ppppppuVar19 = pppppppuStack_b0[3];
  if (bVar31) {
    ppppppuVar19 = ppppppuVar29;
  }
  ppppppuVar22 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
  if (!bVar31) {
    ppppppuVar22 = pppppppuStack_b0[2];
  }
  cVar4 = (**(code **)(*plVar30 + 0xb8))(plVar30,ppppppuVar19,ppppppuVar22);
  if (cVar4 == '\0') {
    _auStack_158 = (*(code *)*pppppppuStack_b0)(uStack_48);
    func_0x0ed8bc80(&uStack_1b8,auStack_158,*(undefined1 *)(lVar10 + 0x2aa));
    uVar23 = (ulong)uStack_1b8 >> 1 & 0x7f;
    pcVar2 = (code *)((long)&uStack_1b8 + 1);
    if (((ulong)uStack_1b8 & 1) != 0) {
      uVar23 = uStack_1b0;
      pcVar2 = pcStack_1a8;
    }
    pppppppuStack_f8 = (undefined8 *******)0x0;
    if (pcVar2 == (code *)0x0) {
      pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)uVar23 & 0x7f) << 0x30);
    }
    else {
      lVar10 = uVar23 + 9;
      puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && puVar9 == (ulong *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *puVar9 = uVar23;
      func_0x0eee2f00(puVar9 + 1,pcVar2,uVar23);
      *(undefined1 *)((long)puVar9 + uVar23 + 8) = 0;
      pppppppuStack_f8 =
           (undefined8 *******)((ulong)(puVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      lVar10 = lStack_78;
    }
    plVar30 = plStack_b8;
    func_0x0ed5ffe0(lVar10,8,&pppppppuStack_f8);
    puVar6 = puStack_100;
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
    (**(code **)(*plVar30 + 0x80))(auStack_158,plVar30,0x40);
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
      pppppppuStack_f8 = (undefined8 *******)pppppppuStack_b0[3];
      ppppppuStack_f0 = pppppppuStack_b0[2];
      if ((*(byte *)(pppppppuStack_b0 + 1) & 1) == 0) {
        pppppppuStack_f8 = (undefined8 *******)ppppppuVar29;
        ppppppuStack_f0 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
      }
      func_0x0470d9a0(auStack_158,&UNK_01377405,0x15,0xd);
      plVar30 = (long *)((ulong)auStack_158 >> 1 & 0x7f);
      pcVar2 = (code *)(auStack_158 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar30 = plStack_150;
        pcVar2 = pcStack_148;
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      if (pcVar2 == (code *)0x0) {
        pppppppuStack_f8 = (undefined8 *******)((ulong)((uint)plVar30 & 0x7f) << 0x30);
      }
      else {
        lVar10 = (long)plVar30 + 9;
        puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
        if (lVar10 != 0 && puVar9 == (ulong *)0x0) {
          func_0x0eec74c0(lVar10,8);
        }
        *puVar9 = (ulong)plVar30;
        func_0x0eee2f00(puVar9 + 1,pcVar2,plVar30);
        *(undefined1 *)((long)puVar9 + (long)plVar30 + 8U) = 0;
        pppppppuStack_f8 =
             (undefined8 *******)((ulong)(puVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        lVar10 = lStack_78;
      }
      plVar30 = plStack_b8;
      func_0x0ed5ffe0(lVar10,8,&pppppppuStack_f8);
      puVar6 = puStack_100;
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
joined_r0x05e3ebd9:
      if (cStack_178 == '\x01') goto LAB_05e3eb0a;
LAB_05e3ebdf:
      lVar10 = lStack_190;
      if (lStack_190 != 0) {
        while (lVar10 != lStack_188) {
          func_0x048b3e80(lStack_188 + -0x40);
          lStack_188 = lStack_188 + -0x40;
        }
        lStack_188 = lVar10;
        func_0x0412a280(lStack_190,(long)puStack_180 - lStack_190);
      }
      pcVar18 = pcStack_1a8;
      pcVar2 = pcStack_1a0;
      if (pcStack_1a8 == (code *)0x0) goto LAB_05e3ec91;
      for (; pcVar18 != pcVar2; pcVar2 = pcVar2 + -0x50) {
        if ((pcVar2[-8] == (code)0x1) && (((byte)pcVar2[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pcVar2 + -0x20),
                          *(ulong *)(pcVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      pcStack_1a0 = pcVar18;
      uVar23 = uStack_198 - (long)pcStack_1a8;
    }
    else {
      pcStack_1a8 = pcStack_148;
      uStack_1b8 = (undefined8 *)auStack_158;
      uStack_1b0 = (ulong)plStack_150;
      plVar21 = (long *)(ulong)(byte)(auStack_158[0] >> 1);
      pcVar2 = (code *)((long)&uStack_1b8 + 1);
      if (((ulong)auStack_158 & 1) != 0) {
        plVar21 = plStack_150;
        pcVar2 = pcStack_148;
      }
      bVar3 = auStack_158[0];
      if (plVar21 != (long *)0x0) {
        plVar8 = (long *)func_0x0eee3290();
        pcVar18 = pcVar2;
        for (uVar23 = (ulong)plVar21 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *pcVar18 = *(code *)(*plVar8 + (ulong)(byte)*pcVar18 * 4);
          pcVar18 = pcVar18 + 1;
        }
        if (3 < plVar21) {
          do {
            *pcVar18 = *(code *)(*plVar8 + (ulong)(byte)*pcVar18 * 4);
            pcVar18[1] = *(code *)(*plVar8 + (ulong)(byte)pcVar18[1] * 4);
            pcVar18[2] = *(code *)(*plVar8 + (ulong)(byte)pcVar18[2] * 4);
            pcVar18[3] = *(code *)(*plVar8 + (ulong)(byte)pcVar18[3] * 4);
            pcVar18 = pcVar18 + 4;
          } while (pcVar18 != pcVar2 + (long)plVar21);
        }
        bVar3 = (byte)uStack_1b8;
      }
      if ((bVar3 & 1) != 0) {
        func_0x0412e5e0(&uStack_a8,pcStack_1a8,uStack_1b0);
        goto joined_r0x05e3ebd9;
      }
      pcStack_98 = pcStack_1a8;
      uStack_a8 = uStack_1b8;
      uStack_a0 = uStack_1b0;
      if (cStack_178 != '\x01') goto LAB_05e3ebdf;
LAB_05e3eb0a:
      if (((ulong)uStack_1b8 & 1) == 0) goto LAB_05e3ec91;
      uVar23 = (ulong)uStack_1b8 & 0xfffffffffffffffe;
    }
    func_0x0412a280(pcStack_1a8,uVar23);
  }
LAB_05e3ec91:
  (**(code **)(*plVar30 + 0xd0))(plVar30);
  lVar10 = *(long *)(puVar7 + 2);
  uVar26 = *(uint *)(lVar10 + 0x1c + (ulong)*puVar7 * 0x20);
  *puVar7 = uVar26;
  if (puVar7[0x48] == 0) {
    uVar17 = puVar7[4];
LAB_05e3ecdf:
    lVar1 = lVar10 + (ulong)uVar17 * 0x20;
    uVar23 = (ulong)*(uint *)(lVar10 + -0x10 + (ulong)uVar17 * 0x20);
    if (uVar23 != 0xffffffff) {
      (**(code **)(&UNK_0f4e40d0 + uVar23 * 8))(&uStack_1b8,lVar1 + -0x18);
      uVar17 = puVar7[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar7[4] = uVar17 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar7 + 0x46) + 0x18 + (ulong)(puVar7[0x48] - 1) * 0x30) != uVar26)
          && (uVar17 = puVar7[4], uVar26 == uVar17 - 1)) goto LAB_05e3ecdf;
  if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
     (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
    auStack_40 = (*(code *)*pppppppuStack_b0)(puVar6[5]);
    uVar13 = auStack_40._8_8_;
    lVar10 = auStack_40._0_8_;
    uVar23 = (ulong)uStack_a8 >> 1 & 0x7f;
    pcVar2 = (code *)((long)&uStack_a8 + 1);
    if (((ulong)uStack_a8 & 1) != 0) {
      uVar23 = uStack_a0;
      pcVar2 = pcStack_98;
    }
    if (uVar23 == 0) {
      uVar26 = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uVar26 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar26 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar26 = ((int)(char)pcVar2[uVar20 + 3] ^
                   ((int)(char)pcVar2[uVar20 + 2] ^
                   ((int)(char)pcVar2[uVar20 + 1] ^ ((int)(char)pcVar2[uVar20] ^ uVar26) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar24 != 0) {
        uVar23 = 0;
        do {
          uVar26 = ((int)(char)pcVar2[uVar23 + uVar20] ^ uVar26) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar24 != uVar23);
      }
    }
    if (lVar10 == 0) {
      lVar10 = func_0x048aead0(uVar13);
    }
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar13,lVar10,uVar26,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1b8 = (undefined8 *)0x0;
      uStack_1b0 = 0;
      func_0x048b0d20(&uStack_1b8);
      puStack_58 = uStack_1b8;
      uStack_50 = uStack_1b0;
      if (uStack_1b8 == (undefined8 *)0x0) {
        lVar10 = *plStack_108;
        func_0x0ed8bc80(&uStack_1b8,auStack_40,*(undefined1 *)(lVar10 + 0x2aa));
        uVar13 = func_0x0412f8c0(&uStack_1b8,&UNK_01479aea,10);
        uVar23 = (ulong)uStack_a8 >> 1 & 0x7f;
        pcVar2 = (code *)((long)&uStack_a8 + 1);
        if (((ulong)uStack_a8 & 1) != 0) {
          uVar23 = uStack_a0;
          pcVar2 = pcStack_98;
        }
        uVar13 = func_0x0412f8c0(uVar13,pcVar2,uVar23);
        pbVar14 = (byte *)func_0x0412f8c0(uVar13,&UNK_0125506d,1);
        bVar31 = (*pbVar14 & 1) != 0;
        pbVar28 = pbVar14 + 1;
        if (bVar31) {
          pbVar28 = *(byte **)(pbVar14 + 0x10);
        }
        uVar23 = (ulong)(*pbVar14 >> 1);
        if (bVar31) {
          uVar23 = *(ulong *)(pbVar14 + 8);
        }
        uStack_80 = 0;
        func_0x0ee387f0(&uStack_80,pbVar28,uVar23,1);
        func_0x0ed5ffe0(lVar10,8,&uStack_80);
        func_0x0ee386e0(&uStack_80);
        if (((ulong)uStack_1b8 & 1) != 0) {
          func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
        }
        goto LAB_05e41136;
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
    bVar31 = (*(byte *)(pppppppuStack_b0 + 1) & 1) != 0;
    if (bVar31) {
      ppppppuVar29 = pppppppuStack_b0[3];
    }
    ppppppuVar19 = (undefined8 ******)(ulong)(*(byte *)(pppppppuStack_b0 + 1) >> 1);
    if (bVar31) {
      ppppppuVar19 = pppppppuStack_b0[2];
    }
    if (ppppppuVar19 == (undefined8 ******)0x0) {
      uVar26 = 0x811c9dc5;
    }
    else {
      uVar23 = (ulong)((uint)ppppppuVar19 & 3);
      if (ppppppuVar19 < (undefined8 ******)0x4) {
        uVar26 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar26 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar26 = ((int)*(char *)((long)ppppppuVar29 + uVar24 + 3) ^
                   ((int)*(char *)((long)ppppppuVar29 + uVar24 + 2) ^
                   ((int)*(char *)((long)ppppppuVar29 + uVar24 + 1) ^
                   ((int)*(char *)((long)ppppppuVar29 + uVar24) ^ uVar26) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while (((ulong)ppppppuVar19 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar23 != 0) {
        uVar20 = 0;
        do {
          uVar26 = ((int)*(char *)((long)ppppppuVar29 + uVar20 + uVar24) ^ uVar26) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar23 != uVar20);
      }
    }
    cVar4 = *(char *)((long)puVar6 + 0x24);
    puVar16 = (undefined8 *)*puVar6;
    puVar11 = puVar16;
    if (cVar4 == '\x02') {
      puVar11 = puVar6;
    }
    if (puVar11 == (undefined8 *)0x0 || *(int *)(puVar6 + 4) != 0xc4aa3c2) {
      uVar13 = puVar6[5];
      lVar10 = puVar6[6];
      if (lVar10 == 0) {
        (*(code *)puVar6[7])(0,puVar6,0);
        lVar10 = puVar6[6];
        cVar4 = *(char *)((long)puVar6 + 0x24);
        puVar16 = (undefined8 *)*puVar6;
      }
      if (cVar4 == '\x02') {
        puVar16 = puVar6;
      }
      puVar11 = (undefined8 *)func_0x0488e200(uVar13,lVar10,&UNK_0c4aa3c2,puVar16);
    }
    plVar21 = (long *)puVar6[5];
    pppppppuStack_b0 = &pppppppuStack_f8;
    if (DAT_0f55b788 == '\0') {
      iVar5 = func_0x04108328(&DAT_0f55b788);
      if (iVar5 != 0) {
        func_0x05df5ae0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b708,0xf53dab8);
        func_0x0410844d(&DAT_0f55b788);
      }
    }
    plVar8 = (long *)(*plVar21 +
                     (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                            *(uint *)(_DAT_0f55b708 + 4)) * 8);
    do {
      lVar10 = *plVar8;
      if (lVar10 == -1) goto LAB_05e3f070;
      plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
    } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55b708 + 4));
    if (plVar8 == (long *)plVar21[4]) {
LAB_05e3f070:
      puVar27 = &DAT_0f55b708;
    }
    else {
      puVar27 = (undefined *)plVar8[2];
    }
    auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
    plStack_160 = plVar21;
    if (auVar12 == (undefined1  [8])0x0) {
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      func_0x048b0d20(auStack_158);
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
        bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
      }
      else {
        pppppppuVar25 = pppppppuStack_f8;
        if (cStack_d4 == '\x02') {
          pppppppuVar25 = &pppppppuStack_f8;
        }
        lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
        bVar31 = lVar10 != 0;
      }
    }
    else {
      bVar31 = false;
    }
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&uStack_1b8);
    }
    if (pcStack_140 != (code *)0x0) {
      (*pcStack_140)(auStack_158);
    }
    if (bVar31) {
      lVar10 = puVar6[5];
      puVar6 = puVar11 + 1;
      if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
        (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))(auStack_158,puVar6);
      }
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      *puVar6 = 0;
      puVar11[2] = 0;
      puVar11[0xf] = 0;
      *(undefined4 *)(puVar11 + 0x20) = 0;
      pcStack_1a8 = (code *)&UNK_05df5e00;
      pcStack_1a0 = (code *)0x0;
      uStack_198 = CONCAT35(uStack_198._5_3_,0x346a01761);
      lStack_188 = 0;
      puStack_180 = &UNK_05df5d20;
      lStack_138 = plStack_108[4];
      auStack_158 = (undefined1  [8])*plStack_108;
      plStack_150 = (long *)plStack_108[1];
      pcStack_148 = (code *)plStack_108[2];
      pcStack_140 = (code *)plStack_108[3];
      plVar21 = (long *)plStack_108[2];
      uStack_1b8 = puVar6;
      lStack_190 = lVar10;
      if (plVar21 == (long *)0x0) {
        pcStack_148 = (code *)0x0;
      }
      else {
        pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,0);
      }
      puStack_168 = &UNK_0f00c450;
      func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
    }
    else {
      plVar21 = (long *)puVar6[5];
      if (DAT_0f55ba68 == '\0') {
        iVar5 = func_0x04108328(&DAT_0f55ba68);
        if (iVar5 != 0) {
          func_0x05e01d80();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b9e8,0xf53dab8);
          func_0x0410844d(&DAT_0f55ba68);
        }
      }
      plVar8 = (long *)(*plVar21 +
                       (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                              *(uint *)(_DAT_0f55b9e8 + 4)) * 8);
      do {
        lVar10 = *plVar8;
        if (lVar10 == -1) {
          plVar15 = (long *)plVar21[4];
          plVar8 = plVar15;
          goto LAB_05e3f2a4;
        }
        plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
      } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55b9e8 + 4));
      plVar15 = (long *)plVar21[4];
LAB_05e3f2a4:
      if (plVar8 == plVar15) {
        puVar27 = &DAT_0f55b9e8;
      }
      else {
        puVar27 = (undefined *)plVar8[2];
      }
      auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
      if (auVar12 == (undefined1  [8])0x0) {
        auStack_158 = (undefined1  [8])0x0;
        plStack_150 = (long *)0x0;
        func_0x048b0d20(auStack_158);
        auVar12 = auStack_158;
        plVar21 = plStack_150;
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
      plStack_160 = plVar21;
      func_0x05d84ba0(auStack_158);
      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
      if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
        if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
          bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
        }
        else {
          pppppppuVar25 = pppppppuStack_f8;
          if (cStack_d4 == '\x02') {
            pppppppuVar25 = &pppppppuStack_f8;
          }
          lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
          bVar31 = lVar10 != 0;
        }
      }
      else {
        bVar31 = false;
      }
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(&uStack_1b8);
      }
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(auStack_158);
      }
      if (bVar31) {
        lVar10 = puVar6[5];
        puVar6 = puVar11 + 1;
        if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
          (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))(auStack_158,puVar6);
        }
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        *puVar6 = 0;
        puVar11[2] = 0;
        puVar11[0xf] = 0;
        *(undefined4 *)(puVar11 + 0x20) = 1;
        pcStack_1a8 = (code *)&UNK_05e020a0;
        pcStack_1a0 = (code *)0x0;
        uStack_198 = CONCAT35(uStack_198._5_3_,0x3f0a44466);
        lStack_188 = 0;
        puStack_180 = &UNK_05e01fc0;
        lStack_138 = plStack_108[4];
        auStack_158 = (undefined1  [8])*plStack_108;
        plStack_150 = (long *)plStack_108[1];
        pcStack_148 = (code *)plStack_108[2];
        pcStack_140 = (code *)plStack_108[3];
        plVar21 = (long *)plStack_108[2];
        uStack_1b8 = puVar6;
        lStack_190 = lVar10;
        if (plVar21 == (long *)0x0) {
          pcStack_148 = (code *)0x0;
        }
        else {
          pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,1);
        }
        puStack_168 = &UNK_0f00c4d0;
        func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
      }
      else {
        plVar21 = (long *)puVar6[5];
        if (DAT_0f55bb20 == '\0') {
          iVar5 = func_0x04108328(&DAT_0f55bb20);
          if (iVar5 != 0) {
            func_0x05e05550();
            func_0x0eee2f40(&UNK_048ae800,&DAT_0f55baa0,0xf53dab8);
            func_0x0410844d(&DAT_0f55bb20);
          }
        }
        plVar8 = (long *)(*plVar21 +
                         (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                *(uint *)(_DAT_0f55baa0 + 4)) * 8);
        do {
          lVar10 = *plVar8;
          if (lVar10 == -1) {
            plVar15 = (long *)plVar21[4];
            plVar8 = plVar15;
            goto LAB_05e3f661;
          }
          plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
        } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55baa0 + 4));
        plVar15 = (long *)plVar21[4];
LAB_05e3f661:
        if (plVar8 == plVar15) {
          puVar27 = &DAT_0f55baa0;
        }
        else {
          puVar27 = (undefined *)plVar8[2];
        }
        auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
        if (auVar12 == (undefined1  [8])0x0) {
          auStack_158 = (undefined1  [8])0x0;
          plStack_150 = (long *)0x0;
          func_0x048b0d20(auStack_158);
          auVar12 = auStack_158;
          plVar21 = plStack_150;
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
        plStack_160 = plVar21;
        func_0x05d84ba0(auStack_158);
        func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
        if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
            bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
          }
          else {
            pppppppuVar25 = pppppppuStack_f8;
            if (cStack_d4 == '\x02') {
              pppppppuVar25 = &pppppppuStack_f8;
            }
            lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
            bVar31 = lVar10 != 0;
          }
        }
        else {
          bVar31 = false;
        }
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(&uStack_1b8);
        }
        if (pcStack_140 != (code *)0x0) {
          (*pcStack_140)(auStack_158);
        }
        if (bVar31) {
          lVar10 = puVar6[5];
          puVar6 = puVar11 + 1;
          if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
            (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))(auStack_158,puVar6);
          }
          puVar11[3] = 0;
          puVar11[4] = 0;
          *puVar6 = 0;
          puVar11[2] = 0;
          puVar11[5] = 0;
          *(undefined4 *)(puVar11 + 0x20) = 2;
          pcStack_1a8 = (code *)&UNK_05e05850;
          pcStack_1a0 = (code *)0x0;
          uStack_198 = CONCAT35(uStack_198._5_3_,0x327d56dd3);
          lStack_188 = 0;
          puStack_180 = &UNK_05e05770;
          lStack_138 = plStack_108[4];
          auStack_158 = (undefined1  [8])*plStack_108;
          plStack_150 = (long *)plStack_108[1];
          pcStack_148 = (code *)plStack_108[2];
          pcStack_140 = (code *)plStack_108[3];
          plVar21 = (long *)plStack_108[2];
          uStack_1b8 = puVar6;
          lStack_190 = lVar10;
          if (plVar21 == (long *)0x0) {
            pcStack_148 = (code *)0x0;
          }
          else {
            pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,2);
          }
          puStack_168 = &UNK_0f00c550;
          func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
        }
        else {
          plVar21 = (long *)puVar6[5];
          if (DAT_0f55bbd8 == '\0') {
            iVar5 = func_0x04108328(&DAT_0f55bbd8);
            if (iVar5 != 0) {
              func_0x05e08800();
              func_0x0eee2f40(&UNK_048ae800,&DAT_0f55bb58,0xf53dab8);
              func_0x0410844d(&DAT_0f55bbd8);
            }
          }
          plVar8 = (long *)(*plVar21 +
                           (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                  *(uint *)(_DAT_0f55bb58 + 4)) * 8);
          do {
            lVar10 = *plVar8;
            if (lVar10 == -1) {
              plVar15 = (long *)plVar21[4];
              plVar8 = plVar15;
              goto LAB_05e3f909;
            }
            plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
          } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55bb58 + 4));
          plVar15 = (long *)plVar21[4];
LAB_05e3f909:
          if (plVar8 == plVar15) {
            puVar27 = &DAT_0f55bb58;
          }
          else {
            puVar27 = (undefined *)plVar8[2];
          }
          auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
          if (auVar12 == (undefined1  [8])0x0) {
            auStack_158 = (undefined1  [8])0x0;
            plStack_150 = (long *)0x0;
            func_0x048b0d20(auStack_158);
            auVar12 = auStack_158;
            plVar21 = plStack_150;
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
          plStack_160 = plVar21;
          func_0x05d84ba0(auStack_158);
          func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
          if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0)))
          {
            if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
              bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
            }
            else {
              pppppppuVar25 = pppppppuStack_f8;
              if (cStack_d4 == '\x02') {
                pppppppuVar25 = &pppppppuStack_f8;
              }
              lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
              bVar31 = lVar10 != 0;
            }
          }
          else {
            bVar31 = false;
          }
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(&uStack_1b8);
          }
          if (pcStack_140 != (code *)0x0) {
            (*pcStack_140)(auStack_158);
          }
          if (bVar31) {
            lVar10 = puVar6[5];
            puVar6 = puVar11 + 1;
            if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
              (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                        (auStack_158,puVar6);
            }
            *(undefined8 *)((long)puVar11 + 0x34) = 0;
            *(undefined8 *)((long)puVar11 + 0x3c) = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            *puVar6 = 0;
            puVar11[2] = 0;
            *(undefined4 *)(puVar11 + 0x20) = 3;
            pcStack_1a8 = (code *)&UNK_05e08b00;
            pcStack_1a0 = (code *)0x0;
            uStack_198 = CONCAT35(uStack_198._5_3_,0x346403dc6);
            lStack_188 = 0;
            puStack_180 = &UNK_05e08a20;
            lStack_138 = plStack_108[4];
            auStack_158 = (undefined1  [8])*plStack_108;
            plStack_150 = (long *)plStack_108[1];
            pcStack_148 = (code *)plStack_108[2];
            pcStack_140 = (code *)plStack_108[3];
            plVar21 = (long *)plStack_108[2];
            uStack_1b8 = puVar6;
            lStack_190 = lVar10;
            if (plVar21 == (long *)0x0) {
              pcStack_148 = (code *)0x0;
            }
            else {
              pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,3);
            }
            puStack_168 = &UNK_0f00c5d0;
            func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
          }
          else {
            plVar21 = (long *)puVar6[5];
            if (DAT_0f55bd48 == '\0') {
              iVar5 = func_0x04108328(&DAT_0f55bd48);
              if (iVar5 != 0) {
                func_0x05e0c4b0();
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f55bcc8,0xf53dab8);
                func_0x0410844d(&DAT_0f55bd48);
              }
            }
            plVar8 = (long *)(*plVar21 +
                             (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                    *(uint *)(_DAT_0f55bcc8 + 4)) * 8);
            do {
              lVar10 = *plVar8;
              if (lVar10 == -1) {
                plVar15 = (long *)plVar21[4];
                plVar8 = plVar15;
                goto LAB_05e3fba6;
              }
              plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
            } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55bcc8 + 4));
            plVar15 = (long *)plVar21[4];
LAB_05e3fba6:
            if (plVar8 == plVar15) {
              puVar27 = &DAT_0f55bcc8;
            }
            else {
              puVar27 = (undefined *)plVar8[2];
            }
            auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
            if (auVar12 == (undefined1  [8])0x0) {
              auStack_158 = (undefined1  [8])0x0;
              plStack_150 = (long *)0x0;
              func_0x048b0d20(auStack_158);
              auVar12 = auStack_158;
              plVar21 = plStack_150;
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
            plStack_160 = plVar21;
            func_0x05d84ba0(auStack_158);
            func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
            if ((lStack_190 == lStack_d0) && ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))
               ) {
              if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
              }
              else {
                pppppppuVar25 = pppppppuStack_f8;
                if (cStack_d4 == '\x02') {
                  pppppppuVar25 = &pppppppuStack_f8;
                }
                lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
                bVar31 = lVar10 != 0;
              }
            }
            else {
              bVar31 = false;
            }
            if (pcStack_1a0 != (code *)0x0) {
              (*pcStack_1a0)(&uStack_1b8);
            }
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(auStack_158);
            }
            if (bVar31) {
              lVar10 = puVar6[5];
              puVar6 = puVar11 + 1;
              if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                          (auStack_158,puVar6);
              }
              puVar11[3] = 0;
              puVar11[4] = 0;
              *puVar6 = 0;
              puVar11[2] = 0;
              puVar11[5] = 0;
              *(undefined4 *)(puVar11 + 0x20) = 4;
              pcStack_1a8 = (code *)&UNK_05e0c7b0;
              pcStack_1a0 = (code *)0x0;
              uStack_198 = CONCAT35(uStack_198._5_3_,0x363000f09);
              lStack_188 = 0;
              puStack_180 = &UNK_05e0c6d0;
              lStack_138 = plStack_108[4];
              auStack_158 = (undefined1  [8])*plStack_108;
              plStack_150 = (long *)plStack_108[1];
              pcStack_148 = (code *)plStack_108[2];
              pcStack_140 = (code *)plStack_108[3];
              plVar21 = (long *)plStack_108[2];
              uStack_1b8 = puVar6;
              lStack_190 = lVar10;
              if (plVar21 == (long *)0x0) {
                pcStack_148 = (code *)0x0;
              }
              else {
                pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,4);
              }
              puStack_168 = &UNK_0f00c650;
              func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
            }
            else {
              plVar21 = (long *)puVar6[5];
              if (DAT_0f55c140 == '\0') {
                iVar5 = func_0x04108328(&DAT_0f55c140);
                if (iVar5 != 0) {
                  func_0x05e16790();
                  func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c0c0,0xf53dab8);
                  func_0x0410844d(&DAT_0f55c140);
                }
              }
              plVar8 = (long *)(*plVar21 +
                               (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                      *(uint *)(_DAT_0f55c0c0 + 4)) * 8);
              do {
                lVar10 = *plVar8;
                if (lVar10 == -1) {
                  plVar15 = (long *)plVar21[4];
                  plVar8 = plVar15;
                  goto LAB_05e3fe61;
                }
                plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
              } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55c0c0 + 4));
              plVar15 = (long *)plVar21[4];
LAB_05e3fe61:
              if (plVar8 == plVar15) {
                puVar27 = &DAT_0f55c0c0;
              }
              else {
                puVar27 = (undefined *)plVar8[2];
              }
              auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
              if (auVar12 == (undefined1  [8])0x0) {
                auStack_158 = (undefined1  [8])0x0;
                plStack_150 = (long *)0x0;
                func_0x048b0d20(auStack_158);
                auVar12 = auStack_158;
                plVar21 = plStack_150;
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
              plStack_160 = plVar21;
              func_0x05d84ba0(auStack_158);
              func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
              if ((lStack_190 == lStack_d0) &&
                 ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                  bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                }
                else {
                  pppppppuVar25 = pppppppuStack_f8;
                  if (cStack_d4 == '\x02') {
                    pppppppuVar25 = &pppppppuStack_f8;
                  }
                  lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
                  bVar31 = lVar10 != 0;
                }
              }
              else {
                bVar31 = false;
              }
              if (pcStack_1a0 != (code *)0x0) {
                (*pcStack_1a0)(&uStack_1b8);
              }
              if (pcStack_140 != (code *)0x0) {
                (*pcStack_140)(auStack_158);
              }
              if (bVar31) {
                lVar10 = puVar6[5];
                puVar6 = puVar11 + 1;
                if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                  (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                            (auStack_158,puVar6);
                }
                puVar11[5] = 0;
                puVar11[6] = 0;
                puVar11[3] = 0;
                puVar11[4] = 0;
                *puVar6 = 0;
                puVar11[2] = 0;
                puVar11[7] = 0;
                *(undefined4 *)(puVar11 + 0x20) = 5;
                pcStack_1a8 = (code *)&UNK_05e16aa0;
                pcStack_1a0 = (code *)0x0;
                uStack_198 = CONCAT35(uStack_198._5_3_,0x323ae0a4f);
                lStack_188 = 0;
                puStack_180 = &UNK_05e169c0;
                lStack_138 = plStack_108[4];
                auStack_158 = (undefined1  [8])*plStack_108;
                plStack_150 = (long *)plStack_108[1];
                pcStack_148 = (code *)plStack_108[2];
                pcStack_140 = (code *)plStack_108[3];
                plVar21 = (long *)plStack_108[2];
                uStack_1b8 = puVar6;
                lStack_190 = lVar10;
                if (plVar21 == (long *)0x0) {
                  pcStack_148 = (code *)0x0;
                }
                else {
                  pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,5);
                }
                puStack_168 = &UNK_0f00c6d0;
                func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
              }
              else {
                plVar21 = (long *)puVar6[5];
                if (DAT_0f55c1f8 == '\0') {
                  iVar5 = func_0x04108328(&DAT_0f55c1f8);
                  if (iVar5 != 0) {
                    func_0x05e18840();
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c178,0xf53dab8);
                    func_0x0410844d(&DAT_0f55c1f8);
                  }
                }
                plVar8 = (long *)(*plVar21 +
                                 (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                        *(uint *)(_DAT_0f55c178 + 4)) * 8);
                do {
                  lVar10 = *plVar8;
                  if (lVar10 == -1) {
                    plVar15 = (long *)plVar21[4];
                    plVar8 = plVar15;
                    goto LAB_05e40120;
                  }
                  plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
                } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55c178 + 4));
                plVar15 = (long *)plVar21[4];
LAB_05e40120:
                if (plVar8 == plVar15) {
                  puVar27 = &DAT_0f55c178;
                }
                else {
                  puVar27 = (undefined *)plVar8[2];
                }
                auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
                if (auVar12 == (undefined1  [8])0x0) {
                  auStack_158 = (undefined1  [8])0x0;
                  plStack_150 = (long *)0x0;
                  func_0x048b0d20(auStack_158);
                  auVar12 = auStack_158;
                  plVar21 = plStack_150;
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
                plStack_160 = plVar21;
                func_0x05d84ba0(auStack_158);
                func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                if ((lStack_190 == lStack_d0) &&
                   ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                  if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                    bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                  }
                  else {
                    pppppppuVar25 = pppppppuStack_f8;
                    if (cStack_d4 == '\x02') {
                      pppppppuVar25 = &pppppppuStack_f8;
                    }
                    lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
                    bVar31 = lVar10 != 0;
                    puVar6 = puStack_100;
                    plVar30 = plStack_b8;
                  }
                }
                else {
                  bVar31 = false;
                }
                if (pcStack_1a0 != (code *)0x0) {
                  (*pcStack_1a0)(&uStack_1b8);
                }
                if (pcStack_140 != (code *)0x0) {
                  (*pcStack_140)(auStack_158);
                }
                if (bVar31) {
                  lVar10 = puVar6[5];
                  puVar6 = puVar11 + 1;
                  if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                    (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                              (auStack_158,puVar6);
                  }
                  puVar11[0x1d] = 0;
                  puVar11[0x1e] = 0;
                  puVar11[0x1b] = 0;
                  puVar11[0x1c] = 0;
                  puVar11[0x19] = 0;
                  puVar11[0x1a] = 0;
                  puVar11[0x17] = 0;
                  puVar11[0x18] = 0;
                  puVar11[0x15] = 0;
                  puVar11[0x16] = 0;
                  puVar11[0x13] = 0;
                  puVar11[0x14] = 0;
                  puVar11[0x11] = 0;
                  puVar11[0x12] = 0;
                  puVar11[0xf] = 0;
                  puVar11[0x10] = 0;
                  puVar11[0xd] = 0;
                  puVar11[0xe] = 0;
                  puVar11[0xb] = 0;
                  puVar11[0xc] = 0;
                  puVar11[9] = 0;
                  puVar11[10] = 0;
                  puVar11[7] = 0;
                  puVar11[8] = 0;
                  puVar11[5] = 0;
                  puVar11[6] = 0;
                  puVar11[3] = 0;
                  puVar11[4] = 0;
                  *puVar6 = 0;
                  puVar11[2] = 0;
                  puVar11[0x1f] = 0;
                  *(undefined4 *)(puVar11 + 0x20) = 6;
                  pcStack_1a8 = (code *)&UNK_05e18ba0;
                  pcStack_1a0 = (code *)0x0;
                  uStack_198 = CONCAT35(uStack_198._5_3_,0x31ac0a8b4);
                  lStack_188 = 0;
                  puStack_180 = &UNK_05e18ac0;
                  lStack_138 = plStack_108[4];
                  auStack_158 = (undefined1  [8])*plStack_108;
                  plStack_150 = (long *)plStack_108[1];
                  pcStack_148 = (code *)plStack_108[2];
                  pcStack_140 = (code *)plStack_108[3];
                  plVar21 = (long *)plStack_108[2];
                  uStack_1b8 = puVar6;
                  lStack_190 = lVar10;
                  if (plVar21 == (long *)0x0) {
                    pcStack_148 = (code *)0x0;
                  }
                  else {
                    pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,6);
                  }
                  puStack_168 = &UNK_0f00c750;
                  func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                }
                else {
                  plVar21 = (long *)puVar6[5];
                  if (DAT_0f55c2b0 == '\0') {
                    iVar5 = func_0x04108328(&DAT_0f55c2b0);
                    if (iVar5 != 0) {
                      func_0x05e1d090();
                      func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c230,0xf53dab8);
                      func_0x0410844d(&DAT_0f55c2b0);
                    }
                  }
                  plVar8 = (long *)(*plVar21 +
                                   (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                          *(uint *)(_DAT_0f55c230 + 4)) * 8);
                  do {
                    lVar10 = *plVar8;
                    if (lVar10 == -1) {
                      plVar15 = (long *)plVar21[4];
                      plVar8 = plVar15;
                      goto LAB_05e40436;
                    }
                    plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
                  } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f55c230 + 4)
                          );
                  plVar15 = (long *)plVar21[4];
LAB_05e40436:
                  if (plVar8 == plVar15) {
                    puVar27 = &DAT_0f55c230;
                  }
                  else {
                    puVar27 = (undefined *)plVar8[2];
                  }
                  auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
                  if (auVar12 == (undefined1  [8])0x0) {
                    auStack_158 = (undefined1  [8])0x0;
                    plStack_150 = (long *)0x0;
                    func_0x048b0d20(auStack_158);
                    auVar12 = auStack_158;
                    plVar21 = plStack_150;
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
                  plStack_160 = plVar21;
                  func_0x05d84ba0(auStack_158);
                  func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                  if ((lStack_190 == lStack_d0) &&
                     ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                    if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                      bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                    }
                    else {
                      pppppppuVar25 = pppppppuStack_f8;
                      if (cStack_d4 == '\x02') {
                        pppppppuVar25 = &pppppppuStack_f8;
                      }
                      lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
                      bVar31 = lVar10 != 0;
                      puVar6 = puStack_100;
                      plVar30 = plStack_b8;
                    }
                  }
                  else {
                    bVar31 = false;
                  }
                  if (pcStack_1a0 != (code *)0x0) {
                    (*pcStack_1a0)(&uStack_1b8);
                  }
                  if (pcStack_140 != (code *)0x0) {
                    (*pcStack_140)(auStack_158);
                  }
                  if (bVar31) {
                    lVar10 = puVar6[5];
                    puVar6 = puVar11 + 1;
                    if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                      (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                                (auStack_158,puVar6);
                    }
                    puVar11[0xf] = 0;
                    puVar11[0x10] = 0;
                    puVar11[0xd] = 0;
                    puVar11[0xe] = 0;
                    puVar11[0xb] = 0;
                    puVar11[0xc] = 0;
                    puVar11[9] = 0;
                    puVar11[10] = 0;
                    puVar11[7] = 0;
                    puVar11[8] = 0;
                    puVar11[5] = 0;
                    puVar11[6] = 0;
                    puVar11[3] = 0;
                    puVar11[4] = 0;
                    *puVar6 = 0;
                    puVar11[2] = 0;
                    puVar11[2] = &UNK_0f011d00;
                    uVar13 = _UNK_014e0ea8;
                    puVar11[3] = _DAT_014e0ea0;
                    puVar11[4] = uVar13;
                    puVar11[5] = 0x8000000080000000;
                    puVar11[6] = 0;
                    puVar11[7] = 0;
                    puVar11[8] = 0;
                    puVar11[9] = 0;
                    *(undefined8 *)((long)puVar11 + 0x4d) = 0;
                    puVar11[0xd] = 0;
                    puVar11[0xe] = 0;
                    *(undefined1 *)(puVar11 + 0xf) = 0;
                    *(undefined4 *)(puVar11 + 0x20) = 7;
                    pcStack_1a8 = (code *)&UNK_05e1d3e0;
                    pcStack_1a0 = (code *)0x0;
                    uStack_198 = CONCAT35(uStack_198._5_3_,0x36b0ba9ef);
                    lStack_188 = 0;
                    puStack_180 = &UNK_05e1d300;
                    lStack_138 = plStack_108[4];
                    auStack_158 = (undefined1  [8])*plStack_108;
                    plStack_150 = (long *)plStack_108[1];
                    pcStack_148 = (code *)plStack_108[2];
                    pcStack_140 = (code *)plStack_108[3];
                    plVar21 = (long *)plStack_108[2];
                    uStack_1b8 = puVar6;
                    lStack_190 = lVar10;
                    if (plVar21 == (long *)0x0) {
                      pcStack_148 = (code *)0x0;
                    }
                    else {
                      pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,7);
                    }
                    puStack_168 = &UNK_0f00c7d0;
                    func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                  }
                  else {
                    plVar21 = (long *)puVar6[5];
                    if (DAT_0f55b560 == '\0') {
                      iVar5 = func_0x04108328(&DAT_0f55b560);
                      if (iVar5 != 0) {
                        func_0x05def310();
                        func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b4e0,0xf53dab8);
                        func_0x0410844d(&DAT_0f55b560);
                      }
                    }
                    plVar8 = (long *)(*plVar21 +
                                     (ulong)((int)((ulong)(plVar21[1] - *plVar21) >> 3) - 1U &
                                            *(uint *)(_DAT_0f55b4e0 + 4)) * 8);
                    do {
                      lVar10 = *plVar8;
                      if (lVar10 == -1) {
                        plVar15 = (long *)plVar21[4];
                        plVar8 = plVar15;
                        goto LAB_05e4074a;
                      }
                      plVar8 = (long *)(plVar21[3] + lVar10 * 0x18);
                    } while (*(uint *)(plVar21[3] + 8 + lVar10 * 0x18) !=
                             *(uint *)(_DAT_0f55b4e0 + 4));
                    plVar15 = (long *)plVar21[4];
LAB_05e4074a:
                    if (plVar8 == plVar15) {
                      puVar27 = &DAT_0f55b4e0;
                    }
                    else {
                      puVar27 = (undefined *)plVar8[2];
                    }
                    auVar12 = (undefined1  [8])func_0x048b0c90(plVar21,puVar27,uVar26,1);
                    if (auVar12 == (undefined1  [8])0x0) {
                      auStack_158 = (undefined1  [8])0x0;
                      plStack_150 = (long *)0x0;
                      func_0x048b0d20(auStack_158);
                      auVar12 = auStack_158;
                      plVar21 = plStack_150;
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
                    plStack_160 = plVar21;
                    func_0x05d84ba0(auStack_158);
                    func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                    if ((lStack_190 == lStack_d0) &&
                       ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                      if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                        bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                      }
                      else {
                        pppppppuVar25 = pppppppuStack_f8;
                        if (cStack_d4 == '\x02') {
                          pppppppuVar25 = &pppppppuStack_f8;
                        }
                        lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
                        bVar31 = lVar10 != 0;
                        puVar6 = puStack_100;
                        plVar30 = plStack_b8;
                      }
                    }
                    else {
                      bVar31 = false;
                    }
                    if (pcStack_1a0 != (code *)0x0) {
                      (*pcStack_1a0)(&uStack_1b8);
                    }
                    if (pcStack_140 != (code *)0x0) {
                      (*pcStack_140)(auStack_158);
                    }
                    if (bVar31) {
                      lVar10 = puVar6[5];
                      puVar6 = puVar11 + 1;
                      if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                        (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                                  (auStack_158,puVar6);
                      }
                      *(undefined4 *)(puVar11 + 0x20) = 8;
                      pcStack_1a8 = (code *)&UNK_05def5c0;
                      pcStack_1a0 = (code *)0x0;
                      uStack_198 = CONCAT35(uStack_198._5_3_,0x373c368a5);
                      lStack_188 = 0;
                      puStack_180 = &UNK_05def4e0;
                      lStack_138 = plStack_108[4];
                      auStack_158 = (undefined1  [8])*plStack_108;
                      plStack_150 = (long *)plStack_108[1];
                      pcStack_148 = (code *)plStack_108[2];
                      pcStack_140 = (code *)plStack_108[3];
                      plVar21 = (long *)plStack_108[2];
                      uStack_1b8 = puVar6;
                      lStack_190 = lVar10;
                      if (plVar21 == (long *)0x0) {
                        pcStack_148 = (code *)0x0;
                      }
                      else {
                        pcStack_148 = (code *)(**(code **)(*plVar21 + 0x30))(plVar21,8);
                      }
                      puStack_168 = &UNK_0f00c850;
                      func_0x0ed75bc0(&puStack_168,plVar30,&uStack_1b8,uStack_110,auStack_158);
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                    }
                    else {
                      plVar30 = (long *)puVar6[5];
                      if (DAT_0f55c4d8 == '\0') {
                        iVar5 = func_0x04108328(&DAT_0f55c4d8);
                        if (iVar5 != 0) {
                          func_0x05e283c0();
                          func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c458,0xf53dab8);
                          func_0x0410844d(&DAT_0f55c4d8);
                        }
                      }
                      plVar21 = (long *)(*plVar30 +
                                        (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) - 1U &
                                               *(uint *)(_DAT_0f55c458 + 4)) * 8);
                      do {
                        lVar10 = *plVar21;
                        if (lVar10 == -1) {
                          plVar8 = (long *)plVar30[4];
                          plVar21 = plVar8;
                          goto LAB_05e409f3;
                        }
                        plVar21 = (long *)(plVar30[3] + lVar10 * 0x18);
                      } while (*(uint *)(plVar30[3] + 8 + lVar10 * 0x18) !=
                               *(uint *)(_DAT_0f55c458 + 4));
                      plVar8 = (long *)plVar30[4];
LAB_05e409f3:
                      if (plVar21 == plVar8) {
                        puVar27 = &DAT_0f55c458;
                      }
                      else {
                        puVar27 = (undefined *)plVar21[2];
                      }
                      auVar12 = (undefined1  [8])func_0x048b0c90(plVar30,puVar27,uVar26,1);
                      if (auVar12 == (undefined1  [8])0x0) {
                        auStack_158 = (undefined1  [8])0x0;
                        plStack_150 = (long *)0x0;
                        func_0x048b0d20(auStack_158);
                        auVar12 = auStack_158;
                        plVar30 = plStack_150;
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
                      plStack_160 = plVar30;
                      func_0x05d84ba0(auStack_158);
                      func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                      if (lStack_190 == lStack_d0) {
                        puVar6 = puStack_100;
                        if ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0)) {
                          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                            bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                          }
                          else {
                            pppppppuVar25 = pppppppuStack_f8;
                            if (cStack_d4 == '\x02') {
                              pppppppuVar25 = &pppppppuStack_f8;
                            }
                            lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar25);
                            bVar31 = lVar10 != 0;
                            puVar6 = puStack_100;
                          }
                        }
                        else {
                          bVar31 = false;
                        }
                      }
                      else {
                        bVar31 = false;
                      }
                      if (pcStack_1a0 != (code *)0x0) {
                        (*pcStack_1a0)(&uStack_1b8);
                      }
                      if (pcStack_140 != (code *)0x0) {
                        (*pcStack_140)(auStack_158);
                      }
                      if (bVar31) {
                        lVar10 = puVar6[5];
                        puVar6 = puVar11 + 1;
                        if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                          (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                                    (auStack_158,puVar6);
                        }
                        puVar11[7] = 0;
                        puVar11[8] = 0;
                        puVar11[5] = 0;
                        puVar11[6] = 0;
                        puVar11[3] = 0;
                        puVar11[4] = 0;
                        *puVar6 = 0;
                        puVar11[2] = 0;
                        *(undefined4 *)(puVar11 + 0x20) = 9;
                        pcStack_1a8 = (code *)&UNK_05e286c0;
                        pcStack_1a0 = (code *)0x0;
                        uStack_198 = CONCAT35(uStack_198._5_3_,0x31df59ba8);
                        lStack_188 = 0;
                        puStack_180 = &UNK_05e285e0;
                        lStack_138 = plStack_108[4];
                        auStack_158 = (undefined1  [8])*plStack_108;
                        plStack_150 = (long *)plStack_108[1];
                        pcStack_148 = (code *)plStack_108[2];
                        pcStack_140 = (code *)plStack_108[3];
                        plVar30 = (long *)plStack_108[2];
                        uStack_1b8 = puVar6;
                        lStack_190 = lVar10;
                        if (plVar30 == (long *)0x0) {
                          pcStack_148 = (code *)0x0;
                        }
                        else {
                          pcStack_148 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,9);
                        }
                        puStack_168 = &UNK_0f00c8d0;
                        func_0x0ed75bc0(&puStack_168,plStack_b8,&uStack_1b8,uStack_110,auStack_158);
                        if (pcStack_1a0 != (code *)0x0) {
                          (*pcStack_1a0)(&uStack_1b8);
                        }
                      }
                      else {
                        plVar30 = (long *)puVar6[5];
                        if (DAT_0f55c700 == '\0') {
                          iVar5 = func_0x04108328(&DAT_0f55c700);
                          if (iVar5 != 0) {
                            func_0x05e306b0();
                            func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c680,0xf53dab8);
                            func_0x0410844d(&DAT_0f55c700);
                          }
                        }
                        plVar21 = (long *)(*plVar30 +
                                          (ulong)((int)((ulong)(plVar30[1] - *plVar30) >> 3) - 1U &
                                                 *(uint *)(_DAT_0f55c680 + 4)) * 8);
                        do {
                          lVar10 = *plVar21;
                          if (lVar10 == -1) {
                            plVar8 = (long *)plVar30[4];
                            plVar21 = plVar8;
                            goto LAB_05e40dd1;
                          }
                          plVar21 = (long *)(plVar30[3] + lVar10 * 0x18);
                        } while (*(uint *)(plVar30[3] + 8 + lVar10 * 0x18) !=
                                 *(uint *)(_DAT_0f55c680 + 4));
                        plVar8 = (long *)plVar30[4];
LAB_05e40dd1:
                        if (plVar21 == plVar8) {
                          puVar27 = &DAT_0f55c680;
                        }
                        else {
                          puVar27 = (undefined *)plVar21[2];
                        }
                        auVar12 = (undefined1  [8])func_0x048b0c90(plVar30,puVar27,uVar26,1);
                        if (auVar12 == (undefined1  [8])0x0) {
                          auStack_158 = (undefined1  [8])0x0;
                          plStack_150 = (long *)0x0;
                          func_0x048b0d20(auStack_158);
                          auVar12 = auStack_158;
                          plVar30 = plStack_150;
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
                        plStack_160 = plVar30;
                        func_0x05d84ba0(auStack_158);
                        func_0x05d9a920(&uStack_1b8,&puStack_168,auStack_158);
                        if ((lStack_190 == lStack_d0) &&
                           ((lStack_c0 != 0) == (puStack_180 != (undefined *)0x0))) {
                          if ((cStack_d4 == '\0') || ((int)uStack_198 != iStack_d8)) {
                            bVar31 = cStack_d4 == '\0' && uStack_198._4_1_ == '\0';
                          }
                          else {
                            if (cStack_d4 != '\x02') {
                              pppppppuStack_b0 = pppppppuStack_f8;
                            }
                            lVar10 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuStack_b0);
                            bVar31 = lVar10 != 0;
                          }
                        }
                        else {
                          bVar31 = false;
                        }
                        if (pcStack_1a0 != (code *)0x0) {
                          (*pcStack_1a0)(&uStack_1b8);
                        }
                        if (pcStack_140 != (code *)0x0) {
                          (*pcStack_140)(auStack_158);
                        }
                        if (bVar31) {
                          lVar10 = puStack_100[5];
                          puVar6 = puVar11 + 1;
                          if ((ulong)*(uint *)(puVar11 + 0x20) != 0xffffffff) {
                            (**(code **)(&UNK_0f00c010 + (ulong)*(uint *)(puVar11 + 0x20) * 8))
                                      (auStack_158,puVar6);
                          }
                          puVar11[7] = 0;
                          puVar11[8] = 0;
                          puVar11[5] = 0;
                          puVar11[6] = 0;
                          puVar11[3] = 0;
                          puVar11[4] = 0;
                          *puVar6 = 0;
                          puVar11[2] = 0;
                          puVar11[9] = 0;
                          *(undefined4 *)(puVar11 + 0x20) = 10;
                          pcStack_1a8 = (code *)&UNK_05e309c0;
                          pcStack_1a0 = (code *)0x0;
                          uStack_198 = CONCAT35(uStack_198._5_3_,0x3065d3d1a);
                          lStack_188 = 0;
                          puStack_180 = &UNK_05e308e0;
                          lStack_138 = plStack_108[4];
                          auStack_158 = (undefined1  [8])*plStack_108;
                          plStack_150 = (long *)plStack_108[1];
                          pcStack_148 = (code *)plStack_108[2];
                          pcStack_140 = (code *)plStack_108[3];
                          plVar30 = (long *)plStack_108[2];
                          uStack_1b8 = puVar6;
                          lStack_190 = lVar10;
                          if (plVar30 == (long *)0x0) {
                            pcStack_148 = (code *)0x0;
                          }
                          else {
                            pcStack_148 = (code *)(**(code **)(*plVar30 + 0x30))(plVar30,10);
                          }
                          puStack_168 = &UNK_0f00c950;
                          func_0x0ed75bc0(&puStack_168,plStack_b8,&uStack_1b8,uStack_110,auStack_158
                                         );
                          if (pcStack_1a0 != (code *)0x0) {
                            (*pcStack_1a0)(&uStack_1b8);
                          }
                        }
                        else if ((*(uint *)(puStack_68 + 0x56) == 0xffffffff) ||
                                (*(uint *)(puStack_68 + 0x56) < (uint)uStack_60)) {
                          uStack_88 = 0x2300000149614c;
                          func_0x0ed5ffe0(*plStack_108,8,&uStack_88);
                          if ((uStack_88 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_88 = 0;
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
    }
    if (pcStack_e0 != (code *)0x0) {
      (*pcStack_e0)(&pppppppuStack_f8);
    }
  }
LAB_05e41136:
  if (((ulong)uStack_a8 & 1) != 0) {
    func_0x0412a280(pcStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
  }
  return;
}


