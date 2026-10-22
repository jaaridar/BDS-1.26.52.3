/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe592b20
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e592a85, 0e592b0f] [0e592b20, 0e592b26] [0ed75bc0, 0ed75fdd]]
 * Ghidra: FUN_0e592b20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e592b20(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *unaff_RBX;
  ulong uVar11;
  ulong unaff_RBP;
  ulong uVar12;
  undefined8 *unaff_R15;
  bool bVar13;
  uint unaff_retaddr;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  code *pcStack_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  long lStack_8;
  
  puVar6 = (undefined8 *)(unaff_RBP & 0xffffffff);
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[8] = 0;
  *unaff_R15 = puVar6;
  unaff_R15[7] = &UNK_0e5838d0;
  if ((char)unaff_RBP == '\0') {
    unaff_R15[6] = 0;
LAB_0e592acc:
    uVar2 = unaff_R15[5];
    lStack_8 = 0xe592ad9;
    (*(code *)&UNK_0e5838d0)(0);
    lVar5 = unaff_R15[6];
    if (lVar5 == 0) {
      lStack_8 = 0xe592aea;
      lVar5 = func_0x048aead0(uVar2);
    }
  }
  else {
    lVar5 = unaff_R15[6];
    unaff_R15[6] = lVar5;
    if (lVar5 == 0) goto LAB_0e592acc;
  }
  plVar3 = (long *)**(undefined8 **)(lVar5 + 0x68);
  func_0x0ed6d600(&lStack_8,*unaff_RBX);
  (**(code **)(*plVar3 + 0x30))(plVar3);
  if ((unaff_RBX[2] != 0) &&
     ((*(uint *)(lStack_8 + 0x2b0) == 0xffffffff || (*(uint *)(lStack_8 + 0x2b0) < unaff_retaddr))))
  {
    if ((code *)unaff_R15[7] == (code *)0x0) {
      lStack_50 = 0;
      lStack_48 = 0;
      func_0x048b1dc0(&lStack_50);
      lVar9 = lStack_50;
      lVar5 = lStack_48;
      if (lStack_50 == 0) goto LAB_0ed75ca5;
LAB_0ed75c7a:
      if ((*(byte *)(lVar9 + 0x19) & 3) != 0) goto LAB_0ed75d3f;
      pcVar7 = *(code **)(lVar9 + 0x50);
      if (pcVar7 == (code *)0x0) goto LAB_0ed75cea;
LAB_0ed75ce0:
      lVar9 = (*pcVar7)(lVar5);
LAB_0ed75d06:
      lVar4 = unaff_R15[5];
      lVar8 = func_0x048b5640(lVar4);
      if (lVar5 == lVar4) {
        if (lVar9 == 0) {
          lVar9 = func_0x048aead0(lVar5);
        }
        if (*(int *)(lVar9 + 8) == *(int *)(lVar8 + 8)) goto LAB_0ed75d3f;
      }
      (*(code *)**(undefined8 **)unaff_RBX[2])();
    }
    else {
      lVar5 = unaff_R15[5];
      lVar9 = unaff_R15[6];
      if (lVar9 == 0) {
        (*(code *)unaff_R15[7])(0);
        lVar9 = unaff_R15[6];
        if (unaff_R15[6] != 0) goto LAB_0ed75c7a;
LAB_0ed75ca5:
        lVar9 = func_0x048aead0(lVar5);
        if (((*(byte *)(lVar9 + 0x19) & 1) == 0) &&
           (lVar9 = func_0x048aead0(lVar5), (*(byte *)(lVar9 + 0x19) & 2) == 0)) {
          lVar9 = func_0x048aead0(lVar5);
          if (*(long *)(lVar9 + 0x50) == 0) goto LAB_0ed75cea;
          lVar9 = func_0x048aead0(lVar5);
          pcVar7 = *(code **)(lVar9 + 0x50);
          goto LAB_0ed75ce0;
        }
      }
      else if ((*(byte *)(lVar9 + 0x19) & 3) == 0) {
        pcVar7 = *(code **)(lVar9 + 0x50);
        if (pcVar7 != (code *)0x0) goto LAB_0ed75ce0;
LAB_0ed75cea:
        lStack_50 = 0;
        lStack_48 = 0;
        func_0x048b1dc0(&lStack_50);
        lVar9 = lStack_50;
        lVar5 = lStack_48;
        goto LAB_0ed75d06;
      }
LAB_0ed75d3f:
      uStack_28 = unaff_R15[5];
      puStack_40 = &UNK_0488e0b0;
      uStack_30 = 0x48b5725f;
      pcStack_38 = (code *)0x0;
      uStack_2c = 0;
      lStack_50 = 0;
      uStack_20 = 0;
      lStack_18 = 0;
      if (((code *)unaff_R15[7] != (code *)0x0) && ((*(code *)unaff_R15[7])(0x100), lStack_18 != 0))
      {
        (*(code *)**(undefined8 **)unaff_RBX[2])((undefined8 *)unaff_RBX[2],&lStack_50,*unaff_RBX);
      }
      if (pcStack_38 != (code *)0x0) {
        (*pcStack_38)(&lStack_50);
      }
    }
  }
  lVar5 = lStack_8;
  if (*(uint *)(lStack_8 + 0x2b0) < unaff_retaddr || *(uint *)(lStack_8 + 0x2b0) == 0xffffffff) {
    return;
  }
  if ((code *)unaff_R15[7] == (code *)0x0) {
    lStack_50 = 0;
    lStack_48 = 0;
    func_0x048b1dc0(&lStack_50);
    lVar9 = lStack_50;
    lVar4 = lStack_48;
joined_r0x0ed75e40:
    if (lVar9 == 0) {
      lVar9 = func_0x048aead0(lVar4);
      iVar1 = *(int *)(lVar9 + 0x60);
      goto joined_r0x0ed75e8a;
    }
  }
  else {
    lVar9 = unaff_R15[6];
    if (lVar9 == 0) {
      lVar4 = unaff_R15[5];
      (*(code *)unaff_R15[7])(0);
      lVar9 = unaff_R15[6];
      goto joined_r0x0ed75e40;
    }
  }
  iVar1 = *(int *)(lVar9 + 0x60);
joined_r0x0ed75e8a:
  if ((iVar1 == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    if ((*(byte *)(lVar9 + 0x88) & 1) == 0) {
      if (*(byte *)(lVar9 + 0x88) >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(lVar9 + 0x90) == 0) {
      return;
    }
    func_0x0ed6bc70(lVar5,unaff_retaddr,0xffffffff,0xffff);
    uVar2 = *unaff_RBX;
    bVar13 = (*(byte *)(lVar9 + 0x88) & 1) != 0;
    uVar12 = lVar9 + 0x89;
    if (bVar13) {
      uVar12 = *(ulong *)(lVar9 + 0x98);
    }
    uVar11 = (ulong)(*(byte *)(lVar9 + 0x88) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar9 + 0x90);
    }
    if (uVar12 == 0) {
      uStack_58 = (ulong)((uint)uVar11 & 0x7f) << 0x30;
    }
    else if (uVar11 < 0x80) {
      uStack_58 = uVar11 << 0x30 | uVar12 & 0xff00ffffffffffff;
    }
    else {
      lVar5 = uVar11 + 9;
      puVar10 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar5,8);
      if (puVar10 == (ulong *)0x0 && lVar5 != 0) {
        func_0x0eec74c0(lVar5,8);
      }
      *puVar10 = uVar11;
      func_0x0eee2f00(puVar10 + 1,uVar12,uVar11);
      *(undefined1 *)((long)puVar10 + uVar11 + 8) = 0;
      uStack_58 = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(uVar2,8,&uStack_58);
    if ((uStack_58 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
    }
  }
  return;
}


