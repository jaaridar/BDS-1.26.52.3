/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaac9f0 (ELF vaddr 0xc9ac9f0)
 * Label: string:minecraft:overworld
 * Body:  [[0caac9f0, 0caac9f0]]
 * Ghidra: _INIT_1748
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1748(void)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined2 *puStack_78;
  undefined2 *puStack_70;
  undefined2 *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  
  _DAT_0f6ed8b0 = 0;
  _DAT_0f6ed8b8 = 0;
  _DAT_0f6ed8c0 = 0;
  uRam000000000f6ed8d0 = 0;
  uRam000000000f6ed8d8 = 0;
  uRam000000000f6ed8e0 = 0;
  uRam000000000f6ed8e8 = 0;
  uRam000000000f6ed8f0 = 0;
  func_0x0eee2f40(&UNK_0ca91690,&DAT_0f6ed8b0,0xf53dab8);
  _DAT_0f6ed8f8 = 0;
  _DAT_0f6ed900 = 0;
  _DAT_0f6ed908 = 0;
  uRam000000000f6ed918 = 0;
  uRam000000000f6ed920 = 0;
  uRam000000000f6ed928 = 0;
  uRam000000000f6ed930 = 0;
  uRam000000000f6ed938 = 0;
  func_0x0eee2f40(&UNK_0ca916f0,&DAT_0f6ed8f8,0xf53dab8);
  lVar14 = 0;
  func_0x0eee2dd0(0xf6ed940,0,0x6000);
  lVar2 = 0;
  do {
    uVar13 = 0;
    lVar12 = lVar14;
    do {
      if ((uVar13 < 0x2f) && (uVar13 != 0 && (lVar2 != 0x2f && lVar2 != 0))) {
        lVar10 = 0;
        do {
          if ((uint)lVar10 - 0x2f < 0xffffffd2) {
            puVar1 = (ulong *)(((ulong)(lVar12 + lVar10) >> 6) * 8 + 0xf6ed940);
            *puVar1 = *puVar1 | 1L << ((byte)lVar10 & 0x3f);
          }
          if (0x2d < (uint)lVar10) {
            puVar1 = (ulong *)(((ulong)(lVar12 + lVar10) >> 6) * 8 + 0xf6ed940);
            *puVar1 = *puVar1 | 2L << ((byte)lVar10 & 0x3f);
          }
          lVar10 = lVar10 + 2;
        } while (lVar10 != 0x40);
      }
      else {
        lVar10 = 0;
        do {
          puVar1 = (ulong *)(((ulong)(lVar12 + lVar10) >> 6) * 8 + 0xf6ed940);
          *puVar1 = *puVar1 | 3L << ((byte)lVar10 & 0x3f);
          lVar10 = lVar10 + 2;
        } while (lVar10 != 0x40);
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x40;
    } while (uVar13 != 0x40);
    lVar2 = lVar2 + 1;
    lVar14 = lVar14 + 0x1000;
  } while (lVar2 != 0x30);
  lVar14 = 0;
  func_0x0eee2dd0(0xf6f3940,0,0x6000);
  lVar2 = 0;
  do {
    lVar10 = 0;
    lVar12 = lVar14;
    do {
      if ((int)lVar10 - 0x1fU < 2 ||
          ((int)lVar10 - 0xfU < 2 || ((int)lVar2 - 0x1fU < 2 || (int)lVar2 - 0xfU < 2))) {
        lVar11 = 0;
        do {
          puVar1 = (ulong *)(((ulong)(lVar12 + lVar11) >> 6) * 8 + 0xf6f3940);
          *puVar1 = *puVar1 | 3L << ((byte)lVar11 & 0x3f);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x40);
      }
      else {
        lVar11 = 0;
        do {
          iVar9 = (int)lVar11;
          if ((iVar9 == 0x20) || (iVar9 == 0x10)) {
            puVar1 = (ulong *)(((ulong)(lVar12 + lVar11) >> 6) * 8 + 0xf6f3940);
            *puVar1 = *puVar1 | 1L << ((byte)lVar11 & 0x3f);
          }
          if ((iVar9 + 1U | 0x10) == 0x1f) {
            puVar1 = (ulong *)(((ulong)(lVar12 + lVar11) >> 6) * 8 + 0xf6f3940);
            *puVar1 = *puVar1 | 2L << ((byte)lVar11 & 0x3f);
          }
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x40);
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x40;
    } while (lVar10 != 0x40);
    lVar2 = lVar2 + 1;
    lVar14 = lVar14 + 0x1000;
  } while (lVar2 != 0x30);
  func_0x0eee2f40(&UNK_0ca97c30,0xf6f9940,0xf53dab8);
  func_0x0eee2f40(&UNK_0ca97c30,0xf6f9948,0xf53dab8);
  uRam000000000f6f9d84 = 0;
  uRam000000000f6f9d88 = 0;
  uRam000000000f6f9d68 = 0x63d7ede73c38f916;
  uRam000000000f6f9d70 = 0x26;
  uRam000000000f6f9d71 = _DAT_0142bedc;
  uRam000000000f6f9d75 = _UNK_0142bee0;
  uRam000000000f6f9d79 = _UNK_0142bee4;
  uRam000000000f6f9d7d = CONCAT13(0x6f,(int3)_UNK_0142bee8);
  uRam000000000f6f9d81 = 0x646c72;
  func_0x0eee2f40(&UNK_048c16a0,0xf6f9d68,0xf53dab8);
  uRam000000000f6f9950 = 0x1006e00150001;
  puRam000000000f6f9958 = &UNK_01254d89;
  puRam000000000f6f9960 = &UNK_01254d89;
  uRam000000000f6f9968 = 0;
  func_0x0eee2f40(&UNK_0495d2a0,0xf6f9950,0xf53dab8);
  func_0x0d88e390(0xf6f9970,0xf72b540);
  func_0x0eee2f40(&UNK_0495d2a0,0xf6f9970,0xf53dab8);
  puStack_d8 = _UNK_0f3ee5f8;
  uStack_d0 = _UNK_0f3ee600;
  puStack_e8 = _UNK_0f3ee5e8;
  puStack_e0 = (undefined1 *)_UNK_0f3ee5f0;
  uStack_f8 = _UNK_0f3ee5d8;
  puStack_f0 = (undefined1 *)_UNK_0f3ee5e0;
  puStack_108 = _UNK_0f3ee5c8;
  puStack_100 = _UNK_0f3ee5d0;
  puStack_118 = _UNK_0f3ee5b8;
  puStack_110 = (undefined1 *)_UNK_0f3ee5c0;
  puStack_128 = _UNK_0f3ee5a8;
  uStack_120 = _UNK_0f3ee5b0;
  uRam000000000f6f9990 = 0;
  uRam000000000f6f9998 = 0;
  uRam000000000f6f99a0 = 0;
  uRam000000000f6f99a8 = 0;
  uRam000000000f6f99b0 = 0x3f800000;
  func_0x0cad4490(0xf6f9990,&puStack_128);
  func_0x0cad4490(0xf6f9990,&puStack_118);
  func_0x0cad4490(0xf6f9990,&puStack_108);
  func_0x0cad4490(0xf6f9990,&uStack_f8);
  func_0x0cad4490(0xf6f9990,&puStack_e8);
  func_0x0cad4490(0xf6f9990,&puStack_d8,&puStack_d8);
  func_0x0eee2f40(&UNK_0b7ce260,0xf6f9990,0xf53dab8);
  puStack_128 = &UNK_0125ffc9;
  uStack_120 = 0x16;
  puVar3 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar3 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puStack_110 = puVar3 + 1;
  *puVar3 = 0;
  puStack_100 = &UNK_011e336b;
  uStack_f8 = 0x16;
  puStack_f0 = (undefined1 *)0x0;
  puStack_e8 = (undefined1 *)0x0;
  puStack_e0 = (undefined1 *)0x0;
  puStack_118 = puVar3;
  puStack_108 = puStack_110;
  puVar3 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar3 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puStack_e8 = puVar3 + 1;
  *puVar3 = 0;
  puStack_d8 = &UNK_012b4b24;
  uStack_d0 = 0x1c;
  puStack_c8 = (undefined1 *)0x0;
  puStack_c0 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x0;
  puStack_f0 = puVar3;
  puStack_e0 = puStack_e8;
  puVar3 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar3 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  puStack_c0 = puVar3 + 1;
  *puVar3 = 0;
  puStack_c8 = puVar3;
  puStack_b8 = puStack_c0;
  puVar4 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  *puVar4 = 0x1030400;
  *(undefined1 *)(puVar4 + 1) = 2;
  puStack_b0 = &UNK_0137a591;
  uStack_a8 = 0xe;
  puStack_a0 = (undefined4 *)0x0;
  puStack_98 = (undefined4 *)0x0;
  puStack_90 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  puStack_98 = (undefined4 *)((long)puVar5 + 5);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar5 = *puVar4;
  puStack_a0 = puVar5;
  puStack_90 = puStack_98;
  puVar6 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,3);
  if (puVar6 == (undefined2 *)0x0) {
    func_0x0eec74c0(3,0);
  }
  *puVar6 = 0x300;
  *(undefined1 *)(puVar6 + 1) = 1;
  puStack_88 = &UNK_011ff535;
  uStack_80 = 0x16;
  puStack_78 = (undefined2 *)0x0;
  puStack_70 = (undefined2 *)0x0;
  puStack_68 = (undefined2 *)0x0;
  puVar7 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,3);
  if (puVar7 == (undefined2 *)0x0) {
    func_0x0eec74c0(3,0);
  }
  puStack_70 = (undefined2 *)((long)puVar7 + 3);
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar6 + 1);
  *puVar7 = *puVar6;
  puStack_78 = puVar7;
  puStack_68 = puStack_70;
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  *puVar5 = 0x4020100;
  *(undefined1 *)(puVar5 + 1) = 3;
  puStack_60 = &UNK_0129bd16;
  uStack_58 = 0x14;
  puStack_50 = (undefined4 *)0x0;
  puStack_48 = (undefined4 *)0x0;
  puStack_40 = (undefined4 *)0x0;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  puStack_48 = (undefined4 *)((long)puVar8 + 5);
  *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar5 + 1);
  *puVar8 = *puVar5;
  uRam000000000f6f99b8 = 0;
  uRam000000000f6f99c0 = 0;
  uRam000000000f6f99c8 = 0;
  uRam000000000f6f99d0 = 0;
  uRam000000000f6f99d8 = 0x3f800000;
  puStack_50 = puVar8;
  puStack_40 = puStack_48;
  func_0x0cad4a60(0xf6f99b8,&puStack_128);
  func_0x0cad4a60(0xf6f99b8,&puStack_100,&puStack_100);
  func_0x0cad4a60(0xf6f99b8,&puStack_d8);
  func_0x0cad4a60(0xf6f99b8,&puStack_b0);
  func_0x0cad4a60(0xf6f99b8,&puStack_88);
  func_0x0cad4a60(0xf6f99b8,&puStack_60,&puStack_60);
  if (puStack_50 != (undefined4 *)0x0) {
    puStack_48 = puStack_50;
    func_0x0412a280(puStack_50,(long)puStack_40 - (long)puStack_50);
  }
  if (puStack_78 != (undefined2 *)0x0) {
    puStack_70 = puStack_78;
    func_0x0412a280(puStack_78,(long)puStack_68 - (long)puStack_78);
  }
  if (puStack_a0 != (undefined4 *)0x0) {
    puStack_98 = puStack_a0;
    func_0x0412a280(puStack_a0,(long)puStack_90 - (long)puStack_a0);
  }
  if (puStack_c8 != (undefined1 *)0x0) {
    puStack_c0 = puStack_c8;
    func_0x0412a280(puStack_c8,(long)puStack_b8 - (long)puStack_c8);
  }
  if (puStack_f0 != (undefined1 *)0x0) {
    puStack_e8 = puStack_f0;
    func_0x0412a280(puStack_f0,(long)puStack_e0 - (long)puStack_f0);
  }
  if (puStack_118 != (undefined1 *)0x0) {
    puStack_110 = puStack_118;
    func_0x0412a280(puStack_118,(long)puStack_108 - (long)puStack_118);
  }
  func_0x0412a280(puVar5,5);
  func_0x0412a280(puVar6,3);
  func_0x0412a280(puVar4,5);
  func_0x0eee2f40(&UNK_0caaaaa0,0xf6f99b8,0xf53dab8);
  return;
}


