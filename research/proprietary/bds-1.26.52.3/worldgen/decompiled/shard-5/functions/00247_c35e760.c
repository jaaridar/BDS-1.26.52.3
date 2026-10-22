/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc45e760 (ELF vaddr 0xc35e760)
 * Label: caller-of-callee
 * Body:  [[0c45e760, 0c45e8b4] [0c45e8c0, 0c45e94a] [0c45e950, 0c45eb80] [0c45eb90, 0c45ebe8] [0c45ebf0, 0c45ec20] [0c45ec30, 0c45ec78] [0c45ec80, 0c45eca8] [0c45ecb0, 0c45ed1a] [0c45ed20, 0c45ef16] [0c45ef20, 0c45ef5d] [0c45ef60, 0c45ef88] [0c45ef90, 0c45efc3] [0c45efd0, 0c45f026] [0c45f030, 0c45f064] [0c45f070, 0c45f0c0] [0c45f0d0, 0c45f0fb] [0c45f100, 0c45f80e] [0c45f81e, 0c45f838] [0c45f8c8, 0c45f8d2] [0c45f8f0, 0c45f939]]
 * Ghidra: FUN_0c45e760
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c45e760(long param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  uint uStack_d4;
  byte *pbStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [16];
  ulong *puStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((*param_3 & 1) == 0) {
    *(byte *)param_3 = 0;
    pbVar15 = (byte *)((long)param_3 + 1);
  }
  else {
    param_3[1] = 0;
    pbVar15 = (byte *)param_3[2];
  }
  *pbVar15 = 0;
  lStack_b8 = param_1;
  uStack_98 = param_2;
  cVar9 = func_0x04864290(param_2);
  if (((cVar9 == '\0') || (cVar9 = func_0x04864260(param_2), cVar9 != '\0')) ||
     (iVar11 = func_0x048641f0(param_2), iVar11 == 0)) {
    if ((*param_3 & 1) == 0) {
      *(byte *)param_3 = 0x2a;
      pbVar15 = (byte *)((long)param_3 + 1);
    }
    else {
      param_3[1] = 0x15;
      pbVar15 = (byte *)param_3[2];
    }
    uVar14 = _UNK_0146f71a;
    *(undefined8 *)pbVar15 = _DAT_0146f712;
    *(undefined8 *)(pbVar15 + 8) = uVar14;
    pbVar15[0xd] = 0x72;
    pbVar15[0xe] = 0x6f;
    pbVar15[0xf] = 0x76;
    pbVar15[0x10] = 0x69;
    pbVar15[0x11] = 100;
    pbVar15[0x12] = 0x65;
    pbVar15[0x13] = 100;
    pbVar15[0x14] = 0x2e;
    pbVar15[0x15] = 0;
    uVar21 = 0;
  }
  else {
    puStack_a0 = param_3;
    func_0x04865530(auStack_b0,param_2);
    pbStack_d0 = (byte *)((long)&uStack_f0 + 1);
    uStack_58 = 0x66617263656e696d;
    uStack_50 = 0x65645f6e61633a74;
    uStack_68 = 0x6e61633a74666172;
    uStack_60 = 0x796f72747365645f;
    uStack_48 = 0x66617263656e696d;
    uStack_40 = 0x6c705f6e61633a74;
    uStack_78 = 0x5f6e61633a746661;
    uStack_70 = 0x6e6f5f6563616c70;
    while( true ) {
      func_0x048655b0(auStack_138,uStack_98);
      uVar12 = func_0x04862c80(auStack_b0,auStack_138);
      uVar21 = (ulong)uVar12;
      func_0x04862b40(auStack_138);
      if ((char)uVar12 != '\0') break;
      uStack_c8 = func_0x04862b80(auStack_b0);
      uVar14 = func_0x04862ca0(auStack_b0);
      pbVar15 = (byte *)func_0x0eee2e90(uVar14);
      if ((byte *)0xfffffffffffffff7 < pbVar15) {
        func_0x04882e30();
LAB_0c45f7f9:
        func_0x04891200();
LAB_0c45f7fe:
        func_0x04882e30();
LAB_0c45f803:
        func_0x04882e30();
LAB_0c45f808:
        uVar14 = func_0x04882e30();
        if ((auStack_138[0] & 1) != 0) {
          func_0x0412a280(pbStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
        }
        if ((uStack_108 & 1) != 0) {
          func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
        }
        if ((uStack_f0 & 1) != 0) {
          func_0x0412a280(pbStack_e0,uStack_f0 & 0xfffffffffffffffe);
        }
        func_0x04862b40(auStack_b0);
        func_0x0eee2d70(uVar14);
        pcVar2 = (code *)swi(3);
        uVar21 = (*pcVar2)();
        return uVar21;
      }
      uStack_d4 = uVar12;
      if (pbVar15 < (byte *)0x17) {
        uStack_f0 = CONCAT71(uStack_f0._1_7_,(char)pbVar15 * '\x02');
        pbVar30 = (byte *)((long)&uStack_f0 + 1);
        if (pbVar15 != (byte *)0x0) goto LAB_0c45e99b;
      }
      else {
        uVar21 = ((ulong)pbVar15 | 7) + 1;
        if (((ulong)pbVar15 | 7) == 0x17) {
          uVar21 = 0x1a;
        }
        pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (pbVar30 == (byte *)0x0) {
          func_0x0eec74c0(uVar21,0);
        }
        uStack_f0 = uVar21 | 1;
        pbStack_e8 = pbVar15;
        pbStack_e0 = pbVar30;
LAB_0c45e99b:
        func_0x0eee2ee0(pbVar30,uVar14,pbVar15);
      }
      uVar21 = uStack_f0;
      pbVar30[(long)pbVar15] = 0;
      pbVar20 = pbStack_e0;
      pbVar30 = pbStack_e8;
      pbVar24 = (byte *)(uStack_f0 >> 1 & 0x7f);
      pbVar15 = (byte *)((long)&uStack_f0 + 1);
      if ((uStack_f0 & 1) != 0) {
        pbVar24 = pbStack_e8;
        pbVar15 = pbStack_e0;
      }
      if (0 < (long)pbVar24) {
        pbVar16 = pbVar15;
        pbVar23 = pbVar24;
        while (pbVar16 = (byte *)memchr(pbVar16,0x3a,pbVar23), pbVar16 != (byte *)0x0) {
          if (*pbVar16 == 0x3a) {
            if ((long)pbVar16 - (long)pbVar15 != -1 && pbVar16 != pbVar15 + (long)pbVar24) {
              if ((uVar21 & 1) == 0) {
                pbStack_f8 = pbStack_e0;
                uStack_108 = uStack_f0;
                pbStack_100 = pbStack_e8;
              }
              else {
                func_0x0412e5e0(&uStack_108,pbVar20,pbVar30);
              }
              goto LAB_0c45eaa2;
            }
            break;
          }
          pbVar16 = pbVar16 + 1;
          pbVar23 = pbVar15 + (long)pbVar24 + -(long)pbVar16;
          if ((long)pbVar23 < 1) break;
        }
      }
      auVar32 = _auStack_138;
      stack0xfffffffffffffec9 = 0x66617263656e696d;
      auStack_138[0] = 0x14;
      uStack_130._1_2_ = 0x3a74;
      uStack_130._4_4_ = auVar32._12_4_;
      uStack_130._3_1_ = 0;
      pauVar17 = (undefined1 (*) [16])func_0x0412f8c0(auStack_138,pbVar15,pbVar24);
      pbStack_f8 = *(byte **)pauVar17[1];
      uStack_108 = *(ulong *)*pauVar17;
      pbStack_100 = *(byte **)(*pauVar17 + 8);
      *pauVar17 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar17[1] = 0;
      if ((auStack_138[0] & 1) != 0) {
        func_0x0412a280(pbStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
      }
LAB_0c45eaa2:
      cVar9 = func_0x04864290(uStack_c8);
      if ((cVar9 == '\0') || (cVar9 = func_0x04864260(uStack_c8), cVar9 != '\0')) {
        uVar21 = uStack_f0;
        pbVar15 = pbStack_e8;
        if ((uStack_f0 & 1) == 0) {
          pbVar15 = (byte *)(uStack_f0 >> 1 & 0x7f);
        }
        pbVar30 = pbVar15 + 0xb;
        if ((byte *)0xfffffffffffffff7 < pbVar30) goto LAB_0c45f803;
        if (pbVar30 < (byte *)0x17) {
          pbStack_128 = (byte *)0x0;
          stack0xfffffffffffffec9 = SUB1615((undefined1  [16])0x0,1);
          auStack_138[0] = (char)pbVar30 * '\x02';
          uVar19 = 0;
        }
        else {
          uVar19 = 0x1a;
          if (((ulong)pbVar30 | 7) != 0x17) {
            uVar19 = ((ulong)pbVar30 | 7) + 1;
          }
          pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
          if (pbVar20 == (byte *)0x0) {
            func_0x0eec74c0(uVar19,0);
          }
          uVar19 = uVar19 | 1;
          uStack_130 = (ulong)pbVar30;
          auStack_138 = (undefined1  [8])uVar19;
          pbStack_128 = pbVar20;
        }
        bVar31 = (uVar19 & 1) != 0;
        pbVar30 = auStack_138 + 1;
        if (bVar31) {
          pbVar30 = pbStack_128;
        }
        pbVar20 = pbStack_128 + 0xb;
        pbVar30[0] = 0x43;
        pbVar30[1] = 0x6f;
        pbVar30[2] = 0x6d;
        pbVar30[3] = 0x70;
        pbVar30[4] = 0x6f;
        pbVar30[5] = 0x6e;
        pbVar30[6] = 0x65;
        pbVar30[7] = 0x6e;
        pbVar30[7] = 0x6e;
        pbVar30[8] = 0x74;
        pbVar30[9] = 0x20;
        pbVar30[10] = 0x27;
        pbVar30 = (byte *)((long)&uStack_130 + 4);
        if (bVar31) {
          pbVar30 = pbVar20;
        }
        if (pbVar15 != (byte *)0x0) {
          if ((uVar21 & 1) != 0) {
            pbStack_d0 = pbStack_e0;
          }
          func_0x0eee2ee0(pbVar30,pbStack_d0,pbVar15);
        }
        pbVar30[(long)pbVar15] = 0;
        pauVar17 = (undefined1 (*) [16])func_0x0412f8c0(auStack_138,&UNK_013bc3b7,0x14);
LAB_0c45f711:
        puVar8 = puStack_a0;
        uVar19 = *(ulong *)(*pauVar17 + 8);
        uVar21 = *(ulong *)pauVar17[1];
        *pauVar17 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar17[1] = 0;
        if ((*puStack_a0 & 1) == 0) {
          *puStack_a0 = *(ulong *)*pauVar17;
          puStack_a0[1] = uVar19;
          puStack_a0[2] = uVar21;
        }
        else {
          uStack_c8 = *(ulong *)*pauVar17;
          uStack_c0 = uVar19;
          func_0x0412a280(puStack_a0[2],*puStack_a0 & 0xfffffffffffffffe);
          *puVar8 = uStack_c8;
          puVar8[1] = uStack_c0;
          puVar8[2] = uVar21;
        }
        if ((auStack_138[0] & 1) != 0) {
          func_0x0412a280(pbStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
        }
        uVar21 = (ulong)uStack_d4;
        if ((uStack_108 & 1) != 0) {
          func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
        }
        if ((uStack_f0 & 1) != 0) {
          func_0x0412a280(pbStack_e0,uStack_f0 & 0xfffffffffffffffe);
        }
        break;
      }
      bVar10 = (byte)uStack_108 & 1;
      pbVar15 = pbStack_100;
      if ((uStack_108 & 1) == 0) {
        pbVar15 = (byte *)(ulong)((byte)uStack_108 >> 1);
      }
      if (pbVar15 == (byte *)0x15) {
        pbVar15 = (byte *)((long)&uStack_108 + 1);
        if ((uStack_108 & 1) != 0) {
          pbVar15 = pbStack_f8;
        }
        auVar37[0] = -(pbVar15[5] == (byte)uStack_68);
        auVar37[1] = -(pbVar15[6] == uStack_68._1_1_);
        auVar37[2] = -(pbVar15[7] == uStack_68._2_1_);
        auVar37[3] = -(pbVar15[8] == uStack_68._3_1_);
        auVar37[4] = -(pbVar15[9] == uStack_68._4_1_);
        auVar37[5] = -(pbVar15[10] == uStack_68._5_1_);
        auVar37[6] = -(pbVar15[0xb] == uStack_68._6_1_);
        auVar37[7] = -(pbVar15[0xc] == uStack_68._7_1_);
        auVar37[8] = -(pbVar15[0xd] == (byte)uStack_60);
        auVar37[9] = -(pbVar15[0xe] == uStack_60._1_1_);
        auVar37[10] = -(pbVar15[0xf] == uStack_60._2_1_);
        auVar37[0xb] = -(pbVar15[0x10] == uStack_60._3_1_);
        auVar37[0xc] = -(pbVar15[0x11] == uStack_60._4_1_);
        auVar37[0xd] = -(pbVar15[0x12] == uStack_60._5_1_);
        auVar37[0xe] = -(pbVar15[0x13] == uStack_60._6_1_);
        auVar37[0xf] = -(pbVar15[0x14] == uStack_60._7_1_);
        auVar33[0] = -(*pbVar15 == (byte)uStack_58);
        auVar33[1] = -(pbVar15[1] == uStack_58._1_1_);
        auVar33[2] = -(pbVar15[2] == uStack_58._2_1_);
        auVar33[3] = -(pbVar15[3] == uStack_58._3_1_);
        auVar33[4] = -(pbVar15[4] == uStack_58._4_1_);
        auVar33[5] = -(pbVar15[5] == uStack_58._5_1_);
        auVar33[6] = -(pbVar15[6] == uStack_58._6_1_);
        auVar33[7] = -(pbVar15[7] == uStack_58._7_1_);
        auVar33[8] = -(pbVar15[8] == (byte)uStack_50);
        auVar33[9] = -(pbVar15[9] == uStack_50._1_1_);
        auVar33[10] = -(pbVar15[10] == uStack_50._2_1_);
        auVar33[0xb] = -(pbVar15[0xb] == uStack_50._3_1_);
        auVar33[0xc] = -(pbVar15[0xc] == uStack_50._4_1_);
        auVar33[0xd] = -(pbVar15[0xd] == uStack_50._5_1_);
        auVar33[0xe] = -(pbVar15[0xe] == uStack_50._6_1_);
        auVar33[0xf] = -(pbVar15[0xf] == uStack_50._7_1_);
        auVar33 = auVar33 & auVar37;
        if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0c45eb2a;
LAB_0c45ed60:
        pbVar15 = (byte *)(ulong)((byte)uStack_108 >> 1);
        if ((uStack_108 & 1) != 0) {
          pbVar15 = pbStack_100;
        }
        if (pbVar15 == (byte *)0x15) goto LAB_0c45ee1c;
LAB_0c45ed70:
        if (pbVar15 == (byte *)0x16) {
          pbVar15 = (byte *)((long)&uStack_108 + 1);
          if (bVar10 != 0) {
            pbVar15 = pbStack_f8;
          }
          auVar38[0] = -(pbVar15[6] == (byte)uStack_78);
          auVar38[1] = -(pbVar15[7] == uStack_78._1_1_);
          auVar38[2] = -(pbVar15[8] == uStack_78._2_1_);
          auVar38[3] = -(pbVar15[9] == uStack_78._3_1_);
          auVar38[4] = -(pbVar15[10] == uStack_78._4_1_);
          auVar38[5] = -(pbVar15[0xb] == uStack_78._5_1_);
          auVar38[6] = -(pbVar15[0xc] == uStack_78._6_1_);
          auVar38[7] = -(pbVar15[0xd] == uStack_78._7_1_);
          auVar38[8] = -(pbVar15[0xe] == (byte)uStack_70);
          auVar38[9] = -(pbVar15[0xf] == uStack_70._1_1_);
          auVar38[10] = -(pbVar15[0x10] == uStack_70._2_1_);
          auVar38[0xb] = -(pbVar15[0x11] == uStack_70._3_1_);
          auVar38[0xc] = -(pbVar15[0x12] == uStack_70._4_1_);
          auVar38[0xd] = -(pbVar15[0x13] == uStack_70._5_1_);
          auVar38[0xe] = -(pbVar15[0x14] == uStack_70._6_1_);
          auVar38[0xf] = -(pbVar15[0x15] == uStack_70._7_1_);
          auVar34[0] = -(*pbVar15 == (byte)uStack_48);
          auVar34[1] = -(pbVar15[1] == uStack_48._1_1_);
          auVar34[2] = -(pbVar15[2] == uStack_48._2_1_);
          auVar34[3] = -(pbVar15[3] == uStack_48._3_1_);
          auVar34[4] = -(pbVar15[4] == uStack_48._4_1_);
          auVar34[5] = -(pbVar15[5] == uStack_48._5_1_);
          auVar34[6] = -(pbVar15[6] == uStack_48._6_1_);
          auVar34[7] = -(pbVar15[7] == uStack_48._7_1_);
          auVar34[8] = -(pbVar15[8] == (byte)uStack_40);
          auVar34[9] = -(pbVar15[9] == uStack_40._1_1_);
          auVar34[10] = -(pbVar15[10] == uStack_40._2_1_);
          auVar34[0xb] = -(pbVar15[0xb] == uStack_40._3_1_);
          auVar34[0xc] = -(pbVar15[0xc] == uStack_40._4_1_);
          auVar34[0xd] = -(pbVar15[0xd] == uStack_40._5_1_);
          auVar34[0xe] = -(pbVar15[0xe] == uStack_40._6_1_);
          auVar34[0xf] = -(pbVar15[0xf] == uStack_40._7_1_);
          auVar34 = auVar34 & auVar38;
          if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
            lVar28 = 0x30;
            goto LAB_0c45ee5e;
          }
        }
        goto LAB_0c45ef60;
      }
      if (pbVar15 == (byte *)0x16) {
        pbVar15 = (byte *)((long)&uStack_108 + 1);
        if ((uStack_108 & 1) != 0) {
          pbVar15 = pbStack_f8;
        }
        auVar36[0] = -(pbVar15[6] == (byte)uStack_78);
        auVar36[1] = -(pbVar15[7] == uStack_78._1_1_);
        auVar36[2] = -(pbVar15[8] == uStack_78._2_1_);
        auVar36[3] = -(pbVar15[9] == uStack_78._3_1_);
        auVar36[4] = -(pbVar15[10] == uStack_78._4_1_);
        auVar36[5] = -(pbVar15[0xb] == uStack_78._5_1_);
        auVar36[6] = -(pbVar15[0xc] == uStack_78._6_1_);
        auVar36[7] = -(pbVar15[0xd] == uStack_78._7_1_);
        auVar36[8] = -(pbVar15[0xe] == (byte)uStack_70);
        auVar36[9] = -(pbVar15[0xf] == uStack_70._1_1_);
        auVar36[10] = -(pbVar15[0x10] == uStack_70._2_1_);
        auVar36[0xb] = -(pbVar15[0x11] == uStack_70._3_1_);
        auVar36[0xc] = -(pbVar15[0x12] == uStack_70._4_1_);
        auVar36[0xd] = -(pbVar15[0x13] == uStack_70._5_1_);
        auVar36[0xe] = -(pbVar15[0x14] == uStack_70._6_1_);
        auVar36[0xf] = -(pbVar15[0x15] == uStack_70._7_1_);
        auVar32[0] = -(*pbVar15 == (byte)uStack_48);
        auVar32[1] = -(pbVar15[1] == uStack_48._1_1_);
        auVar32[2] = -(pbVar15[2] == uStack_48._2_1_);
        auVar32[3] = -(pbVar15[3] == uStack_48._3_1_);
        auVar32[4] = -(pbVar15[4] == uStack_48._4_1_);
        auVar32[5] = -(pbVar15[5] == uStack_48._5_1_);
        auVar32[6] = -(pbVar15[6] == uStack_48._6_1_);
        auVar32[7] = -(pbVar15[7] == uStack_48._7_1_);
        auVar32[8] = -(pbVar15[8] == (byte)uStack_40);
        auVar32[9] = -(pbVar15[9] == uStack_40._1_1_);
        auVar32[10] = -(pbVar15[10] == uStack_40._2_1_);
        auVar32[0xb] = -(pbVar15[0xb] == uStack_40._3_1_);
        auVar32[0xc] = -(pbVar15[0xc] == uStack_40._4_1_);
        auVar32[0xd] = -(pbVar15[0xd] == uStack_40._5_1_);
        auVar32[0xe] = -(pbVar15[0xe] == uStack_40._6_1_);
        auVar32[0xf] = -(pbVar15[0xf] == uStack_40._7_1_);
        auVar32 = auVar32 & auVar36;
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0c45ed60;
      }
LAB_0c45eb2a:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uStack_130;
      _auStack_138 = auVar3 << 0x40;
      if ((uStack_108 & 1) == 0) {
        pbStack_120 = pbStack_f8;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_108;
        _auStack_138 = auVar6 << 0x40;
        pbStack_128 = pbStack_100;
      }
      else {
        func_0x0412e5e0(&uStack_130,pbStack_f8);
      }
      uStack_118 = 0;
      uStack_10c = (uint)(byte)uStack_130;
      if (((byte)uStack_130 & 1) == 0) {
        pbVar15 = (byte *)(ulong)((byte)uStack_130 >> 1);
        if ((byte)uStack_130 >> 1 != 0) goto LAB_0c45eb9f;
LAB_0c45ebf0:
        uVar21 = 0;
      }
      else {
        pbVar15 = pbStack_128;
        if (pbStack_128 == (byte *)0x0) goto LAB_0c45ebf0;
LAB_0c45eb9f:
        pbVar30 = (byte *)((long)&uStack_130 + 1);
        if (((byte)uStack_130 & 1) != 0) {
          pbVar30 = pbStack_120;
        }
        if ((pbVar30 == (byte *)0x0) || (*pbVar30 == 0)) goto LAB_0c45ebf0;
        uVar19 = func_0x0eee2e90(pbVar30);
        uVar21 = 0xcbf29ce484222325;
        if (uVar19 != 0) {
          if (7 < uVar19) {
            uVar22 = uVar19 & 0xfffffffffffffff8;
            do {
              uVar21 = (((((((uVar21 * 0x100000001b3 ^ (ulong)*pbVar30) * 0x100000001b3 ^
                            (ulong)pbVar30[1]) * 0x100000001b3 ^ (ulong)pbVar30[2]) * 0x100000001b3
                          ^ (ulong)pbVar30[3]) * 0x100000001b3 ^ (ulong)pbVar30[4]) * 0x100000001b3
                        ^ (ulong)pbVar30[5]) * 0x100000001b3 ^ (ulong)pbVar30[6]) * 0x100000001b3 ^
                       (ulong)pbVar30[7];
              pbVar30 = pbVar30 + 8;
              uVar22 = uVar22 - 8;
            } while (uVar22 != 0);
          }
          if ((uVar19 & 7) != 0) {
            uVar22 = 0;
            do {
              uVar21 = uVar21 * 0x100000001b3 ^ (ulong)pbVar30[uVar22];
              uVar22 = uVar22 + 1;
            } while (((uint)uVar19 & 7) != uVar22);
          }
        }
      }
      auStack_138 = (undefined1  [8])uVar21;
      if (_DAT_0f6e5b08 == (undefined *)0x0) {
LAB_0c45edd0:
        bVar31 = false;
      }
      else {
        pbVar30 = (byte *)((long)&uStack_130 + 1);
        if ((uStack_10c & 1) != 0) {
          pbVar30 = pbStack_120;
        }
        puVar27 = &DAT_0f6e5b08;
        puVar25 = _DAT_0f6e5b08;
        do {
          uVar19 = *(ulong *)(puVar25 + 0x20);
          bVar10 = (uVar21 < uVar19) - (uVar19 < uVar21);
          if (uVar19 == uVar21) {
            if ((puVar25[0x28] & 1) == 0) {
              pbVar20 = (byte *)(ulong)((byte)puVar25[0x28] >> 1);
              puVar26 = puVar25 + 0x29;
            }
            else {
              pbVar20 = *(byte **)(puVar25 + 0x30);
              puVar26 = *(undefined **)(puVar25 + 0x38);
            }
            pbVar24 = pbVar20;
            if (pbVar15 < pbVar20) {
              pbVar24 = pbVar15;
            }
            iVar11 = func_0x0eee2ff0(puVar26,pbVar30,pbVar24);
            if (iVar11 == 0) {
              iVar11 = (int)(char)((pbVar15 < pbVar20) - (pbVar20 < pbVar15));
            }
            bVar10 = (0 < iVar11) - (iVar11 < 0);
          }
          if (-1 < (char)bVar10) {
            puVar27 = puVar25;
          }
          puVar25 = *(undefined **)(puVar25 + (bVar10 >> 4 & 8));
        } while (puVar25 != (undefined *)0x0);
        if (puVar27 == &DAT_0f6e5b08) goto LAB_0c45edd0;
        if (uVar21 == *(ulong *)(puVar27 + 0x20)) {
          bVar31 = (puVar27[0x28] & 1) != 0;
          puVar25 = puVar27 + 0x29;
          if (bVar31) {
            puVar25 = *(undefined **)(puVar27 + 0x38);
          }
          pbVar20 = (byte *)(ulong)((byte)puVar27[0x28] >> 1);
          if (bVar31) {
            pbVar20 = *(byte **)(puVar27 + 0x30);
          }
          pbVar24 = pbVar15;
          if (pbVar20 < pbVar15) {
            pbVar24 = pbVar20;
          }
          iVar11 = func_0x0eee2ff0(pbVar30,puVar25,pbVar24);
          bVar4 = pbVar15 < pbVar20;
          if (iVar11 != 0) {
            bVar4 = iVar11 < 0;
          }
          bVar31 = true;
          if (bVar4) goto LAB_0c45edd0;
        }
        else {
          bVar31 = true;
          if (uVar21 < *(ulong *)(puVar27 + 0x20)) goto LAB_0c45edd0;
        }
      }
      if ((uStack_10c & 1) != 0) {
        func_0x0412a280(pbStack_120,uStack_130 & 0xfffffffffffffffe);
      }
      uVar21 = uStack_f0;
      if (!bVar31) {
        pbVar15 = pbStack_e8;
        if ((uStack_f0 & 1) == 0) {
          pbVar15 = (byte *)(uStack_f0 >> 1 & 0x7f);
        }
        pbVar30 = pbVar15 + 0xb;
        if ((byte *)0xfffffffffffffff7 < pbVar30) goto LAB_0c45f808;
        if (pbVar30 < (byte *)0x17) {
          pbStack_128 = (byte *)0x0;
          bVar31 = false;
          stack0xfffffffffffffec9 = SUB1615((undefined1  [16])0x0,1);
          auStack_138[0] = (char)pbVar30 * '\x02';
        }
        else {
          uVar19 = 0x1a;
          if (((ulong)pbVar30 | 7) != 0x17) {
            uVar19 = ((ulong)pbVar30 | 7) + 1;
          }
          pbStack_128 = (byte *)FUN_0ee32660(uVar19);
          uStack_130 = (ulong)pbVar30;
          auStack_138 = (undefined1  [8])(uVar19 | 1);
          bVar31 = true;
        }
        pbVar30 = auStack_138 + 1;
        if (bVar31) {
          pbVar30 = pbStack_128;
        }
        pbVar20 = pbStack_128 + 0xb;
        pbVar30[0] = 0x43;
        pbVar30[1] = 0x6f;
        pbVar30[2] = 0x6d;
        pbVar30[3] = 0x70;
        pbVar30[4] = 0x6f;
        pbVar30[5] = 0x6e;
        pbVar30[6] = 0x65;
        pbVar30[7] = 0x6e;
        pbVar30[7] = 0x6e;
        pbVar30[8] = 0x74;
        pbVar30[9] = 0x20;
        pbVar30[10] = 0x27;
        pbVar30 = (byte *)((long)&uStack_130 + 4);
        if (bVar31) {
          pbVar30 = pbVar20;
        }
        if (pbVar15 != (byte *)0x0) {
          if ((uVar21 & 1) != 0) {
            pbStack_d0 = pbStack_e0;
          }
          func_0x0eee2ee0(pbVar30,pbStack_d0,pbVar15);
        }
        pbVar30[(long)pbVar15] = 0;
        pauVar17 = (undefined1 (*) [16])func_0x0412f8c0(auStack_138,&UNK_012e7e67,0x1f);
        goto LAB_0c45f711;
      }
      bVar10 = (byte)uStack_108 & 1;
      pbVar15 = (byte *)(ulong)((byte)uStack_108 >> 1);
      if ((uStack_108 & 1) != 0) {
        pbVar15 = pbStack_100;
      }
      if (pbVar15 != (byte *)0x15) goto LAB_0c45ed70;
LAB_0c45ee1c:
      pbVar15 = (byte *)((long)&uStack_108 + 1);
      if (bVar10 != 0) {
        pbVar15 = pbStack_f8;
      }
      auVar39[0] = -(pbVar15[5] == (byte)uStack_68);
      auVar39[1] = -(pbVar15[6] == uStack_68._1_1_);
      auVar39[2] = -(pbVar15[7] == uStack_68._2_1_);
      auVar39[3] = -(pbVar15[8] == uStack_68._3_1_);
      auVar39[4] = -(pbVar15[9] == uStack_68._4_1_);
      auVar39[5] = -(pbVar15[10] == uStack_68._5_1_);
      auVar39[6] = -(pbVar15[0xb] == uStack_68._6_1_);
      auVar39[7] = -(pbVar15[0xc] == uStack_68._7_1_);
      auVar39[8] = -(pbVar15[0xd] == (byte)uStack_60);
      auVar39[9] = -(pbVar15[0xe] == uStack_60._1_1_);
      auVar39[10] = -(pbVar15[0xf] == uStack_60._2_1_);
      auVar39[0xb] = -(pbVar15[0x10] == uStack_60._3_1_);
      auVar39[0xc] = -(pbVar15[0x11] == uStack_60._4_1_);
      auVar39[0xd] = -(pbVar15[0x12] == uStack_60._5_1_);
      auVar39[0xe] = -(pbVar15[0x13] == uStack_60._6_1_);
      auVar39[0xf] = -(pbVar15[0x14] == uStack_60._7_1_);
      auVar35[0] = -(*pbVar15 == (byte)uStack_58);
      auVar35[1] = -(pbVar15[1] == uStack_58._1_1_);
      auVar35[2] = -(pbVar15[2] == uStack_58._2_1_);
      auVar35[3] = -(pbVar15[3] == uStack_58._3_1_);
      auVar35[4] = -(pbVar15[4] == uStack_58._4_1_);
      auVar35[5] = -(pbVar15[5] == uStack_58._5_1_);
      auVar35[6] = -(pbVar15[6] == uStack_58._6_1_);
      auVar35[7] = -(pbVar15[7] == uStack_58._7_1_);
      auVar35[8] = -(pbVar15[8] == (byte)uStack_50);
      auVar35[9] = -(pbVar15[9] == uStack_50._1_1_);
      auVar35[10] = -(pbVar15[10] == uStack_50._2_1_);
      auVar35[0xb] = -(pbVar15[0xb] == uStack_50._3_1_);
      auVar35[0xc] = -(pbVar15[0xc] == uStack_50._4_1_);
      auVar35[0xd] = -(pbVar15[0xd] == uStack_50._5_1_);
      auVar35[0xe] = -(pbVar15[0xe] == uStack_50._6_1_);
      auVar35[0xf] = -(pbVar15[0xf] == uStack_50._7_1_);
      auVar35 = auVar35 & auVar39;
      if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) != 0xffff) {
LAB_0c45ef60:
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uStack_130;
        _auStack_138 = auVar5 << 0x40;
        if ((uStack_108 & 1) == 0) {
          pbStack_120 = pbStack_f8;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uStack_108;
          _auStack_138 = auVar7 << 0x40;
          pbStack_128 = pbStack_100;
        }
        else {
          func_0x0412e5e0(&uStack_130,pbStack_f8,pbStack_100);
        }
        uStack_118 = 0;
        bVar10 = (byte)uStack_130;
        uVar12 = (uint)(byte)uStack_130;
        if (((byte)uStack_130 & 1) == 0) {
          pbVar15 = (byte *)(ulong)((byte)uStack_130 >> 1);
          if (pbVar15 != (byte *)0x0) goto LAB_0c45efdb;
LAB_0c45f030:
          uVar21 = 0;
        }
        else {
          pbVar15 = pbStack_128;
          if (pbStack_128 == (byte *)0x0) goto LAB_0c45f030;
LAB_0c45efdb:
          pbVar30 = (byte *)((long)&uStack_130 + 1);
          if (((byte)uStack_130 & 1) != 0) {
            pbVar30 = pbStack_120;
          }
          if ((pbVar30 == (byte *)0x0) || (*pbVar30 == 0)) goto LAB_0c45f030;
          uVar19 = func_0x0eee2e90(pbVar30);
          uVar21 = 0xcbf29ce484222325;
          if (uVar19 != 0) {
            if (7 < uVar19) {
              uVar22 = uVar19 & 0xfffffffffffffff8;
              do {
                uVar21 = (((((((uVar21 * 0x100000001b3 ^ (ulong)*pbVar30) * 0x100000001b3 ^
                              (ulong)pbVar30[1]) * 0x100000001b3 ^ (ulong)pbVar30[2]) *
                             0x100000001b3 ^ (ulong)pbVar30[3]) * 0x100000001b3 ^ (ulong)pbVar30[4])
                           * 0x100000001b3 ^ (ulong)pbVar30[5]) * 0x100000001b3 ^ (ulong)pbVar30[6])
                         * 0x100000001b3 ^ (ulong)pbVar30[7];
                pbVar30 = pbVar30 + 8;
                uVar22 = uVar22 - 8;
              } while (uVar22 != 0);
            }
            if ((uVar19 & 7) != 0) {
              uVar22 = 0;
              do {
                uVar21 = uVar21 * 0x100000001b3 ^ (ulong)pbVar30[uVar22];
                uVar22 = uVar22 + 1;
              } while (((uint)uVar19 & 7) != uVar22);
            }
          }
        }
        auStack_138 = (undefined1  [8])uVar21;
        uStack_10c = uVar12;
        if (_DAT_0f6e5b08 == (undefined *)0x0) {
LAB_0c45f170:
          puVar27 = &DAT_0f6e5b08;
        }
        else {
          pbVar30 = (byte *)((long)&uStack_130 + 1);
          if ((bVar10 & 1) != 0) {
            pbVar30 = pbStack_120;
          }
          puVar27 = &DAT_0f6e5b08;
          puVar25 = _DAT_0f6e5b08;
          do {
            uVar19 = *(ulong *)(puVar25 + 0x20);
            bVar10 = (uVar21 < uVar19) - (uVar19 < uVar21);
            if (uVar19 == uVar21) {
              if ((puVar25[0x28] & 1) == 0) {
                pbVar20 = (byte *)(ulong)((byte)puVar25[0x28] >> 1);
                puVar26 = puVar25 + 0x29;
              }
              else {
                pbVar20 = *(byte **)(puVar25 + 0x30);
                puVar26 = *(undefined **)(puVar25 + 0x38);
              }
              pbVar24 = pbVar20;
              if (pbVar15 < pbVar20) {
                pbVar24 = pbVar15;
              }
              iVar11 = func_0x0eee2ff0(puVar26,pbVar30,pbVar24);
              if (iVar11 == 0) {
                iVar11 = (int)(char)((pbVar15 < pbVar20) - (pbVar20 < pbVar15));
              }
              bVar10 = (0 < iVar11) - (iVar11 < 0);
            }
            if (-1 < (char)bVar10) {
              puVar27 = puVar25;
            }
            puVar25 = *(undefined **)(puVar25 + (bVar10 >> 4 & 8));
          } while (puVar25 != (undefined *)0x0);
          if (puVar27 == &DAT_0f6e5b08) goto LAB_0c45f170;
          if (uVar21 == *(ulong *)(puVar27 + 0x20)) {
            bVar31 = (puVar27[0x28] & 1) != 0;
            puVar25 = puVar27 + 0x29;
            if (bVar31) {
              puVar25 = *(undefined **)(puVar27 + 0x38);
            }
            pbVar20 = (byte *)(ulong)((byte)puVar27[0x28] >> 1);
            if (bVar31) {
              pbVar20 = *(byte **)(puVar27 + 0x30);
            }
            pbVar24 = pbVar15;
            if (pbVar20 < pbVar15) {
              pbVar24 = pbVar20;
            }
            iVar11 = func_0x0eee2ff0(pbVar30,puVar25,pbVar24);
            bVar31 = pbVar15 < pbVar20;
            if (iVar11 != 0) {
              bVar31 = iVar11 < 0;
            }
            if (bVar31) goto LAB_0c45f170;
          }
          else if (uVar21 < *(ulong *)(puVar27 + 0x20)) goto LAB_0c45f170;
        }
        if ((uStack_10c & 1) != 0) {
          func_0x0412a280(pbStack_120,uStack_130 & 0xfffffffffffffffe);
        }
        if (puVar27 != &DAT_0f6e5b08) {
          plVar1 = *(long **)(puVar27 + 0x70);
          if (plVar1 == (long *)0x0) goto LAB_0c45f7f9;
          cVar9 = (**(code **)(*plVar1 + 0x30))(plVar1,lStack_b8,uStack_c8);
          if (cVar9 != '\0') goto joined_r0x0c45f1cf;
        }
LAB_0c45f443:
        uVar21 = uStack_f0;
        pbVar15 = pbStack_e8;
        if ((uStack_f0 & 1) == 0) {
          pbVar15 = (byte *)(uStack_f0 >> 1 & 0x7f);
        }
        pbVar30 = pbVar15 + 0xb;
        if ((byte *)0xfffffffffffffff7 < pbVar30) goto LAB_0c45f7fe;
        if (pbVar30 < (byte *)0x17) {
          pbStack_128 = (byte *)0x0;
          bVar31 = false;
          stack0xfffffffffffffec9 = SUB1615((undefined1  [16])0x0,1);
          auStack_138[0] = (char)pbVar30 * '\x02';
        }
        else {
          uVar19 = 0x1a;
          if (((ulong)pbVar30 | 7) != 0x17) {
            uVar19 = ((ulong)pbVar30 | 7) + 1;
          }
          pbStack_128 = (byte *)FUN_0ee32660(uVar19);
          uStack_130 = (ulong)pbVar30;
          auStack_138 = (undefined1  [8])(uVar19 | 1);
          bVar31 = true;
        }
        pbVar30 = auStack_138 + 1;
        if (bVar31) {
          pbVar30 = pbStack_128;
        }
        pbVar20 = pbStack_128 + 0xb;
        pbVar30[0] = 0x43;
        pbVar30[1] = 0x6f;
        pbVar30[2] = 0x6d;
        pbVar30[3] = 0x70;
        pbVar30[4] = 0x6f;
        pbVar30[5] = 0x6e;
        pbVar30[6] = 0x65;
        pbVar30[7] = 0x6e;
        pbVar30[7] = 0x6e;
        pbVar30[8] = 0x74;
        pbVar30[9] = 0x20;
        pbVar30[10] = 0x27;
        pbVar30 = (byte *)((long)&uStack_130 + 4);
        if (bVar31) {
          pbVar30 = pbVar20;
        }
        if (pbVar15 != (byte *)0x0) {
          if ((uVar21 & 1) != 0) {
            pbStack_d0 = pbStack_e0;
          }
          func_0x0eee2ee0(pbVar30,pbStack_d0,pbVar15);
        }
        pbVar30[(long)pbVar15] = 0;
        pauVar17 = (undefined1 (*) [16])func_0x0412f8c0(auStack_138,&UNK_014beca6,0x17);
        goto LAB_0c45f711;
      }
      lVar28 = 0x50;
LAB_0c45ee5e:
      *(undefined8 *)(lStack_b8 + 8 + lVar28) = *(undefined8 *)(lStack_b8 + lVar28);
      uVar14 = func_0x048648e0(uStack_c8,&UNK_01222d0e);
      cVar9 = func_0x04864270(uVar14);
      if ((cVar9 == '\0') || (iVar11 = func_0x048641f0(uVar14), iVar11 == 0)) goto LAB_0c45ef60;
      puVar29 = (undefined8 *)(lVar28 + lStack_b8);
      uVar12 = 0;
      while (uVar13 = func_0x048641f0(uVar14), uVar12 < uVar13) {
        uVar18 = func_0x04864620(uVar14,uVar12);
        bStack_90 = 0;
        uStack_8f = 0;
        func_0x04863cb0(auStack_138,uVar18,&bStack_90);
        cVar9 = func_0x0c45f940(puVar29,auStack_138);
        if ((auStack_138[0] & 1) != 0) {
          func_0x0412a280(pbStack_128,(ulong)auStack_138 & 0xfffffffffffffffe);
        }
        if ((bStack_90 & 1) != 0) {
          func_0x0412a280(uStack_80,
                          CONCAT62(uStack_8e,CONCAT11(uStack_8f,bStack_90)) & 0xfffffffffffffffe);
        }
        uVar12 = uVar12 + 1;
        if (cVar9 == '\0') {
          puVar29[1] = *puVar29;
          goto LAB_0c45f443;
        }
      }
      func_0x0c45ff60(lStack_b8);
joined_r0x0c45f1cf:
      if ((uStack_108 & 1) != 0) {
        func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
      }
      if ((uStack_f0 & 1) != 0) {
        func_0x0412a280(pbStack_e0,uStack_f0 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(auStack_b0);
    }
    func_0x04862b40(auStack_b0);
  }
  return uVar21;
}



/* ---- referenced strings ----
 * 0x146f712  No data was provided.
 */
