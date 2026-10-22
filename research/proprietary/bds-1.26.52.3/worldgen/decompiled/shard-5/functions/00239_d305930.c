/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd405930 (ELF vaddr 0xd305930)
 * Label: caller-of-callee
 * Body:  [[0d405930, 0d405963] [0d405dc7, 0d405dd2] [0d406031, 0d406059]]
 * Ghidra: FUN_0d405930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d405930(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uStack_d8;
  int iStack_cc;
  undefined *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  int iStack_ac;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 0:
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x28) + -1,
                      (int)(*(float *)(param_1 + 0x34) + _DAT_011983f0) + -1);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar1 = *(float *)(param_1 + 0x30);
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x38);
    break;
  case 1:
    fVar1 = *(float *)(param_1 + 0x30);
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x34) + 1,(int)*(float *)(param_1 + 0x28));
    fVar2 = *(float *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x38);
    goto code_r0x0d405c07;
  case 2:
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x2c) + -1,
                      (int)(*(float *)(param_1 + 0x38) + _DAT_011983f0) + -1);
    fVar3 = *(float *)(param_1 + 0x34);
    fVar1 = *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0x3c);
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0x28);
    uVar12 = CONCAT44((int)*(float *)(param_1 + 0x38) + 1,(int)*(float *)(param_1 + 0x2c));
    fVar2 = *(float *)(param_1 + 0x34);
    fVar4 = *(float *)(param_1 + 0x30);
    fVar3 = *(float *)(param_1 + 0x3c);
code_r0x0d405c07:
    auVar22 = func_0x0d406a20(param_1,param_2,uVar12,CONCAT44((int)fVar2 + 1,(int)fVar1),
                              CONCAT44((int)fVar3 + 1,(int)fVar4));
    goto code_r0x0d405c1e;
  case 4:
    puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,*(undefined4 *)(param_1 + 0x3c));
    fVar3 = *(float *)(param_1 + 0x30);
    uStack_68 = *(ulong *)(param_1 + 0x28);
    uStack_60 = 0;
    uStack_48 = *(ulong *)(param_1 + 0x34);
    uStack_40 = 0;
    plStack_c0 = (long *)*param_2;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plStack_b8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plStack_b8[2] = 0;
    plStack_b8[3] = 0;
    *plStack_b8 = 0;
    plStack_b8[1] = 0;
    plStack_b8[4] = 0;
    *(undefined4 *)(plStack_b8 + 4) = 0x3f800000;
    func_0x0b5d5fa0(plStack_b8,0x40);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uStack_a0 = *(ulong *)(param_1 + 0x10);
      lStack_50 = *(long *)(param_1 + 0x20);
      lVar6 = *(long *)(*(long *)(uStack_a0 + 0x18) + lStack_50 * 8);
      if (lVar6 == 0) goto code_r0x0d405dee;
      if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(lVar6 + 8) != '\x01')) {
        iVar15 = (int)(puStack_a8._0_4_ + _DAT_011983f0);
        if (iVar15 == (int)fVar3) goto code_r0x0d405dee;
        iVar18 = (int)(float)uStack_48;
        iVar19 = (int)uStack_68._4_4_;
        iVar20 = -(uint)(iVar18 + 1 == (int)(float)uStack_68);
        iVar11 = -(uint)((int)uStack_48._4_4_ + 1 == iVar19);
        auVar9._4_4_ = iVar20;
        auVar9._0_4_ = iVar20;
        auVar9._8_4_ = iVar11;
        auVar9._12_4_ = iVar11;
        iVar20 = movmskpd((int)lVar6,auVar9);
        iVar11 = 0;
        if (iVar20 == 0) {
          uStack_48 = CONCAT44(uStack_48._4_4_,(int)(float)uStack_68);
          uStack_68 = CONCAT44(uStack_68._4_4_,iVar18 + 1);
          uStack_58 = CONCAT44(uStack_58._4_4_,iVar19);
          iStack_cc = (int)uStack_48._4_4_;
          iStack_ac = (int)fVar3;
          puStack_a8 = param_2;
code_r0x0d406105:
          iVar15 = iVar15 + -1;
code_r0x0d40611a:
          iVar20 = (int)(float)uStack_48;
code_r0x0d40613d:
          uVar5 = *(uint *)(param_1 + 0x40);
          if (uVar5 < 6) {
            iVar18 = iVar15;
            iVar10 = iVar19;
            iStack_88 = iVar20;
            if (((3U >> (uVar5 & 0x1f) & 1) == 0) &&
               (iVar18 = iVar20, iVar10 = iVar15, iStack_88 = iVar19,
               (0xcU >> (uVar5 & 0x1f) & 1) == 0)) {
              iVar10 = iVar19;
              iStack_88 = iVar15;
            }
          }
          else {
            iVar10 = 0;
            iVar18 = 0;
            iStack_88 = 0;
          }
          plVar14 = *(long **)(*(long *)(uStack_a0 + 0x18) + lStack_50 * 8);
          ppuStack_98 = &puStack_c8;
          iStack_88 = iStack_88 + *(int *)(puStack_a8 + 2);
          uStack_90 = CONCAT44(iVar10 + *(int *)((long)puStack_a8 + 0xc),
                               iVar18 + *(int *)(puStack_a8 + 1));
          uStack_80 = *(undefined4 *)(puStack_a8 + 3);
          uStack_7c = *(undefined4 *)((long)puStack_a8 + 0x1c);
          uStack_78 = *(undefined4 *)(puStack_a8 + 4);
          uStack_74 = *(undefined4 *)((long)puStack_a8 + 0x24);
          uStack_70 = puStack_a8[5];
          auVar22 = (**(code **)(*plVar14 + 0x10))(plVar14,&ppuStack_98);
          uVar12 = auVar22._0_8_;
          if ((auVar22._8_8_ & 0x100000000) == 0) goto code_r0x0d406133;
          iVar11 = iVar11 + 1;
          if (iVar11 != *(int *)(param_1 + 0x44)) goto code_r0x0d406133;
          for (puVar8 = (undefined8 *)plStack_b8[2]; puVar8 != (undefined8 *)0x0;
              puVar8 = (undefined8 *)*puVar8) {
            (**(code **)(*plStack_c0 + 0x60))
                      (plStack_c0,puVar8 + 2,puVar8[6],*(undefined4 *)(puVar8 + 4));
          }
          uVar13 = auVar22._8_8_ & 0xff00000000;
          goto code_r0x0d405ea4;
        }
        auVar22 = ZEXT816(0);
        goto code_r0x0d405df3;
      }
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
      auVar22 = ZEXT816(0);
    }
    else {
code_r0x0d405dee:
      auVar22 = ZEXT816(0);
code_r0x0d405df3:
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x2f0000013d7e8d;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      uStack_d8 = 0;
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
    }
