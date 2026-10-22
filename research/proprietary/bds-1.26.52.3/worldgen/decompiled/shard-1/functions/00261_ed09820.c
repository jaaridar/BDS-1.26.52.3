/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee09820 (ELF vaddr 0xed09820)
 * Label: callee-of:0x8486630
 * Body:  [[0ee09820, 0ee09847] [0ee09850, 0ee0988d] [0ee09890, 0ee09be1]]
 * Ghidra: FUN_0ee09820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0ee09820(uint *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  byte bStack_118;
  char cStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte bStack_c8;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  
  uVar6 = 0;
  uVar5 = 0;
  bVar4 = 0;
  do {
    if (4 < uVar5) goto LAB_0ee099f7;
    func_0x0ee07720(&uStack_108,param_2);
    bStack_118 = bStack_c8;
    if (bStack_c8 == 1) {
      uStack_158 = CONCAT71(uStack_158._1_7_,(undefined1)uStack_108);
    }
    else {
      uStack_158 = uStack_108;
      uStack_150 = uStack_100;
      uStack_148 = uStack_f8;
      uStack_140 = uStack_f0;
      uStack_138 = uStack_e8;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_130 = uStack_e0;
      uStack_128 = (undefined8 *)uStack_d8;
      uStack_120 = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      FUN_048e6d60(&uStack_108);
    }
    if ((bStack_118 & 1) == 0) {
      func_0x0ee09ce0(&uStack_158);
      uStack_78 = uStack_158;
      uStack_70 = uStack_150;
      uStack_68 = uStack_148;
      uStack_60 = uStack_140;
      uStack_58 = uStack_138;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_50 = (undefined4)uStack_130;
      uStack_4c = uStack_130._4_4_;
      uStack_48 = (undefined4)uStack_128;
      uStack_44 = uStack_128._4_4_;
      uStack_40 = uStack_120;
      uStack_130 = 0;
      uStack_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      func_0x0ed5bac0(param_1,&uStack_78);
      FUN_048e6d60(&uStack_78);
      cVar7 = '\x01';
    }
    else {
      uVar6 = uVar6 | ((byte)uStack_158 & 0x7f) << (bVar4 & 0x1f);
      bVar4 = bVar4 + 7;
      uVar5 = uVar5 + ((byte)uStack_158 >> 7);
      cVar7 = (-1 < (char)(byte)uStack_158) * '\x03';
    }
    if ((bStack_118 & 1) == 0) {
      FUN_048e6d60(&uStack_158);
    }
  } while (cVar7 == '\0');
  if (cVar7 == '\x03') {
    if (uVar5 < 5) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *param_1 = uVar6;
    }
    else {
LAB_0ee099f7:
      uVar2 = func_0x0412dc70();
      puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      uVar1 = _UNK_011d0567;
      puVar3[6] = _DAT_011d055f;
      puVar3[7] = uVar1;
      uVar1 = _UNK_011d0557;
      puVar3[4] = _DAT_011d054f;
      puVar3[5] = uVar1;
      uVar1 = _UNK_011d0547;
      puVar3[2] = _DAT_011d053f;
      puVar3[3] = uVar1;
      uVar1 = _UNK_011d0537;
      *puVar3 = _DAT_011d052f;
      puVar3[1] = uVar1;
      *(undefined4 *)((long)puVar3 + 0x3f) = 0x64656c69;
      *(undefined1 *)((long)puVar3 + 0x43) = 0;
      uStack_148 = _DAT_0f5340d0;
      uStack_140 = _UNK_0f5340d8;
      uStack_158 = _DAT_0f5340c0;
      uStack_150 = _UNK_0f5340c8;
      uStack_138 = 0x49;
      uStack_130 = 0x43;
      bStack_118 = 0;
      uStack_120 = uStack_120 & 0xff000000;
      cStack_110 = '\x01';
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_128 = puVar3;
      func_0x0eee17a0(&uStack_108,&uStack_158,&uStack_108,1);
      if ((cStack_110 == '\x01') && ((uStack_138 & 1) != 0)) {
        func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
      }
      uStack_b8 = 0x54;
      uStack_158 = CONCAT44(uStack_b4,0x54);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *param_1 = 0x54;
      param_1[1] = uStack_b4;
      *(undefined8 *)(param_1 + 2) = uVar2;
      param_1[4] = (uint)uStack_108;
      param_1[5] = uStack_108._4_4_;
      param_1[6] = (uint)uStack_100;
      param_1[7] = uStack_100._4_4_;
      *(undefined8 *)(param_1 + 8) = uStack_f8;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      uStack_130 = 0;
      uStack_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      uStack_150 = uVar2;
      uStack_b0 = uVar2;
      FUN_048e6d60(&uStack_158);
      FUN_048e6d60(&uStack_b8);
    }
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x11d052f  BinaryStream getUnsignedVarInt() illegal byte sequence, read failed
 * 0x11d053f  UnsignedVarInt() illegal byte sequence, read failed
 * 0x11d054f   illegal byte sequence, read failed
 * 0x11d055f  quence, read failed
 */
