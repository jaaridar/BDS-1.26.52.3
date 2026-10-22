/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9d7170
 * Label: JigsawStructurePostprocessAction::vslot4
 * Body:  [[0c9d7170, 0c9d7b44] [0c9d7bcf, 0c9d7d6c]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructurePostprocessAction__vslot4
               (long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint in_EAX;
  int iVar4;
  long lVar5;
  int iVar6;
  long *unaff_RBX;
  ulong uVar7;
  undefined2 uVar8;
  short sVar9;
  long lVar10;
  uint uVar11;
  uint *unaff_R14;
  
  uVar7 = (ulong)in_EAX;
  *param_4 = *param_4 << 9 | *param_4 >> 0x17;
  uVar8 = 1;
  if ((int)&stack0x00000000 != -1) {
    uVar8 = SUB82(param_4,0);
  }
  *(undefined2 *)(uVar7 + 4) = uVar8;
  if (DAT_0f6ea5a8 == '\0') {
    *(undefined8 *)(uVar7 - 8) = 0xc9d7be1;
    iVar4 = func_0x04108328(&DAT_0f6ea5a8);
    if (iVar4 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f6ea5a0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      *(undefined8 *)(uVar7 - 8) = 0xc9d7c0c;
      func_0x0410844d(&DAT_0f6ea5a8);
    }
  }
  *(short *)(uVar7 + 6) = _DAT_0f6ea5a0;
  *(undefined8 *)(uVar7 - 8) = 0xc9d71b0;
  lVar5 = func_0x0ce66720(param_1 + 0x28,uVar7 + 6);
  if (lVar5 != 0) {
    *(undefined8 *)(uVar7 - 8) = 0xc9d71d1;
    func_0x0ce67840(lVar5 + 8);
  }
  *(ulong *)(uVar7 + 8) = CONCAT44(*(int *)(uVar7 + 0x1c) + -1,*(undefined4 *)(uVar7 + 0x18));
  *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar7 + 0x20);
  pcVar3 = *(code **)(*unaff_RBX + 0x10);
  *(undefined8 *)(uVar7 - 8) = 0xc9d71fd;
  lVar5 = (*pcVar3)();
  lVar5 = *(long *)(lVar5 + 0x68);
  if (*(long *)(lVar5 + 200) != _DAT_0f6eaec0) {
    iVar6 = *unaff_R14 - *(uint *)(uVar7 + 8);
    iVar4 = unaff_R14[1] - *(uint *)(uVar7 + 0xc);
    uVar1 = unaff_R14[2];
    uVar2 = *(uint *)(uVar7 + 0x10);
    lVar10 = CONCAT44(iVar4,iVar6);
    uVar11 = *unaff_R14 ^ *(uint *)(uVar7 + 8);
    if (uVar1 - uVar2 == -1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 8;
      }
      else if (lVar10 == 0) {
        sVar9 = 4;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d7342;
        sVar9 = 0x10;
      }
    }
    else if (uVar1 - uVar2 == 1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 0x40;
      }
      else if (lVar10 == 0) {
        sVar9 = 0x20;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d7342;
        sVar9 = 0x80;
      }
    }
    else if (iVar6 == -1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x200;
      }
      else if (iVar4 == -1) {
        sVar9 = 0x400;
      }
      else {
        sVar9 = 0x100;
LAB_0c9d733d:
        if (unaff_R14[1] != *(uint *)(uVar7 + 0xc)) goto LAB_0c9d7342;
      }
    }
    else if (iVar6 == 1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x1000;
      }
      else {
        if (iVar4 != -1) {
          sVar9 = 0x800;
          goto LAB_0c9d733d;
        }
        sVar9 = 0x2000;
      }
    }
    else {
LAB_0c9d7342:
      if (uVar1 == uVar2 && iVar6 == 0) {
        sVar9 = 1;
        if (iVar4 != -1) {
          sVar9 = (ushort)(iVar4 == 1) * 2;
        }
      }
      else {
        sVar9 = 0;
      }
    }
    *(short *)(uVar7 + 4) = sVar9;
    if (DAT_0f6ea5a8 == '\0') {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7c26;
      iVar4 = func_0x04108328(&DAT_0f6ea5a8);
      if (iVar4 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f6ea5a0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        *(undefined8 *)(uVar7 - 8) = 0xc9d7c51;
        func_0x0410844d(&DAT_0f6ea5a8);
      }
    }
    *(short *)(uVar7 + 6) = _DAT_0f6ea5a0;
    *(undefined8 *)(uVar7 - 8) = 0xc9d7391;
    lVar5 = func_0x0ce66720(lVar5 + 0x28,uVar7 + 6);
    if (lVar5 != 0) {
      *(undefined8 *)(uVar7 - 8) = 0xc9d73b2;
      func_0x0ce67840(lVar5 + 8);
    }
  }
  *(ulong *)(uVar7 + 8) = CONCAT44(*(int *)(uVar7 + 0x4c) + 1,*(undefined4 *)(uVar7 + 0x48));
  *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar7 + 0x50);
  pcVar3 = *(code **)(*unaff_RBX + 0x10);
  *(undefined8 *)(uVar7 - 8) = 0xc9d73de;
  lVar5 = (*pcVar3)();
  lVar5 = *(long *)(lVar5 + 0x68);
  if (*(long *)(lVar5 + 200) != _DAT_0f6eaec0) {
    iVar6 = *unaff_R14 - *(uint *)(uVar7 + 8);
    iVar4 = unaff_R14[1] - *(uint *)(uVar7 + 0xc);
    uVar1 = unaff_R14[2];
    uVar2 = *(uint *)(uVar7 + 0x10);
    lVar10 = CONCAT44(iVar4,iVar6);
    uVar11 = *unaff_R14 ^ *(uint *)(uVar7 + 8);
    if (uVar1 - uVar2 == -1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 8;
      }
      else if (lVar10 == 0) {
        sVar9 = 4;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d7523;
        sVar9 = 0x10;
      }
    }
    else if (uVar1 - uVar2 == 1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 0x40;
      }
      else if (lVar10 == 0) {
        sVar9 = 0x20;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d7523;
        sVar9 = 0x80;
      }
    }
    else if (iVar6 == -1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x200;
      }
      else if (iVar4 == -1) {
        sVar9 = 0x400;
      }
      else {
        sVar9 = 0x100;
LAB_0c9d751e:
        if (unaff_R14[1] != *(uint *)(uVar7 + 0xc)) goto LAB_0c9d7523;
      }
    }
    else if (iVar6 == 1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x1000;
      }
      else {
        if (iVar4 != -1) {
          sVar9 = 0x800;
          goto LAB_0c9d751e;
        }
        sVar9 = 0x2000;
      }
    }
    else {
LAB_0c9d7523:
      if (uVar1 == uVar2 && iVar6 == 0) {
        sVar9 = 1;
        if (iVar4 != -1) {
          sVar9 = (ushort)(iVar4 == 1) * 2;
        }
      }
      else {
        sVar9 = 0;
      }
    }
    *(short *)(uVar7 + 4) = sVar9;
    if (DAT_0f6ea5a8 == '\0') {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7c6b;
      iVar4 = func_0x04108328(&DAT_0f6ea5a8);
      if (iVar4 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f6ea5a0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        *(undefined8 *)(uVar7 - 8) = 0xc9d7c96;
        func_0x0410844d(&DAT_0f6ea5a8);
      }
    }
    *(short *)(uVar7 + 6) = _DAT_0f6ea5a0;
    *(undefined8 *)(uVar7 - 8) = 0xc9d7572;
    lVar5 = func_0x0ce66720(lVar5 + 0x28,uVar7 + 6);
    if (lVar5 != 0) {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7593;
      func_0x0ce67840(lVar5 + 8);
    }
  }
  *(ulong *)(uVar7 + 8) = CONCAT44(*(int *)(uVar7 + 0x3c) + 1,*(undefined4 *)(uVar7 + 0x38));
  *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar7 + 0x40);
  pcVar3 = *(code **)(*unaff_RBX + 0x10);
  *(undefined8 *)(uVar7 - 8) = 0xc9d75bf;
  lVar5 = (*pcVar3)();
  lVar5 = *(long *)(lVar5 + 0x68);
  if (*(long *)(lVar5 + 200) != _DAT_0f6eaec0) {
    iVar6 = *unaff_R14 - *(uint *)(uVar7 + 8);
    iVar4 = unaff_R14[1] - *(uint *)(uVar7 + 0xc);
    uVar1 = unaff_R14[2];
    uVar2 = *(uint *)(uVar7 + 0x10);
    lVar10 = CONCAT44(iVar4,iVar6);
    uVar11 = *unaff_R14 ^ *(uint *)(uVar7 + 8);
    if (uVar1 - uVar2 == -1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 8;
      }
      else if (lVar10 == 0) {
        sVar9 = 4;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d7704;
        sVar9 = 0x10;
      }
    }
    else if (uVar1 - uVar2 == 1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 0x40;
      }
      else if (lVar10 == 0) {
        sVar9 = 0x20;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d7704;
        sVar9 = 0x80;
      }
    }
    else if (iVar6 == -1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x200;
      }
      else if (iVar4 == -1) {
        sVar9 = 0x400;
      }
      else {
        sVar9 = 0x100;
LAB_0c9d76ff:
        if (unaff_R14[1] != *(uint *)(uVar7 + 0xc)) goto LAB_0c9d7704;
      }
    }
    else if (iVar6 == 1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x1000;
      }
      else {
        if (iVar4 != -1) {
          sVar9 = 0x800;
          goto LAB_0c9d76ff;
        }
        sVar9 = 0x2000;
      }
    }
    else {
LAB_0c9d7704:
      if (uVar1 == uVar2 && iVar6 == 0) {
        sVar9 = 1;
        if (iVar4 != -1) {
          sVar9 = (ushort)(iVar4 == 1) * 2;
        }
      }
      else {
        sVar9 = 0;
      }
    }
    *(short *)(uVar7 + 4) = sVar9;
    if (DAT_0f6ea5a8 == '\0') {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7cb0;
      iVar4 = func_0x04108328(&DAT_0f6ea5a8);
      if (iVar4 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f6ea5a0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        *(undefined8 *)(uVar7 - 8) = 0xc9d7cdb;
        func_0x0410844d(&DAT_0f6ea5a8);
      }
    }
    *(short *)(uVar7 + 6) = _DAT_0f6ea5a0;
    *(undefined8 *)(uVar7 - 8) = 0xc9d7753;
    lVar5 = func_0x0ce66720(lVar5 + 0x28,uVar7 + 6);
    if (lVar5 != 0) {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7774;
      func_0x0ce67840(lVar5 + 8);
    }
  }
  *(ulong *)(uVar7 + 8) = CONCAT44(*(int *)(uVar7 + 0x2c) + 1,*(undefined4 *)(uVar7 + 0x28));
  *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar7 + 0x30);
  pcVar3 = *(code **)(*unaff_RBX + 0x10);
  *(undefined8 *)(uVar7 - 8) = 0xc9d77a0;
  lVar5 = (*pcVar3)();
  lVar5 = *(long *)(lVar5 + 0x68);
  if (*(long *)(lVar5 + 200) != _DAT_0f6eaec0) {
    iVar6 = *unaff_R14 - *(uint *)(uVar7 + 8);
    iVar4 = unaff_R14[1] - *(uint *)(uVar7 + 0xc);
    uVar1 = unaff_R14[2];
    uVar2 = *(uint *)(uVar7 + 0x10);
    lVar10 = CONCAT44(iVar4,iVar6);
    uVar11 = *unaff_R14 ^ *(uint *)(uVar7 + 8);
    if (uVar1 - uVar2 == -1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 8;
      }
      else if (lVar10 == 0) {
        sVar9 = 4;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d78e5;
        sVar9 = 0x10;
      }
    }
    else if (uVar1 - uVar2 == 1 && uVar11 == 0) {
      if (lVar10 == 0x100000000) {
        sVar9 = 0x40;
      }
      else if (lVar10 == 0) {
        sVar9 = 0x20;
      }
      else {
        if (lVar10 != -0x100000000) goto LAB_0c9d78e5;
        sVar9 = 0x80;
      }
    }
    else if (iVar6 == -1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x200;
      }
      else if (iVar4 == -1) {
        sVar9 = 0x400;
      }
      else {
        sVar9 = 0x100;
LAB_0c9d78e0:
        if (unaff_R14[1] != *(uint *)(uVar7 + 0xc)) goto LAB_0c9d78e5;
      }
    }
    else if (iVar6 == 1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x1000;
      }
      else {
        if (iVar4 != -1) {
          sVar9 = 0x800;
          goto LAB_0c9d78e0;
        }
        sVar9 = 0x2000;
      }
    }
    else {
LAB_0c9d78e5:
      if (uVar1 == uVar2 && iVar6 == 0) {
        sVar9 = 1;
        if (iVar4 != -1) {
          sVar9 = (ushort)(iVar4 == 1) * 2;
        }
      }
      else {
        sVar9 = 0;
      }
    }
    *(short *)(uVar7 + 4) = sVar9;
    if (DAT_0f6ea5a8 == '\0') {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7cf5;
      iVar4 = func_0x04108328(&DAT_0f6ea5a8);
      if (iVar4 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f6ea5a0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        *(undefined8 *)(uVar7 - 8) = 0xc9d7d20;
        func_0x0410844d(&DAT_0f6ea5a8);
      }
    }
    *(short *)(uVar7 + 6) = _DAT_0f6ea5a0;
    *(undefined8 *)(uVar7 - 8) = 0xc9d7934;
    lVar5 = func_0x0ce66720(lVar5 + 0x28,uVar7 + 6);
    if (lVar5 != 0) {
      *(undefined8 *)(uVar7 - 8) = 0xc9d7955;
      func_0x0ce67840(lVar5 + 8);
    }
  }
  *(ulong *)(uVar7 + 8) = CONCAT44(*(int *)(uVar7 + 0x1c) + 1,*(undefined4 *)(uVar7 + 0x18));
  *(undefined4 *)(uVar7 + 0x10) = *(undefined4 *)(uVar7 + 0x20);
  pcVar3 = *(code **)(*unaff_RBX + 0x10);
  *(undefined8 *)(uVar7 - 8) = 0xc9d7981;
  lVar5 = (*pcVar3)();
  lVar5 = *(long *)(lVar5 + 0x68);
  if (*(long *)(lVar5 + 200) == _DAT_0f6eaec0) {
    return;
  }
  iVar6 = *unaff_R14 - *(uint *)(uVar7 + 8);
  iVar4 = unaff_R14[1] - *(uint *)(uVar7 + 0xc);
  uVar1 = unaff_R14[2];
  uVar2 = *(uint *)(uVar7 + 0x10);
  lVar10 = CONCAT44(iVar4,iVar6);
  uVar11 = *unaff_R14 ^ *(uint *)(uVar7 + 8);
  if (uVar1 - uVar2 == -1 && uVar11 == 0) {
    if (lVar10 == 0x100000000) {
      sVar9 = 8;
      goto LAB_0c9d7ae6;
    }
    if (lVar10 == 0) {
      sVar9 = 4;
      goto LAB_0c9d7ae6;
    }
    if (lVar10 == -0x100000000) {
      sVar9 = 0x10;
      goto LAB_0c9d7ae6;
    }
  }
  else if (uVar1 - uVar2 == 1 && uVar11 == 0) {
    if (lVar10 == 0x100000000) {
      sVar9 = 0x40;
      goto LAB_0c9d7ae6;
    }
    if (lVar10 == 0) {
      sVar9 = 0x20;
      goto LAB_0c9d7ae6;
    }
    if (lVar10 == -0x100000000) {
      sVar9 = 0x80;
      goto LAB_0c9d7ae6;
    }
  }
  else {
    if (iVar6 == -1 && (uVar1 ^ uVar2) == 0) {
      if (iVar4 == 1) {
        sVar9 = 0x200;
        goto LAB_0c9d7ae6;
      }
      if (iVar4 == -1) {
        sVar9 = 0x400;
        goto LAB_0c9d7ae6;
      }
      sVar9 = 0x100;
    }
    else {
      if (iVar6 != 1 || (uVar1 ^ uVar2) != 0) goto LAB_0c9d7ac6;
      if (iVar4 == 1) {
        sVar9 = 0x1000;
        goto LAB_0c9d7ae6;
      }
      if (iVar4 == -1) {
        sVar9 = 0x2000;
        goto LAB_0c9d7ae6;
      }
      sVar9 = 0x800;
    }
    if (unaff_R14[1] == *(uint *)(uVar7 + 0xc)) goto LAB_0c9d7ae6;
  }
LAB_0c9d7ac6:
  if (uVar1 == uVar2 && iVar6 == 0) {
    sVar9 = 1;
    if (iVar4 != -1) {
      sVar9 = (ushort)(iVar4 == 1) * 2;
    }
  }
  else {
    sVar9 = 0;
  }
LAB_0c9d7ae6:
  *(short *)(uVar7 + 4) = sVar9;
  if (DAT_0f6ea5a8 == '\0') {
    *(undefined8 *)(uVar7 - 8) = 0xc9d7d3a;
    iVar4 = func_0x04108328(&DAT_0f6ea5a8);
    if (iVar4 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f6ea5a0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      *(undefined8 *)(uVar7 - 8) = 0xc9d7d65;
      func_0x0410844d(&DAT_0f6ea5a8);
    }
  }
  *(short *)(uVar7 + 6) = _DAT_0f6ea5a0;
  *(undefined8 *)(uVar7 - 8) = 0xc9d7b15;
  lVar5 = func_0x0ce66720(lVar5 + 0x28,uVar7 + 6);
  if (lVar5 != 0) {
    *(undefined8 *)(uVar7 - 8) = 0xc9d7b36;
    func_0x0ce67840(lVar5 + 8);
  }
  return;
}


