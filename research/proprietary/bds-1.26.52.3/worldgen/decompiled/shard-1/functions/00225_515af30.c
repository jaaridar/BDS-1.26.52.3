/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x525af30 (ELF vaddr 0x515af30)
 * Label: callee-of:0x5188b10
 * Body:  [[0525af30, 0525b065] [0525b070, 0525b0b3] [0525b0c0, 0525b242] [0525b250, 0525b27a] [0525b280, 0525b434] [0525b440, 0525b558] [0525b560, 0525b6e9] [0525b6f0, 0525b732] [0525b740, 0525b769] [0525b770, 0525b82b] [0525b830, 0525ba6e] [0525ba70, 0525bba3] [0525bbb0, 0525bc20] [0525bc30, 0525bc69] [0525bc70, 0525bd56] [0525bd60, 0525bdf1] [0525be00, 0525be52] [0525be60, 0525c019] [0525c020, 0525c15c] [0525c160, 0525c441] [0525c450, 0525c510] [0525c520, 0525c54d] [0525c550, 0525ca8c] [0525ca90, 0525cc48] [0525cc50, 0525cdac] [0525cdb0, 0525cdf8] [0525ce00, 0525d1e4] [0525d274, 0525d2aa]]
 * Ghidra: FUN_0525af30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0525af30(long *param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  char cVar7;
  short sVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  uint uVar32;
  float *pfVar33;
  ulong uVar34;
  long lVar35;
  char cVar36;
  undefined2 uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  ulong *puVar45;
  uint uVar46;
  ulong *puVar47;
  long lVar48;
  long lVar49;
  ulong *puVar50;
  long lVar51;
  int iVar52;
  long lVar53;
  int iVar54;
  long *plVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  bool bVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  int iVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  int iVar69;
  long lVar70;
  ulong *puVar71;
  long lVar72;
  long *plVar73;
  bool bVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  ulong *puStack_160;
  ulong *puStack_150;
  ulong *puStack_110;
  ulong *puStack_e8;
  long *plStack_e0;
  char cStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  float fStack_b4;
  ulong uStack_b0;
  ulong *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  long *plStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((char)param_2[0x17] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  plVar55 = param_2 + 5;
  func_0x0412d550();
  uVar34 = param_2[1];
  bVar59 = true;
  if (uVar34 != 0) {
    uVar24 = (long)(int)*param_3 + 0x9e3779b9;
    uVar24 = (uVar24 >> 2) + 0x9e3779b9 + uVar24 * 0x40 + (long)*(int *)((long)param_3 + 4) ^ uVar24
    ;
    uVar25 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
    uVar25 = ((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar25 >> 0x38 < 2) {
      uVar43 = uVar34 - 1 & uVar24;
    }
    else {
      uVar43 = uVar24;
      if (uVar34 <= uVar24) {
        uVar43 = uVar24 % uVar34;
      }
    }
    plVar73 = *(long **)(*param_2 + uVar43 * 8);
    if ((plVar73 != (long *)0x0) && (plVar73 = (long *)*plVar73, plVar73 != (long *)0x0)) {
      if ((byte)(uVar25 >> 0x38) < 2) {
        do {
          if (plVar73[1] == uVar24) {
            if (plVar73[2] == *param_3) goto LAB_0525b0e1;
          }
          else if ((plVar73[1] & uVar34 - 1) != uVar43) break;
          plVar73 = (long *)*plVar73;
        } while (plVar73 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar73[1];
          if (uVar25 == uVar24) {
            if (plVar73[2] == *param_3) goto LAB_0525b0e1;
          }
          else {
            if (uVar34 <= uVar25) {
              if ((uVar25 | uVar34) >> 0x20 == 0) {
                if ((uVar25 & 0xffffffff) % (uVar34 & 0xffffffff) == uVar43) goto LAB_0525b076;
                break;
              }
              uVar25 = uVar25 % uVar34;
            }
            if (uVar25 != uVar43) break;
          }
LAB_0525b076:
          plVar73 = (long *)*plVar73;
        } while (plVar73 != (long *)0x0);
      }
    }
  }
LAB_0525b0fb:
  func_0x0412d610(plVar55);
  if (!bVar59) {
    return param_1;
  }
  if ((long *)param_2[0x18] == (long *)0x0) {
LAB_0525b3f1:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*(long *)param_2[0x18] + 0x118))(&plStack_e0);
    plStack_78 = plStack_e0;
    if (plStack_e0 == (long *)0x0) goto LAB_0525b3f1;
    lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a00);
    if (lVar26 == 0) {
      func_0x0eec74c0(0x1a00,0);
    }
    memset(lVar26 + 0xdc,0,0x5a4);
    func_0x0525eca0(lVar26);
    memset(lVar26 + 0x75c,0,0x5a4);
    func_0x0525eca0(lVar26 + 0x680);
    memset(lVar26 + 0xddc,0,0x5a4);
    func_0x0525eca0(lVar26 + 0xd00);
    memset(lVar26 + 0x145c,0,0x5a4);
    func_0x0525eca0(lVar26 + 0x1380);
    puStack_160 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe10);
    if (puStack_160 == (ulong *)0x0) {
      func_0x0eec74c0(0xe10,0);
    }
    puStack_110 = puStack_160 + 0x1c2;
    uVar38 = 0xfffffff9;
    puVar71 = puStack_160;
    plStack_c0 = param_2;
    do {
      iVar52 = (int)*param_3 + uVar38;
      iVar54 = uVar38 * uVar38;
      uVar38 = uVar38 + 1;
      puVar50 = (ulong *)0xfffffff9;
      do {
        puVar47 = puVar50;
        iVar69 = (int)puVar47;
        uVar56 = iVar69 + 1;
        if ((uint)(iVar69 * iVar69 + iVar54) < 0x41) {
          bVar59 = uVar56 < 3 && uVar38 < 3;
          puVar47 = (ulong *)CONCAT44(iVar69 + *(int *)((long)param_3 + 4),iVar52);
          if (puStack_110 <= puStack_160) {
            lVar70 = (long)puStack_160 - (long)puVar71;
            uVar34 = (lVar70 >> 4) + 1;
            puStack_150 = puVar71;
            if (uVar34 < 0x1000000000000000) {
              uVar25 = (long)puStack_110 - (long)puVar71;
              uVar24 = (long)uVar25 >> 3;
              if ((ulong)((long)uVar25 >> 3) <= uVar34) {
                uVar24 = uVar34;
              }
              if (0x7fffffffffffffef < uVar25) {
                uVar24 = 0xfffffffffffffff;
              }
              if (uVar24 < 0x1000000000000000) {
                lVar67 = uVar24 * 0x10;
                lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar67);
                if (lVar27 == 0) {
                  func_0x0eec74c0(lVar67,0);
                }
                *(ulong **)(lVar27 + lVar70) = puVar47;
                *(bool *)(lVar27 + 8 + lVar70) = bVar59;
                puVar47 = (ulong *)(lVar27 + lVar70 + (lVar70 >> 4) * -0x10);
                puVar50 = puVar47;
                for (puVar45 = puVar71; puVar45 != puStack_160; puVar45 = puVar45 + 2) {
                  uVar20 = *(undefined4 *)((long)puVar45 + 4);
                  uVar34 = puVar45[1];
                  uVar21 = *(undefined4 *)((long)puVar45 + 0xc);
                  *(int *)puVar50 = (int)*puVar45;
                  *(undefined4 *)((long)puVar50 + 4) = uVar20;
                  *(int *)(puVar50 + 1) = (int)uVar34;
                  *(undefined4 *)((long)puVar50 + 0xc) = uVar21;
                  puVar50 = puVar50 + 2;
                }
                puStack_110 = (ulong *)(lVar27 + lVar67);
                func_0x0412a280(puVar71,uVar25);
                puStack_160 = (ulong *)(lVar27 + lVar70 + 0x10);
                param_2 = plStack_c0;
                puVar71 = puVar47;
                goto LAB_0525b28b;
              }
              func_0x04882eb0();
            }
            func_0x0525f050();
            goto LAB_0525d1a4;
          }
          *puStack_160 = (ulong)puVar47;
          *(bool *)(puStack_160 + 1) = bVar59;
          puStack_160 = puStack_160 + 2;
        }
LAB_0525b28b:
        puVar50 = (ulong *)(ulong)uVar56;
      } while (uVar56 != 8);
    } while (uVar38 != 8);
    if (puVar71 == puStack_160) {
LAB_0525cacf:
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lStack_a0 = lVar26 + 0xde;
      puStack_80 = (ulong *)(lVar26 + 0xb4);
      uVar34 = 0;
      plVar73 = (long *)0x0;
      do {
        puStack_150 = puVar71;
        if ((long *)plStack_78[0xc] == (long *)0x0) {
          func_0x04891200();
          goto LAB_0525d1cb;
        }
        puStack_a8 = puVar71 + uVar34 * 2;
        uStack_b0 = uVar34;
        (**(code **)(*(long *)plStack_78[0xc] + 0x30))(&plStack_98);
        plVar30 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          uVar34 = puStack_a8[1];
          uStack_d0 = (ulong)(uint)((int)*puStack_a8 << 2);
          uVar38 = *(int *)((long)puStack_a8 + 4) * 4;
          plVar73 = (long *)(ulong)uVar38;
          uStack_70 = (ulong)(uint)((int)*param_3 << 2);
          uStack_48 = (ulong)(uint)(*(int *)((long)param_3 + 4) << 2);
          plStack_c8 = plStack_90 + 0x67;
          puVar50 = (ulong *)(plStack_90 + 0x37);
          plStack_58 = plStack_90 + 7;
          lVar27 = 0;
          puVar45 = puStack_80;
          plVar29 = param_1;
          lVar70 = lVar26;
          fVar76 = _DAT_011986e8;
          fVar78 = _DAT_011987f4;
          fVar82 = _DAT_011984a4;
          fVar83 = _DAT_01198634;
          fVar84 = _DAT_011983f0;
          fVar85 = _DAT_01198858;
          do {
            fVar86 = (float)((int)uStack_70 + (int)lVar27);
            lStack_40 = lVar26 + lVar27 * 0x680;
            lStack_50 = lVar27 * 0x680 + lStack_a0;
            lVar67 = 0;
            puStack_e8 = puVar45;
            fStack_b4 = fVar86;
            lStack_68 = lVar27;
            lStack_60 = lVar70;
            do {
              lStack_38 = lVar67 * 0x1a0;
              lVar27 = lStack_40 + lStack_38;
              pfVar33 = (float *)(lStack_40 + lStack_38);
              uVar32 = 0;
              uVar41 = 0;
              uVar56 = 0;
              fVar75 = fVar78;
              do {
                fVar77 = (float)(int)((int)uStack_d0 + uVar32) - fVar86;
                uVar24 = (ulong)(uVar32 + 7);
                uVar39 = -uVar32;
                uVar57 = 0;
                do {
                  if (uVar32 == 4) {
                    sVar8 = *(short *)((long)plVar30 + (ulong)(0xf - uVar57) * 2 + 0x12);
joined_r0x0525b91c:
                    if ((sVar8 != 0x7fff) &&
                       (fVar80 = (float)(int)(uVar57 + uVar38) -
                                 (float)((int)uStack_48 + (int)lVar67),
                       fVar80 = fVar80 * fVar80 + fVar77 * fVar77, fVar80 <= fVar82)) {
                      if ((fVar80 <= fVar83) && ((char)uVar34 != '\0')) {
                        uVar46 = uVar39;
                        if (uVar32 == 0) {
                          uVar46 = uVar57;
                        }
                        uVar25 = (ulong)(uVar46 + 3);
                        if (uVar57 == 4) {
                          uVar25 = uVar24;
                        }
                        if (uVar32 == 4) {
                          uVar25 = (ulong)(0xf - uVar57);
LAB_0525b80a:
                          plVar1 = plStack_c8 + uVar25 * 3;
                          if (*plVar1 != plVar1[1]) {
                            lVar61 = 0;
                            do {
                              lVar62 = *plVar1;
                              if (lVar62 != plVar1[1]) {
                                iVar69 = (int)(short)param_2[0x19] >> 0x1f;
                                iVar54 = iVar69 - (short)param_2[0x19];
                                iVar52 = iVar54 + 7;
                                if (-1 < iVar54) {
                                  iVar52 = iVar54;
                                }
                                plVar29 = (long *)(ulong)(uint)(iVar52 >> 3);
                                iVar54 = (int)plVar30[1] >> 0x1f;
                                iVar40 = iVar54 - (int)plVar30[1];
                                uVar46 = -iVar54;
                                iVar54 = iVar40 + 7;
                                if (-1 < iVar40) {
                                  iVar54 = iVar40;
                                }
                                uVar25 = (ulong)(int)((iVar69 - (iVar52 >> 3)) +
                                                      (iVar54 >> 3) + uVar46 + (int)lVar61);
                                puVar47 = (ulong *)(ulong)uVar46;
                                param_2 = plStack_c0;
                                if ((uVar25 < (ulong)(plVar1[1] - lVar62)) &&
                                   (cVar7 = *(char *)(lVar62 + uVar25), cVar7 != '\x7f')) {
                                  cVar36 = *(char *)((long)puStack_e8 + lVar61);
                                  if (*(char *)((long)puStack_e8 + lVar61) == '\x7f') {
                                    cVar36 = '\0';
                                  }
                                  *(char *)((long)puStack_e8 + lVar61) = cVar36 + cVar7;
                                  puVar47 = puStack_e8;
                                }
                              }
                              lVar61 = lVar61 + 1;
                            } while (lVar61 != 0x29);
                          }
                        }
                        else if (((uVar57 == 4) || (uVar32 == 0)) || (uVar57 == 0))
                        goto LAB_0525b80a;
                        *(undefined1 *)(lVar27 + 0x19e) = 1;
                      }
                      if (*(char *)(lVar27 + 0x19f) == '\0') {
                        if (fVar80 < fVar75) {
                          uVar56 = uVar32;
                          uVar41 = uVar57;
                        }
                        if (uVar32 != 4) {
                          uVar25 = uVar24;
                          if (uVar57 == 4) goto LAB_0525b945;
                          if (uVar32 == 0) {
                            uVar25 = (ulong)(uVar57 + 3);
                            goto LAB_0525b945;
                          }
                          uVar25 = (ulong)(3 - uVar32);
                          if (uVar57 == 0) goto LAB_0525b945;
LAB_0525cfb3:
                          uVar34 = func_0x04890760();
                          goto LAB_0525cfb8;
                        }
                        uVar25 = (ulong)(0xf - uVar57);
LAB_0525b945:
                        fVar79 = fVar80;
                        if (fVar75 <= fVar80) {
                          fVar79 = fVar75;
                        }
                        sVar8 = *(short *)((long)plVar30 + uVar25 * 2 + 0x12);
                        fVar75 = fVar79;
                        if (fVar80 <= fVar76) {
                          if (sVar8 == 0x7fff) goto LAB_0525cfb3;
                          pfVar33[1] = (float)(int)sVar8;
                          *(undefined1 *)((long)pfVar33 + 0x19f) = 1;
                          iVar69 = (int)(short)param_2[0x19] >> 0x1f;
                          iVar54 = iVar69 - (short)param_2[0x19];
                          iVar52 = iVar54 + 7;
                          if (-1 < iVar54) {
                            iVar52 = iVar54;
                          }
                          iVar40 = (int)plVar30[1] >> 0x1f;
                          iVar64 = iVar40 - (int)plVar30[1];
                          iVar54 = iVar64 + 7;
                          if (-1 < iVar64) {
                            iVar54 = iVar64;
                          }
                          fVar80 = fVar84;
                          if (((uVar32 == 4) || (uVar57 == 4)) || ((uVar32 == 0 || (uVar57 == 0))))
                          {
                            uVar46 = uVar39;
                            if (uVar32 == 0) {
                              uVar46 = uVar57;
                            }
                            uVar25 = (ulong)(uVar46 + 3);
                            if (uVar57 == 4) {
                              uVar25 = uVar24;
                            }
                            if (uVar32 == 4) {
                              uVar25 = (ulong)(0xf - uVar57);
                            }
                            uVar43 = puVar50[uVar25 * 3];
                            plVar29 = (long *)0x0;
                            puVar47 = puVar50;
                            if (plVar30[uVar25 * 3 + 0x38] - uVar43 != 0) {
                              plVar29 = (long *)((long)(plVar30[uVar25 * 3 + 0x38] - uVar43) >> 2);
                              iVar40 = ((iVar69 + (iVar54 >> 3)) - (iVar52 >> 3)) - iVar40;
                              lVar61 = 0x14;
                              while( true ) {
                                if ((long *)(long)iVar40 < plVar29) {
                                  fVar79 = *(float *)(uVar43 + (long)iVar40 * 4);
                                  if ((fVar79 != fVar78) || (NAN(fVar79) || NAN(fVar78))) {
                                    *(float *)(lVar70 + -4 + lVar61) = fVar79;
                                  }
                                }
                                if (lVar61 == 0xb4) break;
                                if ((long *)(long)(iVar40 + 1) < plVar29) {
                                  fVar79 = *(float *)(uVar43 + (long)(iVar40 + 1) * 4);
                                  if ((fVar79 != fVar78) || (NAN(fVar79) || NAN(fVar78))) {
                                    *(float *)(lVar70 + lVar61) = fVar79;
                                  }
                                }
                                lVar61 = lVar61 + 8;
                                iVar40 = iVar40 + 2;
                              }
                            }
                          }
                        }
                        else {
                          if (sVar8 == 0x7fff) goto LAB_0525cfb3;
                          fVar79 = fVar84 / (fVar80 * fVar80);
                          pfVar33[1] = (float)(int)sVar8 * fVar79 + pfVar33[1];
                          pfVar33[2] = pfVar33[2] + fVar79;
                          if ((fVar85 <= fVar80) || ((char)uVar34 == '\0')) goto LAB_0525b743;
                          iVar69 = (int)(short)param_2[0x19] >> 0x1f;
                          iVar54 = iVar69 - (short)param_2[0x19];
                          iVar52 = iVar54 + 7;
                          if (-1 < iVar54) {
                            iVar52 = iVar54;
                          }
                          iVar54 = (int)plVar30[1] >> 0x1f;
                          uVar42 = iVar54 - (int)plVar30[1];
                          uVar46 = uVar42 + 7;
                          if (-1 < (int)uVar42) {
                            uVar46 = uVar42;
                          }
                          plVar29 = (long *)(ulong)uVar46;
                          if ((((uVar32 == 4) || (uVar57 == 4)) || (uVar32 == 0)) || (uVar57 == 0))
                          {
                            uVar42 = uVar39;
                            if (uVar32 == 0) {
                              uVar42 = uVar57;
                            }
                            uVar25 = (ulong)(uVar42 + 3);
                            if (uVar57 == 4) {
                              uVar25 = uVar24;
                            }
                            if (uVar32 == 4) {
                              uVar25 = (ulong)(0xf - uVar57);
                            }
                            uVar43 = puVar50[uVar25 * 3];
                            lVar61 = plVar30[uVar25 * 3 + 0x38] - uVar43;
                            if (lVar61 != 0) {
                              uVar46 = ((int)uVar46 >> 3) - iVar54;
                              plVar29 = (long *)(ulong)uVar46;
                              lVar62 = 0;
                              do {
                                uVar25 = (ulong)(int)((iVar69 - (iVar52 >> 3)) + uVar46 +
                                                     (int)lVar62);
                                if (uVar25 < (ulong)(lVar61 >> 2)) {
                                  fVar80 = *(float *)(uVar43 + uVar25 * 4);
                                  if ((fVar80 != fVar78) || (NAN(fVar80) || NAN(fVar78))) {
                                    fVar5 = *(float *)(lVar70 + 0x10 + lVar62 * 4);
                                    uVar42 = -(uint)(fVar5 != fVar78);
                                    *(uint *)(lVar70 + 0x10 + lVar62 * 4) =
                                         ~uVar42 & (uint)(fVar80 * fVar79) |
                                         (uint)(fVar80 * fVar79 + fVar5) & uVar42;
                                  }
                                }
                                lVar62 = lVar62 + 1;
                              } while (lVar62 != 0x29);
                            }
                          }
                          fVar80 = fVar79 + *(float *)(lVar27 + 0xc);
                        }
                        *(float *)(lVar27 + 0xc) = fVar80;
                      }
                    }
                  }
                  else {
                    uVar25 = uVar24;
                    if (uVar57 == 4) {
LAB_0525b790:
                      sVar8 = *(short *)((long)plVar30 + uVar25 * 2 + 0x12);
                      goto joined_r0x0525b91c;
                    }
                    if (uVar32 == 0) {
                      sVar8 = *(short *)((long)plVar30 + (ulong)(uVar57 + 3) * 2 + 0x12);
                      goto joined_r0x0525b91c;
                    }
                    uVar25 = (ulong)(3 - uVar32);
                    if (uVar57 == 0) goto LAB_0525b790;
                  }
LAB_0525b743:
                  uVar57 = uVar57 + 1;
                } while (uVar57 != 5);
                uVar32 = uVar32 + 1;
              } while (uVar32 != 5);
              if (fVar75 < fVar78) {
                if (fVar75 < _DAT_011983fc) {
                  fVar75 = (float)func_0x0eee37f0();
                  fVar76 = _DAT_011986e8;
                  fVar78 = _DAT_011987f4;
                  fVar82 = _DAT_011984a4;
                  fVar83 = _DAT_01198634;
                  fVar84 = _DAT_011983f0;
                  fVar85 = _DAT_01198858;
                  fVar86 = fStack_b4;
                  if (fVar75 < *pfVar33) goto LAB_0525bcd5;
                }
                else {
                  fVar75 = SQRT(fVar75);
                  if (fVar75 < *pfVar33) {
LAB_0525bcd5:
                    if (uVar41 < 5 && uVar56 < 5) {
                      bVar59 = uVar41 == 4;
                      uVar32 = uVar41 + 3;
                      if (bVar59) {
                        uVar32 = uVar56 + 7;
                      }
                      bVar74 = uVar56 == 4;
                      if (bVar74) {
                        uVar32 = 0xf - uVar41;
                      }
                      if ((!bVar74 && !bVar59) && uVar56 != 0) {
                        uVar32 = 3 - uVar56;
                      }
                      if (uVar41 != 0 && ((!bVar74 && !bVar59) && uVar56 != 0)) goto LAB_0525b5f7;
                      lVar27 = 0;
                      do {
                        lVar61 = plStack_58[(ulong)uVar32 * 3];
                        lVar62 = (plStack_58 + (ulong)uVar32 * 3)[1];
                        uVar37 = 0xffff;
                        if (lVar61 != lVar62) {
                          iVar54 = (int)(short)param_2[0x19] >> 0x1f;
                          iVar69 = iVar54 - (short)param_2[0x19];
                          iVar52 = iVar69 + 3;
                          if (-1 < iVar69) {
                            iVar52 = iVar69;
                          }
                          iVar40 = (int)plVar30[1] >> 0x1f;
                          iVar64 = iVar40 - (int)plVar30[1];
                          iVar69 = iVar64 + 3;
                          if (-1 < iVar64) {
                            iVar69 = iVar64;
                          }
                          uVar56 = (iVar69 >> 2) - iVar40;
                          puVar47 = (ulong *)(ulong)uVar56;
                          uVar24 = (ulong)(int)((iVar54 - (iVar52 >> 2)) + uVar56 + (int)lVar27);
                          if (uVar24 < (ulong)(lVar62 - lVar61 >> 1)) {
                            uVar37 = *(undefined2 *)(lVar61 + uVar24 * 2);
                          }
                        }
                        *(undefined2 *)(lVar70 + 0xde + lVar27 * 2) = uVar37;
                        lVar27 = lVar27 + 1;
                      } while (lVar27 != 0x60);
                    }
                    else {
LAB_0525b5f7:
                      puVar4 = (undefined4 *)(lStack_50 + 0xb0 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0xa0 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x90 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x80 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x70 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x60 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x50 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x40 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x30 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x20 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x10 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                    }
                    *pfVar33 = fVar75;
                  }
                }
              }
              lVar67 = lVar67 + 1;
              puStack_e8 = puStack_e8 + 0x34;
              lVar70 = lVar70 + 0x1a0;
            } while (lVar67 != 4);
            lVar27 = lStack_68 + 1;
            puVar45 = puVar45 + 0xd0;
            lVar70 = lStack_60 + 0x680;
          } while (lVar27 != 4);
          plVar73 = (long *)CONCAT71((uint7)(uint3)(uVar38 >> 8),1);
        }
        puVar47 = puStack_88;
        if ((char)plStack_98 == '\x01') {
          uVar34 = *puStack_a8;
          uVar24 = puStack_a8[1];
          *puStack_a8 = puStack_160[-2];
          *(char *)(puStack_a8 + 1) = (char)puStack_160[-1];
          puStack_160[-2] = uVar34;
          *(char *)(puStack_160 + -1) = (char)uVar24;
          puStack_160 = puStack_160 + -2;
          uVar34 = uStack_b0;
        }
        else {
          uVar34 = uStack_b0 + 1;
        }
        if ((ulong)((long)puStack_160 - (long)puVar71 >> 4) <= uVar34) {
          uVar34 = 0;
        }
        if (puStack_88 != (ulong *)0x0) {
          LOCK();
          puVar50 = puStack_88 + 1;
          uVar24 = *puVar50;
          *puVar50 = *puVar50 - 1;
          UNLOCK();
          if (uVar24 == 0) {
            (**(code **)(*puStack_88 + 0x10))(puStack_88);
            func_0x0412c2d0(puVar47);
          }
        }
      } while (puVar71 != puStack_160);
      puStack_160 = puVar71;
      if (((ulong)plVar73 & 1) == 0) goto LAB_0525cacf;
      lVar70 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1980);
      if (lVar70 == 0) {
LAB_0525d1a4:
        func_0x0eec74c0(0x1980,0);
      }
      lVar48 = 0;
      memset(lVar70 + 0x194,0,0x4cc);
      func_0x0525f060(lVar70);
      memset(lVar70 + 0x7f4,0,0x4cc);
      func_0x0525f060(lVar70 + 0x660);
      memset(lVar70 + 0xe54,0,0x4cc);
      func_0x0525f060(lVar70 + 0xcc0);
      memset(lVar70 + 0x14b4,0,0x4cc);
      func_0x0525f060(lVar70 + 0x1320);
      fVar84 = _UNK_014e223c;
      fVar83 = _UNK_014e2238;
      fVar82 = _UNK_014e2234;
      uVar20 = _DAT_014e2230;
      fVar78 = _DAT_011987f4;
      fVar76 = _DAT_011986e8;
      plStack_c8 = (long *)(lVar70 + 0xac);
      uStack_d0 = lVar26 + 0x67e;
      lVar61 = lVar70 + 0xb6;
      lVar62 = lVar26 + 0xe8;
      lVar68 = lVar70 + 0x16c;
      lVar65 = lVar26 + 0xb4;
      lVar27 = lVar26 + 0x18;
      lVar67 = lVar70 + 0x10;
      do {
        lVar44 = lVar48 * 0x660;
        lVar35 = lVar48 * 0x680;
        bVar59 = (ulong)(lVar70 + 8 + lVar44) < (ulong)(lVar26 + 0x594 + lVar35);
        bVar74 = lVar26 + lVar35 + 0x10U < (ulong)(lVar70 + 0x574 + lVar44);
        lVar49 = 0;
        lVar51 = lVar67;
        lVar58 = lVar61;
        lVar60 = lVar62;
        lVar63 = lVar68;
        lVar66 = lVar65;
        lVar72 = lVar27;
        do {
          lVar2 = lVar44 + lVar70 + lVar49 * 0x198;
          lVar3 = lVar35 + lVar26 + lVar49 * 0x1a0;
          *(undefined4 *)(lVar44 + lVar70 + lVar49 * 0x198) =
               *(undefined4 *)(lVar35 + lVar26 + lVar49 * 0x1a0);
          if ((ulong)(lStack_a0 + lVar35) < (ulong)(lVar70 + 0x634 + lVar44) &&
              plStack_c8 + lVar48 * 0xcc < (long *)(uStack_d0 + lVar35)) {
            lVar53 = 0;
            do {
              *(undefined2 *)(lVar58 + -10 + lVar53 * 2) =
                   *(undefined2 *)(lVar60 + -10 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -8 + lVar53 * 2) = *(undefined2 *)(lVar60 + -8 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -6 + lVar53 * 2) = *(undefined2 *)(lVar60 + -6 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -4 + lVar53 * 2) = *(undefined2 *)(lVar60 + -4 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -2 + lVar53 * 2) = *(undefined2 *)(lVar60 + -2 + lVar53 * 2);
              *(undefined2 *)(lVar58 + lVar53 * 2) = *(undefined2 *)(lVar60 + lVar53 * 2);
              lVar53 = lVar53 + 6;
            } while (lVar53 != 0x60);
            cVar7 = *(char *)(lVar3 + 0x19e);
          }
          else {
            uVar31 = *(undefined8 *)(lVar3 + 0xe6);
            uVar22 = *(undefined8 *)(lVar3 + 0xee);
            uVar23 = *(undefined8 *)(lVar3 + 0xf6);
            *(undefined8 *)(lVar2 + 0xac) = *(undefined8 *)(lVar3 + 0xde);
            *(undefined8 *)(lVar2 + 0xb4) = uVar31;
            *(undefined8 *)(lVar2 + 0xbc) = uVar22;
            *(undefined8 *)(lVar2 + 0xc4) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x106);
            uVar22 = *(undefined8 *)(lVar3 + 0x10e);
            uVar23 = *(undefined8 *)(lVar3 + 0x116);
            *(undefined8 *)(lVar2 + 0xcc) = *(undefined8 *)(lVar3 + 0xfe);
            *(undefined8 *)(lVar2 + 0xd4) = uVar31;
            *(undefined8 *)(lVar2 + 0xdc) = uVar22;
            *(undefined8 *)(lVar2 + 0xe4) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x126);
            uVar22 = *(undefined8 *)(lVar3 + 0x12e);
            uVar23 = *(undefined8 *)(lVar3 + 0x136);
            *(undefined8 *)(lVar2 + 0xec) = *(undefined8 *)(lVar3 + 0x11e);
            *(undefined8 *)(lVar2 + 0xf4) = uVar31;
            *(undefined8 *)(lVar2 + 0xfc) = uVar22;
            *(undefined8 *)(lVar2 + 0x104) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x146);
            uVar22 = *(undefined8 *)(lVar3 + 0x14e);
            uVar23 = *(undefined8 *)(lVar3 + 0x156);
            *(undefined8 *)(lVar2 + 0x10c) = *(undefined8 *)(lVar3 + 0x13e);
            *(undefined8 *)(lVar2 + 0x114) = uVar31;
            *(undefined8 *)(lVar2 + 0x11c) = uVar22;
            *(undefined8 *)(lVar2 + 0x124) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x166);
            uVar22 = *(undefined8 *)(lVar3 + 0x16e);
            uVar23 = *(undefined8 *)(lVar3 + 0x176);
            *(undefined8 *)(lVar2 + 300) = *(undefined8 *)(lVar3 + 0x15e);
            *(undefined8 *)(lVar2 + 0x134) = uVar31;
            *(undefined8 *)(lVar2 + 0x13c) = uVar22;
            *(undefined8 *)(lVar2 + 0x144) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x186);
            uVar22 = *(undefined8 *)(lVar3 + 0x18e);
            uVar23 = *(undefined8 *)(lVar3 + 0x196);
            *(undefined8 *)(lVar2 + 0x14c) = *(undefined8 *)(lVar3 + 0x17e);
            *(undefined8 *)(lVar2 + 0x154) = uVar31;
            *(undefined8 *)(lVar2 + 0x15c) = uVar22;
            *(undefined8 *)(lVar2 + 0x164) = uVar23;
            cVar7 = *(char *)(lVar3 + 0x19e);
          }
          if (cVar7 == '\x01') {
            lVar53 = 0;
            do {
              cVar7 = *(char *)(lVar66 + lVar53);
              if (cVar7 != '\x7f') {
                if (cVar7 < '\x01') {
                  if (cVar7 < '\0') {
                    *(undefined1 *)(lVar63 + lVar53) = 0xff;
                  }
                  else {
                    *(undefined1 *)(lVar63 + lVar53) = 0;
                  }
                }
                else {
                  *(undefined1 *)(lVar63 + lVar53) = 1;
                }
              }
              lVar53 = lVar53 + 1;
            } while (lVar53 != 0x29);
          }
          if (*(char *)(lVar3 + 0x19f) == '\x01') {
            *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(lVar3 + 4);
            *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar3 + 0x10);
            *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar3 + 0x14);
            *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x18);
            *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar3 + 0x1c);
            *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x20);
            *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar3 + 0x24);
            *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar3 + 0x28);
            *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar3 + 0x2c);
            *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x30);
            *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar3 + 0x34);
            *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar3 + 0x38);
            *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar3 + 0x3c);
            *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x40);
            *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar3 + 0x44);
            *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar3 + 0x48);
            *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar3 + 0x4c);
            *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar3 + 0x50);
            *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar3 + 0x54);
            *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar3 + 0x58);
            *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar3 + 0x5c);
            *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar3 + 0x60);
            *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(lVar3 + 100);
            *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(lVar3 + 0x68);
            *(undefined4 *)(lVar2 + 100) = *(undefined4 *)(lVar3 + 0x6c);
            *(undefined4 *)(lVar2 + 0x68) = *(undefined4 *)(lVar3 + 0x70);
            *(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(lVar3 + 0x74);
            *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(lVar3 + 0x78);
            *(undefined4 *)(lVar2 + 0x74) = *(undefined4 *)(lVar3 + 0x7c);
            *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar3 + 0x80);
            *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(lVar3 + 0x84);
            *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(lVar3 + 0x88);
            *(undefined4 *)(lVar2 + 0x84) = *(undefined4 *)(lVar3 + 0x8c);
            *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(lVar3 + 0x90);
            *(undefined4 *)(lVar2 + 0x8c) = *(undefined4 *)(lVar3 + 0x94);
            *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(lVar3 + 0x98);
            *(undefined4 *)(lVar2 + 0x94) = *(undefined4 *)(lVar3 + 0x9c);
            *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(lVar3 + 0xa0);
            *(undefined4 *)(lVar2 + 0x9c) = *(undefined4 *)(lVar3 + 0xa4);
            *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(lVar3 + 0xa8);
            *(undefined4 *)(lVar2 + 0xa4) = *(undefined4 *)(lVar3 + 0xac);
            *(undefined4 *)(lVar2 + 0xa8) = *(undefined4 *)(lVar3 + 0xb0);
          }
          else {
            if (fVar76 < *(float *)(lVar3 + 8)) {
              *(float *)(lVar2 + 4) = *(float *)(lVar3 + 4) / *(float *)(lVar3 + 8);
            }
            fVar85 = *(float *)(lVar3 + 0xc);
            if (fVar76 < fVar85) {
              *(undefined4 *)(lVar2 + 8) = uVar20;
              *(float *)(lVar2 + 0xc) = fVar82;
              *(float *)(lVar2 + 0x10) = fVar83;
              *(float *)(lVar2 + 0x14) = fVar84;
              *(undefined4 *)(lVar2 + 0x18) = uVar20;
              *(float *)(lVar2 + 0x1c) = fVar82;
              *(float *)(lVar2 + 0x20) = fVar83;
              *(float *)(lVar2 + 0x24) = fVar84;
              *(undefined4 *)(lVar2 + 0x28) = uVar20;
              *(float *)(lVar2 + 0x2c) = fVar82;
              *(float *)(lVar2 + 0x30) = fVar83;
              *(float *)(lVar2 + 0x34) = fVar84;
              *(undefined4 *)(lVar2 + 0x38) = uVar20;
              *(float *)(lVar2 + 0x3c) = fVar82;
              *(float *)(lVar2 + 0x40) = fVar83;
              *(float *)(lVar2 + 0x44) = fVar84;
              *(undefined4 *)(lVar2 + 0x48) = uVar20;
              *(float *)(lVar2 + 0x4c) = fVar82;
              *(float *)(lVar2 + 0x50) = fVar83;
              *(float *)(lVar2 + 0x54) = fVar84;
              *(undefined4 *)(lVar2 + 0x58) = uVar20;
              *(float *)(lVar2 + 0x5c) = fVar82;
              *(float *)(lVar2 + 0x60) = fVar83;
              *(float *)(lVar2 + 100) = fVar84;
              *(undefined4 *)(lVar2 + 0x68) = uVar20;
              *(float *)(lVar2 + 0x6c) = fVar82;
              *(float *)(lVar2 + 0x70) = fVar83;
              *(float *)(lVar2 + 0x74) = fVar84;
              *(undefined4 *)(lVar2 + 0x78) = uVar20;
              *(float *)(lVar2 + 0x7c) = fVar82;
              *(float *)(lVar2 + 0x80) = fVar83;
              *(float *)(lVar2 + 0x84) = fVar84;
              *(undefined4 *)(lVar2 + 0x88) = uVar20;
              *(float *)(lVar2 + 0x8c) = fVar82;
              *(float *)(lVar2 + 0x90) = fVar83;
              *(float *)(lVar2 + 0x94) = fVar84;
              *(undefined4 *)(lVar2 + 0x98) = uVar20;
              *(float *)(lVar2 + 0x9c) = fVar82;
              *(float *)(lVar2 + 0xa0) = fVar83;
              *(float *)(lVar2 + 0xa4) = fVar84;
              *(undefined4 *)(lVar2 + 0xa8) = 0x7f7fffff;
              if (bVar74 && bVar59) {
                lVar53 = 0;
                fVar86 = *(float *)(lVar3 + 0x10);
                if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) goto LAB_0525ca78;
              }
              else {
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x10);
                auVar81._4_4_ = fVar85;
                auVar81._0_4_ = fVar85;
                auVar81._8_4_ = fVar85;
                auVar81._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar81);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 8) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0xc) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x10) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x14) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x20);
                auVar11._4_4_ = fVar85;
                auVar11._0_4_ = fVar85;
                auVar11._8_4_ = fVar85;
                auVar11._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar11);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x18) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x1c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x20) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x24) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x30);
                auVar12._4_4_ = fVar85;
                auVar12._0_4_ = fVar85;
                auVar12._8_4_ = fVar85;
                auVar12._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar12);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x28) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x2c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x30) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x34) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x40);
                auVar13._4_4_ = fVar85;
                auVar13._0_4_ = fVar85;
                auVar13._8_4_ = fVar85;
                auVar13._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar13);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x38) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x3c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x40) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x44) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x50);
                auVar14._4_4_ = fVar85;
                auVar14._0_4_ = fVar85;
                auVar14._8_4_ = fVar85;
                auVar14._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar14);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x48) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x4c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x50) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x54) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x60);
                auVar15._4_4_ = fVar85;
                auVar15._0_4_ = fVar85;
                auVar15._8_4_ = fVar85;
                auVar15._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar15);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x58) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x5c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x60) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 100) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x70);
                auVar16._4_4_ = fVar85;
                auVar16._0_4_ = fVar85;
                auVar16._8_4_ = fVar85;
                auVar16._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar16);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x68) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x6c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x70) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x74) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x80);
                auVar17._4_4_ = fVar85;
                auVar17._0_4_ = fVar85;
                auVar17._8_4_ = fVar85;
                auVar17._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar17);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x78) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x7c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x80) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x84) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x90);
                auVar18._4_4_ = fVar85;
                auVar18._0_4_ = fVar85;
                auVar18._8_4_ = fVar85;
                auVar18._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar18);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x88) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x8c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x90) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x94) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0xa0);
                auVar19._4_4_ = fVar85;
                auVar19._0_4_ = fVar85;
                auVar19._8_4_ = fVar85;
                auVar19._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar19);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x98) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x9c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0xa0) = auVar81._8_4_;
                }
                lVar53 = 0x28;
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0xa4) = auVar81._12_4_;
                }
                fVar86 = *(float *)(lVar3 + 0xb0);
                if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) {
LAB_0525ca78:
                  *(float *)(lVar2 + 8 + lVar53 * 4) = fVar86 / fVar85;
                }
              }
              if (bVar74 && bVar59) {
                do {
                  fVar86 = *(float *)(lVar72 + -4 + lVar53 * 4);
                  if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) {
                    *(float *)(lVar51 + -4 + lVar53 * 4) = fVar86 / fVar85;
                  }
                  fVar86 = *(float *)(lVar72 + lVar53 * 4);
                  if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) {
                    *(float *)(lVar51 + lVar53 * 4) = fVar86 / fVar85;
                  }
                  lVar53 = lVar53 + 2;
                } while (lVar53 != 0x28);
              }
            }
          }
          lVar49 = lVar49 + 1;
          lVar58 = lVar58 + 0x198;
          lVar60 = lVar60 + 0x1a0;
          lVar63 = lVar63 + 0x198;
          lVar66 = lVar66 + 0x1a0;
          lVar72 = lVar72 + 0x1a0;
          lVar51 = lVar51 + 0x198;
        } while (lVar49 != 4);
        lVar48 = lVar48 + 1;
        lVar61 = lVar61 + 0x660;
        lVar62 = lVar62 + 0x680;
        lVar68 = lVar68 + 0x660;
        lVar65 = lVar65 + 0x680;
        lVar27 = lVar27 + 0x680;
        lVar67 = lVar67 + 0x660;
      } while (lVar48 != 4);
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar28[1] = 0;
      puVar28[2] = 0;
      *puVar28 = &UNK_0ef9ce28;
      uVar34 = *param_3;
      lVar27 = plStack_c0[0x19];
      puVar28[3] = lVar70;
      puVar28[4] = lVar70 + 0x1980;
      puVar28[5] = lVar70 + 0x1980;
      puVar28[6] = CONCAT44((int)(uVar34 >> 0x1c) >> 2,(int)uVar34 << 2) & 0xfffffffcffffffff;
      *(short *)(puVar28 + 7) = (short)lVar27;
      *param_1 = (long)(puVar28 + 3);
      param_1[1] = (long)puVar28;
      puStack_160 = puStack_150;
      param_2 = plStack_c0;
      puVar71 = puStack_150;
    }
    func_0x0412a280(puVar71,(long)puStack_110 - (long)puStack_160);
    func_0x0412a280(lVar26,0x1a00);
    plVar30 = plStack_e0;
    plStack_e0 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      plVar73 = (long *)plVar30[0xc];
      if (plVar73 == plVar30 + 8) {
        lVar70 = 0x20;
LAB_0525cbd5:
        (**(code **)(*plVar73 + lVar70))();
      }
      else {
        lVar70 = 0x28;
        if (plVar73 != (long *)0x0) goto LAB_0525cbd5;
      }
      if ((char)plVar30[6] == '\x01') {
        plVar73 = plVar55;
        if ((long *)plVar30[4] == (long *)0x0) {
LAB_0525d1cb:
          uVar31 = func_0x04891200();
          func_0x0412a280(plVar73,0x1980);
          func_0x0412a280(puStack_150,(long)puStack_110 - (long)puStack_150);
          func_0x0412a280(lVar26,0x1a00);
          func_0x0525d2e0(&plStack_e0);
          func_0x0eee2d70(uVar31);
          pcVar10 = (code *)swi(3);
          plVar55 = (long *)(*pcVar10)();
          return plVar55;
        }
        (**(code **)(*(long *)plVar30[4] + 0x30))();
      }
      plVar73 = (long *)plVar30[4];
      if (plVar73 == plVar30) {
        lVar26 = 0x20;
LAB_0525cc0e:
        (**(code **)(*plVar73 + lVar26))();
      }
      else {
        lVar26 = 0x28;
        if (plVar73 != (long *)0x0) goto LAB_0525cc0e;
      }
      func_0x0412a280(plVar30,0x70);
    }
  }
  cStack_d8 = '\x01';
  plStack_e0 = plVar55;
  func_0x0412d450(plVar55);
  if ((ulong)param_2[3] < 10000) {
    puVar71 = (ulong *)param_2[1];
  }
  else {
    puVar28 = (undefined8 *)param_2[2];
    while (puVar28 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar28;
      plVar55 = (long *)puVar28[4];
      if (plVar55 != (long *)0x0) {
        LOCK();
        plVar73 = plVar55 + 1;
        lVar26 = *plVar73;
        *plVar73 = *plVar73 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar55 + 0x10))(plVar55);
          func_0x0412c2d0(plVar55);
        }
      }
      func_0x0412a280(puVar28);
      puVar28 = puVar9;
    }
    param_2[2] = 0;
    puVar71 = (ulong *)param_2[1];
    if (puVar71 != (ulong *)0x0) {
      memset(*param_2,0,(long)puVar71 * 8);
    }
    param_2[3] = 0;
  }
  uVar34 = (long)(int)*param_3 + 0x9e3779b9;
  puVar47 = (ulong *)((long)*(int *)((long)param_3 + 4) + 0x9e3779b9 + uVar34 * 0x40 + (uVar34 >> 2)
                     ^ uVar34);
  puVar50 = param_3;
  if (puVar71 != (ulong *)0x0) {
    uVar34 = (long)puVar71 - ((ulong)puVar71 >> 1 & 0x5555555555555555);
    uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
    uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar34 >> 0x38 < 2) {
      puVar50 = (ulong *)((long)puVar71 - 1U & (ulong)puVar47);
    }
    else {
      puVar50 = puVar47;
      if (puVar71 <= puVar47) {
        puVar50 = (ulong *)((ulong)puVar47 % (ulong)puVar71);
      }
    }
    plVar55 = *(long **)(*param_2 + (long)puVar50 * 8);
    if ((plVar55 != (long *)0x0) && (plVar55 = (long *)*plVar55, plVar55 != (long *)0x0)) {
      if ((byte)(uVar34 >> 0x38) < 2) {
        do {
          if ((ulong *)plVar55[1] == puVar47) {
            if (plVar55[2] == *param_3) goto LAB_0525d0d1;
          }
          else if ((ulong *)((ulong)plVar55[1] & (long)puVar71 - 1U) != puVar50) break;
          plVar55 = (long *)*plVar55;
        } while (plVar55 != (long *)0x0);
      }
      else {
        do {
          puVar45 = (ulong *)plVar55[1];
          if (puVar45 == puVar47) {
            if (plVar55[2] == *param_3) goto LAB_0525d0d1;
          }
          else {
            if (puVar71 <= puVar45) {
              if (((ulong)puVar45 | (ulong)puVar71) >> 0x20 == 0) {
                if ((ulong *)(((ulong)puVar45 & 0xffffffff) % ((ulong)puVar71 & 0xffffffff)) ==
                    puVar50) goto LAB_0525cdba;
                break;
              }
              puVar45 = (ulong *)((ulong)puVar45 % (ulong)puVar71);
            }
            if (puVar45 != puVar50) break;
          }
LAB_0525cdba:
          plVar55 = (long *)*plVar55;
        } while (plVar55 != (long *)0x0);
      }
    }
  }
  plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar29 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puStack_88 = (ulong *)0x1;
  *plVar29 = 0;
  plVar29[1] = (long)puVar47;
  plVar29[2] = *param_3;
  lVar26 = param_1[1];
  lVar70 = param_1[1];
  plVar29[3] = *param_1;
  plVar29[4] = lVar70;
  if (lVar26 != 0) {
    LOCK();
    plVar55 = (long *)(lVar26 + 8);
    *plVar55 = *plVar55 + 1;
    UNLOCK();
  }
  plStack_98 = plVar29;
  plStack_90 = param_2;
  if ((long)puVar71 < 0) {
    fVar78 = (float)puVar71;
    fVar76 = *(float *)(param_2 + 4);
    if (puVar71 != (ulong *)0x0) goto LAB_0525cef4;
LAB_0525cf05:
    uVar34 = 1;
    if ((ulong *)0x2 < puVar71) {
      uVar34 = (ulong)(((ulong)puVar71 & (long)puVar71 - 1U) != 0);
    }
    plVar73 = (long *)(uVar34 | (long)puVar71 * 2);
    fVar76 = (float)func_0x0eee3ab0((float)(param_2[3] + 1) / fVar76);
    plVar55 = (long *)((long)(fVar76 - _DAT_01198778) & (long)fVar76 >> 0x3f | (long)fVar76);
    if (plVar55 < plVar73) {
      plVar55 = plVar73;
    }
    plVar30 = (long *)0x2;
    if ((plVar55 == (long *)0x1) || (plVar30 = plVar55, ((ulong)plVar55 & (long)plVar55 - 1U) == 0))
    {
      plVar73 = (long *)param_2[1];
      bVar59 = plVar30 < plVar73;
      if (plVar30 <= plVar73) goto LAB_0525cf97;
LAB_0525cf76:
      func_0x0525f970(param_2,plVar30);
      puVar50 = puVar47;
    }
    else {
      plVar30 = (long *)func_0x0412c3f0();
      plVar73 = (long *)param_2[1];
      bVar59 = plVar30 < plVar73;
      if (plVar73 < plVar30) goto LAB_0525cf76;
LAB_0525cf97:
      puVar50 = puVar47;
      if (bVar59) {
        uVar34 = param_2[3];
        if ((long)uVar34 < 0) {
LAB_0525cfb8:
          fVar76 = (float)uVar34;
        }
        else {
          fVar76 = (float)(long)uVar34;
        }
        fVar76 = (float)func_0x0eee3ab0(fVar76 / *(float *)(param_2 + 4));
        plVar55 = (long *)((long)(fVar76 - _DAT_01198778) & (long)fVar76 >> 0x3f | (long)fVar76);
        if ((plVar73 < (long *)0x3) ||
           (uVar34 = (long)plVar73 - ((ulong)plVar73 >> 1 & 0x5555555555555555),
           uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
           1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar55 = (long *)func_0x0412c3f0(plVar55);
        }
        else if ((long *)0x1 < plVar55) {
          lVar26 = 0x3f;
          if ((long)plVar55 - 1U != 0) {
            for (; (long)plVar55 - 1U >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          plVar55 = (long *)(1L << (-((byte)lVar26 ^ 0x3f) & 0x3f));
        }
        if (plVar30 <= plVar55) {
          plVar30 = plVar55;
        }
        puVar50 = puVar47;
        if (plVar30 < plVar73) goto LAB_0525cf76;
      }
    }
    puVar71 = (ulong *)param_2[1];
    if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
      puVar50 = (ulong *)((ulong)puVar50 & (long)puVar71 - 1U);
    }
    else if (puVar71 <= puVar50) {
      puVar50 = (ulong *)((ulong)puVar50 % (ulong)puVar71);
    }
  }
  else {
    fVar78 = (float)(long)puVar71;
    fVar76 = *(float *)(param_2 + 4);
    if (puVar71 == (ulong *)0x0) goto LAB_0525cf05;
LAB_0525cef4:
    if (fVar78 * fVar76 < (float)(param_2[3] + 1)) goto LAB_0525cf05;
  }
  lVar26 = *param_2;
  plVar55 = *(long **)(lVar26 + (long)puVar50 * 8);
  if (plVar55 == (long *)0x0) {
    *plVar29 = param_2[2];
    param_2[2] = (long)plVar29;
    *(long **)(lVar26 + (long)puVar50 * 8) = param_2 + 2;
    if (*plVar29 != 0) {
      puVar50 = *(ulong **)(*plVar29 + 8);
      if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
        *(long **)(lVar26 + ((ulong)puVar50 & (long)puVar71 - 1U) * 8) = plVar29;
      }
      else {
        if (puVar71 <= puVar50) {
          if (((ulong)puVar50 | (ulong)puVar71) >> 0x20 == 0) {
            *(long **)(lVar26 + (((ulong)puVar50 & 0xffffffff) % ((ulong)puVar71 & 0xffffffff)) * 8)
                 = plVar29;
            goto LAB_0525d0cd;
          }
          puVar50 = (ulong *)((ulong)puVar50 % (ulong)puVar71);
        }
        *(long **)(lVar26 + (long)puVar50 * 8) = plVar29;
      }
    }
  }
  else {
    *plVar29 = *plVar55;
    *plVar55 = (long)plVar29;
  }
LAB_0525d0cd:
  param_2[3] = param_2[3] + 1;
LAB_0525d0d1:
  if (cStack_d8 == '\x01') {
    func_0x0412d520(plStack_e0);
  }
  return param_1;
LAB_0525b0e1:
  lVar26 = plVar73[4];
  uVar20 = *(undefined4 *)((long)plVar73 + 0x1c);
  lVar70 = plVar73[4];
  uVar21 = *(undefined4 *)((long)plVar73 + 0x24);
  *(int *)param_1 = (int)plVar73[3];
  *(undefined4 *)((long)param_1 + 4) = uVar20;
  *(int *)(param_1 + 1) = (int)lVar70;
  *(undefined4 *)((long)param_1 + 0xc) = uVar21;
  if (lVar26 != 0) {
    LOCK();
    plVar73 = (long *)(lVar26 + 8);
    *plVar73 = *plVar73 + 1;
    UNLOCK();
  }
  bVar59 = false;
  goto LAB_0525b0fb;
}


