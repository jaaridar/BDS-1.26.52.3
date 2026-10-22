/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd080530 (ELF vaddr 0xcf80530)
 * Label: caller-of-callee
 * Body:  [[0d080530, 0d0808f0] [0d080900, 0d08093c] [0d080940, 0d080a6d] [0d080a70, 0d080c77] [0d080c80, 0d080cdb] [0d080ce0, 0d080d22] [0d080d30, 0d080d57] [0d080d60, 0d080d74] [0d080d80, 0d080dd5] [0d080de0, 0d080e0b] [0d080e10, 0d080e86] [0d080e90, 0d080ec7] [0d080ed0, 0d080ff6] [0d081000, 0d0810ba] [0d0810c0, 0d0810f3] [0d081100, 0d081169] [0d081170, 0d081189] [0d081190, 0d081223] [0d081230, 0d081278] [0d081280, 0d0812bd] [0d0812c0, 0d0812e4] [0d0812f0, 0d081784] [0d081790, 0d0817d6] [0d0817e0, 0d081809] [0d081810, 0d081857] [0d081860, 0d0818b0] [0d0818c0, 0d0819e4] [0d0819f0, 0d081a6d] [0d081a70, 0d081ab8] [0d081ac0, 0d081b6c] [0d081b70, 0d081bb5] [0d081bc0, 0d081c63] [0d081c70, 0d081c89] [0d081c90, 0d081ef5] [0d081f00, 0d081f97] [0d081fa0, 0d0824bc] [0d0824c0, 0d082508] [0d082510, 0d082560] [0d082570, 0d0825f0] [0d082600, 0d082749] [0d082750, 0d082788] [0d082790, 0d082805] [0d082810, 0d08282a] [0d082830, 0d083061] [0d083248, 0d083328] [0d083374, 0d08338c]]
 * Ghidra: FUN_0d080530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d080530(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  byte *pbVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong extraout_RDX;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  byte bVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined *puVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_ac;
  long *plStack_a8;
  byte *pbStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  uint uStack_88;
  uint uStack_84;
  undefined1 uStack_80;
  undefined2 uStack_7f;
  undefined1 uStack_7d;
  uint uStack_7c;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  plStack_58 = param_4;
  func_0x0d07a410(param_1,&uStack_38);
  *param_1 = &UNK_0f44b8c8;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  plVar26 = param_3;
  if (puVar9 == (undefined8 *)0x0) goto LAB_0d083014;
  do {
    uStack_128 = (long *)&UNK_0f2be620;
    uStack_120 = (long *)&SUB_0ee2eb40;
    *puVar9 = _DAT_014f0550;
    puVar9[1] = 0;
    puVar9[6] = puVar9 + 2;
    puVar9[2] = &UNK_0f2be620;
    puVar9[3] = &SUB_0ee2eb40;
    plStack_108 = &uStack_128;
    uVar23 = func_0x0ee2eb40();
    puStack_40 = param_1 + 0x43;
    puVar9[1] = uVar23;
    *puStack_40 = puVar9;
    if (plStack_108 == &uStack_128) {
      lVar10 = 0x20;
LAB_0d080617:
      (**(code **)(*plStack_108 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (plStack_108 != (long *)0x0) goto LAB_0d080617;
    }
    param_3 = plStack_58;
    param_1[0x44] = plVar26;
    *(undefined1 *)(param_1 + 0x45) = 0;
    puStack_48 = param_1 + 0x46;
    pcVar11 = (char *)*plStack_58;
    param_1[0x46] = pcVar11;
    lVar10 = plStack_58[1];
    param_1[0x47] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
      UNLOCK();
      pcVar11 = (char *)*puStack_48;
    }
    param_1[0x48] = plStack_58[2];
    if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) break;
    func_0x04890760();
    puVar9 = param_1;
LAB_0d083014:
    FUN_0eec74c0(0x40,0);
    plVar26 = param_3;
  } while( true );
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = _DAT_0f544ff0 + 1;
  puStack_70 = (uint *)(param_1 + 0x55);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  plVar26 = (long *)param_1[0x44];
  plVar12 = plStack_58;
  if (plVar26 == (long *)0x0) goto LAB_0d082de0;
  uStack_88 = 0x6f637314;
  uStack_84 = 0x6f626572;
  uStack_80 = 0x61;
  uStack_7f = 0x6472;
  uStack_7d = 0;
  (**(code **)(*plVar26 + 0x20))(&plStack_c8,plVar26,&uStack_88,0);
  plVar26 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    uStack_128 = (long *)&UNK_013f1333;
    uStack_120 = (long *)0xc;
    plVar12 = (long *)func_0x0d6c97a0(plStack_c8 + 1,&uStack_128);
    if (plVar12 != plVar26 + 2) {
      if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) goto LAB_0d08302a;
      uStack_c0 = &uStack_68;
      lVar10 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                         (&uStack_c0,plVar12 + 7);
      plVar26 = plStack_c8;
      if (lVar10 != 0) {
        uStack_128 = (long *)&UNK_013f1333;
        uStack_120 = (long *)0xc;
        plVar12 = (long *)func_0x0d6c97a0(plStack_c8 + 1,&uStack_128);
        if ((plVar12 == plVar26 + 2) || ((int)plVar12[0xc] != 4)) {
          lVar10 = 0;
        }
        else {
          lVar10 = plVar12[8];
        }
        param_1[0x4d] = lVar10;
        param_1[0x4e] = 0;
      }
    }
    plVar26 = plStack_c8;
    uStack_128 = (long *)&UNK_0144d921;
    uStack_120 = (long *)0x7;
    plVar12 = (long *)func_0x0d6c9880(plStack_c8 + 1,&uStack_128);
    if ((plVar12 != plVar26 + 2) && ((int)plVar12[0xc] == 9)) {
      lVar10 = plVar12[8];
      uVar13 = plVar12[9] - lVar10;
      if (0xffffffff < (long)(uVar13 * 0x20000000)) {
        plStack_e8 = param_1 + 7;
        puStack_130 = param_1 + 0x11;
        plStack_e0 = param_1 + 0x1b;
        plStack_98 = param_1 + 0xc;
        uVar32 = 0;
        do {
          if ((uVar32 < (ulong)((long)uVar13 >> 3)) &&
             (cVar7 = (**(code **)(**(long **)(lVar10 + uVar32 * 8) + 0x30))(), cVar7 == '\n')) {
            lVar10 = *(long *)(lVar10 + uVar32 * 8);
          }
          else {
            lVar10 = 0;
          }
          uStack_128 = (long *)&UNK_0128307f;
          uStack_120 = (long *)0xc;
          lVar15 = lVar10 + 8;
          lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
          lVar10 = lVar10 + 0x10;
          if ((lVar14 == lVar10) || (*(int *)(lVar14 + 0x60) != 1)) {
            cVar7 = '\0';
          }
          else {
            cVar7 = *(char *)(lVar14 + 0x40);
          }
          uStack_128 = (long *)&UNK_0122784e;
          uStack_120 = (long *)0xc;
          lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
          if ((lVar14 == lVar10) || (*(int *)(lVar14 + 0x60) != 4)) {
            uStack_68 = 0;
            if (cVar7 != '\x03') goto LAB_0d080a20;
LAB_0d080998:
            uStack_60 = 0;
            uStack_c0 = (long *)&UNK_012ceef6;
            uStack_b8 = 0xe;
            lVar15 = func_0x0d6c97a0(lVar15,&uStack_c0);
            if ((lVar15 == lVar10) || (*(int *)(lVar15 + 0x60) != 8)) {
              pbVar24 = &UNK_01e79d90;
            }
            else {
              pbVar24 = &UNK_01e79d90;
              if (lVar15 != -0x38) {
                pbVar24 = (byte *)(lVar15 + 0x40);
              }
            }
            if ((*pbVar24 & 1) == 0) {
              uStack_118 = *(ulong *)(pbVar24 + 0x10);
              uStack_128 = *(long **)pbVar24;
              uStack_120 = *(long **)(pbVar24 + 8);
            }
            else {
              func_0x0412e5e0(&uStack_128,*(undefined8 *)(pbVar24 + 0x10),
                              *(undefined8 *)(pbVar24 + 8));
            }
            lVar10 = func_0x0d14d520(puStack_130,&uStack_128);
            plVar26 = (long *)(lVar10 + 0x28);
            if (lVar10 == 0) {
              plVar26 = (long *)&DAT_0f544ff0;
            }
            if (_DAT_0f544ff0 == *plVar26) {
              plVar16 = (long *)func_0x0d0b6a70(plStack_e8,&uStack_68,&uStack_128);
              plVar26 = (long *)&DAT_0f544ff0;
              if (((char)plVar16[8] != '\0') &&
                 (plVar26 = (long *)&DAT_0f544ff0, _DAT_0f544ff0 != *plVar16)) {
                lVar10 = func_0x0d14ccf0(puStack_130,&uStack_128,&uStack_128,plVar16);
                plVar26 = (long *)(lVar10 + 0x28);
              }
            }
            lVar10 = *plVar26;
            lVar15 = plVar26[1];
            lVar14 = func_0x0d08c6e0(plStack_e0,lVar10);
            *(undefined4 *)(lVar14 + 0x20) = 0;
            *(long *)(lVar14 + 0x28) = lVar10;
            *(long *)(lVar14 + 0x30) = lVar15;
            if (((ulong)uStack_128 & 1) != 0) {
              func_0x0412a280(uStack_118,(ulong)uStack_128 & 0xfffffffffffffffe);
            }
          }
          else {
            uStack_68 = *(undefined8 *)(lVar14 + 0x40);
            if (cVar7 == '\x03') goto LAB_0d080998;
LAB_0d080a20:
            uStack_60 = 0;
            if (cVar7 == '\x02') {
              uStack_128 = (long *)&UNK_0143fb0a;
              uStack_120 = (long *)0x8;
              lVar15 = func_0x0d6c97a0(lVar15,&uStack_128);
              if ((lVar15 == lVar10) || (*(int *)(lVar15 + 0x60) != 4)) {
                uStack_128 = (long *)0x0;
              }
              else {
                uStack_128 = *(long **)(lVar15 + 0x40);
              }
              puVar9 = (undefined8 *)func_0x0d0b5090(plStack_e8,&uStack_68,&uStack_128,plStack_98);
              uVar23 = *puVar9;
              uVar1 = puVar9[1];
              lVar10 = func_0x0d08c6e0(plStack_e0,uVar23,puVar9);
              *(undefined4 *)(lVar10 + 0x20) = 0;
              *(undefined8 *)(lVar10 + 0x28) = uVar23;
              *(undefined8 *)(lVar10 + 0x30) = uVar1;
            }
            else if (cVar7 == '\x01') {
              uStack_128 = (long *)&UNK_012421f1;
              uStack_120 = (long *)0x8;
              lVar15 = func_0x0d6c97a0(lVar15,&uStack_128);
              if ((lVar15 == lVar10) || (*(int *)(lVar15 + 0x60) != 4)) {
                uStack_128 = (long *)0x0;
              }
              else {
                uStack_128 = *(long **)(lVar15 + 0x40);
              }
              func_0x0d07e700(param_1,&uStack_68,&uStack_128);
            }
          }
          uVar32 = uVar32 + 1;
          lVar10 = plVar12[8];
          uVar13 = plVar12[9] - lVar10;
        } while ((long)uVar32 < (long)(int)(uVar13 >> 3));
      }
    }
    plVar26 = plStack_c8;
    uStack_128 = (long *)&UNK_01388a8c;
    uStack_120 = (long *)0x8;
    plVar12 = (long *)func_0x0d6c9880(plStack_c8 + 1,&uStack_128);
    if ((plVar12 != plVar26 + 2) && ((int)plVar12[0xc] == 9)) {
      lVar10 = plVar12[8];
      uVar13 = plVar12[9] - lVar10;
      if (0xffffffff < (long)(uVar13 * 0x20000000)) {
        plStack_e8 = param_1 + 0x2b;
        plStack_a8 = param_1 + 0x2d;
        plVar26 = (long *)0x0;
        plStack_98 = plVar12;
        do {
          plStack_e0 = plVar26;
          if ((plVar26 < (long *)((long)uVar13 >> 3)) &&
             (cVar7 = (**(code **)(**(long **)(lVar10 + (long)plVar26 * 8) + 0x30))(), cVar7 == '\n'
             )) {
            lVar10 = *(long *)(lVar10 + (long)plStack_e0 * 8);
          }
          else {
            lVar10 = 0;
          }
          uStack_128 = (long *)&UNK_012f0cac;
          uStack_120 = (long *)0x4;
          lVar15 = lVar10 + 8;
          lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
          lVar10 = lVar10 + 0x10;
          if (lVar14 == lVar10) {
            lVar25 = 0;
          }
          else {
            lVar25 = lVar14 + 0x38;
            if (*(int *)(lVar14 + 0x60) != 8) {
              lVar25 = 0;
            }
          }
          pbVar24 = (byte *)(lVar25 + 8);
          if (lVar25 == 0) {
            pbVar24 = &UNK_01e79d90;
          }
          bVar33 = *pbVar24;
          if ((bVar33 & 1) == 0) {
            if (bVar33 >> 1 == 5) goto LAB_0d080d6a;
LAB_0d080d9b:
            uStack_c0 = (long *)&UNK_012f0cac;
            uStack_b8 = 4;
            lVar14 = func_0x0d6c97a0(lVar15,&uStack_c0);
            if (lVar14 == lVar10) {
              lVar25 = 0;
            }
            else {
              lVar25 = lVar14 + 0x38;
              if (*(int *)(lVar14 + 0x60) != 8) {
                lVar25 = 0;
              }
            }
            pbVar24 = (byte *)(lVar25 + 8);
            if (lVar25 == 0) {
              pbVar24 = &UNK_01e79d90;
            }
            if ((*pbVar24 & 1) == 0) {
              uStack_118 = *(ulong *)(pbVar24 + 0x10);
              uStack_128 = *(long **)pbVar24;
              uStack_120 = *(long **)(pbVar24 + 8);
            }
            else {
              func_0x0412e5e0(&uStack_128,*(undefined8 *)(pbVar24 + 0x10),
                              *(undefined8 *)(pbVar24 + 8));
            }
            if (((ulong)uStack_128 & 1) == 0) {
              if ((byte)uStack_128 >> 1 == 0) goto LAB_0d080e77;
LAB_0d080e37:
              uStack_c0 = (long *)&UNK_01269174;
              uStack_b8 = 8;
              lVar14 = func_0x0d6c97a0(lVar15,&uStack_c0);
              if ((lVar14 == lVar10) || (*(int *)(lVar14 + 0x60) != 1)) {
                bVar39 = false;
              }
              else {
                bVar39 = *(char *)(lVar14 + 0x40) != '\0';
              }
              uStack_c0 = (long *)&UNK_014581b4;
              uStack_b8 = 10;
              lVar15 = func_0x0d6c97a0(lVar15,&uStack_c0);
              if ((lVar15 == lVar10) || (*(int *)(lVar15 + 0x60) != 1)) {
                bVar33 = 0;
              }
              else {
                bVar33 = *(byte *)(lVar15 + 0x40);
              }
              puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              if (puVar17 == (ulong *)0x0) {
                FUN_0eec74c0(0x20,0);
              }
              if (((ulong)uStack_128 & 1) != 0) {
                func_0x0412e5e0(puVar17,uStack_118,uStack_120);
                *(bool *)(puVar17 + 3) = bVar39;
                *(byte *)((long)puVar17 + 0x19) = bVar33;
                goto joined_r0x0d080e7c;
              }
              puVar17[2] = uStack_118;
              *(undefined4 *)puVar17 = (undefined4)uStack_128;
              *(undefined4 *)((long)puVar17 + 4) = uStack_128._4_4_;
              *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_120;
              *(undefined4 *)((long)puVar17 + 0xc) = uStack_120._4_4_;
              *(bool *)(puVar17 + 3) = bVar39;
              *(byte *)((long)puVar17 + 0x19) = bVar33;
            }
            else {
              if (uStack_120 != (long *)0x0) goto LAB_0d080e37;
LAB_0d080e77:
              puVar17 = (ulong *)0x0;
joined_r0x0d080e7c:
              if (((ulong)uStack_128 & 1) != 0) {
                func_0x0412a280(uStack_118,(ulong)uStack_128 & 0xfffffffffffffffe);
              }
            }
            if (puVar17 != (ulong *)0x0) {
              uStack_68 = 0;
              pbVar24 = (byte *)((long)puVar17 + 1);
              bVar39 = ((byte)*puVar17 & 1) == 0;
              pbVar34 = (byte *)puVar17[2];
              if (bVar39) {
                pbVar34 = pbVar24;
              }
              uVar13 = (ulong)(byte)((byte)*puVar17 >> 1);
              if (!bVar39) {
                uVar13 = puVar17[1];
              }
              puStack_90 = puVar17;
              puVar18 = (undefined8 *)FUN_04883620(&uStack_128,pbVar34,uVar13);
              puVar9 = (undefined8 *)param_1[0x2c];
              if (puVar9 != (undefined8 *)0x0) {
                uVar13 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
                uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
                uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar13 >> 0x38 < 2) {
                  puStack_130 = (undefined8 *)((long)puVar9 - 1U & (ulong)puVar18);
                }
                else {
                  puStack_130 = puVar18;
                  if (puVar9 <= puVar18) {
                    if (((ulong)puVar18 | (ulong)puVar9) >> 0x20 == 0) {
                      puStack_130 = (undefined8 *)
                                    (((ulong)puVar18 & 0xffffffff) % ((ulong)puVar9 & 0xffffffff));
                    }
                    else {
                      puStack_130 = (undefined8 *)((ulong)puVar18 % (ulong)puVar9);
                    }
                  }
                }
                plVar26 = *(long **)(*plStack_e8 + (long)puStack_130 * 8);
                if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)
                   ) {
                  if (((byte)*puVar17 & 1) == 0) {
                    uVar32 = (ulong)(byte)((byte)*puVar17 >> 1);
                  }
                  else {
                    uVar32 = puVar17[1];
                    pbVar24 = (byte *)puVar17[2];
                  }
                  if ((byte)(uVar13 >> 0x38) < 2) {
                    plVar12 = (long *)((long)puVar9 + -1);
                    plStack_d8 = plVar12;
                    do {
                      if ((undefined8 *)plVar26[1] == puVar18) {
                        bVar33 = *(byte *)(plVar26 + 2);
                        if ((bVar33 & 1) == 0) {
                          uVar13 = (ulong)(bVar33 >> 1);
                        }
                        else {
                          uVar13 = plVar26[3];
                        }
                        if (uVar13 == uVar32) {
                          if ((bVar33 & 1) == 0) {
                            lVar10 = (long)plVar26 + 0x11;
                          }
                          else {
                            lVar10 = plVar26[4];
                          }
                          iVar8 = func_0x0eee3000(lVar10,pbVar24,uVar32);
                          plVar12 = plStack_d8;
                          if (iVar8 == 0) goto LAB_0d0814f2;
                        }
                      }
                      else if ((undefined8 *)((ulong)plVar26[1] & (ulong)plVar12) != puStack_130)
                      break;
                      plVar26 = (long *)*plVar26;
                    } while (plVar26 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar27 = (undefined8 *)plVar26[1];
                      if (puVar27 == puVar18) {
                        bVar33 = *(byte *)(plVar26 + 2);
                        if ((bVar33 & 1) == 0) {
                          uVar13 = (ulong)(bVar33 >> 1);
                        }
                        else {
                          uVar13 = plVar26[3];
                        }
                        if (uVar13 == uVar32) {
                          if ((bVar33 & 1) == 0) {
                            lVar10 = (long)plVar26 + 0x11;
                          }
                          else {
                            lVar10 = plVar26[4];
                          }
                          iVar8 = func_0x0eee3000(lVar10,pbVar24,uVar32);
                          if (iVar8 == 0) goto LAB_0d0814f2;
                        }
                      }
                      else {
                        if (puVar9 <= puVar27) {
                          if (((ulong)puVar27 | (ulong)puVar9) >> 0x20 == 0) {
                            puVar27 = (undefined8 *)
                                      (((ulong)puVar27 & 0xffffffff) % ((ulong)puVar9 & 0xffffffff))
                            ;
                          }
                          else {
                            puVar27 = (undefined8 *)((ulong)puVar27 % (ulong)puVar9);
                          }
                        }
                        if (puVar27 != puStack_130) break;
                      }
                      plVar26 = (long *)*plVar26;
                    } while (plVar26 != (long *)0x0);
                  }
                }
              }
              plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (plVar26 == (long *)0x0) {
                FUN_0eec74c0(0x30,0);
              }
              uStack_120 = plStack_e8;
              uStack_118 = 0;
              *plVar26 = 0;
              plVar26[1] = (long)puVar18;
              uStack_128 = plVar26;
              if ((*puVar17 & 1) == 0) {
                plVar26[4] = puVar17[2];
                uVar13 = puVar17[1];
                plVar26[2] = *puVar17;
                plVar26[3] = uVar13;
              }
              else {
                func_0x0412e5e0(plVar26 + 2,puVar17[2],puVar17[1]);
              }
              puVar17 = puStack_90;
              puStack_90 = (ulong *)0x0;
              plVar26[5] = (long)puVar17;
              uStack_118 = CONCAT71(uStack_118._1_7_,1);
              if ((long)puVar9 < 0) {
                fVar41 = (float)puVar9;
                fVar40 = *(float *)(param_1 + 0x2f);
                if (puVar9 != (undefined8 *)0x0) goto LAB_0d0812d4;
LAB_0d0812f0:
                uVar13 = 1;
                if ((undefined8 *)0x2 < puVar9) {
                  uVar13 = (ulong)(((ulong)puVar9 & (long)puVar9 - 1U) != 0);
                }
                uVar13 = (long)puVar9 * 2 | uVar13;
                fVar40 = (float)func_0x0eee3ab0((float)(param_1[0x2e] + 1) / fVar40);
                uVar32 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
                if (uVar32 < uVar13) {
                  uVar32 = uVar13;
                }
                uVar13 = 2;
                if ((uVar32 == 1) || (uVar13 = uVar32, (uVar32 & uVar32 - 1) == 0)) {
                  uVar32 = param_1[0x2c];
                  bVar39 = uVar13 < uVar32;
                  if (uVar13 <= uVar32) goto LAB_0d081387;
LAB_0d081361:
                  func_0x0d08c000(plStack_e8,uVar13);
                }
                else {
                  uVar13 = func_0x0412c3f0();
                  uVar32 = param_1[0x2c];
                  bVar39 = uVar13 < uVar32;
                  if (uVar32 < uVar13) goto LAB_0d081361;
LAB_0d081387:
                  if (bVar39) {
                    fVar40 = (float)func_0x0eee3ab0((float)(ulong)param_1[0x2e] /
                                                    *(float *)(param_1 + 0x2f));
                    uVar30 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
                    if ((uVar32 < 3) ||
                       (uVar21 = uVar32 - (uVar32 >> 1 & 0x5555555555555555),
                       uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
                       1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                 >> 0x38))) {
                      uVar30 = func_0x0412c3f0(uVar30);
                    }
                    else if (1 < uVar30) {
                      lVar10 = 0x3f;
                      if (uVar30 - 1 != 0) {
                        for (; uVar30 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                        }
                      }
                      uVar30 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
                    }
                    if (uVar13 <= uVar30) {
                      uVar13 = uVar30;
                    }
                    if (uVar13 < uVar32) goto LAB_0d081361;
                  }
                }
                puVar9 = (undefined8 *)param_1[0x2c];
                if (((ulong)puVar9 & (long)puVar9 - 1U) == 0) {
                  puVar27 = (undefined8 *)((ulong)puVar18 & (long)puVar9 - 1U);
                }
                else {
                  puVar27 = puVar18;
                  if (puVar9 <= puVar18) {
                    if (((ulong)puVar18 | (ulong)puVar9) >> 0x20 == 0) {
                      puVar27 = (undefined8 *)
                                (((ulong)puVar18 & 0xffffffff) % ((ulong)puVar9 & 0xffffffff));
                    }
                    else {
                      puVar27 = (undefined8 *)((ulong)puVar18 % (ulong)puVar9);
                    }
                  }
                }
              }
              else {
                fVar41 = (float)(long)puVar9;
                fVar40 = *(float *)(param_1 + 0x2f);
                if (puVar9 == (undefined8 *)0x0) goto LAB_0d0812f0;
LAB_0d0812d4:
                puVar27 = puStack_130;
                if (fVar41 * fVar40 < (float)(param_1[0x2e] + 1)) goto LAB_0d0812f0;
              }
              lVar10 = *plStack_e8;
              plVar12 = *(long **)(lVar10 + (long)puVar27 * 8);
              if (plVar12 == (long *)0x0) {
                *plVar26 = *plStack_a8;
                *plStack_a8 = (long)plVar26;
                *(long **)(lVar10 + (long)puVar27 * 8) = plStack_a8;
                if (*plVar26 != 0) {
                  puVar18 = *(undefined8 **)(*plVar26 + 8);
                  if (((ulong)puVar9 & (long)puVar9 - 1U) == 0) {
                    *(long **)(lVar10 + ((ulong)puVar18 & (long)puVar9 - 1U) * 8) = plVar26;
                  }
                  else {
                    if (puVar9 <= puVar18) {
                      if (((ulong)puVar18 | (ulong)puVar9) >> 0x20 == 0) {
                        *(long **)(lVar10 + (((ulong)puVar18 & 0xffffffff) %
                                            ((ulong)puVar9 & 0xffffffff)) * 8) = plVar26;
                        goto LAB_0d0814eb;
                      }
                      puVar18 = (undefined8 *)((ulong)puVar18 % (ulong)puVar9);
                    }
                    *(long **)(lVar10 + (long)puVar18 * 8) = plVar26;
                  }
                }
              }
              else {
                *plVar26 = *plVar12;
                *plVar12 = (long)plVar26;
              }
LAB_0d0814eb:
              param_1[0x2e] = param_1[0x2e] + 1;
LAB_0d0814f2:
              puVar17 = puStack_90;
              plVar12 = plStack_98;
              puStack_90 = (ulong *)0x0;
              if (puVar17 != (ulong *)0x0) {
                if ((*puVar17 & 1) != 0) {
                  func_0x0412a280(puVar17[2],*puVar17 & 0xfffffffffffffffe);
                }
                func_0x0412a280(puVar17,0x20);
              }
            }
          }
          else {
            if (*(long *)(pbVar24 + 8) != 5) goto LAB_0d080d9b;
LAB_0d080d6a:
            if ((bVar33 & 1) == 0) {
              pbVar24 = pbVar24 + 1;
            }
            else {
              pbVar24 = *(byte **)(pbVar24 + 0x10);
            }
            if (pbVar24[4] != 0x79 || *(int *)pbVar24 != 0x6d6d7564) goto LAB_0d080d9b;
          }
          plVar26 = (long *)((long)plStack_e0 + 1);
          lVar10 = plVar12[8];
          uVar13 = plVar12[9] - lVar10;
        } while ((long)plVar26 < (long)(int)(uVar13 >> 3));
      }
    }
    plVar26 = plStack_c8;
    uStack_128 = (long *)&UNK_0131d663;
    uStack_120 = (long *)0xa;
    plVar12 = (long *)func_0x0d6c9880(plStack_c8 + 1,&uStack_128);
    if ((plVar12 == plVar26 + 2) || ((int)plVar12[0xc] != 9)) {
      bVar39 = false;
    }
    else {
      lVar10 = plVar12[8];
      uVar13 = plVar12[9] - lVar10;
      bVar39 = true;
      if (0xffffffff < (long)(uVar13 * 0x20000000)) {
        plStack_98 = param_1 + 0x2b;
        plStack_a8 = param_1 + 0x26;
        plStack_d8 = param_1 + 0x21;
        pbStack_a0 = (byte *)(param_1 + 0x23);
        plVar26 = (long *)0x0;
        plStack_e8 = plVar12;
LAB_0d08175e:
        plStack_e0 = plVar26;
        if ((plVar26 < (long *)((long)uVar13 >> 3)) &&
           (cVar7 = (**(code **)(**(long **)(lVar10 + (long)plVar26 * 8) + 0x30))(), cVar7 == '\n'))
        {
          lVar10 = *(long *)(lVar10 + (long)plStack_e0 * 8);
        }
        else {
          lVar10 = 0;
        }
        uStack_128 = (long *)&UNK_012f0cac;
        uStack_120 = (long *)0x4;
        lVar15 = lVar10 + 8;
        lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
        lVar10 = lVar10 + 0x10;
        if (lVar14 == lVar10) {
          lVar25 = 0;
        }
        else {
          lVar25 = lVar14 + 0x38;
          if (*(int *)(lVar14 + 0x60) != 8) {
            lVar25 = 0;
          }
        }
        pbVar24 = (byte *)(lVar25 + 8);
        if (lVar25 == 0) {
          pbVar24 = &UNK_01e79d90;
        }
        if ((*pbVar24 & 1) == 0) {
          if (*pbVar24 >> 1 != 0) goto LAB_0d08181b;
        }
        else if (*(long *)(pbVar24 + 8) != 0) {
LAB_0d08181b:
          uStack_128 = (long *)&UNK_01471089;
          uStack_120 = (long *)0xb;
          lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
          if (lVar14 == lVar10) {
            lVar25 = 0;
          }
          else {
            lVar25 = lVar14 + 0x38;
            if (*(int *)(lVar14 + 0x60) != 8) {
              lVar25 = 0;
            }
          }
          pbVar34 = (byte *)(lVar25 + 8);
          if (lVar25 == 0) {
            pbVar34 = &UNK_01e79d90;
          }
          uStack_128 = (long *)&UNK_01388a8c;
          uStack_120 = (long *)0x8;
          lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
          if (lVar14 == lVar10) {
            lVar25 = 0;
          }
          else {
            lVar25 = lVar14 + 0x38;
            if (*(int *)(lVar14 + 0x60) != 8) {
              lVar25 = 0;
            }
          }
          puVar36 = (undefined *)(lVar25 + 8);
          if (lVar25 == 0) {
            puVar36 = &UNK_01e79d90;
          }
          lVar14 = func_0x0d08c1e0(plStack_98,puVar36);
          if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x28), lVar14 != 0)) {
            plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
            if (plVar26 == (long *)0x0) {
              FUN_0eec74c0(0x78,0);
            }
            func_0x0d0795b0(plVar26,pbVar24,lVar14);
            pbVar24 = (byte *)(plVar26 + 0xb);
            if (pbVar24 != pbVar34) {
              bVar33 = *pbVar34;
              if ((*pbVar24 & 1) == 0) {
                if ((bVar33 & 1) == 0) {
                  plVar26[0xd] = *(long *)(pbVar34 + 0x10);
                  uVar2 = *(undefined4 *)(pbVar34 + 4);
                  uVar3 = *(undefined4 *)(pbVar34 + 8);
                  uVar4 = *(undefined4 *)(pbVar34 + 0xc);
                  *(undefined4 *)pbVar24 = *(undefined4 *)pbVar34;
                  *(undefined4 *)((long)plVar26 + 0x5c) = uVar2;
                  *(undefined4 *)(plVar26 + 0xc) = uVar3;
                  *(undefined4 *)((long)plVar26 + 100) = uVar4;
                }
                else {
                  FUN_04885070(pbVar24,*(undefined8 *)(pbVar34 + 0x10),*(undefined8 *)(pbVar34 + 8))
                  ;
                }
              }
              else {
                bVar39 = (bVar33 & 1) != 0;
                pbVar35 = pbVar34 + 1;
                if (bVar39) {
                  pbVar35 = *(byte **)(pbVar34 + 0x10);
                }
                uVar13 = (ulong)(bVar33 >> 1);
                if (bVar39) {
                  uVar13 = *(ulong *)(pbVar34 + 8);
                }
                func_0x04885120(pbVar24,pbVar35,uVar13);
              }
            }
            uStack_128 = (long *)&UNK_0148bdbf;
            uStack_120 = (long *)0x6;
            lVar15 = func_0x0d6c97a0(lVar15);
            plVar12 = plVar26;
            if ((lVar15 != lVar10) && (*(int *)(lVar15 + 0x60) == 9)) {
              lVar10 = *(long *)(lVar15 + 0x40);
              uVar13 = *(long *)(lVar15 + 0x48) - lVar10;
              if (0xffffffff < (long)(uVar13 * 0x20000000)) {
                uVar32 = 0;
LAB_0d081a13:
                if ((uVar32 < (ulong)((long)uVar13 >> 3)) &&
                   (cVar7 = (**(code **)(**(long **)(lVar10 + uVar32 * 8) + 0x30))(), cVar7 == '\n')
                   ) {
                  lVar10 = *(long *)(lVar10 + uVar32 * 8);
                }
                else {
                  lVar10 = 0;
                }
                uStack_128 = (long *)&UNK_013b2c4c;
                uStack_120 = (long *)0x5;
                lVar14 = func_0x0d6c97a0(lVar10 + 8,&uStack_128);
                if ((lVar14 == lVar10 + 0x10) || (*(int *)(lVar14 + 0x60) != 3)) {
                  plVar12 = (long *)0x0;
                }
                else {
                  plVar12 = (long *)(ulong)*(uint *)(lVar14 + 0x40);
                }
                uStack_128 = (long *)&UNK_0122784e;
                uStack_120 = (long *)0xc;
                lVar14 = func_0x0d6c97a0();
                if ((lVar14 == lVar10 + 0x10) || (*(int *)(lVar14 + 0x60) != 4)) {
                  uVar13 = 0;
                  uVar30 = param_1[0x1c];
                }
                else {
                  uVar13 = *(ulong *)(lVar14 + 0x40);
                  uVar30 = param_1[0x1c];
                }
                if (uVar30 != 0) {
                  uVar21 = ((long)uVar13 >> 0x20) + 0x9e3779b9;
                  uVar21 = (uVar13 & 0xffffffff) + 0x9e3779b9 + uVar21 * 0x40 + (uVar21 >> 2) ^
                           uVar21;
                  uVar31 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
                  uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333);
                  uVar31 = ((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                  if (uVar31 >> 0x38 < 2) {
                    uVar28 = uVar30 - 1 & uVar21;
                  }
                  else {
                    uVar28 = uVar21;
                    if (uVar30 <= uVar21) {
                      uVar28 = uVar21 % uVar30;
                    }
                  }
                  plVar16 = *(long **)(param_1[0x1b] + uVar28 * 8);
                  if ((plVar16 != (long *)0x0) &&
                     (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
                    if ((byte)(uVar31 >> 0x38) < 2) {
                      do {
                        if (plVar16[1] == uVar21) {
                          if (uVar13 == plVar16[2]) goto LAB_0d081be8;
                        }
                        else if ((plVar16[1] & uVar30 - 1) != uVar28) break;
                        plVar16 = (long *)*plVar16;
                      } while (plVar16 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar31 = plVar16[1];
                        if (uVar31 == uVar21) {
                          if (uVar13 == plVar16[2]) goto LAB_0d081be8;
                        }
                        else {
                          if (uVar30 <= uVar31) {
                            if ((uVar31 | uVar30) >> 0x20 == 0) {
                              uVar31 = (uVar31 & 0xffffffff) % (uVar30 & 0xffffffff);
                            }
                            else {
                              uVar31 = uVar31 % uVar30;
                            }
                          }
                          if (uVar31 != uVar28) break;
                        }
                        plVar16 = (long *)*plVar16;
                      } while (plVar16 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0d0819f0;
              }
            }
LAB_0d081c90:
            plVar16 = plStack_d8;
            if (plVar26 != (long *)0x0) {
              bVar33 = *(byte *)(plVar26 + 8);
              if ((bVar33 & 1) == 0) {
                if (bVar33 >> 1 != 0) goto LAB_0d081cc4;
LAB_0d081d12:
                uStack_128 = (long *)0x0;
              }
              else {
                if (plVar26[9] == 0) goto LAB_0d081d12;
LAB_0d081cc4:
                if ((bVar33 & 1) == 0) {
                  pbVar24 = (byte *)((long)plVar26 + 0x41);
                  if (pbVar24 != (byte *)0x0) goto LAB_0d081cdc;
                  goto LAB_0d081d12;
                }
                pbVar24 = (byte *)plVar26[10];
                if (pbVar24 == (byte *)0x0) goto LAB_0d081d12;
LAB_0d081cdc:
                if (*pbVar24 == 0) goto LAB_0d081d12;
                uVar13 = strlen(pbVar24);
                uStack_128 = (long *)0xcbf29ce484222325;
                if (uVar13 != 0) {
                  if (7 < uVar13) {
                    uVar32 = uVar13 & 0xfffffffffffffff8;
                    do {
                      uStack_128 = (long *)(((((((((long)uStack_128 * 0x100000001b3 ^
                                                  (ulong)*pbVar24) * 0x100000001b3 ^
                                                 (ulong)pbVar24[1]) * 0x100000001b3 ^
                                                (ulong)pbVar24[2]) * 0x100000001b3 ^
                                               (ulong)pbVar24[3]) * 0x100000001b3 ^
                                              (ulong)pbVar24[4]) * 0x100000001b3 ^ (ulong)pbVar24[5]
                                             ) * 0x100000001b3 ^ (ulong)pbVar24[6]) * 0x100000001b3
                                           ^ (ulong)pbVar24[7]);
                      pbVar24 = pbVar24 + 8;
                      uVar32 = uVar32 - 8;
                    } while (uVar32 != 0);
                  }
                  if ((uVar13 & 7) != 0) {
                    uVar32 = 0;
                    do {
                      uStack_128 = (long *)((long)uStack_128 * 0x100000001b3 ^
                                           (ulong)pbVar24[uVar32]);
                      uVar32 = uVar32 + 1;
                    } while (((uint)uVar13 & 7) != uVar32);
                  }
                }
              }
              lVar10 = func_0x0d08b5c0(plStack_a8,uStack_128,&uStack_128);
              plVar22 = *(long **)(lVar10 + 0x20);
              *(undefined8 *)(lVar10 + 0x18) = 0;
              *(undefined8 *)(lVar10 + 0x20) = 0;
              if (plVar22 != (long *)0x0) {
                LOCK();
                plVar19 = plVar22 + 1;
                lVar15 = *plVar19;
                *plVar19 = *plVar19 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                  func_0x0412c2d0(plVar22);
                }
              }
              *(undefined8 *)(lVar10 + 0x28) = 0;
              lVar15 = plVar26[1];
              lVar14 = plVar26[2];
              if (lVar14 != 0) {
                LOCK();
                *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
                UNLOCK();
              }
              *(long *)(lVar10 + 0x18) = lVar15;
              plVar22 = *(long **)(lVar10 + 0x20);
              *(long *)(lVar10 + 0x20) = lVar14;
              if (plVar22 != (long *)0x0) {
                LOCK();
                plVar19 = plVar22 + 1;
                lVar15 = *plVar19;
                *plVar19 = *plVar19 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                  func_0x0412c2d0(plVar22);
                }
                lVar15 = *(long *)(lVar10 + 0x18);
              }
              if (lVar15 != 0) {
                *(long **)(lVar10 + 0x28) = plVar26;
              }
              lVar10 = (long)plVar26 + 0x41;
              bVar39 = (*(byte *)(plVar26 + 8) & 1) == 0;
              lVar15 = plVar26[10];
              if (bVar39) {
                lVar15 = lVar10;
              }
              uVar13 = (ulong)(*(byte *)(plVar26 + 8) >> 1);
              if (!bVar39) {
                uVar13 = plVar26[9];
              }
              plVar19 = (long *)FUN_04883620(&uStack_128,lVar15,uVar13);
              plVar22 = (long *)param_1[0x22];
              if (plVar22 != (long *)0x0) {
                uVar13 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555);
                uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
                uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar13 >> 0x38 < 2) {
                  plVar12 = (long *)((long)plVar22 - 1U & (ulong)plVar19);
                  plVar20 = *(long **)(*plVar16 + (long)plVar12 * 8);
                }
                else {
                  plVar12 = plVar19;
                  if (plVar22 <= plVar19) {
                    if (((ulong)plVar19 | (ulong)plVar22) >> 0x20 == 0) {
                      plVar12 = (long *)(((ulong)plVar19 & 0xffffffff) %
                                        ((ulong)plVar22 & 0xffffffff));
                      plVar20 = *(long **)(*plVar16 + (long)plVar12 * 8);
                      goto joined_r0x0d081eaa;
                    }
                    plVar12 = (long *)((ulong)plVar19 % (ulong)plVar22);
                  }
                  plVar20 = *(long **)(*plVar16 + (long)plVar12 * 8);
                }
joined_r0x0d081eaa:
                if ((plVar20 != (long *)0x0) &&
                   (plVar20 = (long *)*plVar20, plVar16 = plStack_d8, plVar20 != (long *)0x0)) {
                  if ((*(byte *)(plVar26 + 8) & 1) == 0) {
                    uVar32 = (ulong)(*(byte *)(plVar26 + 8) >> 1);
                  }
                  else {
                    uVar32 = plVar26[9];
                    lVar10 = plVar26[10];
                  }
                  if ((byte)(uVar13 >> 0x38) < 2) {
                    uVar13 = (long)plVar22 - 1;
                    uStack_d0 = uVar13;
                    do {
                      if ((long *)plVar20[1] == plVar19) {
                        bVar33 = *(byte *)(plVar20 + 2);
                        if ((bVar33 & 1) == 0) {
                          uVar30 = (ulong)(bVar33 >> 1);
                        }
                        else {
                          uVar30 = plVar20[3];
                        }
                        if (uVar30 == uVar32) {
                          if ((bVar33 & 1) == 0) {
                            lVar15 = (long)plVar20 + 0x11;
                          }
                          else {
                            lVar15 = plVar20[4];
                          }
                          iVar8 = func_0x0eee3000(lVar15,lVar10,uVar32);
                          uVar13 = uStack_d0;
                          if (iVar8 == 0) goto LAB_0d081fdf;
                        }
                      }
                      else {
                        plVar16 = plStack_d8;
                        if ((long *)((ulong)plVar20[1] & uVar13) != plVar12) break;
                      }
                      plVar20 = (long *)*plVar20;
                      plVar16 = plStack_d8;
                    } while (plVar20 != (long *)0x0);
                  }
                  else {
                    do {
                      plVar29 = (long *)plVar20[1];
                      if (plVar29 == plVar19) {
                        bVar33 = *(byte *)(plVar20 + 2);
                        if ((bVar33 & 1) == 0) {
                          uVar13 = (ulong)(bVar33 >> 1);
                        }
                        else {
                          uVar13 = plVar20[3];
                        }
                        if (uVar13 == uVar32) {
                          if ((bVar33 & 1) == 0) {
                            lVar15 = (long)plVar20 + 0x11;
                          }
                          else {
                            lVar15 = plVar20[4];
                          }
                          iVar8 = func_0x0eee3000(lVar15,lVar10,uVar32);
                          if (iVar8 == 0) goto LAB_0d081fdf;
                        }
                      }
                      else {
                        if (plVar22 <= plVar29) {
                          if (((ulong)plVar29 | (ulong)plVar22) >> 0x20 == 0) {
                            plVar29 = (long *)(((ulong)plVar29 & 0xffffffff) %
                                              ((ulong)plVar22 & 0xffffffff));
                          }
                          else {
                            plVar29 = (long *)((ulong)plVar29 % (ulong)plVar22);
                          }
                        }
                        plVar16 = plStack_d8;
                        if (plVar29 != plVar12) break;
                      }
                      plVar20 = (long *)*plVar20;
                      plVar16 = plStack_d8;
                    } while (plVar20 != (long *)0x0);
                  }
                }
              }
              plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (plVar20 == (long *)0x0) {
                FUN_0eec74c0(0x30,0);
              }
              uStack_118 = 0;
              *plVar20 = 0;
              plVar20[1] = (long)plVar19;
              uStack_128 = plVar20;
              uStack_120 = plVar16;
              if ((*(byte *)(plVar26 + 8) & 1) == 0) {
                plVar20[4] = plVar26[10];
                lVar10 = plVar26[9];
                plVar20[2] = plVar26[8];
                plVar20[3] = lVar10;
              }
              else {
                func_0x0412e5e0(plVar20 + 2,plVar26[10],plVar26[9]);
              }
              plVar20[5] = (long)plVar26;
              uStack_118 = CONCAT71(uStack_118._1_7_,1);
              if ((long)plVar22 < 0) {
                fVar41 = (float)plVar22;
                fVar40 = *(float *)(param_1 + 0x25);
                if (plVar22 != (long *)0x0) goto LAB_0d0820e6;
LAB_0d0820f7:
                uVar13 = 1;
                if ((long *)0x2 < plVar22) {
                  uVar13 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
                }
                uVar13 = (long)plVar22 * 2 | uVar13;
                fVar40 = (float)func_0x0eee3ab0((float)(param_1[0x24] + 1) / fVar40);
                uVar32 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
                if (uVar32 < uVar13) {
                  uVar32 = uVar13;
                }
                uVar13 = 2;
                if ((uVar32 == 1) || (uVar13 = uVar32, (uVar32 & uVar32 - 1) == 0)) {
                  uVar32 = param_1[0x22];
                  bVar39 = uVar13 < uVar32;
                  if (uVar13 <= uVar32) goto LAB_0d082193;
LAB_0d08216b:
                  func_0x0d08b3e0(plVar16,uVar13);
                }
                else {
                  uVar13 = func_0x0412c3f0();
                  uVar32 = param_1[0x22];
                  bVar39 = uVar13 < uVar32;
                  if (uVar32 < uVar13) goto LAB_0d08216b;
LAB_0d082193:
                  if (bVar39) {
                    fVar40 = (float)func_0x0eee3ab0((float)(ulong)param_1[0x24] /
                                                    *(float *)(param_1 + 0x25));
                    uVar30 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
                    if ((uVar32 < 3) ||
                       (uVar21 = uVar32 - (uVar32 >> 1 & 0x5555555555555555),
                       uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
                       1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                 >> 0x38))) {
                      uVar30 = func_0x0412c3f0(uVar30);
                    }
                    else if (1 < uVar30) {
                      lVar10 = 0x3f;
                      if (uVar30 - 1 != 0) {
                        for (; uVar30 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                        }
                      }
                      uVar30 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
                    }
                    if (uVar13 <= uVar30) {
                      uVar13 = uVar30;
                    }
                    if (uVar13 < uVar32) goto LAB_0d08216b;
                  }
                }
                plVar22 = (long *)param_1[0x22];
                if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                  plVar12 = (long *)((ulong)plVar19 & (long)plVar22 - 1U);
                }
                else {
                  plVar12 = plVar19;
                  if (plVar22 <= plVar19) {
                    if (((ulong)plVar19 | (ulong)plVar22) >> 0x20 == 0) {
                      plVar12 = (long *)(((ulong)plVar19 & 0xffffffff) %
                                        ((ulong)plVar22 & 0xffffffff));
                    }
                    else {
                      plVar12 = (long *)((ulong)plVar19 % (ulong)plVar22);
                    }
                  }
                }
              }
              else {
                fVar41 = (float)(long)plVar22;
                fVar40 = *(float *)(param_1 + 0x25);
                if (plVar22 == (long *)0x0) goto LAB_0d0820f7;
LAB_0d0820e6:
                if (fVar41 * fVar40 < (float)(param_1[0x24] + 1)) goto LAB_0d0820f7;
              }
              lVar10 = *plVar16;
              plVar26 = *(long **)(lVar10 + (long)plVar12 * 8);
              if (plVar26 == (long *)0x0) {
                *plVar20 = *(long *)pbStack_a0;
                *(long **)pbStack_a0 = plVar20;
                *(byte **)(lVar10 + (long)plVar12 * 8) = pbStack_a0;
                if (*plVar20 != 0) {
                  plVar26 = *(long **)(*plVar20 + 8);
                  if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                    *(long **)(lVar10 + ((ulong)plVar26 & (long)plVar22 - 1U) * 8) = plVar20;
                  }
                  else {
                    if (plVar22 <= plVar26) {
                      if (((ulong)plVar26 | (ulong)plVar22) >> 0x20 == 0) {
                        *(long **)(lVar10 + (((ulong)plVar26 & 0xffffffff) %
                                            ((ulong)plVar22 & 0xffffffff)) * 8) = plVar20;
                        goto LAB_0d081722;
                      }
                      plVar26 = (long *)((ulong)plVar26 % (ulong)plVar22);
                    }
                    *(long **)(lVar10 + (long)plVar26 * 8) = plVar20;
                  }
                }
              }
              else {
                *plVar20 = *plVar26;
                *plVar26 = (long)plVar20;
              }
LAB_0d081722:
              param_1[0x24] = param_1[0x24] + 1;
            }
          }
        }
        goto LAB_0d081730;
      }
    }
    goto LAB_0d08166f;
  }
  goto LAB_0d082d7a;
