/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbe38600 (ELF vaddr 0xbd38600)
 * Label: caller-of-callee
 * Body:  [[0be38600, 0be39347] [0be3c196, 0be3c2c7] [0be3c2f3, 0be3c362] [0be3c4f6, 0be3c513] [0be3c627, 0be3c654] [0be3c679, 0be3c6e7]]
 * Ghidra: FUN_0be38600
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0be38600(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong *puVar29;
  long *plVar30;
  byte *pbVar31;
  ulong uVar32;
  long lVar33;
  undefined8 *puVar34;
  long *plVar35;
  long lVar36;
  uint uVar37;
  long *plVar38;
  ulong *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined4 uVar42;
  undefined1 *puVar43;
  undefined4 *puVar44;
  bool bVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  ulong uStack_278;
  undefined8 uStack_268;
  byte bStack_260;
  undefined1 auStack_25f [7];
  undefined8 uStack_258;
  long *plStack_250;
  uint uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  uint uStack_238;
  undefined4 uStack_228;
  uint uStack_218;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  ulong *puStack_1e0;
  byte bStack_1d8;
  undefined4 uStack_1d7;
  undefined2 uStack_1d3;
  undefined1 uStack_1d1;
  char cStack_1d0;
  undefined1 auStack_1cf [7];
  long *plStack_1c8;
  undefined1 auStack_1b8 [24];
  long *plStack_1a0;
  undefined1 auStack_198 [8];
  ulong uStack_190;
  long *plStack_188;
  undefined1 auStack_178 [8];
  ulong uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  byte *pbStack_120;
  ulong *puStack_118;
  undefined1 auStack_108 [16];
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 auStack_68 [16];
  long *plStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  auStack_158._0_8_ = *param_3;
  auStack_148._0_8_ = param_3[1];
  lVar23 = param_1[1];
  _auStack_178 = (undefined1  [16])0x0;
  puStack_168 = (undefined1 *)0x0;
  auStack_108 = (undefined1  [16])0x0;
  plStack_f8 = (long *)0x0;
  puStack_50 = &UNK_0ef9fd98;
  uStack_48 = 0;
  if (lStack_38 == 0) {
    stack0xfffffffffffffe8a = SUB1614((undefined1  [16])0x0,2);
    auVar66._14_2_ = 0;
    auVar66._0_14_ = stack0xfffffffffffffe8a;
    _auStack_178 = auVar66 << 0x10;
    uVar15 = 0;
    uVar18 = 0;
  }
  else {
    func_0x0412ffc0(auStack_178,lStack_38,0);
    uVar18 = (ulong)auStack_178[0];
    uVar15 = uStack_170;
  }
  uVar32 = uVar18 >> 1;
  puVar43 = auStack_178 + 1;
  puVar40 = puVar43;
  if ((uVar18 & 1) != 0) {
    uVar32 = uVar15;
    puVar40 = puStack_168;
  }
  func_0x0ee11d90(&puStack_50,puVar40,uVar32);
  bVar45 = (auStack_178[0] & 1) == 0;
  auStack_1f8._0_8_ = puVar43;
  puVar40 = puStack_168;
  if (bVar45) {
    puVar40 = puVar43;
  }
  puVar39 = *(ulong **)(lVar23 + 0x18);
  uVar15 = (ulong)(auStack_178[0] >> 1);
  if (!bVar45) {
    uVar15 = uStack_170;
  }
  bVar45 = ((byte)puVar39[4] & 1) != 0;
  pbVar31 = (byte *)((long)puVar39 + 0x21);
  if (bVar45) {
    pbVar31 = (byte *)puVar39[6];
  }
  uVar32 = (ulong)(byte)((byte)puVar39[4] >> 1);
  if (bVar45) {
    uVar32 = puVar39[5];
  }
  plStack_1a0 = param_1;
  if (uVar32 == 0) {
    auStack_1b8._0_4_ = 1;
LAB_0be38773:
    uVar32 = uVar32 + 1;
    uVar18 = uVar15 - uVar32;
    if (uVar15 < uVar32) goto LAB_0be3c2a8;
    if (uVar18 < 0xfffffffffffffff8) {
      if (uVar18 < 0x17) {
        uStack_268._0_4_ = CONCAT31(uStack_268._1_3_,(byte)uVar18 * '\x02');
        lVar14 = (long)&uStack_268 + 1;
        if (uVar15 != uVar32) goto LAB_0be38bc7;
        *(undefined1 *)(lVar14 + uVar18) = 0;
      }
      else {
        lVar33 = 0x1a;
        if ((uVar18 | 7) != 0x17) {
          lVar33 = (uVar18 | 7) + 1;
        }
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar33);
        if (lVar14 == 0) {
          func_0x0eec74c0(lVar33,0);
        }
        uStack_258._0_4_ = (uint)lVar14;
        uStack_258._4_4_ = (undefined4)((ulong)lVar14 >> 0x20);
        uStack_268._0_4_ = (uint)lVar33 | 1;
        uStack_268._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
        auStack_25f = SUB87(uVar18 >> 8,0);
        bStack_260 = (byte)uVar18;
LAB_0be38bc7:
        func_0x0eee2ee0(lVar14,puVar40 + uVar32,uVar18);
        *(undefined1 *)(lVar14 + uVar18) = 0;
      }
      if ((auStack_178[0] & 1) != 0) {
        func_0x0412a280(puStack_168,(ulong)auStack_178 & 0xfffffffffffffffe);
      }
      puStack_168 = (undefined1 *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
      auStack_178._4_4_ = uStack_268._4_4_;
      auStack_178._0_4_ = (uint)uStack_268;
      uStack_170._1_7_ = auStack_25f;
      uStack_170._0_1_ = bStack_260;
      goto LAB_0be387fa;
    }
LAB_0be3c2ad:
    func_0x04882e30();
  }
  else {
    if ((long)uVar15 < (long)uVar32) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auStack_1b8._4_12_;
      auStack_1b8._0_16_ = auVar6 << 0x20;
    }
    else {
      puVar43 = puVar40 + uVar15;
      bVar1 = *pbVar31;
      uVar26 = uVar15;
      puVar13 = puVar40;
      puStack_1e0 = puVar39;
      do {
        puVar41 = puVar43;
        if (uVar26 - uVar32 == -1) break;
        puVar13 = (undefined1 *)memchr(puVar13,(int)(char)bVar1);
        if (puVar13 == (undefined1 *)0x0) break;
        iVar12 = func_0x0eee3000(puVar13,pbVar31,uVar32);
        puVar41 = puVar13;
        if (iVar12 == 0) break;
        puVar13 = puVar13 + 1;
        uVar26 = (long)puVar43 - (long)puVar13;
        puVar41 = puVar43;
      } while ((long)uVar32 <= (long)uVar26);
      auStack_1b8._0_4_ =
           (int)CONCAT71((int7)(uVar18 >> 8),puVar41 == puVar40 && puVar41 != puVar43);
      bVar1 = *pbVar31;
      uVar18 = uVar15;
      puVar13 = puVar40;
      do {
        puVar39 = puStack_1e0;
        if ((uVar18 - uVar32 == -1) ||
           (puVar13 = (undefined1 *)memchr(puVar13,(int)(char)bVar1), puVar39 = puStack_1e0,
           puVar13 == (undefined1 *)0x0)) break;
        iVar12 = func_0x0eee3000(puVar13,pbVar31,uVar32);
        puVar39 = puStack_1e0;
        if (iVar12 == 0) {
          if (puVar13 == puVar40 && puVar13 != puVar43) goto LAB_0be38773;
          break;
        }
        puVar13 = puVar13 + 1;
        uVar18 = (long)puVar43 - (long)puVar13;
      } while ((long)uVar32 <= (long)uVar18);
    }
    uStack_258 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
    if ((uVar15 <= _DAT_0f5463f8) ||
       (uStack_258 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258),
       puVar40[_DAT_0f5463f8] != '_')) goto LAB_0be3c208;
    iVar12 = (**(code **)(*puVar39 + 0x18))();
    if (iVar12 != 0) goto LAB_0be3c208;
LAB_0be387fa:
    puVar43 = auStack_178 + 1;
    if ((auStack_178[0] & 1) == 0) {
      uVar15 = (ulong)(auStack_178[0] >> 1);
    }
    else {
      uVar15 = uStack_170;
      puVar43 = puStack_168;
    }
    uVar18 = _DAT_0f5463f8;
    if (uVar15 < _DAT_0f5463f8) {
      uVar18 = uVar15;
    }
    if (0xfffffffffffffff7 < uVar18) {
      func_0x04882e30();
LAB_0be3c29e:
      func_0x04882ee0();
LAB_0be3c2a3:
      func_0x04882e30();
LAB_0be3c2a8:
      func_0x04882ee0();
      goto LAB_0be3c2ad;
    }
    if (uVar18 < 0x17) {
      uStack_268._0_4_ = CONCAT31(uStack_268._1_3_,(byte)uVar18 * '\x02');
      lVar14 = (long)&uStack_268 + 1;
      if (uVar18 != 0) goto LAB_0be3899d;
    }
    else {
      lVar33 = 0x1a;
      if ((uVar18 | 7) != 0x17) {
        lVar33 = (uVar18 | 7) + 1;
      }
      lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar33);
      if (lVar14 == 0) {
        func_0x0eec74c0(lVar33,0);
      }
      uStack_258._0_4_ = (uint)lVar14;
      uStack_258._4_4_ = (undefined4)((ulong)lVar14 >> 0x20);
      uStack_268._0_4_ = (uint)lVar33 | 1;
      uStack_268._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
      auStack_25f = SUB87(uVar18 >> 8,0);
      bStack_260 = (byte)uVar18;
LAB_0be3899d:
      func_0x0eee2ee0(lVar14,puVar43,uVar18);
    }
    lVar33 = (long)&uStack_268 + 1;
    *(undefined1 *)(lVar14 + uVar18) = 0;
    bVar45 = ((uint)uStack_268 & 1) == 0;
    lVar14 = CONCAT44(uStack_258._4_4_,(uint)uStack_258);
    if (bVar45) {
      lVar14 = lVar33;
    }
    uVar15 = (ulong)((byte)uStack_268 >> 1);
    if (!bVar45) {
      uVar15 = CONCAT71(auStack_25f,bStack_260);
    }
    auVar66 = func_0x0eedb4e0(lVar14,uVar15);
    lVar14 = auVar66._8_8_;
    puVar39 = auVar66._0_8_;
    if (((uint)uStack_268 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_258._4_4_,(uint)uStack_258),
                      CONCAT44(uStack_268._4_4_,(uint)uStack_268) & 0xfffffffffffffffe);
    }
    uVar15 = _DAT_0f5463f8;
    if ((auStack_178[0] & 1) == 0) {
      uVar18 = (ulong)(auStack_178[0] >> 1);
    }
    else {
      uVar18 = uStack_170;
    }
    uVar32 = uVar18 - _DAT_0f5463f8;
    if (uVar18 < _DAT_0f5463f8) goto LAB_0be3c29e;
    if ((auStack_178[0] & 1) != 0) {
      auStack_1f8._0_8_ = puStack_168;
    }
    if (0xfffffffffffffff7 < uVar32) goto LAB_0be3c2a3;
    if (uVar32 < 0x17) {
      uStack_268._0_4_ = CONCAT31(uStack_268._1_3_,(byte)uVar32 * '\x02');
      if (uVar18 != _DAT_0f5463f8) goto LAB_0be38b44;
      *(undefined1 *)(lVar33 + uVar32) = 0;
    }
    else {
      lVar36 = 0x1a;
      if ((uVar32 | 7) != 0x17) {
        lVar36 = (uVar32 | 7) + 1;
      }
      lVar33 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar36);
      if (lVar33 == 0) {
        func_0x0eec74c0(lVar36,0);
      }
      uStack_258._0_4_ = (uint)lVar33;
      uStack_258._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
      uStack_268._0_4_ = (uint)lVar36 | 1;
      uStack_268._4_4_ = (undefined4)((ulong)lVar36 >> 0x20);
      auStack_25f = SUB87(uVar32 >> 8,0);
      bStack_260 = (byte)uVar32;
