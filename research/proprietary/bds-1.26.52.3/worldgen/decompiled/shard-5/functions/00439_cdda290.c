/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xceda290 (ELF vaddr 0xcdda290)
 * Label: caller-of-callee
 * Body:  [[0ceda290, 0ceda2c7] [0cedaca3, 0cedaca9] [0cedb3e9, 0cedb3fa]]
 * Ghidra: FUN_0ceda290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0ceda290(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long **pplVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  byte *pbVar21;
  long lVar22;
  long *unaff_R13;
  long lVar23;
  long **unaff_R14;
  undefined8 *puVar24;
  long *plVar25;
  ulong uVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  long **pplStack_90;
  undefined1 uStack_71;
  long *plStack_70;
  long **pplStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long **pplStack_48;
  long **pplStack_40;
  ulong uStack_38;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (undefined8 *)*param_2;
  }
  switch(param_1) {
  case 0:
    param_3 = (undefined8 *)0xf70a870;
    if ((cRam000000000f70a888 == '\0') && (iVar9 = func_0x04108328(0xf70a888), iVar9 != 0)) {
      func_0x0cedb540();
      FUN_0410844d(0xf70a888);
    }
    break;
  case 1:
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
    func_0x0cedb5c0(param_2 + 2,param_3 + 2);
    if (param_2[8] != 0) {
      puVar17 = (undefined8 *)param_2[7];
      while (puVar17 != (undefined8 *)0x0) {
        puVar24 = (undefined8 *)*puVar17;
        if ((*(byte *)(puVar17 + 2) & 1) != 0) {
          func_0x0412a280(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar17,0x30);
        puVar17 = puVar24;
      }
      param_2[7] = 0;
      if (param_2[6] != 0) {
        func_0x0eee2dd0(param_2[5],0,param_2[6] << 3);
      }
      param_2[8] = 0;
    }
    uVar16 = param_3[5];
    param_3[5] = 0;
    lVar15 = param_2[5];
    param_2[5] = uVar16;
    if (lVar15 != 0) {
      func_0x0412a280(lVar15,param_2[6] << 3);
    }
    param_2[6] = param_3[6];
    param_3[6] = 0;
    lVar15 = param_3[8];
    param_2[8] = lVar15;
    *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_3 + 9);
    lVar23 = param_3[7];
    param_2[7] = lVar23;
    if (lVar15 != 0) {
      uVar19 = *(ulong *)(lVar23 + 8);
      uVar26 = param_2[6];
      if ((uVar26 & uVar26 - 1) == 0) {
        uVar19 = uVar19 & uVar26 - 1;
      }
      else if (uVar26 <= uVar19) {
        if ((uVar19 | uVar26) >> 0x20 == 0) {
          uVar19 = (uVar19 & 0xffffffff) % (uVar26 & 0xffffffff);
        }
        else {
          uVar19 = uVar19 % uVar26;
        }
      }
      *(undefined8 **)(param_2[5] + uVar19 * 8) = param_2 + 7;
      param_3[7] = 0;
      param_3[8] = 0;
    }
    *(undefined1 *)((long)param_2 + 0x52) = *(undefined1 *)((long)param_3 + 0x52);
    *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_3 + 10);
    break;
  case 2:
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
    if (param_2 == param_3) goto code_r0x0cedb2c2;
    puVar24 = param_2 + 2;
    plVar10 = (long *)param_3[2];
    plVar20 = (long *)param_3[3];
    uVar26 = (long)plVar20 - (long)plVar10;
    plVar11 = (long *)param_2[2];
    lVar15 = param_2[4];
    uVar19 = lVar15 - (long)plVar11;
    if (uVar19 < uVar26) {
      puStack_58 = param_3;
      if (plVar11 != (long *)0x0) {
        unaff_R13 = (long *)param_2[3];
        plVar12 = plVar11;
        if (plVar11 != unaff_R13) {
          unaff_R14 = &plStack_70;
          plStack_50 = plVar20;
          do {
            if ((ulong)*(uint *)(unaff_R13 + -1) != 0xffffffff) {
              (**(code **)(&UNK_0f408700 + (ulong)*(uint *)(unaff_R13 + -1) * 8))
                        (unaff_R14,unaff_R13 + -7);
            }
            *(undefined4 *)(unaff_R13 + -1) = 0xffffffff;
            if ((*(byte *)(unaff_R13 + -0xc) & 1) != 0) {
              func_0x0412a280(unaff_R13[-10],unaff_R13[-0xc] & 0xfffffffffffffffe);
            }
            unaff_R13 = unaff_R13 + -0xd;
          } while (unaff_R13 != plVar11);
          plVar12 = (long *)param_2[2];
          uVar19 = param_2[4] - (long)plVar12;
          plVar20 = plStack_50;
        }
        param_2[3] = plVar11;
        func_0x0412a280(plVar12,uVar19);
        *puVar24 = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        lVar15 = 0;
      }
      param_3 = puStack_58;
      puVar17 = (undefined8 *)(((long)uVar26 >> 3) * 0x4ec4ec4ec4ec4ec5);
      if ((undefined8 *)0x276276276276276 < puVar17) {
code_r0x0cedb42f:
        uVar16 = func_0x0cc91250();
        puVar17[3] = unaff_R13;
        uVar16 = func_0x0eee2d70(uVar16);
        puVar17[3] = unaff_R14;
        uVar16 = func_0x0eee2d70(uVar16);
        unaff_R14[3] = unaff_R13;
        func_0x0cedc390(pplStack_48,0);
        func_0x0412a280(pplStack_90,0x58);
        uVar16 = func_0x0eee2d70(uVar16);
        func_0x04882e20(uVar16);
        pcVar5 = (code *)swi(3);
        puVar17 = (undefined8 *)(*pcVar5)();
        return puVar17;
      }
      puVar4 = (undefined8 *)((lVar15 >> 3) * -0x6276276276276276);
      if (puVar17 < puVar4) {
        puVar17 = puVar4;
      }
      if (0x13b13b13b13b13a < (ulong)((lVar15 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        puVar17 = (undefined8 *)0x276276276276276;
      }
      if ((undefined8 *)0x276276276276276 < puVar17) goto code_r0x0cedb42f;
      lVar23 = (long)puVar17 * 0x68;
      lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar23);
      if (lVar15 == 0) {
        func_0x0eec74c0(lVar23,0);
      }
      param_2[2] = lVar15;
      param_2[3] = lVar15;
      param_2[4] = lVar15 + lVar23;
      uVar16 = func_0x0cedb6b0(puVar24,plVar10,plVar20,lVar15);
      param_2[3] = uVar16;
    }
    else {
      plVar12 = (long *)param_2[3];
      if ((ulong)((long)plVar12 - (long)plVar11) < uVar26) {
        lVar15 = ((long)plVar12 - (long)plVar11) + (long)plVar10;
        puStack_58 = param_3;
        if (plVar12 != plVar11) {
          lVar23 = 0;
          do {
            if (plVar10 != plVar11) {
              pbVar14 = (byte *)((long)plVar10 + lVar23 + 8);
              pbVar21 = (byte *)((long)plVar11 + lVar23 + 8);
              bVar2 = *pbVar14;
              if ((*pbVar21 & 1) == 0) {
                if ((bVar2 & 1) == 0) {
                  *(undefined8 *)((long)plVar11 + lVar23 + 0x18) =
                       *(undefined8 *)((long)plVar10 + lVar23 + 0x18);
                  uVar6 = *(undefined4 *)((long)plVar10 + lVar23 + 0xc);
                  uVar7 = *(undefined4 *)((long)plVar10 + lVar23 + 0x10);
                  uVar8 = *(undefined4 *)((long)plVar10 + lVar23 + 0x14);
                  *(undefined4 *)pbVar21 = *(undefined4 *)pbVar14;
                  *(undefined4 *)((long)plVar11 + lVar23 + 0xc) = uVar6;
                  *(undefined4 *)((long)plVar11 + lVar23 + 0x10) = uVar7;
                  *(undefined4 *)((long)plVar11 + lVar23 + 0x14) = uVar8;
                }
                else {
                  func_0x04885070(pbVar21,*(undefined8 *)((long)plVar10 + lVar23 + 0x18),
                                  *(undefined8 *)((long)plVar10 + lVar23 + 0x10));
                }
              }
              else {
                bVar27 = (bVar2 & 1) != 0;
                lVar22 = (long)plVar10 + lVar23 + 9;
                if (bVar27) {
                  lVar22 = *(long *)((long)plVar10 + lVar23 + 0x18);
                }
                uVar19 = (ulong)(bVar2 >> 1);
                if (bVar27) {
                  uVar19 = *(ulong *)((long)plVar10 + lVar23 + 0x10);
                }
                func_0x04885120(pbVar21,lVar22,uVar19);
              }
            }
            *(undefined8 *)((long)plVar11 + lVar23) = *(undefined8 *)((long)plVar10 + lVar23);
            *(undefined8 *)((long)plVar11 + lVar23 + 0x20) = 0;
            plVar12 = (long *)((long)plVar11 + lVar23 + 0x30);
            uVar19 = (ulong)*(uint *)((long)plVar11 + lVar23 + 0x60);
            uVar3 = *(uint *)((long)plVar10 + lVar23 + 0x60);
            if (uVar19 == 0xffffffff) {
              if (uVar3 != 0xffffffff) goto code_r0x0cedacd9;
            }
            else if (uVar3 == 0xffffffff) {
              (**(code **)(&UNK_0f408700 + uVar19 * 8))(&plStack_70);
              *(undefined4 *)((long)plVar11 + lVar23 + 0x60) = 0xffffffff;
            }
            else {
code_r0x0cedacd9:
              plStack_70 = plVar12;
              (**(code **)(&UNK_0f40c060 + (ulong)uVar3 * 8))
                        (&plStack_70,plVar12,(long)plVar10 + lVar23 + 0x30);
            }
            lVar22 = lVar23 + 0x68;
            lVar23 = lVar23 + 0x68;
          } while ((long)plVar10 + lVar22 != lVar15);
          plVar12 = (long *)param_2[3];
        }
        uVar16 = func_0x0cedb6b0(puVar24,lVar15,plVar20,plVar12);
        param_2[3] = uVar16;
        param_3 = puStack_58;
      }
      else {
        puStack_58 = param_3;
        if (plVar10 != plVar20) {
          lVar15 = 0;
          do {
            if (plVar10 != plVar11) {
              pbVar14 = (byte *)((long)plVar10 + lVar15 + 8);
              pbVar21 = (byte *)((long)plVar11 + lVar15 + 8);
              bVar2 = *pbVar14;
              if ((*pbVar21 & 1) == 0) {
                if ((bVar2 & 1) == 0) {
                  *(undefined8 *)((long)plVar11 + lVar15 + 0x18) =
                       *(undefined8 *)((long)plVar10 + lVar15 + 0x18);
                  uVar6 = *(undefined4 *)((long)plVar10 + lVar15 + 0xc);
                  uVar7 = *(undefined4 *)((long)plVar10 + lVar15 + 0x10);
                  uVar8 = *(undefined4 *)((long)plVar10 + lVar15 + 0x14);
                  *(undefined4 *)pbVar21 = *(undefined4 *)pbVar14;
                  *(undefined4 *)((long)plVar11 + lVar15 + 0xc) = uVar6;
                  *(undefined4 *)((long)plVar11 + lVar15 + 0x10) = uVar7;
                  *(undefined4 *)((long)plVar11 + lVar15 + 0x14) = uVar8;
                }
                else {
                  func_0x04885070(pbVar21,*(undefined8 *)((long)plVar10 + lVar15 + 0x18),
                                  *(undefined8 *)((long)plVar10 + lVar15 + 0x10));
                }
              }
              else {
                bVar27 = (bVar2 & 1) != 0;
                lVar23 = (long)plVar10 + lVar15 + 9;
                if (bVar27) {
                  lVar23 = *(long *)((long)plVar10 + lVar15 + 0x18);
                }
                uVar19 = (ulong)(bVar2 >> 1);
                if (bVar27) {
                  uVar19 = *(ulong *)((long)plVar10 + lVar15 + 0x10);
                }
                func_0x04885120(pbVar21,lVar23,uVar19);
              }
            }
            *(undefined8 *)((long)plVar11 + lVar15) = *(undefined8 *)((long)plVar10 + lVar15);
            *(undefined8 *)((long)plVar11 + lVar15 + 0x20) = 0;
            plVar12 = (long *)((long)plVar11 + lVar15 + 0x30);
            uVar19 = (ulong)*(uint *)((long)plVar11 + lVar15 + 0x60);
            uVar3 = *(uint *)((long)plVar10 + lVar15 + 0x60);
            if (uVar19 == 0xffffffff) {
              if (uVar3 != 0xffffffff) goto code_r0x0cedae49;
            }
            else if (uVar3 == 0xffffffff) {
              (**(code **)(&UNK_0f408700 + uVar19 * 8))(&plStack_70);
              *(undefined4 *)((long)plVar11 + lVar15 + 0x60) = 0xffffffff;
            }
            else {
code_r0x0cedae49:
              plStack_70 = plVar12;
              (**(code **)(&UNK_0f40c060 + (ulong)uVar3 * 8))
                        (&plStack_70,plVar12,(long)plVar10 + lVar15 + 0x30);
            }
            lVar22 = lVar15 + 0x68;
            lVar23 = lVar15 + 0x68;
            lVar15 = lVar22;
          } while ((long *)((long)plVar10 + lVar23) != plVar20);
          plVar12 = (long *)param_2[3];
          plVar11 = (long *)((long)plVar11 + lVar22);
        }
        if (plVar11 != plVar12) {
          do {
            if ((ulong)*(uint *)(plVar12 + -1) != 0xffffffff) {
              (**(code **)(&UNK_0f408700 + (ulong)*(uint *)(plVar12 + -1) * 8))
                        (&plStack_70,plVar12 + -7);
            }
            *(undefined4 *)(plVar12 + -1) = 0xffffffff;
            if ((*(byte *)(plVar12 + -0xc) & 1) != 0) {
              func_0x0412a280(plVar12[-10],plVar12[-0xc] & 0xfffffffffffffffe);
            }
            plVar12 = plVar12 + -0xd;
          } while (plVar12 != plVar11);
        }
        param_2[3] = plVar11;
        param_3 = puStack_58;
      }
    }
    pplVar1 = (long **)(param_2 + 5);
    *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_3 + 9);
    puVar17 = (undefined8 *)param_3[7];
    if (param_2[6] != 0) {
      func_0x0eee2dd0(param_2[5],0,param_2[6] << 3);
      puVar24 = (undefined8 *)param_2[7];
      param_2[7] = 0;
      param_2[8] = 0;
      while (puVar24 != (undefined8 *)0x0) {
        if (puVar17 == (undefined8 *)0x0) goto code_r0x0cedb2a5;
        if (puVar24 != puVar17) {
          pbVar14 = (byte *)(puVar24 + 2);
          bVar2 = *(byte *)(puVar17 + 2);
          if ((*pbVar14 & 1) == 0) {
            if ((bVar2 & 1) == 0) {
              puVar24[4] = puVar17[4];
              uVar6 = *(undefined4 *)((long)puVar17 + 0x14);
              uVar7 = *(undefined4 *)(puVar17 + 3);
              uVar8 = *(undefined4 *)((long)puVar17 + 0x1c);
              *(undefined4 *)pbVar14 = *(undefined4 *)(puVar17 + 2);
              *(undefined4 *)((long)puVar24 + 0x14) = uVar6;
              *(undefined4 *)(puVar24 + 3) = uVar7;
              *(undefined4 *)((long)puVar24 + 0x1c) = uVar8;
            }
            else {
              func_0x04885070(pbVar14,puVar17[4],puVar17[3]);
            }
          }
          else {
            bVar27 = (bVar2 & 1) != 0;
            lVar15 = (long)puVar17 + 0x11;
            if (bVar27) {
              lVar15 = puVar17[4];
            }
            uVar19 = (ulong)(bVar2 >> 1);
            if (bVar27) {
              uVar19 = puVar17[3];
            }
            func_0x04885120(pbVar14,lVar15,uVar19);
          }
        }
        *(undefined2 *)(puVar24 + 5) = *(undefined2 *)(puVar17 + 5);
        puVar4 = (undefined8 *)*puVar24;
        func_0x0cedb9f0(pplVar1,puVar24);
        puVar17 = (undefined8 *)*puVar17;
        puVar24 = puVar4;
      }
    }
    if (puVar17 != (undefined8 *)0x0) {
      do {
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar10 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uStack_60 = 0;
        *plVar10 = 0;
        plVar10[1] = 0;
        plStack_70 = plVar10;
        pplStack_68 = pplVar1;
        if ((*(byte *)(puVar17 + 2) & 1) == 0) {
          plVar10[4] = puVar17[4];
          uVar6 = *(undefined4 *)((long)puVar17 + 0x14);
          uVar7 = *(undefined4 *)(puVar17 + 3);
          uVar8 = *(undefined4 *)((long)puVar17 + 0x1c);
          *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(puVar17 + 2);
          *(undefined4 *)((long)plVar10 + 0x14) = uVar6;
          *(undefined4 *)(plVar10 + 3) = uVar7;
          *(undefined4 *)((long)plVar10 + 0x1c) = uVar8;
        }
        else {
          func_0x0412e5e0(plVar10 + 2,puVar17[4],puVar17[3]);
        }
        *(undefined2 *)(plVar10 + 5) = *(undefined2 *)(puVar17 + 5);
        uStack_60 = CONCAT71(uStack_60._1_7_,1);
        bVar27 = (*(byte *)(plVar10 + 2) & 1) != 0;
        lVar15 = (long)plVar10 + 0x11;
        if (bVar27) {
          lVar15 = plVar10[4];
        }
        uVar19 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
        if (bVar27) {
          uVar19 = plVar10[3];
        }
        lVar15 = func_0x04883620(&uStack_71,lVar15,uVar19);
        plVar10[1] = lVar15;
        func_0x0cedb9f0(pplVar1,plVar10);
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
    }
    goto code_r0x0cedb2c2;
  case 3:
    if (param_2 != param_3) {
      param_3 = (undefined8 *)0x0;
    }
    break;
  case 4:
    param_3[2] = FUN_0ceda290;
    *(undefined4 *)(param_3 + 4) = 0xcce250ba;
    param_3[3] = &UNK_0cedb520;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    unaff_R14 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
    if (unaff_R14 == (long **)0x0) {
      func_0x0eec74c0(0x58,0);
    }
    *(undefined1 *)(unaff_R14 + 1) = *(undefined1 *)(param_2 + 1);
    *unaff_R14 = (long *)&UNK_0f40ddf0;
    pplStack_48 = unaff_R14 + 2;
    unaff_R14[2] = (long *)0x0;
    unaff_R14[3] = (long *)0x0;
    unaff_R14[4] = (long *)0x0;
    lVar15 = param_2[2];
    lVar23 = param_2[3];
    lVar22 = lVar23 - lVar15;
    if (lVar22 != 0) {
      if (0x276276276276276 < (ulong)((lVar22 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        func_0x0cc91250();
        puVar17 = param_2;
        pplStack_90 = unaff_R14;
        goto code_r0x0cedb42f;
      }
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar22,0);
      }
      unaff_R14[2] = plVar10;
      unaff_R14[3] = plVar10;
      unaff_R14[4] = (long *)(lVar22 + (long)plVar10);
      plVar10 = (long *)func_0x0cedb6b0(pplStack_48,lVar15,lVar23,plVar10);
      unaff_R14[3] = plVar10;
    }
    pplVar1 = unaff_R14 + 5;
    unaff_R14[7] = (long *)0x0;
    unaff_R14[8] = (long *)0x0;
    unaff_R14[5] = (long *)0x0;
    unaff_R14[6] = (long *)0x0;
    *(undefined4 *)(unaff_R14 + 9) = *(undefined4 *)(param_2 + 9);
    plVar10 = (long *)param_2[6];
    plVar20 = (long *)0x2;
    if (plVar10 == (long *)0x1) {
code_r0x0ceda453:
      func_0x0cedc440(pplVar1,plVar20);
    }
    else {
      if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
        plVar10 = (long *)func_0x0412c3f0(plVar10,2);
        plVar11 = unaff_R14[6];
        bVar27 = plVar10 < plVar11;
        plVar20 = plVar10;
        if (plVar10 <= plVar11) goto code_r0x0cedae06;
        goto code_r0x0ceda453;
      }
      plVar11 = (long *)0x0;
      bVar27 = false;
      plVar20 = plVar10;
      if (plVar10 != (long *)0x0) goto code_r0x0ceda453;
code_r0x0cedae06:
      if (bVar27) {
        fVar28 = (float)func_0x0eee3ab0((float)unaff_R14[8] / *(float *)(unaff_R14 + 9));
        plVar20 = (long *)((long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f | (long)fVar28);
        if ((plVar11 < (long *)0x3) ||
           (uVar19 = (long)plVar11 - ((ulong)plVar11 >> 1 & 0x5555555555555555),
           uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
           1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar20 = (long *)func_0x0412c3f0(plVar20);
        }
        else if ((long *)0x1 < plVar20) {
          lVar15 = 0x3f;
          if ((long)plVar20 - 1U != 0) {
            for (; (long)plVar20 - 1U >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          plVar20 = (long *)(1L << (-((byte)lVar15 ^ 0x3f) & 0x3f));
        }
        if (plVar20 < plVar10) {
          plVar20 = plVar10;
        }
        if (plVar20 < plVar11) goto code_r0x0ceda453;
      }
    }
    plVar10 = (long *)param_2[7];
    puStack_58 = param_3;
    if (plVar10 != (long *)0x0) {
      pplStack_40 = unaff_R14 + 7;
code_r0x0ceda4a2:
      do {
        lVar15 = (long)plVar10 + 0x11;
        bVar27 = (*(byte *)(plVar10 + 2) & 1) == 0;
        lVar23 = plVar10[4];
        if (bVar27) {
          lVar23 = lVar15;
        }
        uVar19 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
        if (!bVar27) {
          uVar19 = plVar10[3];
        }
        plVar11 = (long *)func_0x04883620(&plStack_70,lVar23,uVar19);
        plVar20 = unaff_R14[6];
        if (plVar20 != (long *)0x0) {
          uVar19 = (long)plVar20 - ((ulong)plVar20 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
          uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar19 >> 0x38 < 2) {
            plVar12 = (long *)((long)plVar20 - 1U & (ulong)plVar11);
          }
          else {
            plVar12 = plVar11;
            if (plVar20 <= plVar11) {
              if (((ulong)plVar11 | (ulong)plVar20) >> 0x20 == 0) {
                plVar12 = (long *)(((ulong)plVar11 & 0xffffffff) % ((ulong)plVar20 & 0xffffffff));
              }
              else {
                plVar12 = (long *)((ulong)plVar11 % (ulong)plVar20);
              }
            }
          }
          plStack_50 = plVar12;
          if (((long *)(*pplVar1)[(long)plVar12] != (long *)0x0) &&
             (plVar25 = *(long **)(*pplVar1)[(long)plVar12], plVar25 != (long *)0x0)) {
            if ((*(byte *)(plVar10 + 2) & 1) == 0) {
              uVar26 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
            }
            else {
              uVar26 = plVar10[3];
              lVar15 = plVar10[4];
            }
            if ((byte)(uVar19 >> 0x38) < 2) {
              uVar19 = (long)plVar20 - 1;
              uStack_38 = uVar19;
              do {
                if ((long *)plVar25[1] == plVar11) {
                  bVar2 = *(byte *)(plVar25 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar18 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar18 = plVar25[3];
                  }
                  if (uVar18 == uVar26) {
                    if ((bVar2 & 1) == 0) {
                      lVar23 = (long)plVar25 + 0x11;
                    }
                    else {
                      lVar23 = plVar25[4];
                    }
                    iVar9 = func_0x0eee3000(lVar23,lVar15,uVar26);
                    uVar19 = uStack_38;
                    plVar12 = plStack_50;
                    if (iVar9 == 0) goto code_r0x0ceda490;
                  }
                }
                else if ((long *)((ulong)plVar25[1] & uVar19) != plVar12) break;
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
            else {
              do {
                plVar13 = (long *)plVar25[1];
                if (plVar13 == plVar11) {
                  bVar2 = *(byte *)(plVar25 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar19 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar19 = plVar25[3];
                  }
                  if (uVar19 == uVar26) {
                    if ((bVar2 & 1) == 0) {
                      lVar23 = (long)plVar25 + 0x11;
                    }
                    else {
                      lVar23 = plVar25[4];
                    }
                    iVar9 = func_0x0eee3000(lVar23,lVar15,uVar26);
                    plVar12 = plStack_50;
                    if (iVar9 == 0) goto code_r0x0ceda490;
                  }
                }
                else {
                  if (plVar20 <= plVar13) {
                    if (((ulong)plVar13 | (ulong)plVar20) >> 0x20 == 0) {
                      plVar13 = (long *)(((ulong)plVar13 & 0xffffffff) %
                                        ((ulong)plVar20 & 0xffffffff));
                    }
                    else {
                      plVar13 = (long *)((ulong)plVar13 % (ulong)plVar20);
                    }
                  }
                  if (plVar13 != plVar12) break;
                }
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
          }
        }
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uStack_60 = 0;
        *plVar12 = 0;
        plVar12[1] = (long)plVar11;
        plStack_70 = plVar12;
        pplStack_68 = pplVar1;
        if ((*(byte *)(plVar10 + 2) & 1) == 0) {
          plVar12[4] = plVar10[4];
          lVar15 = plVar10[3];
          plVar12[2] = plVar10[2];
          plVar12[3] = lVar15;
        }
        else {
          func_0x0412e5e0(plVar12 + 2,plVar10[4],plVar10[3]);
        }
        *(short *)(plVar12 + 5) = (short)plVar10[5];
        uStack_60 = CONCAT71(uStack_60._1_7_,1);
        if ((long)plVar20 < 0) {
          fVar29 = (float)plVar20;
          fVar28 = *(float *)(unaff_R14 + 9);
          if (plVar20 != (long *)0x0) goto code_r0x0ceda7e1;
code_r0x0ceda800:
          uVar19 = 1;
          if ((long *)0x2 < plVar20) {
            uVar19 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
          }
          plVar25 = (long *)((long)plVar20 * 2 | uVar19);
          fVar28 = (float)func_0x0eee3ab0((float)((long)unaff_R14[8] + 1) / fVar28);
          plVar20 = (long *)((long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f | (long)fVar28);
          if (plVar20 < plVar25) {
            plVar20 = plVar25;
          }
          plVar25 = (long *)0x2;
          if ((plVar20 == (long *)0x1) ||
             (plVar25 = plVar20, ((ulong)plVar20 & (long)plVar20 - 1U) == 0)) {
            plVar20 = unaff_R14[6];
            bVar27 = plVar25 < plVar20;
            if (plVar25 <= plVar20) goto code_r0x0ceda894;
code_r0x0ceda86c:
            func_0x0cedc440(pplVar1,plVar25);
          }
          else {
            plVar25 = (long *)func_0x0412c3f0();
            plVar20 = unaff_R14[6];
            bVar27 = plVar25 < plVar20;
            if (plVar20 < plVar25) goto code_r0x0ceda86c;
code_r0x0ceda894:
            if (bVar27) {
              fVar28 = (float)func_0x0eee3ab0((float)unaff_R14[8] / *(float *)(unaff_R14 + 9));
              plVar13 = (long *)((long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f |
                                (long)fVar28);
              if ((plVar20 < (long *)0x3) ||
                 (uVar19 = (long)plVar20 - ((ulong)plVar20 >> 1 & 0x5555555555555555),
                 uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
                 1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                plVar13 = (long *)func_0x0412c3f0(plVar13);
              }
              else if ((long *)0x1 < plVar13) {
                lVar15 = 0x3f;
                if ((long)plVar13 - 1U != 0) {
                  for (; (long)plVar13 - 1U >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                plVar13 = (long *)(1L << (-((byte)lVar15 ^ 0x3f) & 0x3f));
              }
              if (plVar25 <= plVar13) {
                plVar25 = plVar13;
              }
              if (plVar25 < plVar20) goto code_r0x0ceda86c;
            }
          }
          plVar20 = unaff_R14[6];
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            plVar25 = (long *)((ulong)plVar11 & (long)plVar20 - 1U);
          }
          else {
            plVar25 = plVar11;
            if (plVar20 <= plVar11) {
              if (((ulong)plVar11 | (ulong)plVar20) >> 0x20 == 0) {
                plVar25 = (long *)(((ulong)plVar11 & 0xffffffff) % ((ulong)plVar20 & 0xffffffff));
              }
              else {
                plVar25 = (long *)((ulong)plVar11 % (ulong)plVar20);
              }
            }
          }
        }
        else {
          fVar29 = (float)(long)plVar20;
          fVar28 = *(float *)(unaff_R14 + 9);
          if (plVar20 == (long *)0x0) goto code_r0x0ceda800;
code_r0x0ceda7e1:
          plVar25 = plStack_50;
          if (fVar29 * fVar28 < (float)((long)unaff_R14[8] + 1)) goto code_r0x0ceda800;
        }
        plVar11 = *pplVar1;
        plVar13 = (long *)plVar11[(long)plVar25];
        if (plVar13 == (long *)0x0) {
          *plVar12 = (long)*pplStack_40;
          *pplStack_40 = plVar12;
          plVar11[(long)plVar25] = (long)pplStack_40;
          if (*plVar12 != 0) {
            plVar25 = *(long **)(*plVar12 + 8);
            if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
              plVar11[(ulong)plVar25 & (long)plVar20 - 1U] = (long)plVar12;
            }
            else {
              if (plVar20 <= plVar25) {
                if (((ulong)plVar25 | (ulong)plVar20) >> 0x20 == 0) {
                  plVar11[((ulong)plVar25 & 0xffffffff) % ((ulong)plVar20 & 0xffffffff)] =
                       (long)plVar12;
                  goto code_r0x0cedaa0b;
                }
                plVar25 = (long *)((ulong)plVar25 % (ulong)plVar20);
              }
              plVar11[(long)plVar25] = (long)plVar12;
            }
          }
        }
        else {
          *plVar12 = *plVar13;
          *plVar13 = (long)plVar12;
        }
code_r0x0cedaa0b:
        unaff_R14[8] = (long *)((long)unaff_R14[8] + 1);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
code_r0x0cedac85:
    *(undefined1 *)((long)unaff_R14 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
    *(undefined2 *)(unaff_R14 + 10) = *(undefined2 *)(param_2 + 10);
    *puStack_58 = unaff_R14;
  default:
    param_3 = (undefined8 *)0x0;
  }
  return param_3;
code_r0x0ceda490:
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) goto code_r0x0cedac85;
  goto code_r0x0ceda4a2;
code_r0x0cedb2a5:
  do {
    puVar17 = (undefined8 *)*puVar24;
    if ((*(byte *)(puVar24 + 2) & 1) != 0) {
      func_0x0412a280(puVar24[4],puVar24[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar24,0x30);
    puVar24 = puVar17;
  } while (puVar17 != (undefined8 *)0x0);
code_r0x0cedb2c2:
  *(undefined1 *)((long)param_2 + 0x52) = *(undefined1 *)((long)param_3 + 0x52);
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_3 + 10);
  return param_3;
}


