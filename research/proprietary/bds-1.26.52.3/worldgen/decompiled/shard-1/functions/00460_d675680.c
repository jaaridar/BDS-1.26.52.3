/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd775680 (ELF vaddr 0xd675680)
 * Label: caller-of-callee
 * Body:  [[0d775680, 0d776064] [0d776070, 0d7763de] [0d7763e0, 0d7769ad]]
 * Ghidra: FUN_0d775680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d775680(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *unaff_RBP;
  char *unaff_R13;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_168;
  long *plStack_160;
  undefined1 auStack_158 [8];
  long *plStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  long lStack_130;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  ulong uStack_e8;
  uint uStack_e0;
  undefined1 auStack_d8 [152];
  long *plStack_40;
  long *plStack_38;
  
  func_0x0eec80e0(param_1,&UNK_01302b9e,0xb,1);
  lVar11 = (**(code **)(*param_1 + 0x7a0))(param_1);
  plVar16 = (long *)(param_1[4] + 0x218);
  if (lVar11 != 0) {
    plVar16 = (long *)(lVar11 + 8);
  }
  lVar11 = *plVar16;
  func_0x04886140(auStack_158);
  uVar12 = func_0x04885260(&plStack_148,&UNK_01389728,10);
  uVar12 = func_0x04885260(uVar12,&UNK_012d04b8,8);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_014716c3,0xc);
  uVar12 = func_0x04885260(uVar12,&UNK_012d04c1,7);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_014dc62d,0x11);
  uVar12 = func_0x04885260(uVar12,&UNK_0121a614,0x28);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_012ea2e4,0x16);
  uVar12 = func_0x0413b890(uVar12,0x6ab54356);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_014dc63f,0x15);
  uVar12 = func_0x04885260(uVar12,&UNK_01254d89,0);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_011cc323,0x10);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_011e4ffa,0xe);
  bVar19 = (*(byte *)(lVar11 + 8) & 1) != 0;
  lVar13 = lVar11 + 9;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x18);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x10);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_014dc655,0xc);
  bVar19 = (*(byte *)(lVar11 + 0x20) & 1) != 0;
  lVar13 = lVar11 + 0x21;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x30);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0x20) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x28);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_012d04ad,10);
  bVar19 = (*(byte *)(lVar11 + 0x38) & 1) != 0;
  lVar13 = lVar11 + 0x39;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x48);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0x38) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x40);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_01425221,10);
  bVar19 = (*(byte *)(lVar11 + 0x50) & 1) != 0;
  lVar13 = lVar11 + 0x51;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x60);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0x50) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x58);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_011cc334,10);
  bVar19 = (*(byte *)(lVar11 + 0x68) & 1) != 0;
  lVar13 = lVar11 + 0x69;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x78);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0x68) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x70);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_012b6141,0xe);
  bVar19 = (*(byte *)(lVar11 + 0x80) & 1) != 0;
  lVar13 = lVar11 + 0x81;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x90);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0x80) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x88);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_011cc323,0x10);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_0131dfed,0x12);
  bVar19 = (*(byte *)(lVar11 + 0x98) & 1) != 0;
  lVar13 = lVar11 + 0x99;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0xa8);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0x98) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0xa0);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_012350a9,0xf);
  bVar19 = (*(byte *)(lVar11 + 0xb0) & 1) != 0;
  lVar13 = lVar11 + 0xb1;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0xc0);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0xb0) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0xb8);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_01269da9,0xe);
  bVar19 = (*(byte *)(lVar11 + 200) & 1) != 0;
  lVar13 = lVar11 + 0xc9;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0xd8);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 200) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0xd0);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_01302b20,0x1a);
  bVar19 = (*(byte *)(lVar11 + 0xe0) & 1) != 0;
  lVar13 = lVar11 + 0xe1;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0xf0);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0xe0) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0xe8);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_012b6150,0xf);
  bVar19 = (*(byte *)(lVar11 + 0xf8) & 1) != 0;
  lVar13 = lVar11 + 0xf9;
  if (bVar19) {
    lVar13 = *(long *)(lVar11 + 0x108);
  }
  uVar18 = (ulong)(*(byte *)(lVar11 + 0xf8) >> 1);
  if (bVar19) {
    uVar18 = *(ulong *)(lVar11 + 0x100);
  }
  uVar12 = func_0x04885260(uVar12,lVar13,uVar18);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_011cc323,0x10);
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_0140b763,0x10);
  uVar12 = func_0x0413ba00(uVar12,*(undefined8 *)(lVar11 + 0x130));
  uStack_188._0_1_ = 10;
  func_0x04885260(uVar12,&uStack_188,1);
  uVar12 = func_0x04885260(&plStack_148,&UNK_0131e000,0xc);
  uVar12 = func_0x0413ba00(uVar12,*(undefined1 *)(lVar11 + 0x17b));
  uStack_188 = (char *)CONCAT71(uStack_188._1_7_,10);
  func_0x04885260(uVar12,&uStack_188,1);
  if ((uStack_e0 & 0x10) == 0) {
    if ((uStack_e0 & 8) != 0) {
      uVar18 = lStack_120 - lStack_130;
      lVar11 = lStack_130;
      goto joined_r0x0d775ca5;
    }
    uStack_188 = (char *)((ulong)uStack_188._1_7_ << 8);
LAB_0d775cc2:
    lVar13 = (long)&uStack_188 + 1;
    uVar18 = 0;
LAB_0d775d20:
    *(undefined1 *)(lVar13 + uVar18) = 0;
    auStack_158 = (undefined1  [8])_UNK_0eeed4d8;
    *(undefined8 *)(auStack_158 + *(long *)(_UNK_0eeed4d8 + -0x18)) = _UNK_0eeed518;
    plStack_148 = _UNK_0eeed520;
    puStack_140 = &UNK_0eeed150;
    if ((bStack_100 & 1) != 0) {
      func_0x0412a280(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
    }
    puStack_140 = &UNK_0eeece20;
    func_0x04167a40(auStack_138);
    func_0x0413c8a0(auStack_158,&UNK_0eeed4e0);
    func_0x04138180(auStack_d8);
    if (((ulong)uStack_188 & 1) != 0) {
      func_0x0412a280(lStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
    }
    plStack_160 = (long *)param_1[4];
    pcVar14 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
    if (pcVar14 == (char *)0x0) {
      func_0x0eec74c0(0xb0,0);
    }
    plStack_150 = (long *)0x0;
    unaff_R13 = (char *)param_1[1];
    plVar16 = (long *)param_1[2];
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
      plStack_150 = plVar16;
    }
    auStack_158 = (undefined1  [8])unaff_R13;
    if ((unaff_R13 == (char *)0x0) || (plStack_148 = param_1, *unaff_R13 == '\0')) {
LAB_0d776001:
      func_0x04890760();
LAB_0d776006:
      plVar16[0x47] = (long)pcVar14;
LAB_0d77600e:
      cVar6 = func_0x0412d4f0(0xf726d20);
      if (cVar6 == '\0') {
LAB_0d776039:
        auStack_158 = (undefined1  [8])0xf726d20;
        plStack_150 = (long *)CONCAT71(plStack_150._1_7_,1);
        FUN_0412d450(0xf726d20);
        plVar16 = plStack_160;
        if (_DAT_0f726df0 != 0) {
          uVar18 = _DAT_0f726df0;
          do {
            LOCK();
            bVar19 = uVar18 == _DAT_0f726df0;
            uVar17 = uVar18 | (ulong)unaff_R13;
            if (!bVar19) {
              uVar18 = _DAT_0f726df0;
              uVar17 = _DAT_0f726df0;
            }
            _DAT_0f726df0 = uVar17;
            UNLOCK();
            if (bVar19) {
              func_0x0eee0430(0xf726db0,auStack_158);
              uVar18 = _DAT_0f726df0;
            }
            plVar16 = plStack_160;
          } while (uVar18 != 0);
        }
      }
      else if (_DAT_0f726df0 != 0) {
        func_0x0412d520(0xf726d20);
        goto LAB_0d776039;
      }
      plVar3 = _DAT_0f726e08;
      _DAT_0f726e00 = (char *)0x0;
      _DAT_0f726e08 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0412c2d0(plVar3);
        }
      }
      _DAT_0f726e10 = (char *)0x0;
      _DAT_0f726e00 = *(char **)(pcVar14 + 8);
      plVar3 = *(long **)(pcVar14 + 0x10);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar3[1] = plVar3[1] + 1;
        UNLOCK();
      }
      plVar1 = _DAT_0f726e08;
      if (_DAT_0f726e08 != (long *)0x0) {
        LOCK();
        plVar2 = _DAT_0f726e08 + 1;
        lVar11 = *plVar2;
        _DAT_0f726e08 = plVar3;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        plVar3 = _DAT_0f726e08;
        if (lVar11 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
          plVar3 = _DAT_0f726e08;
        }
      }
      _DAT_0f726e08 = plVar3;
      if (((_DAT_0f726e00 != (char *)0x0) && (_DAT_0f726e10 = pcVar14, *_DAT_0f726e00 == '\0')) &&
         (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01283dfb),
         cVar6 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      pcVar14 = _DAT_0f726e10;
      uStack_188 = _DAT_0f726e10;
      func_0x0412d520(0xf726d20);
      if (plVar16[0x48] != 0) {
        func_0x0d783ce0();
        plVar16[0x48] = 0;
      }
      plVar16[0x48] = (long)pcVar14;
    }
    else {
      *(undefined **)pcVar14 = &UNK_0f534768;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = &UNK_0ef44a60;
      *(undefined1 *)(puVar15 + 3) = 1;
      *(undefined8 **)(pcVar14 + 8) = puVar15 + 3;
      *(undefined8 **)(pcVar14 + 0x10) = puVar15;
      *(undefined **)pcVar14 = &UNK_0f482508;
      *(char **)(pcVar14 + 0x18) = unaff_R13;
      *(long **)(pcVar14 + 0x20) = plVar16;
      if (plVar16 == (long *)0x0) {
        *(long **)(pcVar14 + 0x28) = param_1;
        cVar6 = *unaff_R13;
      }
      else {
        LOCK();
        plVar16[1] = plVar16[1] + 1;
        UNLOCK();
        unaff_R13 = *(char **)(pcVar14 + 0x18);
        *(long **)(pcVar14 + 0x28) = param_1;
        if (unaff_R13 == (char *)0x0) goto LAB_0d776001;
        cVar6 = *unaff_R13;
      }
      if (cVar6 != '\x01') goto LAB_0d776001;
      plStack_168 = param_1;
      func_0x0eeafe10(pcVar14 + 0x30);
      func_0x0eeafe10(pcVar14 + 0x50);
      func_0x0eeafe10(pcVar14 + 0x70);
      pcVar14[0x90] = '\0';
      pcVar14[0x91] = '\0';
      pcVar14[0xa8] = '\0';
      func_0x0d77cfc0(pcVar14,2);
      unaff_RBP = plStack_168;
      auStack_158 = (undefined1  [8])0x0;
      plStack_150 = (long *)0x0;
      if (plVar16 == (long *)0x0) {
LAB_0d775f79:
        lVar11 = plStack_160[0x48];
        plVar16 = plStack_160;
      }
      else {
        LOCK();
        plVar3 = plVar16 + 1;
        lVar11 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
        plVar16 = plStack_150;
        plStack_148 = (long *)0x0;
        if (plStack_150 == (long *)0x0) goto LAB_0d775f79;
        LOCK();
        plVar3 = plStack_150 + 1;
        lVar11 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar11 != 0) goto LAB_0d775f79;
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        func_0x0412c2d0(plVar16);
        lVar11 = plStack_160[0x48];
        plVar16 = plStack_160;
      }
      plStack_160 = plVar16;
      if (lVar11 != 0) {
        func_0x0d783ce0();
        plVar16[0x48] = 0;
      }
      unaff_R13 = (char *)0x8000000000000000;
      plVar3 = (long *)plVar16[0x47];
      plVar16[0x47] = 0;
      if (plVar3 == (long *)0x0) goto LAB_0d776006;
      (**(code **)(*plVar3 + 8))();
      plVar3 = (long *)plVar16[0x47];
      plVar16[0x47] = (long)pcVar14;
      if (plVar3 == (long *)0x0) goto LAB_0d77600e;
      (**(code **)(*plVar3 + 8))();
      pcVar14 = (char *)plVar16[0x47];
      if (pcVar14 != (char *)0x0) goto LAB_0d77600e;
    }
    uVar7 = (**(code **)(*unaff_RBP + 0xd8))(unaff_RBP);
    uVar8 = (**(code **)(*unaff_RBP + 0xe0))(unaff_RBP);
    func_0x0d7a6ee0(uVar7,uVar8);
    if (DAT_0f7284c8 == '\x01') {
      uVar9 = func_0x04136c20();
      if (1 < uVar9) {
        uVar12 = pthread_self();
        func_0x0eee3b40(uVar12,&uStack_188,auStack_158);
        auStack_158._0_4_ = _DAT_0f728308;
        func_0x0eee3e10(uVar12,(ulong)uStack_188 & 0xffffffff,auStack_158);
      }
      if (DAT_0f728318 == '\x01') {
        func_0x04136c20();
      }
    }
    func_0x0d7a71c0();
    (**(code **)(*unaff_RBP + 0x7a8))(unaff_RBP);
    if ((DAT_0f7b8ab0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8ab0), iVar10 != 0)) {
      func_0x0ee559e0(&DAT_0f7b8aa8);
      func_0x0eee2f40(&UNK_0ee55a50,&DAT_0f7b8aa8,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8ab0);
      unaff_RBP = plStack_168;
    }
    uVar12 = _DAT_0f7b8aa8;
    (**(code **)(*unaff_RBP + 0x18))(auStack_158,unaff_RBP);
    plStack_40 = (long *)(auStack_158 + 1);
    plStack_38 = (long *)((ulong)auStack_158 >> 1 & 0x7f);
    if (((ulong)auStack_158 & 1) != 0) {
      plStack_38 = plStack_150;
      plStack_40 = plStack_148;
    }
    func_0x0ee565c0(uVar12,&plStack_40);
    if (((ulong)auStack_158 & 1) != 0) {
      func_0x0412a280(plStack_148,(ulong)auStack_158 & 0xfffffffffffffffe);
    }
    (**(code **)(*unaff_RBP + 0x480))(unaff_RBP);
    (**(code **)(**(long **)(unaff_RBP[4] + 0x290) + 0x18))
              (*(long **)(unaff_RBP[4] + 0x290),unaff_RBP);
    lVar11 = unaff_RBP[4];
    pcVar14 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x188);
    if (pcVar14 == (char *)0x0) {
      func_0x0eec74c0(0x188,0);
    }
    func_0x0ee32740(pcVar14);
    if (*(long *)(lVar11 + 0x230) != 0) {
      func_0x0d783e90();
      *(undefined8 *)(lVar11 + 0x230) = 0;
    }
    plVar16 = *(long **)(lVar11 + 0x228);
    *(undefined8 *)(lVar11 + 0x228) = 0;
    if (plVar16 == (long *)0x0) {
      *(char **)(lVar11 + 0x228) = pcVar14;
    }
    else {
      (**(code **)(*plVar16 + 8))();
      plVar16 = *(long **)(lVar11 + 0x228);
      *(char **)(lVar11 + 0x228) = pcVar14;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
        pcVar14 = *(char **)(lVar11 + 0x228);
      }
    }
    if (pcVar14 != (char *)0x0) {
      cVar6 = func_0x0412d4f0(0xf7270d8);
      if (cVar6 == '\0') {
LAB_0d7763b3:
        auStack_158 = (undefined1  [8])0xf7270d8;
        plStack_150 = (long *)CONCAT71(plStack_150._1_7_,1);
        FUN_0412d450(0xf7270d8);
        if (_DAT_0f7271a8 != 0) {
          uVar18 = _DAT_0f7271a8;
          do {
            LOCK();
            bVar19 = uVar18 == _DAT_0f7271a8;
            uVar17 = uVar18 | (ulong)unaff_R13;
            if (!bVar19) {
              uVar18 = _DAT_0f7271a8;
              uVar17 = _DAT_0f7271a8;
            }
            _DAT_0f7271a8 = uVar17;
            UNLOCK();
            if (bVar19) {
              func_0x0eee0430(0xf727168,auStack_158);
              uVar18 = _DAT_0f7271a8;
            }
          } while (uVar18 != 0);
        }
      }
      else if (_DAT_0f7271a8 != 0) {
        func_0x0412d520(0xf7270d8);
        goto LAB_0d7763b3;
      }
      plVar16 = _DAT_0f7271c0;
      _DAT_0f7271b8 = (char *)0x0;
      _DAT_0f7271c0 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar3 = plVar16 + 1;
        lVar13 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      _DAT_0f7271c8 = (char *)0x0;
      _DAT_0f7271b8 = *(char **)(pcVar14 + 8);
      plVar16 = *(long **)(pcVar14 + 0x10);
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar16[1] = plVar16[1] + 1;
        UNLOCK();
      }
      plVar3 = _DAT_0f7271c0;
      if (_DAT_0f7271c0 != (long *)0x0) {
        LOCK();
        plVar1 = _DAT_0f7271c0 + 1;
        lVar13 = *plVar1;
        _DAT_0f7271c0 = plVar16;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        plVar16 = _DAT_0f7271c0;
        if (lVar13 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0412c2d0(plVar3);
          plVar16 = _DAT_0f7271c0;
        }
      }
      _DAT_0f7271c0 = plVar16;
      if (((_DAT_0f7271b8 != (char *)0x0) && (_DAT_0f7271c8 = pcVar14, *_DAT_0f7271b8 == '\0')) &&
         (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_013d82c5),
         cVar6 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      pcVar14 = _DAT_0f7271c8;
      uStack_188 = _DAT_0f7271c8;
      func_0x0412d520(0xf7270d8);
      if (*(long *)(lVar11 + 0x230) != 0) {
        func_0x0d783e90();
        *(undefined8 *)(lVar11 + 0x230) = 0;
      }
      *(char **)(lVar11 + 0x230) = pcVar14;
    }
    plVar16 = *(long **)(unaff_RBP[4] + 0x290);
    (**(code **)(*plVar16 + 0x28))(&uStack_188,plVar16,*(undefined8 *)(unaff_RBP[4] + 0x228));
    lVar11 = unaff_RBP[4];
    param_1 = (long *)(lVar11 + 0x268);
    if (&uStack_188 != param_1) {
      if (*(long *)(lVar11 + 0x270) == 0) goto LAB_0d7765d8;
      plVar16 = (long *)func_0x0412c300();
      plStack_150 = plVar16;
      if (plVar16 != (long *)0x0) {
        auStack_158 = (undefined1  [8])*param_1;
        if (auStack_158 != (undefined1  [8])0x0) {
          (**(code **)(**(long **)((long)auStack_158 + 0x28) + 0x10))();
        }
        LOCK();
        plVar3 = plVar16 + 1;
        lVar13 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      lVar11 = *(long *)(lVar11 + 0x270);
      goto LAB_0d7765da;
    }
  }
  else {
    if (uStack_e8 < uStack_110) {
      uStack_e8 = uStack_110;
    }
    uVar18 = uStack_e8 - lStack_118;
    lVar11 = lStack_118;
joined_r0x0d775ca5:
    if (uVar18 < 0xfffffffffffffff8) {
      if (uVar18 < 0x17) {
        uStack_188 = (char *)CONCAT71(uStack_188._1_7_,(char)uVar18 * '\x02');
        lVar13 = (long)&uStack_188 + 1;
        if (uVar18 == 0) goto LAB_0d775cc2;
      }
      else {
        uVar17 = 0x1a;
        if ((uVar18 | 7) != 0x17) {
          uVar17 = (uVar18 | 7) + 1;
        }
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_188 = (char *)(uVar17 | 1);
        uStack_180 = uVar18;
        lStack_178 = lVar13;
      }
      func_0x0eee2ee0(lVar13,lVar11,uVar18);
      goto LAB_0d775d20;
    }
    func_0x04882e30();
LAB_0d7765d8:
    lVar11 = 0;
LAB_0d7765da:
    uVar7 = (undefined4)uStack_188;
    uVar8 = uStack_188._4_4_;
    uVar4 = (undefined4)uStack_180;
    uVar5 = uStack_180._4_4_;
    uStack_188 = (char *)0x0;
    uStack_180 = 0;
    *(undefined4 *)param_1 = uVar7;
    *(undefined4 *)((long)param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((long)param_1 + 0xc) = uVar5;
    if (lVar11 != 0) {
      func_0x0412c2d0();
    }
  }
  if (uStack_180 != 0) {
    plVar16 = (long *)func_0x0412c300();
    plStack_150 = plVar16;
    if (plVar16 != (long *)0x0) {
      auStack_158 = (undefined1  [8])uStack_188;
      if (uStack_188 != (char *)0x0) {
        (**(code **)(**(long **)(uStack_188 + 0x28) + 0x10))();
      }
      LOCK();
      plVar3 = plVar16 + 1;
      lVar11 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
    }
    if (uStack_180 != 0) {
      func_0x0412c2d0();
    }
  }
  lVar11 = unaff_RBP[4];
  if ((DAT_0f7285d8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7285d8), iVar10 != 0)) {
    _DAT_0f7285c8 = (code *)&UNK_0d7a9460;
    _DAT_0f7285d0 = &UNK_0d7a9600;
    func_0x0410844d(&DAT_0f7285d8);
  }
  pcVar14 = (char *)(*_DAT_0f7285c8)(0);
  if (*(long *)(lVar11 + 0x250) != 0) {
    func_0x0d783b30();
    *(undefined8 *)(lVar11 + 0x250) = 0;
  }
  plVar16 = *(long **)(lVar11 + 0x248);
  *(undefined8 *)(lVar11 + 0x248) = 0;
  if (plVar16 == (long *)0x0) {
    *(char **)(lVar11 + 0x248) = pcVar14;
  }
  else {
    (**(code **)(*plVar16 + 8))();
    plVar16 = *(long **)(lVar11 + 0x248);
    *(char **)(lVar11 + 0x248) = pcVar14;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
      pcVar14 = *(char **)(lVar11 + 0x248);
    }
  }
  if (pcVar14 == (char *)0x0) goto LAB_0d776886;
  cVar6 = func_0x0412d4f0(0xf726e20);
  if (cVar6 == '\0') {
LAB_0d776714:
    auStack_158 = (undefined1  [8])0xf726e20;
    plStack_150 = (long *)CONCAT71(plStack_150._1_7_,1);
    FUN_0412d450(0xf726e20);
    if (_DAT_0f726ef0 != 0) {
      uVar18 = _DAT_0f726ef0;
      do {
        LOCK();
        bVar19 = uVar18 == _DAT_0f726ef0;
        uVar17 = uVar18 | (ulong)unaff_R13;
        if (!bVar19) {
          uVar18 = _DAT_0f726ef0;
          uVar17 = _DAT_0f726ef0;
        }
        _DAT_0f726ef0 = uVar17;
        UNLOCK();
        if (bVar19) {
          func_0x0eee0430(0xf726eb0,auStack_158);
          uVar18 = _DAT_0f726ef0;
        }
      } while (uVar18 != 0);
    }
  }
  else if (_DAT_0f726ef0 != 0) {
    func_0x0412d520(0xf726e20);
    goto LAB_0d776714;
  }
  plVar16 = _DAT_0f726f08;
  _DAT_0f726f00 = (char *)0x0;
  _DAT_0f726f08 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar3 = plVar16 + 1;
    lVar13 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  _DAT_0f726f10 = (char *)0x0;
  _DAT_0f726f00 = *(char **)(pcVar14 + 0x10);
  plVar16 = *(long **)(pcVar14 + 0x18);
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar16[1] = plVar16[1] + 1;
    UNLOCK();
  }
  plVar3 = _DAT_0f726f08;
  if (_DAT_0f726f08 != (long *)0x0) {
    LOCK();
    plVar1 = _DAT_0f726f08 + 1;
    lVar13 = *plVar1;
    _DAT_0f726f08 = plVar16;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    plVar16 = _DAT_0f726f08;
    if (lVar13 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
      plVar16 = _DAT_0f726f08;
    }
  }
  _DAT_0f726f08 = plVar16;
  if (((_DAT_0f726f00 != (char *)0x0) && (_DAT_0f726f10 = pcVar14, *_DAT_0f726f00 == '\0')) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0136fb35),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pcVar14 = _DAT_0f726f10;
  uStack_188 = _DAT_0f726f10;
  func_0x0412d520(0xf726e20);
  if (*(long *)(lVar11 + 0x250) != 0) {
    func_0x0d783b30();
    *(undefined8 *)(lVar11 + 0x250) = 0;
  }
  *(char **)(lVar11 + 0x250) = pcVar14;
LAB_0d776886:
  (**(code **)(*unaff_RBP + 0x38))(unaff_RBP);
  (**(code **)(*unaff_RBP + 2000))(unaff_RBP);
  return;
}


