/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb59b5b0 (ELF vaddr 0xb49b5b0)
 * Label: caller-of-callee
 * Body:  [[0b59b5b0, 0b59c14c] [0b59c150, 0b59c27a] [0b59c29e, 0b59c2ab] [0b59c346, 0b59d08c] [0b59d097, 0b59d0bc]]
 * Ghidra: FUN_0b59b5b0
 */


/* WARNING: Possible PIC construction at 0x0b59bff9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0b59bffe) */
/* WARNING: Removing unreachable block (ram,0x0b59c00e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0b59b5b0(long param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  undefined2 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined2 *puVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  byte bVar25;
  byte bVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  byte *pbVar30;
  ushort uVar31;
  undefined8 *puVar32;
  bool bVar33;
  ulong unaff_RBP;
  undefined7 uVar35;
  long lVar34;
  byte *pbVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  byte *unaff_R12;
  uint uVar39;
  byte *pbVar40;
  byte *pbVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  undefined8 uStack_160;
  undefined8 auStack_158 [18];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  
  bVar26 = 0;
  puVar32 = auStack_158;
  uStack_160 = 0xb59b5d6;
  pbVar36 = param_2;
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  pbVar40 = (byte *)0xf5522b8;
  uStack_160 = 0xb59b5ed;
  func_0x0412d610(0xf5522b8);
  pbVar16 = _DAT_0f5523a0;
  pbVar37 = _DAT_0f552398;
  pbVar41 = param_2;
  pbStack_38 = param_3;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0b59c233;
  bVar25 = 1;
  if (_DAT_0f5523a0 != (byte *)0x0) {
    LOCK();
    *(long *)(_DAT_0f5523a0 + 8) = *(long *)(_DAT_0f5523a0 + 8) + 1;
    UNLOCK();
    bVar25 = *pbVar37;
  }
  param_3 = _DAT_0f5523a8;
  uStack_c8 = (byte *)0xf5522b8;
  uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,1);
  pbStack_b8 = pbVar37;
  pbStack_b0 = pbVar16;
  pbStack_a8 = _DAT_0f5523a8;
  if ((bVar25 & 1) == 0) {
    pbVar36 = &UNK_012072da;
    uStack_160 = 0xb59b682;
    cVar13 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uStack_160 = 0xb59b69d;
  cVar13 = (**(code **)(*(long *)param_3 + 0x388))(param_3);
  uVar35 = (undefined7)(unaff_RBP >> 8);
  unaff_RBP = CONCAT71(uVar35,1);
  unaff_R12 = pbVar16;
  if (cVar13 != '\0') {
    uStack_160 = 0xb59b6b4;
    func_0x0412d550(0xf551cc8);
    LOCK();
    _DAT_0f551d98 = _DAT_0f551d98 + 1;
    UNLOCK();
    pbVar40 = (byte *)0xf551cc8;
    uStack_160 = 0xb59b6cb;
    func_0x0412d610(0xf551cc8);
    plVar3 = _DAT_0f551db0;
    pbVar16 = _DAT_0f551da8;
    pbVar37 = pbVar40;
    if ((_DAT_0f551da8 != (byte *)0x0) && (*_DAT_0f551da8 == 1)) {
      bVar25 = 1;
      if (_DAT_0f551db0 != (long *)0x0) {
        LOCK();
        _DAT_0f551db0[1] = _DAT_0f551db0[1] + 1;
        UNLOCK();
        bVar25 = *pbVar16;
      }
      param_3 = _DAT_0f551db8;
      uStack_98 = (byte *)0xf551cc8;
      uStack_90 = CONCAT31(uStack_90._1_3_,1);
      pbStack_88 = pbVar16;
      pbStack_80 = (byte *)plVar3;
      pbStack_78 = _DAT_0f551db8;
      if ((bVar25 & 1) == 0) {
        pbVar36 = &UNK_012072da;
        uStack_160 = 0xb59b758;
        cVar13 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01478552);
        if (cVar13 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      uStack_160 = 0xb59b773;
      cVar13 = (**(code **)(*(long *)param_3 + 0xc0))(param_3);
      bVar33 = true;
      if (cVar13 == '\0' && *(long *)(param_1 + 0x5a0) == 0) {
        bVar33 = *(long *)(param_1 + 0x5b0) == 0;
      }
      unaff_RBP = CONCAT71(uVar35,bVar33);
      pbStack_88 = (byte *)0x0;
      pbStack_80 = (byte *)0x0;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar27 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar27 == 0) {
          uStack_160 = 0xb59b7c1;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          uStack_160 = 0xb59b7c9;
          func_0x0412c2d0(plVar3);
        }
        param_3 = pbStack_80;
        pbStack_78 = (byte *)0x0;
        if (pbStack_80 != (byte *)0x0) {
          LOCK();
          pbVar41 = pbStack_80 + 8;
          lVar27 = *(long *)pbVar41;
          *(long *)pbVar41 = *(long *)pbVar41 + -1;
          UNLOCK();
          if (lVar27 == 0) {
            uStack_160 = 0xb59b7fd;
            (**(code **)(*(long *)pbStack_80 + 0x10))(pbStack_80);
            uStack_160 = 0xb59b805;
            func_0x0412c2d0(param_3);
          }
        }
      }
      unaff_R12 = pbStack_b0;
      if ((char)uStack_90 == '\x01') {
        uStack_160 = 0xb59b81c;
        func_0x0eee02f0(uStack_98);
        unaff_R12 = pbStack_b0;
      }
      goto LAB_0b59b824;
    }
    goto LAB_0b59c23f;
  }
LAB_0b59b824:
  pbStack_b8 = (byte *)0x0;
  pbStack_b0 = (byte *)0x0;
  if (unaff_R12 == (byte *)0x0) {
LAB_0b59b88b:
  }
  else {
    LOCK();
    pbVar41 = unaff_R12 + 8;
    lVar27 = *(long *)pbVar41;
    *(long *)pbVar41 = *(long *)pbVar41 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      uStack_160 = 0xb59b854;
      (**(code **)(*(long *)unaff_R12 + 0x10))(unaff_R12);
      uStack_160 = 0xb59b85c;
      func_0x0412c2d0(unaff_R12);
    }
    param_3 = pbStack_b0;
    pbStack_a8 = (byte *)0x0;
    if (pbStack_b0 == (byte *)0x0) goto LAB_0b59b88b;
    LOCK();
    pbVar41 = pbStack_b0 + 8;
    lVar27 = *(long *)pbVar41;
    *(long *)pbVar41 = *(long *)pbVar41 + -1;
    UNLOCK();
    if (lVar27 != 0) goto LAB_0b59b88b;
    uStack_160 = 0xb59ba08;
    (**(code **)(*(long *)pbStack_b0 + 0x10))(pbStack_b0);
    uStack_160 = 0xb59ba10;
    func_0x0412c2d0(param_3);
  }
  if ((char)uStack_c0 == '\x01') {
    uStack_160 = 0xb59b8a2;
    func_0x0eee02f0(uStack_c8);
  }
  if ((char)unaff_RBP != '\0') {
    return 0;
  }
  LOCK();
  bVar33 = *(char *)(param_1 + 0x554) == '\0';
  if (bVar33) {
    *(char *)(param_1 + 0x554) = '\x01';
  }
  UNLOCK();
  if (!bVar33) {
    uStack_c8 = &UNK_0f2bb210;
    pbStack_a8 = (byte *)&uStack_c8;
    param_3 = *(byte **)(param_1 + 0x518);
    pbVar41 = *(byte **)(param_1 + 0x520);
    lVar27 = 0x20;
    param_2 = pbVar36;
    if (param_3 != pbVar41) {
      do {
        if (pbStack_a8 == (byte *)0x0) {
          uStack_160 = 0xb59c21f;
          func_0x04891200();
          goto LAB_0b59c21f;
        }
        param_2 = *(byte **)param_3;
        uStack_160 = 0xb59b9ca;
        (**(code **)(*(long *)pbStack_a8 + 0x30))();
        param_3 = param_3 + 8;
      } while (param_3 != pbVar41);
      if ((pbStack_a8 != (byte *)&uStack_c8) && (lVar27 = 0x28, pbStack_a8 == (byte *)0x0)) {
        return 2;
      }
    }
    uStack_160 = 0xb59b9f8;
    (**(code **)(*(long *)pbStack_a8 + lVar27))();
    return 2;
  }
  uStack_160 = 0xb59b8d0;
  func_0x0edfaac0(&uStack_98);
  pbVar41 = (byte *)((ulong)uStack_98 & 0xff);
  uVar39 = (uint)(byte)uStack_98;
  bVar33 = ((ulong)uStack_98 & 1) == 0;
  pbStack_68 = (byte *)((long)&uStack_98 + 1);
  pbStack_40 = pbStack_88;
  unaff_R12 = pbStack_88;
  if (bVar33) {
    unaff_R12 = pbStack_68;
  }
  unaff_RBP = (ulong)((byte)uStack_98 >> 1);
  if (!bVar33) {
    unaff_RBP = CONCAT44(uStack_8c,uStack_90);
  }
  if (2 < (long)unaff_RBP) {
    param_3 = unaff_R12 + unaff_RBP;
    pbVar40 = unaff_R12;
    uVar29 = unaff_RBP;
    do {
      param_2 = (byte *)0x3a;
      uStack_160 = 0xb59b941;
      pbVar40 = (byte *)memchr(pbVar40,0x3a,uVar29 - 2);
      if (pbVar40 == (byte *)0x0) break;
      if (pbVar40[2] == 0x2f && *(short *)pbVar40 == 0x2f3a) {
        if ((long)pbVar40 - (long)unaff_R12 != -1 && pbVar40 != param_3) goto LAB_0b59bb5d;
        break;
      }
      pbVar40 = pbVar40 + 1;
      uVar29 = (long)param_3 - (long)pbVar40;
    } while (2 < (long)uVar29);
  }
  pbVar40 = (byte *)(unaff_RBP + 5);
  if ((byte *)0xfffffffffffffff7 < pbVar40) goto LAB_0b59c224;
  pbStack_60 = (byte *)CONCAT44(pbStack_60._4_4_,uVar39);
  if (pbVar40 < (byte *)0x17) {
    uStack_c0 = (byte *)0x0;
    pbStack_b8 = (byte *)0x0;
    uStack_c8 = (byte *)(ulong)(byte)((char)pbVar40 * '\x02');
  }
  else {
    pbVar41 = (byte *)0x1a;
    if (((ulong)pbVar40 | 7) != 0x17) {
      pbVar41 = (byte *)(((ulong)pbVar40 | 7) + 1);
    }
    uStack_160 = 0xb59bab0;
    param_2 = pbVar41;
    pbVar36 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (pbVar36 == (byte *)0x0) {
      param_2 = (byte *)0x0;
      uStack_160 = 0xb59c1f7;
      func_0x0eec74c0(pbVar41);
    }
    uStack_c8 = (byte *)((ulong)pbVar41 | 1);
    uStack_c0 = pbVar40;
    pbStack_b8 = pbVar36;
  }
  pbVar40 = pbStack_b8 + 5;
  bVar33 = ((ulong)uStack_c8 & 1) != 0;
  pbVar41 = (byte *)((long)&uStack_c8 + 1);
  if (bVar33) {
    pbVar41 = pbStack_b8;
  }
  pbVar41[4] = 0x2f;
  pbVar41[0] = 0x77;
  pbVar41[1] = 0x73;
  pbVar41[2] = 0x3a;
  pbVar41[3] = 0x2f;
  pbVar41 = (byte *)((long)&uStack_c8 + 6);
  if (bVar33) {
    pbVar41 = pbVar40;
  }
  if (unaff_RBP != 0) {
    uStack_160 = 0xb59bb15;
    func_0x0eee2ee0(pbVar41,unaff_R12,unaff_RBP);
    param_2 = unaff_R12;
  }
  pbVar41[unaff_RBP] = 0;
  if (((ulong)pbStack_60 & 1) != 0) {
    param_2 = (byte *)((ulong)uStack_98 & 0xfffffffffffffffe);
    uStack_160 = 0xb59bb3d;
    func_0x0412a280(pbStack_40);
  }
  pbStack_88 = pbStack_b8;
  uStack_98 = uStack_c8;
  uStack_90 = (undefined4)uStack_c0;
  uStack_8c = uStack_c0._4_4_;
LAB_0b59bb5d:
  pbVar40 = (byte *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x478) != 0) {
    if ((*(byte *)(param_1 + 800) & 1) == 0) {
      pbStack_b8 = *(byte **)(param_1 + 0x330);
      uStack_c8 = *(byte **)(param_1 + 800);
      uStack_c0 = *(byte **)(param_1 + 0x328);
    }
    else {
      uStack_160 = 0xb59bbf1;
      func_0x0412e5e0(&uStack_c8,*(undefined8 *)(param_1 + 0x330),*(undefined8 *)(param_1 + 0x328));
    }
    pbVar41 = uStack_c8;
    unaff_RBP = (ulong)uStack_c8 & 0xff;
    if (((ulong)uStack_c8 & 1) == 0) {
      pbVar36 = (byte *)((ulong)uStack_c8 >> 1 & 0x7f);
      if (((ulong)uStack_98 & 1) == 0) goto LAB_0b59bc13;
LAB_0b59bc3e:
      if (pbVar36 != (byte *)CONCAT44(uStack_8c,uStack_90)) goto LAB_0b59bc1c;
LAB_0b59bc4b:
      pbVar36 = pbStack_b8;
      if (((ulong)uStack_c8 & 1) == 0) {
        pbVar36 = (byte *)((long)&uStack_c8 + 1);
      }
      pbVar37 = (byte *)((long)&uStack_98 + 1);
      if (((ulong)uStack_98 & 1) != 0) {
        pbVar37 = pbStack_88;
      }
      uStack_160 = 0xb59bcc5;
      iVar15 = func_0x0eee3000(pbVar36,pbVar37);
      bVar33 = iVar15 == 0;
    }
    else {
      pbVar36 = uStack_c0;
      if (((ulong)uStack_98 & 1) != 0) goto LAB_0b59bc3e;
LAB_0b59bc13:
      if (pbVar36 == (byte *)(((ulong)uStack_98 & 0xff) >> 1)) goto LAB_0b59bc4b;
LAB_0b59bc1c:
      bVar33 = false;
    }
    if (((ulong)pbVar41 & 1) != 0) {
      uStack_160 = 0xb59bcea;
      func_0x0412a280(pbStack_b8,(ulong)uStack_c8 & 0xfffffffffffffffe);
    }
    if (bVar33) {
      LOCK();
      *(undefined1 *)(param_1 + 0x554) = 0;
      UNLOCK();
      uVar14 = 3;
      goto LAB_0b59c1b6;
    }
    uStack_160 = 0xb59bd0e;
    func_0x0b5a10e0(pbVar40,1000);
    plVar3 = *(long **)(param_1 + 0x38);
    pcVar4 = *(code **)(*plVar3 + 0x28);
    param_2 = (byte *)(param_1 + 0x40);
    puVar38 = auStack_158;
    for (lVar27 = 0x11; lVar27 != 0; lVar27 = lVar27 + -1) {
      *puVar38 = *(undefined8 *)param_2;
      param_2 = param_2 + (ulong)bVar26 * -0x10 + 8;
      puVar38 = puVar38 + (ulong)bVar26 * -2 + 1;
    }
    uStack_160 = 0xb59bd2d;
    (*pcVar4)(plVar3);
    uStack_160 = 0xb59bd35;
    func_0x0b5a0d20(pbVar40);
    uStack_c8 = &UNK_0f2bb2a0;
    pbStack_a8 = (byte *)&uStack_c8;
    pbVar41 = *(byte **)(param_1 + 0x518);
    unaff_R12 = *(byte **)(param_1 + 0x520);
    param_3 = (byte *)0x20;
    if (pbVar41 == unaff_R12) {
LAB_0b59bdb3:
      uStack_160 = 0xb59bdba;
      (**(code **)(param_3 + *(long *)pbStack_a8))();
    }
    else {
      do {
        if (pbStack_a8 == (byte *)0x0) goto LAB_0b59c21f;
        param_2 = *(byte **)pbVar41;
        uStack_160 = 0xb59bd8a;
        (**(code **)(*(long *)pbStack_a8 + 0x30))();
        pbVar41 = pbVar41 + 8;
      } while (pbVar41 != unaff_R12);
      if ((pbStack_a8 == (byte *)&uStack_c8) || (param_3 = (byte *)0x28, pbStack_a8 != (byte *)0x0))
      goto LAB_0b59bdb3;
    }
    plVar3 = *(long **)(param_1 + 0x558);
    *(undefined8 *)(param_1 + 0x558) = 0;
    if (plVar3 != (long *)0x0) {
      uStack_160 = 0xb59bdd7;
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined8 *)(param_1 + 0x54c) = 0;
    pbVar36 = (byte *)(param_1 + 0x530);
    if (pbVar36 != (byte *)&uStack_98) {
      if ((*pbVar36 & 1) == 0) {
        if (((ulong)uStack_98 & 1) == 0) {
          *(byte **)(param_1 + 0x540) = pbStack_88;
          *(undefined4 *)pbVar36 = (undefined4)uStack_98;
          *(undefined4 *)(param_1 + 0x534) = uStack_98._4_4_;
          *(undefined4 *)(param_1 + 0x538) = uStack_90;
          *(undefined4 *)(param_1 + 0x53c) = uStack_8c;
        }
        else {
          uStack_160 = 0xb59c03b;
          param_2 = pbStack_88;
          func_0x04885070(pbVar36,pbStack_88,CONCAT44(uStack_8c,uStack_90));
        }
      }
      else {
        bVar33 = ((ulong)uStack_98 & 1) == 0;
        param_2 = pbStack_88;
        if (bVar33) {
          param_2 = (byte *)((long)&uStack_98 + 1);
        }
        uVar29 = (ulong)uStack_98 >> 1 & 0x7f;
        if (!bVar33) {
          uVar29 = CONCAT44(uStack_8c,uStack_90);
        }
        uStack_160 = 0xb59be56;
        func_0x04885120(pbVar36,param_2,uVar29);
      }
    }
    if (((ulong)uStack_98 & 1) != 0) {
      pbStack_68 = pbStack_88;
    }
    uStack_160 = 0xb59c062;
    uVar29 = func_0x0eee2e90(pbStack_68);
    if (uVar29 < 0xfffffffffffffff8) {
      if (uVar29 < 0x17) {
        uStack_58 = CONCAT71(uStack_58._1_7_,(char)uVar29 * '\x02');
        lVar27 = (long)&uStack_58 + 1;
        if (uVar29 != 0) goto LAB_0b59c0e3;
      }
      else {
        uVar28 = 0x1a;
        if ((uVar29 | 7) != 0x17) {
          uVar28 = (uVar29 | 7) + 1;
        }
        uStack_160 = 0xb59c0bb;
        lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
        if (lVar27 == 0) {
          uStack_160 = 0xb59c215;
          func_0x0eec74c0(uVar28,0);
        }
        uStack_58 = uVar28 | 1;
        uStack_50 = uVar29;
        lStack_48 = lVar27;
LAB_0b59c0e3:
        uStack_160 = 0xb59c0f6;
        func_0x0eee2ee0(lVar27,pbStack_68,uVar29);
      }
      *(undefined1 *)(lVar27 + uVar29) = 0;
      uStack_c8 = (byte *)0x0;
      uStack_c0 = (byte *)0x0;
      pbStack_b8 = (byte *)0x0;
      uStack_160 = 0xb59c12c;
      uVar14 = (**(code **)(*(long *)pbVar40 + 0x10))(pbVar40,&uStack_58,&uStack_c8);
      pbVar41 = uStack_c8;
      pbVar40 = uStack_c0;
      if (uStack_c8 != (byte *)0x0) {
        for (; pbVar41 != pbVar40; pbVar40 = pbVar40 + -0x18) {
          if ((pbVar40[-0x18] & 1) != 0) {
            uStack_160 = 0xb59c171;
            func_0x0412a280(*(undefined8 *)(pbVar40 + -8),
                            *(ulong *)(pbVar40 + -0x18) & 0xfffffffffffffffe);
          }
        }
        uStack_c0 = pbVar41;
        uStack_160 = 0xb59c193;
        func_0x0412a280(uStack_c8,(long)pbStack_b8 - (long)uStack_c8);
      }
      if ((uStack_58 & 1) != 0) {
        uStack_160 = 0xb59c1b6;
        func_0x0412a280(lStack_48,uStack_58 & 0xfffffffffffffffe);
      }
LAB_0b59c1b6:
      if (((ulong)uStack_98 & 1) != 0) {
        uStack_160 = 0xb59c1d9;
        func_0x0412a280(pbStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
        return uVar14;
      }
      return uVar14;
    }
    goto LAB_0b59c22e;
  }
  plVar3 = *(long **)(param_1 + 0x558);
  *(undefined8 *)(param_1 + 0x558) = 0;
  if (plVar3 != (long *)0x0) {
    uStack_160 = 0xb59bbb0;
    (**(code **)(*plVar3 + 8))();
  }
  pbVar36 = uStack_98;
  bVar26 = *(byte *)(param_1 + 0x530);
  param_3 = (byte *)(ulong)bVar26;
  if ((bVar26 & 1) == 0) {
    uVar29 = (ulong)(bVar26 >> 1);
  }
  else {
    uVar29 = *(ulong *)(param_1 + 0x538);
  }
  pbVar37 = (byte *)(param_1 + 0x530);
  pbVar41 = (byte *)((ulong)uStack_98 & 0xff);
  uVar28 = CONCAT44(uStack_8c,uStack_90);
  unaff_RBP = (ulong)uStack_98 >> 1 & 0x7f;
  if (((ulong)uStack_98 & 1) != 0) {
    unaff_RBP = uVar28;
  }
  pbStack_60 = pbVar40;
  if (uVar29 == unaff_RBP) {
    if ((bVar26 & 1) == 0) {
      lVar27 = param_1 + 0x531;
    }
    else {
      lVar27 = *(long *)(param_1 + 0x540);
    }
    param_2 = (byte *)((long)&uStack_98 + 1);
    if (((ulong)uStack_98 & 1) != 0) {
      param_2 = pbStack_88;
    }
    uStack_160 = 0xb59be7d;
    iVar15 = func_0x0eee3000(lVar27);
    if (iVar15 != 0) goto LAB_0b59be81;
    *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + 1;
    *(undefined4 *)(param_1 + 0x550) = 0;
    pbVar40 = pbStack_88;
  }
  else {
LAB_0b59be81:
    *(undefined4 *)(param_1 + 0x54c) = 0;
    *(undefined4 *)(param_1 + 0x550) = 0;
    pbVar40 = pbStack_88;
  }
  pbStack_88 = pbVar40;
  if (pbVar37 != (byte *)&uStack_98) {
    if ((bVar26 & 1) == 0) {
      if (((ulong)pbVar36 & 1) == 0) {
        *(byte **)(param_1 + 0x540) = pbVar40;
        uStack_98._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
        *(undefined4 *)pbVar37 = (undefined4)uStack_98;
        *(undefined4 *)(param_1 + 0x534) = uStack_98._4_4_;
        *(undefined4 *)(param_1 + 0x538) = uStack_90;
        *(undefined4 *)(param_1 + 0x53c) = uStack_8c;
      }
      else {
        uStack_160 = 0xb59bf1e;
        func_0x04885070(pbVar37,pbVar40,uVar28);
        param_2 = pbVar40;
      }
    }
    else {
      param_2 = (byte *)((long)&uStack_98 + 1);
      if (((ulong)pbVar36 & 1) != 0) {
        param_2 = pbVar40;
      }
      uStack_160 = 0xb59beea;
      func_0x04885120(pbVar37,param_2,unaff_RBP);
    }
  }
  if (((ulong)uStack_98 & 1) != 0) {
    pbStack_68 = pbStack_88;
  }
  uStack_160 = 0xb59bf45;
  pbVar16 = (byte *)func_0x0eee2e90(pbStack_68);
  unaff_R12 = pbStack_38;
  pbVar40 = pbVar37;
  if ((byte *)0xfffffffffffffff7 < pbVar16) goto LAB_0b59c229;
  if (pbVar16 < (byte *)0x17) {
    uStack_c8 = (byte *)CONCAT71(uStack_c8._1_7_,(char)pbVar16 * '\x02');
    pbVar41 = (byte *)((long)&uStack_c8 + 1);
    if (pbVar16 != (byte *)0x0) goto LAB_0b59bfce;
    uVar24 = 0;
  }
  else {
    uVar29 = 0x1a;
    if (((ulong)pbVar16 | 7) != 0x17) {
      uVar29 = ((ulong)pbVar16 | 7) + 1;
    }
    uStack_160 = 0xb59bfa6;
    pbVar41 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
    if (pbVar41 == (byte *)0x0) {
      uStack_160 = 0xb59c206;
      func_0x0eec74c0(uVar29,0);
    }
    param_3 = (byte *)(uVar29 | 1);
    uStack_c8 = param_3;
    uStack_c0 = pbVar16;
    pbStack_b8 = pbVar41;
LAB_0b59bfce:
    uStack_160 = 0xb59bfe1;
    uVar24 = func_0x0eee2ee0(pbVar41,pbStack_68,pbVar16);
  }
  auVar43._8_8_ = unaff_R12;
  auVar43._0_8_ = uVar24;
  pbVar41[(long)pbVar16] = 0;
  pbVar36 = (byte *)&uStack_c8;
  puVar32 = &uStack_160;
  uStack_160 = 0xb59bffe;
  pbVar40 = pbStack_60;
SUB_0b59c3b0:
  *(ulong *)((long)puVar32 + -8) = unaff_RBP;
  *(byte **)((long)puVar32 + -0x10) = pbVar41;
  *(byte **)((long)puVar32 + -0x18) = param_3;
  *(byte **)((long)puVar32 + -0x20) = pbVar37;
  *(byte **)((long)puVar32 + -0x28) = unaff_R12;
  *(byte **)((long)puVar32 + -0x30) = pbVar16;
  if (*(int *)(pbVar40 + 0x448) != 0) {
    return 2;
  }
  *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c3de;
  func_0x0b5a0d20();
  pbVar40[0x1d2] = 0;
  if (pbVar40 + 0x430 != auVar43._8_8_) {
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c416;
    func_0x0490ae00();
  }
  pbVar41 = pbVar40 + 800;
  if ((pbVar40[0x308] & 1) == 0) {
    pbVar40[0x308] = 0;
    pbVar40[0x309] = 0;
    if ((*pbVar41 & 1) == 0) goto LAB_0b59c499;
LAB_0b59c43e:
    **(undefined1 **)(pbVar40 + 0x330) = 0;
    pbVar40[0x328] = 0;
    pbVar40[0x329] = 0;
    pbVar40[0x32a] = 0;
    pbVar40[0x32b] = 0;
    pbVar40[0x32c] = 0;
    pbVar40[0x32d] = 0;
    pbVar40[0x32e] = 0;
    pbVar40[0x32f] = 0;
    bVar26 = pbVar40[0x350];
    *(byte **)((long)puVar32 + -0x70) = pbVar40 + 0x350;
    if ((bVar26 & 1) == 0) goto LAB_0b59c4b0;
LAB_0b59c460:
    **(undefined1 **)(pbVar40 + 0x360) = 0;
    pbVar40[0x358] = 0;
    pbVar40[0x359] = 0;
    pbVar40[0x35a] = 0;
    pbVar40[0x35b] = 0;
    pbVar40[0x35c] = 0;
    pbVar40[0x35d] = 0;
    pbVar40[0x35e] = 0;
    pbVar40[0x35f] = 0;
  }
  else {
    **(undefined1 **)(pbVar40 + 0x318) = 0;
    pbVar40[0x310] = 0;
    pbVar40[0x311] = 0;
    pbVar40[0x312] = 0;
    pbVar40[0x313] = 0;
    pbVar40[0x314] = 0;
    pbVar40[0x315] = 0;
    pbVar40[0x316] = 0;
    pbVar40[0x317] = 0;
    if ((*pbVar41 & 1) != 0) goto LAB_0b59c43e;
LAB_0b59c499:
    pbVar40[800] = 0;
    pbVar40[0x321] = 0;
    bVar26 = pbVar40[0x350];
    *(byte **)((long)puVar32 + -0x70) = pbVar40 + 0x350;
    if ((bVar26 & 1) != 0) goto LAB_0b59c460;
LAB_0b59c4b0:
    pbVar40[0x350] = 0;
    pbVar40[0x351] = 0;
  }
  bVar26 = *pbVar36;
  pbVar17 = (byte *)(ulong)(bVar26 >> 1);
  pbVar37 = pbVar36 + 1;
  pbVar30 = *(byte **)(pbVar36 + 8);
  *(byte **)((long)puVar32 + -0x58) = pbVar37;
  bVar26 = bVar26 & 1;
  pbVar16 = pbVar17;
  if (bVar26 != 0) {
    pbVar37 = *(byte **)(pbVar36 + 0x10);
    pbVar16 = pbVar30;
  }
  iVar15 = *(int *)pbVar37;
  bVar25 = pbVar37[4];
  *(byte **)((long)puVar32 + -0x68) = pbVar41;
  if (bVar25 == 0x2f && iVar15 == 0x2f3a7377) {
    uVar39 = 5;
LAB_0b59c52b:
    pbVar41 = (byte *)(ulong)uVar39;
    if (pbVar16 < (byte *)(ulong)uVar39) {
      pbVar41 = pbVar16;
    }
    *(char *)((long)puVar32 + -0xf8) = (char)pbVar41 * '\x02';
    if (pbVar16 != (byte *)0x0) {
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c556;
      func_0x0eee2f00((undefined1 *)((long)puVar32 + -0xf7),pbVar37,pbVar41);
    }
    ((undefined1 *)((long)puVar32 + -0xf7))[(long)pbVar41] = 0;
    if ((pbVar40[0x308] & 1) != 0) {
      uVar29 = *(ulong *)(pbVar40 + 0x308);
      uVar24 = *(undefined8 *)(pbVar40 + 0x318);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c579;
      func_0x0412a280(uVar24,uVar29 & 0xfffffffffffffffe);
    }
    *(undefined8 *)(pbVar40 + 0x318) = *(undefined8 *)((long)puVar32 + -0xe8);
    uVar14 = *(undefined4 *)((long)puVar32 + -0xf4);
    uVar6 = *(undefined4 *)((long)puVar32 + -0xf0);
    uVar7 = *(undefined4 *)((long)puVar32 + -0xec);
    *(undefined4 *)(pbVar40 + 0x308) = *(undefined4 *)((long)puVar32 + -0xf8);
    *(undefined4 *)(pbVar40 + 0x30c) = uVar14;
    *(undefined4 *)(pbVar40 + 0x310) = uVar6;
    *(undefined4 *)(pbVar40 + 0x314) = uVar7;
    pbVar30 = *(byte **)(pbVar36 + 8);
    bVar26 = *pbVar36 & 1;
    pbVar17 = (byte *)(ulong)(*pbVar36 >> 1);
    pbVar41 = *(byte **)((long)puVar32 + -0x68);
  }
  else {
    uVar39 = 0;
    if (*(short *)(pbVar37 + 4) == 0x2f2f && *(int *)pbVar37 == 0x3a737377) {
      uVar39 = 6;
      goto LAB_0b59c52b;
    }
  }
  if (bVar26 != 0) {
    pbVar17 = pbVar30;
  }
  if (pbVar17 == (byte *)0xffffffffffffffff) {
LAB_0b59ce3b:
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59ce40;
    func_0x04890760();
LAB_0b59ce40:
    uVar31 = *(ushort *)((long)puVar32 + -0x48);
    lVar34 = *(long *)((long)puVar32 + -0x108);
    *(ushort *)(lVar34 + 0x368) = uVar31;
  }
  else {
    *(byte **)((long)puVar32 + -0x100) = pbVar36;
    *(byte **)((long)puVar32 + -0x108) = pbVar40;
    lVar27 = *(long *)((long)puVar32 + -0x58);
    if (bVar26 != 0) {
      lVar27 = *(long *)(*(long *)((long)puVar32 + -0x100) + 0x10);
    }
    if (pbVar17 != (byte *)0x0 && lVar27 == 0) goto LAB_0b59ce3b;
    pbVar40 = (byte *)(ulong)uVar39;
    pbVar37 = (byte *)((ulong)pbVar16 & 0xffffffff);
    pbVar36 = pbVar40;
    if (pbVar40 < pbVar16) {
      do {
        pbVar37 = pbVar36;
        if (pbVar17 <= pbVar37) goto LAB_0b59ce3b;
        if (pbVar37[lVar27] == 0x2f) goto LAB_0b59c61c;
        pbVar36 = pbVar37 + 1;
      } while (pbVar16 != pbVar37 + 1);
      pbVar37 = (byte *)((ulong)pbVar16 & 0xffffffff);
    }
LAB_0b59c61c:
    if (pbVar17 < pbVar40) goto LAB_0b59d086;
    uVar29 = (ulong)((int)pbVar37 - uVar39);
    if ((ulong)((long)pbVar17 - (long)pbVar40) < uVar29) {
      uVar29 = (long)pbVar17 - (long)pbVar40;
    }
    if (uVar29 < 0x17) {
      *(char *)((long)puVar32 + -0xf8) = (char)uVar29 * '\x02';
      puVar23 = (undefined1 *)((long)puVar32 + -0xf7);
      if (uVar29 != 0) goto LAB_0b59c710;
      *puVar23 = 0;
      bVar26 = *pbVar41;
      lVar27 = *(long *)((long)puVar32 + -0x108);
    }
    else {
      *(byte **)((long)puVar32 + -0x60) = pbVar40;
      uVar28 = 0x1a;
      if ((uVar29 | 7) != 0x17) {
        uVar28 = (uVar29 | 7) + 1;
      }
      pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c6e1;
      puVar23 = (undefined1 *)(*pcVar4)(&DAT_0f5463b0,uVar28);
      if (puVar23 == (undefined1 *)0x0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d02d;
        func_0x0eec74c0(uVar28,0);
      }
      *(undefined1 **)((long)puVar32 + -0xe8) = puVar23;
      *(ulong *)((long)puVar32 + -0xf8) = uVar28 | 1;
      *(ulong *)((long)puVar32 + -0xf0) = uVar29;
      pbVar41 = *(byte **)((long)puVar32 + -0x68);
      pbVar40 = *(byte **)((long)puVar32 + -0x60);
LAB_0b59c710:
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c721;
      func_0x0eee2ee0(puVar23,pbVar40 + lVar27,uVar29);
      puVar23[uVar29] = 0;
      bVar26 = *pbVar41;
      lVar27 = *(long *)((long)puVar32 + -0x108);
    }
    if ((bVar26 & 1) != 0) {
      uVar29 = *(ulong *)(lVar27 + 800);
      uVar24 = *(undefined8 *)(lVar27 + 0x330);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c674;
      func_0x0412a280(uVar24,uVar29 & 0xfffffffffffffffe);
    }
    *(undefined8 *)(pbVar41 + 0x10) = *(undefined8 *)((long)puVar32 + -0xe8);
    uVar14 = *(undefined4 *)((long)puVar32 + -0xf4);
    uVar6 = *(undefined4 *)((long)puVar32 + -0xf0);
    uVar7 = *(undefined4 *)((long)puVar32 + -0xec);
    *(undefined4 *)pbVar41 = *(undefined4 *)((long)puVar32 + -0xf8);
    *(undefined4 *)(pbVar41 + 4) = uVar14;
    *(undefined4 *)(pbVar41 + 8) = uVar6;
    *(undefined4 *)(pbVar41 + 0xc) = uVar7;
    uVar39 = (int)pbVar37 + 1;
    pbVar40 = (byte *)(ulong)uVar39;
    if (pbVar40 <= pbVar16) {
      bVar26 = **(byte **)((long)puVar32 + -0x100);
      if ((bVar26 & 1) == 0) {
        pbVar41 = (byte *)(ulong)(bVar26 >> 1);
      }
      else {
        pbVar41 = *(byte **)(*(byte **)((long)puVar32 + -0x100) + 8);
      }
      if (pbVar41 < pbVar40) {
LAB_0b59d086:
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d08b;
        uVar24 = func_0x04882ee0();
        if ((*(byte *)((long)puVar32 + -0xf8) & 1) != 0) {
          *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d0b4;
          func_0x0412a280(*(undefined8 *)((long)puVar32 + -0xe8),
                          *(ulong *)((long)puVar32 + -0xf8) & 0xfffffffffffffffe);
        }
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d0bc;
        func_0x0eee2d70(uVar24);
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return uVar14;
      }
      uVar29 = (ulong)((int)pbVar16 - uVar39);
      lVar34 = *(long *)((long)puVar32 + -0x58);
      if ((bVar26 & 1) != 0) {
        lVar34 = *(long *)(*(long *)((long)puVar32 + -0x100) + 0x10);
      }
      if ((ulong)((long)pbVar41 - (long)pbVar40) < uVar29) {
        uVar29 = (long)pbVar41 - (long)pbVar40;
      }
      if (uVar29 < 0x17) {
        *(char *)((long)puVar32 + -0xf8) = (char)uVar29 * '\x02';
        puVar23 = (undefined1 *)((long)puVar32 + -0xf7);
        if (uVar29 != 0) goto LAB_0b59c7cb;
      }
      else {
        uVar28 = 0x1a;
        if ((uVar29 | 7) != 0x17) {
          uVar28 = (uVar29 | 7) + 1;
        }
        pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c7ac;
        puVar23 = (undefined1 *)(*pcVar4)(&DAT_0f5463b0,uVar28);
        if (puVar23 == (undefined1 *)0x0) {
          *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d03c;
          func_0x0eec74c0(uVar28,0);
        }
        *(undefined1 **)((long)puVar32 + -0xe8) = puVar23;
        *(ulong *)((long)puVar32 + -0xf8) = uVar28 | 1;
        *(ulong *)((long)puVar32 + -0xf0) = uVar29;
LAB_0b59c7cb:
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c7dc;
        func_0x0eee2ee0(puVar23,pbVar40 + lVar34,uVar29);
      }
      puVar23[uVar29] = 0;
      pbVar40 = *(byte **)((long)puVar32 + -0x70);
      if ((*pbVar40 & 1) != 0) {
        uVar29 = *(ulong *)(lVar27 + 0x350);
        uVar24 = *(undefined8 *)(lVar27 + 0x360);
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c805;
        func_0x0412a280(uVar24,uVar29 & 0xfffffffffffffffe);
      }
      *(undefined8 *)(pbVar40 + 0x10) = *(undefined8 *)((long)puVar32 + -0xe8);
      uVar14 = *(undefined4 *)((long)puVar32 + -0xf4);
      uVar6 = *(undefined4 *)((long)puVar32 + -0xf0);
      uVar7 = *(undefined4 *)((long)puVar32 + -0xec);
      *(undefined4 *)pbVar40 = *(undefined4 *)((long)puVar32 + -0xf8);
      *(undefined4 *)(pbVar40 + 4) = uVar14;
      *(undefined4 *)(pbVar40 + 8) = uVar6;
      *(undefined4 *)(pbVar40 + 0xc) = uVar7;
    }
    *(undefined1 *)(lVar27 + 0x36a) = 0;
    bVar26 = *(byte *)(lVar27 + 0x308);
    if ((bVar26 & 1) != 0) {
      uVar29 = *(ulong *)(lVar27 + 0x310);
      if (uVar29 == 5) goto LAB_0b59c856;
LAB_0b59c835:
      if (uVar29 == 6) {
        if ((bVar26 & 1) == 0) {
          piVar18 = (int *)(lVar27 + 0x309);
        }
        else {
          piVar18 = *(int **)(lVar27 + 0x318);
        }
        if ((short)piVar18[1] != 0x2f2f || *piVar18 != 0x3a737377) goto LAB_0b59c91e;
        *(undefined1 *)(lVar27 + 0x36a) = 1;
        pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c8a6;
        puVar19 = (undefined4 *)(*pcVar4)(&DAT_0f5463b0,0x30);
        if (puVar19 == (undefined4 *)0x0) {
          *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d050;
          func_0x0eec74c0(0x30,0);
        }
        uVar24 = _UNK_014a270f;
        *(undefined4 **)((long)puVar32 + -0xe8) = puVar19;
        *(undefined8 *)((long)puVar32 + -0xf8) = 0x31;
        *(undefined8 *)((long)puVar32 + -0xf0) = 0x2d;
        *(ulong *)((long)puVar19 + 0x1d) = CONCAT53(_UNK_014a270a,_DAT_014a2707);
        *(undefined8 *)((long)puVar19 + 0x25) = uVar24;
        uVar24 = CONCAT35(_DAT_014a2707,_UNK_014a2702);
        *(undefined8 *)(puVar19 + 4) = _DAT_014a26fa;
        *(undefined8 *)(puVar19 + 6) = uVar24;
        uVar7 = _UNK_014a26f6;
        uVar6 = _UNK_014a26f2;
        uVar14 = _UNK_014a26ee;
        *puVar19 = _DAT_014a26ea;
        puVar19[1] = uVar14;
        puVar19[2] = uVar6;
        puVar19[3] = uVar7;
        *(undefined1 *)((long)puVar19 + 0x2d) = 0;
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c8fc;
        func_0x0b5a1270(lVar27,(undefined1 *)((long)puVar32 + -0xf8),0x3ea);
        goto LAB_0b59c98a;
      }
LAB_0b59c91e:
      pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c934;
      puVar19 = (undefined4 *)(*pcVar4)(&DAT_0f5463b0,0x30);
      if (puVar19 == (undefined4 *)0x0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d01b;
        func_0x0eec74c0(0x30,0);
      }
      uVar24 = _UNK_014d794e;
      *(undefined4 **)((long)puVar32 + -0xe8) = puVar19;
      *(undefined8 *)((long)puVar32 + -0xf8) = 0x31;
      *(undefined8 *)((long)puVar32 + -0xf0) = 0x2a;
      *(ulong *)((long)puVar19 + 0x1a) = CONCAT26(_UNK_014d794c,_DAT_014d7946);
      *(undefined8 *)((long)puVar19 + 0x22) = uVar24;
      uVar24 = CONCAT62(_DAT_014d7946,_UNK_014d7944);
      *(undefined8 *)(puVar19 + 4) = _DAT_014d793c;
      *(undefined8 *)(puVar19 + 6) = uVar24;
      uVar7 = _UNK_014d7938;
      uVar6 = _UNK_014d7934;
      uVar14 = _UNK_014d7930;
      *puVar19 = _DAT_014d792c;
      puVar19[1] = uVar14;
      puVar19[2] = uVar6;
      puVar19[3] = uVar7;
      *(undefined1 *)((long)puVar19 + 0x2a) = 0;
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c98a;
      func_0x0b5a1270(lVar27,(undefined1 *)((long)puVar32 + -0xf8),0x3ea);
LAB_0b59c98a:
      lVar34 = lVar27;
      if ((*(byte *)((long)puVar32 + -0xf8) & 1) != 0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c9a4;
        func_0x0412a280(*(undefined8 *)((long)puVar32 + -0xe8),
                        *(ulong *)((long)puVar32 + -0xf8) & 0xfffffffffffffffe);
      }
      goto LAB_0b59c9a4;
    }
    uVar29 = (ulong)(bVar26 >> 1);
    if (uVar29 != 5) goto LAB_0b59c835;
LAB_0b59c856:
    if ((bVar26 & 1) == 0) {
      piVar18 = (int *)(lVar27 + 0x309);
    }
    else {
      piVar18 = *(int **)(lVar27 + 0x318);
    }
    if ((char)piVar18[1] != '/' || *piVar18 != 0x2f3a7377) goto LAB_0b59c91e;
    if ((*(byte *)(lVar27 + 800) & 1) == 0) {
      uVar29 = (ulong)(*(byte *)(lVar27 + 800) >> 1);
    }
    else {
      uVar29 = *(ulong *)(lVar27 + 0x328);
    }
    if (uVar29 == 0) {
      pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59ca52;
      puVar19 = (undefined4 *)(*pcVar4)(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined4 *)0x0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d067;
        func_0x0eec74c0(0x28,0);
      }
      uVar24 = _UNK_0127f442;
      *(undefined4 **)((long)puVar32 + -0xe8) = puVar19;
      *(undefined8 *)((long)puVar32 + -0xf8) = 0x29;
      *(undefined8 *)((long)puVar32 + -0xf0) = 0x21;
      *(undefined8 *)(puVar19 + 4) = _DAT_0127f43a;
      *(undefined8 *)(puVar19 + 6) = uVar24;
      uVar7 = _UNK_0127f436;
      uVar6 = _UNK_0127f432;
      uVar14 = _UNK_0127f42e;
      *puVar19 = _DAT_0127f42a;
      puVar19[1] = uVar14;
      puVar19[2] = uVar6;
      puVar19[3] = uVar7;
      *(undefined2 *)(puVar19 + 8) = 0x2e;
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59ca9f;
      func_0x0b5a1270(lVar27,(undefined1 *)((long)puVar32 + -0xf8),0x3ea);
      goto LAB_0b59c98a;
    }
    uVar42 = (ulong)(*(byte *)(lVar27 + 0x350) >> 1);
    bVar26 = *(byte *)(lVar27 + 0x350) & 1;
    uVar29 = *(ulong *)(lVar27 + 0x358);
    uVar28 = uVar29;
    if (bVar26 == 0) {
      uVar28 = uVar42;
    }
    if (uVar28 == 0) {
      if (bVar26 == 0) {
        *(undefined1 *)(lVar27 + 0x350) = 2;
        puVar20 = (undefined2 *)(lVar27 + 0x351);
      }
      else {
        *(undefined8 *)(lVar27 + 0x358) = 1;
        puVar20 = *(undefined2 **)(lVar27 + 0x360);
      }
      *puVar20 = 0x2f;
      uVar29 = *(ulong *)(lVar27 + 0x358);
      bVar26 = *(byte *)(lVar27 + 0x350) & 1;
      uVar42 = (ulong)(*(byte *)(lVar27 + 0x350) >> 1);
    }
    if (bVar26 == 0) {
      lVar34 = lVar27 + 0x351;
    }
    else {
      lVar34 = *(long *)(lVar27 + 0x360);
      uVar42 = uVar29;
    }
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59caf9;
    lVar21 = memchr(lVar34,0x23,uVar42);
    if ((lVar21 != 0) && (lVar21 != lVar34 + uVar42)) {
      pcVar4 = *(code **)(_DAT_0f5463b0 + 0x10);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cb20;
      puVar19 = (undefined4 *)(*pcVar4)(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined4 *)0x0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59d07e;
        func_0x0eec74c0(0x40,0);
      }
      uVar24 = _UNK_011fbdd8;
      *(undefined4 **)((long)puVar32 + -0xe8) = puVar19;
      *(undefined8 *)((long)puVar32 + -0xf8) = 0x41;
      *(undefined8 *)((long)puVar32 + -0xf0) = 0x38;
      *(undefined8 *)(puVar19 + 8) = _DAT_011fbdd0;
      *(undefined8 *)(puVar19 + 10) = uVar24;
      uVar24 = _UNK_011fbdc8;
      *(undefined8 *)(puVar19 + 4) = _DAT_011fbdc0;
      *(undefined8 *)(puVar19 + 6) = uVar24;
      uVar7 = _UNK_011fbdbc;
      uVar6 = _UNK_011fbdb8;
      uVar14 = _UNK_011fbdb4;
      *puVar19 = _DAT_011fbdb0;
      puVar19[1] = uVar14;
      puVar19[2] = uVar6;
      puVar19[3] = uVar7;
      *(undefined8 *)(puVar19 + 0xc) = 0x2e73495255207465;
      *(undefined1 *)(puVar19 + 0xe) = 0;
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cb84;
      func_0x0b5a1270(lVar27,(undefined1 *)((long)puVar32 + -0xf8),0x3ea);
      goto LAB_0b59c98a;
    }
    bVar26 = *(byte *)(lVar27 + 800);
    bVar33 = (bVar26 & 1) == 0;
    lVar34 = *(long *)(lVar27 + 0x330);
    *(long *)((long)puVar32 + -0x60) = lVar34;
    *(long *)((long)puVar32 + -0x70) = lVar27 + 0x321;
    if (bVar33) {
      lVar34 = lVar27 + 0x321;
    }
    uVar29 = *(ulong *)(lVar27 + 0x328);
    *(ulong *)((long)puVar32 + -0x50) = uVar29;
    uVar28 = (ulong)(bVar26 >> 1);
    if (!bVar33) {
      uVar28 = uVar29;
    }
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cbe4;
    lVar22 = memchr(lVar34,0x3a,uVar28);
    lVar21 = lVar34 + uVar28;
    if (lVar22 != 0) {
      lVar21 = lVar22;
    }
    pbVar16 = (byte *)(lVar27 + 0x338);
    if ((*(byte *)(lVar27 + 0x338) & 1) == 0) {
      if ((bVar26 & 1) == 0) {
        puVar19 = *(undefined4 **)((long)puVar32 + -0x68);
        *(undefined8 *)(lVar27 + 0x348) = *(undefined8 *)(puVar19 + 4);
        uVar14 = puVar19[1];
        uVar6 = puVar19[2];
        uVar7 = puVar19[3];
        *(undefined4 *)pbVar16 = *puVar19;
        *(undefined4 *)(lVar27 + 0x33c) = uVar14;
        *(undefined4 *)(lVar27 + 0x340) = uVar6;
        *(undefined4 *)(lVar27 + 0x344) = uVar7;
      }
      else {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cc41;
        func_0x04885070(pbVar16,*(undefined8 *)((long)puVar32 + -0x60),
                        *(undefined8 *)((long)puVar32 + -0x50));
      }
    }
    else {
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cc27;
      func_0x04885120(pbVar16,lVar34,uVar28);
    }
    lVar34 = *(long *)((long)puVar32 + -0x108);
    bVar33 = (*(byte *)(lVar34 + 800) & 1) != 0;
    lVar22 = *(long *)((long)puVar32 + -0x70);
    if (bVar33) {
      lVar22 = *(long *)(lVar34 + 0x330);
    }
    uVar29 = (ulong)(*(byte *)(lVar34 + 800) >> 1);
    if (bVar33) {
      uVar29 = *(ulong *)(lVar34 + 0x328);
    }
    if (lVar21 != uVar29 + lVar22) {
      uVar28 = lVar21 - lVar22 & 0xffffffff;
      if (uVar29 < uVar28) {
        uVar28 = uVar29;
      }
      if (uVar28 < 0x17) {
        *(char *)((long)puVar32 + -0xf8) = (char)uVar28 * '\x02';
        puVar23 = (undefined1 *)((long)puVar32 + -0xf7);
        if (uVar28 != 0) goto LAB_0b59ccf6;
      }
      else {
        lVar34 = 0x1a;
        if ((uVar28 | 7) != 0x17) {
          lVar34 = (uVar28 | 7) + 1;
        }
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cce1;
        puVar23 = (undefined1 *)FUN_0ee32660(lVar34);
        *(undefined1 **)((long)puVar32 + -0xe8) = puVar23;
        *(long *)((long)puVar32 + -0xf8) = lVar34 + 1;
        *(ulong *)((long)puVar32 + -0xf0) = uVar28;
LAB_0b59ccf6:
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cd04;
        func_0x0eee2ee0(puVar23,lVar22,uVar28);
      }
      puVar23[uVar28] = 0;
      if ((*pbVar16 & 1) != 0) {
        uVar29 = *(ulong *)(*(long *)((long)puVar32 + -0x108) + 0x338);
        uVar24 = *(undefined8 *)(*(long *)((long)puVar32 + -0x108) + 0x348);
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cd29;
        func_0x0412a280(uVar24,uVar29 & 0xfffffffffffffffe);
      }
      uVar29 = (lVar21 - lVar22) + 1;
      *(undefined8 *)(lVar27 + 0x348) = *(undefined8 *)((long)puVar32 + -0xe8);
      uVar14 = *(undefined4 *)((long)puVar32 + -0xf4);
      uVar6 = *(undefined4 *)((long)puVar32 + -0xf0);
      uVar7 = *(undefined4 *)((long)puVar32 + -0xec);
      *(undefined4 *)pbVar16 = *(undefined4 *)((long)puVar32 + -0xf8);
      *(undefined4 *)(lVar27 + 0x33c) = uVar14;
      *(undefined4 *)(lVar27 + 0x340) = uVar6;
      *(undefined4 *)(lVar27 + 0x344) = uVar7;
      bVar26 = *(byte *)(*(long *)((long)puVar32 + -0x108) + 800);
      if ((bVar26 & 1) == 0) {
        uVar28 = (ulong)(bVar26 >> 1);
      }
      else {
        uVar28 = *(ulong *)(*(long *)((long)puVar32 + -0x108) + 0x328);
      }
      if (uVar28 <= uVar29) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59ce13;
        func_0x04160690((undefined1 *)((long)puVar32 + -0xf8),&UNK_013d32d6);
        lVar27 = *(long *)((long)puVar32 + -0x108);
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59ce27;
        func_0x0b5a1270(lVar27,(undefined1 *)((long)puVar32 + -0xf8),0x3ea);
        goto LAB_0b59c98a;
      }
      *(undefined4 *)((long)puVar32 + -0x48) = 0xffffffff;
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cd81;
      func_0x048ecf60((undefined1 *)((long)puVar32 + -0xf8),*(undefined8 *)((long)puVar32 + -0x68),
                      uVar29);
      bVar33 = (*(byte *)((long)puVar32 + -0xf8) & 1) != 0;
      puVar23 = (undefined1 *)((long)puVar32 + -0xf7);
      if (bVar33) {
        puVar23 = *(undefined1 **)((long)puVar32 + -0xe8);
      }
      uVar29 = (ulong)(*(byte *)((long)puVar32 + -0xf8) >> 1);
      if (bVar33) {
        uVar29 = *(ulong *)((long)puVar32 + -0xf0);
      }
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cdb2;
      iVar15 = func_0x0edff950(puVar23,uVar29,(undefined1 *)((long)puVar32 + -0x48),0,0xffff);
      if ((*(byte *)((long)puVar32 + -0xf8) & 1) != 0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cdce;
        func_0x0412a280(*(undefined8 *)((long)puVar32 + -0xe8),
                        *(ulong *)((long)puVar32 + -0xf8) & 0xfffffffffffffffe);
      }
      if (iVar15 != 0) {
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cde6;
        func_0x04160690((undefined1 *)((long)puVar32 + -0xf8),&UNK_0139f05f);
        lVar27 = *(long *)((long)puVar32 + -0x108);
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cdfa;
        func_0x0b5a1270(lVar27,(undefined1 *)((long)puVar32 + -0xf8),0x3ea);
        goto LAB_0b59c98a;
      }
      goto LAB_0b59ce40;
    }
    if (*(char *)(lVar34 + 0x36a) == '\x01') {
      *(undefined2 *)(lVar34 + 0x368) = 0x1bb;
      uVar31 = 0x1bb;
    }
    else {
      *(undefined2 *)(lVar34 + 0x368) = 0x50;
      uVar31 = 0x50;
    }
  }
  *(undefined8 *)((long)puVar32 + -0xf8) = 0;
  *(undefined8 *)((long)puVar32 + -0xf0) = 0;
  *(undefined8 *)((long)puVar32 + -0x88) = 0;
  *(undefined8 *)((long)puVar32 + -0x80) = 0;
  *(undefined8 *)((long)puVar32 + -0x98) = 0;
  *(undefined8 *)((long)puVar32 + -0x90) = 0;
  *(undefined8 *)((long)puVar32 + -0xa8) = 0;
  *(undefined8 *)((long)puVar32 + -0xa0) = 0;
  *(undefined8 *)((long)puVar32 + -0xb8) = 0;
  *(undefined8 *)((long)puVar32 + -0xb0) = 0;
  *(undefined8 *)((long)puVar32 + -200) = 0;
  *(undefined8 *)((long)puVar32 + -0xc0) = 0;
  *(undefined8 *)((long)puVar32 + -0xd8) = 0;
  *(undefined8 *)((long)puVar32 + -0xd0) = 0;
  *(undefined8 *)((long)puVar32 + -0xe8) = 0;
  *(undefined8 *)((long)puVar32 + -0xe0) = 0;
  *(undefined2 *)((long)puVar32 + -0xf8) = 2;
  *(undefined4 *)((long)puVar32 + -0x78) = 0xffff0000;
  if ((*(byte *)(lVar34 + 0x338) & 1) == 0) {
    lVar27 = lVar34 + 0x339;
  }
  else {
    lVar27 = *(long *)(lVar34 + 0x348);
  }
  *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cec0;
  cVar13 = func_0x0d6e4360((undefined1 *)((long)puVar32 + -0xf8),lVar27,0,4);
  if (cVar13 != '\0') {
    *(ushort *)((long)puVar32 + -0xf6) = uVar31 << 8 | uVar31 >> 8;
    *(ushort *)((long)puVar32 + -0x78) = uVar31;
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59ceed;
    func_0x0d6e3e90((undefined1 *)((long)puVar32 + -0x48),(undefined1 *)((long)puVar32 + -0xf8));
    if ((*pbVar16 & 1) != 0) {
      uVar29 = *(ulong *)(lVar34 + 0x338);
      uVar24 = *(undefined8 *)(lVar34 + 0x348);
      *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cf0d;
      func_0x0412a280(uVar24,uVar29 & 0xfffffffffffffffe);
    }
    *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)((long)puVar32 + -0x38);
    uVar14 = *(undefined4 *)((long)puVar32 + -0x44);
    uVar6 = *(undefined4 *)((long)puVar32 + -0x40);
    uVar7 = *(undefined4 *)((long)puVar32 + -0x3c);
    *(undefined4 *)pbVar16 = *(undefined4 *)((long)puVar32 + -0x48);
    *(undefined4 *)(pbVar16 + 4) = uVar14;
    *(undefined4 *)(pbVar16 + 8) = uVar6;
    *(undefined4 *)(pbVar16 + 0xc) = uVar7;
    pbVar40 = (byte *)(lVar34 + 0x2f0);
    pbVar41 = *(byte **)((long)puVar32 + -0x100);
    if (pbVar40 != pbVar41) {
      bVar26 = *pbVar41;
      if ((*pbVar40 & 1) == 0) {
        if ((bVar26 & 1) == 0) {
          puVar19 = *(undefined4 **)((long)puVar32 + -0x100);
          *(undefined8 *)(lVar34 + 0x300) = *(undefined8 *)(puVar19 + 4);
          uVar14 = puVar19[1];
          uVar6 = puVar19[2];
          uVar7 = puVar19[3];
          *(undefined4 *)pbVar40 = *puVar19;
          *(undefined4 *)(lVar34 + 0x2f4) = uVar14;
          *(undefined4 *)(lVar34 + 0x2f8) = uVar6;
          *(undefined4 *)(lVar34 + 0x2fc) = uVar7;
        }
        else {
          uVar24 = *(undefined8 *)(*(long *)((long)puVar32 + -0x100) + 8);
          uVar5 = *(undefined8 *)(*(long *)((long)puVar32 + -0x100) + 0x10);
          *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cf87;
          func_0x04885070(pbVar40,uVar5,uVar24);
        }
      }
      else {
        bVar33 = (bVar26 & 1) != 0;
        uVar24 = *(undefined8 *)((long)puVar32 + -0x58);
        if (bVar33) {
          uVar24 = *(undefined8 *)(pbVar41 + 0x10);
        }
        uVar29 = (ulong)(bVar26 >> 1);
        if (bVar33) {
          uVar29 = *(ulong *)(pbVar41 + 8);
        }
        *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cf73;
        func_0x04885120(pbVar40,uVar24,uVar29);
      }
    }
    *(undefined4 *)(lVar34 + 0x448) = 3;
    plVar3 = *(long **)(lVar34 + 8);
    uVar2 = *(undefined2 *)(lVar34 + 0x368);
    pcVar4 = *(code **)(*plVar3 + 0x18);
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59cfaa;
    (*pcVar4)((undefined1 *)((long)puVar32 + -0xf8),plVar3,pbVar16,uVar2);
    uVar24 = *(undefined8 *)((long)puVar32 + -0x80);
    *(undefined8 *)(lVar34 + 0x80) = *(undefined8 *)((long)puVar32 + -0x88);
    *(undefined8 *)(lVar34 + 0x88) = uVar24;
    uVar24 = *(undefined8 *)((long)puVar32 + -0x90);
    *(undefined8 *)(lVar34 + 0x70) = *(undefined8 *)((long)puVar32 + -0x98);
    *(undefined8 *)(lVar34 + 0x78) = uVar24;
    uVar24 = *(undefined8 *)((long)puVar32 + -0xa0);
    *(undefined8 *)(lVar34 + 0x60) = *(undefined8 *)((long)puVar32 + -0xa8);
    *(undefined8 *)(lVar34 + 0x68) = uVar24;
    uVar24 = *(undefined8 *)((long)puVar32 + -0xb0);
    *(undefined8 *)(lVar34 + 0x50) = *(undefined8 *)((long)puVar32 + -0xb8);
    *(undefined8 *)(lVar34 + 0x58) = uVar24;
    uVar24 = *(undefined8 *)((long)puVar32 + -0xf8);
    uVar5 = *(undefined8 *)((long)puVar32 + -0xf0);
    uVar8 = *(undefined8 *)((long)puVar32 + -0xe8);
    uVar9 = *(undefined8 *)((long)puVar32 + -0xe0);
    uVar10 = *(undefined8 *)((long)puVar32 + -0xd8);
    uVar11 = *(undefined8 *)((long)puVar32 + -0xd0);
    uVar12 = *(undefined8 *)((long)puVar32 + -0xc0);
    *(undefined8 *)(lVar34 + 0x40) = *(undefined8 *)((long)puVar32 + -200);
    *(undefined8 *)(lVar34 + 0x48) = uVar12;
    *(undefined8 *)(lVar34 + 0x30) = uVar10;
    *(undefined8 *)(lVar34 + 0x38) = uVar11;
    *(undefined8 *)(lVar34 + 0x20) = uVar8;
    *(undefined8 *)(lVar34 + 0x28) = uVar9;
    *(undefined8 *)(lVar34 + 0x10) = uVar24;
    *(undefined8 *)(lVar34 + 0x18) = uVar5;
    *(undefined4 *)(lVar34 + 0x90) = *(undefined4 *)((long)puVar32 + -0x78);
    return 3;
  }
LAB_0b59c9a4:
  plVar3 = *(long **)(lVar34 + 0x2b0);
  if (plVar3 != (long *)0x0) {
    *(undefined2 *)((long)puVar32 + -0xf8) = *(undefined2 *)(lVar34 + 0x1d0);
    pcVar4 = *(code **)(*plVar3 + 0x30);
    *(undefined8 *)((long)puVar32 + -0x110) = 0xb59c9d3;
    (*pcVar4)(plVar3,(undefined1 *)((long)puVar32 + -0xf8),lVar34 + 0x1b8);
  }
  return 1;
LAB_0b59c21f:
  uStack_160 = 0xb59c224;
  func_0x04891200();
LAB_0b59c224:
  uStack_160 = 0xb59c229;
  func_0x04882e30();
LAB_0b59c229:
  uStack_160 = 0xb59c22e;
  func_0x04882e30();
LAB_0b59c22e:
  uStack_160 = 0xb59c233;
  func_0x04882e30();
  pbVar36 = param_2;
LAB_0b59c233:
  uStack_160 = 0xb59c23f;
  func_0x0eee02f0(0xf5522b8);
  pbVar37 = pbVar40;
LAB_0b59c23f:
  uStack_160 = 0xb59c24b;
  pbVar16 = (byte *)func_0x0eee02f0(0xf551cc8);
  uStack_160 = 0xb59c25b;
  FUN_04886070(&uStack_c8);
  if ((uStack_58 & 1) != 0) {
    pbVar36 = (byte *)(uStack_58 & 0xfffffffffffffffe);
    uStack_160 = 0xb59c2a7;
    func_0x0412a280(lStack_48);
  }
  if (((ulong)uStack_98 & 1) == 0) {
LAB_0b59c39a:
    uStack_160 = 0xb59c3a2;
    pbVar40 = pbVar16;
    lVar27 = func_0x0eee2d70();
  }
  else {
    pbVar36 = (byte *)((ulong)uStack_98 & 0xfffffffffffffffe);
    uStack_160 = 0xb59c369;
    func_0x0412a280(pbStack_88);
    uStack_160 = 0xb59c371;
    pbVar16 = (byte *)func_0x0eee2d70(pbVar16);
    lVar27 = 0x20;
    pbVar40 = pbStack_a8;
    if ((pbStack_a8 != (byte *)&uStack_c8) && (lVar27 = 0x28, pbStack_a8 == (byte *)0x0))
    goto LAB_0b59c39a;
  }
  uStack_160 = 0xb59c3a8;
  (**(code **)(*(long *)pbVar40 + lVar27))();
  uStack_160 = 0xb59c3b0;
  pbVar40 = pbVar16;
  auVar43 = func_0x0eee2d70();
  goto SUB_0b59c3b0;
}



/* ---- referenced strings ----
 * 0x11fbdb0  Invalid URI: fragments aren't allowed in websocket URIs.
 * 0x11fbdc0  gments aren't allowed in websocket URIs.
 * 0x11fbdd0  lowed in websocket URIs.
 * 0x127f42a  Invalid URI: domain not provided.
 * 0x127f43a  ain not provided.
 * 0x14a26ea  Invalid URI: Secure websockets not supported.
 * 0x14a26fa  ure websockets not supported.
 * 0x14a2707  s not supported.
 * 0x14d792c  Invalid URI: not a valid websocket scheme.
 * 0x14d793c   a valid websocket scheme.
 * 0x14d7946  ebsocket scheme.
 */
