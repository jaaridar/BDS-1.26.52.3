/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb1e200
 * Label: string:virtual void cereal::internal::TypeSchema<std::optional<Shar
 * Body:  [[0eb1e200, 0eb1e24a] [0ed75bc0, 0ed75fdd]]
 * Ghidra: FUN_0eb1e200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb1e200(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long in_RAX;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  code *in_RCX;
  undefined8 *unaff_RBX;
  ulong uVar10;
  long unaff_RBP;
  ulong uVar11;
  long unaff_R15;
  bool bVar12;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  long lStack_18;
  uint uStack_10;
  undefined8 uStack_8;
  
  pcVar6 = in_RCX + -0x77;
  *pcVar6 = (code)((byte)*pcVar6 >> 7 | (char)*pcVar6 << 1);
  *(byte *)(in_RAX + -0x7b) = *(byte *)(in_RAX + -0x7b) ^ (byte)in_RCX;
  *(undefined1 *)(unaff_RBP + 0x1e) = 0;
  uStack_8 = 0xeb1e219;
  (*in_RCX)(0);
  lVar5 = *(long *)(unaff_R15 + 0x30);
  if (lVar5 == 0) {
    uStack_8 = 0xeb1e22a;
    lVar5 = func_0x048aead0();
  }
  plVar2 = (long *)**(undefined8 **)(lVar5 + 0x68);
  func_0x0ed6d600(&lStack_18,*unaff_RBX);
  (**(code **)(*plVar2 + 0x30))(plVar2);
  if ((unaff_RBX[2] != 0) &&
     ((*(uint *)(lStack_18 + 0x2b0) == 0xffffffff || (*(uint *)(lStack_18 + 0x2b0) < uStack_10)))) {
    if (*(code **)(unaff_R15 + 0x38) == (code *)0x0) {
      lStack_60 = 0;
      lStack_58 = 0;
      func_0x048b1dc0(&lStack_60);
      lVar8 = lStack_60;
      lVar5 = lStack_58;
      if (lStack_60 == 0) goto LAB_0ed75ca5;
LAB_0ed75c7a:
      if ((*(byte *)(lVar8 + 0x19) & 3) != 0) goto LAB_0ed75d3f;
      pcVar6 = *(code **)(lVar8 + 0x50);
      if (pcVar6 != (code *)0x0) goto LAB_0ed75ce0;
LAB_0ed75cea:
      lStack_60 = 0;
      lStack_58 = 0;
      func_0x048b1dc0(&lStack_60);
      lVar8 = lStack_60;
      lVar5 = lStack_58;
LAB_0ed75d06:
      lVar3 = *(long *)(unaff_R15 + 0x28);
      lVar7 = func_0x048b5640(lVar3);
      if (lVar5 == lVar3) {
        if (lVar8 == 0) {
          lVar8 = func_0x048aead0(lVar5);
        }
        if (*(int *)(lVar8 + 8) == *(int *)(lVar7 + 8)) goto LAB_0ed75d3f;
      }
      (*(code *)**(undefined8 **)unaff_RBX[2])();
    }
    else {
      lVar5 = *(long *)(unaff_R15 + 0x28);
      lVar8 = *(long *)(unaff_R15 + 0x30);
      if (lVar8 == 0) {
        (**(code **)(unaff_R15 + 0x38))(0);
        lVar8 = *(long *)(unaff_R15 + 0x30);
        if (*(long *)(unaff_R15 + 0x30) != 0) goto LAB_0ed75c7a;
LAB_0ed75ca5:
        lVar8 = func_0x048aead0(lVar5);
        if (((*(byte *)(lVar8 + 0x19) & 1) == 0) &&
           (lVar8 = func_0x048aead0(lVar5), (*(byte *)(lVar8 + 0x19) & 2) == 0)) {
          lVar8 = func_0x048aead0(lVar5);
          if (*(long *)(lVar8 + 0x50) != 0) {
            lVar8 = func_0x048aead0(lVar5);
            pcVar6 = *(code **)(lVar8 + 0x50);
            goto LAB_0ed75ce0;
          }
          goto LAB_0ed75cea;
        }
      }
      else if ((*(byte *)(lVar8 + 0x19) & 3) == 0) {
        pcVar6 = *(code **)(lVar8 + 0x50);
        if (pcVar6 == (code *)0x0) goto LAB_0ed75cea;
LAB_0ed75ce0:
        lVar8 = (*pcVar6)(lVar5);
        goto LAB_0ed75d06;
      }
LAB_0ed75d3f:
      uStack_38 = *(undefined8 *)(unaff_R15 + 0x28);
      puStack_50 = &UNK_0488e0b0;
      uStack_40 = 0x48b5725f;
      pcStack_48 = (code *)0x0;
      uStack_3c = 0;
      lStack_60 = 0;
      uStack_30 = 0;
      lStack_28 = 0;
      if ((*(code **)(unaff_R15 + 0x38) != (code *)0x0) &&
         ((**(code **)(unaff_R15 + 0x38))(0x100), lStack_28 != 0)) {
        (*(code *)**(undefined8 **)unaff_RBX[2])((undefined8 *)unaff_RBX[2],&lStack_60,*unaff_RBX);
      }
      if (pcStack_48 != (code *)0x0) {
        (*pcStack_48)(&lStack_60);
      }
    }
  }
  if (*(uint *)(lStack_18 + 0x2b0) < uStack_10 || *(uint *)(lStack_18 + 0x2b0) == 0xffffffff) {
    return;
  }
  if (*(code **)(unaff_R15 + 0x38) == (code *)0x0) {
    lStack_60 = 0;
    lStack_58 = 0;
    func_0x048b1dc0(&lStack_60);
    lVar5 = lStack_60;
    lVar8 = lStack_58;
joined_r0x0ed75e40:
    if (lVar5 == 0) {
      lVar5 = func_0x048aead0(lVar8);
      iVar1 = *(int *)(lVar5 + 0x60);
      goto joined_r0x0ed75e8a;
    }
  }
  else {
    lVar5 = *(long *)(unaff_R15 + 0x30);
    if (lVar5 == 0) {
      lVar8 = *(long *)(unaff_R15 + 0x28);
      (**(code **)(unaff_R15 + 0x38))(0);
      lVar5 = *(long *)(unaff_R15 + 0x30);
      goto joined_r0x0ed75e40;
    }
  }
  iVar1 = *(int *)(lVar5 + 0x60);
joined_r0x0ed75e8a:
  if ((iVar1 == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    if ((*(byte *)(lVar5 + 0x88) & 1) == 0) {
      if (*(byte *)(lVar5 + 0x88) >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(lVar5 + 0x90) == 0) {
      return;
    }
    func_0x0ed6bc70(lStack_18,uStack_10,0xffffffff,0xffff);
    uVar4 = *unaff_RBX;
    bVar12 = (*(byte *)(lVar5 + 0x88) & 1) != 0;
    uVar11 = lVar5 + 0x89;
    if (bVar12) {
      uVar11 = *(ulong *)(lVar5 + 0x98);
    }
    uVar10 = (ulong)(*(byte *)(lVar5 + 0x88) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar5 + 0x90);
    }
    if (uVar11 == 0) {
      uStack_68 = (ulong)((uint)uVar10 & 0x7f) << 0x30;
    }
    else if (uVar10 < 0x80) {
      uStack_68 = uVar10 << 0x30 | uVar11 & 0xff00ffffffffffff;
    }
    else {
      lVar5 = uVar10 + 9;
      puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar5,8);
      if (puVar9 == (ulong *)0x0 && lVar5 != 0) {
        func_0x0eec74c0(lVar5,8);
      }
      *puVar9 = uVar10;
      func_0x0eee2f00(puVar9 + 1,uVar11,uVar10);
      *(undefined1 *)((long)puVar9 + uVar10 + 8) = 0;
      uStack_68 = (ulong)(puVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    func_0x0ed5ffe0(uVar4,8,&uStack_68);
    if ((uStack_68 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
    }
  }
  return;
}