LAB_0be38b44:
      func_0x0eee2ee0(lVar33,auStack_1f8._0_8_ + uVar15,uVar32);
      *(undefined1 *)(lVar33 + uVar32) = 0;
    }
    if ((auStack_108[0] & 1) != 0) {
      func_0x0412a280(plStack_f8,auStack_108._0_8_ & 0xfffffffffffffffe);
    }
    auVar8._8_8_ = _DAT_0f7ba060;
    auVar8._0_8_ = _DAT_0f7ba058;
    plStack_f8 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
    auStack_108._4_4_ = uStack_268._4_4_;
    auStack_108._0_4_ = (uint)uStack_268;
    auStack_108._9_7_ = auStack_25f;
    auStack_108[8] = bStack_260;
    uStack_258 = plStack_f8;
    if (auVar66 == auVar8) {
LAB_0be3c1e5:
      if ((auStack_108[0] & 1) != 0) {
        func_0x0412a280(plStack_f8,auStack_108._0_8_ & 0xfffffffffffffffe);
      }
LAB_0be3c208:
      if ((auStack_178[0] & 1) != 0) {
        func_0x0412a280(puStack_168,(ulong)auStack_178 & 0xfffffffffffffffe);
      }
      return;
    }
    if (auStack_1b8[0] != '\0') {
LAB_0be39023:
      uStack_b8 = &UNK_0ef9fd98;
      uStack_b0 = 0;
      plStack_a8 = (long *)auStack_158._0_8_;
      uStack_a0 = auStack_148._0_8_;
      func_0x0d6c71b0(&plStack_f0,&uStack_b8);
      uStack_258 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
      if (plStack_f0 != (long *)0x0) {
        uVar15 = *(ulong *)(lVar23 + 0x70);
        if (uVar15 != 0) {
          uVar32 = lVar14 * 0x1f1f1f1f ^ (ulong)puVar39;
          uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
          uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar18 >> 0x38 < 2) {
            uVar26 = uVar15 - 1 & uVar32;
          }
          else {
            uVar26 = uVar32;
            if (uVar15 <= uVar32) {
              uVar26 = uVar32 % uVar15;
            }
          }
          plVar16 = *(long **)(*(long *)(lVar23 + 0x68) + uVar26 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            if ((byte)(uVar18 >> 0x38) < 2) {
              do {
                if (plVar16[1] == uVar32) {
                  if (((ulong *)plVar16[2] == puVar39) && (plVar16[3] == lVar14)) goto LAB_0be391c4;
                }
                else if ((plVar16[1] & uVar15 - 1) != uVar26) break;
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
            }
            else {
              do {
                uVar18 = plVar16[1];
                if (uVar18 == uVar32) {
                  if (((ulong *)plVar16[2] == puVar39) && (plVar16[3] == lVar14)) goto LAB_0be391c4;
                }
                else {
                  if (uVar15 <= uVar18) {
                    if ((uVar18 | uVar15) >> 0x20 == 0) {
                      uVar18 = (uVar18 & 0xffffffff) % (uVar15 & 0xffffffff);
                    }
                    else {
                      uVar18 = uVar18 % uVar15;
                    }
                  }
                  if (uVar18 != uVar26) break;
                }
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
            }
          }
        }
        uVar24 = *(undefined8 *)(lVar23 + 0x18);
        plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2d0);
        if (plVar16 == (long *)0x0) {
          func_0x0eec74c0(0x2d0,0);
        }
        *(undefined1 (*) [16])(plVar16 + 1) = (undefined1  [16])0x0;
        *plVar16 = (long)&UNK_0f33bb48;
        plVar20 = plVar16 + 3;
        func_0x0be0e9d0(plVar20,uVar24,puVar39,lVar14,&UNK_01de6224);
        uStack_268._0_4_ = (uint)puVar39;
        uStack_268._4_4_ = (undefined4)((ulong)puVar39 >> 0x20);
        bStack_260 = auVar66[8];
        auStack_25f = auVar66._9_7_;
        LOCK();
        plVar16[1] = plVar16[1] + 1;
        UNLOCK();
        plStack_250 = plVar16;
        plStack_80 = plVar20;
        plStack_78 = plVar16;
        uStack_258 = plVar20;
        func_0x0be3c990((long *)(lVar23 + 0x68),puVar39,lVar14,&uStack_268);
        plVar16 = plStack_250;
        if (plStack_250 != (long *)0x0) {
          LOCK();
          plVar20 = plStack_250 + 1;
          lVar23 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar23 == 0) {
            (**(code **)(*plStack_250 + 0x10))(plStack_250);
            func_0x0412c2d0(plVar16);
          }
        }
        goto LAB_0be39310;
      }
      goto LAB_0be3c1e5;
    }
    lVar33 = *(long *)(lVar23 + 0x18);
    bVar1 = *(byte *)(lVar33 + 0x20);
    if ((bVar1 & 1) == 0) {
      uVar15 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar15 = *(ulong *)(lVar33 + 0x28);
    }
    uVar18 = uVar15 + 8;
    puStack_1e0 = puVar39;
    if (uVar18 < 0xfffffffffffffff8) {
      cVar10 = (char)uVar18;
      if (uVar18 < 0x17) {
        auStack_1cf = (undefined1  [7])0x0;
        plStack_1c8 = (long *)0x0;
        bStack_1d8 = cVar10 * '\x02';
        uStack_1d7 = 0x4c4c4956;
        uStack_1d3 = 0x4741;
        uStack_1d1 = 0x45;
        cStack_1d0 = '_';
        plVar16 = (long *)auStack_1cf;
        if (uVar15 != 0) {
          if ((bVar1 & 1) == 0) goto LAB_0be38cf1;
LAB_0be38c78:
          lVar33 = *(long *)(lVar33 + 0x30);
          goto LAB_0be38cf5;
        }
      }
      else {
        lVar36 = 0x1a;
        if ((uVar18 | 7) != 0x17) {
          lVar36 = (uVar18 | 7) + 1;
        }
        plStack_1c8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar36);
        if (plStack_1c8 == (long *)0x0) {
          func_0x0eec74c0(lVar36,0);
        }
        bStack_1d8 = (byte)lVar36 | 1;
        uStack_1d7 = (undefined4)((ulong)lVar36 >> 8);
        uStack_1d3 = (undefined2)((ulong)lVar36 >> 0x28);
        uStack_1d1 = (undefined1)((ulong)lVar36 >> 0x38);
        auStack_1cf = SUB87(uVar18 >> 8,0);
        *plStack_1c8 = 0x5f4547414c4c4956;
        plVar16 = plStack_1c8 + 1;
        cStack_1d0 = cVar10;
        if ((bVar1 & 1) != 0) goto LAB_0be38c78;
LAB_0be38cf1:
        lVar33 = lVar33 + 0x21;
LAB_0be38cf5:
        func_0x0eee2ee0(plVar16,lVar33,uVar15);
      }
      plVar20 = (long *)&uStack_1d7;
      *(undefined1 *)((long)plVar16 + uVar15) = 0;
      if ((bStack_1d8 & 1) == 0) {
        if (bStack_1d8 == 0x2c) {
          uVar15 = 0x16;
          lVar33 = 0x30;
LAB_0be38da5:
          uVar32 = uVar15 + 1;
          goto LAB_0be38da9;
        }
        uVar18 = (ulong)(bStack_1d8 >> 1);
        bStack_1d8 = bStack_1d8 + 2;
      }
      else {
        uVar18 = CONCAT71(auStack_1cf,cStack_1d0);
        uVar32 = CONCAT17(uStack_1d1,CONCAT25(uStack_1d3,CONCAT41(uStack_1d7,bStack_1d8))) &
                 0xfffffffffffffffe;
        uVar15 = uVar32 - 1;
        if (uVar18 == uVar15) {
          if (uVar32 == 0xfffffffffffffff8) goto LAB_0be3c2b7;
          lVar33 = -9;
          plVar20 = plStack_1c8;
          if (uVar15 < 0x7ffffffffffffff3) {
            uVar18 = uVar15 * 2 | 7;
            lVar36 = 0x1a;
            if (uVar18 != 0x17) {
              lVar36 = uVar18 + 1;
            }
            lVar33 = 0x17;
            if (0xb < uVar15) {
              lVar33 = lVar36;
            }
            goto LAB_0be38da5;
          }
LAB_0be38da9:
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar33);
          if (plVar16 == (long *)0x0) {
            func_0x0eec74c0(lVar33,0);
          }
          func_0x0eee2ee0(plVar16,plVar20,uVar15);
          if (uVar32 != 0x17) {
            func_0x0412a280(plVar20,uVar32);
          }
          bStack_1d8 = (byte)lVar33 | 1;
          uStack_1d7 = (undefined4)((ulong)lVar33 >> 8);
          uStack_1d3 = (undefined2)((ulong)lVar33 >> 0x28);
          uStack_1d1 = (undefined1)((ulong)lVar33 >> 0x38);
          uVar18 = uVar15;
          plStack_1c8 = plVar16;
        }
        cStack_1d0 = (char)(uVar18 + 1);
        auStack_1cf = SUB87(uVar18 + 1 >> 8,0);
        plVar20 = plStack_1c8;
      }
      puVar39 = puStack_1e0;
      *(undefined2 *)((long)plVar20 + uVar18) = 0x5f;
      plStack_a8 = plStack_1c8;
      uStack_b8 = (undefined *)
                  CONCAT17(uStack_1d1,CONCAT25(uStack_1d3,CONCAT41(uStack_1d7,bStack_1d8)));
      uStack_b0 = CONCAT71(auStack_1cf,cStack_1d0);
      bStack_1d8 = 0;
      uStack_1d7 = 0;
      uStack_1d3 = 0;
      uStack_1d1 = 0;
      cStack_1d0 = '\0';
      auStack_1cf = (undefined1  [7])0x0;
      plStack_1c8 = (long *)0x0;
      uStack_258._0_4_ = (uint)((ulong)puStack_1e0 >> 0x10) & 0xffff;
      uStack_248 = (uint)puStack_1e0 & 0xffff;
      uStack_218 = auVar66._8_4_ & 0xffff;
      uStack_268._0_4_ = (uint)((ulong)puStack_1e0 >> 0x20);
      uStack_238 = (uint)auVar66._14_2_;
      uStack_228 = auVar66._10_4_;
      func_0x0470d9a0(auStack_198,&UNK_01287ba2,0x28,0x122112,&uStack_268);
      uVar15 = (ulong)auStack_198 >> 1 & 0x7f;
      plVar16 = (long *)(auStack_198 + 1);
      if (((ulong)auStack_198 & 1) != 0) {
        uVar15 = uStack_190;
        plVar16 = plStack_188;
      }
      pauVar17 = (undefined1 (*) [16])func_0x0412f8c0(&uStack_b8,plVar16,uVar15);
      plVar16 = plStack_1a0;
      uStack_128 = *(ulong *)pauVar17[1];
      uStack_138 = *(ulong *)*pauVar17;
      uStack_130 = *(ulong *)(*pauVar17 + 8);
      *pauVar17 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar17[1] = 0;
      if (((ulong)auStack_198 & 1) != 0) {
        func_0x0412a280(plStack_188,(ulong)auStack_198 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_b8 & 1) != 0) {
        func_0x0412a280(plStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
      }
      if ((bStack_1d8 & 1) != 0) {
        func_0x0412a280(plStack_1c8,
                        CONCAT17(uStack_1d1,CONCAT25(uStack_1d3,CONCAT41(uStack_1d7,bStack_1d8))) &
                        0xfffffffffffffffe);
      }
      uVar18 = uStack_138 >> 1 & 0x7f;
      uVar15 = (long)&uStack_138 + 1;
      if ((uStack_138 & 1) != 0) {
        uVar18 = uStack_130;
        uVar15 = uStack_128;
      }
      cVar10 = (**(code **)(*(long *)plVar16[2] + 0x28))((long *)plVar16[2],uVar15,uVar18,0xc);
      if ((uStack_138 & 1) != 0) {
        func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
      }
      uStack_258 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
      if (cVar10 != '\0') goto LAB_0be3c1e5;
      goto LAB_0be39023;
    }
  }
  func_0x04882e30();
LAB_0be3c2b7:
  func_0x04882e30();
code_r0x0be3c2bc:
  FUN_04882eb0();
code_r0x0be3c2c1:
  uVar24 = func_0x06e0f900();
  if ((bStack_260 & 1) != 0) {
    func_0x0412a280(plStack_250,CONCAT71(auStack_25f,bStack_260) & 0xfffffffffffffffe);
  }
  if ((uStack_130 & 1) != 0) {
    func_0x0412a280(pbStack_120,uStack_130 & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_198 & 1) != 0) {
    func_0x0412a280(plStack_188,(ulong)auStack_198 & 0xfffffffffffffffe);
  }
  func_0x0536d190(&plStack_80);
  plVar16 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
  if ((auStack_108[0] & 1) != 0) goto LAB_0be3c695;
  do {
    while ((auStack_178[0] & 1) != 0) {
      func_0x0412a280(puStack_168,(ulong)auStack_178 & 0xfffffffffffffffe);
      uVar24 = func_0x0eee2d70(uVar24);
    }
    func_0x0eee2d70(uVar24);
LAB_0be3c695:
    func_0x0412a280(plStack_f8,auStack_108._0_8_ & 0xfffffffffffffffe);
  } while( true );
LAB_0be391c4:
  plStack_80 = (long *)plVar16[4];
  plStack_78 = (long *)plVar16[5];
  uStack_258 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
  if (plStack_78 != (long *)0x0) {
    LOCK();
    plStack_78[1] = plStack_78[1] + 1;
    UNLOCK();
    uStack_258 = (long *)CONCAT44(uStack_258._4_4_,(uint)uStack_258);
  }
