/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf76060 (ELF vaddr 0xce76060)
 * Label: JigsawBlockActor::vslot18
 * Body:  [[0cf76060, 0cf761b2] [0cf761c0, 0cf7622a] [0cf76230, 0cf76425] [0cf7645b, 0cf7647e]]
 * Ghidra: wg_JigsawBlockActor__vslot18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlockActor__vslot18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined1 *puVar13;
  long *plVar14;
  byte bStack_88;
  undefined1 uStack_87;
  undefined5 uStack_86;
  undefined1 uStack_81;
  char cStack_80;
  undefined6 uStack_7f;
  undefined1 uStack_79;
  undefined4 *puStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  
  if (param_4 == (long *)0x0) {
    bStack_88 = 0x1c;
    uStack_87 = 0x4e;
    uStack_86 = 0x6c6176206f;
    uStack_81 = 0x69;
    cStack_80 = 100;
    uStack_7f = 0x6b636f6c6220;
    uStack_79 = 0;
    func_0x057d8ed0(param_2,&bStack_88);
  }
  else {
    lVar5 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
    func_0x0c6cf720(*(undefined8 *)(lVar5 + 0x68),param_2,param_3);
    bStack_88 = 0;
    uStack_87 = 0;
    func_0x057d8ed0(param_2,&bStack_88);
  }
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,
                    CONCAT17(uStack_81,CONCAT52(uStack_86,CONCAT11(uStack_87,bStack_88))) &
                    0xfffffffffffffffe);
  }
  FUN_0cf74f00();
  if (_DAT_0f70b598 != 0) {
    bVar2 = *(byte *)(param_1 + 0x14);
    uVar10 = (ulong)bVar2;
    uVar6 = _DAT_0f70b598 - (_DAT_0f70b598 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar6 >> 0x38 < 2) {
      uVar11 = (ulong)((uint)bVar2 & (int)_DAT_0f70b598 - 1U);
    }
    else {
      uVar11 = uVar10;
      if (_DAT_0f70b598 <= uVar10) {
        uVar11 = (ulong)(byte)(bVar2 % (byte)_DAT_0f70b598);
      }
    }
    plVar14 = *(long **)(_DAT_0f70b590 + uVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if ((byte)(uVar6 >> 0x38) < 2) {
        do {
          if (plVar14[1] == uVar10) {
            if (*(byte *)(plVar14 + 2) == bVar2) goto LAB_0cf761e7;
          }
          else if ((plVar14[1] & _DAT_0f70b598 - 1) != uVar11) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar14[1];
          if (uVar6 == uVar10) {
            if (*(byte *)(plVar14 + 2) == bVar2) goto LAB_0cf761e7;
          }
          else {
            if (_DAT_0f70b598 <= uVar6) {
              if ((uVar6 | _DAT_0f70b598) >> 0x20 == 0) {
                uVar6 = (uVar6 & 0xffffffff) % (_DAT_0f70b598 & 0xffffffff);
              }
              else {
                uVar6 = uVar6 % _DAT_0f70b598;
              }
            }
            if (uVar6 != uVar11) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  FUN_04882ef0(&UNK_012a1eae);
LAB_0cf7641f:
  uVar8 = func_0x04882e30();
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,
                    CONCAT17(uStack_81,CONCAT52(uStack_86,CONCAT11(uStack_87,bStack_88))) &
                    0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar8);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
LAB_0cf761e7:
  bVar2 = *(byte *)(plVar14 + 3);
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = plVar14[4];
  }
  uVar10 = uVar6 + 6;
  lStack_50 = param_1;
  if (uVar10 < 0xfffffffffffffff8) {
    if (uVar10 < 0x17) {
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_81 = 0;
      cStack_80 = '\0';
      uStack_7f = 0;
      uStack_79 = 0;
      puStack_78 = (undefined4 *)0x0;
      bStack_88 = (char)uVar10 * '\x02';
      bVar12 = false;
    }
    else {
      lVar5 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        lVar5 = (uVar10 | 7) + 1;
      }
      puStack_78 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
      if (puStack_78 == (undefined4 *)0x0) {
        puStack_58 = puStack_78;
        func_0x0eec74c0(lVar5,0);
        puStack_78 = puStack_58;
      }
      bVar12 = true;
      bStack_88 = 1;
      uStack_87 = (undefined1)((ulong)lVar5 >> 8);
      uStack_86 = (undefined5)((ulong)lVar5 >> 0x10);
      uStack_81 = (undefined1)((ulong)lVar5 >> 0x38);
      uStack_7f = (undefined6)(uVar10 >> 8);
      uStack_79 = (undefined1)(uVar10 >> 0x38);
      cStack_80 = (char)uVar10;
    }
    puVar1 = (undefined1 *)((long)puStack_78 + 6);
    puVar9 = (undefined4 *)&uStack_87;
    if (bVar12) {
      puVar9 = puStack_78;
    }
    *(undefined2 *)(puVar9 + 1) = 0x203a;
    *puVar9 = 0x65707954;
    puVar13 = &uStack_81;
    if (bVar12) {
      puVar13 = puVar1;
    }
    if (uVar6 != 0) {
      if ((bVar2 & 1) == 0) {
        lVar5 = (long)plVar14 + 0x19;
      }
      else {
        lVar5 = plVar14[5];
      }
      func_0x0eee2ee0(puVar13,lVar5,uVar6);
    }
    puVar13[uVar6] = 0;
    func_0x057d8ed0(param_2,&bStack_88);
    if ((bStack_88 & 1) != 0) {
      func_0x0412a280(puStack_78,
                      CONCAT17(uStack_81,CONCAT52(uStack_86,CONCAT11(uStack_87,bStack_88))) &
                      0xfffffffffffffffe);
    }
    lStack_48 = lStack_50 + 8;
    puStack_40 = &UNK_0d89e8b0;
    func_0x0470d9a0(&bStack_70,&UNK_012063a8,2,0xf,&lStack_48);
    puVar7 = (undefined8 *)func_0x0412f0e0(&bStack_70,0,&UNK_012cb138,10);
    puStack_78 = (undefined4 *)puVar7[2];
    uVar8 = *puVar7;
    uVar4 = puVar7[1];
    bStack_88 = (byte)uVar8;
    uStack_87 = (undefined1)((ulong)uVar8 >> 8);
    uStack_86 = (undefined5)((ulong)uVar8 >> 0x10);
    uStack_81 = (undefined1)((ulong)uVar8 >> 0x38);
    cStack_80 = (char)uVar4;
    uStack_7f = (undefined6)((ulong)uVar4 >> 8);
    uStack_79 = (undefined1)((ulong)uVar4 >> 0x38);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    func_0x057d8ed0(param_2,&bStack_88);
    if ((bStack_88 & 1) != 0) {
      func_0x0412a280(puStack_78,
                      CONCAT17(uStack_81,CONCAT52(uStack_86,CONCAT11(uStack_87,bStack_88))) &
                      0xfffffffffffffffe);
    }
    if ((bStack_70 & 1) != 0) {
      func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
    }
    return;
  }
  goto LAB_0cf7641f;
}


