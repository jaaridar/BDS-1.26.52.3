/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca70c0 (ELF vaddr 0xeba70c0)
 * Label: caller-of-callee
 * Body:  [[0eca70c0, 0eca721c] [0eca7220, 0eca7251] [0eca7260, 0eca7c2d]]
 * Ghidra: FUN_0eca70c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca70c0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  code *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined *puStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 *puStack_130;
  ulong uStack_128;
  long *plStack_120;
  undefined4 *puStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  char cStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0ecd1bc0();
  lVar11 = func_0x0c93e4c0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar17 = lVar11 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0ed4ec30(&uStack_80,param_1,lVar17,uVar15);
  }
  else {
    func_0x0ed4ec30(&uStack_80,param_1,&DAT_011d0062,0x20);
  }
  if (cStack_50 != '\0') {
    return;
  }
  puStack_130 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_130 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar8 = _UNK_011d007a;
  *(undefined8 *)(puStack_130 + 4) = _DAT_011d0072;
  *(undefined8 *)(puStack_130 + 6) = uVar8;
  uVar7 = _UNK_011d006e;
  uVar6 = _UNK_011d006a;
  uVar5 = _UNK_011d0066;
  *puStack_130 = _DAT_011d0062;
  puStack_130[1] = uVar5;
  puStack_130[2] = uVar6;
  puStack_130[3] = uVar7;
  *(undefined1 *)(puStack_130 + 8) = 0;
  func_0x05d54750(&uStack_108,&UNK_0f3e59c0);
  uVar15 = uStack_100;
  uStack_48 = uStack_108;
  uStack_44 = uStack_104;
  uStack_40 = (undefined4)uStack_100;
  uStack_3c = uStack_100._4_4_;
  uStack_100 = 0;
  uStack_f0 = uStack_f8;
  uStack_f8 = 0;
  lVar17 = CONCAT44(uStack_7c,uStack_80) + 0x18;
  lVar11 = func_0x0c93e4c0(lVar17);
  pbVar4 = *(byte **)(CONCAT44(uStack_7c,uStack_80) + 0x58);
  for (pbVar19 = *(byte **)(CONCAT44(uStack_7c,uStack_80) + 0x50); pbVar19 != pbVar4;
      pbVar19 = pbVar19 + 0x38) {
    bVar3 = *pbVar19;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0eca726a;
    }
    else if (*(long *)(pbVar19 + 8) == 0x24) {
LAB_0eca726a:
      if ((bVar3 & 1) == 0) {
        pbVar16 = pbVar19 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar19 + 0x10);
      }
      iVar9 = func_0x0eee3000(&DAT_014518a9,pbVar16,0x24);
      if (iVar9 == 0) break;
    }
  }
  if (pbVar19 == pbVar4) {
LAB_0eca7297:
    if (iStack_58 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0eca7315;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      puVar12 = (undefined *)func_0x048b0c90(lVar17,lVar11,uStack_54,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_188 = (undefined *)0x0;
        plStack_180 = (long *)0x0;
        FUN_048b0d20(&puStack_188);
        puVar12 = puStack_188;
        if (puStack_188 == (undefined *)0x0) goto LAB_0eca7315;
      }
      if ((*(int *)(puVar12 + 0x50) == -0x45dcb126) && (*(long *)(puVar12 + 0x58) != 0)) {
        lVar11 = *(long *)(puVar12 + 0x58) + 0x40;
      }
      else {
LAB_0eca7315:
        lVar11 = 0;
      }
    }
    uStack_e8 = 0;
    uStack_d8 = &UNK_048b4ab0;
    uStack_c8 = 0xd33bd9c5;
    uStack_d0 = (code *)&UNK_048b49f0;
    uStack_c4 = 1;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (plVar13 == (long *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
    *plVar13 = 0x29;
    plVar13[1] = 0x20;
    plVar13[2] = (long)puStack_130;
    *(undefined2 *)(plVar13 + 3) = 0x1002;
    *(undefined4 *)(plVar13 + 4) = uStack_48;
    *(undefined4 *)((long)plVar13 + 0x24) = uStack_44;
    *(undefined4 *)(plVar13 + 5) = uStack_40;
    *(undefined4 *)((long)plVar13 + 0x2c) = uStack_3c;
    plVar13[6] = uStack_f0;
    puStack_188 = &UNK_048b46e0;
    uStack_170 = (code *)&UNK_048b4ab0;
    uStack_168 = (code *)&UNK_048b49f0;
    uStack_160 = (undefined1 *)CONCAT35(uStack_160._5_3_,0x1d33bd9c5);
    uStack_e8 = 0;
    plStack_180 = plVar13;
    puStack_118 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_118 == (undefined4 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    uVar8 = _UNK_014518c1;
    uStack_128 = 0x29;
    plStack_120 = (long *)0x24;
    *(undefined8 *)(puStack_118 + 4) = _DAT_014518b9;
    *(undefined8 *)(puStack_118 + 6) = uVar8;
    uVar7 = _UNK_014518b5;
    uVar6 = _UNK_014518b1;
    uVar5 = _UNK_014518ad;
    *puStack_118 = _DAT_014518a9;
    puStack_118[1] = uVar5;
    puStack_118[2] = uVar6;
    puStack_118[3] = uVar7;
    puStack_118[8] = 0x5d797472;
    *(undefined1 *)(puStack_118 + 9) = 0;
    lVar11 = func_0x048b5060(lVar11,&uStack_128);
    *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
    pcVar18 = (code *)&UNK_048b49f0;
    if ((undefined **)(lVar11 + 0x20) != &puStack_188) {
      puVar21 = (undefined8 *)(lVar11 + 0x28);
      if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0eca749a:
        plVar13 = plStack_180;
        plStack_180 = (long *)0x0;
        *puVar21 = plVar13;
      }
      else {
        (**(code **)(lVar11 + 0x40))(puVar21);
        if (uStack_160._4_1_ != '\0') {
          if (uStack_160._4_1_ != '\x02') goto LAB_0eca749a;
          (*uStack_170)(5,&plStack_180,puVar21);
        }
      }
      *(undefined4 *)(lVar11 + 0x38) = (undefined4)uStack_170;
      *(undefined4 *)(lVar11 + 0x3c) = uStack_170._4_4_;
      *(undefined4 *)(lVar11 + 0x40) = (undefined4)uStack_168;
      *(undefined4 *)(lVar11 + 0x44) = uStack_168._4_4_;
      *(undefined4 *)(lVar11 + 0x48) = (undefined4)uStack_160;
      *(char *)(lVar11 + 0x4c) = uStack_160._4_1_;
      pcVar18 = uStack_168;
    }
    if ((uStack_128 & 1) != 0) {
      func_0x0412a280(puStack_118,uStack_128 & 0xfffffffffffffffe);
      pcVar18 = uStack_168;
    }
    if (pcVar18 != (code *)0x0) {
      (*pcVar18)(&plStack_180);
    }
    if (uStack_d0 != (code *)0x0) {
      (*uStack_d0)(&uStack_e8);
    }
    uVar15 = 0;
    bVar22 = false;
    puStack_130 = (undefined4 *)0x0;
    uVar20 = 0;
  }
  else {
    iVar9 = *(int *)(pbVar19 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550768), iVar10 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar9 == _DAT_0f550754) goto LAB_0eca7297;
    bVar22 = true;
    uVar20 = uStack_f0;
  }
  iStack_98 = iStack_60;
  iStack_94 = iStack_5c;
  uStack_a8 = uStack_70;
  uStack_a4 = uStack_6c;
  uStack_a0 = uStack_68;
  uStack_9c = uStack_64;
  uStack_b8 = uStack_80;
  uStack_b4 = uStack_7c;
  uStack_b0 = uStack_78;
  uStack_ac = uStack_74;
  uStack_90 = 0x1e1bc4d500000004;
  if ((DAT_0f6ebd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6ebd60), iVar9 != 0)) {
    func_0x0c93b950(0xf6ebd48);
    func_0x0410844d(&DAT_0f6ebd60);
  }
  puStack_188 = (undefined *)CONCAT44(puStack_188._4_4_,uStack_90._4_4_);
  plStack_180 = (long *)0x0;
  uStack_178 = (long *)((ulong)uStack_178._4_4_ << 0x20);
  uStack_170 = (code *)0x1;
  uStack_168 = (code *)&SUB_048aead0;
  uStack_160 = &UNK_0ed4f4e0;
  puStack_158 = &UNK_0ed4f5a0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x049057f0(&uStack_b0,&puStack_188);
  func_0x048aea50(&puStack_188);
  uStack_d8 = (undefined *)CONCAT44(uStack_9c,uStack_a0);
  uStack_d0 = (code *)CONCAT44(iStack_94,iStack_98);
  uStack_e8 = CONCAT44(uStack_ac,uStack_b0);
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4e2ad0;
  if ((DAT_0f551bc8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551bc8), iVar9 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_188 = (undefined *)CONCAT44(puStack_188._4_4_,_DAT_0f551bb4);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0ef46c48;
  plStack_180 = plVar13 + 3;
  plVar13[3] = (long)puVar21;
  plVar13[4] = 0;
  *(undefined1 *)(plVar13 + 5) = 0xff;
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  uStack_178 = plVar13;
  func_0x048afd20(&uStack_e8,&puStack_188);
  plVar13 = uStack_178;
  if (uStack_178 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_178 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_178 + 0x10))(uStack_178);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f6ebd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6ebd60), iVar9 != 0)) {
    func_0x0c93b950(0xf6ebd48);
    func_0x0410844d(&DAT_0f6ebd60);
  }
  if (iStack_94 == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_9c,uStack_a0) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != iStack_98) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != CONCAT44(uStack_a4,uStack_a8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
  }
  else {
    if (iStack_94 != 1) {
      if (iStack_94 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_9c,uStack_a0) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0eca7793;
    }
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_9c,uStack_a0) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != iStack_98) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
  }
  *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 2;
