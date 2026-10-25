# FUN_09cbbc90

- entry: `0x9cbbc90`
- body size: 1842 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09cbbc90(uint **param_1,int *param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_R15;
  uint *puStack_120;
  uint *puStack_118;
  uint *puStack_110;
  uint *puStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  uint uStack_e0;
  byte bStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  uint uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint *puStack_88;
  uint uStack_80;
  uint *puStack_70;
  uint **ppuStack_68;
  undefined1 uStack_60;
  uint **ppuStack_58;
  uint **ppuStack_50;
  uint **ppuStack_48;
  undefined1 uStack_40;
  ulong *puStack_38;
  
  iVar6 = (int)param_3;
  if (iVar6 == 4) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    lStack_e8 = 0;
    if (*param_2 == 0) {
      return;
    }
    FUN_09e22e10(param_2,&UNK_011ec01f,0x1a,&uStack_f8,1);
    return;
  }
  if (iVar6 == 3) {
    puStack_38 = param_4;
    if ((long)*(int *)((long)param_1 + 0x104) == -1) {
      puVar5 = (uint *)&UNK_013c28d2;
      uVar8 = strlen(&UNK_013c28d2);
    }
    else {
      puVar5 = *(uint **)(&UNK_0f37af30 + (long)*(int *)((long)param_1 + 0x104) * 8);
      uVar8 = strlen(puVar5);
    }
    if (0xfffffffffffffff7 < uVar8) {
      FUN_04882e30();
      goto LAB_09cbc3a2;
    }
    if (uVar8 < 0x17) {
      uVar7 = uStack_f8 >> 8;
      uStack_f8 = CONCAT71((int7)uVar7,(char)uVar8 * '\x02');
      lVar4 = (long)&uStack_f8 + 1;
      if (uVar8 != 0) goto LAB_09cbbee4;
    }
    else {
      uVar7 = 0x1a;
      if ((uVar8 | 7) != 0x17) {
        uVar7 = (uVar8 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (lVar4 == 0) {
        FUN_0eec74c0(uVar7,0);
      }
      uStack_f8 = uVar7 | 1;
      uStack_f0 = uVar8;
      lStack_e8 = lVar4;
LAB_09cbbee4:
      memmove(lVar4,puVar5,uVar8);
    }
    *(undefined1 *)(lVar4 + uVar8) = 0;
    uStack_e0 = 0;
    FUN_09e20be0(&bStack_d8,*(undefined4 *)(param_1 + 0x21));
    FUN_09e20be0(&uStack_b8,*(undefined4 *)(param_1 + 0x23));
    if ((*puStack_38 & 1) == 0) {
      puStack_88 = (uint *)puStack_38[2];
      uStack_98 = *puStack_38;
      uStack_90 = puStack_38[1];
    }
    else {
      FUN_0412e5e0(&uStack_98,puStack_38[2],puStack_38[1]);
    }
    uStack_80 = 0;
    puStack_118 = (uint *)0x0;
    puStack_110 = (uint *)0x0;
    puStack_108 = (uint *)0x0;
    uStack_60 = 0;
    ppuStack_68 = &puStack_118;
    puVar5 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar5 == (uint *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puStack_108 = puVar5 + 0x20;
    ppuStack_50 = &puStack_70;
    ppuStack_48 = &puStack_120;
    uStack_40 = 0;
    puStack_118 = puVar5;
    puStack_110 = puVar5;
    puStack_70 = puVar5;
    ppuStack_58 = &puStack_118;
    if ((uStack_f8 & 1) == 0) {
      *(long *)(puVar5 + 4) = lStack_e8;
      *puVar5 = (uint)uStack_f8;
      puVar5[1] = uStack_f8._4_4_;
      puVar5[2] = (uint)uStack_f0;
      puVar5[3] = uStack_f0._4_4_;
      puVar10 = puVar5;
    }
    else {
      puStack_120 = puVar5;
      FUN_0412e5e0(puVar5,lStack_e8,uStack_f0);
      puVar10 = puStack_120;
    }
    puVar5[6] = uStack_e0;
    puStack_120 = puVar10 + 8;
    if ((bStack_d8 & 1) == 0) {
      *(undefined8 *)(puVar10 + 0xc) = uStack_c8;
      *puStack_120 = CONCAT13(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8)));
      puVar10[9] = uStack_d4;
      puVar10[10] = uStack_d0;
      puVar10[0xb] = uStack_cc;
      puVar5 = puStack_120;
    }
    else {
      FUN_0412e5e0(puStack_120,uStack_c8,CONCAT44(uStack_cc,uStack_d0));
      puVar5 = puStack_120;
    }
    puVar10[0xe] = uStack_c0;
    puStack_120 = puVar5 + 8;
    if ((uStack_b8 & 1) == 0) {
      *(undefined8 *)(puVar5 + 0xc) = uStack_a8;
      *puStack_120 = uStack_b8;
      puVar5[9] = uStack_b4;
      puVar5[10] = uStack_b0;
      puVar5[0xb] = uStack_ac;
      puVar10 = puStack_120;
    }
    else {
      FUN_0412e5e0(puStack_120,uStack_a8,CONCAT44(uStack_ac,uStack_b0));
      puVar10 = puStack_120;
    }
    puVar5[0xe] = uStack_a0;
    puStack_120 = puVar10 + 8;
    if ((uStack_98 & 1) == 0) {
      *(uint **)(puVar10 + 0xc) = puStack_88;
      *puStack_120 = (uint)uStack_98;
      puVar10[9] = uStack_98._4_4_;
      puVar10[10] = (uint)uStack_90;
      puVar10[0xb] = uStack_90._4_4_;
    }
    else {
      FUN_0412e5e0(puStack_120,puStack_88,uStack_90);
    }
    puVar10[0xe] = uStack_80;
    puStack_110 = puStack_120 + 8;
    if (*param_2 != 0) {
      FUN_09e22e10(param_2,&UNK_011ddaa8,0x1b,&puStack_118,1);
    }
    puVar10 = puStack_118;
    puVar5 = puStack_110;
    if (puStack_118 != (uint *)0x0) {
      for (; puVar10 != puVar5; puVar5 = puVar5 + -8) {
        if ((puVar5[-8] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar5 + -4),*(ulong *)(puVar5 + -8) & 0xfffffffffffffffe)
          ;
        }
      }
      puStack_110 = puVar10;
      func_0x0412a280(puStack_118,(long)puStack_108 - (long)puStack_118);
    }
    if ((uStack_98 & 1) == 0) goto LAB_09cbc311;
    uVar8 = uStack_98 & 0xfffffffffffffffe;
    puVar5 = puStack_88;
  }
  else {
    if (iVar6 != 1) {
      uStack_f8 = 0;
      uStack_f0 = 0;
      lStack_e8 = 0;
      if (*param_2 == 0) {
        return;
      }
      FUN_09e22e10(param_2,&UNK_011ec01f,0x1a,&uStack_f8,1);
      return;
    }
    FUN_09e20be0(&uStack_f8,*(undefined4 *)(param_1 + 0x21));
    bStack_d8 = 2;
    uStack_d7 = 0x30;
    uStack_d6 = 0;
    uStack_c0 = 0;
    puVar5 = &uStack_b8;
    FUN_09e20be0(puVar5,(int)((ulong)param_3 >> 0x20) + -1);
    puStack_118 = (uint *)0x0;
    puStack_110 = (uint *)0x0;
    puStack_108 = (uint *)0x0;
    param_1 = &puStack_118;
    uStack_60 = 0;
    ppuStack_68 = param_1;
    unaff_R15 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
    if (unaff_R15 == (uint *)0x0) {
LAB_09cbc3a2:
      FUN_0eec74c0(0x60,0);
    }
    puStack_108 = unaff_R15 + 0x18;
    puStack_70 = unaff_R15;
    ppuStack_58 = param_1;
    ppuStack_50 = &puStack_70;
    ppuStack_48 = &puStack_120;
    uStack_40 = 0;
    puStack_118 = unaff_R15;
    puStack_110 = unaff_R15;
    if ((uStack_f8 & 1) == 0) {
      *(long *)(unaff_R15 + 4) = lStack_e8;
      *unaff_R15 = (uint)uStack_f8;
      unaff_R15[1] = uStack_f8._4_4_;
      unaff_R15[2] = (uint)uStack_f0;
      unaff_R15[3] = uStack_f0._4_4_;
      puVar10 = unaff_R15;
    }
    else {
      puStack_120 = unaff_R15;
      FUN_0412e5e0(unaff_R15,lStack_e8,uStack_f0);
      puVar10 = puStack_120;
    }
    unaff_R15[6] = uStack_e0;
    puStack_120 = puVar10 + 8;
    if ((bStack_d8 & 1) == 0) {
      *(undefined8 *)(puVar10 + 0xc) = uStack_c8;
      *puStack_120 = CONCAT13(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8)));
      puVar10[9] = uStack_d4;
      puVar10[10] = uStack_d0;
      puVar10[0xb] = uStack_cc;
      puVar9 = puStack_120;
    }
    else {
      FUN_0412e5e0(puStack_120,uStack_c8,CONCAT44(uStack_cc,uStack_d0));
      puVar9 = puStack_120;
    }
    puVar10[0xe] = uStack_c0;
    puStack_120 = puVar9 + 8;
    if ((uStack_b8 & 1) == 0) {
      *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(puVar5 + 4);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *puStack_120 = *puVar5;
      puVar9[9] = uVar1;
      puVar9[10] = uVar2;
      puVar9[0xb] = uVar3;
    }
    else {
      FUN_0412e5e0(puStack_120,uStack_a8,CONCAT44(uStack_ac,uStack_b0));
    }
    puVar9[0xe] = uStack_a0;
    puStack_110 = puStack_120 + 8;
    if (*param_2 != 0) {
      FUN_09e22e10(param_2,&UNK_012c8066,0x22,&puStack_118,1);
    }
    puVar10 = puStack_118;
    puVar5 = puStack_110;
    if (puStack_118 == (uint *)0x0) goto LAB_09cbc311;
    for (; puVar10 != puVar5; puVar5 = puVar5 + -8) {
      if ((puVar5[-8] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar5 + -4),*(ulong *)(puVar5 + -8) & 0xfffffffffffffffe);
      }
    }
    puStack_110 = puVar10;
    uVar8 = (long)puStack_108 - (long)puStack_118;
    puVar5 = puStack_118;
  }
  func_0x0412a280(puVar5,uVar8);
LAB_09cbc311:
  if ((uStack_b8 & 1) != 0) {
    func_0x0412a280(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
  }
  if ((bStack_d8 & 1) != 0) {
    func_0x0412a280(uStack_c8,
                    CONCAT44(uStack_d4,
                             CONCAT13(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8))))
                    & 0xfffffffffffffffe);
  }
  if ((uStack_f8 & 1) != 0) {
    func_0x0412a280(lStack_e8,uStack_f8 & 0xfffffffffffffffe);
  }
  return;
}


```
