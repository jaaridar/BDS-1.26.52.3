/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc69de30 (ELF vaddr 0xc59de30)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c69de30, 0c69e55a]]
 * Ghidra: FUN_0c69de30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c69de30(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  byte *pbStack_50;
  undefined **ppuStack_48;
  long *plStack_38;
  
  lVar10 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar10 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar10));
  *param_1 = (long)&UNK_0f3acf88;
  param_1[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  FUN_0c66ed20(param_1,0x429,0,0);
  *param_1 = (long)&UNK_0f3bdb80;
  plStack_38 = param_1 + 0x75;
  param_1[0x77] = param_4[2];
  lVar10 = param_4[1];
  param_1[0x75] = *param_4;
  param_1[0x76] = lVar10;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[0x7a] = param_4[5];
  lVar10 = param_4[4];
  param_1[0x78] = param_4[3];
  param_1[0x79] = lVar10;
  func_0x0c6e7950(param_1 + 0x7b,param_4 + 6);
  param_1[0x92] = param_4[0x1d];
  lVar10 = param_4[0x1c];
  param_1[0x90] = param_4[0x1b];
  param_1[0x91] = lVar10;
  *(undefined1 (*) [16])(param_4 + 0x1b) = (undefined1  [16])0x0;
  param_4[0x1d] = 0;
  param_1[0x95] = param_4[0x20];
  lVar10 = param_4[0x1f];
  param_1[0x93] = param_4[0x1e];
  param_1[0x94] = lVar10;
  *(undefined1 (*) [16])(param_4 + 0x1e) = (undefined1  [16])0x0;
  param_4[0x20] = 0;
  plVar6 = param_1 + 0x9d;
  *(undefined1 (*) [16])(param_1 + 0x9d) = (undefined1  [16])0x0;
  param_1[0x9f] = 0;
  *(undefined1 (*) [16])(param_1 + 0x97) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x99) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x4d4) = (undefined1  [16])0x0;
  bVar1 = *(byte *)(param_1 + 0x93);
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = param_1[0x94];
  }
  if (uVar3 == 0) {
LAB_0c69e0d6:
    *(undefined4 *)(param_1 + 0x96) = 0;
  }
  else {
    if (uVar3 == 0x13) {
      if ((bVar1 & 1) == 0) {
        pcVar7 = (char *)((long)param_1 + 0x499);
      }
      else {
        pcVar7 = (char *)param_1[0x95];
      }
      auVar13[0] = -(pcVar7[3] == DAT_014e4530);
      auVar13[1] = -(pcVar7[4] == UNK_014e4531);
      auVar13[2] = -(pcVar7[5] == UNK_014e4532);
      auVar13[3] = -(pcVar7[6] == UNK_014e4533);
      auVar13[4] = -(pcVar7[7] == UNK_014e4534);
      auVar13[5] = -(pcVar7[8] == UNK_014e4535);
      auVar13[6] = -(pcVar7[9] == UNK_014e4536);
      auVar13[7] = -(pcVar7[10] == UNK_014e4537);
      auVar13[8] = -(pcVar7[0xb] == UNK_014e4538);
      auVar13[9] = -(pcVar7[0xc] == UNK_014e4539);
      auVar13[10] = -(pcVar7[0xd] == UNK_014e453a);
      auVar13[0xb] = -(pcVar7[0xe] == UNK_014e453b);
      auVar13[0xc] = -(pcVar7[0xf] == UNK_014e453c);
      auVar13[0xd] = -(pcVar7[0x10] == UNK_014e453d);
      auVar13[0xe] = -(pcVar7[0x11] == UNK_014e453e);
      auVar13[0xf] = -(pcVar7[0x12] == UNK_014e453f);
      auVar12[0] = -(*pcVar7 == DAT_014e1b10);
      auVar12[1] = -(pcVar7[1] == UNK_014e1b11);
      auVar12[2] = -(pcVar7[2] == UNK_014e1b12);
      auVar12[3] = -(pcVar7[3] == UNK_014e1b13);
      auVar12[4] = -(pcVar7[4] == UNK_014e1b14);
      auVar12[5] = -(pcVar7[5] == UNK_014e1b15);
      auVar12[6] = -(pcVar7[6] == UNK_014e1b16);
      auVar12[7] = -(pcVar7[7] == UNK_014e1b17);
      auVar12[8] = -(pcVar7[8] == UNK_014e1b18);
      auVar12[9] = -(pcVar7[9] == UNK_014e1b19);
      auVar12[10] = -(pcVar7[10] == UNK_014e1b1a);
      auVar12[0xb] = -(pcVar7[0xb] == UNK_014e1b1b);
      auVar12[0xc] = -(pcVar7[0xc] == UNK_014e1b1c);
      auVar12[0xd] = -(pcVar7[0xd] == UNK_014e1b1d);
      auVar12[0xe] = -(pcVar7[0xe] == UNK_014e1b1e);
      auVar12[0xf] = -(pcVar7[0xf] == UNK_014e1b1f);
      auVar12 = auVar12 & auVar13;
      if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined4 *)(param_1 + 0x96) = 1;
        goto LAB_0c69e287;
      }
    }
    else if (uVar3 == 0xe) {
      if ((bVar1 & 1) == 0) {
        plVar8 = (long *)((long)param_1 + 0x499);
      }
      else {
        plVar8 = (long *)param_1[0x95];
      }
      if (*(long *)((long)plVar8 + 6) == 0x73706f72635f7374 && *plVar8 == 0x7374726f70707573)
      goto LAB_0c69e0d6;
    }
    *(undefined4 *)(param_1 + 0x96) = 2;
    puStack_68 = (undefined *)0x0;
    if ((bVar1 & 1) == 0) {
      pbStack_50 = (byte *)param_1[0x95];
      uStack_60 = (long *)param_1[0x93];
      puStack_58 = (undefined *)param_1[0x94];
    }
    else {
      func_0x0412e5e0(&uStack_60,param_1[0x95]);
    }
    ppuStack_48 = (undefined **)0x0;
    if (((ulong)uStack_60 & 1) == 0) {
      if ((byte)uStack_60 >> 1 != 0) goto LAB_0c69e122;
LAB_0c69e206:
      puStack_68 = (undefined *)0x0;
      bVar1 = *(byte *)(param_1 + 0x98);
    }
    else {
      if (puStack_58 == (undefined *)0x0) goto LAB_0c69e206;
LAB_0c69e122:
      if (((ulong)uStack_60 & 1) == 0) {
        pbVar4 = (byte *)((long)&uStack_60 + 1);
        if (pbVar4 == (byte *)0x0) goto LAB_0c69e22e;
LAB_0c69e138:
        if (*pbVar4 == 0) goto LAB_0c69e206;
        puVar11 = (undefined *)0xcbf29ce484222325;
        uVar3 = func_0x0eee2e90(pbVar4);
        if (uVar3 != 0) {
          uVar9 = (ulong)((uint)uVar3 & 7);
          if (7 < uVar3) {
            uVar3 = uVar3 & 0xfffffffffffffff8;
            do {
              puVar11 = (undefined *)
                        (((((((((long)puVar11 * 0x100000001b3 ^ (ulong)*pbVar4) * 0x100000001b3 ^
                              (ulong)pbVar4[1]) * 0x100000001b3 ^ (ulong)pbVar4[2]) * 0x100000001b3
                            ^ (ulong)pbVar4[3]) * 0x100000001b3 ^ (ulong)pbVar4[4]) * 0x100000001b3
                          ^ (ulong)pbVar4[5]) * 0x100000001b3 ^ (ulong)pbVar4[6]) * 0x100000001b3 ^
                        (ulong)pbVar4[7]);
              pbVar4 = pbVar4 + 8;
              uVar3 = uVar3 - 8;
            } while (uVar3 != 0);
          }
          if (uVar9 != 0) {
            uVar3 = 0;
            do {
              puVar11 = (undefined *)((long)puVar11 * 0x100000001b3 ^ (ulong)pbVar4[uVar3]);
              uVar3 = uVar3 + 1;
            } while (uVar9 != uVar3);
          }
        }
      }
      else {
        pbVar4 = pbStack_50;
        if (pbStack_50 != (byte *)0x0) goto LAB_0c69e138;
LAB_0c69e22e:
        puVar11 = (undefined *)0x0;
      }
      bVar1 = *(byte *)(param_1 + 0x98);
      puStack_68 = puVar11;
    }
    if ((bVar1 & 1) != 0) {
      func_0x0412a280(param_1[0x9a],param_1[0x98] & 0xfffffffffffffffe);
    }
    param_1[0x9a] = (long)pbStack_50;
    param_1[0x98] = (long)uStack_60;
    param_1[0x99] = (long)puStack_58;
    param_1[0x97] = (long)puStack_68;
    param_1[0x9b] = 0;
  }
