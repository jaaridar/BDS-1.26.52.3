/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc697b20 (ELF vaddr 0xc597b20)
 * Label: caller-of-seed
 * Body:  [[0c697b20, 0c69856c]]
 * Ghidra: FUN_0c697b20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c697b20(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  byte bVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  long *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar11 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar11 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar11));
  *param_1 = (long)&UNK_0f3b9978;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (param_1 + 0x75 != param_4) {
    if ((*(byte *)(param_4 + 1) & 1) == 0) {
      param_1[0x78] = param_4[3];
      lVar11 = param_4[2];
      param_1[0x76] = param_4[1];
      param_1[0x77] = lVar11;
    }
    else {
      func_0x04885070(param_1 + 0x76,param_4[3],param_4[2]);
    }
  }
  param_1[0x75] = *param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x31] = (ulong)_DAT_011986d0;
  *(undefined4 *)(param_1 + 0x32) = 0x3dcccccc;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1380;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f666666;
  plVar6 = param_1 + 0x19;
  lVar11 = param_1[0x19];
  if (lVar11 == _DAT_0f711088) {
    if (((undefined *)param_1[0x1d] == &DAT_0f711088) && (_DAT_0f7110a8 == plVar6)) {
      if ((*(byte *)(param_1 + 1) & 1) == 0) goto LAB_0c697c6c;
LAB_0c69817a:
      param_1[2] = 0xf;
      puVar8 = (undefined8 *)param_1[3];
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1a);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
        if ((DAT_0f711090 & 1) != 0) goto LAB_0c697cb2;
LAB_0c697c97:
        if (uVar10 != DAT_0f711090 >> 1) goto LAB_0c697cea;
      }
      else {
        uVar10 = param_1[0x1b];
        if ((DAT_0f711090 & 1) == 0) goto LAB_0c697c97;
LAB_0c697cb2:
        if (uVar10 != _DAT_0f711098) goto LAB_0c697cea;
      }
      if ((bVar2 & 1) == 0) {
        lVar12 = (long)param_1 + 0xd1;
        if ((DAT_0f711090 & 1) != 0) goto LAB_0c69814e;
LAB_0c697cd6:
        iVar5 = func_0x0eee3000(lVar12,0xf711091);
      }
      else {
        lVar12 = param_1[0x1c];
        if ((DAT_0f711090 & 1) == 0) goto LAB_0c697cd6;
LAB_0c69814e:
        iVar5 = func_0x0eee3000(lVar12,_DAT_0f7110a0);
      }
      if (iVar5 != 0) goto LAB_0c697cea;
      param_1[0x1d] = (long)&DAT_0f711088;
      _DAT_0f7110a8 = plVar6;
      if ((*(byte *)(param_1 + 1) & 1) != 0) goto LAB_0c69817a;
LAB_0c697c6c:
      *(undefined1 *)(param_1 + 1) = 0x1e;
      puVar8 = (undefined8 *)((long)param_1 + 9);
    }
    uVar9 = 0x65756c622e6c6172;
LAB_0c698190:
    *(undefined8 *)((long)puVar8 + 7) = uVar9;
    *puVar8 = 0x726f632e656c6974;
    *(undefined1 *)((long)puVar8 + 0xf) = 0;
  }
  else {
LAB_0c697cea:
    param_1[0x1d] = 0;
    if (lVar11 == _DAT_0f710020) {
      bVar2 = *(byte *)(param_1 + 0x1a);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
        if ((DAT_0f710028 & 1) != 0) goto LAB_0c697d37;
LAB_0c697d1c:
        if (uVar10 != DAT_0f710028 >> 1) goto LAB_0c697d6f;
      }
      else {
        uVar10 = param_1[0x1b];
        if ((DAT_0f710028 & 1) == 0) goto LAB_0c697d1c;
LAB_0c697d37:
        if (uVar10 != _DAT_0f710030) goto LAB_0c697d6f;
      }
      if ((bVar2 & 1) == 0) {
        lVar12 = (long)param_1 + 0xd1;
        if ((DAT_0f710028 & 1) != 0) goto LAB_0c698004;
LAB_0c697d5b:
        iVar5 = func_0x0eee3000(lVar12,0xf710029);
      }
      else {
        lVar12 = param_1[0x1c];
        if ((DAT_0f710028 & 1) == 0) goto LAB_0c697d5b;
LAB_0c698004:
        iVar5 = func_0x0eee3000(lVar12,_DAT_0f710038);
      }
      if (iVar5 != 0) goto LAB_0c697d6f;
      param_1[0x1d] = (long)&DAT_0f710020;
      _DAT_0f710040 = plVar6;
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1e;
        puVar8 = (undefined8 *)((long)param_1 + 9);
        uVar9 = 0x6b6e69702e6c6172;
      }
      else {
        param_1[2] = 0xf;
        puVar8 = (undefined8 *)param_1[3];
        uVar9 = 0x6b6e69702e6c6172;
      }
      goto LAB_0c698190;
    }
