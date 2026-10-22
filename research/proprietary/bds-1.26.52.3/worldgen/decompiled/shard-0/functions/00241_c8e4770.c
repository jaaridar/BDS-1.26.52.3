/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9e4770 (ELF vaddr 0xc8e4770)
 * Label: callee-of:0x517cd10
 * Body:  [[0c9e4770, 0c9e4829] [0c9e4830, 0c9e48c5] [0c9e48d0, 0c9e4a6b] [0c9e4a70, 0c9e4ab4] [0c9e4ac0, 0c9e4e81]]
 * Ghidra: FUN_0c9e4770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c9e4770(long *param_1,long *param_2,ulong *param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long *in_FS_OFFSET;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar26 = *param_3;
  if ((uVar26 == 0xffffffffffffffff) || (param_1[1] != uVar26)) {
    plVar2 = param_1 + 2;
    puVar13 = (undefined4 *)param_1[2];
    iVar19 = (int)((ulong)(param_1[3] - (long)puVar13) >> 3) * -0x33333333;
    if (param_4 < iVar19) {
      iVar19 = param_4;
    }
    *(undefined1 *)((long)param_1 + 0x59) = param_5;
    param_1[1] = uVar26;
    iVar21 = 0;
    if (((undefined4 *)param_1[3] != puVar13) && (iVar21 = 0, 0 < iVar19)) {
      iVar21 = 0;
      do {
        uStack_c8 = *puVar13;
        uStack_c4 = puVar13[1];
        iStack_c0 = puVar13[2];
        uStack_bc = puVar13[3];
        iStack_b8 = puVar13[4];
        uStack_b4 = puVar13[5];
        uStack_b0 = puVar13[6];
        uStack_ac = puVar13[7];
        uStack_a8 = *(ulong *)(puVar13 + 8);
        if ((char)uStack_c8 == '\x01') {
          func_0x0c9e4e90(&iStack_90,plVar2);
          puVar13 = (undefined4 *)param_1[2];
          if (puVar13 == (undefined4 *)param_1[3]) break;
        }
        else {
          if (*param_3 < uStack_a8) break;
          iVar21 = iVar21 + 1;
          func_0x0c9e4e90(&iStack_90,plVar2);
          func_0x0c9e50e0(param_1 + 5,&uStack_c8);
          puVar13 = (undefined4 *)param_1[2];
          if (puVar13 == (undefined4 *)param_1[3]) break;
        }
      } while (iVar21 < iVar19);
    }
    iStack_94 = iVar21;
    func_0x0c9e5350(plVar2);
    puVar13 = (undefined4 *)param_1[5];
    if (puVar13 != (undefined4 *)param_1[6]) {
      plStack_60 = param_1 + 5;
      lStack_50 = *in_FS_OFFSET;
      lStack_58 = lStack_50 + -0xa40;
      lStack_68 = lStack_50 + -0x16a8;
      do {
        uStack_a8 = *(ulong *)(puVar13 + 8);
        uStack_c8 = *puVar13;
        uStack_c4 = puVar13[1];
        iStack_c0 = puVar13[2];
        uStack_bc = puVar13[3];
        iStack_b8 = puVar13[4];
        uStack_b4 = puVar13[5];
        uStack_b0 = (undefined4)*(long *)(puVar13 + 6);
        uStack_ac = puVar13[7];
        lVar5 = *(long *)(puVar13 + 6);
        iVar19 = 8;
        if (*(char *)((long)param_1 + 0x59) == '\x01') {
          cVar12 = func_0x05ff3fb0(lVar5 + 8);
          if (((cVar12 == '\0') &&
              (cVar12 = func_0x05ff3fb0(*(long *)(lVar5 + 0x68) + 0x28), cVar12 == '\0')) &&
             (cVar12 = (**(code **)(**(long **)(lVar5 + 0x68) + 0x2f0))(), cVar12 != '\0')) {
            iVar19 = 8;
            if ((*(byte *)((long)param_1 + 0x59) & 1) != 0) {
              iVar19 = 1;
            }
            goto LAB_0c9e4970;
          }
          func_0x0c9e4e90(&iStack_90,plStack_60);
          puVar24 = (undefined8 *)param_1[9];
          if (puVar24 < (undefined8 *)param_1[10]) {
            puVar24[4] = uStack_70;
            puVar24[2] = CONCAT44(uStack_7c,uStack_80);
            puVar24[3] = CONCAT44(uStack_74,uStack_78);
            *puVar24 = CONCAT44(iStack_8c,iStack_90);
            puVar24[1] = CONCAT44(iStack_84,iStack_88);
            puVar24 = puVar24 + 5;
          }
          else {
            lVar5 = param_1[8];
            lVar14 = (long)puVar24 - lVar5;
            uVar26 = (lVar14 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar26) {
LAB_0c9e4e7c:
              func_0x0c9f0380();
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return uVar16;
            }
            lVar28 = param_1[10] - lVar5;
            lVar15 = lVar28 >> 3;
            uVar4 = lVar15 * -0x6666666666666666;
            if (uVar26 < uVar4) {
              uVar26 = uVar4;
            }
            if (0x333333333333332 < (ulong)(lVar15 * -0x3333333333333333)) {
              uVar26 = 0x666666666666666;
            }
            if (0x666666666666666 < uVar26) {
              FUN_04882eb0();
              goto LAB_0c9e4e7c;
            }
            lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0x28);
            if (lVar15 == 0) {
              func_0x0eec74c0(uVar26 * 0x28,0);
            }
            *(undefined8 *)(lVar15 + 0x20 + lVar14) = uStack_70;
            puVar13 = (undefined4 *)(lVar15 + 0x10 + lVar14);
            *puVar13 = uStack_80;
            puVar13[1] = uStack_7c;
            puVar13[2] = uStack_78;
            puVar13[3] = uStack_74;
            piVar3 = (int *)(lVar15 + lVar14);
            *piVar3 = iStack_90;
            piVar3[1] = iStack_8c;
            piVar3[2] = iStack_88;
            piVar3[3] = iStack_84;
            puVar24 = (undefined8 *)(lVar15 + 0x28 + lVar14);
            func_0x0eee2f00(lVar15,lVar5,lVar14);
            param_1[8] = lVar15;
            param_1[9] = (long)puVar24;
            param_1[10] = uVar26 * 0x28 + lVar15;
            if (lVar5 != 0) {
              func_0x0412a280(lVar5,lVar28);
            }
          }
          param_1[9] = (long)puVar24;
          lVar5 = param_1[8];
          if (0x28 < (long)puVar24 - lVar5) {
            uVar18 = ((ulong)((long)puVar24 - lVar5) >> 3) * -0x3333333333333333 - 2 >> 1;
            uVar26 = puVar24[-1];
            iVar19 = *(int *)((long)puVar24 + -0x14);
            uVar4 = *(ulong *)(lVar5 + 0x20 + uVar18 * 0x28);
            bVar11 = uVar26 < uVar4;
            if (uVar4 == uVar26) {
              bVar11 = iVar19 < *(int *)(lVar5 + 0x14 + uVar18 * 0x28);
            }
            if (bVar11) {
              uStack_38 = *(undefined4 *)(puVar24 + -3);
              uStack_48 = puVar24[-5];
              uStack_40 = puVar24[-4];
              uVar16 = puVar24[-2];
              puVar24 = puVar24 + -5;
              do {
                puVar23 = (undefined8 *)(lVar5 + uVar18 * 0x28);
                puVar24[4] = puVar23[4];
                uVar8 = *puVar23;
                uVar9 = puVar23[1];
                uVar10 = puVar23[3];
                puVar24[2] = puVar23[2];
                puVar24[3] = uVar10;
                *puVar24 = uVar8;
                puVar24[1] = uVar9;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                uVar4 = *(ulong *)(lVar5 + 0x20 + uVar18 * 0x28);
                bVar11 = uVar26 < uVar4;
                if (uVar4 == uVar26) {
                  bVar11 = iVar19 < *(int *)(lVar5 + 0x14 + uVar18 * 0x28);
                }
                puVar24 = puVar23;
              } while (bVar11);
              *(undefined4 *)(puVar23 + 2) = uStack_38;
              *puVar23 = uStack_48;
              puVar23[1] = uStack_40;
              *(int *)((long)puVar23 + 0x14) = iVar19;
              puVar23[3] = uVar16;
              puVar23[4] = uVar26;
            }
          }
        }
        else {
LAB_0c9e4970:
          iVar17 = iStack_c0 - iVar19 >> 4;
          iVar25 = iStack_b8 - iVar19 >> 4;
          iVar20 = iStack_c0 + iVar19 >> 4;
          iVar22 = iStack_b8 + iVar19 >> 4;
          iVar21 = iVar17;
          iVar19 = iVar25;
          for (iVar27 = ((iVar22 - iVar25) + 1) * ((iVar20 - iVar17) + 1); iVar27 != 0;
              iVar27 = iVar27 + -1) {
            iStack_90 = iVar21;
            iStack_8c = iVar19;
            cVar12 = (**(code **)(*param_2 + 0x78))(param_2,&iStack_90,0);
            if (cVar12 == '\0') {
              iStack_90 = iStack_c0 >> 4;
              iStack_8c = iStack_b8 >> 4;
              cVar12 = (**(code **)(*param_2 + 0x78))(param_2,&iStack_90,0);
              if (cVar12 != '\0') {
                func_0x0c9e3ef0(param_1,&iStack_c0,CONCAT44(uStack_ac,uStack_b0),0,uStack_b4);
              }
              goto LAB_0c9e48d0;
            }
            iVar7 = iVar19 + 1;
            if (iVar22 <= iVar19) {
              iVar7 = iVar25;
            }
            iVar1 = iVar21 + 1;
            if (iVar20 <= iVar21) {
              iVar1 = iVar17;
              iVar19 = iVar7;
            }
            iVar21 = iVar1;
          }
          lVar14 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_c0);
          lVar15 = (**(code **)(*param_2 + 0x28))(param_2,&iStack_c0);
          lVar5 = lStack_50;
          if (*(char *)(lStack_50 + -0xca8) == '\0') {
            *(undefined **)(lStack_50 + -0x16a8) = &UNK_0f147b18;
            *(undefined1 *)(lStack_50 + -0x16a0) = 0;
            *(undefined1 *)(lStack_50 + -0xcb8) = 0;
            if (*(char *)(lStack_50 + -0x58) == '\0') {
              func_0x0ee49c60(lStack_50 + -0xa40);
              *(undefined1 *)(lVar5 + -0x58) = 1;
            }
            *(long *)(lVar5 + -0xcb0) = lStack_58;
            func_0x0417d010(&UNK_08b54510,lVar5 + -0x16a8,0xf53dab8);
            *(undefined1 *)(lVar5 + -0xca8) = 1;
          }
          if ((*(long *)(lVar14 + 0x68) == *(long *)(CONCAT44(uStack_ac,uStack_b0) + 0x68)) &&
             (*(long *)(*(long *)(lVar14 + 0x68) + 200) != _DAT_0f6eaec0)) {
            func_0x0c844d10(lVar14,param_2,&iStack_c0,lStack_68);
          }
          if ((*(long *)(*(long *)(lVar15 + 0x68) + 200) != _DAT_0f6eaec0) &&
             (*(long *)(lVar15 + 0x68) == *(long *)(CONCAT44(uStack_ac,uStack_b0) + 0x68))) {
            func_0x0c844d10(CONCAT44(uStack_ac,uStack_b0),param_2,&iStack_c0,lStack_68);
          }
LAB_0c9e48d0:
          func_0x0c9e4e90(&iStack_90,plStack_60);
        }
        puVar13 = (undefined4 *)param_1[5];
      } while (puVar13 != (undefined4 *)param_1[6]);
    }
    *(undefined1 *)((long)param_1 + 0x59) = 0;
    if (iStack_94 < 1) {
      uVar16 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar16 = 1;
      if (lVar5 != 0) {
        if ((char)param_1[0xb] == '\x01') {
          iVar19 = *(int *)(lVar5 + 0x1188);
          if (iVar19 < 0) {
            *(undefined4 *)(lVar5 + 0x1188) = 0;
            iVar19 = 0;
          }
          *(int *)(lVar5 + 0x118c) = iVar19;
        }
        else {
          iVar19 = *(int *)(lVar5 + 0x1178);
          if (iVar19 < 0) {
            *(undefined4 *)(lVar5 + 0x1178) = 0;
            iVar19 = 0;
          }
          *(int *)(lVar5 + 0x117c) = iVar19;
        }
      }
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x59) = 0;
    uVar16 = 0;
  }
  return uVar16;
}


