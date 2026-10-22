/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd379e60 (ELF vaddr 0xd279e60)
 * Label: string:Failed to map jigsaw structure final block: '%s'. There is n
 * Body:  [[0cc41df0, 0cc41e9f] [0d379e60, 0d379e9b] [0d37a05a, 0d37a0ae] [0d37a0c0, 0d37a0d2] [0d37a238, 0d37a2d3] [0d37a313, 0d37a339] [0d37a364, 0d37a399] [0d37a3a5, 0d37a7e5]]
 * Ghidra: FUN_0d379e60
 */


/* WARNING: Possible PIC construction at 0x0cc41e81: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d37a3cb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d37a5de: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d37a6f6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d379f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d37a6fb) */
/* WARNING: Removing unreachable block (ram,0x0d37a5e3) */
/* WARNING: Removing unreachable block (ram,0x0d37a3d0) */
/* WARNING: Removing unreachable block (ram,0x0d37a3e0) */
/* WARNING: Removing unreachable block (ram,0x0cc41e86) */
/* WARNING: Removing unreachable block (ram,0x0d379f65) */
/* WARNING: Removing unreachable block (ram,0x0d379f83) */
/* WARNING: Removing unreachable block (ram,0x0d379f90) */
/* WARNING: Removing unreachable block (ram,0x0d379f9b) */
/* WARNING: Removing unreachable block (ram,0x0d379f9f) */
/* WARNING: Removing unreachable block (ram,0x0d379fa8) */
/* WARNING: Removing unreachable block (ram,0x0d379fad) */
/* WARNING: Removing unreachable block (ram,0x0d37a33a) */
/* WARNING: Removing unreachable block (ram,0x0d37a39a) */
/* WARNING: Removing unreachable block (ram,0x0d379fb7) */
/* WARNING: Removing unreachable block (ram,0x0d379fca) */
/* WARNING: Removing unreachable block (ram,0x0d379fd0) */
/* WARNING: Removing unreachable block (ram,0x0d37a2e7) */
/* WARNING: Removing unreachable block (ram,0x0d37a308) */
/* WARNING: Removing unreachable block (ram,0x0d379fe1) */
/* WARNING: Removing unreachable block (ram,0x0d379fea) */
/* WARNING: Removing unreachable block (ram,0x0d37a35c) */
/* WARNING: Removing unreachable block (ram,0x0d379ff7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d379e60(byte *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *unaff_RBX;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_R14;
  long *unaff_R15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puStack_40;
  byte *pbStack_38;
  byte bStack_30;
  undefined7 uStack_2f;
  undefined8 uStack_20;
  
  bVar2 = *param_1;
  uVar8 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8);
  }
  switch(uVar8 - 5) {
  case 0:
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar7[4] == 0x68 && *(int *)pbVar7 == 0x63726f74) {
      uVar9 = 1;
      register0x00000020 = (BADSPACEBASE *)&puStack_40;
      puStack_40 = &UNK_0d379f65;
      puVar12 = (undefined *)0xf714dd0;
      goto SUB_0cc41df0;
    }
  default:
LAB_0d37a05a:
    if ((*(ulong *)(param_1 + 8) == 0x1c & bVar2) == 1) {
      pcVar4 = *(char **)(param_1 + 0x10);
      auVar15[0] = -(pcVar4[0xc] == DAT_014e6b80);
      auVar15[1] = -(pcVar4[0xd] == UNK_014e6b81);
      auVar15[2] = -(pcVar4[0xe] == UNK_014e6b82);
      auVar15[3] = -(pcVar4[0xf] == UNK_014e6b83);
      auVar15[4] = -(pcVar4[0x10] == UNK_014e6b84);
      auVar15[5] = -(pcVar4[0x11] == UNK_014e6b85);
      auVar15[6] = -(pcVar4[0x12] == UNK_014e6b86);
      auVar15[7] = -(pcVar4[0x13] == UNK_014e6b87);
      auVar15[8] = -(pcVar4[0x14] == UNK_014e6b88);
      auVar15[9] = -(pcVar4[0x15] == UNK_014e6b89);
      auVar15[10] = -(pcVar4[0x16] == UNK_014e6b8a);
      auVar15[0xb] = -(pcVar4[0x17] == UNK_014e6b8b);
      auVar15[0xc] = -(pcVar4[0x18] == UNK_014e6b8c);
      auVar15[0xd] = -(pcVar4[0x19] == UNK_014e6b8d);
      auVar15[0xe] = -(pcVar4[0x1a] == UNK_014e6b8e);
      auVar15[0xf] = -(pcVar4[0x1b] == UNK_014e6b8f);
      auVar13[0] = -(*pcVar4 == DAT_014e4b70);
      auVar13[1] = -(pcVar4[1] == UNK_014e4b71);
      auVar13[2] = -(pcVar4[2] == UNK_014e4b72);
      auVar13[3] = -(pcVar4[3] == UNK_014e4b73);
      auVar13[4] = -(pcVar4[4] == UNK_014e4b74);
      auVar13[5] = -(pcVar4[5] == UNK_014e4b75);
      auVar13[6] = -(pcVar4[6] == UNK_014e4b76);
      auVar13[7] = -(pcVar4[7] == UNK_014e4b77);
      auVar13[8] = -(pcVar4[8] == UNK_014e4b78);
      auVar13[9] = -(pcVar4[9] == UNK_014e4b79);
      auVar13[10] = -(pcVar4[10] == UNK_014e4b7a);
      auVar13[0xb] = -(pcVar4[0xb] == UNK_014e4b7b);
      auVar13[0xc] = -(pcVar4[0xc] == UNK_014e4b7c);
      auVar13[0xd] = -(pcVar4[0xd] == UNK_014e4b7d);
      auVar13[0xe] = -(pcVar4[0xe] == UNK_014e4b7e);
      auVar13[0xf] = -(pcVar4[0xf] == UNK_014e4b7f);
      auVar13 = auVar13 & auVar15;
      if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
        puVar12 = (undefined *)0xf718378;
        break;
      }
    }
    switch(uVar8 - 5) {
    case 0:
      if ((bVar2 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      else {
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      if (pbVar7[4] == 0x6e && *(int *)pbVar7 == 0x6f6c656d) {
        puVar12 = (undefined *)0xf71ae18;
        goto LAB_0d37a389;
      }
      break;
    case 3:
      if ((bVar2 & 1) == 0) {
        lVar6 = *(long *)(param_1 + 1);
      }
      else {
        lVar6 = **(long **)(param_1 + 0x10);
      }
      if (lVar6 == 0x726f6f645f6b616f) {
        puVar12 = (undefined *)0xf710548;
        goto LAB_0d37a389;
      }
      break;
    case 4:
      if ((bVar2 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      else {
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      if (pbVar7[8] == 0x68 && *(long *)pbVar7 == 0x7461705f74726964) {
        puVar12 = (undefined *)0xf710d18;
        goto LAB_0d37a389;
      }
      break;
    case 6:
      if ((bVar2 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      else {
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      if (*(long *)(pbVar7 + 3) == 0x6b636f6c625f616d && *(long *)pbVar7 == 0x6c625f616d67616d) {
        puVar12 = (undefined *)0xf716730;
        goto LAB_0d37a389;
      }
      break;
    case 0xe:
      if ((bVar2 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      else {
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      auVar16[0] = -(pbVar7[3] == UNK_014e8060);
      auVar16[1] = -(pbVar7[4] == UNK_014e8061);
      auVar16[2] = -(pbVar7[5] == UNK_014e8062);
      auVar16[3] = -(pbVar7[6] == UNK_014e8063);
      auVar16[4] = -(pbVar7[7] == UNK_014e8064);
      auVar16[5] = -(pbVar7[8] == UNK_014e8065);
      auVar16[6] = -(pbVar7[9] == UNK_014e8066);
      auVar16[7] = -(pbVar7[10] == UNK_014e8067);
      auVar16[8] = -(pbVar7[0xb] == UNK_014e8068);
      auVar16[9] = -(pbVar7[0xc] == UNK_014e8069);
      auVar16[10] = -(pbVar7[0xd] == UNK_014e806a);
      auVar16[0xb] = -(pbVar7[0xe] == UNK_014e806b);
      auVar16[0xc] = -(pbVar7[0xf] == UNK_014e806c);
      auVar16[0xd] = -(pbVar7[0x10] == UNK_014e806d);
      auVar16[0xe] = -(pbVar7[0x11] == UNK_014e806e);
      auVar16[0xf] = -(pbVar7[0x12] == UNK_014e806f);
      auVar14[0] = -(*pbVar7 == UNK_014e8b50);
      auVar14[1] = -(pbVar7[1] == UNK_014e8b51);
      auVar14[2] = -(pbVar7[2] == UNK_014e8b52);
      auVar14[3] = -(pbVar7[3] == UNK_014e8b53);
      auVar14[4] = -(pbVar7[4] == UNK_014e8b54);
      auVar14[5] = -(pbVar7[5] == UNK_014e8b55);
      auVar14[6] = -(pbVar7[6] == UNK_014e8b56);
      auVar14[7] = -(pbVar7[7] == UNK_014e8b57);
      auVar14[8] = -(pbVar7[8] == UNK_014e8b58);
      auVar14[9] = -(pbVar7[9] == UNK_014e8b59);
      auVar14[10] = -(pbVar7[10] == UNK_014e8b5a);
      auVar14[0xb] = -(pbVar7[0xb] == UNK_014e8b5b);
      auVar14[0xc] = -(pbVar7[0xc] == UNK_014e8b5c);
      auVar14[0xd] = -(pbVar7[0xd] == UNK_014e8b5d);
      auVar14[0xe] = -(pbVar7[0xe] == UNK_014e8b5e);
      auVar14[0xf] = -(pbVar7[0xf] == UNK_014e8b5f);
      auVar14 = auVar14 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
        puVar12 = (undefined *)0xf710700;
        goto LAB_0d37a389;
      }
    }
    puStack_40 = (undefined *)0xd37a247;
    cVar5 = func_0x048e7b80(param_1,&UNK_012694bd);
    if (cVar5 == '\0') {
      puStack_40 = (undefined *)0xd37a26d;
      cVar5 = func_0x048e7b80(param_1,&UNK_01388e6f);
      if (cVar5 == '\0') {
        puStack_40 = (undefined *)0xd37a293;
        cVar5 = func_0x048e7b80(param_1,&UNK_01200905);
        if (cVar5 == '\0') {
          puStack_40 = (undefined *)0xd37a2bb;
          lVar6 = func_0x048ece80(param_1,&UNK_01409c86,0);
          if (lVar6 == -1) {
            puStack_40 = (undefined *)0xd37a324;
            lVar6 = func_0x048ece80(param_1,&UNK_013bb7a2,0);
            if (lVar6 == -1) {
              puStack_40 = (undefined *)0xd37a375;
              lVar6 = func_0x048ece80(param_1,&UNK_0125051e,0);
              if (lVar6 == -1) {
                puStack_40 = (undefined *)0xd37a3b4;
                cVar5 = func_0x048e7b80(param_1,&UNK_011b0171);
                if (cVar5 != '\0') {
                  uVar9 = 1;
                  register0x00000020 = (BADSPACEBASE *)&puStack_40;
                  puStack_40 = (undefined *)0xd37a3d0;
                  puVar12 = &DAT_0f714f10;
                  goto SUB_0cc41df0;
                }
                puStack_40 = (undefined *)0xd37a3fb;
                cVar5 = func_0x048e7b80(param_1,&UNK_01272580);
                if (cVar5 == '\0') {
                  puStack_40 = (undefined *)0xd37a421;
                  cVar5 = func_0x048e7b80(param_1,&UNK_012e9dee);
                  if (cVar5 == '\0') {
                    puStack_40 = (undefined *)0xd37a447;
                    cVar5 = func_0x048e7b80(param_1,&UNK_013a3bb2);
                    if (cVar5 == '\0') {
                      puStack_40 = (undefined *)0xd37a46d;
                      cVar5 = func_0x048e7b80(param_1,&UNK_014da60e);
                      if (cVar5 == '\0') {
                        puStack_40 = (undefined *)0xd37a495;
                        lVar6 = func_0x048ece80(param_1,&UNK_01219c5c,0);
                        if (lVar6 == -1) {
                          puStack_40 = (undefined *)0xd37a4bd;
                          cVar5 = func_0x048e7b80(param_1,&UNK_0142327f);
                          if (cVar5 == '\0') {
                            puStack_40 = (undefined *)0xd37a4e3;
                            cVar5 = func_0x048e7b80(param_1,&UNK_014c108d);
                            if (cVar5 == '\0') {
                              puStack_40 = (undefined *)0xd37a509;
                              cVar5 = func_0x048e7b80(param_1,&UNK_0143ffb6);
                              if (cVar5 == '\0') {
                                puStack_40 = (undefined *)0xd37a52f;
                                cVar5 = func_0x048e7b80(param_1,&UNK_0143ffc8);
                                if (cVar5 == '\0') {
                                  puStack_40 = (undefined *)0xd37a555;
                                  cVar5 = func_0x048e7b80(param_1,&UNK_014dc095);
                                  if (cVar5 == '\0') {
                                    puStack_40 = (undefined *)0xd37a57b;
                                    cVar5 = func_0x048e7b80(param_1,&UNK_01338b31);
                                    if (cVar5 == '\0') {
                                      puStack_40 = (undefined *)0xd37a5a1;
                                      cVar5 = func_0x048e7b80(param_1,&UNK_01268066);
                                      if (cVar5 == '\0') {
                                        puStack_40 = (undefined *)0xd37a5c7;
                                        cVar5 = func_0x048e7b80(param_1,&UNK_0143e8ce);
                                        if (cVar5 != '\0') {
                                          uVar9 = 1;
                                          register0x00000020 = (BADSPACEBASE *)&puStack_40;
                                          puStack_40 = (undefined *)0xd37a5e3;
                                          puVar12 = (undefined *)0xf714e70;
                                          goto SUB_0cc41df0;
                                        }
                                        puStack_40 = (undefined *)0xd37a60e;
                                        cVar5 = func_0x048e7b80(param_1,&UNK_0143ffd0);
                                        if (cVar5 == '\0') {
                                          puStack_40 = (undefined *)0xd37a634;
                                          cVar5 = func_0x048e7b80(param_1,&UNK_012836b8);
                                          if (cVar5 == '\0') {
                                            puStack_40 = (undefined *)0xd37a65a;
                                            cVar5 = func_0x048e7b80(param_1,&UNK_012cf7b4);
                                            if (cVar5 == '\0') {
                                              puStack_40 = (undefined *)0xd37a680;
                                              cVar5 = func_0x048e7b80(param_1,&UNK_014dc0a0);
                                              if (cVar5 == '\0') {
                                                puStack_40 = (undefined *)0xd37a6a6;
                                                cVar5 = func_0x048e7b80(param_1,&UNK_014dc0b3);
                                                if (cVar5 == '\0') {
                                                  puStack_40 = (undefined *)0xd37a6b9;
                                                  cVar5 = func_0x048e7b80(param_1,&UNK_011e4bc3);
                                                  if (cVar5 == '\0') {
                                                    puStack_40 = (undefined *)0xd37a6df;
                                                    cVar5 = func_0x048e7b80(param_1,&UNK_0148c390);
                                                    if (cVar5 != '\0') {
                                                      uVar9 = 1;
                                                      register0x00000020 =
                                                           (BADSPACEBASE *)&puStack_40;
                                                      puStack_40 = (undefined *)0xd37a6fb;
                                                      puVar12 = (undefined *)0xf7154c0;
                                                      goto SUB_0cc41df0;
                                                    }
                                                    puStack_40 = (undefined *)0xd37a71a;
                                                    cVar5 = func_0x048e7b80(param_1,&UNK_01281c88);
                                                    if (cVar5 == '\0') {
                                                      puStack_40 = (undefined *)0xd37a740;
                                                      cVar5 = func_0x048e7b80(param_1,&UNK_01200918)
                                                      ;
                                                      if (cVar5 == '\0') {
                                                        puStack_40 = (undefined *)0xd37a765;
                                                        func_0x0ee25150(&pbStack_38,param_1);
                                                        puStack_40 = (undefined *)0xd37a77b;
                                                        lVar6 = func_0x0cc422f0(&DAT_0f6ff9e0,
                                                                                &pbStack_38,0,0,0);
                                                        if ((bStack_30 & 1) != 0) {
                                                          puStack_40 = (undefined *)0xd37a798;
                                                          func_0x0412a280(uStack_20,
                                                                          CONCAT71(uStack_2f,
                                                                                   bStack_30) &
                                                                          0xfffffffffffffffe);
                                                        }
                                                        if (lVar6 != 0) {
                                                          return *(undefined8 *)(lVar6 + 0x200);
                                                        }
                                                        if ((*param_1 & 1) == 0) {
                                                          pbStack_38 = param_1 + 1;
                                                        }
                                                        else {
                                                          pbStack_38 = *(byte **)(param_1 + 0x10);
                                                        }
                                                        puStack_40 = (undefined *)0xd37a7dc;
                                                        func_0x0b039dd0(1,3,0x1f,&UNK_01234c00,
                                                                        &pbStack_38);
                                                        return 0;
                                                      }
                                                      puVar12 = (undefined *)0xf716708;
                                                    }
                                                    else {
                                                      puVar12 = (undefined *)0xf715420;
                                                    }
                                                    break;
                                                  }
                                                }
                                                puVar12 = &DAT_0f6eaec0;
                                              }
                                              else {
                                                puVar12 = (undefined *)0xf71a940;
                                              }
                                            }
                                            else {
                                              puVar12 = (undefined *)0xf71b3b8;
                                            }
                                          }
                                          else {
                                            puVar12 = (undefined *)0xf71b798;
                                          }
                                        }
                                        else {
                                          puVar12 = (undefined *)0xf714e70;
                                        }
                                      }
                                      else {
                                        puVar12 = (undefined *)0xf715830;
                                      }
                                    }
                                    else {
                                      puVar12 = (undefined *)0xf715470;
                                    }
                                  }
                                  else {
                                    puVar12 = (undefined *)0xf710368;
                                  }
                                }
                                else {
                                  puVar12 = (undefined *)0xf710430;
                                }
                              }
                              else {
                                puVar12 = (undefined *)0xf71a210;
                              }
                            }
                            else {
                              puVar12 = (undefined *)0xf710520;
                            }
                          }
                          else {
                            puVar12 = (undefined *)0xf711380;
                          }
                        }
                        else {
                          puVar12 = (undefined *)0xf715808;
                        }
                      }
                      else {
                        puVar12 = &DAT_0f715218;
                      }
                    }
                    else {
                      puVar12 = &DAT_0f71b2a0;
                    }
                  }
                  else {
                    puVar12 = (undefined *)0xf7103e0;
                  }
                }
                else {
                  puVar12 = (undefined *)0xf713e60;
                }
              }
              else {
                puVar12 = (undefined *)0xf710ac0;
              }
            }
            else {
              puVar12 = &DAT_0f7149f0;
            }
          }
          else {
            puVar12 = (undefined *)0xf7151f0;
          }
        }
        else {
          puVar12 = (undefined *)0xf713638;
        }
      }
      else {
        puVar12 = (undefined *)0xf71ba40;
      }
    }
    else {
      puVar12 = (undefined *)0xf71b7c0;
    }
    break;
  case 1:
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    if (*(short *)(pbVar7 + 4) != 0x736b || *(int *)pbVar7 != 0x63697262) goto LAB_0d37a05a;
    puVar12 = (undefined *)0xf71be50;
    break;
  case 5:
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    if (*(short *)(pbVar7 + 8) == 0x6863 && *(long *)pbVar7 == 0x726f745f6c6c6177) {
      puVar12 = (undefined *)0xf714dd0;
    }
    else {
      if (*(short *)(pbVar7 + 8) != 0x6174 || *(long *)pbVar7 != 0x746f636172726574)
      goto LAB_0d37a05a;
      puVar12 = (undefined *)0xf719ef0;
    }
    break;
  case 9:
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    if (*(long *)(pbVar7 + 6) != 0x657461675f65636e || *(long *)pbVar7 != 0x636e65665f6b616f)
    goto LAB_0d37a05a;
    puVar12 = (undefined *)0xf710728;
  }
LAB_0d37a389:
  uVar9 = 1;
  param_1 = unaff_RBX;
SUB_0cc41df0:
  while( true ) {
    puVar11 = puVar12;
    *(long **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(byte **)((long)register0x00000020 + -0x18) = param_1;
    *(undefined8 *)((long)register0x00000020 + -0x38) = _DAT_0f6ffb28;
    *(long *)((long)register0x00000020 + -0x30) = _DAT_0f6ffb30;
    if (_DAT_0f6ffb30 != 0) {
      LOCK();
      *(long *)(_DAT_0f6ffb30 + 8) = *(long *)(_DAT_0f6ffb30 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e28;
    func_0x0cc46520((undefined1 *)((long)register0x00000020 + -0x28),
                    (undefined1 *)((long)register0x00000020 + -0x38),uVar9);
    unaff_R15 = *(long **)((long)register0x00000020 + -0x30);
    if (unaff_R15 != (long *)0x0) {
      LOCK();
      plVar1 = unaff_R15 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        pcVar3 = *(code **)(*unaff_R15 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e4d;
        (*pcVar3)(unaff_R15);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e55;
        func_0x0412c2d0(unaff_R15);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e67;
    lVar6 = func_0x0cc422f0(&DAT_0f6ff9e0,puVar11,0,0,0);
    if (lVar6 != 0) break;
    uVar9 = 0;
    puVar10 = (undefined8 *)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    *puVar10 = 0xcc41e86;
    param_1 = &DAT_0f6ff9e0;
    puVar12 = &DAT_0f6eaec0;
    unaff_R14 = puVar11;
  }
  uVar9 = *(undefined8 *)(lVar6 + 0x200);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e93;
  func_0x0cc465d0((undefined1 *)((long)register0x00000020 + -0x28));
  return uVar9;
}


