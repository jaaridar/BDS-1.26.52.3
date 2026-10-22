/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5389b0 (ELF vaddr 0xc4389b0)
 * Label: caller-of-callee
 * Body:  [[0c5389b0, 0c538a4e] [0c538a50, 0c538ab4] [0c538ac0, 0c538ad3] [0c538ae0, 0c538b35] [0c538b40, 0c538b79] [0c538b80, 0c538bc7] [0c538bd0, 0c538c26] [0c538c30, 0c538d80] [0c538d90, 0c538dd8] [0c538de0, 0c53a07e] [0c53a132, 0c53a140] [0c53a1a3, 0c53a1b1] [0c53a1b9, 0c53a1d4] [0c53a1ef, 0c53a20e]]
 * Ghidra: FUN_0c5389b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c5389b0(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  char *pcVar7;
  uint *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint *puVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  byte *pbVar24;
  bool bVar25;
  float fVar26;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  uint *puStack_138;
  uint *puStack_130;
  long **pplStack_128;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_80;
  char *pcStack_78;
  long *plStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  int *piStack_58;
  long lStack_50;
  uint *puStack_48;
  uint *puStack_40;
  long lStack_38;
  
  plVar13 = _DAT_0f6e8960;
  if (_DAT_0f6e8968 != 0) {
    while (plVar13 != (long *)0x0) {
      plVar5 = (long *)*plVar13;
      if ((*(byte *)(plVar13 + 3) & 1) != 0) {
        thunk_FUN_0ee326a0(plVar13[5],plVar13[3] & 0xfffffffffffffffe);
      }
      thunk_FUN_0ee326a0(plVar13,0x30);
      plVar13 = plVar5;
    }
    _DAT_0f6e8960 = (long *)0x0;
    if (_DAT_0f6e8958 != 0) {
      func_0x0eee2dd0(_DAT_0f6e8950,0,_DAT_0f6e8958 << 3);
    }
    _DAT_0f6e8968 = 0;
  }
  func_0x0ca15e40(&piStack_58,param_1);
  puStack_138 = (uint *)0x0;
  puStack_130 = (uint *)0x0;
  pplStack_128 = (long **)0x0;
  plVar13 = *(long **)(param_2 + 0x38);
  if (plVar13 != (long *)0x0) {
    do {
      puVar12 = puStack_130;
      if (puStack_130 < pplStack_128) {
        *puStack_130 = *(uint *)(plVar13 + 3);
        func_0x0b04c660(puStack_130 + 2,plVar13 + 4);
        func_0x0b04c660(puVar12 + 0x24,plVar13 + 0x15);
        *(char *)(puVar12 + 0x48) = (char)plVar13[0x27];
        *(long *)(puVar12 + 0x46) = plVar13[0x26];
        puVar12 = puVar12 + 0x4a;
      }
      else {
        puVar12 = (uint *)func_0x0b0b96a0(&puStack_138,plVar13 + 3);
      }
      plVar13 = (long *)*plVar13;
      puStack_130 = puVar12;
    } while (plVar13 != (long *)0x0);
    puVar22 = puStack_138;
    puVar4 = param_1;
    puVar8 = puVar12;
    if (puStack_138 != puVar12) {
      do {
        puStack_48 = puVar8;
        puStack_60 = puVar4;
        if ((char)puVar22[0x46] == '\x01') {
          bVar2 = (byte)puVar22[2];
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 9) goto LAB_0c538b8d;
          }
          else if (*(long *)(puVar22 + 4) == 9) {
LAB_0c538b8d:
            if ((bVar2 & 1) == 0) {
              plVar13 = (long *)((long)puVar22 + 9);
            }
            else {
              plVar13 = *(long **)(puVar22 + 6);
            }
            if ((char)plVar13[1] == 't' && *plVar13 == 0x66617263656e696d) goto LAB_0c538b4b;
          }
          bVar2 = (byte)puVar22[0x1c];
          if ((bVar2 & 1) == 0) {
            uVar16 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar16 = *(ulong *)(puVar22 + 0x1e);
          }
          plVar13 = (long *)(uVar16 + 10);
          if ((long *)0xfffffffffffffff7 < plVar13) {
            func_0x04882e30();
            goto LAB_0c53a068;
          }
          if (plVar13 < (long *)0x17) {
            uStack_150 = (long *)0x0;
            pbStack_148 = (byte *)0x0;
            uStack_158 = (long *)(ulong)(byte)((char)plVar13 * '\x02');
            pbVar24 = (byte *)((long)&uStack_158 + 1);
            param_1 = puStack_60;
            if (uVar16 != 0) {
              if ((bVar2 & 1) == 0) goto LAB_0c538c91;
LAB_0c538c1e:
              lVar19 = *(long *)(puVar22 + 0x20);
              goto LAB_0c538c95;
            }
          }
          else {
            uVar18 = ((ulong)plVar13 | 7) + 1;
            if (((ulong)plVar13 | 7) == 0x17) {
              uVar18 = 0x1a;
            }
            pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
            if (pbVar24 == (byte *)0x0) {
              func_0x0eec74c0(uVar18,0);
            }
            uStack_158 = (long *)(uVar18 | 1);
            uStack_150 = plVar13;
            pbStack_148 = pbVar24;
            if ((bVar2 & 1) != 0) goto LAB_0c538c1e;
LAB_0c538c91:
            lVar19 = (long)puVar22 + 0x71;
LAB_0c538c95:
            param_1 = puStack_60;
            func_0x0eee2ee0(pbVar24,lVar19,uVar16);
          }
          uVar18 = _DAT_0f6e8958;
          pbVar1 = pbVar24 + uVar16;
          pbVar1[0] = 0x5f;
          pbVar1[1] = 0x73;
          pbVar1[2] = 0x70;
          pbVar1[3] = 0x61;
          pbVar1[4] = 0x77;
          pbVar1[5] = 0x6e;
          pbVar1[6] = 0x5f;
          pbVar1[7] = 0x65;
          (pbVar24 + uVar16 + 8)[0] = 0x67;
          (pbVar24 + uVar16 + 8)[1] = 0x67;
          pbVar24[uVar16 + 10] = 0;
          uVar3 = *puVar22;
          uVar20 = (ulong)uVar3;
          if (_DAT_0f6e8958 != 0) {
            uVar16 = _DAT_0f6e8958 - (_DAT_0f6e8958 >> 1 & 0x5555555555555555);
            uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
            uVar15 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar15 >> 0x38 < 2) {
              uVar16 = (ulong)(uVar3 & (int)_DAT_0f6e8958 - 1U);
            }
            else {
              uVar16 = uVar20;
              if (_DAT_0f6e8958 <= uVar20) {
                uVar16 = uVar20 % (_DAT_0f6e8958 & 0xffffffff);
              }
            }
            puVar4 = *(undefined8 **)(_DAT_0f6e8950 + uVar16 * 8);
            if ((puVar4 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar4, plVar13 != (long *)0x0)
               ) {
              if ((byte)(uVar15 >> 0x38) < 2) {
                do {
                  if (plVar13[1] == uVar20) {
                    if (*(uint *)(plVar13 + 2) == uVar3) goto LAB_0c5390c1;
                  }
                  else if ((plVar13[1] & _DAT_0f6e8958 - 1) != uVar16) break;
                  plVar13 = (long *)*plVar13;
                } while (plVar13 != (long *)0x0);
              }
              else {
                do {
                  uVar15 = plVar13[1];
                  if (uVar15 == uVar20) {
                    if (*(uint *)(plVar13 + 2) == uVar3) goto LAB_0c5390c1;
                  }
                  else {
                    if (_DAT_0f6e8958 <= uVar15) {
                      if ((uVar15 | _DAT_0f6e8958) >> 0x20 == 0) {
                        if ((uVar15 & 0xffffffff) % (_DAT_0f6e8958 & 0xffffffff) == uVar16)
                        goto LAB_0c538d9a;
                        break;
                      }
                      uVar15 = uVar15 % _DAT_0f6e8958;
                    }
                    if (uVar15 != uVar16) break;
                  }
LAB_0c538d9a:
                  plVar13 = (long *)*plVar13;
                } while (plVar13 != (long *)0x0);
              }
            }
          }
          plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (plVar13 == (long *)0x0) {
            func_0x0eec74c0(0x30,0);
          }
          uStack_110 = (long *)&DAT_0f6e8950;
          plStack_108 = (long *)0x1;
          *plVar13 = 0;
          plVar13[1] = uVar20;
          *(uint *)(plVar13 + 2) = *puVar22;
          plVar13[3] = 0;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plStack_118 = plVar13;
          if ((long)uVar18 < 0) {
            fVar26 = (float)uVar18;
            if (uVar18 != 0) goto LAB_0c538ece;
LAB_0c538edf:
            uVar16 = 1;
            if (2 < uVar18) {
              uVar16 = (ulong)((uVar18 & uVar18 - 1) != 0);
            }
            uVar16 = uVar18 * 2 | uVar16;
            fVar26 = (float)ceilf((float)(_DAT_0f6e8968 + 1) / _DAT_0f6e8970);
            uVar15 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
            if (uVar15 < uVar16) {
              uVar15 = uVar16;
            }
            uVar16 = 2;
            if ((uVar15 == 1) || (uVar16 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
              bVar25 = uVar16 < uVar18;
              if (uVar16 <= uVar18) goto LAB_0c538f71;
LAB_0c538f49:
              func_0x049164c0(&DAT_0f6e8950,uVar16);
            }
            else {
              uVar16 = func_0x0412c3f0();
              bVar25 = uVar16 < _DAT_0f6e8958;
              uVar18 = _DAT_0f6e8958;
              if (_DAT_0f6e8958 < uVar16) goto LAB_0c538f49;
LAB_0c538f71:
              if (bVar25) {
                fVar26 = (float)ceilf((float)_DAT_0f6e8968 / _DAT_0f6e8970);
                uVar15 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
                if ((uVar18 < 3) ||
                   (uVar17 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
                   uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
                   1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  uVar15 = func_0x0412c3f0(uVar15);
                }
                else if (1 < uVar15) {
                  lVar19 = 0x3f;
                  if (uVar15 - 1 != 0) {
                    for (; uVar15 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                    }
                  }
                  uVar15 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
                }
                if (uVar16 <= uVar15) {
                  uVar16 = uVar15;
                }
                if (uVar16 < uVar18) goto LAB_0c538f49;
              }
            }
            uVar18 = _DAT_0f6e8958;
            if ((_DAT_0f6e8958 & _DAT_0f6e8958 - 1) == 0) {
              uVar16 = (ulong)(uVar3 & (int)_DAT_0f6e8958 - 1U);
            }
            else {
              uVar16 = uVar20;
              if ((_DAT_0f6e8958 <= uVar20) && (_DAT_0f6e8958 <= uVar20)) {
                uVar16 = uVar20 % (_DAT_0f6e8958 & 0xffffffff);
              }
            }
          }
          else {
            fVar26 = (float)(long)uVar18;
            if (uVar18 == 0) goto LAB_0c538edf;
LAB_0c538ece:
            if (fVar26 * _DAT_0f6e8970 < (float)(_DAT_0f6e8968 + 1)) goto LAB_0c538edf;
          }
          lVar19 = _DAT_0f6e8950;
          plVar5 = *(long **)(_DAT_0f6e8950 + uVar16 * 8);
          if (plVar5 == (long *)0x0) {
            *plVar13 = (long)_DAT_0f6e8960;
            _DAT_0f6e8960 = plVar13;
            *(undefined **)(lVar19 + uVar16 * 8) = &DAT_0f6e8960;
            if (*plVar13 != 0) {
              uVar16 = *(ulong *)(*plVar13 + 8);
              if ((uVar18 & uVar18 - 1) == 0) {
                *(long **)(lVar19 + (uVar16 & uVar18 - 1) * 8) = plVar13;
              }
              else {
                if (uVar18 <= uVar16) {
                  if ((uVar16 | uVar18) >> 0x20 == 0) {
                    *(long **)(lVar19 + ((uVar16 & 0xffffffff) % (uVar18 & 0xffffffff)) * 8) =
                         plVar13;
                    goto LAB_0c5390ba;
                  }
                  uVar16 = uVar16 % uVar18;
                }
                *(long **)(lVar19 + uVar16 * 8) = plVar13;
              }
            }
          }
          else {
            *plVar13 = *plVar5;
            *plVar5 = (long)plVar13;
          }
LAB_0c5390ba:
          _DAT_0f6e8968 = _DAT_0f6e8968 + 1;
LAB_0c5390c1:
          pbVar24 = (byte *)(plVar13 + 3);
          if (pbVar24 != (byte *)&uStack_158) {
            if ((*pbVar24 & 1) == 0) {
              if (((ulong)uStack_158 & 1) == 0) {
                plVar13[5] = (long)pbStack_148;
                *(undefined4 *)pbVar24 = (undefined4)uStack_158;
                *(undefined4 *)((long)plVar13 + 0x1c) = uStack_158._4_4_;
                *(undefined4 *)(plVar13 + 4) = (undefined4)uStack_150;
                *(undefined4 *)((long)plVar13 + 0x24) = uStack_150._4_4_;
              }
              else {
                func_0x04885070(pbVar24,pbStack_148,uStack_150);
              }
            }
            else {
              plVar13 = (long *)((ulong)uStack_158 >> 1 & 0x7f);
              pbVar1 = (byte *)((long)&uStack_158 + 1);
              if (((ulong)uStack_158 & 1) != 0) {
                plVar13 = uStack_150;
                pbVar1 = pbStack_148;
              }
              func_0x04885120(pbVar24,pbVar1,plVar13);
            }
          }
          plVar13 = (long *)((ulong)uStack_158 >> 1 & 0x7f);
          pbVar24 = (byte *)((long)&uStack_158 + 1);
          if (((ulong)uStack_158 & 1) != 0) {
            plVar13 = uStack_150;
            pbVar24 = pbStack_148;
          }
          func_0x0ca12b70(&plStack_118,param_1,pbVar24,plVar13);
          if (plStack_118 == (long *)0x0) {
LAB_0c539392:
            uStack_15a = 0xffff;
            plStack_118 = (long *)0x0;
            if (((ulong)uStack_158 & 1) == 0) {
              pbStack_100 = pbStack_148;
              uStack_110 = uStack_158;
              plStack_108 = uStack_150;
            }
            else {
              FUN_0412e5e0(&uStack_110,pbStack_148,uStack_150);
            }
            uStack_f8 = 0;
            if (((ulong)uStack_110 & 1) == 0) {
              if ((byte)uStack_110 >> 1 != 0) goto LAB_0c5393f5;
LAB_0c53943e:
              plStack_118 = (long *)0x0;
            }
            else {
              if (plStack_108 == (long *)0x0) goto LAB_0c53943e;
LAB_0c5393f5:
              pbVar24 = (byte *)((long)&uStack_110 + 1);
              if (((ulong)uStack_110 & 1) != 0) {
                pbVar24 = pbStack_100;
              }
              if ((pbVar24 == (byte *)0x0) || (*pbVar24 == 0)) goto LAB_0c53943e;
              uVar16 = func_0x0eee2e90(pbVar24);
              plStack_118 = (long *)0xcbf29ce484222325;
              if (uVar16 != 0) {
                if (7 < uVar16) {
                  uVar18 = uVar16 & 0xfffffffffffffff8;
                  do {
                    plStack_118 = (long *)(((((((((long)plStack_118 * 0x100000001b3 ^
                                                 (ulong)*pbVar24) * 0x100000001b3 ^
                                                (ulong)pbVar24[1]) * 0x100000001b3 ^
                                               (ulong)pbVar24[2]) * 0x100000001b3 ^
                                              (ulong)pbVar24[3]) * 0x100000001b3 ^ (ulong)pbVar24[4]
                                             ) * 0x100000001b3 ^ (ulong)pbVar24[5]) * 0x100000001b3
                                           ^ (ulong)pbVar24[6]) * 0x100000001b3 ^ (ulong)pbVar24[7])
                    ;
                    pbVar24 = pbVar24 + 8;
                    uVar18 = uVar18 - 8;
                  } while (uVar18 != 0);
                }
                if ((uVar16 & 7) != 0) {
                  uVar18 = 0;
                  do {
                    plStack_118 = (long *)((long)plStack_118 * 0x100000001b3 ^
                                          (ulong)pbVar24[uVar18]);
                    uVar18 = uVar18 + 1;
                  } while (((uint)uVar16 & 7) != uVar18);
                }
              }
            }
            pcStack_78 = (char *)0x0;
            plStack_70 = (long *)0x0;
            if (((param_1[1] == 0) ||
                (plStack_70 = (long *)func_0x0412c300(), plStack_70 == (long *)0x0)) ||
               (pcStack_78 = (char *)*param_1, pcStack_78 == (char *)0x0)) {
              cVar10 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097,&UNK_013bce49
                                      );
              if (cVar10 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
              if (pcStack_78 != (char *)0x0) goto LAB_0c5394bf;
              bVar25 = true;
              bVar9 = bVar25;
              if (plStack_70 != (long *)0x0) goto LAB_0c539502;
LAB_0c539514:
              if (bVar25) {
LAB_0c539518:
                if ((DAT_0f6e4e70 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6e4e70), iVar11 != 0)
                   ) {
                  func_0x0eee2f40(&SUB_0c3d8050,&DAT_0f6e4e68,0xf53dab8);
                  func_0x0410844d(&DAT_0f6e4e70);
                }
                plStack_98 = _DAT_0f6e4e68;
                if (_DAT_0f6e4e68 != (long *)0x0) {
                  LOCK();
                  *(int *)((long)_DAT_0f6e4e68 + 0xc) = *(int *)((long)_DAT_0f6e4e68 + 0xc) + 1;
                  UNLOCK();
                }
              }
            }
            else {
LAB_0c5394bf:
              *(short *)(pcStack_78 + 0x1b8) = *(short *)(pcStack_78 + 0x1b8) + 1;
              func_0x0c549cb0(&plStack_98,pcStack_78,&plStack_118,pcStack_78 + 0x1b8,puVar22 + 2);
              bVar25 = false;
              bVar9 = false;
              if (plStack_70 == (long *)0x0) goto LAB_0c539514;
LAB_0c539502:
              bVar25 = bVar9;
              plVar5 = plStack_70;
              LOCK();
              plVar13 = plStack_70 + 1;
              lVar19 = *plVar13;
              *plVar13 = *plVar13 + -1;
              UNLOCK();
              if (lVar19 != 0) goto LAB_0c539514;
              (**(code **)(*plStack_70 + 0x10))(plStack_70);
              func_0x0412c2d0(plVar5);
              if (bVar25) goto LAB_0c539518;
            }
            if (((ulong)uStack_110 & 1) != 0) {
              thunk_FUN_0ee326a0(pbStack_100,(ulong)uStack_110 & 0xfffffffffffffffe);
            }
            plVar13 = plStack_98;
            if ((plStack_98 == (long *)0x0) || (lVar19 = *plStack_98, lVar19 == 0)) {
LAB_0c53a068:
              uVar14 = FUN_04890760();
              func_0x0c44e610(&plStack_118);
              func_0x0c3d8050(&plStack_80);
              func_0x04a2c540(&pcStack_78);
              if (((ulong)uStack_158 & 1) != 0) {
                thunk_FUN_0ee326a0(pbStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
              }
              func_0x0880e350(&puStack_138);
              func_0x0c53a2d0(&piStack_58);
              func_0x0eee2d70(uVar14);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(byte *)(lVar19 + 0x1c8) & 3) == 0) {
              *(byte *)(lVar19 + 0x1c8) = *(byte *)(lVar19 + 0x1c8) | 2;
              lVar19 = *plStack_98;
            }
            func_0x0ca140f0(param_1,lVar19);
            LOCK();
            *(int *)((long)plVar13 + 0xc) = *(int *)((long)plVar13 + 0xc) + -1;
            UNLOCK();
            if (((*(int *)((long)plVar13 + 0xc) < 1) && (*plVar13 == 0)) &&
               (plStack_98 != (long *)0x0)) {
              thunk_FUN_0ee326a0(plStack_98,0x10);
            }
          }
          else {
            plVar13 = (long *)*plStack_118;
            LOCK();
            *(int *)((long)plStack_118 + 0xc) = *(int *)((long)plStack_118 + 0xc) + -1;
            UNLOCK();
            if (((*(int *)((long)plStack_118 + 0xc) < 1) && (*plStack_118 == 0)) &&
               (plStack_118 != (long *)0x0)) {
              thunk_FUN_0ee326a0(plStack_118,0x10);
            }
            uStack_15a = 0xffff;
            if (plVar13 == (long *)0x0) goto LAB_0c539392;
            cVar10 = (**(code **)(*plVar13 + 0x240))(plVar13);
            if (cVar10 == '\0') {
              uStack_15a = *(undefined2 *)((long)plVar13 + 0x8a);
              func_0x0ca16230(&pcStack_78,param_1);
              lVar19 = lStack_68;
              if ((pcStack_78 == (char *)0x0) || (*pcStack_78 != '\x01')) {
                lVar19 = 0;
                if (((ulong)uStack_158 & 1) != 0) goto LAB_0c539610;
LAB_0c539370:
                plStack_118 = (long *)0x0;
                pbStack_100 = pbStack_148;
                uStack_110 = uStack_158;
                plStack_108 = uStack_150;
              }
              else {
                func_0x0c44f050(&plStack_118,plVar13,1,0,0);
                plStack_118 = (long *)&UNK_0f36e858;
                lVar23 = *(long *)(lVar19 + 0x18);
                lVar21 = *(long *)(lVar19 + 0x20);
                if (lVar23 != lVar21) {
                  do {
                    cVar10 = func_0x0c459d50(lVar23 + 0x28,&plStack_118);
                    if (cVar10 != '\0') break;
                    lVar23 = lVar23 + 0xb0;
                  } while (lVar23 != lVar21);
                  lVar21 = *(long *)(lVar19 + 0x20);
                }
                plVar13 = plStack_a0;
                lVar19 = 0;
                if (lVar23 != lVar21) {
                  lVar19 = lVar23;
                }
                plStack_118 = (long *)&UNK_0f36e918;
                plStack_a0 = (long *)0x0;
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 8))();
                }
                if (lStack_c8 != 0) {
                  lStack_c0 = lStack_c8;
                  thunk_FUN_0ee326a0(lStack_c8,lStack_b8 - lStack_c8);
                }
                if (lStack_e8 != 0) {
                  lStack_e0 = lStack_e8;
                  thunk_FUN_0ee326a0(lStack_e8,lStack_d8 - lStack_e8);
                }
                plVar13 = plStack_108;
                plStack_108 = (long *)0x0;
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 8))();
                }
                if (uStack_110 != (long *)0x0) {
                  LOCK();
                  *(int *)((long)uStack_110 + 0xc) = *(int *)((long)uStack_110 + 0xc) + -1;
                  UNLOCK();
                  if (((*(int *)((long)uStack_110 + 0xc) < 1) && (*uStack_110 == 0)) &&
                     (uStack_110 != (long *)0x0)) {
                    thunk_FUN_0ee326a0(uStack_110,0x10);
                  }
                }
                if (((ulong)uStack_158 & 1) == 0) goto LAB_0c539370;
