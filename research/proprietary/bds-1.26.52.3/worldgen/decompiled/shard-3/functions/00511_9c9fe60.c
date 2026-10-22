/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9d9fe60 (ELF vaddr 0x9c9fe60)
 * Label: caller-of-callee
 * Body:  [[09d9fe60, 09da0559]]
 * Ghidra: FUN_09d9fe60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09d9fe60(ulong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  bool bVar21;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  ulong *puStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [24];
  
  pbStack_58 = param_2 + 1;
  uStack_b8 = *(byte **)(param_2 + 0x10);
  uStack_b0 = *(ulong *)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    uStack_b8 = pbStack_58;
    uStack_b0 = (ulong)(*param_2 >> 1);
  }
  bVar21 = (*param_3 & 1) != 0;
  pbStack_a8 = param_3 + 1;
  if (bVar21) {
    pbStack_a8 = *(byte **)(param_3 + 0x10);
  }
  uStack_a0 = (ulong)(*param_3 >> 1);
  if (bVar21) {
    uStack_a0 = *(ulong *)(param_3 + 8);
  }
  uStack_78 = param_1;
  pbStack_60 = param_3;
  func_0x0470d9a0(auStack_98,&UNK_012fb1d7,0x20,0xdd,&uStack_b8);
  puVar19 = (ulong *)((ulong)auStack_98 >> 1 & 0x7f);
  puVar13 = (ulong *)(auStack_98 + 1);
  if (((ulong)auStack_98 & 1) != 0) {
    puVar19 = puStack_90;
    puVar13 = puStack_88;
  }
  uStack_80 = 0;
  if (puVar13 == (ulong *)0x0) {
    uStack_80 = (ulong)((uint)puVar19 & 0x7f) << 0x30;
  }
  else {
    lVar9 = (long)puVar19 + 9;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
    if (lVar9 != 0 && puVar8 == (undefined8 *)0x0) {
      FUN_0eec74c0(lVar9,8);
    }
    *puVar8 = puVar19;
    func_0x0eee2f00(puVar8 + 1,puVar13,puVar19);
    *(undefined1 *)((long)(puVar8 + 1) + (long)puVar19) = 0;
    uStack_80 = (ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_b8 = (byte *)((ulong)uStack_b8 & 0xffffffffffffff00);
  pbStack_a8 = (byte *)((ulong)pbStack_a8 & 0xffffffffffffff00);
  func_0x0eeb79f0(auStack_48,&uStack_80);
  pbVar14 = pbStack_60;
  uVar20 = uStack_78;
  if ((uStack_80 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
  }
  uStack_80 = 0;
  if (((ulong)auStack_98 & 1) != 0) {
    func_0x0412a280(puStack_88,(ulong)auStack_98 & 0xfffffffffffffffe);
  }
  lVar9 = func_0x09def4c0(uVar20 + 0x1b8,param_2);
  if (lVar9 == uVar20 + 0x1c0) {
    pbStack_a8 = *(byte **)(param_2 + 0x10);
    pbVar15 = *(byte **)param_2;
    uVar11 = *(ulong *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(pbVar14 + 0x10);
    uVar5 = *(undefined8 *)(pbVar14 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)pbVar14;
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(byte **)(pbVar14 + 0x10) = pbStack_a8;
    uStack_b8._0_4_ = SUB84(pbVar15,0);
    uStack_b8._4_4_ = (undefined4)((ulong)pbVar15 >> 0x20);
    uStack_b0._0_4_ = (undefined4)uVar11;
    uStack_b0._4_4_ = (undefined4)(uVar11 >> 0x20);
    *(undefined4 *)pbVar14 = (undefined4)uStack_b8;
    *(undefined4 *)(pbVar14 + 4) = uStack_b8._4_4_;
    *(undefined4 *)(pbVar14 + 8) = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar14 + 0xc) = uStack_b0._4_4_;
    uStack_b8 = pbVar15;
    uStack_b0 = uVar11;
    lVar9 = func_0x09def4c0(uVar20 + 0x1b8,param_2);
  }
  func_0x09d9bd50(&uStack_80,uVar20,pbVar14);
  uVar20 = (ulong)(int)uStack_80;
  if (uVar20 == 0) goto LAB_09da046d;
  bVar1 = *(byte *)(lVar9 + 0x38);
  uVar6 = (uint)bVar1;
  if ((bVar1 & 1) == 0) {
    uVar11 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar11 = *(ulong *)(lVar9 + 0x40);
  }
  uVar12 = uVar11 + 0xe;
  pbStack_68 = param_2;
  if (uVar12 < 0xfffffffffffffff8) {
    uStack_70 = uVar6;
    if (uVar12 < 0x17) {
      uStack_b0 = 0;
      pbStack_a8 = (byte *)0x0;
      uStack_b8 = (byte *)(ulong)(byte)((char)uVar12 * '\x02');
      uVar10 = (long)&uStack_b8 + 1;
      if (uVar11 != 0) {
        if ((bVar1 & 1) == 0) goto LAB_09da0156;
LAB_09da00f8:
        lVar16 = *(long *)(lVar9 + 0x48);
        goto LAB_09da015a;
      }
    }
    else {
      uVar18 = 0x1a;
      if ((uVar12 | 7) != 0x17) {
        uVar18 = (uVar12 | 7) + 1;
      }
      uVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (uVar10 == 0) {
        FUN_0eec74c0(uVar18,0);
      }
      uStack_b8 = (byte *)(uVar18 | 1);
      pbVar14 = pbStack_60;
      uStack_b0 = uVar12;
      pbStack_a8 = (byte *)uVar10;
      if ((uStack_70 & 1) != 0) goto LAB_09da00f8;
LAB_09da0156:
      lVar16 = lVar9 + 0x39;
LAB_09da015a:
      func_0x0eee2ee0(uVar10,lVar16,uVar11);
    }
    *(undefined8 *)(uVar10 + 6 + uVar11) = 0x73657361696c4164;
    *(undefined8 *)(uVar10 + uVar11) = 0x41646e616d6d6f43;
    *(undefined1 *)(uVar10 + 0xe + uVar11) = 0;
    iVar7 = *(int *)(lVar9 + 0x9c);
    auStack_98 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (auStack_98 == (undefined1  [8])0x0) {
      FUN_0eec74c0(0x20,0);
    }
    puStack_90 = (ulong *)((long)auStack_98 + 0x20);
    *(ulong *)auStack_98 = (long)iVar7 & 0xffffffffe00fffff;
    *(ulong *)((long)auStack_98 + 8) = 0;
    *(ulong *)((long)auStack_98 + 0x10) = uVar20 & 0xffffffffe00fffff;
    *(ulong *)((long)auStack_98 + 0x18) = 0;
    uVar20 = uStack_78;
    puStack_88 = puStack_90;
    if (DAT_0f551b88 == '\0') goto LAB_09da04e3;
  }
  else {
    func_0x04882e30();
LAB_09da04e3:
    iVar7 = func_0x04108328(&DAT_0f551b88);
    if (iVar7 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f551b82 = _DAT_0f551b80;
      _DAT_0f551b80 = _DAT_0f551b80 + 1;
      func_0x0410844d(&DAT_0f551b88);
    }
  }
  func_0x09d9eb70(&uStack_6c,uVar20,&uStack_b8,auStack_98,_DAT_0f551b82,&UNK_09d77520,0);
  pbVar15 = pbStack_68;
  if (auStack_98 != (undefined1  [8])0x0) {
    puStack_90 = (ulong *)auStack_98;
    func_0x0412a280(auStack_98,(long)puStack_88 - (long)auStack_98);
  }
  if (((ulong)uStack_b8 & 1) != 0) {
    func_0x0412a280(pbStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
  }
  *(undefined4 *)(lVar9 + 0xa0) = uStack_6c;
  uVar5 = _DAT_0f5447f8;
  if ((~*(uint *)(lVar9 + 0xa4) & 0xe) != 0) {
    uVar11 = strlen(_DAT_0f5447f8);
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,(char)uVar11 * '\x02');
        uVar12 = (long)&uStack_b8 + 1;
        if (uVar11 != 0) goto LAB_09da030f;
      }
      else {
        uVar20 = 0x1a;
        if ((uVar11 | 7) != 0x17) {
          uVar20 = (uVar11 | 7) + 1;
        }
        uVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
        if (uVar12 == 0) {
          FUN_0eec74c0(uVar20,0);
        }
        uStack_b8 = (byte *)(uVar20 | 1);
        uVar20 = uStack_78;
        uStack_b0 = uVar11;
        pbStack_a8 = (byte *)uVar12;
LAB_09da030f:
        func_0x0eee2ee0(uVar12,uVar5,uVar11);
      }
      *(undefined1 *)(uVar12 + uVar11) = 0;
      uVar11 = (ulong)(int)uStack_80;
      puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
      if (puVar13 == (ulong *)0x0) {
        FUN_0eec74c0(0x10,0);
      }
      puStack_90 = puVar13 + 2;
      *puVar13 = uVar11 & 0xffffffffe00fffff;
      puVar13[1] = 0;
      auStack_98 = (undefined1  [8])puVar13;
      puStack_88 = puStack_90;
      if (DAT_0f551b88 == '\0') goto LAB_09da0521;
    }
    else {
      func_0x04882e30();
LAB_09da0521:
      iVar7 = func_0x04108328(&DAT_0f551b88);
      if (iVar7 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f551b82 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551b88);
      }
    }
    func_0x09d9eb70(auStack_4c,uVar20,&uStack_b8,auStack_98,_DAT_0f551b82,&UNK_09d77520,0);
    pbVar15 = pbStack_68;
    if (auStack_98 != (undefined1  [8])0x0) {
      puStack_90 = (ulong *)auStack_98;
      func_0x0412a280(auStack_98,(long)puStack_88 - (long)auStack_98);
    }
    if (((ulong)uStack_b8 & 1) != 0) {
      func_0x0412a280(pbStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
    }
  }
  uStack_b8 = pbVar14;
  lVar9 = func_0x05fb17a0(uVar20 + 0x1e8,pbVar14,&UNK_01563a4f,&uStack_b8,auStack_98);
  pbVar14 = (byte *)(lVar9 + 0x38);
  if (pbVar14 != pbVar15) {
    bVar1 = *pbVar15;
    if ((*pbVar14 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(pbVar15 + 0x10);
        uVar2 = *(undefined4 *)(pbVar15 + 4);
        uVar3 = *(undefined4 *)(pbVar15 + 8);
        uVar4 = *(undefined4 *)(pbVar15 + 0xc);
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar15;
        *(undefined4 *)(lVar9 + 0x3c) = uVar2;
        *(undefined4 *)(lVar9 + 0x40) = uVar3;
        *(undefined4 *)(lVar9 + 0x44) = uVar4;
      }
      else {
        FUN_04885070(pbVar14,*(undefined8 *)(pbVar15 + 0x10),*(undefined8 *)(pbVar15 + 8));
      }
    }
    else {
      bVar21 = (bVar1 & 1) != 0;
      pbVar17 = pbStack_58;
      if (bVar21) {
        pbVar17 = *(byte **)(pbVar15 + 0x10);
      }
      uVar20 = (ulong)(bVar1 >> 1);
      if (bVar21) {
        uVar20 = *(ulong *)(pbVar15 + 8);
      }
      func_0x04885120(pbVar14,pbVar17,uVar20);
    }
  }
LAB_09da046d:
  func_0x0eeb81b0(auStack_48);
  return;
}