LAB_0be39310:
  plVar20 = plStack_80;
  plVar16 = plStack_f0;
  if ((auStack_108[0] & 1) == 0) {
    uVar15 = (ulong)(auStack_108[0] >> 1);
  }
  else {
    uVar15 = auStack_108._8_8_;
  }
  switch(uVar15) {
  case 4:
    plVar21 = plStack_f8;
    if ((auStack_108[0] & 1) == 0) {
      plVar21 = (long *)(auStack_108 + 1);
    }
    if ((int)*plVar21 == 0x494f505f) {
      auStack_148._0_8_ = plStack_80[2];
      if (*(long *)(plStack_80[2] + 0x3d8) != 0) {
        uStack_268._0_4_ = 0x13d4bf7;
        uStack_268._4_4_ = 0;
        bStack_260 = 3;
        auStack_25f = (undefined1  [7])0x0;
        plVar21 = (long *)func_0x0d6c97a0(plStack_f0 + 1,&uStack_268);
        if (((plVar21 != plVar16 + 2) && ((int)plVar21[0xc] == 9)) &&
           (lVar23 = plVar21[8], 0 < (int)((ulong)(plVar21[9] - lVar23) >> 3))) {
          uStack_98 = plVar20 + 0xc;
          plVar16 = (long *)0x0;
          plStack_58 = plVar21;
          do {
            plVar22 = *(long **)(lVar23 + (long)plVar16 * 8);
            cVar10 = (**(code **)(*plVar22 + 0x30))(plVar22);
            if (cVar10 == '\n') {
              uStack_268._0_4_ = 0x1385f33;
              uStack_268._4_4_ = 0;
              bStack_260 = 10;
              auStack_25f = (undefined1  [7])0x0;
              plVar21 = (long *)func_0x0d6c97a0(plVar22 + 1,&uStack_268);
              if ((plVar21 == plVar22 + 2) || ((int)plVar21[0xc] != 4)) {
                plVar35 = (long *)0x0;
              }
              else {
                plVar35 = (long *)plVar21[8];
              }
              uStack_268._0_4_ = 0x142e542;
              uStack_268._4_4_ = 0;
              bStack_260 = 9;
              auStack_25f = (undefined1  [7])0x0;
              plStack_70 = plVar35;
              plVar38 = (long *)func_0x0d6c9880(plVar22 + 1,&uStack_268);
              plVar21 = plStack_58;
              plStack_88 = plVar16;
              if ((plVar38 != plVar22 + 2) && ((int)plVar38[0xc] == 9)) {
                auStack_1f8._0_8_ = plVar38[9] - plVar38[8];
                uStack_248 = 0;
                uStack_244 = 0;
                uStack_240 = 0;
                uStack_258._0_4_ = 0;
                uStack_258._4_4_ = 0;
                plStack_250 = (long *)0x0;
                uStack_268._0_4_ = 0;
                uStack_268._4_4_ = 0;
                bStack_260 = 0;
                auStack_25f = (undefined1  [7])0x0;
                lVar23 = func_0x0be33620(uStack_98,plVar35,&plStack_70);
                uStack_268._0_4_ = 0;
                uStack_268._4_4_ = 0;
                bStack_260 = 0;
                auStack_25f = (undefined1  [7])0x0;
                *(undefined1 (*) [16])(lVar23 + 0x18) = (undefined1  [16])0x0;
                if (*(long *)(lVar23 + 0x20) != 0) {
                  func_0x0412c2d0();
                }
                *(undefined1 (*) [16])(lVar23 + 0x28) = (undefined1  [16])0x0;
                if (*(long *)(lVar23 + 0x30) != 0) {
                  func_0x0412c2d0();
                }
                lVar33 = *(long *)(lVar23 + 0x40);
                *(ulong *)(lVar23 + 0x38) = CONCAT44(uStack_244,uStack_248);
                *(undefined8 *)(lVar23 + 0x40) = uStack_240;
                plStack_c0 = plVar35;
                if (lVar33 != 0) {
                  func_0x0412c2d0();
                }
                auVar66 = auStack_1f8;
                iVar12 = (int)((ulong)auStack_1f8._0_8_ >> 3);
                plVar16 = plStack_88;
                plVar21 = plStack_58;
                if (0 < iVar12) {
                  auStack_1f8._0_4_ = iVar12 - 1;
                  if (1 < (uint)auStack_1f8._0_4_) {
                    auStack_1f8._0_4_ = 2;
                  }
                  auStack_1f8._4_4_ = 0;
                  auStack_1f8._8_8_ = auVar66._8_8_;
                  auStack_1b8._0_8_ = plVar38;
                  uVar15 = 0;
                  do {
                    plVar16 = *(long **)(plVar38[8] + uVar15 * 8);
                    cVar10 = (**(code **)(*plVar16 + 0x30))(plVar16);
                    if (cVar10 == '\n') {
                      uStack_268._0_4_ = 0x1cb3671;
                      uStack_268._4_4_ = 0;
                      bStack_260 = 4;
                      auStack_25f = (undefined1  [7])0x0;
                      plVar21 = plVar16 + 1;
                      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                      plVar16 = plVar16 + 2;
                      if (((plVar22 == plVar16) || ((int)plVar22[0xc] != 1)) ||
                         ((char)plVar22[8] == '\0')) {
                        uStack_268._0_4_ = 0x1cb3551;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 1;
                        auStack_25f = (undefined1  [7])0x0;
                        plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                        if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
                          uVar46 = 0;
                        }
                        else {
                          uVar46 = (undefined4)plVar22[8];
                        }
                        uStack_268._0_4_ = 0x1cb3569;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 1;
                        auStack_25f = (undefined1  [7])0x0;
                        plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                        if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
                          uVar42 = 0;
                        }
                        else {
                          uVar42 = (undefined4)plVar22[8];
                        }
                        uStack_268._0_4_ = 0x1cb3581;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 1;
                        auStack_25f = (undefined1  [7])0x0;
                        plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                        if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
                          uStack_c4 = 0;
                        }
                        else {
                          uStack_c4 = (undefined4)plVar22[8];
                        }
                        uStack_268._0_4_ = 0x1cb35c9;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 4;
                        auStack_25f = (undefined1  [7])0x0;
                        uStack_cc = uVar46;
                        uStack_c8 = uVar42;
                        plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                        if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
                          uVar37 = 0;
                        }
                        else {
                          uVar37 = *(uint *)(plVar22 + 8);
                          if (2 < uVar37) goto code_r0x0be39668;
                        }
                        uStack_268._0_4_ = 0x1cb3611;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 10;
                        auStack_25f = (undefined1  [7])0x0;
                        plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                        if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
                          plStack_1a0 = (long *)0x0;
                        }
                        else {
                          plStack_1a0 = (long *)plVar22[8];
                          if ((long)plStack_1a0 < 0) goto code_r0x0be39668;
                        }
                        puVar39 = *(ulong **)(auStack_148._0_8_ + 0x3d8);
                        uVar18 = CONCAT44(0,uVar37);
                        auStack_158._0_8_ = uVar18;
                        lVar23 = func_0x0be3e490(puVar39[uVar18 * 5 + 0x12],
                                                 puVar39[uVar18 * 5 + 0x13],&uStack_cc);
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) {
                          uStack_268._0_4_ = 0x1cb3599;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 4;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          if (plVar22 == plVar16) {
                            plVar35 = (long *)0x0;
                          }
                          else {
                            plVar35 = plVar22 + 7;
                            if ((int)plVar22[0xc] != 8) {
                              plVar35 = (long *)0x0;
                            }
                          }
                          puStack_1e0 = (ulong *)(plVar35 + 1);
                          if (plVar35 == (long *)0x0) {
                            puStack_1e0 = (ulong *)&UNK_01e79d90;
                          }
                          uStack_268._0_4_ = 0x1cb35b1;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 9;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          if (plVar22 == plVar16) {
                            plVar35 = (long *)0x0;
                          }
                          else {
                            plVar35 = plVar22 + 7;
                            if ((int)plVar22[0xc] != 8) {
                              plVar35 = (long *)0x0;
                            }
                          }
                          puVar29 = (ulong *)(plVar35 + 1);
                          if (plVar35 == (long *)0x0) {
                            puVar29 = (ulong *)&UNK_01e79d90;
                          }
                          if ((*puVar29 & 1) == 0) {
                            plStack_188 = (long *)puVar29[2];
                            auStack_198 = (undefined1  [8])*puVar29;
                            uStack_190 = puVar29[1];
                          }
                          else {
                            func_0x0412e5e0(auStack_198,puVar29[2],puVar29[1]);
                          }
                          if ((char)plVar20[0x2b] == '\0') {
                            uVar18 = uStack_190;
                            if (((ulong)auStack_198 & 1) == 0) {
                              uVar18 = (ulong)auStack_198 >> 1 & 0x7f;
                            }
                            if (uVar18 == 0) {
                              pbVar31 = *(byte **)(auStack_148._0_8_ + 0x3d8);
                              uStack_138 = 0;
                              if ((*puStack_1e0 & 1) == 0) {
                                pbStack_120 = (byte *)puStack_1e0[2];
                                uStack_130 = *puStack_1e0;
                                uStack_128 = puStack_1e0[1];
                              }
                              else {
                                func_0x0412e5e0(&uStack_130,puStack_1e0[2],puStack_1e0[1]);
                              }
                              uVar18 = uStack_130;
                              puStack_118 = (ulong *)0x0;
                              uVar32 = uStack_128;
                              if ((uStack_130 & 1) == 0) {
                                uVar32 = uStack_130 >> 1 & 0x7f;
                              }
                              if (uVar32 == 0) {
code_r0x0be39bd0:
                                uVar26 = 0;
                              }
                              else {
                                pbVar28 = (byte *)((long)&uStack_130 + 1);
                                if ((uStack_130 & 1) != 0) {
                                  pbVar28 = pbStack_120;
                                }
                                if ((pbVar28 == (byte *)0x0) || (*pbVar28 == 0))
                                goto code_r0x0be39bd0;
                                uStack_200 = pbVar31;
                                uVar27 = func_0x0eee2e90(pbVar28);
                                uVar26 = 0xcbf29ce484222325;
                                pbVar31 = uStack_200;
                                if (uVar27 != 0) {
                                  if (7 < uVar27) {
                                    uVar25 = uVar27 & 0xfffffffffffffff8;
                                    do {
                                      uVar26 = (((((((uVar26 * 0x100000001b3 ^ (ulong)*pbVar28) *
                                                     0x100000001b3 ^ (ulong)pbVar28[1]) *
                                                    0x100000001b3 ^ (ulong)pbVar28[2]) *
                                                   0x100000001b3 ^ (ulong)pbVar28[3]) *
                                                  0x100000001b3 ^ (ulong)pbVar28[4]) * 0x100000001b3
                                                ^ (ulong)pbVar28[5]) * 0x100000001b3 ^
                                               (ulong)pbVar28[6]) * 0x100000001b3 ^
                                               (ulong)pbVar28[7];
                                      pbVar28 = pbVar28 + 8;
                                      uVar25 = uVar25 - 8;
                                    } while (uVar25 != 0);
                                  }
                                  if ((uVar27 & 7) != 0) {
                                    uVar25 = 0;
                                    do {
                                      uVar26 = uVar26 * 0x100000001b3 ^ (ulong)pbVar28[uVar25];
                                      uVar25 = uVar25 + 1;
                                    } while (((uint)uVar27 & 7) != uVar25);
                                  }
                                }
                              }
                              plVar22 = *(long **)(pbVar31 + 0x118);
                              uStack_138 = uVar26;
                              if (plVar22 != (long *)0x0) {
                                uStack_200 = (byte *)((long)&uStack_130 + 1);
                                uStack_e8 = uVar15;
                                if ((uVar18 & 1) != 0) {
                                  uStack_200 = pbStack_120;
                                }
                                do {
                                  puVar29 = (ulong *)plVar22[3];
                                  if (*puVar29 == uVar26) {
                                    if (((undefined8 *)puVar29[4] == &uStack_138) &&
                                       (puStack_118 == puVar29)) {
code_r0x0be39cb9:
                                      puVar39 = puVar29 + 5;
                                      uStack_258._0_4_ = 0;
                                      uStack_258._4_4_ = 0;
                                      plStack_250 = (long *)0x0;
                                      uStack_268._0_4_ = 0;
                                      uStack_268._4_4_ = 0;
                                      bStack_260 = 0;
                                      auStack_25f = (undefined1  [7])0x0;
                                      uStack_248 = 0;
                                      uStack_244 = 0;
                                      if (&uStack_268 != puVar39) {
                                        if ((puVar29[6] & 1) == 0) {
                                          plStack_250 = (long *)puVar29[8];
                                          uVar18 = puVar29[6];
                                          bStack_260 = (byte)uVar18;
                                          auStack_25f = SUB87(uVar18 >> 8,0);
                                          uStack_258._0_4_ = (uint)puVar29[7];
                                          uStack_258._4_4_ = (undefined4)(puVar29[7] >> 0x20);
                                        }
                                        else {
                                          func_0x04885070(&bStack_260,puVar29[8],puVar29[7]);
                                        }
                                      }
                                      uVar18 = *puVar39;
                                      uVar32 = (ulong)bStack_260;
                                      goto code_r0x0be39d1a;
                                    }
                                    bVar1 = (byte)puVar29[1];
                                    if ((bVar1 & 1) == 0) {
                                      uVar18 = (ulong)(bVar1 >> 1);
                                    }
                                    else {
                                      uVar18 = puVar29[2];
                                    }
                                    if (uVar18 == uVar32) {
                                      if ((bVar1 & 1) == 0) {
                                        uVar15 = (long)puVar29 + 9;
                                      }
                                      else {
                                        uVar15 = puVar29[3];
                                      }
                                      iVar12 = func_0x0eee3000(uVar15,uStack_200);
                                      uVar15 = uStack_e8;
                                      if (iVar12 == 0) {
                                        puVar29[4] = (ulong)&uStack_138;
                                        puStack_118 = puVar29;
                                        goto code_r0x0be39cb9;
                                      }
                                    }
                                  }
                                  puVar29[4] = 0;
                                  plVar22 = (long *)*plVar22;
                                } while (plVar22 != (long *)0x0);
                              }
                              puVar39 = (ulong *)0x0;
                              plStack_250 = (long *)0x0;
                              uStack_248 = 0;
                              uStack_244 = 0;
                              bStack_260 = 0;
                              auStack_25f = (undefined1  [7])0x0;
                              uStack_258._0_4_ = 0;
                              uStack_258._4_4_ = 0;
                              uVar32 = 0;
                              uVar18 = 0;
code_r0x0be39d1a:
                              uStack_268._0_4_ = (uint)uVar18;
                              uStack_268._4_4_ = (undefined4)(uVar18 >> 0x20);
                              if (((ulong)auStack_198 & 1) == 0) {
                                if ((uVar32 & 1) == 0) {
                                  plStack_188 = plStack_250;
                                  auStack_198 = (undefined1  [8])CONCAT71(auStack_25f,bStack_260);
                                  uStack_190 = CONCAT44(uStack_258._4_4_,(uint)uStack_258);
                                }
                                else {
                                  func_0x04885070(auStack_198,plStack_250,
                                                  CONCAT44(uStack_258._4_4_,(uint)uStack_258));
                                }
                              }
                              else {
                                bVar45 = (uVar32 & 1) == 0;
                                plVar22 = plStack_250;
                                if (bVar45) {
                                  plVar22 = (long *)auStack_25f;
                                }
                                uVar18 = uVar32 >> 1;
                                if (!bVar45) {
                                  uVar18 = CONCAT44(uStack_258._4_4_,(uint)uStack_258);
                                }
                                func_0x04885120(auStack_198,plVar22,uVar18);
                              }
                              if ((bStack_260 & 1) != 0) {
                                func_0x0412a280(plStack_250,
                                                CONCAT71(auStack_25f,bStack_260) &
                                                0xfffffffffffffffe);
                              }
                              if ((uStack_130 & 1) != 0) {
                                func_0x0412a280(pbStack_120,uStack_130 & 0xfffffffffffffffe);
                              }
                            }
                          }
                          uStack_268._0_4_ = 0x1cb35e1;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 7;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 1)) {
                            uVar46 = 0;
                          }
                          else {
                            uVar46 = (undefined4)
                                     CONCAT71((int7)((ulong)puVar39 >> 8),(char)plVar22[8] != '\0');
                          }
                          uStack_268._0_4_ = 0x1cb35f9;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 6;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 5)) {
                            uVar42 = 0;
                          }
                          else {
                            uVar42 = (undefined4)plVar22[8];
                          }
                          uStack_200 = (byte *)CONCAT44(uStack_200._4_4_,uVar42);
                          uStack_268._0_4_ = 0x1cb3629;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 8;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar46);
                          if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
                            lVar23 = 0;
                          }
                          else {
                            lVar23 = plVar22[8];
                          }
                          uStack_268._0_4_ = 0x1cb3641;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 6;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
                            lVar33 = 0;
                          }
                          else {
                            lVar33 = plVar22[8];
                          }
                          uStack_268._0_4_ = 0x1cb3659;
                          uStack_268._4_4_ = 0;
                          bStack_260 = 10;
                          auStack_25f = (undefined1  [7])0x0;
                          plVar21 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
                          if (plVar21 == plVar16) {
                            plVar16 = (long *)0x0;
                          }
                          else {
                            plVar16 = plVar21 + 7;
                            if ((int)plVar21[0xc] != 8) {
                              plVar16 = (long *)0x0;
                            }
                          }
                          puVar39 = (ulong *)(plVar16 + 1);
                          if (plVar16 == (long *)0x0) {
                            puVar39 = (ulong *)&UNK_01e79d90;
                          }
                          puVar19 = (undefined8 *)
                                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
                          if (puVar19 == (undefined8 *)0x0) {
                            func_0x0eec74c0(0xf8,0);
                          }
                          *(undefined1 (*) [16])(puVar19 + 1) = (undefined1  [16])0x0;
                          *puVar19 = &UNK_0f33ba60;
                          if ((*puStack_1e0 & 1) == 0) {
                            uStack_258._0_4_ = (uint)puStack_1e0[2];
                            uStack_258._4_4_ = (undefined4)(puStack_1e0[2] >> 0x20);
                            uStack_268._0_4_ = (uint)*puStack_1e0;
                            uStack_268._4_4_ = (undefined4)(*puStack_1e0 >> 0x20);
                            bStack_260 = (byte)puStack_1e0[1];
                            auStack_25f = SUB87(puStack_1e0[1] >> 8,0);
                          }
                          else {
                            func_0x0412e5e0(&uStack_268,puStack_1e0[2],puStack_1e0[1]);
                          }
                          if ((*puVar39 & 1) == 0) {
                            uStack_128 = puVar39[2];
                            uStack_138 = *puVar39;
                            uStack_130 = puVar39[1];
                          }
                          else {
                            func_0x0412e5e0(&uStack_138,puVar39[2],puVar39[1]);
                          }
                          if (((ulong)auStack_198 & 1) == 0) {
                            plStack_1c8 = plStack_188;
                            bStack_1d8 = auStack_198[0];
                            uStack_1d7 = auStack_198._1_4_;
                            uStack_1d3 = auStack_198._5_2_;
                            uStack_1d1 = auStack_198[7];
                            cStack_1d0 = (char)uStack_190;
                            auStack_1cf = SUB87(uStack_190 >> 8,0);
                          }
                          else {
                            func_0x0412e5e0(&bStack_1d8,plStack_188,uStack_190);
                          }
                          puVar34 = puVar19 + 3;
                          func_0x0be0bec0((ulong)uStack_200 & 0xffffffff,puVar34,&uStack_cc,
                                          uStack_e8 & 0xff,&uStack_268,uVar37,lVar23,lVar33,
                                          &uStack_138,&bStack_1d8,&UNK_01e79d90);
                          if ((bStack_1d8 & 1) == 0) {
                            if ((uStack_138 & 1) == 0) goto code_r0x0be3a059;
code_r0x0be3a1ef:
                            func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
                            if (((uint)uStack_268 & 1) != 0) goto code_r0x0be3a213;
code_r0x0be3a064:
                            lVar23 = puVar19[0x16];
                          }
                          else {
                            func_0x0412a280(plStack_1c8,
                                            CONCAT17(uStack_1d1,
                                                     CONCAT25(uStack_1d3,
                                                              CONCAT41(uStack_1d7,bStack_1d8))) &
                                            0xfffffffffffffffe);
                            if ((uStack_138 & 1) != 0) goto code_r0x0be3a1ef;
code_r0x0be3a059:
                            if (((uint)uStack_268 & 1) == 0) goto code_r0x0be3a064;
code_r0x0be3a213:
                            func_0x0412a280(CONCAT44(uStack_258._4_4_,(uint)uStack_258),
                                            CONCAT44(uStack_268._4_4_,(uint)uStack_268) &
                                            0xfffffffffffffffe);
                            lVar23 = puVar19[0x16];
                          }
                          if (lVar23 != 0) {
                            puVar19[0x15] = puVar19[0x15] + (long)plStack_1a0;
                          }
                          auStack_68._8_8_ = puVar19;
                          auStack_68._0_8_ = puVar34;
                          lVar33 = func_0x0be33620(uStack_98,plStack_c0,&plStack_70);
                          lVar14 = auStack_158._0_8_ * 0x10;
                          LOCK();
                          puVar19[2] = puVar19[2] + 1;
                          UNLOCK();
                          *(undefined8 **)(lVar33 + 0x18 + lVar14) = puVar34;
                          lVar23 = *(long *)(lVar33 + 0x20 + lVar14);
                          *(undefined8 **)(lVar33 + 0x20 + lVar14) = puVar19;
                          if (lVar23 != 0) {
                            func_0x0412c2d0();
                          }
                          uVar24 = auStack_68._0_8_;
                          if ((auStack_68._0_8_ != 0) &&
                             ((ulong)*(uint *)(auStack_68._0_8_ + 0xac) < 3)) {
                            lVar23 = func_0x0be3e630(*(long *)(auStack_148._0_8_ + 0x3d8) +
                                                     (ulong)*(uint *)(auStack_68._0_8_ + 0xac) *
                                                     0x28 + 0x90,auStack_68._0_8_ + 0x80);
                            uVar9 = auStack_68._8_8_;
                            auStack_68 = (undefined1  [16])0x0;
                            *(undefined8 *)(lVar23 + 0x20) = uVar24;
                            plVar16 = *(long **)(lVar23 + 0x28);
                            *(undefined8 *)(lVar23 + 0x28) = uVar9;
                            if (plVar16 != (long *)0x0) {
                              LOCK();
                              plVar21 = plVar16 + 1;
                              lVar23 = *plVar21;
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (lVar23 == 0) {
                                (**(code **)(*plVar16 + 0x10))(plVar16);
                                func_0x0412c2d0(plVar16);
                              }
                            }
                          }
                          uVar24 = auStack_68._8_8_;
                          if ((long *)auStack_68._8_8_ != (long *)0x0) {
                            LOCK();
                            plVar16 = (long *)(auStack_68._8_8_ + 8);
                            lVar23 = *plVar16;
                            *plVar16 = *plVar16 + -1;
                            UNLOCK();
                            if (lVar23 == 0) {
                              (**(code **)(*(long *)auStack_68._8_8_ + 0x10))(auStack_68._8_8_);
                              func_0x0412c2d0(uVar24);
                            }
                          }
                          if (((ulong)auStack_198 & 1) != 0) {
                            func_0x0412a280(plStack_188,(ulong)auStack_198 & 0xfffffffffffffffe);
                          }
                        }
                        else {
                          lVar23 = func_0x0be3e490(puVar39[0x12],puVar39[0x13],&uStack_cc);
                          if ((((lVar23 == 0) || (lVar33 = *(long *)(lVar23 + 0x20), lVar33 == 0))
                              && ((lVar23 = func_0x0be3e490(puVar39[0x17],puVar39[0x18],&uStack_cc),
                                  lVar23 == 0 || (lVar33 = *(long *)(lVar23 + 0x20), lVar33 == 0))))
                             && ((lVar23 = func_0x0be3e490(puVar39[0x1c],puVar39[0x1d],&uStack_cc),
                                 lVar23 == 0 || (lVar33 = *(long *)(lVar23 + 0x20), lVar33 == 0))))
                          {
                            lVar33 = 0;
code_r0x0be39a48:
                            lVar23 = 0;
                          }
                          else {
                            lVar23 = *(long *)(lVar23 + 0x28);
                            if (lVar23 == 0) goto code_r0x0be39a48;
                            LOCK();
                            *(long *)(lVar23 + 0x10) = *(long *)(lVar23 + 0x10) + 1;
                            UNLOCK();
                          }
                          lVar14 = func_0x0be33620(uStack_98,plStack_c0,&plStack_70);
                          lVar36 = auStack_158._0_8_ * 0x10;
                          *(long *)(lVar14 + 0x18 + lVar36) = lVar33;
                          lVar33 = *(long *)(lVar14 + 0x20 + lVar36);
                          *(long *)(lVar14 + 0x20 + lVar36) = lVar23;
                          if (lVar33 != 0) {
                            func_0x0412c2d0();
                          }
                        }
                      }
                    }
