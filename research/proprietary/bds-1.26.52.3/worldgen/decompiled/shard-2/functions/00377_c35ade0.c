/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc45ade0 (ELF vaddr 0xc35ade0)
 * Label: caller-of-callee
 * Body:  [[0c45ade0, 0c45b70d] [0c45b710, 0c45b81d] [0c45b820, 0c45bf5c] [0c45bfe1, 0c45c018]]
 * Ghidra: FUN_0c45ade0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c45ade0(undefined *param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long extraout_RDX;
  undefined *puVar20;
  undefined *puVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  short sVar26;
  short sVar27;
  long *in_FS_OFFSET;
  bool bVar28;
  undefined1 auVar29 [16];
  long lVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b4 [4];
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  byte *pbStack_98;
  undefined *puStack_90;
  long *plStack_88;
  int iStack_7c;
  undefined *puStack_78;
  long lStack_70;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_50 = *in_FS_OFFSET;
  if (*(char *)(lStack_50 + -0xb68) == '\0') {
    *(undefined1 *)(lStack_50 + -0xb68) = 1;
    func_0x0417d010(&UNK_0ca00780,lStack_50 + -0xb78,0xf53dab8);
  }
  lVar10 = lStack_50;
  uVar11 = *(ulong *)(lStack_50 + -0xb70);
  uStack_48 = *(undefined **)(lStack_50 + -0xb78);
  lStack_40 = *(long *)(lStack_50 + -0xb70);
  if (uVar11 != 0) {
    LOCK();
    *(long *)(uVar11 + 0x10) = *(long *)(uVar11 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(uVar11 + 0x10) = *(long *)(uVar11 + 0x10) + 1;
    UNLOCK();
    puStack_78 = uStack_48;
    lStack_70 = lStack_40;
    FUN_0412c2d0(uVar11);
    uStack_48 = puStack_78;
    lStack_40 = lStack_70;
  }
  auStack_e8 = (undefined1  [8])&UNK_0124399b;
  uStack_e0 = 6;
  puVar20 = (undefined *)(param_2 + 8);
  uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
  uVar24 = param_2 + 0x10;
  if ((uVar9 == uVar24) || (*(int *)(uVar9 + 0x60) != 2)) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)(ulong)*(ushort *)(uVar9 + 0x40);
  }
  auStack_a8 = (undefined1  [16])0x0;
  pbStack_98 = (byte *)0x0;
  uStack_e0 = 4;
  auStack_e8 = (undefined1  [8])&UNK_012f0cac;
  lStack_38 = lVar10;
  uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
  puStack_90 = param_1;
  puStack_78 = puVar20;
  if (uVar9 == uVar24) {
LAB_0c45af4f:
    uStack_e0 = 2;
    auStack_e8 = (undefined1  [8])&UNK_0133e2b9;
    uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
    if (uVar9 == uVar24) goto LAB_0c45b177;
    if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) goto LAB_0c45bec1;
    plStack_b0 = (long *)auStack_b4;
    plVar14 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                                (&plStack_b0,uVar9 + 0x38);
    if (plVar14 == (long *)0x0) goto LAB_0c45b177;
    cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14);
    if (cVar7 != '\b') {
      uStack_e0 = 2;
      auStack_e8 = (undefined1  [8])&UNK_0133e2b9;
      uVar11 = func_0x0d6c97a0(puVar20,auStack_e8);
      if ((uVar11 == uVar24) || (*(int *)(uVar11 + 0x60) != 2)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulong)*(ushort *)(uVar11 + 0x40);
      }
      if (DAT_0f6e5b40 == '\0') goto LAB_0c45becb;
      goto LAB_0c45b0ae;
    }
    pauVar12 = (undefined1 (*) [16])(plVar14 + 1);
    if (&auStack_a8 == pauVar12) goto LAB_0c45b177;
    bVar2 = (byte)*(long *)*pauVar12;
    if ((auStack_a8[0] & 1) != 0) {
      bVar28 = (bVar2 & 1) != 0;
      lVar10 = (long)plVar14 + 9;
      if (bVar28) {
        lVar10 = plVar14[3];
      }
      uVar11 = (ulong)(bVar2 >> 1);
      if (bVar28) {
        uVar11 = plVar14[2];
      }
      func_0x04885120(auStack_a8,lVar10,uVar11);
      goto LAB_0c45b177;
    }
    if ((bVar2 & 1) != 0) {
      func_0x04885070(auStack_a8,plVar14[3],plVar14[2]);
      goto LAB_0c45b177;
    }
  }
  else {
    if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) goto LAB_0c45bebc;
    plStack_b0 = (long *)auStack_b4;
    lVar10 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                       (&plStack_b0,uVar9 + 0x38);
    if (lVar10 == 0) goto LAB_0c45af4f;
    uStack_e0 = 4;
    auStack_e8 = (undefined1  [8])&UNK_012f0cac;
    uVar11 = func_0x0d6c97a0(puVar20,auStack_e8);
    if (uVar11 == uVar24) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*(int *)(uVar11 + 0x60) == 8) {
        lVar10 = uVar11 + 0x38;
      }
    }
    pauVar12 = (undefined1 (*) [16])&UNK_01e79d90;
    if (lVar10 != 0) {
      pauVar12 = (undefined1 (*) [16])(lVar10 + 8);
    }
    if (&auStack_a8 == pauVar12) goto LAB_0c45b177;
    bVar2 = (byte)*(long *)*pauVar12;
    if ((auStack_a8[0] & 1) != 0) {
      bVar28 = (bVar2 & 1) != 0;
      puVar21 = (undefined *)((long)*pauVar12 + 1);
      if (bVar28) {
        puVar21 = *(undefined **)pauVar12[1];
      }
      uVar11 = (ulong)(bVar2 >> 1);
      if (bVar28) {
        uVar11 = *(ulong *)((long)*pauVar12 + 8);
      }
      func_0x04885120(auStack_a8,puVar21,uVar11);
      goto LAB_0c45b177;
    }
    if ((bVar2 & 1) != 0) {
      func_0x04885070(auStack_a8,*(long *)pauVar12[1],*(long *)((long)*pauVar12 + 8));
      goto LAB_0c45b177;
    }
  }
  pbStack_98 = *(byte **)pauVar12[1];
  auStack_a8 = *pauVar12;
