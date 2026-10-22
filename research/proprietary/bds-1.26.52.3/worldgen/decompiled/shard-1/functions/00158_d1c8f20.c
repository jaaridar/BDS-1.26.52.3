/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c8f20 (ELF vaddr 0xd1c8f20)
 * Label: string:Identifier '%s' failed validation when registering jigsaw st
 * Body:  [[0d2c8f20, 0d2c904d] [0d2c9050, 0d2c9193] [0d2c91a0, 0d2c92b6] [0d2c92c0, 0d2c9354] [0d2c9360, 0d2c9377] [0d2c9380, 0d2c947a] [0d2c9480, 0d2c95dd] [0d2c95e0, 0d2c95f2] [0d2c9600, 0d2c9652] [0d2c9660, 0d2c9766] [0d2c9770, 0d2c97b3] [0d2c97c0, 0d2c9aca] [0d2c9bcf, 0d2c9be6]]
 * Ghidra: FUN_0d2c8f20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2c8f20(long *param_1,uint *param_2,undefined8 *param_3,long param_4,long *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  long *plVar5;
  char cVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  uint *unaff_RBX;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  long lStack_178;
  long *plStack_170;
  uint *puStack_168;
  uint *puStack_160;
  uint *puStack_158;
  long lStack_150;
  long *plStack_148;
  uint *puStack_138;
  uint *puStack_130;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  long lStack_a8;
  undefined8 *puStack_98;
  uint *puStack_90;
  long *plStack_88;
  long lStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint *puStack_68;
  uint *puStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  uint *puStack_40;
  uint **ppuStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar8 = *(uint **)param_2;
  puVar7 = *(uint **)(param_2 + 2);
  puVar13 = (uint *)((long)puVar7 - (long)puVar8);
  puStack_98 = param_3;
  lStack_80 = param_4;
  if (puVar13 == (uint *)0x0) goto LAB_0d2c9015;
  if (0x38e38e38e38e38e < (ulong)(((long)puVar13 >> 3) * -0x71c71c71c71c71c7)) {
LAB_0d2c9abe:
    uVar11 = func_0x0d2dfc30();
    plStack_1a8 = param_1;
    func_0x0d2dfe00(&plStack_1a8);
    func_0x0eee2d70(uVar11);
    pcVar4 = (code *)swi(3);
    plVar9 = (long *)(*pcVar4)();
    return plVar9;
  }
  plStack_e8 = param_1;
  puVar7 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar13);
  if (puVar7 == (uint *)0x0) goto LAB_0d2c9a96;
LAB_0d2c8fbb:
  func_0x0d2dfcf0(0,0,puVar7);
  pbStack_108 = (byte *)*param_1;
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar7;
  plStack_f0 = (long *)param_1[2];
  param_1[2] = (long)((long)puVar13 + (long)puVar7);
  pbStack_100 = pbStack_108;
  pbStack_f8 = pbStack_108;
  func_0x0d2dfc40(&pbStack_108);
  puVar8 = *(uint **)param_2;
  puVar7 = *(uint **)(param_2 + 2);
  unaff_RBX = param_2;
