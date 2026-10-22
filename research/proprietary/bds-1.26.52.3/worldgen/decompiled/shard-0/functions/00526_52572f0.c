/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53572f0 (ELF vaddr 0x52572f0)
 * Label: caller-of-callee
 * Body:  [[052ef550, 052ef97c] [052ef980, 052efb89] [053572f0, 053573b9] [053573c0, 053574c2] [053574d0, 0535772e] [05357730, 0535780e] [05357810, 05357914] [05357920, 05357aaa] [05357ab0, 05357bfe] [05357c00, 05357e53] [05357e60, 05357f48]]
 * Ghidra: FUN_053572f0
 */


/* WARNING: Possible PIC construction at 0x05357de7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05357dec) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_053572f0(undefined4 *param_1,long param_2,long *param_3,undefined8 param_4,long *param_5,
                 long param_6)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  ulong *puVar16;
  byte *pbVar17;
  undefined8 uVar18;
  short *psVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  int *unaff_RBX;
  undefined *puVar23;
  ulong uVar24;
  long *unaff_RBP;
  byte *pbVar25;
  long *plVar26;
  long lVar27;
  undefined4 *unaff_R12;
  undefined4 *puVar28;
  undefined *unaff_R13;
  long lVar29;
  long lVar30;
  long *unaff_R14;
  undefined8 *puVar31;
  undefined4 *unaff_R15;
  ulong uVar32;
  undefined4 *puVar33;
  bool bVar34;
  undefined8 auStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  int *piStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong uStack_58;
  long *plStack_48;
  long *plStack_40;
  undefined4 *puStack_38;
  
  lStack_c0 = param_2;
  lStack_b8 = param_6;
  uStack_80 = param_4;
  if (*(char *)(param_1 + 4) == '\x01') {
    auStack_d0[0] = 0x5357330;
    lVar14 = func_0x0535cd40(param_2 + 0x170);
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    *(undefined4 *)(lVar14 + 8) = *param_1;
    *(undefined4 *)(lVar14 + 0xc) = uVar8;
    *(undefined4 *)(lVar14 + 0x10) = uVar9;
    *(undefined4 *)(lVar14 + 0x14) = uVar10;
  }
  puVar23 = unaff_R13;
  puStack_b0 = param_1;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    auStack_d0[0] = 0x5357357;
    piVar15 = (int *)func_0x0535e7e0(lStack_c0 + 0x170);
    puVar33 = puStack_b0;
    plStack_78 = (long *)(piVar15 + 2);
    auStack_d0[0] = 0x5357387;
    func_0x05358780(plStack_78,
                    (*(long *)(puStack_b0 + 8) - *(long *)(puStack_b0 + 6) >> 3) *
                    0x6db6db6db6db6db7);
    puVar28 = *(undefined4 **)(puVar33 + 6);
    puStack_38 = *(undefined4 **)(puVar33 + 8);
    piVar11 = piVar15;
    plVar26 = param_3;
    plVar5 = param_5;
    if (puVar28 != puStack_38) {
      do {
        plStack_40 = plVar5;
        plStack_48 = plVar26;
        piStack_70 = piVar11;
        uVar32 = *(ulong *)(piVar15 + 4);
        if (uVar32 < *(ulong *)(piVar15 + 6)) {
          auStack_d0[0] = 0x5357416;
          func_0x0eee2dd0(uVar32,0,0x138);
          *(undefined4 *)(uVar32 + 0x20) = 1;
          *(undefined4 *)(uVar32 + 0x28) = 1;
          *(undefined4 *)(uVar32 + 0x40) = 0;
          *(undefined4 *)(uVar32 + 0x58) = 1;
          *(undefined4 *)(uVar32 + 0x60) = 1;
          *(undefined4 *)(uVar32 + 0x78) = 0;
          *(undefined4 *)(uVar32 + 0x90) = 1;
          *(undefined4 *)(uVar32 + 0x98) = 1;
          *(undefined4 *)(uVar32 + 0xb0) = 0x42c80000;
          *(undefined4 *)(uVar32 + 0xb8) = 1;
          *(undefined4 *)(uVar32 + 0xd0) = 1;
          *(undefined8 *)(uVar32 + 0xe8) = 0xffffffffffffffff;
          *(undefined8 *)(uVar32 + 0xf0) = 0;
          *(undefined8 *)(uVar32 + 0xf8) = 0;
          *(undefined8 *)(uVar32 + 0x100) = 0;
          *(undefined8 *)(uVar32 + 0x108) = 0;
          *(undefined8 *)(uVar32 + 0x110) = 0;
          *(undefined8 *)(uVar32 + 0x118) = 0;
          *(undefined8 *)(uVar32 + 0x120) = 0;
          *(undefined8 *)(uVar32 + 0x128) = 0;
          *(undefined1 *)(uVar32 + 0x130) = 0;
          uVar32 = uVar32 + 0x138;
          *(ulong *)(piVar15 + 4) = uVar32;
        }
        else {
          puVar33 = (undefined4 *)(uVar32 - *plStack_78);
          param_3 = (long *)(((long)puVar33 >> 3) * 0x6f96f96f96f96f97 + 1);
          if ((long *)0xd20d20d20d20d2 < param_3) {
            auStack_d0[0] = 0x5357ed2;
            func_0x0535c240();
LAB_05357ed2:
            auStack_d0[0] = 0x5357ed7;
            func_0x04882eb0();
            goto LAB_05357ed7;
          }
          lVar14 = (long)(*(ulong *)(piVar15 + 6) - *plStack_78) >> 3;
          plVar26 = (long *)(lVar14 * -0x20d20d20d20d20d2);
          if (param_3 < plVar26) {
            param_3 = plVar26;
          }
          if (0x69069069069068 < (ulong)(lVar14 * 0x6f96f96f96f96f97)) {
            param_3 = (long *)0xd20d20d20d20d2;
          }
          plStack_88 = plStack_78;
          if (param_3 == (long *)0x0) {
LAB_0535756d:
            uVar32 = 0;
          }
          else {
            if ((long *)0xd20d20d20d20d2 < param_3) goto LAB_05357ed2;
            auStack_d0[0] = 0x535755b;
            uVar32 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)param_3 * 0x138);
            if (uVar32 == 0) {
              auStack_d0[0] = 0x535756d;
              func_0x0eec74c0((long)param_3 * 0x138,0);
              goto LAB_0535756d;
            }
          }
          uVar24 = uVar32 + (long)puVar33;
          pbStack_90 = (byte *)((long)param_3 * 0x138 + uVar32);
          auStack_d0[0] = 0x535759b;
          uStack_a8 = uVar32;
          uStack_a0 = uVar24;
          func_0x0eee2dd0(uVar24,0,0x138);
          piVar15 = piStack_70;
          *(undefined4 *)(uVar32 + 0x20 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0x28 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0x58 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0x60 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0x90 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0x98 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0xb0 + (long)puVar33) = 0x42c80000;
          *(undefined4 *)(uVar32 + 0xb8 + (long)puVar33) = 1;
          *(undefined4 *)(uVar32 + 0xd0 + (long)puVar33) = 1;
          *(undefined8 *)(uVar32 + 0xe8 + (long)puVar33) = 0xffffffffffffffff;
          puVar21 = (undefined8 *)(uVar32 + 0xf0 + (long)puVar33);
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21 = (undefined8 *)(uVar32 + 0x100 + (long)puVar33);
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21 = (undefined8 *)(uVar32 + 0x110 + (long)puVar33);
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21 = (undefined8 *)(uVar32 + 0x120 + (long)puVar33);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined1 *)(uVar32 + 0x130 + (long)puVar33) = 0;
          uVar32 = uVar32 + 0x138 + (long)puVar33;
          lVar13 = (*(long *)(piStack_70 + 2) - *(long *)(piStack_70 + 4)) + uVar24;
          auStack_d0[0] = 0x5357667;
          uStack_98 = uVar32;
          func_0x0535c2f0(plStack_78,*(long *)(piStack_70 + 2),*(long *)(piStack_70 + 4),lVar13);
          param_3 = plStack_48;
          lVar14 = *(long *)(piVar15 + 2);
          lVar29 = *(long *)(piVar15 + 6);
          *(long *)(piVar15 + 2) = lVar13;
          *(ulong *)(piVar15 + 4) = uVar32;
          *(byte **)(piVar15 + 6) = pbStack_90;
          if (lVar14 != 0) {
            auStack_d0[0] = 0x5357698;
            thunk_FUN_0ee326a0(lVar14,lVar29 - lVar14);
          }
        }
        lVar29 = lStack_b8;
        *(ulong *)(piVar15 + 4) = uVar32;
        auStack_d0[0] = 0x53576b9;
        func_0x0c91e850(uVar32 - 0x138,puVar28,lStack_b8);
        plVar26 = plStack_40;
        uVar24 = (ulong)*(ushort *)(puVar28 + 0xc);
        lVar14 = *(long *)(lVar29 + 0x28);
        uVar20 = (*(long *)(lVar29 + 0x30) - lVar14 >> 3) * -0x5555555555555555;
        puVar23 = (undefined *)(lVar14 + uVar24 * 0x18);
        if (uVar20 < uVar24 || uVar20 - uVar24 == 0) {
          puVar23 = &UNK_01e79d90;
        }
        auStack_d0[0] = 0x535770d;
        FUN_0d3a0d80(&uStack_a8,plStack_40,puVar23);
        if ((char)uStack_a0 == '\x01') {
          uStack_58 = uStack_98;
          uStack_68._0_4_ = (undefined4)uStack_a8;
          uStack_68._4_4_ = uStack_a8._4_4_;
          uStack_60 = (undefined4)uStack_a0;
          uStack_5c = uStack_a0._4_4_;
        }
        else {
          auStack_d0[0] = 0x5357743;
          func_0x0d39feb0(&uStack_68,plVar26,puVar23);
        }
        puVar23 = (undefined *)0x100000001b3;
        if ((undefined8 *)(uVar32 - 0x60) != &uStack_68) {
          if (*(char *)(uVar32 - 0x58) == '\x01') {
            *(undefined1 *)(uVar32 - 0x58) = 0;
          }
          *(undefined8 *)(uVar32 - 0x50) = 0xffffffffffffffff;
          if ((char)uStack_60 == '\x01') {
            *(undefined1 *)(uVar32 - 0x58) = 1;
            *(undefined8 *)(uVar32 - 0x60) = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
            *(ulong *)(uVar32 - 0x50) = uStack_58;
          }
        }
        uVar24 = (ulong)*(ushort *)((long)puVar28 + 0x32);
        uVar20 = (*(long *)(lStack_b8 + 0x30) - *(long *)(lStack_b8 + 0x28) >> 3) *
                 -0x5555555555555555;
        puVar16 = (ulong *)(*(long *)(lStack_b8 + 0x28) + uVar24 * 0x18);
        if (uVar20 < uVar24 || uVar20 - uVar24 == 0) {
          puVar16 = (ulong *)&UNK_01e79d90;
        }
        uStack_a8 = 0;
        if ((*puVar16 & 1) == 0) {
          pbStack_90 = (byte *)puVar16[2];
          uStack_a0 = *puVar16;
          uStack_98 = puVar16[1];
          plStack_88 = (long *)0x0;
          uVar24 = (ulong)(uint)*puVar16 & 0xff;
          if (((uint)*puVar16 & 1) != 0) goto LAB_05357834;
LAB_05357801:
          if (uVar24 >> 1 != 0) goto LAB_05357842;
LAB_05357920:
          plStack_88 = (long *)0x0;
          uStack_a8 = 0;
          bVar3 = *(byte *)(uVar32 - 0x40);
        }
        else {
          auStack_d0[0] = 0x5357822;
          FUN_0412e5e0(&uStack_a0,puVar16[2],puVar16[1]);
          plStack_88 = (long *)0x0;
          uVar24 = uStack_a0 & 0xff;
          if ((uStack_a0 & 1) == 0) goto LAB_05357801;
LAB_05357834:
          if (uStack_98 == 0) goto LAB_05357920;
LAB_05357842:
          plStack_88 = (long *)0x0;
          pbVar17 = (byte *)((long)&uStack_a0 + 1);
          if ((uVar24 & 1) != 0) {
            pbVar17 = pbStack_90;
          }
          if (pbVar17 == (byte *)0x0) {
            uStack_a8 = 0;
          }
          else {
            if (*pbVar17 == 0) goto LAB_05357920;
            auStack_d0[0] = 0x535786a;
            uVar24 = func_0x0eee2e90(pbVar17);
            uStack_a8 = 0xcbf29ce484222325;
            if (uVar24 != 0) {
              if (7 < uVar24) {
                uVar20 = uVar24 & 0xfffffffffffffff8;
                do {
                  uStack_a8 = (((((((uStack_a8 * 0x100000001b3 ^ (ulong)*pbVar17) * 0x100000001b3 ^
                                   (ulong)pbVar17[1]) * 0x100000001b3 ^ (ulong)pbVar17[2]) *
                                  0x100000001b3 ^ (ulong)pbVar17[3]) * 0x100000001b3 ^
                                (ulong)pbVar17[4]) * 0x100000001b3 ^ (ulong)pbVar17[5]) *
                               0x100000001b3 ^ (ulong)pbVar17[6]) * 0x100000001b3 ^
                              (ulong)pbVar17[7];
                  pbVar17 = pbVar17 + 8;
                  uVar20 = uVar20 - 8;
                } while (uVar20 != 0);
              }
              if ((uVar24 & 7) != 0) {
                uVar20 = 0;
                do {
                  uStack_a8 = uStack_a8 * 0x100000001b3 ^ (ulong)pbVar17[uVar20];
                  uVar20 = uVar20 + 1;
                } while (((uint)uVar24 & 7) != uVar20);
              }
            }
          }
          bVar3 = *(byte *)(uVar32 - 0x40);
        }
        if ((bVar3 & 1) != 0) {
          auStack_d0[0] = 0x535794f;
          thunk_FUN_0ee326a0(*(undefined8 *)(uVar32 - 0x30),
                             *(ulong *)(uVar32 - 0x40) & 0xfffffffffffffffe);
        }
        piVar15 = piStack_70;
        *(byte **)(uVar32 - 0x30) = pbStack_90;
        *(undefined4 *)(uVar32 - 0x40) = (undefined4)uStack_a0;
        *(undefined4 *)(uVar32 - 0x3c) = uStack_a0._4_4_;
        *(undefined4 *)(uVar32 - 0x38) = (undefined4)uStack_98;
        *(undefined4 *)(uVar32 - 0x34) = uStack_98._4_4_;
        *(ulong *)(uVar32 - 0x48) = uStack_a8;
        *(undefined8 *)(uVar32 - 0x28) = 0;
        uVar24 = (ulong)*(ushort *)(puVar28 + 0xd);
        uVar20 = (*(long *)(lStack_b8 + 0x30) - *(long *)(lStack_b8 + 0x28) >> 3) *
                 -0x5555555555555555;
        pbVar17 = (byte *)(*(long *)(lStack_b8 + 0x28) + uVar24 * 0x18);
        if (uVar20 < uVar24 || uVar20 - uVar24 == 0) {
          pbVar17 = &UNK_01e79d90;
        }
        pbVar1 = (byte *)(uVar32 - 0x20);
        if (pbVar1 != pbVar17) {
          bVar3 = *pbVar17;
          if ((*pbVar1 & 1) == 0) {
            if ((bVar3 & 1) == 0) {
              *(undefined8 *)(uVar32 - 0x10) = *(undefined8 *)(pbVar17 + 0x10);
              uVar8 = *(undefined4 *)(pbVar17 + 4);
              uVar9 = *(undefined4 *)(pbVar17 + 8);
              uVar10 = *(undefined4 *)(pbVar17 + 0xc);
              *(undefined4 *)pbVar1 = *(undefined4 *)pbVar17;
              *(undefined4 *)(uVar32 - 0x1c) = uVar8;
              *(undefined4 *)(uVar32 - 0x18) = uVar9;
              *(undefined4 *)(uVar32 - 0x14) = uVar10;
            }
            else {
              auStack_d0[0] = 0x53579f8;
              func_0x04885070(pbVar1,*(undefined8 *)(pbVar17 + 0x10),*(undefined8 *)(pbVar17 + 8));
            }
          }
          else {
            bVar34 = (bVar3 & 1) != 0;
            pbVar25 = pbVar17 + 1;
            if (bVar34) {
              pbVar25 = *(byte **)(pbVar17 + 0x10);
            }
            uVar24 = (ulong)(bVar3 >> 1);
            if (bVar34) {
              uVar24 = *(ulong *)(pbVar17 + 8);
            }
            auStack_d0[0] = 0x53573da;
            func_0x04885120(pbVar1,pbVar25,uVar24);
          }
        }
        *(undefined1 *)(uVar32 - 8) = *(undefined1 *)((long)puVar28 + 0x36);
        puVar28 = puVar28 + 0xe;
        param_5 = param_3;
        piVar11 = piStack_70;
        plVar26 = plStack_48;
        plVar5 = plStack_40;
      } while (puVar28 != puStack_38);
    }
  }
  puVar33 = puStack_b0;
  if (*(char *)(puStack_b0 + 0x11) == '\x01') {
    puVar28 = puStack_b0 + 0xe;
    auStack_d0[0] = 0x5357a1e;
    param_5 = (long *)func_0x0535d360(lStack_c0 + 0x170);
    auStack_d0[0] = 0x5357a2e;
    lVar14 = (**(code **)(*param_3 + 0x20))(param_3,puVar28);
    param_5[1] = lVar14;
    *(undefined4 *)(param_5 + 2) = puVar33[0xf];
    *(undefined1 *)(param_5 + 3) = *(undefined1 *)(puVar33 + 0x10);
  }
  if (*(char *)(puVar33 + 0x18) == '\x01') {
    auStack_d0[0] = 0x5357a5f;
    lVar14 = func_0x0535dfa0(lStack_c0 + 0x170);
    puVar28 = puStack_b0;
    param_5 = (long *)(lVar14 + 8);
    auStack_d0[0] = 0x5357a8f;
    func_0x052ed680(param_5,(*(long *)(puStack_b0 + 0x14) - *(long *)(puStack_b0 + 0x12) >> 2) *
                            0x2e8ba2e8ba2e8ba3);
    puVar33 = *(undefined4 **)(puVar28 + 0x12);
    puVar28 = *(undefined4 **)(puVar28 + 0x14);
    if (puVar33 != puVar28) {
      puVar23 = &UNK_0efa53a0;
      do {
        puVar21 = *(undefined8 **)(lVar14 + 0x10);
        if (puVar21 < *(undefined8 **)(lVar14 + 0x18)) {
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          puVar21[8] = 0;
          puVar21[9] = 0;
          puVar21[10] = 0;
          puVar21[0xb] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[0xc] = 0;
          *(undefined4 *)(puVar21 + 3) = 1;
          *(undefined4 *)(puVar21 + 5) = 1;
          puVar21[6] = &UNK_0efa53a0;
          puVar21[7] = 0;
          puVar21[8] = 0;
          puVar21[9] = 0;
          puVar21[10] = 0;
          *(undefined8 *)((long)puVar21 + 0x54) = 0;
          *(undefined8 *)((long)puVar21 + 0x5c) = 0;
          puVar21 = puVar21 + 0xd;
        }
        else {
          auStack_d0[0] = 0x5357ab8;
          puVar21 = (undefined8 *)func_0x0533f5d0(param_5);
        }
        *(undefined8 **)(lVar14 + 0x10) = puVar21;
        auStack_d0[0] = 0x5357ad3;
        func_0x052ece00(puVar33,puVar21 + -0xd,param_3,lStack_b8);
        puVar33 = puVar33 + 0xb;
      } while (puVar33 != puVar28);
    }
  }
  puVar28 = puStack_b0;
  if (*(char *)(puStack_b0 + 0x44) == '\x01') {
    auStack_d0[0] = 0x5357b52;
    func_0x052ec620(puStack_b0 + 0x1a,lStack_c0,uStack_80,lStack_b8);
    cVar4 = *(char *)(puVar28 + 0x4b);
  }
  else {
    cVar4 = *(char *)(puStack_b0 + 0x4b);
  }
  if (cVar4 == '\x01') {
    auStack_d0[0] = 0x5357b83;
    lVar14 = func_0x0535d650(lStack_c0 + 0x170);
    uVar18 = *(undefined8 *)(puVar28 + 0x48);
    *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(puVar28 + 0x46);
    *(undefined8 *)(lVar14 + 0x10) = uVar18;
    *(undefined4 *)(lVar14 + 0x18) = puVar28[0x4a];
    cVar4 = *(char *)(puVar28 + 0x52);
  }
  else {
    cVar4 = *(char *)(puVar28 + 0x52);
  }
  if (cVar4 == '\x01') {
    auStack_d0[0] = 0x5357bb9;
    lVar14 = func_0x049cfa90(lStack_c0 + 0x170);
    puVar28 = puStack_b0;
    param_5 = (long *)(lVar14 + 8);
    auStack_d0[0] = 0x5357be1;
    func_0x053584f0(param_5,*(long *)(puStack_b0 + 0x4e) - *(long *)(puStack_b0 + 0x4c) >> 5);
    puVar33 = *(undefined4 **)(puVar28 + 0x4c);
    puVar28 = *(undefined4 **)(puVar28 + 0x4e);
    if (puVar33 != puVar28) {
      puVar23 = &UNK_0ef516f8;
      do {
        puVar21 = *(undefined8 **)(lVar14 + 0x10);
        if (puVar21 < *(undefined8 **)(lVar14 + 0x18)) {
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[10] = 0;
          puVar21[0xb] = 0;
          puVar21[8] = 0;
          puVar21[9] = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          puVar21[4] = 0;
          puVar21[5] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[3] = &UNK_0ef516f8;
          puVar21 = puVar21 + 0xc;
        }
        else {
          auStack_d0[0] = 0x5357c08;
          puVar21 = (undefined8 *)func_0x0535bea0(param_5);
        }
        *(undefined8 **)(lVar14 + 0x10) = puVar21;
        auStack_d0[0] = 0x5357c25;
        func_0x05358160(puVar33,puVar21 + -0xc,uStack_80,lStack_b8);
        puVar33 = puVar33 + 8;
      } while (puVar33 != puVar28);
    }
  }
  puVar28 = puStack_b0;
  if (*(char *)(puStack_b0 + 0x5a) == '\x01') {
    puVar2 = puStack_b0 + 0x54;
    auStack_d0[0] = 0x5357c89;
    uVar18 = func_0x049db9a0(lStack_c0 + 0x170);
    auStack_d0[0] = 0x5357c9e;
    func_0x052ee0a0(puVar2,uVar18,uStack_80,lStack_b8);
    cVar4 = *(char *)((long)puVar28 + 0x171);
  }
  else {
    cVar4 = *(char *)((long)puStack_b0 + 0x171);
  }
  if (cVar4 == '\x01') {
    auStack_d0[0] = 0x5357d4f;
    func_0x0535e530(lStack_c0 + 0x170,puVar28 + 0x5c);
    cVar4 = *(char *)(puVar28 + 0x9a);
  }
  else {
    cVar4 = *(char *)(puVar28 + 0x9a);
  }
  if (cVar4 == '\x01') {
    piVar15 = puVar28 + 0x5e;
    if (*(char *)(lStack_c0 + 0x188) == '\x01') {
      if (DAT_0f5570f0 == '\0') {
LAB_05357ed7:
        auStack_d0[0] = 0x5357ee3;
        iVar12 = func_0x04108328(&DAT_0f5570f0);
        if (iVar12 != 0) {
          LOCK();
          UNLOCK();
          _DAT_0f5570e8 = _DAT_0f556458;
          auStack_d0[0] = 0x5357f0b;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5570f0);
        }
      }
      for (psVar19 = *(short **)(lStack_c0 + 0x170); psVar19 != *(short **)(lStack_c0 + 0x178);
          psVar19 = psVar19 + 8) {
        if (*psVar19 == _DAT_0f5570e8) {
          lVar14 = *(long *)(psVar19 + 4);
          unaff_RBX = piVar15;
          unaff_R12 = puVar28;
          unaff_R13 = puVar23;
          unaff_R14 = param_5;
          unaff_R15 = puVar33;
          if (lVar14 != 0) goto LAB_05357ddd;
          break;
        }
      }
    }
    auStack_d0[0] = 0x5357dda;
    lVar14 = func_0x0535db40(lStack_c0 + 0x170);
    unaff_RBX = piVar15;
    unaff_R12 = puVar28;
    unaff_R13 = puVar23;
    unaff_R14 = param_5;
    unaff_R15 = puVar33;
LAB_05357ddd:
    plVar26 = (long *)(lVar14 + 8);
    register0x00000020 = (BADSPACEBASE *)auStack_d0;
    auStack_d0[0] = 0x5357dec;
    unaff_RBP = param_3;
    piVar15 = unaff_RBX;
  }
  else {
    if (*(char *)(puVar28 + 0xd8) != '\x01') {
      return;
    }
    if (*(char *)(lStack_c0 + 0x188) == '\x01') {
      if (DAT_0f5570f0 == '\0') {
        auStack_d0[0] = 0x5357f1c;
        iVar12 = func_0x04108328(&DAT_0f5570f0);
        if (iVar12 != 0) {
          LOCK();
          UNLOCK();
          _DAT_0f5570e8 = _DAT_0f556458;
          auStack_d0[0] = 0x5357f44;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5570f0);
        }
      }
      for (psVar19 = *(short **)(lStack_c0 + 0x170); psVar19 != *(short **)(lStack_c0 + 0x178);
          psVar19 = psVar19 + 8) {
        if (*psVar19 == _DAT_0f5570e8) {
          lVar14 = *(long *)(psVar19 + 4);
          if (lVar14 != 0) goto LAB_05357e2a;
          break;
        }
      }
    }
    auStack_d0[0] = 0x5357e27;
    lVar14 = func_0x0535db40(lStack_c0 + 0x170);
LAB_05357e2a:
    piVar15 = puVar28 + 0x9c;
    plVar26 = (long *)(lVar14 + 0x28);
    if ((*(char *)(lVar14 + 0x48) == '\x01') && (lVar29 = *plVar26, lVar29 != 0)) {
      lVar13 = *(long *)(lVar14 + 0x30);
      lVar27 = lVar29;
      if (lVar29 != lVar13) {
        do {
          plVar5 = *(long **)(lVar13 + -8);
          *(undefined8 *)(lVar13 + -8) = 0;
          if (plVar5 != (long *)0x0) {
            auStack_d0[0] = 0x5357e82;
            (**(code **)(*plVar5 + 8))();
          }
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != lVar29);
        lVar27 = *plVar26;
      }
      *(long *)(lVar14 + 0x30) = lVar29;
      auStack_d0[0] = 0x5357e97;
      thunk_FUN_0ee326a0(lVar27,*(long *)(lVar14 + 0x38) - lVar27);
    }
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *plVar26 = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *(undefined1 *)(lVar14 + 0x40) = 1;
    *(undefined1 *)(lVar14 + 0x48) = 1;
  }
  *(long **)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined4 **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined4 **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(int **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(long **)((long)register0x00000020 + -0x68) = param_3;
  if ((char)piVar15[6] == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef5cc;
    lVar14 = func_0x05346af0(plVar26);
    iVar12 = *piVar15;
    *(int *)((long)register0x00000020 + -0x70) = iVar12;
    if (iVar12 == -1) {
      uVar18 = 0;
    }
    else {
      pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef5ec;
      uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),
                         (undefined1 *)((long)register0x00000020 + -0x70));
    }
    *(undefined8 *)(lVar14 + 8) = uVar18;
    iVar12 = piVar15[1];
    *(int *)((long)register0x00000020 + -0x70) = iVar12;
    if (iVar12 == -1) {
      uVar18 = 0;
    }
    else {
      pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef612;
      uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),
                         (undefined1 *)((long)register0x00000020 + -0x70));
    }
    *(undefined8 *)(lVar14 + 0x10) = uVar18;
    iVar12 = piVar15[2];
    *(int *)((long)register0x00000020 + -0x70) = iVar12;
    if (iVar12 == -1) {
      uVar18 = 0;
    }
    else {
      pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef638;
      uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),
                         (undefined1 *)((long)register0x00000020 + -0x70));
    }
    *(undefined8 *)(lVar14 + 0x18) = uVar18;
    iVar12 = piVar15[3];
    *(int *)((long)register0x00000020 + -0x70) = iVar12;
    if (iVar12 == -1) {
      uVar18 = 0;
    }
    else {
      pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef65e;
      uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),
                         (undefined1 *)((long)register0x00000020 + -0x70));
    }
    *(undefined8 *)(lVar14 + 0x20) = uVar18;
    iVar12 = piVar15[4];
    *(int *)((long)register0x00000020 + -0x70) = iVar12;
    if (iVar12 == -1) {
      uVar18 = 0;
    }
    else {
      pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef684;
      uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),
                         (undefined1 *)((long)register0x00000020 + -0x70));
    }
    *(undefined8 *)(lVar14 + 0x28) = uVar18;
    *(int *)(lVar14 + 0x30) = piVar15[5];
    cVar4 = (char)piVar15[7];
  }
  else {
    cVar4 = (char)piVar15[7];
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef6a9;
    func_0x05346e00(plVar26);
    cVar4 = *(char *)((long)piVar15 + 0x1d);
  }
  else {
    cVar4 = *(char *)((long)piVar15 + 0x1d);
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef6bc;
    func_0x05347110(plVar26);
    cVar4 = *(char *)((long)piVar15 + 0x1e);
  }
  else {
    cVar4 = *(char *)((long)piVar15 + 0x1e);
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef6cf;
    func_0x05347420(plVar26);
    cVar4 = *(char *)((long)piVar15 + 0x1f);
  }
  else {
    cVar4 = *(char *)((long)piVar15 + 0x1f);
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef6e2;
    func_0x05347730(plVar26);
    cVar4 = (char)piVar15[0xb];
  }
  else {
    cVar4 = (char)piVar15[0xb];
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef6f9;
    lVar14 = func_0x05347a40(plVar26);
    plVar5 = *(long **)((long)register0x00000020 + -0x68);
    pcVar6 = *(code **)(*plVar5 + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef70e;
    uVar18 = (*pcVar6)(plVar5,piVar15 + 8);
    *(undefined8 *)(lVar14 + 8) = uVar18;
    pcVar6 = *(code **)(*plVar5 + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef720;
    uVar18 = (*pcVar6)(plVar5,piVar15 + 9);
    *(undefined8 *)(lVar14 + 0x10) = uVar18;
    *(char *)(lVar14 + 0x18) = (char)piVar15[10];
    *(undefined1 *)(lVar14 + 0x19) = *(undefined1 *)((long)piVar15 + 0x29);
    cVar4 = (char)piVar15[0x1e];
  }
  else {
    cVar4 = (char)piVar15[0x1e];
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef74d;
    uVar18 = func_0x05347d60(plVar26);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef75d;
    func_0x05355bf0(piVar15 + 0xc,uVar18,*(undefined8 *)((long)register0x00000020 + -0x68));
    cVar4 = (char)piVar15[0x3a];
  }
  else {
    cVar4 = (char)piVar15[0x3a];
  }
  if (cVar4 == '\x01') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef77d;
    lVar13 = func_0x053481b0(plVar26);
    lVar29 = *(long *)(piVar15 + 0x20);
    *(int **)((long)register0x00000020 + -0x50) = piVar15;
    lVar14 = *(long *)(piVar15 + 0x22);
    *(long *)((long)register0x00000020 + -0x58) = lVar14;
    puVar21 = (undefined8 *)(lVar14 - lVar29);
    uVar32 = (long)puVar21 >> 2;
    lVar14 = *(long *)(lVar13 + 8);
    *(long *)((long)register0x00000020 + -0x60) = lVar13;
    lVar13 = *(long *)(lVar13 + 0x18) - lVar14;
    if ((ulong)(lVar13 >> 3) < uVar32) {
      *(long *)((long)register0x00000020 + -0x48) = lVar29;
      if (0x1fffffffffffffff < uVar32) {
LAB_052efb6e:
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb73;
        func_0x052e7cc0();
LAB_052efb73:
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb78;
        uVar18 = func_0x04882eb0();
        *(undefined8 **)(*(long *)((long)register0x00000020 + -0x60) + 0x28) = puVar21;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb89;
        func_0x0eee2d70(uVar18);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar29 = *(long *)(*(long *)((long)register0x00000020 + -0x60) + 0x10);
      *(long *)((long)register0x00000020 + -0x40) = lVar14;
      lVar29 = lVar29 - lVar14;
      pcVar6 = *(code **)(_DAT_0f5463b0 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef7fc;
      lVar14 = (*pcVar6)(&DAT_0f5463b0,(long)puVar21 * 2);
      if ((*(long *)((long)register0x00000020 + -0x58) !=
           *(long *)((long)register0x00000020 + -0x48)) && (lVar14 == 0)) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb69;
        func_0x0eec74c0((long)puVar21 * 2,0);
      }
      lVar22 = lVar14 + lVar29 + (lVar29 >> 3) * -8;
      lVar27 = *(long *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef83f;
      func_0x0eee2f00(lVar22,lVar27,lVar29);
      lVar30 = *(long *)((long)register0x00000020 + -0x60);
      *(long *)(lVar30 + 8) = lVar22;
      *(long *)(lVar30 + 0x10) = lVar14 + lVar29;
      *(ulong *)(lVar30 + 0x18) = uVar32 * 8 + lVar14;
      lVar29 = *(long *)((long)register0x00000020 + -0x48);
      if (lVar27 != 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef865;
        thunk_FUN_0ee326a0(lVar27,lVar13);
        lVar29 = *(long *)(*(long *)((long)register0x00000020 + -0x50) + 0x80);
        *(undefined8 *)((long)register0x00000020 + -0x58) =
             *(undefined8 *)(*(long *)((long)register0x00000020 + -0x50) + 0x88);
      }
    }
    lVar13 = *(long *)((long)register0x00000020 + -0x50);
    lVar14 = *(long *)((long)register0x00000020 + -0x60);
    if (lVar29 != *(long *)((long)register0x00000020 + -0x58)) {
      do {
        pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef9ac;
        uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),lVar29);
        puVar31 = *(undefined8 **)(lVar14 + 0x10);
        puVar21 = *(undefined8 **)(lVar14 + 0x18);
        if (puVar31 < puVar21) {
          *puVar31 = uVar18;
          puVar31 = puVar31 + 1;
        }
        else {
          *(long *)((long)register0x00000020 + -0x48) = lVar29;
          lVar14 = *(long *)(lVar14 + 8);
          lVar29 = (long)puVar31 - lVar14;
          uVar32 = (lVar29 >> 3) + 1;
          if (0x1fffffffffffffff < uVar32) goto LAB_052efb6e;
          *(undefined8 *)((long)register0x00000020 + -0x38) = uVar18;
          *(long *)((long)register0x00000020 + -0x40) = lVar14;
          puVar21 = (undefined8 *)((long)puVar21 - lVar14);
          uVar24 = (long)puVar21 >> 2;
          if ((ulong)((long)puVar21 >> 2) <= uVar32) {
            uVar24 = uVar32;
          }
          if ((undefined8 *)0x7ffffffffffffff7 < puVar21) {
            uVar24 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar24) goto LAB_052efb73;
          pcVar6 = *(code **)(_DAT_0f5463b0 + 0x10);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efa35;
          lVar13 = (*pcVar6)(&DAT_0f5463b0,uVar24 * 8);
          if (lVar13 == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efaac;
            func_0x0eec74c0(uVar24 * 8,0);
          }
          *(undefined8 *)(lVar13 + lVar29) = *(undefined8 *)((long)register0x00000020 + -0x38);
          puVar31 = (undefined8 *)(lVar13 + lVar29 + 8);
          lVar30 = lVar13 + lVar29 + (lVar29 >> 3) * -8;
          lVar27 = *(long *)((long)register0x00000020 + -0x40);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efa6f;
          func_0x0eee2f00(lVar30,lVar27,lVar29);
          lVar14 = *(long *)((long)register0x00000020 + -0x60);
          *(long *)(lVar14 + 8) = lVar30;
          *(undefined8 **)(lVar14 + 0x10) = puVar31;
          *(ulong *)(lVar14 + 0x18) = lVar13 + uVar24 * 8;
          if (lVar27 != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efa93;
            thunk_FUN_0ee326a0(lVar27,puVar21);
          }
          lVar13 = *(long *)((long)register0x00000020 + -0x50);
          lVar29 = *(long *)((long)register0x00000020 + -0x48);
        }
        *(undefined8 **)(lVar14 + 0x10) = puVar31;
        lVar29 = lVar29 + 4;
      } while (lVar29 != *(long *)((long)register0x00000020 + -0x58));
    }
    lVar29 = *(long *)(lVar13 + 0xa0);
    lVar27 = *(long *)(lVar13 + 0x98);
    *(long *)((long)register0x00000020 + -0x58) = lVar14 + 0x20;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef8c0;
    func_0x052eb950(lVar14 + 0x20,(lVar29 - lVar27 >> 3) * -0x3333333333333333);
    pbVar1 = *(byte **)(lVar13 + 0xa0);
    for (pbVar17 = *(byte **)(lVar13 + 0x98); pbVar17 != pbVar1; pbVar17 = pbVar17 + 0x28) {
      pcVar6 = *(code **)(**(long **)((long)register0x00000020 + -0x68) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef918;
      uVar18 = (*pcVar6)(*(long **)((long)register0x00000020 + -0x68),pbVar17 + 0x24);
      *(undefined8 *)((long)register0x00000020 + -0x70) = uVar18;
      puVar21 = *(undefined8 **)(lVar14 + 0x28);
      if (puVar21 < *(undefined8 **)(lVar14 + 0x30)) {
        if ((*pbVar17 & 1) == 0) {
          puVar21[2] = *(undefined8 *)(pbVar17 + 0x10);
          uVar7 = *(undefined8 *)(pbVar17 + 8);
          *puVar21 = *(undefined8 *)pbVar17;
          puVar21[1] = uVar7;
        }
        else {
          uVar18 = *(undefined8 *)(pbVar17 + 8);
          uVar7 = *(undefined8 *)(pbVar17 + 0x10);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef950;
          FUN_0412e5e0(puVar21,uVar7,uVar18);
          uVar18 = *(undefined8 *)((long)register0x00000020 + -0x70);
        }
        *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(pbVar17 + 0x18);
        *(undefined8 *)((long)puVar21 + 0x1c) = *(undefined8 *)(pbVar17 + 0x1c);
        puVar21[5] = uVar18;
        puVar21 = puVar21 + 6;
        lVar14 = *(long *)((long)register0x00000020 + -0x60);
        *(undefined8 **)(lVar14 + 0x28) = puVar21;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52ef8e8;
        puVar21 = (undefined8 *)
                  func_0x0533f0d0(*(undefined8 *)((long)register0x00000020 + -0x58),pbVar17,
                                  pbVar17 + 0x18,pbVar17 + 0x1c,
                                  (undefined1 *)((long)register0x00000020 + -0x70));
        lVar14 = *(long *)((long)register0x00000020 + -0x60);
      }
      *(undefined8 **)(lVar14 + 0x28) = puVar21;
    }
    lVar29 = *(long *)((long)register0x00000020 + -0x50);
    pbVar1 = (byte *)(lVar29 + 0xb0);
    pbVar17 = (byte *)(lVar14 + 0x38);
    if (pbVar17 == pbVar1) {
      *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(lVar29 + 200);
    }
    else {
      bVar3 = *pbVar1;
      if ((*pbVar17 & 1) == 0) {
        if ((bVar3 & 1) == 0) {
          *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(lVar29 + 0xc0);
          uVar8 = *(undefined4 *)(lVar29 + 0xb4);
          uVar9 = *(undefined4 *)(lVar29 + 0xb8);
          uVar10 = *(undefined4 *)(lVar29 + 0xbc);
          *(undefined4 *)pbVar17 = *(undefined4 *)pbVar1;
          *(undefined4 *)(lVar14 + 0x3c) = uVar8;
          *(undefined4 *)(lVar14 + 0x40) = uVar9;
          *(undefined4 *)(lVar14 + 0x44) = uVar10;
        }
        else {
          uVar18 = *(undefined8 *)(lVar29 + 0xb8);
          uVar7 = *(undefined8 *)(lVar29 + 0xc0);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb23;
          func_0x04885070(pbVar17,uVar7,uVar18);
        }
      }
      else {
        bVar34 = (bVar3 & 1) != 0;
        lVar13 = lVar29 + 0xb1;
        if (bVar34) {
          lVar13 = *(long *)(lVar29 + 0xc0);
        }
        uVar32 = (ulong)(bVar3 >> 1);
        if (bVar34) {
          uVar32 = *(ulong *)(lVar29 + 0xb8);
        }
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb0e;
        func_0x04885120(pbVar17,lVar13,uVar32);
      }
      *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(lVar29 + 200);
      lVar13 = *(long *)(lVar29 + 0xd0);
      lVar29 = *(long *)(lVar29 + 0xd8);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x52efb50;
      func_0x0533eee0(lVar14 + 0x58,lVar13,lVar29,lVar29 - lVar13 >> 2);
    }
  }
  return;
}


