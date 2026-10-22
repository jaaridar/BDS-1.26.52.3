# Decompiled bodies, part 9

> Mechanically generated pseudocode from the proprietary BDS binary.
> Not original source; not MIT-licensed OpenBDS code.

## `ed8b1a0`

- instructions: 15
- calls: 4108328, 651fc60

```c

undefined8 FUN_0ed8b1a0(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_RAX;
  undefined *puVar6;
  
  if ((DAT_0f57c720 != '\0') || (iVar3 = FUN_04108328(&DAT_0f57c720), iVar3 == 0)) {
    return in_RAX;
  }
  func_0x0651fc60(0xf57c708);
  DAT_0f57c720 = 1;
  iVar3 = pthread_mutex_lock(0xf546fb8);
  bVar1 = bRam000000000f57c721;
  if (iVar3 == 0) {
    bRam000000000f57c721 = 1;
    uVar4 = pthread_mutex_unlock(0xf546fb8);
    if ((int)uVar4 == 0) {
      if ((bVar1 & 4) == 0) {
        return uVar4;
      }
      uVar4 = pthread_cond_broadcast(0xf546f88);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    else {
      FUN_041085a0(&UNK_011b4e86,&UNK_01287bcb);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  lVar5 = FUN_041085a0(puVar6,&UNK_01287bcb);
  FUN_04882e20();
  iVar3 = pthread_mutex_lock(0xf546fb8);
  if (iVar3 == 0) {
    *(undefined4 *)(lVar5 + 4) = 0;
    bVar1 = *(byte *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = 0;
    uVar4 = pthread_mutex_unlock(0xf546fb8);
    if ((int)uVar4 == 0) {
      if ((bVar1 & 4) == 0) {
        return uVar4;
      }
      uVar4 = pthread_cond_broadcast(0xf546f88);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    else {
      FUN_041085a0(&UNK_011b4e86,&UNK_013a8ef1);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  uVar4 = FUN_041085a0(puVar6,&UNK_013a8ef1);
  FUN_04882e20(uVar4);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


```

## `ed8b1e0`

- instructions: 15
- calls: 4108328, 48b2120

```c

undefined8 FUN_0ed8b1e0(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_RAX;
  undefined *puVar6;
  
  if ((DAT_0f550b10 != '\0') || (iVar3 = FUN_04108328(&DAT_0f550b10), iVar3 == 0)) {
    return in_RAX;
  }
  func_0x048b2120(0xf550af8);
  DAT_0f550b10 = 1;
  iVar3 = pthread_mutex_lock(0xf546fb8);
  bVar1 = bRam000000000f550b11;
  if (iVar3 == 0) {
    bRam000000000f550b11 = 1;
    uVar4 = pthread_mutex_unlock(0xf546fb8);
    if ((int)uVar4 == 0) {
      if ((bVar1 & 4) == 0) {
        return uVar4;
      }
      uVar4 = pthread_cond_broadcast(0xf546f88);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    else {
      FUN_041085a0(&UNK_011b4e86,&UNK_01287bcb);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  lVar5 = FUN_041085a0(puVar6,&UNK_01287bcb);
  FUN_04882e20();
  iVar3 = pthread_mutex_lock(0xf546fb8);
  if (iVar3 == 0) {
    *(undefined4 *)(lVar5 + 4) = 0;
    bVar1 = *(byte *)(lVar5 + 1);
    *(undefined1 *)(lVar5 + 1) = 0;
    uVar4 = pthread_mutex_unlock(0xf546fb8);
    if ((int)uVar4 == 0) {
      if ((bVar1 & 4) == 0) {
        return uVar4;
      }
      uVar4 = pthread_cond_broadcast(0xf546f88);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    else {
      FUN_041085a0(&UNK_011b4e86,&UNK_013a8ef1);
    }
    puVar6 = &UNK_014756f7;
  }
  else {
    puVar6 = &UNK_01239448;
  }
  uVar4 = FUN_041085a0(puVar6,&UNK_013a8ef1);
  FUN_04882e20(uVar4);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


```

## `ed8bc80`

- instructions: 1084
- calls: 412a280, 412e5e0, 412f5e0, 412f8c0, 470d9a0, 4882e20, 4882e30, 4882eb0, 488e200, 48aead0, 48b0900, 49060a0, 49063d0, 5d84ba0, 5d9a920, 7920390, 7cefc90, ed6ae90, ed6b140, ed77d90, ed8ce50, ed98bc0, ed98bd0, ed99f70 …

```c

/* WARNING: Removing unreachable block (ram,0x0ed8cc97) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0ed8bc80(long *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long ******pppppplVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  long lVar11;
  long *******ppppppplVar12;
  undefined8 uVar13;
  byte *pbVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *extraout_RDX;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong unaff_RBP;
  undefined4 *puVar25;
  char *pcVar26;
  undefined8 uVar27;
  undefined *puVar28;
  long *unaff_R13;
  ulong uVar29;
  undefined4 *puVar30;
  undefined8 *unaff_R14;
  undefined4 *puVar31;
  bool bVar32;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined4 *puStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  code *pcStack_1c8;
  int iStack_1c0;
  char cStack_1bc;
  undefined8 uStack_1b8;
  long lStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined4 uStack_198;
  undefined4 *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined4 *puStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  code *pcStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *******appppppplStack_a8 [3];
  code *pcStack_90;
  int iStack_88;
  char cStack_84;
  undefined8 uStack_80;
  long lStack_78;
  code *pcStack_70;
  long lStack_60;
  long lStack_58;
  long ******pppppplStack_50;
  undefined4 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  lVar11 = *param_2;
  uStack_10c = param_3;
  if (lVar11 == 0) {
    pcStack_140 = (code *)0xed8bcad;
    lVar11 = FUN_048aead0(param_2[1]);
  }
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar32 = (*(byte *)(lVar11 + 8) & 1) != 0;
    uVar21 = lVar11 + 9;
    if (bVar32) {
      uVar21 = *(ulong *)(lVar11 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar32) {
      uVar22 = *(ulong *)(lVar11 + 0x10);
    }
    plStack_b0 = param_1;
    if (*param_2 == 0) {
      pcStack_140 = (code *)0xed8bd21;
      lVar11 = FUN_048aead0(param_2[1]);
      if (*(long *)(lVar11 + 0x78) != 0) goto LAB_0ed8bcf8;
LAB_0ed8bd30:
      param_1 = (long *)0x0;
      lVar24 = 0;
      unaff_R13 = (long *)0x0;
      if (uVar22 != 0) goto LAB_0ed8bdd0;
LAB_0ed8bd41:
      plVar18 = (long *)*param_2;
      if (plVar18 == (long *)0x0) {
        pcStack_140 = (code *)0xed8bd54;
        plVar18 = (long *)FUN_048aead0(param_2[1]);
      }
      uVar21 = *(ulong *)(*plVar18 + 8);
      uVar22 = *(ulong *)(*plVar18 + 0x10);
      if (unaff_R13 == param_1) goto LAB_0ed8bd64;
    }
    else {
      if (*(long *)(*param_2 + 0x78) == 0) goto LAB_0ed8bd30;
LAB_0ed8bcf8:
      lVar11 = *param_2;
      lVar24 = param_2[1];
      if (lVar11 == 0) {
        pcStack_140 = (code *)0xed8bda1;
        lVar23 = FUN_048aead0(lVar24);
        lVar11 = *param_2;
        unaff_R13 = *(long **)(*(long *)(lVar23 + 0x78) + 0x48);
        if (lVar11 == 0) {
          pcStack_140 = (code *)0xed8bdbf;
          lVar11 = FUN_048aead0(param_2[1]);
        }
      }
      else {
        unaff_R13 = *(long **)(*(long *)(lVar11 + 0x78) + 0x48);
      }
      param_1 = *(long **)(*(long *)(lVar11 + 0x78) + 0x50);
      if (uVar22 == 0) goto LAB_0ed8bd41;
LAB_0ed8bdd0:
      if (unaff_R13 == param_1) {
LAB_0ed8bd64:
        plVar18 = plStack_b0;
        pcStack_140 = (code *)0xed8bd94;
        uStack_108 = uVar21;
        uStack_100 = uVar22;
        FUN_0470d9a0(plStack_b0,&UNK_01306929,0x47,0xd,&uStack_108);
        return plVar18;
      }
    }
    pcStack_140 = (code *)0xed8be02;
    uStack_108 = uVar21;
    uStack_100 = uVar22;
    FUN_0470d9a0(&bStack_c8,&UNK_01372f19,0x46,0xd,&uStack_108);
    plStack_130 = (long *)0x0;
    plStack_128 = (long *)0x0;
    plStack_118 = (long *)0x0;
    do {
      unaff_R14 = &uStack_108;
      uStack_48 = (undefined4)*unaff_R13;
      pcStack_140 = (code *)0xed8be4f;
      plStack_40 = unaff_R13;
      lStack_38 = lVar24;
      lVar11 = (*(code *)unaff_R13[7])(lVar24);
      if (lVar24 == param_2[1]) {
        iVar2 = *(int *)(lVar11 + 8);
        if (*param_2 == 0) {
          pcStack_140 = (code *)0xed8be71;
          lVar11 = FUN_048aead0();
          iVar1 = *(int *)(lVar11 + 8);
        }
        else {
          iVar1 = *(int *)(*param_2 + 8);
        }
        if (iVar2 == iVar1) {
          uStack_d8 = 0;
          lStack_d0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          lStack_f8 = 0;
          pcStack_f0 = (code *)0x0;
          uStack_108 = 0;
          uStack_100 = 0;
          pcStack_140 = (code *)0xed8be95;
          FUN_05d84ba0(unaff_R14);
          pcStack_140 = (code *)0xed8bead;
          FUN_05d9a920(appppppplStack_a8,&plStack_40,unaff_R14);
          if (pcStack_f0 != (code *)0x0) {
            pcStack_140 = (code *)0xed8bebc;
            (*pcStack_f0)(unaff_R14);
          }
          plVar18 = plStack_130;
          plVar15 = plStack_128;
          if ((((int)plStack_40[10] == -0x45dcb126) &&
              (plVar3 = (long *)plStack_40[0xb], plVar3 != (long *)0x0)) &&
             (plStack_120 = plVar3, (*(byte *)((long)plVar3 + 0xa9) & (byte)uStack_10c) != 0)) {
            if (iStack_88 == -0x3d1320ad) {
              bVar32 = false;
            }
            else {
              pcStack_140 = (code *)0xed8bf17;
              FUN_07920390(unaff_R14,appppppplStack_a8);
              lVar11 = lStack_d0;
              if ((lStack_d0 != 0) && ((byte)(uStack_e8._4_1_ - 1U) < 2)) {
                pcStack_140 = (code *)0xed8bf3c;
                FUN_048b0900(appppppplStack_a8,unaff_R14);
              }
              if (pcStack_f0 != (code *)0x0) {
                pcStack_140 = (code *)0xed8bf4b;
                (*pcStack_f0)(unaff_R14);
              }
              plVar18 = plStack_130;
              plVar15 = plStack_128;
              if (lVar11 == 0) goto joined_r0x0ed8c1c9;
              bVar32 = iStack_88 != -0x3d1320ad;
            }
            uVar13 = uStack_80;
            ppppppplVar12 = appppppplStack_a8[0];
            if (cStack_84 == '\x02') {
              ppppppplVar12 = (long *******)appppppplStack_a8;
            }
            if ((bool)(ppppppplVar12 == (long *******)0x0 | bVar32)) {
              if (lStack_78 == 0) {
                pcStack_140 = (code *)0xed8bfc3;
                (*pcStack_70)(0,appppppplStack_a8,0);
              }
              ppppppplVar12 = appppppplStack_a8[0];
              if (cStack_84 == '\x02') {
                ppppppplVar12 = (long *******)appppppplStack_a8;
              }
              pcStack_140 = (code *)0xed8bff7;
              ppppppplVar12 = (long *******)FUN_0488e200(uVar13,lStack_78,0xc2ecdf53,ppppppplVar12);
            }
            pppppplVar4 = *ppppppplVar12;
            if (plStack_118 <= plStack_128) {
              plStack_128 = (long *)((long)plStack_128 - (long)plStack_130);
              unaff_RBP = ((long)plStack_128 >> 3) * -0x5555555555555555 + 1;
              if (unaff_RBP < 0xaaaaaaaaaaaaaab) {
                lStack_58 = (long)plStack_118 - (long)plStack_130;
                uVar21 = (lStack_58 >> 3) * 0x5555555555555556;
                if (unaff_RBP < uVar21) {
                  unaff_RBP = uVar21;
                }
                if (0x555555555555554 < (ulong)((lStack_58 >> 3) * -0x5555555555555555)) {
                  unaff_RBP = 0xaaaaaaaaaaaaaaa;
                }
                pppppplStack_50 = pppppplVar4;
                if (unaff_RBP < 0xaaaaaaaaaaaaaab) {
                  lStack_60 = unaff_RBP * 0x18;
                  pcStack_140 = (code *)0xed8c0f3;
                  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                  if (lVar11 == 0) {
                    pcStack_140 = (code *)0xed8c202;
                    FUN_0eec74c0(lStack_60,0);
                  }
                  plVar3 = plStack_130;
                  bVar32 = (*(byte *)(plStack_120 + 5) & 1) != 0;
                  lVar23 = (long)plStack_120 + 0x29;
                  if (bVar32) {
                    lVar23 = plStack_120[7];
                  }
                  uVar21 = (ulong)(*(byte *)(plStack_120 + 5) >> 1);
                  if (bVar32) {
                    uVar21 = plStack_120[6];
                  }
                  plStack_118 = (long *)(lVar11 + unaff_RBP * 0x18);
                  *(long *)(lVar11 + (long)plStack_128) = lVar23;
                  *(ulong *)(lVar11 + 8 + (long)plStack_128) = uVar21;
                  *(long *******)(lVar11 + 0x10 + (long)plStack_128) = pppppplStack_50;
                  uVar21 = SUB168(SEXT816((long)plStack_128) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                  plStack_120 = (long *)(lVar11 + (long)plStack_128 + 0x18);
                  plVar18 = (long *)(lVar11 + (long)plStack_128 +
                                    ((uVar21 >> 2) - ((long)uVar21 >> 0x3f)) * 0x18);
                  pcStack_140 = (code *)0xed8c195;
                  memcpy(plVar18,plStack_130,plStack_128);
                  plVar15 = plStack_120;
                  if (plVar3 != (long *)0x0) {
                    pcStack_140 = (code *)0xed8c1aa;
                    FUN_0412a280(plVar3,lStack_58);
                    plVar15 = plStack_120;
                  }
                  goto joined_r0x0ed8c1c9;
                }
                pcStack_140 = (code *)0xed8c436;
                FUN_04882eb0();
              }
              pcStack_140 = (code *)0xed8c43b;
              FUN_0ed98bc0();
              goto LAB_0ed8c43b;
            }
            bVar32 = (*(byte *)(plStack_120 + 5) & 1) != 0;
            lVar11 = (long)plStack_120 + 0x29;
            if (bVar32) {
              lVar11 = plStack_120[7];
            }
            uVar21 = (ulong)(*(byte *)(plStack_120 + 5) >> 1);
            if (bVar32) {
              uVar21 = plStack_120[6];
            }
            *plStack_128 = lVar11;
            plStack_128[1] = uVar21;
            plStack_128[2] = (long)pppppplVar4;
            plVar18 = plStack_130;
            plVar15 = plStack_128 + 3;
          }
joined_r0x0ed8c1c9:
          plStack_128 = plVar15;
          plStack_130 = plVar18;
          if (pcStack_90 != (code *)0x0) {
            pcStack_140 = (code *)0xed8c1d9;
            (*pcStack_90)(appppppplStack_a8);
          }
        }
      }
      plVar15 = plStack_128;
      plVar18 = plStack_130;
      unaff_R13 = unaff_R13 + 0xd;
    } while (unaff_R13 != param_1);
    uVar21 = ((long)plStack_128 - (long)plStack_130 >> 3) * -0x5555555555555555;
    lVar11 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar20 = 0;
    if (plStack_128 != plStack_130) {
      uVar20 = ((uint)lVar11 ^ 0x3f) * 2 ^ 0x7e;
    }
    pcStack_140 = (code *)0xed8c24f;
    FUN_0ed98bd0(plStack_130,plStack_128,uVar20,1);
    plVar3 = plStack_b0;
    if (plVar15 != plVar18) {
      pcStack_140 = (code *)0xed8c276;
      uVar13 = FUN_0412f8c0(&bStack_c8,&UNK_0125506d,1);
      pcStack_140 = (code *)0xed8c285;
      uVar13 = FUN_0412f8c0(uVar13,*plVar18,plVar18[1]);
      pcStack_140 = (code *)0xed8c299;
      FUN_0412f8c0(uVar13,&UNK_0125506d,1);
      if (plVar18 + 3 != plVar15) {
        pcStack_140 = (code *)0xed8c2bc;
        uVar13 = FUN_0412f8c0(&bStack_c8,&UNK_011b4bd9,3);
        pcStack_140 = (code *)0xed8c2cc;
        uVar13 = FUN_0412f8c0(uVar13,plVar18[3],plVar18[4]);
        pcStack_140 = (code *)0xed8c2e0;
        FUN_0412f8c0(uVar13,&UNK_0125506d,1);
        if (plVar18 + 6 != plVar15) {
          pcStack_140 = (code *)0xed8c303;
          uVar13 = FUN_0412f8c0(&bStack_c8,&UNK_011b4bd9,3);
          pcStack_140 = (code *)0xed8c313;
          uVar13 = FUN_0412f8c0(uVar13,plVar18[6],plVar18[7]);
          pcStack_140 = (code *)0xed8c327;
          FUN_0412f8c0(uVar13,&UNK_0125506d,1);
          if (plVar18 + 9 != plVar15) {
            appppppplStack_a8[0] = (long *******)(uVar21 - 3);
            pcStack_140 = (code *)0xed8c35f;
            FUN_0470d9a0(&uStack_108,&UNK_012390ca,0x11,3,appppppplStack_a8);
            goto LAB_0ed8c387;
          }
        }
      }
    }
    uStack_108 = 0;
    uStack_100 = 0;
    lStack_f8 = 0;
    uStack_108._0_1_ = 0;
LAB_0ed8c387:
    bVar32 = ((byte)uStack_108 & 1) != 0;
    lVar11 = (long)&uStack_108 + 1;
    if (bVar32) {
      lVar11 = lStack_f8;
    }
    uVar21 = (ulong)((byte)uStack_108 >> 1);
    if (bVar32) {
      uVar21 = uStack_100;
    }
    pcStack_140 = (code *)0xed8c3aa;
    pbVar14 = (byte *)FUN_0412f8c0(&bStack_c8,lVar11,uVar21);
    if ((*pbVar14 & 1) == 0) {
      plVar3[2] = *(long *)(pbVar14 + 0x10);
      uVar6 = *(undefined4 *)(pbVar14 + 4);
      uVar7 = *(undefined4 *)(pbVar14 + 8);
      uVar8 = *(undefined4 *)(pbVar14 + 0xc);
      *(undefined4 *)plVar3 = *(undefined4 *)pbVar14;
      *(undefined4 *)((long)plVar3 + 4) = uVar6;
      *(undefined4 *)(plVar3 + 1) = uVar7;
      *(undefined4 *)((long)plVar3 + 0xc) = uVar8;
    }
    else {
      pcStack_140 = (code *)0xed8c3d0;
      FUN_0412e5e0(plVar3,*(undefined8 *)(pbVar14 + 0x10),*(undefined8 *)(pbVar14 + 8));
    }
    if ((uStack_108 & 1) != 0) {
      pcStack_140 = (code *)0xed8c3ea;
      FUN_0412a280(lStack_f8,uStack_108 & 0xfffffffffffffffe);
    }
    if (plVar18 != (long *)0x0) {
      pcStack_140 = (code *)0xed8c3ff;
      FUN_0412a280(plVar18,(long)plStack_118 - (long)plVar18);
    }
    if ((bStack_c8 & 1) != 0) {
      pcStack_140 = (code *)0xed8c41c;
      FUN_0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
    }
    return plVar3;
  }
LAB_0ed8c43b:
  plVar18 = (long *)&UNK_0132214c;
  puVar28 = &UNK_0145b8d7;
  pcStack_140 = (code *)0xed8c463;
  uVar13 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                     (&UNK_0138cf53,&UNK_014c5581,0xe);
  _DAT_00000000 = 0xdeadc0de;
  if (plStack_130 != (long *)0x0) goto LAB_0ed8c509;
  while ((bStack_c8 & 1) == 0) {
    pcStack_140 = (code *)0xed8c509;
    _Unwind_Resume(uVar13);
LAB_0ed8c509:
    pcStack_140 = (code *)0xed8c51b;
    FUN_0412a280(plStack_130,(long)plStack_118 - (long)plStack_130);
  }
  puVar25 = (undefined4 *)(CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  pcStack_140 = (code *)0xed8c538;
  FUN_0412a280(uStack_b8);
  pcStack_140 = FUN_0ed8c540;
  uVar27 = uVar13;
  _Unwind_Resume();
  puVar16 = &uStack_230;
  plVar15 = (long *)*extraout_RDX;
  puStack_1a0 = puVar28;
  uStack_180 = uVar27;
  plStack_170 = plVar18;
  uStack_168 = uVar13;
  plStack_160 = param_2;
  plStack_158 = unaff_R13;
  puStack_150 = unaff_R14;
  plStack_148 = param_1;
  pcStack_140 = (code *)unaff_RBP;
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)FUN_048aead0(extraout_RDX[1]);
  }
  *puVar25 = *(undefined4 *)(*plVar15 + 4);
  puVar25[1] = 0xd;
  *(undefined1 *)(puVar25 + 2) = 1;
  lVar11 = *extraout_RDX;
  if (lVar11 == 0) {
    lVar11 = FUN_048aead0(extraout_RDX[1]);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0ed8c5b9;
LAB_0ed8c5e1:
    plVar18 = (long *)*extraout_RDX;
    if (plVar18 == (long *)0x0) {
      plVar18 = (long *)FUN_048aead0(extraout_RDX[1]);
    }
    lVar11 = *plVar18;
    uStack_1e0._0_4_ = *(undefined4 *)(lVar11 + 8);
    uStack_1e0._4_4_ = *(undefined4 *)(lVar11 + 0xc);
    uStack_1d8 = *(undefined4 *)(lVar11 + 0x10);
    uStack_1d4 = *(undefined4 *)(lVar11 + 0x14);
    FUN_0470d9a0(&uStack_230,&UNK_01443f90,0x2a,0xd,&uStack_1e0);
    lVar11 = lStack_220;
    if (((ulong)uStack_230 & 1) == 0) {
      lVar11 = (long)&uStack_230 + 1;
    }
    cVar9 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                      (lVar11,&UNK_01254b9d,0x27,&UNK_013dbc98,&UNK_013dbcdf);
    if (((ulong)uStack_230 & 1) != 0) {
      FUN_0412a280(lStack_220,(ulong)uStack_230 & 0xfffffffffffffffe);
    }
    if (cVar9 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar19 = (undefined8 *)0x0;
    bVar10 = bRam0000000000000008;
    if ((bRam0000000000000008 & 1) == 0) goto LAB_0ed8c688;
LAB_0ed8c5cf:
    if (puVar19[2] == 0) goto LAB_0ed8c693;
  }
  else {
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0ed8c5e1;
LAB_0ed8c5b9:
    puVar19 = *(undefined8 **)(lVar11 + 0x68);
    if (puVar19 == (undefined8 *)0x0) goto LAB_0ed8c5e1;
    bVar10 = *(byte *)(puVar19 + 1);
    if ((bVar10 & 1) != 0) goto LAB_0ed8c5cf;
LAB_0ed8c688:
    if (bVar10 >> 1 == 0) {
LAB_0ed8c693:
      plVar18 = (long *)*extraout_RDX;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)FUN_048aead0(extraout_RDX[1]);
      }
      lVar11 = *plVar18;
      uStack_1e0._0_4_ = *(undefined4 *)(lVar11 + 8);
      uStack_1e0._4_4_ = *(undefined4 *)(lVar11 + 0xc);
      uStack_1d8 = *(undefined4 *)(lVar11 + 0x10);
      uStack_1d4 = *(undefined4 *)(lVar11 + 0x14);
      FUN_0470d9a0(&uStack_230,&UNK_0145b837,0x31,0xd,&uStack_1e0);
      lVar11 = lStack_220;
      if (((ulong)uStack_230 & 1) == 0) {
        lVar11 = (long)&uStack_230 + 1;
      }
      cVar9 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                        (lVar11,&UNK_01254ba8,0x2b,&UNK_013dbc98,&UNK_013dbcdf);
      if (((ulong)uStack_230 & 1) != 0) {
        FUN_0412a280(lStack_220,(ulong)uStack_230 & 0xfffffffffffffffe);
      }
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
  }
  bVar32 = (*(byte *)(puVar19 + 1) & 1) != 0;
  uVar21 = (long)puVar19 + 9;
  if (bVar32) {
    uVar21 = puVar19[3];
  }
  uVar22 = (ulong)(*(byte *)(puVar19 + 1) >> 1);
  if (bVar32) {
    uVar22 = puVar19[2];
  }
  if (*(char *)(puVar25 + 10) == '\x01') {
    FUN_0412f5e0(puVar25 + 4,uVar21,uVar22);
    lVar11 = *extraout_RDX;
    if (lVar11 == 0) goto LAB_0ed8c81e;
LAB_0ed8c761:
    if (*(long *)(lVar11 + 0x78) == 0) goto LAB_0ed8c837;
LAB_0ed8c771:
    lVar24 = *extraout_RDX;
    lVar11 = extraout_RDX[1];
    if (lVar24 == 0) {
      puStack_1f0 = puVar25;
      lVar23 = FUN_048aead0(lVar11);
      lVar24 = *extraout_RDX;
      puVar31 = *(undefined4 **)(*(long *)(lVar23 + 0x78) + 0x48);
      if (lVar24 == 0) {
        lVar24 = FUN_048aead0(extraout_RDX[1]);
      }
    }
    else {
      puVar31 = *(undefined4 **)(*(long *)(lVar24 + 0x78) + 0x48);
      puStack_1f0 = puVar25;
    }
    puVar30 = *(undefined4 **)(*(long *)(lVar24 + 0x78) + 0x50);
  }
  else {
    if (0xfffffffffffffff7 < uVar22) {
      uVar13 = FUN_04882e30();
      if (pcStack_1c8 != (code *)0x0) {
        (*pcStack_1c8)(&uStack_1e0);
      }
      plVar18 = (long *)_Unwind_Resume(uVar13);
      FUN_04882e20();
      plVar15 = extraout_RDX;
      goto code_r0x0ed8ce50;
    }
    if (uVar22 < 0x17) {
      *(char *)(puVar25 + 4) = (char)uVar22 * '\x02';
      lVar11 = (long)puVar25 + 0x11;
      if (uVar22 != 0) goto LAB_0ed8c7fe;
    }
    else {
      uVar29 = 0x1a;
      if ((uVar22 | 7) != 0x17) {
        uVar29 = (uVar22 | 7) + 1;
      }
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
      if (lVar11 == 0) {
        FUN_0eec74c0(uVar29,0);
      }
      *(long *)(puVar25 + 8) = lVar11;
      *(ulong *)(puVar25 + 4) = uVar29 | 1;
      *(ulong *)(puVar25 + 6) = uVar22;
LAB_0ed8c7fe:
      ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(lVar11,uVar21,uVar22);
    }
    *(undefined1 *)(lVar11 + uVar22) = 0;
    *(undefined1 *)(puVar25 + 10) = 1;
    lVar11 = *extraout_RDX;
    if (lVar11 != 0) goto LAB_0ed8c761;
LAB_0ed8c81e:
    lVar11 = FUN_048aead0(extraout_RDX[1]);
    if (*(long *)(lVar11 + 0x78) != 0) goto LAB_0ed8c771;
LAB_0ed8c837:
    puVar30 = (undefined4 *)0x0;
    lVar11 = 0;
    puVar31 = (undefined4 *)0x0;
    puStack_1f0 = puVar25;
  }
  plStack_1e8 = (long *)(puStack_1f0 + 0x7e);
  puVar25 = puStack_1f0;
  if ((*(char *)(puStack_1f0 + 0x84) == '\x01') && (lVar24 = *plStack_1e8, lVar24 != 0)) {
    lVar23 = *(long *)(puStack_1f0 + 0x80);
    while (puStack_1f0 = puVar25, lVar24 != lVar23) {
      lVar23 = lVar23 + -0x80;
      FUN_049063d0(lVar23);
      puVar25 = puStack_1f0;
    }
    *(long *)(puVar25 + 0x80) = lVar24;
    FUN_0412a280();
  }
  *plStack_1e8 = 0;
  plStack_1e8[1] = 0;
  plStack_1e8[2] = 0;
  *(undefined1 *)(puVar25 + 0x84) = 1;
  if (puVar31 != puVar30) {
    FUN_0ed8ce50(plStack_1e8,(ulong)((long)puVar30 + (-0x68 - (long)puVar31)) / 0x68 + 1);
    puStack_178 = puVar30;
    do {
      uStack_198 = *puVar31;
      puStack_190 = puVar31;
      lStack_188 = lVar11;
      plVar18 = (long *)(**(code **)(puVar31 + 0xe))(lVar11);
      if (lVar11 == extraout_RDX[1]) {
        lVar24 = plVar18[1];
        plVar18 = (long *)*extraout_RDX;
        if (plVar18 == (long *)0x0) {
          plVar18 = (long *)FUN_048aead0();
          iVar2 = (int)plVar18[1];
        }
        else {
          iVar2 = (int)plVar18[1];
        }
        if ((int)lVar24 == iVar2) {
          lVar24 = *(long *)(puStack_190 + 0x16);
          if ((*(byte *)(lVar24 + 0xa9) & (byte)plStack_170) == 0) {
            return plStack_170;
          }
          uStack_200 = 0;
          lStack_1f8 = 0;
          uStack_210 = 0;
          uStack_208 = 0;
          lStack_220 = 0;
          pcStack_218 = (code *)0x0;
          uStack_230 = (undefined8 *)0x0;
          uStack_228 = 0;
          FUN_05d84ba0(&uStack_230);
          FUN_05d9a920(&uStack_1e0,&puStack_190,&uStack_230);
          if (pcStack_218 != (code *)0x0) {
            (*pcStack_218)(&uStack_230);
          }
          if (iStack_1c0 == -0x3d1320ad) {
LAB_0ed8ca3b:
            puVar16 = *(undefined8 **)(puStack_1f0 + 0x80);
            if (puVar16 < *(undefined8 **)(puStack_1f0 + 0x82)) {
              puVar16[0xe] = 0;
              puVar16[0xf] = 0;
              puVar16[0xc] = 0;
              puVar16[0xd] = 0;
              puVar16[10] = 0;
              puVar16[0xb] = 0;
              puVar16[8] = 0;
              puVar16[9] = 0;
              puVar16[6] = 0;
              puVar16[7] = 0;
              puVar16[4] = 0;
              puVar16[5] = 0;
              puVar16[2] = 0;
              puVar16[3] = 0;
              *puVar16 = 0;
              puVar16[1] = 0;
              puVar16 = puVar16 + 0x10;
            }
            else {
              puVar16 = (undefined8 *)FUN_0ed9a170(plStack_1e8);
            }
            uVar13 = uStack_1b8;
            *(undefined8 **)(puStack_1f0 + 0x80) = puVar16;
            puVar19 = (undefined8 *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
            puVar17 = puVar19;
            if (cStack_1bc == '\x02') {
              puVar17 = &uStack_1e0;
            }
            if (puVar17 == (undefined8 *)0x0 || iStack_1c0 != -0x3d1320ad) {
              if (lStack_1b0 == 0) {
                (*pcStack_1a8)(0,&uStack_1e0,0);
                puVar19 = (undefined8 *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
              }
              if (cStack_1bc == '\x02') {
                puVar19 = &uStack_1e0;
              }
              puVar17 = (undefined8 *)FUN_0488e200(uVar13,lStack_1b0,0xc2ecdf53,puVar19);
            }
            puVar16[-0x10] = *puVar17;
            uVar13 = FUN_0ed6ae90(&puStack_190);
            FUN_0412f5e0(puVar16 + -0xf,uVar13);
            if ((((ulong)puStack_1a0 >> 0x25 & 1) != 0) &&
               (bVar10 = *(byte *)(lVar24 + 0xa9), (bVar10 & 1) == 0)) {
              bVar10 = bVar10 - 1;
              lVar24 = 7;
              pcVar26 = "unknown";
              if (bVar10 < 4) {
                lVar23 = (ulong)bVar10 * 8;
                lVar24 = *(long *)(&UNK_014eec20 + lVar23);
                pcVar26 = *(char **)(&UNK_0f4e67a0 + lVar23);
              }
              if (*(char *)(puVar16 + -1) == '\x01') {
                FUN_0412f5e0(puVar16 + -4,pcVar26,lVar24);
              }
              else {
                *(char *)(puVar16 + -4) = (char)lVar24 * '\x02';
                memcpy((long)puVar16 + -0x1f,pcVar26,lVar24);
                *(undefined1 *)((long)puVar16 + lVar24 + -0x1f) = 0;
                *(undefined1 *)(puVar16 + -1) = 1;
              }
            }
            if (((ulong)puStack_1a0 >> 0x30 & 1) != 0) {
              pbVar14 = (byte *)FUN_0ed6b140(*extraout_RDX,extraout_RDX[1],uStack_198);
              if (pbVar14 != (byte *)0x0) {
                if ((*pbVar14 & 1) == 0) {
                  lStack_220 = *(long *)(pbVar14 + 0x10);
                  uStack_230 = *(undefined8 **)pbVar14;
                  uStack_228 = *(long *)(pbVar14 + 8);
                }
                else {
                  FUN_0412e5e0(&uStack_230,*(long *)(pbVar14 + 0x10),*(long *)(pbVar14 + 8));
                }
                pcStack_218 = (code *)CONCAT71(pcStack_218._1_7_,1);
                pbVar14 = (byte *)(puVar16 + -0xc);
                if (*(char *)(puVar16 + -9) == '\0') {
                  puVar16[-10] = lStack_220;
                  *(undefined8 **)pbVar14 = uStack_230;
                  puVar16[-0xb] = uStack_228;
                  uStack_230 = (undefined8 *)0x0;
                  uStack_228 = 0;
                  lStack_220 = 0;
                  *(undefined1 *)(puVar16 + -9) = 1;
                }
                else {
                  if ((*pbVar14 & 1) != 0) {
                    FUN_0412a280(puVar16[-10],puVar16[-0xc] & 0xfffffffffffffffe);
                  }
                  puVar16[-10] = lStack_220;
                  *(undefined4 *)pbVar14 = (undefined4)uStack_230;
                  *(undefined4 *)((long)puVar16 + -0x5c) = uStack_230._4_4_;
                  *(undefined4 *)(puVar16 + -0xb) = (undefined4)uStack_228;
                  *(undefined4 *)((long)puVar16 + -0x54) = uStack_228._4_4_;
                  uStack_230 = (undefined8 *)((ulong)uStack_230 & 0xffffffffffff0000);
                }
              }
              if (((puStack_190 != (undefined4 *)0x0) && (puStack_190[0x14] == -0x45dcb126)) &&
                 (*(long *)(puStack_190 + 0x16) != 0)) {
                FUN_0ed77d90(&uStack_230,uStack_180,*(long *)(puStack_190 + 0x16) + 0x40);
                if (lStack_220 != 0) {
                  if (*(char *)(puVar16 + -5) == '\0') {
                    puVar16[-8] = uStack_230;
                    puVar16[-7] = uStack_228;
                    puVar16[-6] = lStack_220;
LAB_0ed8cd4a:
                    *(undefined8 **)(uStack_228 + 0x10) = puVar16 + -7;
                    uStack_230 = &uStack_228;
                    uStack_228 = 0;
                    lStack_220 = 0;
                  }
                  else {
                    FUN_049060a0(puVar16 + -8,puVar16[-7]);
                    puVar16[-8] = uStack_230;
                    puVar16[-7] = uStack_228;
                    puVar16[-6] = lStack_220;
                    if (lStack_220 != 0) goto LAB_0ed8cd4a;
                    puVar16[-8] = puVar16 + -7;
                  }
                  *(undefined1 *)(puVar16 + -5) = 1;
                }
                FUN_049060a0(&uStack_230,uStack_228);
              }
            }
          }
          else {
            FUN_07920390(&uStack_230,&uStack_1e0);
            lVar23 = lStack_1f8;
            if ((lStack_1f8 != 0) && ((byte)(uStack_210._4_1_ - 1U) < 2)) {
              FUN_048b0900(&uStack_1e0,&uStack_230);
            }
            if (pcStack_218 != (code *)0x0) {
              (*pcStack_218)(&uStack_230);
            }
            if (lVar23 != 0) goto LAB_0ed8ca3b;
          }
          plVar18 = (long *)0x0;
          puVar30 = puStack_178;
          if (pcStack_1c8 != (code *)0x0) {
            plVar18 = (long *)(*pcStack_1c8)(&uStack_1e0);
            puVar30 = puStack_178;
          }
        }
      }
      puVar31 = puVar31 + 0x1a;
      if (puVar31 == puVar30) {
        return plVar18;
      }
    } while( true );
  }
  uVar21 = 0;
  uVar13 = uStack_168;
  puVar16 = (undefined8 *)auStack_138;
  plVar18 = plStack_1e8;
  param_2 = plStack_160;
  puVar19 = puStack_150;
  plVar15 = plStack_148;
code_r0x0ed8ce50:
  *(long **)((long)puVar16 + -8) = plVar15;
  *(undefined8 **)((long)puVar16 + -0x10) = puVar19;
  *(long **)((long)puVar16 + -0x18) = param_2;
  *(undefined8 *)((long)puVar16 + -0x20) = uVar13;
  plVar15 = (long *)*plVar18;
  if ((ulong)(plVar18[2] - (long)plVar15 >> 7) < uVar21) {
    if (uVar21 >> 0x39 != 0) {
      *(undefined8 *)((long)puVar16 + -0x50) = 0xed8cf3d;
      FUN_07cefc90();
      pcVar5 = (code *)swi(3);
      plVar18 = (long *)(*pcVar5)();
      return plVar18;
    }
    lVar11 = plVar18[1];
    *(long **)((long)puVar16 + -0x28) = plVar18;
    lVar23 = uVar21 * 0x80;
    pcVar5 = *(code **)(_DAT_0f5463b0 + 0x10);
    *(undefined8 *)((long)puVar16 + -0x50) = 0xed8cea9;
    lVar24 = (*pcVar5)(&DAT_0f5463b0,lVar23);
    if (lVar24 == 0) {
      *(undefined8 *)((long)puVar16 + -0x50) = 0xed8cf30;
      FUN_0eec74c0(lVar23,0);
    }
    *(long *)((long)puVar16 + -0x48) = lVar24;
    lVar11 = (lVar11 - (long)plVar15) + lVar24;
    *(long *)((long)puVar16 + -0x38) = lVar11;
    *(long *)((long)puVar16 + -0x40) = lVar11;
    *(long *)((long)puVar16 + -0x30) = lVar23 + lVar24;
    *(undefined8 *)((long)puVar16 + -0x50) = 0xed8ced2;
    plVar15 = (long *)FUN_0ed99f70(plVar18,(undefined1 *)((long)puVar16 + -0x48));
    lVar11 = *(long *)((long)puVar16 + -0x40);
    lVar24 = *(long *)((long)puVar16 + -0x38);
    while (lVar11 != lVar24) {
      lVar24 = lVar24 + -0x80;
      *(undefined8 *)((long)puVar16 + -0x50) = 0xed8cefc;
      plVar15 = (long *)FUN_049063d0(lVar24);
    }
    lVar11 = *(long *)((long)puVar16 + -0x48);
    if (lVar11 != 0) {
      *(undefined8 *)((long)puVar16 + -0x50) = 0xed8cf17;
      plVar15 = (long *)FUN_0412a280(lVar11,*(long *)((long)puVar16 + -0x30) - lVar11);
    }
  }
  return plVar15;
}


```

