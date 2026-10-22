/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca61580 (ELF vaddr 0xc961580)
 * Label: Dimension::vslot17
 * Body:  [[0ca61580, 0ca6165e] [0ca61660, 0ca6197a] [0ca61980, 0ca61a24] [0ca61a30, 0ca61c8e] [0ca61c90, 0ca61cec] [0ca61cf0, 0ca61cfd] [0ca61d00, 0ca61eca] [0ca61ed0, 0ca61f16] [0ca61f20, 0ca62621] [0ca62630, 0ca62834] [0ca62840, 0ca62928] [0ca62930, 0ca62acd] [0ca62ad0, 0ca62e8d] [0ca62e90, 0ca635f8]]
 * Ghidra: wg_Dimension__vslot17
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot17(long *******param_1)

{
  long *plVar1;
  char *pcVar2;
  undefined4 *puVar3;
  long *******ppppppplVar4;
  int iVar5;
  int iVar6;
  long **pplVar7;
  long *plVar8;
  long ******pppppplVar9;
  long ****pppplVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  char cVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long ******pppppplVar25;
  long lVar26;
  long lVar27;
  long *******ppppppplVar28;
  long *plVar29;
  long *******ppppppplVar30;
  ulong uVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long *******ppppppplVar35;
  ulong uVar36;
  ulong uVar37;
  long *****ppppplVar38;
  ulong uVar39;
  long *******ppppppplVar40;
  long *******ppppppplVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  long *******ppppppplStack_188;
  undefined8 uStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long ****pppplStack_160;
  long ****pppplStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined8 uStack_110;
  uint uStack_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined4 uStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *******ppppppplStack_50;
  long ******pppppplStack_48;
  long *******ppppppplStack_40;
  ulong uStack_38;
  
  param_1[0x77] = param_1[0x76];
  uStack_138 = param_1;
  (*(code *)(*param_1)[0xb])(param_1,&UNK_0ca74680,&uStack_138);
  func_0x0c901130(param_1[0x37]);
  pppppplVar25 = param_1[0x38];
  lVar20 = (*(code *)(*(*pppppplVar25)[0x14])[0x158])();
  lVar26 = *(long *)(lVar20 + 0x18);
  ppppppplVar41 = param_1;
  if ((lVar26 == 0) || ((int)((ulong)(*(long *)(lVar20 + 0x20) - lVar26) >> 4) * -0x11111111 < 10))
  {
LAB_0ca6167f:
    cVar16 = (*(code *)(*param_1[0x14])[0x13e])();
    if (cVar16 == '\0') {
      pppppplVar25 = param_1[0x14];
      if (param_1[0x80] != (long ******)0x0) {
        func_0x0cb29510(param_1[0x80],pppppplVar25,param_1);
      }
      pppppplVar24 = param_1[0x81];
      if (pppppplVar24 != (long ******)0x0) {
        puVar21 = (undefined8 *)(*(code *)(*pppppplVar25)[0x50])(pppppplVar25);
        func_0x09dbed70(pppppplVar24,pppppplVar25,param_1,*puVar21);
      }
    }
    lVar20 = (*(code *)(*param_1[0x14])[0x158])();
    lVar26 = *(long *)(lVar20 + 0x18);
    if (((lVar26 == 0) || ((int)((ulong)(*(long *)(lVar20 + 0x20) - lVar26) >> 4) * -0x11111111 < 2)
        ) || (*(int *)(lVar26 + 0xf8) == 1)) {
      uVar18 = (*(code *)(*param_1[0x14])[0x85])();
      fVar44 = (float)(*(code *)(*param_1)[0x2e])(param_1,uVar18);
      fVar44 = *(float *)((ulong)((int)((fVar44 * _DAT_01198b3c + fVar44 * _DAT_01198b3c) *
                                        _DAT_01198bd8 + _DAT_01198b38) & 0xffff) * 4 + 0xf778a04);
      fVar45 = _DAT_011983f0 - (fVar44 + fVar44 + _DAT_011986e0);
      fVar44 = 0.0;
      if (0.0 <= fVar45) {
        fVar44 = fVar45;
      }
      fVar45 = _DAT_011983f0;
      if (fVar44 <= _DAT_011983f0) {
        fVar45 = fVar44;
      }
      fVar45 = _DAT_011983f0 - fVar45;
      if (*(char *)(param_1 + 0x1c) == '\x01') {
        pppppplVar25 = param_1[0x37];
        fVar45 = fVar45 * (*(float *)((long)pppppplVar25 + 0x4c) * _DAT_01198bfc * _DAT_01198a08 +
                          _DAT_011983f0);
        fVar44 = 0.0;
        if (*(char *)(pppppplVar25[0xb] + 0x1c) == '\x01') {
          fVar45 = fVar45 * (_DAT_011983f0 -
                            ((*(float *)(pppppplVar25 + 7) - *(float *)((long)pppppplVar25 + 0x34))
                            + *(float *)((long)pppppplVar25 + 0x34)) * _DAT_01198988 * _DAT_01198a08
                            );
          fVar44 = ((*(float *)((long)pppppplVar25 + 0x44) - *(float *)(pppppplVar25 + 8)) +
                   *(float *)(pppppplVar25 + 8)) * _DAT_01198988 * _DAT_01198a08;
        }
        fVar45 = fVar45 * (_DAT_011983f0 - fVar44);
      }
      if (param_1[0x71] != (long ******)0x0) {
        fVar45 = fVar45 * _DAT_0119875c;
      }
      cVar16 = (char)(int)((_DAT_011983f0 - fVar45) * _DAT_011984b0);
      if (*(char *)((long)param_1 + 0x179) != cVar16) {
        *(char *)((long)param_1 + 0x179) = cVar16;
      }
      if (*(char *)(param_1 + 0x1c) != '\0') {
        uVar22 = (*(code *)(*param_1[0x14])[0x14e])();
        ppppplVar34 = param_1[99][2];
        for (ppppplVar33 = param_1[99][1]; ppppplVar33 != ppppplVar34; ppppplVar33 = ppppplVar33 + 2
            ) {
          (*(code *)(**ppppplVar33)[0x12])(*ppppplVar33,uVar22);
        }
      }
      func_0x0ca63830(param_1);
      if ((param_1[0x35] == (long ******)0x0) &&
         (cVar16 = FUN_0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef), cVar16 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      pppppplVar25 = param_1[0x35];
      if (param_1[0x1a] != (long ******)0x0) {
        pppppplVar24 = param_1[0xc];
        pppppplVar9 = param_1[0xd];
        if (pppppplVar24 != pppppplVar9) {
          ppppppplStack_130 = (long *******)0x0;
          ppppppplStack_128 = (long *******)0x0;
          ppppppplVar41 = (long *******)&ppppppplStack_130;
          ppppppplVar28 = (long *******)&ppppppplStack_130;
          uStack_138 = (long *******)&ppppppplStack_130;
LAB_0ca619ad:
          pppppplVar23 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (pppppplVar23 == (long ******)0x0) {
            FUN_0eec74c0(0x28,0);
          }
          pppppplVar23[4] = *pppppplVar24;
          *pppppplVar23 = (long *****)0x0;
          pppppplVar23[1] = (long *****)0x0;
          pppppplVar23[2] = (long *****)ppppppplVar41;
          *ppppppplVar28 = pppppplVar23;
          if ((long *******)*uStack_138 != (long *******)0x0) {
            uStack_138 = (long *******)*uStack_138;
          }
          func_0x048bed00(ppppppplStack_130,pppppplVar23);
          ppppppplStack_128 = (long *******)((long)ppppppplStack_128 + 1);
          pppppplVar23 = pppppplVar24;
LAB_0ca61a12:
          ppppppplVar41 = (long *******)&ppppppplStack_130;
          ppppppplVar28 = (long *******)&ppppppplStack_130;
          if (ppppppplStack_130 != (long *******)0x0) {
            iVar19 = *(int *)(pppppplVar23 + 1);
            iVar5 = *(int *)((long)pppppplVar23 + 0xc);
            ppppppplVar35 = ppppppplStack_130;
            do {
              while( true ) {
                ppppppplVar41 = ppppppplVar35;
                iVar6 = *(int *)(ppppppplVar41 + 4);
                bVar43 = SBORROW4(iVar19,iVar6);
                iVar11 = iVar19 - iVar6;
                if (iVar19 < iVar6) break;
                bVar42 = false;
                if (iVar19 == iVar6) {
                  iVar6 = *(int *)((long)ppppppplVar41 + 0x24);
                  bVar43 = SBORROW4(iVar5,iVar6);
                  iVar11 = iVar5 - iVar6;
                  bVar42 = iVar5 == iVar6;
                  if (iVar5 < iVar6) break;
                }
                if (bVar42 || bVar43 != iVar11 < 0) goto LAB_0ca61ab9;
                ppppppplVar35 = (long *******)ppppppplVar41[1];
                if ((long *******)ppppppplVar41[1] == (long *******)0x0) {
                  ppppppplVar28 = ppppppplVar41 + 1;
                  goto LAB_0ca61a5d;
                }
              }
              ppppppplVar35 = (long *******)*ppppppplVar41;
              ppppppplVar28 = ppppppplVar41;
            } while ((long *******)*ppppppplVar41 != (long *******)0x0);
          }
LAB_0ca61a5d:
          pppppplVar24 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (pppppplVar24 == (long ******)0x0) {
            FUN_0eec74c0(0x28,0);
          }
          pppppplVar24[4] = pppppplVar23[1];
          *pppppplVar24 = (long *****)0x0;
          pppppplVar24[1] = (long *****)0x0;
          pppppplVar24[2] = (long *****)ppppppplVar41;
          *ppppppplVar28 = pppppplVar24;
          if ((long *******)*uStack_138 != (long *******)0x0) {
            uStack_138 = (long *******)*uStack_138;
          }
          func_0x048bed00(ppppppplStack_130,pppppplVar24);
          ppppppplStack_128 = (long *******)((long)ppppppplStack_128 + 1);
LAB_0ca61ab9:
          pppppplVar24 = pppppplVar23 + 2;
          if (pppppplVar24 != pppppplVar9) goto code_r0x0ca61ac4;
          param_1[0xd] = param_1[0xc];
          ppppppplVar41 = uStack_138;
          while ((long ********)ppppppplVar41 != &ppppppplStack_130) {
            lVar26 = (*(code *)(*param_1[0x1a])[0x29])(param_1[0x1a],ppppppplVar41 + 4);
            if (lVar26 != 0) {
              (*(code *)(*param_1[0x35])[0x15])(param_1[0x35],lVar26);
            }
            ppppppplVar28 = (long *******)ppppppplVar41[1];
            ppppppplVar35 = ppppppplVar41;
            if ((long *******)ppppppplVar41[1] == (long *******)0x0) {
              do {
                ppppppplVar41 = (long *******)ppppppplVar35[2];
                bVar43 = ppppppplVar35 != (long *******)*ppppppplVar41;
                ppppppplVar35 = ppppppplVar41;
              } while (bVar43);
            }
            else {
              do {
                ppppppplVar41 = ppppppplVar28;
                ppppppplVar28 = (long *******)*ppppppplVar41;
              } while ((long *******)*ppppppplVar41 != (long *******)0x0);
            }
          }
          (*(code *)(*pppppplVar25)[0x1d])(pppppplVar25);
          func_0x05f20df0(&uStack_138,ppppppplStack_130);
        }
      }
      if (param_1[0x12] != (long ******)0x0) {
        pppppplVar24 = param_1[0x11];
        if (pppppplVar24 != (long ******)0x0) {
          do {
            (*(code *)(*param_1[0x35])[0x16])(param_1[0x35],pppppplVar24 + 2,pppppplVar24 + 4);
            (*(code *)(*pppppplVar25)[0x1d])(pppppplVar25);
            pppppplVar24 = (long ******)*pppppplVar24;
          } while (pppppplVar24 != (long ******)0x0);
          if (param_1[0x12] == (long ******)0x0) goto LAB_0ca61bc7;
          pppppplVar25 = param_1[0x11];
          while (pppppplVar25 != (long ******)0x0) {
            pppppplVar24 = (long ******)*pppppplVar25;
            ppppplVar33 = pppppplVar25[4];
            if (ppppplVar33 != (long *****)0x0) {
              ppppplVar34 = pppppplVar25[5];
              ppppplVar32 = ppppplVar33;
              if (ppppplVar33 != ppppplVar34) {
                do {
                  pppplVar10 = ppppplVar34[-1];
                  ppppplVar34[-1] = (long ****)0x0;
                  if (pppplVar10 != (long ****)0x0) {
                    (*(code *)(*pppplVar10)[1])();
                  }
                  if (((ulong)ppppplVar34[-4] & 1) != 0) {
                    func_0x0412a280(ppppplVar34[-2],(ulong)ppppplVar34[-4] & 0xfffffffffffffffe);
                  }
                  ppppplVar34 = ppppplVar34 + -6;
                } while (ppppplVar34 != ppppplVar33);
                ppppplVar32 = pppppplVar25[4];
              }
              pppppplVar25[5] = ppppplVar33;
              func_0x0412a280(ppppplVar32,(long)pppppplVar25[6] - (long)ppppplVar32);
            }
            func_0x0412a280(pppppplVar25,0x38);
            pppppplVar25 = pppppplVar24;
          }
        }
        param_1[0x11] = (long ******)0x0;
        if (param_1[0x10] != (long ******)0x0) {
          func_0x0eee2dd0(param_1[0xf],0,(long)param_1[0x10] << 3);
        }
        param_1[0x12] = (long ******)0x0;
      }
LAB_0ca61bc7:
      (*(code *)(*param_1)[6])(param_1);
      ppppppplStack_50 = (long *******)param_1[0x36];
      ppppppplStack_188 = param_1;
      if (ppppppplStack_50 == (long *******)0x0) goto LAB_0ca623e8;
      pppppplVar25 = (long ******)func_0x0417cc60();
      if (600000000000 < (long)pppppplVar25 - (long)param_1[0x73]) {
        param_1[0x73] = pppppplVar25;
        pppppplStack_48 = pppppplVar25;
        if ((param_1[0x35] == (long ******)0x0) &&
           (cVar16 = FUN_0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef), cVar16 != '\0'))
        {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar26 = (*(code *)(*param_1[0x35])[0x20])();
        puVar21 = *(undefined8 **)(lVar26 + 0x10);
        if (puVar21 == (undefined8 *)0x0) {
          ppppppplVar28 = (long *******)0x0;
          ppppppplVar41 = (long *******)0x0;
          ppppppplVar35 = (long *******)0x0;
LAB_0ca61f67:
          pppppplVar25 = param_1[0x31];
          uStack_178 = (long *******)&UNK_014a5485;
          ppppppplStack_170 = (long *******)0x1b;
          ppppppplStack_168 = _DAT_0f778528;
          pppplStack_160 = (long ****)0xffffffff00000001;
          pppplStack_158 = (long ****)((ulong)pppplStack_158 & 0xffffffffffffff00);
          lStack_150 = 0;
          uVar17 = (*(code *)(*pppppplVar25)[9])(pppppplVar25);
          uStack_110 = param_1 + 0x44;
          uStack_98 = 0;
          plStack_90 = (long *)0x0;
          uStack_68 = 0;
          plStack_60 = (long *)0x0;
          uStack_138 = (long *******)&UNK_0f3ed540;
          ppppppplStack_130 = ppppppplStack_50;
          ppppppplStack_128 = ppppppplVar35;
          ppppppplStack_120 = ppppppplVar41;
          ppppppplStack_118 = ppppppplVar28;
          func_0x048a4fd0(&plStack_a8,pppppplVar25,&uStack_178,&uStack_98,uVar17,&uStack_138);
          if (uStack_138 != (long *******)0x0) {
            (*(code *)uStack_138[1])(&uStack_138);
          }
          plVar29 = plStack_90;
          if (plStack_90 != (long *)0x0) {
            LOCK();
            plVar8 = plStack_90 + 1;
            lVar26 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              func_0x0412c2d0(plVar29);
            }
          }
          plStack_78 = plStack_a8;
          plStack_70 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            LOCK();
            plStack_a0[1] = plStack_a0[1] + 1;
            UNLOCK();
          }
          iVar19 = *(int *)(pppppplVar25 + 0x10);
          if (iVar19 != 1) {
            if (iVar19 == 3) {
              *(undefined4 *)(plStack_a8 + 6) = 0;
            }
            else if (iVar19 == 2) {
              (**(code **)(*plStack_a8 + 0x10))();
              goto LAB_0ca6211b;
            }
            plStack_b8 = plStack_a8;
            plStack_b0 = plStack_a0;
            if (plStack_a0 != (long *)0x0) {
              LOCK();
              plStack_a0[1] = plStack_a0[1] + 1;
              UNLOCK();
            }
            (*(code *)(*pppppplVar25)[5])(pppppplVar25,&plStack_b8,0);
            plVar29 = plStack_b0;
            if (plStack_b0 != (long *)0x0) {
              LOCK();
              plVar8 = plStack_b0 + 1;
              lVar26 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar26 == 0) {
                (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
                func_0x0412c2d0(plVar29);
              }
            }
          }
LAB_0ca6211b:
          plVar29 = plStack_70;
          if (plStack_70 != (long *)0x0) {
            LOCK();
            plVar8 = plStack_70 + 1;
            lVar26 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plStack_70 + 0x10))(plStack_70);
              func_0x0412c2d0(plVar29);
            }
          }
          plVar8 = plStack_60;
          plVar29 = plStack_a0;
          if (plStack_60 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            lVar26 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plStack_60 + 0x10))(plStack_60);
              func_0x0412c2d0(plVar8);
            }
          }
          pppppplVar25 = pppppplStack_48;
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar8 = plVar29 + 1;
            lVar26 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              func_0x0412c2d0(plVar29);
              pppppplVar25 = pppppplStack_48;
            }
          }
          goto LAB_0ca621b3;
        }
        ppppppplVar35 = (long *******)0x0;
        ppppppplVar41 = (long *******)0x0;
        ppppppplVar28 = (long *******)0x0;
        while (ppppppplVar41 < ppppppplVar28) {
          *ppppppplVar41 = (long ******)puVar21[2];
          ppppppplVar41 = ppppppplVar41 + 1;
          puVar21 = (undefined8 *)*puVar21;
joined_r0x0ca61d12:
          if (puVar21 == (undefined8 *)0x0) goto LAB_0ca61f67;
        }
        lVar26 = (long)ppppppplVar41 - (long)ppppppplVar35;
        lVar20 = lVar26 >> 3;
        uVar31 = lVar20 + 1;
        ppppppplStack_40 = ppppppplVar28;
        if (uVar31 < 0x2000000000000000) {
          uStack_38 = (long)ppppppplVar28 - (long)ppppppplVar35;
          uVar36 = (long)uStack_38 >> 2;
          if ((ulong)((long)uStack_38 >> 2) <= uVar31) {
            uVar36 = uVar31;
          }
          if (0x7ffffffffffffff7 < uStack_38) {
            uVar36 = 0x1fffffffffffffff;
          }
          puStack_80 = puVar21;
          if (uVar36 < 0x2000000000000000) {
            lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 8);
            if (lVar27 == 0) {
              FUN_0eec74c0(uVar36 * 8,0);
            }
            *(undefined8 *)(lVar27 + lVar26) = puStack_80[2];
            ppppppplVar40 = (long *******)(lVar27 + lVar26 + lVar20 * -8);
            if (ppppppplVar35 != ppppppplVar41) {
              ppppppplVar28 = ppppppplVar35;
              ppppppplVar30 = ppppppplVar40;
              if ((0x47 < lVar26 - 8U) &&
                 ((char *)0x1f <
                  (char *)((long)ppppppplVar41 + (lVar27 - (lVar26 + (long)ppppppplVar35 * 2))))) {
                uVar31 = (lVar26 - 8U >> 3) + 1;
                uVar37 = uVar31 & 0xfffffffffffffffc;
                ppppppplVar28 = ppppppplVar35 + uVar37;
                ppppppplVar30 = ppppppplVar40 + uVar37;
                lVar20 = lVar26 + lVar20 * -8 + lVar27;
                uVar39 = 0;
                do {
                  pppppplVar25 = (ppppppplVar35 + uVar39)[1];
                  ppppppplVar4 = ppppppplVar35 + uVar39 + 2;
                  uVar18 = *(undefined4 *)ppppppplVar4;
                  uVar12 = *(undefined4 *)((long)ppppppplVar4 + 4);
                  uVar13 = *(undefined4 *)(ppppppplVar4 + 1);
                  uVar14 = *(undefined4 *)((long)ppppppplVar4 + 0xc);
                  plVar29 = (long *)(lVar20 + uVar39 * 8);
                  *plVar29 = (long)ppppppplVar35[uVar39];
                  plVar29[1] = (long)pppppplVar25;
                  puVar3 = (undefined4 *)(lVar20 + 0x10 + uVar39 * 8);
                  *puVar3 = uVar18;
                  puVar3[1] = uVar12;
                  puVar3[2] = uVar13;
                  puVar3[3] = uVar14;
                  uVar39 = uVar39 + 4;
                } while (uVar37 != uVar39);
                if (uVar31 == uVar37) goto LAB_0ca61e73;
              }
              do {
                *ppppppplVar30 = *ppppppplVar28;
                ppppppplVar28 = ppppppplVar28 + 1;
                ppppppplVar30 = ppppppplVar30 + 1;
              } while (ppppppplVar28 != ppppppplVar41);
            }
LAB_0ca61e73:
            ppppppplVar28 = (long *******)(lVar27 + uVar36 * 8);
            ppppppplVar41 = (long *******)(lVar27 + lVar26 + 8);
            if (ppppppplVar35 != (long *******)0x0) {
              func_0x0412a280(ppppppplVar35,uStack_38);
            }
            puVar21 = (undefined8 *)*puStack_80;
            ppppppplVar35 = ppppppplVar40;
            goto joined_r0x0ca61d12;
          }
        }
        else {
          func_0x04fa6650();
        }
        func_0x04882eb0();
        goto LAB_0ca631bc;
      }