LAB_0c539610:
                plStack_118 = (long *)0x0;
                FUN_0412e5e0(&uStack_110,pbStack_148,uStack_150);
              }
              uStack_f8 = 0;
              if (((ulong)uStack_110 & 1) == 0) {
                if ((byte)uStack_110 >> 1 != 0) goto LAB_0c539671;
LAB_0c5396ba:
                plStack_118 = (long *)0x0;
              }
              else {
                if (plStack_108 == (long *)0x0) goto LAB_0c5396ba;
LAB_0c539671:
                pbVar24 = (byte *)((long)&uStack_110 + 1);
                if (((ulong)uStack_110 & 1) != 0) {
                  pbVar24 = pbStack_100;
                }
                if ((pbVar24 == (byte *)0x0) || (*pbVar24 == 0)) goto LAB_0c5396ba;
                uVar16 = func_0x0eee2e90(pbVar24);
                plStack_118 = (long *)0xcbf29ce484222325;
                if (uVar16 != 0) {
                  if (7 < uVar16) {
                    uVar18 = uVar16 & 0xfffffffffffffff8;
                    do {
                      plStack_118 = (long *)(((((((((long)plStack_118 * 0x100000001b3 ^
                                                   (ulong)*pbVar24) * 0x100000001b3 ^
                                                  (ulong)pbVar24[1]) * 0x100000001b3 ^
                                                 (ulong)pbVar24[2]) * 0x100000001b3 ^
                                                (ulong)pbVar24[3]) * 0x100000001b3 ^
                                               (ulong)pbVar24[4]) * 0x100000001b3 ^
                                              (ulong)pbVar24[5]) * 0x100000001b3 ^ (ulong)pbVar24[6]
                                             ) * 0x100000001b3 ^ (ulong)pbVar24[7]);
                      pbVar24 = pbVar24 + 8;
                      uVar18 = uVar18 - 8;
                    } while (uVar18 != 0);
                  }
                  if ((uVar16 & 7) != 0) {
                    uVar18 = 0;
                    do {
                      plStack_118 = (long *)((long)plStack_118 * 0x100000001b3 ^
                                            (ulong)pbVar24[uVar18]);
                      uVar18 = uVar18 + 1;
                    } while (((uint)uVar16 & 7) != uVar18);
                  }
                }
              }
              func_0x0ca139e0(param_1,&plStack_118);
              if (((ulong)uStack_110 & 1) != 0) {
                thunk_FUN_0ee326a0(pbStack_100,(ulong)uStack_110 & 0xfffffffffffffffe);
              }
              plStack_118 = (long *)0x0;
              if (((ulong)uStack_158 & 1) == 0) {
                pbStack_100 = pbStack_148;
                uStack_110 = uStack_158;
                plStack_108 = uStack_150;
              }
              else {
                FUN_0412e5e0(&uStack_110,pbStack_148,uStack_150);
              }
              uStack_f8 = 0;
              if (((ulong)uStack_110 & 1) == 0) {
                if ((byte)uStack_110 >> 1 != 0) goto LAB_0c53974b;
LAB_0c539794:
                plStack_118 = (long *)0x0;
              }
              else {
                if (plStack_108 == (long *)0x0) goto LAB_0c539794;
LAB_0c53974b:
                pbVar24 = (byte *)((long)&uStack_110 + 1);
                if (((ulong)uStack_110 & 1) != 0) {
                  pbVar24 = pbStack_100;
                }
                if ((pbVar24 == (byte *)0x0) || (*pbVar24 == 0)) goto LAB_0c539794;
                uVar16 = func_0x0eee2e90(pbVar24);
                plStack_118 = (long *)0xcbf29ce484222325;
                if (uVar16 != 0) {
                  if (7 < uVar16) {
                    uVar18 = uVar16 & 0xfffffffffffffff8;
                    do {
                      plStack_118 = (long *)(((((((((long)plStack_118 * 0x100000001b3 ^
                                                   (ulong)*pbVar24) * 0x100000001b3 ^
                                                  (ulong)pbVar24[1]) * 0x100000001b3 ^
                                                 (ulong)pbVar24[2]) * 0x100000001b3 ^
                                                (ulong)pbVar24[3]) * 0x100000001b3 ^
                                               (ulong)pbVar24[4]) * 0x100000001b3 ^
                                              (ulong)pbVar24[5]) * 0x100000001b3 ^ (ulong)pbVar24[6]
                                             ) * 0x100000001b3 ^ (ulong)pbVar24[7]);
                      pbVar24 = pbVar24 + 8;
                      uVar18 = uVar18 - 8;
                    } while (uVar18 != 0);
                  }
                  if ((uVar16 & 7) != 0) {
                    uVar18 = 0;
                    do {
                      plStack_118 = (long *)((long)plStack_118 * 0x100000001b3 ^
                                            (ulong)pbVar24[uVar18]);
                      uVar18 = uVar18 + 1;
                    } while (((uint)uVar16 & 7) != uVar18);
                  }
                }
              }
              plStack_98 = (long *)0x0;
              plStack_90 = (long *)0x0;
              if (((param_1[1] == 0) ||
                  (plStack_90 = (long *)func_0x0412c300(), plStack_90 == (long *)0x0)) ||
                 (plStack_98 = (long *)*param_1, plStack_98 == (long *)0x0)) {
                cVar10 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,&UNK_0131c097);
                if (cVar10 != '\0') {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if (plStack_98 != (long *)0x0) goto LAB_0c539815;
                bVar25 = true;
                bVar9 = bVar25;
                if (plStack_90 != (long *)0x0) goto LAB_0c53984f;
LAB_0c539865:
                if (bVar25) {
LAB_0c53986d:
                  if ((DAT_0f6e4e70 == '\0') &&
                     (iVar11 = func_0x04108328(&DAT_0f6e4e70), iVar11 != 0)) {
                    func_0x0eee2f40(&SUB_0c3d8050,&DAT_0f6e4e68,0xf53dab8);
                    func_0x0410844d(&DAT_0f6e4e70);
                  }
                  plStack_80 = _DAT_0f6e4e68;
                  if (_DAT_0f6e4e68 != (long *)0x0) {
                    LOCK();
                    *(int *)((long)_DAT_0f6e4e68 + 0xc) = *(int *)((long)_DAT_0f6e4e68 + 0xc) + 1;
                    UNLOCK();
                  }
                }
              }
              else {
LAB_0c539815:
                func_0x0c549cb0(&plStack_80,plStack_98,&plStack_118,&uStack_15a);
                bVar25 = false;
                bVar9 = false;
                if (plStack_90 == (long *)0x0) goto LAB_0c539865;
LAB_0c53984f:
                bVar25 = bVar9;
                plVar5 = plStack_90;
                LOCK();
                plVar13 = plStack_90 + 1;
                lVar23 = *plVar13;
                *plVar13 = *plVar13 + -1;
                UNLOCK();
                if (lVar23 != 0) goto LAB_0c539865;
                (**(code **)(*plStack_90 + 0x10))(plStack_90);
                func_0x0412c2d0(plVar5);
                if (bVar25) goto LAB_0c53986d;
              }
              if (((ulong)uStack_110 & 1) != 0) {
                thunk_FUN_0ee326a0(pbStack_100,(ulong)uStack_110 & 0xfffffffffffffffe);
              }
              pcVar7 = pcStack_78;
              if (lVar19 != 0) {
                if ((pcStack_78 == (char *)0x0) &&
                   (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41),
                   cVar10 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*pcVar7 == '\0') &&
                   (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
                   cVar10 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                lVar23 = lStack_68;
                uVar18 = (ulong)*(uint *)(lVar19 + 0xa8);
                func_0x0c44f050(&plStack_118,*plStack_80,1,0,0);
                plStack_118 = (long *)&UNK_0f36e858;
                lVar19 = *(long *)(lVar23 + 0x18);
                uVar16 = (*(long *)(lVar23 + 0x20) - lVar19 >> 4) * 0x2e8ba2e8ba2e8ba3;
                if (uVar18 <= uVar16 && uVar16 - uVar18 != 0) {
                  func_0x0c44f4e0(lVar19 + uVar18 * 0xb0 + 0x28,&plStack_118);
                }
                plVar13 = plStack_a0;
                plStack_118 = (long *)&UNK_0f36e918;
                plStack_a0 = (long *)0x0;
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 8))();
                }
                if (lStack_c8 != 0) {
                  lStack_c0 = lStack_c8;
                  thunk_FUN_0ee326a0(lStack_c8,lStack_b8 - lStack_c8);
                }
                if (lStack_e8 != 0) {
                  lStack_e0 = lStack_e8;
                  thunk_FUN_0ee326a0(lStack_e8,lStack_d8 - lStack_e8);
                }
                plVar13 = plStack_108;
                plStack_108 = (long *)0x0;
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 8))();
                }
                if (uStack_110 != (long *)0x0) {
                  LOCK();
                  *(int *)((long)uStack_110 + 0xc) = *(int *)((long)uStack_110 + 0xc) + -1;
                  UNLOCK();
                  if (((*(int *)((long)uStack_110 + 0xc) < 1) && (*uStack_110 == 0)) &&
                     (uStack_110 != (long *)0x0)) {
                    thunk_FUN_0ee326a0(uStack_110,0x10);
                  }
                }
              }
              plVar13 = plStack_80;
              if ((plStack_80 == (long *)0x0) || (lVar19 = *plStack_80, lVar19 == 0))
              goto LAB_0c53a068;
              if ((*(byte *)(lVar19 + 0x1c8) & 3) == 0) {
                *(byte *)(lVar19 + 0x1c8) = *(byte *)(lVar19 + 0x1c8) | 2;
                lVar19 = *plStack_80;
              }
              func_0x0ca140f0(param_1,lVar19);
              LOCK();
              *(int *)((long)plVar13 + 0xc) = *(int *)((long)plVar13 + 0xc) + -1;
              UNLOCK();
              if (((*(int *)((long)plVar13 + 0xc) < 1) && (*plVar13 == 0)) &&
                 (plStack_80 != (long *)0x0)) {
                thunk_FUN_0ee326a0(plStack_80,0x10);
              }
              plVar13 = plStack_70;
              pcStack_78 = (char *)0x0;
              plStack_70 = (long *)0x0;
              if (plVar13 != (long *)0x0) {
                LOCK();
                plVar5 = plVar13 + 1;
                lVar19 = *plVar5;
                *plVar5 = *plVar5 + -1;
                UNLOCK();
                if (lVar19 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  func_0x0412c2d0(plVar13);
                  plVar13 = plStack_70;
                  lStack_68 = 0;
                  if (plStack_70 != (long *)0x0) {
                    lStack_68 = 0;
                    LOCK();
                    plVar5 = plStack_70 + 1;
                    lVar19 = *plVar5;
                    *plVar5 = *plVar5 + -1;
                    UNLOCK();
                    if (lVar19 == 0) {
                      (**(code **)(*plStack_70 + 0x10))(plStack_70);
                      func_0x0412c2d0(plVar13);
                    }
                  }
                }
                else {
                  lStack_68 = 0;
                }
              }
            }
          }
          puVar12 = puStack_48;
          if (((ulong)uStack_158 & 1) != 0) {
            thunk_FUN_0ee326a0(pbStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
            puVar12 = puStack_48;
          }
        }