LAB_0c697d6f:
    if (lVar11 == _DAT_0f710048) {
      bVar2 = *(byte *)(param_1 + 0x1a);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
        if ((DAT_0f710050 & 1) != 0) goto LAB_0c697db1;
LAB_0c697d96:
        if (uVar10 != DAT_0f710050 >> 1) goto LAB_0c697de9;
      }
      else {
        uVar10 = param_1[0x1b];
        if ((DAT_0f710050 & 1) == 0) goto LAB_0c697d96;
LAB_0c697db1:
        if (uVar10 != _DAT_0f710058) goto LAB_0c697de9;
      }
      if ((bVar2 & 1) == 0) {
        lVar12 = (long)param_1 + 0xd1;
        if ((DAT_0f710050 & 1) != 0) goto LAB_0c69805e;
LAB_0c697dd5:
        iVar5 = func_0x0eee3000(lVar12,0xf710051);
      }
      else {
        lVar12 = param_1[0x1c];
        if ((DAT_0f710050 & 1) == 0) goto LAB_0c697dd5;
LAB_0c69805e:
        iVar5 = func_0x0eee3000(lVar12,_DAT_0f710060);
      }
      if (iVar5 != 0) goto LAB_0c697de9;
      param_1[0x1d] = (long)&DAT_0f710048;
      _DAT_0f710068 = plVar6;
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x22;
        puVar7 = (undefined4 *)((long)param_1 + 9);
      }
      else {
        param_1[2] = 0x11;
        puVar7 = (undefined4 *)param_1[3];
      }
      uVar15 = _UNK_012e81c6;
      uVar14 = _UNK_012e81c2;
      uVar13 = _UNK_012e81be;
      *puVar7 = _DAT_012e81ba;
      puVar7[1] = uVar13;
      puVar7[2] = uVar14;
      puVar7[3] = uVar15;
      *(undefined2 *)(puVar7 + 4) = 0x65;
      goto LAB_0c698339;
    }
LAB_0c697de9:
    if (lVar11 == _DAT_0f710070) {
      bVar2 = *(byte *)(param_1 + 0x1a);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
        if ((DAT_0f710078 & 1) != 0) goto LAB_0c697e2b;
LAB_0c697e10:
        if (uVar10 != DAT_0f710078 >> 1) goto LAB_0c697e63;
      }
      else {
        uVar10 = param_1[0x1b];
        if ((DAT_0f710078 & 1) == 0) goto LAB_0c697e10;
LAB_0c697e2b:
        if (uVar10 != _DAT_0f710080) goto LAB_0c697e63;
      }
      if ((bVar2 & 1) == 0) {
        lVar12 = (long)param_1 + 0xd1;
        if ((DAT_0f710078 & 1) != 0) goto LAB_0c6980ae;
LAB_0c697e4f:
        iVar5 = func_0x0eee3000(lVar12,0xf710079);
      }
      else {
        lVar12 = param_1[0x1c];
        if ((DAT_0f710078 & 1) == 0) goto LAB_0c697e4f;
LAB_0c6980ae:
        iVar5 = func_0x0eee3000(lVar12,_DAT_0f710088);
      }
      if (iVar5 == 0) {
        param_1[0x1d] = (long)&DAT_0f710070;
        _DAT_0f710090 = plVar6;
        if ((*(byte *)(param_1 + 1) & 1) == 0) {
          *(undefined1 *)(param_1 + 1) = 0x1c;
          puVar8 = (undefined8 *)((long)param_1 + 9);
        }
        else {
          param_1[2] = 0xe;
          puVar8 = (undefined8 *)param_1[3];
        }
        *(undefined8 *)((long)puVar8 + 6) = 0x6465722e6c61726f;
        *puVar8 = 0x726f632e656c6974;
        *(undefined1 *)((long)puVar8 + 0xe) = 0;
        goto LAB_0c698339;
      }
    }