LAB_0ca621b3:
      if ((long)pppppplVar25 - (long)param_1[0x74] < 0x1bf08eb001) {
LAB_0ca623e8:
        cVar16 = *(char *)(param_1 + 0x96);
      }
      else {
        param_1[0x74] = pppppplVar25;
        pppppplVar25 = param_1[0x31];
        uStack_178 = (long *******)&UNK_014a5485;
        ppppppplStack_170 = (long *******)0x1b;
        ppppppplStack_168 = _DAT_0f778528;
        pppplStack_160 = (long ****)0xffffffff00000001;
        pppplStack_158 = (long ****)((ulong)pppplStack_158 & 0xffffffffffffff00);
        lStack_150 = 0;
        uVar17 = (*(code *)(*pppppplVar25)[9])(pppppplVar25);
        uStack_98 = 0;
        plStack_90 = (long *)0x0;
        uStack_68 = 0;
        plStack_60 = (long *)0x0;
        uStack_138 = (long *******)&UNK_0f3ed558;
        ppppppplStack_130 = ppppppplStack_50;
        func_0x048a4fd0(&plStack_a8,pppppplVar25,&uStack_178,&uStack_98,uVar17,&uStack_138);
        if (uStack_138 != (long *******)0x0) {
          (*(code *)uStack_138[1])(&uStack_138);
        }
        plVar29 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          LOCK();
          plVar8 = plStack_90 + 1;
          lVar26 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar26 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            func_0x0412c2d0(plVar29);
          }
        }
        plStack_78 = plStack_a8;
        plStack_70 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          LOCK();
          plStack_a0[1] = plStack_a0[1] + 1;
          UNLOCK();
        }
        iVar19 = *(int *)(pppppplVar25 + 0x10);
        if (iVar19 != 1) {
          if (iVar19 == 3) {
            *(undefined4 *)(plStack_a8 + 6) = 0;
          }
          else if (iVar19 == 2) {
            (**(code **)(*plStack_a8 + 0x10))();
            goto LAB_0ca62365;
          }
          plStack_b8 = plStack_a8;
          plStack_b0 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            LOCK();
            plStack_a0[1] = plStack_a0[1] + 1;
            UNLOCK();
          }
          (*(code *)(*pppppplVar25)[5])(pppppplVar25,&plStack_b8,0);
          plVar29 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            LOCK();
            plVar8 = plStack_b0 + 1;
            lVar26 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              func_0x0412c2d0(plVar29);
            }
          }
        }
