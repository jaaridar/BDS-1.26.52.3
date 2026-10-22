/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb05abc0 (ELF vaddr 0xaf5abc0)
 * Label: caller-of-callee
 * Body:  [[0b05abc0, 0b05ae3c] [0b05ae4d, 0b05af53] [0b05b05c, 0b05b16c] [0b05b174, 0b05b2d3] [0b05b2e0, 0b05b3c1] [0b05b3d0, 0b05b46a] [0b05b531, 0b05b596]]
 * Ghidra: FUN_0b05abc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0b05abc0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong unaff_RBP;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  byte *pbVar19;
  bool bVar20;
  byte *pbStack_150;
  byte *pbStack_148;
  long lStack_140;
  ulong uStack_138;
  long *plStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte *apbStack_118 [3];
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined1 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_38;
  
  cVar5 = func_0x04864260(param_3);
  if (cVar5 != '\0') {
    unaff_RBP = 0;
    goto LAB_0b05b413;
  }
  cVar5 = func_0x04864270(param_3);
  if (cVar5 == '\0') {
    cVar5 = func_0x04864290(param_3);
    if (cVar5 != '\0') {
      cVar5 = func_0x04865100(param_3,&UNK_01359816);
      if (cVar5 != '\0') {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_38 = 0;
        pbStack_e8 = (byte *)0x0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d7 = 0;
        uStack_d0 = 0;
        func_0x0b68cf90(&pbStack_150,&pbStack_e8,param_3);
        pbVar19 = pbStack_148;
        if (pbStack_150 == pbStack_148) {
          uVar6 = func_0x0c5c3c90(param_1,&pbStack_e8);
          unaff_RBP = (ulong)uVar6;
          pbVar19 = pbStack_150;
        }
        else {
          pbVar15 = pbStack_150;
          do {
            apbStack_118[0] = pbVar15 + 1;
            if ((*pbVar15 & 1) != 0) {
              apbStack_118[0] = *(byte **)(pbVar15 + 0x10);
            }
            func_0x09a3e1d0(1,3,0,&UNK_012ee1a2,apbStack_118);
            pbVar15 = pbVar15 + 0x18;
          } while (pbVar15 != pbVar19);
          unaff_RBP = 0;
          pbVar19 = pbStack_150;
        }
        pbStack_150 = pbVar19;
        pbVar15 = pbStack_148;
        if (pbVar19 != (byte *)0x0) {
          for (; pbVar19 != pbVar15; pbVar15 = pbVar15 + -0x18) {
            if ((pbVar15[-0x18] & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(pbVar15 + -8),
                              *(ulong *)(pbVar15 + -0x18) & 0xfffffffffffffffe);
            }
          }
          func_0x0412a280(pbStack_150,lStack_140 - (long)pbStack_150);
        }
        func_0x049ea030(&pbStack_e8);
        goto LAB_0b05b413;
      }
      func_0x04865230(&pbStack_150,param_3);
      pbStack_120 = pbStack_148;
      pbVar19 = pbStack_150;
      if (((ulong)(((long)pbStack_148 - (long)pbStack_150 >> 3) * -0x5555555555555555) < 2) ||
         ((int)param_1[1] != 1)) {
        for (; bVar20 = true, pbVar19 != pbStack_120; pbVar19 = pbVar19 + 0x18) {
          pbVar15 = pbVar19 + 1;
          bVar20 = (*pbVar19 & 1) == 0;
          pbStack_e8 = *(byte **)(pbVar19 + 0x10);
          if (bVar20) {
            pbStack_e8 = pbVar15;
          }
          uVar10 = (ulong)(*pbVar19 >> 1);
          if (!bVar20) {
            uVar10 = *(ulong *)(pbVar19 + 8);
          }
          uStack_e0 = (undefined4)uVar10;
          uStack_dc = (undefined4)(uVar10 >> 0x20);
          uStack_d8 = 1;
          uStack_138 = 0;
          FUN_0eeb79f0(apbStack_118,&uStack_138);
          if ((uStack_138 >> 0x37 & 1) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_138 & 0xff00ffffffffffff) - 8)
            ;
          }
          uVar7 = func_0x04864990(param_3,pbVar19);
          cVar5 = func_0x04864260(uVar7);
          if (cVar5 != '\0') {
LAB_0b05b39a:
            FUN_0eeb81b0(apbStack_118);
LAB_0b05b3a4:
            bVar20 = false;
            break;
          }
          bVar1 = *pbVar19;
          if ((bVar1 & 1) == 0) {
            uVar10 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar10 = *(ulong *)(pbVar19 + 8);
          }
          switch(uVar10) {
          case 2:
            if ((bVar1 & 1) != 0) {
              pbVar15 = *(byte **)(pbVar19 + 0x10);
            }
            if (*(short *)pbVar15 != 0x524f) break;
code_r0x0b05ae3d:
            uVar13 = 1;
code_r0x0b05ae42:
            cVar5 = func_0x0b05b6d0(param_1,uVar13,uVar7);
            goto LAB_0b05ae4d;
          case 3:
            if ((bVar1 & 1) != 0) {
              pbVar15 = *(byte **)(pbVar19 + 0x10);
            }
            uVar13 = 0;
            if ((pbVar15[2] == 0x6c && *(short *)pbVar15 == 0x6c61) ||
               (pbVar15[2] == 0x44 && *(short *)pbVar15 == 0x4e41)) goto code_r0x0b05ae42;
            if (pbVar15[2] == 0x79 && *(short *)pbVar15 == 0x6e61) goto code_r0x0b05ae3d;
            if (pbVar15[2] == 0x54 && *(short *)pbVar15 == 0x4f4e) goto code_r0x0b05b02f;
            break;
          case 6:
            if ((bVar1 & 1) != 0) {
              pbVar15 = *(byte **)(pbVar19 + 0x10);
            }
            if (*(short *)(pbVar15 + 4) == 0x666f && *(int *)pbVar15 == 0x5f6c6c61) {
              uVar13 = 0;
              goto code_r0x0b05ae42;
            }
            if (*(short *)(pbVar15 + 4) == 0x666f && *(int *)pbVar15 == 0x5f796e61)
            goto code_r0x0b05ae3d;
            break;
          case 7:
            if ((bVar1 & 1) != 0) {
              pbVar15 = *(byte **)(pbVar19 + 0x10);
            }
            if (*(int *)(pbVar15 + 3) == 0x666f5f65 && *(int *)pbVar15 == 0x656e6f6e) {
code_r0x0b05b02f:
              uVar13 = 2;
              goto code_r0x0b05ae42;
            }
          }
          lVar8 = func_0x0b0d5920(0xf6b0f70,pbVar19);
          if (lVar8 == 0) {
            if ((*pbVar19 & 1) == 0) {
              pbStack_e8 = pbVar19 + 1;
            }
            else {
              pbStack_e8 = *(byte **)(pbVar19 + 0x10);
            }
            func_0x0547c040(1,3,0,&UNK_014869d1,&pbStack_e8);
            goto LAB_0b05b39a;
          }
          cVar5 = func_0x04864270(uVar7);
          piVar16 = (int *)(lVar8 + 0x28);
          if (cVar5 != '\0') {
            iVar2 = *piVar16;
            if (iVar2 == (int)param_1[1]) {
              cVar5 = func_0x0b05aac0(param_1,pbVar19,uVar7,piVar16);
              if (cVar5 != '\0') {
LAB_0b05b27a:
                FUN_0eeb81b0(apbStack_118);
                goto LAB_0b05ae62;
              }
            }
            else {
              plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
              if (plVar9 == (long *)0x0) {
                func_0x0eec74c0(0x58,0);
              }
              plStack_130 = plVar9 + 1;
              plVar9[1] = 0;
              plVar9[2] = 0;
              *plVar9 = (long)&UNK_0f280f40;
              plVar18 = plVar9 + 3;
              *(int *)(plVar9 + 4) = iVar2;
              plVar9[5] = 0;
              plVar9[6] = 0;
              plVar9[7] = 0;
              plVar9[8] = 0;
              plVar9[9] = 0;
              plVar9[10] = 0;
              plVar9[3] = (long)&UNK_0f299f40;
              cVar5 = func_0x0b05aac0(plVar18,pbVar19,uVar7,piVar16);
              if (cVar5 != '\0') {
                puVar11 = (undefined8 *)param_1[3];
                if (puVar11 < (undefined8 *)param_1[4]) {
                  *puVar11 = plVar18;
                  puVar11[1] = plVar9;
                  puVar11 = puVar11 + 2;
                }
                else {
                  lVar8 = param_1[2];
                  lVar17 = (long)puVar11 - lVar8;
                  lStack_f0 = lVar17 >> 4;
                  uVar10 = lStack_f0 + 1;
                  if (uVar10 >> 0x3c != 0) {
LAB_0b05b461:
                    uVar7 = func_0x049d03a0();
                    FUN_0eeb81b0(apbStack_118);
                    func_0x04886070(&pbStack_150);
                    uVar7 = _Unwind_Resume(uVar7);
                    func_0x04886070(&pbStack_150);
                    func_0x049ea030(&pbStack_e8);
                    uVar7 = _Unwind_Resume(uVar7);
                    func_0x04862b40(&pbStack_150);
                    func_0x04862b40(&pbStack_e8);
                    _Unwind_Resume(uVar7);
                    pcVar3 = (code *)swi(3);
                    uVar10 = (*pcVar3)();
                    return uVar10;
                  }
                  uStack_100 = param_1[4] - lVar8;
                  uVar12 = (long)uStack_100 >> 3;
                  if ((ulong)((long)uStack_100 >> 3) <= uVar10) {
                    uVar12 = uVar10;
                  }
                  if (0x7fffffffffffffef < uStack_100) {
                    uVar12 = 0xfffffffffffffff;
                  }
                  lStack_f8 = lVar8;
                  if (0xfffffffffffffff < uVar12) {
                    func_0x04882eb0();
                    goto LAB_0b05b461;
                  }
                  lVar8 = uVar12 * 0x10;
                  lStack_128 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
                  if (lStack_128 == 0) {
                    func_0x0eec74c0(lVar8,0);
                  }
                  lVar4 = lStack_f8;
                  lVar8 = lVar8 + lStack_128;
                  *(long **)(lStack_128 + lVar17) = plVar18;
                  *(long **)(lStack_128 + 8 + lVar17) = plVar9;
                  puVar11 = (undefined8 *)(lStack_128 + lVar17 + 0x10);
                  lVar14 = lStack_128 + lVar17 + lStack_f0 * -0x10;
                  memcpy(lVar14,lStack_f8,lVar17);
                  param_1[2] = lVar14;
                  param_1[3] = (long)puVar11;
                  param_1[4] = lVar8;
                  if (lVar4 != 0) {
                    func_0x0412a280(lVar4,uStack_100);
                  }
                }
                param_1[3] = (long)puVar11;
                goto LAB_0b05b27a;
              }
              LOCK();
              lVar8 = *plStack_130;
              *plStack_130 = *plStack_130 + -1;
              UNLOCK();
              if (lVar8 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                func_0x0412c2d0(plVar9);
              }
            }
            goto LAB_0b05b39a;
          }
          cVar5 = func_0x0b05a320(param_1,pbVar19,uVar7,piVar16);
LAB_0b05ae4d:
          FUN_0eeb81b0(apbStack_118);
          if (cVar5 == '\0') goto LAB_0b05b3a4;
LAB_0b05ae62:
        }
        unaff_RBP = 0;
      }
      else {
        (**(code **)(*param_1 + 0x18))(&pbStack_e8,param_1,0);
        if ((pbStack_e8 == (byte *)0x0) ||
           (cVar5 = (**(code **)(*(long *)pbStack_e8 + 0x10))(pbStack_e8,param_3), cVar5 == '\0')) {
          unaff_RBP = 0;
        }
        else {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
          func_0x0b05b5a0(param_1 + 2,&pbStack_e8);
        }
        plVar9 = (long *)CONCAT44(uStack_dc,uStack_e0);
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar18 = plVar9 + 1;
          lVar8 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            func_0x0412c2d0(plVar9);
          }
        }
        bVar20 = false;
      }
      pbVar15 = pbStack_150;
      pbVar19 = pbStack_148;
      if (pbStack_150 != (byte *)0x0) {
        for (; pbVar15 != pbVar19; pbVar19 = pbVar19 + -0x18) {
          if ((pbVar19[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar19 + -8),
                            *(ulong *)(pbVar19 + -0x18) & 0xfffffffffffffffe);
          }
        }
        pbStack_148 = pbVar15;
        func_0x0412a280(pbStack_150,lStack_140 - (long)pbStack_150);
      }
      if (!bVar20) goto LAB_0b05b413;
    }
  }
  else {
    func_0x04865530(&pbStack_e8,param_3);
    func_0x048655b0(&pbStack_150,param_3);
    while (cVar5 = func_0x04862c80(&pbStack_e8,&pbStack_150), cVar5 == '\0') {
      uVar7 = func_0x04862b80(&pbStack_e8);
      cVar5 = FUN_0b05abc0(param_1,param_2,uVar7);
      if (cVar5 == '\0') {
        func_0x04862b40(&pbStack_150);
        func_0x04862b40(&pbStack_e8);
        unaff_RBP = 0;
        goto LAB_0b05b413;
      }
      func_0x04862ba0(&pbStack_e8);
    }
    func_0x04862b40(&pbStack_150);
    func_0x04862b40(&pbStack_e8);
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_0b05b413:
  return unaff_RBP & 0xffffffff;
}


