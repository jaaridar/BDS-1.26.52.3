/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9ae5c0 (ELF vaddr 0xc8ae5c0)
 * Label: caller-of-callee
 * Body:  [[0c9ae5c0, 0c9aed49] [0c9aed50, 0c9aeedc] [0c9aef27, 0c9aef51]]
 * Ghidra: FUN_0c9ae5c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0c9ae5c0(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  byte bVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong *puVar24;
  long *plVar25;
  bool bVar26;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  long lStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  uint uStack_38;
  
  plVar15 = *(long **)(param_2 + 8);
  lVar3 = *plVar15;
  puStack_270 = param_1;
  if (*(char *)((long)plVar15 + 0x32) == '\0') {
    lVar14 = plVar15[4];
    bVar19 = *(byte *)(lVar14 + 0x98);
    uVar22 = (ulong)(bVar19 >> 1);
    if ((bVar19 & 1) != 0) {
      uVar22 = *(ulong *)(lVar14 + 0xa0);
    }
    if (uVar22 == 0) goto LAB_0c9ae62a;
    if ((bVar19 & 1) == 0) {
      uStack_248 = *(byte **)(lVar14 + 0xa8);
      uStack_258 = *(ulong *)(lVar14 + 0x98);
      uStack_250 = *(long **)(lVar14 + 0xa0);
    }
    else {
      func_0x0412e5e0(&uStack_258,*(undefined8 *)(lVar14 + 0xa8));
    }
LAB_0c9ae6c7:
    lVar14 = plVar15[4];
    pbVar1 = (byte *)(lVar14 + 0x30);
    if (pbVar1 == (byte *)&uStack_258) {
      if ((uStack_258 & 1) != 0) {
        func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
      }
    }
    else {
      if ((*pbVar1 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + 0x40),
                        *(ulong *)(lVar14 + 0x30) & 0xfffffffffffffffe);
      }
      *(byte **)(lVar14 + 0x40) = uStack_248;
      *(undefined4 *)pbVar1 = (undefined4)uStack_258;
      *(undefined4 *)(lVar14 + 0x34) = uStack_258._4_4_;
      *(undefined4 *)(lVar14 + 0x38) = (undefined4)uStack_250;
      *(undefined4 *)(lVar14 + 0x3c) = uStack_250._4_4_;
    }
    if (*(int *)((long)plVar15 + 0x34) == 0) {
      func_0x0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      func_0x0412d610(0xf5522b8);
      plVar4 = _DAT_0f5523a0;
      pbVar6 = _DAT_0f552398;
      if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
        uVar17 = func_0x0eee02f0(0xf5522b8);
        func_0x041084d6(&DAT_0f7b8fb8);
        uVar17 = func_0x0eee2d70(uVar17);
        func_0x0412d6b0(pbVar1);
        uVar17 = func_0x0eee2d70(uVar17);
        func_0x0489d8e0(&uStack_258);
        uVar17 = func_0x0eee2d70(uVar17);
        func_0x09e00460(&uStack_258);
        func_0x0eee2d70(uVar17);
        pcVar5 = (code *)swi(3);
        puVar18 = (undefined8 *)(*pcVar5)();
        return puVar18;
      }
      bVar19 = 1;
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
        bVar19 = *pbVar6;
      }
      plVar25 = _DAT_0f5523a8;
      uStack_258 = 0xf5522b8;
      uStack_250 = (long *)CONCAT71(uStack_250._1_7_,1);
      uStack_248 = pbVar6;
      plStack_240 = plVar4;
      plStack_238 = _DAT_0f5523a8;
      if (((bVar19 & 1) == 0) &&
         (cVar11 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar11 = (**(code **)(*plVar25 + 0x608))(plVar25);
      uStack_248 = (byte *)0x0;
      plStack_240 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar25 = plVar4 + 1;
        lVar14 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          FUN_0412c2d0(plVar4);
        }
        plVar4 = plStack_240;
        plStack_238 = (long *)0x0;
        if (plStack_240 != (long *)0x0) {
          LOCK();
          plVar25 = plStack_240 + 1;
          lVar14 = *plVar25;
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plStack_240 + 0x10))(plStack_240);
            FUN_0412c2d0(plVar4);
          }
        }
      }
      if ((char)uStack_250 == '\x01') {
        func_0x0eee02f0(uStack_258);
      }
      if (cVar11 == '\0') {
        func_0x0c972b30(lVar3,plVar15[4] + 0x28);
      }
    }
    puVar24 = &uStack_258;
    if (((char)plVar15[6] == '\x01') && (*(char *)((long)plVar15 + 0x31) == '\x01')) {
      if (*(char *)((long)plVar15 + 0x33) == '\x01') {
        if (DAT_0f7b8fb8 == '\0') goto LAB_0c9aee5a;
        goto LAB_0c9ae8a7;
      }
      (**(code **)(**(long **)(lVar3 + 0x138) + 0x18))(*(long **)(lVar3 + 0x138),plVar15[4] + 8);
      lVar14 = plVar15[4];
      if ((*(byte *)(lVar14 + 0x60) & 1) == 0) goto LAB_0c9ae949;
      goto LAB_0c9ae9ec;
    }
    lVar14 = plVar15[4];
    if ((*(byte *)(lVar14 + 8) & 1) == 0) {
      puVar20 = (ulong *)(lVar14 + 8);
      goto LAB_0c9ae95d;
    }
    uVar17 = *(undefined8 *)(lVar14 + 0x10);
    uVar23 = *(undefined8 *)(lVar14 + 0x18);