LAB_0c45b177:
  uVar11 = 0;
LAB_0c45b17a:
  uStack_e0 = 0xe;
  auStack_e8 = (undefined1  [8])&UNK_012332bc;
  uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
  if (uVar9 == uVar24) {
    uVar9 = (ulong)auStack_a8[0];
    goto LAB_0c45b3f9;
  }
  if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) {
LAB_0c45bebc:
    func_0x04931450();
LAB_0c45bec1:
    func_0x04931450();
  }
  else {
    plStack_b0 = (long *)auStack_b4;
    lVar10 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                       (&plStack_b0,uVar9 + 0x38);
    uVar9 = (ulong)auStack_a8[0];
    if (lVar10 != 0) {
      if ((auStack_a8[0] & 1) == 0) {
        if (auStack_a8[0] >> 1 == 0x13) goto LAB_0c45b20d;
      }
      else if (auStack_a8._8_8_ == 0x13) {
LAB_0c45b20d:
        pbVar25 = pbStack_98;
        if ((auStack_a8[0] & 1) == 0) {
          pbVar25 = auStack_a8 + 1;
        }
        auVar31[0] = -(pbVar25[3] == DAT_014e3980);
        auVar31[1] = -(pbVar25[4] == UNK_014e3981);
        auVar31[2] = -(pbVar25[5] == UNK_014e3982);
        auVar31[3] = -(pbVar25[6] == UNK_014e3983);
        auVar31[4] = -(pbVar25[7] == UNK_014e3984);
        auVar31[5] = -(pbVar25[8] == UNK_014e3985);
        auVar31[6] = -(pbVar25[9] == UNK_014e3986);
        auVar31[7] = -(pbVar25[10] == UNK_014e3987);
        auVar31[8] = -(pbVar25[0xb] == UNK_014e3988);
        auVar31[9] = -(pbVar25[0xc] == UNK_014e3989);
        auVar31[10] = -(pbVar25[0xd] == UNK_014e398a);
        auVar31[0xb] = -(pbVar25[0xe] == UNK_014e398b);
        auVar31[0xc] = -(pbVar25[0xf] == UNK_014e398c);
        auVar31[0xd] = -(pbVar25[0x10] == UNK_014e398d);
        auVar31[0xe] = -(pbVar25[0x11] == UNK_014e398e);
        auVar31[0xf] = -(pbVar25[0x12] == UNK_014e398f);
        auVar29[0] = -(*pbVar25 == DAT_014e7f50);
        auVar29[1] = -(pbVar25[1] == UNK_014e7f51);
        auVar29[2] = -(pbVar25[2] == UNK_014e7f52);
        auVar29[3] = -(pbVar25[3] == UNK_014e7f53);
        auVar29[4] = -(pbVar25[4] == UNK_014e7f54);
        auVar29[5] = -(pbVar25[5] == UNK_014e7f55);
        auVar29[6] = -(pbVar25[6] == UNK_014e7f56);
        auVar29[7] = -(pbVar25[7] == UNK_014e7f57);
        auVar29[8] = -(pbVar25[8] == UNK_014e7f58);
        auVar29[9] = -(pbVar25[9] == UNK_014e7f59);
        auVar29[10] = -(pbVar25[10] == UNK_014e7f5a);
        auVar29[0xb] = -(pbVar25[0xb] == UNK_014e7f5b);
        auVar29[0xc] = -(pbVar25[0xc] == UNK_014e7f5c);
        auVar29[0xd] = -(pbVar25[0xd] == UNK_014e7f5d);
        auVar29[0xe] = -(pbVar25[0xe] == UNK_014e7f5e);
        auVar29[0xf] = -(pbVar25[0xf] == UNK_014e7f5f);
        auVar29 = auVar29 & auVar31;
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
          uStack_e0 = 0xe;
          auStack_e8 = (undefined1  [8])&UNK_012332bc;
          uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
          uStack_54 = (uint)uVar11;
          if (uVar9 == uVar24) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*(int *)(uVar9 + 0x60) == 8) {
              lVar10 = uVar9 + 0x38;
            }
          }
          pbVar25 = &UNK_01e79d90;
          if (lVar10 != 0) {
            pbVar25 = (byte *)(lVar10 + 8);
          }
          bVar2 = *pbVar25;
          if ((bVar2 & 1) == 0) {
            uVar11 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar11 = *(ulong *)(pbVar25 + 8);
          }
          uVar9 = uVar11 + 10;
          if (0xfffffffffffffff7 < uVar9) {
            uVar17 = FUN_04882e30();
            func_0x041084d6(&DAT_0f6e5b40);
            if ((auStack_a8[0] & 1) != 0) {
              func_0x0412a280(pbStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
            }
            if (lStack_40 != 0) {
              FUN_0412c2d0(lStack_40);
            }
            func_0x0eee2d70(uVar17);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_58 = (uint)plVar16;
          if (uVar9 < 0x17) {
            pbStack_d8 = (byte *)0x0;
            stack0xffffffffffffff19 = SUB1615((undefined1  [16])0x0,1);
            auStack_e8[0] = (char)uVar9 * '\x02';
            pbVar13 = auStack_e8 + 1;
            param_1 = puStack_90;
            if (uVar11 != 0) {
              if ((bVar2 & 1) == 0) goto LAB_0c45b383;
LAB_0c45b31c:
              pbVar25 = *(byte **)(pbVar25 + 0x10);
              goto LAB_0c45b386;
            }
          }
          else {
            uVar18 = 0x1a;
            if ((uVar9 | 7) != 0x17) {
              uVar18 = (uVar9 | 7) + 1;
            }
            uStack_5c = (uint)bVar2;
            pbVar13 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
            if (pbVar13 == (byte *)0x0) {
              func_0x0eec74c0(uVar18,0);
            }
            uStack_e0 = uVar9;
            auStack_e8 = (undefined1  [8])(uVar18 | 1);
            pbStack_d8 = pbVar13;
            if ((uStack_5c & 1) != 0) goto LAB_0c45b31c;
LAB_0c45b383:
            pbVar25 = pbVar25 + 1;
LAB_0c45b386:
            param_1 = puStack_90;
            func_0x0eee2ee0(pbVar13,pbVar25,uVar11);
          }
          pbVar25 = pbVar13 + uVar11;
          pbVar25[0] = 0x5f;
          pbVar25[1] = 0x73;
          pbVar25[2] = 0x70;
          pbVar25[3] = 0x61;
          pbVar25[4] = 0x77;
          pbVar25[5] = 0x6e;
          pbVar25[6] = 0x5f;
          pbVar25[7] = 0x65;
          (pbVar13 + uVar11 + 8)[0] = 0x67;
          (pbVar13 + uVar11 + 8)[1] = 0x67;
          pbVar13[uVar11 + 10] = 0;
          if ((auStack_a8[0] & 1) != 0) {
            func_0x0412a280(pbStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
          }
          pbStack_98 = pbStack_d8;
          auStack_a8 = _auStack_e8;
          uVar9 = (ulong)auStack_e8 & 0xff;
          plVar16 = (long *)(ulong)uStack_58;
          uVar11 = (ulong)uStack_54;
          puVar20 = puStack_78;
        }
      }
    }
LAB_0c45b3f9:
    iStack_7c = (int)(short)plVar16;
    bVar28 = (uVar9 & 1) != 0;
    pbVar25 = auStack_a8 + 1;
    if (bVar28) {
      pbVar25 = pbStack_98;
    }
    uVar9 = uVar9 >> 1;
    if (bVar28) {
      uVar9 = auStack_a8._8_8_;
    }
    func_0x0ca12710(auStack_e8,&uStack_48,&iStack_7c,pbVar25,uVar9);
    if (auStack_e8 != (undefined1  [8])0x0) {
      lVar10 = *(long *)auStack_e8;
      LOCK();
      *(int *)((long)auStack_e8 + 0xc) = *(int *)((long)auStack_e8 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)auStack_e8 + 0xc) < 1) && (*(long *)auStack_e8 == 0)) &&
         (auStack_e8 != (undefined1  [8])0x0)) {
        func_0x0412a280(auStack_e8,0x10);
      }
      if (lVar10 != 0) {
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x8a);
        plVar16 = (long *)(ulong)(ushort)iStack_7c;
      }
    }
    func_0x0c456010(param_1,(int)(short)uVar11,1);
    sVar26 = 0;
    if (0 < (short)plVar16) {
      sVar26 = (short)plVar16;
    }
    *(short *)(param_1 + 0x20) = sVar26;
    uStack_e0 = 0xb;
    auStack_e8 = (undefined1  [8])&UNK_0143e889;
    uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
    if (uVar9 == uVar24) goto LAB_0c45b51b;
    if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) {
LAB_0c45beb7:
      func_0x04931450();
      goto LAB_0c45bebc;
    }
    plStack_b0 = (long *)auStack_b4;
    lVar10 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                       (&plStack_b0,uVar9 + 0x38);
    if (lVar10 == 0) {
LAB_0c45b51b:
      bVar28 = false;
    }
    else {
      uStack_e0 = 0xb;
      auStack_e8 = (undefined1  [8])&UNK_0143e889;
      uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
      if ((uVar9 == uVar24) || (*(int *)(uVar9 + 0x60) != 1)) goto LAB_0c45b51b;
      bVar28 = *(char *)(uVar9 + 0x40) != '\0';
    }
    param_1[0x25] = bVar28;
    auStack_e8 = (undefined1  [8])&UNK_01379ee7;
    uStack_e0 = 5;
    uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
    if ((uVar9 == uVar24) || (*(int *)(uVar9 + 0x60) != 1)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined1 *)(uVar9 + 0x40);
    }
    param_1[0x22] = uVar6;
    uStack_e0 = 3;
    auStack_e8 = (undefined1  [8])&UNK_013b3f3b;
    uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
    if (uVar9 == uVar24) {
LAB_0c45b5f6:
      plStack_88 = (long *)0x0;
    }
    else {
      if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) goto LAB_0c45beb7;
      plStack_b0 = (long *)auStack_b4;
      plVar14 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                                  (&plStack_b0,uVar9 + 0x38);
      if ((plVar14 == (long *)0x0) ||
         (cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14), cVar7 != '\n')) goto LAB_0c45b5f6;
      uStack_e0 = 3;
      auStack_e8 = (undefined1  [8])&UNK_013b3f3b;
      uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
      if (uVar9 == uVar24) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if (*(int *)(uVar9 + 0x60) == 10) {
          uVar11 = uVar9 + 0x38;
        }
      }
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar16 = (long)&UNK_0f47e0b0;
      *(undefined1 (*) [16])(plVar16 + 2) = (undefined1  [16])0x0;
      plVar16[1] = (long)(plVar16 + 2);
      plStack_88 = plVar16;
      func_0x0d6bd5f0(plVar16,uVar11);
    }
    func_0x0c44fd30(param_1,&plStack_88);
    plVar14 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    uStack_e0 = 10;
    auStack_e8 = (undefined1  [8])&UNK_01ce4891;
    uVar9 = func_0x0d6c97a0(puVar20,auStack_e8);
    if (uVar9 != uVar24) {
      if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) goto LAB_0c45beb7;
      plStack_b0 = (long *)auStack_b4;
      plVar14 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                                  (&plStack_b0,uVar9 + 0x38);
      if ((plVar14 != (long *)0x0) &&
         (cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14), cVar7 == '\t')) {
        uStack_e0 = 10;
        auStack_e8 = (undefined1  [8])&UNK_01ce4891;
        uVar11 = func_0x0d6c97a0(puStack_78,auStack_e8);
        if ((uVar11 != uVar24) &&
           ((*(int *)(uVar11 + 0x60) == 9 &&
            (lVar10 = *(long *)(uVar11 + 0x40),
            0 < (int)((ulong)(*(long *)(uVar11 + 0x48) - lVar10) >> 3))))) {
          puVar20 = puStack_90 + 0x30;
          plVar16 = (long *)0x0;
          param_1 = &UNK_01e79d90;
          do {
            plVar14 = *(long **)(lVar10 + (long)plVar16 * 8);
            plVar22 = (long *)&UNK_01e79d90;
            if (plVar14 != (long *)0x0) {
              cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14,&UNK_01e79d90);
              if (cVar7 == '\b') {
                plVar22 = plVar14 + 1;
              }
              else {
                plVar22 = (long *)&UNK_01e79d90;
              }
            }
            func_0x0c45f940(puVar20,plVar22);
            plVar16 = (long *)((long)plVar16 + 1);
            lVar10 = *(long *)(uVar11 + 0x40);
          } while ((long)plVar16 < (long)(int)((ulong)(*(long *)(uVar11 + 0x48) - lVar10) >> 3));
        }
      }
    }
    uStack_e0 = 10;
    auStack_e8 = (undefined1  [8])&UNK_01ce48a9;
    uVar9 = func_0x0d6c97a0(puStack_78,auStack_e8);
    if (uVar9 != uVar24) {
      if ((ulong)*(uint *)(uVar9 + 0x60) == 0xffffffff) goto LAB_0c45beb7;
      plStack_b0 = (long *)auStack_b4;
      plVar14 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(uVar9 + 0x60) * 8))
                                  (&plStack_b0,uVar9 + 0x38);
      if ((plVar14 != (long *)0x0) &&
         (cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14), cVar7 == '\t')) {
        uStack_e0 = 10;
        auStack_e8 = (undefined1  [8])&UNK_01ce48a9;
        uVar11 = func_0x0d6c97a0(puStack_78,auStack_e8);
        if ((uVar11 != uVar24) &&
           ((*(int *)(uVar11 + 0x60) == 9 &&
            (lVar10 = *(long *)(uVar11 + 0x40),
            0 < (int)((ulong)(*(long *)(uVar11 + 0x48) - lVar10) >> 3))))) {
          puVar20 = puStack_90 + 0x50;
          plVar16 = (long *)0x0;
          do {
            plVar14 = *(long **)(lVar10 + (long)plVar16 * 8);
            plVar22 = (long *)&UNK_01e79d90;
            if (plVar14 != (long *)0x0) {
              cVar7 = (**(code **)(*plVar14 + 0x30))(plVar14,&UNK_01e79d90);
              if (cVar7 == '\b') {
                plVar22 = plVar14 + 1;
              }
              else {
                plVar22 = (long *)&UNK_01e79d90;
              }
            }
            func_0x0c45f940(puVar20,plVar22);
            plVar16 = (long *)((long)plVar16 + 1);
            lVar10 = *(long *)(uVar11 + 0x40);
          } while ((long)plVar16 < (long)(int)((ulong)(*(long *)(uVar11 + 0x48) - lVar10) >> 3));
        }
      }
    }
    param_1 = puStack_90;
    func_0x0c45ff60(puStack_90);
    if ((*(long **)(param_1 + 8) == (long *)0x0) || (**(long **)(param_1 + 8) == 0))
    goto LAB_0c45bdf3;
    uStack_e0 = 5;
    auStack_e8 = (undefined1  [8])&UNK_0128d58c;
    uVar9 = func_0x0d6c97a0(puStack_78,auStack_e8);
    if ((uVar9 == uVar24) || (*(int *)(uVar9 + 0x60) != 10)) {
      if (((*(long **)(param_1 + 8) == (long *)0x0) ||
          (lVar10 = **(long **)(param_1 + 8), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x138), lVar10 == 0)) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        goto LAB_0c45bdf3;
      }
      lVar15 = func_0x0c6c88d0(lVar10,*(undefined2 *)(param_1 + 0x20));
      if (lVar15 == 0) {
        lVar15 = *(long *)(lVar10 + 0x200);
      }
      *(long *)(param_1 + 0x18) = lVar15;
    }
    else {
      func_0x0c700540(uVar9 + 0x38,0);
      *(long *)(param_1 + 0x18) = extraout_RDX;
      lVar15 = extraout_RDX;
      if (extraout_RDX == 0) goto LAB_0c45bdf3;
    }
    if ((*(long **)(param_1 + 8) != (long *)0x0) && (lVar10 = **(long **)(param_1 + 8), lVar10 != 0)
       ) goto code_r0x0c45b917;
  }
  func_0x04890760();