## `ed8c540`

- instructions: 604
- calls: 412a280, 412e5e0, 412f5e0, 470d9a0, 4882e20, 4882e30, 488e200, 48aead0, 48b0900, 49060a0, 49063d0, 5d84ba0, 5d9a920, 7920390, 7cefc90, ed6ae90, ed6b140, ed77d90, ed8ce50, ed99f70, ed9a170, eec74c0, eeddcf0, eee2d70 …

```c

/* WARNING: Removing unreachable block (ram,0x0ed8cc97) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ed8c540(undefined8 param_1,undefined4 *param_2,long *param_3,undefined8 param_4,
                 ulong param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBX;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 unaff_R12;
  ulong uVar19;
  undefined4 *puVar20;
  long unaff_R14;
  undefined4 *puVar21;
  long *unaff_R15;
  long lVar22;
  bool bVar23;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *pcStack_90;
  int iStack_88;
  char cStack_84;
  undefined8 uStack_80;
  long lStack_78;
  code *pcStack_70;
  ulong uStack_68;
  undefined4 uStack_60;
  undefined4 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar8 = &uStack_f8;
  plVar6 = (long *)*param_3;
  uStack_68 = param_5;
  uStack_48 = param_1;
  uStack_38 = param_4;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)FUN_048aead0(param_3[1]);
  }
  *param_2 = *(undefined4 *)(*plVar6 + 4);
  param_2[1] = 0xd;
  *(undefined1 *)(param_2 + 2) = 1;
  lVar22 = *param_3;
  if (lVar22 == 0) {
    lVar22 = FUN_048aead0(param_3[1]);
    if (*(int *)(lVar22 + 0x60) == -0x2b3da790) goto LAB_0ed8c5b9;
LAB_0ed8c5e1:
    plVar6 = (long *)*param_3;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_048aead0(param_3[1]);
    }
    lVar22 = *plVar6;
    uStack_a8._0_4_ = *(undefined4 *)(lVar22 + 8);
    uStack_a8._4_4_ = *(undefined4 *)(lVar22 + 0xc);
    uStack_a0 = *(undefined4 *)(lVar22 + 0x10);
    uStack_9c = *(undefined4 *)(lVar22 + 0x14);
    FUN_0470d9a0(&uStack_f8,&UNK_01443f90,0x2a,0xd,&uStack_a8);
    lVar22 = lStack_e8;
    if (((ulong)uStack_f8 & 1) == 0) {
      lVar22 = (long)&uStack_f8 + 1;
    }
    cVar4 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                      (lVar22,&UNK_01254b9d,0x27,&UNK_013dbc98,&UNK_013dbcdf);
    if (((ulong)uStack_f8 & 1) != 0) {
      FUN_0412a280(lStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
    }
    if (cVar4 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar22 = 0;
    bVar5 = bRam0000000000000008;
    if ((bRam0000000000000008 & 1) == 0) goto LAB_0ed8c688;
LAB_0ed8c5cf:
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_0ed8c693;
  }
  else {
    if (*(int *)(lVar22 + 0x60) != -0x2b3da790) goto LAB_0ed8c5e1;
LAB_0ed8c5b9:
    lVar22 = *(long *)(lVar22 + 0x68);
    if (lVar22 == 0) goto LAB_0ed8c5e1;
    bVar5 = *(byte *)(lVar22 + 8);
    if ((bVar5 & 1) != 0) goto LAB_0ed8c5cf;
LAB_0ed8c688:
    if (bVar5 >> 1 == 0) {
LAB_0ed8c693:
      plVar6 = (long *)*param_3;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)FUN_048aead0(param_3[1]);
      }
      lVar7 = *plVar6;
      uStack_a8._0_4_ = *(undefined4 *)(lVar7 + 8);
      uStack_a8._4_4_ = *(undefined4 *)(lVar7 + 0xc);
      uStack_a0 = *(undefined4 *)(lVar7 + 0x10);
      uStack_9c = *(undefined4 *)(lVar7 + 0x14);
      FUN_0470d9a0(&uStack_f8,&UNK_0145b837,0x31,0xd,&uStack_a8);
      lVar7 = lStack_e8;
      if (((ulong)uStack_f8 & 1) == 0) {
        lVar7 = (long)&uStack_f8 + 1;
      }
      cVar4 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                        (lVar7,&UNK_01254ba8,0x2b,&UNK_013dbc98,&UNK_013dbcdf);
      if (((ulong)uStack_f8 & 1) != 0) {
        FUN_0412a280(lStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
      }
      if (cVar4 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
  }
  bVar23 = (*(byte *)(lVar22 + 8) & 1) != 0;
  uVar18 = lVar22 + 9;
  if (bVar23) {
    uVar18 = *(ulong *)(lVar22 + 0x18);
  }
  uVar13 = (ulong)(*(byte *)(lVar22 + 8) >> 1);
  if (bVar23) {
    uVar13 = *(ulong *)(lVar22 + 0x10);
  }
  if (*(char *)(param_2 + 10) == '\x01') {
    FUN_0412f5e0(param_2 + 4,uVar18,uVar13);
    lVar22 = *param_3;
    if (lVar22 != 0) goto LAB_0ed8c761;
LAB_0ed8c81e:
    lVar22 = FUN_048aead0(param_3[1]);
    if (*(long *)(lVar22 + 0x78) == 0) goto LAB_0ed8c837;
LAB_0ed8c771:
    lVar7 = *param_3;
    lVar22 = param_3[1];
    if (lVar7 == 0) {
      puStack_b8 = param_2;
      lVar14 = FUN_048aead0(lVar22);
      lVar7 = *param_3;
      puVar21 = *(undefined4 **)(*(long *)(lVar14 + 0x78) + 0x48);
      if (lVar7 == 0) {
        lVar7 = FUN_048aead0(param_3[1]);
      }
    }
    else {
      puVar21 = *(undefined4 **)(*(long *)(lVar7 + 0x78) + 0x48);
      puStack_b8 = param_2;
    }
    puVar20 = *(undefined4 **)(*(long *)(lVar7 + 0x78) + 0x50);
  }
  else {
    if (0xfffffffffffffff7 < uVar13) {
      unaff_RBX = FUN_04882e30();
      if (pcStack_90 != (code *)0x0) {
        (*pcStack_90)(&uStack_a8);
      }
      plVar6 = (long *)_Unwind_Resume(unaff_RBX);
      FUN_04882e20();
      goto code_r0x0ed8ce50;
    }
    if (uVar13 < 0x17) {
      *(char *)(param_2 + 4) = (char)uVar13 * '\x02';
      lVar22 = (long)param_2 + 0x11;
      if (uVar13 != 0) goto LAB_0ed8c7fe;
    }
    else {
      uVar19 = 0x1a;
      if ((uVar13 | 7) != 0x17) {
        uVar19 = (uVar13 | 7) + 1;
      }
      lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
      if (lVar22 == 0) {
        FUN_0eec74c0(uVar19,0);
      }
      *(long *)(param_2 + 8) = lVar22;
      *(ulong *)(param_2 + 4) = uVar19 | 1;
      *(ulong *)(param_2 + 6) = uVar13;
LAB_0ed8c7fe:
      ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(lVar22,uVar18,uVar13);
    }
    *(undefined1 *)(lVar22 + uVar13) = 0;
    *(undefined1 *)(param_2 + 10) = 1;
    lVar22 = *param_3;
    if (lVar22 == 0) goto LAB_0ed8c81e;
LAB_0ed8c761:
    if (*(long *)(lVar22 + 0x78) != 0) goto LAB_0ed8c771;
LAB_0ed8c837:
    puVar20 = (undefined4 *)0x0;
    lVar22 = 0;
    puVar21 = (undefined4 *)0x0;
    puStack_b8 = param_2;
  }
  plStack_b0 = (long *)(puStack_b8 + 0x7e);
  puVar15 = puStack_b8;
  if ((*(char *)(puStack_b8 + 0x84) == '\x01') && (lVar7 = *plStack_b0, lVar7 != 0)) {
    lVar14 = *(long *)(puStack_b8 + 0x80);
    while (puStack_b8 = puVar15, lVar7 != lVar14) {
      lVar14 = lVar14 + -0x80;
      FUN_049063d0(lVar14);
      puVar15 = puStack_b8;
    }
    *(long *)(puVar15 + 0x80) = lVar7;
    FUN_0412a280();
  }
  *plStack_b0 = 0;
  plStack_b0[1] = 0;
  plStack_b0[2] = 0;
  *(undefined1 *)(puVar15 + 0x84) = 1;
  if (puVar21 != puVar20) {
    FUN_0ed8ce50(plStack_b0,(ulong)((long)puVar20 + (-0x68 - (long)puVar21)) / 0x68 + 1);
    puStack_40 = puVar20;
    do {
      uStack_60 = *puVar21;
      puStack_58 = puVar21;
      lStack_50 = lVar22;
      lVar7 = (**(code **)(puVar21 + 0xe))(lVar22);
      if (lVar22 == param_3[1]) {
        iVar2 = *(int *)(lVar7 + 8);
        if (*param_3 == 0) {
          lVar7 = FUN_048aead0();
          iVar1 = *(int *)(lVar7 + 8);
        }
        else {
          iVar1 = *(int *)(*param_3 + 8);
        }
        if (iVar2 == iVar1) {
          lVar7 = *(long *)(puStack_58 + 0x16);
          if ((*(byte *)(lVar7 + 0xa9) & (byte)uStack_38) == 0) {
            return;
          }
          uStack_c8 = 0;
          lStack_c0 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          lStack_e8 = 0;
          pcStack_e0 = (code *)0x0;
          uStack_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          FUN_05d84ba0(&uStack_f8);
          FUN_05d9a920(&uStack_a8,&puStack_58,&uStack_f8);
          if (pcStack_e0 != (code *)0x0) {
            (*pcStack_e0)(&uStack_f8);
          }
          if (iStack_88 == -0x3d1320ad) {
LAB_0ed8ca3b:
            puVar8 = *(undefined8 **)(puStack_b8 + 0x80);
            if (puVar8 < *(undefined8 **)(puStack_b8 + 0x82)) {
              puVar8[0xe] = 0;
              puVar8[0xf] = 0;
              puVar8[0xc] = 0;
              puVar8[0xd] = 0;
              puVar8[10] = 0;
              puVar8[0xb] = 0;
              puVar8[8] = 0;
              puVar8[9] = 0;
              puVar8[6] = 0;
              puVar8[7] = 0;
              puVar8[4] = 0;
              puVar8[5] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8 = puVar8 + 0x10;
            }
            else {
              puVar8 = (undefined8 *)FUN_0ed9a170(plStack_b0);
            }
            uVar10 = uStack_80;
            *(undefined8 **)(puStack_b8 + 0x80) = puVar8;
            puVar12 = (undefined8 *)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
            puVar9 = puVar12;
            if (cStack_84 == '\x02') {
              puVar9 = &uStack_a8;
            }
            if (puVar9 == (undefined8 *)0x0 || iStack_88 != -0x3d1320ad) {
              if (lStack_78 == 0) {
                (*pcStack_70)(0,&uStack_a8,0);
                puVar12 = (undefined8 *)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
              }
              if (cStack_84 == '\x02') {
                puVar12 = &uStack_a8;
              }
              puVar9 = (undefined8 *)FUN_0488e200(uVar10,lStack_78,0xc2ecdf53,puVar12);
            }
            puVar8[-0x10] = *puVar9;
            uVar10 = FUN_0ed6ae90(&puStack_58);
            FUN_0412f5e0(puVar8 + -0xf,uVar10);
            if (((uStack_68 >> 0x25 & 1) != 0) &&
               (bVar5 = *(byte *)(lVar7 + 0xa9), (bVar5 & 1) == 0)) {
              bVar5 = bVar5 - 1;
              lVar7 = 7;
              pcVar17 = "unknown";
              if (bVar5 < 4) {
                lVar14 = (ulong)bVar5 * 8;
                lVar7 = *(long *)(&UNK_014eec20 + lVar14);
                pcVar17 = *(char **)(&UNK_0f4e67a0 + lVar14);
              }
              if (*(char *)(puVar8 + -1) == '\x01') {
                FUN_0412f5e0(puVar8 + -4,pcVar17,lVar7);
              }
              else {
                *(char *)(puVar8 + -4) = (char)lVar7 * '\x02';
                memcpy((long)puVar8 + -0x1f,pcVar17,lVar7);
                *(undefined1 *)((long)puVar8 + lVar7 + -0x1f) = 0;
                *(undefined1 *)(puVar8 + -1) = 1;
              }
            }
            if ((uStack_68 >> 0x30 & 1) != 0) {
              pbVar11 = (byte *)FUN_0ed6b140(*param_3,param_3[1],uStack_60);
              if (pbVar11 != (byte *)0x0) {
                if ((*pbVar11 & 1) == 0) {
                  lStack_e8 = *(long *)(pbVar11 + 0x10);
                  uStack_f8 = *(undefined8 **)pbVar11;
                  uStack_f0 = *(long *)(pbVar11 + 8);
                }
                else {
                  FUN_0412e5e0(&uStack_f8,*(long *)(pbVar11 + 0x10),*(long *)(pbVar11 + 8));
                }
                pcStack_e0 = (code *)CONCAT71(pcStack_e0._1_7_,1);
                pbVar11 = (byte *)(puVar8 + -0xc);
                if (*(char *)(puVar8 + -9) == '\0') {
                  puVar8[-10] = lStack_e8;
                  *(undefined8 **)pbVar11 = uStack_f8;
                  puVar8[-0xb] = uStack_f0;
                  uStack_f8 = (undefined8 *)0x0;
                  uStack_f0 = 0;
                  lStack_e8 = 0;
                  *(undefined1 *)(puVar8 + -9) = 1;
                }
                else {
                  if ((*pbVar11 & 1) != 0) {
                    FUN_0412a280(puVar8[-10],puVar8[-0xc] & 0xfffffffffffffffe);
                  }
                  puVar8[-10] = lStack_e8;
                  *(undefined4 *)pbVar11 = (undefined4)uStack_f8;
                  *(undefined4 *)((long)puVar8 + -0x5c) = uStack_f8._4_4_;
                  *(undefined4 *)(puVar8 + -0xb) = (undefined4)uStack_f0;
                  *(undefined4 *)((long)puVar8 + -0x54) = uStack_f0._4_4_;
                  uStack_f8 = (undefined8 *)((ulong)uStack_f8 & 0xffffffffffff0000);
                }
              }
              if (((puStack_58 != (undefined4 *)0x0) && (puStack_58[0x14] == -0x45dcb126)) &&
                 (*(long *)(puStack_58 + 0x16) != 0)) {
                FUN_0ed77d90(&uStack_f8,uStack_48,*(long *)(puStack_58 + 0x16) + 0x40);
                if (lStack_e8 != 0) {
                  if (*(char *)(puVar8 + -5) == '\0') {
                    puVar8[-8] = uStack_f8;
                    puVar8[-7] = uStack_f0;
                    puVar8[-6] = lStack_e8;
LAB_0ed8cd4a:
                    *(undefined8 **)(uStack_f0 + 0x10) = puVar8 + -7;
                    uStack_f8 = &uStack_f0;
                    uStack_f0 = 0;
                    lStack_e8 = 0;
                  }
                  else {
                    FUN_049060a0(puVar8 + -8,puVar8[-7]);
                    puVar8[-8] = uStack_f8;
                    puVar8[-7] = uStack_f0;
                    puVar8[-6] = lStack_e8;
                    if (lStack_e8 != 0) goto LAB_0ed8cd4a;
                    puVar8[-8] = puVar8 + -7;
                  }
                  *(undefined1 *)(puVar8 + -5) = 1;
                }
                FUN_049060a0(&uStack_f8,uStack_f0);
              }
            }
          }
          else {
            FUN_07920390(&uStack_f8,&uStack_a8);
            lVar14 = lStack_c0;
            if ((lStack_c0 != 0) && ((byte)(uStack_d8._4_1_ - 1U) < 2)) {
              FUN_048b0900(&uStack_a8,&uStack_f8);
            }
            if (pcStack_e0 != (code *)0x0) {
              (*pcStack_e0)(&uStack_f8);
            }
            if (lVar14 != 0) goto LAB_0ed8ca3b;
          }
          puVar20 = puStack_40;
          if (pcStack_90 != (code *)0x0) {
            (*pcStack_90)(&uStack_a8);
            puVar20 = puStack_40;
          }
        }
      }
      puVar21 = puVar21 + 0x1a;
      if (puVar21 == puVar20) {
        return;
      }
    } while( true );
  }
  uVar18 = 0;
  puVar8 = (undefined8 *)register0x00000020;
  plVar6 = plStack_b0;
  lVar22 = unaff_R14;
  param_3 = unaff_R15;
code_r0x0ed8ce50:
  *(long **)((long)puVar8 + -8) = param_3;
  *(long *)((long)puVar8 + -0x10) = lVar22;
  *(undefined8 *)((long)puVar8 + -0x18) = unaff_R12;
  *(undefined8 *)((long)puVar8 + -0x20) = unaff_RBX;
  lVar22 = *plVar6;
  if ((ulong)(plVar6[2] - lVar22 >> 7) < uVar18) {
    if (uVar18 >> 0x39 != 0) {
      *(undefined8 *)((long)puVar8 + -0x50) = 0xed8cf3d;
      FUN_07cefc90();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = plVar6[1];
    *(long **)((long)puVar8 + -0x28) = plVar6;
    lVar16 = uVar18 * 0x80;
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x10);
    *(undefined8 *)((long)puVar8 + -0x50) = 0xed8cea9;
    lVar14 = (*pcVar3)(&DAT_0f5463b0,lVar16);
    if (lVar14 == 0) {
      *(undefined8 *)((long)puVar8 + -0x50) = 0xed8cf30;
      FUN_0eec74c0(lVar16,0);
    }
    *(long *)((long)puVar8 + -0x48) = lVar14;
    lVar22 = (lVar7 - lVar22) + lVar14;
    *(long *)((long)puVar8 + -0x38) = lVar22;
    *(long *)((long)puVar8 + -0x40) = lVar22;
    *(long *)((long)puVar8 + -0x30) = lVar16 + lVar14;
    *(undefined8 *)((long)puVar8 + -0x50) = 0xed8ced2;
    FUN_0ed99f70(plVar6,(undefined1 *)((long)puVar8 + -0x48));
    lVar22 = *(long *)((long)puVar8 + -0x40);
    lVar7 = *(long *)((long)puVar8 + -0x38);
    while (lVar22 != lVar7) {
      lVar7 = lVar7 + -0x80;
      *(undefined8 *)((long)puVar8 + -0x50) = 0xed8cefc;
      FUN_049063d0(lVar7);
    }
    lVar22 = *(long *)((long)puVar8 + -0x48);
    if (lVar22 != 0) {
      *(undefined8 *)((long)puVar8 + -0x50) = 0xed8cf17;
      FUN_0412a280(lVar22,*(long *)((long)puVar8 + -0x30) - lVar22);
    }
  }
  return;
}


```

## `ed8ce50`

- instructions: 65
- calls: 412a280, 49063d0, 7cefc90, ed99f70, eec74c0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ed8ce50(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 7) < param_2) {
    if (param_2 >> 0x39 != 0) {
      FUN_07cefc90();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = param_1[1];
    lVar3 = param_2 * 0x80;
    plStack_28 = param_1;
    lStack_48 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar3);
    if (lStack_48 == 0) {
      FUN_0eec74c0(lVar3,0);
    }
    lStack_40 = (lVar1 - lVar4) + lStack_48;
    lStack_30 = lVar3 + lStack_48;
    lStack_38 = lStack_40;
    FUN_0ed99f70(param_1,&lStack_48);
    lVar1 = lStack_40;
    lVar4 = lStack_38;
    while (lVar1 != lVar4) {
      lVar4 = lVar4 + -0x80;
      FUN_049063d0(lVar4);
    }
    if (lStack_48 != 0) {
      FUN_0412a280(lStack_48,lStack_30 - lStack_48);
    }
  }
  return;
}


```

## `ed98bc0`

- instructions: 4
- calls: 4882e40

```c

void FUN_0ed98bc0(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `ed98bd0`

- instructions: 789
- calls: ed98bd0, ed99b60

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_0ed98bd0(long *param_1,long *param_2,long param_3,byte param_4)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
LAB_0ed98bf5:
  plVar24 = param_2 + -3;
  plVar9 = param_2 + -6;
  plVar10 = param_2 + -9;
  plVar19 = param_1;
LAB_0ed98c10:
  while( true ) {
    param_1 = plVar19;
    uVar11 = (long)param_2 - (long)param_1;
    uVar7 = ((long)uVar11 >> 3) * -0x5555555555555555;
    if (uVar7 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0ed99446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e47128 + *(int *)(&UNK_01e47128 + ((long)uVar11 >> 3) * -0x5555555555555554)
                ))();
      return;
    }
    if ((long)uVar11 < 0x240) {
      plVar24 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (plVar24 == param_2 || param_1 == param_2) {
          return;
        }
        plVar9 = param_1 + 5;
        do {
          plVar10 = plVar24;
          lVar8 = param_1[5];
          if (lVar8 < param_1[2]) {
            lVar23 = *plVar10;
            lVar4 = plVar10[1];
            plVar24 = plVar9;
            do {
              plVar19 = plVar24;
              plVar19[-2] = plVar19[-5];
              plVar19[-1] = plVar19[-4];
              *plVar19 = plVar19[-3];
              plVar24 = plVar19 + -3;
            } while (lVar8 < plVar19[-6]);
            plVar19[-5] = lVar23;
            plVar19[-4] = lVar4;
            plVar19[-3] = lVar8;
          }
          plVar9 = plVar9 + 3;
          plVar24 = plVar10 + 3;
          param_1 = plVar10;
        } while (plVar10 + 3 != param_2);
        return;
      }
      if (plVar24 == param_2 || param_1 == param_2) {
        return;
      }
      lVar8 = 0;
      plVar9 = param_1;
      goto LAB_0ed99610;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar18 = uVar7 - 2 >> 1;
      uVar22 = uVar18;
      goto LAB_0ed9968c;
    }
    plVar19 = param_1 + (uVar7 >> 1) * 3;
    lVar8 = param_2[-1];
    if (0xc00 < uVar11) break;
    lVar23 = param_1[2];
    if (lVar23 < plVar19[2]) {
      if (lVar8 < lVar23) {
        lVar8 = *plVar19;
        lVar23 = plVar19[1];
        lVar4 = param_2[-2];
        *plVar19 = *plVar24;
        plVar19[1] = lVar4;
        *plVar24 = lVar8;
        param_2[-2] = lVar23;
        lVar8 = plVar19[2];
        plVar19[2] = param_2[-1];
        param_2[-1] = lVar8;
        goto joined_r0x0ed991a3;
      }
      lVar8 = *plVar19;
      lVar23 = plVar19[1];
      lVar4 = param_1[1];
      *plVar19 = *param_1;
      plVar19[1] = lVar4;
      *param_1 = lVar8;
      param_1[1] = lVar23;
      lVar8 = plVar19[2];
      plVar19[2] = param_1[2];
      param_1[2] = lVar8;
      if (param_2[-1] < lVar8) {
        lVar8 = *param_1;
        lVar23 = param_1[1];
        lVar4 = param_2[-2];
        *param_1 = *plVar24;
        param_1[1] = lVar4;
        *plVar24 = lVar8;
        param_2[-2] = lVar23;
        lVar8 = param_1[2];
        param_1[2] = param_2[-1];
        param_2[-1] = lVar8;
      }
    }
    else if (lVar8 < lVar23) {
      lVar8 = *param_1;
      lVar23 = param_1[1];
      lVar4 = param_2[-2];
      *param_1 = *plVar24;
      param_1[1] = lVar4;
      *plVar24 = lVar8;
      param_2[-2] = lVar23;
      lVar8 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = lVar8;
      if (param_1[2] < plVar19[2]) {
        lVar8 = *plVar19;
        lVar23 = plVar19[1];
        lVar4 = param_1[1];
        *plVar19 = *param_1;
        plVar19[1] = lVar4;
        *param_1 = lVar8;
        param_1[1] = lVar23;
        lVar8 = plVar19[2];
        plVar19[2] = param_1[2];
        param_1[2] = lVar8;
        goto joined_r0x0ed991a3;
      }
    }
    if ((param_4 & 1) != 0) goto LAB_0ed98f3e;
LAB_0ed991a9:
    lVar8 = param_1[2];
    if (param_1[-1] < lVar8) goto LAB_0ed991b7;
    lVar23 = *param_1;
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    plVar13 = param_1;
    if (lVar8 < param_2[-1]) {
      do {
        plVar19 = plVar13 + 3;
        plVar17 = plVar13 + 5;
        plVar13 = plVar19;
      } while (*plVar17 <= lVar8);
    }
    else {
      do {
        plVar19 = plVar13 + 3;
        if (param_2 <= plVar19) break;
        plVar17 = plVar13 + 5;
        plVar13 = plVar19;
      } while (*plVar17 <= lVar8);
    }
    plVar13 = param_2;
    plVar17 = param_2;
    if (plVar19 < param_2) {
      do {
        plVar13 = plVar17 + -3;
        plVar20 = plVar17 + -1;
        plVar17 = plVar13;
      } while (lVar8 < *plVar20);
    }
    while (plVar19 < plVar13) {
      lVar15 = *plVar19;
      lVar14 = plVar19[1];
      lVar16 = plVar13[1];
      *plVar19 = *plVar13;
      plVar19[1] = lVar16;
      *plVar13 = lVar15;
      plVar13[1] = lVar14;
      lVar15 = plVar19[2];
      plVar19[2] = plVar13[2];
      plVar13[2] = lVar15;
      plVar17 = plVar19;
      do {
        plVar19 = plVar17 + 3;
        plVar20 = plVar17 + 5;
        plVar12 = plVar13;
        plVar17 = plVar19;
      } while (*plVar20 <= lVar8);
      do {
        plVar13 = plVar12 + -3;
        plVar17 = plVar12 + -1;
        plVar12 = plVar13;
      } while (lVar8 < *plVar17);
    }
    plVar13 = plVar19 + -3;
    if (param_1 != plVar13) {
      lVar15 = plVar19[-2];
      *param_1 = *plVar13;
      param_1[1] = lVar15;
      param_1[2] = plVar19[-1];
    }
    uStack_48 = (undefined4)lVar23;
    uStack_44 = (undefined4)((ulong)lVar23 >> 0x20);
    uStack_40 = (undefined4)lVar4;
    uStack_3c = (undefined4)((ulong)lVar4 >> 0x20);
    *(undefined4 *)plVar13 = uStack_48;
    *(undefined4 *)((long)plVar19 + -0x14) = uStack_44;
    *(undefined4 *)(plVar19 + -2) = uStack_40;
    *(undefined4 *)((long)plVar19 + -0xc) = uStack_3c;
    plVar19[-1] = lVar8;
    param_3 = param_3 + -1;
  }
  lVar23 = plVar19[2];
  if (lVar23 < param_1[2]) {
    if (lVar8 < lVar23) {
      lVar8 = *param_1;
      lVar23 = param_1[1];
      lVar4 = param_2[-2];
      *param_1 = *plVar24;
      param_1[1] = lVar4;
      *plVar24 = lVar8;
      param_2[-2] = lVar23;
      lVar8 = param_1[2];
      param_1[2] = param_2[-1];
    }
    else {
      lVar8 = *param_1;
      lVar23 = param_1[1];
      lVar4 = plVar19[1];
      *param_1 = *plVar19;
      param_1[1] = lVar4;
      *plVar19 = lVar8;
      plVar19[1] = lVar23;
      lVar8 = param_1[2];
      param_1[2] = plVar19[2];
      plVar19[2] = lVar8;
      if (lVar8 <= param_2[-1]) goto LAB_0ed98e26;
      lVar8 = *plVar19;
      lVar23 = plVar19[1];
      lVar4 = param_2[-2];
      *plVar19 = *plVar24;
      plVar19[1] = lVar4;
      *plVar24 = lVar8;
      param_2[-2] = lVar23;
      lVar8 = plVar19[2];
      plVar19[2] = param_2[-1];
    }
    param_2[-1] = lVar8;
  }
  else if (lVar8 < lVar23) {
    lVar8 = *plVar19;
    lVar23 = plVar19[1];
    lVar4 = param_2[-2];
    *plVar19 = *plVar24;
    plVar19[1] = lVar4;
    *plVar24 = lVar8;
    param_2[-2] = lVar23;
    lVar8 = plVar19[2];
    plVar19[2] = param_2[-1];
    param_2[-1] = lVar8;
    if (plVar19[2] < param_1[2]) {
      lVar8 = *param_1;
      lVar23 = param_1[1];
      lVar4 = plVar19[1];
      *param_1 = *plVar19;
      param_1[1] = lVar4;
      *plVar19 = lVar8;
      plVar19[1] = lVar23;
      lVar8 = param_1[2];
      param_1[2] = plVar19[2];
      plVar19[2] = lVar8;
    }
  }
LAB_0ed98e26:
  plVar13 = param_1 + 3;
  plVar17 = plVar19 + -3;
  lVar8 = plVar19[-1];
  if (lVar8 < param_1[5]) {
    if (param_2[-4] < lVar8) {
      lVar8 = *plVar13;
      lVar23 = param_1[4];
      lVar4 = param_2[-5];
      *plVar13 = *plVar9;
      param_1[4] = lVar4;
      *plVar9 = lVar8;
      param_2[-5] = lVar23;
      lVar8 = param_1[5];
      param_1[5] = param_2[-4];
    }
    else {
      lVar8 = *plVar13;
      lVar23 = param_1[4];
      lVar4 = plVar19[-2];
      *plVar13 = *plVar17;
      param_1[4] = lVar4;
      *plVar17 = lVar8;
      plVar19[-2] = lVar23;
      lVar8 = param_1[5];
      param_1[5] = plVar19[-1];
      plVar19[-1] = lVar8;
      if (lVar8 <= param_2[-4]) goto LAB_0ed98f9a;
      lVar8 = *plVar17;
      lVar23 = plVar19[-2];
      lVar4 = param_2[-5];
      *plVar17 = *plVar9;
      plVar19[-2] = lVar4;
      *plVar9 = lVar8;
      param_2[-5] = lVar23;
      lVar8 = plVar19[-1];
      plVar19[-1] = param_2[-4];
    }
    param_2[-4] = lVar8;
  }
  else if (param_2[-4] < lVar8) {
    lVar8 = *plVar17;
    lVar23 = plVar19[-2];
    lVar4 = param_2[-5];
    *plVar17 = *plVar9;
    plVar19[-2] = lVar4;
    *plVar9 = lVar8;
    param_2[-5] = lVar23;
    lVar8 = plVar19[-1];
    plVar19[-1] = param_2[-4];
    param_2[-4] = lVar8;
    if (plVar19[-1] < param_1[5]) {
      lVar8 = *plVar13;
      lVar23 = param_1[4];
      lVar4 = plVar19[-2];
      *plVar13 = *plVar17;
      param_1[4] = lVar4;
      *plVar17 = lVar8;
      plVar19[-2] = lVar23;
      lVar8 = param_1[5];
      param_1[5] = plVar19[-1];
      plVar19[-1] = lVar8;
    }
  }
LAB_0ed98f9a:
  plVar13 = param_1 + 6;
  plVar20 = plVar19 + 3;
  lVar8 = plVar19[5];
  if (lVar8 < param_1[8]) {
    if (param_2[-7] < lVar8) {
      lVar8 = *plVar13;
      lVar23 = param_1[7];
      lVar4 = param_2[-8];
      *plVar13 = *plVar10;
      param_1[7] = lVar4;
      *plVar10 = lVar8;
      param_2[-8] = lVar23;
      lVar8 = param_1[8];
      param_1[8] = param_2[-7];
    }
    else {
      lVar8 = *plVar13;
      lVar23 = param_1[7];
      lVar4 = plVar19[4];
      *plVar13 = *plVar20;
      param_1[7] = lVar4;
      *plVar20 = lVar8;
      plVar19[4] = lVar23;
      lVar8 = param_1[8];
      param_1[8] = plVar19[5];
      plVar19[5] = lVar8;
      if (lVar8 <= param_2[-7]) goto LAB_0ed99098;
      lVar8 = *plVar20;
      lVar23 = plVar19[4];
      lVar4 = param_2[-8];
      *plVar20 = *plVar10;
      plVar19[4] = lVar4;
      *plVar10 = lVar8;
      param_2[-8] = lVar23;
      lVar8 = plVar19[5];
      plVar19[5] = param_2[-7];
    }
    param_2[-7] = lVar8;
  }
  else if (param_2[-7] < lVar8) {
    lVar8 = *plVar20;
    lVar23 = plVar19[4];
    lVar4 = param_2[-8];
    *plVar20 = *plVar10;
    plVar19[4] = lVar4;
    *plVar10 = lVar8;
    param_2[-8] = lVar23;
    lVar8 = plVar19[5];
    plVar19[5] = param_2[-7];
    param_2[-7] = lVar8;
    if (plVar19[5] < param_1[8]) {
      lVar8 = *plVar13;
      lVar23 = param_1[7];
      lVar4 = plVar19[4];
      *plVar13 = *plVar20;
      param_1[7] = lVar4;
      *plVar20 = lVar8;
      plVar19[4] = lVar23;
      lVar8 = param_1[8];
      param_1[8] = plVar19[5];
      plVar19[5] = lVar8;
    }
  }