LAB_0c9ae9f4:
    func_0x0412e5e0(&uStack_258,uVar23,uVar17);
    lVar14 = plVar15[4];
    puVar20 = (ulong *)(lVar14 + 0x48);
    if (puVar20 == puVar24) {
LAB_0c9aea0f:
      if ((uStack_258 & 1) != 0) {
        func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
      }
      goto LAB_0c9aea29;
    }
  }
  else {
LAB_0c9ae62a:
    bVar26 = (*(byte *)(plVar15 + 1) & 1) != 0;
    puVar24 = (ulong *)((long)plVar15 + 9);
    if (bVar26) {
      puVar24 = (ulong *)plVar15[3];
    }
    uVar22 = (ulong)(*(byte *)(plVar15 + 1) >> 1);
    if (bVar26) {
      uVar22 = plVar15[2];
    }
    if (uVar22 < 0xfffffffffffffff8) {
      if (uVar22 < 0x17) {
        uStack_258 = CONCAT71(uStack_258._1_7_,(char)uVar22 * '\x02');
        uVar13 = (long)&uStack_258 + 1;
        if (uVar22 != 0) goto LAB_0c9ae6b3;
      }
      else {
        uVar21 = 0x1a;
        if ((uVar22 | 7) != 0x17) {
          uVar21 = (uVar22 | 7) + 1;
        }
        uVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (uVar13 == 0) {
          func_0x0eec74c0(uVar21,0);
        }
        uStack_258 = uVar21 | 1;
        uStack_250 = (long *)uVar22;
        uStack_248 = (byte *)uVar13;
LAB_0c9ae6b3:
        func_0x0eee2ee0(uVar13,puVar24,uVar22);
      }
      *(undefined1 *)(uVar13 + uVar22) = 0;
      goto LAB_0c9ae6c7;
    }
    FUN_04882e30();
LAB_0c9aee5a:
    iVar12 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar12 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
LAB_0c9ae8a7:
    lVar14 = plVar15[4];
    bVar26 = (*(byte *)(lVar14 + 0x98) & 1) != 0;
    lStack_268 = lVar14 + 0x99;
    if (bVar26) {
      lStack_268 = *(long *)(lVar14 + 0xa8);
    }
    uStack_260 = (ulong)(*(byte *)(lVar14 + 0x98) >> 1);
    if (bVar26) {
      uStack_260 = *(ulong *)(lVar14 + 0xa0);
    }
    (**(code **)(_DAT_0f7b8f98 + 0x98))(&uStack_258,&DAT_0f7b8f98,&lStack_268);
    lStack_2a8 = 0x4e11f0a723cb56a9;
    plStack_2a0 = (long *)&UNK_0140f690;
    uStack_298 = 1;
    uStack_290 = 0x342;
    if ((char)uStack_218 == '\0') {
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      func_0x0eedeb80(2,0x2d,&uStack_258,&uStack_288,&lStack_2a8);
      if ((uStack_288 & 1) != 0) {
        func_0x0412a280(uStack_278,uStack_288 & 0xfffffffffffffffe);
      }
      if ((uStack_218 & 1) != 0) goto LAB_0c9ae93b;
LAB_0c9aee18:
      func_0x048e6d60(&uStack_258);
      lVar14 = plVar15[4];
      bVar19 = *(byte *)(lVar14 + 0x60);
    }
    else {
      if ((uStack_218 & 1) == 0) goto LAB_0c9aee18;
LAB_0c9ae93b:
      lVar14 = plVar15[4];
      bVar19 = *(byte *)(lVar14 + 0x60);
    }
    if ((bVar19 & 1) != 0) {
LAB_0c9ae9ec:
      uVar17 = *(undefined8 *)(lVar14 + 0x68);
      uVar23 = *(undefined8 *)(lVar14 + 0x70);
      goto LAB_0c9ae9f4;
    }
LAB_0c9ae949:
    puVar20 = (ulong *)(lVar14 + 0x60);
LAB_0c9ae95d:
    uStack_248 = (byte *)puVar20[2];
    uStack_258 = *puVar20;
    uStack_250 = (long *)puVar20[1];
    puVar20 = (ulong *)(lVar14 + 0x48);
    if (puVar20 == puVar24) goto LAB_0c9aea0f;
  }
  if ((*puVar20 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar14 + 0x58),*(ulong *)(lVar14 + 0x48) & 0xfffffffffffffffe);
  }
  puVar20[2] = (ulong)uStack_248;
  *puVar20 = uStack_258;
  puVar20[1] = (ulong)uStack_250;
