/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb62fc0 (ELF vaddr 0xda62fc0)
 * Label: caller-of-callee
 * Body:  [[0db62fc0, 0db634c4] [0db634d0, 0db63ee6] [0db63ef0, 0db640bf]]
 * Ghidra: FUN_0db62fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db62fc0(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  bool bVar20;
  undefined8 uStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  uint uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  code *pcStack_130;
  char cStack_128;
  undefined8 uStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  char cStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  byte *pbStack_b0;
  int *piStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte *pbStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_3 + 0xe) == 0) {
    if (*(code **)(param_3 + 6) == (code *)0x0) {
      bVar20 = false;
    }
    else {
      (**(code **)(param_3 + 6))(param_3);
      bVar20 = *(undefined **)(param_3 + 0xe) == &UNK_0db61ce0;
    }
    *(undefined **)(param_3 + 4) = &UNK_0db61d00;
    param_3[8] = -0x157a05ad;
    param_3[6] = 0;
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 9) = 2;
    *param_3 = 0;
    *(undefined **)(param_3 + 0xe) = &UNK_0db61ce0;
    if (bVar20) {
      uVar10 = *(undefined8 *)(param_3 + 0xc);
    }
    else {
      uVar10 = 0;
    }
    *(undefined8 *)(param_3 + 0xc) = uVar10;
    bVar3 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
  }
  else {
    bVar3 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
  }
  if ((bVar3 & 4) != 0) {
    iStack_bc = 0;
    uStack_f0 = *(long *)(param_3 + 10);
    pbStack_108 = &UNK_0490c9f0;
    uStack_100 = (code *)0x0;
    uVar14 = (ulong)uStack_f8 >> 0x28;
    uStack_f8 = CONCAT35((int3)uVar14,0x395e97e5e);
    uStack_118 = &iStack_bc;
    uStack_e8 = 0;
    pcStack_e0 = (code *)&UNK_0490c9d0;
    func_0x0ed6d600(&piStack_b8,*param_5);
    piStack_a8 = (int *)&UNK_0ef46ce8;
    uStack_168 = (int *)*param_5;
    pbStack_160 = (byte *)param_5[1];
    pbStack_158 = (byte *)0x0;
    uStack_150 = uStack_150 & 0xffffff00;
    uStack_14c = uStack_14c & 0xffffff00;
    iStack_148 = CONCAT31(iStack_148._1_3_,1);
    func_0x0ed75bc0(&piStack_a8,param_2,&uStack_118,param_4,&uStack_168);
    iStack_c0 = iStack_bc;
    cVar4 = (char)param_3[9];
    piVar9 = *(int **)param_3;
    piVar5 = piVar9;
    if (cVar4 == '\x02') {
      piVar5 = param_3;
    }
    if (piVar5 == (int *)0x0 || param_3[8] != -0x157a05ad) {
      uVar10 = *(undefined8 *)(param_3 + 10);
      lVar7 = *(long *)(param_3 + 0xc);
      if (lVar7 == 0) {
        (**(code **)(param_3 + 0xe))(0,param_3,0);
        lVar7 = *(long *)(param_3 + 0xc);
        cVar4 = (char)param_3[9];
        piVar9 = *(int **)param_3;
      }
      if (cVar4 == '\x02') {
        piVar9 = param_3;
      }
      piVar5 = (int *)FUN_0488e200(uVar10,lVar7,0xea85fa53,piVar9);
    }
    *piVar5 = iStack_c0;
    plStack_40 = param_2;
    if (*(code **)(param_3 + 0xe) == (code *)0x0) {
      uStack_168 = (int *)0x0;
      pbStack_160 = (byte *)0x0;
      func_0x048b1dc0(&uStack_168);
      pbStack_60 = pbStack_160;
      piVar9 = uStack_168;
joined_r0x0db6330f:
      if (piVar9 != (int *)0x0) {
        lVar7 = *(long *)(piVar9 + 0x1e);
        goto joined_r0x0db6331c;
      }
      lVar7 = FUN_048aead0(pbStack_60);
      pbVar15 = pbStack_60;
      if (*(long *)(lVar7 + 0x78) == 0) goto LAB_0db636f7;
      lVar7 = FUN_048aead0(pbStack_60);
      pbVar12 = *(byte **)(*(long *)(lVar7 + 0x78) + 0x48);
      lVar7 = FUN_048aead0(pbVar15);
      pbVar15 = *(byte **)(*(long *)(lVar7 + 0x78) + 0x50);
      if (pbVar12 == pbVar15) goto LAB_0db636f7;
    }
    else {
      pbStack_60 = *(byte **)(param_3 + 10);
      if (*(long *)(param_3 + 0xc) == 0) {
        (**(code **)(param_3 + 0xe))(0,param_3,0);
        piVar9 = *(int **)(param_3 + 0xc);
        goto joined_r0x0db6330f;
      }
      lVar7 = *(long *)(*(long *)(param_3 + 0xc) + 0x78);
joined_r0x0db6331c:
      if (lVar7 == 0) goto LAB_0db636f7;
      pbVar12 = *(byte **)(lVar7 + 0x48);
      pbVar15 = *(byte **)(lVar7 + 0x50);
      if (pbVar12 == pbVar15) goto LAB_0db636f7;
    }
    plStack_38 = param_5 + 3;
    do {
      uStack_188 = (int *)CONCAT44(uStack_188._4_4_,*(undefined4 *)pbVar12);
      pbStack_178 = pbStack_60;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      pcStack_90 = (code *)0x0;
      piStack_a8 = (int *)0x0;
      pbStack_a0 = (byte *)0x0;
      pbStack_180 = pbVar12;
      func_0x05d84ba0(&piStack_a8);
      func_0x05d9a920(&uStack_168,&pbStack_180,&piStack_a8);
      piVar9 = uStack_168;
      if ((char)uStack_144 == '\x02') {
        piVar9 = (int *)&uStack_168;
      }
      if (piVar9 == (int *)0x0 || iStack_148 != -0x157a05ad) {
        uVar10 = CONCAT44(uStack_13c,uStack_140);
        lVar7 = CONCAT44(uStack_134,uStack_138);
        if (lVar7 == 0) {
          (*pcStack_130)(0,&uStack_168,0);
          lVar7 = CONCAT44(uStack_134,uStack_138);
        }
        piVar9 = uStack_168;
        if ((char)uStack_144 == '\x02') {
          piVar9 = (int *)&uStack_168;
        }
        piVar9 = (int *)FUN_0488e200(uVar10,lVar7,0xea85fa53,piVar9);
      }
      iVar2 = *piVar9;
      if ((code *)CONCAT44(uStack_14c,uStack_150) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_14c,uStack_150))(&uStack_168);
      }
      if (pcStack_90 != (code *)0x0) {
        (*pcStack_90)(&piStack_a8);
      }
      if ((iVar2 == iStack_c0) &&
         ((*(byte *)(*param_5 + 0x2aa) & *(byte *)(*(long *)(pbStack_180 + 0x58) + 0xa9)) != 0)) {
        if (*(code **)(param_3 + 0xe) == (code *)0x0) {
          uStack_168 = (int *)0x0;
          pbStack_160 = (byte *)0x0;
          func_0x048b1dc0(&uStack_168);
          piVar9 = uStack_168;
          pbVar17 = pbStack_160;
        }
        else {
          pbVar17 = *(byte **)(param_3 + 10);
          piVar9 = *(int **)(param_3 + 0xc);
          if (*(int **)(param_3 + 0xc) == (int *)0x0) {
            (**(code **)(param_3 + 0xe))(0,param_3,0);
            piVar9 = *(int **)(param_3 + 0xc);
          }
        }
        plVar6 = (long *)0xf54619c;
        if (*(char *)((long)param_5 + 0x1c) != '\0') {
          plVar6 = plStack_38;
        }
        piStack_a8 = piVar9;
        pbStack_a0 = pbVar17;
        cVar4 = func_0x0db65110(&piStack_a8,(ulong)uStack_188 & 0xffffffff,(int)*plVar6);
        if (cVar4 == '\x01') goto LAB_0db637c4;
        if (cVar4 == '\x02') {
          uStack_48 = 0x180000013e021d;
          func_0x0ed5ffe0(*param_5,0x200,&uStack_48);
          if ((uStack_48 >> 0x37 & 1) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
          }
          uStack_48 = 0;
          goto LAB_0db637c4;
        }
      }
      pbVar12 = pbVar12 + 0x68;
    } while (pbVar12 != pbVar15);