LAB_0ca62365:
        plVar29 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          LOCK();
          plVar8 = plStack_70 + 1;
          lVar26 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar26 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            func_0x0412c2d0(plVar29);
          }
        }
        plVar29 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          LOCK();
          plVar8 = plStack_60 + 1;
          lVar26 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar26 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            func_0x0412c2d0(plVar29);
          }
        }
        if (plStack_a0 == (long *)0x0) goto LAB_0ca623e8;
        LOCK();
        plVar29 = plStack_a0 + 1;
        lVar26 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar26 != 0) goto LAB_0ca623e8;
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        func_0x0412c2d0(plStack_a0);
        cVar16 = *(char *)(param_1 + 0x96);
      }
      if (((cVar16 == '\x01') && (*(int *)(param_1[0x72] + 0x19) == 0)) &&
         ((pppppplVar25 = param_1[0x72], pppppplVar25[0xc] != pppppplVar25[0xb] ||
          (pppppplVar25[0x14] != (long *****)0x0)))) {
        ppppppplVar41 = (long *******)param_1[0x35];
        uStack_138 = (long *******)0x0;
        ppppppplStack_130 = (long *******)0x0;
        ppppppplStack_128 = (long *******)0x0;
        if (ppppppplVar41 == (long *******)0x0) {
          ppppppplVar28 = (long *******)0x0;
          ppppppplVar35 = (long *******)0x0;
          ppppppplVar41 = ppppppplStack_128;
        }
        else {
          uStack_138 = (long *******)ppppppplVar41[1];
          ppppppplVar28 = (long *******)ppppppplVar41[2];
          if (ppppppplVar28 != (long *******)0x0) {
            LOCK();
            ppppppplVar28[1] = (long ******)((long)ppppppplVar28[1] + 1);
            UNLOCK();
            ppppppplStack_130 = ppppppplVar28;
          }
          ppppppplVar35 = uStack_138;
          if (uStack_138 == (long *******)0x0) {
            ppppppplVar35 = (long *******)0x0;
            ppppppplVar41 = ppppppplStack_128;
          }
        }
        ppppppplStack_128 = ppppppplVar41;
        cVar16 = (*(code *)(*param_1[0x14])[0x13e])();
        if (cVar16 != '\0') {
          cVar16 = (*(code *)(*param_1[0x14])[0x187])();
          if (cVar16 != '\0') {
            pppppplVar25 = param_1[0x87];
            if (pppppplVar25 == (long ******)0x0) {
              uStack_178 = (long *******)0x0;
              ppppppplStack_170 = (long *******)0x0;
              ppppppplStack_168 = (long *******)0x0;
              if (ppppppplVar28 != (long *******)0x0) goto LAB_0ca62ffe;
LAB_0ca63049:
              ppppppplVar41 = (long *******)(long ******)0x0;
            }
            else {
              uVar18 = (*(code *)(*param_1)[3])(param_1);
              plStack_b8 = (long *)CONCAT44(plStack_b8._4_4_,uVar18);
              (*(code *)(*pppppplVar25)[6])(&uStack_178,pppppplVar25,&plStack_b8);
              if (ppppppplVar28 == (long *******)0x0) goto LAB_0ca63049;
LAB_0ca62ffe:
              ppppppplStack_130 = (long *******)0x0;
              uStack_138 = (long *******)0x0;
              LOCK();
              ppppppplVar41 = ppppppplVar28 + 1;
              pppppplVar25 = *ppppppplVar41;
              *ppppppplVar41 = (long ******)((long)*ppppppplVar41 + -1);
              UNLOCK();
              ppppppplVar41 = ppppppplStack_130;
              if (pppppplVar25 == (long ******)0x0) {
                (*(code *)(*ppppppplVar28)[2])(ppppppplVar28);
                func_0x0412c2d0(ppppppplVar28);
                ppppppplVar41 = ppppppplStack_130;
              }
            }
            ppppppplStack_130 = ppppppplStack_170;
            uStack_138 = uStack_178;
            ppppppplStack_128 = (long *******)0x0;
            uStack_178 = (long *******)0x0;
            ppppppplStack_170 = (long *******)0x0;
            if (ppppppplVar41 != (long *******)0x0) {
              LOCK();
              pppppplVar25 = (long ******)(ppppppplVar41 + 1);
              ppppplVar33 = *pppppplVar25;
              *pppppplVar25 = (long *****)((long)*pppppplVar25 + -1);
              UNLOCK();
              if (ppppplVar33 == (long *****)0x0) {
                (*(code *)(*ppppppplVar41)[2])(ppppppplVar41);
                func_0x0412c2d0(ppppppplVar41);
              }
            }
            ppppppplVar41 = ppppppplStack_170;
            ppppppplStack_128 = ppppppplStack_168;
            ppppppplStack_168 = (long *******)0x0;
            uStack_178 = (long *******)0x0;
            ppppppplStack_170 = (long *******)0x0;
            ppppppplVar35 = uStack_138;
            if (ppppppplVar41 != (long *******)0x0) {
              LOCK();
              plVar29 = (long *)(ppppppplVar41 + 1);
              lVar26 = *plVar29;
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (lVar26 == 0) {
                (**(code **)((long)*ppppppplVar41 + 0x10))(ppppppplVar41);
                func_0x0412c2d0(ppppppplVar41);
              }
              ppppppplVar41 = ppppppplStack_170;
              ppppppplStack_168 = (long *******)0x0;
              ppppppplVar35 = uStack_138;
              if (ppppppplStack_170 != (long *******)0x0) {
                LOCK();
                ppppppplVar28 = ppppppplStack_170 + 1;
                pppppplVar25 = *ppppppplVar28;
                *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + -1);
                UNLOCK();
                if (pppppplVar25 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_170)[2])(ppppppplStack_170);
                  func_0x0412c2d0(ppppppplVar41);
                  ppppppplVar35 = uStack_138;
                }
              }
            }
          }
        }
        if ((ppppppplVar35 != (long *******)0x0) && (*(char *)ppppppplVar35 == '\x01')) {
          func_0x0cb2cd50(ppppppplStack_128,0);
        }
        ppppppplVar41 = ppppppplStack_130;
        uStack_138 = (long *******)0x0;
        ppppppplStack_130 = (long *******)0x0;
        if (ppppppplVar41 != (long *******)0x0) {
          LOCK();
          ppppppplVar28 = ppppppplVar41 + 1;
          pppppplVar25 = *ppppppplVar28;
          *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplVar41)[2])(ppppppplVar41);
            func_0x0412c2d0(ppppppplVar41);
          }
          ppppppplVar41 = ppppppplStack_130;
          ppppppplStack_128 = (long *******)0x0;
          if (ppppppplStack_130 != (long *******)0x0) {
            LOCK();
            ppppppplVar28 = ppppppplStack_130 + 1;
            pppppplVar25 = *ppppppplVar28;
            *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + -1);
            UNLOCK();
            if (pppppplVar25 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_130)[2])(ppppppplStack_130);
              func_0x0412c2d0(ppppppplVar41);
            }
          }
        }
      }
      cVar16 = (*(code *)(*param_1[0x14])[0x13e])();
      if (cVar16 == '\0') {
        ppppppplVar41 = param_1;
        if (DAT_0f6ed738 == '\0') goto LAB_0ca631c1;
        goto LAB_0ca6242e;
      }
      goto LAB_0ca625a1;
    }
  }
  else if (*(int *)(lVar26 + 0x878) == 1) {
    if ((*(char *)(lVar26 + 0x874) == '\x01') &&
       (ppppplVar33 = *pppppplVar25, *(char *)(ppppplVar33 + 0x1c) == '\x01')) {
      uStack_138 = (long *******)ppppplVar33[0x37];
      pplVar7 = *ppppplVar33[0x14][0x77];
      plVar29 = pplVar7[0x70];
      plVar8 = pplVar7[0x71];
      if (plVar29 != plVar8) {
        do {
          if ((long *)*plVar29 != pplVar7[0x77]) {
            func_0x0c92d990(&uStack_138);
          }
          plVar29 = plVar29 + 1;
        } while (plVar29 != plVar8);
      }
    }
    goto LAB_0ca6167f;
  }
