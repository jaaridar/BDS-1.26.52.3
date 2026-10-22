/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3aa4e0 (ELF vaddr 0xd2aa4e0)
 * Label: caller-of-callee
 * Body:  [[0d3aa4e0, 0d3aa5cd] [0d3aa5d0, 0d3aab76]]
 * Ghidra: FUN_0d3aa4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d3aa4e0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  byte *unaff_R15;
  bool bVar13;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  long lStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  long lStack_120;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  undefined1 auStack_c8 [152];
  
  func_0x04a3b850(&lStack_138);
  uVar5 = func_0x048648e0(param_1,&UNK_01283713);
  cVar3 = func_0x04864270(uVar5);
  if (cVar3 == '\0') {
    uVar9 = 0;
    goto LAB_0d3aaaaa;
  }
  uVar6 = func_0x048648e0(param_1,&UNK_01482257);
  uStack_170 = uStack_170 & 0xffffffffffff0000;
  func_0x04863cb0(&uStack_198,uVar6,&uStack_170);
  bVar13 = (uStack_198 & 1) == 0;
  lVar10 = CONCAT44(uStack_184,uStack_188);
  if (bVar13) {
    lVar10 = (long)&uStack_198 + 1;
  }
  uVar9 = uStack_198 >> 1 & 0x7f;
  if (!bVar13) {
    uVar9 = CONCAT44(uStack_18c,uStack_190);
  }
  func_0x04885260(&lStack_138,lVar10,uVar9);
  if ((uStack_198 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_184,uStack_188),uStack_198 & 0xfffffffffffffffe);
  }
  if ((uStack_170 & 1) != 0) {
    func_0x0412a280(pbStack_160,uStack_170 & 0xfffffffffffffffe);
  }
  func_0x04865530(auStack_148,uVar5);
  func_0x048655b0(auStack_158,uVar5);
  plVar11 = &lStack_138;
  while (cVar3 = func_0x04862c80(auStack_148,auStack_158), cVar3 == '\0') {
    unaff_R15 = (byte *)func_0x04862b80(auStack_148);
    cVar3 = func_0x04864290(unaff_R15);
    if (cVar3 != '\0') {
      cVar3 = func_0x04865100(unaff_R15,&UNK_01488ede);
      if (cVar3 != '\0') {
        uStack_198 = CONCAT71(uStack_198._1_7_,0x2c);
        uVar5 = func_0x04885260(plVar11,&uStack_198,1);
        uVar6 = func_0x048648e0(unaff_R15,&UNK_01488ede);
        uStack_170 = uStack_170 & 0xffffffffffff0000;
        func_0x04863cb0(&uStack_198,uVar6,&uStack_170);
        bVar13 = (uStack_198 & 1) == 0;
        lVar10 = CONCAT44(uStack_184,uStack_188);
        if (bVar13) {
          lVar10 = (long)&uStack_198 + 1;
        }
        uVar9 = uStack_198 >> 1 & 0x7f;
        if (!bVar13) {
          uVar9 = CONCAT44(uStack_18c,uStack_190);
        }
        func_0x04885260(uVar5,lVar10,uVar9);
        if ((uStack_198 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_184,uStack_188),uStack_198 & 0xfffffffffffffffe);
        }
        if ((uStack_170 & 1) != 0) {
          func_0x0412a280(pbStack_160,uStack_170 & 0xfffffffffffffffe);
        }
      }
      cVar3 = func_0x04865100(unaff_R15,&UNK_014daf09);
      if (cVar3 != '\0') {
        uStack_198 = CONCAT71(uStack_198._1_7_,0x2c);
        uVar5 = func_0x04885260(plVar11,&uStack_198,1);
        uVar6 = func_0x048648e0(unaff_R15,&UNK_014daf09);
        uVar4 = func_0x04863e00(uVar6,0);
        func_0x04134310(&uStack_198,uVar4);
        bVar13 = (uStack_198 & 1) == 0;
        lVar10 = CONCAT44(uStack_184,uStack_188);
        if (bVar13) {
          lVar10 = (long)&uStack_198 + 1;
        }
        uVar9 = uStack_198 >> 1 & 0x7f;
        if (!bVar13) {
          uVar9 = CONCAT44(uStack_18c,uStack_190);
        }
        func_0x04885260(uVar5,lVar10,uVar9);
        if ((uStack_198 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_184,uStack_188),uStack_198 & 0xfffffffffffffffe);
        }
      }
      cVar3 = func_0x04865100(unaff_R15,&UNK_0131d861);
      if (cVar3 != '\0') {
        uStack_198 = CONCAT71(uStack_198._1_7_,0x2c);
        uVar5 = func_0x04885260(plVar11,&uStack_198,1);
        uVar6 = func_0x048648e0(unaff_R15,&UNK_0131d861);
        uVar4 = func_0x04863e00(uVar6,0);
        func_0x04134310(&uStack_198,uVar4);
        bVar13 = (uStack_198 & 1) == 0;
        lVar10 = CONCAT44(uStack_184,uStack_188);
        if (bVar13) {
          lVar10 = (long)&uStack_198 + 1;
        }
        uVar9 = uStack_198 >> 1 & 0x7f;
        if (!bVar13) {
          uVar9 = CONCAT44(uStack_18c,uStack_190);
        }
        func_0x04885260(uVar5,lVar10,uVar9);
        if ((uStack_198 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_184,uStack_188),uStack_198 & 0xfffffffffffffffe);
        }
      }
      cVar3 = func_0x04865100(unaff_R15,&UNK_011d1a34);
      uVar4 = 1;
      if (cVar3 != '\0') {
        uVar5 = func_0x048648e0(unaff_R15,&UNK_011d1a34);
        uVar4 = func_0x04863e00(uVar5,0);
      }
      uVar5 = func_0x04885260(plVar11,&UNK_012a0ff5,1);
      func_0x0413b570(uVar5,uVar4);
    }
    func_0x04862ba0(auStack_148);
  }
  func_0x04862b40(auStack_158);
  func_0x04862b40(auStack_148);
  if ((uStack_d0 & 0x10) == 0) {
    if ((uStack_d0 & 8) != 0) {
      uVar9 = lStack_110 - lStack_120;
      lVar10 = lStack_120;
      if (uVar9 < 0xfffffffffffffff8) goto LAB_0d3aa891;
LAB_0d3aab63:
      func_0x04882e30();
LAB_0d3aab68:
      func_0x0eec74c0(plVar11,0);
LAB_0d3aa8e5:
      uStack_170 = (ulong)plVar11 | 1;
      uStack_168 = uVar9;
      pbStack_160 = unaff_R15;
      goto LAB_0d3aa8f8;
    }
    uStack_170 = (ulong)uStack_170._1_7_ << 8;
    unaff_R15 = (byte *)((long)&uStack_170 + 1);
    uVar9 = 0;
  }
  else {
    if (uStack_d8 < uStack_100) {
      uStack_d8 = uStack_100;
    }
    uVar9 = uStack_d8 - lStack_108;
    lVar10 = lStack_108;
    if (0xfffffffffffffff7 < uVar9) goto LAB_0d3aab63;
LAB_0d3aa891:
    if (0x16 < uVar9) {
      plVar11 = (long *)0x1a;
      if ((uVar9 | 7) != 0x17) {
        plVar11 = (long *)((uVar9 | 7) + 1);
      }
      unaff_R15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,plVar11);
      if (unaff_R15 == (byte *)0x0) goto LAB_0d3aab68;
      goto LAB_0d3aa8e5;
    }
    uStack_170 = CONCAT71(uStack_170._1_7_,(char)uVar9 * '\x02');
    unaff_R15 = (byte *)((long)&uStack_170 + 1);
    if (uVar9 == 0) {
      uVar9 = 0;
      goto LAB_0d3aa906;
    }