LAB_0c538b4b:
        puVar22 = puVar22 + 0x4a;
        puVar4 = puStack_60;
        puVar8 = puStack_48;
      } while (puVar22 != puVar12);
    }
    puVar22 = puStack_138;
    puVar12 = puStack_130;
    if (puStack_138 != (uint *)0x0) {
      for (; puVar22 != puVar12; puVar12 = puVar12 + -0x4a) {
        func_0x04a3a0b0(puVar12 + -0x26);
        func_0x04a3a0b0(puVar12 + -0x48);
      }
      puStack_130 = puVar22;
      thunk_FUN_0ee326a0(puStack_138,(long)pplStack_128 - (long)puStack_138);
    }
  }
  plStack_118 = (long *)0x1006400100001;
  uStack_110 = (long *)&UNK_01254d89;
  plStack_108 = (long *)&UNK_01254d89;
  pbStack_100 = (byte *)((ulong)pbStack_100 & 0xffffffffffffff00);
  puStack_40 = (uint *)*param_1;
  lVar19 = param_1[1];
  if (lVar19 == 0) {
    puStack_130 = (uint *)0x0;
    puStack_138 = puStack_40;
  }
  else {
    LOCK();
    *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
    UNLOCK();
    puStack_138 = (uint *)*param_1;
    puStack_130 = (uint *)param_1[1];
    if (param_1[1] != 0) {
      LOCK();
      plVar13 = (long *)(param_1[1] + 0x10);
      *plVar13 = *plVar13 + 1;
      UNLOCK();
    }
  }
  pplStack_128 = &plStack_118;
  lStack_38 = lVar19;
  func_0x0c53a210(&puStack_40,&UNK_0c542a70,&puStack_138);
  if (puStack_130 != (uint *)0x0) {
    func_0x0412c2d0();
  }
  if (lVar19 != 0) {
    func_0x0412c2d0(lVar19);
  }
  if (((ulong)plStack_108 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_108 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_108 = (long *)0x0;
  if (((ulong)uStack_110 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_110 & 0xff00ffffffffffff) - 8);
  }
  if (lStack_50 != 0) {
    plVar13 = (long *)func_0x0412c300();
    if (plVar13 != (long *)0x0) {
      if (piStack_58 != (int *)0x0) {
        LOCK();
        *piStack_58 = *piStack_58 + -1;
        UNLOCK();
      }
      LOCK();
      plVar5 = plVar13 + 1;
      lVar19 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    if (lStack_50 != 0) {
      func_0x0412c2d0();
    }
  }
  return;
}