LAB_0d081be8:
  uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)plVar12);
  func_0x0d0793f0(plVar26,plVar16 + 5);
  cVar7 = func_0x0d079930(plVar26,&uStack_128,plVar16 + 5,uStack_d0 & 0xffffffff,0);
  plVar12 = plVar26;
  if ((cVar7 == '\0') && ((extraout_RDX & 1) == 0)) {
    *(int *)(plVar16 + 4) = (int)plVar16[4] + 1;
  }
LAB_0d0819f0:
  uVar32 = uVar32 + 1;
  lVar10 = *(long *)(lVar15 + 0x40);
  uVar13 = *(long *)(lVar15 + 0x48) - lVar10;
  if ((long)(int)(uVar13 >> 3) <= (long)uVar32) goto LAB_0d081c90;
  goto LAB_0d081a13;
LAB_0d081fdf:
  (**(code **)(*plVar26 + 8))();
LAB_0d081730:
  plVar26 = (long *)((long)plStack_e0 + 1);
  lVar10 = plStack_e8[8];
  uVar13 = plStack_e8[9] - lVar10;
  if ((long)(int)(uVar13 >> 3) <= (long)plVar26) goto LAB_0d083007;
  goto LAB_0d08175e;
LAB_0d083007:
  bVar39 = true;