LAB_0c45becb:
  iVar8 = func_0x04108328(&DAT_0f6e5b40);
  if (iVar8 != 0) {
    uStack_e0 = _UNK_014e7f48;
    auStack_e8 = (undefined1  [8])_DAT_014e7f40;
    pbStack_d8 = _DAT_014ea690;
    pbStack_d0 = _UNK_014ea698;
    uStack_c8 = 0x1d200010142;
    func_0x0c473f60(auStack_e8);
    func_0x0eee2f40(&UNK_0c474770,&DAT_0f6e5b18,0xf53dab8);
    func_0x0410844d(&DAT_0f6e5b40);
    puVar20 = puStack_78;
    param_1 = puStack_90;
  }
LAB_0c45b0ae:
  if (_DAT_0f6e5b20 != 0) {
    sVar26 = (short)uVar11;
    sVar27 = (short)plVar16;
    uVar18 = (ulong)((long)sVar27 * 2 ^ (long)sVar26) >> 1;
    uVar9 = _DAT_0f6e5b20 - (_DAT_0f6e5b20 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      uVar19 = _DAT_0f6e5b20 - 1 & uVar18;
    }
    else {
      uVar19 = uVar18;
      if (_DAT_0f6e5b20 <= uVar18) {
        if ((uVar18 | _DAT_0f6e5b20) >> 0x20 == 0) {
          uVar19 = (uVar18 & 0xffffffff) % (_DAT_0f6e5b20 & 0xffffffff);
        }
        else {
          uVar19 = uVar18 % _DAT_0f6e5b20;
        }
      }
    }
    plVar14 = *(long **)(_DAT_0f6e5b18 + uVar19 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if (plVar14[1] == uVar18) {
            if (((short)plVar14[2] == sVar26) && (*(short *)((long)plVar14 + 0x12) == sVar27))
            goto LAB_0c45baad;
          }
          else if ((plVar14[1] & _DAT_0f6e5b20 - 1) != uVar19) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == uVar18) {
            if (((short)plVar14[2] == sVar26) && (*(short *)((long)plVar14 + 0x12) == sVar27))
            goto LAB_0c45baad;
          }
          else {
            if (_DAT_0f6e5b20 <= uVar9) {
              if ((uVar9 | _DAT_0f6e5b20) >> 0x20 == 0) {
                uVar9 = (uVar9 & 0xffffffff) % (_DAT_0f6e5b20 & 0xffffffff);
              }
              else {
                uVar9 = uVar9 % _DAT_0f6e5b20;
              }
            }
            if (uVar9 != uVar19) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_0c45bab8;
LAB_0c45baad:
  uVar11 = (ulong)*(uint *)((long)plVar14 + 0x14);
  plVar16 = (long *)(ulong)(*(uint *)((long)plVar14 + 0x14) >> 0x10);
LAB_0c45bab8:
  func_0x0ca13f70(auStack_e8,&uStack_48,(int)(short)uVar11);
  if ((auStack_a8[0] & 1) == 0) {
    if (((byte)uStack_e0 & 1) == 0) {
      pbStack_98 = pbStack_d0;
      auStack_a8._8_8_ = pbStack_d8;
      auStack_a8._0_8_ = uStack_e0;
    }
    else {
      func_0x04885070(auStack_a8,pbStack_d0,pbStack_d8);
    }
  }
  else {
    pbVar13 = (byte *)(ulong)((byte)uStack_e0 >> 1);
    pbVar25 = (byte *)((long)&uStack_e0 + 1);
    if (((byte)uStack_e0 & 1) != 0) {
      pbVar13 = pbStack_d8;
      pbVar25 = pbStack_d0;
    }
    func_0x04885120(auStack_a8,pbVar25,pbVar13);
  }
  if (((byte)uStack_e0 & 1) != 0) {
    func_0x0412a280(pbStack_d0,uStack_e0 & 0xfffffffffffffffe);
  }
  goto LAB_0c45b17a;
code_r0x0c45b917:
  lVar15 = *(long *)(lVar15 + 0x68);
  if (*(long *)(lVar15 + 200) == *(long *)(lVar10 + 0xe8)) {
    bVar2 = *(byte *)(lVar15 + 0xd0);
    if ((bVar2 & 1) == 0) {
      uVar11 = (ulong)(bVar2 >> 1);
      uVar9 = (ulong)*(byte *)(lVar10 + 0xf0);
      if ((*(byte *)(lVar10 + 0xf0) & 1) == 0) goto LAB_0c45b955;
LAB_0c45b9e1:
      if (uVar11 != *(ulong *)(lVar10 + 0xf8)) goto LAB_0c45bcfd;
    }
    else {
      uVar11 = *(ulong *)(lVar15 + 0xd8);
      uVar9 = (ulong)*(byte *)(lVar10 + 0xf0);
      if ((*(byte *)(lVar10 + 0xf0) & 1) != 0) goto LAB_0c45b9e1;
LAB_0c45b955:
      if (uVar11 != uVar9 >> 1) goto LAB_0c45bcfd;
    }
    if ((bVar2 & 1) == 0) {
      lVar23 = lVar15 + 0xd1;
    }
    else {
      lVar23 = *(long *)(lVar15 + 0xe0);
    }
    if ((uVar9 & 1) == 0) {
      lVar10 = lVar10 + 0xf1;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x100);
    }
    iVar8 = func_0x0eee3000(lVar23,lVar10);
    if (iVar8 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uStack_e0;
      _auStack_e8 = auVar4 << 0x40;
      if ((auStack_a8[0] & 1) == 0) {
        pbStack_d0 = pbStack_98;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auStack_a8._0_8_;
        _auStack_e8 = auVar5 << 0x40;
        pbStack_d8 = (byte *)auStack_a8._8_8_;
      }
      else {
        func_0x0412e5e0(&uStack_e0,pbStack_98,auStack_a8._8_8_);
      }
      uStack_c8 = 0;
      pbVar25 = pbStack_d8;
      if (((byte)uStack_e0 & 1) == 0) {
        pbVar25 = (byte *)(ulong)((byte)uStack_e0 >> 1);
      }
      if (pbVar25 == (byte *)0x0) {
LAB_0c45bcbc:
        uVar11 = 0;
      }
      else {
        pbVar25 = pbStack_d0;
        if (((byte)uStack_e0 & 1) == 0) {
          pbVar25 = (byte *)((long)&uStack_e0 + 1);
        }
        if ((pbVar25 == (byte *)0x0) || (*pbVar25 == 0)) goto LAB_0c45bcbc;
        uVar11 = 0xcbf29ce484222325;
        uVar9 = func_0x0eee2e90(pbVar25);
        if (uVar9 != 0) {
          uVar24 = (ulong)((uint)uVar9 & 7);
          if (7 < uVar9) {
            uVar9 = uVar9 & 0xfffffffffffffff8;
            do {
              uVar11 = (((((((uVar11 * 0x100000001b3 ^ (ulong)*pbVar25) * 0x100000001b3 ^
                            (ulong)pbVar25[1]) * 0x100000001b3 ^ (ulong)pbVar25[2]) * 0x100000001b3
                          ^ (ulong)pbVar25[3]) * 0x100000001b3 ^ (ulong)pbVar25[4]) * 0x100000001b3
                        ^ (ulong)pbVar25[5]) * 0x100000001b3 ^ (ulong)pbVar25[6]) * 0x100000001b3 ^
                       (ulong)pbVar25[7];
              pbVar25 = pbVar25 + 8;
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
          }
          if (uVar24 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar11 * 0x100000001b3 ^ (ulong)pbVar25[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar24 != uVar9);
          }
        }
      }
      auStack_e8 = (undefined1  [8])uVar11;
      cVar7 = func_0x0cc41880(0xf6ff9e0,auStack_e8);
      if (((byte)uStack_e0 & 1) != 0) {
        func_0x0412a280(pbStack_d0,uStack_e0 & 0xfffffffffffffffe);
      }
      if (cVar7 == '\0') goto LAB_0c45bdf3;
      lVar15 = *(long *)(*(long *)(param_1 + 0x18) + 0x68);
    }
  }
LAB_0c45bcfd:
  lVar10 = lStack_38;
  puVar1 = (undefined8 *)(lStack_38 + -0xb78);
  if (*(char *)(lStack_50 + -0xb68) == '\0') {
    *(undefined1 *)(lStack_50 + -0xb68) = 1;
    func_0x0417d010(&UNK_0ca00780,lStack_50 + -0xb78,0xf53dab8);
    lVar23 = *(long *)(lVar10 + -0xb70);
    puVar21 = (undefined *)*puVar1;
    lVar30 = *(long *)(lVar10 + -0xb70);
    puVar20 = puStack_78;
    lVar10 = lStack_70;
  }
  else {
    lVar23 = *(long *)(lStack_38 + -0xb70);
    puVar21 = (undefined *)*puVar1;
    lVar30 = *(long *)(lStack_38 + -0xb70);
    puVar20 = puStack_78;
    lVar10 = lStack_70;
  }
  lStack_70 = lVar30;
  puStack_78 = puVar21;
  puVar21 = puStack_78;
  lVar30 = lStack_70;
  if (lVar23 != 0) {
    LOCK();
    *(long *)(lVar23 + 0x10) = *(long *)(lVar23 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar23 + 0x10) = *(long *)(lVar23 + 0x10) + 1;
    UNLOCK();
    FUN_0412c2d0(lVar23);
    puVar21 = puStack_78;
    lVar30 = lStack_70;
    puVar20 = puStack_78;
    lVar10 = lStack_70;
  }
  lStack_70 = lVar10;
  puStack_78 = puVar20;
  uStack_e0 = lVar30;
  auStack_e8 = (undefined1  [8])puVar21;
  auStack_b4 = (undefined1  [4])0x0;
  bVar28 = (*(byte *)(lVar15 + 0xd0) & 1) != 0;
  lVar10 = lVar15 + 0xd1;
  if (bVar28) {
    lVar10 = *(long *)(lVar15 + 0xe0);
  }
  uVar11 = (ulong)(*(byte *)(lVar15 + 0xd0) >> 1);
  if (bVar28) {
    uVar11 = *(ulong *)(lVar15 + 0xd8);
  }
  func_0x0ca12710(&plStack_b0,auStack_e8,auStack_b4,lVar10,uVar11);
  if (plStack_b0 != (long *)0x0) {
    lVar10 = *plStack_b0;
    LOCK();
    *(int *)((long)plStack_b0 + 0xc) = *(int *)((long)plStack_b0 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plStack_b0 + 0xc) < 1) && (*plStack_b0 == 0)) &&
       (plStack_b0 != (long *)0x0)) {
      func_0x0412a280(plStack_b0,0x10);
    }
    if (lVar10 != 0) {
      func_0x0c456010(param_1,(int)*(short *)(lVar10 + 0x8a),0);
      *(undefined2 *)(param_1 + 0x20) = auStack_b4._0_2_;
    }
  }
  if (uStack_e0 != 0) {
    FUN_0412c2d0();
  }
LAB_0c45bdf3:
  if ((auStack_a8[0] & 1) != 0) {
    func_0x0412a280(pbStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
  }
  if (lStack_40 != 0) {
    FUN_0412c2d0();
  }
  return;
}



/* ---- referenced strings ----
 * 0x14e3980  ecraft:spawn_egg
 */
