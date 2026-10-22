/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc152e0 (ELF vaddr 0xcb152e0)
 * Label: caller-of-callee
 * Body:  [[0cc152e0, 0cc155f4] [0cc15600, 0cc15aab] [0cc15ab0, 0cc15ac3] [0cc15ad0, 0cc15c0d] [0cc15c10, 0cc15ce7] [0cc15cf0, 0cc15d41] [0cc15d50, 0cc15e27] [0cc15e30, 0cc160e1]]
 * Ghidra: FUN_0cc152e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc152e0(long *param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  ushort *puVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  ushort uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  byte *pbVar28;
  ushort *puVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  char cVar32;
  bool bVar34;
  float fVar35;
  ushort uStack_28a;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined **ppuStack_258;
  undefined *puStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  byte *pbStack_210;
  undefined **ppuStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_148;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined5 uStack_54;
  undefined3 uStack_4f;
  undefined5 uStack_4c;
  undefined8 *puVar33;
  
  plStack_230 = param_1;
  puStack_228 = (undefined *)0x0;
  if ((param_2[0x50] & 1) == 0) {
    pbStack_210 = *(byte **)(param_2 + 0x60);
    uVar8 = (uint)*(ulong *)(param_2 + 0x50);
    uStack_220 = (undefined **)*(ulong *)(param_2 + 0x50);
    lStack_218 = *(long *)(param_2 + 0x58);
    ppuStack_208 = (undefined **)0x0;
    uVar18 = (ulong)uVar8 & 0xff;
    if ((uVar8 & 1) == 0) goto LAB_0cc15337;
LAB_0cc15367:
    if (lStack_218 != 0) goto LAB_0cc15378;
LAB_0cc15466:
    ppuStack_208 = (undefined **)0x0;
    puVar30 = (undefined *)0x0;
  }
  else {
    func_0x0412e5e0(&uStack_220,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
    ppuStack_208 = (undefined **)0x0;
    uVar18 = (ulong)uStack_220 & 0xff;
    if (((ulong)uStack_220 & 1) != 0) goto LAB_0cc15367;
LAB_0cc15337:
    if (uVar18 >> 1 == 0) goto LAB_0cc15466;
LAB_0cc15378:
    ppuStack_208 = (undefined **)0x0;
    if ((uVar18 & 1) == 0) {
      pbVar28 = (byte *)((long)&uStack_220 + 1);
      if (pbVar28 != (byte *)0x0) goto LAB_0cc1539c;
      goto LAB_0cc15466;
    }
    pbVar28 = pbStack_210;
    if (pbStack_210 == (byte *)0x0) goto LAB_0cc15466;
LAB_0cc1539c:
    if (*pbVar28 == 0) goto LAB_0cc15466;
    puVar30 = (undefined *)0xcbf29ce484222325;
    uVar18 = func_0x0eee2e90(pbVar28);
    if (uVar18 != 0) {
      uVar23 = (ulong)((uint)uVar18 & 7);
      if (7 < uVar18) {
        uVar18 = uVar18 & 0xfffffffffffffff8;
        do {
          puVar30 = (undefined *)
                    (((((((((long)puVar30 * 0x100000001b3 ^ (ulong)*pbVar28) * 0x100000001b3 ^
                          (ulong)pbVar28[1]) * 0x100000001b3 ^ (ulong)pbVar28[2]) * 0x100000001b3 ^
                        (ulong)pbVar28[3]) * 0x100000001b3 ^ (ulong)pbVar28[4]) * 0x100000001b3 ^
                      (ulong)pbVar28[5]) * 0x100000001b3 ^ (ulong)pbVar28[6]) * 0x100000001b3 ^
                    (ulong)pbVar28[7]);
          pbVar28 = pbVar28 + 8;
          uVar18 = uVar18 - 8;
        } while (uVar18 != 0);
      }
      if (uVar23 != 0) {
        uVar18 = 0;
        do {
          puVar30 = (undefined *)((long)puVar30 * 0x100000001b3 ^ (ulong)pbVar28[uVar18]);
          uVar18 = uVar18 + 1;
        } while (uVar23 != uVar18);
      }
    }
  }
  ppuVar31 = &puStack_228;
  puStack_228 = puVar30;
  ppuVar10 = (undefined **)func_0x0cc422f0(&DAT_0f6ff9e0,ppuVar31,0,0,0);
  if (((ulong)uStack_220 & 1) != 0) {
    func_0x0412a280(pbStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
  }
  if (ppuVar10 == (undefined **)0x0) {
    return;
  }
  puStack_228 = &UNK_0f3f8bf8;
  uStack_220 = ppuVar10;
  ppuStack_208 = ppuVar31;
  puVar33 = *(undefined8 **)(param_2 + 0x158);
  lVar17 = 0x20;
  puStack_280 = param_3;
  ppuVar26 = ppuVar10;
  if (puVar33 != *(undefined8 **)(param_2 + 0x160)) {
    do {
      if (ppuStack_208 == (undefined **)0x0) {
        func_0x04891200();
        ppuVar25 = ppuVar10;
        goto LAB_0cc16070;
      }
      (**(code **)(*ppuStack_208 + 0x30))(ppuStack_208,*puVar33);
      puVar33 = puVar33 + 2;
    } while (puVar33 != *(undefined8 **)(param_2 + 0x160));
    if ((ppuStack_208 != &puStack_228) && (lVar17 = 0x28, ppuStack_208 == (undefined **)0x0))
    goto LAB_0cc1553c;
  }
  (**(code **)(*ppuStack_208 + lVar17))(ppuStack_208);
LAB_0cc1553c:
  if (*(long *)(param_2 + 0x1a0) != 0) {
    if ((DAT_0f704038 == '\0') && (iVar9 = func_0x04108328(&DAT_0f704038), iVar9 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f704030 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      FUN_0410844d(&DAT_0f704038);
    }
    uVar16 = _DAT_0f704030;
    if (*(char *)(ppuVar10 + 0xe) == '\x01') {
      puVar30 = param_2 + 0x188;
      ppuVar31 = ppuVar10 + 5;
      uVar18 = (ulong)_DAT_0f704030;
      uStack_28a = _DAT_0f704030;
      lVar17 = func_0x0ce66720(ppuVar31,&uStack_28a);
      if (lVar17 == 0) {
        ppuStack_288 = ppuVar10;
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar11 == (long *)0x0) goto LAB_0cc1605a;
        goto LAB_0cc15662;
      }
      if (*(char *)((long)ppuVar10 + 0x71) == '\x01') {
        func_0x0cca4860(&puStack_278,puVar30);
        func_0x0cca3300(lVar17 + 8,&puStack_278);
        puVar30 = puStack_278;
        plVar11 = plStack_268;
        while (plVar11 != (long *)0x0) {
          plVar4 = (long *)*plVar11;
          puStack_278 = puVar30;
          func_0x0b69a770(plVar11 + 5);
          if ((*(byte *)(plVar11 + 2) & 1) != 0) {
            func_0x0412a280(plVar11[4],plVar11[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(plVar11,0xa8);
          puVar30 = puStack_278;
          plVar11 = plVar4;
        }
        puStack_278 = (undefined *)0x0;
        if (puVar30 != (undefined *)0x0) {
          func_0x0412a280(puVar30,(long)plStack_270 << 3);
        }
      }
    }
  }
  do {
    lVar3 = *(long *)(param_2 + 0x148);
    for (lVar17 = *(long *)(param_2 + 0x140); lVar17 != lVar3; lVar17 = lVar17 + 0x28) {
      FUN_0c6cf060(ppuVar26,lVar17);
    }
    ppuVar25 = ppuVar10 + 5;
    uVar8 = func_0x0cd20160(ppuVar25);
    puVar33 = (undefined8 *)(ulong)uVar8;
    cVar32 = (char)uVar8;
    uVar7 = func_0x0c520cf0(ppuVar25);
    ppuStack_288 = (undefined **)CONCAT71(ppuStack_288._1_7_,uVar7);
    ppuVar31 = ppuVar10;
    if (DAT_0f5658e8 == '\0') {
LAB_0cc16070:
      cVar32 = (char)puVar33;
      iVar9 = func_0x04108328(&DAT_0f5658e8);
      if (iVar9 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f5658e0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        FUN_0410844d(&DAT_0f5658e8);
      }
    }
    puStack_278 = (undefined *)CONCAT62(puStack_278._2_6_,_DAT_0f5658e0);
    lVar17 = func_0x0ce66720(ppuVar25,&puStack_278);
    puVar30 = puStack_280;
    if (cVar32 == '\0') {
      if (lVar17 == 0) {
        if ((char)ppuStack_288 == '\0') goto LAB_0cc1586b;
      }
      else {
        if ((*(char *)(lVar17 + 9) != '\0') && (*(char *)(ppuVar26 + 0xe) == '\x01')) {
          *(byte *)((long)ppuVar26 + 0x14d) = *(byte *)((long)ppuVar26 + 0x14d) | 1;
        }
        if ((char)ppuStack_288 == '\0') goto LAB_0cc1584d;
      }
LAB_0cc1585c:
      if (*(char *)(ppuVar26 + 0xe) == '\x01') {
        *(byte *)((long)ppuVar26 + 0x14d) = *(byte *)((long)ppuVar26 + 0x14d) | 2;
      }
    }
    else {
      if (*(char *)(ppuVar26 + 0xe) == '\x01') {
        *(byte *)((long)ppuVar26 + 0x14d) = *(byte *)((long)ppuVar26 + 0x14d) | 1;
      }
      if ((char)ppuStack_288 != '\0') goto LAB_0cc1585c;
      if (lVar17 != 0) {
LAB_0cc1584d:
        if (*(char *)(lVar17 + 10) == '\x01') goto LAB_0cc1585c;
      }
    }
LAB_0cc1586b:
    bVar13 = 6;
    if ((byte)*(undefined4 *)(param_2 + 0xe0) < 6) {
      bVar13 = (byte)*(undefined4 *)(param_2 + 0xe0);
    }
    ppuVar10 = (undefined **)(param_2 + 200);
    *(byte *)(ppuVar26 + 0x26) = bVar13;
    ppuVar25 = ppuVar31 + 0x22;
    if (ppuVar25 != ppuVar10) {
      bVar13 = *(byte *)ppuVar10;
      if (((ulong)*ppuVar25 & 1) == 0) {
        if ((bVar13 & 1) == 0) {
          ppuVar31[0x24] = *(undefined **)(param_2 + 0xd8);
          puVar27 = *(undefined **)(param_2 + 0xd0);
          *ppuVar25 = *ppuVar10;
          ppuVar31[0x23] = puVar27;
        }
        else {
          func_0x04885070(ppuVar25,*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 0xd0));
        }
      }
      else {
        bVar34 = (bVar13 & 1) != 0;
        puVar27 = param_2 + 0xc9;
        if (bVar34) {
          puVar27 = *(undefined **)(param_2 + 0xd8);
        }
        uVar18 = (ulong)(bVar13 >> 1);
        if (bVar34) {
          uVar18 = *(ulong *)(param_2 + 0xd0);
        }
        func_0x04885120(ppuVar25,puVar27,uVar18);
      }
    }
    *(ushort *)((long)ppuVar26 + 0x133) =
         *(ushort *)((long)ppuVar26 + 0x133) & 0xffdf | (ushort)(byte)param_2[0xe1] << 5;
    ppuStack_208 = (undefined **)0x0;
    lStack_200 = 0;
    lStack_218 = 0;
    pbStack_210 = (byte *)0x0;
    puStack_228 = (undefined *)0x0;
    uStack_220 = (undefined **)0x0;
    uStack_1f8 = 3;
    ppuStack_148 = &puStack_168;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_168 = &UNK_0f325c88;
    puStack_160 = &UNK_0bccfd60;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_110 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_60 = 0x3f800000;
    uStack_130 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    uStack_4f = 0;
    uStack_4c = 0;
    uStack_128 = 0x3f800000;
    puStack_1b8 = puVar30;
    ppuVar31 = *(undefined ***)(param_2 + 0x170);
    ppuStack_288 = *(undefined ***)(param_2 + 0x178);
    if (ppuVar31 == ppuStack_288) {
LAB_0cc15f91:
      uStack_6c._4_4_ = 0;
LAB_0cc15fa9:
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_6c._4_4_ * 8))(&puStack_278,&uStack_a8);
LAB_0cc15fc2:
      uStack_6c = CONCAT44(0xffffffff,(undefined4)uStack_6c);
      if (uStack_c4 >> 0x20 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (uStack_c4 >> 0x20) * 8))(&puStack_278,&uStack_100);
      }
      uStack_c4 = CONCAT44(0xffffffff,(undefined4)uStack_c4);
      if (ppuStack_148 == &puStack_168) {
        lVar17 = 0x20;
      }
      else {
        lVar17 = 0x28;
        if (ppuStack_148 == (undefined **)0x0) goto joined_r0x0cc16051;
      }
      (**(code **)(*ppuStack_148 + lVar17))();
joined_r0x0cc16051:
      if (lStack_200 == 0) {
        return;
      }
      func_0x0412c2d0();
      return;
    }
    param_2 = ppuVar26[0x3d];
    if ((long)ppuVar26[0x3e] - (long)param_2 == 0) goto LAB_0cc15f91;
    lVar17 = (long)ppuVar26[0x3e] - (long)param_2 >> 3;
    puVar27 = (undefined *)(lVar17 + (ulong)(lVar17 == 0));
    puStack_280 = puVar27;
LAB_0cc15abf:
    puVar30 = (undefined *)0x0;
LAB_0cc15ad8:
    plVar11 = *(long **)(param_2 + (long)puVar30 * 8);
    if (plVar11 == (long *)0x0) goto LAB_0cc15ad0;
    uStack_1a8 = SUB84(plVar11,0);
    uStack_1a4 = (undefined4)((ulong)plVar11 >> 0x20);
    ppuVar10 = ppuVar31;
    if (*(int *)(ppuVar31 + 1) != 1) {
      lVar17 = 0xf6b4ca0;
      if (*(int *)(ppuVar31 + 1) == 0) {
        plVar4 = (long *)*ppuVar31;
        lVar17 = 0xf6b4ca0;
        if (plVar4 != (long *)0x0) {
          lVar17 = (**(code **)(*plVar4 + 0x18))(plVar4,&puStack_228);
          puVar27 = puStack_280;
        }
      }
      ppuVar10 = (undefined **)(lVar17 + 8);
    }
    fVar35 = (float)func_0x0eee3b20(*(undefined4 *)ppuVar10);
    if ((int)fVar35 == 0) goto LAB_0cc15ad0;
    puStack_278 = &UNK_0f3f8cb0;
    plStack_270 = plStack_230;
    plStack_268 = plVar11;
    ppuStack_258 = &puStack_278;
    ppuVar10 = (undefined **)ppuVar31[10];
    uVar18 = 0x20;
    if (ppuVar10 == (undefined **)ppuVar31[0xb]) goto LAB_0cc15bab;
    while (ppuStack_258 != (undefined **)0x0) {
      (**(code **)(*ppuStack_258 + 0x30))();
      ppuVar10 = ppuVar10 + 2;
      if (ppuVar10 == (undefined **)ppuVar31[0xb]) goto code_r0x0cc15b92;
    }
    func_0x04891200();
LAB_0cc1605a:
    uVar16 = (ushort)uVar18;
    func_0x0eec74c0(0x30,0);
    ppuVar26 = ppuVar10;
LAB_0cc15662:
    *plVar11 = (long)&UNK_0f3f8c78;
    ppuStack_238 = ppuVar31;
    func_0x0cca4860(plVar11 + 1,puVar30);
    puStack_278 = (undefined *)CONCAT62(puStack_278._2_6_,uVar16);
    puVar2 = (ushort *)ppuVar26[5];
    lVar17 = (long)ppuVar26[6] - (long)puVar2;
    puVar29 = puVar2;
    if (lVar17 != 0) {
      uVar18 = lVar17 >> 1;
      do {
        uVar24 = ~(uVar18 >> 1) + uVar18;
        uVar23 = uVar18 & 0xfffffffffffffffe;
        uVar18 = uVar18 >> 1;
        if (*(ushort *)((long)puVar29 + uVar23) < uVar16) {
          puVar29 = (ushort *)((long)puVar29 + uVar23 + 2);
          uVar18 = uVar24;
        }
      } while (uVar18 != 0);
    }
    puStack_240 = ppuVar26[8];
    if ((puVar29 == (ushort *)ppuVar26[6]) || (uVar16 < *puVar29)) {
      plStack_270 = plVar11;
      FUN_05cfc480(ppuStack_238,puVar29,&puStack_278);
      func_0x05cfc9d0(ppuStack_288 + 8,puStack_240 + ((long)puVar29 - (long)puVar2) * 4,&plStack_270
                     );
      plVar11 = plStack_270;
    }
    plStack_270 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    ppuVar10 = ppuStack_288;
    if ((ppuVar26[0x10] != (undefined *)0x0) &&
       (plVar11 = (long *)func_0x0412c300(), plVar11 != (long *)0x0)) {
      LOCK();
      plVar4 = plVar11 + 1;
      lVar17 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
  } while( true );
code_r0x0cc15b92:
  if ((ppuStack_258 == &puStack_278) || (uVar18 = 0x28, ppuStack_258 != (undefined **)0x0)) {
LAB_0cc15bab:
    (**(code **)(*ppuStack_258 + uVar18))();
  }
  puVar5 = ppuVar31[8];
  for (puVar27 = ppuVar31[7]; puVar27 != puVar5; puVar27 = puVar27 + 0x28) {
    func_0x0c8495e0(plVar11,puVar27);
  }
  if ((DAT_0f703ff8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f703ff8), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f703ff0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    FUN_0410844d(&DAT_0f703ff8);
  }
  lVar17 = plVar11[1];
  lVar3 = plVar11[2];
  if (lVar3 - lVar17 != 0) {
    lVar20 = lVar17;
    lVar14 = lVar3;
    uVar18 = lVar3 - lVar17 >> 1;
LAB_0cc15c29:
    do {
      uVar23 = uVar18 >> 1;
      lVar19 = lVar20 + (uVar18 & 0xfffffffffffffffe);
      uVar16 = *(ushort *)(lVar20 + (uVar18 & 0xfffffffffffffffe));
      if (uVar16 < _DAT_0f703ff0) goto LAB_0cc15c10;
      if (uVar16 <= _DAT_0f703ff0) {
        if (uVar18 != 1) {
          uVar18 = (long)uVar18 >> 1;
          do {
            uVar24 = ~(uVar18 >> 1) + uVar18;
            uVar23 = uVar18 & 0xfffffffffffffffe;
            uVar18 = uVar18 >> 1;
            if (*(ushort *)(lVar20 + uVar23) < _DAT_0f703ff0) {
              lVar20 = lVar20 + 2 + uVar23;
              uVar18 = uVar24;
            }
          } while (uVar18 != 0);
        }
        lVar12 = lVar14 - (lVar19 + 2);
        if (lVar12 != 0) {
          uVar18 = lVar12 >> 1;
          lVar14 = lVar19 + 2;
          do {
            uVar23 = uVar18 >> 1;
            uVar24 = uVar18 & 0xfffffffffffffffe;
            uVar18 = ~uVar23 + uVar18;
            lVar19 = lVar14 + 2 + uVar24;
            if (_DAT_0f703ff0 < *(ushort *)(lVar14 + uVar24)) {
              uVar18 = uVar23;
              lVar19 = lVar14;
            }
            lVar14 = lVar19;
          } while (uVar18 != 0);
        }
        if (lVar20 == lVar14) break;
        lVar17 = plVar11[4] + (lVar20 - lVar17) * 4;
        lVar14 = plVar11[5];
        goto LAB_0cc15cfb;
      }
      lVar14 = lVar19;
      uVar18 = uVar23;
    } while (uVar23 != 0);
  }
LAB_0cc15cf0:
  lVar14 = plVar11[5];
  lVar20 = lVar3;
  lVar17 = lVar14;
LAB_0cc15cfb:
  if ((DAT_0f6e8830 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6e8830), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f6e8828 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    FUN_0410844d(&DAT_0f6e8830);
  }
  lVar19 = plVar11[1];
  lVar12 = plVar11[2];
  if (lVar12 - lVar19 != 0) {
    lVar21 = lVar19;
    lVar15 = lVar12;
    uVar18 = lVar12 - lVar19 >> 1;
LAB_0cc15d69:
    do {
      uVar23 = uVar18 >> 1;
      lVar1 = lVar21 + (uVar18 & 0xfffffffffffffffe);
      uVar16 = *(ushort *)(lVar21 + (uVar18 & 0xfffffffffffffffe));
      if (uVar16 < _DAT_0f6e8828) goto LAB_0cc15d50;
      if (uVar16 <= _DAT_0f6e8828) {
        if (uVar18 != 1) {
          uVar18 = (long)uVar18 >> 1;
          do {
            uVar24 = ~(uVar18 >> 1) + uVar18;
            uVar23 = uVar18 & 0xfffffffffffffffe;
            uVar18 = uVar18 >> 1;
            if (*(ushort *)(lVar21 + uVar23) < _DAT_0f6e8828) {
              lVar21 = lVar21 + 2 + uVar23;
              uVar18 = uVar24;
            }
          } while (uVar18 != 0);
        }
        lVar22 = lVar15 - (lVar1 + 2);
        if (lVar22 != 0) {
          uVar18 = lVar22 >> 1;
          lVar15 = lVar1 + 2;
          do {
            uVar23 = uVar18 >> 1;
            uVar24 = uVar18 & 0xfffffffffffffffe;
            uVar18 = ~uVar23 + uVar18;
            lVar1 = lVar15 + 2 + uVar24;
            if (_DAT_0f6e8828 < *(ushort *)(lVar15 + uVar24)) {
              uVar18 = uVar23;
              lVar1 = lVar15;
            }
            lVar15 = lVar1;
          } while (uVar18 != 0);
        }
        if (lVar21 == lVar15) break;
        lVar19 = plVar11[4] + (lVar21 - lVar19) * 4;
        lVar15 = plVar11[5];
        goto LAB_0cc15e3b;
      }
      lVar15 = lVar1;
      uVar18 = uVar23;
    } while (uVar23 != 0);
  }
LAB_0cc15e30:
  lVar15 = plVar11[5];
  lVar21 = lVar12;
  lVar19 = lVar15;
LAB_0cc15e3b:
  bVar34 = lVar21 == lVar12;
  bVar6 = lVar15 == lVar19;
  if ((DAT_0f5658e8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5658e8), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5658e0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    FUN_0410844d(&DAT_0f5658e8);
  }
  uStack_28a = _DAT_0f5658e0;
  lVar12 = func_0x0ce66720(plVar11 + 1);
  lVar19 = plVar11[0xd];
  puVar27 = puStack_280;
  if (lVar20 == lVar3 && lVar14 == lVar17) {
    if (lVar12 == 0) {
      if (bVar34 && bVar6) goto LAB_0cc15ad0;
    }
    else {
      if ((*(char *)(lVar12 + 9) != '\0') && (*(char *)(lVar19 + 0x70) == '\x01')) {
        *(byte *)(lVar19 + 0x14d) = *(byte *)(lVar19 + 0x14d) | 1;
      }
      if (bVar34 && bVar6) goto LAB_0cc15ebc;
    }
  }
  else {
    if (*(char *)(lVar19 + 0x70) == '\x01') {
      *(byte *)(lVar19 + 0x14d) = *(byte *)(lVar19 + 0x14d) | 1;
    }
    if (bVar34 && bVar6) {
      if (lVar12 == 0) goto LAB_0cc15ad0;
LAB_0cc15ebc:
      if (*(char *)(lVar12 + 10) != '\x01') goto LAB_0cc15ad0;
    }
  }
  if (*(char *)(lVar19 + 0x70) == '\x01') {
    *(byte *)(lVar19 + 0x14d) = *(byte *)(lVar19 + 0x14d) | 2;
  }
LAB_0cc15ad0:
  puVar30 = puVar30 + 1;
  if (puVar30 == puVar27) goto LAB_0cc15ab0;
  goto LAB_0cc15ad8;
LAB_0cc15c10:
  lVar20 = lVar19 + 2;
  uVar18 = ~uVar23 + uVar18;
  if (uVar18 == 0) goto LAB_0cc15cf0;
  goto LAB_0cc15c29;
LAB_0cc15d50:
  lVar21 = lVar1 + 2;
  uVar18 = ~uVar23 + uVar18;
  if (uVar18 == 0) goto LAB_0cc15e30;
  goto LAB_0cc15d69;
LAB_0cc15ab0:
  ppuVar31 = ppuVar31 + 0xd;
  if (ppuVar31 == ppuStack_288) {
    if (uStack_6c._4_4_ != 0xffffffff) goto LAB_0cc15fa9;
    goto LAB_0cc15fc2;
  }
  goto LAB_0cc15abf;
}