LAB_0ed99098:
  lVar8 = plVar19[2];
  if (lVar8 < plVar19[-1]) {
    if (plVar19[5] < lVar8) {
      lVar8 = *plVar17;
      lVar23 = plVar19[-2];
      *plVar17 = *plVar20;
      plVar19[-2] = plVar19[4];
      *plVar20 = lVar8;
      plVar19[4] = lVar23;
      lVar8 = plVar19[-1];
      plVar19[-1] = plVar19[5];
    }
    else {
      lVar8 = *plVar17;
      lVar23 = plVar19[-2];
      *plVar17 = *plVar19;
      plVar19[-2] = plVar19[1];
      *plVar19 = lVar8;
      plVar19[1] = lVar23;
      lVar8 = plVar19[-1];
      plVar19[-1] = plVar19[2];
      plVar19[2] = lVar8;
      if (lVar8 <= plVar19[5]) goto LAB_0ed99177;
      lVar8 = *plVar19;
      lVar23 = plVar19[1];
      *plVar19 = *plVar20;
      plVar19[1] = plVar19[4];
      *plVar20 = lVar8;
      plVar19[4] = lVar23;
      lVar8 = plVar19[2];
      plVar19[2] = plVar19[5];
    }
    plVar19[5] = lVar8;
  }
  else if (plVar19[5] < lVar8) {
    lVar8 = *plVar19;
    lVar23 = plVar19[1];
    *plVar19 = *plVar20;
    plVar19[1] = plVar19[4];
    *plVar20 = lVar8;
    plVar19[4] = lVar23;
    lVar8 = plVar19[2];
    lVar23 = plVar19[5];
    plVar19[2] = lVar23;
    plVar19[5] = lVar8;
    if (lVar23 < plVar19[-1]) {
      lVar8 = *plVar17;
      lVar23 = plVar19[-2];
      *plVar17 = *plVar19;
      plVar19[-2] = plVar19[1];
      *plVar19 = lVar8;
      plVar19[1] = lVar23;
      lVar8 = plVar19[-1];
      plVar19[-1] = plVar19[2];
      plVar19[2] = lVar8;
    }
  }
LAB_0ed99177:
  lVar8 = *param_1;
  lVar23 = param_1[1];
  lVar4 = plVar19[1];
  *param_1 = *plVar19;
  param_1[1] = lVar4;
  *plVar19 = lVar8;
  plVar19[1] = lVar23;
  lVar8 = param_1[2];
  param_1[2] = plVar19[2];
  plVar19[2] = lVar8;
joined_r0x0ed991a3:
  if ((param_4 & 1) == 0) goto LAB_0ed991a9;
LAB_0ed98f3e:
  lVar8 = param_1[2];
LAB_0ed991b7:
  param_3 = param_3 + -1;
  lVar23 = *param_1;
  lVar4 = param_1[1];
  lVar15 = 0;
  do {
    lVar16 = lVar15 + 0x18;
    lVar14 = lVar15 + 0x28;
    lVar15 = lVar16;
  } while (*(long *)((long)param_1 + lVar14) < lVar8);
  plVar13 = (long *)((long)param_1 + lVar16);
  plVar19 = param_2;
  if (lVar16 == 0x18) {
    do {
      plVar17 = plVar19;
      if (plVar19 <= plVar13) break;
      plVar17 = plVar19 + -3;
      plVar20 = plVar19 + -1;
      plVar19 = plVar17;
    } while (lVar8 <= *plVar20);
  }
  else {
    do {
      plVar17 = plVar19 + -3;
      plVar20 = plVar19 + -1;
      plVar19 = plVar17;
    } while (lVar8 <= *plVar20);
  }
  plVar20 = plVar17;
  plVar19 = plVar13;
  plVar12 = plVar13;
  if (plVar13 < plVar17) {
    do {
      lVar15 = *plVar12;
      lVar14 = plVar12[1];
      lVar16 = plVar20[1];
      *plVar12 = *plVar20;
      plVar12[1] = lVar16;
      *plVar20 = lVar15;
      plVar20[1] = lVar14;
      lVar15 = plVar12[2];
      plVar12[2] = plVar20[2];
      plVar20[2] = lVar15;
      do {
        plVar19 = plVar12 + 3;
        plVar1 = plVar12 + 5;
        plVar12 = plVar19;
      } while (*plVar1 < lVar8);
      do {
        plVar21 = plVar20 + -3;
        plVar1 = plVar20 + -1;
        plVar20 = plVar21;
      } while (lVar8 <= *plVar1);
    } while (plVar19 < plVar21);
  }
  plVar20 = plVar19 + -3;
  if (param_1 != plVar20) {
    lVar15 = plVar19[-2];
    *param_1 = *plVar20;
    param_1[1] = lVar15;
    param_1[2] = plVar19[-1];
  }
  uStack_48 = (undefined4)lVar23;
  uStack_44 = (undefined4)((ulong)lVar23 >> 0x20);
  uStack_40 = (undefined4)lVar4;
  uStack_3c = (undefined4)((ulong)lVar4 >> 0x20);
  *(undefined4 *)plVar20 = uStack_48;
  *(undefined4 *)((long)plVar19 - 0x14) = uStack_44;
  *(undefined4 *)(plVar19 + -2) = uStack_40;
  *(undefined4 *)((long)plVar19 - 0xc) = uStack_3c;
  plVar19[-1] = lVar8;
  if (plVar17 <= plVar13) {
    cVar5 = func_0x0ed99b60(param_1);
    cVar6 = func_0x0ed99b60(plVar19,param_2);
    if (cVar6 != '\0') goto LAB_0ed9941a;
    if (cVar5 != '\0') goto LAB_0ed98c10;
  }
  FUN_0ed98bd0(param_1,plVar20,param_3,param_4);
  param_4 = 0;
  goto LAB_0ed98c10;
LAB_0ed99610:
  plVar10 = plVar24;
  lVar23 = plVar9[5];
  if (lVar23 < plVar9[2]) {
    lVar4 = *plVar10;
    lVar15 = plVar10[1];
    lVar14 = lVar8;
    plVar24 = plVar10;
    do {
      *plVar24 = plVar24[-3];
      plVar24[1] = plVar24[-2];
      plVar24[2] = plVar24[-1];
      plVar9 = param_1;
      if (lVar14 == 0) break;
      plVar9 = plVar24 + -3;
      lVar14 = lVar14 + 0x18;
      plVar19 = plVar24 + -4;
      plVar24 = plVar9;
    } while (lVar23 < *plVar19);
    *plVar9 = lVar4;
    plVar9[1] = lVar15;
    plVar9[2] = lVar23;
  }
  lVar8 = lVar8 + -0x18;
  plVar24 = plVar10 + 3;
  plVar9 = plVar10;
  if (plVar10 + 3 == param_2) {
    return;
  }
  goto LAB_0ed99610;
LAB_0ed9968c:
  do {
    if (uVar22 <= uVar18) {
      lVar8 = uVar22 * 2 + 1;
      plVar24 = param_1 + lVar8 * 3;
      lVar23 = uVar22 * 2 + 2;
      if ((lVar23 < (long)uVar7) && (plVar24[2] < plVar24[5])) {
        plVar24 = plVar24 + 3;
        lVar8 = lVar23;
      }
      plVar9 = param_1 + uVar22 * 3;
      lVar23 = plVar9[2];
      if (lVar23 <= plVar24[2]) {
        lVar4 = *plVar9;
        lVar15 = plVar9[1];
        do {
          plVar10 = plVar24;
          lVar14 = plVar10[1];
          *plVar9 = *plVar10;
          plVar9[1] = lVar14;
          plVar9[2] = plVar10[2];
          if ((long)uVar18 < lVar8) break;
          lVar14 = lVar8 * 2 + 1;
          plVar24 = param_1 + lVar14 * 3;
          lVar16 = lVar8 * 2 + 2;
          lVar8 = lVar14;
          if ((lVar16 < (long)uVar7) && (plVar24[2] < plVar24[5])) {
            plVar24 = plVar24 + 3;
            lVar8 = lVar16;
          }
          plVar9 = plVar10;
        } while (lVar23 <= plVar24[2]);
        *plVar10 = lVar4;
        plVar10[1] = lVar15;
        plVar10[2] = lVar23;
      }
    }
    bVar3 = 0 < (long)uVar22;
    uVar22 = uVar22 - 1;
  } while (bVar3);
  lVar8 = (uVar11 >> 3) * -0x5555555555555555;
  do {
    lVar4 = *param_1;
    lVar15 = param_1[1];
    lVar23 = param_1[2];
    plVar24 = param_1;
    lVar14 = 0;
    do {
      plVar9 = plVar24 + lVar14 * 3 + 3;
      lVar16 = lVar14 * 2 + 1;
      lVar2 = lVar14 * 2 + 2;
      if ((lVar2 < lVar8) && (plVar24[lVar14 * 3 + 5] < plVar24[lVar14 * 3 + 8])) {
        plVar9 = plVar24 + lVar14 * 3 + 6;
        lVar16 = lVar2;
      }
      lVar14 = plVar9[1];
      *plVar24 = *plVar9;
      plVar24[1] = lVar14;
      plVar24[2] = plVar9[2];
      plVar24 = plVar9;
      lVar14 = lVar16;
    } while (lVar16 <= (long)(lVar8 - 2U >> 1));
    plVar24 = param_2 + -3;
    if (plVar9 == plVar24) {
      uStack_48 = (undefined4)lVar4;
      uStack_44 = (undefined4)((ulong)lVar4 >> 0x20);
      uStack_40 = (undefined4)lVar15;
      uStack_3c = (undefined4)((ulong)lVar15 >> 0x20);
      uStack_88 = uStack_48;
      uStack_84 = uStack_44;
      uStack_80 = uStack_40;
      uStack_7c = uStack_3c;
LAB_0ed99755:
      *(undefined4 *)plVar9 = uStack_88;
      *(undefined4 *)((long)plVar9 + 4) = uStack_84;
      *(undefined4 *)(plVar9 + 1) = uStack_80;
      *(undefined4 *)((long)plVar9 + 0xc) = uStack_7c;
      plVar9[2] = lVar23;
    }
    else {
      lVar14 = param_2[-2];
      *plVar9 = *plVar24;
      plVar9[1] = lVar14;
      plVar9[2] = param_2[-1];
      *plVar24 = lVar4;
      param_2[-2] = lVar15;
      param_2[-1] = lVar23;
      uVar7 = (long)plVar9 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar7) {
        uVar7 = (uVar7 >> 3) * -0x5555555555555555 - 2 >> 1;
        lVar23 = plVar9[2];
        if (param_1[uVar7 * 3 + 2] < lVar23) {
          lVar4 = *plVar9;
          lVar15 = plVar9[1];
          plVar10 = plVar9;
          do {
            plVar9 = param_1 + uVar7 * 3;
            lVar14 = plVar9[1];
            *plVar10 = *plVar9;
            plVar10[1] = lVar14;
            plVar10[2] = plVar9[2];
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            plVar10 = plVar9;
          } while (param_1[uVar7 * 3 + 2] < lVar23);
          uStack_88 = (undefined4)lVar4;
          uStack_84 = (undefined4)((ulong)lVar4 >> 0x20);
          uStack_80 = (undefined4)lVar15;
          uStack_7c = (undefined4)((ulong)lVar15 >> 0x20);
          goto LAB_0ed99755;
        }
      }
    }
    bVar3 = lVar8 < 3;
    lVar8 = lVar8 + -1;
    param_2 = plVar24;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_0ed9941a:
  param_2 = plVar20;
  if (cVar5 != '\0') {
    return;
  }
  goto LAB_0ed98bf5;
}


```

## `ed99f70`

- instructions: 107
- calls: 49063d0

```c

void FUN_0ed99f70(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar1 = param_2[1];
  plVar10 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  lVar8 = (long)plVar2 - (long)plVar10;
  if (plVar2 != plVar10) {
    plVar6 = (long *)(lVar1 + (lVar8 >> 7) * -0x80 + 0x48);
    plVar7 = plVar10 + 9;
    do {
      plVar6[-9] = plVar7[-9];
      plVar6[-6] = plVar7[-6];
      lVar3 = plVar7[-7];
      plVar6[-8] = plVar7[-8];
      plVar6[-7] = lVar3;
      plVar7[-8] = 0;
      plVar7[-7] = 0;
      plVar7[-6] = 0;
      *(undefined1 *)(plVar6 + -5) = 0;
      *(undefined1 *)(plVar6 + -2) = 0;
      if ((char)plVar7[-2] == '\x01') {
        plVar6[-3] = plVar7[-3];
        lVar3 = plVar7[-4];
        plVar6[-5] = plVar7[-5];
        plVar6[-4] = lVar3;
        plVar7[-5] = 0;
        plVar7[-4] = 0;
        plVar7[-3] = 0;
        *(undefined1 *)(plVar6 + -2) = 1;
      }
      *(undefined1 *)(plVar6 + -1) = 0;
      *(undefined1 *)(plVar6 + 2) = 0;
      if ((char)plVar7[2] == '\x01') {
        plVar6[-1] = plVar7[-1];
        lVar3 = *plVar7;
        *plVar6 = lVar3;
        lVar4 = plVar7[1];
        plVar6[1] = lVar4;
        if (lVar4 == 0) {
          plVar6[-1] = (long)plVar6;
        }
        else {
          *(long **)(lVar3 + 0x10) = plVar6;
          plVar7[-1] = (long)plVar7;
          *plVar7 = 0;
          plVar7[1] = 0;
        }
        *(undefined1 *)(plVar6 + 2) = 1;
      }
      *(undefined1 *)(plVar6 + 3) = 0;
      *(undefined1 *)(plVar6 + 6) = 0;
      if ((char)plVar7[6] == '\x01') {
        plVar6[5] = plVar7[5];
        lVar3 = plVar7[4];
        plVar6[3] = plVar7[3];
        plVar6[4] = lVar3;
        plVar7[3] = 0;
        plVar7[4] = 0;
        plVar7[5] = 0;
        *(undefined1 *)(plVar6 + 6) = 1;
      }
      plVar6 = plVar6 + 0x10;
      plVar9 = plVar7 + 7;
      plVar7 = plVar7 + 0x10;
    } while (plVar9 != plVar2);
    do {
      FUN_049063d0(plVar10);
      plVar10 = plVar10 + 0x10;
    } while (plVar10 != plVar2);
    plVar10 = (long *)*param_1;
  }
  param_2[1] = lVar1 - lVar8;
  param_1[1] = plVar10;
  *param_1 = param_2[1];
  param_2[1] = plVar10;
  uVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar5;
  uVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar5;
  *param_2 = param_2[1];
  return;
}


```

## `ed9a170`

- instructions: 104
- calls: 412a280, 4882eb0, 49063d0, 7cefc90, ed99f70, eec74c0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ed9a170(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar7 = param_1[1] - *param_1;
  uVar3 = (lVar7 >> 7) + 1;
  if (uVar3 >> 0x39 != 0) {
    FUN_07cefc90();
LAB_0ed9a2cb:
    FUN_04882eb0();
    lVar7 = param_1[1] - param_1[2];
    if (lVar7 != 0) {
      param_1[2] = param_1[2] + (lVar7 + 7U & 0xfffffffffffffff8);
    }
    lVar7 = *param_1;
    if (lVar7 != 0) {
      if (lVar7 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar7);
      }
      return lVar7;
    }
    return 0;
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 6;
  if (uVar5 <= uVar3) {
    uVar5 = uVar3;
  }
  if (0x7fffffffffffff7f < uVar4) {
    uVar5 = 0x1ffffffffffffff;
  }
  plStack_28 = param_1;
  if (uVar5 != 0) {
    if (0x1ffffffffffffff < uVar5) goto LAB_0ed9a2cb;
    lStack_48 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar5 << 7);
    if (lStack_48 != 0) goto LAB_0ed9a20e;
    FUN_0eec74c0(uVar5 << 7,0);
  }
  lStack_48 = 0;
LAB_0ed9a20e:
  lStack_40 = lStack_48 + lVar7;
  lStack_30 = uVar5 * 0x80 + lStack_48;
  puVar1 = (undefined8 *)(lStack_48 + 0x70 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lStack_48 + 0x60 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lStack_48 + 0x50 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lStack_48 + 0x40 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lStack_48 + 0x30 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lStack_48 + 0x20 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lStack_48 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lStack_48 + lVar7) = 0;
  ((undefined8 *)(lStack_48 + lVar7))[1] = 0;
  lStack_38 = lStack_48 + 0x80 + lVar7;
  FUN_0ed99f70(param_1,&lStack_48);
  lVar2 = lStack_40;
  lVar7 = param_1[1];
  lVar6 = lStack_38;
  while (lVar2 != lVar6) {
    lVar6 = lVar6 + -0x80;
    FUN_049063d0(lVar6);
  }
  if (lStack_48 != 0) {
    FUN_0412a280(lStack_48,lStack_30 - lStack_48);
  }
  return lVar7;
}


```

## `ed9a320`

- instructions: 251
- calls: 41086b0, 41088a0, 4882e90, eec74c0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ed9a320(long *param_1,long *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *unaff_RBP;
  ulong uVar6;
  uint uVar7;
  long *unaff_R12;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  long *plStack_68;
  undefined4 *puStack_60;
  ulong uStack_58;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  uVar7 = *(uint *)(param_1 + 1) + param_3;
  if (CARRY4(*(uint *)(param_1 + 1),param_3)) {
    uVar4 = FUN_041086b0(0x10);
    FUN_04882e90(uVar4,&UNK_011ed0d9);
    FUN_041088a0(uVar4,&UNK_0eeec938,&UNK_0412bce0);
LAB_0ed9a6e1:
    uStack_58 = 0xffffffff;
  }
  else {
    fVar13 = (float)*(uint *)((long)param_1 + 0xc);
    uVar6 = (ulong)(fVar13 * _DAT_0119858c);
    uStack_58 = uVar6 & 0xffffffff;
    if ((uint)uVar6 < uVar7) {
      uStack_58 = (ulong)uVar7;
    }
    unaff_RBP = param_1;
    unaff_R12 = param_2;
    puStack_60 = param_4;
    uStack_50 = param_3;
    uStack_4c = uVar7;
    if (CARRY4((uint)(long)(fVar13 / _DAT_0119858c),*(uint *)((long)param_1 + 0xc)))
    goto LAB_0ed9a6e1;
  }
  lVar11 = *unaff_RBP;
  iVar8 = (int)uStack_58;
  lVar12 = uStack_58 << 5;
  lVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
  if (iVar8 != 0 && lVar2 == 0) {
    FUN_0eec74c0(lVar12,0);
  }
  puVar1 = puStack_60;
  lStack_48 = ((ulong)((long)unaff_R12 - lVar11) >> 5 & 0xffffffff) * 0x20;
  lVar11 = lVar2 + lStack_48;
  *(undefined4 *)(lVar2 + lStack_48) = *puStack_60;
  *(undefined1 *)(lVar2 + 8 + lStack_48) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lStack_48) = 0xffffffff;
  uVar7 = puStack_60[4];
  if ((ulong)uVar7 != 0xffffffff) {
    plStack_68 = (long *)(lStack_48 + lVar2 + 8);
    (**(code **)(&UNK_0f4e40f0 + (ulong)uVar7 * 8))(&plStack_68,puStack_60 + 2);
    *(uint *)(lVar11 + 0x10) = uVar7;
  }
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(puVar1 + 6);
  plVar9 = (long *)*unaff_RBP;
  uVar6 = (ulong)*(uint *)(unaff_RBP + 1);
  puStack_60 = (undefined4 *)lVar2;
  plStack_40 = unaff_RBP;
  lStack_38 = lVar11;
  if (unaff_R12 == plVar9 + uVar6 * 4) {
    if (*(uint *)(unaff_RBP + 1) != 0) {
      plVar5 = (long *)(lVar2 + 0x18);
      plVar9 = plVar9 + 1;
      do {
        *(int *)(plVar5 + -3) = (int)plVar9[-1];
        *(undefined1 *)(plVar5 + -2) = 0;
        *(undefined4 *)(plVar5 + -1) = 0xffffffff;
        uVar7 = *(uint *)(plVar9 + 1);
        if ((ulong)uVar7 != 0xffffffff) {
          plStack_68 = plVar5 + -2;
          (**(code **)(&UNK_0f4e40f0 + (ulong)uVar7 * 8))(&plStack_68,plVar9);
          *(uint *)(plVar5 + -1) = uVar7;
        }
        *plVar5 = plVar9[2];
        plVar5 = plVar5 + 4;
        plVar10 = plVar9 + 3;
        plVar9 = plVar9 + 4;
      } while (plVar10 != unaff_R12);
    }
  }
  else {
    if (plVar9 != unaff_R12) {
      plVar5 = (long *)(lVar2 + 0x18);
      plVar9 = plVar9 + 1;
      do {
        *(int *)(plVar5 + -3) = (int)plVar9[-1];
        *(undefined1 *)(plVar5 + -2) = 0;
        *(undefined4 *)(plVar5 + -1) = 0xffffffff;
        uVar7 = *(uint *)(plVar9 + 1);
        if ((ulong)uVar7 != 0xffffffff) {
          plStack_68 = plVar5 + -2;
          (**(code **)(&UNK_0f4e40f0 + (ulong)uVar7 * 8))(&plStack_68,plVar9);
          *(uint *)(plVar5 + -1) = uVar7;
        }
        *plVar5 = plVar9[2];
        plVar5 = plVar5 + 4;
        plVar10 = plVar9 + 3;
        plVar9 = plVar9 + 4;
      } while (plVar10 != unaff_R12);
      plVar9 = (long *)*plStack_40;
      uVar6 = (ulong)*(uint *)(plStack_40 + 1);
    }
    if (unaff_R12 == plVar9 + uVar6 * 4) goto LAB_0ed9a606;
    plVar10 = (long *)((long)puStack_60 + (ulong)uStack_50 * 0x20 + lStack_48 + 0x18);
    plVar5 = unaff_R12 + 1;
    do {
      *(int *)(plVar10 + -3) = (int)plVar5[-1];
      *(undefined1 *)(plVar10 + -2) = 0;
      *(undefined4 *)(plVar10 + -1) = 0xffffffff;
      uVar7 = *(uint *)(plVar5 + 1);
      if ((ulong)uVar7 != 0xffffffff) {
        plStack_68 = plVar10 + -2;
        (**(code **)(&UNK_0f4e40f0 + (ulong)uVar7 * 8))(&plStack_68,plVar5);
        *(uint *)(plVar10 + -1) = uVar7;
      }
      *plVar10 = plVar5[2];
      plVar10 = plVar10 + 4;
      plVar3 = plVar5 + 3;
      plVar5 = plVar5 + 4;
    } while (plVar3 != plVar9 + uVar6 * 4);
  }
  uVar6 = (ulong)*(uint *)(plStack_40 + 1);
  plVar9 = (long *)*plStack_40;
LAB_0ed9a606:
  plVar5 = plStack_40;
  if ((int)uVar6 != 0) {
    lVar11 = uVar6 << 5;
    plVar9 = plVar9 + 1;
    do {
      if ((ulong)*(uint *)(plVar9 + 1) != 0xffffffff) {
        (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(plVar9 + 1) * 8))(&plStack_68,plVar9);
      }
      *(undefined4 *)(plVar9 + 1) = 0xffffffff;
      plVar9 = plVar9 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
    plVar9 = (long *)*plVar5;
  }
  uVar7 = uStack_4c;
  puVar1 = puStack_60;
  if (plVar9 != (long *)0x0 && plVar5 + 2 != plVar9) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar9);
  }
  *plVar5 = (long)puVar1;
  *(int *)((long)plVar5 + 0xc) = (int)uStack_58;
  *(uint *)(plVar5 + 1) = uVar7;
  return lStack_38;
}


```

## `ed9a750`

- instructions: 267
- calls: 41086b0, 41088a0, 4882e90, eec74c0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ed9a750(long *param_1,long *param_2,uint param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_R14;
  undefined4 *puVar14;
  float fVar15;
  undefined4 *puStack_68;
  undefined2 *puStack_60;
  long *plStack_58;
  uint uStack_50;
  uint uStack_4c;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar11 = *(uint *)(param_1 + 1) + param_3;
  if (CARRY4(*(uint *)(param_1 + 1),param_3)) {
    uVar7 = FUN_041086b0(0x10);
    FUN_04882e90(uVar7,&UNK_011ed0d9);
    FUN_041088a0(uVar7,&UNK_0eeec938,&UNK_0412bce0);
LAB_0ed9ab68:
    uVar10 = 0xffffffff;
  }
  else {
    fVar15 = (float)*(uint *)((long)param_1 + 0xc);
    uVar9 = (ulong)(fVar15 * _DAT_0119858c);
    uVar10 = uVar9 & 0xffffffff;
    if ((uint)uVar9 < uVar11) {
      uVar10 = (ulong)uVar11;
    }
    unaff_R14 = param_1;
    puStack_60 = param_4;
    uStack_50 = param_3;
    uStack_4c = uVar11;
    if (CARRY4((uint)(long)(fVar15 / _DAT_0119858c),*(uint *)((long)param_1 + 0xc)))
    goto LAB_0ed9ab68;
  }
  lVar8 = *unaff_R14;
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 * 0x30);
  if ((int)uVar10 != 0 && lVar5 == 0) {
    FUN_0eec74c0(uVar10 * 0x30,0);
  }
  lStack_40 = (((long)param_2 - lVar8 >> 4) * -0x5555555555555555 & 0xffffffffU) * 0x30;
  lVar8 = lStack_40 + lVar5;
  *(undefined2 *)(lVar5 + lStack_40) = *puStack_60;
  *(undefined1 *)(lVar5 + 8 + lStack_40) = 0;
  *(undefined4 *)(lVar5 + 0x10 + lStack_40) = 0xffffffff;
  uVar11 = *(uint *)(puStack_60 + 8);
  if ((ulong)uVar11 != 0xffffffff) {
    puStack_68 = (undefined4 *)(lStack_40 + lVar5 + 8);
    (**(code **)(&UNK_0f4e40f0 + (ulong)uVar11 * 8))(&puStack_68,puStack_60 + 4);
    *(uint *)(lVar8 + 0x10) = uVar11;
  }
  *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(puStack_60 + 0x14);
  uVar1 = *(undefined4 *)(puStack_60 + 0xe);
  uVar2 = *(undefined4 *)(puStack_60 + 0x10);
  uVar3 = *(undefined4 *)(puStack_60 + 0x12);
  *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(puStack_60 + 0xc);
  *(undefined4 *)(lVar8 + 0x1c) = uVar1;
  *(undefined4 *)(lVar8 + 0x20) = uVar2;
  *(undefined4 *)(lVar8 + 0x24) = uVar3;
  plVar13 = (long *)*unaff_R14;
  uVar9 = (ulong)*(uint *)(unaff_R14 + 1);
  puStack_60 = (undefined2 *)lVar5;
  plStack_58 = unaff_R14;
  uStack_48 = uVar10;
  lStack_38 = lVar8;
  if (param_2 == plVar13 + uVar9 * 6) {
    if (*(uint *)(unaff_R14 + 1) != 0) {
      puVar14 = (undefined4 *)(lVar5 + 0x18);
      plVar13 = plVar13 + 1;
      do {
        *(short *)(puVar14 + -6) = (short)plVar13[-1];
        *(undefined1 *)(puVar14 + -4) = 0;
        puVar14[-2] = 0xffffffff;
        uVar11 = *(uint *)(plVar13 + 1);
        if ((ulong)uVar11 != 0xffffffff) {
          puStack_68 = puVar14 + -4;
          (**(code **)(&UNK_0f4e40f0 + (ulong)uVar11 * 8))(&puStack_68,plVar13);
          puVar14[-2] = uVar11;
        }
        puVar14[4] = (int)plVar13[4];
        uVar1 = *(undefined4 *)((long)plVar13 + 0x14);
        lVar8 = plVar13[3];
        uVar2 = *(undefined4 *)((long)plVar13 + 0x1c);
        *puVar14 = (int)plVar13[2];
        puVar14[1] = uVar1;
        puVar14[2] = (int)lVar8;
        puVar14[3] = uVar2;
        puVar14 = puVar14 + 0xc;
        plVar12 = plVar13 + 5;
        plVar13 = plVar13 + 6;
      } while (plVar12 != param_2);
    }
  }
  else {
    if (plVar13 != param_2) {
      puVar14 = (undefined4 *)(lVar5 + 0x18);
      plVar13 = plVar13 + 1;
      do {
        *(short *)(puVar14 + -6) = (short)plVar13[-1];
        *(undefined1 *)(puVar14 + -4) = 0;
        puVar14[-2] = 0xffffffff;
        uVar11 = *(uint *)(plVar13 + 1);
        if ((ulong)uVar11 != 0xffffffff) {
          puStack_68 = puVar14 + -4;
          (**(code **)(&UNK_0f4e40f0 + (ulong)uVar11 * 8))(&puStack_68,plVar13);
          puVar14[-2] = uVar11;
        }
        puVar14[4] = (int)plVar13[4];
        uVar1 = *(undefined4 *)((long)plVar13 + 0x14);
        lVar8 = plVar13[3];
        uVar2 = *(undefined4 *)((long)plVar13 + 0x1c);
        *puVar14 = (int)plVar13[2];
        puVar14[1] = uVar1;
        puVar14[2] = (int)lVar8;
        puVar14[3] = uVar2;
        puVar14 = puVar14 + 0xc;
        plVar12 = plVar13 + 5;
        plVar13 = plVar13 + 6;
      } while (plVar12 != param_2);
      plVar13 = (long *)*plStack_58;
      uVar9 = (ulong)*(uint *)(plStack_58 + 1);
    }
    if (param_2 == plVar13 + uVar9 * 6) goto LAB_0ed9aa84;
    puVar14 = (undefined4 *)((long)puStack_60 + (ulong)uStack_50 * 0x30 + lStack_40 + 0x18);
    plVar12 = param_2 + 1;
    do {
      *(short *)(puVar14 + -6) = (short)plVar12[-1];
      *(undefined1 *)(puVar14 + -4) = 0;
      puVar14[-2] = 0xffffffff;
      uVar11 = *(uint *)(plVar12 + 1);
      if ((ulong)uVar11 != 0xffffffff) {
        puStack_68 = puVar14 + -4;
        (**(code **)(&UNK_0f4e40f0 + (ulong)uVar11 * 8))(&puStack_68,plVar12);
        puVar14[-2] = uVar11;
      }
      puVar14[4] = (int)plVar12[4];
      uVar1 = *(undefined4 *)((long)plVar12 + 0x14);
      lVar8 = plVar12[3];
      uVar2 = *(undefined4 *)((long)plVar12 + 0x1c);
      *puVar14 = (int)plVar12[2];
      puVar14[1] = uVar1;
      puVar14[2] = (int)lVar8;
      puVar14[3] = uVar2;
      puVar14 = puVar14 + 0xc;
      plVar6 = plVar12 + 5;
      plVar12 = plVar12 + 6;
    } while (plVar6 != plVar13 + uVar9 * 6);
  }
  uVar9 = (ulong)*(uint *)(plStack_58 + 1);
  plVar13 = (long *)*plStack_58;
LAB_0ed9aa84:
  uVar10 = uStack_48;
  if ((int)uVar9 != 0) {
    lVar8 = uVar9 * 0x30;
    plVar13 = plVar13 + 1;
    do {
      if ((ulong)*(uint *)(plVar13 + 1) != 0xffffffff) {
        (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(plVar13 + 1) * 8))(&puStack_68,plVar13);
      }
      *(undefined4 *)(plVar13 + 1) = 0xffffffff;
      plVar13 = plVar13 + 6;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
    plVar13 = (long *)*plStack_58;
  }
  uVar11 = uStack_4c;
  plVar12 = plStack_58;
  puVar4 = puStack_60;
  if (plVar13 != (long *)0x0 && plStack_58 + 2 != plVar13) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar13);
  }
  *plVar12 = (long)puVar4;
  *(int *)((long)plVar12 + 0xc) = (int)uVar10;
  *(uint *)(plVar12 + 1) = uVar11;
  return lStack_38;
}


```

## `edc3e40`

