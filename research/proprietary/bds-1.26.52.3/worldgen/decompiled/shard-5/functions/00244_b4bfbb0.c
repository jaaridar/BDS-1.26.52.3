/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb5bfbb0 (ELF vaddr 0xb4bfbb0)
 * Label: callee-of:0x5253d60
 * Body:  [[0b5bfbb0, 0b5bff9e]]
 * Ghidra: FUN_0b5bfbb0
 */


uint * FUN_0b5bfbb0(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puStack_e0;
  uint *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  byte bStack_80;
  byte bStack_78;
  uint auStack_70 [2];
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulong uStack_24;
  byte bStack_18;
  byte bStack_10;
  
  puVar2 = puStack_d8;
  puStack_d8 = (uint *)((ulong)puStack_d8 & 0xffffffffffffff00);
  bStack_78 = '\0';
  if (param_2[2] != 0) {
    if (param_2[2] != 1) goto LAB_0b5bfcfb;
    puStack_d8 = (uint *)((ulong)puVar2 & 0xffffffff00000000);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_d0 = (ulong)*param_2;
    bStack_80 = 1;
    bVar4 = true;
    goto LAB_0b5bfdbd;
  }
  if (*(long **)param_2 == (long *)0x0) {
LAB_0b5bfcfb:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    return param_1;
  }
  (**(code **)(**(long **)param_2 + 0x78))(auStack_70);
  if (bStack_78 == '\x01') {
    if (bStack_80 == '\x01') {
      if (uStack_8c >> 0x20 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (uStack_8c >> 0x20) * 8))(&puStack_e0,&uStack_c8);
      }
      uStack_8c = CONCAT44(0xffffffff,(undefined4)uStack_8c);
    }
    bStack_78 = '\0';
  }
  uVar1 = (ulong)puStack_d8 >> 0x20;
  puStack_d8 = (uint *)((ulong)puStack_d8 & 0xffffffffffffff00);
  bStack_80 = 0;
  if (bStack_18 == 1) {
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_d8 = (uint *)CONCAT44((int)uVar1,auStack_70[0]);
    if (auStack_70[0] != 0xffffffff) {
      if (auStack_70[0] == 7) {
        if (uStack_24 >> 0x20 == 0xffffffff) {
          uStack_8c = 0xffffffff00000000;
        }
        else {
          puStack_e0 = &uStack_c8;
          (**(code **)(&UNK_0f2be8a8 + (uStack_24 >> 0x20) * 8))(&puStack_e0,puStack_e0,&uStack_60);
        }
      }
      else {
        uStack_d0 = uStack_68;
      }
    }
    bStack_80 = 1;
    bVar4 = true;
    if ((bStack_18 & 1) == 0) goto LAB_0b5bfdbd;
LAB_0b5bfd1d:
    bStack_78 = 1;
    if (uStack_24 >> 0x20 == 0xffffffff) {
      auStack_70[0] = auStack_70[0] & 0xffffff00;
    }
    else {
      (**(code **)(&UNK_0f2be788 + (uStack_24 >> 0x20) * 8))(&puStack_e0,&uStack_60);
      auStack_70[0] = auStack_70[0] & 0xffffff00;
      bStack_10 = 0;
      if ((bStack_78 & 1) == 0) {
        bVar3 = 0;
        goto joined_r0x0b5bfe7f;
      }
    }
    bStack_18 = 0;
    if ((bStack_80 & 1) != 0) goto LAB_0b5bfddd;
  }
  else {
    bVar4 = false;
    if ((bStack_18 & 1) != 0) goto LAB_0b5bfd1d;
LAB_0b5bfdbd:
    bStack_78 = 1;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    bStack_18 = 0;
    if (bVar4) {
LAB_0b5bfddd:
      bStack_10 = 0;
      bStack_18 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      auStack_70[0] = (uint)puStack_d8;
      if ((uint)puStack_d8 != 0xffffffff) {
        if ((uint)puStack_d8 == 7) {
          if (uStack_8c >> 0x20 == 0xffffffff) {
            uStack_24 = 0xffffffff00000000;
          }
          else {
            puStack_e0 = &uStack_60;
            (**(code **)(&UNK_0f2be8a8 + (uStack_8c >> 0x20) * 8))
                      (&puStack_e0,puStack_e0,&uStack_c8);
          }
        }
        else {
          uStack_68 = uStack_d0;
        }
      }
      bStack_18 = 1;
    }
  }
  bStack_10 = 1;
  bVar3 = 1;
joined_r0x0b5bfe7f:
  if ((((bStack_78 & 1) != 0) && (bStack_80 == 1)) && (uStack_8c >> 0x20 != 0xffffffff)) {
    (**(code **)(&UNK_0f2be788 + (uStack_8c >> 0x20) * 8))(&puStack_e0,&uStack_c8);
    bVar3 = bStack_10;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (((bVar3 & 1) != 0) && (bStack_18 == 1)) {
    *param_1 = 0xffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    if ((param_1 != auStack_70) && (*param_1 = auStack_70[0], auStack_70[0] != 0xffffffff)) {
      if (auStack_70[0] == 7) {
        if (uStack_24 >> 0x20 == 0xffffffff) {
          param_1[0x14] = 0xffffffff;
        }
        else {
          puStack_d8 = param_1 + 4;
          (**(code **)(&UNK_0f2be8a8 + (uStack_24 >> 0x20) * 8))(&puStack_d8,puStack_d8,&uStack_60);
          bVar3 = bStack_10;
        }
      }
      else {
        *(ulong *)(param_1 + 2) = uStack_68;
      }
    }
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  if ((((bVar3 & 1) != 0) && (bStack_18 == 1)) && (uStack_24 >> 0x20 != 0xffffffff)) {
    (**(code **)(&UNK_0f2be788 + (uStack_24 >> 0x20) * 8))(&puStack_d8,&uStack_60);
  }
  return param_1;
}


