/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdc319b0 (ELF vaddr 0xdb319b0)
 * Label: caller-of-callee
 * Body:  [[0dc319b0, 0dc32271] [0dc32280, 0dc323d4]]
 * Ghidra: FUN_0dc319b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dc319b0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined4 uStack_1f7;
  undefined1 uStack_1f3;
  undefined2 uStack_1f2;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  uint uStack_17c;
  uint uStack_178;
  undefined1 uStack_174;
  undefined4 auStack_170 [2];
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_cc;
  undefined3 uStack_cb;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_9c;
  undefined3 uStack_9b;
  undefined1 uStack_98;
  undefined3 uStack_97;
  undefined1 uStack_94;
  undefined3 uStack_93;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char cStack_20;
  
  func_0x0d8ab070();
  func_0x0e73d610(param_1);
  lVar5 = func_0x0dc5bfc0(param_1 + 0x18);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar11 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar10 = lVar5 + 9;
    if (bVar11) {
      lVar10 = *(long *)(lVar5 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x0dc5c6d0(&uStack_50,param_1,lVar10,uVar9);
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
  }
  else {
    func_0x0dc5c6d0(&uStack_50,param_1,&DAT_013aca93,0x2f);
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
  }
  if (cStack_20 != '\0') {
    return;
  }
  if ((DAT_0f7386c8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7386c8), iVar4 != 0)) {
    func_0x0dc5c1b0(0xf7386b0);
    func_0x0410844d(&DAT_0f7386c8);
  }
  if ((DAT_0f72c0e0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f72c0e0), iVar4 != 0)) {
    func_0x0d8d12e0(0xf72c0c8);
    func_0x0410844d(&DAT_0f72c0e0);
  }
  uStack_240 = CONCAT44(uStack_240._4_4_,_DAT_0f72c0cc);
  puStack_238 = (undefined8 *)&SUB_0d8d10f0;
  puStack_230 = &UNK_0dc5cfd0;
  func_0x05da1460(&uStack_80);
  lVar5 = func_0x0d8d10f0(CONCAT44(uStack_84,uStack_88) + 0x18);
  if ((*(byte *)(lVar5 + 0x1a) & 4) != 0) {
    func_0x0dc5cc10(&uStack_240,CONCAT44(uStack_84,uStack_88) + 0x18);
    if (uStack_228._4_4_ == 2) {
      piVar6 = *(int **)(*(long *)(puStack_230 + 0x78) + 0x60);
      iVar4 = *piVar6;
      while (iVar4 != (int)uStack_228) {
        piVar6 = piVar6 + 0x16;
        iVar4 = *piVar6;
      }
      puVar2 = *(undefined1 **)(piVar6 + 0xc);
      while ((undefined8 *)puVar2 != puStack_238) {
        piVar6 = *(int **)(piVar6 + 0xe);
        puVar2 = *(undefined1 **)(piVar6 + 0xc);
      }
    }
    else {
      if (uStack_228._4_4_ != 1) {
        if (uStack_228._4_4_ == 0) {
          *(uint *)(puStack_230 + 0x18) = *(uint *)(puStack_230 + 0x18) | 0x40000;
        }
        goto LAB_0dc31b73;
      }
      piVar6 = *(int **)(*(long *)(puStack_230 + 0x78) + 0x48);
      iVar4 = *piVar6;
      while (iVar4 != (int)uStack_228) {
        piVar6 = piVar6 + 0x1a;
        iVar4 = *piVar6;
      }
    }
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
LAB_0dc31b73:
  uStack_97 = uStack_60._1_3_;
  uStack_94 = (undefined1)uStack_5c;
  uStack_93 = uStack_5c._1_3_;
  uStack_b8 = uStack_80;
  uStack_b4 = uStack_7c;
  uStack_b0 = uStack_78;
  uStack_ac = uStack_74;
  uStack_a8 = uStack_70;
  uStack_a4 = uStack_6c;
  uStack_9c = (undefined1)uStack_64;
  uStack_9b = uStack_64._1_3_;
  uStack_98 = (undefined1)uStack_60;
  lVar5 = CONCAT44(uStack_84,uStack_88) + 0x18;
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_011ed38f,0xc);
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_0127271c,10);
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_0119d260,8);
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_0130ab68,0xd);
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_0128b68f,0x18);
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_01222e13,0xc);
  uStack_240 = func_0x0dc5bfc0(lVar5);
  puStack_238 = (undefined8 *)lVar5;
  func_0x0ed624b0(&uStack_240,&UNK_011d3584,0xc);
  uStack_e8 = CONCAT44(uStack_b4,uStack_b8);
  uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
  uStack_d8 = uStack_a8;
  uStack_d4 = uStack_a4;
  _uStack_cc = CONCAT31(uStack_9b,uStack_9c);
  uStack_c8 = CONCAT31(uStack_97,uStack_98);
  uStack_c4 = CONCAT31(uStack_93,uStack_94);
  lStack_f0 = CONCAT44(uStack_84,uStack_88);
  func_0x0dc5cc10(&uStack_240,lVar5);
  if (uStack_228._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(puStack_230 + 0x78) + 0x60);
    iVar4 = *piVar6;
    while (iVar4 != (int)uStack_228) {
      piVar6 = piVar6 + 0x16;
      iVar4 = *piVar6;
    }
    lVar5 = *(long *)(piVar6 + 0xc);
    while ((undefined8 *)lVar5 != puStack_238) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar5 = *(long *)(piVar6 + 0xc);
    }