- instructions: 920
- calls: 4108328, 410844d, 412a280, 412e5e0, 412f5e0, 470d9a0, 4885070, 4885120, 488e200, 48aead0, 48b0c90, 48b0d20, 48b1dc0, 4905df0, 49060a0, 4906be0, 490d170, 4911270, 5d84ba0, 5d9a920, 65358f0, 9a00fa0, 9a2edb0, 9a38520 …

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0edc3e40(byte *param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 ******ppppppuVar13;
  long *plVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  undefined8 uVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  char *pcVar23;
  byte *pbVar24;
  code *pcVar25;
  undefined7 *puVar26;
  undefined1 *puVar27;
  undefined8 ******ppppppuVar28;
  byte *pbVar29;
  undefined1 **ppuVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined2 uStack_86a;
  undefined8 uStack_868;
  ulong uStack_860;
  code *pcStack_858;
  code *pcStack_850;
  undefined8 uStack_848;
  ulong uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  undefined4 uStack_804;
  long lStack_800;
  undefined1 *puStack_7f8;
  undefined4 *puStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  byte *pbStack_7d8;
  ulong uStack_7d0;
  long lStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  code *pcStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  long lStack_790;
  byte bStack_780;
  undefined7 uStack_77f;
  undefined7 *puStack_770;
  undefined1 uStack_768;
  undefined7 uStack_767;
  undefined8 uStack_760;
  undefined4 *puStack_758;
  uint uStack_740;
  char cStack_738;
  byte *pbStack_730;
  long lStack_728;
  undefined8 uStack_720;
  byte *pbStack_718;
  byte *pbStack_710;
  long lStack_708;
  undefined8 *******pppppppuStack_700;
  undefined2 *puStack_6f8;
  undefined1 uStack_6f0;
  undefined1 uStack_6ec;
  undefined8 *******pppppppuStack_6e8;
  undefined8 ******ppppppuStack_6e0;
  undefined8 ****ppppuStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  int iStack_6c8;
  char cStack_6c4;
  ulong uStack_6c0;
  long *plStack_6b8;
  code *pcStack_6b0;
  undefined1 *puStack_5d0;
  ulong uStack_5c8;
  undefined1 auStack_5c0 [384];
  undefined2 uStack_440;
  undefined1 uStack_43e;
  undefined8 uStack_43c;
  byte bStack_3c8;
  undefined1 uStack_3c7;
  undefined1 auStack_3c0 [40];
  uint uStack_398;
  char cStack_390;
  undefined1 auStack_388 [40];
  uint uStack_360;
  char cStack_358;
  undefined1 auStack_350 [800];
  
  lVar20 = *(long *)(param_1 + 8);
  if (*(char *)(lVar20 + 0x270) == '\0') {
    *(undefined8 *)(lVar20 + 0x260) = 0;
    *(undefined8 *)(lVar20 + 0x268) = 0;
    *(long *)(lVar20 + 600) = lVar20 + 0x260;
    *(undefined1 *)(lVar20 + 0x270) = 1;
  }
  puVar2 = *(undefined8 **)(param_3 + 0x58);
  if ((**(byte **)(param_1 + 0x10) & *(byte *)((long)puVar2 + 0xa9)) == 0) {
    return;
  }
  bVar10 = *(byte *)(param_3 + 0x12);
  uStack_804 = param_2;
  lStack_728 = param_3;
  uStack_720 = param_4;
  uVar12 = FUN_0ed7db90(puVar2 + 0xf,**(undefined8 **)(param_1 + 0x18),
                        (*(undefined8 **)(param_1 + 0x18))[1]);
  bVar32 = uVar12 >> 0x20 != 0;
  bVar31 = (int)uVar12 == 0;
  puVar22 = *(undefined4 **)(param_1 + 0x10);
  uStack_3c7 = bVar31 && bVar32;
  if ((bVar31 && bVar32) && (*(char *)((long)puVar22 + 0xd) != '\0')) {
    return;
  }
  (**(code **)(*(long *)*puVar2 + 0x40))
            (auStack_350,(long *)*puVar2,*(undefined8 *)(param_1 + 0x20),
             CONCAT44(*(undefined4 *)((long)puVar2 + 0xac),*puVar22),
             *(ulong *)(puVar22 + 2) & 0xff00ffffffffff00 | (ulong)*(byte *)(puVar2 + 0x16));
  FUN_0ed766e0(auStack_350,puVar2[1],**(undefined8 **)(param_1 + 0x10),
               (*(undefined8 **)(param_1 + 0x10))[1]);
  lVar20 = *(long *)(param_1 + 8);
  pbStack_730 = param_1;
  FUN_04911270(&pppppppuStack_6e8,auStack_350);
  auStack_3c0[0] = 0;
  cStack_390 = '\0';
  auStack_388[0] = 0;
  cStack_358 = '\0';
  bStack_3c8 = bVar10 & 1;
  auVar33 = func_0x0edc52a0(lVar20 + 600,puVar2 + 5,puVar2 + 5,&pppppppuStack_6e8);
  pbVar29 = pbStack_730;
  lVar20 = auVar33._0_8_;
  if (cStack_358 == '\x01') {
    if ((ulong)uStack_360 != 0xffffffff) {
      (**(code **)(&UNK_0f4e4110 + (ulong)uStack_360 * 8))(&uStack_868,auStack_388);
    }
    uStack_360 = 0xffffffff;
  }
  if (cStack_390 == '\x01') {
    if ((ulong)uStack_398 != 0xffffffff) {
      (**(code **)(&UNK_0f4e4110 + (ulong)uStack_398 * 8))(&uStack_868,auStack_3c0);
    }
    uStack_398 = 0xffffffff;
  }
  FUN_04905df0(&pppppppuStack_6e8);
  if ((auVar33._8_8_ & 1) == 0) goto LAB_0edc4f47;
  lVar19 = *(long *)(pbVar29 + 0x30);
  uStack_768 = 0;
  cStack_738 = '\0';
  if ((*(long *)(lVar19 + 0x38) != 0) && ((*(byte *)(lStack_728 + 0x12) & 0x10) != 0)) {
    func_0x0edc5560(&lStack_7c8,lStack_728,uStack_720,lVar19);
    if (lStack_790 == 0) {
      if (*(code **)(lVar19 + 0x38) == (code *)0x0) {
        pppppppuStack_6e8 = (undefined8 *******)0x0;
        ppppppuStack_6e0 = (undefined8 ******)0x0;
        FUN_048b1dc0(&pppppppuStack_6e8);
        pppppppuVar16 = &pppppppuStack_6e8;
        ppppppuVar28 = ppppppuStack_6e0;
LAB_0edc40f1:
        ppppppuVar13 = *pppppppuVar16;
        if (ppppppuVar13 == (undefined8 ******)0x0) {
          ppppppuVar13 = (undefined8 ******)FUN_048aead0(ppppppuVar28);
        }
      }
      else {
        ppppppuVar13 = *(undefined8 *******)(lVar19 + 0x30);
        if (ppppppuVar13 == (undefined8 ******)0x0) {
          ppppppuVar28 = *(undefined8 *******)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x38))(0,lVar19,0);
          pppppppuVar16 = (undefined8 *******)(lVar19 + 0x30);
          goto LAB_0edc40f1;
        }
      }
      bVar32 = (*(byte *)(puVar2 + 5) & 1) != 0;
      pppppppuStack_6e8 = (undefined8 *******)((long)puVar2 + 0x29);
      if (bVar32) {
        pppppppuStack_6e8 = (undefined8 *******)puVar2[7];
      }
      pppppuVar3 = *ppppppuVar13;
      ppppppuStack_6e0 = (undefined8 ******)(ulong)(*(byte *)(puVar2 + 5) >> 1);
      if (bVar32) {
        ppppppuStack_6e0 = (undefined8 ******)puVar2[6];
      }
      ppppuStack_6d8 = pppppuVar3[1];
      uStack_6d0 = *(undefined4 *)(pppppuVar3 + 2);
      uStack_6cc = *(undefined4 *)((long)pppppuVar3 + 0x14);
      FUN_0470d9a0(&uStack_868,&UNK_011e9161,0x33,0xdd,&pppppppuStack_6e8);
      pcVar25 = pcStack_858;
      if (((ulong)uStack_868 & 1) == 0) {
        pcVar25 = (code *)((long)&uStack_868 + 1);
      }
      cVar9 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                        (pcVar25,&UNK_012097ee,0x20,&UNK_0145b87a,&UNK_013f60b0);
      if (((ulong)uStack_868 & 1) != 0) {
        FUN_0412a280(pcStack_858,(ulong)uStack_868 & 0xfffffffffffffffe);
      }
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uStack_860 = uStack_860 & 0xffffffffffff0000;
    uStack_868 = (long *)&UNK_0f4e32c0;
    uStack_830 = (ulong)uStack_830._4_4_ << 0x20;
    uStack_828 = 0;
    lStack_820 = 0;
    lStack_818 = 0;
    lStack_810 = 0;
    pppppppuStack_6e8 = (undefined8 *******)CONCAT44(pppppppuStack_6e8._4_4_,0xffffffff);
    ppppppuStack_6e0 = (undefined8 ******)&uStack_6d0;
    ppppuStack_6d8 = (undefined8 ****)0x800000000;
    puStack_5d0 = auStack_5c0;
    uStack_5c8 = 0x800000000;
    uStack_440 = 0xeffc;
    uStack_43c = 0xffffffff00000000;
    uStack_43e = *(undefined1 *)((long)puVar2 + 0xa9);
    uStack_86a = 0;
    puStack_6f8 = &uStack_86a;
    uStack_6f0 = 0;
    uStack_6ec = 0;
    pppppppuStack_700 = &pppppppuStack_6e8;
    (**(code **)(*(long *)*puVar2 + 0x38))
              ((long *)*puVar2,&uStack_868,&lStack_7c8,&pppppppuStack_700);
    if (uStack_43c._4_4_ != -1) {
      if (*(code **)(lVar19 + 0x38) == (code *)0x0) {
        ppuVar30 = &puStack_7f8;
        puStack_7f8 = (undefined1 *)0x0;
        puStack_7f0 = (undefined4 *)0x0;
        FUN_048b1dc0(ppuVar30);
        puVar22 = puStack_7f0;
LAB_0edc42f8:
        plVar14 = (long *)*ppuVar30;
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)FUN_048aead0(puVar22);
        }
      }
      else {
        plVar14 = *(long **)(lVar19 + 0x30);
        if (plVar14 == (long *)0x0) {
          puVar22 = *(undefined4 **)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x38))(0,lVar19,0);
          ppuVar30 = (undefined1 **)(lVar19 + 0x30);
          goto LAB_0edc42f8;
        }
      }
      uVar17 = *(undefined8 *)(*plVar14 + 8);
      uVar4 = *(undefined8 *)(*plVar14 + 0x10);
      func_0x0ed6c330(&pbStack_718,&pppppppuStack_6e8);
      bVar32 = (*(byte *)(puVar2 + 5) & 1) != 0;
      puStack_7f8 = (undefined1 *)((long)puVar2 + 0x29);
      if (bVar32) {
        puStack_7f8 = (undefined1 *)puVar2[7];
      }
      puStack_7f0 = (undefined4 *)(ulong)(*(byte *)(puVar2 + 5) >> 1);
      if (bVar32) {
        puStack_7f0 = (undefined4 *)puVar2[6];
      }
      bVar32 = (*pbStack_718 & 1) != 0;
      pbStack_7d8 = pbStack_718 + 1;
      if (bVar32) {
        pbStack_7d8 = *(byte **)(pbStack_718 + 0x10);
      }
      uStack_7d0 = (ulong)(*pbStack_718 >> 1);
      if (bVar32) {
        uStack_7d0 = *(ulong *)(pbStack_718 + 8);
      }
      uStack_7e8 = uVar17;
      uStack_7e0 = uVar4;
      FUN_0470d9a0(&bStack_780,&UNK_012d3b86,0x39,0xddd,&puStack_7f8);
      puVar26 = puStack_770;
      if ((bStack_780 & 1) == 0) {
        puVar26 = &uStack_77f;
      }
      cVar9 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                        (puVar26,&UNK_012ba1d5,0x35,&UNK_0145b87a,&UNK_013f60b0);
      if ((bStack_780 & 1) != 0) {
        FUN_0412a280(puStack_770,CONCAT71(uStack_77f,bStack_780) & 0xfffffffffffffffe);
      }
      pbVar18 = pbStack_718;
      pbVar29 = pbStack_710;
      if (pbStack_718 != (byte *)0x0) {
        for (; pbVar18 != pbVar29; pbVar29 = pbVar29 + -0x18) {
          if ((pbVar29[-0x18] & 1) != 0) {
            FUN_0412a280(*(undefined8 *)(pbVar29 + -8),
                         *(ulong *)(pbVar29 + -0x18) & 0xfffffffffffffffe);
          }
        }
        pbStack_710 = pbVar18;
        FUN_0412a280(pbStack_718,lStack_708 - (long)pbStack_718);
      }
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar8 = (uint)uStack_830;
    if (cStack_738 == '\x01') {
      if ((ulong)uStack_740 == 0xffffffff) {
        if ((uint)uStack_830 != 0xffffffff) goto LAB_0edc4547;
      }
      else if ((uint)uStack_830 == 0xffffffff) {
        (**(code **)(&UNK_0f4e4110 + (ulong)uStack_740 * 8))(&puStack_7f8,&uStack_768);
        uStack_740 = 0xffffffff;
      }
      else {
LAB_0edc4547:
        puStack_7f8 = &uStack_768;
        (**(code **)(&UNK_0f4e4148 + (uStack_830 & 0xffffffff) * 8))(&puStack_7f8);
      }
    }
    else {
      uStack_768 = 0;
      uStack_740 = 0xffffffff;
      if ((uStack_830 & 0xffffffff) != 0xffffffff) {
        puStack_7f8 = &uStack_768;
        (**(code **)(&UNK_0f4e4290 + (uStack_830 & 0xffffffff) * 8))(&puStack_7f8,&pcStack_858);
        uStack_740 = uVar8;
      }
      cStack_738 = '\x01';
    }
    lStack_800 = lVar20;
    if ((uStack_5c8 & 0xffffffff) != 0) {
      lVar20 = (uStack_5c8 & 0xffffffff) * 0x30;
      puVar27 = puStack_5d0 + 8;
      do {
        if ((ulong)*(uint *)(puVar27 + 8) != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(puVar27 + 8) * 8))(&puStack_7f8,puVar27);
        }
        *(undefined4 *)(puVar27 + 8) = 0xffffffff;
        puVar27 = puVar27 + 0x30;
        lVar20 = lVar20 + -0x30;
      } while (lVar20 != 0);
    }
    if (puStack_5d0 != (undefined1 *)0x0 && auStack_5c0 != puStack_5d0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puStack_5d0);
    }
    if (((ulong)ppppuStack_6d8 & 0xffffffff) != 0) {
      lVar20 = ((ulong)ppppuStack_6d8 & 0xffffffff) << 5;
      ppppppuVar28 = ppppppuStack_6e0 + 1;
      do {
        if ((ulong)*(uint *)(ppppppuVar28 + 1) != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(ppppppuVar28 + 1) * 8))
                    (&puStack_7f8,ppppppuVar28);
        }
        *(undefined4 *)(ppppppuVar28 + 1) = 0xffffffff;
        ppppppuVar28 = ppppppuVar28 + 4;
        lVar20 = lVar20 + -0x20;
      } while (lVar20 != 0);
    }
    pbVar29 = pbStack_730;
    lVar20 = lStack_800;
    if (ppppppuStack_6e0 != (undefined8 ******)0x0 &&
        (undefined8 ******)&uStack_6d0 != ppppppuStack_6e0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,ppppppuStack_6e0);
    }
    if (lStack_820 != 0) {
      lStack_818 = lStack_820;
      FUN_0412a280(lStack_820,lStack_810 - lStack_820);
    }
    if ((uStack_830 & 0xffffffff) != 0xffffffff) {
      (**(code **)(&UNK_0f4e4110 + (uStack_830 & 0xffffffff) * 8))(&pppppppuStack_6e8,&pcStack_858);
    }
    if (pcStack_7b0 != (code *)0x0) {
      (*pcStack_7b0)(&lStack_7c8);
    }
  }
  func_0x09a38520(lVar20 + 0x360,&uStack_768);
  if ((cStack_738 == '\x01') && ((ulong)uStack_740 != 0xffffffff)) {
    (**(code **)(&UNK_0f4e4110 + (ulong)uStack_740 * 8))(&pppppppuStack_6e8,&uStack_768);
  }
  bVar10 = *(byte *)(*(long *)(pbVar29 + 0x10) + 0xc);
  if (((bVar10 & 4) != 0) && (*(byte *)(puVar2 + 0x15) != 0)) {
    *(ushort *)(lVar20 + 0x330) = *(byte *)(puVar2 + 0x15) | 0x100;
    bVar10 = *(byte *)(*(long *)(pbVar29 + 0x10) + 0xc);
  }
  if (((bVar10 & 0x20) != 0) && ((*(byte *)((long)puVar2 + 0xa9) & 1) == 0)) {
    bVar10 = *(byte *)((long)puVar2 + 0xa9) - 1;
    if (bVar10 < 4) {
      lVar15 = (ulong)bVar10 * 8;
      lVar19 = *(long *)(&UNK_014eec20 + lVar15);
      pcVar23 = *(char **)(&UNK_0f4e67a0 + lVar15);
    }
    else {
      pcVar23 = "unknown";
      lVar19 = 7;
    }
    if (*(char *)(lVar20 + 0x350) == '\x01') {
      FUN_0412f5e0(lVar20 + 0x338,pcVar23,lVar19);
    }
    else {
      *(char *)(lVar20 + 0x338) = (char)lVar19 * '\x02';
      memcpy(lVar20 + 0x339,pcVar23,lVar19);
      *(undefined1 *)(lVar20 + 0x339 + lVar19) = 0;
      *(undefined1 *)(lVar20 + 0x350) = 1;
    }
  }
  uVar21 = uStack_804;
  bVar10 = *pbVar29;
  *pbVar29 = bVar10 + 1;
  if ((*(byte *)(*(long *)(pbVar29 + 0x10) + 0xc) & 8) != 0) {
    *(ushort *)(lVar20 + 0x332) = bVar10 | 0x100;
  }
  if ((*(byte *)(lStack_728 + 0x12) & 8) != 0) {
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_848 = 0;
    uStack_840 = 0;
    pcStack_858 = (code *)0x0;
    pcStack_850 = (code *)0x0;
    uStack_868 = (long *)0x0;
    uStack_860 = 0;
    FUN_05d84ba0(&uStack_868);
    FUN_05d9a920(&pppppppuStack_6e8,&lStack_728,&uStack_868);
    if (pcStack_850 != (code *)0x0) {
      (*pcStack_850)(&uStack_868);
    }
    uVar12 = uStack_6c0;
    if (pcStack_6b0 == (code *)0x0) {
      uStack_868 = (long *)0x0;
      uStack_860 = 0;
      FUN_048b1dc0(&uStack_868);
      plVar14 = uStack_868;
      uVar12 = uStack_860;
LAB_0edc48e4:
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)FUN_048aead0(uVar12);
      }
    }
    else {
      plVar14 = plStack_6b8;
      if (plStack_6b8 == (long *)0x0) {
        (*pcStack_6b0)(0,&pppppppuStack_6e8,0);
        plVar14 = plStack_6b8;
        goto LAB_0edc48e4;
      }
    }
    lVar19 = *plVar14;
    if ((DAT_0f5525c0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5525c0), iVar11 != 0)) {
      FUN_04906be0(0xf5525a8);
      FUN_0410844d(&DAT_0f5525c0);
    }
    uVar12 = uStack_6c0;
    if (*(int *)(lVar19 + 4) == _DAT_0f5525ac) {
      pppppppuVar16 = pppppppuStack_6e8;
      if (cStack_6c4 == '\x02') {
        pppppppuVar16 = &pppppppuStack_6e8;
      }
      if (pppppppuVar16 == (undefined8 *******)0x0 || iStack_6c8 != -0x376b6ac3) {
        if (plStack_6b8 == (long *)0x0) {
          (*pcStack_6b0)(0,&pppppppuStack_6e8,0);
        }
        pppppppuVar16 = pppppppuStack_6e8;
        if (cStack_6c4 == '\x02') {
          pppppppuVar16 = &pppppppuStack_6e8;
        }
        pppppppuVar16 =
             (undefined8 *******)FUN_0488e200(uStack_6c0,plStack_6b8,0xc894953d,pppppppuVar16);
      }
      uStack_868 = (long *)CONCAT71(uStack_868._1_7_,*(undefined1 *)pppppppuVar16);
      uStack_840 = CONCAT44(uStack_840._4_4_,1);
      func_0x09a47fd0(lVar20 + 0x398,&uStack_868);
      if ((uStack_840 & 0xffffffff) != 0xffffffff) {
        (**(code **)(&UNK_0f4e4110 + (uStack_840 & 0xffffffff) * 8))(&lStack_7c8,&uStack_868);
      }
    }
    else {
      if (pcStack_6b0 == (code *)0x0) {
        uStack_868 = (long *)0x0;
        uStack_860 = 0;
        FUN_048b1dc0(&uStack_868);
        plStack_6b8 = uStack_868;
        uVar12 = uStack_860;
LAB_0edc4a43:
        if (plStack_6b8 == (long *)0x0) {
          plStack_6b8 = (long *)FUN_048aead0(uVar12);
        }
      }
      else if (plStack_6b8 == (long *)0x0) {
        (*pcStack_6b0)(0,&pppppppuStack_6e8,0);
        goto LAB_0edc4a43;
      }
      if ((*(byte *)(plStack_6b8 + 3) & 4) == 0) {
        auVar33 = func_0x09b1bd70(&pppppppuStack_6e8);
        lVar19 = auVar33._0_8_;
        if (lVar19 == 0) {
          lVar19 = FUN_048aead0(auVar33._8_8_);
        }
        if ((*(byte *)(lVar19 + 0x18) & 0x40) != 0) {
          lStack_800 = lVar20;
          uVar17 = func_0x09b1bd70(&pppppppuStack_6e8);
          func_0x0ed6b390(&uStack_768,uVar17);
          puVar22 = (undefined4 *)CONCAT71(uStack_767,uStack_768);
          if (puVar22 != puStack_758) {
            do {
              puStack_7f8 = (undefined1 *)CONCAT44(puStack_7f8._4_4_,*puVar22);
              uStack_7e8 = uStack_760;
              uStack_798 = 0;
              lStack_790 = 0;
              uStack_7a8 = 0;
              uStack_7a0 = 0;
              uStack_7b8 = 0;
              pcStack_7b0 = (code *)0x0;
              lStack_7c8 = 0;
              uStack_7c0 = 0;
              puStack_7f0 = puVar22;
              FUN_05d84ba0(&lStack_7c8);
              FUN_05d9a920(&uStack_868,&puStack_7f0,&lStack_7c8);
              if ((uStack_840 == uStack_6c0) && ((pcStack_6b0 != (code *)0x0) == (uStack_830 != 0)))
              {
                if ((cStack_6c4 == '\0') || ((int)uStack_848 != iStack_6c8)) {
                  bVar32 = cStack_6c4 == '\0' && uStack_848._4_1_ == '\0';
                }
                else {
                  pppppppuVar16 = &pppppppuStack_6e8;
                  if (cStack_6c4 != '\x02') {
                    pppppppuVar16 = pppppppuStack_6e8;
                  }
                  lVar20 = (*pcStack_858)(3,&uStack_868,pppppppuVar16);
                  bVar32 = lVar20 != 0;
                }
              }
              else {
                bVar32 = false;
              }
              if (pcStack_850 != (code *)0x0) {
                (*pcStack_850)(&uStack_868);
              }
              if (pcStack_7b0 != (code *)0x0) {
                (*pcStack_7b0)(&lStack_7c8);
              }
              if (bVar32) {
                if ((puStack_7f0[0x14] == -0x45dcb126) && (*(long *)(puStack_7f0 + 0x16) != 0)) {
                  func_0x09a2edb0(&uStack_868,*(long *)(puStack_7f0 + 0x16) + 0x28);
                  func_0x09a47fd0(lStack_800 + 0x398,&uStack_868);
                  if ((uStack_840 & 0xffffffff) != 0xffffffff) {
                    (**(code **)(&UNK_0f4e4110 + (uStack_840 & 0xffffffff) * 8))
                              (&lStack_7c8,&uStack_868);
                  }
                }
                break;
              }
              puVar22 = puVar22 + 0x1a;
            } while (puVar22 != puStack_758);
          }
          lVar20 = lStack_800;
          uVar21 = uStack_804;
          if (*(char *)(lStack_800 + 0x3c8) == '\0') {
            FUN_0490d170(&uStack_868,&pppppppuStack_6e8);
            iVar11 = FUN_065358f0(&uStack_868);
            lStack_7c8 = (long)iVar11;
            uStack_7a0 = CONCAT44(uStack_7a0._4_4_,2);
            func_0x09a47fd0(lVar20 + 0x398,&lStack_7c8);
            func_0x09a00fa0(&lStack_7c8);
            if (pcStack_850 != (code *)0x0) {
              (*pcStack_850)(&uStack_868);
            }
          }
        }
      }
      else {
        FUN_0490d170(&uStack_868,&pppppppuStack_6e8);
        iVar11 = FUN_065358f0(&uStack_868);
        lStack_7c8 = (long)iVar11;
        uStack_7a0 = CONCAT44(uStack_7a0._4_4_,2);
        func_0x09a47fd0(lVar20 + 0x398,&lStack_7c8);
        func_0x09a00fa0(&lStack_7c8);
        if (pcStack_850 != (code *)0x0) {
          (*pcStack_850)(&uStack_868);
        }
      }
    }
    if ((code *)CONCAT44(uStack_6cc,uStack_6d0) != (code *)0x0) {
      (*(code *)CONCAT44(uStack_6cc,uStack_6d0))(&pppppppuStack_6e8);
    }
  }
  pbVar18 = (byte *)FUN_0ed6b140(**(undefined8 **)(pbVar29 + 0x18),
                                 (*(undefined8 **)(pbVar29 + 0x18))[1],uVar21);
  if (pbVar18 != (byte *)0x0) {
    pbVar1 = (byte *)(lVar20 + 0x68);
    if (*(char *)(lVar20 + 0x80) == '\x01') {
      if (pbVar1 != pbVar18) {
        bVar10 = *pbVar18;
        if ((*pbVar1 & 1) == 0) {
          if ((bVar10 & 1) == 0) {
            *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(pbVar18 + 0x10);
            uVar5 = *(undefined4 *)(pbVar18 + 4);
            uVar6 = *(undefined4 *)(pbVar18 + 8);
            uVar7 = *(undefined4 *)(pbVar18 + 0xc);
            *(undefined4 *)pbVar1 = *(undefined4 *)pbVar18;
            *(undefined4 *)(lVar20 + 0x6c) = uVar5;
            *(undefined4 *)(lVar20 + 0x70) = uVar6;
            *(undefined4 *)(lVar20 + 0x74) = uVar7;
          }
          else {
            FUN_04885070(pbVar1,*(undefined8 *)(pbVar18 + 0x10),*(undefined8 *)(pbVar18 + 8));
          }
        }
        else {
          bVar32 = (bVar10 & 1) != 0;
          pbVar24 = pbVar18 + 1;
          if (bVar32) {
            pbVar24 = *(byte **)(pbVar18 + 0x10);
          }
          uVar12 = (ulong)(bVar10 >> 1);
          if (bVar32) {
            uVar12 = *(ulong *)(pbVar18 + 8);
          }
          FUN_04885120(pbVar1,pbVar24,uVar12);
        }
      }
    }
    else if ((*pbVar18 & 1) == 0) {
      *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(pbVar18 + 0x10);
      uVar5 = *(undefined4 *)(pbVar18 + 4);
      uVar6 = *(undefined4 *)(pbVar18 + 8);
      uVar7 = *(undefined4 *)(pbVar18 + 0xc);
      *(undefined4 *)pbVar1 = *(undefined4 *)pbVar18;
      *(undefined4 *)(lVar20 + 0x6c) = uVar5;
      *(undefined4 *)(lVar20 + 0x70) = uVar6;
      *(undefined4 *)(lVar20 + 0x74) = uVar7;
      *(undefined1 *)(lVar20 + 0x80) = 1;
    }
    else {
      FUN_0412e5e0(pbVar1,*(undefined8 *)(pbVar18 + 0x10),*(undefined8 *)(pbVar18 + 8));
      *(undefined1 *)(lVar20 + 0x80) = 1;
    }
  }
  lVar19 = **(long **)(pbVar29 + 0x18);
  lVar15 = (*(long **)(pbVar29 + 0x18))[1];
  if (lVar19 == 0) {
    lVar19 = FUN_048aead0(lVar15);
  }
  pppppppuVar16 = (undefined8 *******)FUN_048b0c90(lVar15,lVar19,uVar21,1);
  if (pppppppuVar16 == (undefined8 *******)0x0) {
    pppppppuStack_6e8 = (undefined8 *******)0x0;
    ppppppuStack_6e0 = (undefined8 ******)0x0;
    FUN_048b0d20(&pppppppuStack_6e8);
    pppppppuVar16 = pppppppuStack_6e8;
    if (pppppppuStack_6e8 == (undefined8 *******)0x0) goto LAB_0edc4f47;
  }
  if ((*(int *)(pppppppuVar16 + 10) != -0x45dcb126) ||
     (pppppppuVar16[0xb] == (undefined8 ******)0x0)) goto LAB_0edc4f47;
  FUN_0ed77d90(&pppppppuStack_6e8,*(undefined8 *)(pbVar29 + 0x20),pppppppuVar16[0xb] + 8);
  if (ppppuStack_6d8 != (undefined8 ****)0x0) {
    if (*(char *)(lVar20 + 0x318) == '\0') {
      *(undefined8 ********)(lVar20 + 0x300) = pppppppuStack_6e8;
      *(undefined8 *******)(lVar20 + 0x308) = ppppppuStack_6e0;
      *(undefined8 *****)(lVar20 + 0x310) = ppppuStack_6d8;
LAB_0edc4f1e:
      pppppppuStack_6e8 = &ppppppuStack_6e0;
      ppppppuStack_6e0[2] = (undefined8 *****)(lVar20 + 0x308);
      ppppppuStack_6e0 = (undefined8 ******)0x0;
      ppppuStack_6d8 = (undefined8 ****)0x0;
    }
    else {
      FUN_049060a0((long *)(lVar20 + 0x300),*(undefined8 *)(lVar20 + 0x308));
      *(undefined8 ********)(lVar20 + 0x300) = pppppppuStack_6e8;
      *(undefined8 *******)(lVar20 + 0x308) = ppppppuStack_6e0;
      *(undefined8 *****)(lVar20 + 0x310) = ppppuStack_6d8;
      if (ppppuStack_6d8 != (undefined8 ****)0x0) goto LAB_0edc4f1e;
      *(long *)(lVar20 + 0x300) = lVar20 + 0x308;
    }
    *(undefined1 *)(lVar20 + 0x318) = 1;
  }
  FUN_049060a0(&pppppppuStack_6e8,ppppppuStack_6e0);
LAB_0edc4f47:
  FUN_04905df0(auStack_350);
  return;
}


```

## `edf4e50`

- instructions: 118
- calls: 412e5e0, 48bed00, eec74c0, eee2ff0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0edf4e50(long *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  bool bVar10;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    plVar4 = param_1 + 1;
    plVar6 = plVar4;
  }
  else {
    bVar10 = (*param_2 & 1) != 0;
    pbVar9 = param_2 + 1;
    if (bVar10) {
      pbVar9 = *(byte **)(param_2 + 0x10);
    }
    uVar8 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        plVar4 = plVar2;
        bVar10 = (*(byte *)(plVar4 + 4) & 1) != 0;
        lVar5 = (long)plVar4 + 0x21;
        if (bVar10) {
          lVar5 = plVar4[6];
        }
        uVar3 = (ulong)(*(byte *)(plVar4 + 4) >> 1);
        if (bVar10) {
          uVar3 = plVar4[5];
        }
        uVar7 = uVar8;
        if (uVar3 < uVar8) {
          uVar7 = uVar3;
        }
        iVar1 = memcmp(pbVar9,lVar5,uVar7);
        if (iVar1 == 0) break;
        if (-1 < iVar1) goto LAB_0edf4ee5;
LAB_0edf4e90:
        plVar2 = (long *)*plVar4;
        plVar6 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_0edf4f1d;
      }
      if (uVar8 < uVar3) goto LAB_0edf4e90;
LAB_0edf4ee5:
      iVar1 = memcmp(lVar5,pbVar9,uVar7);
      if (iVar1 == 0) {
        if (uVar8 <= uVar3) {
          return plVar4;
        }
      }
      else if (-1 < iVar1) {
        return plVar4;
      }
      plVar2 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar6 = plVar4 + 1;
  }
LAB_0edf4f1d:
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (plVar2 == (long *)0x0) {
    FUN_0eec74c0(0x68,0);
  }
  pbVar9 = (byte *)*param_3;
  if ((*pbVar9 & 1) == 0) {
    plVar2[6] = *(long *)(pbVar9 + 0x10);
    lVar5 = *(long *)(pbVar9 + 8);
    plVar2[4] = *(long *)pbVar9;
    plVar2[5] = lVar5;
  }
  else {
    FUN_0412e5e0(plVar2 + 4,*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
  }
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar4;
  *plVar6 = (long)plVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_048bed00(param_1[1],plVar2);
  param_1[2] = param_1[2] + 1;
  return plVar2;
}


```

## `edf92e0`

- instructions: 241
- calls: 412a280, 412c2d0, 4882e20, 4882eb0, ee03200, ee03210, eec74c0, eee2dd0, eee2f00

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0edf92e0(undefined4 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 uStack_56;
  undefined1 uStack_55;
  uint uStack_54;
  long *plStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  undefined4 *puStack_38;
  
  uStack_54 = *(uint *)(param_2 + 0x18);
  if (uStack_54 != 0) {
    if (uStack_54 == 1) {
      lVar16 = *(long *)(param_2 + 8);
      uVar7 = *(undefined4 *)(lVar16 + 0x10);
      uVar8 = *(undefined4 *)(lVar16 + 0x14);
      uVar9 = *(undefined4 *)(lVar16 + 0x18);
      uVar10 = *(undefined4 *)(lVar16 + 0x1c);
      if (*(long *)(lVar16 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar16 + 0x18) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = *(long **)(param_1 + 2);
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar22 = plVar1 + 1;
        lVar16 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          FUN_0412c2d0(plVar1);
        }
      }
    }
    else {
      plVar1 = (long *)(param_1 + 8);
      uVar3 = param_1[0x88];
      if (0x20 < uStack_54) {
        if (uVar3 != 0xffffffff) {
          (**(code **)(&UNK_0f533710 + (ulong)uVar3 * 8))(&uStack_55,plVar1);
        }
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 10) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        param_1[0x88] = 2;
        uVar21 = (ulong)*(uint *)(param_2 + 0x18);
        if (uVar21 == 0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21 * 0x10);
          if (puVar12 == (undefined4 *)0x0) {
            FUN_0eec74c0(uVar21 * 0x10,0);
          }
          *(undefined4 **)(param_1 + 8) = puVar12;
          *(undefined4 **)(param_1 + 10) = puVar12;
          *(undefined4 **)(param_1 + 0xc) = puVar12 + uVar21 * 4;
        }
        plVar22 = *(long **)(param_2 + 8);
        plVar19 = (long *)(param_2 + 8);
        plVar2 = plVar19;
        puVar4 = param_1;
        if (plVar22 != plVar19) {
          do {
            puStack_48 = puVar4;
            plStack_50 = plVar2;
            puVar4 = *(undefined4 **)(param_1 + 0xc);
            if (puVar12 < puVar4) {
              lVar16 = plVar22[3];
              uVar7 = *(undefined4 *)((long)plVar22 + 0x14);
              lVar18 = plVar22[3];
              uVar8 = *(undefined4 *)((long)plVar22 + 0x1c);
              *puVar12 = (int)plVar22[2];
              puVar12[1] = uVar7;
              puVar12[2] = (int)lVar18;
              puVar12[3] = uVar8;
              if (lVar16 != 0) {
                LOCK();
                plVar2 = (long *)(lVar16 + 0x10);
                *plVar2 = *plVar2 + 1;
                UNLOCK();
              }
              puVar12 = puVar12 + 4;
            }
            else {
              lVar16 = *plVar1;
              lVar18 = (long)puVar12 - lVar16;
              lVar20 = lVar18 >> 4;
              uVar21 = lVar20 + 1;
              if (0xfffffffffffffff < uVar21) {
                FUN_0ee03200();
LAB_0edf9690:
                FUN_04882eb0();
                goto LAB_0edf9695;
              }
              uVar17 = (long)puVar4 - lVar16 >> 3;
              if (uVar17 <= uVar21) {
                uVar17 = uVar21;
              }
              if (0x7fffffffffffffef < (ulong)((long)puVar4 - lVar16)) {
                uVar17 = 0xfffffffffffffff;
              }
              puStack_38 = puVar4;
              if (uVar17 == 0) {
LAB_0edf95af:
                lVar13 = 0;
              }
              else {
                lStack_40 = lVar16;
                if (0xfffffffffffffff < uVar17) goto LAB_0edf9690;
                lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 << 4);
                lVar16 = lStack_40;
                if (lVar13 == 0) {
                  FUN_0eec74c0(uVar17 << 4,0);
                  lVar16 = lStack_40;
                  goto LAB_0edf95af;
                }
              }
              param_1 = puStack_48;
              lVar5 = plVar22[3];
              uVar7 = *(undefined4 *)((long)plVar22 + 0x14);
              lVar15 = plVar22[3];
              uVar8 = *(undefined4 *)((long)plVar22 + 0x1c);
              puVar12 = (undefined4 *)(lVar13 + lVar18);
              *puVar12 = (int)plVar22[2];
              puVar12[1] = uVar7;
              puVar12[2] = (int)lVar15;
              puVar12[3] = uVar8;
              lVar15 = lVar18;
              if (lVar5 != 0) {
                LOCK();
                plVar19 = (long *)(lVar5 + 0x10);
                *plVar19 = *plVar19 + 1;
                UNLOCK();
                lVar16 = *(long *)(puStack_48 + 8);
                puStack_38 = *(undefined4 **)(puStack_48 + 0xc);
                lVar20 = *(long *)(puStack_48 + 10) - lVar16 >> 4;
                lVar15 = *(long *)(puStack_48 + 10) - lVar16;
              }
              puVar12 = (undefined4 *)(lVar18 + lVar13 + 0x10);
              lVar18 = lVar18 + lVar13 + lVar20 * -0x10;
              memcpy(lVar18,lVar16,lVar15);
              *(long *)(param_1 + 8) = lVar18;
              *(undefined4 **)(param_1 + 10) = puVar12;
              *(ulong *)(param_1 + 0xc) = uVar17 * 0x10 + lVar13;
              plVar19 = plStack_50;
              if (lVar16 != 0) {
                FUN_0412a280(lVar16,(long)puStack_38 - lVar16);
                plVar19 = plStack_50;
              }
            }
            *(undefined4 **)(param_1 + 10) = puVar12;
            plVar22 = (long *)*plVar22;
            plVar2 = plStack_50;
            puVar4 = puStack_48;
          } while (plVar22 != plVar19);
          if (puVar12 != (undefined4 *)*plVar1) {
            *(undefined4 **)(param_1 + 4) = (undefined4 *)*plVar1;
            *(undefined4 **)(param_1 + 6) = puVar12;
            goto LAB_0edf9668;
          }
        }
LAB_0edf9695:
        uVar14 = FUN_0ee03210();
        uVar14 = FUN_04882e20(uVar14);
        FUN_04882e20(uVar14);
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (uVar3 != 0xffffffff) {
        (**(code **)(&UNK_0f533710 + (ulong)uVar3 * 8))(&uStack_56,plVar1);
      }
      lVar16 = 0;
      memset(plVar1,0,0x200);
      param_1[0x88] = 1;
      plVar22 = (long *)(param_1 + 10);
      plVar19 = (long *)(param_2 + 8);
      do {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)(param_2 + 8)) goto LAB_0edf948c;
        uVar7 = *(undefined4 *)(plVar19 + 2);
        uVar8 = *(undefined4 *)((long)plVar19 + 0x14);
        uVar9 = *(undefined4 *)(plVar19 + 3);
        uVar10 = *(undefined4 *)((long)plVar19 + 0x1c);
        if (plVar19[3] != 0) {
          LOCK();
          plVar2 = (long *)(plVar19[3] + 0x10);
          *plVar2 = *plVar2 + 1;
          UNLOCK();
        }
        lVar18 = *plVar22;
        *(undefined4 *)(plVar22 + -1) = uVar7;
        *(undefined4 *)((long)plVar22 + -4) = uVar8;
        *(undefined4 *)plVar22 = uVar9;
        *(undefined4 *)((long)plVar22 + 4) = uVar10;
        if (lVar18 != 0) {
          FUN_0412c2d0();
        }
        lVar16 = lVar16 + 1;
        plVar22 = plVar22 + 2;
      } while (lVar16 != 0x20);
      lVar16 = 0x20;
LAB_0edf948c:
      *(long **)(param_1 + 4) = plVar1;
      *(long **)(param_1 + 6) = plVar1 + lVar16 * 2;
    }
  }
LAB_0edf9668:
  return uStack_54 != 0;
}


```

## `edf9810`

- instructions: 127
- calls: 412c2d0

```c

