/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb71d210 (ELF vaddr 0xb61d210)
 * Label: caller-of-callee
 * Body:  [[0b71d210, 0b71d3e6] [0b71d3f0, 0b71d9ee] [0b71d9f0, 0b71dd99] [0b71dda0, 0b71ddc9] [0b71ddd0, 0b71de32] [0b71de40, 0b71deb6] [0b71dec0, 0b71e006] [0b71e010, 0b71e1a2] [0b71e1b0, 0b71e1f6] [0b71e200, 0b71e247] [0b71e250, 0b71e363] [0b71e370, 0b71e513] [0b71e520, 0b71e756] [0b71e760, 0b71e8fc] [0b71eb61, 0b71eb70] [0b71ebb7, 0b71ec02] [0b71ec42, 0b71ec6a]]
 * Ghidra: FUN_0b71d210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b71d210(undefined4 *param_1,ulong *param_2,ulong *param_3)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined7 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined *puVar15;
  byte *pbVar16;
  undefined7 *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined4 uVar20;
  char cVar22;
  char cVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  long lVar28;
  ulong uVar29;
  undefined *puVar30;
  long lVar31;
  bool bVar32;
  undefined8 uStack_948;
  byte *pbStack_940;
  ulong uStack_938;
  undefined8 uStack_928;
  undefined *puStack_920;
  ulong uStack_918;
  ulong uStack_908;
  undefined *puStack_900;
  ulong uStack_8f8;
  byte bStack_8e8;
  undefined7 uStack_8e7;
  char cStack_8e0;
  undefined4 uStack_8df;
  undefined2 uStack_8db;
  undefined1 uStack_8d9;
  undefined7 *puStack_8d8;
  ulong *puStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  ulong uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined1 uStack_88c;
  undefined1 uStack_88b;
  undefined1 uStack_88a;
  undefined1 uStack_889;
  undefined8 uStack_888;
  ulong uStack_878;
  ulong uStack_870;
  ulong *puStack_868;
  ulong *puStack_860;
  long lStack_858;
  ulong uStack_848;
  ulong *puStack_840;
  byte *pbStack_838;
  ulong uStack_830;
  ulong uStack_828;
  undefined *puStack_820;
  undefined4 *puStack_818;
  ulong *puStack_810;
  ulong *puStack_808;
  undefined1 auStack_800 [8];
  undefined8 uStack_7f8;
  undefined *puStack_7f0;
  ulong uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  ulong uStack_7d0;
  undefined8 uStack_7c8;
  undefined4 uStack_7c0;
  undefined2 uStack_7bc;
  undefined1 uStack_7ba;
  undefined1 uStack_7b9;
  undefined7 *puStack_7b8;
  uint uStack_628;
  ulong uStack_618;
  undefined *puStack_610;
  ulong uStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  ulong uStack_5f0;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined7 *puStack_5d8;
  uint uStack_448;
  undefined4 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  ulong uStack_428;
  ulong uStack_420;
  byte bStack_418;
  undefined7 uStack_417;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  byte bStack_3f8;
  char cStack_3f0;
  undefined1 auStack_3e8 [944];
  ulong uStack_38;
  undefined4 uVar21;
  
  uStack_848 = param_2[1];
  puStack_868 = (ulong *)0x0;
  puStack_860 = (ulong *)0x0;
  lStack_858 = 0;
  puStack_8d0 = param_2;
  puStack_818 = param_1;
  if ((int)param_3[8] == 1) {
    if (DAT_0f7b8fb8 == '\0') goto LAB_0b71e864;
LAB_0b71d26d:
    bVar32 = ((byte)*param_3 & 1) != 0;
    pbStack_838 = (byte *)((long)param_3 + 1);
    if (bVar32) {
      pbStack_838 = (byte *)param_3[2];
    }
    uStack_830 = (ulong)(byte)((byte)*param_3 >> 1);
    if (bVar32) {
      uStack_830 = param_3[1];
    }
    (**(code **)(_DAT_0f7b8f98 + 200))(&uStack_438,&DAT_0f7b8f98,&puStack_868,&pbStack_838);
    uStack_618 = 0xb73a56ee5b2b7c89;
    puStack_610 = &UNK_0140f690;
    uStack_608 = 1;
    uStack_600 = 0x2a3;
    if (bStack_3f8 == 0) {
      func_0x0eedea30(&uStack_7f8);
      func_0x0eedeb80(2,0x2d,&uStack_438,&uStack_7f8,&uStack_618);
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(uStack_7e8,uStack_7f8 & 0xfffffffffffffffe);
      }
    }
    lVar31 = lStack_410;
    if ((bStack_3f8 & 1) == 0) {
      lVar25 = lStack_408;
      if (lStack_410 != 0) {
        while (lVar31 != lVar25) {
          func_0x048b3e80(lVar25 + -0x40);
          lVar25 = lVar25 + -0x40;
        }
        lStack_408 = lVar31;
        func_0x0412a280(lStack_410,lStack_400 - lStack_410);
      }
      uVar24 = uStack_428;
      uVar26 = uStack_420;
      if (uStack_428 != 0) {
        for (; uVar24 != uVar26; uVar26 = uVar26 - 0x50) {
          if ((*(char *)(uVar26 - 8) == '\x01') && ((*(byte *)(uVar26 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar26 - 0x20),
                            *(ulong *)(uVar26 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_420 = uVar24;
        func_0x0412a280(uStack_428,CONCAT71(uStack_417,bStack_418) - uStack_428);
      }
    }
    puStack_840 = param_3;
    puStack_808 = puStack_860;
    if (puStack_868 != puStack_860) {
      puStack_810 = param_3 + 3;
      param_3 = puStack_868;
      do {
        puVar7 = puStack_810;
        if ((*param_3 & 1) == 0) {
          uStack_918 = param_3[2];
          uStack_928 = *param_3;
          puStack_920 = (undefined *)param_3[1];
        }
        else {
          func_0x0412e5e0(&uStack_928,param_3[2],param_3[1]);
        }
        if ((*puVar7 & 1) == 0) {
          uStack_8f8 = puVar7[2];
          uStack_908 = *puVar7;
          puStack_900 = (undefined *)puVar7[1];
        }
        else {
          func_0x0412e5e0(&uStack_908,puStack_840[5],puStack_840[4]);
        }
        puVar19 = (undefined *)(uStack_928 >> 1 & 0x7f);
        uVar26 = (long)&uStack_928 + 1;
        if ((uStack_928 & 1) != 0) {
          puVar19 = puStack_920;
          uVar26 = uStack_918;
        }
        puVar30 = puVar19 + 1;
        while (puVar30 != (undefined *)0x1) {
          pcVar2 = puVar30 + (uVar26 - 2);
          puVar30 = puVar30 + -1;
          if ((*pcVar2 == '\\') || (*pcVar2 == '/')) goto joined_r0x0b71de46;
        }
        puVar30 = (undefined *)0x0;
joined_r0x0b71de46:
        puVar15 = puVar19;
        if (puVar19 == (undefined *)0x0) {
LAB_0b71dec0:
          uVar24 = (long)puVar19 - (long)puVar30;
          if (puVar19 < puVar30) goto LAB_0b71e858;
          func_0x0eee2dd0(&uStack_438,0,0x408);
          if (uVar24 < 0x400) {
            if (puVar19 == puVar30) {
LAB_0b71deee:
              uVar24 = 0;
            }
            else {
LAB_0b71de9f:
              func_0x0eee2f00(&uStack_438,puVar30 + uVar26,uVar24);
            }
            *(undefined1 *)((long)&uStack_438 + uVar24) = 0;
            uStack_38 = uVar24;
          }
        }
        else {
          do {
            if (puVar15 == (undefined *)0x0) goto LAB_0b71dec0;
            puVar1 = puVar15 + -1;
            pcVar2 = puVar15 + (uVar26 - 1);
            puVar15 = puVar1;
          } while (*pcVar2 != '.');
          if (puVar1 == (undefined *)0xffffffffffffffff) goto LAB_0b71dec0;
          if (puVar19 < puVar30) goto LAB_0b71e858;
          uVar24 = (long)puVar1 - (long)puVar30;
          if ((ulong)((long)puVar19 - (long)puVar30) < (ulong)((long)puVar1 - (long)puVar30)) {
            uVar24 = (long)puVar19 - (long)puVar30;
          }
          func_0x0eee2dd0(&uStack_438,0,0x408);
          if (uVar24 < 0x400) {
            if (uVar24 != 0) goto LAB_0b71de9f;
            goto LAB_0b71deee;
          }
        }
        pbVar16 = (byte *)func_0x0eee2e90(&uStack_438);
        if ((byte *)0xfffffffffffffff7 < pbVar16) goto LAB_0b71e853;
        if (pbVar16 < (byte *)0x17) {
          uStack_948 = CONCAT71(uStack_948._1_7_,(char)pbVar16 * '\x02');
          uVar24 = (long)&uStack_948 + 1;
          if (pbVar16 != (byte *)0x0) goto LAB_0b71dfda;
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_948._1_1_ = 0;
        }
        else {
          uVar26 = ((ulong)pbVar16 | 7) + 1;
          if (((ulong)pbVar16 | 7) == 0x17) {
            uVar26 = 0x1a;
          }
          uVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
          if (uVar24 == 0) {
            func_0x0eec74c0(uVar26,0);
          }
          uStack_948 = uVar26 | 1;
          pbStack_940 = pbVar16;
          uStack_938 = uVar24;
LAB_0b71dfda:
          func_0x0eee2f00(uVar24,&uStack_438,pbVar16);
          pbVar16[uVar24] = 0;
        }
        uVar26 = (long)&uStack_928 + 1;
        if ((uStack_928 & 1) != 0) {
          uVar26 = uStack_918;
        }
        uVar24 = func_0x0eee2e90(uVar26);
        if (0xfffffffffffffff7 < uVar24) goto LAB_0b71e84e;
        if (uVar24 < 0x17) {
          bStack_8e8 = (char)uVar24 * '\x02';
          puVar17 = &uStack_8e7;
          if (uVar24 != 0) goto LAB_0b71e05b;
        }
        else {
          lVar31 = (uVar24 | 7) + 1;
          if ((uVar24 | 7) == 0x17) {
            lVar31 = 0x1a;
          }
          puVar17 = (undefined7 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
          if (puVar17 == (undefined7 *)0x0) {
            func_0x0eec74c0(lVar31,0);
          }
          bStack_8e8 = (byte)lVar31 | 1;
          uStack_8e7 = (undefined7)((ulong)lVar31 >> 8);
          uStack_8df = (undefined4)(uVar24 >> 8);
          uStack_8db = (undefined2)(uVar24 >> 0x28);
          uStack_8d9 = (undefined1)(uVar24 >> 0x38);
          cStack_8e0 = (char)uVar24;
          puStack_8d8 = puVar17;
LAB_0b71e05b:
          func_0x0eee2ee0(puVar17,uVar26,uVar24);
        }
        uVar9 = uStack_8f8;
        puVar19 = puStack_900;
        uVar29 = uStack_908;
        uVar13 = uStack_938;
        pbVar16 = pbStack_940;
        uVar26 = uStack_948;
        *(undefined1 *)((long)puVar17 + uVar24) = 0;
        puStack_7b8 = puStack_8d8;
        uStack_7b9 = uStack_8d9;
        uVar10 = uStack_8db;
        uStack_908 = 0;
        puStack_900 = (undefined *)0x0;
        uStack_8f8 = 0;
        uStack_948 = 0;
        pbStack_940 = (byte *)0x0;
        uStack_938 = 0;
        uStack_7e0 = uVar26;
        uStack_7d8 = pbVar16;
        uVar18 = CONCAT71(uStack_8e7,bStack_8e8);
        uVar6 = CONCAT25(uStack_8db,CONCAT41(uStack_8df,cStack_8e0));
        uStack_894 = (undefined4)((uint7)uStack_8e7 >> 0x18);
        uStack_890 = (undefined4)CONCAT41(uStack_8df,cStack_8e0);
        bStack_8e8 = 0;
        uStack_8e7 = 0;
        cStack_8e0 = '\0';
        uStack_8df = 0;
        uStack_8db = 0;
        uStack_8d9 = 0;
        puStack_8d8 = (undefined7 *)0x0;
        uStack_7f8 = uVar29;
        puStack_7f0 = puVar19;
        uStack_7e8 = uVar9;
        uStack_8c8 = 0;
        uStack_8c0 = 0;
        uStack_8b8 = 0;
        uStack_7d0 = uVar13;
        uStack_8b0 = 0;
        uStack_8a8 = 0;
        uStack_8a0 = 0;
        uStack_7c8 = CONCAT44(uStack_894,(int)uVar18);
        uStack_7c0 = uStack_890;
        uStack_7bc = (undefined2)((uint7)uVar6 >> 0x20);
        uStack_7ba = (undefined1)((ushort)uVar10 >> 8);
        uStack_898 = 0;
        uStack_894 = 0;
        uStack_890 = 0;
        uStack_88c = 0;
        uStack_88b = 0;
        uStack_88a = 0;
        uStack_889 = 0;
        uStack_888 = 0;
        uStack_628 = 0;
        uStack_618 = uStack_618 & 0xffffffffffffff00;
        uStack_448 = 0xffffffff;
        if ((uVar29 & 1) == 0) {
          uStack_608 = uVar9;
          uStack_618 = uVar29;
          puStack_610 = puVar19;
        }
        else {
          func_0x0412e5e0(&uStack_618,uVar9,puVar19);
        }
        if ((uStack_7e0 & 1) == 0) {
          uStack_5f0 = uStack_7d0;
          uStack_600 = (undefined4)uStack_7e0;
          uStack_5fc = uStack_7e0._4_4_;
          uStack_5f8 = (undefined4)uStack_7d8;
          uStack_5f4 = uStack_7d8._4_4_;
        }
        else {
          func_0x0412e5e0(&uStack_600,uStack_7d0,uStack_7d8);
        }
        if ((uStack_7c8 & 1) == 0) {
          puStack_5d8 = puStack_7b8;
          uStack_5dc = CONCAT13(uStack_7b9,CONCAT12(uStack_7ba,uStack_7bc));
          uStack_5e8 = (undefined4)uStack_7c8;
          uStack_5e4 = uStack_7c8._4_4_;
          uStack_5e0 = uStack_7c0;
        }
        else {
          func_0x0412e5e0(&uStack_5e8,puStack_7b8,
                          CONCAT17(uStack_7b9,CONCAT16(uStack_7ba,CONCAT24(uStack_7bc,uStack_7c0))))
          ;
        }
        uStack_448 = 0;
        uStack_440 = func_0x05d8c4a0(auStack_800,&uStack_618);
        if ((ulong)uStack_628 != 0xffffffff) {
          (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_628 * 8))(auStack_800,&uStack_7f8);
        }
        uStack_628 = 0xffffffff;
        if ((uStack_908 & 1) != 0) {
          func_0x0412a280(uStack_8f8,uStack_908 & 0xfffffffffffffffe);
        }
        lVar31 = *(long *)*puStack_8d0;
        lVar25 = ((long *)*puStack_8d0)[1];
        lVar28 = lVar31;
        if (lVar31 != lVar25) {
          do {
            func_0x05d6a670(&uStack_438,lVar28);
            func_0x05d6a670(&uStack_7f8,&uStack_618);
            uVar26 = uStack_7f8;
            bVar3 = (byte)uStack_438;
            if (((ulong)uStack_438 & 1) == 0) {
              puVar19 = (undefined *)(ulong)((byte)uStack_438 >> 1);
              if ((uStack_7f8 & 1) != 0) goto LAB_0b71e381;
LAB_0b71e34d:
              if (puVar19 != (undefined *)((uStack_7f8 & 0xff) >> 1)) goto LAB_0b71e357;
LAB_0b71e38e:
              uVar24 = (long)&uStack_438 + 1;
              if (((ulong)uStack_438 & 1) != 0) {
                uVar24 = uStack_428;
              }
              uVar13 = (long)&uStack_7f8 + 1;
              if ((uStack_7f8 & 1) != 0) {
                uVar13 = uStack_7e8;
              }
              iVar12 = func_0x0eee3000(uVar24,uVar13);
              bVar32 = iVar12 == 0;
            }
            else {
              puVar19 = puStack_430;
              if ((uStack_7f8 & 1) == 0) goto LAB_0b71e34d;
LAB_0b71e381:
              if (puVar19 == puStack_7f0) goto LAB_0b71e38e;
LAB_0b71e357:
              bVar32 = false;
            }
            if ((uVar26 & 1) != 0) {
              func_0x0412a280(uStack_7e8,uStack_7f8 & 0xfffffffffffffffe);
              bVar3 = (byte)uStack_438;
            }
            if ((bVar3 & 1) != 0) {
              func_0x0412a280(uStack_428,(ulong)uStack_438 & 0xfffffffffffffffe);
            }
            lVar31 = lVar28;
          } while ((!bVar32) && (lVar28 = lVar28 + 0x1e0, lVar31 = lVar25, lVar28 != lVar25));
          lVar25 = *(long *)(*puStack_8d0 + 8);
        }
        if (lVar31 == lVar25) {
          uStack_7f8 = uStack_7f8 & 0xffffffffffffff00;
          uStack_7e0 = uStack_7e0 & 0xffffffffffffff00;
          uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
          uStack_8b0 = uStack_8b0 & 0xffffffffffffff00;
          FUN_0b6efc30(&uStack_438,uStack_848,&uStack_618,&uStack_7f8,&uStack_8c8);
          cVar23 = (char)uStack_428;
          if (((char)lStack_408 == '\x01') && ((uStack_420 & 1) != 0)) {
            func_0x0412a280(lStack_410);
          }
          if (((char)uStack_7e0 == '\x01') && ((uStack_7f8 & 1) != 0)) {
            func_0x0412a280(uStack_7e8);
          }
          uVar11 = uStack_448;
          if (cVar23 != '\0') {
            uVar26 = *puStack_8d0;
            puVar4 = *(undefined1 **)(uVar26 + 8);
            if (puVar4 < *(undefined1 **)(uVar26 + 0x10)) {
              *puVar4 = 0;
              *(undefined4 *)(puVar4 + 0x1d0) = 0xffffffff;
              if ((ulong)uStack_448 != 0xffffffff) {
                uStack_438 = puVar4;
                (**(code **)(&UNK_0f2d0da8 + (ulong)uStack_448 * 8))(&uStack_438);
                *(uint *)(puVar4 + 0x1d0) = uVar11;
              }
              *(undefined4 *)(puVar4 + 0x1d8) = uStack_440;
              *(undefined1 **)(uVar26 + 8) = puVar4 + 0x1e0;
              *(undefined1 **)(uVar26 + 8) = puVar4 + 0x1e0;
            }
            else {
              uVar18 = func_0x0b71ec70(uVar26);
              *(undefined8 *)(uVar26 + 8) = uVar18;
            }
          }
        }
        else {
          uStack_870 = func_0x0412dc70();
          uStack_428 = _DAT_0f2d0d98;
          uStack_420 = _UNK_0f2d0da0;
          uStack_438 = _DAT_0f2d0d88;
          puStack_430 = _UNK_0f2d0d90;
          bStack_418 = 0;
          cStack_3f0 = '\0';
          uStack_7f8 = 0;
          puStack_7f0 = (undefined *)0x0;
          uStack_7e8 = 0;
          func_0x0eee17a0(&uStack_7f8,&uStack_438,auStack_3e8,1);
          if ((cStack_3f0 == '\x01') && ((bStack_418 & 1) != 0)) {
            func_0x0412a280(lStack_408);
          }
          uStack_828 = uStack_7f8;
          puStack_820 = puStack_7f0;
          uStack_878 = uStack_7e8;
        }
        if ((ulong)uStack_448 != 0xffffffff) {
          (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_448 * 8))(&uStack_438);
        }
        if ((uStack_928 & 1) != 0) {
          func_0x0412a280(uStack_918);
        }
        if (lVar31 != lVar25) goto LAB_0b71dcfe;
        param_3 = param_3 + 3;
        if (param_3 == puStack_808) break;
      } while( true );
    }
    goto LAB_0b71e710;
  }
  if ((param_3[3] & 1) == 0) {
    uStack_8f8 = param_3[5];
    uStack_908 = param_3[3];
    puStack_900 = (undefined *)param_3[4];
  }
  else {
    func_0x0412e5e0(&uStack_908,param_3[5],param_3[4]);
  }
  func_0x0b6f8970(&uStack_928,&uStack_908);
  pbVar16 = (byte *)((long)param_3 + 1);
  bVar32 = ((byte)*param_3 & 1) == 0;
  pbVar27 = (byte *)param_3[2];
  if (bVar32) {
    pbVar27 = pbVar16;
  }
  uVar26 = (ulong)(byte)((byte)*param_3 >> 1);
  if (!bVar32) {
    uVar26 = param_3[1];
  }
  uVar24 = uVar26 + 1;
  while (uVar24 != 1) {
    lVar31 = uVar24 - 2;
    uVar24 = uVar24 - 1;
    if ((pbVar27[lVar31] == 0x5c) || (pbVar27[lVar31] == 0x2f)) goto joined_r0x0b71d4a6;
  }
  uVar24 = 0;
joined_r0x0b71d4a6:
  uVar13 = uVar26;
  if (uVar26 == 0) {
LAB_0b71d501:
    uVar29 = uVar26 - uVar24;
    if (uVar24 <= uVar26) {
      func_0x0eee2dd0(&uStack_438,0,0x408);
      if (uVar29 < 0x400) {
        if (uVar26 != uVar24) {
LAB_0b71d52f:
          pbVar27 = pbVar27 + uVar24;
          func_0x0eee2f00(&uStack_438,pbVar27,uVar29);
        }
LAB_0b71d545:
        *(undefined1 *)((long)&uStack_438 + uVar29) = 0;
        uStack_38 = uVar29;
      }
      goto LAB_0b71d556;
    }
LAB_0b71e8af:
    func_0x04882ef0(&UNK_01306d2f);
  }
  else {
    do {
      if (uVar13 == 0) goto LAB_0b71d501;
      uVar29 = uVar13 - 1;
      lVar31 = uVar13 - 1;
      uVar13 = uVar29;
    } while (pbVar27[lVar31] != 0x2e);
    if (uVar29 == 0xffffffffffffffff) goto LAB_0b71d501;
    if (uVar26 < uVar24) goto LAB_0b71e8af;
    uVar29 = uVar29 - uVar24;
    if (uVar26 - uVar24 < uVar29) {
      uVar29 = uVar26 - uVar24;
    }
    func_0x0eee2dd0(&uStack_438,0,0x408);
    if (uVar29 < 0x400) {
      if (uVar29 != 0) goto LAB_0b71d52f;
      goto LAB_0b71d545;
    }
LAB_0b71d556:
    pbVar14 = (byte *)func_0x0eee2e90(&uStack_438);
    if (pbVar14 < (byte *)0xfffffffffffffff8) {
      if (pbVar14 < (byte *)0x17) {
        uStack_948 = CONCAT71(uStack_948._1_7_,(char)pbVar14 * '\x02');
        uVar29 = (long)&uStack_948 + 1;
        if (pbVar14 != (byte *)0x0) goto LAB_0b71d61f;
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_948._1_1_ = 0;
        bVar3 = (byte)*param_3;
      }
      else {
        uVar26 = 0x1a;
        if (((ulong)pbVar14 | 7) != 0x17) {
          uVar26 = ((ulong)pbVar14 | 7) + 1;
        }
        uVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
        if (uVar29 == 0) {
          func_0x0eec74c0(uVar26,0);
        }
        uStack_948 = uVar26 | 1;
        pbStack_940 = pbVar14;
        uStack_938 = uVar29;
LAB_0b71d61f:
        func_0x0eee2f00(uVar29,&uStack_438,pbVar14);
        pbVar14[uVar29] = 0;
        bVar3 = (byte)*param_3;
      }
      if ((bVar3 & 1) != 0) {
        pbVar16 = (byte *)param_3[2];
      }
      uVar26 = func_0x0eee2e90(pbVar16);
      if (uVar26 < 0xfffffffffffffff8) {
        if (uVar26 < 0x17) {
          bStack_8e8 = (char)uVar26 * '\x02';
          puVar17 = &uStack_8e7;
          if (uVar26 == 0) goto LAB_0b71d6a0;
        }
        else {
          lVar31 = 0x1a;
          if ((uVar26 | 7) != 0x17) {
            lVar31 = (uVar26 | 7) + 1;
          }
          puVar17 = (undefined7 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
          if (puVar17 == (undefined7 *)0x0) {
            func_0x0eec74c0(lVar31,0);
          }
          bStack_8e8 = (byte)lVar31 | 1;
          uStack_8e7 = (undefined7)((ulong)lVar31 >> 8);
          uStack_8df = (undefined4)(uVar26 >> 8);
          uStack_8db = (undefined2)(uVar26 >> 0x28);
          uStack_8d9 = (undefined1)(uVar26 >> 0x38);
          cStack_8e0 = (char)uVar26;
          puStack_8d8 = puVar17;
        }
        func_0x0eee2ee0(puVar17,pbVar16,uVar26);
LAB_0b71d6a0:
        uVar9 = uStack_918;
        puVar19 = puStack_920;
        uVar29 = uStack_928;
        uVar13 = uStack_938;
        pbVar16 = pbStack_940;
        uVar24 = uStack_948;
        *(undefined1 *)((long)puVar17 + uVar26) = 0;
        puStack_7b8 = puStack_8d8;
        uStack_7b9 = uStack_8d9;
        uStack_928 = 0;
        puStack_920 = (undefined *)0x0;
        uStack_918 = 0;
        uStack_948 = 0;
        pbStack_940 = (byte *)0x0;
        uStack_938 = 0;
        uStack_898 = CONCAT31((int3)uStack_8e7,bStack_8e8);
        uStack_894 = (undefined4)((uint7)uStack_8e7 >> 0x18);
        uStack_890 = CONCAT31((int3)uStack_8df,cStack_8e0);
        uStack_88c = (undefined1)((uint)uStack_8df >> 0x18);
        uStack_88b = (undefined1)uStack_8db;
        uStack_88a = (undefined1)((ushort)uStack_8db >> 8);
        bStack_8e8 = 0;
        uStack_8e7 = 0;
        cStack_8e0 = '\0';
        uStack_8df = 0;
        uStack_8db = 0;
        uStack_8d9 = 0;
        puStack_8d8 = (undefined7 *)0x0;
        uStack_7e8 = uVar9;
        uStack_7f8 = uVar29;
        puStack_7f0 = puVar19;
        uStack_8c8 = 0;
        uStack_8c0 = 0;
        uStack_8b8 = 0;
        uStack_7d0 = uVar13;
        uStack_7e0 = uVar24;
        uStack_7d8 = pbVar16;
        uStack_8b0 = 0;
        uStack_8a8 = 0;
        uStack_8a0 = 0;
        uStack_7c8 = CONCAT44(uStack_894,uStack_898);
        uStack_7c0 = uStack_890;
        uStack_7bc = CONCAT11(uStack_88b,uStack_88c);
        uStack_7ba = uStack_88a;
        uStack_898 = 0;
        uStack_894 = 0;
        uStack_890 = 0;
        uStack_88c = 0;
        uStack_88b = 0;
        uStack_88a = 0;
        uStack_889 = 0;
        uStack_888 = 0;
        uStack_628 = 0;
        uStack_618 = uStack_618 & 0xffffffffffffff00;
        uStack_448 = 0xffffffff;
        if ((uVar29 & 1) == 0) {
          uStack_608 = uVar9;
          uStack_618 = uVar29;
          puStack_610 = puVar19;
        }
        else {
          func_0x0412e5e0(&uStack_618,uVar9,puVar19);
        }
        if ((uStack_7e0 & 1) == 0) {
          uStack_5f0 = uStack_7d0;
          uStack_600 = (undefined4)uStack_7e0;
          uStack_5fc = uStack_7e0._4_4_;
          uStack_5f8 = (undefined4)uStack_7d8;
          uStack_5f4 = uStack_7d8._4_4_;
        }
        else {
          func_0x0412e5e0(&uStack_600,uStack_7d0,uStack_7d8);
        }
        if ((uStack_7c8 & 1) == 0) {
          puStack_5d8 = puStack_7b8;
          uStack_5dc = CONCAT13(uStack_7b9,CONCAT12(uStack_7ba,uStack_7bc));
          uStack_5e8 = (undefined4)uStack_7c8;
          uStack_5e4 = uStack_7c8._4_4_;
          uStack_5e0 = uStack_7c0;
        }
        else {
          func_0x0412e5e0(&uStack_5e8,puStack_7b8,
                          CONCAT17(uStack_7b9,CONCAT16(uStack_7ba,CONCAT24(uStack_7bc,uStack_7c0))))
          ;
        }
        uStack_448 = 0;
        uStack_440 = func_0x05d8c4a0(&pbStack_838,&uStack_618);
        if ((ulong)uStack_628 != 0xffffffff) {
          (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_628 * 8))(&pbStack_838,&uStack_7f8);
        }
        uStack_628 = 0xffffffff;
        if ((uStack_908 & 1) != 0) {
          func_0x0412a280(uStack_8f8,uStack_908 & 0xfffffffffffffffe);
        }
        lVar31 = *(long *)*puStack_8d0;
        lVar25 = ((long *)*puStack_8d0)[1];
        if (lVar31 != lVar25) {
          lVar28 = lVar31;
          do {
            func_0x05d6a670(&uStack_438,lVar28);
            func_0x05d6a670(&uStack_7f8,&uStack_618);
            uVar26 = uStack_7f8;
            bVar3 = (byte)uStack_438;
            if (((ulong)uStack_438 & 1) == 0) {
              puVar19 = (undefined *)(ulong)((byte)uStack_438 >> 1);
              if ((uStack_7f8 & 1) != 0) goto LAB_0b71da01;
LAB_0b71d9d7:
              if (puVar19 != (undefined *)((uStack_7f8 & 0xff) >> 1)) goto LAB_0b71d9e1;
LAB_0b71da0e:
              uVar24 = (long)&uStack_438 + 1;
              if (((ulong)uStack_438 & 1) != 0) {
                uVar24 = uStack_428;
              }
              uVar13 = (long)&uStack_7f8 + 1;
              if ((uStack_7f8 & 1) != 0) {
                uVar13 = uStack_7e8;
              }
              iVar12 = func_0x0eee3000(uVar24,uVar13);
              bVar32 = iVar12 == 0;
            }
            else {
              puVar19 = puStack_430;
              if ((uStack_7f8 & 1) == 0) goto LAB_0b71d9d7;
LAB_0b71da01:
              if (puVar19 == puStack_7f0) goto LAB_0b71da0e;
LAB_0b71d9e1:
              bVar32 = false;
            }
            if ((uVar26 & 1) != 0) {
              func_0x0412a280(uStack_7e8,uStack_7f8 & 0xfffffffffffffffe);
              bVar3 = (byte)uStack_438;
            }
            uVar26 = uVar26 & 0xff;
            if ((bVar3 & 1) != 0) {
              func_0x0412a280(uStack_428,(ulong)uStack_438 & 0xfffffffffffffffe);
            }
            lVar31 = lVar28;
          } while ((!bVar32) && (lVar28 = lVar28 + 0x1e0, lVar31 = lVar25, lVar28 != lVar25));
          lVar25 = *(long *)(*puStack_8d0 + 8);
        }
        if (lVar31 == lVar25) {
          uStack_7f8 = uStack_7f8 & 0xffffffffffffff00;
          uStack_7e0 = uStack_7e0 & 0xffffffffffffff00;
          uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
          uStack_8b0 = uStack_8b0 & 0xffffffffffffff00;
          FUN_0b6efc30(&uStack_438,uStack_848,&uStack_618,&uStack_7f8,&uStack_8c8);
          cVar23 = (char)uStack_428;
          if (((char)lStack_408 == '\x01') && ((uStack_420 & 1) != 0)) {
            func_0x0412a280(lStack_410,uStack_420 & 0xfffffffffffffffe);
          }
          if (((char)uStack_7e0 == '\x01') && ((uStack_7f8 & 1) != 0)) {
            func_0x0412a280(uStack_7e8,uStack_7f8 & 0xfffffffffffffffe);
          }
          uVar11 = uStack_448;
          if (cVar23 != '\0') {
            uVar26 = *puStack_8d0;
            puVar4 = *(undefined1 **)(uVar26 + 8);
            if (puVar4 < *(undefined1 **)(uVar26 + 0x10)) {
              *puVar4 = 0;
              *(undefined4 *)(puVar4 + 0x1d0) = 0xffffffff;
              if ((ulong)uStack_448 != 0xffffffff) {
                uStack_438 = puVar4;
                (**(code **)(&UNK_0f2d0da8 + (ulong)uStack_448 * 8))(&uStack_438,&uStack_618);
                *(uint *)(puVar4 + 0x1d0) = uVar11;
              }
              *(undefined4 *)(puVar4 + 0x1d8) = uStack_440;
              *(undefined1 **)(uVar26 + 8) = puVar4 + 0x1e0;
              *(undefined1 **)(uVar26 + 8) = puVar4 + 0x1e0;
            }
            else {
              uVar18 = func_0x0b71ec70(uVar26,&uStack_618);
              *(undefined8 *)(uVar26 + 8) = uVar18;
            }
          }
        }
        else {
          uVar26 = func_0x0412dc70();
          uStack_428 = _DAT_0f2d0dd8;
          uStack_420 = _UNK_0f2d0de0;
          uStack_438 = _DAT_0f2d0dc8;
          puStack_430 = _UNK_0f2d0dd0;
          bStack_418 = 0;
          cStack_3f0 = '\0';
          uStack_7f8 = 0;
          puStack_7f0 = (undefined *)0x0;
          uStack_7e8 = 0;
          func_0x0eee17a0(&uStack_7f8,&uStack_438,auStack_3e8,1);
          uStack_878 = uStack_7e8;
          uStack_828 = uStack_7f8;
          puStack_820 = puStack_7f0;
          if ((cStack_3f0 == '\x01') && ((bStack_418 & 1) != 0)) {
            func_0x0412a280(lStack_408,CONCAT71(uStack_417,bStack_418) & 0xfffffffffffffffe);
            uStack_878 = uStack_7e8;
            uStack_828 = uStack_7f8;
            puStack_820 = puStack_7f0;
          }
        }
        if ((ulong)uStack_448 != 0xffffffff) {
          (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_448 * 8))(&uStack_438,&uStack_618);
        }
        uStack_870 = uVar26;
        if (lVar31 == lVar25) {
LAB_0b71e710:
          uStack_828 = 0;
          puStack_820 = (undefined *)0x0;
          cVar22 = '\x01';
          cVar23 = '\x01';
          uVar21 = 0;
          uVar20 = 0;
          uStack_870 = 0;
          uStack_878 = 0;
          puVar7 = puStack_868;
        }
        else {
LAB_0b71dcfe:
          cVar22 = '\0';
          cVar23 = '\0';
          uVar21 = 0x26;
          uVar20 = 0x26;
          puVar7 = puStack_868;
        }
        puStack_868 = puVar7;
        puVar8 = puStack_860;
        if (puVar7 != (ulong *)0x0) {
          for (; puVar7 != puVar8; puVar8 = puVar8 + -3) {
            if ((puVar8[-3] & 1) != 0) {
              func_0x0412a280(puVar8[-1],puVar8[-3] & 0xfffffffffffffffe);
            }
          }
          puStack_860 = puVar7;
          func_0x0412a280(puStack_868,lStack_858 - (long)puStack_868);
          cVar23 = cVar22;
          uVar20 = uVar21;
        }
        *(char *)(puStack_818 + 0x10) = cVar23;
        if (cVar23 == '\0') {
          *puStack_818 = uVar20;
          puStack_818[1] = 0;
          *(ulong *)(puStack_818 + 2) = uStack_870;
          *(ulong *)(puStack_818 + 4) = uStack_828;
          *(undefined **)(puStack_818 + 6) = puStack_820;
          *(ulong *)(puStack_818 + 8) = uStack_878;
          *(undefined8 *)(puStack_818 + 10) = 0;
          *(undefined8 *)(puStack_818 + 0xc) = 0;
          *(undefined8 *)(puStack_818 + 0xe) = 0;
        }
        return;
      }
      goto LAB_0b71e8c0;
    }
  }
  pbVar14 = pbVar27;
  FUN_04882e30();
LAB_0b71e8c0:
  uVar18 = FUN_04882e30();
  func_0x041084d6(&DAT_0f7b8fb8);
  func_0x048e6e10(&puStack_868);
  uVar18 = func_0x0eee2d70(uVar18);
  func_0x05d8c450(uVar29);
  *(ulong *)(pbVar14 + 8) = uVar29;
  func_0x0b6f1430(&uStack_618);
  func_0x048e6e10(&puStack_868);
  uVar18 = func_0x0eee2d70(uVar18);
  if ((uStack_908 & 1) != 0) {
    func_0x0412a280(uStack_8f8,uStack_908 & 0xfffffffffffffffe);
  }
  if ((uStack_928 & 1) != 0) {
    func_0x0412a280(uStack_918,uStack_928 & 0xfffffffffffffffe);
  }
  func_0x048e6e10(&puStack_868);
  func_0x0eee2d70(uVar18);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
LAB_0b71e84e:
  FUN_04882e30();
LAB_0b71e853:
  FUN_04882e30();
LAB_0b71e858:
  func_0x04882ef0(&UNK_01306d2f);
LAB_0b71e864:
  iVar12 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar12 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_0b71d26d;
}