code_r0x0d405ea4:
    plVar14 = plStack_b8;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      puVar8 = (undefined8 *)plVar14[2];
      while (puVar8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar8;
        func_0x0412a280(puVar8,0x38);
        puVar8 = puVar7;
      }
code_r0x0d405ff5:
      lVar6 = *plVar14;
      *plVar14 = 0;
      if (lVar6 != 0) {
        func_0x0412a280(lVar6,plVar14[1] << 3);
      }
      func_0x0412a280(plVar14,0x28);
    }
    goto code_r0x0d406021;
  case 5:
    uStack_a0 = (ulong)(uint)(int)*(float *)(param_1 + 0x30);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x28);
    iStack_cc = (int)*(float *)(param_1 + 0x2c);
    uStack_48 = (ulong)(uint)(int)*(float *)(param_1 + 0x38);
    uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(param_1 + 0x34));
    plStack_c0 = (long *)*param_2;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plStack_b8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plStack_b8[2] = 0;
    plStack_b8[3] = 0;
    *plStack_b8 = 0;
    plStack_b8[1] = 0;
    plStack_b8[4] = 0;
    *(undefined4 *)(plStack_b8 + 4) = 0x3f800000;
    func_0x0b5d5fa0(plStack_b8,0x40);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      lStack_50 = *(long *)(param_1 + 0x10);
      puStack_a8 = *(undefined8 **)(param_1 + 0x20);
      lVar6 = *(long *)(*(long *)(lStack_50 + 0x18) + (long)puStack_a8 * 8);
      if (lVar6 == 0) goto code_r0x0d405ef9;
      if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(lVar6 + 8) != '\x01')) {
        if ((int)fVar3 + 1U == (int)uStack_a0) goto code_r0x0d405ef9;
        iVar15 = 0;
        if ((int)((float)uStack_68 + _DAT_011983f0) != (int)fVar4 && (int)uStack_48 + 1 != iStack_cc
           ) {
          iStack_ac = (int)((float)uStack_68 + _DAT_011983f0) + -1;
          uStack_68 = (ulong)(uint)-(int)fVar4;
          iVar19 = iStack_ac;
          uStack_58 = (ulong)(uint)(int)fVar3;
          iVar20 = iStack_cc;
code_r0x0d406287:
          while( true ) {
            uVar5 = *(uint *)(param_1 + 0x40);
            if (uVar5 < 6) {
              iVar10 = (int)uStack_a0;
              iVar11 = iVar10;
              iVar18 = iVar20;
              iStack_88 = iVar19;
              if (((3U >> (uVar5 & 0x1f) & 1) == 0) &&
                 (iVar11 = iVar19, iVar18 = iVar10, iStack_88 = iVar20,
                 (0xcU >> (uVar5 & 0x1f) & 1) == 0)) {
                iVar18 = iVar20;
                iStack_88 = iVar10;
              }
            }
            else {
              iVar18 = 0;
              iVar11 = 0;
              iStack_88 = 0;
            }
            plVar14 = *(long **)(*(long *)(lStack_50 + 0x18) + (long)puStack_a8 * 8);
            ppuStack_98 = &puStack_c8;
            iStack_88 = iStack_88 + *(int *)(param_2 + 2);
            uStack_90 = CONCAT44(iVar18 + *(int *)((long)param_2 + 0xc),
                                 iVar11 + *(int *)(param_2 + 1));
            uStack_80 = *(undefined4 *)(param_2 + 3);
            uStack_7c = *(undefined4 *)((long)param_2 + 0x1c);
            uStack_78 = *(undefined4 *)(param_2 + 4);
            uStack_74 = *(undefined4 *)((long)param_2 + 0x24);
            uStack_70 = param_2[5];
            auVar22 = (**(code **)(*plVar14 + 0x10))(plVar14,&ppuStack_98);
            uVar12 = auVar22._0_8_;
            if ((auVar22._8_8_ & 0x100000000) != 0) break;
code_r0x0d406270:
            iVar11 = (int)uStack_68 + iVar19;
            iVar19 = iVar19 + -1;
            if (iVar11 == 0) {
              bVar17 = (float)iVar20 == (float)uStack_48;
              iVar19 = iStack_ac;
              iVar20 = iVar20 + 1;
              if (bVar17) goto code_r0x0d406349;
            }
          }
          iVar15 = iVar15 + 1;
          if (iVar15 != *(int *)(param_1 + 0x44)) goto code_r0x0d406270;
          for (puVar8 = (undefined8 *)plStack_b8[2]; puVar8 != (undefined8 *)0x0;
              puVar8 = (undefined8 *)*puVar8) {
            (**(code **)(*plStack_c0 + 0x60))
                      (plStack_c0,puVar8 + 2,puVar8[6],*(undefined4 *)(puVar8 + 4));
          }
          uVar13 = auVar22._8_8_ & 0xff00000000;
          goto code_r0x0d405faf;
        }
        auVar22 = ZEXT816(0);
        goto code_r0x0d405efe;
      }
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x1d000001219d14;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
      auVar22 = ZEXT816(0);
    }
    else {
code_r0x0d405ef9:
      auVar22 = ZEXT816(0);
code_r0x0d405efe:
      ppuStack_98 = (undefined **)0x1800000134029e;
      uStack_d8 = 0x2f0000013d7e8d;
      func_0x0d3dfbc0(param_2 + 5,&ppuStack_98,&uStack_d8);
      if ((uStack_d8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
      }
      uStack_d8 = 0;
      if (((ulong)ppuStack_98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppuStack_98 & 0xff00ffffffffffff) - 8);
      }
      uVar12 = 0;
      uVar13 = 0;
    }
