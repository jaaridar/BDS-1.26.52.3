/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f46bb0 (ELF vaddr 0x9e46bb0)
 * Label: caller-of-callee
 * Body:  [[09f46bb0, 09f46dbd] [09f46dc0, 09f46e8e] [09f46e90, 09f46ec5] [09f46ed0, 09f46f17] [09f46f20, 09f47186]]
 * Ghidra: FUN_09f46bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09f46bb0(byte *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  undefined8 uStack_6d8;
  ulong uStack_6d0;
  long lStack_6c8;
  byte bStack_6b8;
  undefined4 uStack_6b7;
  undefined1 uStack_6b3;
  undefined2 uStack_6b2;
  undefined8 uStack_6a8;
  undefined1 auStack_6a0 [16];
  undefined1 auStack_690 [16];
  byte *pbStack_680;
  byte *pbStack_678;
  byte *pbStack_670;
  undefined1 auStack_668 [16];
  undefined1 *puStack_658;
  ulong uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *apuStack_628 [2];
  undefined *puStack_618;
  undefined1 auStack_610 [64];
  long lStack_5d0;
  undefined *apuStack_590 [6];
  undefined8 uStack_560;
  undefined1 *puStack_4f8;
  ulong uStack_4f0;
  undefined1 auStack_438 [1024];
  ulong uStack_38;
  
  param_1[0x18] = 0;
  pbStack_678 = param_1 + 0x20;
  func_0x048f62d0(pbStack_678,*(undefined8 *)(param_1 + 0x28));
  *(byte **)(param_1 + 0x20) = param_1 + 0x28;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar9 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if (uVar9 != 0) {
    pbVar11 = *(byte **)(param_1 + 0x10);
    pbStack_670 = param_1 + 0x28;
    func_0x0eee2dd0(auStack_438,0,0x408);
    uVar6 = 0;
    if (uVar9 < 0x400) {
      if ((bVar1 & 1) == 0) {
        pbVar11 = param_1 + 1;
      }
      func_0x0eee2ee0(auStack_438,pbVar11,uVar9);
      uStack_38 = uVar9;
      auStack_438[uVar9] = 0;
      uVar6 = uStack_38;
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f7b8fb8), iVar3 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    puStack_658 = auStack_438;
    uStack_650 = uVar6;
    cVar2 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_658);
    if (cVar2 != '\0') {
      param_1[0x18] = 1;
      uStack_560 = 0;
      apuStack_590[0] = &UNK_0eeed250;
      uStack_4f0 = uStack_38;
      puStack_4f8 = auStack_438;
      func_0x0ee5df20(apuStack_628,&UNK_0ef44650,&puStack_4f8,8);
      apuStack_628[0] = &UNK_0ef445e8;
      apuStack_590[0] = &UNK_0ef44638;
      puStack_618 = &UNK_0ef44610;
      if (lStack_5d0 == 0) {
        func_0x0eede920(0,1,0,0xc,8,&UNK_012484d6,0x39,&UNK_012124e4,auStack_438);
      }
      else {
        func_0x04863060(auStack_690,0);
        func_0x0485e1c0(&puStack_4f8);
        cVar2 = func_0x0485e6a0(&puStack_4f8,apuStack_628,auStack_690,0);
        if (cVar2 == '\0') {
          func_0x0eede920(0,1,0,0xc,8,&UNK_012484d6,0x40,&UNK_014b88fb,auStack_438);
        }
        else {
          func_0x04865630(auStack_6a0,auStack_690);
          func_0x048656b0(auStack_668,auStack_690);
          pbStack_680 = param_1;
          while( true ) {
            cVar2 = func_0x04862c80(auStack_6a0,auStack_668);
            if (cVar2 != '\0') break;
            uVar4 = func_0x04862b80(auStack_6a0);
            bStack_6b8 = 8;
            uStack_6b7 = 0x64697578;
            uStack_6b3 = 0;
            uStack_648 = 0;
            uStack_640 = 0;
            uStack_638 = 0;
            cVar2 = func_0x04864290(uVar4);
            puVar8 = &DAT_0f54fc40;
            if (cVar2 != '\0') {
              cVar2 = func_0x04865190(uVar4,&bStack_6b8);
              puVar8 = &DAT_0f54fc40;
              if (cVar2 != '\0') {
                puVar8 = (undefined *)func_0x04864990(uVar4,&bStack_6b8);
              }
            }
            func_0x0b63d6f0(&uStack_6d8,puVar8,(long)&uStack_648 + 1,0);
            if ((bStack_6b8 & 1) != 0) {
              func_0x0412a280(uStack_6a8,
                              CONCAT26(uStack_6b2,
                                       CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,bStack_6b8))) &
                              0xfffffffffffffffe);
            }
            uVar9 = uStack_6d8 & 1;
            uVar6 = uStack_6d0;
            if ((uStack_6d8 & 1) == 0) {
              uVar6 = (ulong)((byte)uStack_6d8 >> 1);
            }
            if (uVar6 != 0) {
              pbVar11 = *(byte **)pbStack_670;
              pbVar13 = pbStack_670;
              pbVar14 = pbStack_670;
              if (pbVar11 != (byte *)0x0) {
                lVar10 = (long)&uStack_6d8 + 1;
                if ((uStack_6d8 & 1) != 0) {
                  lVar10 = lStack_6c8;
                }
                do {
                  while( true ) {
                    pbVar13 = pbVar11;
                    bVar15 = (pbVar13[0x20] & 1) != 0;
                    pbVar11 = pbVar13 + 0x21;
                    if (bVar15) {
                      pbVar11 = *(byte **)(pbVar13 + 0x30);
                    }
                    uVar12 = (ulong)(pbVar13[0x20] >> 1);
                    if (bVar15) {
                      uVar12 = *(ulong *)(pbVar13 + 0x28);
                    }
                    uVar7 = uVar6;
                    if (uVar12 < uVar6) {
                      uVar7 = uVar12;
                    }
                    iVar3 = func_0x0eee2ff0(lVar10,pbVar11,uVar7);
                    if (iVar3 != 0) break;
                    if (uVar12 <= uVar6) goto LAB_09f46f25;
LAB_09f46ed0:
                    pbVar11 = *(byte **)pbVar13;
                    pbVar14 = pbVar13;
                    if (*(byte **)pbVar13 == (byte *)0x0) goto LAB_09f46f54;
                  }
                  if (iVar3 < 0) goto LAB_09f46ed0;
LAB_09f46f25:
                  iVar3 = func_0x0eee2ff0(pbVar11,lVar10,uVar7);
                  if (iVar3 == 0) {
                    if (uVar6 <= uVar12) goto LAB_09f47004;
                  }
                  else if (-1 < iVar3) {
LAB_09f47004:
                    if (uVar9 == 0) goto LAB_09f46dc0;
                    goto LAB_09f46fec;
                  }
                  pbVar11 = *(byte **)(pbVar13 + 8);
                } while (*(byte **)(pbVar13 + 8) != (byte *)0x0);
                pbVar14 = pbVar13 + 8;
              }
LAB_09f46f54:
              puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
              if (puVar5 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x38,0);
              }
              pbVar11 = pbStack_680;
              puVar5[6] = lStack_6c8;
              puVar5[4] = uStack_6d8;
              puVar5[5] = uStack_6d0;
              uStack_6d8 = 0;
              uStack_6d0 = 0;
              lStack_6c8 = 0;
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = pbVar13;
              *(undefined8 **)pbVar14 = puVar5;
              if (**(long **)pbStack_678 != 0) {
                *(long *)pbStack_678 = **(long **)pbStack_678;
              }
              func_0x048bed00(*(undefined8 *)(pbStack_680 + 0x28),puVar5);
              *(long *)(pbVar11 + 0x30) = *(long *)(pbVar11 + 0x30) + 1;
            }
            if (((byte)uStack_6d8 & 1) != 0) {
LAB_09f46fec:
              func_0x0412a280(lStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
            }
LAB_09f46dc0:
            func_0x04862ba0(auStack_6a0);
          }
          func_0x04862b40(auStack_668);
          func_0x04862b40(auStack_6a0);
        }
        func_0x0485e2d0(&puStack_4f8);
        func_0x04863610(auStack_690);
      }
      apuStack_628[0] = &UNK_0ef446c8;
      apuStack_590[0] = &UNK_0ef44718;
      puStack_618 = &UNK_0ef446f0;
      func_0x0ee5c730(auStack_610);
      func_0x0413c8a0(apuStack_628,&UNK_0ef44658);
      func_0x04138180(apuStack_590);
    }
  }
  return;
}


