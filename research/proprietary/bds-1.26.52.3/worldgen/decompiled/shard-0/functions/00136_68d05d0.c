/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x69d05d0 (ELF vaddr 0x68d05d0)
 * Label: string:DisableTerrainRendering
 * Body:  [[069d05d0, 069d1284]]
 * Ghidra: FUN_069d05d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_069d05d0(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 unaff_BPL;
  undefined1 uVar14;
  undefined8 uVar15;
  byte bStack_c8;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 uStack_bf;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined4 uStack_ae;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  long *******appppppplStack_78 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  char cStack_54;
  long lStack_50;
  long lStack_48;
  code *pcStack_40;
  long lStack_38;
  
  if (param_5 != 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0(param_1);
    return param_1;
  }
  appppppplStack_78[0] = (long *******)0x0;
  uStack_68 = (int)param_3[2];
  uStack_64 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_60 = (int)param_3[3];
  uStack_5c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_58 = (int)param_3[4];
  cStack_54 = *(char *)((long)param_3 + 0x24);
  if (cStack_54 != '\0') {
    if (cStack_54 == '\x02') {
      (*(code *)param_3[2])(5,param_3,appppppplStack_78);
    }
    else {
      appppppplStack_78[0] = (long *******)*param_3;
      *param_3 = 0;
    }
  }
  lVar9 = param_3[5];
  lStack_50 = lVar9;
  lStack_48 = param_3[6];
  param_3[6] = 0;
  pcStack_40 = (code *)param_3[7];
  param_3[7] = 0;
  ppppppplVar8 = appppppplStack_78[0];
  if (cStack_54 == '\x02') {
    ppppppplVar8 = (long *******)appppppplStack_78;
  }
  if ((iStack_58 != 0x21cb317c) || (ppppppplVar8 == (long *******)0x0)) {
    if (pcStack_40 != (code *)0x0) {
      if (lStack_48 == 0) {
        (*pcStack_40)(0,appppppplStack_78,0);
      }
      ppppppplVar8 = appppppplStack_78[0];
      if (cStack_54 == '\x02') {
        ppppppplVar8 = (long *******)appppppplStack_78;
      }
      ppppppplVar8 = (long *******)func_0x0488e200(lVar9,lStack_48,0x21cb317c,ppppppplVar8);
      if (ppppppplVar8 != (long *******)0x0) goto LAB_069d070d;
    }
    param_1[2] = (long)&UNK_0488e0b0;
    *(undefined4 *)(param_1 + 4) = 0x48b5725f;
    param_1[3] = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    *param_1 = 0;
    param_1[5] = lStack_50;
    param_1[6] = 0;
    param_1[7] = 0;
    pcVar3 = (code *)CONCAT44(uStack_5c,uStack_60);
    goto joined_r0x069d0f7c;
  }
LAB_069d070d:
  lStack_38 = lStack_50;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0x3f800000;
  bVar1 = *(byte *)(*ppppppplVar8 + 6);
  if (bVar1 < 4) {
    uVar14 = (undefined1)(0x12100a0c >> ((bVar1 & 3) << 3));
    uVar15 = *(undefined8 *)(&UNK_014eeee0 + (ulong)bVar1 * 8);
    unaff_BPL = (undefined1)(0x64000000 >> (bVar1 * '\b' & 0x1f));
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
  }
  bStack_c8 = 0x18;
  uStack_c7 = 0x70617247;
  uStack_c3 = 0x73636968;
  uStack_bf = 0x65646f4d;
  uStack_bb = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 2) {
        if ((*(byte *)(lVar9 + 0x28) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar9 + 0x38),
                          *(ulong *)(lVar9 + 0x28) & 0xfffffffffffffffe);
        }
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        *(undefined8 *)(lVar9 + 0x29) = uVar15;
        *(undefined1 *)(lVar9 + 0x31) = unaff_BPL;
        *(undefined1 *)(lVar9 + 0x32) = 0;
        goto joined_r0x069d080f;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_a9);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined8 *)(lVar9 + 0x29) = uVar15;
    *(undefined1 *)(lVar9 + 0x31) = unaff_BPL;
    *(undefined1 *)(lVar9 + 0x32) = 0;
    *(undefined4 *)(lVar9 + 0x33) = uStack_ae;
    *(undefined1 *)(lVar9 + 0x37) = uStack_aa;
    *(undefined4 *)(lVar9 + 0x40) = 2;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined8 *)(lVar9 + 0x29) = uVar15;
    *(undefined1 *)(lVar9 + 0x31) = unaff_BPL;
    *(undefined1 *)(lVar9 + 0x32) = 0;
    *(undefined4 *)(lVar9 + 0x40) = 2;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d080f:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x31);
  bStack_c8 = 0x26;
  uStack_c7 = _DAT_01798489;
  uStack_c3 = _UNK_0179848d;
  uStack_bf = _UNK_01798491;
  uStack_bb = (undefined1)_UNK_01798495;
  uStack_ba = (undefined1)((uint)_UNK_01798495 >> 8);
  uStack_b9 = (undefined1)((uint)_UNK_01798495 >> 0x10);
  uStack_b8 = 0x736b636f;
  uStack_b4 = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d089c;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d089c:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x32);
  bStack_c8 = 0x26;
  uStack_c7 = _DAT_0179849d;
  uStack_c3 = _UNK_017984a1;
  uStack_bf = _UNK_017984a5;
  uStack_bb = (undefined1)_UNK_017984a9;
  uStack_ba = (undefined1)((uint)_UNK_017984a9 >> 8);
  uStack_b9 = (undefined1)((uint)_UNK_017984a9 >> 0x10);
  uStack_b8 = 0x73656972;
  uStack_b4 = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0929;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0929:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x33);
  bStack_c8 = 0x16;
  uStack_c7 = 0x776f6853;
  uStack_c3 = 0x706d6f43;
  uStack_bf = 0x737361;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d09b9;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d09b9:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x34);
  bStack_c8 = 0x16;
  uStack_c7 = 0x6867694e;
  uStack_c3 = 0x73695674;
  uStack_bf = 0x6e6f69;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0a49;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0a49:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x35);
  bStack_c8 = 0x2c;
  uStack_c7 = _DAT_017984c9;
  uStack_c3 = _UNK_017984cd;
  uStack_bf = _UNK_017984d1;
  uStack_bb = (undefined1)_UNK_017984d5;
  uStack_ba = (undefined1)((uint)_UNK_017984d5 >> 8);
  uStack_b9 = 0x69;
  uStack_b8 = 0x69746163;
  uStack_b4 = 0x6f;
  uStack_b3 = 0x736e;
  uStack_b1 = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0add;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0add:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x36);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x1a,0);
  }
  uVar6 = _UNK_017984ec;
  uVar5 = _UNK_017984e8;
  uVar4 = _UNK_017984e4;
  uStack_b8 = SUB84(puVar10,0);
  uStack_b4 = (undefined1)((ulong)puVar10 >> 0x20);
  uStack_b3 = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_b1 = (undefined1)((ulong)puVar10 >> 0x38);
  bStack_c8 = 0x1b;
  uStack_c7 = 0;
  uStack_c3 = 0x17000000;
  uStack_bf = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  *puVar10 = _DAT_017984e0;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)((long)puVar10 + 0xf) = 0x676e697265646e65;
  *(undefined1 *)((long)puVar10 + 0x17) = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0ba6;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0ba6:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x37);
  bStack_c8 = 0x2c;
  uStack_c7 = _DAT_017984f8;
  uStack_c3 = _UNK_017984fc;
  uStack_bf = _UNK_01798500;
  uStack_bb = (undefined1)_UNK_01798504;
  uStack_ba = (undefined1)((uint)_UNK_01798504 >> 8);
  uStack_b9 = 0x65;
  uStack_b8 = 0x7265646e;
  uStack_b4 = 0x69;
  uStack_b3 = 0x676e;
  uStack_b1 = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0c30;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0c30:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)(*ppppppplVar8 + 7);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar15 = _UNK_01798522;
  uStack_b8 = SUB84(puVar10,0);
  uStack_b4 = (undefined1)((ulong)puVar10 >> 0x20);
  uStack_b3 = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_b1 = (undefined1)((ulong)puVar10 >> 0x38);
  bStack_c8 = 0x21;
  uStack_c7 = 0;
  uStack_c3 = 0x1b000000;
  uStack_bf = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  *(ulong *)((long)puVar10 + 0xb) = CONCAT35(_UNK_0179851f,CONCAT41(_UNK_0179851b,DAT_0179851a));
  *(undefined8 *)((long)puVar10 + 0x13) = uVar15;
  uVar6 = _UNK_0179851b;
  uVar5 = _UNK_01798517;
  uVar4 = _UNK_01798513;
  *puVar10 = _DAT_0179850f;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined1 *)((long)puVar10 + 0x1b) = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0cf7;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0cf7:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x39);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar6 = _UNK_01798537;
  uVar5 = _UNK_01798533;
  uVar4 = _UNK_0179852f;
  uStack_b8 = SUB84(puVar10,0);
  uStack_b4 = (undefined1)((ulong)puVar10 >> 0x20);
  uStack_b3 = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_b1 = (undefined1)((ulong)puVar10 >> 0x38);
  bStack_c8 = 0x21;
  uStack_c7 = 0;
  uStack_c3 = 0x18000000;
  uStack_bf = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  *puVar10 = _DAT_0179852b;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)(puVar10 + 4) = 0x676e697265646e65;
  *(undefined1 *)(puVar10 + 6) = 0;
  lVar9 = func_0x069d1880(&lStack_a8,&bStack_c8);
  if (*(char *)(lVar9 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar9 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar9 + 0x28) = uVar14;
        goto joined_r0x069d0db6;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(lVar9 + 0x28) = uVar14;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined1 *)(lVar9 + 0x48) = 1;
  }