code_r0x0d405faf:
    plVar14 = plStack_b8;
    puStack_c8 = &UNK_0f3e3be8;
    plStack_b8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      puVar8 = (undefined8 *)plVar14[2];
      while (puVar8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar8;
        func_0x0412a280(puVar8,0x38);
        puVar8 = puVar7;
      }
      goto code_r0x0d405ff5;
    }
code_r0x0d406021:
    uVar16 = auVar22._0_8_ & 0xffffffffffffff00;
    auVar22._8_8_ = uVar13 | auVar22._8_8_ & 0xffffffff;
    auVar22._0_8_ = uVar12;
    goto LAB_0d406031;
  default:
    uVar16 = 0;
    auVar22 = ZEXT816(0);
    goto LAB_0d406031;
  }
  auVar22 = func_0x0d4064e0(param_1,param_2,uVar12,
                            CONCAT44((int)fVar1 + -1,(int)(_DAT_011983f0 + fVar3) + -1),
                            CONCAT44((int)fVar4 + 1,(int)fVar2));
code_r0x0d405c1e:
  uVar16 = auVar22._0_8_ & 0xffffffffffffff00;
LAB_0d406031:
  auVar21._0_8_ = auVar22._0_8_ & 0xff | uVar16;
  auVar21._8_8_ = auVar22._8_8_ & 0xffffffffff;
  return auVar21;
code_r0x0d406349:
  iVar11 = (int)uStack_a0;
  uStack_a0 = (ulong)(iVar11 + 1);
  iVar20 = iStack_cc;
  if (iVar11 == (int)uStack_58) goto code_r0x0d405efe;
  goto code_r0x0d406287;
code_r0x0d406133:
  iVar20 = iVar20 + 1;
  if ((float)uStack_68 == (float)iVar20) goto code_r0x0d40610b;
  goto code_r0x0d40613d;
code_r0x0d40610b:
  bVar17 = iVar19 == iStack_cc;
  iVar19 = iVar19 + 1;
  if (bVar17) goto code_r0x0d406207;
  goto code_r0x0d40611a;
code_r0x0d406207:
  param_2 = puStack_a8;
  iVar19 = (int)uStack_58;
  if (iVar15 == iStack_ac) goto code_r0x0d405df3;
  goto code_r0x0d406105;
}