LAB_0dc31d4f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_228._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(puStack_230 + 0x78) + 0x48);
      iVar4 = *piVar6;
      while (iVar4 != (int)uStack_228) {
        piVar6 = piVar6 + 0x1a;
        iVar4 = *piVar6;
      }
      goto LAB_0dc31d4f;
    }
    if (uStack_228._4_4_ == 0) {
      *(uint *)(puStack_230 + 0x18) = *(uint *)(puStack_230 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f7386c8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7386c8), iVar4 != 0)) {
    func_0x0dc5c1b0(0xf7386b0);
    func_0x0410844d(&DAT_0f7386c8);
  }
  uStack_c8 = 1;
  uStack_c4 = 0x591e5dbc;
  uStack_240 = func_0x0dc5bfc0(lStack_f0 + 0x18);
  puStack_238 = (undefined8 *)(lStack_f0 + 0x18);
  func_0x0ed621a0(&uStack_240,uStack_c4);
  puStack_238 = &uStack_e8;
  uStack_240 = CONCAT62(uStack_240._2_6_,0x10);
  puStack_230 = (undefined *)CONCAT44(puStack_230._4_4_,uStack_c4);
  uStack_228 = (long *)0x0;
  lStack_220 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_200 = 0x18;
  uStack_1ff = 0x5f797469746e65;
  uStack_1f8 = 0x74;
  uStack_1f7 = 0x73657079;
  uStack_1f3 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = 0x3f600000;
  func_0x048afb10(&lStack_1e8,8);
  uStack_190 = 0;
  lStack_188 = 0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_180 = 0xff00;
  uStack_17c = uStack_17c & 0xffffff00;
  uStack_178 = uStack_178 & 0xffffff00;
  uStack_174 = 0;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f48a760;
  if (uStack_228 != (long *)0x0) {
    lVar5 = *uStack_228;
    uStack_228 = puVar7;
    (**(code **)(lVar5 + 8))();
    puVar7 = uStack_228;
  }
  uStack_228 = puVar7;
  auStack_170[0] = puStack_230._0_4_;
  plStack_168 = (long *)0x0;
  uStack_160 = (long *)((ulong)uStack_160._4_4_ << 0x20);
  uStack_158 = 1;
  uStack_150 = 0;
  puStack_148 = &UNK_0d8d46f0;
  puStack_140 = &SUB_048b06d0;
  puStack_138 = &SUB_0d8d43e0;
  puStack_130 = &UNK_0dc5cfe0;
  puStack_128 = &UNK_0dc5d220;
  uStack_120 = 0;
  uStack_118 = 0;
  plStack_110 = (long *)0x0;
  func_0x048b05a0(puStack_238,auStack_170);
  plVar8 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      func_0x0412c2d0(plVar8);
    }
  }
  puVar7 = puStack_238;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_170[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar5 = lStack_220;
  puVar3 = uStack_228;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_168 = plVar8 + 3;
  uStack_228 = (long *)0x0;
  lStack_220 = 0;
  plVar8[3] = (long)puVar3;
  plVar8[4] = lVar5;
  plVar8[7] = lStack_208;
  plVar8[5] = lStack_218;
  plVar8[6] = lStack_210;
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  plVar8[10] = lStack_1f0;
  plVar8[8] = CONCAT71(uStack_1ff,uStack_200);
  plVar8[9] = CONCAT26(uStack_1f2,CONCAT15(uStack_1f3,CONCAT41(uStack_1f7,uStack_1f8)));
  uStack_200 = 0;
  uStack_1ff = 0;
  uStack_1f8 = 0;
  uStack_1f7 = 0;
  uStack_1f3 = 0;
  uStack_1f2 = 0;
  lStack_1f0 = 0;
  plVar8[0xb] = lStack_1e8;
  plVar8[0xc] = lStack_1e0;
  plVar8[0xd] = lStack_1d8;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  plVar8[0xe] = lStack_1d0;
  plVar8[0xf] = lStack_1c8;
  plVar8[0x10] = lStack_1c0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_1b8;
  plVar8[0x12] = lStack_1b0;
  plVar8[0x13] = lStack_1a8;
  plVar8[0x14] = lStack_1a0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  plVar8[0x17] = lStack_188;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_198;
  *(undefined4 *)((long)plVar8 + 0xac) = uStack_198._4_4_;
  *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_190;
  *(undefined4 *)((long)plVar8 + 0xb4) = uStack_190._4_4_;
  uStack_198 = 0;
  uStack_190 = 0;
  lStack_188 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_174,CONCAT43(uStack_178,uStack_17c._1_3_));
  plVar8[0x18] = CONCAT44(uStack_17c,CONCAT22(uStack_17e,uStack_180));
  uStack_108 = 0;
  plStack_100 = (long *)0x0;
  uStack_160 = plVar8;
  func_0x048afd20(puVar7,auStack_170);
  plVar8 = uStack_160;
  if (uStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_160 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_160 + 0x10))(uStack_160);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      func_0x0412c2d0(plVar8);
    }
  }
  lVar5 = puVar7[2];
  iVar4 = *(int *)((long)puVar7 + 0x1c);
  if (iVar4 == 2) {
    piVar6 = *(int **)(*(long *)(lVar5 + 0x78) + 0x60);
    iVar4 = *piVar6;
    while (iVar4 != *(int *)(puVar7 + 3)) {
      piVar6 = piVar6 + 0x16;
      iVar4 = *piVar6;
    }
    for (; *(long *)(piVar6 + 0xc) != puVar7[1]; piVar6 = *(int **)(piVar6 + 0xe)) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) | (int)uStack_240 << 0x10;
      }
      goto LAB_0dc3228d;
    }
    piVar6 = *(int **)(*(long *)(lVar5 + 0x78) + 0x48);
    iVar4 = *piVar6;
    while (iVar4 != *(int *)(puVar7 + 3)) {
      piVar6 = piVar6 + 0x1a;
      iVar4 = *piVar6;
    }
  }
  piVar6[4] = piVar6[4] | (int)uStack_240 << 0x10;
LAB_0dc3228d:
  FUN_048b0bc0(&uStack_228);
  return;
}