LAB_0c9aea29:
  uStack_38 = 0;
  uStack_258 = 0;
  uStack_250 = (long *)0x0;
  uStack_248 = (byte *)0x0;
  plStack_240 = (long *)0x0;
  cVar11 = func_0x0edf96c0(plVar15[0xf] + 0x210,&uStack_258);
  plVar4 = plStack_240;
  if (cVar11 != '\0') {
    if (uStack_258 == 0) {
      if (uStack_248 != (byte *)plStack_240) {
        plVar25 = (long *)uStack_248;
        do {
          if ((plVar25[1] != 0) &&
             (plVar16 = (long *)func_0x0412c300(), plStack_2a0 = plVar16, plVar16 != (long *)0x0)) {
            lStack_2a8 = *plVar25;
            if (lStack_2a8 != 0) {
              uStack_288 = CONCAT44(uStack_288._4_4_,(int)plVar15[0xe]);
              (**(code **)(*(long *)(lStack_2a8 + 0x40) + 0x10))(lStack_2a8 + 0x40,&uStack_288);
            }
            LOCK();
            plVar2 = plVar16 + 1;
            lVar14 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              FUN_0412c2d0(plVar16);
            }
          }
          plVar25 = plVar25 + 2;
        } while (plVar25 != plVar4);
      }
    }
    else {
      lStack_2a8 = CONCAT44(lStack_2a8._4_4_,(int)plVar15[0xe]);
      (**(code **)(*(long *)(uStack_258 + 0x40) + 0x10))(uStack_258 + 0x40,&lStack_2a8);
    }
  }
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f3e85a0 + (ulong)uStack_38 * 8))(&lStack_2a8,&plStack_238);
  }
  plVar4 = uStack_250;
  uStack_38 = 0xffffffff;
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar25 = uStack_250 + 1;
    lVar14 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      FUN_0412c2d0(plVar4);
    }
  }
  plVar4 = (long *)plVar15[0xc];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,plVar15[4] + 0x28);
  }
  LOCK();
  *(undefined4 *)(lVar3 + 0x20) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x24) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x28) = 0;
  UNLOCK();
  func_0x0412d680(lVar3 + 0x48);
  pbVar1 = (byte *)(lVar3 + 0x70);
  if (pbVar1 != &UNK_01e79d90) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
    }
    else {
      func_0x04885120(pbVar1,&UNK_01e79d91,0);
    }
  }
  func_0x0412d6b0(lVar3 + 0x48);
  func_0x0c97bf40(lVar3 + 0x18,&UNK_01e79d90);
  func_0x0412d680(lVar3 + 0xa0);
  *(undefined4 *)(lVar3 + 200) = 0;
  func_0x0412d6b0(lVar3 + 0xa0);
  func_0x09e00340(&uStack_258,plVar15[4] + 0x28);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x88,0);
  }
  plVar4 = plStack_240;
  puVar18 = puStack_270;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f3e91a8;
  uVar7 = (undefined4)uStack_250;
  uVar8 = uStack_250._4_4_;
  uVar9 = (undefined4)uStack_248;
  uVar10 = uStack_248._4_4_;
  uStack_250 = (long *)0x0;
  uStack_248 = (byte *)0x0;
  plStack_240 = (long *)0x0;
  plVar15[0xc] = lStack_228;
  plVar15[10] = (long)plStack_238;
  plVar15[0xb] = lStack_230;
  plStack_238 = (long *)0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  plVar15[0xf] = lStack_210;
  *(undefined4 *)(plVar15 + 0xd) = (undefined4)uStack_220;
  *(undefined4 *)((long)plVar15 + 0x6c) = uStack_220._4_4_;
  *(undefined4 *)(plVar15 + 0xe) = (undefined4)uStack_218;
  *(undefined4 *)((long)plVar15 + 0x74) = uStack_218._4_4_;
  uStack_220 = 0;
  uStack_218 = 0;
  lStack_210 = 0;
  plVar15[3] = (long)&UNK_0f3e91f8;
  *(undefined4 *)(plVar15 + 6) = (undefined4)uStack_258;
  *(undefined4 *)(plVar15 + 7) = uVar7;
  *(undefined4 *)((long)plVar15 + 0x3c) = uVar8;
  *(undefined4 *)(plVar15 + 8) = uVar9;
  *(undefined4 *)((long)plVar15 + 0x44) = uVar10;
  plVar15[9] = (long)plVar4;
  *(undefined1 *)(plVar15 + 0x10) = 1;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  LOCK();
  plVar15[2] = plVar15[2] + 1;
  UNLOCK();
  plVar15[4] = (long)(plVar15 + 4);
  plVar15[5] = (long)plVar15;
  LOCK();
  plVar4 = plVar15 + 1;
  lVar3 = *plVar4;
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (lVar3 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
    *puVar18 = plVar15 + 3;
    puVar18[1] = plVar15;
    if ((uStack_220 & 1) != 0) {
      func_0x0412a280(lStack_210,uStack_220 & 0xfffffffffffffffe);
    }
  }
  else {
    *puStack_270 = plVar15 + 3;
    puStack_270[1] = plVar15;
  }
  if (((ulong)plStack_238 & 1) != 0) {
    func_0x0412a280(lStack_228,(ulong)plStack_238 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_250 & 1) != 0) {
    func_0x0412a280(plStack_240,(ulong)uStack_250 & 0xfffffffffffffffe);
  }
  return puVar18;
}