LAB_0c697e63:
    if (lVar11 == _DAT_0f710098) {
      bVar2 = *(byte *)(param_1 + 0x1a);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
        if ((DAT_0f7100a0 & 1) != 0) goto LAB_0c697ea5;
LAB_0c697e8a:
        if (uVar10 != DAT_0f7100a0 >> 1) goto LAB_0c697edd;
      }
      else {
        uVar10 = param_1[0x1b];
        if ((DAT_0f7100a0 & 1) == 0) goto LAB_0c697e8a;
LAB_0c697ea5:
        if (uVar10 != _DAT_0f7100a8) goto LAB_0c697edd;
      }
      if ((bVar2 & 1) == 0) {
        lVar12 = (long)param_1 + 0xd1;
        if ((DAT_0f7100a0 & 1) != 0) goto LAB_0c6980fe;
LAB_0c697ec9:
        iVar5 = func_0x0eee3000(lVar12,0xf7100a1);
      }
      else {
        lVar12 = param_1[0x1c];
        if ((DAT_0f7100a0 & 1) == 0) goto LAB_0c697ec9;
LAB_0c6980fe:
        iVar5 = func_0x0eee3000(lVar12,_DAT_0f7100b0);
      }
      if (iVar5 == 0) {
        param_1[0x1d] = (long)&DAT_0f710098;
        _DAT_0f7100b8 = plVar6;
        if ((*(byte *)(param_1 + 1) & 1) == 0) {
          *(undefined1 *)(param_1 + 1) = 0x22;
          puVar7 = (undefined4 *)((long)param_1 + 9);
        }
        else {
          param_1[2] = 0x11;
          puVar7 = (undefined4 *)param_1[3];
        }
        uVar15 = _UNK_014096bc;
        uVar14 = _UNK_014096b8;
        uVar13 = _UNK_014096b4;
        *puVar7 = _DAT_014096b0;
        puVar7[1] = uVar13;
        puVar7[2] = uVar14;
        puVar7[3] = uVar15;
        *(undefined2 *)(puVar7 + 4) = 0x77;
        goto LAB_0c698339;
      }
    }
LAB_0c697edd:
    if (lVar11 == _DAT_0f7100c0) {
      bVar2 = *(byte *)(param_1 + 0x1a);
      if ((bVar2 & 1) == 0) {
        uVar10 = (ulong)(bVar2 >> 1);
        if ((DAT_0f7100c8 & 1) != 0) goto LAB_0c697f1f;
LAB_0c697f04:
        if (uVar10 != DAT_0f7100c8 >> 1) goto LAB_0c697f57;
      }
      else {
        uVar10 = param_1[0x1b];
        if ((DAT_0f7100c8 & 1) == 0) goto LAB_0c697f04;
LAB_0c697f1f:
        if (uVar10 != _DAT_0f7100d0) goto LAB_0c697f57;
      }
      if ((bVar2 & 1) == 0) {
        lVar11 = (long)param_1 + 0xd1;
        if ((DAT_0f7100c8 & 1) != 0) goto LAB_0c6981ba;
LAB_0c697f43:
        iVar5 = func_0x0eee3000(lVar11,0xf7100c9);
      }
      else {
        lVar11 = param_1[0x1c];
        if ((DAT_0f7100c8 & 1) == 0) goto LAB_0c697f43;
LAB_0c6981ba:
        iVar5 = func_0x0eee3000(lVar11,_DAT_0f7100d8);
      }
      if (iVar5 != 0) goto LAB_0c697f57;
      param_1[0x1d] = (long)&DAT_0f7100c0;
      _DAT_0f7100e0 = plVar6;
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x28;
        puVar7 = (undefined4 *)((long)param_1 + 9);
        uVar13 = _DAT_013effd3;
        uVar14 = _UNK_013effd7;
        uVar15 = _UNK_013effdb;
        uVar16 = _UNK_013effdf;
      }
      else {
        param_1[2] = 0x14;
        puVar7 = (undefined4 *)param_1[3];
        uVar13 = _DAT_013effd3;
        uVar14 = _UNK_013effd7;
        uVar15 = _UNK_013effdb;
        uVar16 = _UNK_013effdf;
      }
