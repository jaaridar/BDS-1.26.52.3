/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c92f0 (ELF vaddr 0xd0c92f0)
 * Label: caller-of-callee
 * Body:  [[0d1c92f0, 0d1c953c] [0d1c9540, 0d1c9574] [0d1c9580, 0d1c9665] [0d1c9670, 0d1c96aa] [0d1c96b0, 0d1c978d] [0d1c9790, 0d1c9abe] [0d1c9ac0, 0d1c9bc6] [0d1c9d1d, 0d1c9d46]]
 * Ghidra: FUN_0d1c92f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1c92f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong *puVar25;
  byte *pbVar26;
  ulong *puVar27;
  ulong *puVar28;
  byte bStack_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  byte *pbStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined1 auStack_78 [16];
  byte bStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  puStack_50 = param_1;
  func_0x04863480(auStack_90,param_3);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar17 = param_4[1];
  puVar16[1] = *param_4;
  puVar16[2] = uVar17;
  puVar16[3] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *puVar16 = &UNK_0f458350;
  uVar4 = _UNK_014e805c;
  uVar3 = _UNK_014e8058;
  uVar10 = _UNK_014e8054;
  *(undefined4 *)(puVar16 + 4) = _DAT_014e8050;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar10;
  *(undefined4 *)(puVar16 + 5) = uVar3;
  *(undefined4 *)((long)puVar16 + 0x2c) = uVar4;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  uVar17 = func_0x04864680(auStack_90,&UNK_012502d3);
  uVar10 = func_0x04863e00(uVar17,2);
  *(undefined4 *)(puVar16 + 4) = uVar10;
  uVar17 = func_0x04864680(auStack_90,&UNK_01353235);
  uVar10 = func_0x04863e00(uVar17,3);
  *(undefined4 *)((long)puVar16 + 0x2c) = uVar10;
  uVar17 = func_0x04864680(auStack_90,&UNK_012e9bbf);
  uVar10 = func_0x04863e00(uVar17,5);
  *(undefined4 *)((long)puVar16 + 0x24) = uVar10;
  uVar17 = func_0x04864680(auStack_90,&UNK_011afc8b);
  uVar10 = func_0x04863e00(uVar17,10);
  *(undefined4 *)(puVar16 + 5) = uVar10;
  uVar17 = func_0x04864680(auStack_90,&UNK_011bbcf6);
  cVar9 = func_0x04864270(uVar17);
  if (cVar9 == '\0') {
    cVar9 = func_0x04864260(uVar17);
    if (cVar9 == '\0') {
      func_0x0c4af9f0(1,3,0x23,&UNK_013d7810);
    }
  }
  else {
    func_0x04865530(auStack_78,uVar17);
    func_0x048655b0(auStack_40,uVar17);
    puStack_80 = puVar16 + 6;
    while (cVar9 = func_0x04862c80(auStack_78,auStack_40), cVar9 == '\0') {
      uVar17 = func_0x04862b80(auStack_78);
      uVar18 = func_0x048648e0(uVar17,&UNK_01410416);
      cVar9 = func_0x04865490(uVar18);
      if (cVar9 == '\0') {
LAB_0d1c97e0:
        uVar17 = func_0x048648e0(uVar17,&UNK_01410416);
        uStack_c0 = func_0x04863ca0(uVar17);
        func_0x0bbdd580(1,3,0x23,&UNK_014a64c6,&uStack_c0);
      }
      else {
        uVar18 = func_0x048648e0(uVar17,&UNK_01410416);
        bStack_68 = 0;
        uStack_67 = 0;
        func_0x04863cb0(&bStack_d8,uVar18,&bStack_68);
        uStack_c0 = 0;
        if ((bStack_d8 & 1) == 0) {
          pbStack_a8 = pbStack_c8;
          uStack_b8 = (ulong *)CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,bStack_d8)))
          ;
          uStack_b0 = (ulong *)CONCAT44(uStack_cc,uStack_d0);
        }
        else {
          func_0x0412e5e0(&uStack_b8,pbStack_c8,CONCAT44(uStack_cc,uStack_d0));
        }
        puStack_a0 = (undefined8 *)0x0;
        if (((ulong)uStack_b8 & 1) == 0) {
          if ((byte)uStack_b8 >> 1 != 0) goto LAB_0d1c958d;
LAB_0d1c9670:
          uStack_c0 = 0;
        }
        else {
          if (uStack_b0 == (ulong *)0x0) goto LAB_0d1c9670;
LAB_0d1c958d:
          pbVar26 = (byte *)((long)&uStack_b8 + 1);
          if (((ulong)uStack_b8 & 1) != 0) {
            pbVar26 = pbStack_a8;
          }
          if ((pbVar26 == (byte *)0x0) || (*pbVar26 == 0)) goto LAB_0d1c9670;
          uVar19 = func_0x0eee2e90(pbVar26);
          uStack_c0 = 0xcbf29ce484222325;
          if (uVar19 != 0) {
            if (7 < uVar19) {
              uVar22 = uVar19 & 0xfffffffffffffff8;
              do {
                uStack_c0 = (((((((uStack_c0 * 0x100000001b3 ^ (ulong)*pbVar26) * 0x100000001b3 ^
                                 (ulong)pbVar26[1]) * 0x100000001b3 ^ (ulong)pbVar26[2]) *
                                0x100000001b3 ^ (ulong)pbVar26[3]) * 0x100000001b3 ^
                              (ulong)pbVar26[4]) * 0x100000001b3 ^ (ulong)pbVar26[5]) *
                             0x100000001b3 ^ (ulong)pbVar26[6]) * 0x100000001b3 ^ (ulong)pbVar26[7];
                pbVar26 = pbVar26 + 8;
                uVar22 = uVar22 - 8;
              } while (uVar22 != 0);
            }
            if ((uVar19 & 7) != 0) {
              uVar22 = 0;
              do {
                uStack_c0 = uStack_c0 * 0x100000001b3 ^ (ulong)pbVar26[uVar22];
                uVar22 = uVar22 + 1;
              } while (((uint)uVar19 & 7) != uVar22);
            }
          }
        }
        lVar20 = func_0x0c02c270(&DAT_0f6d2f30,&uStack_c0);
        if ((lVar20 == 0) || (0x29 < (ulong)*(byte *)(lVar20 + 0x38))) {
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = *(long **)(_DAT_0f6d2fc0 + (ulong)*(byte *)(lVar20 + 0x38) * 8);
        }
        if (((ulong)uStack_b8 & 1) != 0) {
          func_0x0412a280(pbStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
        }
        if ((bStack_d8 & 1) != 0) {
          func_0x0412a280(pbStack_c8,
                          CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,bStack_d8))) &
                          0xfffffffffffffffe);
        }
        if ((bStack_68 & 1) != 0) {
          func_0x0412a280(uStack_58,
                          CONCAT62(uStack_66,CONCAT11(uStack_67,bStack_68)) & 0xfffffffffffffffe);
        }
        if (plVar24 == (long *)0x0) goto LAB_0d1c97e0;
        uVar18 = func_0x048648e0(uVar17,&UNK_01410416);
        bStack_d8 = 0;
        uStack_d7 = 0;
        func_0x04863cb0(&uStack_c0,uVar18,&bStack_d8);
        puVar6 = uStack_b0;
        puVar25 = uStack_b8;
        uVar19 = uStack_c0;
        uStack_c0 = uStack_c0 & 0xffffffffffff0000;
        if ((bStack_d8 & 1) != 0) {
          func_0x0412a280(pbStack_c8,
                          CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,bStack_d8))) &
                          0xfffffffffffffffe);
        }
        uVar18 = func_0x048648e0(uVar17,&UNK_011e9523);
        cVar9 = func_0x04865420(uVar18);
        if (cVar9 == '\0') {
          iVar11 = (**(code **)(*plVar24 + 0x28))(plVar24);
        }
        else {
          uVar18 = func_0x048648e0(uVar17,&UNK_011e9523);
          iVar11 = func_0x04863e00(uVar18,0);
        }
        uVar18 = func_0x048648e0(uVar17,&UNK_012ba56c);
        cVar9 = func_0x04865420(uVar18);
        if (cVar9 == '\0') {
          iVar12 = (**(code **)(*plVar24 + 0x30))(plVar24);
        }
        else {
          uVar17 = func_0x048648e0(uVar17,&UNK_012ba56c);
          iVar12 = func_0x04863e00(uVar17,0);
        }
        iVar13 = (**(code **)(*plVar24 + 0x28))(plVar24);
        puStack_98 = puVar25;
        iVar14 = (**(code **)(*plVar24 + 0x30))(plVar24);
        iVar15 = (**(code **)(*plVar24 + 0x30))(plVar24);
        if (iVar11 <= iVar14) {
          iVar14 = iVar11;
        }
        if (iVar11 < iVar13) {
          iVar14 = iVar13;
        }
        if (iVar12 <= iVar15) {
          iVar15 = iVar12;
        }
        if (iVar12 < iVar14) {
          iVar15 = iVar14;
        }
        plVar24 = (long *)CONCAT44(iVar15,iVar14);
        puVar25 = (ulong *)puVar16[7];
        if (puVar25 < (ulong *)puVar16[8]) {
          if ((uVar19 & 1) == 0) {
            *puVar25 = uVar19;
            puVar25[1] = (ulong)puStack_98;
            puVar25[2] = (ulong)puVar6;
          }
          else {
            func_0x0412e5e0(puVar25,puVar6,puStack_98);
          }
          puVar25[3] = (ulong)plVar24;
          puVar16[7] = puVar25 + 4;
          puVar16[7] = puVar25 + 4;
        }
        else {
          puVar28 = (ulong *)*puStack_80;
          lStack_48 = (long)puVar25 - (long)puVar28 >> 5;
          uVar22 = lStack_48 + 1;
          if (0x7ffffffffffffff < uVar22) {
            func_0x0d1c8910();
LAB_0d1c9bba:
            uVar17 = FUN_04882eb0();
            func_0x04862b40(auStack_78);
            (**(code **)(*plVar24 + 8))(plVar24);
            func_0x04863610(auStack_90);
            func_0x0eee2d70(uVar17);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar21 = (long)puVar16[8] - (long)puVar28;
          uVar23 = (long)uVar21 >> 4;
          if (uVar23 <= uVar22) {
            uVar23 = uVar22;
          }
          if (0x7fffffffffffffdf < uVar21) {
            uVar23 = 0x7ffffffffffffff;
          }
          puStack_a0 = puStack_80;
          if (uVar23 == 0) {
            uVar22 = 0;
          }
          else {
            if (0x7ffffffffffffff < uVar23) goto LAB_0d1c9bba;
            uVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 << 5);
            if (uVar22 == 0) {
              func_0x0eec74c0(uVar23 << 5,0);
              uVar22 = 0;
            }
          }
          puVar27 = (ulong *)(((long)puVar25 - (long)puVar28) + uVar22);
          pbStack_a8 = (byte *)(uVar23 * 0x20 + uVar22);
          uStack_c0 = uVar22;
          uStack_b8 = puVar27;
          uStack_b0 = puVar27;
          if ((uVar19 & 1) == 0) {
            *puVar27 = uVar19;
            puVar27[1] = (ulong)puStack_98;
            puVar27[2] = (ulong)puVar6;
            lVar20 = lStack_48;
          }
          else {
            func_0x0412e5e0(puVar27,puVar6,puStack_98);
            puVar28 = (ulong *)puVar16[6];
            puVar25 = (ulong *)puVar16[7];
            lVar20 = (long)puVar25 - (long)puVar28 >> 5;
          }
          puVar8 = puStack_80;
          puVar7 = uStack_b0;
          puVar27[3] = (ulong)plVar24;
          puVar27 = uStack_b8 + lVar20 * -4;
          if (puVar28 != puVar25) {
            lVar20 = 0;
            do {
              *(undefined8 *)((long)puVar27 + lVar20 + 0x10) =
                   *(undefined8 *)((long)puVar28 + lVar20 + 0x10);
              pbVar26 = (byte *)((long)puVar28 + lVar20);
              uVar10 = *(undefined4 *)(pbVar26 + 4);
              uVar3 = *(undefined4 *)(pbVar26 + 8);
              uVar4 = *(undefined4 *)(pbVar26 + 0xc);
              puVar1 = (undefined4 *)((long)puVar27 + lVar20);
              *puVar1 = *(undefined4 *)pbVar26;
              puVar1[1] = uVar10;
              puVar1[2] = uVar3;
              puVar1[3] = uVar4;
              pbVar26 = (byte *)((long)puVar28 + lVar20);
              pbVar26[0] = 0;
              pbVar26[1] = 0;
              pbVar26[2] = 0;
              pbVar26[3] = 0;
              pbVar26[4] = 0;
              pbVar26[5] = 0;
              pbVar26[6] = 0;
              pbVar26[7] = 0;
              pbVar26[8] = 0;
              pbVar26[9] = 0;
              pbVar26[10] = 0;
              pbVar26[0xb] = 0;
              pbVar26[0xc] = 0;
              pbVar26[0xd] = 0;
              pbVar26[0xe] = 0;
              pbVar26[0xf] = 0;
              pbVar26 = (byte *)((long)puVar28 + lVar20 + 0x10);
              pbVar26[0] = 0;
              pbVar26[1] = 0;
              pbVar26[2] = 0;
              pbVar26[3] = 0;
              pbVar26[4] = 0;
              pbVar26[5] = 0;
              pbVar26[6] = 0;
              pbVar26[7] = 0;
              *(undefined8 *)((long)puVar27 + lVar20 + 0x18) =
                   *(undefined8 *)((long)puVar28 + lVar20 + 0x18);
              lVar5 = lVar20 + 0x20;
              lVar20 = lVar20 + 0x20;
            } while ((ulong *)((long)puVar28 + lVar5) != puVar25);
            do {
              if ((*puVar28 & 1) != 0) {
                func_0x0412a280(puVar28[2],*puVar28 & 0xfffffffffffffffe);
              }
              puVar28 = puVar28 + 4;
            } while (puVar28 != puVar25);
            puVar28 = (ulong *)*puVar8;
          }
          puVar16[6] = puVar27;
          puVar16[7] = puVar7 + 4;
          lVar20 = puVar16[8];
          puVar16[8] = pbStack_a8;
          if (puVar28 != (ulong *)0x0) {
            func_0x0412a280(puVar28,lVar20 - (long)puVar28);
          }
          puVar16[7] = puVar7 + 4;
        }
        if ((uVar19 & 1) != 0) {
          func_0x0412a280(puVar6,uVar19 & 0xfffffffffffffffe);
        }
      }
      func_0x04862ba0(auStack_78);
    }
    func_0x04862b40(auStack_40);
    func_0x04862b40(auStack_78);
  }
  func_0x04863610(auStack_90);
  *puStack_50 = puVar16;
  return;
}


