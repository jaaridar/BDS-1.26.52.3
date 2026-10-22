/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4108328 (ELF vaddr 0x4008328)
 * Label: callee-of:0x517ab30
 * Body:  [[04108328, 0410842d] [04108436, 04108563]]
 * Ghidra: FUN_04108328
 */


ulong FUN_04108328(char *param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int unaff_R14D;
  
  if (*param_1 != '\0') {
    return 0;
  }
  iVar4 = func_0x0eee2d30(0xf546fb8);
  if (iVar4 == 0) {
    bVar1 = param_1[1];
    if (((bVar1 & 2) != 0) &&
       (iVar4 = *(int *)(param_1 + 4), unaff_R14D = func_0x0eee2d40(0xba), iVar4 == unaff_R14D))
    goto LAB_0410841e;
    while (bVar2 = param_1[1], (bVar2 & 2) != 0) {
      param_1[1] = bVar2 | 4;
      func_0x0eee2d50(0xf546f88,0xf546fb8);
    }
    if (bVar2 != 1) {
      if ((bVar1 & 2) == 0) {
        unaff_R14D = func_0x0eee2d40(0xba);
      }
      *(int *)(param_1 + 4) = unaff_R14D;
      param_1[1] = '\x02';
    }
    iVar4 = func_0x0eee2d60(0xf546fb8);
    if (iVar4 == 0) {
      return (ulong)(bVar2 != 1);
    }
  }
  else {
    func_0x041085a0(&UNK_01239448,&UNK_013dbff8);
  }
  func_0x041085a0(&UNK_011b4e86,&UNK_013dbff8);
LAB_0410841e:
  puVar5 = (undefined1 *)func_0x041085a0(&UNK_0145bb14);
  func_0x04108570(&UNK_013dbff8);
  func_0x0eee2d70();
  *puVar5 = 1;
  iVar4 = func_0x0eee2d30(0xf546fb8);
  if (iVar4 == 0) {
    bVar1 = puVar5[1];
    puVar5[1] = 1;
    uVar6 = func_0x0eee2d60(0xf546fb8);
    if ((int)uVar6 == 0) {
      if (((bVar1 & 4) == 0) || (uVar6 = func_0x0eee2d80(0xf546f88), (int)uVar6 == 0)) {
        return uVar6;
      }
    }
    else {
      func_0x041085a0(&UNK_011b4e86,&UNK_01287bcb);
    }
    puVar9 = &UNK_014756f7;
  }
  else {
    puVar9 = &UNK_01239448;
  }
  lVar7 = func_0x041085a0(puVar9,&UNK_01287bcb);
  func_0x04882e20();
  iVar4 = func_0x0eee2d30(0xf546fb8);
  if (iVar4 == 0) {
    *(undefined4 *)(lVar7 + 4) = 0;
    bVar1 = *(byte *)(lVar7 + 1);
    *(undefined1 *)(lVar7 + 1) = 0;
    uVar6 = func_0x0eee2d60(0xf546fb8);
    if ((int)uVar6 == 0) {
      if (((bVar1 & 4) == 0) || (uVar6 = func_0x0eee2d80(0xf546f88), (int)uVar6 == 0)) {
        return uVar6;
      }
    }
    else {
      func_0x041085a0(&UNK_011b4e86,&UNK_013a8ef1);
    }
    puVar9 = &UNK_014756f7;
  }
  else {
    puVar9 = &UNK_01239448;
  }
  uVar8 = func_0x041085a0(puVar9,&UNK_013a8ef1);
  func_0x04882e20(uVar8);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}