joined_r0x069d0db6:
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  uVar14 = *(undefined1 *)((long)*ppppppplVar8 + 0x3a);
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar10 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x1a,0);
  }
  uVar6 = _UNK_01798550;
  uVar5 = _UNK_0179854c;
  uVar4 = _UNK_01798548;
  uStack_b8 = SUB84(puVar10,0);
  uStack_b4 = (undefined1)((ulong)puVar10 >> 0x20);
  uStack_b3 = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_b1 = (undefined1)((ulong)puVar10 >> 0x38);
  bStack_c8 = 0x1b;
  uStack_c7 = 0;
  uStack_c3 = 0x17000000;
  uStack_bf = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  *puVar10 = _DAT_01798544;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)((long)puVar10 + 0xf) = 0x676e697265646e65;
  *(undefined1 *)((long)puVar10 + 0x17) = 0;
  lVar11 = func_0x069d1880(&lStack_a8,&bStack_c8);
  lVar9 = lStack_38;
  if (*(char *)(lVar11 + 0x48) == '\x01') {
    uVar2 = *(uint *)(lVar11 + 0x40);
    if ((ulong)uVar2 != 0xffffffff) {
      if (uVar2 == 1) {
        *(undefined1 *)(lVar11 + 0x28) = uVar14;
        goto joined_r0x069d0e82;
      }
      (**(code **)(&UNK_0f05a100 + (ulong)uVar2 * 8))(&uStack_ae);
    }
    *(undefined1 *)(lVar11 + 0x28) = uVar14;
    *(undefined4 *)(lVar11 + 0x40) = 1;
    lVar9 = lStack_38;
  }
  else {
    *(undefined1 *)(lVar11 + 0x28) = uVar14;
    *(undefined4 *)(lVar11 + 0x40) = 1;
    *(undefined1 *)(lVar11 + 0x48) = 1;
  }