LAB_0ca631bc:
  func_0x04931450();
LAB_0ca631c1:
  iVar19 = func_0x04108328(&DAT_0f6ed738);
  param_1 = ppppppplVar41;
  if (iVar19 != 0) {
    _DAT_0f6ed608 = func_0x0eecbd00(&UNK_013299b2,9,0);
    DAT_0f6ed610 = 1;
    _DAT_0f6ed618 = &UNK_014dab54;
    _DAT_0f6ed620 = &UNK_014dab54;
    _DAT_0f6ed628 = 0x21;
    DAT_0f6ed630 = 1;
    _DAT_0f6ed638 = 0;
    _DAT_0f6ed640 = _DAT_0f3ecdf8;
    uRam000000000f6ed648 = _UNK_0f3ece00;
    _DAT_0f6ed650 = _DAT_0f3ece08;
    uRam000000000f6ed658 = _UNK_0f3ece10;
    _DAT_0f6ed660 = 0;
    DAT_0f6ed690 = 0;
    _DAT_0f6ed698 = 0;
    _DAT_0f6ed670 = 0;
    uRam000000000f6ed678 = 0;
    DAT_0f6ed680 = 0;
    _DAT_0f6ed6f8 = 0;
    uRam000000000f6ed700 = 0;
    _DAT_0f6ed708 = 0;
    DAT_0f6ed6f0 = 0;
    _DAT_0f6ed6c0 = 0;
    uRam000000000f6ed6c8 = 0;
    _DAT_0f6ed6b0 = 0;
    uRam000000000f6ed6b8 = 0;
    _DAT_0f6ed6a0 = 0;
    uRam000000000f6ed6a8 = 0;
    _DAT_0f6ed6d0 = 0;
    _DAT_0f6ed6e0 = &UNK_01e80174;
    _DAT_0f6ed6e8 = 5;
    _DAT_0f6ed710 = 0;
    DAT_0f6ed718 = 0;
    DAT_0f6ed728 = 0;
    _DAT_0f6ed730 = 0;
    func_0x0eee2f40(&UNK_08b30de0,&DAT_0f6ed608,0xf53dab8);
    func_0x0410844d(&DAT_0f6ed738);
    param_1 = ppppppplStack_188;
  }