LAB_0d08166f:
  plVar26 = plStack_c8;
  uStack_128 = (long *)&UNK_0143fb13;
  uStack_120 = (long *)0x11;
  plVar12 = (long *)func_0x0d6c9880(plStack_c8 + 1,&uStack_128);
  if ((plVar12 != plVar26 + 2) && (bVar39 && (int)plVar12[0xc] == 9)) {
    plStack_e8 = (long *)((ulong)(plVar12[9] - plVar12[8]) >> 3);
    if (0 < (int)(uint)plStack_e8) {
      plStack_a8 = param_1 + 2;
      plStack_e8 = (long *)(ulong)((uint)plStack_e8 & 0x7fffffff);
      plStack_50 = param_1 + 4;
      plVar26 = (long *)0x0;
      plStack_98 = plVar12;
      do {
        lVar10 = plStack_98[8];
        plStack_e0 = plVar26;
        if ((plVar26 < (long *)(plStack_98[9] - lVar10 >> 3)) &&
           (cVar7 = (**(code **)(**(long **)(lVar10 + (long)plVar26 * 8) + 0x30))(), cVar7 == '\n'))
        {
          lVar10 = *(long *)(lVar10 + (long)plStack_e0 * 8);
        }
        else {
          lVar10 = 0;
        }
        uStack_128 = (long *)&UNK_012f0cac;
        uStack_120 = (long *)0x4;
        lVar15 = lVar10 + 8;
        lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
        lVar10 = lVar10 + 0x10;
        if (lVar14 == lVar10) {
          lVar25 = 0;
        }
        else {
          lVar25 = lVar14 + 0x38;
          if (*(int *)(lVar14 + 0x60) != 8) {
            lVar25 = 0;
          }
        }
        pbVar24 = (byte *)(lVar25 + 8);
        if (lVar25 == 0) {
          pbVar24 = &UNK_01e79d90;
        }
        uStack_128 = (long *)&UNK_01362aa6;
        uStack_120 = (long *)0xd;
        lVar14 = func_0x0d6c97a0(lVar15,&uStack_128);
        if (lVar14 == lVar10) {
          lVar25 = 0;
        }
        else {
          lVar25 = lVar14 + 0x38;
          if (*(int *)(lVar14 + 0x60) != 8) {
            lVar25 = 0;
          }
        }
        puVar36 = (undefined *)(lVar25 + 8);
        if (lVar25 == 0) {
          puVar36 = &UNK_01e79d90;
        }
        lVar14 = func_0x0d08b100(param_1 + 0x21,puVar36);
        if ((lVar14 != 0) && (plStack_d8 = *(long **)(lVar14 + 0x28), plStack_d8 != (long *)0x0)) {
          uStack_128 = (long *)&UNK_014655fb;
          uStack_120 = (long *)0x9;
          lVar15 = func_0x0d6c97a0(lVar15,&uStack_128);
          if ((lVar15 == lVar10) || (*(int *)(lVar15 + 0x60) != 1)) {
            uVar38 = 0;
            uVar37 = 0;
            uVar13 = (ulong)*pbVar24;
            if ((*pbVar24 & 1) != 0) goto LAB_0d08260b;
LAB_0d0825e3:
            uVar32 = uVar13 >> 1;
            uVar37 = uVar38;
          }
          else {
            uVar37 = (uint)*(byte *)(lVar15 + 0x40);
            uVar13 = (ulong)*pbVar24;
            uVar38 = uVar37;
            if ((*pbVar24 & 1) == 0) goto LAB_0d0825e3;
LAB_0d08260b:
            uVar32 = *(ulong *)(pbVar24 + 8);
          }
          if (uVar32 != 0) {
            pbStack_a0 = pbVar24 + 1;
            pbVar34 = pbStack_a0;
            if ((uVar13 & 1) != 0) {
              pbVar34 = *(byte **)(pbVar24 + 0x10);
            }
            uVar32 = FUN_04883620(&uStack_128,pbVar34);
            uVar13 = param_1[3];
            if (uVar13 != 0) {
              uVar30 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
              uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333);
              uVar30 = ((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar30 >> 0x38 < 2) {
                uVar21 = uVar13 - 1 & uVar32;
              }
              else {
                uVar21 = uVar32;
                if (uVar13 <= uVar32) {
                  if ((uVar32 | uVar13) >> 0x20 == 0) {
                    uVar21 = (uVar32 & 0xffffffff) % (uVar13 & 0xffffffff);
                  }
                  else {
                    uVar21 = uVar32 % uVar13;
                  }
                }
              }
              puVar9 = *(undefined8 **)(*plStack_a8 + uVar21 * 8);
              uStack_d0 = uVar21;
              if ((puVar9 != (undefined8 *)0x0) &&
                 (plVar26 = (long *)*puVar9, plVar26 != (long *)0x0)) {
                if ((*pbVar24 & 1) == 0) {
                  uVar31 = (ulong)(*pbVar24 >> 1);
                }
                else {
                  uVar31 = *(ulong *)(pbVar24 + 8);
                  pbStack_a0 = *(byte **)(pbVar24 + 0x10);
                }
                uStack_ac = uVar37;
                if ((byte)(uVar30 >> 0x38) < 2) {
                  do {
                    if (plVar26[1] == uVar32) {
                      bVar33 = *(byte *)(plVar26 + 2);
                      if ((bVar33 & 1) == 0) {
                        uVar30 = (ulong)(bVar33 >> 1);
                      }
                      else {
                        uVar30 = plVar26[3];
                      }
                      if (uVar30 == uVar31) {
                        if ((bVar33 & 1) == 0) {
                          lVar10 = (long)plVar26 + 0x11;
                        }
                        else {
                          lVar10 = plVar26[4];
                        }
                        iVar8 = func_0x0eee3000(lVar10,pbStack_a0,uVar31);
                        uVar21 = uStack_d0;
                        if (iVar8 == 0) goto LAB_0d082b86;
                      }
                    }
                    else {
                      uVar37 = uStack_ac;
                      if ((plVar26[1] & uVar13 - 1) != uVar21) break;
                    }
                    plVar26 = (long *)*plVar26;
                    uVar37 = uStack_ac;
                  } while (plVar26 != (long *)0x0);
                }
                else {
                  do {
                    uVar30 = plVar26[1];
                    if (uVar30 == uVar32) {
                      bVar33 = *(byte *)(plVar26 + 2);
                      if ((bVar33 & 1) == 0) {
                        uVar30 = (ulong)(bVar33 >> 1);
                      }
                      else {
                        uVar30 = plVar26[3];
                      }
                      if (uVar30 == uVar31) {
                        if ((bVar33 & 1) == 0) {
                          lVar10 = (long)plVar26 + 0x11;
                        }
                        else {
                          lVar10 = plVar26[4];
                        }
                        iVar8 = func_0x0eee3000(lVar10,pbStack_a0,uVar31);
                        uVar21 = uStack_d0;
                        if (iVar8 == 0) goto LAB_0d082b86;
                      }
                    }
                    else {
                      if (uVar13 <= uVar30) {
                        if ((uVar30 | uVar13) >> 0x20 == 0) {
                          uVar30 = (uVar30 & 0xffffffff) % (uVar13 & 0xffffffff);
                        }
                        else {
                          uVar30 = uVar30 % uVar13;
                        }
                      }
                      uVar37 = uStack_ac;
                      if (uVar30 != uVar21) break;
                    }
                    plVar26 = (long *)*plVar26;
                    uVar37 = uStack_ac;
                  } while (plVar26 != (long *)0x0);
                }
              }
            }
            plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
            if (plVar26 == (long *)0x0) {
              FUN_0eec74c0(0x38,0);
            }
            uStack_120 = plStack_a8;
            uStack_118 = 0;
            *plVar26 = 0;
            plVar26[1] = uVar32;
            uStack_128 = plVar26;
            if ((*pbVar24 & 1) == 0) {
              plVar26[4] = *(long *)(pbVar24 + 0x10);
              lVar10 = *(long *)(pbVar24 + 8);
              plVar26[2] = *(long *)pbVar24;
              plVar26[3] = lVar10;
            }
            else {
              func_0x0412e5e0(plVar26 + 2,*(undefined8 *)(pbVar24 + 0x10),
                              *(undefined8 *)(pbVar24 + 8));
            }
            plVar26[5] = (long)plStack_d8;
            *(char *)(plVar26 + 6) = (char)uVar37;
            uVar2 = (undefined4)uStack_c0;
            *(undefined4 *)((long)plVar26 + 0x31) = uVar2;
            *(undefined4 *)((long)plVar26 + 0x34) = uStack_c0._3_4_;
            uStack_118 = CONCAT71(uStack_118._1_7_,1);
            if ((long)uVar13 < 0) {
              fVar41 = (float)uVar13;
              fVar40 = *(float *)(param_1 + 6);
              if (uVar13 != 0) goto LAB_0d082977;
LAB_0d082988:
              uVar30 = 1;
              if (2 < uVar13) {
                uVar30 = (ulong)((uVar13 & uVar13 - 1) != 0);
              }
              uVar30 = uVar13 * 2 | uVar30;
              fVar40 = (float)func_0x0eee3ab0((float)(param_1[5] + 1) / fVar40);
              uVar13 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
              if (uVar13 < uVar30) {
                uVar13 = uVar30;
              }
              uVar30 = 2;
              if ((uVar13 == 1) || (uVar30 = uVar13, (uVar13 & uVar13 - 1) == 0)) {
                uVar13 = param_1[3];
                bVar39 = uVar30 < uVar13;
                if (uVar30 <= uVar13) goto LAB_0d082a1f;
LAB_0d0829f5:
                func_0x0d08cfc0(plStack_a8,uVar30);
              }
              else {
                uVar30 = func_0x0412c3f0();
                uVar13 = param_1[3];
                bVar39 = uVar30 < uVar13;
                if (uVar13 < uVar30) goto LAB_0d0829f5;
LAB_0d082a1f:
                if (bVar39) {
                  fVar40 = (float)func_0x0eee3ab0((float)(ulong)param_1[5] / *(float *)(param_1 + 6)
                                                 );
                  uVar21 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
                  if ((uVar13 < 3) ||
                     (uVar31 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
                     uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333),
                     1 < (byte)(((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar21 = func_0x0412c3f0(uVar21);
                  }
                  else if (1 < uVar21) {
                    lVar10 = 0x3f;
                    if (uVar21 - 1 != 0) {
                      for (; uVar21 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                      }
                    }
                    uVar21 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
                  }
                  if (uVar30 <= uVar21) {
                    uVar30 = uVar21;
                  }
                  if (uVar30 < uVar13) goto LAB_0d0829f5;
                }
              }
              uVar13 = param_1[3];
              if ((uVar13 & uVar13 - 1) == 0) {
                uVar30 = uVar32 & uVar13 - 1;
              }
              else {
                uVar30 = uVar32;
                if (uVar13 <= uVar32) {
                  if ((uVar32 | uVar13) >> 0x20 == 0) {
                    uVar30 = (uVar32 & 0xffffffff) % (uVar13 & 0xffffffff);
                  }
                  else {
                    uVar30 = uVar32 % uVar13;
                  }
                }
              }
            }
            else {
              fVar41 = (float)(long)uVar13;
              fVar40 = *(float *)(param_1 + 6);
              if (uVar13 == 0) goto LAB_0d082988;
LAB_0d082977:
              uVar30 = uStack_d0;
              if (fVar41 * fVar40 < (float)(param_1[5] + 1)) goto LAB_0d082988;
            }
            lVar10 = *plStack_a8;
            plVar12 = *(long **)(lVar10 + uVar30 * 8);
            if (plVar12 == (long *)0x0) {
              *plVar26 = *plStack_50;
              *plStack_50 = (long)plVar26;
              *(long **)(lVar10 + uVar30 * 8) = plStack_50;
              if (*plVar26 != 0) {
                uVar32 = *(ulong *)(*plVar26 + 8);
                if ((uVar13 & uVar13 - 1) == 0) {
                  *(long **)(lVar10 + (uVar32 & uVar13 - 1) * 8) = plVar26;
                }
                else {
                  if (uVar13 <= uVar32) {
                    if ((uVar32 | uVar13) >> 0x20 == 0) {
                      *(long **)(lVar10 + ((uVar32 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) =
                           plVar26;
                      goto LAB_0d082b82;
                    }
                    uVar32 = uVar32 % uVar13;
                  }
                  *(long **)(lVar10 + uVar32 * 8) = plVar26;
                }
              }
            }
            else {
              *plVar26 = *plVar12;
              *plVar12 = (long)plVar26;
            }
LAB_0d082b82:
            param_1[5] = param_1[5] + 1;
LAB_0d082b86:
            plVar12 = (long *)param_1[0x49];
            plVar16 = (long *)param_1[0x4a];
            plVar22 = plVar12;
            if (plVar12 == plVar16) {
LAB_0d082bc0:
              if (plVar22 != plVar16) goto LAB_0d082470;
            }
            else {
              do {
                if (*plVar22 == plVar26[5]) goto LAB_0d082bc0;
                plVar22 = plVar22 + 1;
              } while (plVar22 != plVar16);
            }
            if (plVar16 < (long *)param_1[0x4b]) {
              *plVar16 = (long)plStack_d8;
              plVar16 = plVar16 + 1;
            }
            else {
              lVar10 = (long)plVar16 - (long)plVar12;
              uVar13 = (lVar10 >> 3) + 1;
              if (0x1fffffffffffffff < uVar13) goto LAB_0d083034;
              pbStack_a0 = (byte *)((long)param_1[0x4b] - (long)plVar12);
              uVar32 = (long)pbStack_a0 >> 2;
              if ((ulong)((long)pbStack_a0 >> 2) <= uVar13) {
                uVar32 = uVar13;
              }
              if ((byte *)0x7ffffffffffffff7 < pbStack_a0) {
                uVar32 = 0x1fffffffffffffff;
              }
              if (0x1fffffffffffffff < uVar32) goto LAB_0d08302f;
              lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 8);
              if (lVar15 == 0) {
                FUN_0eec74c0(uVar32 * 8,0);
              }
              uStack_d0 = uVar32 * 8 + lVar15;
              *(long **)(lVar15 + lVar10) = plStack_d8;
              plVar16 = (long *)(lVar10 + lVar15 + 8);
              lVar15 = lVar10 + lVar15 + (lVar10 >> 3) * -8;
              func_0x0eee2f00(lVar15,plVar12,lVar10);
              param_1[0x49] = lVar15;
              param_1[0x4a] = plVar16;
              param_1[0x4b] = uStack_d0;
              if (plVar12 != (long *)0x0) {
                func_0x0412a280(plVar12,pbStack_a0);
              }
            }
            param_1[0x4a] = plVar16;
          }
        }
LAB_0d082470:
        plVar26 = (long *)((long)plStack_e0 + 1);
      } while (plVar26 != plStack_e8);
    }
  }
  plVar26 = plStack_c8;
  plStack_c8 = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 8))();
  }
LAB_0d082d7a:
  plVar12 = plStack_58;
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
  }
  *(undefined1 *)(param_1 + 0x45) = 0;
  puVar9 = (undefined8 *)param_1[0x43];
  if ((long *)puVar9[6] == (long *)0x0) {
    func_0x04891200();
LAB_0d08302a:
    func_0x04931450();
LAB_0d08302f:
    func_0x04882eb0();
LAB_0d083034:
    uVar23 = func_0x0d08aab0();
    func_0x0d08b380(&uStack_128);
    plVar26 = plStack_c8;
    if (plStack_c8 == (long *)0x0) goto LAB_0d083248;
    do {
      plStack_c8 = (long *)0x0;
      (**(code **)(*plVar26 + 8))();
      while( true ) {
        if ((uStack_88 & 1) != 0) {
          func_0x0412a280(uStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
        }
        func_0x05cf9f90(puStack_70);
        func_0x05cf9f90(param_1 + 0x53);
        func_0x05cf9f90(param_1 + 0x51);
        func_0x05cf9f90(param_1 + 0x4f);
        lVar10 = param_1[0x49];
        if (lVar10 != 0) {
          param_1[0x4a] = lVar10;
          func_0x0412a280(lVar10,param_1[0x4b] - lVar10);
        }
        func_0x048eeee0(puStack_48);
        func_0x0d083750(puStack_40);
        func_0x0d07a9c0(param_1);
        func_0x0eee2d70(uVar23);
        func_0x0412a280(uStack_118,(ulong)uStack_128 & 0xfffffffffffffffe);
        plVar26 = plStack_c8;
        if (plStack_c8 != (long *)0x0) break;
LAB_0d083248:
        plStack_c8 = (long *)0x0;
      }
    } while( true );
  }
  plStack_e0 = (long *)*puVar9;
  uVar23 = (**(code **)(*(long *)puVar9[6] + 0x30))();
  puVar9[1] = uVar23;
  *puVar9 = plStack_e0;
LAB_0d082de0:
  if ((*plVar12 == 0) &&
     (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014d3c28),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*plVar12 == '\0') &&
     (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014d3c28),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar26 = (long *)(**(code **)(*(long *)plVar12[2] + 0x20))();
  uStack_c0 = (long *)0x0;
  uStack_128 = (long *)&UNK_0f44ba50;
  uStack_120 = (long *)&UNK_0d083390;
  uStack_118 = 0;
  puStack_110 = param_1;
  (**(code **)(*plVar26 + 0x10))(&uStack_88,plVar26,&uStack_128,0,&uStack_c0,0);
  if (uStack_128 != (long *)0x0) {
    (**(code **)((long)uStack_128 + 8))(&uStack_128);
  }
  if (&uStack_88 != puStack_70) {
    if (param_1[0x56] == 0) {
      lVar10 = 0;
    }
    else {
      plVar26 = (long *)FUN_0412c300();
      uStack_120 = plVar26;
      if (plVar26 != (long *)0x0) {
        uStack_128 = *(long **)puStack_70;
        if (uStack_128 != (long *)0x0) {
          (**(code **)(**(long **)((long)uStack_128 + 0x28) + 0x10))();
        }
        LOCK();
        plVar12 = plVar26 + 1;
        lVar10 = *plVar12;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          func_0x0412c2d0(plVar26);
        }
      }
      lVar10 = param_1[0x56];
    }
    uVar6 = uStack_7c;
    uVar5 = uStack_84;
    uVar38 = uStack_88;
    uVar37 = CONCAT13(uStack_7d,CONCAT21(uStack_7f,uStack_80));
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    *puStack_70 = uVar38;
    puStack_70[1] = uVar5;
    puStack_70[2] = uVar37;
    puStack_70[3] = uVar6;
    if (lVar10 != 0) {
      func_0x0412c2d0();
    }
  }
  if (CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT21(uStack_7f,uStack_80))) != 0) {
    plVar26 = (long *)FUN_0412c300();
    uStack_120 = plVar26;
    if (plVar26 != (long *)0x0) {
      uStack_128 = (long *)CONCAT44(uStack_84,uStack_88);
      if (uStack_128 != (long *)0x0) {
        (**(code **)(**(long **)((long)uStack_128 + 0x28) + 0x10))();
      }
      LOCK();
      plVar12 = plVar26 + 1;
      lVar10 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        func_0x0412c2d0(plVar26);
      }
    }
    if (CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT21(uStack_7f,uStack_80))) != 0) {
      func_0x0412c2d0();
    }
  }
  plVar26 = uStack_c0;
  uStack_c0 = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 8))();
  }
  return;
}