joined_r0x069d0e82:
  lStack_38 = lVar9;
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8))),
                    CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,bStack_c8)) &
                    0xfffffffffffffffe);
  }
  param_1[2] = (long)&UNK_069cb7a0;
  *(undefined4 *)(param_1 + 4) = 0xca13c39;
  param_1[3] = (long)&UNK_069cc4b0;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar7 = uStack_a0;
  lVar11 = lStack_a8;
  lStack_a8 = 0;
  *plVar12 = lVar11;
  plVar12[1] = uStack_a0;
  uStack_a0 = 0;
  plVar12[2] = lStack_98;
  plVar12[3] = lStack_90;
  *(undefined4 *)(plVar12 + 4) = uStack_88;
  if (lStack_90 != 0) {
    uVar13 = *(ulong *)(lStack_98 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar13 = uVar13 & uVar7 - 1;
    }
    else if (uVar7 <= uVar13) {
      if ((uVar13 | uVar7) >> 0x20 == 0) {
        uVar13 = (uVar13 & 0xffffffff) % (uVar7 & 0xffffffff);
      }
      else {
        uVar13 = uVar13 % uVar7;
      }
    }
    *(long **)(lVar11 + uVar13 * 8) = plVar12 + 2;
    lStack_98 = 0;
    lStack_90 = 0;
  }
  *param_1 = (long)plVar12;
  param_1[5] = lVar9;
  param_1[6] = 0;
  param_1[7] = (long)&UNK_069cb600;
  func_0x069cd100(&lStack_a8);
  pcVar3 = (code *)CONCAT44(uStack_5c,uStack_60);
joined_r0x069d0f7c:
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(appppppplStack_78);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1798489  ShowInvisibleBlocks
 * 0x179849d  ShowChunkBoundaries
 * 0x17984c9  ShowToastNotifications
 * 0x17984e0  DisableTerrainRendering
 * 0x17984f8  DisableEntityRendering
 * 0x179850f  DisableBlockEntityRendering
 * 0x179851a  kEntityRendering
 * 0x179852b  DisableParticleRendering
 * 0x1798544  DisableWeatherRendering
 */
