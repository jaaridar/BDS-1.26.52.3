/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6ee1b0 (ELF vaddr 0xb5ee1b0)
 * Label: caller-of-callee
 * Body:  [[0b6ee1b0, 0b6ee3da] [0b6ee3e0, 0b6ee430] [0b6ee440, 0b6ee44e] [0b6ee450, 0b6ee492] [0b6ee4a0, 0b6ee4b3] [0b6ee4c0, 0b6ee4fc] [0b6ee500, 0b6ee513] [0b6ee520, 0b6ef330] [0b6ef340, 0b6ef82f] [0b6ef921, 0b6ef939] [0b6ef951, 0b6ef96e] [0b6ef992, 0b6ef9d2] [0b6efaa1, 0b6efb07] [0b6efb6a, 0b6efbf2]]
 * Ghidra: FUN_0b6ee1b0
 */


/* WARNING: Removing unreachable block (ram,0x0b6eeb52) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0b6ee1b0(ulong *param_1,long param_2,undefined8 param_3,byte *param_4,uint *param_5,
                    undefined8 param_6)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  char cVar26;
  undefined8 *******pppppppuVar27;
  long lVar28;
  ulong *puVar29;
  undefined8 *******unaff_RBP;
  undefined8 *******pppppppuVar30;
  long lVar31;
  long lVar32;
  undefined8 *******pppppppuVar33;
  bool bVar34;
  undefined1 auStack_bb8 [8];
  undefined8 *******pppppppuStack_bb0;
  undefined8 *******pppppppuStack_ba8;
  undefined1 auStack_b98 [4];
  uint uStack_b94;
  uint uStack_b90;
  uint uStack_b8c;
  undefined8 *******pppppppuStack_b88;
  undefined1 auStack_b78 [8];
  undefined8 *******pppppppuStack_b70;
  undefined8 *******pppppppuStack_b68;
  undefined8 *******pppppppuStack_b60;
  undefined8 *******pppppppuStack_b58;
  undefined8 *******pppppppuStack_b50;
  undefined8 *******pppppppuStack_b48;
  long lStack_b40;
  char cStack_b38;
  long *plStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 *******pppppppuStack_b18;
  byte bStack_b10;
  undefined1 auStack_b08 [8];
  undefined8 *******pppppppuStack_b00;
  undefined8 *******pppppppuStack_af8;
  undefined8 *******pppppppuStack_af0;
  undefined8 *******pppppppuStack_ae8;
  undefined8 *******pppppppuStack_ae0;
  undefined8 *******pppppppuStack_ad8;
  long lStack_ad0;
  byte bStack_ac8;
  long *plStack_ab8;
  long *plStack_ab0;
  undefined1 auStack_aa8 [4];
  undefined4 uStack_aa4;
  undefined8 uStack_aa0;
  undefined8 *******pppppppuStack_a98;
  undefined8 uStack_a88;
  ulong uStack_a80;
  long lStack_a78;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 *******pppppppuStack_a58;
  ulong *puStack_a50;
  undefined8 *******pppppppuStack_a48;
  long lStack_a40;
  undefined8 *******pppppppuStack_a38;
  undefined8 *******pppppppuStack_a30;
  undefined8 *******pppppppuStack_a28;
  undefined8 *******pppppppuStack_a20;
  undefined8 *******pppppppuStack_a18;
  undefined8 *******pppppppuStack_a10;
  undefined8 *******pppppppuStack_a08;
  long lStack_a00;
  ulong uStack_9f8;
  undefined8 *******pppppppuStack_9f0;
  undefined1 auStack_9e8 [16];
  byte bStack_9d8;
  uint uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined8 *******pppppppuStack_9c0;
  char cStack_9b8;
  undefined8 uStack_9b0;
  byte *pbStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 *******pppppppuStack_970;
  undefined8 *******pppppppuStack_968;
  long lStack_960;
  uint uStack_958;
  byte bStack_950;
  uint uStack_948;
  uint uStack_7c8;
  undefined *puStack_7b8;
  undefined8 *puStack_7b0;
  uint uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined8 *******pppppppuStack_798;
  uint uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined8 *******pppppppuStack_780;
  undefined8 ******appppppuStack_778 [52];
  undefined8 *******pppppppuStack_5d8;
  undefined8 *******pppppppuStack_5d0;
  long lStack_5c8;
  uint uStack_408;
  undefined4 uStack_400;
  undefined8 *******pppppppuStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [4];
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 *******pppppppuStack_1b8;
  
  pppppppuStack_5d0 = (undefined8 *******)0x0;
  lStack_5c8 = 0;
  pppppppuStack_5d8 = (undefined8 *******)0x3a726f746964650e;
  puStack_a50 = param_1;
  lStack_a40 = param_2;
  uStack_9b0 = param_6;
  pbStack_9a8 = param_4;
  puVar18 = (uint *)func_0x0412f8c0(&pppppppuStack_5d8,&UNK_01342884,9);
  uVar5 = puVar18[1];
  uVar6 = puVar18[2];
  uVar7 = puVar18[3];
  pppppppuVar33 = *(undefined8 ********)puVar18;
  pppppppuVar21 = *(undefined8 ********)(puVar18 + 4);
  puVar18[0] = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar18[3] = 0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  if ((byte)param_5[6] == 1) {
    if ((*param_5 & 1) == 0) {
      pppppppuStack_b88 = *(undefined8 ********)(param_5 + 4);
      auStack_b98 = (undefined1  [4])*param_5;
      uStack_b94 = param_5[1];
      uStack_b90 = param_5[2];
      uStack_b8c = param_5[3];
    }
    else {
      func_0x0412e5e0(auStack_b98,*(undefined8 *)(param_5 + 4),*(undefined8 *)(param_5 + 2));
    }
    if (((ulong)pppppppuVar33 & 1) != 0) {
      pppppppuVar33 = (undefined8 *******)((ulong)pppppppuVar33 & 0xfffffffffffffffe);
      func_0x0412a280(pppppppuVar21,pppppppuVar33);
    }
  }
  else {
    auStack_b98 = (undefined1  [4])*puVar18;
    uStack_b94 = uVar5;
    uStack_b90 = uVar6;
    uStack_b8c = uVar7;
    pppppppuStack_b88 = pppppppuVar21;
  }
  if (((ulong)pppppppuStack_5d8 & 1) != 0) {
    func_0x0412a280(lStack_5c8,(ulong)pppppppuStack_5d8 & 0xfffffffffffffffe);
  }
  bVar34 = ((uint)auStack_b98 & 1) == 0;
  pppppppuVar27 = pppppppuStack_b88;
  if (bVar34) {
    pppppppuVar27 = (undefined8 *******)(auStack_b98 + 1);
  }
  pppppppuVar30 = (undefined8 *******)(ulong)(auStack_b98[0] >> 1);
  if (!bVar34) {
    pppppppuVar30 = (undefined8 *******)CONCAT44(uStack_b8c,uStack_b90);
  }
  uStack_9a0 = param_3;
  if (pppppppuVar30 == (undefined8 *******)0x0) {
    auStack_bb8 = (undefined1  [8])((ulong)(uint7)auStack_bb8._1_7_ << 8);
LAB_0b6ee35c:
    pppppppuVar33 = (undefined8 *******)(auStack_bb8 + 1);
    pppppppuVar30 = (undefined8 *******)0x0;
LAB_0b6ee3ba:
    pppppppuStack_a48 = pppppppuVar27;
    *(undefined1 *)((long)pppppppuVar33 + (long)pppppppuVar30) = 0;
    lVar28 = 1;
    pppppppuStack_9f0 = (undefined8 *******)(auStack_bb8 + 1);
    do {
      pppppppuVar21 = pppppppuStack_ba8;
      pppppppuVar33 = pppppppuStack_bb0;
      lVar32 = *(long *)(lStack_a40 + 0x88);
      lVar4 = *(long *)(lStack_a40 + 0x90);
      if (lVar32 != lVar4) {
        if (((ulong)auStack_bb8 & 1) == 0) {
          unaff_RBP = (undefined8 *******)((ulong)auStack_bb8 >> 1 & 0x7f);
          do {
            bVar16 = *(byte *)(lVar32 + 0x70);
            if ((bVar16 & 1) == 0) {
              pppppppuVar33 = (undefined8 *******)(ulong)(bVar16 >> 1);
            }
            else {
              pppppppuVar33 = *(undefined8 ********)(lVar32 + 0x78);
            }
            if (pppppppuVar33 == unaff_RBP) {
              if ((bVar16 & 1) == 0) {
                lVar31 = lVar32 + 0x71;
              }
              else {
                lVar31 = *(long *)(lVar32 + 0x80);
              }
              iVar17 = func_0x0eee3000(lVar31,auStack_bb8 + 1,unaff_RBP);
              if (iVar17 == 0) goto LAB_0b6ee520;
            }
            lVar32 = lVar32 + 0x180;
            if (lVar32 == lVar4) goto LAB_0b6ee58c;
          } while( true );
        }
        do {
          bVar16 = *(byte *)(lVar32 + 0x70);
          if ((bVar16 & 1) == 0) {
            pppppppuVar27 = (undefined8 *******)(ulong)(bVar16 >> 1);
          }
          else {
            pppppppuVar27 = *(undefined8 ********)(lVar32 + 0x78);
          }
          unaff_RBP = pppppppuVar33;
          if (pppppppuVar27 == pppppppuVar33) {
            if ((bVar16 & 1) == 0) {
              lVar31 = lVar32 + 0x71;
            }
            else {
              lVar31 = *(long *)(lVar32 + 0x80);
            }
            iVar17 = func_0x0eee3000(lVar31,pppppppuVar21,pppppppuVar33);
            if (iVar17 == 0) break;
          }
          lVar32 = lVar32 + 0x180;
          if (lVar32 == lVar4) goto LAB_0b6ee58c;
        } while( true );
      }
LAB_0b6ee520:
      if (lVar32 == lVar4) goto LAB_0b6ee58c;
      pppppppuStack_5d8 = pppppppuStack_a48;
      pppppppuStack_5d0 = pppppppuVar30;
      lStack_5c8 = lVar28;
      func_0x0470d9a0(&uStack_998,&UNK_0139bd18,5,0x4d,&pppppppuStack_5d8);
      if (((ulong)auStack_bb8 & 1) != 0) {
        func_0x0412a280(pppppppuStack_ba8,(ulong)auStack_bb8 & 0xfffffffffffffffe);
      }
      pppppppuStack_ba8 = uStack_988;
      auStack_bb8 = (undefined1  [8])uStack_998;
      pppppppuStack_bb0 = uStack_990;
      lVar28 = lVar28 + 1;
    } while( true );
  }
  pppppppuVar20 = (undefined8 *******)0x0;
  pppppppuVar22 = pppppppuVar27;
  do {
    pppppppuVar19 = pppppppuVar20;
    if (pppppppuVar30 == pppppppuVar19) goto LAB_0b6ee32c;
    pppppppuVar1 = (undefined8 *******)((long)pppppppuVar22 + -1);
    pppppppuVar20 = (undefined8 *******)((long)pppppppuVar19 + 1);
    puVar3 = (undefined *)((long)pppppppuVar22 + -1);
    pppppppuVar22 = pppppppuVar1;
  } while (puVar3[(long)pppppppuVar30] != ':');
  if ((undefined8 *******)((long)pppppppuVar30 + 1) != pppppppuVar20) {
    if (pppppppuVar30 <= (undefined8 *******)((long)pppppppuVar30 - (long)pppppppuVar20))
    goto LAB_0b6ef810;
    pppppppuVar27 =
         (undefined8 *******)((undefined *)((long)pppppppuVar1 + (long)pppppppuVar30) + 1);
    pppppppuVar30 = pppppppuVar19;
  }
LAB_0b6ee32c:
  if (pppppppuVar30 < (undefined8 *******)0xfffffffffffffff8) {
    if (pppppppuVar30 < (undefined8 *******)0x17) {
      auStack_bb8[0] = (char)pppppppuVar30 * '\x02';
      pppppppuVar33 = (undefined8 *******)(auStack_bb8 + 1);
      if (pppppppuVar30 == (undefined8 *******)0x0) goto LAB_0b6ee35c;
    }
    else {
      uVar25 = 0x1a;
      if (((ulong)pppppppuVar30 | 7) != 0x17) {
        uVar25 = ((ulong)pppppppuVar30 | 7) + 1;
      }
      pppppppuVar33 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
      if (pppppppuVar33 == (undefined8 *******)0x0) {
        func_0x0eec74c0(uVar25,0);
      }
      auStack_bb8 = (undefined1  [8])(uVar25 | 1);
      pppppppuStack_bb0 = pppppppuVar30;
      pppppppuStack_ba8 = pppppppuVar33;
    }
    memcpy(pppppppuVar33,pppppppuVar27,pppppppuVar30);
    goto LAB_0b6ee3ba;
  }
  func_0x04882e30();
LAB_0b6ef7b8:
  pppppppuVar30 = unaff_RBP;
  func_0x04882e30();
LAB_0b6ef7bd:
  iVar17 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar17 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pppppppuVar21 = pppppppuVar30;
  }
LAB_0b6eedac:
  auStack_b08 = (undefined1  [8])pppppppuVar27;
  pppppppuStack_b00 = pppppppuVar33;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_998,&DAT_0f7b8f98,auStack_b08,&plStack_ab8,0x12e,0);
  pppppppuVar27 = uStack_978;
  pppppppuVar33 = uStack_980;
  uVar15 = _UNK_0f2d0d44;
  uVar14 = _UNK_0f2d0d40;
  uVar13 = _UNK_0f2d0d3c;
  uVar12 = _UNK_0f2d0d34;
  uVar11 = _UNK_0f2d0d30;
  uVar10 = _UNK_0f2d0d2c;
  uVar9 = _DAT_0f2d0d28;
  cStack_b38 = (byte)uStack_958;
  if ((byte)uStack_958 == '\0') {
    auStack_b78 = (undefined1  [8])uStack_998;
    pppppppuStack_b70 = uStack_990;
    pppppppuStack_b68 = uStack_988;
    pppppppuStack_b60 = uStack_980;
    pppppppuStack_b58 = uStack_978;
    pppppppuStack_b50 = pppppppuStack_970;
    pppppppuStack_b48 = pppppppuStack_968;
    lStack_b40 = lStack_960;
    uStack_988 = (undefined8 *******)CONCAT44(_UNK_0f2d0d3c,_DAT_0f2d0d38);
    uStack_980 = (undefined8 *******)CONCAT44(_UNK_0f2d0d44,_UNK_0f2d0d40);
    uStack_998 = (undefined8 *******)CONCAT44(_UNK_0f2d0d2c,_DAT_0f2d0d28);
    uStack_990 = (undefined8 *******)CONCAT44(_UNK_0f2d0d34,_UNK_0f2d0d30);
    uStack_978 = (undefined8 *******)((ulong)uStack_978 & 0xffffffffffffff00);
    bStack_950 = 0;
    if (pppppppuVar33 < pppppppuVar27) {
      *(undefined4 *)(pppppppuVar33 + 2) = _DAT_0f2d0d38;
      *(undefined4 *)((long)pppppppuVar33 + 0x14) = uVar13;
      *(undefined4 *)(pppppppuVar33 + 3) = uVar14;
      *(undefined4 *)((long)pppppppuVar33 + 0x1c) = uVar15;
      *(undefined4 *)pppppppuVar33 = uVar9;
      *(undefined4 *)((long)pppppppuVar33 + 4) = uVar10;
      *(undefined4 *)(pppppppuVar33 + 1) = uVar11;
      *(undefined4 *)((long)pppppppuVar33 + 0xc) = uVar12;
      *(undefined1 *)(pppppppuVar33 + 4) = 0;
      *(undefined1 *)(pppppppuVar33 + 9) = 0;
      pppppppuStack_a20 = pppppppuVar33 + 10;
    }
    else {
      pppppppuStack_b60 = (undefined8 *******)func_0x0489d2c0(&pppppppuStack_b68,&uStack_998);
      pppppppuStack_a20 = pppppppuStack_b60;
      if (((bStack_950 & 1) != 0) && (((ulong)uStack_978 & 1) != 0)) {
        func_0x0412a280(pppppppuStack_968,(ulong)uStack_978 & 0xfffffffffffffffe);
        pppppppuStack_a20 = pppppppuStack_b60;
      }
    }
    lStack_a00 = lStack_b40;
    pppppppuStack_a08 = pppppppuStack_b48;
    pppppppuStack_a10 = pppppppuStack_b50;
    pppppppuStack_a18 = pppppppuStack_b58;
    pppppppuStack_a28 = pppppppuStack_b68;
    pppppppuStack_b68 = (undefined8 *******)0x0;
    pppppppuStack_b60 = (undefined8 *******)0x0;
    pppppppuStack_b58 = (undefined8 *******)0x0;
    pppppppuStack_b50 = (undefined8 *******)0x0;
    pppppppuStack_b48 = (undefined8 *******)0x0;
    lStack_b40 = 0;
    uStack_9f8 = uStack_9f8 & 0xffffffffffffff00;
    pppppppuStack_a38 = (undefined8 *******)auStack_b78;
    pppppppuStack_a30 = pppppppuStack_b70;
  }
  else {
    uVar25 = uStack_a88 >> 1 & 0x7f;
    lVar28 = (long)&uStack_a88 + 1;
    if ((uStack_a88 & 1) != 0) {
      uVar25 = uStack_a80;
      lVar28 = lStack_a78;
    }
    func_0x0ee76e70(&uStack_998,plStack_ab8,lVar28,uVar25);
    pppppppuVar27 = uStack_978;
    pppppppuVar33 = uStack_980;
    uVar15 = _UNK_0f2d0d64;
    uVar14 = _UNK_0f2d0d60;
    uVar13 = _UNK_0f2d0d5c;
    uVar12 = _UNK_0f2d0d54;
    uVar11 = _UNK_0f2d0d50;
    uVar10 = _UNK_0f2d0d4c;
    uVar9 = _DAT_0f2d0d48;
    bStack_ac8 = (byte)uStack_958;
    if ((byte)uStack_958 == 0) {
      auStack_b08 = (undefined1  [8])uStack_998;
      pppppppuStack_b00 = uStack_990;
      pppppppuStack_af8 = uStack_988;
      pppppppuStack_af0 = uStack_980;
      pppppppuStack_ae8 = uStack_978;
      pppppppuStack_ae0 = pppppppuStack_970;
      pppppppuStack_ad8 = pppppppuStack_968;
      lStack_ad0 = lStack_960;
      uStack_988 = (undefined8 *******)CONCAT44(_UNK_0f2d0d5c,_DAT_0f2d0d58);
      uStack_980 = (undefined8 *******)CONCAT44(_UNK_0f2d0d64,_UNK_0f2d0d60);
      uStack_998 = (undefined8 *******)CONCAT44(_UNK_0f2d0d4c,_DAT_0f2d0d48);
      uStack_990 = (undefined8 *******)CONCAT44(_UNK_0f2d0d54,_UNK_0f2d0d50);
      uStack_978 = (undefined8 *******)((ulong)uStack_978 & 0xffffffffffffff00);
      bStack_950 = 0;
      if (pppppppuVar33 < pppppppuVar27) {
        *(undefined4 *)(pppppppuVar33 + 2) = _DAT_0f2d0d58;
        *(undefined4 *)((long)pppppppuVar33 + 0x14) = uVar13;
        *(undefined4 *)(pppppppuVar33 + 3) = uVar14;
        *(undefined4 *)((long)pppppppuVar33 + 0x1c) = uVar15;
        *(undefined4 *)pppppppuVar33 = uVar9;
        *(undefined4 *)((long)pppppppuVar33 + 4) = uVar10;
        *(undefined4 *)(pppppppuVar33 + 1) = uVar11;
        *(undefined4 *)((long)pppppppuVar33 + 0xc) = uVar12;
        *(undefined1 *)(pppppppuVar33 + 4) = 0;
        *(undefined1 *)(pppppppuVar33 + 9) = 0;
        pppppppuStack_a20 = pppppppuVar33 + 10;
      }
      else {
        pppppppuStack_af0 = (undefined8 *******)func_0x0489d2c0(&pppppppuStack_af8,&uStack_998);
        pppppppuStack_a20 = pppppppuStack_af0;
        if (((bStack_950 & 1) != 0) && (((ulong)uStack_978 & 1) != 0)) {
          func_0x0412a280(pppppppuStack_968,(ulong)uStack_978 & 0xfffffffffffffffe);
          pppppppuStack_a20 = pppppppuStack_af0;
        }
      }
      lStack_a00 = lStack_ad0;
      pppppppuStack_a08 = pppppppuStack_ad8;
      pppppppuStack_a10 = pppppppuStack_ae0;
      pppppppuStack_a18 = pppppppuStack_ae8;
      pppppppuStack_a28 = pppppppuStack_af8;
      pppppppuStack_af8 = (undefined8 *******)0x0;
      pppppppuStack_af0 = (undefined8 *******)0x0;
      pppppppuStack_ae8 = (undefined8 *******)0x0;
      pppppppuStack_ae0 = (undefined8 *******)0x0;
      pppppppuStack_ad8 = (undefined8 *******)0x0;
      lStack_ad0 = 0;
      uStack_9f8 = uStack_9f8 & 0xffffffffffffff00;
      pppppppuStack_a38 = (undefined8 *******)auStack_b08;
      pppppppuStack_a30 = pppppppuStack_b00;
      if ((bStack_ac8 & 1) == 0) goto LAB_0b6ef204;
    }
    else {
      pppppppuStack_a38 = (undefined8 *******)0x0;
      pppppppuStack_a30 = (undefined8 *******)0x0;
      pppppppuStack_a28 = (undefined8 *******)0x0;
      pppppppuStack_a20 = (undefined8 *******)0x0;
      pppppppuStack_a18 = (undefined8 *******)0x0;
      pppppppuStack_a10 = (undefined8 *******)0x0;
      pppppppuStack_a08 = (undefined8 *******)0x0;
      lStack_a00 = 0;
      uStack_9f8 = 1;
      if ((uStack_958 & 1) == 0) {
LAB_0b6ef204:
        pppppppuVar27 = pppppppuStack_ae0;
        pppppppuVar33 = pppppppuStack_ad8;
        if (pppppppuStack_ae0 != (undefined8 *******)0x0) {
          while (pppppppuVar27 != pppppppuVar33) {
            func_0x048b3e80((long)pppppppuVar33 + -0x40);
            pppppppuVar33 = (undefined8 *******)((long)pppppppuVar33 + -0x40);
          }
          pppppppuStack_ad8 = pppppppuVar27;
          func_0x0412a280(pppppppuStack_ae0,lStack_ad0 - (long)pppppppuStack_ae0);
        }
        pppppppuVar27 = pppppppuStack_af8;
        pppppppuVar33 = pppppppuStack_af0;
        if (pppppppuStack_af8 != (undefined8 *******)0x0) {
          for (; pppppppuVar27 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -10) {
            if ((*(char *)(pppppppuVar33 + -1) == '\x01') && (((ulong)pppppppuVar33[-6] & 1) != 0))
            {
              func_0x0412a280(pppppppuVar33[-4],(ulong)pppppppuVar33[-6] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_af0 = pppppppuVar27;
          func_0x0412a280(pppppppuStack_af8,(long)pppppppuStack_ae8 - (long)pppppppuStack_af8);
        }
      }
    }
  }
  pppppppuVar33 = pppppppuStack_b50;
  if (cStack_b38 == '\0') {
    pppppppuVar27 = pppppppuStack_b48;
    if (pppppppuStack_b50 != (undefined8 *******)0x0) {
      while (pppppppuVar33 != pppppppuVar27) {
        func_0x048b3e80((long)pppppppuVar27 + -0x40);
        pppppppuVar27 = (undefined8 *******)((long)pppppppuVar27 + -0x40);
      }
      pppppppuStack_b48 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_b50,lStack_b40 - (long)pppppppuStack_b50);
    }
    pppppppuVar27 = pppppppuStack_b68;
    pppppppuVar33 = pppppppuStack_b60;
    if (pppppppuStack_b68 != (undefined8 *******)0x0) {
      for (; pppppppuVar27 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -10) {
        if ((*(char *)(pppppppuVar33 + -1) == '\x01') && (((ulong)pppppppuVar33[-6] & 1) != 0)) {
          func_0x0412a280(pppppppuVar33[-4],(ulong)pppppppuVar33[-6] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_b60 = pppppppuVar27;
      func_0x0412a280(pppppppuStack_b68,(long)pppppppuStack_b58 - (long)pppppppuStack_b68);
    }
  }
  if (plStack_ab8 != (long *)0x0) {
    func_0x0ee56810(&uStack_998,&plStack_ab8);
    pppppppuVar33 = pppppppuStack_970;
    if ((byte)uStack_958 == '\0') {
      pppppppuVar27 = pppppppuStack_968;
      if (pppppppuStack_970 != (undefined8 *******)0x0) {
        while (pppppppuVar33 != pppppppuVar27) {
          func_0x048b3e80(pppppppuVar27 + -8);
          pppppppuVar27 = pppppppuVar27 + -8;
        }
        pppppppuStack_968 = pppppppuVar33;
        func_0x0412a280(pppppppuStack_970,lStack_960 - (long)pppppppuStack_970);
      }
      pppppppuVar27 = uStack_988;
      pppppppuVar33 = uStack_980;
      if (uStack_988 != (undefined8 *******)0x0) {
        for (; pppppppuVar27 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -10) {
          if ((*(char *)(pppppppuVar33 + -1) == '\x01') && (((ulong)pppppppuVar33[-6] & 1) != 0)) {
            func_0x0412a280(pppppppuVar33[-4],(ulong)pppppppuVar33[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_980 = pppppppuVar27;
        func_0x0412a280(uStack_988,(long)uStack_978 - (long)uStack_988);
      }
    }
  }
  plVar8 = plStack_ab0;
  plStack_ab0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_ab8;
  plStack_ab8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  uStack_998 = (undefined8 *******)0xb73a56ee5b2b7c89;
  uStack_990 = (undefined8 *******)&UNK_0140f690;
  uStack_988 = (undefined8 *******)0x1;
  uStack_980 = (undefined8 *******)CONCAT44(uStack_980._4_4_,0xc1);
  if ((byte)uStack_9f8 == 0) {
    func_0x0eedea30(auStack_b78);
    FUN_0eedeb80(2,0x2d,&pppppppuStack_a38,auStack_b78,&uStack_998);
    if (((ulong)auStack_b78 & 1) != 0) {
      func_0x0412a280(pppppppuStack_b68,(ulong)auStack_b78 & 0xfffffffffffffffe);
    }
  }
  pppppppuVar33 = pppppppuStack_a10;
  if (((byte)uStack_9f8 & 1) == 0) {
    pppppppuVar27 = pppppppuStack_a08;
    if (pppppppuStack_a10 != (undefined8 *******)0x0) {
      while (pppppppuVar33 != pppppppuVar27) {
        func_0x048b3e80(pppppppuVar27 + -8);
        pppppppuVar27 = pppppppuVar27 + -8;
      }
      pppppppuStack_a08 = pppppppuVar33;
      func_0x0412a280(pppppppuStack_a10,lStack_a00 - (long)pppppppuStack_a10);
    }
    pppppppuVar27 = pppppppuStack_a28;
    pppppppuVar33 = pppppppuStack_a20;
    if (pppppppuStack_a28 != (undefined8 *******)0x0) {
      for (; pppppppuVar27 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -10) {
        if ((*(char *)(pppppppuVar33 + -1) == '\x01') && (((ulong)pppppppuVar33[-6] & 1) != 0)) {
          func_0x0412a280(pppppppuVar33[-4],(ulong)pppppppuVar33[-6] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_a20 = pppppppuVar27;
      func_0x0412a280(pppppppuStack_a28,(long)pppppppuStack_a18 - (long)pppppppuStack_a28);
    }
  }
  if ((uStack_a88 & 1) != 0) {
    func_0x0412a280(lStack_a78,uStack_a88 & 0xfffffffffffffffe);
  }
  puVar29 = puStack_a50;
  plVar8 = plStack_b30;
  *(undefined1 *)puStack_a50 = 0;
  *(undefined1 *)(puStack_a50 + 3) = 0;
  plStack_b30 = (long *)0x0;
  bVar16 = bStack_b10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    bVar16 = bStack_b10;
  }
joined_r0x0b6eef22:
  if ((bVar16 & 1) == 0) goto LAB_0b6ef68a;
  goto LAB_0b6ef667;
LAB_0b6ee58c:
  func_0x05d8c350(auStack_1d0,uStack_9a0);
  if (((uint)auStack_1c8 & 1) == 0) {
    if (((uint)auStack_b98 & 1) == 0) {
      pppppppuStack_1b8 = pppppppuStack_b88;
      auStack_1c8 = auStack_b98;
      uStack_1c4 = uStack_b94;
      uStack_1c0 = uStack_b90;
      uStack_1bc = uStack_b8c;
    }
    else {
      func_0x04885070(auStack_1c8,pppppppuStack_b88,CONCAT44(uStack_b8c,uStack_b90));
    }
  }
  else {
    bVar34 = ((uint)auStack_b98 & 1) != 0;
    pppppppuVar33 = (undefined8 *******)(auStack_b98 + 1);
    if (bVar34) {
      pppppppuVar33 = pppppppuStack_b88;
    }
    uVar25 = (ulong)(auStack_b98[0] >> 1);
    if (bVar34) {
      uVar25 = CONCAT44(uStack_b8c,uStack_b90);
    }
    func_0x04885120(auStack_1c8,pppppppuVar33,uVar25);
  }
  bVar34 = ((uint)auStack_1c8 & 1) != 0;
  pppppppuVar33 = (undefined8 *******)(auStack_1c8 + 1);
  if (bVar34) {
    pppppppuVar33 = pppppppuStack_1b8;
  }
  uVar25 = (ulong)(auStack_1c8[0] >> 1);
  if (bVar34) {
    uVar25 = CONCAT44(uStack_1bc,uStack_1c0);
  }
  uVar24 = uVar25;
  if (uVar25 == 0) {
LAB_0b6ee67e:
    _auStack_aa8 = (ulong)stack0xfffffffffffff559 << 8;
LAB_0b6ee68e:
    auStack_aa8._0_2_ = CONCAT11(0,auStack_aa8[0]);
    pppppppuVar33 = (undefined8 *******)((ulong)auStack_bb8 & 0xff);
    if (((ulong)auStack_bb8 & 1) == 0) goto LAB_0b6ee6a5;
LAB_0b6ee73b:
    func_0x0412e5e0(&uStack_a68,pppppppuStack_ba8,pppppppuStack_bb0);
  }
  else {
    do {
      if (uVar24 == 0) goto LAB_0b6ee67e;
      uVar2 = uVar24 - 1;
      lVar28 = uVar24 - 1;
      uVar24 = uVar2;
    } while (*(char *)((long)pppppppuVar33 + lVar28) != ':');
    if (uVar2 == 0xffffffffffffffff) goto LAB_0b6ee67e;
    if (uVar2 <= uVar25) {
      uVar25 = uVar2;
    }
    if (0xfffffffffffffff7 < uVar25) {
      func_0x04882e30();
LAB_0b6ef810:
      uVar23 = func_0x04882ef0(&UNK_01306d2f);
      FUN_041084d6(&DAT_0f7b8fb8);
      func_0x048f9be0(&plStack_ab8);
      plVar8 = plStack_b30;
      if ((uStack_a88 & 1) != 0) {
        func_0x0412a280(lStack_a78,uStack_a88 & 0xfffffffffffffffe);
        plVar8 = plStack_b30;
      }
      plStack_b30 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plStack_b30 = (long *)0x0;
        (**(code **)(*plVar8 + 8))();
      }
      if ((bStack_b10 == 1) && ((uStack_b28 & 1) != 0)) {
        func_0x0412a280(pppppppuStack_b18,uStack_b28 & 0xfffffffffffffffe);
      }
      if (((char)pppppppuStack_a48 != '\0') && ((uStack_9d0 & 1) != 0)) {
        func_0x0412a280(pppppppuStack_9c0,CONCAT44(uStack_9cc,uStack_9d0) & 0xfffffffffffffffe);
      }
      func_0x0b6f1480(&uStack_7a8);
      do {
        func_0x05d645d0(auStack_1d0);
        if (((ulong)auStack_bb8 & 1) != 0) {
          func_0x0412a280(pppppppuStack_ba8,(ulong)auStack_bb8 & 0xfffffffffffffffe);
        }
        if (((uint)auStack_b98 & 1) != 0) {
          func_0x0412a280(pppppppuStack_b88,CONCAT44(uStack_b94,auStack_b98) & 0xfffffffffffffffe);
        }
        uVar23 = _Unwind_Resume(uVar23);
        func_0x05d8bdd0(&uStack_7a8);
        if (((ulong)uStack_a68 & 1) != 0) {
          func_0x0412a280(pppppppuStack_a58,(ulong)uStack_a68 & 0xfffffffffffffffe);
        }
      } while( true );
    }
    if (uVar25 < 0x17) {
      _auStack_aa8 = CONCAT71(stack0xfffffffffffff559,(char)uVar25 * '\x02');
      pppppppuVar21 = (undefined8 *******)(auStack_aa8 + 1);
      if (uVar2 != 0) goto LAB_0b6ee718;
      goto LAB_0b6ee68e;
    }
    uVar24 = 0x1a;
    if ((uVar25 | 7) != 0x17) {
      uVar24 = (uVar25 | 7) + 1;
    }
    pppppppuVar21 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
    if (pppppppuVar21 == (undefined8 *******)0x0) {
      func_0x0eec74c0(uVar24,0);
    }
    _auStack_aa8 = uVar24 | 1;
    uStack_aa0 = uVar25;
    pppppppuStack_a98 = pppppppuVar21;
LAB_0b6ee718:
    func_0x0eee2ee0(pppppppuVar21,pppppppuVar33,uVar25);
    *(undefined1 *)((long)pppppppuVar21 + uVar25) = 0;
    pppppppuVar33 = (undefined8 *******)((ulong)auStack_bb8 & 0xff);
    if (((ulong)auStack_bb8 & 1) != 0) goto LAB_0b6ee73b;
LAB_0b6ee6a5:
    pppppppuStack_a58 = pppppppuStack_ba8;
    uStack_a68 = (undefined8 *******)auStack_bb8;
    uStack_a60 = pppppppuStack_bb0;
  }
  pppppppuStack_780 = pppppppuStack_a58;
  pppppppuStack_798 = pppppppuStack_a98;
  uStack_7a8 = (uint)auStack_aa8;
  uStack_7a4 = uStack_aa4;
  uStack_7a0 = (undefined4)uStack_aa0;
  uStack_79c = uStack_aa0._4_4_;
  _auStack_aa8 = 0;
  uStack_aa0 = 0;
  pppppppuStack_a98 = (undefined8 *******)0x0;
  uStack_790 = (uint)uStack_a68;
  uStack_78c = uStack_a68._4_4_;
  uStack_788 = (undefined4)uStack_a60;
  uStack_784 = uStack_a60._4_4_;
  uStack_a68 = (undefined8 *******)0x0;
  uStack_a60 = (undefined8 *******)0x0;
  pppppppuStack_a58 = (undefined8 *******)0x0;
  func_0x05d8c350(appppppuStack_778,auStack_1d0);
  if (((ulong)uStack_a68 & 1) != 0) {
    func_0x0412a280(pppppppuStack_a58,(ulong)uStack_a68 & 0xfffffffffffffffe);
  }
  if ((uStack_7a8 & 1) == 0) {
    uStack_988 = pppppppuStack_798;
    uStack_998 = (undefined8 *******)CONCAT44(uStack_7a4,uStack_7a8);
    uStack_990 = (undefined8 *******)CONCAT44(uStack_79c,uStack_7a0);
  }
  else {
    func_0x0412e5e0(&uStack_998,pppppppuStack_798,CONCAT44(uStack_79c,uStack_7a0));
  }
  if ((uStack_790 & 1) == 0) {
    pppppppuStack_970 = pppppppuStack_780;
    uStack_980 = (undefined8 *******)CONCAT44(uStack_78c,uStack_790);
    uStack_978 = (undefined8 *******)CONCAT44(uStack_784,uStack_788);
  }
  else {
    func_0x0412e5e0(&uStack_980,pppppppuStack_780,CONCAT44(uStack_784,uStack_788));
  }
  func_0x05d8c350(&pppppppuStack_968,appppppuStack_778);
  uStack_7c8 = 3;
  pppppppuStack_5d8 = (undefined8 *******)((ulong)pppppppuStack_5d8 & 0xffffffffffffff00);
  uStack_408 = 0xffffffff;
  func_0x05d8c2a0(&pppppppuStack_5d8,&uStack_998);
  uStack_408 = 3;
  uStack_400 = func_0x05d8c4d0(auStack_b78,&pppppppuStack_5d8);
  if ((*pbStack_9a8 & 1) == 0) {
    pppppppuStack_b68 = *(undefined8 ********)(pbStack_9a8 + 0x10);
    auStack_b78 = *(undefined1 (*) [8])pbStack_9a8;
    pppppppuStack_b70 = *(undefined8 ********)(pbStack_9a8 + 8);
  }
  else {
    func_0x0412e5e0(auStack_b78,*(undefined8 *)(pbStack_9a8 + 0x10),*(undefined8 *)(pbStack_9a8 + 8)
                   );
  }
  pppppppuStack_b60 = (undefined8 *******)CONCAT71(pppppppuStack_b60._1_7_,1);
  func_0x0b6efc30(auStack_9e8,lStack_a40,&pppppppuStack_5d8,auStack_b78,uStack_9b0);
  if (((char)pppppppuStack_b60 == '\x01') && (((ulong)auStack_b78 & 1) != 0)) {
    func_0x0412a280(pppppppuStack_b68,(ulong)auStack_b78 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_408 != 0xffffffff) {
    (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_408 * 8))(auStack_b78,&pppppppuStack_5d8);
  }
  uStack_408 = 0xffffffff;
  if ((ulong)uStack_7c8 != 0xffffffff) {
    (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_7c8 * 8))(auStack_b78,&uStack_998);
  }
  pppppppuVar21 = pppppppuStack_9c0;
  uStack_b28 = uStack_b28 & 0xffffffffffffff00;
  bStack_b10 = 0;
  cVar26 = cStack_9b8;
  if (cStack_9b8 == '\x01') {
    if ((uStack_9d0 & 1) == 0) {
      pppppppuStack_b18 = pppppppuStack_9c0;
      uStack_b28 = CONCAT44(uStack_9cc,uStack_9d0);
      uStack_b20 = CONCAT44(uStack_9c4,uStack_9c8);
      pppppppuVar21 = unaff_RBP;
    }
    else {
      func_0x0412e5e0(&uStack_b28,pppppppuStack_9c0,CONCAT44(uStack_9c4,uStack_9c8));
      cVar26 = '\x01';
    }
    bStack_b10 = 1;
    bVar34 = true;
    unaff_RBP = pppppppuVar21;
    if ((bStack_9d8 & 1) == 0) goto LAB_0b6eeb01;
LAB_0b6eea33:
    pppppppuVar30 = appppppuStack_778;
    pppppppuStack_a48 = (undefined8 *******)CONCAT71(pppppppuStack_a48._1_7_,cVar26);
    uStack_948 = (uint)auStack_9e8._8_8_ & 0xffff;
    uStack_998 = (undefined8 *******)CONCAT44(uStack_998._4_4_,SUB84(auStack_9e8._0_8_,4));
    uStack_988 = (undefined8 *******)
                 (CONCAT44(uStack_988._4_4_,SUB84(auStack_9e8._0_8_,2)) & 0xffffffff0000ffff);
    uStack_978 = (undefined8 *******)
                 (CONCAT44(uStack_978._4_4_,(int)auStack_9e8._0_8_) & 0xffffffff0000ffff);
    pppppppuStack_968 =
         (undefined8 *******)CONCAT44(pppppppuStack_968._4_4_,(uint)SUB82(auStack_9e8._8_8_,6));
    uStack_958 = SUB84(auStack_9e8._8_8_,2);
    func_0x0470d9a0(auStack_b78,&UNK_01287ba2,0x28,0x122112,&uStack_998);
    pppppppuVar27 = pppppppuStack_bb0;
    if (((ulong)pppppppuVar33 & 1) == 0) {
      pppppppuVar27 = (undefined8 *******)((ulong)pppppppuVar33 >> 1);
    }
    pppppppuVar20 = (undefined8 *******)((long)pppppppuVar27 + 0xc);
    pppppppuVar21 = pppppppuVar30;
    if ((undefined8 *******)0xfffffffffffffff7 < pppppppuVar20) goto LAB_0b6ef7b8;
    if (pppppppuVar20 < (undefined8 *******)0x17) {
      pppppppuStack_b00 = (undefined8 *******)0x0;
      pppppppuStack_af8 = (undefined8 *******)0x0;
      auStack_b08._1_7_ = 0;
      auStack_b08[0] = (char)pppppppuVar20 * '\x02';
      pppppppuVar22 = (undefined8 *******)(auStack_b08 + 1);
      if (pppppppuVar27 != (undefined8 *******)0x0) goto joined_r0x0b6eeefe;
    }
    else {
      uVar25 = 0x1a;
      if (((ulong)pppppppuVar20 | 7) != 0x17) {
        uVar25 = ((ulong)pppppppuVar20 | 7) + 1;
      }
      pppppppuVar22 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
      if (pppppppuVar22 == (undefined8 *******)0x0) {
        func_0x0eec74c0(uVar25,0);
      }
      auStack_b08 = (undefined1  [8])(uVar25 | 1);
      pppppppuStack_b00 = pppppppuVar20;
      pppppppuStack_af8 = pppppppuVar22;
joined_r0x0b6eeefe:
      if (((ulong)pppppppuVar33 & 1) != 0) {
        pppppppuStack_9f0 = pppppppuStack_ba8;
      }
      func_0x0eee2ee0(pppppppuVar22,pppppppuStack_9f0,pppppppuVar27);
    }
    *(undefined8 *)((long)pppppppuVar22 + (long)pppppppuVar27) = 0x6375727473636d2e;
    *(undefined4 *)((long)(pppppppuVar22 + 1) + (long)pppppppuVar27) = 0x65727574;
    *(undefined1 *)((long)((long)pppppppuVar22 + 0xc) + (long)pppppppuVar27) = 0;
    bVar34 = (*(byte *)(lStack_a40 + 0xa8) & 1) != 0;
    uStack_998 = (undefined8 *******)(lStack_a40 + 0xa9);
    if (bVar34) {
      uStack_998 = *(undefined8 ********)(lStack_a40 + 0xb8);
    }
    uStack_990 = (undefined8 *******)(ulong)(*(byte *)(lStack_a40 + 0xa8) >> 1);
    if (bVar34) {
      uStack_990 = *(undefined8 ********)(lStack_a40 + 0xb0);
    }
    uStack_988 = (undefined8 *******)(auStack_b78 + 1);
    uStack_980 = (undefined8 *******)((ulong)auStack_b78 >> 1 & 0x7f);
    if (((ulong)auStack_b78 & 1) != 0) {
      uStack_980 = pppppppuStack_b70;
      uStack_988 = pppppppuStack_b68;
    }
    pppppppuStack_970 = (undefined8 *******)((ulong)auStack_b08 >> 1 & 0x7f);
    uStack_978 = (undefined8 *******)(auStack_b08 + 1);
    if (((ulong)auStack_b08 & 1) != 0) {
      pppppppuStack_970 = pppppppuStack_b00;
      uStack_978 = pppppppuStack_af8;
    }
    pppppppuVar27 = &pppppppuStack_5d8;
    func_0x049151c0(pppppppuVar27,&uStack_998,3,0x2f);
    if (((ulong)auStack_b08 & 1) != 0) {
      func_0x0412a280(pppppppuStack_af8,(ulong)auStack_b08 & 0xfffffffffffffffe);
    }
    if (((ulong)auStack_b78 & 1) != 0) {
      func_0x0412a280(pppppppuStack_b68,(ulong)auStack_b78 & 0xfffffffffffffffe);
    }
    func_0x05d64bf0(&plStack_b30,auStack_1d0);
    if (plStack_b30 != (long *)0x0) {
      uStack_a88 = 0;
      uStack_a80 = 0;
      lStack_a78 = 0;
      puStack_7b8 = &UNK_0ef9fe28;
      puStack_7b0 = &uStack_a88;
      uStack_998 = (undefined8 *******)((ulong)uStack_998 & 0xffffffffffff0000);
      func_0x0d6ba180(&uStack_998,plStack_b30,&puStack_7b8,0);
      if (((ulong)uStack_998 & 1) != 0) {
        func_0x0412a280(uStack_988,(ulong)uStack_998 & 0xfffffffffffffffe);
      }
      plStack_ab8 = (long *)0x0;
      plStack_ab0 = (long *)0x0;
      pppppppuVar33 = pppppppuStack_1d8;
      if (DAT_0f7b8fb8 == '\0') goto LAB_0b6ef7bd;
      goto LAB_0b6eedac;
    }
    *(undefined1 *)puStack_a50 = 0;
    *(undefined1 *)(puStack_a50 + 3) = 0;
    bVar16 = bStack_b10;
LAB_0b6eef20:
    pppppppuVar21 = appppppuStack_778;
    puVar29 = puStack_a50;
    goto joined_r0x0b6eef22;
  }
  bVar34 = false;
  if ((bStack_9d8 & 1) != 0) goto LAB_0b6eea33;
LAB_0b6eeb01:
  pppppppuVar21 = appppppuStack_778;
  *(undefined1 *)puStack_a50 = 0;
  *(undefined1 *)(puStack_a50 + 3) = 0;
  bVar16 = 0;
  if (!bVar34) goto LAB_0b6eef20;
  puStack_a50[2] = (ulong)pppppppuStack_b18;
  *puStack_a50 = uStack_b28;
  puStack_a50[1] = uStack_b20;
  uStack_b28 = 0;
  uStack_b20 = 0;
  pppppppuStack_b18 = (undefined8 *******)0x0;
  *(undefined1 *)(puStack_a50 + 3) = 1;
  puVar29 = puStack_a50;
LAB_0b6ef667:
  if ((uStack_b28 & 1) != 0) {
    func_0x0412a280(pppppppuStack_b18,uStack_b28 & 0xfffffffffffffffe);
  }
LAB_0b6ef68a:
  if ((cStack_9b8 == '\x01') && ((uStack_9d0 & 1) != 0)) {
    func_0x0412a280(pppppppuStack_9c0,CONCAT44(uStack_9cc,uStack_9d0) & 0xfffffffffffffffe);
  }
  func_0x05d645d0(pppppppuVar21);
  if ((uStack_790 & 1) != 0) {
    func_0x0412a280(pppppppuStack_780,CONCAT44(uStack_78c,uStack_790) & 0xfffffffffffffffe);
  }
  if ((uStack_7a8 & 1) == 0) {
    func_0x05d645d0(auStack_1d0);
  }
  else {
    func_0x0412a280(pppppppuStack_798,CONCAT44(uStack_7a4,uStack_7a8) & 0xfffffffffffffffe);
    func_0x05d645d0(auStack_1d0);
  }
  if (((ulong)auStack_bb8 & 1) != 0) {
    func_0x0412a280(pppppppuStack_ba8,(ulong)auStack_bb8 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_b98 & 1) != 0) {
    func_0x0412a280(pppppppuStack_b88,CONCAT44(uStack_b94,auStack_b98) & 0xfffffffffffffffe);
  }
  return puVar29;
}


