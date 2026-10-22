/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x718e740 (ELF vaddr 0x708e740)
 * Label: caller-of-callee
 * Body:  [[0718e740, 0718e83e] [0718e840, 0718ea2b]]
 * Ghidra: FUN_0718e740
 */


void FUN_0718e740(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lStack_138 = param_1;
  lStack_130 = param_2;
  uVar5 = func_0x048648e0(uVar6,&UNK_014b1f12);
  pppuStack_e8 = (undefined8 ***)((ulong)pppuStack_e8 & 0xffffffffffff0000);
  FUN_04863cb0(&uStack_108,uVar5,&pppuStack_e8);
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = (uint)uStack_108;
  uStack_14c = uStack_108._4_4_;
  uStack_148 = (undefined4)uStack_100;
  uStack_144 = uStack_100._4_4_;
  uStack_140 = uStack_f8;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if (((ulong)pppuStack_e8 & 1) != 0) {
    func_0x0412a280(uStack_d8,(ulong)pppuStack_e8 & 0xfffffffffffffffe);
  }
  cVar4 = func_0x04865100(uVar6,&UNK_0147c4be);
  if (cVar4 != '\0') {
    uVar6 = func_0x048648e0(uVar6,&UNK_0147c4be);
    func_0x04865530(auStack_118,uVar6);
    func_0x048655b0(auStack_128,uVar6);
    while (cVar4 = func_0x04862c80(auStack_118,auStack_128), cVar4 == '\0') {
      uVar6 = func_0x04862b80(auStack_118);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      pppuStack_e8 = &pppuStack_e8;
      uStack_b8 = func_0x0cc41880(0xf6ff9e0,&uStack_e0);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_70 = 3;
      uStack_6c = 1;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      LOCK();
      uStack_48 = 0;
      UNLOCK();
      sVar1 = *(short *)(lStack_130 + 0x8c);
      func_0x04863480(auStack_40,uVar6);
      func_0x0b6c2e40(auStack_40,(int)sVar1,&pppuStack_e8);
      func_0x04863610(auStack_40);
      uVar2 = uStack_160;
      if (uStack_160 < uStack_158) {
        func_0x0c6e7560(uStack_160,&pppuStack_e8);
        uStack_160 = uVar2 + 0xa8;
      }
      else {
        uStack_160 = func_0x04ec5b40(&uStack_168,&pppuStack_e8);
      }
      func_0x04abe980(&pppuStack_e8);
      func_0x04862ba0(auStack_118);
    }
    func_0x04862b40(auStack_128);
    func_0x04862b40(auStack_118);
  }
  if (*(long *)(lStack_138 + 0x150) != 0) {
    (**(code **)(*(long *)(lStack_138 + 0x150) + 0x10))(lStack_138 + 0x150,lStack_130,&uStack_168);
  }
  if ((uStack_150 & 1) != 0) {
    func_0x0412a280(uStack_140,CONCAT44(uStack_14c,uStack_150) & 0xfffffffffffffffe);
  }
  uVar3 = uStack_168;
  uVar2 = uStack_160;
  if (uStack_168 != 0) {
    while (uVar3 != uVar2) {
      func_0x04abe980(uVar2 - 0xa8);
      uVar2 = uVar2 - 0xa8;
    }
    uStack_160 = uVar3;
    func_0x0412a280(uStack_168,uStack_158 - uStack_168);
  }
  return;
}


