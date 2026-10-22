/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a89bb0 (ELF vaddr 0x9989bb0)
 * Label: caller-of-callee
 * Body:  [[09a89bb0, 09a89c52] [09a89c60, 09a89cf7] [09a89d00, 09a89d88] [09a89d90, 09a8a0fd] [09a8a100, 09a8a447] [09a8a450, 09a8a4ad] [09a8a4b0, 09a8aa82] [09a8aa90, 09a8aafa] [09a8ab00, 09a8ab64] [09a8ab70, 09a8ae88] [09a8ae90, 09a8aeec] [09a8aef0, 09a8b014] [09a8b020, 09a8b064] [09a8b070, 09a8b37b] [09a8b380, 09a8b397] [09a8b3a0, 09a8b7de] [09a8b7e0, 09a8b8cd] [09a8b8d0, 09a8b962] [09a8b970, 09a8b9ba] [09a8b9c0, 09a8be06] [09a8be10, 09a8be27] [09a8be30, 09a8c490] [09a8c4a0, 09a8c4cb] [09a8c4d0, 09a8c7a3] [09a8c7b0, 09a8c7ed] [09a8c7f0, 09a8ca89] [09a8ca90, 09a8cac6] [09a8cad0, 09a8cb76] [09a8cb80, 09a8cd73] [09a8cd80, 09a8cd9b] [09a8cda0, 09a8d046] [09a8d050, 09a8d09e] [09a8d0a0, 09a8d152] [09a8d160, 09a8d4a0] [09a8d4b0, 09a8d67a] [09a8d680, 09a8d69a] [09a8d6a0, 09a8da6e] [09a8da79, 09a8da87] [09a8e55e, 09a8e5ab]]
 * Ghidra: FUN_09a89bb0
 */


