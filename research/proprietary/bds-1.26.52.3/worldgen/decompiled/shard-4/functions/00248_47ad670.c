/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ad670 (ELF vaddr 0x47ad670)
 * Label: callee-of:0x6140b00
 * Body:  [[048ad670, 048ad6c9] [048ad6d0, 048ad730] [048ad769, 048ad7d5] [048adc60, 048adc71]]
 * Ghidra: FUN_048ad670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_048ad670(ulong *param_1,long param_2,long param_3,undefined4 param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong *puVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  uint uStack_98;
  byte bStack_91;
  ulong *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_6c;
  byte *pbStack_68;
  ulong uStack_60;
  long lStack_58;
  int iStack_4c;
  long lStack_48;
  byte *pbStack_40;
  long lStack_38;
  
  uStack_6c = param_4;
  uVar4 = uStack_6c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    pbStack_68 = (byte *)((long)param_1 + 1);
    uStack_60 = 0;
    uStack_6c._0_1_ = (char)param_4;
    iStack_4c = (int)(char)uStack_6c;
    lStack_80 = 0;
    lStack_48 = param_3;
    puStack_90 = param_1;
    lStack_88 = param_2;
    uStack_6c = uVar4;
    do {
      lStack_78 = *(long *)(param_2 + 8 + lStack_80 * 0x10);
      if (lStack_78 != 0) {
        pbVar13 = *(byte **)(param_2 + lStack_80 * 0x10);
        bVar19 = (int)uStack_60 != 0;
        if (bVar19) {
          FUN_0412fea0(puStack_90,iStack_4c);
        }
        uStack_60 = (ulong)((int)uStack_60 + 1);
        while( true ) {
          bVar5 = *pbVar13;
          uVar15 = (ulong)bVar5;
          bVar1 = (&UNK_01e4aef0)[uVar15];
          lVar16 = (long)(char)bVar1;
          param_2 = lStack_88;
          param_1 = puStack_90;
          if ((lVar16 == 0) || ((-1 < lStack_78 && (lStack_78 < lVar16)))) break;
          if ('\x01' < (char)bVar1) {
            lVar14 = 1;
            do {
              if (-0x41 < (char)pbVar13[lVar14]) goto LAB_048ad6df;
              lVar14 = lVar14 + 1;
            } while (lVar16 != lVar14);
          }
          if (3 < bVar1 - 1) break;
          lStack_58 = lVar16;
          switch((uint)bVar1) {
          case 2:
            uVar6 = pbVar13[1] & 0x3f | (bVar5 & 0x1f) << 6;
            if ((bVar5 & 0x1f) < 2) {
              uVar6 = 0xffffffff;
            }
            uVar15 = (ulong)uVar6;
            break;
          case 3:
            uVar6 = bVar5 & 0xf;
            uVar11 = (pbVar13[1] & 0x3f) << 6 | uVar6 << 0xc;
            if (((uVar11 < 0x800) || (0xd7ff < uVar11 && (byte)uVar6 < 0xe)) ||
               (uVar11 = uVar11 | pbVar13[2] & 0x3f, uVar15 = (ulong)uVar11, uVar11 - 0xfdd0 < 0x20)
               ) goto LAB_048ad6df;
            break;
          case 4:
            iVar7 = (bVar5 & 7) * 0x40000;
            iVar12 = (pbVar13[1] & 0x3f) * 0x1000;
            uVar6 = pbVar13[3] & 0x3f | (pbVar13[2] & 0x3f) << 6 | iVar12 + iVar7;
            if ((iVar7 + iVar12) - 0x110000U < 0xfff00000) {
              uVar6 = 0xffffffff;
            }
            uVar15 = (ulong)uVar6;
          }
          uVar6 = (uint)uVar15;
          if (((int)uVar6 < 0) || ((uVar6 & 0xfffe) == 0xfffe)) break;
          lStack_78 = lStack_78 - lVar16;
          pbStack_40 = pbVar13;
          if ((uVar6 == 0x5c) || (uVar6 == 0x2f)) {
            if (lStack_78 == 0) break;
            bVar3 = !bVar19;
            bVar19 = true;
            if (bVar3) {
              bVar5 = (byte)*puStack_90;
              if ((bVar5 & 1) == 0) {
                if (bVar5 == 0x2c) {
                  uVar17 = 0x30;
                  uVar15 = 0x16;
                  pbVar13 = pbStack_68;
code_r0x048ad9b8:
                  uVar18 = uVar15 + 1;
code_r0x048ad9bc:
                  pbVar8 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
                  if (pbVar8 == (byte *)0x0) {
                    func_0x0eec74c0(uVar17,0);
                  }
                  func_0x0eee2ee0(pbVar8,pbVar13,uVar15);
                  if (uVar18 != 0x17) {
                    func_0x0412a280(pbVar13,uVar18);
                  }
                  puStack_90[2] = (ulong)pbVar8;
                  *puStack_90 = uVar17 | 1;
                  param_3 = lStack_48;
                  uVar17 = uVar15;
                  goto code_r0x048ada4c;
                }
                uVar17 = (ulong)(bVar5 >> 1);
                *(byte *)puStack_90 = bVar5 + 2;
                pbVar8 = pbStack_68;
              }
              else {
                uVar17 = puStack_90[1];
                uVar18 = *puStack_90 & 0xfffffffffffffffe;
                uVar15 = uVar18 - 1;
                if (uVar17 == uVar15) {
                  if (uVar18 == 0xfffffffffffffff8) {
code_r0x048adc77:
                    uVar9 = func_0x04882e30();
                    if ((*puStack_90 & 1) != 0) {
                      func_0x0412a280(puStack_90[2],*puStack_90 & 0xfffffffffffffffe);
                    }
                    _Unwind_Resume(uVar9);
                    pcVar2 = (code *)swi(3);
                    puVar10 = (ulong *)(*pcVar2)();
                    return puVar10;
                  }
                  pbVar13 = (byte *)puStack_90[2];
                  uVar17 = 0xfffffffffffffff7;
                  if (uVar15 < 0x7ffffffffffffff3) {
                    uVar18 = uVar15 * 2 | 7;
                    uVar17 = uVar18 + 1;
                    if (uVar18 == 0x17) {
                      uVar17 = 0x1a;
                    }
                    if (uVar15 < 0xc) {
                      uVar17 = 0x17;
                    }
                    goto code_r0x048ad9b8;
                  }
                  goto code_r0x048ad9bc;
                }
                pbVar8 = (byte *)puStack_90[2];
code_r0x048ada4c:
                puStack_90[1] = uVar17 + 1;
              }
              pbVar8[uVar17] = (byte)uStack_6c;
              pbVar8[uVar17 + 1] = 0;
            }
          }
          else {
            uStack_98 = 0;
            bVar5 = (byte)uVar15;
            if (uVar6 < 0x80) {
              uStack_98 = (uint)bVar5;
              lVar16 = 1;
code_r0x048adaf0:
              lVar14 = 0;
              lStack_38 = lVar16;
              puVar10 = puStack_90;
              do {
                bVar5 = *(byte *)((long)&uStack_98 + lVar14);
                bVar1 = (byte)*puVar10;
                if ((bVar1 & 1) == 0) {
                  if (bVar1 == 0x2c) {
                    uVar17 = 0x30;
                    uVar15 = 0x16;
                    pbVar13 = pbStack_68;
code_r0x048adbbe:
                    uVar18 = uVar15 + 1;
code_r0x048adbfe:
                    bStack_91 = bVar5;
                    pbVar8 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
                    if (pbVar8 == (byte *)0x0) {
                      func_0x0eec74c0(uVar17,0);
                    }
                    func_0x0eee2ee0(pbVar8,pbVar13,uVar15);
                    if (uVar18 != 0x17) {
                      func_0x0412a280(pbVar13,uVar18);
                    }
                    puStack_90[2] = (ulong)pbVar8;
                    *puStack_90 = uVar17 | 1;
                    lVar16 = lStack_38;
                    puVar10 = puStack_90;
                    uVar17 = uVar15;
                    bVar5 = bStack_91;
                    goto code_r0x048adb1a;
                  }
                  uVar17 = (ulong)(bVar1 >> 1);
                  *(byte *)puVar10 = bVar1 + 2;
                  pbVar8 = pbStack_68;
                }
                else {
                  uVar17 = puVar10[1];
                  uVar18 = *puVar10 & 0xfffffffffffffffe;
                  uVar15 = uVar18 - 1;
                  if (uVar17 == uVar15) {
                    if (uVar18 != 0xfffffffffffffff8) {
                      pbVar13 = (byte *)puVar10[2];
                      uVar17 = 0xfffffffffffffff7;
                      if (uVar15 < 0x7ffffffffffffff3) {
                        uVar18 = uVar15 * 2 | 7;
                        uVar17 = uVar18 + 1;
                        if (uVar18 == 0x17) {
                          uVar17 = 0x1a;
                        }
                        if (uVar15 < 0xc) {
                          uVar17 = 0x17;
                        }
                        goto code_r0x048adbbe;
                      }
                      goto code_r0x048adbfe;
                    }
                    func_0x04882e30();
                    goto code_r0x048adc77;
                  }
                  pbVar8 = (byte *)puVar10[2];
code_r0x048adb1a:
                  puVar10[1] = uVar17 + 1;
                }
                pbVar8[uVar17] = bVar5;
                pbVar8[uVar17 + 1] = 0;
                lVar14 = lVar14 + 1;
              } while (lVar16 != lVar14);
            }
            else {
              if (uVar6 < 0x800) {
                uStack_98 = (ushort)(CONCAT11(bVar5,(char)(uVar15 >> 6)) | 0xc0) & 0xffff3fff |
                            0x8000;
                lVar16 = 2;
                goto code_r0x048adaf0;
              }
              if (uVar6 == 0xfffe) {
                uStack_98 = 0xfe;
                lVar16 = 1;
                goto code_r0x048adaf0;
              }
              if (uVar6 == 0xffff) {
                uStack_98 = 0xff;
                lVar16 = 1;
                goto code_r0x048adaf0;
              }
              if (uVar6 < 0x10000) {
                uStack_98 = (CONCAT12(bVar5,CONCAT11((char)(uVar15 >> 6),(char)(uVar15 >> 0xc))) &
                             0xff3fff | 0x80e0) & 0xff3fffff | 0x800000;
                lVar16 = 3;
                goto code_r0x048adaf0;
              }
              if (uVar6 < 0x110000) {
                uStack_98 = CONCAT13(bVar5,CONCAT12((char)(uVar15 >> 6),
                                                    CONCAT11((char)(uVar15 >> 0xc),
                                                             (char)(uVar15 >> 0x12)))) & 0x3f3f3fff
                            | 0x808080f0;
                lVar16 = 4;
                goto code_r0x048adaf0;
              }
            }
            bVar19 = false;
            param_3 = lStack_48;
          }
          pbVar13 = pbStack_40 + lStack_58;
          param_2 = lStack_88;
          param_1 = puStack_90;
          if (lStack_78 == 0) break;
        }
      }
LAB_048ad6df:
      lStack_80 = lStack_80 + 1;
    } while (lStack_80 != param_3);
  }
  return param_1;
}


