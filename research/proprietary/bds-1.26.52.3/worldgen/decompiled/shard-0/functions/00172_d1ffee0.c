/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ffee0 (ELF vaddr 0xd1ffee0)
 * Label: caller-of-seed
 * Body:  [[0d2ffee0, 0d300204] [0d300210, 0d3002b5]]
 * Ghidra: FUN_0d2ffee0
 */


undefined8 * FUN_0d2ffee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  undefined1 uStack_31;
  undefined8 *puStack_30;
  
  func_0x0eee2dd0(param_1 + 1,0,0x130);
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &UNK_0f4604f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = &UNK_0f45f520;
  param_1[0x1e] = &UNK_0f460518;
  param_1[0x20] = &UNK_0d2d5840;
  param_1[0x24] = 0x7fffffff00000050;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x12f) = 0;
  uVar3 = *(undefined1 *)(param_2 + 1);
  param_1[7] = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar6;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = uVar3;
  uVar6 = param_2[4];
  uVar8 = *(undefined4 *)((long)param_2 + 0x14);
  uVar9 = *(undefined4 *)(param_2 + 3);
  uVar10 = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar9;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
  param_1[4] = uVar6;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    func_0x0d31f650(param_1 + 8,param_2[10],0);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    puVar1 = param_1 + 0xf;
    bVar4 = *(byte *)(param_2 + 0xf);
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        param_1[0x11] = param_2[0x11];
        uVar8 = *(undefined4 *)((long)param_2 + 0x7c);
        uVar9 = *(undefined4 *)(param_2 + 0x10);
        uVar10 = *(undefined4 *)((long)param_2 + 0x84);
        *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0xf);
        *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
        *(undefined4 *)(param_1 + 0x10) = uVar9;
        *(undefined4 *)((long)param_1 + 0x84) = uVar10;
      }
      else {
        func_0x04885070(puVar1,param_2[0x11],param_2[0x10]);
      }
    }
    else {
      bVar16 = (bVar4 & 1) != 0;
      lVar13 = (long)param_2 + 0x79;
      if (bVar16) {
        lVar13 = param_2[0x11];
      }
      uVar12 = (ulong)(bVar4 >> 1);
      if (bVar16) {
        uVar12 = param_2[0x10];
      }
      func_0x04885120(puVar1,lVar13,uVar12);
    }
  }
  param_1[0xe] = param_2[0xe];
  param_1[0x12] = 0;
  if ((*(byte *)(param_2 + 0x16) & 1) == 0) {
    if (*(byte *)(param_2 + 0x16) >> 1 == 0) goto LAB_0d30009a;
  }
  else if (param_2[0x17] == 0) {
LAB_0d30009a:
    func_0x0b625250(1,3,0x1f,&UNK_0129cbe2);
  }
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    func_0x0412a280(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
  }
  param_1[0x18] = param_2[0x1b];
  uVar6 = param_2[0x1a];
  param_1[0x16] = param_2[0x19];
  param_1[0x17] = uVar6;
  *(undefined2 *)(param_2 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0x131) = *(undefined1 *)(param_2 + 0x27);
  cVar11 = '\x01';
  if ('\x01' < (char)*(undefined4 *)(param_2 + 0x13)) {
    cVar11 = (char)*(undefined4 *)(param_2 + 0x13);
  }
  *(char *)(param_1 + 0x1c) = cVar11;
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  uVar9 = *(undefined4 *)((long)param_2 + 0xa4);
  uVar10 = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x9c);
  *(undefined4 *)((long)param_1 + 0x124) = uVar8;
  *(undefined4 *)(param_1 + 0x25) = uVar9;
  *(undefined4 *)((long)param_1 + 300) = uVar10;
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x23);
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    func_0x0412a280(param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe);
  }
  param_1[0x1b] = param_2[0x18];
  uVar8 = *(undefined4 *)((long)param_2 + 0xb4);
  uVar9 = *(undefined4 *)(param_2 + 0x17);
  uVar10 = *(undefined4 *)((long)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((long)param_1 + 0xcc) = uVar8;
  *(undefined4 *)(param_1 + 0x1a) = uVar9;
  *(undefined4 *)((long)param_1 + 0xd4) = uVar10;
  *(undefined2 *)(param_2 + 0x16) = 0;
  uVar5 = *(uint *)(param_2 + 0x22);
  if ((ulong)*(uint *)(param_1 + 0x23) == 0xffffffff) {
    if (uVar5 == 0xffffffff) goto LAB_0d3001e8;
  }
  else if (uVar5 == 0xffffffff) {
    (**(code **)(&UNK_0f45ed90 + (ulong)*(uint *)(param_1 + 0x23) * 8))(&uStack_31);
    *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
    goto LAB_0d3001e8;
  }
  puStack_30 = param_1 + 0x1e;
  (**(code **)(&UNK_0f45ee68 + (ulong)uVar5 * 8))(&puStack_30,param_1 + 0x1e,param_2 + 0x1d);
LAB_0d3001e8:
  lVar13 = param_1[0x13];
  if (lVar13 != 0) {
    lVar15 = param_1[0x14];
    lVar14 = lVar13;
    if (lVar13 != lVar15) {
      do {
        plVar7 = *(long **)(lVar15 + -8);
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar14 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            func_0x0412c2d0(plVar7);
          }
        }
        lVar15 = lVar15 + -0x10;
      } while (lVar15 != lVar13);
      lVar14 = param_1[0x13];
    }
    param_1[0x14] = lVar13;
    func_0x0412a280(lVar14,param_1[0x15] - lVar14);
  }
  uVar6 = param_2[0x25];
  param_1[0x13] = param_2[0x24];
  param_1[0x14] = uVar6;
  param_1[0x15] = param_2[0x26];
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = *(undefined1 *)((long)param_2 + 0x139);
  return param_1;
}