LAB_0c69e287:
  bVar1 = *(byte *)(param_1 + 0x90);
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = param_1[0x91];
  }
  if (uVar3 == 0) {
    pbVar4 = (byte *)func_0x0c6e66d0(param_1 + 0x7b);
    if ((*pbVar4 & 1) == 0) {
      if (*pbVar4 >> 1 != 0) goto LAB_0c69e307;
    }
    else if (*(long *)(pbVar4 + 8) != 0) {
LAB_0c69e307:
      *(undefined4 *)(param_1 + 0x9c) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = 1;
    if ((*(byte *)(param_1 + 0x9d) & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        param_1[0x9f] = param_1[0x92];
        *plVar6 = param_1[0x90];
        param_1[0x9e] = param_1[0x91];
      }
      else {
        func_0x04885070(plVar6,param_1[0x92],param_1[0x91]);
      }
    }
    else {
      if ((bVar1 & 1) == 0) {
        lVar10 = (long)param_1 + 0x481;
      }
      else {
        lVar10 = param_1[0x92];
      }
      func_0x04885120(plVar6,lVar10);
    }
  }
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9720;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  func_0x0c6cf060(param_1,0xf713e38);
  uVar5 = func_0x0c6a3090(param_1 + 0x6d);
  uVar2 = *(undefined2 *)((long)param_1 + 0x14e);
  puStack_68 = &UNK_0f3bd7b8;
  puStack_58 = &UNK_0c69e680;
  pbStack_50 = (byte *)0x0;
  uStack_60 = param_1;
  ppuStack_48 = &puStack_68;
  func_0x0c6a3950(&puStack_78,uVar5,&puStack_68);
  if (ppuStack_48 == &puStack_68) {
    lVar10 = 0x20;
LAB_0c69e3e7:
    (**(code **)(*ppuStack_48 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0c69e3e7;
  }
  func_0x0c6ed620(uVar5,uVar2,&puStack_78,1);
  if (lStack_70 != 0) {
    plVar6 = (long *)func_0x0412c300();
    uStack_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      puStack_68 = puStack_78;
      if (puStack_78 != (undefined *)0x0) {
        (**(code **)(**(long **)(puStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar8 = plVar6 + 1;
      lVar10 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
      }
    }
    if (lStack_70 != 0) {
      FUN_0412c2d0();
    }
  }
  uVar5 = func_0x05cfac90(param_1 + 0x6d);
  uVar2 = *(undefined2 *)((long)param_1 + 0x14e);
  puStack_68 = &UNK_0f3bd838;
  puStack_58 = &UNK_0c69e950;
  pbStack_50 = (byte *)0x0;
  uStack_60 = param_1;
  ppuStack_48 = &puStack_68;
  func_0x05cfb550(&puStack_78,uVar5,&puStack_68);
  if (ppuStack_48 == &puStack_68) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_48 == (undefined **)0x0) goto LAB_0c69e4d3;
  }
  (**(code **)(*ppuStack_48 + lVar10))();
LAB_0c69e4d3:
  func_0x0c6ed620(uVar5,uVar2,&puStack_78,1);
  if (lStack_70 != 0) {
    plVar6 = (long *)func_0x0412c300();
    uStack_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      puStack_68 = puStack_78;
      if (puStack_78 != (undefined *)0x0) {
        (**(code **)(**(long **)(puStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar8 = plVar6 + 1;
      lVar10 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
      }
    }
    if (lStack_70 != 0) {
      FUN_0412c2d0();
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x14e1b10  supports_vegetat
 */
