/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba10920 (ELF vaddr 0xb910920)
 * Label: caller-of-callee
 * Body:  [[0ba10920, 0ba11e54] [0ba11e60, 0ba11f09] [0ba11f10, 0ba12175] [0ba12180, 0ba1271e] [0ba12904, 0ba12908] [0ba12957, 0ba1297e]]
 * Ghidra: FUN_0ba10920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0ba10920(undefined1 *param_1,long *param_2,byte *param_3,undefined8 *param_4,long param_5,
            long param_6,long param_7,ulong *param_8,uint param_9)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  ulong *puVar32;
  byte *pbVar33;
  ulong uVar34;
  long *plVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  long *plVar39;
  long *plVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  byte bStack_340;
  byte bStack_33f;
  byte bStack_33e;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  long *plStack_2c0;
  int iStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  char cStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  long *plStack_210;
  int iStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  char cStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  long *plStack_160;
  int iStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  char cStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  byte bStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  char cStack_c0;
  undefined1 uStack_b8;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char acStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  plStack_2f0 = param_2;
  if ((*param_3 & 1) == 0) {
    if (*param_3 >> 1 == 0) goto LAB_0ba10a2f;
  }
  else if (*(long *)(param_3 + 8) == 0) {
LAB_0ba10a2f:
    puVar25 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar25 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    uVar26 = _UNK_014bd5d0;
    puStack_188 = (undefined *)0x51;
    uStack_180 = 0x4e;
    *(ulong *)((long)puVar25 + 0x3e) = CONCAT62(_UNK_014bd5ca,_DAT_014bd5c8);
    *(undefined8 *)((long)puVar25 + 0x46) = uVar26;
    uVar26 = CONCAT26(_DAT_014bd5c8,_UNK_014bd5c2);
    *(undefined8 *)(puVar25 + 0xc) = _DAT_014bd5ba;
    *(undefined8 *)(puVar25 + 0xe) = uVar26;
    uVar26 = _UNK_014bd5b2;
    *(undefined8 *)(puVar25 + 8) = _DAT_014bd5aa;
    *(undefined8 *)(puVar25 + 10) = uVar26;
    uVar26 = _UNK_014bd5a2;
    *(undefined8 *)(puVar25 + 4) = _DAT_014bd59a;
    *(undefined8 *)(puVar25 + 6) = uVar26;
    uVar14 = _UNK_014bd596;
    uVar13 = _UNK_014bd592;
    uVar7 = _UNK_014bd58e;
    *puVar25 = _DAT_014bd58a;
    puVar25[1] = uVar7;
    puVar25[2] = uVar13;
    puVar25[3] = uVar14;
    *(undefined1 *)((long)puVar25 + 0x4e) = 0;
    _auStack_2e8 = CONCAT41(_DAT_013f776f,10);
    _auStack_2e8 = CONCAT15(DAT_013f7773,_auStack_2e8);
    _auStack_2e8 = (uint7)_auStack_2e8;
    puStack_178 = puVar25;
    func_0x0d858ce0(&uStack_238,auStack_2e8,&puStack_188);
    *param_1 = 1;
    func_0x05e91e00(param_1 + 8,&uStack_238);
    func_0x048fb670(&uStack_238);
    func_0x0412a280(puVar25,0x50);
    return param_1;
  }
  (**(code **)(*param_2 + 0x60))(acStack_78,param_2,param_3);
  if (acStack_78[0] == '\0') {
    bVar41 = (*param_3 & 1) != 0;
    uStack_238 = param_3 + 1;
    if (bVar41) {
      uStack_238 = *(byte **)(param_3 + 0x10);
    }
    uStack_230 = (long *)(ulong)(*param_3 >> 1);
    if (bVar41) {
      uStack_230 = *(long **)(param_3 + 8);
    }
    func_0x0470d9a0(&puStack_188,&UNK_01455ab2,0x59,0xd,&uStack_238);
    uVar34 = (ulong)_auStack_2e8;
    _auStack_2e8 = CONCAT41(_DAT_013f776f,10);
    _auStack_2e8 = CONCAT15(DAT_013f7773,_auStack_2e8);
    uStack_2e4._3_1_ = SUB81(uVar34,7);
    _auStack_2e8 = (uint7)_auStack_2e8;
    func_0x0d858ce0(&uStack_238,auStack_2e8,&puStack_188);
    *param_1 = 1;
    func_0x05e91e00(param_1 + 8,&uStack_238);
    func_0x048fb670(&uStack_238);
    if (((ulong)puStack_188 & 1) != 0) {
      func_0x0412a280(puStack_178,(ulong)puStack_188 & 0xfffffffffffffffe);
    }
    goto joined_r0x0ba10bee;
  }
  if (param_9 - 3 < 2) {
    if (((char)param_8[0xc] != '\0') && ((char)param_8[0xb] == '\x01')) {
      bVar41 = ((byte)param_8[8] & 1) != 0;
      uVar34 = (ulong)(byte)((byte)param_8[8] >> 1);
      if (bVar41) {
        uVar34 = param_8[9];
      }
      puVar27 = (undefined1 *)((long)param_8 + 0x41);
      if (bVar41) {
        puVar27 = (undefined1 *)param_8[10];
      }
      uVar37 = 10;
      if (uVar34 < 10) {
        uVar37 = uVar34;
      }
      iVar17 = func_0x0eee3000(puVar27,&UNK_01c533a1,uVar37);
      if (iVar17 == 0 && uVar34 >= 10) {
        func_0x04130370(param_8 + 8,0,10);
      }
    }
  }
  else {
    if ((char)param_8[0xc] == '\0') {
      *(undefined1 *)param_8 = 0;
      *(undefined1 *)(param_8 + 3) = 0;
      *(undefined1 *)(param_8 + 4) = 0;
      *(undefined1 *)(param_8 + 7) = 0;
      *(undefined1 *)(param_8 + 8) = 0;
      *(undefined1 *)(param_8 + 0xb) = 0;
      *(undefined1 *)(param_8 + 0xc) = 1;
    }
    if (param_9 < 3) {
      uVar28 = (ulong)param_9;
      uVar34 = *(ulong *)(&UNK_01c6aac0 + uVar28 * 8);
      uVar37 = *(ulong *)(&UNK_01c6aad8 + uVar28 * 8);
      uVar38 = *(ulong *)(&UNK_01c6aaf0 + uVar28 * 8);
      uVar23 = *(ulong *)(&UNK_01c6ab08 + uVar28 * 8);
      uVar28 = *(ulong *)(&UNK_01c6ab20 + uVar28 * 8);
      uVar36 = 0x6500 >> ((char)param_9 * '\b' & 0x1fU);
      if ((char)param_8[0xb] != '\x01') goto LAB_0ba10c83;
LAB_0ba10ce0:
      if ((param_8[8] & 1) == 0) {
        uStack_228 = param_8[10];
        uStack_238 = (byte *)param_8[8];
        uStack_230 = (long *)param_8[9];
      }
      else {
        func_0x0412e5e0(&uStack_238,param_8[10],param_8[9]);
      }
    }
    else {
      uVar34 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar23 = 0;
      uVar28 = 0;
      uVar36 = param_9;
      if ((char)param_8[0xb] == '\x01') goto LAB_0ba10ce0;
LAB_0ba10c83:
      uStack_238 = (byte *)(uVar38 | uVar23 | uVar37 | uVar34 | uVar28);
      uStack_230 = (long *)(ulong)CONCAT41(0x6c61746e,(char)uVar36);
      uStack_228 = 0;
    }
    pbVar31 = uStack_238;
    puVar32 = param_8 + 8;
    plVar40 = uStack_230;
    if (((ulong)uStack_238 & 1) == 0) {
      plVar40 = (long *)((ulong)uStack_238 >> 1 & 0x7f);
    }
    uVar34 = (long)plVar40 + 10;
    if (0xfffffffffffffff7 < uVar34) {
      func_0x04882e30();
      goto LAB_0ba126fd;
    }
    if (uVar34 < 0x17) {
      uStack_2e0 = (undefined8 *)0x0;
      puStack_2d8 = (undefined8 *)0x0;
      _auStack_2e8 = (undefined *)(ulong)(byte)((char)uVar34 * '\x02');
    }
    else {
      uVar37 = 0x1a;
      if ((uVar34 | 7) != 0x17) {
        uVar37 = (uVar34 | 7) + 1;
      }
      puStack_2d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37);
      if (puStack_2d8 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar37,0);
      }
      _auStack_2e8 = (undefined *)(uVar37 | 1);
      uStack_2e0 = (undefined8 *)uVar34;
    }
    bVar41 = ((ulong)_auStack_2e8 & 1) != 0;
    puVar18 = (undefined8 *)(auStack_2e8 + 1);
    if (bVar41) {
      puVar18 = puStack_2d8;
    }
    lVar24 = (long)puStack_2d8 + 10;
    *puVar18 = 0x66617263656e696d;
    *(undefined2 *)(puVar18 + 1) = 0x3a74;
    lVar22 = (long)&uStack_2e0 + 3;
    if (bVar41) {
      lVar22 = lVar24;
    }
    if (plVar40 != (long *)0x0) {
      uVar34 = uStack_228;
      if (((ulong)pbVar31 & 1) == 0) {
        uVar34 = (long)&uStack_238 + 1;
      }
      func_0x0eee2ee0(lVar22,uVar34,plVar40);
    }
    *(undefined1 *)(lVar22 + (long)plVar40) = 0;
    if ((char)param_8[0xb] == '\x01') {
      if ((*puVar32 & 1) != 0) {
        func_0x0412a280(param_8[10],param_8[8] & 0xfffffffffffffffe);
      }
      *(undefined1 *)(param_8 + 0xb) = 0;
    }
    puVar18 = puStack_2d8;
    if (((ulong)_auStack_2e8 & 1) == 0) {
      param_8[10] = (ulong)puStack_2d8;
      *(undefined1 (*) [4])puVar32 = auStack_2e8;
      *(undefined4 *)((long)param_8 + 0x44) = uStack_2e4;
      *(undefined4 *)(param_8 + 9) = (undefined4)uStack_2e0;
      *(undefined4 *)((long)param_8 + 0x4c) = uStack_2e0._4_4_;
      *(undefined1 *)(param_8 + 0xb) = 1;
    }
    else {
      func_0x0412e5e0(puVar32,puStack_2d8,uStack_2e0);
      *(undefined1 *)(param_8 + 0xb) = 1;
      func_0x0412a280(puVar18,(ulong)_auStack_2e8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_238 & 1) != 0) {
      func_0x0412a280(uStack_228,(ulong)uStack_238 & 0xfffffffffffffffe);
    }
  }
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x208);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x208,0);
  }
  uVar26 = *param_4;
  uVar7 = *(undefined4 *)(param_4 + 1);
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  uVar8 = *(undefined8 *)(param_5 + 8);
  uVar1 = *(undefined1 *)(param_5 + 0x10);
  uStack_228 = CONCAT71(uStack_228._1_7_,uVar1);
  uVar9 = *(undefined8 *)(param_5 + 0x18);
  uStack_218 = *(undefined4 *)(param_5 + 0x20);
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined1 *)(param_5 + 0x10) = 0;
  plStack_210 = (long *)((ulong)plStack_210 & 0xffffffffffffff00);
  cVar2 = *(char *)(param_5 + 0x48);
  cStack_1f0 = cVar2 == '\x01';
  if ((bool)cStack_1f0) {
    plStack_210 = *(long **)(param_5 + 0x28);
    iStack_244 = *(int *)(param_5 + 0x30);
    uStack_200 = *(undefined8 *)(param_5 + 0x38);
    uStack_1f8 = *(ulong *)(param_5 + 0x40);
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined4 *)(param_5 + 0x30) = 0;
    *(undefined8 *)(param_5 + 0x38) = 0xffffffffffffff;
    *(undefined1 *)(param_5 + 0x40) = 0;
    iStack_208 = iStack_244;
  }
  puStack_268 = *(undefined8 **)(param_5 + 0x50);
  *(undefined8 *)(param_5 + 0x50) = 0;
  uStack_1d0 = *(undefined1 *)(param_5 + 0x68);
  uStack_1e0 = *(undefined8 *)(param_5 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_5 + 0x60);
  uStack_238 = &UNK_0f2f4e68;
  uStack_2e0 = *(undefined8 **)(param_6 + 8);
  uVar3 = *(undefined1 *)(param_6 + 0x10);
  puStack_2d8 = (undefined8 *)CONCAT71(puStack_2d8._1_7_,uVar3);
  uStack_2d0 = *(undefined8 *)(param_6 + 0x18);
  uStack_2c8 = *(undefined4 *)(param_6 + 0x20);
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined4 *)(param_6 + 0x20) = 0;
  *(undefined8 *)(param_6 + 8) = 0;
  *(undefined1 *)(param_6 + 0x10) = 0;
  plStack_2c0 = (long *)((ulong)plStack_2c0 & 0xffffffffffffff00);
  cVar4 = *(char *)(param_6 + 0x48);
  cStack_2a0 = cVar4 == '\x01';
  if ((bool)cStack_2a0) {
    plStack_2c0 = *(long **)(param_6 + 0x28);
    iStack_2b8 = *(int *)(param_6 + 0x30);
    uStack_2b0 = *(undefined8 *)(param_6 + 0x38);
    uStack_2a8 = *(ulong *)(param_6 + 0x40);
    *(undefined8 *)(param_6 + 0x28) = 0;
    *(undefined4 *)(param_6 + 0x30) = 0;
    *(undefined8 *)(param_6 + 0x38) = 0xffffffffffffff;
    *(undefined1 *)(param_6 + 0x40) = 0;
    iStack_248 = iStack_2b8;
  }
  uStack_298 = *(undefined8 *)(param_6 + 0x50);
  *(undefined8 *)(param_6 + 0x50) = 0;
  uStack_280 = *(undefined1 *)(param_6 + 0x68);
  uStack_290 = *(undefined8 *)(param_6 + 0x58);
  uStack_288 = *(undefined8 *)(param_6 + 0x60);
  _auStack_2e8 = &UNK_0f2f4e68;
  uStack_180 = *(undefined8 *)(param_7 + 8);
  uVar5 = *(undefined1 *)(param_7 + 0x10);
  puStack_178 = (undefined4 *)CONCAT71(puStack_178._1_7_,uVar5);
  uStack_170 = *(undefined8 *)(param_7 + 0x18);
  uStack_240 = *(undefined4 *)(param_7 + 0x20);
  *(undefined8 *)(param_7 + 0x18) = 0;
  *(undefined4 *)(param_7 + 0x20) = 0;
  *(undefined8 *)(param_7 + 8) = 0;
  *(undefined1 *)(param_7 + 0x10) = 0;
  plStack_160 = (long *)((ulong)plStack_160 & 0xffffffffffffff00);
  cVar6 = *(char *)(param_7 + 0x48);
  cStack_140 = cVar6 == '\x01';
  if ((bool)cStack_140) {
    plStack_160 = *(long **)(param_7 + 0x28);
    iStack_24c = *(int *)(param_7 + 0x30);
    uStack_150 = *(undefined8 *)(param_7 + 0x38);
    uStack_148 = *(ulong *)(param_7 + 0x40);
    *(undefined8 *)(param_7 + 0x28) = 0;
    *(undefined4 *)(param_7 + 0x30) = 0;
    *(undefined8 *)(param_7 + 0x38) = 0xffffffffffffff;
    *(undefined1 *)(param_7 + 0x40) = 0;
    iStack_158 = iStack_24c;
  }
  uStack_138 = *(undefined8 *)(param_7 + 0x50);
  *(undefined8 *)(param_7 + 0x50) = 0;
  uStack_120 = *(undefined1 *)(param_7 + 0x68);
  uStack_130 = *(undefined4 *)(param_7 + 0x58);
  uStack_12c = *(undefined4 *)(param_7 + 0x5c);
  uStack_128 = *(undefined4 *)(param_7 + 0x60);
  uStack_124 = *(undefined4 *)(param_7 + 100);
  puStack_188 = &UNK_0f2f4e68;
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  uStack_b8 = 0;
  uVar34 = param_8[0xc];
  puStack_258 = (undefined8 *)CONCAT71(puStack_258._1_7_,cVar2);
  puStack_260 = (undefined8 *)CONCAT44(puStack_260._4_4_,uStack_218);
  if ((char)uVar34 == '\x01') {
    bStack_340 = (byte)param_8[3];
    uStack_100 = bStack_340 == 1;
    if ((bool)uStack_100) {
      uStack_108 = param_8[2];
      uStack_118 = *param_8;
      uStack_110 = param_8[1];
      *param_8 = 0;
      param_8[1] = 0;
      param_8[2] = 0;
    }
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    bStack_33e = (byte)param_8[7];
    bStack_e0 = bStack_33e == 1;
    if ((bool)bStack_e0) {
      uStack_e8 = param_8[6];
      uStack_f8 = param_8[4];
      uStack_f0 = param_8[5];
      param_8[4] = 0;
      param_8[5] = 0;
      param_8[6] = 0;
    }
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    bStack_33f = (byte)param_8[0xb];
    cStack_c0 = bStack_33f == 1;
    if ((bool)cStack_c0) {
      uStack_c8 = param_8[10];
      uStack_d8 = param_8[8];
      uStack_d0 = param_8[9];
      param_8[8] = 0;
      param_8[9] = 0;
      param_8[10] = 0;
    }
    uStack_b8 = 1;
    bVar16 = bStack_e0;
  }
  else {
    bVar16 = false;
  }
  *puVar18 = &UNK_0f534768;
  puStack_270 = uStack_2e0;
  uStack_23c = uStack_2c8;
  uStack_230 = (long *)uVar8;
  uStack_220 = uVar9;
  puStack_1e8 = puStack_268;
  uStack_168 = uStack_240;
  uStack_a0 = uStack_138;
  uStack_98 = uStack_170;
  uStack_90 = uStack_180;
  uStack_88 = uStack_298;
  uStack_80 = uStack_2d0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0ef44a60;
  *(undefined1 *)(puVar19 + 3) = 1;
  puVar18[1] = puVar19 + 3;
  puVar18[2] = puVar19;
  *puVar18 = &UNK_0f2f3a38;
  puStack_a8 = puVar18 + 3;
  if ((*param_3 & 1) == 0) {
    puVar18[5] = *(undefined8 *)(param_3 + 0x10);
    uVar15 = *(undefined8 *)(param_3 + 8);
    *puStack_a8 = *(undefined8 *)param_3;
    puVar18[4] = uVar15;
  }
  else {
    func_0x0412e5e0(puStack_a8,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  plVar40 = plStack_2f0;
  puVar18[0xc] = 0;
  puVar18[0xd] = 0;
  puVar18[10] = 0;
  puVar18[0xb] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[0xe] = 0;
  *(uint *)(puVar18 + 0xf) = param_9;
  puVar18[0x10] = uVar26;
  *(undefined4 *)(puVar18 + 0x11) = uVar7;
  puVar18[0x13] = uVar8;
  *(undefined1 *)(puVar18 + 0x14) = uVar1;
  puVar18[0x15] = uVar9;
  *(undefined4 *)(puVar18 + 0x16) = puStack_260._0_4_;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = (long *)0x0;
  uStack_228 = uStack_228 & 0xffffffffffffff00;
  puVar18[0x12] = &UNK_0f486b60;
  *(undefined1 *)(puVar18 + 0x17) = 0;
  *(undefined1 *)(puVar18 + 0x1b) = 0;
  if ((char)puStack_258 != '\0') {
    puVar18[0x17] = plStack_210;
    *(int *)(puVar18 + 0x18) = iStack_244;
    puVar18[0x19] = uStack_200;
    puVar18[0x1a] = uStack_1f8;
    plStack_210 = (long *)0x0;
    iStack_208 = 0;
    uStack_200 = 0xffffffffffffff;
    uStack_1f8 = uStack_1f8 & 0xffffffffffffff00;
    *(undefined1 *)(puVar18 + 0x1b) = 1;
  }
  puVar18[0x1c] = puStack_268;
  puStack_1e8 = (undefined8 *)0x0;
  *(undefined1 *)(puVar18 + 0x1f) = uStack_1d0;
  puVar18[0x1d] = uStack_1e0;
  puVar18[0x1e] = uStack_1d8;
  puVar18[0x12] = &UNK_0f2f4e68;
  puVar18[0x21] = puStack_270;
  *(undefined1 *)(puVar18 + 0x22) = uVar3;
  puVar18[0x23] = uStack_80;
  *(undefined4 *)(puVar18 + 0x24) = uStack_23c;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2e0 = (undefined8 *)0x0;
  puStack_2d8 = (undefined8 *)((ulong)puStack_2d8 & 0xffffffffffffff00);
  puVar18[0x20] = &UNK_0f486b60;
  *(undefined1 *)(puVar18 + 0x25) = 0;
  *(undefined1 *)(puVar18 + 0x29) = 0;
  if (cVar4 != '\0') {
    puVar18[0x25] = plStack_2c0;
    *(int *)(puVar18 + 0x26) = iStack_248;
    puVar18[0x27] = uStack_2b0;
    puVar18[0x28] = uStack_2a8;
    plStack_2c0 = (long *)0x0;
    iStack_2b8 = 0;
    uStack_2b0 = 0xffffffffffffff;
    uStack_2a8 = uStack_2a8 & 0xffffffffffffff00;
    *(undefined1 *)(puVar18 + 0x29) = 1;
  }
  puVar18[0x2a] = uStack_88;
  uStack_298 = 0;
  *(undefined1 *)(puVar18 + 0x2d) = uStack_280;
  puVar18[0x2b] = uStack_290;
  puVar18[0x2c] = uStack_288;
  puVar18[0x20] = &UNK_0f2f4e68;
  puVar18[0x2f] = uStack_90;
  *(undefined1 *)(puVar18 + 0x30) = uVar5;
  puVar18[0x31] = uStack_98;
  *(undefined4 *)(puVar18 + 0x32) = uStack_240;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_180 = 0;
  puStack_178 = (undefined4 *)((ulong)puStack_178 & 0xffffffffffffff00);
  puVar18[0x2e] = &UNK_0f486b60;
  *(undefined1 *)(puVar18 + 0x33) = 0;
  *(undefined1 *)(puVar18 + 0x37) = 0;
  if (cVar6 != '\0') {
    puVar18[0x33] = plStack_160;
    *(int *)(puVar18 + 0x34) = iStack_24c;
    puVar18[0x35] = uStack_150;
    puVar18[0x36] = uStack_148;
    plStack_160 = (long *)0x0;
    iStack_158 = 0;
    uStack_150 = 0xffffffffffffff;
    uStack_148 = uStack_148 & 0xffffffffffffff00;
    *(undefined1 *)(puVar18 + 0x37) = 1;
  }
  puVar18[0x38] = uStack_a0;
  uStack_138 = 0;
  *(undefined1 *)(puVar18 + 0x3b) = uStack_120;
  *(undefined4 *)(puVar18 + 0x39) = uStack_130;
  *(undefined4 *)((long)puVar18 + 0x1cc) = uStack_12c;
  *(undefined4 *)(puVar18 + 0x3a) = uStack_128;
  *(undefined4 *)((long)puVar18 + 0x1d4) = uStack_124;
  puVar18[0x2e] = &UNK_0f2f4e68;
  *(undefined1 *)(puVar18 + 0x3c) = 0;
  *(undefined1 *)(puVar18 + 0x40) = 0;
  if ((char)uVar34 != '\0') {
    puStack_258 = puVar18 + 0x12;
    puStack_260 = puVar18 + 0x20;
    puStack_268 = puVar18 + 0x2e;
    puStack_270 = puVar18 + 0x3c;
    if ((bStack_340 & 1) != 0) {
      uVar34 = 0x100;
      if (uStack_110 < 0x100) {
        uVar34 = uStack_110;
      }
      uVar38 = (long)&uStack_118 + 1;
      uVar37 = uStack_118 >> 1 & 0x7f;
      if ((uStack_118 & 1) != 0) {
        uVar38 = uStack_108;
        uVar37 = uVar34;
      }
      if (uVar37 < 0x17) {
        uStack_308 = CONCAT71(uStack_308._1_7_,(char)uVar37 * '\x02');
        lVar24 = (long)&uStack_308 + 1;
        if (uVar37 != 0) goto LAB_0ba1191e;
      }
      else {
        uVar34 = 0x1a;
        if ((uVar37 | 7) != 0x17) {
          uVar34 = (uVar37 | 7) + 1;
        }
        lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34);
        if (lVar24 == 0) {
          func_0x0eec74c0(uVar34,0);
        }
        uStack_308 = uVar34 | 1;
        uStack_300 = uVar37;
        lStack_2f8 = lVar24;
LAB_0ba1191e:
        func_0x0eee2ee0(lVar24,uVar38,uVar37);
      }
      *(undefined1 *)(lVar24 + uVar37) = 0;
      if ((*(byte *)(puVar18 + 6) & 1) != 0) {
        func_0x0412a280(puVar18[8],puVar18[6] & 0xfffffffffffffffe);
      }
      puVar18[8] = lStack_2f8;
      *(undefined4 *)(puVar18 + 6) = (undefined4)uStack_308;
      *(undefined4 *)((long)puVar18 + 0x34) = uStack_308._4_4_;
      *(undefined4 *)(puVar18 + 7) = (undefined4)uStack_300;
      *(undefined4 *)((long)puVar18 + 0x3c) = uStack_300._4_4_;
      bVar16 = bStack_e0;
    }
    if ((bVar16 & 1) != 0) {
      uVar34 = 0x400;
      if (uStack_f0 < 0x400) {
        uVar34 = uStack_f0;
      }
      uVar38 = (long)&uStack_f8 + 1;
      uVar37 = uStack_f8 >> 1 & 0x7f;
      if ((uStack_f8 & 1) != 0) {
        uVar38 = uStack_e8;
        uVar37 = uVar34;
      }
      if (uVar37 < 0x17) {
        uStack_308 = CONCAT71(uStack_308._1_7_,(char)uVar37 * '\x02');
        lVar24 = (long)&uStack_308 + 1;
        if (uVar37 != 0) goto LAB_0ba11a2c;
      }
      else {
        uVar34 = 0x1a;
        if ((uVar37 | 7) != 0x17) {
          uVar34 = (uVar37 | 7) + 1;
        }
        lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34);
        if (lVar24 == 0) {
          func_0x0eec74c0(uVar34,0);
        }
        uStack_308 = uVar34 | 1;
        uStack_300 = uVar37;
        lStack_2f8 = lVar24;
LAB_0ba11a2c:
        func_0x0eee2ee0(lVar24,uVar38,uVar37);
      }
      *(undefined1 *)(lVar24 + uVar37) = 0;
      if ((*(byte *)(puVar18 + 9) & 1) != 0) {
        func_0x0412a280(puVar18[0xb],puVar18[9] & 0xfffffffffffffffe);
      }
      puVar18[0xb] = lStack_2f8;
      *(undefined4 *)(puVar18 + 9) = (undefined4)uStack_308;
      *(undefined4 *)((long)puVar18 + 0x4c) = uStack_308._4_4_;
      *(undefined4 *)(puVar18 + 10) = (undefined4)uStack_300;
      *(undefined4 *)((long)puVar18 + 0x54) = uStack_300._4_4_;
    }
    if (cStack_c0 == '\x01') {
      uVar34 = 0x100;
      if (uStack_d0 < 0x100) {
        uVar34 = uStack_d0;
      }
      uVar38 = (long)&uStack_d8 + 1;
      uVar37 = uStack_d8 >> 1 & 0x7f;
      if ((uStack_d8 & 1) != 0) {
        uVar38 = uStack_c8;
        uVar37 = uVar34;
      }
      if (uVar37 < 0x17) {
        uStack_308 = CONCAT71(uStack_308._1_7_,(char)uVar37 * '\x02');
        lVar24 = (long)&uStack_308 + 1;
        if (uVar37 != 0) goto LAB_0ba11b38;
      }
      else {
        uVar34 = 0x1a;
        if ((uVar37 | 7) != 0x17) {
          uVar34 = (uVar37 | 7) + 1;
        }
        lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34);
        if (lVar24 == 0) {
          func_0x0eec74c0(uVar34,0);
        }
        uStack_308 = uVar34 | 1;
        uStack_300 = uVar37;
        lStack_2f8 = lVar24;
LAB_0ba11b38:
        func_0x0eee2ee0(lVar24,uVar38,uVar37);
      }
      *(undefined1 *)(lVar24 + uVar37) = 0;
      if ((*(byte *)(puVar18 + 0xc) & 1) != 0) {
        func_0x0412a280(puVar18[0xe],puVar18[0xc] & 0xfffffffffffffffe);
      }
      puVar18[0xe] = lStack_2f8;
      *(undefined4 *)(puVar18 + 0xc) = (undefined4)uStack_308;
      *(undefined4 *)((long)puVar18 + 100) = uStack_308._4_4_;
      *(undefined4 *)(puVar18 + 0xd) = (undefined4)uStack_300;
      *(undefined4 *)((long)puVar18 + 0x6c) = uStack_300._4_4_;
    }
    if (((bStack_33f & 1) != 0) && ((uStack_d8 & 1) != 0)) {
      func_0x0412a280(uStack_c8,uStack_d8 & 0xfffffffffffffffe);
    }
    if (((bStack_33e & 1) != 0) && ((uStack_f8 & 1) != 0)) {
      func_0x0412a280(uStack_e8,uStack_f8 & 0xfffffffffffffffe);
    }
    if (((bStack_340 & 1) != 0) && ((uStack_118 & 1) != 0)) {
      func_0x0412a280(uStack_108,uStack_118 & 0xfffffffffffffffe);
    }
  }
  if (((cStack_140 == '\x01') && (plStack_160 != (long *)0x0)) &&
     (*plStack_160 != 0 && (int)plStack_160[1] == iStack_158)) {
    func_0x0d8569b0(*plStack_160,uStack_150,uStack_148 & 0xffffffff);
  }
  if (((cStack_2a0 == '\x01') && (plStack_2c0 != (long *)0x0)) &&
     (*plStack_2c0 != 0 && (int)plStack_2c0[1] == iStack_2b8)) {
    func_0x0d8569b0(*plStack_2c0,uStack_2b0,uStack_2a8 & 0xffffffff);
  }
  if (((cStack_1f0 == '\x01') && (plStack_210 != (long *)0x0)) &&
     (*plStack_210 != 0 && (int)plStack_210[1] == iStack_208)) {
    func_0x0d8569b0(*plStack_210,uStack_200,uStack_1f8 & 0xffffffff);
  }
  uStack_2e0 = (undefined8 *)0x0;
  puStack_2d8 = (undefined8 *)0x0;
  _auStack_2e8 = (undefined *)puVar18[1];
  uVar34 = puVar18[2];
  if (uVar34 != 0) {
    LOCK();
    *(long *)(uVar34 + 8) = *(long *)(uVar34 + 8) + 1;
    UNLOCK();
    uStack_2e0 = (undefined8 *)uVar34;
  }
  if (_auStack_2e8 != (undefined *)0x0) {
    puStack_2d8 = puVar18;
  }
  pbVar31 = param_3 + 1;
  bVar41 = (*param_3 & 1) == 0;
  pbVar33 = *(byte **)(param_3 + 0x10);
  if (bVar41) {
    pbVar33 = pbVar31;
  }
  uVar34 = (ulong)(*param_3 >> 1);
  if (!bVar41) {
    uVar34 = *(ulong *)(param_3 + 8);
  }
  pbVar20 = (byte *)func_0x04883620(&uStack_238,pbVar33,uVar34);
  plVar11 = plVar40 + 6;
  pbVar33 = (byte *)plVar40[7];
  pbVar30 = param_3;
  if (pbVar33 != (byte *)0x0) {
    uVar34 = (long)pbVar33 - ((ulong)pbVar33 >> 1 & 0x5555555555555555);
    uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
    uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar34 >> 0x38 < 2) {
      pbVar30 = (byte *)((ulong)(pbVar33 + -1) & (ulong)pbVar20);
    }
    else {
      pbVar30 = pbVar20;
      if (pbVar33 <= pbVar20) {
        if (((ulong)pbVar20 | (ulong)pbVar33) >> 0x20 == 0) {
          pbVar30 = (byte *)(((ulong)pbVar20 & 0xffffffff) % ((ulong)pbVar33 & 0xffffffff));
        }
        else {
          pbVar30 = (byte *)((ulong)pbVar20 % (ulong)pbVar33);
        }
      }
    }
    puVar19 = *(undefined8 **)(*plVar11 + (long)pbVar30 * 8);
    if ((puVar19 != (undefined8 *)0x0) && (pbVar21 = (byte *)*puVar19, pbVar21 != (byte *)0x0)) {
      if ((*param_3 & 1) == 0) {
        uVar37 = (ulong)(*param_3 >> 1);
      }
      else {
        uVar37 = *(ulong *)(param_3 + 8);
        pbVar31 = *(byte **)(param_3 + 0x10);
      }
      if ((byte)(uVar34 >> 0x38) < 2) {
        do {
          if (*(byte **)(pbVar21 + 8) == pbVar20) {
            bVar16 = pbVar21[0x10];
            if ((bVar16 & 1) == 0) {
              uVar34 = (ulong)(bVar16 >> 1);
            }
            else {
              uVar34 = *(ulong *)(pbVar21 + 0x18);
            }
            if (uVar34 == uVar37) {
              if ((bVar16 & 1) == 0) {
                pbVar29 = pbVar21 + 0x11;
              }
              else {
                pbVar29 = *(byte **)(pbVar21 + 0x20);
              }
              iVar17 = func_0x0eee3000(pbVar29,pbVar31,uVar37);
              plVar40 = plStack_2f0;
              if (iVar17 == 0) goto LAB_0ba12398;
            }
          }
          else {
            plVar40 = plStack_2f0;
            if ((byte *)((ulong)*(byte **)(pbVar21 + 8) & (ulong)(pbVar33 + -1)) != pbVar30) break;
          }
          pbVar21 = *(byte **)pbVar21;
          plVar40 = plStack_2f0;
        } while (pbVar21 != (byte *)0x0);
      }
      else {
        do {
          pbVar29 = *(byte **)(pbVar21 + 8);
          if (pbVar29 == pbVar20) {
            bVar16 = pbVar21[0x10];
            if ((bVar16 & 1) == 0) {
              uVar34 = (ulong)(bVar16 >> 1);
            }
            else {
              uVar34 = *(ulong *)(pbVar21 + 0x18);
            }
            if (uVar34 == uVar37) {
              if ((bVar16 & 1) == 0) {
                pbVar29 = pbVar21 + 0x11;
              }
              else {
                pbVar29 = *(byte **)(pbVar21 + 0x20);
              }
              iVar17 = func_0x0eee3000(pbVar29,pbVar31,uVar37);
              if (iVar17 == 0) goto LAB_0ba12398;
            }
          }
          else {
            if (pbVar33 <= pbVar29) {
              if (((ulong)pbVar29 | (ulong)pbVar33) >> 0x20 == 0) {
                pbVar29 = (byte *)(((ulong)pbVar29 & 0xffffffff) % ((ulong)pbVar33 & 0xffffffff));
              }
              else {
                pbVar29 = (byte *)((ulong)pbVar29 % (ulong)pbVar33);
              }
            }
            if (pbVar29 != pbVar30) break;
          }
          pbVar21 = *(byte **)pbVar21;
        } while (pbVar21 != (byte *)0x0);
      }
    }
  }
  pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (pbVar21 == (byte *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_228 = 0;
  pbVar21[0] = 0;
  pbVar21[1] = 0;
  pbVar21[2] = 0;
  pbVar21[3] = 0;
  pbVar21[4] = 0;
  pbVar21[5] = 0;
  pbVar21[6] = 0;
  pbVar21[7] = 0;
  *(byte **)(pbVar21 + 8) = pbVar20;
  uStack_238 = pbVar21;
  uStack_230 = plVar11;
  if ((*param_3 & 1) == 0) {
    *(undefined8 *)(pbVar21 + 0x20) = *(undefined8 *)(param_3 + 0x10);
    uVar26 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(pbVar21 + 0x10) = *(undefined8 *)param_3;
    *(undefined8 *)(pbVar21 + 0x18) = uVar26;
  }
  else {
    func_0x0412e5e0(pbVar21 + 0x10,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  pbVar21[0x28] = 0;
  pbVar21[0x29] = 0;
  pbVar21[0x2a] = 0;
  pbVar21[0x2b] = 0;
  pbVar21[0x2c] = 0;
  pbVar21[0x2d] = 0;
  pbVar21[0x2e] = 0;
  pbVar21[0x2f] = 0;
  uStack_228 = CONCAT71(uStack_228._1_7_,1);
  if ((long)pbVar33 < 0) {
    fVar43 = (float)pbVar33;
    fVar42 = *(float *)(plVar40 + 10);
    if (pbVar33 != (byte *)0x0) goto LAB_0ba1205e;
LAB_0ba1206b:
    uVar34 = 1;
    if ((byte *)0x2 < pbVar33) {
      uVar34 = (ulong)(((ulong)pbVar33 & (ulong)(pbVar33 + -1)) != 0);
    }
    uVar34 = uVar34 | (long)pbVar33 * 2;
    fVar42 = (float)func_0x0eee3ab0((float)(plVar40[9] + 1) / fVar42);
    uVar37 = (long)(fVar42 - _DAT_01198778) & (long)fVar42 >> 0x3f | (long)fVar42;
    if (uVar37 < uVar34) {
      uVar37 = uVar34;
    }
    uVar34 = 2;
    if ((uVar37 == 1) || (uVar34 = uVar37, (uVar37 & uVar37 - 1) == 0)) {
      uVar37 = plVar40[7];
      bVar41 = uVar34 < uVar37;
      uVar38 = uVar34;
      if (uVar34 <= uVar37) goto LAB_0ba121dc;
LAB_0ba120e4:
      if (uVar34 >> 0x3d != 0) {
LAB_0ba126fd:
        uVar26 = func_0x04882eb0();
        uVar26 = func_0x04882e20(uVar26);
        uVar26 = func_0x04882e20(uVar26);
        uVar26 = func_0x04882e20(uVar26);
        if (pcStack_58 != (code *)0x0) {
          (*pcStack_58)(auStack_70);
        }
        uVar26 = _Unwind_Resume(uVar26);
        func_0x04882e20(uVar26);
        pcVar12 = (code *)swi(3);
        puVar27 = (undefined1 *)(*pcVar12)();
        return puVar27;
      }
      lVar24 = uVar34 * 8;
      lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
      if (lVar22 == 0) {
        func_0x0eec74c0(lVar24,0);
      }
      lVar10 = *plVar11;
      *plVar11 = lVar22;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,plVar40[7] << 3);
        lVar22 = plVar40[6];
      }
      plVar40[7] = uVar34;
      func_0x0eee2dd0(lVar22,0,lVar24);
      plVar35 = (long *)plVar40[8];
      if (plVar35 != (long *)0x0) {
        uVar38 = plVar35[1];
        uVar37 = uVar34 - 1;
        if ((uVar34 & uVar37) == 0) {
          *(long **)(lVar22 + (uVar38 & uVar37) * 8) = plVar40 + 8;
          uVar34 = uVar38 & uVar37;
          while (plVar39 = plVar35, plVar35 = (long *)*plVar39, plVar35 != (long *)0x0) {
            uVar38 = plVar35[1] & uVar37;
            if (uVar38 != uVar34) {
              if (*(long *)(lVar22 + uVar38 * 8) == 0) {
                *(long **)(lVar22 + uVar38 * 8) = plVar39;
                uVar34 = uVar38;
              }
              else {
                *plVar39 = *plVar35;
                *plVar35 = **(undefined8 **)(lVar22 + uVar38 * 8);
                **(long **)(lVar22 + uVar38 * 8) = (long)plVar35;
                plVar35 = plVar39;
              }
            }
          }
        }
        else {
          if (uVar34 <= uVar38) {
            if ((uVar38 | uVar34) >> 0x20 == 0) {
              uVar38 = (uVar38 & 0xffffffff) % (uVar34 & 0xffffffff);
            }
            else {
              uVar38 = uVar38 % uVar34;
            }
          }
          *(long **)(lVar22 + uVar38 * 8) = plVar40 + 8;
          plVar39 = (long *)*plVar35;
          while (plVar39 != (long *)0x0) {
            uVar37 = plVar39[1];
            if (uVar34 <= uVar37) {
              if ((uVar37 | uVar34) >> 0x20 == 0) {
                uVar37 = (uVar37 & 0xffffffff) % (uVar34 & 0xffffffff);
              }
              else {
                uVar37 = uVar37 % uVar34;
              }
            }
            if (uVar37 != uVar38) {
              if (*(long *)(lVar22 + uVar37 * 8) == 0) {
                *(long **)(lVar22 + uVar37 * 8) = plVar35;
                uVar38 = uVar37;
              }
              else {
                *plVar35 = *plVar39;
                *plVar39 = **(long **)(lVar22 + uVar37 * 8);
                **(undefined8 **)(lVar22 + uVar37 * 8) = plVar39;
                plVar39 = plVar35;
              }
            }
            plVar35 = plVar39;
            plVar39 = (long *)*plVar35;
          }
        }
      }
    }
    else {
      uVar34 = FUN_0412c3f0();
      uVar37 = plVar40[7];
      bVar41 = uVar34 < uVar37;
      uVar38 = uVar34;
      if (uVar37 < uVar34) goto LAB_0ba120e4;
LAB_0ba121dc:
      if (bVar41) {
        fVar42 = (float)func_0x0eee3ab0((float)(ulong)plVar40[9] / *(float *)(plVar40 + 10));
        uVar34 = (long)(fVar42 - _DAT_01198778) & (long)fVar42 >> 0x3f | (long)fVar42;
        if ((uVar37 < 3) ||
           (uVar23 = uVar37 - (uVar37 >> 1 & 0x5555555555555555),
           uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333),
           1 < (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar34 = FUN_0412c3f0(uVar34);
        }
        else if (1 < uVar34) {
          lVar24 = 0x3f;
          if (uVar34 - 1 != 0) {
            for (; uVar34 - 1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          uVar34 = 1L << (-((byte)lVar24 ^ 0x3f) & 0x3f);
        }
        if (uVar34 < uVar38) {
          uVar34 = uVar38;
        }
        if (uVar34 < uVar37) {
          if (uVar34 != 0) goto LAB_0ba120e4;
          lVar24 = *plVar11;
          *plVar11 = 0;
          if (lVar24 != 0) {
            func_0x0412a280(lVar24,plVar40[7] << 3);
          }
          plVar40[7] = 0;
        }
      }
    }
    pbVar33 = (byte *)plVar40[7];
    if (((ulong)pbVar33 & (ulong)(pbVar33 + -1)) == 0) {
      pbVar30 = (byte *)((ulong)pbVar20 & (ulong)(pbVar33 + -1));
    }
    else {
      pbVar30 = pbVar20;
      if (pbVar33 <= pbVar20) {
        if (((ulong)pbVar20 | (ulong)pbVar33) >> 0x20 == 0) {
          pbVar30 = (byte *)(((ulong)pbVar20 & 0xffffffff) % ((ulong)pbVar33 & 0xffffffff));
        }
        else {
          pbVar30 = (byte *)((ulong)pbVar20 % (ulong)pbVar33);
        }
      }
    }
  }
  else {
    fVar43 = (float)(long)pbVar33;
    fVar42 = *(float *)(plVar40 + 10);
    if (pbVar33 == (byte *)0x0) goto LAB_0ba1206b;
LAB_0ba1205e:
    if (fVar43 * fVar42 < (float)(plVar40[9] + 1)) goto LAB_0ba1206b;
  }
  lVar24 = *plVar11;
  puVar19 = *(undefined8 **)(lVar24 + (long)pbVar30 * 8);
  if (puVar19 == (undefined8 *)0x0) {
    *(long *)pbVar21 = plVar40[8];
    plVar40[8] = (long)pbVar21;
    *(long **)(lVar24 + (long)pbVar30 * 8) = plVar40 + 8;
    if (*(long *)pbVar21 != 0) {
      pbVar31 = *(byte **)(*(long *)pbVar21 + 8);
      if (((ulong)pbVar33 & (ulong)(pbVar33 + -1)) == 0) {
        *(byte **)(lVar24 + ((ulong)pbVar31 & (ulong)(pbVar33 + -1)) * 8) = pbVar21;
      }
      else {
        if (pbVar33 <= pbVar31) {
          if (((ulong)pbVar31 | (ulong)pbVar33) >> 0x20 == 0) {
            *(byte **)(lVar24 + (((ulong)pbVar31 & 0xffffffff) % ((ulong)pbVar33 & 0xffffffff)) * 8)
                 = pbVar21;
            goto LAB_0ba12394;
          }
          pbVar31 = (byte *)((ulong)pbVar31 % (ulong)pbVar33);
        }
        *(byte **)(lVar24 + (long)pbVar31 * 8) = pbVar21;
      }
    }
  }
  else {
    *(undefined8 *)pbVar21 = *puVar19;
    *puVar19 = pbVar21;
  }
LAB_0ba12394:
  plVar40[9] = plVar40[9] + 1;
LAB_0ba12398:
  plVar11 = *(long **)(pbVar21 + 0x28);
  *(undefined8 **)(pbVar21 + 0x28) = puVar18;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  puVar25 = (undefined4 *)plVar40[0xc];
  if (puVar25 < (undefined4 *)plVar40[0xd]) {
    if ((*param_3 & 1) == 0) {
      *(undefined8 *)(puVar25 + 4) = *(undefined8 *)(param_3 + 0x10);
      uVar7 = *(undefined4 *)(param_3 + 4);
      uVar13 = *(undefined4 *)(param_3 + 8);
      uVar14 = *(undefined4 *)(param_3 + 0xc);
      *puVar25 = *(undefined4 *)param_3;
      puVar25[1] = uVar7;
      puVar25[2] = uVar13;
      puVar25[3] = uVar14;
    }
    else {
      func_0x0412e5e0(puVar25,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    }
    plVar40[0xc] = (long)(puVar25 + 6);
    plVar40[0xc] = (long)(puVar25 + 6);
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  else {
    lVar24 = func_0x04909a40(plVar40 + 0xb,param_3);
    plVar40[0xc] = lVar24;
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (lVar24 == 0) {
    func_0x048b0de0(&uStack_238,&puStack_188);
    _DAT_0f54fd90 = (undefined4)uStack_238;
    uRam000000000f54fd94 = uStack_238._4_4_;
    uVar7 = (undefined4)uStack_230;
    uVar13 = uStack_230._4_4_;
    uStack_238 = (byte *)0x0;
    uStack_230 = (long *)0x0;
    plVar40 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar7;
    uRam000000000f54fd9c = uVar13;
    if (plVar40 != (long *)0x0) {
      LOCK();
      plVar11 = plVar40 + 1;
      lVar24 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar40 + 0x10))(plVar40);
        func_0x0412c2d0(plVar40);
      }
    }
    plVar40 = uStack_230;
    if (uStack_230 != (long *)0x0) {
      LOCK();
      plVar11 = uStack_230 + 1;
      lVar24 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_230 + 0x10))(uStack_230);
        func_0x0412c2d0(plVar40);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puVar25 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar25 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *puVar25 = auStack_2e8;
  puVar25[1] = uStack_2e4;
  puVar25[2] = (undefined4)uStack_2e0;
  puVar25[3] = uStack_2e0._4_4_;
  *(undefined8 **)(puVar25 + 4) = puStack_2d8;
  *param_1 = 0;
  *(undefined **)(param_1 + 0x18) = &UNK_0baa7a60;
  *(undefined **)(param_1 + 0x20) = &UNK_0baa7cc0;
  *(undefined4 *)(param_1 + 0x28) = 0xc9c3274f;
  param_1[0x2c] = 1;
  *(undefined4 **)(param_1 + 8) = puVar25;
  *(long *)(param_1 + 0x30) = lVar24;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = &UNK_0baa78e0;
joined_r0x0ba10bee:
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(auStack_70);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x13f776f  Error
 * 0x14bd58a  EditorExtensionService::registerExtension -- invalid extension name specified.
 * 0x14bd59a  ervice::registerExtension -- invalid extension name specified.
 * 0x14bd5aa  Extension -- invalid extension name specified.
 * 0x14bd5ba  alid extension name specified.
 * 0x14bd5c8   name specified.
 */
