/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5353920 (ELF vaddr 0x5253920)
 * Label: callee-of:0x5253d60
 * Body:  [[05353920, 05353a42] [05353a50, 05353b0f]]
 * Ghidra: FUN_05353920
 */


undefined8 FUN_05353920(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  bool bVar9;
  undefined1 uStack_71;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  
  if (*(int *)(param_2 + 0x18) == 1) {
    pbStack_70 = (byte *)0x0;
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    func_0x05353b10(param_1,&pbStack_70);
    if ((uStack_68 & 0xffffffff) != 0xffffffff) {
      (**(code **)(&UNK_0efa59c0 + (uStack_68 & 0xffffffff) * 8))(&uStack_71,&pbStack_70);
    }
    pbVar7 = param_2 + 1;
    bVar9 = (*param_2 & 1) == 0;
    pbVar6 = *(byte **)(param_2 + 0x10);
    if (bVar9) {
      pbVar6 = pbVar7;
    }
    uVar5 = (ulong)(*param_2 >> 1);
    if (!bVar9) {
      uVar5 = *(ulong *)(param_2 + 8);
    }
    pbStack_70 = (byte *)CONCAT62(pbStack_70._2_6_,1);
    uStack_68 = 1;
    uStack_58 = 0xffffffffffffffff;
    uStack_50 = 0x1fffffffffff;
    lStack_48 = 0;
    uStack_40 = 0;
    uStack_3f = 0;
    uStack_38 = 0;
    uStack_37 = 0;
    uStack_30 = 0;
    uStack_60 = param_3;
    cVar3 = func_0x0b5be630(param_1,pbVar6,uVar5,&pbStack_70);
    lVar2 = lStack_48;
    if (lStack_48 != 0) {
      for (lVar8 = CONCAT71(uStack_3f,uStack_40); lVar2 != lVar8; lVar8 = lVar8 + -0x18) {
        if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -8),*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe
                         );
        }
      }
      uStack_40 = (undefined1)lVar2;
      uStack_3f = (undefined7)((ulong)lVar2 >> 8);
      func_0x0412a280(lStack_48,CONCAT71(uStack_37,uStack_38) - lStack_48);
    }
    uVar4 = 1;
    if (cVar3 != '\0') {
      if ((*param_2 & 1) != 0) {
        pbVar7 = *(byte **)(param_2 + 0x10);
      }
      pbStack_70 = pbVar7;
      func_0x05353bd0(1,3,5,&UNK_012bde92,&pbStack_70);
      uVar4 = 0;
    }
  }
  else {
    if (*(int *)(param_2 + 0x18) != 0) {
      uVar4 = func_0x04931450();
      uVar4 = func_0x04882e20(uVar4);
      uVar4 = func_0x04882e20(uVar4);
      func_0x04ab4450(&pbStack_70);
      uVar4 = func_0x0eee2d70(uVar4);
      func_0x04a8b170(&pbStack_70);
      func_0x0eee2d70(uVar4);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    pbStack_70 = (byte *)CONCAT44(pbStack_70._4_4_,*(undefined4 *)param_2);
    uStack_68 = CONCAT44(uStack_68._4_4_,1);
    func_0x05353b10(param_1,&pbStack_70);
    if ((uStack_68 & 0xffffffff) != 0xffffffff) {
      (**(code **)(&UNK_0efa59c0 + (uStack_68 & 0xffffffff) * 8))(&uStack_71,&pbStack_70);
    }
    uVar4 = 1;
  }
  return uVar4;
}


