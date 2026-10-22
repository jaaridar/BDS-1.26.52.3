/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x525fdf0 (ELF vaddr 0x515fdf0)
 * Label: caller-of-seed
 * Body:  [[0525fdf0, 05260701] [05260710, 05260778] [05260780, 05260fa1] [05260fb0, 05260fc3] [05260fd0, 05261354] [05261360, 05261518] [05261520, 052616ba] [05261817, 05261968]]
 * Ghidra: FUN_0525fdf0
 */


/* WARNING: Possible PIC construction at 0x05260082: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0526011a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052601b2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0526024a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052602da: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05260372: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0526040a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0526049a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052613d2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052613ad: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05261394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052616b1: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05261841: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052618d5: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052618ef: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05261909: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05261954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05260c02: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x052618f4) */
/* WARNING: Removing unreachable block (ram,0x052618da) */
/* WARNING: Removing unreachable block (ram,0x052616b6) */
/* WARNING: Removing unreachable block (ram,0x05261817) */
/* WARNING: Removing unreachable block (ram,0x05261846) */
/* WARNING: Removing unreachable block (ram,0x052618a0) */
/* WARNING: Removing unreachable block (ram,0x052618a6) */
/* WARNING: Removing unreachable block (ram,0x0526182e) */
/* WARNING: Removing unreachable block (ram,0x05261399) */
/* WARNING: Removing unreachable block (ram,0x0526190e) */
/* WARNING: Removing unreachable block (ram,0x05261930) */
/* WARNING: Removing unreachable block (ram,0x05261967) */
/* WARNING: Removing unreachable block (ram,0x05261940) */
/* WARNING: Removing unreachable block (ram,0x05261959) */
/* WARNING: Removing unreachable block (ram,0x05261949) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0525fdf0(long *param_1,long param_2,uint param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  short *psVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  long *plStack_b10;
  undefined1 auStack_b08 [16];
  ulong uStack_af8;
  long *plStack_af0;
  long *plStack_ae8;
  long *plStack_ae0;
  long *plStack_ad8;
  long *plStack_ad0;
  long lStack_ac8;
  long *plStack_ac0;
  long *plStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  long *plStack_aa0;
  long *plStack_a98;
  long *plStack_a90;
  long *plStack_a88;
  long *plStack_a80;
  long lStack_a78;
  long lStack_a70;
  long lStack_a60;
  long *plStack_a58;
  long *plStack_a50;
  undefined *puStack_a48;
  long lStack_a40;
  undefined8 uStack_a38;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  lStack_ac8 = param_2;
  func_0x0ca70a10();
  *param_1 = (long)&UNK_0ef9d0a0;
  param_1[0xe] = (long)&UNK_0ef9d278;
  plVar8 = param_1 + 0x22;
  plStack_a88 = param_1 + 0x24;
  plStack_aa0 = param_1 + 0x26;
  plStack_a98 = param_1 + 0x28;
  plStack_a58 = param_1 + 0x2a;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  param_1[0x2a] = (long)&UNK_0ef9f9b0;
  param_1[0x2e] = (long)plStack_a58;
  param_1[0x30] = (long)(param_1 + 0x30);
  param_1[0x31] = (long)(param_1 + 0x30);
  *(undefined1 (*) [16])(param_1 + 0x32) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
  param_1[0x36] = 0;
  func_0x0eee1090(param_1 + 0x37);
  param_1[0x38] = 0;
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar22 = 7;
  uVar24 = param_3;
  while( true ) {
    uVar23 = ((ulong)((uVar24 >> 0x1e ^ uVar24) * 0x6c078965) + lVar22) - 6;
    uVar24 = (uint)uVar23;
    *(uint *)((long)&uStack_a38 + lVar22 * 4 + 4) = uVar24;
    if (lVar22 == 0x193) break;
    uVar24 = ((int)lVar22 + ((uint)(uVar23 >> 0x1e) & 3 ^ uVar24) * 0x6c078965) - 5;
    *(uint *)((long)&puStack_a30 + lVar22 * 4) = uVar24;
    lVar22 = lVar22 + 2;
  }
  plStack_a80 = param_1 + 0x23;
  plStack_a90 = param_1 + 0x25;
  plStack_aa8 = param_1 + 0x27;
  plStack_ab0 = param_1 + 0x29;
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  plStack_ad0 = param_1;
  plStack_a50 = plVar8;
  uStack_a20 = param_3;
  uStack_a1c = param_3;
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 0x10;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  plVar7 = (long *)FUN_0d341b00(puVar6,&puStack_a30,0x101,1);
  lVar22 = *plVar8;
  *plVar8 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 0x10;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  FUN_0d341b00(puVar6,&puStack_a30,0x101,1);
  lVar22 = *plStack_a80;
  *plStack_a80 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_a80;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 8;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  FUN_0d341b00(puVar6,&puStack_a30,0x101,1);
  lVar22 = *plStack_a88;
  *plStack_a88 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_a88;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 4;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  FUN_0d341b00(puVar6,&puStack_a30,0x101,1);
  lVar22 = *plStack_a90;
  *plStack_a90 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_a90;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 4;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  func_0x0d3430a0(puVar6,&puStack_a30,0);
  lVar22 = *plStack_a98;
  *plStack_a98 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_a98;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 10;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  FUN_0d341b00(puVar6,&puStack_a30,0x101,1);
  lVar22 = *plStack_aa0;
  *plStack_aa0 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_aa0;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 0x10;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  FUN_0d341b00(puVar6,&puStack_a30,0x101,1);
  lVar22 = *plStack_aa8;
  *plStack_aa8 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_aa8;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar6 = 3;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 6) = 0;
  func_0x0d3430a0(puVar6,&puStack_a30,0);
  lVar22 = *plStack_ab0;
  *plStack_ab0 = (long)puVar6;
  if (lVar22 != 0) {
    lVar17 = *(long *)(lVar22 + 8);
    if (lVar17 != 0) {
      *(long *)(lVar22 + 0x10) = lVar17;
      plVar7 = plStack_ab0;
      goto SUB_0412a280;
    }
    func_0x0412a280(lVar22,0x28);
  }
  if (param_4 != 0) {
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *plVar8 = (long)&UNK_0f3dc940;
    plVar8[1] = param_4;
    goto LAB_052604e6;
  }
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *(undefined1 (*) [16])(plVar9 + 1) = (undefined1  [16])0x0;
  *plVar9 = (long)&UNK_0ef9dd68;
  *(undefined1 (*) [16])(plVar9 + 4) = (undefined1  [16])0x0;
  plVar9[3] = (long)&UNK_0ef9ddb8;
  plVar9[6] = 0x200000000;
  *(undefined1 (*) [16])(plVar9 + 7) = (undefined1  [16])0x0;
  *(undefined4 *)(plVar9 + 9) = 0;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *(undefined1 (*) [16])(plVar10 + 1) = (undefined1  [16])0x0;
  *plVar10 = (long)&UNK_0ef9dd68;
  plVar10[4] = 0;
  plVar10[5] = 0x2b21a9c914e53925;
  plVar10[3] = (long)&UNK_0ef9ddb8;
  plVar10[6] = 0x200000001;
  *(undefined1 (*) [16])(plVar10 + 7) = (undefined1  [16])0x0;
  *(undefined4 *)(plVar10 + 9) = 0;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *(undefined1 (*) [16])(plVar11 + 1) = (undefined1  [16])0x0;
  *plVar11 = (long)&UNK_0ef9dd68;
  plVar11[4] = 0;
  plVar11[5] = -0x4597b71234db8a28;
  plVar11[3] = (long)&UNK_0ef9ddb8;
  plVar11[6] = 0x200000002;
  *(undefined1 (*) [16])(plVar11 + 7) = (undefined1  [16])0x0;
  *(undefined4 *)(plVar11 + 9) = 0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *(undefined1 (*) [16])(plVar12 + 1) = (undefined1  [16])0x0;
  *plVar12 = (long)&UNK_0ef9dd68;
  plVar12[4] = 0;
  plVar12[5] = 0x6957b26727512035;
  plVar12[3] = (long)&UNK_0ef9ddb8;
  plVar12[6] = 0x200000003;
  *(undefined1 (*) [16])(plVar12 + 7) = (undefined1  [16])0x0;
  *(undefined4 *)(plVar12 + 9) = 0;
  lVar22 = **(long **)(*(long *)(lStack_ac8 + 0xa0) + 0x3b8);
  plVar8 = *(long **)(lVar22 + 0x380);
  plVar7 = *(long **)(lVar22 + 0x388);
  if ((long)plVar7 - (long)plVar8 != 0) {
    plVar13 = plVar7;
    uVar23 = (long)plVar7 - (long)plVar8 >> 3;
LAB_05260729:
    do {
      uVar25 = uVar23 >> 1;
      plVar1 = plVar8 + uVar25;
      if (*(ushort *)(plVar8[uVar25] + 0x168) < 8) goto LAB_05260710;
      if (*(ushort *)(plVar8[uVar25] + 0x168) == 8) {
        if (uVar23 != 1) {
          do {
            uVar23 = uVar25 >> 1;
            if (*(ushort *)(plVar8[uVar23] + 0x168) < 8) {
              plVar8 = plVar8 + uVar23 + 1;
              uVar23 = ~uVar23 + uVar25;
            }
            uVar25 = uVar23;
          } while (uVar23 != 0);
        }
        lVar17 = (long)plVar13 - (long)(plVar1 + 1);
        if (lVar17 != 0) {
          plVar13 = plVar1 + 1;
          uVar23 = lVar17 >> 3;
          do {
            uVar25 = uVar23 >> 1;
            if (*(ushort *)(plVar13[uVar25] + 0x168) < 9) {
              plVar13 = plVar13 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar23;
            }
            uVar23 = uVar25;
          } while (uVar25 != 0);
        }
        if ((plVar8 == plVar13) || (plVar8 == plVar7)) goto LAB_052607b9;
        lVar17 = *plVar8;
        break;
      }
      plVar13 = plVar1;
      lVar17 = 0;
      uVar23 = uVar25;
    } while (uVar25 != 0);
    goto LAB_052607bb;
  }
LAB_052607b9:
  lVar17 = 0;
LAB_052607bb:
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar8 = plVar9 + 1;
  *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
  *plVar13 = (long)&UNK_0ef9de38;
  if (plVar9 != (long *)0x0) {
    LOCK();
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  plStack_af0 = plVar10 + 1;
  if (plVar10 != (long *)0x0) {
    LOCK();
    *plStack_af0 = *plStack_af0 + 1;
    UNLOCK();
  }
  plVar1 = plVar11 + 1;
  if (plVar11 != (long *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plStack_ae8 = plVar12 + 1;
  if (plVar12 != (long *)0x0) {
    LOCK();
    *plStack_ae8 = *plStack_ae8 + 1;
    UNLOCK();
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    *plStack_af0 = *plStack_af0 + 1;
    UNLOCK();
  }
  if (plVar11 != (long *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    *plStack_ae8 = *plStack_ae8 + 1;
    UNLOCK();
  }
  *(undefined1 (*) [16])(plVar13 + 4) = (undefined1  [16])0x0;
  plVar13[3] = (long)&UNK_0ef9def8;
  plVar13[6] = (long)(plVar9 + 3);
  plVar13[7] = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    LOCK();
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  plVar13[8] = (long)(plVar10 + 3);
  plVar13[9] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    LOCK();
    *plStack_af0 = *plStack_af0 + 1;
    UNLOCK();
  }
  plVar13[10] = (long)(plVar11 + 3);
  plVar13[0xb] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar13[0xc] = (long)(plVar12 + 3);
  plVar13[0xd] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    LOCK();
    *plStack_ae8 = *plStack_ae8 + 1;
    UNLOCK();
    LOCK();
    lVar18 = *plStack_ae8;
    *plStack_ae8 = *plStack_ae8 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  if (plVar11 != (long *)0x0) {
    LOCK();
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    lVar18 = *plStack_af0;
    *plStack_af0 = *plStack_af0 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    lVar18 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  plStack_ae0 = plVar13 + 3;
  plVar13[3] = (long)&UNK_0ef9de88;
  plVar13[0xe] = lVar17;
  *(undefined1 (*) [16])(plVar13 + 0xf) = (undefined1  [16])0x0;
  plVar13[0x11] = 0;
  *(undefined4 *)(plVar13 + 0x12) = 1;
  plVar16 = *(long **)(lVar22 + 0x380);
  plVar20 = *(long **)(lVar22 + 0x388);
  plStack_ab8 = plVar8;
  if (plVar16 != plVar20) {
    plStack_ac0 = plVar13 + 0xf;
    do {
      lVar18 = *plVar16;
      if (lVar18 != *(long *)(lVar22 + 0x3b8)) {
        if ((DAT_0f5569e8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5569e8), iVar5 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5569e0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5569e8);
        }
        for (psVar14 = *(short **)(lVar18 + 0x170); psVar14 != *(short **)(lVar18 + 0x178);
            psVar14 = psVar14 + 8) {
          if (*psVar14 == _DAT_0f5569e0) {
            lVar17 = *(long *)(psVar14 + 4);
            goto joined_r0x05260aad;
          }
        }
        lVar17 = 0;
joined_r0x05260aad:
        if ((DAT_0f5570e0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5570e0), iVar5 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5570d8 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5570e0);
        }
        for (psVar14 = *(short **)(lVar18 + 0x170); psVar14 != *(short **)(lVar18 + 0x178);
            psVar14 = psVar14 + 8) {
          if (*psVar14 == _DAT_0f5570d8) {
            bVar28 = *(long *)(psVar14 + 4) != 0;
            goto joined_r0x05260af5;
          }
        }
        bVar28 = false;
joined_r0x05260af5:
        if ((lVar17 != 0) && (bVar28 && *(int *)(lVar17 + 8) == (int)plVar13[0x12])) {
          plVar8 = (long *)plVar13[0x10];
          if ((long *)plVar13[0x11] <= plVar8) {
            lVar17 = *plStack_ac0;
            lVar27 = (long)plVar8 - lVar17;
            uVar23 = (lVar27 >> 3) + 1;
            if (uVar23 < 0x2000000000000000) {
              plStack_ad8 = (long *)(plVar13[0x11] - lVar17);
              uVar25 = (long)plStack_ad8 >> 2;
              if ((ulong)((long)plStack_ad8 >> 2) <= uVar23) {
                uVar25 = uVar23;
              }
              if ((long *)0x7ffffffffffffff7 < plStack_ad8) {
                uVar25 = 0x1fffffffffffffff;
              }
              if (uVar25 < 0x2000000000000000) {
                lStack_a60 = uVar25 * 8;
                lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                if (lVar15 == 0) {
                  func_0x0eec74c0(lStack_a60,0);
                }
                *(long *)(lVar15 + lVar27) = lVar18;
                plVar8 = (long *)(lVar15 + lVar27 + 8);
                lVar18 = lVar15 + lVar27 + (lVar27 >> 3) * -8;
                plVar7 = (long *)func_0x0eee2f00(lVar18,lVar17,lVar27);
                plVar13[0xf] = lVar18;
                plVar13[0x10] = (long)plVar8;
                plVar13[0x11] = lVar15 + uVar25 * 8;
                if (lVar17 == 0) goto LAB_05260a25;
                goto SUB_0412a280;
              }
              func_0x04882eb0();
            }
            func_0x04a62b20();
            lVar17 = lVar18;
            goto LAB_05261688;
          }
          *plVar8 = lVar18;
          plVar8 = plVar8 + 1;
LAB_05260a25:
          plVar13[0x10] = (long)plVar8;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar20);
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    lVar17 = *plStack_ae8;
    *plStack_ae8 = *plStack_ae8 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar8 = plStack_ab8;
  if (plVar11 != (long *)0x0) {
    LOCK();
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    lVar17 = *plStack_af0;
    *plStack_af0 = *plStack_af0 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    lVar17 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar20 = plStack_ae0;
  *(undefined1 (*) [16])(plVar16 + 1) = (undefined1  [16])0x0;
  *plVar16 = (long)&UNK_0ef9df38;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  plVar8 = plVar16 + 3;
  plVar16[4] = 0;
  plVar16[5] = -0x794549289d90b428;
  plVar16[3] = (long)&UNK_0ef9ff18;
  plVar16[6] = (long)plStack_ae0;
  plVar16[7] = (long)plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  LOCK();
  plVar7 = plVar13 + 1;
  lVar17 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar17 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
  }
  *plVar8 = (long)&UNK_0ef9df88;
  lVar17 = (**(code **)(**(long **)(lStack_ac8 + 0xa0) + 0x568))();
  lVar18 = FUN_0d2279e0(lVar17 + 0x518,0xf71d538);
  if (((lVar18 == 0) && (lVar18 = FUN_0d2279e0(lVar17 + 0x4f0,0xf71d538), lVar18 == 0)) ||
     (*(int *)(lVar18 + 0x50) != 7)) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(ulong *)(lVar18 + 0x38);
  }
  (**(code **)(*plVar20 + 0x10))(plVar20,uVar23);
  (**(code **)(*plVar8 + 0x10))(plVar8,uVar23);
  plStack_ad8 = plVar8;
  func_0x0c8cd350(&lStack_a78,lVar22,1);
  auStack_b08 = (undefined1  [16])0x0;
  uStack_af8 = 0;
  plVar7 = *(long **)(lVar22 + 0x388);
  for (plVar8 = *(long **)(lVar22 + 0x380); plVar8 != plVar7; plVar8 = plVar8 + 1) {
    lVar17 = *plVar8;
    if (lVar17 != *(long *)(lVar22 + 0x3b8)) {
      if ((DAT_0f553e08 == '\0') && (iVar5 = func_0x04108328(&DAT_0f553e08), iVar5 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f553e00 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f553e08);
      }
      for (psVar14 = *(short **)(lVar17 + 0x170); psVar14 != *(short **)(lVar17 + 0x178);
          psVar14 = psVar14 + 8) {
        if (*psVar14 == _DAT_0f553e00) {
          lVar17 = *(long *)(psVar14 + 4);
          if (lVar17 != 0) {
            lVar18 = *(long *)(lVar17 + 8);
            lVar17 = *(long *)(lVar17 + 0x10);
            goto LAB_05260f84;
          }
          break;
        }
      }
    }
LAB_05260f00:
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  lVar22 = lStack_a78;
  plVar26 = plVar16 + 1;
  LOCK();
  *plVar26 = *plVar26 + 1;
  UNLOCK();
  plVar20 = plVar13 + 1;
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  lVar18 = lStack_a70 - lStack_a78;
  if (lVar18 == 0) {
    lVar17 = 0;
    lVar27 = 0;
  }
  else {
    lVar17 = lStack_a78;
    if (lVar18 < 0) {
LAB_05261688:
      plVar7 = (long *)func_0x04a62b20();
      plVar8 = plStack_b10;
      plStack_b10 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 8))();
      }
      goto SUB_0412a280;
    }
    lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
    if (lVar17 == 0) {
      func_0x0eec74c0(lVar18,0);
    }
    lVar27 = lVar17 + lVar18;
    func_0x0eee2f00(lVar17,lVar22,lVar18);
  }
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  *plVar8 = (long)&UNK_0ef9e080;
  plVar8[1] = (long)plStack_ad8;
  plVar8[2] = (long)plVar16;
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  LOCK();
  plVar7 = plVar16 + 1;
  lVar22 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
  }
  *plVar8 = (long)&UNK_0ef9dfe0;
  plVar8[3] = (long)plStack_ae0;
  plVar8[4] = (long)plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  *(undefined4 *)(plVar8 + 5) = *(undefined4 *)(lStack_ac8 + 0xa8);
  plVar8[6] = lVar17;
  plVar8[7] = lVar27;
  plVar8[8] = lVar27;
  LOCK();
  plVar7 = plVar13 + 1;
  lVar22 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
  }
  plVar4 = plStack_ab8;
  LOCK();
  plVar7 = (long *)*plVar26;
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    plVar7 = (long *)func_0x0412c2d0(plVar16);
    lVar22 = auStack_b08._0_8_;
    lVar17 = lStack_a78;
    if (auStack_b08._0_8_ != auStack_b08._8_8_) goto LAB_052611d2;
  }
  else {
    lVar22 = auStack_b08._0_8_;
    lVar17 = lStack_a78;
    if (auStack_b08._0_8_ != auStack_b08._8_8_) {
LAB_052611d2:
      uVar23 = uVar23 ^ 0x6a09e667f3bcc909;
      uVar25 = (uVar23 >> 0x1e ^ uVar23) * -0x40a7b892e31b1a47;
      uVar25 = (uVar25 >> 0x1b ^ uVar25) * -0x6b2fb644ecceee15;
      uVar25 = uVar25 >> 0x1f ^ uVar25;
      uVar23 = (uVar23 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar23 + 0x9e3779b97f4a7c15) *
               -0x40a7b892e31b1a47;
      uVar23 = (uVar23 >> 0x1b ^ uVar23) * -0x6b2fb644ecceee15;
      uVar23 = uVar23 >> 0x1f ^ uVar23;
      if (uVar23 == 0 && uVar25 == 0) {
        uVar23 = 0x6a09e667f3bcc909;
        uVar25 = 0x9e3779b97f4a7c15;
      }
      lStack_a40 = ((uVar23 + uVar25) * 0x20000 | uVar23 + uVar25 >> 0x2f) + uVar25;
      uVar23 = uVar23 ^ uVar25;
      uVar25 = uVar23 << 0x15 ^ (uVar25 << 0x31 | uVar25 >> 0xf) ^ uVar23;
      uVar23 = (uVar23 << 0x1c | uVar23 >> 0x24) + uVar25;
      uStack_a38 = (uVar23 * 0x20000 | uVar23 >> 0x2f) + uVar25;
      puStack_a48 = &UNK_0ef51388;
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar21 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plStack_b10 = plVar8;
      plVar7 = (long *)func_0x04a402f0(plVar21,&puStack_a48,auStack_b08,&plStack_b10);
      plVar8 = plStack_b10;
      plStack_b10 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 8))();
      }
      plVar8 = plVar21;
      lVar22 = auStack_b08._0_8_;
      lVar17 = lStack_a78;
    }
  }
  if (lVar22 == 0) {
    if (lVar17 == 0) {
      LOCK();
      lVar22 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
      plVar7 = plStack_ae8;
      LOCK();
      lVar22 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
        LOCK();
        lVar22 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar22 = *plStack_ae8;
        *plStack_ae8 = *plStack_ae8 + -1;
        UNLOCK();
      }
      if (lVar22 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
      if (plVar11 != (long *)0x0) {
        LOCK();
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
      if (plVar10 != (long *)0x0) {
        LOCK();
        lVar22 = *plStack_af0;
        *plStack_af0 = *plStack_af0 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          func_0x0412c2d0(plVar10);
        }
      }
      if (plVar9 != (long *)0x0) {
        LOCK();
        lVar22 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          func_0x0412c2d0(plVar9);
        }
      }
LAB_052604e6:
      plVar7 = (long *)plStack_ad0[0x38];
      plStack_ad0[0x38] = (long)plVar8;
      if (plVar7 != (long *)0x0) {
        plStack_ad0 = (long *)(**(code **)(*plVar7 + 8))();
      }
      return plStack_ad0;
    }
  }
  else {
    lVar17 = lVar22;
    for (lVar18 = auStack_b08._8_8_; lVar22 != lVar18; lVar18 = lVar18 + -0x48) {
      lVar17 = *(long *)(lVar18 + -0x28);
      if (lVar17 != 0) {
        *(long *)(lVar18 + -0x20) = lVar17;
        plVar7 = (long *)func_0x0412a280(lVar17,*(long *)(lVar18 + -0x18) - lVar17);
      }
      if ((*(byte *)(lVar18 + -0x40) & 1) != 0) {
        lVar17 = *(long *)(lVar18 + -0x30);
        goto SUB_0412a280;
      }
      lVar17 = auStack_b08._0_8_;
    }
    auStack_b08._8_8_ = lVar22;
  }
SUB_0412a280:
  if (lVar17 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar17);
  }
  return plVar7;
LAB_05260710:
  plVar8 = plVar1 + 1;
  uVar23 = ~uVar25 + uVar23;
  lVar17 = 0;
  if (uVar23 == 0) goto LAB_052607bb;
  goto LAB_05260729;
LAB_05260f84:
  if (lVar18 == lVar17) goto LAB_05260f00;
  bVar2 = *(byte *)(lVar18 + 8);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0x10) goto LAB_05260fba;
  }
  else if (*(long *)(lVar18 + 0x10) == 0x10) {
LAB_05260fba:
    if ((bVar2 & 1) == 0) {
      pcVar19 = (char *)(lVar18 + 9);
    }
    else {
      pcVar19 = *(char **)(lVar18 + 0x18);
    }
    auVar29[0] = -(*pcVar19 == DAT_014eaeb0);
    auVar29[1] = -(pcVar19[1] == UNK_014eaeb1);
    auVar29[2] = -(pcVar19[2] == UNK_014eaeb2);
    auVar29[3] = -(pcVar19[3] == UNK_014eaeb3);
    auVar29[4] = -(pcVar19[4] == UNK_014eaeb4);
    auVar29[5] = -(pcVar19[5] == UNK_014eaeb5);
    auVar29[6] = -(pcVar19[6] == UNK_014eaeb6);
    auVar29[7] = -(pcVar19[7] == UNK_014eaeb7);
    auVar29[8] = -(pcVar19[8] == UNK_014eaeb8);
    auVar29[9] = -(pcVar19[9] == UNK_014eaeb9);
    auVar29[10] = -(pcVar19[10] == UNK_014eaeba);
    auVar29[0xb] = -(pcVar19[0xb] == UNK_014eaebb);
    auVar29[0xc] = -(pcVar19[0xc] == UNK_014eaebc);
    auVar29[0xd] = -(pcVar19[0xd] == UNK_014eaebd);
    auVar29[0xe] = -(pcVar19[0xe] == UNK_014eaebe);
    auVar29[0xf] = -(pcVar19[0xf] == UNK_014eaebf);
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar3 = auStack_b08._8_8_;
      if ((ulong)auStack_b08._8_8_ < uStack_af8) {
        func_0x052a26a0(auStack_b08._8_8_,lVar18);
        lVar27 = uVar3 + 0x48;
      }
      else {
        lVar27 = func_0x052a2500(auStack_b08,lVar18);
      }
      auStack_b08._8_8_ = lVar27;
    }
  }
  lVar18 = lVar18 + 0x48;
  goto LAB_05260f84;
}



/* ---- referenced strings ----
 * 0x14eaeb0  minecraft:nether
 */