LAB_0c69832b:
      *puVar7 = uVar13;
      puVar7[1] = uVar14;
      puVar7[2] = uVar15;
      puVar7[3] = uVar16;
      puVar7[4] = 0x64616564;
      *(undefined1 *)(puVar7 + 5) = 0;
    }
    else {
LAB_0c697f57:
      cVar4 = func_0x0ee24b80(plVar6,0xf7100e8);
      if (cVar4 != '\0') {
        if ((*(byte *)(param_1 + 1) & 1) == 0) {
          *(undefined1 *)(param_1 + 1) = 0x28;
          puVar7 = (undefined4 *)((long)param_1 + 9);
          uVar13 = _DAT_01456ced;
          uVar14 = _UNK_01456cf1;
          uVar15 = _UNK_01456cf5;
          uVar16 = _UNK_01456cf9;
        }
        else {
          param_1[2] = 0x14;
          puVar7 = (undefined4 *)param_1[3];
          uVar13 = _DAT_01456ced;
          uVar14 = _UNK_01456cf1;
          uVar15 = _UNK_01456cf5;
          uVar16 = _UNK_01456cf9;
        }
        goto LAB_0c69832b;
      }
      cVar4 = func_0x0ee24b80(plVar6,0xf710110);
      if (cVar4 == '\0') {
        cVar4 = func_0x0ee24b80(plVar6,0xf710138);
        if (cVar4 == '\0') {
          cVar4 = func_0x0ee24b80(plVar6,0xf710160);
          if (cVar4 != '\0') {
            if ((*(byte *)(param_1 + 1) & 1) == 0) {
              *(undefined1 *)(param_1 + 1) = 0x2c;
              puVar7 = (undefined4 *)((long)param_1 + 9);
            }
            else {
              param_1[2] = 0x16;
              puVar7 = (undefined4 *)param_1[3];
            }
            uVar15 = _UNK_0148a5de;
            uVar14 = _UNK_0148a5da;
            uVar13 = _UNK_0148a5d6;
            *puVar7 = _DAT_0148a5d2;
            puVar7[1] = uVar13;
            puVar7[2] = uVar14;
            puVar7[3] = uVar15;
            uVar9 = 0x646165645f776f6c;
            goto LAB_0c69821a;
          }
          if ((*(byte *)(param_1 + 1) & 1) == 0) {
            *(undefined1 *)(param_1 + 1) = 0x14;
            puVar8 = (undefined8 *)((long)param_1 + 9);
          }
          else {
            param_1[2] = 10;
            puVar8 = (undefined8 *)param_1[3];
          }
          *puVar8 = 0x726f632e656c6974;
          *(undefined2 *)(puVar8 + 1) = 0x6c61;
          *(undefined1 *)((long)puVar8 + 10) = 0;
        }
        else {
          if ((*(byte *)(param_1 + 1) & 1) == 0) {
            *(undefined1 *)(param_1 + 1) = 0x26;
            puVar7 = (undefined4 *)((long)param_1 + 9);
          }
          else {
            param_1[2] = 0x13;
            puVar7 = (undefined4 *)param_1[3];
          }
          uVar15 = _UNK_0135203b;
          uVar14 = _UNK_01352037;
          uVar13 = _UNK_01352033;
          *puVar7 = _DAT_0135202f;
          puVar7[1] = uVar13;
          puVar7[2] = uVar14;
          puVar7[3] = uVar15;
          *(undefined4 *)((long)puVar7 + 0xf) = 0x64616564;
          *(undefined1 *)((long)puVar7 + 0x13) = 0;
        }
      }
      else {
        if ((*(byte *)(param_1 + 1) & 1) == 0) {
          *(undefined1 *)(param_1 + 1) = 0x2c;
          puVar7 = (undefined4 *)((long)param_1 + 9);
        }
        else {
          param_1[2] = 0x16;
          puVar7 = (undefined4 *)param_1[3];
        }
        uVar15 = _UNK_0148a5c7;
        uVar14 = _UNK_0148a5c3;
        uVar13 = _UNK_0148a5bf;
        *puVar7 = _DAT_0148a5bb;
        puVar7[1] = uVar13;
        puVar7[2] = uVar14;
        puVar7[3] = uVar15;
        uVar9 = 0x646165645f656c70;
LAB_0c69821a:
        *(undefined8 *)((long)puVar7 + 0xe) = uVar9;
        *(undefined1 *)((long)puVar7 + 0x16) = 0;
      }
    }
  }