LAB_0d2c9015:
  param_2 = unaff_RBX;
  if (puVar8 == puVar7) {
    return param_1;
  }
  lStack_48 = lStack_80 + 0x110;
  puVar13 = puVar8;
  puStack_138 = puVar7;
  plStack_88 = param_5;
  do {
    cVar6 = func_0x0b5f94a0(puVar13,0x1f,1,0);
    if (cVar6 == '\0') {
      if ((*puVar13 & 1) == 0) {
        pbStack_108 = (byte *)((long)puVar13 + 1);
      }
      else {
        pbStack_108 = *(byte **)(puVar13 + 4);
      }
      func_0x0b646b60(1,3,0x1f,&UNK_0123495b,&pbStack_108);
    }
    else {
      puStack_128 = (uint *)*puStack_98;
      puStack_120 = (uint *)puStack_98[1];
      if (puStack_120 != (uint *)0x0) {
        LOCK();
        *(long *)(puStack_120 + 2) = *(long *)(puStack_120 + 2) + 1;
        UNLOCK();
      }
      puStack_118 = (uint *)puStack_98[2];
      puStack_60 = puStack_120;
      if ((puStack_128 == (uint *)0x0) || ((byte)*puStack_128 == 0)) break;
      plStack_1a8 = (long *)0x0;
      plStack_1a0 = (long *)0x0;
      plStack_198 = (long *)0x0;
      param_2 = *(uint **)(puVar13 + 6);
      puStack_40 = *(uint **)(puVar13 + 8);
      puStack_90 = puVar13;
      if ((long)puStack_40 - (long)param_2 != 0) {
        lVar14 = (long)puStack_40 - (long)param_2 >> 3;
        if ((ulong)(lVar14 * -0x71c71c71c71c71c7) < 0x1000000000000000) {
          plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (plVar9 == (long *)0x0) {
            func_0x0eec74c0(lVar14 * -0x1c71c71c71c71c70);
          }
          plStack_198 = plVar9 + lVar14 * -0x38e38e38e38e38e;
          puVar7 = param_2;
          plStack_1a8 = plVar9;
          plStack_1a0 = plVar9;
          do {
            puStack_78 = puStack_128;
            puStack_70 = puStack_120;
            if (puStack_120 != (uint *)0x0) {
              LOCK();
              *(long *)(puStack_120 + 2) = *(long *)(puStack_120 + 2) + 1;
              UNLOCK();
            }
            puStack_68 = puStack_118;
            puVar13 = &uStack_b8;
            if ((puStack_128 == (uint *)0x0) || ((byte)*puStack_128 == 0)) goto LAB_0d2c9a8c;
            puStack_168 = puStack_128;
            puStack_160 = puStack_120;
            if (puStack_120 != (uint *)0x0) {
              LOCK();
              *(long *)(puStack_120 + 2) = *(long *)(puStack_120 + 2) + 1;
              UNLOCK();
            }
            puStack_158 = puStack_118;
            if ((byte)*puStack_128 == 0) goto LAB_0d2c9a8c;
            lStack_150 = lStack_80;
            plStack_148 = param_5;
            if ((ulong)param_2[0xe] == 0xffffffff) goto LAB_0d2c9a91;
            ppuStack_38 = &puStack_168;
            (**(code **)(&UNK_0f45ed48 + (ulong)param_2[0xe] * 8))(&uStack_188,&ppuStack_38,param_2)
            ;
            puVar8 = puStack_160;
            puStack_168 = (uint *)0x0;
            puStack_160 = (uint *)0x0;
            puStack_130 = param_2;
            if (puVar8 != (uint *)0x0) {
              LOCK();
              puVar7 = puVar8 + 2;
              lVar14 = *(long *)puVar7;
              *(long *)puVar7 = *(long *)puVar7 + -1;
              UNLOCK();
              if (lVar14 == 0) {
                (**(code **)(*(long *)puVar8 + 0x10))(puVar8);
                func_0x0412c2d0(puVar8);
                puVar8 = puStack_160;
                puStack_158 = (uint *)0x0;
                if (puStack_160 != (uint *)0x0) {
                  puStack_158 = (uint *)0x0;
                  LOCK();
                  puVar7 = puStack_160 + 2;
                  lVar14 = *(long *)puVar7;
                  *(long *)puVar7 = *(long *)puVar7 + -1;
                  UNLOCK();
                  if (lVar14 == 0) {
                    (**(code **)(*(long *)puStack_160 + 0x10))(puStack_160);
                    func_0x0412c2d0(puVar8);
                  }
                }
              }
              else {
                puStack_158 = (uint *)0x0;
              }
            }
            puVar8 = puStack_70;
            puStack_78 = (uint *)0x0;
            puStack_70 = (uint *)0x0;
            if (puVar8 == (uint *)0x0) {
              puStack_68 = (uint *)0x0;
joined_r0x0d2c9371:
              if ((uStack_188 & 1) != 0) goto LAB_0d2c9400;
LAB_0d2c93c3:
              lStack_a8 = lStack_178;
              uStack_b8 = uStack_188;
              uStack_b4 = uStack_184;
              uStack_b0 = uStack_180;
              uStack_ac = uStack_17c;
            }
            else {
              LOCK();
              puVar7 = puVar8 + 2;
              lVar14 = *(long *)puVar7;
              *(long *)puVar7 = *(long *)puVar7 + -1;
              UNLOCK();
              if (lVar14 == 0) {
                (**(code **)(*(long *)puVar8 + 0x10))(puVar8);
                func_0x0412c2d0(puVar8);
                puVar8 = puStack_70;
                if (puStack_70 != (uint *)0x0) {
                  puStack_68 = (uint *)0x0;
                  LOCK();
                  puVar7 = puStack_70 + 2;
                  lVar14 = *(long *)puVar7;
                  *(long *)puVar7 = *(long *)puVar7 + -1;
                  UNLOCK();
                  if (lVar14 == 0) {
                    (**(code **)(*(long *)puStack_70 + 0x10))(puStack_70);
                    func_0x0412c2d0(puVar8);
                    goto joined_r0x0d2c9371;
                  }
                }
              }
              puStack_68 = (uint *)0x0;
              if ((uStack_188 & 1) == 0) goto LAB_0d2c93c3;
LAB_0d2c9400:
              FUN_0412e5e0(puVar13,lStack_178,CONCAT44(uStack_17c,uStack_180));
            }
            puVar8 = puStack_130;
            lVar14 = func_0x0d3278e0(lStack_48,puVar13,&plStack_170);
            if ((uStack_b8 & 1) != 0) {
              func_0x0412a280(lStack_a8);
            }
            if (plStack_198 <= plStack_1a0) {
              lVar10 = (long)plStack_1a0 - (long)plStack_1a8;
              uVar17 = (lVar10 >> 4) + 1;
              lStack_50 = lVar14;
              if (uVar17 < 0x1000000000000000) {
                plStack_58 = plStack_1a8;
                uVar15 = (long)plStack_198 - (long)plStack_1a8 >> 3;
                if (uVar15 <= uVar17) {
                  uVar15 = uVar17;
                }
                if (0x7fffffffffffffef < (ulong)((long)plStack_198 - (long)plStack_1a8)) {
                  uVar15 = 0xfffffffffffffff;
                }
                if (uVar15 < 0x1000000000000000) {
                  lVar16 = uVar15 * 0x10;
                  lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar16);
                  if (lVar14 == 0) {
                    func_0x0eec74c0(lVar16,0);
                  }
                  plVar5 = plStack_58;
                  *(long *)(lVar14 + lVar10) = lStack_50;
                  *(uint *)(lVar14 + 8 + lVar10) = (uint)(byte)puStack_130[0x10];
                  plVar9 = (long *)(lVar14 + lVar10);
                  plVar12 = (long *)(lVar14 + lVar10 + (lVar10 >> 4) * -0x10);
                  memcpy(plVar12,plStack_58,lVar10);
                  param_5 = plStack_88;
                  plStack_1a8 = plVar12;
                  plStack_198 = (long *)(lVar16 + lVar14);
                  if (plVar5 != (long *)0x0) {
                    func_0x0412a280(plVar5);
                    param_5 = plStack_88;
                  }
                  goto LAB_0d2c9574;
                }
                FUN_04882eb0();
              }
              func_0x0525e5f0();
              goto LAB_0d2c9aaf;
            }
            *plStack_1a0 = lVar14;
            *(uint *)(plStack_1a0 + 1) = (uint)(byte)puVar8[0x10];
            plVar9 = plStack_1a0;
LAB_0d2c9574:
            puVar7 = puStack_138;
            plVar5 = plStack_170;
            plStack_1a0 = plVar9 + 2;
            plStack_170 = (long *)0x0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x78))();
            }
            param_2 = puStack_130;
            if ((uStack_188 & 1) != 0) {
              func_0x0412a280(lStack_178);
            }
            param_2 = param_2 + 0x12;
          } while (param_2 != puStack_40);
          goto LAB_0d2c9600;
        }
