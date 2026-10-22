/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6cd4810 (ELF vaddr 0x6bd4810)
 * Label: caller-of-callee
 * Body:  [[06cd4810, 06cd499d] [06cd49a0, 06cd4a54] [06cd4a60, 06cd4c55]]
 * Ghidra: FUN_06cd4810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_06cd4810(undefined8 param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  byte bStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  
  if ((DAT_0f5a21f0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5a21f0), iVar3 != 0)) {
    func_0x06cd6f10();
    func_0x0eee2f40(&SUB_04863610,0xf5a21e0,0xf53dab8);
    func_0x0410844d(&DAT_0f5a21f0);
  }
  func_0x04864d90(auStack_40,param_1,&UNK_013236a8,0xf5a21e0);
  cVar1 = func_0x04865440(auStack_40);
  if (cVar1 == '\0') {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x0ee36b90(auStack_40,&uStack_78,0);
    uVar2 = 0x34;
    if ((uStack_78._6_1_ == '\x01') &&
       (cVar1 = func_0x04fa7a10(&uStack_78,0xf7208c0), uVar2 = _DAT_0f7208d8, cVar1 == '\0')) {
      lVar9 = 0xf7208e0;
      lVar7 = 0x2c;
      do {
        cVar1 = func_0x04fa7a10(&uStack_78,lVar9);
        if ((cVar1 != '\0') && (cVar1 = func_0x04fa7a10(&uStack_78,lVar9 + -0x20), cVar1 == '\0')) {
          uVar2 = *(uint *)(lVar9 + -8);
          break;
        }
        lVar9 = lVar9 + 0x20;
        lVar7 = lVar7 + -1;
        uVar2 = 0x34;
      } while (lVar7 != 0);
    }
    *param_2 = uVar2;
    if ((uStack_68 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
    }
    uStack_68 = 0;
    if ((uStack_70 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    uVar4 = func_0x048648e0(param_1,&UNK_013236a8);
    uVar2 = func_0x04863e30(uVar4,0);
    if (uVar2 < 8) {
      *param_2 = uVar2;
    }
    else {
      func_0x05d54750(&bStack_58,&UNK_0f0863e8);
      func_0x0d5ccc20(&uStack_78,&bStack_58,uVar2);
      if ((uStack_48 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
      }
      uStack_48 = 0;
      if ((uStack_50 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
      uVar2 = 0x34;
      if ((uStack_78._6_1_ == '\x01') &&
         (cVar1 = func_0x04fa7a10(&uStack_78,0xf7208c0), uVar2 = _DAT_0f7208d8, cVar1 == '\0')) {
        lVar9 = 0xf7208e0;
        lVar7 = 0x2c;
        do {
          cVar1 = func_0x04fa7a10(&uStack_78,lVar9);
          if ((cVar1 != '\0') && (cVar1 = func_0x04fa7a10(&uStack_78,lVar9 + -0x20), cVar1 == '\0'))
          {
            uVar2 = *(uint *)(lVar9 + -8);
            break;
          }
          lVar9 = lVar9 + 0x20;
          lVar7 = lVar7 + -1;
          uVar2 = 0x34;
        } while (lVar7 != 0);
      }
      *param_2 = uVar2;
      if ((uStack_68 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
      }
      uStack_68 = 0;
      if ((uStack_70 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
      }
    }
  }
  cVar1 = func_0x04865100(param_1,&UNK_013602eb);
  if (cVar1 == '\0') {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    if (param_2 + 2 == (uint *)&uStack_78) goto LAB_06cd4ba1;
  }
  else {
    uVar4 = func_0x048648e0(param_1,&UNK_013602eb);
    bStack_58 = 0;
    uStack_57 = 0;
    func_0x04863cb0(&uStack_78,uVar4,&bStack_58);
    if (param_2 + 2 == (uint *)&uStack_78) goto LAB_06cd4ba1;
  }
  puVar8 = param_2 + 2;
  if ((*puVar8 & 1) == 0) {
    if ((uStack_78 & 1) == 0) {
      *(ulong *)(param_2 + 6) = uStack_68;
      *puVar8 = (uint)uStack_78;
      param_2[3] = uStack_78._4_4_;
      param_2[4] = (uint)uStack_70;
      param_2[5] = uStack_70._4_4_;
    }
    else {
      func_0x04885070(puVar8,uStack_68,uStack_70);
    }
  }
  else {
    uVar6 = uStack_78 >> 1 & 0x7f;
    uVar5 = (long)&uStack_78 + 1;
    if ((uStack_78 & 1) != 0) {
      uVar6 = uStack_70;
      uVar5 = uStack_68;
    }
    func_0x04885120(puVar8,uVar5,uVar6);
  }
LAB_06cd4ba1:
  if ((uStack_78 & 1) != 0) {
    func_0x0412a280(uStack_68,uStack_78 & 0xfffffffffffffffe);
  }
  if ((cVar1 != '\0') && ((bStack_58 & 1) != 0)) {
    func_0x0412a280(uStack_48,CONCAT62(uStack_56,CONCAT11(uStack_57,bStack_58)) & 0xfffffffffffffffe
                   );
  }
  if (*param_2 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    if (((byte)param_2[2] & 1) == 0) {
      uVar5 = (ulong)(byte)((byte)param_2[2] >> 1);
    }
    else {
      uVar5 = *(ulong *)(param_2 + 4);
    }
    uVar5 = CONCAT71((int7)((ulong)param_2 >> 8),uVar5 != 0);
  }
  func_0x04863610(auStack_40);
  return uVar5 & 0xffffffff;
}