LAB_0c698339:
  uVar9 = func_0x08ccae40(param_1 + 0x6d);
  uVar3 = *(undefined2 *)((long)param_1 + 0x14e);
  puStack_68 = &UNK_0f3bd238;
  puStack_58 = &UNK_0c698610;
  uStack_50 = 0;
  plStack_60 = param_1;
  ppuStack_48 = &puStack_68;
  func_0x08ccb700(&puStack_78,uVar9,&puStack_68);
  if (ppuStack_48 == &puStack_68) {
    lVar11 = 0x20;
LAB_0c6983ab:
    (**(code **)(*ppuStack_48 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0c6983ab;
  }
  func_0x0c6ed620(uVar9,uVar3,&puStack_78,1);
  if (lStack_70 != 0) {
    plVar6 = (long *)func_0x0412c300();
    plStack_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      puStack_68 = puStack_78;
      if (puStack_78 != (undefined *)0x0) {
        (**(code **)(**(long **)(puStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    if (lStack_70 != 0) {
      func_0x0412c2d0();
    }
  }
  uVar9 = func_0x08cceb60(param_1 + 0x6d);
  uVar3 = *(undefined2 *)((long)param_1 + 0x14e);
  puStack_68 = &UNK_0f3bd2b8;
  puStack_58 = &UNK_0c698860;
  uStack_50 = 0;
  plStack_60 = param_1;
  ppuStack_48 = &puStack_68;
  func_0x08ccf420(&puStack_78,uVar9,&puStack_68);
  if (ppuStack_48 == &puStack_68) {
    lVar11 = 0x20;
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_48 == (undefined **)0x0) goto LAB_0c698498;
  }
  (**(code **)(*ppuStack_48 + lVar11))();
LAB_0c698498:
  func_0x0c6ed620(uVar9,uVar3,&puStack_78,1);
  if (lStack_70 != 0) {
    plVar6 = (long *)func_0x0412c300();
    plStack_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      puStack_68 = puStack_78;
      if (puStack_78 != (undefined *)0x0) {
        (**(code **)(**(long **)(puStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    if (lStack_70 != 0) {
      func_0x0412c2d0();
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x12e81ba  tile.coral.purple
 * 0x135202f  tile.coral.red_dead
 * 0x13effd3  tile.coral.blue_dead
 * 0x14096b0  tile.coral.yellow
 * 0x1456ced  tile.coral.pink_dead
 * 0x148a5bb  tile.coral.purple_dead
 * 0x148a5d2  tile.coral.yellow_dead
 */