LAB_0ca6242e:
  uStack_178 = (long *******)&DAT_0f6ed608;
  ppppppplStack_170 = (long *******)((ulong)ppppppplStack_170 & 0xffffffffffffff00);
  pppplStack_160 = (long ****)0x0;
  uStack_138 = (long *******)((ulong)uStack_138 & 0xffffffffffffff00);
  uStack_108 = uStack_108 & 0xffffff00;
  uVar17 = func_0x0eecc050(&DAT_0f6ed608,&ppppppplStack_168,&uStack_138);
  if (((char)uStack_108 == '\x01') && (((ulong)uStack_138 & 1) != 0)) {
    func_0x0412a280(ppppppplStack_128,(ulong)uStack_138 & 0xfffffffffffffffe);
  }
  ppppppplStack_170 = (long *******)CONCAT71(ppppppplStack_170._1_7_,uVar17);
  if (DAT_0f5a2408 == '\0') {
    iVar19 = func_0x04108328(&DAT_0f5a2408);
    if (iVar19 != 0) {
      _DAT_0f5a2360 = 0;
      uRam000000000f5a2368 = 0;
      _DAT_0f5a2350 = 0;
      uRam000000000f5a2358 = 0;
      _DAT_0f5a2340 = 0;
      uRam000000000f5a2348 = 0;
      _DAT_0f5a2330 = 0;
      uRam000000000f5a2338 = 0;
      _DAT_0f5a2320 = 0;
      uRam000000000f5a2328 = 0;
      _DAT_0f5a2310 = 0;
      uRam000000000f5a2318 = 0;
      _DAT_0f5a2300 = 0;
      uRam000000000f5a2308 = 0;
      _DAT_0f5a22f0 = 0;
      uRam000000000f5a22f8 = 0;
      _DAT_0f5a22e0 = 0;
      uRam000000000f5a22e8 = 0;
      _DAT_0f5a22d0 = 0;
      uRam000000000f5a22d8 = 0;
      _DAT_0f5a22c0 = 0;
      uRam000000000f5a22c8 = 0;
      _DAT_0f5a22b0 = 0;
      uRam000000000f5a22b8 = 0;
      _DAT_0f5a22a0 = 0;
      uRam000000000f5a22a8 = 0;
      _DAT_0f5a2370 = 0;
      _DAT_0f5a2378 = 0x3f800000;
      _DAT_0f5a2380 = 0;
      uRam000000000f5a2388 = 0;
      _DAT_0f5a2390 = 0;
      uRam000000000f5a2398 = 0;
      _DAT_0f5a23a0 = 0x3f800000;
      _DAT_0f5a23a8 = 0;
      uRam000000000f5a23b0 = 0;
      _DAT_0f5a23b8 = 0;
      uRam000000000f5a23c0 = 0;
      _DAT_0f5a23c8 = 0;
      uRam000000000f5a23d0 = 0;
      _DAT_0f5a23d8 = 0;
      uRam000000000f5a23e0 = 0;
      _DAT_0f5a23e8 = 0;
      uRam000000000f5a23f0 = 0;
      _DAT_0f5a23f8 = 0;
      _DAT_0f5a2400 = 0x3f800000;
      func_0x0eee2f40(&UNK_06ceba80,&DAT_0f5a22a0,0xf53dab8);
      func_0x0410844d(&DAT_0f5a2408);
    }
  }
  if (DAT_0f5a2500 == '\0') {
    iVar19 = func_0x04108328(&DAT_0f5a2500);
    if (iVar19 != 0) {
      _DAT_0f5a2430 = 0;
      _DAT_0f5a2420 = 0;
      uRam000000000f5a2428 = 0;
      _DAT_0f5a2410 = 0;
      uRam000000000f5a2418 = 0;
      _DAT_0f5a2438 = 0x3f800000;
      _DAT_0f5a2440 = 0;
      uRam000000000f5a2448 = 0;
      _DAT_0f5a2450 = 0;
      uRam000000000f5a2458 = 0;
      _DAT_0f5a2460 = 0;
      _DAT_0f5a2468 = 0;
      _DAT_0f5a2470 = 0;
      uRam000000000f5a2478 = 0;
      _DAT_0f5a2480 = 0;
      uRam000000000f5a2488 = 0;
      _DAT_0f5a2490 = 0x3f800000;
      _DAT_0f5a2498 = 0;
      uRam000000000f5a24a0 = 0;
      _DAT_0f5a24a8 = 0;
      uRam000000000f5a24b0 = 0;
      _DAT_0f5a24b8 = 0;
      _DAT_0f5a24c0 = 0;
      _DAT_0f5a24c8 = 0;
      LOCK();
      _DAT_0f5a24d0 = 0;
      UNLOCK();
      _DAT_0f5a24e8 = 0;
      uRam000000000f5a24f0 = 0;
      _DAT_0f5a24d8 = 0;
      uRam000000000f5a24e0 = 0;
      _DAT_0f5a24f8 = 0x3f800000;
      func_0x0eee2f40(&UNK_06cf5e90,&DAT_0f5a2410,0xf53dab8);
      func_0x0410844d(&DAT_0f5a2500);
    }
  }
  if (_DAT_0f5a2468 != 0) {
    lVar26 = (*(code *)(*param_1[0x35])[0x1f])();
    if (lVar26 != 0) {
      ppppppplVar41 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (ppppppplVar41 == (long *******)0x0) {
        FUN_0eec74c0(0x30,0);
      }
      ppppppplVar41[1] = (long ******)0x0;
      ppppppplVar41[2] = (long ******)0x0;
      *ppppppplVar41 = (long ******)&UNK_0f3edac0;
      ppppppplVar41[3] = (long ******)0x0;
      ppppppplVar41[4] = (long ******)0x0;
      ppppppplVar41[5] = (long ******)0x0;
      func_0x06ceb5d0(ppppppplVar41 + 3,param_1[0x35]);
      if (DAT_0f5a2408 == '\0') {
        iVar19 = func_0x04108328(&DAT_0f5a2408);
        if (iVar19 != 0) {
          _DAT_0f5a2360 = 0;
          uRam000000000f5a2368 = 0;
          _DAT_0f5a2350 = 0;
          uRam000000000f5a2358 = 0;
          _DAT_0f5a2340 = 0;
          uRam000000000f5a2348 = 0;
          _DAT_0f5a2330 = 0;
          uRam000000000f5a2338 = 0;
          _DAT_0f5a2320 = 0;
          uRam000000000f5a2328 = 0;
          _DAT_0f5a2310 = 0;
          uRam000000000f5a2318 = 0;
          _DAT_0f5a2300 = 0;
          uRam000000000f5a2308 = 0;
          _DAT_0f5a22f0 = 0;
          uRam000000000f5a22f8 = 0;
          _DAT_0f5a22e0 = 0;
          uRam000000000f5a22e8 = 0;
          _DAT_0f5a22d0 = 0;
          uRam000000000f5a22d8 = 0;
          _DAT_0f5a22c0 = 0;
          uRam000000000f5a22c8 = 0;
          _DAT_0f5a22b0 = 0;
          uRam000000000f5a22b8 = 0;
          _DAT_0f5a22a0 = 0;
          uRam000000000f5a22a8 = 0;
          _DAT_0f5a2370 = 0;
          _DAT_0f5a2378 = 0x3f800000;
          _DAT_0f5a2380 = 0;
          uRam000000000f5a2388 = 0;
          _DAT_0f5a2390 = 0;
          uRam000000000f5a2398 = 0;
          _DAT_0f5a23a0 = 0x3f800000;
          _DAT_0f5a23a8 = 0;
          uRam000000000f5a23b0 = 0;
          _DAT_0f5a23b8 = 0;
          uRam000000000f5a23c0 = 0;
          _DAT_0f5a23c8 = 0;
          uRam000000000f5a23d0 = 0;
          _DAT_0f5a23d8 = 0;
          uRam000000000f5a23e0 = 0;
          _DAT_0f5a23e8 = 0;
          uRam000000000f5a23f0 = 0;
          _DAT_0f5a23f8 = 0;
          _DAT_0f5a2400 = 0x3f800000;
          func_0x0eee2f40(&UNK_06ceba80,&DAT_0f5a22a0,0xf53dab8);
          func_0x0410844d(&DAT_0f5a2408);
        }
      }
      uStack_138 = ppppppplVar41 + 3;
      ppppppplStack_130 = ppppppplVar41;
      func_0x06cec380(&DAT_0f5a22a0,*(undefined4 *)(param_1 + 0x2e),&uStack_138);
      ppppppplVar41 = ppppppplStack_130;
      if (ppppppplStack_130 != (long *******)0x0) {
        LOCK();
        ppppppplVar28 = ppppppplStack_130 + 1;
        pppppplVar25 = *ppppppplVar28;
        *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + -1);
        UNLOCK();
        if (pppppplVar25 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_130)[2])(ppppppplStack_130);
          func_0x0412c2d0(ppppppplVar41);
          goto joined_r0x0ca62587;
        }
      }
    }
  }
