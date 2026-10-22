/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeedeb80 (ELF vaddr 0xeddeb80)
 * Label: callee-of:0x6142da0
 * Body:  [[0eedeb80, 0eedf0a3]]
 * Ghidra: FUN_0eedeb80
 */


/* WARNING: Possible PIC construction at 0x0eededa5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0eededaa) */
/* WARNING: Removing unreachable block (ram,0x0eededb0) */
/* WARNING: Removing unreachable block (ram,0x0eededc2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eedeb80(ulong param_1,uint param_2,undefined8 ****param_3,undefined8 ****param_4,
                 undefined8 ****param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  byte *pbVar9;
  byte *extraout_RDX;
  byte *pbVar10;
  undefined8 *puVar11;
  ushort uVar12;
  ulong uVar13;
  undefined8 ****ppppuVar14;
  undefined8 **ppuVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined8 *****pppppuVar18;
  bool bVar19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  uint uStack_7c;
  undefined1 uStack_78;
  byte bStack_70;
  undefined8 ***pppuStack_60;
  undefined8 ****ppppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  ulong uStack_38;
  
  pbVar10 = (byte *)&uStack_b8;
  puVar11 = &uStack_b8;
  uVar6 = (ulong)param_2;
  pppppuVar18 = &ppppuStack_58;
  uStack_c0 = 0xeedebaf;
  ppppuVar8 = param_4;
  ppppuVar14 = param_3;
  func_0x0eede540(pppppuVar18);
  uStack_b8 = param_4;
  uStack_b0 = pppppuVar18;
  pppuStack_a8 = param_5;
  uStack_38 = param_1;
  if (param_1 >> 0x20 == 0xffffffff) {
    uStack_c0 = 0xeededd9;
    param_2 = (uint)ppppuVar14;
    uVar6 = FUN_04931450();
    if ((bStack_70 == 1) && (((ulong)ppuStack_98 & 1) != 0)) {
      param_2 = (uint)ppuStack_98 & 0xfffffffe;
      uStack_c0 = 0xeededfd;
      func_0x0412a280(ppuStack_88);
      uStack_c0 = 0xeedee05;
      uVar7 = func_0x04882e20(uVar6);
      uStack_c0 = 0xeedee0d;
      uVar6 = func_0x04882e20(uVar7);
    }
    uStack_c0 = 0xeedee18;
    uVar2 = func_0x04882e20(uVar6);
    uStack_c0 = 0xeedee20;
    func_0x04882e20();
    uVar13 = 0xffffffff;
    pbVar10 = extraout_RDX;
    goto SUB_0eedee20;
  }
  uStack_c0 = 0xeedebf9;
  pppuStack_60 = (undefined8 ***)&uStack_b8;
  uVar2 = (**(code **)(&UNK_0f53c578 + (param_1 >> 0x20) * 8))(&pppuStack_60,&uStack_38);
  uVar13 = (ulong)uVar2;
  if (((ulong)ppppuStack_58 & 1) != 0) {
    uStack_c0 = 0xeedec15;
    func_0x0412a280(uStack_48,(ulong)ppppuStack_58 & 0xfffffffffffffffe);
  }
  pppuVar5 = param_4[1];
  pppuVar4 = (undefined8 ***)(ulong)(*(byte *)param_4 >> 1);
  if ((*(byte *)param_4 & 1) != 0) {
    pppuVar4 = pppuVar5;
  }
  if (pppuVar4 == (undefined8 ***)0x0) {
    uStack_b8 = (undefined8 ****)*param_5;
    uStack_b0 = (undefined8 *****)param_5[1];
    pppuStack_a8 = param_5[2];
    uStack_a0 = *(undefined4 *)(param_5 + 3);
    uStack_9c = *(undefined4 *)((long)param_5 + 0x1c);
    ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffffffffff00);
    bStack_70 = 0;
    bVar19 = false;
    pppuVar4 = param_3[3];
    if (param_3[4] <= pppuVar4) goto LAB_0eeded34;
LAB_0eedec9d:
    pppuVar4[2] = pppuStack_a8;
    pppuVar4[3] = (undefined8 **)CONCAT44(uStack_9c,uStack_a0);
    *(undefined4 *)pppuVar4 = (undefined4)uStack_b8;
    *(undefined4 *)((long)pppuVar4 + 4) = uStack_b8._4_4_;
    *(undefined4 *)(pppuVar4 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((long)pppuVar4 + 0xc) = uStack_b0._4_4_;
    *(undefined1 *)(pppuVar4 + 4) = 0;
    *(undefined1 *)(pppuVar4 + 9) = 0;
    if (bVar19) {
      pppuVar4[6] = ppuStack_88;
      pppuVar4[4] = ppuStack_98;
      pppuVar4[5] = ppuStack_90;
      ppuStack_98 = (undefined8 ***)0x0;
      ppuStack_90 = (undefined8 ***)0x0;
      ppuStack_88 = (undefined8 ***)0x0;
      *(undefined1 *)(pppuVar4 + 8) = uStack_78;
      pppuVar4[7] = (undefined8 **)
                    CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)));
      *(undefined1 *)(pppuVar4 + 9) = 1;
    }
    param_3[3] = pppuVar4 + 10;
    if (bVar19) {
LAB_0eeded4d:
      if (((ulong)ppuStack_98 & 1) != 0) {
        uStack_c0 = 0xeeded67;
        func_0x0412a280(ppuStack_88,(ulong)ppuStack_98 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    ppuStack_98 = *param_4;
    ppuStack_88 = param_4[2];
    *param_4 = (undefined8 ***)0x0;
    param_4[1] = (undefined8 ***)0x0;
    param_4[2] = (undefined8 ***)0x0;
    uStack_b8 = (undefined8 ****)*param_5;
    uStack_b0 = (undefined8 *****)param_5[1];
    pppuStack_a8 = param_5[2];
    uStack_a0 = *(undefined4 *)(param_5 + 3);
    uStack_9c = *(undefined4 *)((long)param_5 + 0x1c);
    uStack_80 = (undefined2)uVar2;
    uStack_7e = 1;
    uStack_78 = 1;
    bStack_70 = 1;
    bVar19 = true;
    pppuVar4 = param_3[3];
    ppuStack_90 = pppuVar5;
    uStack_7c = param_2;
    if (pppuVar4 < param_3[4]) goto LAB_0eedec9d;
LAB_0eeded34:
    uStack_c0 = 0xeeded3f;
    pppuVar5 = (undefined8 ***)func_0x0489d2c0(param_3 + 2,&uStack_b8);
    param_3[3] = pppuVar5;
    if ((bStack_70 & 1) != 0) goto LAB_0eeded4d;
  }
  ppppuVar8 = param_3 + 2;
  puStack_50 = &UNK_0eee2430;
  uStack_c0 = 0xeeded9b;
  pppuStack_60 = param_3;
  ppppuStack_58 = &pppuStack_60;
  func_0x0470d9a0(&uStack_b8,&UNK_012063a8,2,0xf,&ppppuStack_58);
  puVar11 = &uStack_c0;
  uStack_c0 = 0xeededaa;
  param_5 = ppppuVar8;
  pppppuVar18 = (undefined8 *****)&pppuStack_60;
SUB_0eedee20:
  *(ulong *)((long)puVar11 + -8) = uVar13;
  *(undefined8 ******)((long)puVar11 + -0x10) = pppppuVar18;
  *(undefined8 *****)((long)puVar11 + -0x18) = param_3;
  *(undefined8 *****)((long)puVar11 + -0x20) = param_4;
  *(undefined8 *****)((long)puVar11 + -0x28) = param_5;
  *(ulong *)((long)puVar11 + -0x30) = uVar6;
  *(uint *)((long)puVar11 + -0x74) = param_2;
  *(uint *)((long)puVar11 + -0x78) = uVar2;
  pppuVar5 = *ppppuVar8;
  pppuVar4 = ppppuVar8[1];
  do {
    if (pppuVar5 == pppuVar4) {
      bVar19 = (*pbVar10 & 1) != 0;
      pbVar9 = pbVar10 + 1;
      if (bVar19) {
        pbVar9 = *(byte **)(pbVar10 + 0x10);
      }
      uVar6 = (ulong)(*pbVar10 >> 1);
      if (bVar19) {
        uVar6 = *(ulong *)(pbVar10 + 8);
      }
      *(byte **)((long)puVar11 + -0x58) = pbVar9;
      *(ulong *)((long)puVar11 + -0x50) = uVar6;
      *(undefined8 *****)((long)puVar11 + -0x48) = ppppuVar8;
      *(undefined **)((long)puVar11 + -0x40) = &UNK_0eee2580;
      *(undefined8 *)((long)puVar11 + -0x90) = 0xeedefad;
      func_0x0470d9a0((undefined1 *)((long)puVar11 + -0x70),&UNK_013731d8,0x17,0xfd,
                      (undefined1 *)((long)puVar11 + -0x58));
      uVar17 = *(undefined4 *)((long)puVar11 + -0x74);
      uVar2 = *(uint *)((long)puVar11 + -0x78);
      if (DAT_0f7ba110 == '\0') {
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf067;
        iVar3 = func_0x04108328(&DAT_0f7ba110);
        if (iVar3 != 0) {
          _DAT_0f7ba0d0 = 0;
          uRam000000000f7ba0d8 = 0;
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf093;
          func_0x0eee2f40(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf09f;
          func_0x0410844d(&DAT_0f7ba110);
        }
      }
      if (_DAT_0f7ba0d0 != 0) {
        *(short *)((long)puVar11 + -0x7a) = (short)uVar2;
        *(undefined4 *)((long)puVar11 + -0x58) = uVar17;
        pcVar1 = *(code **)(_DAT_0f7ba0d0 + 0x10);
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedeff2;
        (*pcVar1)(&DAT_0f7ba0d0,(undefined1 *)((long)puVar11 + -0x7a),
                  (undefined1 *)((long)puVar11 + -0x58),(undefined1 *)((long)puVar11 + -0x70));
      }
      if ((uVar2 & 0x100) != 0) {
        if ((*(byte *)((long)puVar11 + -0x70) & 1) == 0) {
          puVar16 = (undefined1 *)((long)puVar11 + -0x6f);
        }
        else {
          puVar16 = *(undefined1 **)((long)puVar11 + -0x60);
        }
        *(undefined1 **)((long)puVar11 + -0x90) = puVar16;
        *(undefined8 *)((long)puVar11 + -0x98) = 0x5e;
        *(undefined8 *)((long)puVar11 + -0xa0) = 0xeedf02e;
        func_0x0eede920(0,1,0,uVar17,uVar2 & 0xff,&UNK_013c1f41);
      }
      if ((*(byte *)((long)puVar11 + -0x70) & 1) != 0) {
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf04c;
        func_0x0412a280(*(undefined8 *)((long)puVar11 + -0x60),
                        *(ulong *)((long)puVar11 + -0x70) & 0xfffffffffffffffe);
      }
      return;
    }
    if (*(char *)(pppuVar5 + 9) == '\x01') {
      if (*(char *)((long)pppuVar5 + 0x3a) == '\0') {
        if (((ulong)pppuVar5[8] & 1) == 0) goto LAB_0eedee70;
        uVar17 = *(undefined4 *)((long)pppuVar5 + 0x3c);
        uVar12 = 2;
      }
      else {
        uVar17 = 0x2d;
        if (((ulong)pppuVar5[8] & 1) != 0) {
          uVar17 = *(undefined4 *)((long)pppuVar5 + 0x3c);
        }
        uVar12 = *(ushort *)(pppuVar5 + 7);
      }
      if (DAT_0f7ba110 == '\0') {
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedef21;
        iVar3 = func_0x04108328(&DAT_0f7ba110);
        if (iVar3 != 0) {
          _DAT_0f7ba0d0 = 0;
          uRam000000000f7ba0d8 = 0;
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedef49;
          func_0x0eee2f40(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedef55;
          func_0x0410844d(&DAT_0f7ba110);
        }
      }
      if (_DAT_0f7ba0d0 != 0) {
        *(ushort *)((long)puVar11 + -0x70) = uVar12;
        *(undefined4 *)((long)puVar11 + -0x58) = uVar17;
        pcVar1 = *(code **)(_DAT_0f7ba0d0 + 0x10);
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedeef5;
        (*pcVar1)(&DAT_0f7ba0d0,(undefined1 *)((long)puVar11 + -0x70),
                  (undefined1 *)((long)puVar11 + -0x58),pppuVar5 + 4);
      }
      if ((uVar12 & 0x100) != 0) {
        if (((ulong)pppuVar5[4] & 1) == 0) {
          ppuVar15 = (undefined8 **)((long)pppuVar5 + 0x21);
        }
        else {
          ppuVar15 = pppuVar5[6];
        }
        *(undefined8 ***)((long)puVar11 + -0x90) = ppuVar15;
        *(undefined8 *)((long)puVar11 + -0x98) = 0x5e;
        *(undefined8 *)((long)puVar11 + -0xa0) = 0xeedee6b;
        func_0x0eede920(0,1,0,uVar17,(char)uVar12,&UNK_013c1f41);
      }
    }
LAB_0eedee70:
    pppuVar5 = pppuVar5 + 10;
  } while( true );
}