LAB_0d3aa8f8:
    func_0x0eee2ee0(unaff_R15,lVar10,uVar9);
  }
LAB_0d3aa906:
  uVar2 = uStack_170;
  unaff_R15[uVar9] = 0;
  uStack_198 = 0;
  if ((uStack_170 & 1) == 0) {
    pbStack_180 = pbStack_160;
    uStack_190 = (uint)uStack_170;
    uStack_18c = uStack_170._4_4_;
    uStack_188 = (undefined4)uStack_168;
    uStack_184 = uStack_168._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_190,pbStack_160,uStack_168);
  }
  uVar1 = uStack_190;
  uStack_178 = 0;
  if ((uStack_190 & 1) == 0) {
    if ((byte)uStack_190 >> 1 != 0) goto LAB_0d3aa97a;
LAB_0d3aaa56:
    uVar9 = 0;
  }
  else {
    if (CONCAT44(uStack_184,uStack_188) == 0) goto LAB_0d3aaa56;
LAB_0d3aa97a:
    if ((uStack_190 & 1) == 0) {
      pbVar12 = (byte *)((long)&uStack_190 + 1);
      if (pbVar12 != (byte *)0x0) goto LAB_0d3aa992;
LAB_0d3aaa72:
      uVar9 = 0;
    }
    else {
      pbVar12 = pbStack_180;
      if (pbStack_180 == (byte *)0x0) goto LAB_0d3aaa72;
LAB_0d3aa992:
      if (*pbVar12 == 0) goto LAB_0d3aaa56;
      uVar9 = 0xcbf29ce484222325;
      uVar7 = func_0x0eee2e90(pbVar12);
      if (uVar7 != 0) {
        uVar8 = (ulong)((uint)uVar7 & 7);
        if (7 < uVar7) {
          uVar7 = uVar7 & 0xfffffffffffffff8;
          do {
            uVar9 = (((((((uVar9 * 0x100000001b3 ^ (ulong)*pbVar12) * 0x100000001b3 ^
                         (ulong)pbVar12[1]) * 0x100000001b3 ^ (ulong)pbVar12[2]) * 0x100000001b3 ^
                       (ulong)pbVar12[3]) * 0x100000001b3 ^ (ulong)pbVar12[4]) * 0x100000001b3 ^
                     (ulong)pbVar12[5]) * 0x100000001b3 ^ (ulong)pbVar12[6]) * 0x100000001b3 ^
                    (ulong)pbVar12[7];
            pbVar12 = pbVar12 + 8;
            uVar7 = uVar7 - 8;
          } while (uVar7 != 0);
        }
        if (uVar8 != 0) {
          uVar7 = 0;
          do {
            uVar9 = uVar9 * 0x100000001b3 ^ (ulong)pbVar12[uVar7];
            uVar7 = uVar7 + 1;
          } while (uVar8 != uVar7);
        }
      }
    }
  }
  uStack_198 = uVar9;
  if ((uVar1 & 1) != 0) {
    func_0x0412a280(pbStack_180,CONCAT44(uStack_18c,uStack_190) & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    func_0x0412a280(pbStack_160,uStack_170 & 0xfffffffffffffffe);
  }
LAB_0d3aaaaa:
  lStack_138 = _UNK_0eeed6a8;
  *(undefined8 *)((long)&lStack_138 + *(long *)(_UNK_0eeed6a8 + -0x18)) = _UNK_0eeed6c0;
  puStack_130 = &UNK_0eeed150;
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  puStack_130 = &UNK_0eeece20;
  func_0x04167a40(auStack_128);
  func_0x0413aec0(&lStack_138,&UNK_0eeed6b0);
  func_0x04138180(auStack_c8);
  return uVar9;
}