void FUN_0edf9810(long param_1,long *param_2,int param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  plVar7 = (long *)(param_1 + 8);
  plVar9 = *(long **)(param_1 + 8);
  if ((param_4 >> 0x20 & 1) == 0) {
    if (param_3 == 0) {
      plVar9 = plVar7;
    }
    param_4 = (ulong)((param_3 != 0) + 0x7fffffff);
  }
  else if (param_3 == 0) {
    if (plVar9 != plVar7) {
      uVar4 = 0;
      plVar6 = plVar9;
      do {
        uVar4 = uVar4 + 1;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != plVar7);
      do {
        uVar5 = uVar4 >> 1;
        plVar7 = plVar9;
        if (uVar4 != 1) {
          uVar8 = uVar5 + 1;
          do {
            plVar7 = (long *)*plVar7;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
        }
        if ((int)plVar7[6] <= (int)param_4) {
          plVar9 = (long *)*plVar7;
          uVar5 = uVar4 + ~uVar5;
        }
        uVar4 = uVar5;
      } while (uVar4 != 0);
    }
  }
  else if (plVar9 != plVar7) {
    uVar4 = 0;
    plVar6 = plVar9;
    do {
      uVar4 = uVar4 + 1;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar7);
    do {
      uVar5 = uVar4 >> 1;
      plVar7 = plVar9;
      if (uVar4 != 1) {
        uVar8 = uVar5 + 1;
        do {
          plVar7 = (long *)*plVar7;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
      if ((int)plVar7[6] < (int)param_4) {
        plVar9 = (long *)*plVar7;
        uVar5 = uVar4 + ~uVar5;
      }
      uVar4 = uVar5;
    } while (uVar4 != 0);
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(long *)(lVar2 + 0x18) = lVar2;
  plVar7 = *(long **)(lVar2 + 0x20);
  *(long *)(lVar2 + 0x20) = lVar3;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar3 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0412c2d0(plVar7);
    }
  }
  *(long *)(lVar2 + 0x28) = param_1;
  *(int *)(lVar2 + 0x38) = (int)param_4;
  iVar1 = *(int *)(param_1 + 0x18);
  plVar7 = (long *)plVar9[1];
  lVar2 = *param_2;
  *(long **)(lVar2 + 0x10) = plVar7;
  *(long **)(lVar2 + 8) = plVar9;
  *plVar7 = lVar2 + 8;
  plVar9[1] = lVar2 + 8;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  return;
}


```

## `edf9c90` — Bedrock::PubSub::Detail::ThreadingPublisherBase<S0::?::ThreadModel::SingleThreaded>::vslot0

- instructions: 87
- calls: 412c2d0

```c

void Bedrock_PubSub_Detail_ThreadingPublisherBase_S0_ThreadModel_SingleThreaded_v0
               (undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = &UNK_0f4e6890;
  plVar1 = param_1 + 1;
  plVar3 = (long *)param_1[1];
  while (plVar3 != plVar1) {
    lVar4 = plVar3[2];
    plVar3 = (long *)plVar3[3];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    lVar5 = *(long *)(lVar4 + 8);
    plVar6 = *(long **)(lVar4 + 0x10);
    *plVar6 = lVar5;
    *(long **)(lVar5 + 8) = plVar6;
    *(long *)(lVar4 + 8) = lVar4 + 8;
    *(long *)(lVar4 + 0x10) = lVar4 + 8;
    plVar6 = *(long **)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
      }
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar4 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0412c2d0(plVar3);
      }
    }
    plVar3 = (long *)*plVar1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_0f4e6848;
  while (plVar3 != plVar1) {
    lVar4 = *plVar3;
    plVar6 = (long *)plVar3[1];
    *plVar6 = lVar4;
    *(long **)(lVar4 + 8) = plVar6;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    plVar3 = (long *)*plVar1;
  }
  if (plVar3 != plVar1) {
    puVar7 = (undefined8 *)param_1[2];
    *puVar7 = plVar3;
    plVar3[1] = (long)puVar7;
    param_1[1] = plVar1;
    param_1[2] = plVar1;
  }
  return;
}


```

## `edff950`

- instructions: 29
- calls: 70275d0

```c

undefined8 FUN_0edff950(undefined8 param_1,undefined8 param_2,int *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  int iStack_1c;
  
  iStack_1c = *param_3;
  uVar1 = func_0x070275d0(param_1,param_2,&iStack_1c,0,10);
  if ((int)uVar1 == 0) {
    uVar1 = 2;
    if ((param_4 <= iStack_1c) && (uVar1 = 3, iStack_1c <= param_5)) {
      *param_3 = iStack_1c;
      uVar1 = 0;
    }
  }
  return uVar1;
}


```

## `ee03200`

- instructions: 4
- calls: 4882e40

```c

void FUN_0ee03200(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `ee03210`

- instructions: 4
- calls: 4882ef0

```c

void FUN_0ee03210(void)

{
  code *pcVar1;
  
  FUN_04882ef0(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `ee06fa0`

- instructions: 68
- string: `BinaryStream read() incomplete`
- string: `ead() incomplete`
- calls: 412a280, eec74c0, eee17a0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee06fa0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  char cStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_48 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar1 = s_ead___incomplete_014290d8._8_8_;
  *(ulong *)((long)puStack_48 + 0xe) =
       CONCAT62(s_ead___incomplete_014290d8._2_6_,s_ead___incomplete_014290d8._0_2_);
  *(undefined8 *)((long)puStack_48 + 0x16) = uVar1;
  uVar1 = CONCAT26(s_ead___incomplete_014290d8._0_2_,_UNK_014290d2);
  *puStack_48 = _DAT_014290ca;
  puStack_48[1] = uVar1;
  *(undefined1 *)((long)puStack_48 + 0x1e) = 0;
  uStack_68 = _DAT_0f533eb0;
  uStack_60 = _UNK_0f533eb8;
  uStack_78 = _DAT_0f533ea0;
  uStack_70 = _UNK_0f533ea8;
  uStack_58 = 0x21;
  uStack_50 = 0x1e;
  uStack_3e = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  cStack_30 = '\x01';
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_0eee17a0(&uStack_98,&uStack_78,auStack_28,1);
  if ((cStack_30 == '\x01') && ((uStack_58 & 1) != 0)) {
    FUN_0412a280(puStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = uStack_98;
  *(undefined8 *)(param_1 + 6) = uStack_90;
  *(undefined8 *)(param_1 + 8) = uStack_88;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}


```

## `ee13f50` — PacketObserver::vslot0, NetworkSession::vslot0, NullSoundPlayer::vslot0 (+10 more)

- instructions: 25

```c

void ServerContentKeyProvider_ServerContentKeyProviderImpl_v0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &UNK_0f534768;
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if (plVar3[2] != 0) {
    LOCK();
    plVar1 = plVar3 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


```

## `ee1c910`

- instructions: 56
- calls: 412c2d0, 412d680, 412d6b0, 417d010

```c

undefined1 FUN_0ee1c910(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *in_FS_OFFSET;
  
  lVar4 = *in_FS_OFFSET;
  if (*(char *)(lVar4 + -0xa58) == '\0') {
    *(undefined1 *)(lVar4 + -0xa58) = 1;
    FUN_0417d010(&UNK_0ee1c840,lVar4 + -0xa68,0xf53dab8);
  }
  lVar6 = *(long *)(lVar4 + -0xa60);
  *(undefined8 *)(lVar4 + -0xa68) = 0;
  *(undefined8 *)(lVar4 + -0xa60) = 0;
  if (lVar6 != 0) {
    FUN_0412c2d0();
  }
  FUN_0412d680(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x40);
  for (lVar6 = *(long *)(param_1 + 0x48); lVar4 != lVar6; lVar6 = lVar6 + -0x10) {
    plVar5 = *(long **)(lVar6 + -8);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0412c2d0(plVar5);
      }
    }
  }
  *(long *)(param_1 + 0x48) = lVar4;
  FUN_0412d6b0(param_1 + 0x18);
  LOCK();
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x58) = 0;
  UNLOCK();
  return uVar2;
}


```

## `ee24c30`

- instructions: 41
- calls: eee3000

```c

bool FUN_0ee24c30(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*param_1 == *param_2) {
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
      bVar2 = *(byte *)(param_2 + 1);
    }
    else {
      uVar5 = param_1[2];
      bVar2 = *(byte *)(param_2 + 1);
    }
    if ((bVar2 & 1) == 0) {
      uVar3 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar3 = param_2[2];
    }
    if (uVar5 == uVar3) {
      if ((bVar1 & 1) == 0) {
        lVar7 = (long)param_1 + 9;
      }
      else {
        lVar7 = param_1[3];
      }
      if ((bVar2 & 1) == 0) {
        lVar6 = (long)param_2 + 9;
      }
      else {
        lVar6 = param_2[3];
      }
      iVar4 = bcmp(lVar7,lVar6);
      return iVar4 != 0;
    }
  }
  return true;
}


```

## `ee24d30`

- instructions: 32
- calls: 4885070

```c

void FUN_0ee24d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  if (param_1 != param_2) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      param_1[3] = param_2[3];
      uVar1 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = uVar1;
    }
    else {
      FUN_04885070(param_1 + 1,param_2[3],param_2[2]);
    }
  }
  *param_1 = *param_2;
  return;
}


```

## `ee25150`

- instructions: 97
- calls: 412e5e0, eee2e90

```c

void FUN_0ee25150(ulong *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    param_1[3] = *(ulong *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    param_1[4] = 0;
    uVar4 = (ulong)(byte)param_1[1];
    if (((byte)param_1[1] & 1) == 0) goto LAB_0ee25186;
LAB_0ee251b1:
    uVar7 = param_1[2];
  }
  else {
    FUN_0412e5e0(param_1 + 1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    param_1[4] = 0;
    uVar4 = (ulong)(byte)param_1[1];
    if (((byte)param_1[1] & 1) != 0) goto LAB_0ee251b1;
LAB_0ee25186:
    uVar7 = uVar4 >> 1;
  }
  if (uVar7 != 0) {
    if ((uVar4 & 1) == 0) {
      pbVar6 = (byte *)((long)param_1 + 9);
    }
    else {
      pbVar6 = (byte *)param_1[3];
    }
    if ((pbVar6 != (byte *)0x0) && (*pbVar6 != 0)) {
      uVar7 = 0xcbf29ce484222325;
      uVar4 = strlen(pbVar6);
      if (uVar4 != 0) {
        uVar5 = (ulong)((uint)uVar4 & 7);
        if (7 < uVar4) {
          uVar4 = uVar4 & 0xfffffffffffffff8;
          do {
            uVar7 = (((((((uVar7 * 0x100000001b3 ^ (ulong)*pbVar6) * 0x100000001b3 ^
                         (ulong)pbVar6[1]) * 0x100000001b3 ^ (ulong)pbVar6[2]) * 0x100000001b3 ^
                       (ulong)pbVar6[3]) * 0x100000001b3 ^ (ulong)pbVar6[4]) * 0x100000001b3 ^
                     (ulong)pbVar6[5]) * 0x100000001b3 ^ (ulong)pbVar6[6]) * 0x100000001b3 ^
                    (ulong)pbVar6[7];
            pbVar6 = pbVar6 + 8;
            uVar4 = uVar4 - 8;
          } while (uVar4 != 0);
        }
        if (uVar5 != 0) {
          uVar4 = 0;
          do {
            uVar7 = uVar7 * 0x100000001b3 ^ (ulong)pbVar6[uVar4];
            uVar4 = uVar4 + 1;
          } while (uVar5 != uVar4);
        }
      }
      goto LAB_0ee252a9;
    }
  }
  uVar7 = 0;
LAB_0ee252a9:
  *param_1 = uVar7;
  return;
}


```

## `ee252c0`

- instructions: 127
- calls: 4882e30, eec74c0, eee2e90, eee2ee0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee252c0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  *param_1 = 0;
  if (0xfffffffffffffff7 < param_3) {
    FUN_04882e30();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < 0x17) {
    *(char *)(param_1 + 1) = (char)param_3 * '\x02';
    uVar6 = (long)param_1 + 9;
    if (param_3 != 0) goto LAB_0ee25347;
  }
  else {
    uVar3 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar3 = (param_3 | 7) + 1;
    }
    uVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar3);
    if (uVar6 == 0) {
      FUN_0eec74c0(uVar3,0);
    }
    param_1[3] = uVar6;
    param_1[1] = uVar3 | 1;
    param_1[2] = param_3;
LAB_0ee25347:
    ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(uVar6,param_2,param_3);
  }
  *(undefined1 *)(uVar6 + param_3) = 0;
  param_1[4] = 0;
  bVar1 = (byte)param_1[1];
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_0ee25382;
  }
  else if (param_1[2] != 0) {
LAB_0ee25382:
    if ((bVar1 & 1) == 0) {
      pbVar5 = (byte *)((long)param_1 + 9);
    }
    else {
      pbVar5 = (byte *)param_1[3];
    }
    if ((pbVar5 != (byte *)0x0) && (*pbVar5 != 0)) {
      uVar6 = 0xcbf29ce484222325;
      uVar3 = strlen(pbVar5);
      if (uVar3 != 0) {
        uVar4 = (ulong)((uint)uVar3 & 7);
        if (7 < uVar3) {
          uVar3 = uVar3 & 0xfffffffffffffff8;
          do {
            uVar6 = (((((((uVar6 * 0x100000001b3 ^ (ulong)*pbVar5) * 0x100000001b3 ^
                         (ulong)pbVar5[1]) * 0x100000001b3 ^ (ulong)pbVar5[2]) * 0x100000001b3 ^
                       (ulong)pbVar5[3]) * 0x100000001b3 ^ (ulong)pbVar5[4]) * 0x100000001b3 ^
                     (ulong)pbVar5[5]) * 0x100000001b3 ^ (ulong)pbVar5[6]) * 0x100000001b3 ^
                    (ulong)pbVar5[7];
            pbVar5 = pbVar5 + 8;
            uVar3 = uVar3 - 8;
          } while (uVar3 != 0);
        }
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            uVar6 = uVar6 * 0x100000001b3 ^ (ulong)pbVar5[uVar3];
            uVar3 = uVar3 + 1;
          } while (uVar4 != uVar3);
        }
      }
      goto LAB_0ee25469;
    }
  }
  uVar6 = 0;
LAB_0ee25469:
  *param_1 = uVar6;
  return;
}


```

## `ee32660`

- instructions: 21
- calls: eec74c0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ee32660(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_1);
  if (param_1 == 0 || lVar1 != 0) {
    return lVar1;
  }
  FUN_0eec74c0(param_1,0);
  return lVar1;
}


```

## `ee326a0`

- instructions: 9

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ee326a0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `ee32710`

- instructions: 9

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ee32710(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

## `ee34300`

- instructions: 292
- calls: 412e970, 470d9a0, eee2ee0

```c

ulong * FUN_0ee34300(ulong *param_1,ushort *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint auStack_68 [4];
  uint uStack_58;
  uint uStack_48;
  
  if (*(char *)((long)param_2 + 7) == '\x01') {
    *(undefined2 *)param_1 = 0x2a02;
    *(byte *)((long)param_1 + 2) = 0;
    return param_1;
  }
  uVar5 = *(ulong *)(param_2 + 4);
  if ((uVar5 >> 0x37 & 1) == 0) {
    if ((uVar5 & 0x7f000000000000) != 0) {
      uVar7 = (ulong)((ushort)(uVar5 >> 0x30) & 0x7f);
LAB_0ee3436c:
      if ((((uVar7 == 4) && (*(int *)(uVar5 & 0xff00ffffffffffff) == 0x61746562)) &&
          (*param_2 == 9999)) && ((param_2[1] == 9999 && (param_2[2] == 9999)))) {
        *(byte *)param_1 = 8;
        pbVar3 = (byte *)((long)param_1 + 1);
        pbVar3[0] = 0x62;
        pbVar3[1] = 0x65;
        pbVar3[2] = 0x74;
        pbVar3[3] = 0x61;
        *(byte *)((long)param_1 + 5) = 0;
        return param_1;
      }
    }
  }
  else {
    uVar7 = *(ulong *)((uVar5 & 0xff00ffffffffffff) - 8);
    if (uVar7 != 0) goto LAB_0ee3436c;
  }
  auStack_68[0] = (uint)*param_2;
  uStack_58 = (uint)param_2[1];
  uStack_48 = (uint)param_2[2];
  FUN_0470d9a0(param_1,&UNK_013be1b5,8,0x222,auStack_68);
  uVar5 = *(ulong *)(param_2 + 4);
  uVar7 = uVar5 & 0xff00ffffffffffff;
  if ((uVar5 & 0x80000000000000) == 0) {
    uVar5 = (ulong)((ushort)(uVar5 >> 0x30) & 0x7f);
    if (uVar5 == 0) goto LAB_0ee3451e;
LAB_0ee3441d:
    uVar1 = *param_1;
    uVar6 = 0x16;
    if ((*param_1 & 1) != 0) {
      uVar6 = (uVar1 & 0xfffffffffffffffe) - 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar2 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
      if (uVar6 != uVar2) goto LAB_0ee34444;
LAB_0ee3446b:
      func_0x0412e970(param_1,uVar6,1,uVar6,uVar6,0,1,&UNK_0140f690);
    }
    else {
      uVar2 = param_1[1];
      if (uVar6 == uVar2) goto LAB_0ee3446b;
LAB_0ee34444:
      if ((uVar1 & 1) == 0) {
        pbVar3 = (byte *)((long)param_1 + 1);
        pbVar3[uVar2] = 0x2d;
        if ((*param_1 & 1) != 0) goto LAB_0ee34459;
LAB_0ee344a1:
        *(char *)param_1 = ((char)uVar2 + '\x01') * '\x02';
      }
      else {
        pbVar3 = (byte *)param_1[2];
        pbVar3[uVar2] = 0x2d;
        if ((*param_1 & 1) == 0) goto LAB_0ee344a1;
LAB_0ee34459:
        param_1[1] = uVar2 + 1;
      }
      pbVar3[uVar2 + 1] = 0;
    }
    uVar1 = *param_1;
    lVar4 = 0x16;
    if ((*param_1 & 1) != 0) {
      lVar4 = (uVar1 & 0xfffffffffffffffe) - 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar6 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
    }
    else {
      uVar6 = param_1[1];
    }
    if (lVar4 - uVar6 < uVar5) {
      func_0x0412e970(param_1,lVar4,(uVar5 - lVar4) + uVar6,uVar6,uVar6,0,uVar5,uVar7);
      goto LAB_0ee3451e;
    }
    if ((uVar1 & 1) == 0) {
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar3 = (byte *)param_1[2];
    }
    ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(pbVar3 + uVar6,uVar7,uVar5);
    uVar6 = uVar6 + uVar5;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)uVar6 * '\x02';
    }
    else {
      param_1[1] = uVar6;
    }
    pbVar3[uVar6] = 0;
    uVar5 = *(ulong *)(param_2 + 8);
    uVar7 = uVar5 & 0xff00ffffffffffff;
    if ((uVar5 & 0x80000000000000) != 0) goto LAB_0ee3458b;
LAB_0ee3452a:
    uVar5 = (ulong)((ushort)(uVar5 >> 0x30) & 0x7f);
  }
  else {
    uVar5 = *(ulong *)(uVar7 - 8);
    if (uVar5 != 0) goto LAB_0ee3441d;
LAB_0ee3451e:
    uVar5 = *(ulong *)(param_2 + 8);
    uVar7 = uVar5 & 0xff00ffffffffffff;
    if ((uVar5 & 0x80000000000000) == 0) goto LAB_0ee3452a;
LAB_0ee3458b:
    uVar5 = *(ulong *)(uVar7 - 8);
  }
  if (uVar5 == 0) {
    return param_1;
  }
  uVar1 = *param_1;
  uVar6 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar6 = (uVar1 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
  }
  else {
    uVar2 = param_1[1];
  }
  if (uVar6 == uVar2) {
    func_0x0412e970(param_1,uVar6,1,uVar6,uVar6,0,1,&UNK_011e95f4);
    goto LAB_0ee34625;
  }
  if ((uVar1 & 1) == 0) {
    pbVar3 = (byte *)((long)param_1 + 1);
    pbVar3[uVar2] = 0x2b;
    if ((*param_1 & 1) != 0) goto LAB_0ee345d4;
LAB_0ee3461c:
    *(char *)param_1 = ((char)uVar2 + '\x01') * '\x02';
  }
  else {
    pbVar3 = (byte *)param_1[2];
    pbVar3[uVar2] = 0x2b;
    if ((*param_1 & 1) == 0) goto LAB_0ee3461c;
LAB_0ee345d4:
    param_1[1] = uVar2 + 1;
  }
  pbVar3[uVar2 + 1] = 0;
LAB_0ee34625:
  uVar1 = *param_1;
  lVar4 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar4 = (uVar1 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar1 & 1) == 0) {
    uVar6 = (ulong)((uint)(uVar1 >> 1) & 0x7f);
  }
  else {
    uVar6 = param_1[1];
  }
  if (lVar4 - uVar6 < uVar5) {
    func_0x0412e970(param_1,lVar4,(uVar5 - lVar4) + uVar6,uVar6,uVar6,0,uVar5,uVar7);
  }
  else {
    if ((uVar1 & 1) == 0) {
      pbVar3 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar3 = (byte *)param_1[2];
    }
    ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(pbVar3 + uVar6,uVar7,uVar5);
    uVar6 = uVar6 + uVar5;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)uVar6 * '\x02';
    }
    else {
      param_1[1] = uVar6;
    }
    pbVar3[uVar6] = 0;
  }
  return param_1;
}


```

## `ee386e0`

- instructions: 14

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee386e0(ulong *param_1)

{
  if ((*param_1 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(*param_1 & 0xff00ffffffffffff) - 8);
  }
  *param_1 = 0;
  return;
}


```

## `ee387f0`

- instructions: 65
- calls: eec74c0, eee2f00

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee387f0(ulong *param_1,ulong param_2,ulong param_3,int param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    uVar2 = (ulong)((uint)param_3 & 0x7f) << 0x30;
  }
  else if (param_3 < 0x80 && param_4 == 0) {
    uVar2 = param_3 << 0x30 | param_2 & 0xff00ffffffffffff;
  }
  else {
    lVar3 = param_3 + 9;
    puVar1 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar3,8);
    if (puVar1 == (ulong *)0x0 && lVar3 != 0) {
      FUN_0eec74c0(lVar3,8);
    }
    *puVar1 = param_3;
    memcpy(puVar1 + 1,param_2,param_3);
    *(undefined1 *)((long)puVar1 + param_3 + 8) = 0;
    uVar2 = (ulong)(puVar1 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  *param_1 = uVar2;
  return;
}


```

## `ee47730`

- instructions: 117
- calls: eee2f00

```c

void FUN_0ee47730(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    *plVar1 = *plVar1 + param_3;
    uVar2 = (ulong)*(uint *)(plVar1 + 9);
    if (param_3 + uVar2 < 0x20) {
      memcpy((long)plVar1 + uVar2 + 0x28,param_2,param_3);
      *(int *)(plVar1 + 9) = (int)plVar1[9] + (int)param_3;
    }
    else {
      plVar4 = (long *)(param_3 + (long)param_2);
      if (uVar2 != 0) {
        memcpy((long)plVar1 + uVar2 + 0x28,param_2,0x20 - *(uint *)(plVar1 + 9));
        uVar2 = plVar1[5] * -0x3d4d51c2d82b14b1 + plVar1[1];
        plVar1[1] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        uVar2 = plVar1[6] * -0x3d4d51c2d82b14b1 + plVar1[2];
        plVar1[2] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        uVar2 = plVar1[7] * -0x3d4d51c2d82b14b1 + plVar1[3];
        plVar1[3] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        uVar2 = plVar1[8] * -0x3d4d51c2d82b14b1 + plVar1[4];
        plVar1[4] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)plVar1[9]));
        *(undefined4 *)(plVar1 + 9) = 0;
      }
      if (param_2 + 4 <= plVar4) {
        lVar3 = plVar1[1];
        lVar6 = plVar1[2];
        lVar7 = plVar1[3];
        lVar5 = plVar1[4];
        do {
          uVar2 = *param_2 * -0x3d4d51c2d82b14b1 + lVar3;
          lVar3 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[1] = lVar3;
          uVar2 = param_2[1] * -0x3d4d51c2d82b14b1 + lVar6;
          lVar6 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[2] = lVar6;
          uVar2 = param_2[2] * -0x3d4d51c2d82b14b1 + lVar7;
          lVar7 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[3] = lVar7;
          uVar2 = param_2[3] * -0x3d4d51c2d82b14b1 + lVar5;
          lVar5 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[4] = lVar5;
          param_2 = param_2 + 4;
        } while (param_2 <= plVar4 + -4);
      }
      if (param_2 < plVar4) {
        memcpy(plVar1 + 5,param_2,(long)plVar4 - (long)param_2);
        *(int *)(plVar1 + 9) = (int)((long)plVar4 - (long)param_2);
      }
    }
  }
  return;
}


```

## `ee49c60`

- instructions: 49
- calls: eecd080, eed9bb0

```c

void FUN_0ee49c60(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_10;
  
  *param_1 = &UNK_0f5356d0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined2 *)((long)param_1 + 0x9e6) = 0;
  puStack_18 = &UNK_0f53bdc8;
  FUN_0eecd080();
  puStack_10 = &UNK_0f53c030;
  uStack_1c = 0;
  FUN_0eed9bb0(&puStack_18,4,&uStack_1c,0);
  *(uint *)(param_1 + 1) = uStack_1c;
  *(undefined2 *)((long)param_1 + 0x9e4) = 0;
  *(undefined4 *)((long)param_1 + 0x9d4) = 0;
  param_1[0x13b] = 0;
  *(uint *)((long)param_1 + 0xc) = uStack_1c;
  lVar1 = 5;
  while( true ) {
    uVar3 = ((ulong)((uStack_1c >> 0x1e ^ uStack_1c) * 0x6c078965) + lVar1) - 4;
    uVar2 = (uint)uVar3;
    *(uint *)((long)param_1 + lVar1 * 4 + -4) = uVar2;
    if (lVar1 == 0x191) break;
    uStack_1c = (((uint)(uVar3 >> 0x1e) & 3 ^ uVar2) * 0x6c078965 + (int)lVar1) - 3;
    *(uint *)((long)param_1 + lVar1 * 4) = uStack_1c;
    lVar1 = lVar1 + 2;
  }
  *(undefined8 *)((long)param_1 + 0x9cc) = 0x18e00000270;
  return;
}


```

## `ee4a030`

- instructions: 104

```c

uint FUN_0ee4a030(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x9cc);
  uVar4 = (ulong)uVar6;
  if ((int)uVar6 < 0x271) {
    if (uVar6 == 0x270) goto LAB_0ee4a0a7;
    if (0xe2 < (int)uVar6) {
      if (uVar6 < 0x26f) {
        uVar2 = *(uint *)(param_1 + 0x10 + uVar4 * 4);
        *(uint *)(param_1 + 0xc + uVar4 * 4) =
             *(uint *)(&UNK_014f0860 + (ulong)(uVar2 & 1) * 4) ^
             *(uint *)(param_1 + 0xc + (ulong)(uVar6 - 0xe3) * 4) ^
             (uVar2 & 0x7ffffffe | *(uint *)(param_1 + 0xc + uVar4 * 4) & 0x80000000) >> 1;
      }
      else {
        *(uint *)(param_1 + 0x9c8) =
             *(uint *)(&UNK_014f0860 + (ulong)(*(uint *)(param_1 + 0xc) & 1) * 4) ^
             *(uint *)(param_1 + 0x63c) ^
             (*(uint *)(param_1 + 0xc) & 0x7ffffffe | *(uint *)(param_1 + 0x9c8) & 0x80000000) >> 1;
      }
      goto LAB_0ee4a114;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x1571;
    *(undefined4 *)(param_1 + 0x9cc) = 1;
    iVar3 = 1;
    do {
      uVar6 = *(uint *)(param_1 + 8 + (long)iVar3 * 4);
      *(uint *)(param_1 + 0xc + (long)iVar3 * 4) = (uVar6 >> 0x1e ^ uVar6) * 0x6c078965 + iVar3;
      iVar1 = *(int *)(param_1 + 0x9cc);
      iVar3 = iVar1 + 1;
      *(int *)(param_1 + 0x9cc) = iVar3;
    } while (iVar1 < 0x26f);
    *(undefined4 *)(param_1 + 0x9d0) = 0x270;
LAB_0ee4a0a7:
    *(undefined4 *)(param_1 + 0x9cc) = 0;
    uVar6 = 0;
  }
  lVar5 = (long)(int)uVar6;
  uVar6 = *(uint *)(param_1 + 0x10 + lVar5 * 4);
  *(uint *)(param_1 + 0xc + lVar5 * 4) =
       *(uint *)(&UNK_014f0860 + (ulong)(uVar6 & 1) * 4) ^ *(uint *)(param_1 + 0x640 + lVar5 * 4) ^
       (uVar6 & 0x7ffffffe | *(uint *)(param_1 + 0xc + lVar5 * 4) & 0x80000000) >> 1;
  lVar5 = (long)*(int *)(param_1 + 0x9d0);
  if (lVar5 < 0x270) {
    uVar6 = *(uint *)(param_1 + 8 + lVar5 * 4);
    *(uint *)(param_1 + 0xc + lVar5 * 4) =
         (uVar6 >> 0x1e ^ uVar6) * 0x6c078965 + *(int *)(param_1 + 0x9d0);
    *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x9d0) + 1;
  }
LAB_0ee4a114:
  iVar3 = *(int *)(param_1 + 0x9cc);
  *(int *)(param_1 + 0x9cc) = iVar3 + 1;
  uVar6 = *(uint *)(param_1 + 0xc + (long)iVar3 * 4);
  uVar6 = uVar6 >> 0xb ^ uVar6;
  uVar6 = (uVar6 & 0x13a58ad) << 7 ^ uVar6;
  uVar6 = (uVar6 & 0x1df8c) << 0xf ^ uVar6;
  return uVar6 >> 0x12 ^ uVar6;
}


```

## `ee56810`

- instructions: 162
- calls: 412d770, 412d790, 48e6d60, ee37d00, ee4de30, ee50ca0, ee56c60, eedfd40

```c

undefined8 FUN_0ee56810(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [64];
  char cStack_78;
  undefined1 auStack_70 [64];
  char cStack_30;
  
  func_0x0ee37d00(auStack_70,1);
  func_0x0ee37d00(auStack_b8,1);
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[3];
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 8;
      func_0x0412d770(lVar3);
      func_0x0ee50ca0(&uStack_128,*(undefined8 *)plVar1[3]);
      if (cStack_e8 == '\0') {
        FUN_048e6d60(&uStack_128);
      }
    }
    (**(code **)(*plVar1 + 0x28))(&uStack_170,plVar1);
    if (lVar2 != 0) {
      func_0x0412d790(lVar3);
    }
    cStack_e8 = cStack_130;
    if (cStack_130 == '\0') {
      uStack_128 = uStack_170;
      uStack_120 = uStack_168;
      uStack_118 = uStack_160;
      uStack_110 = uStack_158;
      uStack_108 = uStack_150;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_100 = uStack_148;
      uStack_f8 = uStack_140;
      uStack_f0 = uStack_138;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
    }
    func_0x0eedfd40(&uStack_128,auStack_70);
    if (cStack_e8 == '\0') {
      FUN_048e6d60(&uStack_128);
      if (cStack_130 == '\0') goto LAB_0ee56ae6;
LAB_0ee5694b:
      plVar1 = (long *)*param_2;
      *param_2 = 0;
    }
    else {
      if (cStack_130 != '\0') goto LAB_0ee5694b;
LAB_0ee56ae6:
      FUN_048e6d60(&uStack_170);
      plVar1 = (long *)*param_2;
      *param_2 = 0;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (param_2[1] == 0) goto LAB_0ee56a26;
  func_0x0ee56c60(&uStack_170);
  cStack_e8 = cStack_130;
  if (cStack_130 == '\0') {
    uStack_128 = uStack_170;
    uStack_120 = uStack_168;
    uStack_118 = uStack_160;
    uStack_110 = uStack_158;
    uStack_108 = uStack_150;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_100 = uStack_148;
    uStack_f8 = uStack_140;
    uStack_f0 = uStack_138;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
  }
  func_0x0eedfd40(&uStack_128,auStack_b8);
  if (cStack_e8 == '\0') {
    FUN_048e6d60(&uStack_128);
    if (cStack_130 == '\0') goto LAB_0ee56b1d;
LAB_0ee56a0f:
    plVar1 = (long *)param_2[1];
    param_2[1] = 0;
  }
  else {
    if (cStack_130 != '\0') goto LAB_0ee56a0f;
LAB_0ee56b1d:
    FUN_048e6d60(&uStack_170);
    plVar1 = (long *)param_2[1];
    param_2[1] = 0;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
LAB_0ee56a26:
  uStack_d8 = 0xfc727ddc50055dc5;
  puStack_d0 = &UNK_0140f690;
  uStack_c8 = 1;
  uStack_c0 = 0x21;
  func_0x0ee4de30(param_1,auStack_70,auStack_b8);
  if (cStack_78 == '\0') {
    FUN_048e6d60(auStack_b8);
  }
  if (cStack_30 == '\0') {
    FUN_048e6d60(auStack_70);
  }
  return param_1;
}


```

## `ee5ea20`

- instructions: 88
- calls: eec74c0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee5ea20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &UNK_0f534768;
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UNK_0ef44a60;
  *(undefined1 *)(puVar1 + 3) = 1;
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  *param_1 = &UNK_0f536e58;
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x58,0);
  }
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[10] = 0;
  *puVar1 = &UNK_0f536db0;
  puVar1[1] = &UNK_0f534768;
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &UNK_0ef44a60;
  *(undefined1 *)(puVar2 + 3) = 1;
  puVar1[2] = puVar2 + 3;
  puVar1[3] = puVar2;
  *puVar1 = &UNK_0f536d18;
  puVar1[1] = &UNK_0f536d48;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = puVar1 + 9;
  puVar1[10] = puVar1 + 9;
  param_1[3] = puVar1;
  return;
}


```

## `ee76e70`

- instructions: 142
- string: `Operation Denied`
- string: `Storage Area Full - Write Operation Denied`
- string: `l - Write Operation Denied`
- calls: 412a280, 412d770, 412d790, 412dc70, 48e6d60, ee77140, eec74c0, eee17a0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0ee76e70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  char cStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(*(long *)(param_2[2] + 8) + 0x18a) & 1) == 0) &&
     ((*(byte *)(*(long *)(param_2[2] + 8) + 0x18b) & 1) == 0)) {
    lVar1 = param_2[3];
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar1 + 8;
      func_0x0412d770(lVar6);
    }
    (**(code **)(*param_2 + 0x60))(&uStack_108,param_2,param_3);
    func_0x0ee77140(param_1,param_2,&uStack_108,param_4);
    if (cStack_c8 == '\0') {
      FUN_048e6d60(&uStack_108);
    }
    if (lVar1 != 0) {
      func_0x0412d790(lVar6);
    }
  }
  else {
    uVar5 = FUN_0412dc70();
    puStack_d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_d8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    uVar2 = s_Operation_Denied_013dbf8b._8_8_;
    *(ulong *)((long)puStack_d8 + 0x1a) =
         CONCAT26(s_Operation_Denied_013dbf8b._6_2_,s_Operation_Denied_013dbf8b._0_6_);
    *(undefined8 *)((long)puStack_d8 + 0x22) = uVar2;
    uVar2 = CONCAT62(s_Operation_Denied_013dbf8b._0_6_,_UNK_013dbf89);
    puStack_d8[2] = _DAT_013dbf81;
    puStack_d8[3] = uVar2;
    uVar2 = _UNK_013dbf79;
    *puStack_d8 = _DAT_013dbf71;
    puStack_d8[1] = uVar2;
    *(undefined1 *)((long)puStack_d8 + 0x2a) = 0;
    uStack_f8 = _DAT_0f539060;
    uStack_f0 = _UNK_0f539068;
    uStack_108 = _DAT_0f539050;
    uStack_100 = _UNK_0f539058;
    uStack_e8 = 0x31;
    uStack_e0 = 0x2a;
    cStack_c8 = 0;
    uStack_d0 = uStack_d0 & 0xff000000;
    cStack_c0 = '\x01';
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_0eee17a0(&uStack_b8,&uStack_108,&uStack_b8,1);
    if ((cStack_c0 == '\x01') && ((uStack_e8 & 1) != 0)) {
      FUN_0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
    }
    uVar2 = uStack_a8;
    uStack_70 = 0x16;
    uVar3 = (undefined4)uStack_b8;
    uVar4 = uStack_b8._4_4_;
    uStack_b8 = CONCAT44(uStack_6c,0x16);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_108 = CONCAT44(uStack_6c,0x16);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *param_1 = 0x16;
    param_1[1] = uStack_6c;
    *(undefined8 *)(param_1 + 2) = uVar5;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = (undefined4)uStack_b0;
    param_1[7] = uStack_b0._4_4_;
    *(undefined8 *)(param_1 + 8) = uVar2;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    uStack_e0 = 0;
    puStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_100 = uVar5;
    uStack_b0 = uVar5;
    uStack_68 = uVar5;
    FUN_048e6d60(&uStack_108);
    FUN_048e6d60(&uStack_b8);
    FUN_048e6d60(&uStack_70);
  }
  return param_1;
}


```

## `eeb5fa0`