LAB_0d2c9aaf:
        func_0x0525e5f0();
LAB_0d2c9ab4:
        func_0x0d2dfc30();
LAB_0d2c9ab9:
        FUN_04882eb0();
        goto LAB_0d2c9abe;
      }
LAB_0d2c9600:
      puVar13 = puStack_90;
      if ((*puStack_90 & 1) == 0) {
        puStack_158 = *(uint **)(puStack_90 + 4);
        puStack_168 = *(uint **)puStack_90;
        puStack_160 = *(uint **)(puStack_90 + 2);
      }
      else {
        FUN_0412e5e0(&puStack_168,*(long *)(puStack_90 + 4),*(long *)(puStack_90 + 2));
      }
      if ((puVar13[0xc] & 1) == 0) {
        lStack_178 = *(long *)(puVar13 + 0x10);
        uStack_188 = puVar13[0xc];
        uStack_184 = puVar13[0xd];
        uStack_180 = puVar13[0xe];
        uStack_17c = puVar13[0xf];
      }
      else {
        FUN_0412e5e0(&uStack_188,*(long *)(puVar13 + 0x10),*(long *)(puVar13 + 0xe));
      }
      func_0x0d33daa0(&pbStack_108,&puStack_168,&uStack_188,&plStack_1a8);
      if ((uStack_188 & 1) != 0) {
        func_0x0412a280(lStack_178,CONCAT44(uStack_184,uStack_188) & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_168 & 1) != 0) {
        func_0x0412a280(puStack_158,(ulong)puStack_168 & 0xfffffffffffffffe);
      }
      if (plStack_1a8 != (long *)0x0) {
        plStack_1a0 = plStack_1a8;
        func_0x0412a280(plStack_1a8,(long)plStack_198 - (long)plStack_1a8);
      }
      plVar9 = (long *)param_1[1];
      if (plVar9 < (long *)param_1[2]) {
        plVar9[2] = (long)pbStack_f8;
        *plVar9 = (long)pbStack_108;
        plVar9[1] = (long)pbStack_100;
        pbStack_108 = (byte *)0x0;
        pbStack_100 = (byte *)0x0;
        pbStack_f8 = (byte *)0x0;
        plVar9[3] = 0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        plVar9[3] = (long)plStack_f0;
        plVar9[4] = (long)plStack_e8;
        plVar9[5] = lStack_e0;
        plStack_f0 = (long *)0x0;
        plStack_e8 = (long *)0x0;
        lStack_e0 = 0;
        plVar9[8] = lStack_c8;
        *(undefined4 *)(plVar9 + 6) = (undefined4)uStack_d8;
        *(undefined4 *)((long)plVar9 + 0x34) = uStack_d8._4_4_;
        *(undefined4 *)(plVar9 + 7) = (undefined4)uStack_d0;
        *(undefined4 *)((long)plVar9 + 0x3c) = uStack_d0._4_4_;
        uStack_d8 = 0;
        uStack_d0 = 0;
        lStack_c8 = 0;
        param_1[1] = (long)(plVar9 + 9);
      }
      else {
        lVar14 = (long)plVar9 - *param_1;
        uVar17 = (lVar14 >> 3) * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar17) goto LAB_0d2c9ab4;
        lVar10 = param_1[2] - *param_1 >> 3;
        uVar15 = lVar10 * 0x1c71c71c71c71c72;
        if (uVar17 < uVar15) {
          uVar17 = uVar15;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
          uVar17 = 0x38e38e38e38e38e;
        }
        plStack_148 = param_1;
        if (uVar17 == 0) {
          lVar10 = 0;
        }
        else {
          if (0x38e38e38e38e38e < uVar17) goto LAB_0d2c9ab9;
          lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 0x48);
          if (lVar10 == 0) {
            func_0x0eec74c0(uVar17 * 0x48,0);
            lVar10 = 0;
          }
        }
        *(byte **)(lVar10 + 0x10 + lVar14) = pbStack_f8;
        *(long *)(lVar10 + lVar14) = (long)pbStack_108;
        ((long *)(lVar10 + lVar14))[1] = (long)pbStack_100;
        pbStack_108 = (byte *)0x0;
        pbStack_100 = (byte *)0x0;
        pbStack_f8 = (byte *)0x0;
        puVar2 = (undefined8 *)(lVar10 + 0x18 + lVar14);
        *puVar2 = plStack_f0;
        puVar2[1] = plStack_e8;
        *(long *)(lVar10 + 0x28 + lVar14) = lStack_e0;
        plStack_f0 = (long *)0x0;
        plStack_e8 = (long *)0x0;
        lStack_e0 = 0;
        *(long *)(lVar10 + 0x40 + lVar14) = lStack_c8;
        puVar3 = (undefined4 *)(lVar10 + 0x30 + lVar14);
        *puVar3 = (undefined4)uStack_d8;
        puVar3[1] = uStack_d8._4_4_;
        puVar3[2] = (undefined4)uStack_d0;
        puVar3[3] = uStack_d0._4_4_;
        uStack_d8 = 0;
        uStack_d0 = 0;
        lStack_c8 = 0;
        lVar16 = lVar10 + 0x48 + lVar14;
        lVar14 = (*param_1 - param_1[1]) + lVar10 + lVar14;
        func_0x0d2dfcf0(*param_1,param_1[1],lVar14);
        puStack_168 = (uint *)*param_1;
        *param_1 = lVar14;
        param_1[1] = lVar16;
        lStack_150 = param_1[2];
        param_1[2] = lVar10 + uVar17 * 0x48;
        puStack_160 = puStack_168;
        puStack_158 = puStack_168;
        func_0x0d2dfc40(&puStack_168);
        puVar7 = puStack_138;
        param_1[1] = lVar16;
        if ((uStack_d8 & 1) != 0) {
          func_0x0412a280(lStack_c8,uStack_d8 & 0xfffffffffffffffe);
        }
      }
      puVar13 = puStack_90;
      if (plStack_f0 != (long *)0x0) {
        plStack_e8 = plStack_f0;
        func_0x0412a280(plStack_f0,lStack_e0 - (long)plStack_f0);
      }
      if (((ulong)pbStack_108 & 1) != 0) {
        func_0x0412a280(pbStack_f8,(ulong)pbStack_108 & 0xfffffffffffffffe);
      }
      puVar8 = puStack_60;
      puStack_128 = (uint *)0x0;
      puStack_120 = (uint *)0x0;
      if (puStack_60 == (uint *)0x0) {
        puStack_118 = (uint *)0x0;
        param_2 = (uint *)0x0;
      }
      else {
        LOCK();
        puVar1 = puStack_60 + 2;
        lVar14 = *(long *)puVar1;
        *(long *)puVar1 = *(long *)puVar1 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)puStack_60 + 0x10))(puStack_60);
          func_0x0412c2d0(puVar8);
          param_2 = puStack_120;
          puStack_118 = (uint *)0x0;
          if (puStack_120 != (uint *)0x0) {
            puStack_118 = (uint *)0x0;
            LOCK();
            puVar8 = puStack_120 + 2;
            lVar14 = *(long *)puVar8;
            *(long *)puVar8 = *(long *)puVar8 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*(long *)puStack_120 + 0x10))(puStack_120);
              func_0x0412c2d0(param_2);
            }
          }
        }
        else {
          puStack_118 = (uint *)0x0;
          param_2 = puStack_120;
        }
      }
    }
    puVar13 = puVar13 + 0x12;
    if (puVar13 == puVar7) {
      return param_1;
    }
  } while( true );
LAB_0d2c9a8c:
  func_0x04890760();
LAB_0d2c9a91:
  func_0x04931450();
LAB_0d2c9a96:
  func_0x0eec74c0();
  goto LAB_0d2c8fbb;
}