/* WARNING: Removing unreachable block (ram,0x09a8ba99) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09a89bb0(undefined8 *param_1,long param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6,undefined8 *param_7)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar6;
  ulong *****pppppuVar7;
  ulong *puVar8;
  undefined1 (*pauVar9) [16];
  code *pcVar10;
  undefined1 auVar11 [8];
  char cVar12;
  int iVar13;
  long *plVar14;
  ulong *******pppppppuVar15;
  long lVar16;
  ulong *puVar17;
  ulong *****pppppuVar18;
  long lVar19;
  uint *puVar20;
  ulong *******pppppppuVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong *******pppppppuVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  long lVar28;
  undefined1 auVar29 [8];
  ulong uVar30;
  ulong *******pppppppuVar31;
  ulong uVar32;
  ulong *******pppppppuVar33;
  ulong ******ppppppuVar34;
  ulong ******ppppppuVar35;
  ulong uVar36;
  undefined8 *puVar37;
  ulong *puVar38;
  ulong *******pppppppuVar39;
  undefined1 (*pauVar40) [16];
  bool bVar41;
  undefined1 auVar42 [4];
  undefined4 uVar43;
  uint uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [4];
  undefined4 uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulong *******pppppppuStack_b30;
  ulong *******pppppppuStack_b20;
  undefined1 auStack_b18 [4];
  undefined4 uStack_b14;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  ulong *******pppppppuStack_b00;
  ulong *******pppppppuStack_af8;
  ulong uStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  undefined1 auStack_ad8 [4];
  uint uStack_ad4;
  undefined1 auStack_ad0 [4];
  uint uStack_acc;
  ulong *******pppppppuStack_ac8;
  undefined1 auStack_ac0 [12];
  uint uStack_ab4;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  ulong *******pppppppuStack_a98;
  short sStack_a90;
  char cStack_a7a;
  byte bStack_a79;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  ulong *******pppppppuStack_a68;
  ulong *******pppppppuStack_a60;
  ulong *******pppppppuStack_a58;
  undefined1 auStack_a48 [8];
  ulong *******pppppppuStack_a40;
  ulong *******pppppppuStack_a38;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  ulong *******pppppppuStack_a18;
  undefined1 auStack_a08 [8];
  ulong *******pppppppuStack_a00;
  ulong *******pppppppuStack_9f8;
  ulong *******pppppppuStack_9f0;
  undefined1 auStack_9e8 [4];
  undefined4 uStack_9e4;
  undefined8 uStack_9e0;
  ulong *******pppppppuStack_9d8;
  ulong ******ppppppuStack_9d0;
  undefined1 auStack_9c8 [4];
  uint uStack_9c4;
  uint uStack_9c0;
  uint uStack_9bc;
  ulong *******pppppppuStack_9b8;
  undefined1 auStack_9a8 [4];
  uint uStack_9a4;
  uint uStack_9a0;
  uint uStack_99c;
  ulong *******pppppppuStack_998;
  int iStack_98c;
  long *plStack_988;
  ulong *******pppppppuStack_980;
  ulong ******ppppppuStack_978;
  ulong ******ppppppuStack_970;
  ulong ******ppppppuStack_968;
  ulong *****pppppuStack_960;
  ulong *****pppppuStack_958;
  undefined4 uStack_950;
  undefined2 uStack_94c;
  ulong uStack_948;
  undefined2 uStack_940;
  undefined6 uStack_93e;
  undefined2 uStack_938;
  undefined6 uStack_936;
  undefined2 uStack_930;
  byte bStack_928;
  undefined1 auStack_927 [15];
  ulong *******pppppppuStack_918;
  long *plStack_910;
  long *plStack_908;
  ulong *******pppppppuStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  ulong *******pppppppuStack_8e8;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  ulong ******ppppppuStack_8c8;
  ulong ******ppppppuStack_8c0;
  ulong ******ppppppuStack_8b8;
  byte bStack_8b0;
  long *plStack_8a0;
  ulong *******pppppppuStack_898;
  ulong *******pppppppuStack_890;
  long *plStack_888;
  long *plStack_880;
  long *plStack_878;
  ulong ******ppppppuStack_870;
  undefined1 auStack_868 [4];
  uint uStack_864;
  uint uStack_860;
  uint uStack_85c;
  undefined8 uStack_858;
  undefined1 auStack_850 [12];
  undefined4 uStack_844;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  ulong ******ppppppuStack_828;
  undefined2 uStack_820;
  uint uStack_818;
  ulong *******pppppppuStack_458;
  ulong uStack_450;
  ulong *******pppppppuStack_448;
  ulong *******pppppppuStack_440;
  undefined1 auStack_438 [4];
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  ulong *******pppppppuStack_428;
  
  if (param_7[4] == 0) {
    *param_7 = &UNK_0f1d1cd8;
    param_7[4] = param_7;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plStack_908 = param_5;
  plStack_878 = param_4;
  plVar14 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
  plStack_988 = (long *)*plVar14;
  plStack_888 = (long *)plVar14[1];
  lStack_ae0 = param_2;
  plStack_880 = param_6;
  if (plStack_988 != plStack_888) {
    do {
      pppppppuVar15 = (ulong *******)(**(code **)(*(long *)*plStack_988 + 0x10))();
      ppppppuVar34 = pppppppuVar15[0x37];
      ppppppuStack_870 = pppppppuVar15[0x38];
      if (ppppppuVar34 != ppppppuStack_870) {
        pppppppuStack_980 = pppppppuVar15 + 0x1f;
        pppppppuStack_900 = pppppppuVar15 + 0x25;
        pppppppuStack_890 = pppppppuVar15 + 0x47;
        pppppppuStack_898 = pppppppuVar15 + 0x33;
        iStack_98c = 0;
LAB_09a89d21:
        ppppppuStack_9d0 = ppppppuVar34;
        if (*(int *)(ppppppuVar34 + 8) == 3) {
          if (DAT_0f5ea4a0 == '\0') {
            iVar13 = FUN_04108328(&DAT_0f5ea4a0);
            if (iVar13 != 0) {
              func_0x08b670e0(&DAT_0f5ea138);
              __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
              func_0x0410844d(&DAT_0f5ea4a0);
            }
          }
          cVar12 = (**(code **)(_DAT_0f5ea138 + 0xe8))(&DAT_0f5ea138,pppppppuStack_980);
          if (cVar12 == '\0') {
            if (((ulong)*pppppppuStack_980 & 1) == 0) {
              ppppppuStack_968 = pppppppuStack_980[2];
              ppppppuStack_978 = *pppppppuStack_980;
              ppppppuStack_970 = pppppppuStack_980[1];
            }
            else {
              func_0x0412e5e0(&ppppppuStack_978,pppppppuVar15[0x21],pppppppuVar15[0x20]);
            }
          }
          else {
            (**(code **)(_DAT_0f5ea138 + 0x98))
                      (&ppppppuStack_978,&DAT_0f5ea138,pppppppuVar15,pppppppuStack_980);
          }
          pppppuStack_960 = ppppppuStack_9d0[6];
          pppppuStack_958 = ppppppuStack_9d0[7];
          uStack_94c = *(undefined2 *)((long)ppppppuStack_9d0 + 0x1c);
          uStack_950 = *(undefined4 *)(ppppppuStack_9d0 + 3);
          uStack_938 = 0;
          uStack_936 = 0;
          uStack_930 = 0;
          uStack_948 = 0;
          uStack_940 = 0;
          uStack_93e = 0;
          uStack_8d8 = *(undefined4 *)pppppppuStack_900;
          uStack_8d4 = *(undefined4 *)((long)pppppppuStack_900 + 4);
          uStack_8d0 = *(undefined4 *)(pppppppuStack_900 + 1);
          uStack_8cc = *(undefined4 *)((long)pppppppuStack_900 + 0xc);
          ppppppuStack_8c8 = pppppppuVar15[0x27];
          ppppppuVar34 = pppppppuVar15[0x28];
          if (((ulong)ppppppuVar34 & 0x80000000000000) != 0) {
            lVar28 = *(long *)(((ulong)ppppppuVar34 & 0xff00ffffffffffff) - 8);
            lVar19 = lVar28 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
            if (lVar19 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar19,8);
            }
            *plVar14 = lVar28;
            func_0x0eee2f00(plVar14 + 1,(ulong)ppppppuVar34 & 0xff00ffffffffffff,lVar28);
            *(undefined1 *)((long)plVar14 + lVar28 + 8) = 0;
            ppppppuVar34 = (ulong ******)
                           ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          ppppppuStack_8b8 = (ulong ******)0x0;
          ppppppuVar35 = pppppppuVar15[0x29];
          ppppppuStack_8c0 = ppppppuVar34;
          if (((ulong)ppppppuVar35 & 0x80000000000000) != 0) {
            lVar28 = *(long *)(((ulong)ppppppuVar35 & 0xff00ffffffffffff) - 8);
            lVar19 = lVar28 + 9;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
            if (lVar19 != 0 && plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar19,8);
            }
            *plVar14 = lVar28;
            func_0x0eee2f00(plVar14 + 1,(ulong)ppppppuVar35 & 0xff00ffffffffffff,lVar28);
            *(undefined1 *)((long)plVar14 + lVar28 + 8) = 0;
            ppppppuVar35 = (ulong ******)
                           ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          bStack_8b0 = *(byte *)(pppppppuVar15 + 0x2a);
          ppppppuStack_8b8 = ppppppuVar35;
          lStack_ae8 = func_0x09a8e5b0(param_1,&uStack_8d8,&ppppppuStack_978);
          if (((ulong)ppppppuStack_8b8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_8b8 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_8b8 = (ulong ******)0x0;
          if (((ulong)ppppppuStack_8c0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppppuStack_8c0 & 0xff00ffffffffffff) - 8);
          }
          ppppppuStack_8c0 = (ulong ******)0x0;
          if (iStack_98c < 1) {
            plVar14 = *(long **)(param_2 + 0x28);
            plVar24 = *(long **)(param_2 + 0x30);
            if (plVar14 != plVar24) {
              ppppppuVar34 = ppppppuStack_9d0 + 3;
              do {
                lVar19 = *plVar14;
                if ((*(ulong ******)(lVar19 + 0x38) == pppppuStack_960) &&
                   (*(ulong ******)(lVar19 + 0x40) == pppppuStack_958)) {
                  cVar12 = func_0x0d81aa50(lVar19 + 0x48,&uStack_950);
                  if (cVar12 != '\0') {
                    func_0x0d81cb10(auStack_ad8,&ppppppuStack_978);
                    pppppuVar18 = ppppppuStack_9d0[6];
                    pppppuVar7 = ppppppuStack_9d0[7];
                    uStack_818 = (uint)pppppuVar7 & 0xffff;
                    auStack_868 = SUB84((ulong)pppppuVar18 >> 0x20,0);
                    uStack_858 = (ulong *******)
                                 (CONCAT44(uStack_858._4_4_,(int)((ulong)pppppuVar18 >> 0x10)) &
                                 0xffffffff0000ffff);
                    stack0xfffffffffffff7b8 =
                         (ulong *******)(CONCAT44(uStack_844,(int)pppppuVar18) & 0xffffffff0000ffff)
                    ;
                    uStack_838 = CONCAT44(uStack_838._4_4_,(uint)(ushort)((ulong)pppppuVar7 >> 0x30)
                                         );
                    ppppppuStack_828 =
                         (ulong ******)
                         CONCAT44(ppppppuStack_828._4_4_,(int)((ulong)pppppuVar7 >> 0x10));
                    func_0x0470d9a0(auStack_b18,&UNK_01287ba2,0x28,0x122112,auStack_868);
                    func_0x0ee34300(auStack_a08,ppppppuVar34);
                    pppppppuVar33 = pppppppuStack_ac8;
                    pppppppuVar25 = _auStack_ad0;
                    if (((ulong)_auStack_ad8 & 1) == 0) {
                      pppppppuVar33 = (ulong *******)(auStack_ad8 + 1);
                      pppppppuVar25 = (ulong *******)((ulong)_auStack_ad8 >> 1 & 0x7f);
                    }
                    auStack_868 = SUB84(pppppppuVar33,0);
                    uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
                    uStack_860 = (uint)pppppppuVar25;
                    uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
                    uStack_858 = uStack_b08;
                    auStack_850._0_8_ = uStack_b10;
                    if (((ulong)_auStack_b18 & 1) == 0) {
                      uStack_858 = (ulong *******)(auStack_b18 + 1);
                      auStack_850._0_8_ = (ulong *******)((ulong)_auStack_b18 >> 1 & 0x7f);
                    }
                    unique0x1000f20c = pppppppuStack_9f8;
                    uStack_840 = pppppppuStack_a00;
                    if (((ulong)auStack_a08 & 1) == 0) {
                      unique0x1000f204 = (ulong *******)(auStack_a08 + 1);
                      uStack_840 = (ulong *******)((ulong)auStack_a08 >> 1 & 0x7f);
                    }
                    func_0x0470d9a0(auStack_438,&UNK_0140202e,0x4a,0xddd,auStack_868);
                    if (((uint)auStack_438 & 1) == 0) {
                      uStack_858 = pppppppuStack_428;
                      auStack_868 = auStack_438;
                      uStack_864 = uStack_434;
                      uStack_860 = uStack_430;
                      uStack_85c = uStack_42c;
                    }
                    else {
                      func_0x0412e5e0(auStack_868,pppppppuStack_428,CONCAT44(uStack_42c,uStack_430))
                      ;
                    }
                    lVar19 = lStack_ae8;
                    puVar20 = *(uint **)(lStack_ae8 + 0xa0);
                    if (puVar20 < *(uint **)(lStack_ae8 + 0xa8)) {
                      *(ulong ********)(puVar20 + 4) = uStack_858;
                      *puVar20 = (uint)auStack_868;
                      puVar20[1] = uStack_864;
                      puVar20[2] = uStack_860;
                      puVar20[3] = uStack_85c;
                      *(uint **)(lStack_ae8 + 0xa0) = puVar20 + 6;
                    }
                    else {
                      uVar26 = func_0x09ab40b0(lStack_ae8 + 0x98,auStack_868);
                      *(undefined8 *)(lVar19 + 0xa0) = uVar26;
                      if (((uint)auStack_868 & 1) != 0) {
                        func_0x0412a280(uStack_858,
                                        CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
                      }
                    }
                    if (((uint)auStack_438 & 1) != 0) {
                      func_0x0412a280(pppppppuStack_428,
                                      CONCAT44(uStack_434,auStack_438) & 0xfffffffffffffffe);
                    }
                    if (((ulong)auStack_a08 & 1) == 0) {
                      pppppppuVar25 = _auStack_b18;
                      pppppppuVar33 = uStack_b08;
                    }
                    else {
                      func_0x0412a280(pppppppuStack_9f8,(ulong)auStack_a08 & 0xfffffffffffffffe);
                      pppppppuVar25 = _auStack_b18;
                      pppppppuVar33 = uStack_b08;
                    }
                    _auStack_b18 = pppppppuVar25;
                    uStack_b08 = pppppppuVar33;
                    if (((ulong)pppppppuVar25 & 1) != 0) goto LAB_09a8a65f;
                    goto LAB_09a8a668;
                  }
                }
                plVar14 = plVar14 + 1;
              } while (plVar14 != plVar24);
            }
            plVar14 = plStack_908;
            if (plStack_908 == plStack_880) {
LAB_09a8a4c8:
              if (plVar14 != plStack_880) {
                func_0x0d81cb10(auStack_438,&ppppppuStack_978);
                _auStack_ad0 = (ulong *******)CONCAT44(uStack_42c,uStack_430);
                _auStack_ad8 = pppppppuStack_428;
                if (((uint)auStack_438 & 1) == 0) {
                  _auStack_ad8 = (ulong *******)(auStack_438 + 1);
                  _auStack_ad0 = (ulong *******)(ulong)(auStack_438[0] >> 1);
                }
                func_0x0470d9a0(auStack_868,&UNK_0138000d,0x20,0xd,auStack_ad8);
                func_0x09a8f3f0(lStack_ae8,auStack_868);
                if (((uint)auStack_868 & 1) != 0) {
                  func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
                }
                if (((uint)auStack_438 & 1) != 0) {
                  pppppppuVar25 = (ulong *******)CONCAT44(uStack_434,auStack_438);
                  pppppppuVar33 = pppppppuStack_428;
                  goto LAB_09a8a67c;
                }
                goto LAB_09a8a685;
              }
            }
            else {
              do {
                if (((ulong *****)*plVar14 == pppppuStack_960) &&
                   ((ulong *****)plVar14[1] == pppppuStack_958)) goto LAB_09a8a4c8;
                plVar14 = plVar14 + 2;
              } while (plVar14 != plStack_880);
            }
            if ((*(byte *)(ppppppuStack_9d0 + 9) & 1) == 0) {
              pppppuVar18 = (ulong *****)(ulong)(*(byte *)(ppppppuStack_9d0 + 9) >> 1);
            }
            else {
              pppppuVar18 = ppppppuStack_9d0[10];
            }
            ppppppuVar34 = ppppppuStack_9d0 + 9;
            if (pppppuVar18 == (ulong *****)0x0) {
              ppppppuVar34 = (ulong ******)&DAT_01a150d8;
            }
            if (((ulong)*ppppppuVar34 & 1) == 0) {
              uStack_858 = (ulong *******)ppppppuVar34[2];
              auStack_868 = *(undefined1 (*) [4])ppppppuVar34;
              uStack_864 = *(uint *)((long)ppppppuVar34 + 4);
              uStack_860 = *(uint *)(ppppppuVar34 + 1);
              uStack_85c = *(uint *)((long)ppppppuVar34 + 0xc);
            }
            else {
              func_0x0412e5e0(auStack_868,ppppppuVar34[2],ppppppuVar34[1]);
            }
            iVar13 = func_0x09a87880(auStack_868);
            if (iVar13 == 0) {
              _auStack_9e8 = 0;
              uStack_9e0 = (ulong *******)0x0;
            }
            else {
              _auStack_9e8 = CONCAT44(_UNK_01a150dc,_DAT_01a150d8);
              uStack_9e0 = (ulong *******)CONCAT44(_UNK_01a150e4,_UNK_01a150e0);
            }
            pppppppuStack_9d8 = (ulong *******)0x0;
            if (((uint)auStack_868 & 1) != 0) {
              pppppppuStack_9d8 = (ulong *******)0x0;
              func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
            }
            iVar13 = func_0x09a87880(auStack_9e8);
            if (iVar13 != 0) {
              pppppppuVar25 = (ulong *******)(ppppppuStack_9d0 + 0xc);
              if (((ulong)ppppppuStack_9d0[0xc] & 1) == 0) {
                uStack_858 = (ulong *******)ppppppuStack_9d0[0xe];
                auStack_868 = *(undefined1 (*) [4])pppppppuVar25;
                uStack_864 = *(uint *)((long)ppppppuStack_9d0 + 100);
                uStack_860 = *(uint *)(ppppppuStack_9d0 + 0xd);
                uStack_85c = *(uint *)((long)ppppppuStack_9d0 + 0x6c);
              }
              else {
                func_0x0412e5e0(auStack_868,ppppppuStack_9d0[0xe],ppppppuStack_9d0[0xd]);
              }
              uStack_450 = CONCAT44(uStack_85c,uStack_860);
              pppppppuStack_458 = uStack_858;
              if (((uint)auStack_868 & 1) == 0) {
                pppppppuStack_458 = (ulong *******)(auStack_868 + 1);
                uStack_450 = (ulong)(auStack_868[0] >> 1);
              }
              pppppppuVar33 = (ulong *******)&pppppppuStack_458;
              func_0x09a8f590(auStack_438);
              if (((uint)auStack_868 & 1) != 0) {
                pppppppuVar33 =
                     (ulong *******)(CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
                func_0x0412a280(uStack_858);
              }
              uVar36 = func_0x0eee2e90(auStack_438);
              if (0xfffffffffffffff7 < uVar36) goto LAB_09a8d9e7;
              if (uVar36 < 0x17) {
                auStack_868[0] = (char)uVar36 * '\x02';
                pppppppuVar33 = (ulong *******)(auStack_868 + 1);
                if (uVar36 != 0) goto LAB_09a8a9d8;
              }
              else {
                lVar19 = (uVar36 | 7) + 1;
                if ((uVar36 | 7) == 0x17) {
                  lVar19 = 0x1a;
                }
                pppppppuVar33 =
                     (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
                if (pppppppuVar33 == (ulong *******)0x0) {
                  func_0x0eec74c0(lVar19,0);
                }
                auStack_868 = (undefined1  [4])((uint)lVar19 | 1);
                uStack_864 = (uint)((ulong)lVar19 >> 0x20);
                uStack_860 = (uint)uVar36;
                uStack_85c = (uint)(uVar36 >> 0x20);
                uStack_858 = pppppppuVar33;
LAB_09a8a9d8:
                func_0x0eee2f00(pppppppuVar33,auStack_438,uVar36);
              }
              *(byte *)((long)pppppppuVar33 + uVar36) = 0;
              pppppppuStack_9f0 = pppppppuVar25;
              lVar19 = func_0x09acdb60(auStack_868);
              if (lVar19 == 0) {
                bVar41 = false;
              }
              else {
                bVar41 = *(int *)(lVar19 + 0x28) == 1;
              }
              if (((uint)auStack_868 & 1) != 0) {
                func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
              }
              if (!bVar41) {
                func_0x0d81cb10(auStack_b18,&ppppppuStack_978);
                pppppppuVar33 = uStack_b08;
                pppppppuVar25 = uStack_b10;
                if (((ulong)_auStack_b18 & 1) == 0) {
                  pppppppuVar33 = (ulong *******)(auStack_b18 + 1);
                  pppppppuVar25 = (ulong *******)((ulong)_auStack_b18 >> 1 & 0x7f);
                }
                auStack_868 = SUB84(pppppppuVar33,0);
                uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
                uStack_860 = (uint)pppppppuVar25;
                uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
                bVar41 = (*(byte *)(ppppppuStack_9d0 + 0xc) & 1) != 0;
                uStack_858 = (ulong *******)((long)ppppppuStack_9d0 + 0x61);
                if (bVar41) {
                  uStack_858 = (ulong *******)ppppppuStack_9d0[0xe];
                }
                auStack_850._0_8_ = (ulong *******)(ulong)(*(byte *)(ppppppuStack_9d0 + 0xc) >> 1);
                if (bVar41) {
                  auStack_850._0_8_ = ppppppuStack_9d0[0xd];
                }
                unique0x1000f1bc = pppppppuStack_9d8;
                uStack_840 = uStack_9e0;
                if ((_auStack_9e8 & 1) == 0) {
                  unique0x1000f1b4 = (ulong *******)(auStack_9e8 + 1);
                  uStack_840 = (ulong *******)(_auStack_9e8 >> 1 & 0x7f);
                }
                func_0x0470d9a0(auStack_ad8,&UNK_014827db,0x38,0xddd,auStack_868);
                func_0x09a8f4c0(lStack_ae8,auStack_ad8);
                pppppppuVar25 = _auStack_b18;
                pppppppuVar33 = uStack_b08;
                if (((ulong)_auStack_ad8 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_ac8,(ulong)_auStack_ad8 & 0xfffffffffffffffe);
                  pppppppuVar25 = _auStack_b18;
                  pppppppuVar33 = uStack_b08;
                }
                goto joined_r0x09a8b557;
              }
              uStack_a28 = (ulong *******)0x0;
              uStack_a20 = (ulong *******)0x0;
              pppppppuStack_a18 = (ulong *******)0x0;
              pppppppuVar25 = (ulong *******)pppppppuVar15[0x40];
              pppppppuStack_b20 = (ulong *******)pppppppuVar15[0x41];
              if (pppppppuVar25 != pppppppuStack_b20) {
                pppppppuStack_b30 = (ulong *******)((ulong)pppppppuStack_b30 & 0xffffffff00000000);
LAB_09a8aa9f:
                pppppppuVar33 = *(ulong ********)(param_2 + 0x20);
                func_0x0d821b40(auStack_868,pppppppuVar33,pppppppuVar25);
                puVar20 = (uint *)&DAT_0f7ba058;
                if ((char)uStack_818 != '\0') {
                  puVar20 = (uint *)auStack_850;
                }
                auStack_9c8 = (undefined1  [4])*puVar20;
                uStack_9c4 = puVar20[1];
                uStack_9c0 = puVar20[2];
                uStack_9bc = puVar20[3];
                if (((ulong)*pppppppuVar25 & 1) == 0) {
                  pppppppuStack_9f8 = (ulong *******)pppppppuVar25[2];
                  auStack_a08 = (undefined1  [8])*pppppppuVar25;
                  pppppppuStack_a00 = (ulong *******)pppppppuVar25[1];
                }
                else {
                  pppppppuVar33 = (ulong *******)pppppppuVar25[2];
                  func_0x0412e5e0(auStack_a08,pppppppuVar33,pppppppuVar25[1]);
                }
                uStack_b08 = (ulong *******)0x0;
                pppppppuStack_b00 = (ulong *******)0x0;
                _auStack_b18 = (ulong *******)0x0;
                uStack_b10 = (ulong *******)0x0;
                if (*(int *)(pppppppuVar25 + 6) == 1) {
                  uStack_a78 = (ulong *******)pppppppuVar25[3];
                  uStack_a70 = (ulong *******)0x0;
                  uVar6 = *(undefined2 *)((long)pppppppuVar25 + 0x1c);
                  ppppppuVar34 = pppppppuVar25[4];
                  pppppppuVar31 = (ulong *******)((ulong)ppppppuVar34 & 0xff00ffffffffffff);
                  if (((ulong)ppppppuVar34 & 0x80000000000000) == 0) {
                    pppppppuVar39 =
                         (ulong *******)(ulong)((ushort)((ulong)ppppppuVar34 >> 0x30) & 0x7f);
                  }
                  else {
                    pppppppuVar39 = (ulong *******)pppppppuVar31[-1];
                    if ((ulong *******)0xfffffffffffffff7 < pppppppuVar39) goto LAB_09a8d9a9;
                  }
                  if (pppppppuVar39 < (ulong *******)0x17) {
                    _auStack_ad8 = (ulong *******)
                                   CONCAT71(stack0xfffffffffffff529,(char)pppppppuVar39 * '\x02');
                    pppppppuVar21 = (ulong *******)(auStack_ad8 + 1);
                    if (pppppppuVar39 != (ulong *******)0x0) goto LAB_09a8ac26;
                  }
                  else {
                    uVar36 = ((ulong)pppppppuVar39 | 7) + 1;
                    if (((ulong)pppppppuVar39 | 7) == 0x17) {
                      uVar36 = 0x1a;
                    }
                    pppppppuVar21 =
                         (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36);
                    if (pppppppuVar21 == (ulong *******)0x0) {
                      func_0x0eec74c0(uVar36,0);
                    }
                    _auStack_ad8 = (ulong *******)(uVar36 | 1);
                    _auStack_ad0 = pppppppuVar39;
                    pppppppuStack_ac8 = pppppppuVar21;
LAB_09a8ac26:
                    memmove(pppppppuVar21,pppppppuVar31,pppppppuVar39);
                    pppppppuVar33 = pppppppuVar31;
                  }
                  *(byte *)((long)pppppppuVar21 + (long)pppppppuVar39) = 0;
                  pppppppuVar31 = pppppppuStack_ac8;
                  _auStack_b18 = CONCAT24(uVar6,(undefined4)uStack_a78);
                  auVar42 = auStack_ad8;
                  uVar44 = uStack_ad4;
                  auVar46 = auStack_ad0;
                  uVar48 = uStack_acc;
                  if (((ulong)uStack_b10 & 1) != 0) {
                    pppppppuVar33 = (ulong *******)((ulong)uStack_b10 & 0xfffffffffffffffe);
                    uStack_a78 = _auStack_ad8;
                    uStack_a70 = _auStack_ad0;
                    func_0x0412a280(pppppppuStack_b00);
                    auVar42 = (undefined1  [4])(undefined4)uStack_a78;
                    uVar44 = uStack_a78._4_4_;
                    auVar46 = (undefined1  [4])(undefined4)uStack_a70;
                    uVar48 = uStack_a70._4_4_;
                  }
                  uStack_b10 = (ulong *******)CONCAT44(uVar44,auVar42);
                  uStack_b08 = (ulong *******)CONCAT44(uVar48,auVar46);
                  pppppppuStack_b00 = pppppppuVar31;
                  param_2 = lStack_ae0;
                }
                else if (*(int *)(pppppppuVar25 + 6) == 0) {
                  iVar13 = *(int *)(pppppppuVar25 + 3);
                  if (iVar13 == 0) {
                    lVar19 = 5;
                    bVar41 = false;
                    pppppppuVar31 = (ulong *******)&UNK_014aaee7;
                  }
                  else if (iVar13 == 2) {
                    lVar19 = 8;
                    bVar41 = false;
                    pppppppuVar31 = (ulong *******)&UNK_01294e62;
                  }
                  else if (iVar13 == 1) {
                    lVar19 = 4;
                    bVar41 = false;
                    pppppppuVar31 = (ulong *******)&UNK_013771dc;
                  }
                  else {
                    bVar41 = true;
                    pppppppuVar31 = (ulong *******)&UNK_01e79d91;
                    lVar19 = 0;
                  }
                  pppppppuVar33 = *(ulong ********)(lStack_ae0 + 0x20);
                  func_0x0d821d30(auStack_ad8,pppppppuVar33,pppppppuVar25,pppppppuVar31,lVar19);
                  param_2 = lStack_ae0;
                  if (auStack_ac0[8] == '\x01') {
                    _auStack_b18 = (ulong *******)
                                   CONCAT44(CONCAT22(uStack_b14._2_2_,(undefined2)uStack_ad4),
                                            auStack_ad8);
                    if (((ulong)uStack_b10 & 1) == 0) {
                      if (((ulong)_auStack_ad0 & 1) == 0) {
                        pppppppuStack_b00 = (ulong *******)auStack_ac0._0_8_;
                        uStack_b10 = _auStack_ad0;
                        uStack_b08 = pppppppuStack_ac8;
                      }
                      else {
                        pppppppuVar33 = (ulong *******)auStack_ac0._0_8_;
                        func_0x04885070(&uStack_b10,auStack_ac0._0_8_,pppppppuStack_ac8);
                      }
                    }
                    else {
                      pppppppuVar31 = (ulong *******)((ulong)_auStack_ad0 >> 1 & 0x7f);
                      pppppppuVar33 = (ulong *******)(auStack_ad0 + 1);
                      if (((ulong)_auStack_ad0 & 1) != 0) {
                        pppppppuVar31 = pppppppuStack_ac8;
                        pppppppuVar33 = (ulong *******)auStack_ac0._0_8_;
                      }
                      FUN_04885120(&uStack_b10,pppppppuVar33,pppppppuVar31);
                      param_2 = lStack_ae0;
                    }
                  }
                  else {
                    uStack_8f8 = (ulong *******)CONCAT71(uStack_8f8._1_7_,(char)lVar19 * '\x02');
                    if (!bVar41) {
                      func_0x0eee2f00((long)&uStack_8f8 + 1,pppppppuVar31,lVar19);
                      pppppppuVar33 = pppppppuVar31;
                    }
                    pppppppuVar21 = pppppppuStack_8e8;
                    pppppppuVar31 = uStack_8f8;
                    *(undefined1 *)((long)&uStack_8f8 + lVar19 + 1) = 0;
                    pppppppuVar39 = uStack_8f0;
                    uVar43 = (undefined4)uStack_8f8;
                    uVar45 = uStack_8f8._4_4_;
                    uVar47 = (undefined4)uStack_8f0;
                    uVar49 = uStack_8f0._4_4_;
                    uStack_8f8 = (ulong *******)0x0;
                    uStack_8f0 = (ulong *******)0x0;
                    pppppppuStack_8e8 = (ulong *******)0x0;
                    _auStack_b18 = (ulong *******)((ulong)_auStack_b18 & 0xffff000000000000);
                    if (((ulong)uStack_b10 & 1) != 0) {
                      pppppppuVar33 = (ulong *******)((ulong)uStack_b10 & 0xfffffffffffffffe);
                      uStack_a78 = pppppppuVar31;
                      uStack_a70 = pppppppuVar39;
                      func_0x0412a280(pppppppuStack_b00);
                      uVar43 = (undefined4)uStack_a78;
                      uVar45 = uStack_a78._4_4_;
                      uVar47 = (undefined4)uStack_a70;
                      uVar49 = uStack_a70._4_4_;
                    }
                    uStack_b10 = (ulong *******)CONCAT44(uVar45,uVar43);
                    uStack_b08 = (ulong *******)CONCAT44(uVar49,uVar47);
                    pppppppuStack_b00 = pppppppuVar21;
                    param_2 = lStack_ae0;
                  }
                  if ((auStack_ac0[8] == '\x01') && (((ulong)_auStack_ad0 & 1) != 0)) {
                    pppppppuVar33 = (ulong *******)((ulong)_auStack_ad0 & 0xfffffffffffffffe);
                    func_0x0412a280(auStack_ac0._0_8_);
                  }
                }
                if (((ulong)auStack_a08 & 1) == 0) {
                  pppppppuStack_ac8 = pppppppuStack_9f8;
                  _auStack_ad8 = (ulong *******)auStack_a08;
                  _auStack_ad0 = pppppppuStack_a00;
                }
                else {
                  pppppppuVar33 = pppppppuStack_9f8;
                  func_0x0412e5e0(auStack_ad8,pppppppuStack_9f8,pppppppuStack_a00);
                }
                auStack_ac0._4_4_ = uStack_9c4;
                auStack_ac0._0_4_ = auStack_9c8;
                stack0xfffffffffffff548 = (ulong ******)CONCAT44(uStack_9bc,uStack_9c0);
                uStack_ab0 = CONCAT44(CONCAT22(uStack_ab0._6_2_,(undefined2)uStack_b14),auStack_b18)
                ;
                if (((ulong)uStack_b10 & 1) == 0) {
                  pppppppuStack_a98 = pppppppuStack_b00;
                  uStack_aa8 = uStack_b10;
                  uStack_aa0 = uStack_b08;
                }
                else {
                  pppppppuVar33 = pppppppuStack_b00;
                  func_0x0412e5e0(&uStack_aa8,pppppppuStack_b00,uStack_b08);
                }
                sStack_a90 = (ushort)*(byte *)(pppppppuVar25 + 7) << 8;
                lVar19 = *plStack_878;
                lVar28 = plStack_878[1];
                if (lVar19 == lVar28) {
                  pppppppuVar31 = uStack_a28;
                  pppppppuVar39 = pppppppuStack_a18;
                  if (((ulong)pppppppuStack_b30 & 1) == 0) goto LAB_09a8b07b;
                }
                else {
                  if (((ulong)pppppppuStack_b30 & 1) != 0) {
                    plVar14 = *(long **)(lVar19 + 0x20);
                    if (plVar14 == (long *)0x0) {
LAB_09a8d995:
                      func_0x04891200();
                      goto LAB_09a8d99f;
                    }
                    uVar26 = (**(code **)(*plVar14 + 0x30))
                                       (plVar14,pppppppuVar15,&ppppppuStack_978,auStack_ad8,
                                        lStack_ae8);
                    pppppppuVar31 = uStack_a28;
                    pppppppuVar39 = pppppppuStack_a18;
                    if ((int)uVar26 != 2) goto joined_r0x09a8b43f;
LAB_09a8af6f:
                    pppppppuStack_b30 =
                         (ulong *******)
                         CONCAT44(pppppppuStack_b30._4_4_,
                                  (int)CONCAT71((int7)((ulong)uVar26 >> 8),1));
                    if (((ulong)uStack_aa8 & 1) != 0) goto LAB_09a8af83;
LAB_09a8b12e:
                    if (((ulong)_auStack_ad8 & 1) == 0) goto LAB_09a8b139;
LAB_09a8afa7:
                    func_0x0412a280(pppppppuStack_ac8,(ulong)_auStack_ad8 & 0xfffffffffffffffe);
                    if (((ulong)uStack_b10 & 1) != 0) goto LAB_09a8afc8;
LAB_09a8b144:
                    if (((ulong)auStack_a08 & 1) == 0) goto LAB_09a8b152;
LAB_09a8afe9:
                    func_0x0412a280(pppppppuStack_9f8,(ulong)auStack_a08 & 0xfffffffffffffffe);
                    goto joined_r0x09a8b00a;
                  }
                  do {
                    plVar14 = *(long **)(lVar19 + 0x20);
                    if (plVar14 == (long *)0x0) goto LAB_09a8d995;
                    pppppppuVar33 = pppppppuVar15;
                    uVar26 = (**(code **)(*plVar14 + 0x30))
                                       (plVar14,pppppppuVar15,&ppppppuStack_978,auStack_ad8,
                                        lStack_ae8);
                    pppppppuVar31 = uStack_a28;
                    pppppppuVar39 = pppppppuStack_a18;
                    if ((int)uVar26 == 1) goto joined_r0x09a8b43f;
                    if ((int)uVar26 == 2) goto LAB_09a8af6f;
                    lVar19 = lVar19 + 0x30;
                  } while (lVar19 != lVar28);
LAB_09a8b07b:
                  if (uStack_a20 < pppppppuStack_a18) {
                    uStack_a20[2] = (ulong ******)pppppppuStack_ac8;
                    *uStack_a20 = (ulong ******)_auStack_ad8;
                    uStack_a20[1] = (ulong ******)_auStack_ad0;
                    _auStack_ad8 = (ulong *******)0x0;
                    _auStack_ad0 = (ulong *******)0x0;
                    pppppppuStack_ac8 = (ulong *******)0x0;
                    uStack_a20[3] = (ulong ******)auStack_ac0._0_8_;
                    uStack_a20[4] = stack0xfffffffffffff548;
                    *(undefined4 *)(uStack_a20 + 5) = (undefined4)uStack_ab0;
                    *(undefined2 *)((long)uStack_a20 + 0x2c) = uStack_ab0._4_2_;
                    uStack_a20[8] = (ulong ******)pppppppuStack_a98;
                    *(undefined4 *)(uStack_a20 + 6) = (undefined4)uStack_aa8;
                    *(undefined4 *)((long)uStack_a20 + 0x34) = uStack_aa8._4_4_;
                    *(undefined4 *)(uStack_a20 + 7) = (undefined4)uStack_aa0;
                    *(undefined4 *)((long)uStack_a20 + 0x3c) = uStack_aa0._4_4_;
                    uStack_aa8 = (ulong *******)0x0;
                    uStack_aa0 = (ulong *******)0x0;
                    pppppppuStack_a98 = (ulong *******)0x0;
                    *(short *)(uStack_a20 + 9) = sStack_a90;
                    uStack_a20 = uStack_a20 + 10;
                    pppppppuVar31 = uStack_a28;
                    pppppppuVar39 = pppppppuStack_a18;
                    goto joined_r0x09a8b43f;
                  }
                  lVar19 = (long)uStack_a20 - (long)uStack_a28;
                  pppppppuVar33 = (ulong *******)0xcccccccccccccccd;
                  uVar36 = (lVar19 >> 4) * -0x3333333333333333 + 1;
                  if (0x333333333333333 < uVar36) goto LAB_09a8d9dd;
                  lVar28 = (long)pppppppuStack_a18 - (long)uStack_a28 >> 4;
                  uVar30 = lVar28 * -0x6666666666666666;
                  if (uVar36 < uVar30) {
                    uVar36 = uVar30;
                  }
                  if (0x199999999999998 < (ulong)(lVar28 * -0x3333333333333333)) {
                    uVar36 = 0x333333333333333;
                  }
                  if (0x333333333333333 < uVar36) goto LAB_09a8d9e2;
                  pppppppuVar33 =
                       (ulong *******)
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x50);
                  if (pppppppuVar33 == (ulong *******)0x0) {
                    func_0x0eec74c0(uVar36 * 0x50,0);
                  }
                  pppppppuVar39 = uStack_a20;
                  *(ulong ********)((long)pppppppuVar33 + lVar19 + 0x10) = pppppppuStack_ac8;
                  *(ulong ********)((long)pppppppuVar33 + lVar19) = _auStack_ad8;
                  *(ulong ********)((byte *)((long)pppppppuVar33 + lVar19) + 8) = _auStack_ad0;
                  _auStack_ad8 = (ulong *******)0x0;
                  _auStack_ad0 = (ulong *******)0x0;
                  pppppppuStack_ac8 = (ulong *******)0x0;
                  pbVar1 = (byte *)((long)pppppppuVar33 + lVar19 + 0x18);
                  *(undefined8 *)pbVar1 = auStack_ac0._0_8_;
                  *(ulong *******)(pbVar1 + 8) = stack0xfffffffffffff548;
                  *(undefined4 *)((long)pppppppuVar33 + lVar19 + 0x28) = (undefined4)uStack_ab0;
                  *(undefined2 *)((long)pppppppuVar33 + lVar19 + 0x2c) = uStack_ab0._4_2_;
                  *(ulong ********)((long)pppppppuVar33 + lVar19 + 0x40) = pppppppuStack_a98;
                  pbVar1 = (byte *)((long)pppppppuVar33 + lVar19 + 0x30);
                  *(undefined4 *)pbVar1 = (undefined4)uStack_aa8;
                  *(undefined4 *)(pbVar1 + 4) = uStack_aa8._4_4_;
                  *(undefined4 *)(pbVar1 + 8) = (undefined4)uStack_aa0;
                  *(undefined4 *)(pbVar1 + 0xc) = uStack_aa0._4_4_;
                  uStack_aa8 = (ulong *******)0x0;
                  uStack_aa0 = (ulong *******)0x0;
                  pppppppuStack_a98 = (ulong *******)0x0;
                  *(short *)((long)pppppppuVar33 + lVar19 + 0x48) = sStack_a90;
                  pppppppuVar31 =
                       (ulong *******)
                       ((long)pppppppuVar33 + ((long)uStack_a28 - (long)uStack_a20) + lVar19);
                  uStack_a78 = pppppppuVar33;
                  if ((long)uStack_a28 - (long)uStack_a20 != 0) {
                    lVar28 = 0;
                    do {
                      *(undefined8 *)((long)pppppppuVar31 + lVar28 + 0x10) =
                           *(undefined8 *)((long)uStack_a28 + lVar28 + 0x10);
                      uVar26 = *(undefined8 *)((byte *)((long)uStack_a28 + lVar28) + 8);
                      *(undefined8 *)((long)pppppppuVar31 + lVar28) =
                           *(undefined8 *)((long)uStack_a28 + lVar28);
                      *(undefined8 *)((byte *)((long)pppppppuVar31 + lVar28) + 8) = uVar26;
                      pbVar1 = (byte *)((long)uStack_a28 + lVar28);
                      pbVar1[0] = 0;
                      pbVar1[1] = 0;
                      pbVar1[2] = 0;
                      pbVar1[3] = 0;
                      pbVar1[4] = 0;
                      pbVar1[5] = 0;
                      pbVar1[6] = 0;
                      pbVar1[7] = 0;
                      pbVar1[8] = 0;
                      pbVar1[9] = 0;
                      pbVar1[10] = 0;
                      pbVar1[0xb] = 0;
                      pbVar1[0xc] = 0;
                      pbVar1[0xd] = 0;
                      pbVar1[0xe] = 0;
                      pbVar1[0xf] = 0;
                      pbVar1 = (byte *)((long)uStack_a28 + lVar28 + 0x10);
                      pbVar1[0] = 0;
                      pbVar1[1] = 0;
                      pbVar1[2] = 0;
                      pbVar1[3] = 0;
                      pbVar1[4] = 0;
                      pbVar1[5] = 0;
                      pbVar1[6] = 0;
                      pbVar1[7] = 0;
                      pbVar1 = (byte *)((long)uStack_a28 + lVar28 + 0x18);
                      uVar26 = *(undefined8 *)(pbVar1 + 8);
                      pbVar4 = (byte *)((long)pppppppuVar31 + lVar28 + 0x18);
                      *(undefined8 *)pbVar4 = *(undefined8 *)pbVar1;
                      *(undefined8 *)(pbVar4 + 8) = uVar26;
                      *(undefined2 *)((long)pppppppuVar31 + lVar28 + 0x2c) =
                           *(undefined2 *)((long)uStack_a28 + lVar28 + 0x2c);
                      *(undefined4 *)((long)pppppppuVar31 + lVar28 + 0x28) =
                           *(undefined4 *)((long)uStack_a28 + lVar28 + 0x28);
                      *(undefined8 *)((long)pppppppuVar31 + lVar28 + 0x40) =
                           *(undefined8 *)((long)uStack_a28 + lVar28 + 0x40);
                      pbVar1 = (byte *)((long)uStack_a28 + lVar28 + 0x30);
                      uVar43 = *(undefined4 *)(pbVar1 + 4);
                      uVar45 = *(undefined4 *)(pbVar1 + 8);
                      uVar47 = *(undefined4 *)(pbVar1 + 0xc);
                      pbVar4 = (byte *)((long)pppppppuVar31 + lVar28 + 0x30);
                      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar1;
                      *(undefined4 *)(pbVar4 + 4) = uVar43;
                      *(undefined4 *)(pbVar4 + 8) = uVar45;
                      *(undefined4 *)(pbVar4 + 0xc) = uVar47;
                      pbVar1 = (byte *)((long)uStack_a28 + lVar28 + 0x30);
                      pbVar1[0] = 0;
                      pbVar1[1] = 0;
                      pbVar1[2] = 0;
                      pbVar1[3] = 0;
                      pbVar1[4] = 0;
                      pbVar1[5] = 0;
                      pbVar1[6] = 0;
                      pbVar1[7] = 0;
                      pbVar1[8] = 0;
                      pbVar1[9] = 0;
                      pbVar1[10] = 0;
                      pbVar1[0xb] = 0;
                      pbVar1[0xc] = 0;
                      pbVar1[0xd] = 0;
                      pbVar1[0xe] = 0;
                      pbVar1[0xf] = 0;
                      pbVar1 = (byte *)((long)uStack_a28 + lVar28 + 0x40);
                      pbVar1[0] = 0;
                      pbVar1[1] = 0;
                      pbVar1[2] = 0;
                      pbVar1[3] = 0;
                      pbVar1[4] = 0;
                      pbVar1[5] = 0;
                      pbVar1[6] = 0;
                      pbVar1[7] = 0;
                      *(undefined2 *)((long)pppppppuVar31 + lVar28 + 0x48) =
                           *(undefined2 *)((long)uStack_a28 + lVar28 + 0x48);
                      lVar16 = lVar28 + 0x50;
                      lVar28 = lVar28 + 0x50;
                      pppppppuVar33 = uStack_a28;
                    } while ((ulong *******)((long)uStack_a28 + lVar16) != uStack_a20);
                    do {
                      if (((ulong)pppppppuVar33[6] & 1) == 0) {
                        bVar5 = *(byte *)pppppppuVar33;
                      }
                      else {
                        func_0x0412a280(pppppppuVar33[8],
                                        (ulong)pppppppuVar33[6] & 0xfffffffffffffffe);
                        bVar5 = *(byte *)pppppppuVar33;
                      }
                      if ((bVar5 & 1) != 0) {
                        func_0x0412a280(pppppppuVar33[2],(ulong)*pppppppuVar33 & 0xfffffffffffffffe)
                        ;
                      }
                      pppppppuVar33 = pppppppuVar33 + 10;
                    } while (pppppppuVar33 != pppppppuVar39);
                  }
                  param_2 = lStack_ae0;
                  pppppppuVar33 = (ulong *******)((long)uStack_a78 + lVar19 + 0x50);
                  uStack_a20 = pppppppuVar33;
                  pppppppuVar39 = uStack_a78 + uVar36 * 10;
                  if (uStack_a28 != (ulong *******)0x0) {
                    lVar19 = (long)pppppppuStack_a18 - (long)uStack_a28;
                    pppppppuVar39 = uStack_a28;
                    uStack_a28 = pppppppuVar31;
                    pppppppuStack_a18 = uStack_a78 + uVar36 * 10;
                    func_0x0412a280(pppppppuVar39,lVar19);
                    uStack_a20 = pppppppuVar33;
                    pppppppuVar31 = uStack_a28;
                    pppppppuVar39 = pppppppuStack_a18;
                  }
                }
joined_r0x09a8b43f:
                pppppppuStack_a18 = pppppppuVar39;
                uStack_a28 = pppppppuVar31;
                if (((ulong)uStack_aa8 & 1) == 0) goto LAB_09a8b12e;
LAB_09a8af83:
                func_0x0412a280(pppppppuStack_a98,(ulong)uStack_aa8 & 0xfffffffffffffffe);
                if (((ulong)_auStack_ad8 & 1) != 0) goto LAB_09a8afa7;
LAB_09a8b139:
                if (((ulong)uStack_b10 & 1) == 0) goto LAB_09a8b144;
LAB_09a8afc8:
                func_0x0412a280(pppppppuStack_b00,(ulong)uStack_b10 & 0xfffffffffffffffe);
                if (((ulong)auStack_a08 & 1) != 0) goto LAB_09a8afe9;
LAB_09a8b152:
joined_r0x09a8b00a:
                if ((char)uStack_818 == '\x01') {
                  if ((uStack_838 & 1) != 0) {
                    func_0x0412a280(ppppppuStack_828,uStack_838 & 0xfffffffffffffffe);
                  }
                  if (((uint)auStack_868 & 1) != 0) {
                    func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe
                                   );
                  }
                }
                pppppppuVar25 = pppppppuVar25 + 8;
                if (pppppppuVar25 == pppppppuStack_b20) goto LAB_09a8b678;
                goto LAB_09a8aa9f;
              }
              goto LAB_09a8b67f;
            }
            func_0x0d81cb10(auStack_ad8,&ppppppuStack_978);
            pppppppuVar33 = pppppppuStack_ac8;
            pppppppuVar25 = _auStack_ad0;
            if (((ulong)_auStack_ad8 & 1) == 0) {
              pppppppuVar33 = (ulong *******)(auStack_ad8 + 1);
              pppppppuVar25 = (ulong *******)((ulong)_auStack_ad8 >> 1 & 0x7f);
            }
            auStack_868 = SUB84(pppppppuVar33,0);
            uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
            uStack_860 = (uint)pppppppuVar25;
            uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
            uStack_858 = pppppppuStack_9d8;
            auStack_850._0_8_ = uStack_9e0;
            if ((_auStack_9e8 & 1) == 0) {
              uStack_858 = (ulong *******)(auStack_9e8 + 1);
              auStack_850._0_8_ = (ulong *******)(_auStack_9e8 >> 1 & 0x7f);
            }
            func_0x0470d9a0(auStack_438,&UNK_011dd5ca,0x2d,0xdd,auStack_868);
            func_0x09a8f4c0(lStack_ae8,auStack_438);
            pppppppuVar25 = _auStack_ad8;
            pppppppuVar33 = pppppppuStack_ac8;
            if (((uint)auStack_438 & 1) != 0) {
              func_0x0412a280(pppppppuStack_428,
                              CONCAT44(uStack_434,auStack_438) & 0xfffffffffffffffe);
              pppppppuVar25 = _auStack_ad8;
              pppppppuVar33 = pppppppuStack_ac8;
            }
joined_r0x09a8b557:
            if (((ulong)pppppppuVar25 & 1) == 0) {
              bVar5 = *(byte *)((long)pppppppuVar15 + 0xb4);
              pppppppuVar25 = (ulong *******)auStack_850._0_8_;
              pppppppuVar33 = unique0x1000eaa0;
            }
            else {
              func_0x0412a280(pppppppuVar33,(ulong)pppppppuVar25 & 0xfffffffffffffffe);
              bVar5 = *(byte *)((long)pppppppuVar15 + 0xb4);
              pppppppuVar25 = (ulong *******)auStack_850._0_8_;
              pppppppuVar33 = stack0xfffffffffffff7b8;
            }
            if (bVar5 == 0xc) {
              unique0x10006fb9 = pppppppuVar33;
              auStack_850._0_8_ = pppppppuVar25;
              *(undefined1 *)(param_2 + 0x58) = 1;
            }
            goto LAB_09a8d6f3;
          }
          func_0x0d81cb10(auStack_ad8,&ppppppuStack_978);
          pppppppuVar33 = pppppppuStack_ac8;
          pppppppuVar25 = _auStack_ad0;
          if (((ulong)_auStack_ad8 & 1) == 0) {
            pppppppuVar33 = (ulong *******)(auStack_ad8 + 1);
            pppppppuVar25 = (ulong *******)((ulong)_auStack_ad8 >> 1 & 0x7f);
          }
          auStack_868 = SUB84(pppppppuVar33,0);
          uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
          uStack_860 = (uint)pppppppuVar25;
          uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
          func_0x0470d9a0(auStack_438,&UNK_011a789a,0x3f,0xd,auStack_868);
          if (((uint)auStack_438 & 1) == 0) {
            uStack_858 = pppppppuStack_428;
            auStack_868 = auStack_438;
            uStack_864 = uStack_434;
            uStack_860 = uStack_430;
            uStack_85c = uStack_42c;
          }
          else {
            func_0x0412e5e0(auStack_868,pppppppuStack_428,CONCAT44(uStack_42c,uStack_430));
          }
          lVar19 = lStack_ae8;
          puVar20 = *(uint **)(lStack_ae8 + 0xa0);
          if (*(uint **)(lStack_ae8 + 0xa8) <= puVar20) {
            lVar28 = (long)puVar20 - *(long *)(lStack_ae8 + 0x98);
            pppppppuVar33 = (ulong *******)0xaaaaaaaaaaaaaaab;
            uVar36 = (lVar28 >> 3) * -0x5555555555555555 + 1;
            if (uVar36 < 0xaaaaaaaaaaaaaab) {
              lVar16 = (long)*(uint **)(lStack_ae8 + 0xa8) - *(long *)(lStack_ae8 + 0x98) >> 3;
              uVar30 = lVar16 * 0x5555555555555556;
              if (uVar36 < uVar30) {
                uVar36 = uVar30;
              }
              if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
                uVar36 = 0xaaaaaaaaaaaaaaa;
              }
              if (uVar36 < 0xaaaaaaaaaaaaaab) {
                lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x18);
                if (lVar16 == 0) {
                  func_0x0eec74c0(uVar36 * 0x18,0);
                }
                *(ulong ********)(lVar16 + 0x10 + lVar28) = uStack_858;
                *(undefined8 *)(lVar16 + lVar28) = CONCAT44(uStack_864,auStack_868);
                ((undefined8 *)(lVar16 + lVar28))[1] = CONCAT44(uStack_85c,uStack_860);
                auStack_868 = (undefined1  [4])0x0;
                uStack_864 = 0;
                uStack_860 = 0;
                uStack_85c = 0;
                uStack_858 = (ulong *******)0x0;
                puVar38 = *(ulong **)(lVar19 + 0x98);
                puVar8 = *(ulong **)(lVar19 + 0xa0);
                puVar3 = (undefined4 *)(((long)puVar38 - (long)puVar8) + lVar16 + lVar28);
                puVar17 = puVar38;
                puVar27 = puVar3;
                if ((long)puVar38 - (long)puVar8 != 0) {
                  do {
                    *(ulong *)(puVar27 + 4) = puVar17[2];
                    uVar43 = *(undefined4 *)((long)puVar17 + 4);
                    uVar30 = puVar17[1];
                    uVar45 = *(undefined4 *)((long)puVar17 + 0xc);
                    *puVar27 = (int)*puVar17;
                    puVar27[1] = uVar43;
                    puVar27[2] = (int)uVar30;
                    puVar27[3] = uVar45;
                    *puVar17 = 0;
                    puVar17[1] = 0;
                    puVar17[2] = 0;
                    puVar17 = puVar17 + 3;
                    puVar27 = puVar27 + 6;
                  } while (puVar17 != puVar8);
                  do {
                    if ((*puVar38 & 1) != 0) {
                      func_0x0412a280(puVar38[2],*puVar38 & 0xfffffffffffffffe);
                    }
                    puVar38 = puVar38 + 3;
                  } while (puVar38 != puVar8);
                  puVar38 = *(ulong **)(lStack_ae8 + 0x98);
                }
                param_2 = lStack_ae0;
                lVar28 = lVar28 + lVar16 + 0x18;
                *(undefined4 **)(lStack_ae8 + 0x98) = puVar3;
                *(long *)(lStack_ae8 + 0xa0) = lVar28;
                lVar19 = *(long *)(lStack_ae8 + 0xa8);
                *(ulong *)(lStack_ae8 + 0xa8) = lVar16 + uVar36 * 0x18;
                if (puVar38 != (ulong *)0x0) {
                  func_0x0412a280(puVar38,lVar19 - (long)puVar38);
                }
                *(long *)(lStack_ae8 + 0xa0) = lVar28;
                if (((uint)auStack_868 & 1) != 0) {
                  func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
                }
                goto LAB_09a8a645;
              }
LAB_09a8d99f:
              func_0x04882eb0();
            }
            func_0x09ab3ce0();
LAB_09a8d9a9:
            func_0x04882e30();
LAB_09a8d9ae:
            pppppppuStack_a60 = pppppppuStack_b30;
            pppppppuStack_a58 = uStack_a78;
            pppppppuStack_a68 = pppppppuStack_b20;
            func_0x04882e30();
LAB_09a8d9dd:
            func_0x09ab2b30();
LAB_09a8d9e2:
            func_0x04882eb0();
LAB_09a8d9e7:
            func_0x04882e30();
LAB_09a8d9ec:
            pppppppuStack_a60 = pppppppuStack_b30;
            pppppppuStack_a58 = uStack_a78;
            pppppppuStack_a68 = pppppppuStack_b20;
            pppppppuStack_b20 = (ulong *******)func_0x04882eb0();
            pppppppuStack_b30 = pppppppuVar33;
LAB_09a8da1b:
            pppppppuStack_a58 = uStack_a78;
            pppppppuStack_a68 = pppppppuStack_b20;
            pppppppuStack_a60 = pppppppuStack_b30;
            func_0x0488efe0();
            auVar51._8_8_ = stack0xfffffffffffff548;
            auVar51._0_8_ = auStack_ac0._0_8_;
            auVar50 = _auStack_850;
LAB_09a8da40:
            _auStack_ac0 = auVar51;
            _auStack_850 = auVar50;
            func_0x09ab2b30();
            auVar51 = _auStack_850;
LAB_09a8da45:
            _auStack_850 = auVar51;
            func_0x04882eb0();
            goto LAB_09a8da4a;
          }
          *(ulong ********)(puVar20 + 4) = uStack_858;
          *puVar20 = (uint)auStack_868;
          puVar20[1] = uStack_864;
          puVar20[2] = uStack_860;
          puVar20[3] = uStack_85c;
          *(uint **)(lStack_ae8 + 0xa0) = puVar20 + 6;
LAB_09a8a645:
          if (((uint)auStack_438 & 1) != 0) {
            pppppppuVar25 = (ulong *******)CONCAT44(uStack_434,auStack_438);
            pppppppuVar33 = pppppppuStack_428;
LAB_09a8a65f:
            func_0x0412a280(pppppppuVar33,(ulong)pppppppuVar25 & 0xfffffffffffffffe);
          }
LAB_09a8a668:
          pppppppuVar25 = _auStack_ad8;
          pppppppuVar33 = pppppppuStack_ac8;
          if (((ulong)_auStack_ad8 & 1) != 0) {
LAB_09a8a67c:
            func_0x0412a280(pppppppuVar33,(ulong)pppppppuVar25 & 0xfffffffffffffffe);
          }
LAB_09a8a685:
          if (*(byte *)((long)pppppppuVar15 + 0xb4) == 0xc) {
            *(undefined1 *)(param_2 + 0x58) = 1;
          }
          goto LAB_09a8a697;
        }
        goto LAB_09a89d07;
      }
LAB_09a89c60:
      plStack_988 = plStack_988 + 2;
    } while (plStack_988 != plStack_888);
  }
  return;
LAB_09a8b678:
  if (((ulong)pppppppuStack_b30 & 1) == 0) {
LAB_09a8b67f:
    if (*(long *)(lStack_ae8 + 0x80) == *(long *)(lStack_ae8 + 0x88)) {
      lVar19 = *(long *)(param_2 + 0x20);
      if (DAT_0f644198 == '\0') {
        iVar13 = FUN_04108328(&DAT_0f644198);
        if (iVar13 != 0) {
          auVar51 = func_0x0eedb4e0(&UNK_01260e16,0x24);
          _DAT_0f644188 = auVar51;
          func_0x0410844d(&DAT_0f644198);
        }
      }
      plVar14 = plStack_988;
      lVar28 = lStack_ae8;
      if (DAT_0f6441b0 == '\0') {
        iVar13 = FUN_04108328(&DAT_0f6441b0,auStack_868);
        if (iVar13 != 0) {
          auVar51 = func_0x0eedb4e0(&UNK_01314a1c,0x24);
          _DAT_0f6441a0 = auVar51;
          func_0x0410844d(&DAT_0f6441b0);
          lVar28 = lStack_ae8;
          plVar14 = plStack_988;
        }
      }
      pauVar40 = (undefined1 (*) [16])pppppppuVar15[0x3d];
      pauVar9 = (undefined1 (*) [16])pppppppuVar15[0x3e];
      if (pauVar40 != pauVar9) {
        do {
          if ((_DAT_0f644188 == *pauVar40) || (_DAT_0f6441a0 == *pauVar40)) {
            func_0x0d81cb10(auStack_b18,&ppppppuStack_978);
            pppppppuVar33 = uStack_b08;
            pppppppuVar25 = uStack_b10;
            if (((ulong)_auStack_b18 & 1) == 0) {
              pppppppuVar33 = (ulong *******)(auStack_b18 + 1);
              pppppppuVar25 = (ulong *******)((ulong)_auStack_b18 >> 1 & 0x7f);
            }
            auStack_868 = SUB84(pppppppuVar33,0);
            uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
            uStack_860 = (uint)pppppppuVar25;
            uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
            func_0x0470d9a0(auStack_ad8,&UNK_01295255,0x66,0xd,auStack_868);
            lVar16 = lStack_ae8;
            if (((ulong)_auStack_ad8 & 1) == 0) {
              uStack_858 = pppppppuStack_ac8;
              auStack_868 = auStack_ad8;
              uStack_864 = uStack_ad4;
              uStack_860 = (uint)auStack_ad0;
              uStack_85c = uStack_acc;
            }
            else {
              func_0x0412e5e0(auStack_868,pppppppuStack_ac8,_auStack_ad0);
            }
            puVar20 = *(uint **)(lVar16 + 0xa0);
            if (puVar20 < *(uint **)(lVar16 + 0xa8)) {
              *(ulong ********)(puVar20 + 4) = uStack_858;
              *puVar20 = (uint)auStack_868;
              puVar20[1] = uStack_864;
              puVar20[2] = uStack_860;
              puVar20[3] = uStack_85c;
              *(uint **)(lVar16 + 0xa0) = puVar20 + 6;
joined_r0x09a8bb20:
              if (((ulong)_auStack_ad8 & 1) == 0) goto LAB_09a8b99a;
LAB_09a8b921:
              func_0x0412a280(pppppppuStack_ac8,(ulong)_auStack_ad8 & 0xfffffffffffffffe);
              if (((ulong)_auStack_b18 & 1) != 0) goto LAB_09a8b93e;
LAB_09a8b9a1:
              puVar23 = *(undefined8 **)(lVar19 + 0x40);
              puVar37 = *(undefined8 **)(lVar19 + 0x48);
              plVar14 = plStack_988;
              if (puVar23 == puVar37) goto LAB_09a8b802;
            }
            else {
              uVar26 = func_0x09ab40b0(lVar28 + 0x98,auStack_868);
              *(undefined8 *)(lVar16 + 0xa0) = uVar26;
              if (((uint)auStack_868 & 1) != 0) {
                func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
                goto joined_r0x09a8bb20;
              }
              if (((ulong)_auStack_ad8 & 1) != 0) goto LAB_09a8b921;
LAB_09a8b99a:
              if (((ulong)_auStack_b18 & 1) == 0) goto LAB_09a8b9a1;
LAB_09a8b93e:
              func_0x0412a280(uStack_b08,(ulong)_auStack_b18 & 0xfffffffffffffffe);
              puVar23 = *(undefined8 **)(lVar19 + 0x40);
              puVar37 = *(undefined8 **)(lVar19 + 0x48);
              plVar14 = plStack_988;
              if (puVar23 == puVar37) goto LAB_09a8b802;
            }
            auVar51 = *pauVar40;
LAB_09a8b9cd:
            auVar50 = (**(code **)(*(long *)*puVar23 + 0x18))();
            if (auVar50 != auVar51) goto LAB_09a8b9c0;
            (**(code **)(*(long *)*puVar23 + 0x10))(auStack_ad8);
            auVar51 = (**(code **)(*(long *)*puVar23 + 0x18))();
            pppppppuVar25 = uStack_a20;
            register0x00000010 = auVar51._8_8_;
            auStack_ac0._0_8_ = auVar51._0_8_;
            auStack_868 = SUB84(_auStack_ad8,0);
            uStack_864 = (uint)((ulong)_auStack_ad8 >> 0x20);
            uStack_860 = (uint)_auStack_ad0;
            uStack_85c = (uint)((ulong)_auStack_ad0 >> 0x20);
            uStack_818 = CONCAT31(uStack_818._1_3_,1);
            uStack_840 = (ulong *******)CONCAT26(uStack_840._6_2_,0x10000);
            uStack_820 = 0;
            uStack_858 = pppppppuStack_ac8;
            sStack_a90 = 0;
            pppppppuStack_a98 = (ulong *******)0x0;
            uStack_aa0 = (ulong *******)0x0;
            uStack_aa8 = (ulong *******)0x0;
            uStack_ab0 = 0;
            uStack_838 = 0;
            uStack_830 = 0;
            ppppppuStack_828 = (ulong ******)0x0;
            if (uStack_a20 < pppppppuStack_a18) {
              _auStack_ac0 = auVar51;
              _auStack_850 = auVar51;
              if (((ulong)_auStack_ad8 & 1) == 0) {
                uStack_a20[2] = (ulong ******)pppppppuStack_ac8;
                *uStack_a20 = (ulong ******)_auStack_ad8;
                uStack_a20[1] = (ulong ******)_auStack_ad0;
              }
              else {
                func_0x0412e5e0(uStack_a20,pppppppuStack_ac8,_auStack_ad0);
              }
              *(undefined1 (*) [16])(pppppppuVar25 + 3) = _auStack_850;
              *(undefined4 *)(pppppppuVar25 + 5) = (undefined4)uStack_840;
              *(undefined2 *)((long)pppppppuVar25 + 0x2c) = uStack_840._4_2_;
              pppppppuVar25[6] = (ulong ******)0x0;
              pppppppuVar25[7] = (ulong ******)0x0;
              pbVar1 = (byte *)((long)pppppppuVar25 + 0x3a);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              pbVar1 = (byte *)((long)pppppppuVar25 + 0x42);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              uStack_a20 = pppppppuVar25 + 10;
              goto LAB_09a8bc31;
            }
            lVar16 = (long)uStack_a20 - (long)uStack_a28;
            uVar36 = (lVar16 >> 4) * -0x3333333333333333 + 1;
            auVar50 = auVar51;
            if (0x333333333333333 < uVar36) goto LAB_09a8da40;
            lVar22 = (long)pppppppuStack_a18 - (long)uStack_a28 >> 4;
            uVar30 = lVar22 * -0x6666666666666666;
            if (uVar36 < uVar30) {
              uVar36 = uVar30;
            }
            if (0x199999999999998 < (ulong)(lVar22 * -0x3333333333333333)) {
              uVar36 = 0x333333333333333;
            }
            unique0x0000a500 = (ulong ******)&uStack_a28;
            if (uVar36 == 0) {
              pppppppuVar25 = (ulong *******)0x0;
            }
            else {
              if (0x333333333333333 < uVar36) goto LAB_09a8da45;
              auStack_850._0_8_ = auStack_ac0._0_8_;
              pppppppuVar25 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x50);
              auVar51._8_8_ = stack0xfffffffffffff7b8;
              auVar51._0_8_ = auStack_850._0_8_;
              if (pppppppuVar25 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar36 * 0x50,0);
                auVar51._8_8_ = stack0xfffffffffffff7b8;
                auVar51._0_8_ = auStack_850._0_8_;
                pppppppuVar25 = (ulong *******)0x0;
              }
            }
            pppppppuVar33 = (ulong *******)(lVar16 + (long)pppppppuVar25);
            auStack_ac0._0_8_ = pppppppuVar25 + uVar36 * 10;
            _auStack_ad8 = pppppppuVar25;
            _auStack_ad0 = pppppppuVar33;
            pppppppuStack_ac8 = pppppppuVar33;
            _auStack_850 = auVar51;
            if (((uint)auStack_868 & 1) == 0) {
              pppppppuVar33[2] = (ulong ******)uStack_858;
              *pppppppuVar33 = (ulong ******)CONCAT44(uStack_864,auStack_868);
              pppppppuVar33[1] = (ulong ******)CONCAT44(uStack_85c,uStack_860);
              *(undefined1 (*) [16])(pppppppuVar33 + 3) = auVar51;
              *(undefined4 *)(pppppppuVar33 + 5) = (undefined4)uStack_840;
              *(undefined2 *)((long)pppppppuVar33 + 0x2c) = uStack_840._4_2_;
LAB_09a8bd16:
              pppppppuVar33[8] = ppppppuStack_828;
              *(undefined4 *)(pppppppuVar33 + 6) = (undefined4)uStack_838;
              *(undefined4 *)((long)pppppppuVar33 + 0x34) = uStack_838._4_4_;
              *(undefined4 *)(pppppppuVar33 + 7) = (undefined4)uStack_830;
              *(undefined4 *)((long)pppppppuVar33 + 0x3c) = uStack_830._4_4_;
            }
            else {
              func_0x0412e5e0(pppppppuVar33,uStack_858,CONCAT44(uStack_85c,uStack_860));
              *(undefined4 *)(pppppppuVar33 + 3) = auStack_850._0_4_;
              *(undefined4 *)((long)pppppppuVar33 + 0x1c) = auStack_850._4_4_;
              *(undefined4 *)(pppppppuVar33 + 4) = auStack_850._8_4_;
              *(undefined4 *)((long)pppppppuVar33 + 0x24) = uStack_844;
              *(undefined4 *)(pppppppuVar33 + 5) = (undefined4)uStack_840;
              *(undefined2 *)((long)pppppppuVar33 + 0x2c) = uStack_840._4_2_;
              if ((uStack_838 & 1) == 0) goto LAB_09a8bd16;
              func_0x0412e5e0(pppppppuVar33 + 6,ppppppuStack_828,uStack_830);
            }
            pppppppuVar31 = uStack_a20;
            pppppppuVar25 = pppppppuStack_ac8;
            *(undefined2 *)(pppppppuVar33 + 9) = uStack_820;
            pppppppuVar33 =
                 (ulong *******)(((long)uStack_a28 - (long)uStack_a20) + (long)_auStack_ad0);
            if (uStack_a28 != uStack_a20) {
              lVar16 = 0;
              do {
                *(undefined8 *)((long)pppppppuVar33 + lVar16 + 0x10) =
                     *(undefined8 *)((long)uStack_a28 + lVar16 + 0x10);
                uVar26 = *(undefined8 *)((byte *)((long)uStack_a28 + lVar16) + 8);
                *(undefined8 *)((long)pppppppuVar33 + lVar16) =
                     *(undefined8 *)((long)uStack_a28 + lVar16);
                *(undefined8 *)((byte *)((long)pppppppuVar33 + lVar16) + 8) = uVar26;
                pbVar1 = (byte *)((long)uStack_a28 + lVar16);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
                pbVar1[8] = 0;
                pbVar1[9] = 0;
                pbVar1[10] = 0;
                pbVar1[0xb] = 0;
                pbVar1[0xc] = 0;
                pbVar1[0xd] = 0;
                pbVar1[0xe] = 0;
                pbVar1[0xf] = 0;
                pbVar1 = (byte *)((long)uStack_a28 + lVar16 + 0x10);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
                pbVar1 = (byte *)((long)uStack_a28 + lVar16 + 0x18);
                uVar26 = *(undefined8 *)(pbVar1 + 8);
                pbVar4 = (byte *)((long)pppppppuVar33 + lVar16 + 0x18);
                *(undefined8 *)pbVar4 = *(undefined8 *)pbVar1;
                *(undefined8 *)(pbVar4 + 8) = uVar26;
                *(undefined2 *)((long)pppppppuVar33 + lVar16 + 0x2c) =
                     *(undefined2 *)((long)uStack_a28 + lVar16 + 0x2c);
                *(undefined4 *)((long)pppppppuVar33 + lVar16 + 0x28) =
                     *(undefined4 *)((long)uStack_a28 + lVar16 + 0x28);
                *(undefined8 *)((long)pppppppuVar33 + lVar16 + 0x40) =
                     *(undefined8 *)((long)uStack_a28 + lVar16 + 0x40);
                pbVar1 = (byte *)((long)uStack_a28 + lVar16 + 0x30);
                uVar43 = *(undefined4 *)(pbVar1 + 4);
                uVar45 = *(undefined4 *)(pbVar1 + 8);
                uVar47 = *(undefined4 *)(pbVar1 + 0xc);
                pbVar4 = (byte *)((long)pppppppuVar33 + lVar16 + 0x30);
                *(undefined4 *)pbVar4 = *(undefined4 *)pbVar1;
                *(undefined4 *)(pbVar4 + 4) = uVar43;
                *(undefined4 *)(pbVar4 + 8) = uVar45;
                *(undefined4 *)(pbVar4 + 0xc) = uVar47;
                pbVar1 = (byte *)((long)uStack_a28 + lVar16 + 0x30);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
                pbVar1[8] = 0;
                pbVar1[9] = 0;
                pbVar1[10] = 0;
                pbVar1[0xb] = 0;
                pbVar1[0xc] = 0;
                pbVar1[0xd] = 0;
                pbVar1[0xe] = 0;
                pbVar1[0xf] = 0;
                pbVar1 = (byte *)((long)uStack_a28 + lVar16 + 0x40);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
                *(undefined2 *)((long)pppppppuVar33 + lVar16 + 0x48) =
                     *(undefined2 *)((long)uStack_a28 + lVar16 + 0x48);
                lVar22 = lVar16 + 0x50;
                lVar16 = lVar16 + 0x50;
                pppppppuVar39 = uStack_a28;
              } while ((ulong *******)((long)uStack_a28 + lVar22) != uStack_a20);
              do {
                if (((ulong)pppppppuVar39[6] & 1) == 0) {
                  bVar5 = *(byte *)pppppppuVar39;
                }
                else {
                  func_0x0412a280(pppppppuVar39[8],(ulong)pppppppuVar39[6] & 0xfffffffffffffffe);
                  bVar5 = *(byte *)pppppppuVar39;
                }
                if ((bVar5 & 1) != 0) {
                  func_0x0412a280(pppppppuVar39[2],(ulong)*pppppppuVar39 & 0xfffffffffffffffe);
                }
                pppppppuVar39 = pppppppuVar39 + 10;
              } while (pppppppuVar39 != pppppppuVar31);
            }
            pppppppuVar31 = pppppppuStack_a18;
            pppppppuVar25 = pppppppuVar25 + 10;
            pppppppuStack_a18 = (ulong *******)auStack_ac0._0_8_;
            if (uStack_a28 != (ulong *******)0x0) {
              lVar16 = (long)pppppppuVar31 - (long)uStack_a28;
              pppppppuVar31 = uStack_a28;
              uStack_a28 = pppppppuVar33;
              uStack_a20 = pppppppuVar25;
              func_0x0412a280(pppppppuVar31,lVar16);
              pppppppuVar33 = uStack_a28;
            }
            uStack_a28 = pppppppuVar33;
            plVar14 = plStack_988;
            uStack_a20 = pppppppuVar25;
            if ((uStack_818 & 1) != 0) {
              if ((uStack_838 & 1) != 0) {
                func_0x0412a280(ppppppuStack_828,uStack_838 & 0xfffffffffffffffe);
              }
LAB_09a8bc31:
              plVar14 = plStack_988;
              if (((uint)auStack_868 & 1) != 0) {
                func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
                plVar14 = plStack_988;
              }
            }
          }
LAB_09a8b802:
          pauVar40 = pauVar40 + 3;
        } while (pauVar40 != pauVar9);
      }
      auStack_868 = (undefined1  [4])0x72637316;
      uStack_864 = 0x5f747069;
      uStack_860 = 0x6c617665;
      uStack_85c = uStack_85c & 0xffffff00;
      lVar19 = func_0x0d648bd0(pppppppuStack_890,auStack_868);
      if (lVar19 == 0) {
        bVar41 = false;
      }
      else {
        bVar41 = *(int *)(lVar19 + 0x28) <= *(int *)(pppppppuVar15 + 0x35);
      }
      if (((uint)auStack_868 & 1) != 0) {
        func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
      }
      plVar24 = (long *)param_7[4];
      if (plVar24 == (long *)0x0) {
LAB_09a8da4a:
        func_0x04891200();
LAB_09a8da4f:
        func_0x04882eb0();
LAB_09a8da54:
        func_0x0488efe0();
      }
      else {
        bVar5 = *(byte *)((long)pppppppuVar15 + 0xb4);
        cStack_a7a = (**(code **)(*plVar24 + 0x30))(plVar24,&uStack_a28);
        bStack_a79 = bVar5;
        puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
        if (puVar23 == (undefined8 *)0x0) {
          func_0x0eec74c0(8,0);
        }
        *puVar23 = &UNK_0f1cffc8;
        plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,400);
        if (plVar24 == (long *)0x0) {
          func_0x0eec74c0(400,0);
        }
        lVar19 = *plVar14;
        lVar28 = plVar14[1];
        if (plVar14[1] != 0) {
          LOCK();
          plVar14 = (long *)(plVar14[1] + 8);
          *plVar14 = *plVar14 + 1;
          UNLOCK();
        }
        *plVar24 = (long)&UNK_0f1cfe88;
        plVar24[1] = (long)&UNK_0f1cfee0;
        plVar24[2] = lVar19;
        plVar24[3] = lVar28;
        plVar24[6] = (long)ppppppuStack_968;
        plVar24[4] = (long)ppppppuStack_978;
        plVar24[5] = (long)ppppppuStack_970;
        ppppppuStack_978 = (ulong ******)0x0;
        ppppppuStack_970 = (ulong ******)0x0;
        ppppppuStack_968 = (ulong ******)0x0;
        plVar24[7] = (long)pppppuStack_960;
        plVar24[8] = (long)pppppuStack_958;
        *(undefined4 *)(plVar24 + 9) = uStack_950;
        *(undefined2 *)((long)plVar24 + 0x4c) = uStack_94c;
        plVar24[0xc] = CONCAT62(uStack_936,uStack_938);
        plVar24[10] = uStack_948;
        plVar24[0xb] = CONCAT62(uStack_93e,uStack_940);
        uStack_948 = 0;
        uStack_940 = 0;
        uStack_93e = 0;
        uStack_938 = 0;
        uStack_936 = 0;
        *(undefined2 *)(plVar24 + 0xd) = uStack_930;
        *(undefined4 *)(plVar24 + 0xe) = (undefined4)uStack_a28;
        *(undefined4 *)((long)plVar24 + 0x74) = uStack_a28._4_4_;
        *(undefined4 *)(plVar24 + 0xf) = (undefined4)uStack_a20;
        *(undefined4 *)((long)plVar24 + 0x7c) = uStack_a20._4_4_;
        plVar24[0x10] = (long)pppppppuStack_a18;
        uStack_a28 = (ulong *******)0x0;
        uStack_a20 = (ulong *******)0x0;
        pppppppuStack_a18 = (ulong *******)0x0;
        *(bool *)(plVar24 + 0x11) = bVar41;
        plVar24[0x12] = (long)pppppppuVar15[0x30];
        plVar24[0x13] = 0;
        ppppppuVar34 = pppppppuVar15[0x31];
        if (((ulong)ppppppuVar34 & 0x80000000000000) != 0) {
          lVar28 = *(long *)(((ulong)ppppppuVar34 & 0xff00ffffffffffff) - 8);
          lVar19 = lVar28 + 9;
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && plVar14 == (long *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *plVar14 = lVar28;
          func_0x0eee2f00(plVar14 + 1,(ulong)ppppppuVar34 & 0xff00ffffffffffff,lVar28);
          *(undefined1 *)((long)plVar14 + lVar28 + 8) = 0;
          ppppppuVar34 = (ulong ******)
                         ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        plVar24[0x13] = (long)ppppppuVar34;
        plVar24[0x14] = 0;
        ppppppuVar34 = pppppppuVar15[0x32];
        if (((ulong)ppppppuVar34 & 0x80000000000000) != 0) {
          lVar28 = *(long *)(((ulong)ppppppuVar34 & 0xff00ffffffffffff) - 8);
          lVar19 = lVar28 + 9;
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && plVar14 == (long *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *plVar14 = lVar28;
          func_0x0eee2f00(plVar14 + 1,(ulong)ppppppuVar34 & 0xff00ffffffffffff,lVar28);
          *(undefined1 *)((long)plVar14 + lVar28 + 8) = 0;
          ppppppuVar34 = (ulong ******)
                         ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        plVar24[0x14] = (long)ppppppuVar34;
        *(undefined2 *)((long)plVar24 + 0xac) = *(undefined2 *)((long)pppppppuStack_898 + 4);
        *(undefined4 *)(plVar24 + 0x15) = *(undefined4 *)pppppppuStack_898;
        uVar43 = *(undefined4 *)((long)pppppppuStack_900 + 4);
        uVar45 = *(undefined4 *)(pppppppuStack_900 + 1);
        uVar47 = *(undefined4 *)((long)pppppppuStack_900 + 0xc);
        *(undefined4 *)(plVar24 + 0x16) = *(undefined4 *)pppppppuStack_900;
        *(undefined4 *)((long)plVar24 + 0xb4) = uVar43;
        *(undefined4 *)(plVar24 + 0x17) = uVar45;
        *(undefined4 *)((long)plVar24 + 0xbc) = uVar47;
        plVar24[0x18] = (long)pppppppuVar15[0x27];
        plVar24[0x19] = 0;
        ppppppuVar34 = pppppppuVar15[0x28];
        plStack_8a0 = plVar24 + 0x13;
        if (((ulong)ppppppuVar34 & 0x80000000000000) != 0) {
          lVar28 = *(long *)(((ulong)ppppppuVar34 & 0xff00ffffffffffff) - 8);
          lVar19 = lVar28 + 9;
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && plVar14 == (long *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *plVar14 = lVar28;
          func_0x0eee2f00(plVar14 + 1,(ulong)ppppppuVar34 & 0xff00ffffffffffff,lVar28);
          *(undefined1 *)((long)plVar14 + lVar28 + 8) = 0;
          ppppppuVar34 = (ulong ******)
                         ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        plStack_910 = plVar24 + 0x19;
        plVar24[0x19] = (long)ppppppuVar34;
        plVar24[0x1a] = 0;
        ppppppuVar34 = pppppppuVar15[0x29];
        if (((ulong)ppppppuVar34 & 0x80000000000000) != 0) {
          lVar28 = *(long *)(((ulong)ppppppuVar34 & 0xff00ffffffffffff) - 8);
          lVar19 = lVar28 + 9;
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && plVar14 == (long *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *plVar14 = lVar28;
          func_0x0eee2f00(plVar14 + 1,(ulong)ppppppuVar34 & 0xff00ffffffffffff,lVar28);
          *(undefined1 *)((long)plVar14 + lVar28 + 8) = 0;
          ppppppuVar34 = (ulong ******)
                         ((ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        plVar24[0x1a] = (long)ppppppuVar34;
        *(byte *)(plVar24 + 0x1b) = *(byte *)(pppppppuVar15 + 0x2a);
        puVar20 = (uint *)(plVar24 + 0x1c);
        if ((_auStack_9e8 & 1) == 0) {
          plVar24[0x1e] = (long)pppppppuStack_9d8;
          *puVar20 = (uint)auStack_9e8;
          *(undefined4 *)((long)plVar24 + 0xe4) = uStack_9e4;
          *(undefined4 *)(plVar24 + 0x1d) = (undefined4)uStack_9e0;
          *(undefined4 *)((long)plVar24 + 0xec) = uStack_9e0._4_4_;
        }
        else {
          func_0x0412e5e0(puVar20,pppppppuStack_9d8,uStack_9e0);
        }
        uStack_a78 = (ulong *******)puVar20;
        iVar13 = func_0x09a87880(puVar20);
        *(int *)(plVar24 + 0x1f) = iVar13;
        puVar20 = (uint *)(plVar24 + 0x20);
        for (puVar37 = _DAT_0f643c88; puVar37 != (undefined8 *)0x0; puVar37 = (undefined8 *)*puVar37
            ) {
          if ((*(byte *)(puVar37 + 2) & 1) == 0) {
            uStack_858 = (ulong *******)puVar37[4];
            auStack_868 = *(undefined1 (*) [4])(puVar37 + 2);
            uStack_864 = *(uint *)((long)puVar37 + 0x14);
            uStack_860 = *(uint *)(puVar37 + 3);
            uStack_85c = *(uint *)((long)puVar37 + 0x1c);
          }
          else {
            func_0x0412e5e0(auStack_868,puVar37[4],puVar37[3]);
          }
          auStack_850._0_4_ = *(int *)(puVar37 + 5);
          if (iVar13 == *(int *)(puVar37 + 5)) {
            if (((uint)auStack_868 & 1) == 0) {
              plVar24[0x22] = (long)uStack_858;
              *puVar20 = (uint)auStack_868;
              *(uint *)((long)plVar24 + 0x104) = uStack_864;
              *(uint *)(plVar24 + 0x21) = uStack_860;
              *(uint *)((long)plVar24 + 0x10c) = uStack_85c;
              param_2 = lStack_ae0;
            }
            else {
              func_0x0412e5e0(puVar20,uStack_858,CONCAT44(uStack_85c,uStack_860));
              param_2 = lStack_ae0;
              if (((uint)auStack_868 & 1) != 0) {
                func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
              }
            }
            goto LAB_09a8c539;
          }
          if (((uint)auStack_868 & 1) != 0) {
            func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
          }
        }
        puVar20[0] = 0;
        puVar20[1] = 0;
        plVar24[0x21] = 0;
        plVar24[0x22] = 0;
        param_2 = lStack_ae0;
LAB_09a8c539:
        puVar2 = (uint *)(plVar24 + 0x23);
        (**(code **)(*(long *)plVar24[2] + 0x28))(puVar2,(long *)plVar24[2],pppppppuStack_9f0);
        (**(code **)(*(long *)plVar24[2] + 0x18))(plVar24 + 0x26,(long *)plVar24[2],puVar20);
        plVar24[0x2c] = 0;
        plVar24[0x29] = 0;
        plVar24[0x2a] = 0;
        *(undefined1 *)(plVar24 + 0x2b) = 0;
        *(byte *)(plVar24 + 0x2d) = bStack_a79;
        cVar12 = cStack_a7a;
        if (cStack_a7a == '\x03') {
          cVar12 = '\x01';
        }
        *(char *)((long)plVar24 + 0x169) = cVar12;
        plVar24[0x2e] = 0;
        plVar24[0x2f] = 0;
        plVar24[0x30] = (long)puVar23;
        plVar24[0x31] = 0;
        pppppppuStack_a68 = (ulong *******)0x0;
        pppppppuStack_a60 = (ulong *******)0x0;
        pppppppuStack_a58 = (ulong *******)0x0;
        auStack_a08 = (undefined1  [8])0x0;
        pppppppuStack_a00 = (ulong *******)0x0;
        pppppppuStack_9f8 = (ulong *******)0x0;
        func_0x0488f040(auStack_a08,plVar24[0x26],plVar24[0x27],
                        (plVar24[0x27] - plVar24[0x26] >> 3) * -0x5555555555555555);
        if ((*puVar2 & 1) == 0) {
          pppppppuStack_9b8 = (ulong *******)plVar24[0x25];
          auStack_9c8 = (undefined1  [4])*puVar2;
          uStack_9c4 = *(uint *)((long)plVar24 + 0x11c);
          uStack_9c0 = *(uint *)(plVar24 + 0x24);
          uStack_9bc = *(uint *)((long)plVar24 + 0x124);
        }
        else {
          func_0x0412e5e0(auStack_9c8,plVar24[0x25],plVar24[0x24]);
        }
        puVar20 = (uint *)uStack_a78;
        if ((*(byte *)(plVar24 + 4) & 1) == 0) {
          pppppppuStack_ac8 = (ulong *******)plVar24[6];
          _auStack_ad8 = (ulong *******)plVar24[4];
          _auStack_ad0 = (ulong *******)plVar24[5];
        }
        else {
          func_0x0412e5e0(auStack_ad8,plVar24[6],plVar24[5]);
        }
        auStack_ac0._0_8_ = plVar24[7];
        unique0x10003cce = (ulong ******)plVar24[8];
        uStack_ab0 = CONCAT44(CONCAT22(uStack_ab0._6_2_,*(undefined2 *)((long)plVar24 + 0x4c)),
                              (int)plVar24[9]);
        if ((*(byte *)(plVar24 + 10) & 1) == 0) {
          pppppppuStack_a98 = (ulong *******)plVar24[0xc];
          uStack_aa8 = (ulong *******)plVar24[10];
          uStack_aa0 = (ulong *******)plVar24[0xb];
        }
        else {
          func_0x0412e5e0(&uStack_aa8,plVar24[0xc],plVar24[0xb]);
        }
        sStack_a90 = (short)plVar24[0xd];
        if ((*(byte *)(plVar24 + 0x1c) & 1) == 0) {
          pppppppuStack_998 = *(ulong ********)(puVar20 + 4);
          auStack_9a8 = (undefined1  [4])*puVar20;
          uStack_9a4 = puVar20[1];
          uStack_9a0 = puVar20[2];
          uStack_99c = puVar20[3];
        }
        else {
          func_0x0412e5e0(auStack_9a8,plVar24[0x1e],plVar24[0x1d]);
        }
        pppppppuVar25 = pppppppuStack_a00;
        if (((uint)auStack_9c8 & 1) == 0) {
          ppppppuVar34 = (ulong ******)(ulong)(auStack_9c8[0] >> 1);
          if (ppppppuVar34 == (ulong ******)0x0) goto LAB_09a8c812;
LAB_09a8c771:
          if (auStack_a08 != (undefined1  [8])pppppppuStack_a00) {
            pppppppuVar33 = (ulong *******)(auStack_9c8 + 1);
            if (((uint)auStack_9c8 & 1) != 0) {
              pppppppuVar33 = pppppppuStack_9b8;
            }
            pppppppuVar31 = (ulong *******)((long)auStack_a08 + 0x10);
            do {
              bVar5 = *(byte *)(pppppppuVar31 + -2);
              if ((bVar5 & 1) == 0) {
                ppppppuVar35 = (ulong ******)(ulong)(bVar5 >> 1);
              }
              else {
                ppppppuVar35 = pppppppuVar31[-1];
              }
              if (ppppppuVar35 == ppppppuVar34) {
                if ((bVar5 & 1) == 0) {
                  ppppppuVar35 = (ulong ******)((long)pppppppuVar31 + -0xf);
                }
                else {
                  ppppppuVar35 = *pppppppuVar31;
                }
                iVar13 = bcmp(ppppppuVar35,pppppppuVar33,ppppppuVar34);
                if (iVar13 == 0) {
                  pppppppuStack_b20 = (ulong *******)0x0;
                  pppppppuStack_b30 = (ulong *******)0x0;
                  iVar13 = func_0x09a87880(auStack_9a8);
                  auVar29 = auStack_a08;
                  goto joined_r0x09a8d257;
                }
              }
              pppppppuVar39 = pppppppuVar31 + 1;
              pppppppuVar31 = pppppppuVar31 + 3;
            } while (pppppppuVar39 != pppppppuVar25);
          }
          func_0x0d81cb10(auStack_a48,auStack_ad8);
          pppppppuVar33 = pppppppuStack_a38;
          pppppppuVar25 = pppppppuStack_a40;
          if (((ulong)auStack_a48 & 1) == 0) {
            pppppppuVar33 = (ulong *******)(auStack_a48 + 1);
            pppppppuVar25 = (ulong *******)((ulong)auStack_a48 >> 1 & 0x7f);
          }
          auStack_868 = SUB84(pppppppuVar33,0);
          uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
          uStack_860 = (uint)pppppppuVar25;
          uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
          auStack_850._0_8_ = CONCAT44(uStack_9bc,uStack_9c0);
          uStack_858 = pppppppuStack_9b8;
          if (((uint)auStack_9c8 & 1) == 0) {
            uStack_858 = (ulong *******)(auStack_9c8 + 1);
            auStack_850._0_8_ = (ulong)(auStack_9c8[0] >> 1);
          }
          func_0x0470d9a0(auStack_b18,&UNK_012c7c23,0x2e,0xdd,auStack_868);
          pppppppuStack_b20 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
          ;
          if (pppppppuStack_b20 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          pppppppuStack_b20[2] = (ulong ******)uStack_b08;
          *pppppppuStack_b20 = (ulong ******)_auStack_b18;
          pppppppuStack_b20[1] = (ulong ******)uStack_b10;
          _auStack_b18 = (ulong *******)0x0;
          uStack_b10 = (ulong *******)0x0;
          uStack_b08 = (ulong *******)0x0;
          auVar29 = auStack_a48;
          pppppppuVar25 = pppppppuStack_a38;
        }
        else {
          ppppppuVar34 = (ulong ******)CONCAT44(uStack_9bc,uStack_9c0);
          if (ppppppuVar34 != (ulong ******)0x0) goto LAB_09a8c771;
LAB_09a8c812:
          func_0x0d81cb10(auStack_b18,auStack_ad8);
          auStack_a48 = (undefined1  [8])uStack_b08;
          pppppppuStack_a40 = uStack_b10;
          if (((ulong)_auStack_b18 & 1) == 0) {
            auStack_a48 = (undefined1  [8])(auStack_b18 + 1);
            pppppppuStack_a40 = (ulong *******)((ulong)_auStack_b18 >> 1 & 0x7f);
          }
          func_0x0470d9a0(auStack_868,&UNK_012c7bf5,0x2d,0xd,auStack_a48);
          pppppppuStack_b20 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
          ;
          if (pppppppuStack_b20 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          pppppppuStack_b20[2] = (ulong ******)uStack_858;
          *pppppppuStack_b20 = (ulong ******)CONCAT44(uStack_864,auStack_868);
          pppppppuStack_b20[1] = (ulong ******)CONCAT44(uStack_85c,uStack_860);
          auStack_868 = (undefined1  [4])0x0;
          uStack_864 = 0;
          uStack_860 = 0;
          uStack_85c = 0;
          uStack_858 = (ulong *******)0x0;
          auVar29 = (undefined1  [8])_auStack_b18;
          pppppppuVar25 = uStack_b08;
        }
        pppppppuStack_b30 = pppppppuStack_b20 + 3;
        pppppppuStack_a68 = pppppppuStack_b20;
        pppppppuStack_a60 = pppppppuStack_b30;
        pppppppuStack_a58 = pppppppuStack_b30;
        if (((ulong)auVar29 & 1) != 0) {
          func_0x0412a280(pppppppuVar25,(ulong)auVar29 & 0xfffffffffffffffe);
        }
        iVar13 = func_0x09a87880(auStack_9a8);
        auVar29 = auStack_a08;
joined_r0x09a8d257:
        auStack_a08 = auVar29;
        if (iVar13 == 0) {
          func_0x0d81cb10(auStack_a48,auStack_ad8);
          pppppppuVar33 = pppppppuStack_a38;
          pppppppuVar25 = pppppppuStack_a40;
          if (((ulong)auStack_a48 & 1) == 0) {
            pppppppuVar33 = (ulong *******)(auStack_a48 + 1);
            pppppppuVar25 = (ulong *******)((ulong)auStack_a48 >> 1 & 0x7f);
          }
          auStack_868 = SUB84(pppppppuVar33,0);
          uStack_864 = (uint)((ulong)pppppppuVar33 >> 0x20);
          uStack_860 = (uint)pppppppuVar25;
          uStack_85c = (uint)((ulong)pppppppuVar25 >> 0x20);
          auStack_850._0_8_ = CONCAT44(uStack_99c,uStack_9a0);
          uStack_858 = pppppppuStack_998;
          if (((uint)auStack_9a8 & 1) == 0) {
            uStack_858 = (ulong *******)(auStack_9a8 + 1);
            auStack_850._0_8_ = (ulong)(auStack_9a8[0] >> 1);
          }
          func_0x0470d9a0(auStack_b18,&UNK_011c29e3,0x2d,0xdd,auStack_868);
          uStack_a78 = (ulong *******)((long)pppppppuStack_b30 - (long)pppppppuStack_b20);
          uVar30 = ((long)uStack_a78 >> 3) * -0x5555555555555555;
          uVar36 = uVar30 + 1;
          if (uVar36 < 0xaaaaaaaaaaaaaab) {
            uVar32 = ((long)uStack_a78 >> 3) * 0x5555555555555556;
            if (uVar36 < uVar32) {
              uVar36 = uVar32;
            }
            if (0x555555555555554 < uVar30) {
              uVar36 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar36 < 0xaaaaaaaaaaaaaab) {
              pppppppuVar25 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x18);
              if (pppppppuVar25 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar36 * 0x18,0);
              }
              pppppppuVar33 = uStack_a78;
              pppppppuStack_9f0 = pppppppuVar25 + uVar36 * 3;
              *(ulong ********)((long)(pppppppuVar25 + 2) + (long)uStack_a78) = uStack_b08;
              *(ulong ********)((long)pppppppuVar25 + (long)uStack_a78) = _auStack_b18;
              *(ulong ********)((byte *)((long)pppppppuVar25 + (long)uStack_a78) + 8) = uStack_b10;
              _auStack_b18 = (ulong *******)0x0;
              uStack_b10 = (ulong *******)0x0;
              uStack_b08 = (ulong *******)0x0;
              pppppppuStack_b30 = (ulong *******)((long)(pppppppuVar25 + 3) + (long)uStack_a78);
              func_0x0eee2f00(pppppppuVar25,pppppppuStack_b20,uStack_a78);
              pppppppuStack_a58 = pppppppuStack_9f0;
              pppppppuVar31 = pppppppuStack_b30;
              pppppppuStack_a68 = pppppppuVar25;
              if (pppppppuStack_b20 != (ulong *******)0x0) {
                func_0x0412a280(pppppppuStack_b20,pppppppuVar33);
                pppppppuVar31 = pppppppuStack_b30;
                if (((ulong)_auStack_b18 & 1) != 0) {
                  pppppppuStack_a60 = pppppppuStack_b30;
                  func_0x0412a280(uStack_b08,(ulong)_auStack_b18 & 0xfffffffffffffffe);
                  pppppppuVar31 = pppppppuStack_a60;
                }
              }
              pppppppuStack_a60 = pppppppuVar31;
              if (((ulong)auStack_a48 & 1) != 0) {
                func_0x0412a280(pppppppuStack_a38,(ulong)auStack_a48 & 0xfffffffffffffffe);
                pppppppuVar33 = pppppppuStack_9f0;
                pppppppuVar31 = pppppppuStack_a68;
                pppppppuVar39 = pppppppuStack_a60;
                pppppppuVar21 = pppppppuStack_a58;
                goto joined_r0x09a8d1e0;
              }
              if (((uint)auStack_9a8 & 1) != 0) goto LAB_09a8cf90;
              goto LAB_09a8d452;
            }
            goto LAB_09a8da4f;
          }
          goto LAB_09a8da54;
        }
        uStack_a78 = pppppppuStack_b30;
        pppppppuStack_9f0 = pppppppuStack_a00;
        pppppppuVar33 = pppppppuStack_b30;
        pppppppuVar25 = pppppppuStack_b20;
        pppppppuVar31 = pppppppuStack_a68;
        pppppppuVar39 = pppppppuStack_a60;
        pppppppuVar21 = pppppppuStack_a58;
        if (auVar29 != (undefined1  [8])pppppppuStack_a00) {
LAB_09a8caa7:
          do {
            if (((ulong)*(ulong *******)auVar29 & 1) == 0) {
              uStack_b08 = *(ulong ********)((long)auVar29 + 0x10);
              _auStack_b18 = *(ulong ********)auVar29;
              uStack_b10 = *(ulong ********)((long)auVar29 + 8);
            }
            else {
              func_0x0412e5e0(auStack_b18,*(ulong *******)((long)auVar29 + 0x10),
                              *(ulong *******)((long)auVar29 + 8));
            }
            pppppppuStack_448 = uStack_b08;
            pppppppuStack_440 = uStack_b10;
            if (((ulong)_auStack_b18 & 1) == 0) {
              pppppppuStack_448 = (ulong *******)(auStack_b18 + 1);
              pppppppuStack_440 = (ulong *******)((ulong)_auStack_b18 >> 1 & 0x7f);
            }
            pppppppuVar33 = (ulong *******)&pppppppuStack_448;
            func_0x09a8f590(auStack_868);
            if (((ulong)_auStack_b18 & 1) != 0) {
              pppppppuVar33 = (ulong *******)((ulong)_auStack_b18 & 0xfffffffffffffffe);
              func_0x0412a280(uStack_b08);
            }
            pppppppuVar25 = (ulong *******)func_0x0eee2e90(auStack_868);
            if ((ulong *******)0xfffffffffffffff7 < pppppppuVar25) goto LAB_09a8d9ae;
            if (pppppppuVar25 < (ulong *******)0x17) {
              _auStack_b18 = (ulong *******)
                             CONCAT71(stack0xfffffffffffff4e9,(char)pppppppuVar25 * '\x02');
              pppppppuVar33 = (ulong *******)(auStack_b18 + 1);
              if (pppppppuVar25 != (ulong *******)0x0) goto LAB_09a8cbd5;
            }
            else {
              uVar36 = ((ulong)pppppppuVar25 | 7) + 1;
              if (((ulong)pppppppuVar25 | 7) == 0x17) {
                uVar36 = 0x1a;
              }
              pppppppuVar33 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36);
              if (pppppppuVar33 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar36,0);
              }
              _auStack_b18 = (ulong *******)(uVar36 | 1);
              uStack_b10 = pppppppuVar25;
              uStack_b08 = pppppppuVar33;
LAB_09a8cbd5:
              func_0x0eee2f00(pppppppuVar33,auStack_868,pppppppuVar25);
            }
            *(byte *)((long)pppppppuVar33 + (long)pppppppuVar25) = 0;
            lVar19 = func_0x09acdb60(auStack_b18);
            if (lVar19 == 0) {
              bVar41 = false;
            }
            else {
              bVar41 = *(int *)(lVar19 + 0x28) == 1;
            }
            if (((ulong)_auStack_b18 & 1) != 0) {
              func_0x0412a280(uStack_b08,(ulong)_auStack_b18 & 0xfffffffffffffffe);
            }
            if (!bVar41) {
              func_0x0d81cb10(&bStack_928,auStack_ad8);
              param_2 = lStack_ae0;
              _auStack_b18 = pppppppuStack_918;
              uStack_b10 = (ulong *******)auStack_927._7_8_;
              if ((bStack_928 & 1) == 0) {
                _auStack_b18 = (ulong *******)auStack_927;
                uStack_b10 = (ulong *******)(ulong)(bStack_928 >> 1);
              }
              bVar41 = (*(byte *)auVar29 & 1) != 0;
              uStack_b08 = (ulong *******)((long)auVar29 + 1);
              if (bVar41) {
                uStack_b08 = *(ulong ********)((long)auVar29 + 0x10);
              }
              pppppppuStack_b00 = (ulong *******)(ulong)(*(byte *)auVar29 >> 1);
              if (bVar41) {
                pppppppuStack_b00 = *(ulong ********)((long)auVar29 + 8);
              }
              uStack_af0 = CONCAT44(uStack_99c,uStack_9a0);
              pppppppuStack_af8 = pppppppuStack_998;
              if (((uint)auStack_9a8 & 1) == 0) {
                pppppppuStack_af8 = (ulong *******)(auStack_9a8 + 1);
                uStack_af0 = (ulong)(auStack_9a8[0] >> 1);
              }
              func_0x0470d9a0(auStack_a48,&UNK_0149ee2c,0x38,0xddd,auStack_b18);
              if (pppppppuStack_b30 < uStack_a78) {
                pppppppuStack_b30[2] = (ulong ******)pppppppuStack_a38;
                *pppppppuStack_b30 = (ulong ******)auStack_a48;
                pppppppuStack_b30[1] = (ulong ******)pppppppuStack_a40;
                auStack_a48 = (undefined1  [8])0x0;
                pppppppuStack_a40 = (ulong *******)0x0;
                pppppppuStack_a38 = (ulong *******)0x0;
                pppppppuVar25 = pppppppuStack_b20;
              }
              else {
                lVar19 = (long)pppppppuStack_b30 - (long)pppppppuStack_b20;
                uVar36 = (lVar19 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar36) goto LAB_09a8da1b;
                lVar16 = (long)uStack_a78 - (long)pppppppuStack_b20;
                lVar28 = lVar16 >> 3;
                uVar30 = lVar28 * 0x5555555555555556;
                if (uVar36 < uVar30) {
                  uVar36 = uVar30;
                }
                if (0x555555555555554 < (ulong)(lVar28 * -0x5555555555555555)) {
                  uVar36 = 0xaaaaaaaaaaaaaaa;
                }
                pppppppuVar33 = pppppppuStack_b30;
                if (0xaaaaaaaaaaaaaaa < uVar36) goto LAB_09a8d9ec;
                pppppppuVar25 =
                     (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x18)
                ;
                if (pppppppuVar25 == (ulong *******)0x0) {
                  func_0x0eec74c0(uVar36 * 0x18,0);
                }
                uStack_a78 = pppppppuVar25 + uVar36 * 3;
                pppppppuStack_b30 = (ulong *******)((long)pppppppuVar25 + lVar19);
                *(ulong ********)((long)pppppppuVar25 + lVar19 + 0x10) = pppppppuStack_a38;
                *(undefined1 (*) [8])((long)pppppppuVar25 + lVar19) = auStack_a48;
                *(ulong ********)((byte *)((long)pppppppuVar25 + lVar19) + 8) = pppppppuStack_a40;
                auStack_a48 = (undefined1  [8])0x0;
                pppppppuStack_a40 = (ulong *******)0x0;
                pppppppuStack_a38 = (ulong *******)0x0;
                func_0x0eee2f00(pppppppuVar25,pppppppuStack_b20,lVar19);
                param_2 = lStack_ae0;
                if (pppppppuStack_b20 != (ulong *******)0x0) {
                  func_0x0412a280(pppppppuStack_b20,lVar16);
                  param_2 = lStack_ae0;
                  if (((ulong)auStack_a48 & 1) != 0) {
                    func_0x0412a280(pppppppuStack_a38,(ulong)auStack_a48 & 0xfffffffffffffffe);
                    param_2 = lStack_ae0;
                  }
                }
              }
              pppppppuStack_b20 = pppppppuVar25;
              if ((bStack_928 & 1) != 0) {
                func_0x0412a280(pppppppuStack_918,
                                CONCAT71(auStack_927._0_7_,bStack_928) & 0xfffffffffffffffe);
              }
              pppppppuStack_b30 = pppppppuStack_b30 + 3;
              auVar29 = (undefined1  [8])((long)auVar29 + 0x18);
              pppppppuVar33 = uStack_a78;
              pppppppuVar25 = pppppppuStack_b20;
              pppppppuVar31 = pppppppuStack_b20;
              pppppppuVar39 = pppppppuStack_b30;
              pppppppuVar21 = uStack_a78;
              if (auVar29 == (undefined1  [8])pppppppuStack_9f0) break;
              goto LAB_09a8caa7;
            }
            auVar29 = (undefined1  [8])((long)auVar29 + 0x18);
            param_2 = lStack_ae0;
            pppppppuVar33 = uStack_a78;
            pppppppuVar25 = pppppppuStack_b20;
            pppppppuVar31 = pppppppuStack_b20;
            pppppppuVar39 = pppppppuStack_b30;
            pppppppuVar21 = uStack_a78;
          } while (auVar29 != (undefined1  [8])pppppppuStack_9f0);
        }
joined_r0x09a8d1e0:
        pppppppuStack_a58 = pppppppuVar21;
        pppppppuStack_a60 = pppppppuVar39;
        pppppppuStack_a68 = pppppppuVar31;
        pppppppuStack_9f0 = pppppppuVar33;
        if (((uint)auStack_9a8 & 1) == 0) {
LAB_09a8d452:
          if (((ulong)uStack_aa8 & 1) == 0) goto LAB_09a8d460;
LAB_09a8cfb7:
          func_0x0412a280(pppppppuStack_a98,(ulong)uStack_aa8 & 0xfffffffffffffffe);
          if (((ulong)_auStack_ad8 & 1) != 0) goto LAB_09a8cfdb;
LAB_09a8d46b:
          if (((uint)auStack_9c8 & 1) == 0) goto LAB_09a8d479;
LAB_09a8cfff:
          func_0x0412a280(pppppppuStack_9b8,CONCAT44(uStack_9c4,auStack_9c8) & 0xfffffffffffffffe);
          auVar29 = auStack_a08;
          pppppppuVar33 = pppppppuStack_a00;
          pppppppuStack_b20 = pppppppuVar25;
          if (auStack_a08 == (undefined1  [8])0x0) goto LAB_09a8d02e;
joined_r0x09a8d49d:
          for (; auVar11 = auStack_a08, auStack_a08 != (undefined1  [8])pppppppuVar33;
              pppppppuVar33 = pppppppuVar33 + -3) {
            auStack_a08 = auVar29;
            if (((ulong)pppppppuVar33[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
            }
            auVar29 = auStack_a08;
            auStack_a08 = auVar11;
          }
          pppppppuStack_a00 = (ulong *******)auStack_a08;
          auStack_a08 = auVar29;
          func_0x0412a280(auVar29,(long)pppppppuStack_9f8 - (long)auVar29);
          if (pppppppuStack_b20 == pppppppuStack_b30) goto LAB_09a8d503;
LAB_09a8d039:
          lVar19 = lStack_ae8 + 0x80;
          pppppppuVar25 = pppppppuStack_b20;
          do {
            if (((ulong)*pppppppuVar25 & 1) == 0) {
              uStack_858 = (ulong *******)pppppppuVar25[2];
              auStack_868 = *(undefined1 (*) [4])pppppppuVar25;
              uStack_864 = *(uint *)((long)pppppppuVar25 + 4);
              uStack_860 = *(uint *)(pppppppuVar25 + 1);
              uStack_85c = *(uint *)((long)pppppppuVar25 + 0xc);
            }
            else {
              func_0x0412e5e0(auStack_868,pppppppuVar25[2],pppppppuVar25[1]);
            }
            puVar20 = *(uint **)(lStack_ae8 + 0x88);
            if (puVar20 < *(uint **)(lStack_ae8 + 0x90)) {
              *(ulong ********)(puVar20 + 4) = uStack_858;
              *puVar20 = (uint)auStack_868;
              puVar20[1] = uStack_864;
              puVar20[2] = uStack_860;
              puVar20[3] = uStack_85c;
              *(uint **)(lStack_ae8 + 0x88) = puVar20 + 6;
            }
            else {
              uVar26 = func_0x09ab3f10(lVar19,auStack_868);
              *(undefined8 *)(lStack_ae8 + 0x88) = uVar26;
              if (((uint)auStack_868 & 1) != 0) {
                func_0x0412a280(uStack_858,CONCAT44(uStack_864,auStack_868) & 0xfffffffffffffffe);
              }
            }
            pppppppuVar25 = pppppppuVar25 + 3;
          } while (pppppppuVar25 != pppppppuStack_b30);
          pppppppuVar25 = pppppppuStack_b30;
          if (*(byte *)((long)pppppppuVar15 + 0xb4) == 0xc) {
            *(undefined1 *)(param_2 + 0x58) = 1;
            if (pppppppuStack_b20 == (ulong *******)0x0) goto joined_r0x09a8d148;
LAB_09a8d169:
            do {
              if (((ulong)pppppppuVar25[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar25[-1],(ulong)pppppppuVar25[-3] & 0xfffffffffffffffe);
              }
              pppppppuVar25 = pppppppuVar25 + -3;
            } while (pppppppuVar25 != pppppppuStack_b20);
            goto LAB_09a8d62f;
          }
          if (pppppppuStack_b20 != (ulong *******)0x0) goto LAB_09a8d169;
joined_r0x09a8d148:
          if (plVar24 != (long *)0x0) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
          goto LAB_09a8d658;
        }
LAB_09a8cf90:
        func_0x0412a280(pppppppuStack_998,CONCAT44(uStack_9a4,auStack_9a8) & 0xfffffffffffffffe);
        if (((ulong)uStack_aa8 & 1) != 0) goto LAB_09a8cfb7;
LAB_09a8d460:
        if (((ulong)_auStack_ad8 & 1) == 0) goto LAB_09a8d46b;
LAB_09a8cfdb:
        func_0x0412a280(pppppppuStack_ac8,(ulong)_auStack_ad8 & 0xfffffffffffffffe);
        if (((uint)auStack_9c8 & 1) != 0) goto LAB_09a8cfff;
LAB_09a8d479:
        auVar29 = auStack_a08;
        pppppppuVar33 = pppppppuStack_a00;
        pppppppuStack_b20 = pppppppuVar25;
        if (auStack_a08 != (undefined1  [8])0x0) goto joined_r0x09a8d49d;
LAB_09a8d02e:
        pppppppuStack_b20 = pppppppuVar25;
        if (pppppppuVar25 != pppppppuStack_b30) goto LAB_09a8d039;
LAB_09a8d503:
        puVar23 = *(undefined8 **)(param_2 + 0x30);
        if (puVar23 < *(undefined8 **)(param_2 + 0x38)) {
          *puVar23 = plVar24;
          puVar23 = puVar23 + 1;
LAB_09a8d61a:
          *(undefined8 **)(lStack_ae0 + 0x30) = puVar23;
          param_2 = lStack_ae0;
          if (pppppppuStack_b20 == (ulong *******)0x0) goto LAB_09a8d658;
          plVar24 = (long *)0x0;
LAB_09a8d62f:
          pppppppuStack_a60 = pppppppuStack_b20;
          func_0x0412a280(pppppppuStack_b20,(long)pppppppuStack_9f0 - (long)pppppppuStack_b20);
          goto joined_r0x09a8d148;
        }
        lVar19 = *(long *)(param_2 + 0x28);
        lVar28 = (long)puVar23 - lVar19;
        uVar36 = (lVar28 >> 3) + 1;
        if (uVar36 >> 0x3d != 0) goto LAB_09a8da5e;
        uVar32 = (long)*(undefined8 **)(param_2 + 0x38) - lVar19;
        uVar30 = (long)uVar32 >> 2;
        if ((ulong)((long)uVar32 >> 2) <= uVar36) {
          uVar30 = uVar36;
        }
        if (0x7ffffffffffffff7 < uVar32) {
          uVar30 = 0x1fffffffffffffff;
        }
        lStack_ae8 = lVar19;
        if (uVar30 < 0x2000000000000000) {
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 8);
          if (lVar19 == 0) {
            func_0x0eec74c0(uVar30 * 8,0);
          }
          lVar16 = lStack_ae8;
          pppppppuStack_b30 = (ulong *******)(lVar19 + uVar30 * 8);
          *(long **)(lVar19 + lVar28) = plVar24;
          puVar23 = (undefined8 *)(lVar19 + lVar28 + 8);
          lVar19 = lVar19 + lVar28 + (lVar28 >> 3) * -8;
          func_0x0eee2f00(lVar19,lStack_ae8,lVar28);
          *(long *)(lStack_ae0 + 0x28) = lVar19;
          *(undefined8 **)(lStack_ae0 + 0x30) = puVar23;
          *(ulong ********)(lStack_ae0 + 0x38) = pppppppuStack_b30;
          if (lVar16 != 0) {
            func_0x0412a280(lVar16,uVar32);
          }
          goto LAB_09a8d61a;
        }
      }
      func_0x04882eb0();
LAB_09a8da5e:
      uVar26 = func_0x09ab2b40();
      func_0x041084d6(&DAT_0f6441b0);
      func_0x09a0c840(&uStack_a28);
      if ((_auStack_9e8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_9d8,_auStack_9e8 & 0xfffffffffffffffe);
      }
      func_0x065297e0(&ppppppuStack_978);
      func_0x09a8f740(param_1);
      func_0x0eee2d70(uVar26);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(byte *)((long)pppppppuVar15 + 0xb4) == 0xc) {
    *(undefined1 *)(param_2 + 0x58) = 1;
  }
LAB_09a8d658:
  pppppppuVar33 = uStack_a28;
  pppppppuVar25 = uStack_a20;
  if (uStack_a28 != (ulong *******)0x0) {
    for (; pppppppuVar33 != pppppppuVar25; pppppppuVar25 = pppppppuVar25 + -10) {
      if (((ulong)pppppppuVar25[-4] & 1) == 0) {
        bVar5 = *(byte *)(pppppppuVar25 + -10);
      }
      else {
        func_0x0412a280(pppppppuVar25[-2],(ulong)pppppppuVar25[-4] & 0xfffffffffffffffe);
        bVar5 = *(byte *)(pppppppuVar25 + -10);
      }
      if ((bVar5 & 1) != 0) {
        func_0x0412a280(pppppppuVar25[-8],(ulong)pppppppuVar25[-10] & 0xfffffffffffffffe);
      }
    }
    uStack_a20 = pppppppuVar33;
    func_0x0412a280(uStack_a28,(long)pppppppuStack_a18 - (long)uStack_a28);
  }
LAB_09a8d6f3:
  if ((_auStack_9e8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_9d8,_auStack_9e8 & 0xfffffffffffffffe);
  }
LAB_09a8a697:
  if ((uStack_948 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_936,uStack_938),uStack_948 & 0xfffffffffffffffe);
  }
  if (((ulong)ppppppuStack_978 & 1) != 0) {
    func_0x0412a280(ppppppuStack_968,(ulong)ppppppuStack_978 & 0xfffffffffffffffe);
  }
  iStack_98c = iStack_98c + 1;
LAB_09a89d07:
  ppppppuVar34 = ppppppuStack_9d0 + 0xf;
  if (ppppppuVar34 == ppppppuStack_870) goto LAB_09a89c60;
  goto LAB_09a89d21;
LAB_09a8b9c0:
  puVar23 = puVar23 + 1;
  plVar14 = plStack_988;
  if (puVar23 == puVar37) goto LAB_09a8b802;
  goto LAB_09a8b9cd;
}