LAB_0eca7793:
  if ((DAT_0f6ebd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6ebd60), iVar9 != 0)) {
    func_0x0c93b950(0xf6ebd48);
    func_0x0410844d(&DAT_0f6ebd60);
  }
  puStack_188 = (undefined *)CONCAT44(puStack_188._4_4_,0xbf75c8f8);
  plStack_180 = (long *)0x0;
  uStack_178 = (long *)((ulong)uStack_178 & 0xffffffff00000000);
  uStack_170 = (code *)0x0;
  uStack_168 = (code *)&UNK_0ed4f7b0;
  uStack_160 = &SUB_048b06d0;
  puStack_158 = &UNK_0ed51a10;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x049057f0(&uStack_b0,&puStack_188);
  func_0x048aea50(&puStack_188);
  uStack_d8 = (undefined *)CONCAT44(uStack_9c,uStack_a0);
  uStack_d0 = (code *)CONCAT44(iStack_94,iStack_98);
  uStack_e8 = CONCAT44(uStack_ac,uStack_b0);
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4e2ad0;
  if ((DAT_0f551cb0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551cb0), iVar9 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_188 = (undefined *)CONCAT44(puStack_188._4_4_,_DAT_0f551c9c);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0ef46c98;
  plStack_180 = plVar13 + 3;
  plVar13[3] = (long)puVar21;
  *(undefined1 *)(plVar13 + 4) = 0xff;
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  uStack_178 = plVar13;
  func_0x048afd20(&uStack_e8,&puStack_188);
  plVar13 = uStack_178;
  if (uStack_178 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_178 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_178 + 0x10))(uStack_178);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((uVar20 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar20 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar15 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar15 & 0xff00ffffffffffff) - 8);
  }
  if (bVar22) {
    func_0x0412a280(puStack_130,0);
  }
  if ((uStack_f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_f8 & 0xff00ffffffffffff) - 8);
  }
  uStack_f8 = 0;
  if ((uStack_100 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11d0062  Server Sound Definition Document
 * 0x11d0072  inition Document
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
