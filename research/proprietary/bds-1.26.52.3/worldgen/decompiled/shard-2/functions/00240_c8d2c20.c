/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9d2c20 (ELF vaddr 0xc8d2c20)
 * Label: callee-of:0x517cd10
 * Body:  [[0c9d2c20, 0c9d3195]]
 * Ghidra: FUN_0c9d2c20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9d2c20(long *param_1,long *param_2,int *param_3,ulong param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  undefined1 *puVar28;
  long lVar29;
  long *in_FS_OFFSET;
  undefined8 uStack_58;
  long *plStack_38;
  
  uVar12 = 8;
  if ((*param_1 != 0) && (5 < *(byte *)(*param_1 + 0xb8))) {
    uVar12 = param_5 >> 0x1c & 0xfffffff8;
  }
  uVar25 = (int)(*param_3 - uVar12) >> 4;
  uVar13 = (ulong)uVar25;
  iVar22 = (int)(param_3[2] - uVar12) >> 4;
  iVar15 = (int)(*param_3 + uVar12) >> 4;
  iVar27 = (int)(param_3[2] + uVar12) >> 4;
  iVar24 = ((iVar27 - iVar22) + 1) * ((iVar15 - uVar25) + 1);
  uVar12 = uVar25;
  iVar1 = iVar22;
  plStack_38 = param_1;
  do {
    if (iVar24 == 0) {
      if (-1 < (int)param_5) {
        func_0x0c9e3ef0(plStack_38,param_3,param_4,param_5,param_6);
        return;
      }
      uVar13 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
      if ((*(long *)(uVar13 + 0x68) == *(long *)(param_4 + 0x68)) &&
         (*(long *)(*(long *)(uVar13 + 0x68) + 200) != _DAT_0f6eaec0)) {
        lVar23 = *in_FS_OFFSET;
        if (*(char *)(lVar23 + -0xca8) == '\0') {
          *(undefined **)(lVar23 + -0x16a8) = &UNK_0f147b18;
          *(undefined1 *)(lVar23 + -0x16a0) = 0;
          *(undefined1 *)(lVar23 + -0xcb8) = 0;
          if (*(char *)(lVar23 + -0x58) == '\0') {
LAB_0c9d317e:
            func_0x0ee49c60(lVar23 + -0xa40);
            *(undefined1 *)(lVar23 + -0x58) = 1;
          }
          *(long *)(lVar23 + -0xcb0) = lVar23 + -0xa40;
          func_0x0417d010(&UNK_08b54510,lVar23 + -0x16a8,0xf53dab8);
          *(undefined1 *)(lVar23 + -0xca8) = 1;
        }
      }
      else {
        lVar14 = (**(code **)(*param_2 + 0x28))(param_2,param_3);
        if (*(long *)(*(long *)(lVar14 + 0x68) + 200) == _DAT_0f6eaec0) {
          return;
        }
        if (*(long *)(lVar14 + 0x68) != *(long *)(param_4 + 0x68)) {
          return;
        }
        lVar23 = *in_FS_OFFSET;
        uVar13 = param_4;
        if (*(char *)(lVar23 + -0xca8) == '\0') {
          *(undefined **)(lVar23 + -0x16a8) = &UNK_0f147b18;
          *(undefined1 *)(lVar23 + -0x16a0) = 0;
          *(undefined1 *)(lVar23 + -0xcb8) = 0;
          if (*(char *)(lVar23 + -0x58) == '\0') {
            func_0x0ee49c60(lVar23 + -0xa40);
            *(undefined1 *)(lVar23 + -0x58) = 1;
          }
          *(long *)(lVar23 + -0xcb0) = lVar23 + -0xa40;
          func_0x0417d010(&UNK_08b54510,lVar23 + -0x16a8,0xf53dab8);
          *(undefined1 *)(lVar23 + -0xca8) = 1;
        }
      }
      func_0x0c844d10(uVar13,param_2,param_3,lVar23 + -0x16a8);
      return;
    }
    uStack_58 = CONCAT44(iVar1,uVar12);
    cVar11 = (**(code **)(*param_2 + 0x78))(param_2,&uStack_58,0);
    if (cVar11 == '\0') {
      lVar14 = (**(code **)(*param_2 + 0x138))(param_2,param_3);
      if (lVar14 == 0) {
        return;
      }
      lVar14 = *(long *)(lVar14 + 0xf8);
      lVar23 = (long)(int)param_5 + *(long *)(lVar14 + 8);
      puVar28 = *(undefined1 **)(lVar14 + 0x18);
      if (puVar28 < *(undefined1 **)(lVar14 + 0x20)) {
        *puVar28 = 0;
        *(undefined8 *)(puVar28 + 8) = *(undefined8 *)param_3;
        *(int *)(puVar28 + 0x10) = param_3[2];
        *(undefined4 *)(puVar28 + 0x14) = param_6;
        *(ulong *)(puVar28 + 0x18) = param_4;
        *(long *)(puVar28 + 0x20) = lVar23;
        puVar28 = puVar28 + 0x28;
      }
      else {
        lVar29 = (long)puVar28 - *(long *)(lVar14 + 0x10);
        uVar19 = (lVar29 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar19) {
          func_0x0c9f0380();
LAB_0c9d3179:
          func_0x04882eb0();
          goto LAB_0c9d317e;
        }
        lVar17 = (long)*(undefined1 **)(lVar14 + 0x20) - *(long *)(lVar14 + 0x10) >> 3;
        uVar18 = lVar17 * -0x6666666666666666;
        if (uVar19 < uVar18) {
          uVar19 = uVar18;
        }
        if (0x333333333333332 < (ulong)(lVar17 * -0x3333333333333333)) {
          uVar19 = 0x666666666666666;
        }
        if (uVar19 == 0) {
LAB_0c9d2ec9:
          lVar17 = 0;
        }
        else {
          if (0x666666666666666 < uVar19) goto LAB_0c9d3179;
          lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0x28);
          if (lVar17 == 0) {
            FUN_0eec74c0(uVar19 * 0x28,0);
            goto LAB_0c9d2ec9;
          }
        }
        *(undefined1 *)(lVar17 + lVar29) = 0;
        *(undefined8 *)(lVar17 + 8 + lVar29) = *(undefined8 *)param_3;
        *(int *)(lVar17 + 0x10 + lVar29) = param_3[2];
        *(undefined4 *)(lVar17 + 0x14 + lVar29) = param_6;
        *(ulong *)(lVar17 + 0x18 + lVar29) = param_4;
        *(long *)(lVar17 + 0x20 + lVar29) = lVar23;
        puVar28 = (undefined1 *)(lVar29 + lVar17 + 0x28);
        lVar26 = (lVar17 + lVar29) - (*(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10));
        memcpy(lVar26);
        lVar23 = *(long *)(lVar14 + 0x10);
        lVar29 = *(long *)(lVar14 + 0x20);
        *(long *)(lVar14 + 0x10) = lVar26;
        *(undefined1 **)(lVar14 + 0x18) = puVar28;
        *(ulong *)(lVar14 + 0x20) = lVar17 + uVar19 * 0x28;
        if (lVar23 != 0) {
          func_0x0412a280(lVar23,lVar29 - lVar23);
        }
      }
      *(undefined1 **)(lVar14 + 0x18) = puVar28;
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((long)puVar28 - lVar14 < 0x29) {
        return;
      }
      uVar18 = ((ulong)((long)puVar28 - lVar14) >> 3) * -0x3333333333333333 - 2 >> 1;
      uVar13 = *(ulong *)(puVar28 + -8);
      iVar1 = *(int *)(puVar28 + -0x14);
      uVar19 = *(ulong *)(lVar14 + 0x20 + uVar18 * 0x28);
      bVar10 = uVar13 < uVar19;
      if (uVar19 == uVar13) {
        bVar10 = iVar1 < *(int *)(lVar14 + 0x14 + uVar18 * 0x28);
      }
      if (!bVar10) {
        return;
      }
      uVar2 = *(undefined4 *)(puVar28 + -0x18);
      uVar5 = *(undefined8 *)(puVar28 + -0x28);
      uVar6 = *(undefined8 *)(puVar28 + -0x20);
      uVar3 = *(undefined8 *)(puVar28 + -0x10);
      puVar21 = (undefined8 *)(puVar28 + -0x28);
      break;
    }
    iVar4 = iVar1 + 1;
    if (iVar27 <= iVar1) {
      iVar4 = iVar22;
    }
    uVar16 = uVar12 + 1;
    if (iVar15 <= (int)uVar12) {
      iVar1 = iVar4;
      uVar16 = uVar25;
    }
    iVar24 = iVar24 + -1;
    uVar12 = uVar16;
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1 >> 1;
    uVar19 = *(ulong *)(lVar14 + 0x20 + uVar18 * 0x28);
    bVar10 = uVar13 < uVar19;
    if (uVar19 == uVar13) {
      bVar10 = iVar1 < *(int *)(lVar14 + 0x14 + uVar18 * 0x28);
    }
    puVar21 = puVar20;
    if (!bVar10) break;
    puVar20 = (undefined8 *)(lVar14 + uVar18 * 0x28);
    puVar21[4] = puVar20[4];
    uVar7 = *puVar20;
    uVar8 = puVar20[1];
    uVar9 = puVar20[3];
    puVar21[2] = puVar20[2];
    puVar21[3] = uVar9;
    *puVar21 = uVar7;
    puVar21[1] = uVar8;
    if (uVar18 == 0) break;
  }
  *(undefined4 *)(puVar20 + 2) = uVar2;
  *puVar20 = uVar5;
  puVar20[1] = uVar6;
  *(int *)((long)puVar20 + 0x14) = iVar1;
  puVar20[3] = uVar3;
  puVar20[4] = uVar13;
  return;
}