code_r0x0be39668:
                    bVar45 = uVar15 != auStack_1f8._0_8_;
                    plVar16 = plStack_88;
                    uVar15 = uVar15 + 1;
                    plVar21 = plStack_58;
                    plVar38 = (long *)auStack_1b8._0_8_;
                  } while (bVar45);
                }
              }
            }
            plVar16 = (long *)((long)plVar16 + 1);
            lVar23 = plVar21[8];
          } while ((long)plVar16 < (long)(int)((ulong)(plVar21[9] - lVar23) >> 3));
        }
      }
    }
    break;
  case 5:
    plVar21 = plStack_f8;
    if ((auStack_108[0] & 1) == 0) {
      plVar21 = (long *)(auStack_108 + 1);
    }
    if (*(char *)((long)plVar21 + 4) == 'O' && (int)*plVar21 == 0x464e495f) {
      uStack_268._0_4_ = 0x12dba99;
      uStack_268._4_4_ = 0;
      bStack_260 = 4;
      auStack_25f = (undefined1  [7])0x0;
      plVar21 = plStack_f0 + 1;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      plVar16 = plVar16 + 2;
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
        lVar23 = 0;
      }
      else {
        lVar23 = plVar22[8];
      }
      plVar20[0x2c] = lVar23;
      uStack_268._0_4_ = 0x12672ab;
      uStack_268._4_4_ = 0;
      bStack_260 = 5;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
        lVar23 = 0;
      }
      else {
        lVar23 = plVar22[8];
      }
      plVar20[0x2f] = lVar23;
      uStack_268._0_4_ = 0x12cc782;
      uStack_268._4_4_ = 0;
      bStack_260 = 6;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
        lVar23 = 0;
      }
      else {
        lVar23 = plVar22[8];
      }
      plVar20[0x32] = lVar23;
      uStack_268._0_4_ = 0x12ffb75;
      uStack_268._4_4_ = 0;
      bStack_260 = 6;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
        lVar23 = 0;
      }
      else {
        lVar23 = plVar22[8];
      }
      plVar20[0x30] = lVar23;
      uStack_268._0_4_ = 0x12322a9;
      uStack_268._4_4_ = 0;
      bStack_260 = 6;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 4)) {
        lVar23 = 0;
      }
      else {
        lVar23 = plVar22[8];
      }
      plVar20[0x31] = lVar23;
      uStack_268._0_4_ = 0x12ffb7c;
      uStack_268._4_4_ = 0;
      bStack_260 = 0xb;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 1)) {
        bVar45 = false;
      }
      else {
        bVar45 = (char)plVar22[8] != '\0';
      }
      *(bool *)(plVar20 + 0x41) = bVar45;
      uStack_268._0_4_ = 0x11fda4f;
      uStack_268._4_4_ = 0;
      bStack_260 = 2;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      auVar56._8_8_ = extraout_XMM0_Qb_01;
      auVar56._0_8_ = extraout_XMM0_Qa_00;
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auStack_1f8 = (undefined1  [16])0x0;
      }
      else {
        auStack_1f8._4_12_ = auVar56._4_12_;
        auStack_1f8._0_4_ = (undefined4)(int)plVar22[8];
      }
      uStack_268._0_4_ = 0x1488f62;
      uStack_268._4_4_ = 0;
      bStack_260 = 2;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auStack_1b8._0_16_ = (undefined1  [16])0x0;
      }
      else {
        auStack_1b8._0_16_ = ZEXT416((uint)(float)(int)plVar22[8]);
      }
      uStack_268._0_4_ = 0x12cc789;
      uStack_268._4_4_ = 0;
      bStack_260 = 2;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        fVar47 = 0.0;
      }
      else {
        fVar47 = (float)(int)plVar22[8];
      }
      uStack_268._0_4_ = 0x12b2da8;
      uStack_268._4_4_ = 0;
      bStack_260 = 2;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auStack_158 = (undefined1  [16])0x0;
      }
      else {
        auStack_158 = ZEXT416((uint)(float)(int)plVar22[8]);
      }
      uStack_268._0_4_ = 0x12322b0;
      uStack_268._4_4_ = 0;
      bStack_260 = 2;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auStack_148 = (undefined1  [16])0x0;
      }
      else {
        auStack_148 = ZEXT416((uint)(float)(int)plVar22[8]);
      }
      uStack_268._0_4_ = 0x12322b3;
      uStack_268._4_4_ = 0;
      bStack_260 = 2;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        fVar48 = 0.0;
      }
      else {
        fVar48 = (float)(int)plVar22[8];
      }
      auVar61._0_8_ = auStack_1f8._0_8_;
      auVar61._8_4_ = auStack_1f8._4_4_;
      auVar61._12_4_ = auStack_1f8._12_4_;
      auVar60._8_8_ = auVar61._8_8_;
      auVar60._0_8_ = CONCAT44(auStack_1b8._0_4_,auStack_1f8._0_4_);
      auVar62._0_12_ = auVar60._0_12_;
      auVar62._12_4_ = auStack_1b8._4_4_;
      auVar57._8_4_ = auStack_1f8._4_4_;
      auVar57._0_8_ = auVar60._0_8_;
      auVar57._12_4_ = auStack_1b8._4_4_;
      auVar2._4_4_ = auStack_148._0_4_;
      auVar2._0_4_ = auStack_158._0_4_;
      auVar2._8_4_ = auStack_158._4_4_;
      auVar2._12_4_ = auStack_148._4_4_;
      auVar66 = minps(auVar57,auVar2);
      fVar59 = fVar47;
      if (fVar48 <= fVar47) {
        fVar59 = fVar48;
      }
      plVar20[0x25] = auVar66._0_8_;
      *(float *)(plVar20 + 0x26) = fVar59;
      auVar3._4_4_ = auStack_148._0_4_;
      auVar3._0_4_ = auStack_158._0_4_;
      auVar3._8_4_ = auStack_158._4_4_;
      auVar3._12_4_ = auStack_148._4_4_;
      auVar66 = maxps(auVar62,auVar3);
      if (fVar47 <= fVar48) {
        fVar47 = fVar48;
      }
      *(long *)((long)plVar20 + 0x134) = auVar66._0_8_;
      *(float *)((long)plVar20 + 0x13c) = fVar47;
      uStack_268._0_4_ = 0x13a0f2c;
      uStack_268._4_4_ = 0;
      bStack_260 = 3;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auVar49 = ZEXT812(0);
      }
      else {
        auVar49._4_8_ = 0;
        auVar49._0_4_ = (float)(int)plVar22[8];
      }
      auStack_1f8._12_4_ = 0;
      auStack_1f8._0_12_ = auVar49;
      uStack_268._0_4_ = 0x1350961;
      uStack_268._4_4_ = 0;
      bStack_260 = 3;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auVar50 = ZEXT812(0);
      }
      else {
        auVar50._4_8_ = 0;
        auVar50._0_4_ = (float)(int)plVar22[8];
      }
      auStack_1b8._12_4_ = 0;
      auStack_1b8._0_12_ = auVar50;
      uStack_268._0_4_ = 0x1350965;
      uStack_268._4_4_ = 0;
      bStack_260 = 3;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        fVar47 = 0.0;
      }
      else {
        fVar47 = (float)(int)plVar22[8];
      }
      uStack_268._0_4_ = 0x146ea82;
      uStack_268._4_4_ = 0;
      bStack_260 = 3;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auVar51 = ZEXT812(0);
      }
      else {
        auVar51._4_8_ = 0;
        auVar51._0_4_ = (float)(int)plVar22[8];
      }
      auStack_158._12_4_ = 0;
      auStack_158._0_12_ = auVar51;
      uStack_268._0_4_ = 0x124ddca;
      uStack_268._4_4_ = 0;
      bStack_260 = 3;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        auVar52 = ZEXT812(0);
      }
      else {
        auVar52._4_8_ = 0;
        auVar52._0_4_ = (float)(int)plVar22[8];
      }
      auStack_148._12_4_ = 0;
      auStack_148._0_12_ = auVar52;
      uStack_268._0_4_ = 0x1455f6f;
      uStack_268._4_4_ = 0;
      bStack_260 = 3;
      auStack_25f = (undefined1  [7])0x0;
      plVar22 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar22 == plVar16) || ((int)plVar22[0xc] != 3)) {
        fVar48 = 0.0;
      }
      else {
        fVar48 = (float)(int)plVar22[8];
      }
      auVar64._0_8_ = auStack_1f8._0_8_;
      auVar64._8_4_ = auStack_1f8._4_4_;
      auVar64._12_4_ = auStack_1f8._12_4_;
      auVar63._8_8_ = auVar64._8_8_;
      auVar63._0_8_ = CONCAT44(auStack_1b8._0_4_,auStack_1f8._0_4_);
      auVar65._0_12_ = auVar63._0_12_;
      auVar65._12_4_ = auStack_1b8._4_4_;
      auVar58._8_4_ = auStack_1f8._4_4_;
      auVar58._0_8_ = auVar63._0_8_;
      auVar58._12_4_ = auStack_1b8._4_4_;
      auVar4._4_4_ = auStack_148._0_4_;
      auVar4._0_4_ = auStack_158._0_4_;
      auVar4._8_4_ = auStack_158._4_4_;
      auVar4._12_4_ = auStack_148._4_4_;
      auVar66 = minps(auVar58,auVar4);
      fVar59 = fVar47;
      if (fVar48 <= fVar47) {
        fVar59 = fVar48;
      }
      plVar20[0x28] = auVar66._0_8_;
      *(float *)(plVar20 + 0x29) = fVar59;
      auVar5._4_4_ = auStack_148._0_4_;
      auVar5._0_4_ = auStack_158._0_4_;
      auVar5._8_4_ = auStack_158._4_4_;
      auVar5._12_4_ = auStack_148._4_4_;
      auVar66 = maxps(auVar65,auVar5);
      if (fVar47 <= fVar48) {
        fVar47 = fVar48;
      }
      *(long *)((long)plVar20 + 0x14c) = auVar66._0_8_;
      *(float *)((long)plVar20 + 0x154) = fVar47;
      uStack_268._0_4_ = 0x12bbd6c;
      uStack_268._4_4_ = 0;
      bStack_260 = 7;
      auStack_25f = (undefined1  [7])0x0;
      plVar21 = (long *)func_0x0d6c97a0(plVar21,&uStack_268);
      if ((plVar21 == plVar16) || ((int)plVar21[0xc] != 1)) {
        *(undefined1 *)(plVar20 + 0x2b) = 0;
      }
      else {
        *(char *)(plVar20 + 0x2b) = (char)plVar21[8];
      }
    }
    else if (*(char *)((long)plVar21 + 4) == 'D' && (int)*plVar21 == 0x4941525f) {
      uStack_268._0_4_ = 0x14d9486;
      uStack_268._4_4_ = 0;
      bStack_260 = 4;
      auStack_25f = (undefined1  [7])0x0;
      plVar21 = (long *)func_0x0d6c97a0(plStack_f0 + 1,&uStack_268);
      if ((plVar21 == plVar16 + 2) || ((int)plVar21[0xc] != 10)) {
        lVar23 = plVar20[0x51];
        plVar20[0x51] = 0;
        if (lVar23 != 0) {
          func_0x0be36cd0(lVar23);
          func_0x0412a280(lVar23,0x2f0);
        }
      }
      else {
        puVar44 = (undefined4 *)plVar20[0x51];
        if (puVar44 == (undefined4 *)0x0) {
          func_0x0be15b20(plVar20);
          puVar44 = (undefined4 *)plVar20[0x51];
          if (puVar44 == (undefined4 *)0x0) break;
        }
        uStack_268._0_4_ = 0x141672e;
        uStack_268._4_4_ = 0;
        bStack_260 = 5;
        auStack_25f = (undefined1  [7])0x0;
        plVar16 = plVar21 + 8;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        plVar21 = plVar21 + 9;
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 3)) {
          uVar46 = 0;
        }
        else {
          uVar46 = (undefined4)plVar20[8];
        }
        *puVar44 = uVar46;
        uStack_268._0_4_ = 0x120b5b8;
        uStack_268._4_4_ = 0;
        bStack_260 = 6;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 3)) {
          uVar46 = 0;
        }
        else {
          uVar46 = (undefined4)plVar20[8];
        }
        puVar44[1] = uVar46;
        uStack_268._0_4_ = 0x136ce07;
        uStack_268._4_4_ = 0;
        bStack_260 = 8;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 1)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (undefined1)plVar20[8];
        }
        *(undefined1 *)(puVar44 + 2) = uVar11;
        uStack_268._0_4_ = 0x11fda45;
        uStack_268._4_4_ = 0;
        bStack_260 = 9;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 1)) {
          uVar11 = 0;
        }
        else {
          uVar11 = (undefined1)plVar20[8];
        }
        *(undefined1 *)((long)puVar44 + 9) = uVar11;
        uStack_268._0_4_ = 0x14a44bf;
        uStack_268._4_4_ = 0;
        bStack_260 = 8;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 4)) {
          lVar23 = 0;
        }
        else {
          lVar23 = plVar20[8];
        }
        *(long *)(puVar44 + 4) = lVar23;
        uStack_268._0_4_ = 0x1277be2;
        uStack_268._4_4_ = 0;
        bStack_260 = 5;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 4)) {
          lVar23 = 0;
        }
        else {
          lVar23 = plVar20[8];
        }
        *(long *)(puVar44 + 6) = lVar23;
        uStack_268._0_4_ = 0x1280ad8;
        uStack_268._4_4_ = 0;
        bStack_260 = 6;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 5)) {
          uVar46 = 0;
        }
        else {
          uVar46 = (undefined4)plVar20[8];
        }
        uStack_268._0_4_ = 0x12e713b;
        uStack_268._4_4_ = 0;
        bStack_260 = 6;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 5)) {
          uVar42 = 0;
        }
        else {
          uVar42 = (undefined4)plVar20[8];
        }
        auStack_1f8._0_4_ = uVar42;
        uStack_268._0_4_ = 0x13d4999;
        uStack_268._4_4_ = 0;
        bStack_260 = 6;
        auStack_25f = (undefined1  [7])0x0;
        plVar20 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        if ((plVar20 == plVar21) || ((int)plVar20[0xc] != 5)) {
          uVar42 = 0;
        }
        else {
          uVar42 = (undefined4)plVar20[8];
        }
        puVar44[0xe] = uVar46;
        puVar44[0xf] = auStack_1f8._0_4_;
        puVar44[0x10] = uVar42;
        plVar20 = (long *)(puVar44 + 0x12);
        if (*(long *)(puVar44 + 0x18) != 0) {
          puVar19 = *(undefined8 **)(puVar44 + 0x16);
          while (puVar19 != (undefined8 *)0x0) {
            puVar34 = (undefined8 *)*puVar19;
            func_0x0412a280(puVar19,0x18);
            puVar19 = puVar34;
          }
          *(undefined8 *)(puVar44 + 0x16) = 0;
          if (*(long *)(puVar44 + 0x14) != 0) {
            func_0x0eee2dd0(*plVar20,0,*(long *)(puVar44 + 0x14) << 3);
          }
          *(undefined8 *)(puVar44 + 0x18) = 0;
        }
        uStack_268._0_4_ = 0x11ad7ed;
        uStack_268._4_4_ = 0;
        bStack_260 = 7;
        auStack_25f = (undefined1  [7])0x0;
        plVar22 = (long *)func_0x0d6c97a0(plVar16,&uStack_268);
        auStack_1b8._0_8_ = plVar16;
        auStack_1f8._0_8_ = plVar21;
        if (((plVar22 != plVar21) && ((int)plVar22[0xc] == 9)) &&
           (lVar23 = plVar22[8], 0 < (int)((ulong)(plVar22[9] - lVar23) >> 3))) {
          puVar19 = (undefined8 *)(puVar44 + 0x16);
          lVar33 = 0;
code_r0x0be3bbde:
          plVar16 = *(long **)(lVar23 + lVar33 * 8);
          if (plVar16 != (long *)0x0) {
            cVar10 = (**(code **)(*plVar16 + 0x30))(plVar16);
            if (cVar10 == '\x04') {
              pauVar17 = (undefined1 (*) [16])
                         (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (pauVar17 == (undefined1 (*) [16])0x0) {
                func_0x0eec74c0(0x18,0);
              }
              *pauVar17 = (undefined1  [16])0x0;
              uVar15 = plVar16[1];
              *(ulong *)pauVar17[1] = uVar15;
              uVar32 = ((long)uVar15 >> 0x20) + 0x9e3779b9;
              uVar32 = (uVar15 & 0xffffffff) + 0x9e3779b9 + uVar32 * 0x40 + (uVar32 >> 2) ^ uVar32;
              *(ulong *)(*pauVar17 + 8) = uVar32;
              uVar18 = *(ulong *)(puVar44 + 0x14);
              if (uVar18 != 0) {
                uVar26 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
                uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
                uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar26 >> 0x38 < 2) {
                  uVar27 = uVar18 + 0x7fffffffff & uVar32;
                }
                else {
                  uVar27 = uVar32;
                  if (uVar18 <= uVar32) {
                    uVar27 = uVar32 % uVar18;
                  }
                }
                plVar16 = *(long **)(*plVar20 + uVar27 * 8);
                if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)
                   ) {
                  if ((byte)(uVar26 >> 0x38) < 2) {
                    do {
                      if (plVar16[1] == uVar32) {
                        if (plVar16[2] == uVar15) goto code_r0x0be3be80;
                      }
                      else if ((plVar16[1] & uVar18 - 1) != uVar27) break;
                      plVar16 = (long *)*plVar16;
                    } while (plVar16 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar26 = plVar16[1];
                      if (uVar26 == uVar32) {
                        if (plVar16[2] == uVar15) goto code_r0x0be3be80;
                      }
                      else {
                        if (uVar18 <= uVar26) {
                          if ((uVar26 | uVar18) >> 0x20 == 0) {
                            uVar26 = (uVar26 & 0xffffffff) % (uVar18 & 0xffffffff);
                          }
                          else {
                            uVar26 = uVar26 % uVar18;
                          }
                        }
                        if (uVar26 != uVar27) break;
                      }
                      plVar16 = (long *)*plVar16;
                    } while (plVar16 != (long *)0x0);
                  }
                }
              }
              if ((uVar18 == 0) ||
                 ((float)uVar18 * (float)puVar44[0x1a] < (float)(*(long *)(puVar44 + 0x18) + 1))) {
                uVar15 = 1;
                if (2 < uVar18) {
                  uVar15 = (ulong)((uVar18 & uVar18 - 1) != 0);
                }
                uVar15 = uVar18 * 2 | uVar15;
                fVar47 = (float)func_0x0eee3ab0((float)(*(long *)(puVar44 + 0x18) + 1) /
                                                (float)puVar44[0x1a]);
                uVar32 = (long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47;
                if (uVar32 < uVar15) {
                  uVar32 = uVar15;
                }
                uVar15 = 2;
                if ((uVar32 != 1) && (uVar15 = uVar32, (uVar32 & uVar32 - 1) != 0)) {
                  uVar15 = func_0x0412c3f0();
                  uVar18 = *(ulong *)(puVar44 + 0x14);
                }
                if (uVar18 < uVar15) {
code_r0x0be3be55:
                  func_0x0728dcb0(plVar20,uVar15);
                }
                else if (uVar15 < uVar18) {
                  fVar47 = (float)func_0x0eee3ab0((float)*(ulong *)(puVar44 + 0x18) /
                                                  (float)puVar44[0x1a]);
                  uVar32 = (long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47;
                  if ((uVar18 < 3) ||
                     (uVar26 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
                     uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
                     1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar32 = func_0x0412c3f0(uVar32);
                  }
                  else if (1 < uVar32) {
                    lVar23 = 0x3f;
                    if (uVar32 - 1 != 0) {
                      for (; uVar32 - 1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar32 = 1L << (-((byte)lVar23 ^ 0x3f) & 0x3f);
                  }
                  if (uVar15 <= uVar32) {
                    uVar15 = uVar32;
                  }
                  if (uVar15 < uVar18) goto code_r0x0be3be55;
                }
              }
              uVar15 = *(ulong *)(puVar44 + 0x14);
              uVar18 = *(ulong *)(*pauVar17 + 8);
              uVar32 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
              uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333);
              uVar32 = ((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar32 >> 0x38 < 2) {
                uVar18 = uVar18 & uVar15 - 1;
              }
              else if (uVar15 <= uVar18) {
                if ((uVar18 | uVar15) >> 0x20 == 0) {
                  uVar18 = (uVar18 & 0xffffffff) % (uVar15 & 0xffffffff);
                }
                else {
                  uVar18 = uVar18 % uVar15;
                }
              }
              lVar23 = *plVar20;
              puVar34 = *(undefined8 **)(lVar23 + uVar18 * 8);
              if (puVar34 == (undefined8 *)0x0) {
                *(undefined8 *)*pauVar17 = *puVar19;
                *puVar19 = pauVar17;
                *(undefined8 **)(lVar23 + uVar18 * 8) = puVar19;
                if (*(long *)*pauVar17 != 0) {
                  uVar18 = *(ulong *)(*(long *)*pauVar17 + 8);
                  if ((byte)(uVar32 >> 0x38) < 2) {
                    *(undefined1 (**) [16])(lVar23 + (uVar18 & uVar15 - 1) * 8) = pauVar17;
                  }
                  else {
                    if (uVar15 <= uVar18) {
                      if ((uVar18 | uVar15) >> 0x20 == 0) {
                        *(undefined1 (**) [16])
                         (lVar23 + ((uVar18 & 0xffffffff) % (uVar15 & 0xffffffff)) * 8) = pauVar17;
                        goto code_r0x0be3bbba;
                      }
                      uVar18 = uVar18 % uVar15;
                    }
                    *(undefined1 (**) [16])(lVar23 + uVar18 * 8) = pauVar17;
                  }
                }
              }
              else {
                *(undefined8 *)*pauVar17 = *puVar34;
                *puVar34 = pauVar17;
              }
code_r0x0be3bbba:
              *(long *)(puVar44 + 0x18) = *(long *)(puVar44 + 0x18) + 1;
            }
          }
          goto code_r0x0be3bbbe;
        }
code_r0x0be3c091:
        uStack_268._0_4_ = 0x12178ad;
        uStack_268._4_4_ = 0;
        bStack_260 = 10;
        auStack_25f = (undefined1  [7])0x0;
        uVar9 = auStack_1b8._0_8_;
        lVar23 = func_0x0d6c97a0(auStack_1b8._0_8_,&uStack_268);
        uVar24 = auStack_1f8._0_8_;
        if ((lVar23 == auStack_1f8._0_8_) || (*(int *)(lVar23 + 0x60) != 1)) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined1 *)(lVar23 + 0x40);
        }
        *(undefined1 *)(puVar44 + 0x1c) = uVar11;
        uStack_268._0_4_ = 0x1280ccf;
        uStack_268._4_4_ = 0;
        bStack_260 = 0xe;
        auStack_25f = (undefined1  [7])0x0;
        lVar23 = func_0x0d6c97a0(uVar9,&uStack_268);
        if ((lVar23 == uVar24) || (*(int *)(lVar23 + 0x60) != 5)) {
          puVar44[0x1d] = 0;
code_r0x0be3c124:
          plVar16 = *(long **)(puVar44 + 0xb8);
          *(undefined8 *)(puVar44 + 0xb8) = 0;
          if (plVar16 == (long *)(puVar44 + 0xb0)) {
            lVar23 = 0x20;
          }
          else {
            lVar23 = 0x28;
            if (plVar16 == (long *)0x0) goto code_r0x0be3c159;
          }
          (**(code **)(*plVar16 + lVar23))();
        }
        else {
          fVar47 = *(float *)(lVar23 + 0x40);
          puVar44[0x1d] = fVar47;
          if (fVar47 <= 0.0) goto code_r0x0be3c124;
        }
code_r0x0be3c159:
        uStack_268._0_4_ = 0x14a44c8;
        uStack_268._4_4_ = 0;
        bStack_260 = 10;
        auStack_25f = (undefined1  [7])0x0;
        lVar23 = func_0x0d6c97a0(uVar9,&uStack_268);
        if ((lVar23 == uVar24) || (*(int *)(lVar23 + 0x60) != 1)) {
          *(undefined1 *)((long)puVar44 + 0x79) = 0;
        }
        else {
          *(undefined1 *)((long)puVar44 + 0x79) = *(undefined1 *)(lVar23 + 0x40);
        }
      }
    }
    break;
  case 8:
    plVar21 = plStack_f8;
    if ((auStack_108[0] & 1) == 0) {
      plVar21 = (long *)(auStack_108 + 1);
    }
    if (*plVar21 == 0x53524559414c505f) {
      uStack_268._0_4_ = 0x13bb740;
      uStack_268._4_4_ = 0;
      bStack_260 = 7;
      auStack_25f = (undefined1  [7])0x0;
      plVar21 = (long *)func_0x0d6c97a0(plStack_f0 + 1,&uStack_268);
      if (((plVar21 != plVar16 + 2) && ((int)plVar21[0xc] == 9)) &&
         (lVar23 = plVar21[8], 0 < (int)((ulong)(plVar21[9] - lVar23) >> 3))) {
        plVar16 = plVar20 + 0x34;
        auStack_158._0_8_ = plVar20 + 0x36;
        lVar33 = 0;
        auStack_1f8._0_8_ = plVar21;
        do {
          plVar22 = *(long **)(lVar23 + lVar33 * 8);
          if (plVar22 != (long *)0x0) {
            cVar10 = (**(code **)(*plVar22 + 0x30))(plVar22);
            plVar21 = (long *)auStack_1f8._0_8_;
            if (cVar10 == '\n') {
              uStack_268._0_4_ = 0x126e629;
              uStack_268._4_4_ = 0;
              bStack_260 = 1;
              auStack_25f = (undefined1  [7])0x0;
              plVar35 = (long *)func_0x0d6c97a0(plVar22 + 1,&uStack_268);
              plVar21 = plVar22 + 2;
              if ((plVar35 == plVar21) || ((int)plVar35[0xc] != 3)) {
                auVar7._12_4_ = 0;
                auVar7._0_12_ = auStack_1b8._4_12_;
                auStack_1b8._0_16_ = auVar7 << 0x20;
              }
              else {
                auStack_1b8._0_4_ = (int)plVar35[8];
              }
              uStack_268._0_4_ = 0x12f5e8c;
              uStack_268._4_4_ = 0;
              bStack_260 = 2;
              auStack_25f = (undefined1  [7])0x0;
              plVar22 = (long *)func_0x0d6c97a0(plVar22 + 1,&uStack_268);
              if ((plVar22 == plVar21) || ((int)plVar22[0xc] != 4)) {
                uVar15 = 0;
              }
              else {
                uVar15 = plVar22[8];
              }
              uVar18 = ((long)uVar15 >> 0x20) + 0x9e3779b9;
              plVar35 = (long *)((uVar15 & 0xffffffff) + 0x9e3779b9 + uVar18 * 0x40 + (uVar18 >> 2)
                                ^ uVar18);
              plVar22 = (long *)plVar20[0x35];
              if (plVar22 != (long *)0x0) {
                uVar18 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555);
                uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
                uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar18 >> 0x38 < 2) {
                  plVar21 = (long *)((long)plVar22 + 0x7fffffffffU & (ulong)plVar35);
                }
                else {
                  plVar21 = plVar35;
                  if (plVar22 <= plVar35) {
                    plVar21 = (long *)((ulong)plVar35 % (ulong)plVar22);
                  }
                }
                puVar19 = *(undefined8 **)(*plVar16 + (long)plVar21 * 8);
                if ((puVar19 != (undefined8 *)0x0) &&
                   (plVar38 = (long *)*puVar19, plVar38 != (long *)0x0)) {
                  if ((byte)(uVar18 >> 0x38) < 2) {
                    do {
                      if ((long *)plVar38[1] == plVar35) {
                        if (plVar38[2] == uVar15) goto code_r0x0be3ae12;
                      }
                      else if ((long *)((ulong)plVar38[1] & (long)plVar22 - 1U) != plVar21) break;
                      plVar38 = (long *)*plVar38;
                    } while (plVar38 != (long *)0x0);
                  }
                  else {
                    do {
                      plVar30 = (long *)plVar38[1];
                      if (plVar30 == plVar35) {
                        if (plVar38[2] == uVar15) goto code_r0x0be3ae12;
                      }
                      else {
                        if (plVar22 <= plVar30) {
                          if (((ulong)plVar30 | (ulong)plVar22) >> 0x20 == 0) {
                            plVar30 = (long *)(((ulong)plVar30 & 0xffffffff) %
                                              ((ulong)plVar22 & 0xffffffff));
                          }
                          else {
                            plVar30 = (long *)((ulong)plVar30 % (ulong)plVar22);
                          }
                        }
                        if (plVar30 != plVar21) break;
                      }
                      plVar38 = (long *)*plVar38;
                    } while (plVar38 != (long *)0x0);
                  }
                }
              }
              plVar38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              auVar53._8_8_ = extraout_XMM0_Qb;
              auVar53._0_8_ = extraout_XMM0_Qa;
              auVar49 = auVar53._4_12_;
              if (plVar38 == (long *)0x0) {
                auVar55._0_8_ = func_0x0eec74c0(0x20,0);
                auVar55._8_8_ = extraout_XMM0_Qb_00;
                auVar49 = auVar55._4_12_;
              }
              *plVar38 = 0;
              plVar38[1] = (long)plVar35;
              plVar38[2] = uVar15;
              *(undefined4 *)(plVar38 + 3) = 0;
              if ((plVar22 == (long *)0x0) ||
                 ((float)plVar22 * *(float *)(plVar20 + 0x38) < (float)(plVar20[0x37] + 1))) {
                uVar15 = 1;
                if ((long *)0x2 < plVar22) {
                  uVar15 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
                }
                plVar30 = (long *)((long)plVar22 * 2 | uVar15);
                auVar54._0_4_ = (float)(plVar20[0x37] + 1) / *(float *)(plVar20 + 0x38);
                auVar54._4_12_ = auVar49;
                fVar47 = (float)func_0x0eee3ab0(auVar54._0_8_);
                plVar21 = (long *)((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f |
                                  (long)fVar47);
                if (plVar21 < plVar30) {
                  plVar21 = plVar30;
                }
                plVar30 = (long *)0x2;
                if ((plVar21 != (long *)0x1) &&
                   (plVar30 = plVar21, ((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
                  plVar30 = (long *)func_0x0412c3f0();
                  plVar22 = (long *)plVar20[0x35];
                }
                if (plVar22 < plVar30) {
code_r0x0be3b162:
                  func_0x0be36a10(plVar16,plVar30);
                }
                else if (plVar30 < plVar22) {
                  fVar47 = (float)func_0x0eee3ab0((float)(ulong)plVar20[0x37] /
                                                  *(float *)(plVar20 + 0x38));
                  plVar21 = (long *)((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f |
                                    (long)fVar47);
                  if ((plVar22 < (long *)0x3) ||
                     (uVar15 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555),
                     uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
                     1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    plVar21 = (long *)func_0x0412c3f0(plVar21);
                  }
                  else if ((long *)0x1 < plVar21) {
                    lVar23 = 0x3f;
                    if ((long)plVar21 - 1U != 0) {
                      for (; (long)plVar21 - 1U >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    plVar21 = (long *)(1L << (-((byte)lVar23 ^ 0x3f) & 0x3f));
                  }
                  if (plVar30 <= plVar21) {
                    plVar30 = plVar21;
                  }
                  if (plVar30 < plVar22) goto code_r0x0be3b162;
                }
                plVar22 = (long *)plVar20[0x35];
                if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                  plVar21 = (long *)((ulong)plVar35 & (long)plVar22 + 0x7fffffffffU);
                }
                else {
                  plVar21 = plVar35;
                  if (plVar22 <= plVar35) {
                    plVar21 = (long *)((ulong)plVar35 % (ulong)plVar22);
                  }
                }
              }
              lVar23 = *plVar16;
              plVar35 = *(long **)(lVar23 + (long)plVar21 * 8);
              if (plVar35 == (long *)0x0) {
                *plVar38 = *(long *)auStack_158._0_8_;
                *(long **)auStack_158._0_8_ = plVar38;
                *(undefined8 *)(lVar23 + (long)plVar21 * 8) = auStack_158._0_8_;
                if (*plVar38 != 0) {
                  plVar21 = *(long **)(*plVar38 + 8);
                  if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                    *(long **)(lVar23 + ((ulong)plVar21 & (long)plVar22 - 1U) * 8) = plVar38;
                  }
                  else {
                    if (plVar22 <= plVar21) {
                      if (((ulong)plVar21 | (ulong)plVar22) >> 0x20 == 0) {
                        *(long **)(lVar23 + (((ulong)plVar21 & 0xffffffff) %
                                            ((ulong)plVar22 & 0xffffffff)) * 8) = plVar38;
                        goto code_r0x0be3ae0b;
                      }
                      plVar21 = (long *)((ulong)plVar21 % (ulong)plVar22);
                    }
                    *(long **)(lVar23 + (long)plVar21 * 8) = plVar38;
                  }
                }
              }
              else {
                *plVar38 = *plVar35;
                *plVar35 = (long)plVar38;
              }
code_r0x0be3ae0b:
              plVar20[0x37] = plVar20[0x37] + 1;
code_r0x0be3ae12:
              *(undefined4 *)(plVar38 + 3) = auStack_1b8._0_4_;
              plVar21 = (long *)auStack_1f8._0_8_;
            }
          }
          lVar33 = lVar33 + 1;
          lVar23 = plVar21[8];
        } while (lVar33 < (int)((ulong)(plVar21[9] - lVar23) >> 3));
      }
    }
    break;
  case 9:
    plVar21 = plStack_f8;
    if ((auStack_108[0] & 1) == 0) {
      plVar21 = (long *)(auStack_108 + 1);
    }
    if ((char)plVar21[1] == 'S' && *plVar21 == 0x52454c4c4557445f) {
      uStack_268._0_4_ = 0x14d947d;
      uStack_268._4_4_ = 0;
      bStack_260 = 8;
      auStack_25f = (undefined1  [7])0x0;
      plVar21 = (long *)func_0x0d6c97a0(plStack_f0 + 1,&uStack_268);
      if ((plVar21 != plVar16 + 2) && ((int)plVar21[0xc] == 9)) {
        lVar23 = plVar21[8];
        uVar15 = plVar21[9] - lVar23;
        if (0xffffffff < (long)(uVar15 * 0x20000000)) {
          plStack_88 = plVar20 + 0x11;
          uVar18 = 0;
          auStack_1b8._0_8_ = plVar21;
          do {
            if (((int)uVar18 < (int)(uVar15 >> 3)) &&
               (plVar16 = *(long **)(lVar23 + uVar18 * 8), plVar16 != (long *)0x0)) {
              cVar10 = (**(code **)(*plVar16 + 0x30))(plVar16);
              plVar21 = (long *)auStack_1b8._0_8_;
              if (cVar10 == '\n') {
                uStack_268._0_4_ = 0x11e1e9b;
                uStack_268._4_4_ = 0;
                bStack_260 = 6;
                auStack_25f = (undefined1  [7])0x0;
                plVar22 = (long *)func_0x0d6c9880(plVar16 + 1,&uStack_268);
                plVar21 = (long *)auStack_1b8._0_8_;
                if (((plVar22 != plVar16 + 2) && ((int)plVar22[0xc] == 9)) &&
                   (uVar37 = (uint)((ulong)(plVar22[9] - plVar22[8]) >> 3), 0 < (int)uVar37)) {
                  auStack_1f8._0_8_ = plStack_88 + uVar18 * 5;
                  plStack_c0 = plStack_88 + uVar18 * 5 + 2;
                  puVar39 = (ulong *)(ulong)(uVar37 & 0x7fffffff);
                  puVar29 = (ulong *)0x0;
                  puStack_1e0 = puVar39;
                  plStack_1a0 = plVar22;
                  do {
                    if (((long)puVar29 < (long)(int)((ulong)(plVar22[9] - plVar22[8]) >> 3)) &&
                       (plVar16 = *(long **)(plVar22[8] + (long)puVar29 * 8), plVar16 != (long *)0x0
                       )) {
                      cVar10 = (**(code **)(*plVar16 + 0x30))();
                      plVar21 = (long *)auStack_1b8._0_8_;
                      plVar22 = plStack_1a0;
                      puVar39 = puStack_1e0;
                      if (cVar10 == '\n') {
                        uStack_268._0_4_ = 0x12f5e8c;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 2;
                        auStack_25f = (undefined1  [7])0x0;
                        auStack_158._0_8_ = plVar16 + 1;
                        plVar21 = (long *)func_0x0d6c97a0(plVar16 + 1,&uStack_268);
                        auStack_148._0_8_ = plVar16 + 2;
                        if ((plVar21 == plVar16 + 2) || ((int)plVar21[0xc] != 4)) {
                          uStack_278 = 0;
                        }
                        else {
                          uStack_278 = plVar21[8];
                        }
                        uStack_200 = (byte *)CONCAT44(uStack_200._4_4_,
                                                      (*(float *)((long)plVar20 + 0x13c) -
                                                      *(float *)(plVar20 + 0x26)) * _DAT_011986e0 +
                                                      *(float *)(plVar20 + 0x26));
                        fVar47 = (float)plVar20[0x25];
                        fVar48 = (float)((ulong)plVar20[0x25] >> 0x20);
                        uStack_e8 = CONCAT44(((float)((ulong)*(undefined8 *)((long)plVar20 + 0x134)
                                                     >> 0x20) - fVar48) * _UNK_014e9bd4 + fVar48,
                                             ((float)*(undefined8 *)((long)plVar20 + 0x134) - fVar47
                                             ) * _DAT_014e9bd0 + fVar47);
                        uStack_e0 = CONCAT44(_UNK_014e9bdc * 0.0 + 0.0,_UNK_014e9bd8 * 0.0 + 0.0);
                        uStack_98 = (long *)func_0x0eee4390();
                        uStack_e8 = func_0x0eee4390();
                        uVar46 = func_0x0eee4390((ulong)uStack_200 & 0xffffffff);
                        uStack_200 = (byte *)CONCAT44(uStack_200._4_4_,uVar46);
                        uStack_268._0_4_ = 0x12672b1;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 0xe;
                        auStack_25f = (undefined1  [7])0x0;
                        lVar23 = func_0x0d6c9880(auStack_158._0_8_,&uStack_268);
                        if ((lVar23 == auStack_148._0_8_) || (*(int *)(lVar23 + 0x60) != 9)) {
                          iVar12 = (int)uStack_e8._4_4_;
                          uStack_e8 = CONCAT44((int)(float)uStack_e8,(int)(float)uStack_98);
                          uStack_e0 = CONCAT44(iVar12,(int)uStack_98._4_4_);
                          iVar12 = (int)(float)uStack_200;
code_r0x0be3a74e:
                          uStack_200 = (byte *)CONCAT44(uStack_200._4_4_,iVar12);
                        }
                        else {
                          uVar42 = 0;
                          uVar46 = 0;
                          if ((0 < (int)((ulong)(*(long *)(lVar23 + 0x48) -
                                                (long)*(long **)(lVar23 + 0x40)) >> 3)) &&
                             (plVar16 = (long *)**(long **)(lVar23 + 0x40), plVar16 != (long *)0x0))
                          {
                            cVar10 = (**(code **)(*plVar16 + 0x30))(plVar16);
                            uVar46 = 0;
                            if (cVar10 == '\x03') {
                              uVar46 = (undefined4)plVar16[1];
                            }
                          }
                          if ((1 < (int)((ulong)(*(long *)(lVar23 + 0x48) - *(long *)(lVar23 + 0x40)
                                                ) >> 3)) &&
                             (plVar16 = *(long **)(*(long *)(lVar23 + 0x40) + 8),
                             plVar16 != (long *)0x0)) {
                            cVar10 = (**(code **)(*plVar16 + 0x30))(plVar16);
                            if (cVar10 == '\x03') {
                              uVar42 = (undefined4)plVar16[1];
                            }
                          }
                          uStack_e8 = CONCAT44(uVar42,uVar46);
                          uStack_e0 = 0;
                          if (((int)((ulong)(*(long *)(lVar23 + 0x48) - *(long *)(lVar23 + 0x40)) >>
                                    3) < 3) ||
                             (plVar16 = *(long **)(*(long *)(lVar23 + 0x40) + 0x10),
                             plVar16 == (long *)0x0)) {
                            uStack_200 = (byte *)((ulong)uStack_200._4_4_ << 0x20);
                          }
                          else {
                            uStack_200 = (byte *)((ulong)uStack_200._4_4_ << 0x20);
                            cVar10 = (**(code **)(*plVar16 + 0x30))(plVar16);
                            if (cVar10 == '\x03') {
                              iVar12 = (int)plVar16[1];
                              goto code_r0x0be3a74e;
                            }
                          }
                        }
                        uStack_268._0_4_ = 0x12ffb88;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 2;
                        auStack_25f = (undefined1  [7])0x0;
                        lVar23 = func_0x0d6c97a0(auStack_158._0_8_,&uStack_268);
                        if ((lVar23 == auStack_148._0_8_) || (*(int *)(lVar23 + 0x60) != 4)) {
                          lVar23 = 0;
                        }
                        else {
                          lVar23 = *(long *)(lVar23 + 0x40);
                        }
                        uVar15 = ((long)uStack_278 >> 0x20) + 0x9e3779b9;
                        plVar21 = (long *)((uStack_278 & 0xffffffff) + 0x9e3779b9 + uVar15 * 0x40 +
                                           (uVar15 >> 2) ^ uVar15);
                        plVar16 = *(long **)(auStack_1f8._0_8_ + 8);
                        if (plVar16 != (long *)0x0) {
                          uVar15 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555);
                          uVar15 = (uVar15 >> 2 & 0x3333333333333333) +
                                   (uVar15 & 0x3333333333333333);
                          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                          if (uVar15 >> 0x38 < 2) {
                            uStack_98 = (long *)((long)plVar16 + 0x7fffffffffU & (ulong)plVar21);
                          }
                          else {
                            uStack_98 = plVar21;
                            if (plVar16 <= plVar21) {
                              uStack_98 = (long *)((ulong)plVar21 % (ulong)plVar16);
                            }
                          }
                          plVar22 = *(long **)(*(long *)auStack_1f8._0_8_ + (long)uStack_98 * 8);
                          if ((plVar22 != (long *)0x0) &&
                             (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
                            if ((byte)(uVar15 >> 0x38) < 2) {
                              do {
                                if ((long *)plVar22[1] == plVar21) {
                                  if (plVar22[2] == uStack_278) goto code_r0x0be3abd2;
                                }
                                else if ((long *)((ulong)plVar22[1] & (long)plVar16 - 1U) !=
                                         uStack_98) break;
                                plVar22 = (long *)*plVar22;
                              } while (plVar22 != (long *)0x0);
                            }
                            else {
                              do {
                                plVar35 = (long *)plVar22[1];
                                if (plVar35 == plVar21) {
                                  if (plVar22[2] == uStack_278) goto code_r0x0be3abd2;
                                }
                                else {
                                  if (plVar16 <= plVar35) {
                                    if (((ulong)plVar35 | (ulong)plVar16) >> 0x20 == 0) {
                                      plVar35 = (long *)(((ulong)plVar35 & 0xffffffff) %
                                                        ((ulong)plVar16 & 0xffffffff));
                                    }
                                    else {
                                      plVar35 = (long *)((ulong)plVar35 % (ulong)plVar16);
                                    }
                                  }
                                  if (plVar35 != uStack_98) break;
                                }
                                plVar22 = (long *)*plVar22;
                              } while (plVar22 != (long *)0x0);
                            }
                          }
                        }
                        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                        if (plVar22 == (long *)0x0) {
                          func_0x0eec74c0(0x30,0);
                        }
                        *plVar22 = 0;
                        plVar22[1] = (long)plVar21;
                        plVar22[2] = uStack_278;
                        plVar22[3] = lVar23;
                        plVar22[4] = uStack_e8;
                        *(float *)(plVar22 + 5) = (float)uStack_200;
                        fVar47 = (float)(*(long *)(auStack_1f8._0_8_ + 0x18) + 1);
                        if ((plVar16 == (long *)0x0) ||
                           (plVar35 = uStack_98,
                           (float)plVar16 * *(float *)(auStack_1f8._0_8_ + 0x20) < fVar47)) {
                          uVar15 = 1;
                          if ((long *)0x2 < plVar16) {
                            uVar15 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
                          }
                          plVar38 = (long *)((long)plVar16 * 2 | uVar15);
                          fVar47 = (float)func_0x0eee3ab0(fVar47 / *(float *)(auStack_1f8._0_8_ +
                                                                             0x20));
                          plVar35 = (long *)((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f |
                                            (long)fVar47);
                          if (plVar35 < plVar38) {
                            plVar35 = plVar38;
                          }
                          plVar38 = (long *)0x2;
                          if ((plVar35 != (long *)0x1) &&
                             (plVar38 = plVar35, ((ulong)plVar35 & (long)plVar35 - 1U) != 0)) {
                            plVar38 = (long *)func_0x0412c3f0();
                            plVar16 = *(long **)(auStack_1f8._0_8_ + 8);
                          }
                          if (plVar16 < plVar38) {
code_r0x0be3aa54:
                            func_0x0be34270(auStack_1f8._0_8_,plVar38);
                          }
                          else if (plVar38 < plVar16) {
                            fVar47 = (float)func_0x0eee3ab0((float)*(ulong *)(auStack_1f8._0_8_ +
                                                                             0x18) /
                                                            *(float *)(auStack_1f8._0_8_ + 0x20));
                            plVar35 = (long *)((long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f
                                              | (long)fVar47);
                            if ((plVar16 < (long *)0x3) ||
                               (uVar15 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555),
                               uVar15 = (uVar15 >> 2 & 0x3333333333333333) +
                                        (uVar15 & 0x3333333333333333),
                               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) *
                                          0x101010101010101 >> 0x38))) {
                              plVar35 = (long *)func_0x0412c3f0(plVar35);
                            }
                            else if ((long *)0x1 < plVar35) {
                              lVar23 = 0x3f;
                              if ((long)plVar35 - 1U != 0) {
                                for (; (long)plVar35 - 1U >> lVar23 == 0; lVar23 = lVar23 + -1) {
                                }
                              }
                              plVar35 = (long *)(1L << (-((byte)lVar23 ^ 0x3f) & 0x3f));
                            }
                            if (plVar38 <= plVar35) {
                              plVar38 = plVar35;
                            }
                            if (plVar38 < plVar16) goto code_r0x0be3aa54;
                          }
                          plVar16 = *(long **)(auStack_1f8._0_8_ + 8);
                          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
                            plVar35 = (long *)((ulong)plVar21 & (long)plVar16 + 0x7fffffffffU);
                          }
                          else {
                            plVar35 = plVar21;
                            if (plVar16 <= plVar21) {
                              plVar35 = (long *)((ulong)plVar21 % (ulong)plVar16);
                            }
                          }
                        }
                        lVar23 = *(long *)auStack_1f8._0_8_;
                        plVar21 = *(long **)(lVar23 + (long)plVar35 * 8);
                        if (plVar21 == (long *)0x0) {
                          *plVar22 = *plStack_c0;
                          *plStack_c0 = (long)plVar22;
                          *(long **)(lVar23 + (long)plVar35 * 8) = plStack_c0;
                          if (*plVar22 != 0) {
                            plVar21 = *(long **)(*plVar22 + 8);
                            if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
                              *(long **)(lVar23 + ((ulong)plVar21 & (long)plVar16 - 1U) * 8) =
                                   plVar22;
                            }
                            else {
                              if (plVar16 <= plVar21) {
                                if (((ulong)plVar21 | (ulong)plVar16) >> 0x20 == 0) {
                                  *(long **)(lVar23 + (((ulong)plVar21 & 0xffffffff) %
                                                      ((ulong)plVar16 & 0xffffffff)) * 8) = plVar22;
                                  goto code_r0x0be3abc6;
                                }
                                plVar21 = (long *)((ulong)plVar21 % (ulong)plVar16);
                              }
                              *(long **)(lVar23 + (long)plVar21 * 8) = plVar22;
                            }
                          }
                        }
                        else {
                          *plVar22 = *plVar21;
                          *plVar21 = (long)plVar22;
                        }
code_r0x0be3abc6:
                        *(long *)(auStack_1f8._0_8_ + 0x18) =
                             *(long *)(auStack_1f8._0_8_ + 0x18) + 1;
code_r0x0be3abd2:
                        uStack_268._0_4_ = 0x136ce10;
                        uStack_268._4_4_ = 0;
                        bStack_260 = 0xb;
                        auStack_25f = (undefined1  [7])0x0;
                        lVar23 = func_0x0d6c9880(auStack_158._0_8_,&uStack_268);
                        if ((lVar23 == auStack_148._0_8_) || (*(int *)(lVar23 + 0x60) != 4)) {
                          plVar21 = (long *)auStack_1b8._0_8_;
                          plVar22 = plStack_1a0;
                          puVar39 = puStack_1e0;
                        }
                        else {
                          uVar15 = *(ulong *)(lVar23 + 0x40);
                          puVar39 = (ulong *)plVar20[0x3f];
                          if (puVar39 < (ulong *)plVar20[0x40]) {
                            *puVar39 = uStack_278;
                            puVar39[1] = uVar15;
                            puVar39 = puVar39 + 2;
                          }
                          else {
                            lVar23 = plVar20[0x3e];
                            lVar33 = (long)puVar39 - lVar23;
                            uVar32 = (lVar33 >> 4) + 1;
                            if (uVar32 >> 0x3c != 0) goto code_r0x0be3c2c1;
                            auStack_148._0_8_ = uVar15;
                            auStack_158._0_8_ = lVar23;
                            uStack_200 = (byte *)(plVar20[0x40] - lVar23);
                            uVar15 = (long)uStack_200 >> 3;
                            if ((ulong)((long)uStack_200 >> 3) <= uVar32) {
                              uVar15 = uVar32;
                            }
                            if ((byte *)0x7fffffffffffffef < uStack_200) {
                              uVar15 = 0xfffffffffffffff;
                            }
                            if (0xfffffffffffffff < uVar15) goto code_r0x0be3c2bc;
                            lVar14 = uVar15 * 0x10;
                            lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar14);
                            if (lVar23 == 0) {
                              func_0x0eec74c0(lVar14,0);
                            }
                            *(ulong *)(lVar23 + lVar33) = uStack_278;
                            *(undefined8 *)(lVar23 + 8 + lVar33) = auStack_148._0_8_;
                            puVar39 = (ulong *)(lVar23 + lVar33 + 0x10);
                            lVar36 = lVar23 + lVar33 + (lVar33 >> 4) * -0x10;
                            uVar24 = auStack_158._0_8_;
                            func_0x0eee2f00(lVar36,auStack_158._0_8_,lVar33);
                            plVar20[0x3e] = lVar36;
                            plVar20[0x3f] = (long)puVar39;
                            plVar20[0x40] = lVar14 + lVar23;
                            if (uVar24 != 0) {
                              func_0x0412a280(uVar24,uStack_200);
                            }
                          }
                          plVar20[0x3f] = (long)puVar39;
                          plVar21 = (long *)auStack_1b8._0_8_;
                          plVar22 = plStack_1a0;
                          puVar39 = puStack_1e0;
                        }
                      }
                    }
                    puVar29 = (ulong *)((long)puVar29 + 1);
                  } while (puVar29 != puVar39);
                }
              }
            }
            if (2 < uVar18) break;
            uVar18 = uVar18 + 1;
            lVar23 = plVar21[8];
            uVar15 = plVar21[9] - lVar23;
          } while ((long)uVar18 < (long)(int)(uVar15 >> 3));
        }
      }
    }
  }
  plVar16 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_78 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
  goto LAB_0be3c1e5;
code_r0x0be3be80:
  func_0x0412a280(pauVar17,0x18);
code_r0x0be3bbbe:
  lVar33 = lVar33 + 1;
  lVar23 = plVar22[8];
  if ((int)((ulong)(plVar22[9] - lVar23) >> 3) <= lVar33) goto code_r0x0be3c091;
  goto code_r0x0be3bbde;
}