joined_r0x0ca62587:
  if ((char)ppppppplStack_170 == '\x01') {
    func_0x0eec86b0(&DAT_0f5463d0,&ppppppplStack_168,uStack_178 + 0xc);
  }
LAB_0ca625a1:
  cVar16 = (*(code *)(*param_1[0x14])[0x13e])();
  if (cVar16 == '\0') {
    pppppplVar25 = ppppppplStack_188[0x7b];
    uVar22 = (*(code *)(*ppppppplStack_188[0x14])[0x50])();
    func_0x0be209f0(pppppplVar25,uVar22);
    lVar26 = (*(code *)(*ppppppplStack_188[0x14])[0xad])();
    if ((**(byte **)(lVar26 + 0x138) & 0x20) != 0) {
      pppppplVar25 = ppppppplStack_188[0x7c];
      if (pppppplVar25[0xb] != (long *****)0x0) {
        ppppplVar33 = pppppplVar25[1];
        ppppplVar34 = pppppplVar25[0xb];
        do {
          func_0x0d280df0(pppppplVar25 + 2,ppppplVar33,*(undefined4 *)(ppppplVar34 + 2));
          ppppplVar32 = (long *****)*ppppplVar34;
          func_0x0d29c1b0(&uStack_138,pppppplVar25 + 9,ppppplVar34);
          ppppppplVar41 = uStack_138;
          uStack_138 = (long *******)0x0;
          if (ppppppplVar41 != (long *******)0x0) {
            func_0x0412a280(ppppppplVar41,0x18);
          }
          ppppplVar34 = ppppplVar32;
        } while (ppppplVar32 != (long *****)0x0);
      }
    }
  }
  cVar16 = (*(code *)(*ppppppplStack_188[0x14])[0x13e])();
  if (cVar16 == '\0') {
    (*(code *)(*ppppppplStack_188[0x14])[0x62])(&uStack_138);
    if (uStack_138 == (long *******)0x0) {
      cVar16 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_0132523b);
      if (cVar16 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (*(char *)uStack_138 == '\0') {
      cVar16 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_0132523b);
      if (cVar16 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    func_0x0d35b6c0(ppppppplStack_128,ppppppplStack_188);
    ppppppplVar41 = ppppppplStack_130;
    uStack_138 = (long *******)0x0;
    ppppppplStack_130 = (long *******)0x0;
    if (ppppppplVar41 != (long *******)0x0) {
      LOCK();
      ppppppplVar28 = ppppppplVar41 + 1;
      pppppplVar25 = *ppppppplVar28;
      *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + -1);
      UNLOCK();
      if (pppppplVar25 == (long ******)0x0) {
        (*(code *)(*ppppppplVar41)[2])(ppppppplVar41);
        func_0x0412c2d0(ppppppplVar41);
      }
      ppppppplVar41 = ppppppplStack_130;
      ppppppplStack_128 = (long *******)0x0;
      if (ppppppplStack_130 != (long *******)0x0) {
        LOCK();
        ppppppplVar28 = ppppppplStack_130 + 1;
        pppppplVar25 = *ppppppplVar28;
        *ppppppplVar28 = (long ******)((long)*ppppppplVar28 + -1);
        UNLOCK();
        if (pppppplVar25 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_130)[2])(ppppppplStack_130);
          func_0x0412c2d0(ppppppplVar41);
        }
      }
    }
  }
  cVar16 = (*(code *)(*ppppppplStack_188[0x14])[0x13e])();
  if (cVar16 == '\0') {
    pppppplVar25 = ppppppplStack_188[0x84];
    if (pppppplVar25 != (long ******)0x0) {
      do {
        ppppplVar33 = pppppplVar25[4];
        ppppplVar34 = pppppplVar25[5];
        if ((ppppplVar33 != ppppplVar34) || (pppppplVar25[7] != pppppplVar25[8])) {
          if ((long)ppppplVar34 - (long)ppppplVar33 == 0x28) {
            ppppplVar32 = pppppplVar25[7];
            ppppplVar38 = pppppplVar25[8];
            if (ppppplVar32 != ppppplVar38) goto LAB_0ca62848;
            if (ppppplVar33 != ppppplVar34) {
              ppppplVar32 = ppppplVar33;
            }
          }
          else {
            ppppplVar32 = pppppplVar25[7];
            ppppplVar38 = pppppplVar25[8];
LAB_0ca62848:
            if ((ppppplVar33 != ppppplVar34) || ((long)ppppplVar38 - (long)ppppplVar32 != 0x28)) {
              func_0x0773d390(&uStack_178,pppppplVar25 + 4,pppppplVar25 + 7);
              uStack_148 = 0;
              uStack_140 = 0;
              ppppppplStack_130 = (long *******)0x100000002;
              ppppppplStack_128 = (long *******)((ulong)ppppppplStack_128 & 0xffffffffffff0000);
              ppppppplStack_120 = (long *******)0x0;
              ppppppplStack_118 = (long *******)0x0;
              uStack_110._0_4_ = 0;
              uStack_138 = (long *******)&UNK_0f0e3210;
              func_0x07751d90(&uStack_108,&uStack_178);
              iStack_d0 = uStack_140;
              uStack_d8 = uStack_148;
              uStack_c8 = 1;
              if (pppplStack_160 != (long ****)0x0) {
                pppplStack_158 = pppplStack_160;
                func_0x0412a280(pppplStack_160,lStack_150 - (long)pppplStack_160);
              }
              if (uStack_178 != (long *******)0x0) {
                ppppppplStack_170 = uStack_178;
                func_0x0412a280(uStack_178,(long)ppppppplStack_168 - (long)uStack_178);
              }
              ppppppplStack_168 = (long *******)(pppppplVar25 + 2);
              iStack_d0 = *(int *)(pppppplVar25 + 3) << 4;
              uStack_d8 = CONCAT44((int)((ulong)pppppplVar25[2] >> 0x20) << 4,
                                   (int)pppppplVar25[2] << 4);
              ppppppplStack_188[0x7e] = ppppppplStack_188[0x7d];
              uStack_178 = ppppppplStack_188;
              ppppppplStack_170 = ppppppplStack_188 + 0x7d;
              (*(code *)(*ppppppplStack_188)[0xb])(ppppppplStack_188,&UNK_0ca75620,&uStack_178);
              plVar29 = (long *)(*(code *)(*ppppppplStack_188[0x14])[0x149])();
              (**(code **)(*plVar29 + 0x40))(plVar29,ppppppplStack_188 + 0x7d,&uStack_138);
              ppppplVar34 = pppppplVar25[5];
              for (ppppplVar33 = pppppplVar25[4]; ppppplVar33 != ppppplVar34;
                  ppppplVar33 = ppppplVar33 + 5) {
                lVar26 = (*(code *)(*ppppppplStack_188[0x1a])[2])
                                   (ppppppplStack_188[0x1a],ppppplVar33);
                lVar26 = *(long *)(lVar26 + 0x68);
                if (*(long *)(lVar26 + 200) != _DAT_0f6eaec0) {
                  if ((DAT_0f6ea578 == '\0') &&
                     (iVar19 = func_0x04108328(&DAT_0f6ea578), iVar19 != 0)) {
                    LOCK();
                    UNLOCK();
                    _DAT_0f6ea570 = _DAT_0f556458;
                    _DAT_0f556458 = _DAT_0f556458 + 1;
                    func_0x0410844d(&DAT_0f6ea578);
                  }
                  uStack_178 = (long *******)CONCAT62(uStack_178._2_6_,_DAT_0f6ea570);
                  lVar20 = func_0x0ce66720(lVar26 + 0x28,&uStack_178);
                  if (lVar20 == 0) {
                    if ((DAT_0f5fb8c8 == '\0') &&
                       (iVar19 = func_0x04108328(&DAT_0f5fb8c8), iVar19 != 0)) {
                      LOCK();
                      UNLOCK();
                      _DAT_0f5fb8c0 = _DAT_0f556458;
                      _DAT_0f556458 = _DAT_0f556458 + 1;
                      func_0x0410844d(&DAT_0f5fb8c8);
                    }
                    uStack_178 = (long *******)CONCAT62(uStack_178._2_6_,_DAT_0f5fb8c0);
                    lVar20 = func_0x0ce66720(lVar26 + 0x28,&uStack_178);
                    if ((lVar20 == 0) && (*(char *)(lVar26 + 0x131) == '\0')) goto LAB_0ca62ad0;
                  }
                  pppppplVar24 = ppppppplStack_188[0x1a];
                  lVar26 = (*(code *)(*pppppplVar24)[0x27])(pppppplVar24,ppppplVar33);
                  if (lVar26 != 0) {
                    uStack_178 = (long *******)
                                 (CONCAT71(uStack_178._1_7_,*(undefined1 *)ppppplVar33) &
                                 0xffffffffffffff0f);
                    uStack_178 = (long *******)
                                 (CONCAT62(uStack_178._2_6_,
                                           CONCAT11(*(undefined1 *)(ppppplVar33 + 1),
                                                    (undefined1)uStack_178)) & 0xffffffffffff0fff);
                    uStack_178._0_4_ =
                         CONCAT22(*(short *)((long)ppppplVar33 + 4) -
                                  *(short *)((long)pppppplVar24 + 0x42),(undefined2)uStack_178);
                    lVar26 = func_0x0cb18130(lVar26 + 0x13d0,&uStack_178);
                    if (((lVar26 != 0) &&
                        (plVar29 = *(long **)(lVar26 + 0x18), plVar29 != (long *)0x0)) &&
                       ((**(code **)(*plVar29 + 0x98))(&uStack_178,plVar29,ppppppplStack_188[0x1a]),
                       uStack_178 != (long *******)0x0)) {
                      pcVar2 = (char *)((long)uStack_178 + 0xc);
                      pcVar2[0] = '\x01';
                      pcVar2[1] = '\0';
                      pcVar2[2] = '\0';
                      pcVar2[3] = '\0';
                      (*(code *)(*ppppppplStack_188)[4])(ppppppplStack_188,ppppplVar33,uStack_178,0)
                      ;
                      ppppppplVar41 = uStack_178;
                      uStack_178 = (long *******)0x0;
                      if (ppppppplVar41 != (long *******)0x0) {
                        (*(code *)(*ppppppplVar41)[1])();
                      }
                    }
                  }
                }
LAB_0ca62ad0:
              }
              uStack_138 = (long *******)&UNK_0f0e3210;
              if (pppplStack_f0 != (long ****)0x0) {
                pppplStack_e8 = pppplStack_f0;
                func_0x0412a280(pppplStack_f0,CONCAT44(uStack_dc,uStack_e0) - (long)pppplStack_f0);
              }
              uVar31 = CONCAT44(uStack_104,uStack_108);
              if (uVar31 != 0) {
                uStack_100 = uVar31;
                func_0x0412a280(uVar31,CONCAT44(uStack_f4,uStack_f8) - uVar31);
              }
              goto LAB_0ca627f0;
            }
          }
          bVar43 = ppppplVar33 == ppppplVar34;
          pppplStack_158 = ppppplVar32[4];
          uStack_178 = (long *******)*ppppplVar32;
          ppppppplStack_170 = (long *******)ppppplVar32[1];
          ppppppplStack_168 = (long *******)ppppplVar32[2];
          pppplStack_160 = ppppplVar32[3];
          lVar26 = 0x10;
          if (bVar43) {
            lVar26 = 0x28;
          }
          lVar26 = (**(code **)((long)*ppppppplStack_188[0x1a] + lVar26))
                             (ppppppplStack_188[0x1a],&uStack_178);
          uStack_108 = (uint)uStack_178;
          uStack_104 = (uint)((ulong)uStack_178 >> 0x20);
          uVar15 = uStack_104;
          if ((int)pppplStack_158 == 0) {
            uStack_138 = (long *******)&UNK_0f0e2db0;
            uStack_104 = (uint)ppppppplStack_170;
            uStack_100._0_5_ = CONCAT14(ppppppplStack_168._0_1_,(uint)bVar43);
            uStack_f4 = 1;
            uStack_110._4_4_ = uStack_108;
            uStack_108 = uVar15;
            uStack_f8 = *(undefined4 *)(lVar26 + 0x11c);
          }
          else {
            pppplStack_f0 = pppplStack_160;
            pppplStack_e8 = pppplStack_158;
            uStack_138 = (long *******)&UNK_0f0e2e50;
            uStack_100 = (ulong)CONCAT14(bVar43,(uint)ppppppplStack_170);
            uStack_f8 = CONCAT31(uStack_f8._1_3_,ppppppplStack_168._0_1_);
            uStack_e0 = 1;
            uStack_f4 = *(undefined4 *)(lVar26 + 0x11c);
          }
          uStack_110._0_4_ = 0;
          ppppppplStack_118 = (long *******)0x0;
          ppppppplStack_120 = (long *******)0x0;
          ppppppplStack_128 = (long *******)((ulong)ppppppplStack_128 & 0xffffffffffff0000);
          ppppppplStack_130 = (long *******)0x100000002;
          (*(code *)(*ppppppplStack_188)[4])(ppppppplStack_188,&uStack_178,&uStack_138,0);
          lVar26 = (*(code *)(*ppppppplStack_188[0x1a])[2])(ppppppplStack_188[0x1a],&uStack_178);
          if (*(long *)(*(long *)(lVar26 + 0x68) + 200) != _DAT_0f6eaec0) {
            cVar16 = func_0x0c6cef20();
            if (cVar16 != '\0') {
              pppppplVar24 = ppppppplStack_188[0x1a];
              lVar26 = (*(code *)(*pppppplVar24)[0x27])(pppppplVar24,&uStack_178);
              if (lVar26 != 0) {
                uStack_138 = (long *******)
                             (CONCAT71(uStack_138._1_7_,(undefined1)uStack_178) & 0xffffffffffffff0f
                             );
                uStack_138 = (long *******)
                             (CONCAT62(uStack_138._2_6_,
                                       CONCAT11((char)ppppppplStack_170,(undefined1)uStack_138)) &
                             0xffffffffffff0fff);
                uStack_138._0_4_ =
                     CONCAT22(uStack_178._4_2_ - *(short *)((long)pppppplVar24 + 0x42),
                              (undefined2)uStack_138);
                lVar26 = func_0x0cb18130(lVar26 + 0x13d0,&uStack_138);
                if (lVar26 != 0) {
                  plVar29 = *(long **)(lVar26 + 0x18);
                  if (plVar29 != (long *)0x0) {
                    (**(code **)(*plVar29 + 0x98))(&uStack_138,plVar29,ppppppplStack_188[0x1a]);
                    if (uStack_138 != (long *******)0x0) {
                      pcVar2 = (char *)((long)uStack_138 + 0xc);
                      pcVar2[0] = '\x01';
                      pcVar2[1] = '\0';
                      pcVar2[2] = '\0';
                      pcVar2[3] = '\0';
                      (*(code *)(*ppppppplStack_188)[4])(ppppppplStack_188,&uStack_178,uStack_138,0)
                      ;
                      ppppppplVar41 = uStack_138;
                      uStack_138 = (long *******)0x0;
                      if (ppppppplVar41 != (long *******)0x0) {
                        (*(code *)(*ppppppplVar41)[1])();
                      }
                    }
                  }
                  goto LAB_0ca627f0;
                }
              }
            }
          }
        }
LAB_0ca627f0:
        pppppplVar25 = (long ******)*pppppplVar25;
      } while (pppppplVar25 != (long ******)0x0);
    }
    if (ppppppplStack_188[0x85] != (long ******)0x0) {
      pppppplVar25 = ppppppplStack_188[0x84];
      while (pppppplVar25 != (long ******)0x0) {
        pppppplVar24 = (long ******)*pppppplVar25;
        ppppplVar33 = pppppplVar25[7];
        if (ppppplVar33 != (long *****)0x0) {
          pppppplVar25[8] = ppppplVar33;
          func_0x0412a280(ppppplVar33,(long)pppppplVar25[9] - (long)ppppplVar33);
        }
        ppppplVar33 = pppppplVar25[4];
        if (ppppplVar33 != (long *****)0x0) {
          pppppplVar25[5] = ppppplVar33;
          func_0x0412a280(ppppplVar33,(long)pppppplVar25[6] - (long)ppppplVar33);
        }
        func_0x0412a280(pppppplVar25,0x50);
        pppppplVar25 = pppppplVar24;
      }
      ppppppplStack_188[0x84] = (long ******)0x0;
      if (ppppppplStack_188[0x83] != (long ******)0x0) {
        func_0x0eee2dd0(ppppppplStack_188[0x82],0,(long)ppppppplStack_188[0x83] << 3);
      }
      ppppppplStack_188[0x85] = (long ******)0x0;
    }
  }
  return;