LAB_0db636f7:
    if ((((*(byte *)(plStack_40 + 1) | *(byte *)((long)plStack_40 + 9)) & 0x20) == 0) ||
       ((piStack_b8[0xac] != 0xffffffff && ((uint)pbStack_b0 <= (uint)piStack_b8[0xac])))) {
      uStack_50 = 0x12000001326306;
      func_0x0ed5ffe0(*param_5,0x1000,&uStack_50);
      if ((uStack_50 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
      uStack_50 = 0;
      if (uStack_100 == (code *)0x0) {
        return;
      }
      (*uStack_100)(&uStack_118);
      return;
    }
LAB_0db637c4:
    if (uStack_100 == (code *)0x0) {
      return;
    }
    (*uStack_100)(&uStack_118);
    return;
  }
  (**(code **)(*param_2 + 0x80))(&uStack_168,param_2,0x40);
  cStack_d8 = cStack_128;
  if (cStack_128 == '\x01') {
    pbStack_108 = pbStack_158;
    uStack_118 = uStack_168;
    pbStack_110 = pbStack_160;
    if (((ulong)uStack_168 & 1) == 0) {
      pbStack_178 = pbStack_158;
      uStack_188 = uStack_168;
      pbStack_180 = pbStack_160;
    }
    else {
      func_0x0412e5e0(&uStack_188,pbStack_158,pbStack_160);
    }
    pbVar12 = (byte *)(ulong)((byte)uStack_188 >> 1);
    pbVar15 = (byte *)((long)&uStack_188 + 1);
    pbVar19 = pbStack_180;
    pbVar17 = pbStack_178;
    if (((ulong)uStack_188 & 1) == 0) {
      pbVar19 = pbVar12;
      pbVar17 = pbVar15;
    }
    if (pbVar19 != (byte *)0x0) {
      plVar6 = (long *)__ctype_tolower_loc();
      pbVar12 = pbVar17;
      for (uVar14 = (ulong)pbVar19 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pbVar12 = *(byte *)(*plVar6 + (ulong)*pbVar12 * 4);
        pbVar12 = pbVar12 + 1;
      }
      if ((byte *)0x3 < pbVar19) {
        do {
          *pbVar12 = *(byte *)(*plVar6 + (ulong)*pbVar12 * 4);
          pbVar12[1] = *(byte *)(*plVar6 + (ulong)pbVar12[1] * 4);
          pbVar12[2] = *(byte *)(*plVar6 + (ulong)pbVar12[2] * 4);
          pbVar12[3] = *(byte *)(*plVar6 + (ulong)pbVar12[3] * 4);
          pbVar12 = pbVar12 + 4;
        } while (pbVar12 != pbVar17 + (long)pbVar19);
      }
      pbVar12 = (byte *)(ulong)((byte)uStack_188 >> 1);
    }
    if (((byte)uStack_188 & 1) != 0) {
      pbVar12 = pbStack_180;
      pbVar15 = pbStack_178;
    }
    if (pbVar12 == (byte *)0x0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)pbVar12 & 3);
      if (pbVar12 < (byte *)0x4) {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar16 = ((int)(char)pbVar15[uVar18 + 3] ^
                   ((int)(char)pbVar15[uVar18 + 2] ^
                   ((int)(char)pbVar15[uVar18 + 1] ^
                   ((int)(char)pbVar15[uVar18] ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar18 = uVar18 + 4;
        } while (((ulong)pbVar12 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar14 != 0) {
        uVar13 = 0;
        do {
          uVar16 = ((int)(char)pbVar15[uVar13 + uVar18] ^ uVar16) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
      }
    }
    if (*(code **)(param_3 + 0xe) == (code *)0x0) {
      uStack_168 = (int *)0x0;
      pbStack_160 = (byte *)0x0;
      func_0x048b1dc0(&uStack_168);
      piVar9 = uStack_168;
      pbVar15 = pbStack_160;
joined_r0x0db63a1e:
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)FUN_048aead0(pbVar15);
      }
    }
    else {
      pbVar15 = *(byte **)(param_3 + 10);
      piVar9 = *(int **)(param_3 + 0xc);
      if (piVar9 == (int *)0x0) {
        (**(code **)(param_3 + 0xe))(0,param_3,0);
        piVar9 = *(int **)(param_3 + 0xc);
        goto joined_r0x0db63a1e;
      }
    }
    piStack_b8 = (int *)func_0x048b0c90(pbVar15,piVar9,uVar16,1);
    pbStack_b0 = pbVar15;
    if (piStack_b8 == (int *)0x0) {
      uStack_168 = (int *)0x0;
      pbStack_160 = (byte *)0x0;
      func_0x048b0d20(&uStack_168);
      piStack_b8 = uStack_168;
      pbStack_b0 = pbStack_160;
      if (uStack_168 != (int *)0x0) goto LAB_0db63a7e;
LAB_0db63c2c:
      lVar7 = *param_5;
      if (*(code **)(param_3 + 0xe) == (code *)0x0) {
        piStack_a8 = (int *)0x0;
        pbStack_a0 = (byte *)0x0;
        func_0x048b1dc0(&piStack_a8);
        piVar9 = piStack_a8;
        pbVar15 = pbStack_a0;
      }
      else {
        pbVar15 = *(byte **)(param_3 + 10);
        piVar9 = *(int **)(param_3 + 0xc);
        if (*(int **)(param_3 + 0xc) == (int *)0x0) {
          (**(code **)(param_3 + 0xe))(0,param_3,0);
          piVar9 = *(int **)(param_3 + 0xc);
        }
      }
      piStack_b8 = piVar9;
      pbStack_b0 = pbVar15;
      func_0x0ed8bc80(&uStack_168,&piStack_b8,*(undefined1 *)(*param_5 + 0x2aa));
      uVar10 = func_0x0412f8c0(&uStack_168,&UNK_01479aea,10);
      pbVar12 = (byte *)((ulong)uStack_118 >> 1 & 0x7f);
      pbVar15 = (byte *)((long)&uStack_118 + 1);
      if (((ulong)uStack_118 & 1) != 0) {
        pbVar12 = pbStack_110;
        pbVar15 = pbStack_108;
      }
      uVar10 = func_0x0412f8c0(uVar10,pbVar15,pbVar12);
      pbVar12 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
      bVar20 = (*pbVar12 & 1) != 0;
      pbVar15 = pbVar12 + 1;
      if (bVar20) {
        pbVar15 = *(byte **)(pbVar12 + 0x10);
      }
      uVar14 = (ulong)(*pbVar12 >> 1);
      if (bVar20) {
        uVar14 = *(ulong *)(pbVar12 + 8);
      }
      uStack_c8 = 0;
      if (pbVar15 == (byte *)0x0) {
        uStack_c8 = (ulong)((uint)uVar14 & 0x7f) << 0x30;
      }
      else {
        lVar1 = uVar14 + 9;
        puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
        if (lVar1 != 0 && puVar11 == (ulong *)0x0) {
          func_0x0eec74c0(lVar1,8);
        }
        *puVar11 = uVar14;
        memcpy(puVar11 + 1,pbVar15,uVar14);
        *(undefined1 *)((long)puVar11 + uVar14 + 8) = 0;
        uStack_c8 = (ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      func_0x0ed5ffe0(lVar7,0x1000,&uStack_c8);
      if ((uStack_c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      }
      uStack_c8 = 0;
      piVar9 = uStack_188;
      pbVar15 = pbStack_178;
      if (((ulong)uStack_168 & 1) != 0) {
        func_0x0412a280(pbStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
        piVar9 = uStack_188;
        pbVar15 = pbStack_178;
      }
      goto joined_r0x0db63945;
    }
LAB_0db63a7e:
    if ((*(byte *)(*param_5 + 0x2aa) & *(byte *)(*(long *)(piStack_b8 + 0x16) + 0xa9)) == 0)
    goto LAB_0db63c2c;
    if (*(code **)(param_3 + 0xe) == (code *)0x0) {
      uStack_168 = (int *)0x0;
      pbStack_160 = (byte *)0x0;
      func_0x048b1dc0(&uStack_168);
      piStack_a8 = uStack_168;
      pbStack_a0 = pbStack_160;
    }
    else {
      pbStack_a0 = *(byte **)(param_3 + 10);
      piStack_a8 = *(int **)(param_3 + 0xc);
      if (*(int **)(param_3 + 0xc) == (int *)0x0) {
        (**(code **)(param_3 + 0xe))(0,param_3,0);
        piStack_a8 = *(int **)(param_3 + 0xc);
      }
    }
    plVar6 = (long *)0xf54619c;
    if (*(char *)((long)param_5 + 0x1c) != '\0') {
      plVar6 = param_5 + 3;
    }
    cVar4 = func_0x0db65110(&piStack_a8,uVar16,(int)*plVar6);
    if (cVar4 == '\x01') {
      if (*(long *)(param_3 + 0xe) == 0) {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        pcStack_90 = (code *)0x0;
        piStack_a8 = (int *)0x0;
        pbStack_a0 = (byte *)0x0;
        func_0x05d84ba0(&piStack_a8);
        func_0x05d9a920(&uStack_168,&piStack_b8,&piStack_a8);
        func_0x05d9ad30(param_3,&uStack_168);
        if ((code *)CONCAT44(uStack_14c,uStack_150) != (code *)0x0) {
          (*(code *)CONCAT44(uStack_14c,uStack_150))(&uStack_168);
        }
        if (pcStack_90 != (code *)0x0) {
          (*pcStack_90)(&piStack_a8);
        }
      }
      else {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        pcStack_90 = (code *)0x0;
        piStack_a8 = (int *)0x0;
        pbStack_a0 = (byte *)0x0;
        func_0x05d84ba0(&piStack_a8);
        func_0x05d9a920(&uStack_168,&piStack_b8,&piStack_a8);
        cVar4 = func_0x05d9aa70(param_3,&uStack_168);
        if ((code *)CONCAT44(uStack_14c,uStack_150) != (code *)0x0) {
          (*(code *)CONCAT44(uStack_14c,uStack_150))(&uStack_168);
        }
        if (pcStack_90 != (code *)0x0) {
          (*pcStack_90)(&piStack_a8);
        }
        if (cVar4 == '\0') goto LAB_0db63c2c;
      }
    }
    else {
      if (cVar4 != '\x02') goto LAB_0db63c2c;
      uStack_58 = 0x180000013e021d;
      func_0x0ed5ffe0(*param_5,0x200,&uStack_58);
      if ((uStack_58 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
      }
      uStack_58 = 0;
    }
    if (((ulong)uStack_188 & 1) != 0) {
      func_0x0412a280(pbStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
    }
    lVar7 = uStack_f0;
    if (cStack_d8 == '\x01') goto LAB_0db63e40;
    if (uStack_f0 != 0) {
      while (lVar7 != uStack_e8) {
        func_0x048b3e80(uStack_e8 + -0x40);
        uStack_e8 = uStack_e8 + -0x40;
      }
      uStack_e8 = lVar7;
      func_0x0412a280(uStack_f0,(long)pcStack_e0 - uStack_f0);
    }
    pbVar12 = pbStack_108;
    pbVar15 = (byte *)uStack_100;
    if (pbStack_108 == (byte *)0x0) {
      return;
    }
    for (; pbVar12 != pbVar15; pbVar15 = pbVar15 + -0x50) {
      if ((pbVar15[-8] == 1) && ((pbVar15[-0x30] & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(pbVar15 + -0x20),
                        *(ulong *)(pbVar15 + -0x30) & 0xfffffffffffffffe);
      }
    }
  }
  else {
    uStack_118 = uStack_168;
    pbStack_110 = pbStack_160;
    pbStack_108 = pbStack_158;
    uStack_100 = (code *)CONCAT44(uStack_14c,uStack_150);
    uStack_f8 = CONCAT44(uStack_144,iStack_148);
    uStack_f0 = CONCAT44(uStack_13c,uStack_140);
    uStack_e8 = CONCAT44(uStack_134,uStack_138);
    pcStack_e0 = pcStack_130;
    lVar7 = *param_5;
    if (*(code **)(param_3 + 0xe) == (code *)0x0) {
      piStack_a8 = (int *)0x0;
      pbStack_a0 = (byte *)0x0;
      func_0x048b1dc0(&piStack_a8);
      uStack_188 = piStack_a8;
      pbStack_180 = pbStack_a0;
    }
    else {
      pbStack_180 = *(byte **)(param_3 + 10);
      uStack_188 = *(int **)(param_3 + 0xc);
      if (*(int **)(param_3 + 0xc) == (int *)0x0) {
        (**(code **)(param_3 + 0xe))(0,param_3,0);
        uStack_188 = *(int **)(param_3 + 0xc);
      }
    }
    func_0x0ed8bc80(&uStack_168,&uStack_188,*(undefined1 *)(*param_5 + 0x2aa));
    pbVar12 = (byte *)((ulong)uStack_168 >> 1 & 0x7f);
    pbVar15 = (byte *)((long)&uStack_168 + 1);
    if (((ulong)uStack_168 & 1) != 0) {
      pbVar12 = pbStack_160;
      pbVar15 = pbStack_158;
    }
    uStack_d0 = 0;
    if (pbVar15 == (byte *)0x0) {
      uStack_d0 = (ulong)((uint)pbVar12 & 0x7f) << 0x30;
    }
    else {
      pbVar17 = pbVar12 + 9;
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,pbVar17,8);
      if (pbVar17 != (byte *)0x0 && puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(pbVar17,8);
      }
      *puVar8 = pbVar12;
      memcpy(puVar8 + 1,pbVar15,pbVar12);
      *(byte *)((long)(puVar8 + 1) + (long)pbVar12) = 0;
      uStack_d0 = (ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(lVar7,8,&uStack_d0);
    if ((uStack_d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d0 & 0xff00ffffffffffff) - 8);
    }
    uStack_d0 = 0;
    piVar9 = uStack_168;
    pbVar15 = pbStack_158;
joined_r0x0db63945:
    if (((ulong)piVar9 & 1) != 0) {
      func_0x0412a280(pbVar15,(ulong)piVar9 & 0xfffffffffffffffe);
    }
    lVar7 = uStack_f0;
    if (cStack_d8 == '\x01') {
LAB_0db63e40:
      if (((ulong)uStack_118 & 1) == 0) {
        return;
      }
      uVar14 = (ulong)uStack_118 & 0xfffffffffffffffe;
      goto LAB_0db64085;
    }
    if (uStack_f0 != 0) {
      while (lVar7 != uStack_e8) {
        func_0x048b3e80(uStack_e8 + -0x40);
        uStack_e8 = uStack_e8 + -0x40;
      }
      uStack_e8 = lVar7;
      func_0x0412a280(uStack_f0,(long)pcStack_e0 - uStack_f0);
    }
    pbVar12 = pbStack_108;
    pbVar15 = (byte *)uStack_100;
    if (pbStack_108 == (byte *)0x0) {
      return;
    }
    for (; pbVar12 != pbVar15; pbVar15 = pbVar15 + -0x50) {
      if ((pbVar15[-8] == 1) && ((pbVar15[-0x30] & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(pbVar15 + -0x20),
                        *(ulong *)(pbVar15 + -0x30) & 0xfffffffffffffffe);
      }
    }
  }
  uVar14 = uStack_f8 - (long)pbStack_108;
  uStack_100 = (code *)pbVar12;
LAB_0db64085:
  func_0x0412a280(pbStack_108,uVar14);
  return;
}


