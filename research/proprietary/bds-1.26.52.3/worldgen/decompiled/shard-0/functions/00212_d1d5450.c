/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5450 (ELF vaddr 0xd1d5450)
 * Label: br::worldgen::UniformHeight::vslot2
 * Body:  [[0d2d5450, 0d2d563b] [0d2d5664, 0d2d56bf]]
 * Ghidra: wg_br__worldgen__UniformHeight__vslot2
 */


ulong wg_br__worldgen__UniformHeight__vslot2(long param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined7 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_58;
  undefined7 uStack_57;
  ulong uStack_50;
  undefined7 *puStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  ulong uStack_38;
  undefined7 *puStack_30;
  long lStack_28;
  
  uVar3 = (**(code **)(param_1 + 0x10))(param_3,*(undefined4 *)(param_1 + 8));
  uVar7 = (ulong)uVar3;
  iVar4 = (**(code **)(param_1 + 0x20))(param_3,*(undefined4 *)(param_1 + 0x18));
  if (iVar4 < (int)uVar3) {
    uStack_78 = 0;
    uStack_70 = 0;
    lStack_68 = 0;
    func_0x0d2d56f0(&bStack_40,param_1 + 8);
    func_0x0d2d56f0(&bStack_58,param_1 + 0x18);
    uVar5 = uStack_38;
    if ((bStack_40 & 1) == 0) {
      uVar5 = (ulong)(bStack_40 >> 1);
    }
    uVar8 = uStack_50;
    if ((bStack_58 & 1) == 0) {
      uVar8 = (ulong)(bStack_58 >> 1);
    }
    uVar5 = uVar5 + uVar8 + 3;
    if (0xfffffffffffffff7 < uVar5) {
      uVar6 = func_0x04882e30();
      while ((uStack_78 & 1) == 0) {
        while( true ) {
          _Unwind_Resume(uVar6);
          func_0x0412a280(puStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
          if ((bStack_40 & 1) == 0) break;
          func_0x0412a280(puStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
          if ((uStack_78 & 1) != 0) goto LAB_0d2d56a5;
        }
      }
LAB_0d2d56a5:
      func_0x0412a280(lStack_68,uStack_78 & 0xfffffffffffffffe);
      _Unwind_Resume(uVar6);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    if (0x16 < uVar5) {
      uVar8 = 0x19;
      if ((uVar5 | 7) != 0x17) {
        uVar8 = uVar5 | 7;
      }
      func_0x0412f770(&uStack_78,uVar8);
    }
    func_0x0412fea0(&uStack_78,0x5b);
    uVar5 = (ulong)(bStack_40 >> 1);
    puVar2 = &uStack_3f;
    if ((bStack_40 & 1) != 0) {
      uVar5 = uStack_38;
      puVar2 = puStack_30;
    }
    func_0x0412f8c0(&uStack_78,puVar2,uVar5);
    func_0x0412fea0(&uStack_78,0x2d);
    uVar5 = (ulong)(bStack_58 >> 1);
    puVar2 = &uStack_57;
    if ((bStack_58 & 1) != 0) {
      uVar5 = uStack_50;
      puVar2 = puStack_48;
    }
    func_0x0412f8c0(&uStack_78,puVar2,uVar5);
    func_0x0412fea0(&uStack_78,0x5d);
    if ((bStack_58 & 1) != 0) {
      func_0x0412a280(puStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    if ((bStack_40 & 1) != 0) {
      func_0x0412a280(puStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
    }
    lStack_28 = lStack_68;
    if ((uStack_78 & 1) == 0) {
      lStack_28 = (long)&uStack_78 + 1;
    }
    func_0x06e8e110(1,2,0x1f,&UNK_0143fe4b,&lStack_28);
    if ((uStack_78 & 1) != 0) {
      func_0x0412a280(lStack_68,uStack_78 & 0xfffffffffffffffe);
    }
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x18))(param_2,(iVar4 - uVar3) + 1);
    uVar7 = (ulong)(uVar3 + iVar4);
  }
  return uVar7;
}


