/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee852a0 (ELF vaddr 0xed852a0)
 * Label: caller-of-callee
 * Body:  [[0ee852a0, 0ee85395] [0ee853a0, 0ee8596b] [0ee859ed, 0ee859f6] [0ee85a22, 0ee85a59]]
 * Ghidra: FUN_0ee852a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0ee852a0(long param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  bool bVar14;
  undefined4 uStack_10e8;
  undefined4 uStack_10e4;
  undefined4 uStack_10e0;
  undefined4 uStack_10dc;
  long lStack_10d8;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  long lStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  long lStack_10a0;
  undefined4 uStack_1098;
  undefined4 uStack_1094;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  long lStack_1088;
  long lStack_1080;
  undefined4 uStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined8 uStack_1050;
  ulong uStack_1048;
  long lStack_1040;
  ulong uStack_1038;
  byte bStack_1010;
  ulong auStack_c58 [3];
  undefined *apuStack_c40 [2];
  undefined4 uStack_c30;
  ulong uStack_848;
  undefined1 auStack_840 [1024];
  long lStack_440;
  char acStack_438 [1024];
  long lStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0;
    goto LAB_0ee858b5;
  }
  memset(acStack_438,0,0x408);
  if ((DAT_0f7b8fb8 == '\0') && (iVar2 = FUN_04108328(&DAT_0f7b8fb8), iVar2 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_1068 = *param_2;
  uStack_1064 = param_2[1];
  uStack_1060 = param_2[2];
  uStack_105c = param_2[3];
  pcVar10 = acStack_438;
  (**(code **)(_DAT_0f7b8f98 + 0x180))(&uStack_1050,&DAT_0f7b8f98,pcVar10,&uStack_1068);
  auStack_c58[2] = 0xb9e005c73cd931bd;
  apuStack_c40[0] = &UNK_0140f690;
  apuStack_c40[1] = (undefined *)0x1;
  uStack_c30 = 0x19b;
  if (bStack_1010 == 0) {
    uStack_10c8 = 0;
    uStack_10c0 = 0;
    lStack_10b8 = 0;
    func_0x0eedeb80(0x100000008,0x2d,&uStack_1050,&uStack_10c8,auStack_c58 + 2);
    if ((uStack_10c8 & 1) != 0) {
      func_0x0412a280(lStack_10b8,uStack_10c8 & 0xfffffffffffffffe);
    }
    if ((bStack_1010 & 1) == 0) goto LAB_0ee854b0;
LAB_0ee85370:
    lVar4 = lStack_38;
    if (lStack_38 != 0) goto LAB_0ee85381;
LAB_0ee854ce:
    uVar3 = 0;
LAB_0ee854d0:
    uStack_848 = uVar3;
  }
  else {
    if ((bStack_1010 & 1) != 0) goto LAB_0ee85370;
LAB_0ee854b0:
    func_0x048e6d60(&uStack_1050);
    lVar4 = lStack_38;
    if (lStack_38 == 0) goto LAB_0ee854ce;
LAB_0ee85381:
    uVar3 = 0;
    lVar7 = lVar4;
    pcVar11 = pcVar10;
    pcVar13 = pcVar10;
    do {
      if (((*pcVar11 == '\\') || (*pcVar11 == '/')) &&
         (uVar3 < 0x40 && 0 < (long)(pcVar10 + -(long)pcVar13))) {
        apuStack_c40[uVar3 * 2 + -1] = pcVar13;
        apuStack_c40[uVar3 * 2] = pcVar10 + -(long)pcVar13;
        uVar3 = uVar3 + 1;
        pcVar13 = pcVar11 + (lVar7 != 0);
      }
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uStack_848 = uVar3;
    if (uVar3 < 0x40 && 0 < (long)(acStack_438 + (lVar4 - (long)pcVar13))) {
      apuStack_c40[uVar3 * 2 + -1] = pcVar13;
      apuStack_c40[uVar3 * 2] = acStack_438 + (lVar4 - (long)pcVar13);
      uVar3 = uVar3 + 1;
      goto LAB_0ee854d0;
    }
  }
  uVar12 = auStack_c58[uVar3 * 2 + 1];
  uStack_848 = uVar3;
  if (0xfffffffffffffff7 < uVar12) {
    func_0x04882e30();
    goto LAB_0ee85948;
  }
  uVar3 = auStack_c58[uVar3 * 2];
  if (uVar12 < 0x17) {
    uStack_10b0 = CONCAT71(uStack_10b0._1_7_,(char)uVar12 * '\x02');
    lVar4 = (long)&uStack_10b0 + 1;
    if (uVar12 != 0) goto LAB_0ee8555b;
  }
  else {
    uVar8 = 0x1a;
    if ((uVar12 | 7) != 0x17) {
      uVar8 = (uVar12 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
    if (lVar4 == 0) {
      func_0x0eec74c0(uVar8,0);
    }
    uStack_10b0 = uVar8 | 1;
    uStack_10a8 = uVar12;
    lStack_10a0 = lVar4;
LAB_0ee8555b:
    memmove(lVar4,uVar3,uVar12);
  }
  *(undefined1 *)(lVar4 + uVar12) = 0;
  uStack_1078 = *param_2;
  uStack_1074 = param_2[1];
  uStack_1070 = param_2[2];
  uStack_106c = param_2[3];
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar5 = uStack_1078;
  puVar5[1] = uStack_1074;
  puVar5[2] = uStack_1070;
  puVar5[3] = uStack_106c;
  lStack_1080 = param_1;
  if ((uStack_10b0 & 1) == 0) {
    lStack_1088 = lStack_10a0;
    uStack_1098 = (uint)uStack_10b0;
    uStack_1094 = uStack_10b0._4_4_;
    uStack_1090 = (undefined4)uStack_10a8;
    uStack_108c = uStack_10a8._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_1098,lStack_10a0,uStack_10a8);
  }
  memset(auStack_840,0,0x400);
  lVar4 = _DAT_0f7b9450;
  lVar7 = _DAT_0f7b9450 + 1;
  if (lVar7 != 0) {
    func_0x0eee2f00(auStack_840,0xf7b9050,lVar7);
  }
  lStack_440 = lVar4;
  func_0x08bb7140(&uStack_10c8,puVar5,1,0x2f);
  uStack_1050 = (long)&uStack_10c8 + 1;
  uStack_1048 = uStack_10c8 >> 1 & 0x7f;
  if ((uStack_10c8 & 1) != 0) {
    uStack_1048 = uStack_10c0;
    uStack_1050 = lStack_10b8;
  }
  bVar14 = (uStack_1098 & 1) != 0;
  lStack_1040 = (long)&uStack_1098 + 1;
  if (bVar14) {
    lStack_1040 = lStack_1088;
  }
  uStack_1038 = (ulong)((byte)uStack_1098 >> 1);
  if (bVar14) {
    uStack_1038 = CONCAT44(uStack_108c,uStack_1090);
  }
  func_0x048ad670(&uStack_10e8,&uStack_1050,2,0x2f);
  if ((uStack_10c8 & 1) != 0) {
    func_0x0412a280(lStack_10b8,uStack_10c8 & 0xfffffffffffffffe);
  }
  bVar14 = (uStack_10e8 & 1) == 0;
  lVar9 = lStack_10d8;
  if (bVar14) {
    lVar9 = (long)&uStack_10e8 + 1;
  }
  uVar3 = (ulong)((byte)uStack_10e8 >> 1);
  if (!bVar14) {
    uVar3 = CONCAT44(uStack_10dc,uStack_10e0);
  }
  memset(&uStack_1050,0,0x400);
  if (lVar7 != 0) {
    func_0x0eee2f00(&uStack_1050,auStack_840,lVar7);
  }
  auStack_c58[1] = lVar4;
  func_0x0eeac7e0(&uStack_10c8,lVar9,uVar3,&uStack_1050);
  lVar4 = lStack_1080;
  if ((uStack_10e8 & 1) != 0) {
    func_0x0412a280(lStack_10d8,CONCAT44(uStack_10e4,uStack_10e8) & 0xfffffffffffffffe);
  }
  lStack_10d8 = lStack_10b8;
  uStack_10e8 = (uint)uStack_10c8;
  uStack_10e4 = uStack_10c8._4_4_;
  uStack_10e0 = (undefined4)uStack_10c0;
  uStack_10dc = uStack_10c0._4_4_;
  if ((uStack_1098 & 1) != 0) {
    func_0x0412a280(lStack_1088,CONCAT44(uStack_1094,uStack_1098) & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar5,0x10);
  param_2 = *(undefined4 **)(lVar4 + 8);
  lVar4 = (long)&uStack_10e8 + 1;
  if ((uStack_10e8 & 1) != 0) {
    lVar4 = lStack_10d8;
  }
  func_0x0412d680(param_2);
  uVar3 = func_0x0eee2e90(lVar4);
  if (0xfffffffffffffff7 < uVar3) {
LAB_0ee85948:
    uVar6 = func_0x04882e30();
    func_0x041084d6(&DAT_0f7b8fb8);
    uVar6 = func_0x0eee2d70(uVar6);
    func_0x0412a280(param_2,0x10);
    if ((uStack_10b0 & 1) == 0) {
      func_0x0eee2d70(uVar6);
    }
    func_0x0412a280(lStack_10a0,uStack_10b0 & 0xfffffffffffffffe);
    uVar6 = func_0x0eee2d70(uVar6);
    func_0x0eee2d70(uVar6);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (uVar3 < 0x17) {
    uStack_1050 = CONCAT71(uStack_1050._1_7_,(char)uVar3 * '\x02');
    lVar7 = (long)&uStack_1050 + 1;
    if (uVar3 != 0) goto LAB_0ee85827;
  }
  else {
    uVar12 = 0x1a;
    if ((uVar3 | 7) != 0x17) {
      uVar12 = (uVar3 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
    if (lVar7 == 0) {
      func_0x0eec74c0(uVar12,0);
    }
    uStack_1050 = uVar12 | 1;
    uStack_1048 = uVar3;
    lStack_1040 = lVar7;
LAB_0ee85827:
    memmove(lVar7,lVar4,uVar3);
  }
  *(undefined1 *)(lVar7 + uVar3) = 0;
  puVar5 = (undefined4 *)func_0x0633d4e0(param_2 + 0x14,&uStack_1050);
  if ((uStack_1050 & 1) != 0) {
    func_0x0412a280(lStack_1040,uStack_1050 & 0xfffffffffffffffe);
  }
  uVar3 = CONCAT71((int7)((ulong)puVar5 >> 8),puVar5 != param_2 + 0x16);
  func_0x0412d6b0(param_2);
  if ((uStack_10e8 & 1) != 0) {
    func_0x0412a280(lStack_10d8,CONCAT44(uStack_10e4,uStack_10e8) & 0xfffffffffffffffe);
  }
  if ((uStack_10b0 & 1) != 0) {
    func_0x0412a280(lStack_10a0,uStack_10b0 & 0xfffffffffffffffe);
  }
LAB_0ee858b5:
  return uVar3 & 0xffffffff;
}