- instructions: 1

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
thunk_FUN_0eeb5980(byte *param_1,undefined *param_2,undefined4 param_3,undefined *param_4,
                  byte *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  byte bStack_4e8;
  undefined1 uStack_4e7;
  undefined2 uStack_4e6;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 uStack_4d8;
  byte *pbStack_4d0;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  byte abStack_440 [1024];
  byte *pbStack_40;
  byte *pbStack_38;
  
  pbStack_38 = (byte *)0x0;
  abStack_440[0] = 0;
  pbStack_40 = param_1;
  pbVar6 = pbStack_38;
  if (param_1 == (byte *)0x0) goto LAB_0eeb5bbe;
  pbVar6 = param_1;
  if (*param_1 != 0xb) goto LAB_0eeb5bbe;
  if (DAT_0f7b9a48 == '\0') goto LAB_0eeb5e79;
  do {
    pbVar6 = pbStack_40 + 1;
    if (DAT_0f7b9a40 == '\x01') {
      bVar10 = *pbVar6;
      pbVar9 = abStack_440;
      if (bVar10 != 0) {
        pbVar9 = abStack_440;
        uVar3 = 0;
        do {
          if (bVar10 == 0x25) {
            pbVar11 = pbVar6 + 1;
            bVar7 = pbVar6[1];
            if (((ulong)bVar7 < 0x31) && ((0x1280900000000U >> ((ulong)bVar7 & 0x3f) & 1) != 0)) {
              pbVar11 = pbVar6 + 2;
              bVar7 = pbVar6[2];
            }
            if (bVar7 == 0x2a) {
              bVar7 = pbVar11[1];
              pbVar11 = pbVar11 + 1;
            }
            else {
              pbVar11 = pbVar11 + -1;
              do {
                bVar7 = pbVar11[1];
                pbVar11 = pbVar11 + 1;
              } while ((byte)(bVar7 - 0x30) < 10);
            }
            if (bVar7 == 0x2e) {
              if (pbVar11[1] == 0x2a) {
                bVar7 = pbVar11[2];
                pbVar11 = pbVar11 + 2;
              }
              else {
                do {
                  bVar7 = pbVar11[1];
                  pbVar11 = pbVar11 + 1;
                } while ((byte)(bVar7 - 0x30) < 10);
              }
            }
            uVar8 = (ulong)(bVar7 - 0x4c);
            pbVar12 = pbVar11;
            if (bVar7 - 0x4c < 0x2f) {
              if ((0x410040000001U >> (uVar8 & 0x3f) & 1) == 0) {
                if (uVar8 == 0x1c) {
                  bVar13 = pbVar11[1] == 0x68;
                }
                else {
                  if (uVar8 != 0x20) goto LAB_0eeb5b1d;
                  bVar13 = pbVar11[1] == 0x6c;
                }
                pbVar12 = pbVar11 + 1;
                if (bVar13) {
                  pbVar12 = pbVar11 + 2;
                }
              }
              else {
                pbVar12 = pbVar11 + 1;
              }
            }
LAB_0eeb5b1d:
            switch(*pbVar12) {
            case 0x25:
            case 0x41:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x58:
            case 0x61:
            case 99:
            case 100:
            case 0x65:
            case 0x66:
            case 0x67:
            case 0x69:
            case 0x6e:
            case 0x6f:
            case 0x70:
            case 0x73:
            case 0x75:
            case 0x78:
              pbVar11 = pbVar12 + 1;
              if (pbVar11 == pbVar6) goto LAB_0eeb5b60;
              if (*pbVar12 == 0x25) {
                if (uVar3 < 0x3fe) {
                  pbVar9[0] = 0x25;
                  pbVar9[1] = 0x25;
                  uVar3 = uVar3 + 2;
                }
              }
              else {
                uVar3 = uVar3 + 1;
                *pbVar9 = 0x2a;
              }
              pbVar9 = abStack_440 + uVar3;
              bVar10 = *pbVar11;
              pbVar6 = pbVar11;
              break;
            default:
              goto LAB_0eeb5b60;
            }
          }
          else {
LAB_0eeb5b60:
            pbVar6 = pbVar6 + 1;
            *pbVar9 = bVar10;
            pbVar9 = abStack_440 + uVar3 + 1;
            bVar10 = *pbVar6;
            uVar3 = uVar3 + 1;
          }
        } while ((bVar10 != 0) && ((long)uVar3 < 0x3ff));
      }
      *pbVar9 = 0;
      pbVar6 = abStack_440;
    }
LAB_0eeb5bbe:
    pbStack_38 = pbVar6;
    func_0x0edfc080(&bStack_4e8,pbStack_38,param_6);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_468 = 0;
    uStack_460 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_4b8 = uStack_4d8;
    uStack_4c8 = CONCAT22(uStack_4e6,CONCAT11(uStack_4e7,bStack_4e8));
    uStack_4c4 = uStack_4e4;
    uStack_4c0 = uStack_4e0;
    uStack_4bc = uStack_4dc;
    bStack_4e8 = 0;
    uStack_4e7 = 0;
    if (param_1 == (byte *)0x0) {
      pbVar6 = &UNK_01254d89;
    }
    else {
      pbVar6 = pbStack_40 + (*pbStack_40 == 0xb);
    }
    FUN_04130630(&uStack_4b0,pbVar6);
    if (param_2 == (undefined *)0x0) {
      param_2 = &UNK_01254d89;
    }
    FUN_04130630(&uStack_498,param_2);
    if (param_4 == (undefined *)0x0) {
      param_4 = &UNK_01254d89;
    }
    uStack_480 = param_3;
    FUN_04130630(&uStack_478,param_4);
    param_1 = &UNK_01254d89;
    if (param_5 != (byte *)0x0) {
      param_1 = param_5;
    }
    FUN_04130630(&uStack_460,param_1);
    func_0x0eeb57d0();
    lVar4 = FUN_0eee1380(0xf7b9ab8);
    if (lVar4 != 0) {
      puVar5 = *(undefined8 **)(lVar4 + 0x10);
      goto joined_r0x0eeb5cab;
    }
    param_5 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (param_5 == (byte *)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    *(byte **)param_5 = param_5;
    *(byte **)(param_5 + 8) = param_5;
    pbVar6 = param_5 + 0x10;
    param_5[0x10] = 0;
    param_5[0x11] = 0;
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    param_5[0x16] = 0;
    param_5[0x17] = 0;
    pbStack_4d0 = pbVar6;
    if (_DAT_0f7b9a70 != (long *)0x0) {
      (**(code **)(*_DAT_0f7b9a70 + 0x30))(_DAT_0f7b9a70,&pbStack_4d0);
      FUN_0eee1580(0xf7b9ab8,param_5);
      FUN_0412d680(&DAT_0f7b9a90);
      *(byte **)(param_5 + 8) = _DAT_0f7b9a88;
      *(undefined **)param_5 = &DAT_0f7b9a80;
      *(byte **)_DAT_0f7b9a88 = param_5;
      _DAT_0f7b9a88 = param_5;
      FUN_0412d6b0(&DAT_0f7b9a90);
      puVar5 = *(undefined8 **)pbVar6;
joined_r0x0eeb5cab:
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = _DAT_0f7b9ac0;
      }
      uVar1 = (*(code *)*puVar5)(&uStack_4c8);
      if ((uStack_460 & 1) != 0) {
        FUN_0412a280(uStack_450,uStack_460 & 0xfffffffffffffffe);
      }
      if ((uStack_478 & 1) != 0) {
        FUN_0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
      }
      if ((uStack_498 & 1) != 0) {
        FUN_0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
      }
      if ((uStack_4b0 & 1) != 0) {
        FUN_0412a280(uStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
      }
      if ((uStack_4c8 & 1) != 0) {
        FUN_0412a280(uStack_4b8,CONCAT44(uStack_4c4,uStack_4c8) & 0xfffffffffffffffe);
      }
      if ((bStack_4e8 & 1) != 0) {
        FUN_0412a280(uStack_4d8,
                     CONCAT44(uStack_4e4,CONCAT22(uStack_4e6,CONCAT11(uStack_4e7,bStack_4e8))) &
                     0xfffffffffffffffe);
      }
      return uVar1;
    }
    FUN_04891200();
LAB_0eeb5e79:
    iVar2 = FUN_04108328(&DAT_0f7b9a48);
    if (iVar2 != 0) {
      DAT_0f7b9a40 = '\x01';
      FUN_0410844d(&DAT_0f7b9a48);
    }
  } while( true );
}


```

## `eeb61d0`

- instructions: 34
- calls: eeb6280

```c

void FUN_0eeb61d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char cVar1;
  char in_AL;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  if (in_AL == '\0') {
    cVar1 = *(char *)(param_9 + 0x18);
  }
  else {
    cVar1 = *(char *)(param_9 + 0x18);
    uStack_88 = param_1;
    uStack_78 = param_2;
    uStack_68 = param_3;
    uStack_58 = param_4;
    uStack_48 = param_5;
    uStack_38 = param_6;
    uStack_28 = param_7;
    uStack_18 = param_8;
  }
  if (cVar1 != '\x01') {
    return;
  }
  puStack_c8 = auStack_b8;
  puStack_d0 = &stack0x00000008;
  uStack_d8 = 0x3000000020;
  uStack_98 = param_13;
  uStack_90 = param_14;
  FUN_0eeb6280(param_9,param_10,param_12,param_11,&uStack_d8);
  return;
}


```

## `eeb6280`

- instructions: 810
- calls: 412a280, 412d680, 412d6b0, 412f8c0, 4882eb0, 4aaf760, 6079df0, eebe930, eebeae0, eebfae0, eec01e0, eec08c0, eec09c0, eec74c0, eeddcf0, eee2d70, eee2dd0, eee2e90, eee2f10, eee3540

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eeb6280(long param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined5 *puVar22;
  ulong uVar23;
  undefined1 extraout_DL;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  bool bVar32;
  uint uStack_fc;
  byte *pbStack_f8;
  uint uStack_ec;
  ulong uStack_e8;
  long lStack_e0;
  byte bStack_d8;
  undefined5 uStack_d7;
  undefined2 uStack_d2;
  undefined1 uStack_d0;
  undefined5 uStack_cf;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined5 *puStack_c8;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined4 uStack_88;
  uint uStack_84;
  long lStack_80;
  ulong uStack_78;
  uint *puStack_70;
  ulong uStack_68;
  long *plStack_60;
  long lStack_58;
  ulong uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  lVar16 = param_1 + 0x38;
  uStack_fc = param_3;
  uStack_88 = param_2;
  uStack_84 = param_4;
  lStack_80 = param_1;
  FUN_0412d680(lVar16);
  uVar12 = *param_5;
  if ((ulong)uVar12 < 0x29) {
    *param_5 = uVar12 + 8;
    pbVar31 = *(byte **)((ulong)uVar12 + *(long *)(param_5 + 4));
  }
  else {
    puVar30 = *(undefined8 **)(param_5 + 2);
    *(undefined8 **)(param_5 + 2) = puVar30 + 1;
    pbVar31 = (byte *)*puVar30;
  }
  if (pbVar31 == (byte *)0x0) goto LAB_0eeb6d2e;
  uStack_38 = *(undefined8 *)(param_5 + 4);
  uStack_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  uVar12 = vsnprintf(0,0,pbVar31,param_5);
  if ((int)uVar12 < 1) goto LAB_0eeb6d2e;
  uVar24 = (ulong)uVar12;
  if (*(long *)(lStack_80 + 0x60) == 0) {
    bStack_d8 = 0x1a;
    uStack_d7 = 0x6f6e6b6e55;
    uStack_d2 = 0x6e77;
    uStack_d0 = 0x5f;
    uStack_cf = 0x65706f6353;
    uStack_ca = 0;
    uVar25 = 0x1a;
LAB_0eeb64b6:
    uVar24 = uVar24 + (uVar25 >> 1) + 3;
    if (uVar24 != 0) goto LAB_0eeb6432;
LAB_0eeb64ca:
    pbVar15 = (byte *)0x0;
    uVar24 = 0;
    lVar28 = -1;
  }
  else {
    pbStack_f8 = pbVar31;
    plVar14 = (long *)FUN_0eec09c0(*(long *)(lStack_80 + 0x60) + 0x10);
    bStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d2 = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    puStack_c8 = (undefined5 *)0x0;
    puVar30 = (undefined8 *)*plVar14;
    puVar4 = (undefined8 *)plVar14[1];
    if (puVar30 == puVar4) {
      uVar25 = 0;
      pbVar31 = pbStack_f8;
      goto LAB_0eeb64b6;
    }
    uStack_ec = uVar12;
    lStack_e0 = lVar16;
    do {
      if (*(char *)(puVar30 + 2) == '\x01') {
        FUN_0412f8c0(&bStack_d8,*puVar30,puVar30[1]);
        FUN_0412f8c0(&bStack_d8,&UNK_013c1f10,3);
      }
      else {
        uVar24 = puVar30[3] & 0xff00ffffffffffff;
        if (uVar24 != 0) {
          uVar21 = strlen(uVar24);
          FUN_0412f8c0(&bStack_d8,uVar24,uVar21);
          FUN_0412f8c0(&bStack_d8,&UNK_013c1f10,3);
        }
      }
      puVar30 = puVar30 + 5;
    } while (puVar30 != puVar4);
    uVar25 = (ulong)bStack_d8;
    uVar24 = (ulong)uStack_ec;
    lVar16 = lStack_e0;
    pbVar31 = pbStack_f8;
    if ((bStack_d8 & 1) == 0) goto LAB_0eeb64b6;
    uVar24 = uVar24 + CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,uStack_d0))) + 3;
    if (uVar24 == 0) goto LAB_0eeb64ca;
LAB_0eeb6432:
    if ((long)uVar24 < 0) {
LAB_0eeb6f16:
      uVar21 = FUN_04aaf760();
      if (pbStack_f8 != (byte *)0x0) goto LAB_0eeb6fc8;
      while ((bStack_d8 & 1) == 0) {
        FUN_0412d6b0(lStack_e0);
        _Unwind_Resume(uVar21);
LAB_0eeb6fc8:
        FUN_0412a280(pbStack_f8,uStack_68);
      }
      FUN_0412a280(puStack_c8,CONCAT26(uStack_d2,CONCAT51(uStack_d7,bStack_d8)) & 0xfffffffffffffffe
                  );
      FUN_0412d6b0(lStack_e0);
      _Unwind_Resume(uVar21);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
    if (pbVar15 == (byte *)0x0) {
      FUN_0eec74c0(uVar24,0);
    }
    memset(pbVar15,0,uVar24);
    lVar28 = uVar24 - 1;
  }
  puVar22 = puStack_c8;
  if ((uVar25 & 1) == 0) {
    puVar22 = &uStack_d7;
  }
  iVar13 = snprintf(pbVar15,lVar28,&UNK_012ee1a2,puVar22);
  uVar25 = (ulong)iVar13;
  iVar13 = vsnprintf(pbVar15 + uVar25,~uVar25 + uVar24,pbVar31,&uStack_48);
  lVar28 = (long)iVar13 + uVar25;
  (pbVar15 + lVar28)[0] = 10;
  (pbVar15 + lVar28)[1] = 0xd;
  pbVar15[lVar28 + 2] = 0;
  if ((long)iVar13 + uVar25 + 2 < uVar24) {
    uStack_ec = CONCAT31(uStack_ec._1_3_,1);
    uStack_e8 = (ulong)param_4;
    pbStack_f8 = pbVar15;
    lStack_e0 = lVar16;
    uStack_68 = uVar24;
    if ((byte)uStack_88 != '\0') {
      if (*pbVar15 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0xcbf29ce484222325;
        uVar25 = strlen(pbVar15);
        if (uVar25 != 0) {
          uVar23 = (ulong)((uint)uVar25 & 7);
          if (7 < uVar25) {
            uVar25 = uVar25 & 0xfffffffffffffff8;
            do {
              uVar24 = (((((((uVar24 * 0x100000001b3 ^ (ulong)*pbVar15) * 0x100000001b3 ^
                            (ulong)pbVar15[1]) * 0x100000001b3 ^ (ulong)pbVar15[2]) * 0x100000001b3
                          ^ (ulong)pbVar15[3]) * 0x100000001b3 ^ (ulong)pbVar15[4]) * 0x100000001b3
                        ^ (ulong)pbVar15[5]) * 0x100000001b3 ^ (ulong)pbVar15[6]) * 0x100000001b3 ^
                       (ulong)pbVar15[7];
              pbVar15 = pbVar15 + 8;
              uVar25 = uVar25 - 8;
            } while (uVar25 != 0);
          }
          if (uVar23 != 0) {
            uVar25 = 0;
            do {
              uVar24 = uVar24 * 0x100000001b3 ^ (ulong)pbVar15[uVar25];
              uVar25 = uVar25 + 1;
            } while (uVar23 != uVar25);
          }
        }
      }
      plVar14 = (long *)(lStack_80 + 0x70);
      uVar25 = *(ulong *)(lStack_80 + 0x78);
      uStack_50 = uVar24;
      if (uVar25 != 0) {
        uVar23 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
        uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar23 >> 0x38 < 2) {
          uVar17 = (ulong)((uint)uStack_e8 & (int)uVar25 - 1U);
        }
        else {
          uVar17 = uStack_e8;
          if (uVar25 <= uStack_e8) {
            uVar17 = (ulong)param_4 % (uVar25 & 0xffffffff);
          }
        }
        plVar20 = *(long **)(*plVar14 + uVar17 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if ((byte)(uVar23 >> 0x38) < 2) {
            do {
              if (plVar20[1] == uStack_e8) {
                if (*(uint *)(plVar20 + 2) == param_4) goto LAB_0eeb6d48;
              }
              else if ((plVar20[1] & uVar25 - 1) != uVar17) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              uVar23 = plVar20[1];
              if (uVar23 == uStack_e8) {
                if (*(uint *)(plVar20 + 2) == param_4) goto LAB_0eeb6d48;
              }
              else {
                if (uVar25 <= uVar23) {
                  if ((uVar23 | uVar25) >> 0x20 == 0) {
                    if ((uVar23 & 0xffffffff) % (uVar25 & 0xffffffff) == uVar17) goto LAB_0eeb6735;
                    break;
                  }
                  uVar23 = uVar23 % uVar25;
                }
                if (uVar23 != uVar17) break;
              }
LAB_0eeb6735:
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      lStack_b8 = 0;
      puStack_b0 = (undefined8 *)0x0;
      puStack_a8 = (undefined8 *)0x0;
      lStack_a0 = 0;
      plStack_98 = (long *)CONCAT44(plStack_98._4_4_,0x3f800000);
      uStack_78 = uVar24;
      FUN_06079df0(&lStack_b8,&uStack_78);
      lVar16 = FUN_0eebfae0(plVar14,param_4,&uStack_84);
      puStack_70 = &uStack_fc;
      lVar16 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                         (lVar16 + 0x18,uStack_fc,&puStack_70);
      FUN_0eec08c0(lVar16 + 0x18,&lStack_b8);
      puVar30 = puStack_a8;
      while (puVar30 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar30;
        FUN_0412a280(puVar30,0x18);
        puVar30 = puVar4;
      }
      goto LAB_0eeb6845;
    }
    goto LAB_0eeb686b;
  }
  goto LAB_0eeb6d09;
LAB_0eeb6edb:
  FUN_06079df0(plVar20 + 3,&uStack_50);
  uStack_ec = CONCAT31(uStack_ec._1_3_,extraout_DL);
  goto LAB_0eeb686b;
LAB_0eeb6d48:
  uVar25 = plVar20[4];
  if (uVar25 != 0) {
    uVar23 = (ulong)uStack_fc;
    uVar17 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
    uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar17 >> 0x38 < 2) {
      uVar27 = (ulong)(uStack_fc & (int)uVar25 - 1U);
    }
    else {
      uVar27 = uVar23;
      if (uVar25 <= uVar23) {
        uVar27 = uVar23 % (uVar25 & 0xffffffff);
      }
    }
    plVar20 = *(long **)(plVar20[3] + uVar27 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if ((byte)(uVar17 >> 0x38) < 2) {
        do {
          if (plVar20[1] == uVar23) {
            if (*(uint *)(plVar20 + 2) == uStack_fc) goto LAB_0eeb6edb;
          }
          else if ((plVar20[1] & uVar25 - 1) != uVar27) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == uVar23) {
            if (*(uint *)(plVar20 + 2) == uStack_fc) goto LAB_0eeb6edb;
          }
          else {
            if (uVar25 <= uVar17) {
              if ((uVar17 | uVar25) >> 0x20 == 0) {
                uVar17 = (uVar17 & 0xffffffff) % (uVar25 & 0xffffffff);
              }
              else {
                uVar17 = uVar17 % uVar25;
              }
            }
            if (uVar17 != uVar27) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  lStack_b8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  lStack_a0 = 0;
  plStack_98 = (long *)CONCAT44(plStack_98._4_4_,0x3f800000);
  uStack_78 = uVar24;
  FUN_06079df0(&lStack_b8,&uStack_78);
  lVar16 = FUN_0eebfae0(plVar14,param_4,&uStack_84);
  puStack_70 = &uStack_fc;
  lVar16 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                     (lVar16 + 0x18,uStack_fc,&puStack_70);
  FUN_0eec08c0(lVar16 + 0x18,&lStack_b8);
  puVar30 = puStack_a8;
  while (puVar30 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar30;
    FUN_0412a280(puVar30,0x18);
    puVar30 = puVar4;
  }
LAB_0eeb6845:
  lVar16 = lStack_b8;
  lStack_b8 = 0;
  if (lVar16 != 0) {
    FUN_0412a280(lVar16,(long)puStack_b0 << 3);
  }
LAB_0eeb686b:
  uVar24 = uStack_e8;
  if (*(long *)(lStack_80 + 0x60) == 0) {
LAB_0eeb6acd:
    plVar14 = *(long **)(lStack_80 + 0x20);
    plVar20 = (long *)(lStack_80 + 0x28);
    while (plVar14 != plVar20) {
      if ((plVar14[5] == 0) &&
         (cVar10 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                             (&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014aad1f),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(char *)plVar14[5] == '\0') &&
         (cVar10 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                             (&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014aad1f),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar10 = (**(code **)(*(long *)(plVar14[7] + 0x18) + 0x28))(plVar14[7] + 0x18);
      if (cVar10 != '\0') {
        if ((plVar14[5] == 0) &&
           (cVar10 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                               (&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014aad1f),
           cVar10 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)plVar14[5] == '\0') &&
           (cVar10 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                               (&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014aad1f),
           cVar10 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        bVar11 = (**(code **)(*(long *)plVar14[7] + 0x20))();
        if (((~(bVar11 & (byte)uStack_88) | (byte)uStack_ec) & 1) != 0) {
          if ((plVar14[5] == 0) &&
             (cVar10 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                                 (&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014aad1f),
             cVar10 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)plVar14[5] == '\0') &&
             (cVar10 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                                 (&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014aad1f),
             cVar10 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(*(long *)plVar14[7] + 0x10))((long *)plVar14[7],uStack_fc,param_4,pbStack_f8)
          ;
        }
      }
      plVar9 = (long *)plVar14[1];
      plVar29 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar29[2];
          bVar32 = plVar29 != (long *)*plVar14;
          plVar29 = plVar14;
        } while (bVar32);
      }
      else {
        do {
          plVar14 = plVar9;
          plVar9 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    }
  }
  else {
    lStack_58 = FUN_0eec09c0(*(long *)(lStack_80 + 0x60) + 0x10);
    lVar16 = *(long *)(lStack_58 + 0x18);
    uVar25 = (ulong)(*(long *)(lStack_58 + 0x20) - lVar16) >> 3 & 0xffffffff;
    do {
      uVar12 = uStack_fc;
      if ((int)uVar25 < 1) goto LAB_0eeb6acd;
      uVar25 = uVar25 - 1;
      lVar28 = *(long *)(lVar16 + uVar25 * 8);
      *(undefined1 *)(lVar28 + 0x20 + uVar24) = 1;
      if (*(char *)(lVar28 + 0x25 + uVar24) == '\x01') {
        uVar23 = *(ulong *)(lVar28 + 0x10);
        if (uVar23 < *(ulong *)(lVar28 + 0x18)) {
          ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v8
                    (uVar23,uStack_fc,param_4,pbStack_f8);
          puVar30 = (undefined8 *)(uVar23 + 0x20);
          *(undefined8 **)(lVar28 + 0x10) = puVar30;
        }
        else {
          lVar16 = uVar23 - *(long *)(lVar28 + 8);
          uVar24 = (lVar16 >> 5) + 1;
          if (0x7ffffffffffffff < uVar24) {
            FUN_0eebeae0();
LAB_0eeb6f11:
            FUN_04882eb0();
            goto LAB_0eeb6f16;
          }
          plStack_98 = (long *)(lVar28 + 8);
          uVar17 = *(ulong *)(lVar28 + 0x18) - *(long *)(lVar28 + 8);
          uVar23 = (long)uVar17 >> 4;
          if (uVar23 <= uVar24) {
            uVar23 = uVar24;
          }
          if (0x7fffffffffffffdf < uVar17) {
            uVar23 = 0x7ffffffffffffff;
          }
          plStack_60 = plStack_98;
          if (uVar23 == 0) {
            lVar18 = 0;
          }
          else {
            if (0x7ffffffffffffff < uVar23) goto LAB_0eeb6f11;
            lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 << 5);
            if (lVar18 == 0) {
              FUN_0eec74c0(uVar23 << 5,0);
              lVar18 = 0;
            }
          }
          puStack_b0 = (undefined8 *)(lVar16 + lVar18);
          lStack_a0 = uVar23 * 0x20 + lVar18;
          lStack_b8 = lVar18;
          puStack_a8 = puStack_b0;
          ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v8
                    (puStack_b0,uVar12,param_4,pbStack_f8);
          puVar30 = puStack_a8;
          lVar16 = *(long *)(lVar28 + 8);
          lVar18 = *(long *)(lVar28 + 0x10);
          lVar26 = (lVar16 - lVar18) + (long)puStack_b0;
          if (lVar16 != lVar18) {
            lVar19 = 0;
            do {
              *(undefined8 *)(lVar26 + lVar19) = *(undefined8 *)(lVar16 + lVar19);
              puVar2 = (undefined4 *)(lVar16 + 8 + lVar19);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined4 *)(lVar26 + 8 + lVar19);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              *(undefined8 *)(lVar26 + 0x18 + lVar19) = *(undefined8 *)(lVar16 + 0x18 + lVar19);
              puVar4 = (undefined8 *)(lVar16 + 8 + lVar19);
              *puVar4 = 0;
              puVar4[1] = 0;
              *(undefined8 *)(lVar16 + 0x18 + lVar19) = 0;
              lVar1 = lVar19 + lVar16;
              lVar19 = lVar19 + 0x20;
            } while (lVar1 + 0x20 != lVar18);
            do {
              if ((*(byte *)(lVar16 + 8) & 1) != 0) {
                FUN_0412a280(*(undefined8 *)(lVar16 + 0x18),
                             *(ulong *)(lVar16 + 8) & 0xfffffffffffffffe);
              }
              lVar16 = lVar16 + 0x20;
            } while (lVar16 != lVar18);
            lVar16 = *plStack_60;
          }
          puVar30 = puVar30 + 4;
          *(long *)(lVar28 + 8) = lVar26;
          *(undefined8 **)(lVar28 + 0x10) = puVar30;
          lVar18 = *(long *)(lVar28 + 0x18);
          *(long *)(lVar28 + 0x18) = lStack_a0;
          uVar24 = uStack_e8;
          if (lVar16 != 0) {
            FUN_0412a280(lVar16,lVar18 - lVar16);
            uVar24 = uStack_e8;
          }
        }
        *(undefined8 **)(lVar28 + 0x10) = puVar30;
        lVar16 = *(long *)(lStack_58 + 0x18);
        lVar28 = *(long *)(lVar16 + uVar25 * 8);
      }
    } while (*(char *)(lVar28 + 0x31) != '\0');
  }
  lVar16 = lStack_e0;
  uVar24 = uStack_68;
  pbVar15 = pbStack_f8;
  if (pbStack_f8 != (byte *)0x0) {
LAB_0eeb6d09:
    FUN_0412a280(pbVar15,uVar24);
  }
  if ((bStack_d8 & 1) != 0) {
    FUN_0412a280(puStack_c8,CONCAT26(uStack_d2,CONCAT51(uStack_d7,bStack_d8)) & 0xfffffffffffffffe);
  }
LAB_0eeb6d2e:
  FUN_0412d6b0(lVar16);
  return;
}


```

## `eebe930` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot8

- instructions: 88
- calls: 412a280, 412e5e0, 4882e30, eec74c0, eee2d70, eee2e90, eee2ee0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v8
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uVar2 = strlen(param_4);
  if (0xfffffffffffffff7 < uVar2) {
    uVar4 = FUN_04882e30();
    FUN_0412a280(param_2,uStack_50 & 0xfffffffffffffffe);
    _Unwind_Resume(uVar4);
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  if (uVar2 < 0x17) {
    uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar2 * '\x02');
    lVar3 = (long)&uStack_50 + 1;
    if (uVar2 == 0) goto LAB_0eebe9d9;
  }
  else {
    uVar6 = 0x1a;
    if ((uVar2 | 7) != 0x17) {
      uVar6 = (uVar2 | 7) + 1;
    }
    uStack_34 = param_3;
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar3 == 0) {
      FUN_0eec74c0(uVar6,0);
    }
    uStack_50 = uVar6 | 1;
    param_3 = uStack_34;
    uStack_48 = uVar2;
    lStack_40 = lVar3;
  }
  ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(lVar3,param_4,uVar2);
LAB_0eebe9d9:
  *(undefined1 *)(lVar3 + uVar2) = 0;
  lVar3 = lStack_40;
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((uStack_50 & 1) == 0) {
    *(long *)(param_1 + 6) = lStack_40;
    *(ulong *)(param_1 + 2) = uStack_50;
    *(ulong *)(param_1 + 4) = uStack_48;
  }
  else {
    FUN_0412e5e0(param_1 + 2,lStack_40,uStack_48);
    FUN_0412a280(lVar3,uStack_50 & 0xfffffffffffffffe);
  }
  return param_1;
}


```

## `eebeae0`

- instructions: 4
- calls: 4882e40

```c

void FUN_0eebeae0(void)

