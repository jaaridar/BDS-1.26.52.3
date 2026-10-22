/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdadbb0 (ELF vaddr 0xccadbb0)
 * Label: callee-of:0xe4118a0
 * Body:  [[0cdadbb0, 0cdae0c1]]
 * Ghidra: FUN_0cdadbb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cdadbb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  byte bStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_c8 [48];
  char cStack_98;
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [56];
  
  puStack_108 = &UNK_012fc052;
  uStack_100 = 9;
  func_0x0470d9a0(&uStack_278,&UNK_01337c1c,0x10,0xd,&puStack_108);
  uVar5 = (ulong)uStack_278 >> 1 & 0x7f;
  lVar6 = (long)&uStack_278 + 1;
  if (((ulong)uStack_278 & 1) != 0) {
    uVar5 = uStack_270;
    lVar6 = uStack_268;
  }
  lVar3 = func_0x0cdf8ff0(param_1 + 0x18);
  if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (lVar3 = *(long *)(lVar3 + 0x68), lVar3 != 0)) {
    bVar7 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar6 = lVar3 + 9;
    if (bVar7) {
      lVar6 = *(long *)(lVar3 + 0x18);
    }
    uVar5 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar7) {
      uVar5 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0cdf9610(auStack_c8,param_1,lVar6,uVar5,0);
  }
  else {
    func_0x0cdf9610(auStack_c8,param_1,lVar6,uVar5,0);
  }
  if (((ulong)uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,(ulong)uStack_278 & 0xfffffffffffffffe);
  }
  if (cStack_98 == '\0') {
    func_0x04134310(&bStack_1e0,0x11);
    puVar4 = (uint *)func_0x0412f0e0(&bStack_1e0,0,&UNK_013a2d09,0xe);
    uStack_1b8 = *(undefined8 *)(puVar4 + 4);
    uStack_1c8 = *puVar4;
    uStack_1c4 = puVar4[1];
    uStack_1c0 = puVar4[2];
    uStack_1bc = puVar4[3];
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1b0 = 0x400;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1e8 = 0;
    func_0x0cdf8680(auStack_58,auStack_c8,&DAT_014d9869,0x1d,&uStack_1c8);
    func_0x0cdf8ac0(&puStack_108,auStack_58);
    uStack_258 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_200 = 0;
    uStack_270 = 0xffffffffffffffff;
    uStack_268 = 0;
    uStack_260 = 0xff;
    uStack_278 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_258);
    uStack_250 = func_0x041681f0(&uStack_258,0xf547a30);
    uStack_248 = func_0x041681f0(&uStack_258,0xf547770);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_270 = 0x100;
    uStack_180 = 0x100;
    uStack_17c = 0;
    uStack_178 = (undefined4)uStack_268;
    uStack_174 = uStack_268._4_4_;
    uStack_170 = (undefined1)uStack_260;
    puStack_188 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_168,&uStack_258);
    uStack_160 = uStack_250;
    uStack_158 = uStack_248;
    uStack_150 = (undefined4)uStack_240;
    uStack_14c = uStack_240._4_4_;
    uStack_148 = (undefined4)uStack_238;
    uStack_144 = uStack_238._4_4_;
    uStack_140 = (undefined4)uStack_230;
    uStack_13c = uStack_230._4_4_;
    uStack_138 = (undefined4)uStack_228;
    uStack_134 = uStack_228._4_4_;
    if (uStack_228 != (long *)0x0) {
      LOCK();
      uStack_228[1] = uStack_228[1] + 1;
      UNLOCK();
    }
    uStack_130 = uStack_220;
    if ((uStack_218 & 1) == 0) {
      uStack_118 = uStack_208;
      uStack_128 = (uint)uStack_218;
      uStack_124 = uStack_218._4_4_;
      uStack_120 = (undefined4)uStack_210;
      uStack_11c = uStack_210._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_128,uStack_208,uStack_210);
    }
    uStack_110 = uStack_200;
    func_0x0cdf8d50(auStack_90,&puStack_108,&puStack_188);
    puStack_188 = &UNK_0f4e3c70;
    if ((uStack_128 & 1) != 0) {
      func_0x0412a280(uStack_118,CONCAT44(uStack_124,uStack_128) & 0xfffffffffffffffe);
    }
    plVar2 = (long *)CONCAT44(uStack_134,uStack_138);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    func_0x04167a40(auStack_168);
    uStack_278 = &UNK_0f4e3c70;
    if ((uStack_218 & 1) != 0) {
      func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
    }
    plVar2 = uStack_228;
    if (uStack_228 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_228 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_228 + 0x10))(uStack_228);
        func_0x0412c2d0(plVar2);
      }
    }
    func_0x04167a40(&uStack_258);
    if ((uStack_198 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_198 & 0xff00ffffffffffff) - 8);
    }
    uStack_198 = 0;
    if ((uStack_1a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1a0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1a0 = 0;
    if ((uStack_1c8 & 1) != 0) {
      func_0x0412a280(uStack_1b8,CONCAT44(uStack_1c4,uStack_1c8) & 0xfffffffffffffffe);
    }
    if ((uStack_1e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1e8 = 0;
    if ((uStack_1f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
    }
    if ((bStack_1e0 & 1) != 0) {
      func_0x0412a280(uStack_1d0,CONCAT71(uStack_1df,bStack_1e0) & 0xfffffffffffffffe);
    }
  }
  return;
}