code_r0x0ca61ac4:
  ppppppplVar41 = (long *******)&ppppppplStack_130;
  ppppppplVar28 = (long *******)&ppppppplStack_130;
  if (ppppppplStack_130 != (long *******)0x0) {
    iVar19 = *(int *)pppppplVar24;
    iVar5 = *(int *)((long)pppppplVar23 + 0x14);
    ppppppplVar35 = ppppppplStack_130;
    do {
      while( true ) {
        ppppppplVar41 = ppppppplVar35;
        iVar6 = *(int *)(ppppppplVar41 + 4);
        bVar43 = SBORROW4(iVar19,iVar6);
        iVar11 = iVar19 - iVar6;
        if (iVar6 <= iVar19) break;
LAB_0ca61980:
        ppppppplVar35 = (long *******)*ppppppplVar41;
        ppppppplVar28 = ppppppplVar41;
        if ((long *******)*ppppppplVar41 == (long *******)0x0) goto LAB_0ca619ad;
      }
      bVar42 = false;
      if (iVar19 == iVar6) {
        iVar6 = *(int *)((long)ppppppplVar41 + 0x24);
        bVar43 = SBORROW4(iVar5,iVar6);
        iVar11 = iVar5 - iVar6;
        bVar42 = iVar5 == iVar6;
        if (iVar5 < iVar6) goto LAB_0ca61980;
      }
      pppppplVar23 = pppppplVar24;
      if (bVar42 || bVar43 != iVar11 < 0) goto LAB_0ca61a12;
      ppppppplVar35 = (long *******)ppppppplVar41[1];
      if ((long *******)ppppppplVar41[1] == (long *******)0x0) {
        ppppppplVar28 = ppppppplVar41 + 1;
        break;
      }
    } while( true );
  }
  goto LAB_0ca619ad;
}