{
  code *pcVar1;
  
  FUN_04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `eebfae0`

- instructions: 446
- calls: 412a280, 412c3f0, 4882eb0, eec0120, eec74c0, eee2d70, eee2dd0, eee3ab0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0eebfae0(long *param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_R12;
  bool bVar14;
  float fVar15;
  float fVar16;
  
  uVar9 = (ulong)param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      unaff_R12 = (ulong)(param_2 & (int)uVar10 - 1U);
    }
    else {
      unaff_R12 = uVar9;
      if (uVar10 <= uVar9) {
        unaff_R12 = (ulong)param_2 % (uVar10 & 0xffffffff);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_R12 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((byte)(uVar4 >> 0x38) < 2) {
        do {
          if (plVar5[1] == uVar9) {
            if (*(uint *)(plVar5 + 2) == param_2) {
              return plVar5;
            }
          }
          else if ((plVar5[1] & uVar10 - 1) != unaff_R12) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar5[1];
          if (uVar4 == uVar9) {
            if (*(uint *)(plVar5 + 2) == param_2) {
              return plVar5;
            }
          }
          else {
            if (uVar10 <= uVar4) {
              if ((uVar4 | uVar10) >> 0x20 == 0) {
                if ((uVar4 & 0xffffffff) % (uVar10 & 0xffffffff) == unaff_R12) goto LAB_0eebfc3a;
                break;
              }
              uVar4 = uVar4 % uVar10;
            }
            if (uVar4 != unaff_R12) break;
          }
LAB_0eebfc3a:
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  *plVar5 = 0;
  plVar5[1] = uVar9;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 7) = 0x3f800000;
  if ((long)uVar10 < 0) {
    fVar16 = (float)uVar10;
    fVar15 = *(float *)(param_1 + 4);
    if (uVar10 != 0) goto LAB_0eebfcc7;
LAB_0eebfcd8:
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 * 2;
    fVar15 = (float)ceilf((float)(param_1[3] + 1) / fVar15);
    uVar12 = (long)(fVar15 - _DAT_01198778) & (long)fVar15 >> 0x3f | (long)fVar15;
    if (uVar12 < uVar4) {
      uVar12 = uVar4;
    }
    uVar4 = 2;
    if ((uVar12 == 1) || (uVar4 = uVar12, (uVar12 & uVar12 - 1) == 0)) {
      bVar14 = uVar4 < uVar10;
      if (uVar4 <= uVar10) goto LAB_0eebfe50;
LAB_0eebfd54:
      if (uVar4 >> 0x3d != 0) {
        uVar8 = FUN_04882eb0();
        func_0x0eec0120(1,plVar5);
        _Unwind_Resume(uVar8);
        pcVar3 = (code *)swi(3);
        plVar5 = (long *)(*pcVar3)();
        return plVar5;
      }
      lVar1 = uVar4 * 8;
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
      if (lVar6 == 0) {
        FUN_0eec74c0(lVar1,0);
      }
      lVar2 = *param_1;
      *param_1 = lVar6;
      if (lVar2 != 0) {
        FUN_0412a280(lVar2,param_1[1] << 3);
        lVar6 = *param_1;
      }
      param_1[1] = uVar4;
      memset(lVar6,0,lVar1);
      plVar11 = (long *)param_1[2];
      if (plVar11 != (long *)0x0) {
        uVar12 = plVar11[1];
        uVar10 = uVar4 - 1;
        if ((uVar4 & uVar10) == 0) {
          *(long **)(lVar6 + (uVar12 & uVar10) * 8) = param_1 + 2;
          uVar4 = uVar12 & uVar10;
          while (plVar13 = plVar11, plVar11 = (long *)*plVar13, plVar11 != (long *)0x0) {
            uVar12 = plVar11[1] & uVar10;
            if (uVar12 != uVar4) {
              if (*(long *)(lVar6 + uVar12 * 8) == 0) {
                *(long **)(lVar6 + uVar12 * 8) = plVar13;
                uVar4 = uVar12;
              }
              else {
                *plVar13 = *plVar11;
                *plVar11 = **(undefined8 **)(lVar6 + uVar12 * 8);
                **(long **)(lVar6 + uVar12 * 8) = (long)plVar11;
                plVar11 = plVar13;
              }
            }
          }
        }
        else {
          if (uVar4 <= uVar12) {
            if ((uVar12 | uVar4) >> 0x20 == 0) {
              uVar12 = (uVar12 & 0xffffffff) % (uVar4 & 0xffffffff);
            }
            else {
              uVar12 = uVar12 % uVar4;
            }
          }
          *(long **)(lVar6 + uVar12 * 8) = param_1 + 2;
          plVar13 = (long *)*plVar11;
          while (plVar13 != (long *)0x0) {
            uVar10 = plVar13[1];
            if (uVar4 <= uVar10) {
              if ((uVar10 | uVar4) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar4 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar4;
              }
            }
            if (uVar10 != uVar12) {
              if (*(long *)(lVar6 + uVar10 * 8) == 0) {
                *(long **)(lVar6 + uVar10 * 8) = plVar11;
                uVar12 = uVar10;
              }
              else {
                *plVar11 = *plVar13;
                *plVar13 = **(long **)(lVar6 + uVar10 * 8);
                **(undefined8 **)(lVar6 + uVar10 * 8) = plVar13;
                plVar13 = plVar11;
              }
            }
            plVar11 = plVar13;
            plVar13 = (long *)*plVar11;
          }
        }
      }
    }
    else {
      uVar4 = FUN_0412c3f0();
      uVar10 = param_1[1];
      bVar14 = uVar4 < uVar10;
      if (uVar10 < uVar4) goto LAB_0eebfd54;
LAB_0eebfe50:
      if (bVar14) {
        fVar15 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar12 = (long)(fVar15 - _DAT_01198778) & (long)fVar15 >> 0x3f | (long)fVar15;
        if ((uVar10 < 3) ||
           (uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
           uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333),
           1 < (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar12 = FUN_0412c3f0(uVar12);
          if (uVar12 < uVar4) {
            uVar12 = uVar4;
          }
        }
        else {
          if (1 < uVar12) {
            lVar1 = 0x3f;
            if (uVar12 - 1 != 0) {
              for (; uVar12 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            uVar12 = 1L << (-((byte)lVar1 ^ 0x3f) & 0x3f);
          }
          if (uVar12 < uVar4) {
            uVar12 = uVar4;
          }
        }
        uVar4 = uVar12;
        if (uVar4 < uVar10) {
          if (uVar4 != 0) goto LAB_0eebfd54;
          lVar1 = *param_1;
          *param_1 = 0;
          if (lVar1 != 0) {
            FUN_0412a280(lVar1,param_1[1] << 3);
          }
          param_1[1] = 0;
        }
      }
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_R12 = (ulong)(param_2 & (int)uVar10 - 1U);
    }
    else {
      unaff_R12 = uVar9;
      if ((uVar10 <= uVar9) && (uVar10 <= uVar9)) {
        unaff_R12 = uVar9 % (uVar10 & 0xffffffff);
      }
    }
  }
  else {
    fVar16 = (float)(long)uVar10;
    fVar15 = *(float *)(param_1 + 4);
    if (uVar10 == 0) goto LAB_0eebfcd8;
LAB_0eebfcc7:
    if (fVar16 * fVar15 < (float)(param_1[3] + 1)) goto LAB_0eebfcd8;
  }
  lVar1 = *param_1;
  plVar11 = *(long **)(lVar1 + unaff_R12 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar5 = param_1[2];
    param_1[2] = (long)plVar5;
    *(long **)(lVar1 + unaff_R12 * 8) = param_1 + 2;
    if (*plVar5 != 0) {
      uVar9 = *(ulong *)(*plVar5 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar1 + (uVar9 & uVar10 - 1) * 8) = plVar5;
      }
      else {
        if (uVar10 <= uVar9) {
          if ((uVar9 | uVar10) >> 0x20 == 0) {
            *(long **)(lVar1 + ((uVar9 & 0xffffffff) % (uVar10 & 0xffffffff)) * 8) = plVar5;
            goto LAB_0eebffea;
          }
          uVar9 = uVar9 % uVar10;
        }
        *(long **)(lVar1 + uVar9 * 8) = plVar5;
      }
    }
  }
  else {
    *plVar5 = *plVar11;
    *plVar11 = (long)plVar5;
  }
LAB_0eebffea:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}


```

## `eec01e0` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot6

- instructions: 449
- calls: 412a280, 412c3f0, 4882eb0, eec0840, eec74c0, eee2d70, eee2dd0, eee3ab0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                 (long *param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_R12;
  bool bVar14;
  float fVar15;
  float fVar16;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  uVar9 = (ulong)param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      unaff_R12 = (ulong)(param_2 & (int)uVar10 - 1U);
    }
    else {
      unaff_R12 = uVar9;
      if (uVar10 <= uVar9) {
        unaff_R12 = (ulong)param_2 % (uVar10 & 0xffffffff);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_R12 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((byte)(uVar4 >> 0x38) < 2) {
        do {
          if (plVar5[1] == uVar9) {
            if (*(uint *)(plVar5 + 2) == param_2) {
              return plVar5;
            }
          }
          else if ((plVar5[1] & uVar10 - 1) != unaff_R12) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar5[1];
          if (uVar4 == uVar9) {
            if (*(uint *)(plVar5 + 2) == param_2) {
              return plVar5;
            }
          }
          else {
            if (uVar10 <= uVar4) {
              if ((uVar4 | uVar10) >> 0x20 == 0) {
                if ((uVar4 & 0xffffffff) % (uVar10 & 0xffffffff) == unaff_R12) goto LAB_0eec035a;
                break;
              }
              uVar4 = uVar4 % uVar10;
            }
            if (uVar4 != unaff_R12) break;
          }
LAB_0eec035a:
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  uStack_38 = 1;
  *plVar5 = 0;
  plVar5[1] = uVar9;
  *(undefined4 *)(plVar5 + 2) = *(undefined4 *)*param_3;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 7) = 0x3f800000;
  if ((long)uVar10 < 0) {
    fVar16 = (float)uVar10;
    fVar15 = *(float *)(param_1 + 4);
    if (uVar10 != 0) goto LAB_0eec03eb;
LAB_0eec03fc:
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 * 2;
    plStack_48 = plVar5;
    plStack_40 = param_1;
    fVar15 = (float)ceilf((float)(param_1[3] + 1) / fVar15);
    uVar12 = (long)(fVar15 - _DAT_01198778) & (long)fVar15 >> 0x3f | (long)fVar15;
    if (uVar12 < uVar4) {
      uVar12 = uVar4;
    }
    uVar4 = 2;
    if ((uVar12 == 1) || (uVar4 = uVar12, (uVar12 & uVar12 - 1) == 0)) {
      bVar14 = uVar4 < uVar10;
      if (uVar4 <= uVar10) goto LAB_0eec0570;
LAB_0eec0478:
      if (uVar4 >> 0x3d != 0) {
        uVar8 = FUN_04882eb0();
        func_0x0eec0840(&plStack_48);
        _Unwind_Resume(uVar8);
        pcVar3 = (code *)swi(3);
        plVar5 = (long *)(*pcVar3)();
        return plVar5;
      }
      lVar1 = uVar4 * 8;
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
      if (lVar6 == 0) {
        FUN_0eec74c0(lVar1,0);
      }
      lVar2 = *param_1;
      *param_1 = lVar6;
      if (lVar2 != 0) {
        FUN_0412a280(lVar2,param_1[1] << 3);
        lVar6 = *param_1;
      }
      param_1[1] = uVar4;
      memset(lVar6,0,lVar1);
      plVar11 = (long *)param_1[2];
      if (plVar11 != (long *)0x0) {
        uVar12 = plVar11[1];
        uVar10 = uVar4 - 1;
        if ((uVar4 & uVar10) == 0) {
          *(long **)(lVar6 + (uVar12 & uVar10) * 8) = param_1 + 2;
          uVar4 = uVar12 & uVar10;
          while (plVar13 = plVar11, plVar11 = (long *)*plVar13, plVar11 != (long *)0x0) {
            uVar12 = plVar11[1] & uVar10;
            if (uVar12 != uVar4) {
              if (*(long *)(lVar6 + uVar12 * 8) == 0) {
                *(long **)(lVar6 + uVar12 * 8) = plVar13;
                uVar4 = uVar12;
              }
              else {
                *plVar13 = *plVar11;
                *plVar11 = **(undefined8 **)(lVar6 + uVar12 * 8);
                **(long **)(lVar6 + uVar12 * 8) = (long)plVar11;
                plVar11 = plVar13;
              }
            }
          }
        }
        else {
          if (uVar4 <= uVar12) {
            if ((uVar12 | uVar4) >> 0x20 == 0) {
              uVar12 = (uVar12 & 0xffffffff) % (uVar4 & 0xffffffff);
            }
            else {
              uVar12 = uVar12 % uVar4;
            }
          }
          *(long **)(lVar6 + uVar12 * 8) = param_1 + 2;
          plVar13 = (long *)*plVar11;
          while (plVar13 != (long *)0x0) {
            uVar10 = plVar13[1];
            if (uVar4 <= uVar10) {
              if ((uVar10 | uVar4) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar4 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar4;
              }
            }
            if (uVar10 != uVar12) {
              if (*(long *)(lVar6 + uVar10 * 8) == 0) {
                *(long **)(lVar6 + uVar10 * 8) = plVar11;
                uVar12 = uVar10;
              }
              else {
                *plVar11 = *plVar13;
                *plVar13 = **(long **)(lVar6 + uVar10 * 8);
                **(undefined8 **)(lVar6 + uVar10 * 8) = plVar13;
                plVar13 = plVar11;
              }
            }
            plVar11 = plVar13;
            plVar13 = (long *)*plVar11;
          }
        }
      }
    }
    else {
      uVar4 = FUN_0412c3f0();
      uVar10 = param_1[1];
      bVar14 = uVar4 < uVar10;
      if (uVar10 < uVar4) goto LAB_0eec0478;
LAB_0eec0570:
      if (bVar14) {
        fVar15 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar12 = (long)(fVar15 - _DAT_01198778) & (long)fVar15 >> 0x3f | (long)fVar15;
        if ((uVar10 < 3) ||
           (uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
           uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333),
           1 < (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar12 = FUN_0412c3f0(uVar12);
          if (uVar12 < uVar4) {
            uVar12 = uVar4;
          }
        }
        else {
          if (1 < uVar12) {
            lVar1 = 0x3f;
            if (uVar12 - 1 != 0) {
              for (; uVar12 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            uVar12 = 1L << (-((byte)lVar1 ^ 0x3f) & 0x3f);
          }
          if (uVar12 < uVar4) {
            uVar12 = uVar4;
          }
        }
        uVar4 = uVar12;
        if (uVar4 < uVar10) {
          if (uVar4 != 0) goto LAB_0eec0478;
          lVar1 = *param_1;
          *param_1 = 0;
          if (lVar1 != 0) {
            FUN_0412a280(lVar1,param_1[1] << 3);
          }
          param_1[1] = 0;
        }
      }
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_R12 = (ulong)(param_2 & (int)uVar10 - 1U);
    }
    else {
      unaff_R12 = uVar9;
      if ((uVar10 <= uVar9) && (uVar10 <= uVar9)) {
        unaff_R12 = uVar9 % (uVar10 & 0xffffffff);
      }
    }
  }
  else {
    fVar16 = (float)(long)uVar10;
    fVar15 = *(float *)(param_1 + 4);
    if (uVar10 == 0) goto LAB_0eec03fc;
LAB_0eec03eb:
    if (fVar16 * fVar15 < (float)(param_1[3] + 1)) goto LAB_0eec03fc;
  }
  lVar1 = *param_1;
  plVar11 = *(long **)(lVar1 + unaff_R12 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar5 = param_1[2];
    param_1[2] = (long)plVar5;
    *(long **)(lVar1 + unaff_R12 * 8) = param_1 + 2;
    if (*plVar5 != 0) {
      uVar9 = *(ulong *)(*plVar5 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar1 + (uVar9 & uVar10 - 1) * 8) = plVar5;
      }
      else {
        if (uVar10 <= uVar9) {
          if ((uVar9 | uVar10) >> 0x20 == 0) {
            *(long **)(lVar1 + ((uVar9 & 0xffffffff) % (uVar10 & 0xffffffff)) * 8) = plVar5;
            goto LAB_0eec070a;
          }
          uVar9 = uVar9 % uVar10;
        }
        *(long **)(lVar1 + uVar9 * 8) = plVar5;
      }
    }
  }
  else {
    *plVar5 = *plVar11;
    *plVar11 = (long)plVar5;
  }
LAB_0eec070a:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}


```

## `eec08c0`

- instructions: 76
- calls: 412a280, eee2dd0

```c

void FUN_0eec08c0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (param_1[3] != 0) {
    puVar5 = (undefined8 *)param_1[2];
    while (puVar5 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar5;
      FUN_0412a280(puVar5,0x18);
      puVar5 = puVar1;
    }
    param_1[2] = 0;
    if (param_1[1] != 0) {
      memset(*param_1,0,param_1[1] << 3);
    }
    param_1[3] = 0;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  lVar3 = *param_1;
  *param_1 = lVar2;
  if (lVar3 != 0) {
    FUN_0412a280(lVar3,param_1[1] << 3);
  }
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar2 != 0) {
    uVar6 = *(ulong *)(lVar3 + 8);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      if ((uVar6 | uVar4) >> 0x20 == 0) {
        uVar6 = (uVar6 & 0xffffffff) % (uVar4 & 0xffffffff);
      }
      else {
        uVar6 = uVar6 % uVar4;
      }
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}


```

## `eec09c0`

- instructions: 64
- calls: 412d680, 412d6b0, 4891200, eec74c0, eee1380, eee1580

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0eec09c0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_28;
  
  lVar4 = FUN_0eee1380(param_1 + 0x68);
  if (lVar4 == 0) {
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    *plVar6 = (long)plVar6;
    plVar6[1] = (long)plVar6;
    plVar5 = plVar6 + 2;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar1 = *(long **)(param_1 + 0x20);
    plStack_28 = plVar5;
    if (plVar1 == (long *)0x0) {
      FUN_04891200();
      pcVar3 = (code *)swi(3);
      plVar6 = (long *)(*pcVar3)();
      return plVar6;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&plStack_28);
    FUN_0eee1580(param_1 + 0x68,plVar6);
    FUN_0412d680(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    plVar6[1] = (long)puVar2;
    *plVar6 = param_1 + 0x30;
    *puVar2 = plVar6;
    *(long **)(param_1 + 0x38) = plVar6;
    FUN_0412d6b0(param_1 + 0x40);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x10);
  }
  return plVar5;
}


```

## `eec74c0`

- instructions: 30
- calls: eeddcf0

```c

void FUN_0eec74c0(ulong param_1,undefined8 param_2)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  
  if (DAT_0f7b9d08 == '\0') {
    DAT_0f7b9d08 = '\x01';
    puVar2 = &UNK_013a8e32;
    if (0x1f400000 < param_1) {
      puVar2 = &UNK_012a0bfc;
    }
    cVar1 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                      (puVar2,&UNK_01198d5e,0x47,&UNK_0145bad8,&UNK_01306baf,param_1,param_2,
                       0x1f400000);
    if (cVar1 != '\0') {
      UNRECOVERED_JUMPTABLE = (code *)&UNK_0eec7550;
      if (0x1f400000 < param_1) {
        UNRECOVERED_JUMPTABLE = (code *)&UNK_0eede830;
      }
                    /* WARNING: Could not recover jumptable at 0x0eec753d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


```

## `eecd080`

- instructions: 27
- calls: 412d680, 4727d30, 47e6790

```c

void FUN_0eecd080(void)

{
  if ((DAT_0f7ba028 & 1) != 0) {
    return;
  }
  FUN_0412d680(0xf7ba030);
  if ((DAT_0f7ba028 & 1) == 0) {
    func_0x047e6790(0xc,0);
    func_0x047e6790(8,0);
    func_0x047e6790(1,0);
    func_0x04727d30(0x200000,0);
    DAT_0f7ba028 = 1;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(0xf7ba030);
  return;
}


```

## `eed64c0`

- instructions: 451
- calls: 412a280, 412fea0, 4882e30, eec74c0, eee2d70, eee2dd0, eee2ee0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0eed64c0(ulong *param_1,long param_2,long param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  byte abStack_60 [4];
  undefined4 uStack_5c;
  byte *pbStack_58;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  abStack_60[2] = 0;
  abStack_60[0] = 0;
  abStack_60[1] = 0;
  uStack_5c = 0;
  if (param_3 == 0) {
    return param_1;
  }
  pbStack_58 = (byte *)((long)param_1 + 1);
  param_3 = param_3 + -1;
  lVar11 = 0;
  uVar5 = 0;
  uStack_4c = param_4;
  lStack_48 = param_2;
  lStack_40 = param_3;
  do {
    iVar13 = (int)uVar5;
    uVar4 = iVar13 + 1;
    abStack_60[uVar5] = *(byte *)(param_2 + lVar11);
    if (uVar4 == 3) {
      uStack_5c._0_2_ = CONCAT11((abStack_60[0] & 3) << 4 | abStack_60[1] >> 4,abStack_60[0] >> 2);
      uStack_5c._0_3_ =
           CONCAT12((abStack_60[1] & 0xf) << 2 | abStack_60[2] >> 6,(undefined2)uStack_5c);
      uStack_5c = CONCAT13(abStack_60[2],(undefined3)uStack_5c) & 0x3fffffff;
      lVar9 = 0xf7ba011;
      if ((DAT_0f7ba010 & 1) != 0) {
        lVar9 = _DAT_0f7ba020;
      }
      bVar1 = *(byte *)(lVar9 + (ulong)(abStack_60[0] >> 2));
      bVar2 = (byte)*param_1;
      lStack_38 = lVar11;
      if ((bVar2 & 1) == 0) {
        if (bVar2 == 0x2c) {
          uVar10 = 0x30;
          uVar5 = 0x16;
          pbVar12 = pbStack_58;
LAB_0eed663e:
          uVar14 = uVar5 + 1;
LAB_0eed6664:
          pbVar6 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
          if (pbVar6 == (byte *)0x0) {
            FUN_0eec74c0(uVar10,0);
          }
          ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(pbVar6,pbVar12,uVar5);
          if (uVar14 != 0x17) {
            FUN_0412a280(pbVar12,uVar14);
          }
          param_1[2] = (ulong)pbVar6;
          *param_1 = uVar10 | 1;
          uVar10 = uVar5;
          goto LAB_0eed66bd;
        }
        uVar10 = (ulong)(bVar2 >> 1);
        *(byte *)param_1 = bVar2 + 2;
        pbVar6 = pbStack_58;
      }
      else {
        uVar10 = param_1[1];
        uVar14 = *param_1 & 0xfffffffffffffffe;
        uVar5 = uVar14 - 1;
        if (uVar10 == uVar5) {
          if (uVar14 == 0xfffffffffffffff8) goto LAB_0eed6b86;
          pbVar12 = (byte *)param_1[2];
          uVar10 = 0xfffffffffffffff7;
          if (uVar5 < 0x7ffffffffffffff3) {
            uVar14 = uVar5 * 2 | 7;
            uVar10 = uVar14 + 1;
            if (uVar14 == 0x17) {
              uVar10 = 0x1a;
            }
            if (uVar5 < 0xc) {
              uVar10 = 0x17;
            }
            goto LAB_0eed663e;
          }
          goto LAB_0eed6664;
        }
        pbVar6 = (byte *)param_1[2];
LAB_0eed66bd:
        param_1[1] = uVar10 + 1;
      }
      pbVar6[uVar10] = bVar1;
      pbVar6[uVar10 + 1] = 0;
      lVar11 = 0xf7ba011;
      if ((DAT_0f7ba010 & 1) != 0) {
        lVar11 = _DAT_0f7ba020;
      }
      bVar1 = *(byte *)(lVar11 + (ulong)uStack_5c._1_1_);
      bVar2 = (byte)*param_1;
      if ((bVar2 & 1) == 0) {
        if (bVar2 == 0x2c) {
          uVar10 = 0x30;
          uVar5 = 0x16;
          pbVar12 = pbStack_58;
LAB_0eed676e:
          uVar14 = uVar5 + 1;
LAB_0eed6794:
          pbVar6 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
          if (pbVar6 == (byte *)0x0) {
            FUN_0eec74c0(uVar10,0);
          }
          ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(pbVar6,pbVar12,uVar5);
          if (uVar14 != 0x17) {
            FUN_0412a280(pbVar12,uVar14);
          }
          param_1[2] = (ulong)pbVar6;
          *param_1 = uVar10 | 1;
          uVar10 = uVar5;
          goto LAB_0eed67ed;
        }
        uVar10 = (ulong)(bVar2 >> 1);
        *(byte *)param_1 = bVar2 + 2;
        pbVar6 = pbStack_58;
      }
      else {
        uVar10 = param_1[1];
        uVar14 = *param_1 & 0xfffffffffffffffe;
        uVar5 = uVar14 - 1;
        if (uVar10 == uVar5) {
          if (uVar14 == 0xfffffffffffffff8) goto LAB_0eed6b86;
          pbVar12 = (byte *)param_1[2];
          uVar10 = 0xfffffffffffffff7;
          if (uVar5 < 0x7ffffffffffffff3) {
            uVar14 = uVar5 * 2 | 7;
            uVar10 = uVar14 + 1;
            if (uVar14 == 0x17) {
              uVar10 = 0x1a;
            }
            if (uVar5 < 0xc) {
              uVar10 = 0x17;
            }
            goto LAB_0eed676e;
          }
          goto LAB_0eed6794;
        }
        pbVar6 = (byte *)param_1[2];
LAB_0eed67ed:
        param_1[1] = uVar10 + 1;
      }
      pbVar6[uVar10] = bVar1;
      pbVar6[uVar10 + 1] = 0;
      lVar11 = 0xf7ba011;
      if ((DAT_0f7ba010 & 1) != 0) {
        lVar11 = _DAT_0f7ba020;
      }
      bVar1 = *(byte *)(lVar11 + (ulong)uStack_5c._2_1_);
      bVar2 = (byte)*param_1;
      if ((bVar2 & 1) == 0) {
        if (bVar2 == 0x2c) {
          uVar10 = 0x30;
          uVar5 = 0x16;
          pbVar12 = pbStack_58;
LAB_0eed689e:
          uVar14 = uVar5 + 1;
LAB_0eed68c4:
          pbVar6 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
          if (pbVar6 == (byte *)0x0) {
            FUN_0eec74c0(uVar10,0);
          }
          ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(pbVar6,pbVar12,uVar5);
          if (uVar14 != 0x17) {
            FUN_0412a280(pbVar12,uVar14);
          }
          param_1[2] = (ulong)pbVar6;
          *param_1 = uVar10 | 1;
          uVar10 = uVar5;
          goto LAB_0eed691d;
        }
        uVar10 = (ulong)(bVar2 >> 1);
        *(byte *)param_1 = bVar2 + 2;
        pbVar6 = pbStack_58;
      }
      else {
        uVar10 = param_1[1];
        uVar14 = *param_1 & 0xfffffffffffffffe;
        uVar5 = uVar14 - 1;
        if (uVar10 == uVar5) {
          if (uVar14 == 0xfffffffffffffff8) goto LAB_0eed6b86;
          pbVar12 = (byte *)param_1[2];
          uVar10 = 0xfffffffffffffff7;
          if (uVar5 < 0x7ffffffffffffff3) {
            uVar14 = uVar5 * 2 | 7;
            uVar10 = uVar14 + 1;
            if (uVar14 == 0x17) {
              uVar10 = 0x1a;
            }
            if (uVar5 < 0xc) {
              uVar10 = 0x17;
            }
            goto LAB_0eed689e;
          }
          goto LAB_0eed68c4;
        }
        pbVar6 = (byte *)param_1[2];
LAB_0eed691d:
        param_1[1] = uVar10 + 1;
      }
      pbVar6[uVar10] = bVar1;
      pbVar6[uVar10 + 1] = 0;
      lVar11 = 0xf7ba011;
      if ((DAT_0f7ba010 & 1) != 0) {
        lVar11 = _DAT_0f7ba020;
      }
      bVar1 = *(byte *)(lVar11 + (ulong)uStack_5c._3_1_);
      bVar2 = (byte)*param_1;
      if ((bVar2 & 1) == 0) {
        if (bVar2 == 0x2c) {
          uVar10 = 0x30;
          uVar5 = 0x16;
          pbVar12 = pbStack_58;
LAB_0eed69ce:
          uVar14 = uVar5 + 1;
LAB_0eed69f4:
          pbVar6 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
          if (pbVar6 == (byte *)0x0) {
            FUN_0eec74c0(uVar10,0);
          }
          ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(pbVar6,pbVar12,uVar5);
          if (uVar14 != 0x17) {
            FUN_0412a280(pbVar12,uVar14);
          }
          param_1[2] = (ulong)pbVar6;
          *param_1 = uVar10 | 1;
          uVar10 = uVar5;
          goto LAB_0eed6a4d;
        }
        uVar10 = (ulong)(bVar2 >> 1);
        *(byte *)param_1 = bVar2 + 2;
        pbVar6 = pbStack_58;
      }
      else {
        uVar10 = param_1[1];
        uVar14 = *param_1 & 0xfffffffffffffffe;
        uVar5 = uVar14 - 1;
        if (uVar10 == uVar5) {
          if (uVar14 == 0xfffffffffffffff8) {
LAB_0eed6b86:
            uVar7 = FUN_04882e30();
            if ((*param_1 & 1) != 0) {
              FUN_0412a280(param_1[2],*param_1 & 0xfffffffffffffffe);
            }
            _Unwind_Resume(uVar7);
            pcVar3 = (code *)swi(3);
            puVar8 = (ulong *)(*pcVar3)();
            return puVar8;
          }
          pbVar12 = (byte *)param_1[2];
          uVar10 = 0xfffffffffffffff7;
          if (uVar5 < 0x7ffffffffffffff3) {
            uVar14 = uVar5 * 2 | 7;
            uVar10 = uVar14 + 1;
            if (uVar14 == 0x17) {
              uVar10 = 0x1a;
            }
            if (uVar5 < 0xc) {
              uVar10 = 0x17;
            }
            goto LAB_0eed69ce;
          }
          goto LAB_0eed69f4;
        }
        pbVar6 = (byte *)param_1[2];
LAB_0eed6a4d:
        param_1[1] = uVar10 + 1;
      }
      pbVar6[uVar10] = bVar1;
      pbVar6[uVar10 + 1] = 0;
      uVar4 = 0;
      param_3 = lStack_40;
      param_2 = lStack_48;
      lVar11 = lStack_38;
      if (lStack_40 == lStack_38) {
        return param_1;
      }
    }
    else if (param_3 == lVar11) {
      uVar5 = 0;
      memset(abStack_60 + uVar4,0,2 - iVar13);
      uStack_5c._0_2_ = CONCAT11((abStack_60[0] & 3) << 4 | abStack_60[1] >> 4,abStack_60[0] >> 2);
      uStack_5c._0_3_ =
           CONCAT12((abStack_60[1] & 0xf) << 2 | abStack_60[2] >> 6,(undefined2)uStack_5c);
      uStack_5c = CONCAT13(abStack_60[2],(undefined3)uStack_5c) & 0x3fffffff;
      do {
        lVar11 = 0xf7ba011;
        if ((DAT_0f7ba010 & 1) != 0) {
          lVar11 = _DAT_0f7ba020;
        }
        FUN_0412fea0(param_1,(int)*(char *)(lVar11 + (ulong)*(byte *)((long)&uStack_5c + uVar5)));
        uVar5 = uVar5 + 1;
      } while (iVar13 + 2 != uVar5);
      if ((char)uStack_4c == '\0') {
        return param_1;
      }
      iVar13 = iVar13 + -3;
      while (iVar13 = iVar13 + 1, iVar13 != 0) {
        FUN_0412fea0(param_1,0x3d);
      }
      return param_1;
    }
    lVar11 = lVar11 + 1;
    uVar5 = (ulong)uVar4;
  } while( true );
}


```

## `eed9bb0`

- instructions: 63
- calls: 412a280, 48e6d60, eedeb80

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eed9bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (auStack_90,*(long **)(param_1 + 8),param_2,param_3,param_4);
  uStack_48 = 0xfca693d649872bec;
  puStack_40 = &UNK_0140f690;
  uStack_38 = 1;
  _uStack_30 = CONCAT44(uStack_2c,0x47);
  if (bStack_50 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_0eedeb80(0x100010008,0x2d,auStack_90,&uStack_a8,&uStack_48);
    if ((uStack_a8 & 1) != 0) {
      FUN_0412a280(uStack_98,uStack_a8 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_50 & 1) == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68._4_4_ = (undefined4)((ulong)uStack_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
    uStack_20 = (undefined4)uStack_68;
    uStack_1c = uStack_68._4_4_;
    uStack_18 = (undefined4)uStack_60;
    uStack_14 = uStack_60._4_4_;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_048e6d60(auStack_90);
    _DAT_00000000 = 0xdeadc0de;
    FUN_048e6d60(&uStack_48);
    return;
  }
  return;
}


```

## `eedb8d0` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot8

- instructions: 180
- calls: 470d660, 5a978c0, eedc9a0, eedcba0

```c

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v8
               (char *param_1,long param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  long lStack_40;
  uint uStack_38;
  
  pcVar1 = param_1 + param_2;
  pcVar5 = param_1;
  if (param_2 != 0) {
    do {
      pcVar4 = param_1 + 1;
      if (*param_1 == '}') {
        if ((pcVar4 == pcVar1) || (*pcVar4 != '}')) {
          FUN_0470d660(&UNK_012d5945);
LAB_0eedc6cb:
          FUN_0470d660(&UNK_013088b0);
LAB_0eedc6d7:
          FUN_0470d660(&UNK_013ddce9);
          goto LAB_0eedc6e3;
        }
        func_0x05a978c0(pcVar5,pcVar4,*(undefined8 *)(param_3 + 0x18));
LAB_0eedb910:
        pcVar5 = param_1 + 2;
        pcVar4 = pcVar5;
      }
      else if (*param_1 == '{') {
        func_0x05a978c0(pcVar5,param_1,*(undefined8 *)(param_3 + 0x18));
        if (pcVar4 == pcVar1) goto LAB_0eedc6cb;
        cVar2 = *pcVar4;
        if (cVar2 == ':') {
          uVar6 = *(uint *)(param_3 + 0x10);
          if (-1 < (int)uVar6) {
            *(uint *)(param_3 + 0x10) = uVar6 + 1;
LAB_0eedba7c:
            pcVar5 = (char *)func_0x0eedcba0(param_3,uVar6,pcVar4 + 1,pcVar1);
            if ((pcVar5 != pcVar1) && (*pcVar5 == '}')) {
              pcVar5 = pcVar5 + 1;
              pcVar4 = pcVar5;
              goto LAB_0eedb916;
            }
            goto LAB_0eedc6d7;
          }
        }
        else {
          if (cVar2 == '{') {
            func_0x05a978c0(pcVar4,param_1 + 2,*(undefined8 *)(param_3 + 0x18));
            goto LAB_0eedb910;
          }
          if (cVar2 != '}') {
            uStack_38 = 0;
            lStack_40 = param_3;
            pcVar4 = (char *)func_0x0eedc9a0(pcVar4,pcVar1,&lStack_40);
            if (pcVar4 == pcVar1) goto LAB_0eedc6fb;
            uVar6 = uStack_38;
            if (*pcVar4 == ':') goto LAB_0eedba7c;
            if (*pcVar4 != '}') goto LAB_0eedc6fb;
            uVar7 = *(ulong *)(param_3 + 0x20);
            if ((long)uVar7 < 0) {
              if ((int)uStack_38 < (int)uVar7) {
                uVar6 = *(uint *)(*(long *)(param_3 + 0x28) + 0x10 + (long)(int)uStack_38 * 0x20);
                goto joined_r0x0eedbb15;
              }
            }
            else if ((uStack_38 < 0xf) &&
                    (uVar7 = uVar7 >> ((char)uStack_38 * '\x04' & 0x3fU), uVar6 = (uint)uVar7 & 0xf,
                    (uVar7 & 0xf) != 0)) {
joined_r0x0eedbb15:
              if (uVar6 - 1 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0eedbb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_01e80638 + *(int *)(&UNK_01e80638 + (ulong)(uVar6 - 1) * 4)))();
                return;
              }
            }
            goto LAB_0eedc6e3;
          }
          uVar6 = *(uint *)(param_3 + 0x10);
          if ((long)(int)uVar6 < 0) goto LAB_0eedc6ef;
          *(uint *)(param_3 + 0x10) = uVar6 + 1;
          uVar7 = *(ulong *)(param_3 + 0x20);
          if ((long)uVar7 < 0) {
            if ((int)uVar6 < (int)uVar7) {
              uVar6 = *(uint *)(*(long *)(param_3 + 0x28) + 0x10 + (long)(int)uVar6 * 0x20);
              goto joined_r0x0eedbaca;
            }
          }
          else if ((uVar6 < 0xf) &&
                  (uVar7 = uVar7 >> ((char)uVar6 * '\x04' & 0x3fU), uVar6 = (uint)uVar7 & 0xf,
                  (uVar7 & 0xf) != 0)) {
joined_r0x0eedbaca:
            if (uVar6 - 1 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0eedbae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_01e805fc + *(int *)(&UNK_01e805fc + (ulong)(uVar6 - 1) * 4)))();
              return;
            }
          }
LAB_0eedc6e3:
          FUN_0470d660(&UNK_0123b496);
        }
LAB_0eedc6ef:
        FUN_0470d660(&UNK_012bbe65);
LAB_0eedc6fb:
        FUN_0470d660(&UNK_011b6bc1);
        FUN_0470d660(&UNK_013aa920);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_0eedb916:
      param_1 = pcVar4;
    } while (param_1 != pcVar1);
  }
  func_0x05a978c0(pcVar5,pcVar1,*(undefined8 *)(param_3 + 0x18));
  return;
}


```

## `eedc720`

- instructions: 109
- calls: 4108328, 410844d, 412d680, 412d6b0, 412e520, 4136a20, 4136a30, 4882e20, eedc900, eee2d70, eee2f40

```c

void FUN_0eedc720(int *param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_68;
  char cStack_60;
  int iStack_54;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  int *piStack_40;
  int *piStack_38;
  undefined1 uStack_30;
  
  if ((DAT_0f7ba0c0 == '\0') && (iVar2 = FUN_04108328(&DAT_0f7ba0c0), iVar2 != 0)) {
    __cxa_atexit(ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14,0xf7ba090,0xf53dab8);
    FUN_0410844d(&DAT_0f7ba0c0);
  }
  lStack_68 = 0xf7ba068;
  cStack_60 = '\x01';
  FUN_0412d680();
  iVar2 = *param_1;
  while (iVar2 == 1) {
    FUN_04136a30(0xf7ba090,&lStack_68);
    iVar2 = *param_1;
  }
  if (*param_1 != 0) {
joined_r0x0eedc84a:
    if (cStack_60 == '\x01') {
      FUN_0412d6b0(lStack_68);
    }
    return;
  }
  *param_1 = 1;
  iStack_54 = 0;
  uStack_50 = 0xf7ba090;
  piStack_38 = &iStack_54;
  uStack_30 = 1;
  piStack_40 = param_1;
  if (cStack_60 == '\0') {
    puStack_48 = (undefined1 *)&lStack_68;
    FUN_0412e520(1,&UNK_014757c7);
  }
  else {
    puStack_48 = (undefined1 *)&lStack_68;
    FUN_0412d6b0(lStack_68);
    cStack_60 = '\0';
    (*param_2)(param_3);
    iStack_54 = -1;
    if (lStack_68 != 0) {
      if (cStack_60 == '\0') {
        FUN_0412d680();
        cStack_60 = 1;
        *param_1 = iStack_54;
        FUN_0412d6b0(lStack_68);
        cStack_60 = '\0';
        pthread_cond_broadcast(0xf7ba090);
        goto joined_r0x0eedc84a;
      }
      puVar3 = &UNK_01323741;
      uVar4 = 0x23;
      goto LAB_0eedc8bf;
    }
  }
  puVar3 = &UNK_0126f9a0;
  uVar4 = 1;
LAB_0eedc8bf:
  uVar4 = FUN_0412e520(uVar4,puVar3);
  func_0x0eedc900(&uStack_50);
  if (cStack_60 == '\x01') {
    FUN_0412d6b0(lStack_68);
  }
  uVar4 = _Unwind_Resume(uVar4);
  FUN_04882e20(uVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `eeddcf0` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot6

- instructions: 61
- calls: 4891200, eeb5fa0, eee2d70

```c

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  code *pcVar2;
  char in_AL;
  undefined8 uVar3;
  long *in_FS_OFFSET;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if (in_AL != '\0') {
    uStack_a8 = param_1;
    uStack_98 = param_2;
    uStack_88 = param_3;
    uStack_78 = param_4;
    uStack_68 = param_5;
    uStack_58 = param_6;
    uStack_48 = param_7;
    uStack_38 = param_8;
  }
  puStack_e8 = auStack_d8;
  puStack_f0 = &stack0x00000008;
  uStack_f8 = 0x3000000028;
  uStack_b0 = param_14;
  if (*(long *)(*in_FS_OFFSET + -0x50) == 0) {
    thunk_FUN_0eeb5980(param_9,param_10,param_11,param_12,param_13,&uStack_f8);
  }
  else {
    puStack_108 = &uStack_f8;
    plVar1 = *(long **)(*(long *)(*in_FS_OFFSET + -0x50) + 0x20);
    uStack_100 = param_9;
    if (plVar1 == (long *)0x0) {
      uVar3 = FUN_04891200();
      _Unwind_Resume(uVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_100,&puStack_108);
  }
  return;
}


```

## `eede540`

- instructions: 132
- calls: 412a280, 470de60, eede540

```c

byte * FUN_0eede540(byte *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  byte *pbStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  byte *pbStack_50;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uStack_98 = &lStack_48;
  puStack_90 = &UNK_0eee2430;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_58 = &UNK_0489c840;
  pbStack_78 = param_1;
  pbStack_50 = param_1;
  lStack_48 = param_2;
  FUN_0470de60(auStack_70,&UNK_012bcf14,9,0xf,&uStack_98,0);
  lVar3 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  pbVar2 = pbStack_50;
  lStack_38 = param_2;
  if (lVar3 != lVar1) {
    do {
      if (*(char *)(lVar3 + 0x48) == '\x01') {
        bVar4 = (*(byte *)(lVar3 + 0x20) & 1) != 0;
        uStack_98 = (long *)(lVar3 + 0x21);
        if (bVar4) {
          uStack_98 = *(long **)(lVar3 + 0x30);
        }
        puStack_90 = (undefined *)(ulong)(*(byte *)(lVar3 + 0x20) >> 1);
        if (bVar4) {
          puStack_90 = *(undefined **)(lVar3 + 0x28);
        }
        if ((*pbVar2 & 1) == 0) {
          uStack_68 = (ulong)(*pbVar2 >> 1);
        }
        else {
          uStack_68 = *(ulong *)(pbVar2 + 8);
        }
        puStack_58 = &UNK_0489c840;
        uStack_60 = uStack_68;
        pbStack_50 = pbVar2;
        FUN_0470de60(auStack_70,&UNK_0145e81e,3,0xd,&uStack_98,0);
        pbVar2 = pbStack_50;
      }
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar1);
  }
  lVar3 = *(long *)(lStack_38 + 0x28);
  lVar1 = *(long *)(lStack_38 + 0x30);
  if (lVar3 != lVar1) {
    do {
      FUN_0eede540(&uStack_98,lVar3);
      puStack_40 = (undefined *)((ulong)uStack_98 >> 1 & 0x7f);
      lStack_48 = (long)&uStack_98 + 1;
      if (((ulong)uStack_98 & 1) != 0) {
        puStack_40 = puStack_90;
        lStack_48 = lStack_88;
      }
      if ((*pbVar2 & 1) == 0) {
        uStack_68 = (ulong)(*pbVar2 >> 1);
      }
      else {
        uStack_68 = *(ulong *)(pbVar2 + 8);
      }
      puStack_58 = &UNK_0489c840;
      uStack_60 = uStack_68;
      pbStack_50 = pbVar2;
      FUN_0470de60(auStack_70,&UNK_0145e81e,3,0xd,&lStack_48,0);
      pbVar2 = pbStack_50;
      if (((ulong)uStack_98 & 1) != 0) {
        FUN_0412a280(lStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
      }
      lVar3 = lVar3 + 0x40;
    } while (lVar3 != lVar1);
  }
  return pbStack_78;
}


```

## `eede920`

- instructions: 28
- calls: eeb5600

```c

void FUN_0eede920(void)

{
  func_0x0eeb5600();
  return;
}


```

## `eedeb80`

- instructions: 326
- calls: 4108328, 410844d, 412a280, 470d9a0, 4882e20, 489d2c0, 4931450, eede540, eede920, eedee20, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eedeb80(ulong param_1,undefined4 param_2,undefined1 *param_3,ulong *param_4,ulong *param_5
                 )

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  byte *extraout_RDX;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  undefined2 uStack_132;
  uint uStack_130;
  uint uStack_12c;
  byte bStack_128;
  undefined1 uStack_127;
  undefined6 uStack_126;
  undefined1 *puStack_118;
  byte *pbStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 ***pppuStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  byte bStack_70;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  ulong uStack_38;
  
  pcStack_c0 = (code *)0xeedebaf;
  puVar6 = param_4;
  puVar10 = param_3;
  FUN_0eede540(&ppuStack_58);
  uVar9 = (uint)puVar10;
  uStack_b8 = param_4;
  uStack_b0 = &ppuStack_58;
  puStack_a8 = param_5;
  uStack_38 = param_1;
  if (param_1 >> 0x20 == 0xffffffff) {
    pcStack_c0 = (code *)0xeededd9;
    uVar5 = FUN_04931450();
    if ((bStack_70 == '\x01') && ((uStack_98 & 1) != 0)) {
      uVar9 = (uint)uStack_98 & 0xfffffffe;
      pcStack_c0 = (code *)0xeededfd;
      FUN_0412a280(uStack_88);
      pcStack_c0 = (code *)0xeedee05;
      uVar5 = FUN_04882e20(uVar5);
      pcStack_c0 = (code *)0xeedee0d;
      uVar5 = FUN_04882e20(uVar5);
    }
    pcStack_c0 = (code *)0xeedee18;
    uStack_130 = FUN_04882e20(uVar5);
    pcStack_c0 = FUN_0eedee20;
    FUN_04882e20();
    uVar12 = *puVar6;
    uVar7 = puVar6[1];
    pcStack_c0 = (code *)0xffffffff;
    uStack_12c = uVar9;
    uStack_e8 = uVar5;
    puStack_e0 = param_5;
    puStack_d8 = param_4;
    puStack_d0 = param_3;
    pppuStack_c8 = &ppuStack_58;
    do {
      if (uVar12 == uVar7) {
        bVar13 = (*extraout_RDX & 1) != 0;
        pbStack_110 = extraout_RDX + 1;
        if (bVar13) {
          pbStack_110 = *(byte **)(extraout_RDX + 0x10);
        }
        uStack_108 = (ulong)(*extraout_RDX >> 1);
        if (bVar13) {
          uStack_108 = *(ulong *)(extraout_RDX + 8);
        }
        puStack_f8 = &UNK_0eee2580;
        puStack_100 = puVar6;
        FUN_0470d9a0(&bStack_128,&UNK_013731d8,0x17,0xfd,&pbStack_110);
        uVar1 = uStack_12c;
        uVar9 = uStack_130;
        if ((DAT_0f7ba110 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7ba110), iVar3 != 0)) {
          _DAT_0f7ba0d0 = 0;
          uRam000000000f7ba0d8 = 0;
          __cxa_atexit(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
          FUN_0410844d(&DAT_0f7ba110);
        }
        if (_DAT_0f7ba0d0 != 0) {
          uStack_132 = (undefined2)uVar9;
          pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,uVar1);
          (**(code **)(_DAT_0f7ba0d0 + 0x10))(&DAT_0f7ba0d0,&uStack_132,&pbStack_110,&bStack_128);
        }
        if ((uVar9 & 0x100) != 0) {
          puVar10 = puStack_118;
          if ((bStack_128 & 1) == 0) {
            puVar10 = &uStack_127;
          }
          FUN_0eede920(0,1,0,uVar1,uVar9 & 0xff,&UNK_013c1f41,0x5e,puVar10);
        }
        if ((bStack_128 & 1) != 0) {
          FUN_0412a280(puStack_118,
                       CONCAT62(uStack_126,CONCAT11(uStack_127,bStack_128)) & 0xfffffffffffffffe);
        }
        return;
      }
      if (*(char *)(uVar12 + 0x48) == '\x01') {
        if (*(char *)(uVar12 + 0x3a) == '\0') {
          if ((*(byte *)(uVar12 + 0x40) & 1) == 0) goto LAB_0eedee70;
          uVar2 = *(undefined4 *)(uVar12 + 0x3c);
          uVar8 = 2;
        }
        else {
          uVar2 = 0x2d;
          if ((*(byte *)(uVar12 + 0x40) & 1) != 0) {
            uVar2 = *(undefined4 *)(uVar12 + 0x3c);
          }
          uVar8 = *(ushort *)(uVar12 + 0x38);
        }
        if ((DAT_0f7ba110 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7ba110), iVar3 != 0)) {
          _DAT_0f7ba0d0 = 0;
          uRam000000000f7ba0d8 = 0;
          __cxa_atexit(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
          FUN_0410844d(&DAT_0f7ba110);
        }
        if (_DAT_0f7ba0d0 != 0) {
          uStack_127 = (undefined1)(uVar8 >> 8);
          pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,uVar2);
          bStack_128 = (byte)uVar8;
          (**(code **)(_DAT_0f7ba0d0 + 0x10))(&DAT_0f7ba0d0,&bStack_128,&pbStack_110,uVar12 + 0x20);
        }
        if ((uVar8 & 0x100) != 0) {
          if ((*(byte *)(uVar12 + 0x20) & 1) == 0) {
            lVar11 = uVar12 + 0x21;
          }
          else {
            lVar11 = *(long *)(uVar12 + 0x30);
          }
          FUN_0eede920(0,1,0,uVar2,(byte)uVar8,&UNK_013c1f41,0x5e,lVar11);
        }
      }
LAB_0eedee70:
      uVar12 = uVar12 + 0x50;
    } while( true );
  }
  pcStack_c0 = (code *)0xeedebf9;
  puStack_60 = (undefined1 *)&uStack_b8;
  uVar2 = (**(code **)(&UNK_0f53c578 + (param_1 >> 0x20) * 8))(&puStack_60,&uStack_38);
  if (((ulong)ppuStack_58 & 1) != 0) {
    pcStack_c0 = (code *)0xeedec15;
    FUN_0412a280(uStack_48,(ulong)ppuStack_58 & 0xfffffffffffffffe);
  }
  uVar12 = param_4[1];
  uVar7 = (ulong)(byte)((byte)*param_4 >> 1);
  if (((byte)*param_4 & 1) != 0) {
    uVar7 = uVar12;
  }
  if (uVar7 == 0) {
    uStack_b8 = (ulong *)*param_5;
    uStack_b0._0_4_ = (undefined4)param_5[1];
    uStack_b0._4_4_ = *(undefined4 *)((long)param_5 + 0xc);
    puStack_a8 = (ulong *)param_5[2];
    uStack_a0 = (undefined4)param_5[3];
    uStack_9c = *(undefined4 *)((long)param_5 + 0x1c);
    uStack_98 = uStack_98 & 0xffffffffffffff00;
    bStack_70 = 0;
    bVar13 = false;
    puVar4 = *(undefined4 **)(param_3 + 0x18);
    if (*(undefined4 **)(param_3 + 0x20) <= puVar4) goto LAB_0eeded34;
LAB_0eedec9d:
    *(ulong **)(puVar4 + 4) = puStack_a8;
    *(ulong *)(puVar4 + 6) = CONCAT44(uStack_9c,uStack_a0);
    *puVar4 = (undefined4)uStack_b8;
    puVar4[1] = uStack_b8._4_4_;
    puVar4[2] = (undefined4)uStack_b0;
    puVar4[3] = uStack_b0._4_4_;
    *(undefined1 *)(puVar4 + 8) = 0;
    *(undefined1 *)(puVar4 + 0x12) = 0;
    if (bVar13) {
      *(ulong *)(puVar4 + 0xc) = uStack_88;
      *(ulong *)(puVar4 + 8) = uStack_98;
      *(ulong *)(puVar4 + 10) = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      *(undefined1 *)(puVar4 + 0x10) = uStack_78;
      *(ulong *)(puVar4 + 0xe) =
           CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)));
      *(undefined1 *)(puVar4 + 0x12) = 1;
    }
    *(undefined4 **)(param_3 + 0x18) = puVar4 + 0x14;
    if (!bVar13) goto LAB_0eeded67;
  }
  else {
    uStack_98 = *param_4;
    uStack_88 = param_4[2];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    uStack_b8 = (ulong *)*param_5;
    uStack_b0._0_4_ = (undefined4)param_5[1];
    uStack_b0._4_4_ = *(undefined4 *)((long)param_5 + 0xc);
    puStack_a8 = (ulong *)param_5[2];
    uStack_a0 = (undefined4)param_5[3];
    uStack_9c = *(undefined4 *)((long)param_5 + 0x1c);
    uStack_80 = (undefined2)uVar2;
    uStack_7e = 1;
    uStack_78 = 1;
    bStack_70 = 1;
    bVar13 = true;
    puVar4 = *(undefined4 **)(param_3 + 0x18);
    uStack_90 = uVar12;
    uStack_7c = param_2;
    if (puVar4 < *(undefined4 **)(param_3 + 0x20)) goto LAB_0eedec9d;
LAB_0eeded34:
    pcStack_c0 = (code *)0xeeded3f;
    uVar5 = FUN_0489d2c0(param_3 + 0x10,&uStack_b8);
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    if ((bStack_70 & 1) == 0) goto LAB_0eeded67;
  }
  if ((uStack_98 & 1) != 0) {
    pcStack_c0 = (code *)0xeeded67;
    FUN_0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
  }
LAB_0eeded67:
  puStack_50 = &UNK_0eee2430;
  pcStack_c0 = (code *)0xeeded9b;
  puStack_60 = param_3;
  ppuStack_58 = &puStack_60;
  FUN_0470d9a0(&uStack_b8,&UNK_012063a8,2,0xf,&ppuStack_58);
  pcStack_c0 = (code *)0xeededaa;
  FUN_0eedee20(uVar2,param_2,&uStack_b8,param_3 + 0x10);
  if (((ulong)uStack_b8 & 1) != 0) {
    pcStack_c0 = (code *)0xeededc2;
    FUN_0412a280(puStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
  }
  return;
}


```

## `eedee20`

- instructions: 158
- calls: 4108328, 410844d, 412a280, 470d9a0, eede920, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eedee20(uint param_1,undefined4 param_2,byte *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  long lVar8;
  bool bVar9;
  undefined2 uStack_7a;
  uint uStack_78;
  undefined4 uStack_74;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined1 *puStack_60;
  byte *pbStack_58;
  ulong uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  
  lVar8 = *param_4;
  lVar1 = param_4[1];
  uStack_78 = param_1;
  uStack_74 = param_2;
  do {
    if (lVar8 == lVar1) {
      bVar9 = (*param_3 & 1) != 0;
      pbStack_58 = param_3 + 1;
      if (bVar9) {
        pbStack_58 = *(byte **)(param_3 + 0x10);
      }
      uStack_50 = (ulong)(*param_3 >> 1);
      if (bVar9) {
        uStack_50 = *(ulong *)(param_3 + 8);
      }
      puStack_40 = &UNK_0eee2580;
      plStack_48 = param_4;
      FUN_0470d9a0(&bStack_70,&UNK_013731d8,0x17,0xfd,&pbStack_58);
      uVar7 = uStack_74;
      uVar2 = uStack_78;
      if ((DAT_0f7ba110 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7ba110), iVar3 != 0)) {
        _DAT_0f7ba0d0 = 0;
        uRam000000000f7ba0d8 = 0;
        __cxa_atexit(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
        FUN_0410844d(&DAT_0f7ba110);
      }
      if (_DAT_0f7ba0d0 != 0) {
        uStack_7a = (undefined2)uVar2;
        pbStack_58 = (byte *)CONCAT44(pbStack_58._4_4_,uVar7);
        (**(code **)(_DAT_0f7ba0d0 + 0x10))(&DAT_0f7ba0d0,&uStack_7a,&pbStack_58,&bStack_70);
      }
      if ((uVar2 & 0x100) != 0) {
        puVar6 = puStack_60;
        if ((bStack_70 & 1) == 0) {
          puVar6 = &uStack_6f;
        }
        FUN_0eede920(0,1,0,uVar7,uVar2 & 0xff,&UNK_013c1f41,0x5e,puVar6);
      }
      if ((bStack_70 & 1) != 0) {
        FUN_0412a280(puStack_60,
                     CONCAT62(uStack_6e,CONCAT11(uStack_6f,bStack_70)) & 0xfffffffffffffffe);
      }
      return;
    }
    if (*(char *)(lVar8 + 0x48) == '\x01') {
      if (*(char *)(lVar8 + 0x3a) == '\0') {
        if ((*(byte *)(lVar8 + 0x40) & 1) == 0) goto LAB_0eedee70;
        uVar7 = *(undefined4 *)(lVar8 + 0x3c);
        uVar4 = 2;
      }
      else {
        uVar7 = 0x2d;
        if ((*(byte *)(lVar8 + 0x40) & 1) != 0) {
          uVar7 = *(undefined4 *)(lVar8 + 0x3c);
        }
        uVar4 = *(ushort *)(lVar8 + 0x38);
      }
      if ((DAT_0f7ba110 == '\0') && (iVar3 = FUN_04108328(&DAT_0f7ba110), iVar3 != 0)) {
        _DAT_0f7ba0d0 = 0;
        uRam000000000f7ba0d8 = 0;
        __cxa_atexit(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
        FUN_0410844d(&DAT_0f7ba110);
      }
      if (_DAT_0f7ba0d0 != 0) {
        uStack_6f = (undefined1)(uVar4 >> 8);
        pbStack_58 = (byte *)CONCAT44(pbStack_58._4_4_,uVar7);
        bStack_70 = (byte)uVar4;
        (**(code **)(_DAT_0f7ba0d0 + 0x10))(&DAT_0f7ba0d0,&bStack_70,&pbStack_58,lVar8 + 0x20);
      }
      if ((uVar4 & 0x100) != 0) {
        if ((*(byte *)(lVar8 + 0x20) & 1) == 0) {
          lVar5 = lVar8 + 0x21;
        }
        else {
          lVar5 = *(long *)(lVar8 + 0x30);
        }
        FUN_0eede920(0,1,0,uVar7,(byte)uVar4,&UNK_013c1f41,0x5e,lVar5);
      }
    }
LAB_0eedee70:
    lVar8 = lVar8 + 0x50;
  } while( true );
}


```

## `eee02f0`

- instructions: 30
- calls: 412d450, 412d520, 412d680, 412d6b0

```c

void FUN_0eee02f0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  LOCK();
  plVar1 = (long *)(param_1 + 0xd0);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == -0x7fffffffffffffff) {
    FUN_0412d450();
    LOCK();
    *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    FUN_0412d520(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    FUN_0412d680(uVar3);
    FUN_0412d6b0(uVar3);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(param_1 + 0x90);
    return;
  }
  return;
}


```

## `eee0600`

- instructions: 20
- calls: eeddcf0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0eee0600(long *param_1)

{
  char cVar1;
  undefined8 in_RAX;
  
  if ((param_1[2] != *param_1) || ((int)param_1[1] != 0)) {
    cVar1 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                      (&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if (cVar1 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
      return in_RAX;
    }
  }
  return in_RAX;
}


```

## `eee0720` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot6

- instructions: 40
- calls: eeddcf0, eee2fc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  lVar2 = param_1[2];
  lVar4 = pthread_self();
  if (lVar2 == lVar4) {
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = *param_1;
      return;
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 1) = iVar1 + -1;
      return;
    }
  }
  cVar3 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                    (&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar3 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return;
}


```

## `eee07b0`

- instructions: 237
- calls: 412a280, 412d680, 412d6b0, 4882eb0, eec74c0, eee2940, eee2980, eee2d70, eee2dd0, eee2ee0, eee2f00

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee07b0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2000);
  if (lVar3 == 0) {
    FUN_0eec74c0(0x2000,0);
  }
  param_1[1] = lVar3;
  param_1[3] = lVar3 + 0x2000;
  memset(lVar3,0,0x2000);
  param_1[2] = lVar3 + 0x2000;
  lVar3 = *param_2;
  FUN_0412d680(lVar3);
  puVar8 = *(undefined8 **)(lVar3 + 0x40);
  puVar13 = *(undefined8 **)(lVar3 + 0x48);
  uVar4 = (long)puVar13 - (long)puVar8 >> 3;
  puVar2 = puVar8;
  uVar14 = uVar4;
  uVar10 = (long)puVar13 - (long)puVar8;
  while (uVar10 != 0) {
    uVar10 = uVar14 >> 1;
    uVar11 = ~uVar10 + uVar14;
    uVar14 = uVar10;
    if ((undefined8 *)puVar2[uVar10] < param_1) {
      puVar2 = puVar2 + uVar10 + 1;
      uVar14 = uVar11;
      uVar10 = uVar11;
    }
  }
  if (puVar2 == puVar13) {
    puVar9 = *(undefined8 **)(lVar3 + 0x50);
    if (puVar13 < puVar9) {
      *puVar13 = param_1;
      *(undefined8 **)(lVar3 + 0x48) = puVar13 + 1;
      goto code_r0x0412d6b0;
    }
  }
  else {
    if ((undefined8 *)*puVar2 <= param_1) goto code_r0x0412d6b0;
    puVar9 = *(undefined8 **)(lVar3 + 0x50);
    if (puVar13 < puVar9) {
      puVar8 = puVar13;
      if (puVar13 + -1 < puVar13) {
        puVar8 = puVar13 + 1;
        *puVar13 = puVar13[-1];
      }
      *(undefined8 **)(lVar3 + 0x48) = puVar8;
      if (puVar13 != puVar2 + 1) {
        ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(puVar2 + 1,puVar2);
      }
      *puVar2 = param_1;
      goto code_r0x0412d6b0;
    }
  }
  lVar12 = (long)puVar2 - (long)puVar8;
  uVar4 = uVar4 + 1;
  if (uVar4 >> 0x3d == 0) {
    uVar14 = (long)puVar9 - (long)puVar8 >> 2;
    if (uVar14 <= uVar4) {
      uVar14 = uVar4;
    }
    lStack_38 = lVar3 + 0x40;
    if (0x7ffffffffffffff7 < (ulong)((long)puVar9 - (long)puVar8)) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      lVar15 = 0;
      lVar5 = 0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) goto LAB_0eee0ae8;
      lVar15 = uVar14 << 3;
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar15);
      if (lVar5 == 0) {
        lVar5 = 0;
        FUN_0eec74c0(lVar15,0);
      }
    }
    puStack_50 = (undefined8 *)(lVar5 + lVar12);
    puVar9 = (undefined8 *)(lVar5 + lVar15);
    puVar6 = puStack_50;
    lStack_58 = lVar5;
    puStack_48 = puStack_50;
    puStack_40 = puVar9;
    if (lVar12 == lVar15) {
      if (puVar2 == puVar8) {
        puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_0eec74c0(8,0);
        }
        puVar9 = puVar6 + 1;
        if (lVar5 != 0) {
          FUN_0412a280(lVar5,lVar12);
          puVar13 = *(undefined8 **)(lVar3 + 0x48);
        }
      }
      else {
        puVar6 = (undefined8 *)
                 ((long)puStack_50 +
                 (((lVar12 >> 3) - ((lVar12 >> 3) + 1 >> 0x3f)) + 1U & 0x3ffffffffffffffe) * -4);
      }
    }
    *puVar6 = param_1;
    memcpy(puVar6 + 1,puVar2,(long)puVar13 - (long)puVar2);
    *(undefined8 **)(lVar3 + 0x48) = puVar2;
    lVar12 = (long)puVar2 - *(long *)(lVar3 + 0x40);
    lVar15 = (long)puVar6 - lVar12;
    memcpy(lVar15,*(long *)(lVar3 + 0x40),lVar12);
    lVar12 = *(long *)(lVar3 + 0x40);
    lVar5 = *(long *)(lVar3 + 0x50);
    *(long *)(lVar3 + 0x40) = lVar15;
    *(long *)(lVar3 + 0x48) = (long)puVar6 + ((long)puVar13 - (long)puVar2) + 8;
    *(undefined8 **)(lVar3 + 0x50) = puVar9;
    if (lVar12 != 0) {
      FUN_0412a280(lVar12,lVar5 - lVar12);
    }
code_r0x0412d6b0:
    (*(code *)PTR_pthread_mutex_unlock_0f546448)(lVar3);
    return;
  }
  func_0x0eee2980();
LAB_0eee0ae8:
  uVar7 = FUN_04882eb0();
  func_0x0eee2940(&lStack_58);
  FUN_0412d6b0(lVar3);
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    param_1[2] = lVar3;
    FUN_0412a280(lVar3,param_1[3] - lVar3);
  }
  _Unwind_Resume(uVar7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

## `eee1060`

- instructions: 117
- calls: 4882eb0, eec74c0, eee1ae0, eee2dd0, eee2f00

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0eee1060(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  uVar3 = param_2 - uVar5;
  if (param_2 < uVar5 || uVar3 == 0) {
    if (param_2 < uVar5) {
      uVar3 = *param_1 + param_2 * 8;
      param_1[1] = uVar3;
    }
    return uVar3;
  }
  lVar9 = param_1[1];
  uVar5 = param_1[2] - lVar9 >> 3;
  if (uVar5 < uVar3) {
    lVar1 = *param_1;
    lVar9 = lVar9 - lVar1;
    uVar5 = uVar3 + (lVar9 >> 3);
    if (uVar5 >> 0x3d != 0) {
      func_0x0eee1ae0();
LAB_0eee1c6c:
      FUN_04882eb0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    uVar6 = param_1[2] - lVar1;
    uVar10 = (long)uVar6 >> 2;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) goto LAB_0eee1c6c;
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar4 == 0) {
        lVar4 = 0;
        FUN_0eec74c0(uVar10 * 8,0);
      }
    }
    lVar7 = lVar4 + lVar9;
    memset(lVar7,0,uVar3 * 8);
    lVar8 = lVar7 + (lVar9 >> 3) * -8;
    uVar5 = memcpy(lVar8,lVar1,lVar9);
    *param_1 = lVar8;
    param_1[1] = uVar3 * 8 + lVar7;
    param_1[2] = uVar10 * 8 + lVar4;
    if (lVar1 != 0) {
      if (lVar1 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
      }
      return uVar5;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar5 = memset(lVar9,0,uVar3 * 8);
      lVar9 = lVar9 + uVar3 * 8;
    }
    param_1[1] = lVar9;
  }
  return uVar5;
}


```

## `eee11d0`

- instructions: 90
- calls: 4108328, 410844d, 412d680, eec74c0, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee11d0(uint *param_1)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (DAT_0f7ba228 == '\0') {
    iVar6 = FUN_04108328(&DAT_0f7ba228);
    if (iVar6 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar8 + 0x10;
      _DAT_0f7ba1f8 = puVar8;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      _DAT_0f7ba210 = (long *)0x0;
      _DAT_0f7ba218 = (long *)0x0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      FUN_0410844d(&DAT_0f7ba228);
    }
  }
  uVar2 = *param_1;
  FUN_0412d680(&DAT_0f7ba1d0);
  bVar4 = (byte)uVar2 & 0x3f;
  puVar1 = (ulong *)((long)_DAT_0f7ba1f8 +
                    (ulong)(uVar2 >> 3 & 0x78) + (ulong)(uVar2 >> 3 & 0x1fffff80));
  *puVar1 = *puVar1 & (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
  plVar5 = _DAT_0f7ba218;
  for (plVar7 = _DAT_0f7ba210; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    lVar3 = *(long *)(*plVar7 + 8);
    if ((ulong)uVar2 < (ulong)(*(long *)(*plVar7 + 0x10) - lVar3 >> 3)) {
      *(undefined8 *)(lVar3 + (ulong)uVar2 * 8) = 0;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(&DAT_0f7ba1d0);
  return;
}


```

## `eee1380`

- instructions: 61
- calls: 4108328, 410844d, eec74c0, eee14b0, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0eee1380(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_0f7ba228 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f7ba228);
    if (iVar1 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar2 + 0x10;
      _DAT_0f7ba1f8 = puVar2;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      _DAT_0f7ba210 = 0;
      _DAT_0f7ba218 = 0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      FUN_0410844d(&DAT_0f7ba228);
    }
  }
  puVar2 = (undefined8 *)ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v10(*param_1);
  return *puVar2;
}


```

## `eee14b0` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot10

- instructions: 42
- calls: 412d680, 412d6b0, 417d010, eee07b0, eee1060

```c

long ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v10(uint param_1)

{
  long lVar1;
  long lVar2;
  long *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -8) == '\0') {
    FUN_0eee07b0(lVar1 + -0x28,&DAT_0f7ba230);
    FUN_0417d010(&UNK_0eee0b40,lVar1 + -0x28,0xf53dab8);
    *(undefined1 *)(lVar1 + -8) = 1;
  }
  lVar2 = *(long *)(lVar1 + -0x20);
  if ((ulong)(*(long *)(lVar1 + -0x18) - lVar2 >> 3) <= (ulong)param_1) {
    FUN_0412d680(&DAT_0f7ba1d0);
    FUN_0eee1060((long *)(lVar1 + -0x20),param_1 + 1);
    FUN_0412d6b0(&DAT_0f7ba1d0);
    lVar2 = *(long *)(lVar1 + -0x20);
  }
  return lVar2 + (ulong)param_1 * 8;
}


```

## `eee1580`

- instructions: 62
- calls: 4108328, 410844d, eec74c0, eee14b0, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee1580(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_0f7ba228 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f7ba228);
    if (iVar1 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar2 + 0x10;
      _DAT_0f7ba1f8 = puVar2;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      _DAT_0f7ba210 = 0;
      _DAT_0f7ba218 = 0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      FUN_0410844d(&DAT_0f7ba228);
    }
  }
  puVar2 = (undefined8 *)ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v10(*param_1);
  *puVar2 = param_2;
  return;
}


```

## `eee17a0`

- instructions: 115
- calls: 412e5e0, 48980a0, 489aef0, 489af80, 489af90, eec74c0, eee2d70

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee17a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_RBX;
  undefined8 unaff_R12;
  undefined8 *puVar12;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 uStack_38;
  
  uStack_58 = 0;
  if (param_4 != 0) {
    puStack_60 = param_1;
    if (0x333333333333333 < param_4) {
      uVar11 = FUN_0489af80();
      func_0x0489aef0(&puStack_60);
      uVar11 = _Unwind_Resume(uVar11);
      func_0x048980a0(param_4);
      func_0x0489af90(&puStack_50);
      *(undefined8 *)(unaff_RBX + 8) = unaff_R12;
      func_0x0489aef0(&puStack_60);
      _Unwind_Resume(uVar11);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_4 * 0x50);
    if (puVar9 == (undefined4 *)0x0) {
      FUN_0eec74c0(param_4 * 0x50,0);
    }
    *param_1 = puVar9;
    param_1[1] = puVar9;
    param_1[2] = puVar9 + param_4 * 0x14;
    ppuStack_48 = &puStack_68;
    ppuStack_40 = &puStack_70;
    uStack_38 = 0;
    if (param_2 != param_3) {
      puVar12 = param_2 + 7;
      puStack_68 = puVar9;
      puStack_50 = param_1;
      do {
        uVar2 = *(undefined4 *)(puVar12 + -7);
        uVar3 = *(undefined4 *)((long)puVar12 + -0x34);
        uVar4 = *(undefined4 *)(puVar12 + -6);
        uVar5 = *(undefined4 *)((long)puVar12 + -0x2c);
        uVar6 = *(undefined4 *)((long)puVar12 + -0x24);
        uVar7 = *(undefined4 *)(puVar12 + -4);
        uVar8 = *(undefined4 *)((long)puVar12 + -0x1c);
        puVar9[4] = *(undefined4 *)(puVar12 + -5);
        puVar9[5] = uVar6;
        puVar9[6] = uVar7;
        puVar9[7] = uVar8;
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined1 *)(puVar9 + 0x12) = 0;
        puStack_70 = puVar9;
        if (*(char *)(puVar12 + 2) == '\x01') {
          if ((*(byte *)(puVar12 + -3) & 1) == 0) {
            *(undefined8 *)(puVar9 + 0xc) = puVar12[-1];
            uVar11 = puVar12[-2];
            *(undefined8 *)(puVar9 + 8) = puVar12[-3];
            *(undefined8 *)(puVar9 + 10) = uVar11;
          }
          else {
            FUN_0412e5e0(puVar9 + 8,puVar12[-1],puVar12[-2]);
          }
          *(undefined1 *)(puVar9 + 0x10) = *(undefined1 *)(puVar12 + 1);
          *(undefined8 *)(puVar9 + 0xe) = *puVar12;
          *(undefined1 *)(puVar9 + 0x12) = 1;
        }
        puVar9 = puStack_70 + 0x14;
        puVar10 = puVar12 + 3;
        puVar12 = puVar12 + 10;
      } while (puVar10 != param_3);
    }
    param_1[1] = puVar9;
  }
  return;
}


```

## `eee2d30`

- instructions: 1

```c

void pthread_mutex_lock(void)

{
  (*(code *)PTR_pthread_mutex_lock_0f546430)();
  return;
}


```

## `eee2d40`

- instructions: 1

```c

void syscall(void)

{
  (*(code *)PTR_syscall_0f546438)();
  return;
}


```

## `eee2d50`

- instructions: 1

```c

void pthread_cond_wait(void)

{
  (*(code *)PTR_pthread_cond_wait_0f546440)();
  return;
}


```

## `eee2d60`

- instructions: 1

```c

void pthread_mutex_unlock(void)

{
  (*(code *)PTR_pthread_mutex_unlock_0f546448)();
  return;
}


```

## `eee2d70`

- instructions: 1

```c

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_0f546450)();
  return;
}


```

## `eee2d80`

- instructions: 1

```c

void pthread_cond_broadcast(void)

{
  (*(code *)PTR_pthread_cond_broadcast_0f546458)();
  return;
}


```

## `eee2d90`

- instructions: 1

```c

void fwrite(void)

{
  (*(code *)PTR_fwrite_0f546460)();
  return;
}


```

## `eee2da0`

- instructions: 1

```c

void vfprintf(void)

{
  (*(code *)PTR_vfprintf_0f546468)();
  return;
}


```

## `eee2db0`

- instructions: 1

```c

void fputc(void)

{
  (*(code *)PTR_fputc_0f546470)();
  return;
}


```

## `eee2dc0`

- instructions: 1

```c

void abort(void)

{
  (*(code *)PTR_abort_0f546478)();
  return;
}


```

## `eee2dd0`

- instructions: 1

```c

void memset(void)

{
  (*(code *)PTR_memset_0f546480)();
  return;
}


```

## `eee2de0`

- instructions: 1

```c

void _Unwind_RaiseException(void)

{
  (*(code *)PTR__Unwind_RaiseException_0f546488)();
  return;
}


```

## `eee2df0`

- instructions: 1

```c

void _Unwind_DeleteException(void)

{
  (*(code *)PTR__Unwind_DeleteException_0f546490)();
  return;
}


```

## `eee2e00`

- instructions: 1

```c

void aligned_alloc(void)

{
  (*(code *)PTR_aligned_alloc_0f546498)();
  return;
}


```

## `eee2e20`

- instructions: 1

```c

void free(void)

{
  (*(code *)PTR_free_0f5464a8)();
  return;
}


```

## `eee2e90`

- instructions: 1

```c

void strlen(void)

{
  (*(code *)PTR_strlen_0f5464e0)();
  return;
}


```

## `eee2ee0` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot14

- instructions: 1

```c

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(void)

{
  (*(code *)PTR_memmove_0f546508)();
  return;
}


```

## `eee2ef0`

- instructions: 1

```c

void memchr(void)

{
  (*(code *)PTR_memchr_0f546510)();
  return;
}


```

## `eee2f00`

- instructions: 1

```c

void memcpy(void)

{
  (*(code *)PTR_memcpy_0f546518)();
  return;
}


```

## `eee2f10`

- instructions: 1

```c

void snprintf(void)

{
  (*(code *)PTR_snprintf_0f546520)();
  return;
}


```

## `eee2f40`

- instructions: 1

```c

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0f546538)();
  return;
}


```

## `eee2f60`

- instructions: 1

```c

void pthread_mutex_trylock(void)

{
  (*(code *)PTR_pthread_mutex_trylock_0f546548)();
  return;
}


```

## `eee2fb0`

- instructions: 1

```c

void pthread_mutex_destroy(void)

{
  (*(code *)PTR_pthread_mutex_destroy_0f546570)();
  return;
}


```

## `eee2fc0`

- instructions: 1

```c

void pthread_self(void)

{
  (*(code *)PTR_pthread_self_0f546578)();
  return;
}


```

## `eee2fd0`

- instructions: 1

```c

void __errno_location(void)

{
  (*(code *)PTR___errno_location_0f546580)();
  return;
}


```

## `eee2ff0`

- instructions: 1

```c

void memcmp(void)

{
  (*(code *)PTR_memcmp_0f546590)();
  return;
}


```

## `eee3000`

- instructions: 1

```c

void bcmp(void)

{
  (*(code *)PTR_bcmp_0f546598)();
  return;
}


```

## `eee3290`

- instructions: 1

```c

void __ctype_tolower_loc(void)

{
  (*(code *)PTR___ctype_tolower_loc_0f5466e0)();
  return;
}


```

## `eee3540`

- instructions: 1

```c

void vsnprintf(void)

{
  (*(code *)PTR_vsnprintf_0f546838)();
  return;
}


```

## `eee35c0`

- instructions: 1

```c

void clock_gettime(void)

{
  (*(code *)PTR_clock_gettime_0f546878)();
  return;
}


```

## `eee35d0`

- instructions: 1

```c

void sched_yield(void)

{
  (*(code *)PTR_sched_yield_0f546880)();
  return;
}


```

## `eee3790` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot10

- instructions: 1

```c

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v10(void)

{
  (*(code *)PTR_time_0f546960)();
  return;
}


```

## `eee37c0`

- instructions: 1

```c

void log(void)

{
  (*(code *)PTR_log_0f546978)();
  return;
}


```

## `eee37d0`

- instructions: 1

```c

void powf(void)

{
  (*(code *)PTR_powf_0f546980)();
  return;
}


```

## `eee37e0`

- instructions: 1

```c

void fmodf(void)

{
  (*(code *)PTR_fmodf_0f546988)();
  return;
}


```

## `eee37f0`

- instructions: 1

```c

void sqrtf(void)

{
  (*(code *)PTR_sqrtf_0f546990)();
  return;
}


```

## `eee3800`

- instructions: 1

```c

void sqrt(void)

{
  (*(code *)PTR_sqrt_0f546998)();
  return;
}


```

## `eee3810`

- instructions: 1

```c

void cosf(void)

{
  (*(code *)PTR_cosf_0f5469a0)();
  return;
}


```

## `eee3820`

- instructions: 1

```c

void _ZTHN11ChunkSource17gPerfIsClientSideE(void)

{
  (*(code *)PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f5469a8)();
  return;
}


```

## `eee3830`

- instructions: 1

```c

void sinf(void)

{
  (*(code *)PTR_sinf_0f5469b0)();
  return;
}


```

## `eee3840`

- instructions: 1

```c

void logf(void)

{
  (*(code *)PTR_logf_0f5469b8)();
  return;
}


```

## `eee3a30`

- instructions: 1

```c

void ldexp(void)

{
  (*(code *)PTR_ldexp_0f546ab0)();
  return;
}


```

## `eee3ab0`

- instructions: 1

```c

void ceilf(void)

{
  (*(code *)PTR_ceilf_0f546af0)();
  return;
}


```

## `eee3b20`

- instructions: 1

```c

void roundf(void)

{
  (*(code *)PTR_roundf_0f546b28)();
  return;
}


```

## `eee4390`

- instructions: 1

```c

void floorf(void)

{
  (*(code *)PTR_floorf_0f546f60)();
  return;
}


```

## `eee43a0`

- instructions: 1

```c

void nearbyintf(void)

{
  (*(code *)PTR_nearbyintf_0f546f68)();
  return;
}


```

