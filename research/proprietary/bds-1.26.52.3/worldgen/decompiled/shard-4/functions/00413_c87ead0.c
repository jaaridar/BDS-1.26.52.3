/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc97ead0 (ELF vaddr 0xc87ead0)
 * Label: caller-of-callee
 * Body:  [[0c97ead0, 0c987ef5] [0c987f00, 0c988312] [0c988320, 0c9894b8] [0c98951d, 0c989574] [0c98a274, 0c98a9f9]]
 * Ghidra: FUN_0c97ead0
 */


/* WARNING: Removing unreachable block (ram,0x0c9801b1) */
/* WARNING: Removing unreachable block (ram,0x0c9801c3) */
/* WARNING: Removing unreachable block (ram,0x0c9801d4) */
/* WARNING: Removing unreachable block (ram,0x0c9827b9) */
/* WARNING: Removing unreachable block (ram,0x0c9827cb) */
/* WARNING: Removing unreachable block (ram,0x0c9827dc) */
/* WARNING: Removing unreachable block (ram,0x0c982d73) */
/* WARNING: Removing unreachable block (ram,0x0c982d85) */
/* WARNING: Removing unreachable block (ram,0x0c982d96) */
/* WARNING: Removing unreachable block (ram,0x0c982e54) */
/* WARNING: Removing unreachable block (ram,0x0c982e66) */
/* WARNING: Removing unreachable block (ram,0x0c982e77) */
/* WARNING: Removing unreachable block (ram,0x0c9831c5) */
/* WARNING: Removing unreachable block (ram,0x0c9831d7) */
/* WARNING: Removing unreachable block (ram,0x0c9831e8) */
/* WARNING: Removing unreachable block (ram,0x0c983269) */
/* WARNING: Removing unreachable block (ram,0x0c98327b) */
/* WARNING: Removing unreachable block (ram,0x0c98328c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c97ead0(undefined1 param_1 [8],undefined8 *param_2)

{
  int *piVar1;
  undefined1 (**ppauVar2) [16];
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  code *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [8];
  undefined1 auVar51 [16];
  undefined6 uVar52;
  undefined2 uVar53;
  uint3 uVar54;
  undefined7 uVar55;
  char cVar56;
  char cVar57;
  undefined1 uVar58;
  uint uVar59;
  undefined4 uVar60;
  int iVar61;
  undefined8 *puVar62;
  undefined1 (*pauVar63) [16];
  undefined8 uVar64;
  undefined8 *puVar65;
  long lVar66;
  ulong uVar67;
  undefined8 *puVar68;
  long *plVar69;
  undefined8 *puVar70;
  undefined1 *puVar71;
  long lVar72;
  undefined4 *puVar73;
  long lVar74;
  long *plVar75;
  undefined1 (*pauVar76) [16];
  undefined8 uVar77;
  ulong uVar78;
  char *pcVar79;
  undefined1 (*pauVar80) [16];
  long lVar81;
  undefined *puVar82;
  undefined1 (*pauVar83) [16];
  long *plVar84;
  bool bVar85;
  float fVar86;
  undefined8 uStack_318;
  char cStack_310;
  undefined2 uStack_30f;
  undefined4 uStack_30d;
  uint uStack_309;
  undefined4 uStack_305;
  undefined1 uStack_301;
  char cStack_300;
  undefined7 uStack_2ff;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2d8 [8];
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  char cStack_2b0;
  undefined6 uStack_2af;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  long *plStack_2a0;
  long lStack_298;
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (**ppauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  long *plStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined1 auStack_1c8 [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (**ppauStack_1a0) [16];
  undefined1 (**ppauStack_198) [16];
  undefined1 (**ppauStack_190) [16];
  undefined1 (**ppauStack_188) [16];
  undefined1 (**ppauStack_180) [16];
  undefined1 (**ppauStack_178) [16];
  undefined1 (**ppauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  long lStack_148;
  undefined1 *puStack_140;
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  long *plStack_128;
  undefined1 (*pauStack_120) [16];
  undefined1 auStack_118 [16];
  undefined1 (**ppauStack_108) [16];
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 (*pauStack_c0) [16];
  long lStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  long *plStack_88;
  long *plStack_80;
  undefined1 (*pauStack_78) [16];
  undefined8 *puStack_70;
  undefined1 (*pauStack_68) [16];
  undefined1 (*pauStack_60) [16];
  undefined8 *puStack_58;
  undefined1 (*pauStack_50) [16];
  undefined1 (*pauStack_48) [16];
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *(undefined **)*(undefined1 (*) [16])param_1 = &UNK_0f534768;
  puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  pauVar83 = (undefined1 (*) [16])param_1;
  puStack_2c0 = param_2;
  if (puVar62 == (undefined8 *)0x0) goto LAB_0c988874;
  do {
    puVar68 = puStack_2c0;
    *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
    *puVar62 = &UNK_0ef44a60;
    *(undefined1 *)(puVar62 + 3) = 1;
    *(undefined8 **)(*pauVar83 + 8) = puVar62 + 3;
    *(undefined8 **)pauVar83[1] = puVar62;
    *(undefined **)*pauVar83 = &UNK_0f3e7080;
    *(undefined **)(pauVar83[1] + 8) = &UNK_0f3e7d78;
    *(undefined **)pauVar83[2] = &UNK_0f3e7dd8;
    puStack_270 = (undefined8 *)(pauVar83[2] + 8);
    pcVar79 = (char *)*puStack_2c0;
    *(char **)(pauVar83[2] + 8) = pcVar79;
    lVar66 = puStack_2c0[1];
    *(long *)pauVar83[3] = lVar66;
    if (lVar66 != 0) {
      LOCK();
      *(long *)(lVar66 + 8) = *(long *)(lVar66 + 8) + 1;
      UNLOCK();
      pcVar79 = (char *)*puStack_270;
    }
    *(undefined8 *)(pauVar83[3] + 8) = puStack_2c0[2];
    param_1 = (undefined1  [8])pauVar83;
    if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0')) {
      pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
      if (pauVar63 == (undefined1 (*) [16])0x0) {
        func_0x0eec74c0(0x68,0);
      }
      pauVar63[1] = (undefined1  [16])0x0;
      *pauVar63 = (undefined1  [16])0x0;
      *(undefined4 *)pauVar63[2] = 0x3f800000;
      *(undefined1 (*) [16])(pauVar63[2] + 8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar63[3] + 8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar63[4] + 8) = (undefined1  [16])0x0;
      auStack_2f8 = (undefined1  [16])0x0;
      uStack_305 = 0;
      uStack_301 = 0;
      cStack_300 = '\0';
      uStack_2ff = 0;
      uStack_318._0_1_ = '\0';
      uStack_318._1_6_ = 0;
      uStack_318._7_1_ = 0;
      cStack_310 = '\0';
      uStack_30f = 0;
      uStack_30d = 0;
      uStack_309 = 0;
      uVar64 = func_0x05346800(pauVar63 + 4,&uStack_318);
      lVar66 = CONCAT71(uStack_2ff,cStack_300);
      *(undefined8 *)(pauVar63[4] + 8) = uVar64;
      if (lVar66 != 0) {
        auStack_2f8._0_8_ = lVar66;
        func_0x0412a280(lVar66,auStack_2f8._8_8_ - lVar66);
      }
      lVar66 = CONCAT17(uStack_318._7_1_,CONCAT61(uStack_318._1_6_,(char)uStack_318));
      if (lVar66 != 0) {
        cStack_310 = (char)uStack_318;
        uStack_30f = (undefined2)uStack_318._1_6_;
        uStack_30d = (undefined4)((uint6)uStack_318._1_6_ >> 0x10);
        uStack_309 = CONCAT31(uStack_309._1_3_,uStack_318._7_1_);
        func_0x0412a280(lVar66,CONCAT17(uStack_301,CONCAT43(uStack_305,uStack_309._1_3_)) - lVar66);
      }
      *(undefined8 *)(pauVar63[5] + 8) = 0;
      pauVar63[6][0] = 1;
      puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (puVar62 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      *puVar62 = &UNK_0f534768;
      puVar65 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar65 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *(undefined1 (*) [16])(puVar65 + 1) = (undefined1  [16])0x0;
      *puVar65 = &UNK_0ef44a60;
      *(undefined1 *)(puVar65 + 3) = 1;
      puVar62[1] = puVar65 + 3;
      puVar62[2] = puVar65;
      *(undefined8 **)pauVar83[4] = puVar62;
      *(undefined1 (**) [16])(pauVar83[4] + 8) = pauVar63;
      pauVar83[5] = (undefined1  [16])0x0;
      pauVar83[6] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar83[7] = 0;
      uVar64 = puVar68[0x14];
      puVar68[0x14] = 0;
      *(undefined8 *)(pauVar83[7] + 8) = uVar64;
      pcVar79 = (char *)puVar68[0x21];
      *(char **)pauVar83[8] = pcVar79;
      lVar66 = puVar68[0x22];
      *(long *)(pauVar83[8] + 8) = lVar66;
      if (lVar66 != 0) {
        LOCK();
        *(long *)(lVar66 + 8) = *(long *)(lVar66 + 8) + 1;
        UNLOCK();
        pcVar79 = *(char **)pauVar83[8];
      }
      *(undefined8 *)pauVar83[9] = puVar68[0x23];
      if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0')) {
        *(undefined1 (*) [16])(pauVar83[10] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar83[9] + 8) = (undefined1  [16])0x0;
        *(undefined4 *)(pauVar83[0xb] + 8) = 0x3f800000;
        lVar66 = puVar68[0x1f];
        uVar7 = *(undefined4 *)((long)puVar68 + 0xf4);
        uVar60 = *(undefined4 *)(puVar68 + 0x1f);
        uVar13 = *(undefined4 *)((long)puVar68 + 0xfc);
        *(undefined4 *)pauVar83[0xc] = *(undefined4 *)(puVar68 + 0x1e);
        *(undefined4 *)(pauVar83[0xc] + 4) = uVar7;
        *(undefined4 *)(pauVar83[0xc] + 8) = uVar60;
        *(undefined4 *)(pauVar83[0xc] + 0xc) = uVar13;
        if (lVar66 != 0) {
          LOCK();
          plVar69 = (long *)(lVar66 + 8);
          *plVar69 = *plVar69 + 1;
          UNLOCK();
        }
        *(undefined8 *)pauVar83[0xd] = puVar68[0x20];
        pauStack_c0 = pauVar83 + 0xf;
        *(undefined1 (*) [16])(pauVar83[0xd] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar83[0xe] + 8) = (undefined1  [16])0x0;
        pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (pauVar63 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x50,0);
        }
        pauVar63[2] = (undefined1  [16])0x0;
        pauVar63[3] = (undefined1  [16])0x0;
        pauVar63[4] = (undefined1  [16])0x0;
        pauVar63[1] = (undefined1  [16])0x0;
        *pauVar63 = (undefined1  [16])0x0;
        *(undefined4 *)pauVar63[2] = 0x3f800000;
        *(undefined1 (*) [16])(pauVar63[2] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar63[3] + 8) = (undefined1  [16])0x0;
        *(undefined4 *)(pauVar63[4] + 8) = 0x3f800000;
        uStack_318._0_1_ = (char)pauVar63;
        uStack_318._1_6_ = (undefined6)((ulong)pauVar63 >> 8);
        uStack_318._7_1_ = (undefined1)((ulong)pauVar63 >> 0x38);
        *(undefined1 (**) [16])(pauVar83[0xf] + 8) = pauVar63;
        puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar62 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
        *puVar62 = &UNK_0f3e9850;
        puVar62[3] = pauVar63;
        *(undefined8 **)pauVar83[0x10] = puVar62;
        pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (pauVar63 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x18,0);
        }
        *pauVar63 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar63[1] = 0;
        uStack_318._0_1_ = (char)pauVar63;
        uStack_318._1_6_ = (undefined6)((ulong)pauVar63 >> 8);
        uStack_318._7_1_ = (undefined1)((ulong)pauVar63 >> 0x38);
        *(undefined1 (**) [16])(pauVar83[0x10] + 8) = pauVar63;
        puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar62 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
        *puVar62 = &UNK_0f3e97b0;
        puVar62[3] = pauVar63;
        *(undefined8 **)pauVar83[0x11] = puVar62;
        if ((puStack_2c0[0x21] == 0) &&
           (cVar56 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f91c7),
           cVar56 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)puStack_2c0[0x21] == '\0') &&
           (cVar56 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f91c7),
           cVar56 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar64 = puStack_2c0[5];
        lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
        if (lVar66 == 0) {
          func_0x0eec74c0(0x1d0,0);
        }
        func_0x0c9c8be0(lVar66,pauVar83,uVar64);
        *(long *)(pauVar83[0x11] + 8) = lVar66;
        *(undefined8 *)pauVar83[0x12] = 0;
        pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (pauVar63 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x28,0);
        }
        pauVar63[1] = (undefined1  [16])0x0;
        *pauVar63 = (undefined1  [16])0x0;
        *(undefined4 *)pauVar63[2] = 0x3f800000;
        *(undefined1 (**) [16])(pauVar83[0x12] + 8) = pauVar63;
        pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (pauVar63 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x30,0);
        }
        pauVar63[2] = (undefined1  [16])0x0;
        pauVar63[1] = (undefined1  [16])0x0;
        *pauVar63 = (undefined1  [16])0x0;
        *(undefined1 (**) [16])pauVar83[0x13] = pauVar63;
        pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (pauVar63 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x28,0);
        }
        pauVar63[1] = (undefined1  [16])0x0;
        *pauVar63 = (undefined1  [16])0x0;
        *(undefined4 *)pauVar63[2] = 0x3f800000;
        func_0x0bcd0610(pauVar63);
        puVar62 = puStack_2c0;
        *(undefined1 (**) [16])(pauVar83[0x13] + 8) = pauVar63;
        pauStack_48 = pauVar83 + 0x14;
        (*(code *)puStack_2c0[0x19])(pauStack_48,puStack_2c0[0x1a],pauVar63);
        if (*(char *)((long)puVar62 + 0x71) == '\x01') {
          puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
          if (puVar62 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x80,0);
          }
          *puVar62 = &UNK_0f3eb5c8;
          *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar62 + 3) = (undefined1  [16])0x0;
          puVar62[5] = 0;
          *(undefined1 (*) [16])(puVar62 + 7) = (undefined1  [16])0x0;
          puVar62[6] = puVar62 + 7;
          *(undefined1 (*) [16])(puVar62 + 9) = (undefined1  [16])0x0;
          puVar62[0xb] = 0;
          puVar62[0xc] = pauVar83;
          lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10000);
          if (lVar66 == 0) {
            func_0x0eec74c0(0x10000,0);
          }
          puVar62[9] = lVar66;
          puVar62[10] = lVar66;
          puVar62[0xb] = lVar66 + 0x10000;
          *puVar62 = &UNK_0f3ea6d0;
          *(undefined1 (*) [16])(puVar62 + 0xe) = (undefined1  [16])0x0;
          puVar62[0xd] = puVar62 + 0xe;
        }
        else {
          puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
          if (puVar62 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x68,0);
          }
          *puVar62 = &UNK_0f3eb5c8;
          *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar62 + 3) = (undefined1  [16])0x0;
          puVar62[5] = 0;
          *(undefined1 (*) [16])(puVar62 + 7) = (undefined1  [16])0x0;
          puVar62[6] = puVar62 + 7;
          *(undefined1 (*) [16])(puVar62 + 9) = (undefined1  [16])0x0;
          puVar62[0xb] = 0;
          puVar62[0xc] = pauVar83;
          lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10000);
          if (lVar66 == 0) {
            func_0x0eec74c0(0x10000,0);
          }
          puVar62[9] = lVar66;
          puVar62[10] = lVar66;
          puVar62[0xb] = lVar66 + 0x10000;
        }
        *(undefined8 **)(pauVar83[0x14] + 8) = puVar62;
        pauVar83[0x15] = (undefined1  [16])0x0;
        pauVar83[0x16] = (undefined1  [16])0x0;
        puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa58);
        if (puVar62 == (undefined8 *)0x0) {
          func_0x0eec74c0(0xa58,0);
        }
        *(undefined1 *)(puVar62 + 1) = 0;
        uVar64 = _UNK_01d3ab08;
        puVar62[2] = _DAT_01d3ab00;
        puVar62[3] = uVar64;
        puVar62[4] = _DAT_01d3ab10;
        *puVar62 = &UNK_0f3e4370;
        puVar62[5] = pauVar83;
        uVar67 = (**(code **)(*(long *)*pauVar83 + 0x438))(pauVar83);
        pauStack_120 = pauVar83 + 0x17;
        puVar62[6] = &UNK_0f147b18;
        puVar62[7] = &UNK_0f5356d0;
        puVar62[0x143] = 0x100000000000000;
        *(int *)(puVar62 + 8) = (int)uVar67;
        *(undefined4 *)((long)puVar62 + 0xa0c) = 0;
        puVar62[0x142] = 0;
        *(int *)((long)puVar62 + 0x44) = (int)uVar67;
        lVar66 = 0x13;
        while( true ) {
          uVar67 = ((ulong)(((uint)(uVar67 >> 0x1e) & 3 ^ (uint)uVar67) * 0x6c078965) + lVar66) -
                   0x12;
          uVar59 = (uint)uVar67;
          *(uint *)((long)puVar62 + lVar66 * 4 + -4) = uVar59;
          if (lVar66 == 0x19f) break;
          uVar59 = (((uint)(uVar67 >> 0x1e) & 3 ^ uVar59) * 0x6c078965 + (int)lVar66) - 0x11;
          uVar67 = (ulong)uVar59;
          *(uint *)((long)puVar62 + lVar66 * 4) = uVar59;
          lVar66 = lVar66 + 2;
        }
        *(undefined8 *)((long)puVar62 + 0xa04) = 0x18e00000270;
        *(undefined1 *)(puVar62 + 0x144) = 1;
        puVar62[0x145] = puVar62 + 7;
        *(undefined1 (*) [16])(puVar62 + 0x146) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar62 + 0x148) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar62 + 0x14a) = 0x3f800000;
        puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (puVar68 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x18,0);
        }
        *puVar68 = &UNK_0f534768;
        puVar65 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar65 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *(undefined1 (*) [16])(puVar65 + 1) = (undefined1  [16])0x0;
        *puVar65 = &UNK_0ef44a60;
        *(undefined1 *)(puVar65 + 3) = 1;
        puVar68[1] = puVar65 + 3;
        puVar68[2] = puVar65;
        *(undefined8 **)pauVar83[0x17] = puVar68;
        *(undefined8 **)(pauVar83[0x17] + 8) = puVar62;
        lVar66 = puStack_2c0[0x13];
        uVar64 = puStack_2c0[0x13];
        *(undefined8 *)pauVar83[0x18] = puStack_2c0[0x12];
        *(undefined8 *)(pauVar83[0x18] + 8) = uVar64;
        if (lVar66 != 0) {
          LOCK();
          plVar69 = (long *)(lVar66 + 0x10);
          *plVar69 = *plVar69 + 1;
          UNLOCK();
        }
        pauStack_50 = pauVar83 + 0x19;
        pcVar79 = (char *)puStack_2c0[0xf];
        *(char **)pauVar83[0x19] = pcVar79;
        lVar66 = puStack_2c0[0x10];
        *(long *)(pauVar83[0x19] + 8) = lVar66;
        if (lVar66 != 0) {
          LOCK();
          *(long *)(lVar66 + 8) = *(long *)(lVar66 + 8) + 1;
          UNLOCK();
          pcVar79 = *(char **)*pauStack_50;
        }
        *(undefined8 *)pauVar83[0x1a] = puStack_2c0[0x11];
        if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0')) {
          *(undefined8 *)(pauVar83[0x1a] + 8) = 0;
          if ((DAT_0f6ec688 == '\0') && (iVar61 = FUN_04108328(&DAT_0f6ec688), iVar61 != 0)) {
            _DAT_0f6ec678 = (code *)&UNK_0c9f0390;
            _DAT_0f6ec680 = &UNK_0c9f0620;
            func_0x0410844d(&DAT_0f6ec688);
          }
          uVar64 = (*_DAT_0f6ec678)(0);
          *(undefined8 *)pauVar83[0x1b] = uVar64;
          puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
          if (puVar62 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x78,0);
          }
          *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
          *puVar62 = &UNK_0f3e99d0;
          func_0x0bbab810(puVar62 + 3,*(undefined1 *)(puStack_2c0 + 0x24));
          *(undefined8 **)(pauVar83[0x1b] + 8) = puVar62 + 3;
          *(undefined8 **)pauVar83[0x1c] = puVar62;
          lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x130);
          if (lVar66 == 0) {
            func_0x0eec74c0(0x130,0);
          }
          memset(lVar66,0,0x110);
          *(undefined4 *)(lVar66 + 0x18) = 3;
          *(undefined1 (*) [16])(lVar66 + 0x40) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0x20) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0x30) = (undefined1  [16])0x0;
          *(undefined4 *)(lVar66 + 0x48) = 0xffffffff;
          uVar64 = _DAT_01e7b2b0;
          *(undefined8 *)(lVar66 + 0x50) = _DAT_01e7b2b0;
          uVar7 = _DAT_01e7b2b8;
          *(undefined4 *)(lVar66 + 0x58) = _DAT_01e7b2b8;
          uVar77 = _DAT_01e7b2bc;
          *(undefined8 *)(lVar66 + 0x5c) = _DAT_01e7b2bc;
          uVar60 = _DAT_01e7b2c4;
          *(undefined4 *)(lVar66 + 100) = _DAT_01e7b2c4;
          *(undefined1 *)(lVar66 + 0x69) = 0;
          *(undefined1 (*) [16])(lVar66 + 0x6c) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0x75) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0x88) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar66 + 0x98) = 0;
          *(undefined4 *)(lVar66 + 0xa0) = 3;
          *(undefined1 (*) [16])(lVar66 + 200) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0xb8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0xa8) = (undefined1  [16])0x0;
          *(undefined4 *)(lVar66 + 0xd0) = 0xffffffff;
          *(undefined4 *)(lVar66 + 0xe0) = uVar7;
          *(undefined8 *)(lVar66 + 0xd8) = uVar64;
          *(undefined4 *)(lVar66 + 0xec) = uVar60;
          *(undefined8 *)(lVar66 + 0xe4) = uVar77;
          *(undefined1 *)(lVar66 + 0xf1) = 0;
          *(undefined1 (*) [16])(lVar66 + 0xfd) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0xf4) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0x120) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar66 + 0x110) = (undefined1  [16])0x0;
          puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (puVar62 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          *puVar62 = &UNK_0f534768;
          puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar68 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *(undefined1 (*) [16])(puVar68 + 1) = (undefined1  [16])0x0;
          *puVar68 = &UNK_0ef44a60;
          *(undefined1 *)(puVar68 + 3) = 1;
          puVar62[1] = puVar68 + 3;
          puVar62[2] = puVar68;
          *(undefined8 **)(pauVar83[0x1c] + 8) = puVar62;
          *(long *)pauVar83[0x1d] = lVar66;
          *(undefined1 (*) [16])(pauVar83[0x1d] + 8) = (undefined1  [16])0x0;
          *(undefined8 *)(pauVar83[0x1e] + 8) = 0;
          if (*(char *)(puStack_2c0 + 0x24) == '\x01') {
            puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa20);
            if (puVar62 == (undefined8 *)0x0) {
              func_0x0eec74c0(0xa20,0);
            }
            *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
            *puVar62 = &UNK_0f3e96c0;
            puVar62[3] = &UNK_0f3e6d70;
            func_0x0b5fb590(puVar62 + 4);
            puVar68 = puVar62 + 3;
          }
          else {
            puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa20);
            if (puVar62 == (undefined8 *)0x0) {
              func_0x0eec74c0(0xa20,0);
            }
            *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
            *puVar62 = &UNK_0f3e9710;
            puVar62[3] = &UNK_0f3e6d70;
            func_0x0b5fb590(puVar62 + 4);
            puVar68 = puVar62 + 3;
            *puVar68 = &UNK_0f3e4410;
          }
          *(undefined8 **)pauVar83[0x1f] = puVar68;
          *(undefined8 **)(pauVar83[0x1f] + 8) = puVar62;
          pauVar83[0x20] = (undefined1  [16])0x0;
          *(undefined8 *)pauVar83[0x21] = 0;
          pauVar83[0x21][8] = *(undefined1 *)(puStack_2c0 + 0x24);
          pauVar83[0x21][9] = *(undefined1 *)(puStack_2c0 + 0x1d);
          *(undefined2 *)(pauVar83[0x21] + 10) = 0;
          pauVar83[0x21][0xc] = 0;
          pauVar83[0x22] = (undefined1  [16])0x0;
          *(undefined8 *)pauVar83[0x23] = puStack_2c0[9];
          *(undefined1 (*) [16])(pauVar83[0x23] + 8) = (undefined1  [16])0x0;
          *(undefined8 *)(pauVar83[0x24] + 8) = 0;
          lVar66 = *(long *)(pauVar83[7] + 8);
          if (lVar66 == 0) {
            uStack_318._0_1_ = '\0';
            uStack_318._1_6_ = 0;
            uStack_318._7_1_ = 0;
            cStack_310 = 0;
            uStack_30f = 0;
            uStack_30d = 0;
            uStack_309 = 0;
            uStack_305 = 0;
            uStack_301 = 0;
LAB_0c97f89f:
            puStack_58 = (undefined8 *)(pauVar83[0x10] + 8);
            plVar69 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
            if (plVar69 == (long *)0x0) {
              func_0x0eec74c0(0x80,0);
            }
            plVar75 = (long *)CONCAT17((byte)uStack_309,
                                       CONCAT43(uStack_30d,CONCAT21(uStack_30f,cStack_310)));
            if (plVar75 != (long *)0x0) {
              LOCK();
              plVar75[1] = plVar75[1] + 1;
              UNLOCK();
            }
            pauStack_60 = pauVar83 + 0x25;
            lVar72 = CONCAT17(uStack_301,CONCAT43(uStack_305,uStack_309._1_3_));
            plVar69[1] = 0;
            plVar69[2] = 0;
            *plVar69 = (long)(plVar69 + 1);
            plVar69[3] = 0;
            plVar69[4] = 0;
            plVar69[5] = 0;
            plVar69[6] = 0;
            *(undefined4 *)(plVar69 + 7) = 0x3f800000;
            *(undefined1 *)(plVar69 + 8) = 0;
            plVar69[9] = CONCAT17(uStack_318._7_1_,CONCAT61(uStack_318._1_6_,(char)uStack_318));
            plVar69[10] = CONCAT17((byte)uStack_309,
                                   CONCAT43(uStack_30d,CONCAT21(uStack_30f,cStack_310)));
            if (plVar75 == (long *)0x0) {
              plVar69[0xb] = lVar72;
              plVar69[0xc] = 0;
              plVar69[0xd] = 0;
              plVar69[0xe] = 0;
              plVar69[0xf] = 0;
              *(long **)*pauStack_60 = plVar69;
            }
            else {
              LOCK();
              plVar75[1] = plVar75[1] + 1;
              UNLOCK();
              plVar69[0xb] = lVar72;
              plVar69[0xc] = 0;
              plVar69[0xd] = 0;
              plVar69[0xe] = 0;
              plVar69[0xf] = 0;
              *(long **)*pauStack_60 = plVar69;
              LOCK();
              plVar69 = plVar75 + 1;
              lVar72 = *plVar69;
              *plVar69 = *plVar69 + -1;
              UNLOCK();
              if (lVar72 == 0) {
                (**(code **)(*plVar75 + 0x10))(plVar75);
                func_0x0412c2d0(plVar75);
              }
            }
            plVar69 = (long *)CONCAT17((byte)uStack_309,
                                       CONCAT43(uStack_30d,CONCAT21(uStack_30f,cStack_310)));
            uStack_318._0_1_ = '\0';
            uStack_318._1_6_ = 0;
            uStack_318._7_1_ = 0;
            cStack_310 = '\0';
            uStack_30f = 0;
            uStack_30d = 0;
            uStack_309 = uStack_309 & 0xffffff00;
            if (plVar69 == (long *)0x0) {
              uStack_309 = 0;
              uStack_305 = 0;
              uStack_301 = 0;
            }
            else {
              LOCK();
              plVar75 = plVar69 + 1;
              lVar72 = *plVar75;
              *plVar75 = *plVar75 + -1;
              UNLOCK();
              if (lVar72 == 0) {
                (**(code **)(*plVar69 + 0x10))(plVar69);
                func_0x0412c2d0(plVar69);
              }
              plVar69 = (long *)CONCAT17((byte)uStack_309,
                                         CONCAT43(uStack_30d,CONCAT21(uStack_30f,cStack_310)));
              uStack_309 = uStack_309 & 0xff;
              uStack_305 = 0;
              uStack_301 = 0;
              if (plVar69 != (long *)0x0) {
                LOCK();
                plVar75 = plVar69 + 1;
                lVar72 = *plVar75;
                *plVar75 = *plVar75 + -1;
                UNLOCK();
                if (lVar72 == 0) {
                  (**(code **)(*plVar69 + 0x10))(plVar69);
                  func_0x0412c2d0(plVar69);
                }
              }
            }
            if (lVar66 != 0) {
              uVar64 = auStack_e8._8_8_;
              auStack_e8 = (undefined1  [16])0x0;
              if ((long *)uVar64 != (long *)0x0) {
                LOCK();
                plVar69 = (long *)(uVar64 + 8);
                lVar66 = *plVar69;
                *plVar69 = *plVar69 + -1;
                UNLOCK();
                if (lVar66 == 0) {
                  (**(code **)(*(long *)uVar64 + 0x10))(uVar64);
                  func_0x0412c2d0(uVar64);
                }
                uVar64 = auStack_e8._8_8_;
                uStack_d8 = 0;
                if ((long *)auStack_e8._8_8_ != (long *)0x0) {
                  LOCK();
                  plVar69 = (long *)(auStack_e8._8_8_ + 8);
                  lVar66 = *plVar69;
                  *plVar69 = *plVar69 + -1;
                  UNLOCK();
                  if (lVar66 == 0) {
                    (**(code **)(*(long *)auStack_e8._8_8_ + 0x10))(auStack_e8._8_8_);
                    func_0x0412c2d0(uVar64);
                  }
                }
              }
            }
            pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (pauVar63 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(0x28,0);
            }
            pauVar63[1] = (undefined1  [16])0x0;
            *pauVar63 = (undefined1  [16])0x0;
            *(undefined4 *)pauVar63[2] = 0x3f800000;
            puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (puVar62 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            *puVar62 = &UNK_0f534768;
            puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (puVar68 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x20,0);
            }
            *(undefined1 (*) [16])(puVar68 + 1) = (undefined1  [16])0x0;
            *puVar68 = &UNK_0ef44a60;
            *(undefined1 *)(puVar68 + 3) = 1;
            puVar62[1] = puVar68 + 3;
            puVar62[2] = puVar68;
            *(undefined8 **)(pauVar83[0x25] + 8) = puVar62;
            *(undefined1 (**) [16])pauVar83[0x26] = pauVar63;
            pauVar63 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (pauVar63 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(0x28,0);
            }
            pauVar63[1] = (undefined1  [16])0x0;
            *pauVar63 = (undefined1  [16])0x0;
            *(undefined4 *)pauVar63[2] = 0x3f800000;
            *(undefined1 (**) [16])(pauVar83[0x26] + 8) = pauVar63;
            pauVar83[0x27][0] = 0;
            *(undefined8 *)(pauVar83[0x27] + 8) = puStack_2c0[5];
            cVar56 = *(char *)(puStack_2c0 + 0x24);
            lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
            if (lVar66 == 0) {
              func_0x0eec74c0(0x98,0);
            }
            if (cVar56 == '\0') {
              func_0x0c9216b0(lVar66);
              puVar62 = puStack_2c0;
              puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (puVar68 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              *puVar68 = &UNK_0f534768;
              puVar65 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              if (puVar65 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x20,0);
                puVar65 = (undefined8 *)0x0;
              }
            }
            else {
              func_0x0c9ea420(lVar66);
              puVar62 = puStack_2c0;
              puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (puVar68 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              *puVar68 = &UNK_0f534768;
              puVar65 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              if (puVar65 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x20,0);
                puVar65 = (undefined8 *)0x0;
              }
            }
            *(undefined1 (*) [16])(puVar65 + 1) = (undefined1  [16])0x0;
            *puVar65 = &UNK_0ef44a60;
            *(undefined1 *)(puVar65 + 3) = 1;
            puVar68[1] = puVar65 + 3;
            puVar68[2] = puVar65;
            *(undefined8 **)pauVar83[0x28] = puVar68;
            *(long *)(pauVar83[0x28] + 8) = lVar66;
            if (lVar66 != 0) {
              uVar59 = uStack_309 >> 8;
              pcVar79 = (char *)puVar68[1];
              LOCK();
              puVar65[1] = puVar65[1] + 1;
              UNLOCK();
              cStack_310 = (char)puVar65;
              uStack_30f = (undefined2)((ulong)puVar65 >> 8);
              uStack_30d = (undefined4)((ulong)puVar65 >> 0x18);
              uStack_309._0_1_ = (byte)((ulong)puVar65 >> 0x38);
              uStack_309 = CONCAT31((int3)uVar59,(byte)uStack_309);
              uStack_318._0_1_ = (char)pcVar79;
              uStack_318._1_6_ = (undefined6)((ulong)pcVar79 >> 8);
              uStack_318._7_1_ = (undefined1)((ulong)pcVar79 >> 0x38);
              if (pcVar79 != (char *)0x0) {
                plVar69 = *(long **)(pauVar83[0x28] + 8);
                uStack_309._1_3_ = (uint3)plVar69;
                uStack_305 = (undefined4)((ulong)plVar69 >> 0x18);
                uStack_301 = (undefined1)((ulong)plVar69 >> 0x38);
                if (*pcVar79 != '\0') {
                  (**(code **)(*plVar69 + 0x28))(auStack_b0);
                  pauStack_68 = pauVar83 + 0x29;
                  (*(code *)puVar62[3])(pauStack_68,puVar62[4],auStack_b0);
                  uVar64 = auStack_b0._8_8_;
                  auStack_b0 = (undefined1  [16])0x0;
                  if ((long *)uVar64 == (long *)0x0) {
                    uStack_a0 = 0;
                  }
                  else {
                    LOCK();
                    plVar69 = (long *)(uVar64 + 8);
                    lVar66 = *plVar69;
                    *plVar69 = *plVar69 + -1;
                    UNLOCK();
                    if (lVar66 == 0) {
                      (**(code **)(*(long *)uVar64 + 0x10))(uVar64);
                      func_0x0412c2d0(uVar64);
                    }
                    uVar64 = auStack_b0._8_8_;
                    uStack_a0 = 0;
                    if ((long *)auStack_b0._8_8_ != (long *)0x0) {
                      LOCK();
                      plVar69 = (long *)(auStack_b0._8_8_ + 8);
                      lVar66 = *plVar69;
                      *plVar69 = *plVar69 + -1;
                      UNLOCK();
                      if (lVar66 == 0) {
                        (**(code **)(*(long *)auStack_b0._8_8_ + 0x10))(auStack_b0._8_8_);
                        func_0x0412c2d0(uVar64);
                      }
                    }
                  }
                  plVar69 = (long *)CONCAT17((byte)uStack_309,
                                             CONCAT43(uStack_30d,CONCAT21(uStack_30f,cStack_310)));
                  uStack_318._0_1_ = '\0';
                  uStack_318._1_6_ = 0;
                  uStack_318._7_1_ = 0;
                  cStack_310 = '\0';
                  uStack_30f = 0;
                  uStack_30d = 0;
                  uStack_309 = uStack_309 & 0xffffff00;
                  if (plVar69 != (long *)0x0) {
                    LOCK();
                    plVar75 = plVar69 + 1;
                    lVar66 = *plVar75;
                    *plVar75 = *plVar75 + -1;
                    UNLOCK();
                    if (lVar66 == 0) {
                      (**(code **)(*plVar69 + 0x10))(plVar69);
                      func_0x0412c2d0(plVar69);
                    }
                    plVar69 = (long *)CONCAT17((byte)uStack_309,
                                               CONCAT43(uStack_30d,CONCAT21(uStack_30f,cStack_310)))
                    ;
                    uStack_309 = uStack_309 & 0xff;
                    uStack_305 = 0;
                    uStack_301 = 0;
                    if (plVar69 != (long *)0x0) {
                      LOCK();
                      plVar75 = plVar69 + 1;
                      lVar66 = *plVar75;
                      *plVar75 = *plVar75 + -1;
                      UNLOCK();
                      if (lVar66 == 0) {
                        (**(code **)(*plVar69 + 0x10))(plVar69);
                        func_0x0412c2d0(plVar69);
                      }
                    }
                  }
                  puStack_70 = (undefined8 *)(pauVar83[0x29] + 8);
                  pcVar79 = (char *)puVar62[6];
                  *(char **)(pauVar83[0x29] + 8) = pcVar79;
                  lVar66 = puVar62[7];
                  *(long *)pauVar83[0x2a] = lVar66;
                  if (lVar66 != 0) {
                    LOCK();
                    *(long *)(lVar66 + 8) = *(long *)(lVar66 + 8) + 1;
                    UNLOCK();
                    pcVar79 = (char *)*puStack_70;
                  }
                  *(undefined8 *)(pauVar83[0x2a] + 8) = puVar62[8];
                  if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0')) {
                    if ((puVar62[0x21] == 0) &&
                       (cVar56 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                                 &UNK_013f91c7), puVar62 = puStack_2c0,
                       cVar56 != '\0')) {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                    if ((*(char *)puVar62[0x21] == '\0') &&
                       (cVar56 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                                 &UNK_013f91c7), puVar62 = puStack_2c0,
                       cVar56 != '\0')) {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                    uVar7 = *(undefined4 *)(puVar62[0x23] + 0x328);
                    uVar64 = *(undefined8 *)(pauVar83[0x27] + 8);
                    puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
                    if (puVar62 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x60,0);
                    }
                    uVar5 = pauVar83[0x21][8];
                    *puVar62 = uVar64;
                    *(undefined4 *)(puVar62 + 1) = uVar7;
                    *(undefined1 *)((long)puVar62 + 0xc) = uVar5;
                    puVar62[2] = 0;
                    puVar62[8] = 0;
                    *(undefined1 *)(puVar62 + 10) = 0;
                    *(undefined1 *)((long)puVar62 + 0x51) = uVar5;
                    puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                    if (puVar68 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x18,0);
                    }
                    *puVar68 = &UNK_0f534768;
                    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                    puVar65 = puStack_2c0;
                    if (puVar70 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x20,0);
                    }
                    *(undefined1 (*) [16])(puVar70 + 1) = (undefined1  [16])0x0;
                    *puVar70 = &UNK_0ef44a60;
                    *(undefined1 *)(puVar70 + 3) = 1;
                    puVar68[1] = puVar70 + 3;
                    puVar68[2] = puVar70;
                    *(undefined8 **)pauVar83[0x2b] = puVar68;
                    *(undefined8 **)(pauVar83[0x2b] + 8) = puVar62;
                    pauVar83[0x2c] = (undefined1  [16])0x0;
                    lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
                    if (lVar66 == 0) {
                      func_0x0eec74c0(0x1b0,0);
                    }
                    func_0x0d328830(lVar66);
                    puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                    if (puVar62 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x18,0);
                    }
                    *puVar62 = &UNK_0f534768;
                    puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                    if (puVar68 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x20,0);
                    }
                    *(undefined1 (*) [16])(puVar68 + 1) = (undefined1  [16])0x0;
                    *puVar68 = &UNK_0ef44a60;
                    *(undefined1 *)(puVar68 + 3) = 1;
                    puVar62[1] = puVar68 + 3;
                    puVar62[2] = puVar68;
                    *(undefined8 **)pauVar83[0x2d] = puVar62;
                    *(long *)(pauVar83[0x2d] + 8) = lVar66;
                    pauVar63 = (undefined1 (*) [16])
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                    if (pauVar63 == (undefined1 (*) [16])0x0) {
                      func_0x0eec74c0(0x50,0);
                    }
                    pauVar63[2] = (undefined1  [16])0x0;
                    pauVar63[3] = (undefined1  [16])0x0;
                    pauVar63[4] = (undefined1  [16])0x0;
                    pauVar63[1] = (undefined1  [16])0x0;
                    *pauVar63 = (undefined1  [16])0x0;
                    *(undefined4 *)pauVar63[2] = 0x3f800000;
                    *(undefined1 (*) [16])(pauVar63[2] + 8) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(pauVar63[3] + 8) = (undefined1  [16])0x0;
                    *(undefined4 *)(pauVar63[4] + 8) = 0x3f800000;
                    puVar62 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                    if (puVar62 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x18,0);
                    }
                    *puVar62 = &UNK_0f534768;
                    puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                    if (puVar68 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x20,0);
                    }
                    *(undefined1 (*) [16])(puVar68 + 1) = (undefined1  [16])0x0;
                    *puVar68 = &UNK_0ef44a60;
                    *(undefined1 *)(puVar68 + 3) = 1;
                    puVar62[1] = puVar68 + 3;
                    puVar62[2] = puVar68;
                    *(undefined8 **)pauVar83[0x2e] = puVar62;
                    *(undefined1 (**) [16])(pauVar83[0x2e] + 8) = pauVar63;
                    pauStack_1b8 = (undefined1 (*) [16])0x0;
                    pcVar79 = *(char **)*(undefined1 (*) [16])(*pauVar83 + 8);
                    auStack_1c8 = *(undefined1 (*) [16])(*pauVar83 + 8);
                    if (*(long *)pauVar83[1] == 0) {
                      auStack_1c8._8_8_ = 0;
                      auStack_1c8._0_8_ = pcVar79;
                    }
                    else {
                      LOCK();
                      plVar69 = (long *)(*(long *)pauVar83[1] + 8);
                      *plVar69 = *plVar69 + 1;
                      UNLOCK();
                    }
                    if ((pcVar79 != (char *)0x0) && (pauStack_1b8 = pauVar83, *pcVar79 != '\0')) {
                      (*(code *)puVar65[0x1b])
                                (&lStack_b8,puVar65[0x1c],auStack_1c8,
                                 *(long *)(pauVar83[0x2d] + 8) + 0x170);
                      lVar66 = lStack_b8;
                      pauStack_1e0 = pauVar83 + 0x2f;
                      lStack_b8 = 0;
                      *(long *)*pauStack_1e0 = lVar66;
                      if (lVar66 != 0) {
                        uVar64 = auStack_1c8._8_8_;
                        auStack_1c8 = (undefined1  [16])0x0;
                        if ((long *)uVar64 == (long *)0x0) {
                          pauStack_1b8 = (undefined1 (*) [16])0x0;
                        }
                        else {
                          LOCK();
                          plVar69 = (long *)(uVar64 + 8);
                          lVar66 = *plVar69;
                          *plVar69 = *plVar69 + -1;
                          UNLOCK();
                          if (lVar66 == 0) {
                            (**(code **)(*(long *)uVar64 + 0x10))(uVar64);
                            func_0x0412c2d0(uVar64);
                          }
                          uVar64 = auStack_1c8._8_8_;
                          pauStack_1b8 = (undefined1 (*) [16])0x0;
                          if ((long *)auStack_1c8._8_8_ != (long *)0x0) {
                            LOCK();
                            plVar69 = (long *)(auStack_1c8._8_8_ + 8);
                            lVar66 = *plVar69;
                            *plVar69 = *plVar69 + -1;
                            UNLOCK();
                            if (lVar66 == 0) {
                              (**(code **)(*(long *)auStack_1c8._8_8_ + 0x10))(auStack_1c8._8_8_);
                              func_0x0412c2d0(uVar64);
                            }
                          }
                        }
                        lVar66 = puVar65[0xc];
                        uVar64 = puVar65[0xc];
                        *(undefined8 *)(pauVar83[0x2f] + 8) = puVar65[0xb];
                        *(undefined8 *)pauVar83[0x30] = uVar64;
                        if (lVar66 != 0) {
                          LOCK();
                          plVar69 = (long *)(lVar66 + 0x10);
                          *plVar69 = *plVar69 + 1;
                          UNLOCK();
                        }
                        *(undefined4 *)(pauVar83[0x30] + 8) = *(undefined4 *)(puVar65 + 0xd);
                        pauStack_228 = pauVar83 + 0x31;
                        plVar69 = (long *)puVar65[10];
                        lVar66 = *plVar69;
                        *(long *)pauVar83[0x31] = lVar66;
                        lVar72 = plVar69[1];
                        *(long *)(pauVar83[0x31] + 8) = lVar72;
                        if (lVar72 != 0) {
                          LOCK();
                          *(long *)(lVar72 + 8) = *(long *)(lVar72 + 8) + 1;
                          UNLOCK();
                          lVar66 = *(long *)*pauStack_228;
                        }
                        *(long *)pauVar83[0x32] = plVar69[2];
                        if ((lVar66 == 0) &&
                           (cVar56 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                                     &UNK_013b6dd1), cVar56 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        if ((**(char **)*pauStack_228 == '\0') &&
                           (cVar56 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41
                                                     ,&UNK_013b6dd1), cVar56 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        (**(code **)(**(long **)pauVar83[0x32] + 0x10))(&uStack_318);
                        puVar62 = (undefined8 *)
                                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
                        if (puVar62 == (undefined8 *)0x0) {
                          func_0x0eec74c0(0xb8,0);
                        }
                        *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
                        *puVar62 = &UNK_0f3e9800;
                        lVar66 = CONCAT17(uStack_318._7_1_,
                                          CONCAT61(uStack_318._1_6_,(char)uStack_318));
                        plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                   CONCAT43(uStack_30d,
                                                            CONCAT21(uStack_30f,cStack_310)));
                        uStack_318._0_1_ = '\0';
                        uStack_318._1_6_ = 0;
                        uStack_318._7_1_ = 0;
                        cStack_310 = '\0';
                        uStack_30f = 0;
                        uStack_30d = 0;
                        uStack_309 = uStack_309 & 0xffffff00;
                        if (lVar66 != 0) {
                          *(undefined2 *)(puVar62 + 3) = 0;
                          *(undefined1 *)((long)puVar62 + 0x1a) = 0;
                          puVar62[4] = 0;
                          puVar62[6] = puVar62 + 6;
                          puVar62[7] = puVar62 + 6;
                          *(undefined4 *)(puVar62 + 8) = 0;
                          *(undefined1 (*) [16])(puVar62 + 9) = (undefined1  [16])0x0;
                          *(undefined1 (*) [16])(puVar62 + 0xb) = (undefined1  [16])0x0;
                          *(undefined1 (*) [16])(puVar62 + 0xd) = (undefined1  [16])0x0;
                          puVar62[5] = &UNK_0f2bea68;
                          puVar62[0xf] = &UNK_0f2bea98;
                          puVar62[0x10] = lVar66;
                          puVar62[0x11] = plVar69;
                          if (plVar69 == (long *)0x0) {
                            puVar62[0x13] = puVar62 + 0x13;
                            puVar62[0x14] = puVar62 + 0x13;
                            *(undefined4 *)(puVar62 + 0x15) = 0;
                            puVar62[0x12] = &UNK_0f2beb10;
                            puVar62[0x16] = &UNK_0f2beb40;
                          }
                          else {
                            LOCK();
                            plVar69[2] = plVar69[2] + 1;
                            UNLOCK();
                            puVar62[0x13] = puVar62 + 0x13;
                            puVar62[0x14] = puVar62 + 0x13;
                            *(undefined4 *)(puVar62 + 0x15) = 0;
                            puVar62[0x12] = &UNK_0f2beb10;
                            puVar62[0x16] = &UNK_0f2beb40;
                            LOCK();
                            plVar75 = plVar69 + 1;
                            lVar66 = *plVar75;
                            *plVar75 = *plVar75 + -1;
                            UNLOCK();
                            if (lVar66 == 0) {
                              (**(code **)(*plVar69 + 0x10))(plVar69);
                              func_0x0412c2d0(plVar69);
                            }
                          }
                          *(undefined8 **)(pauVar83[0x32] + 8) = puVar62 + 3;
                          *(undefined8 **)pauVar83[0x33] = puVar62;
                          plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                     CONCAT43(uStack_30d,
                                                              CONCAT21(uStack_30f,cStack_310)));
                          if (plVar69 != (long *)0x0) {
                            LOCK();
                            plVar75 = plVar69 + 1;
                            lVar66 = *plVar75;
                            *plVar75 = *plVar75 + -1;
                            UNLOCK();
                            if (lVar66 == 0) {
                              (**(code **)(*plVar69 + 0x10))(plVar69);
                              func_0x0412c2d0(plVar69);
                            }
                          }
                          (**(code **)(*(long *)*pauVar83 + 0x3a8))(auStack_40,pauVar83);
                          puVar62 = puStack_2c0;
                          (*(code *)puStack_2c0[0x17])(auStack_98,puStack_2c0[0x18],auStack_40);
                          plVar69 = plStack_38;
                          bVar85 = auStack_98._0_8_ != 0;
                          *(undefined8 *)(pauVar83[0x33] + 8) = auStack_98._0_8_;
                          *(undefined8 *)pauVar83[0x34] = auStack_98._8_8_;
                          auStack_98 = (undefined1  [16])0x0;
                          if (bVar85) {
                            if (plStack_38 != (long *)0x0) {
                              LOCK();
                              plVar75 = plStack_38 + 1;
                              lVar66 = *plVar75;
                              *plVar75 = *plVar75 + -1;
                              UNLOCK();
                              if (lVar66 == 0) {
                                (**(code **)(*plStack_38 + 0x10))(plStack_38);
                                func_0x0412c2d0(plVar69);
                              }
                            }
                            lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
                            if (lVar66 == 0) {
                              func_0x0eec74c0(0xc0,0);
                            }
                            uVar64 = puVar62[0x1e];
                            uVar77 = puVar62[0x1f];
                            uStack_318._0_1_ = (char)uVar64;
                            uStack_318._1_6_ = (undefined6)((ulong)uVar64 >> 8);
                            uStack_318._7_1_ = (undefined1)((ulong)uVar64 >> 0x38);
                            cStack_310 = (char)uVar77;
                            uStack_30f = (undefined2)((ulong)uVar77 >> 8);
                            uStack_30d = (undefined4)((ulong)uVar77 >> 0x18);
                            uStack_309._0_1_ = (byte)((ulong)uVar77 >> 0x38);
                            if (puVar62[0x1f] != 0) {
                              LOCK();
                              plVar69 = (long *)(puVar62[0x1f] + 8);
                              *plVar69 = *plVar69 + 1;
                              UNLOCK();
                            }
                            uVar64 = puVar62[0x20];
                            uStack_309._1_3_ = (uint3)uVar64;
                            uStack_305 = (undefined4)((ulong)uVar64 >> 0x18);
                            uStack_301 = (undefined1)((ulong)uVar64 >> 0x38);
                            func_0x0d39aed0(lVar66,&uStack_318);
                            *(long *)(pauVar83[0x34] + 8) = lVar66;
                            plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                       CONCAT43(uStack_30d,
                                                                CONCAT21(uStack_30f,cStack_310)));
                            uStack_318._0_1_ = '\0';
                            uStack_318._1_6_ = 0;
                            uStack_318._7_1_ = 0;
                            cStack_310 = '\0';
                            uStack_30f = 0;
                            uStack_30d = 0;
                            uStack_309 = (uint)uStack_309._1_3_ << 8;
                            if (plVar69 != (long *)0x0) {
                              LOCK();
                              plVar75 = plVar69 + 1;
                              lVar66 = *plVar75;
                              *plVar75 = *plVar75 + -1;
                              UNLOCK();
                              if (lVar66 == 0) {
                                (**(code **)(*plVar69 + 0x10))(plVar69);
                                func_0x0412c2d0(plVar69);
                              }
                              plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                         CONCAT43(uStack_30d,
                                                                  CONCAT21(uStack_30f,cStack_310)));
                              uStack_309 = uStack_309 & 0xff;
                              uStack_305 = 0;
                              uStack_301 = 0;
                              if (plVar69 != (long *)0x0) {
                                LOCK();
                                plVar75 = plVar69 + 1;
                                lVar66 = *plVar75;
                                *plVar75 = *plVar75 + -1;
                                UNLOCK();
                                if (lVar66 == 0) {
                                  (**(code **)(*plVar69 + 0x10))(plVar69);
                                  func_0x0412c2d0(plVar69);
                                }
                              }
                            }
                            lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
                            if (lVar66 == 0) {
                              func_0x0eec74c0(0x88,0);
                            }
                            func_0x0d3a1ab0(lVar66);
                            *(long *)pauVar83[0x35] = lVar66;
                            *(undefined1 (*) [16])(pauVar83[0x35] + 8) = (undefined1  [16])0x0;
                            *(undefined1 (*) [16])(pauVar83[0x36] + 8) = (undefined1  [16])0x0;
                            *(undefined4 *)(pauVar83[0x37] + 8) = 0x3f800000;
                            plStack_218 = (long *)(pauVar83[0x34] + 8);
                            pauVar63 = (undefined1 (*) [16])
                                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
                            if (pauVar63 == (undefined1 (*) [16])0x0) {
                              func_0x0eec74c0(0xf8,0);
                            }
                            pauVar63[0xe] = (undefined1  [16])0x0;
                            pauVar63[0xd] = (undefined1  [16])0x0;
                            pauVar63[0xc] = (undefined1  [16])0x0;
                            pauVar63[0xb] = (undefined1  [16])0x0;
                            pauVar63[10] = (undefined1  [16])0x0;
                            pauVar63[9] = (undefined1  [16])0x0;
                            pauVar63[8] = (undefined1  [16])0x0;
                            pauVar63[7] = (undefined1  [16])0x0;
                            pauVar63[6] = (undefined1  [16])0x0;
                            pauVar63[5] = (undefined1  [16])0x0;
                            pauVar63[4] = (undefined1  [16])0x0;
                            pauVar63[3] = (undefined1  [16])0x0;
                            pauVar63[2] = (undefined1  [16])0x0;
                            pauVar63[1] = (undefined1  [16])0x0;
                            *pauVar63 = (undefined1  [16])0x0;
                            *(undefined8 *)pauVar63[0xf] = 0;
                            puVar68 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                            if (puVar68 == (undefined8 *)0x0) {
                              func_0x0eec74c0(0x18,0);
                            }
                            *puVar68 = &UNK_0f534768;
                            puVar65 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                            if (puVar65 == (undefined8 *)0x0) {
                              func_0x0eec74c0(0x20,0);
                            }
                            *(undefined1 (*) [16])(puVar65 + 1) = (undefined1  [16])0x0;
                            *puVar65 = &UNK_0ef44a60;
                            *(undefined1 *)(puVar65 + 3) = 1;
                            puVar68[1] = puVar65 + 3;
                            puVar68[2] = puVar65;
                            *(undefined8 **)pauVar83[0x38] = puVar68;
                            *(undefined1 (**) [16])(pauVar83[0x38] + 8) = pauVar63;
                            puVar68 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
                            if (puVar68 == (undefined8 *)0x0) {
                              func_0x0eec74c0(0x10,0);
                            }
                            *puVar68 = &UNK_0f087860;
                            puVar68[1] = pauVar83;
                            puVar65 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
                            if (puVar65 == (undefined8 *)0x0) {
                              func_0x0eec74c0(0x10,0);
                            }
                            *puVar65 = &UNK_0f0878b8;
                            puVar65[1] = puVar68;
                            *(undefined8 **)pauVar83[0x39] = puVar65;
                            puVar68 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
                            if (puVar68 == (undefined8 *)0x0) {
                              func_0x0eec74c0(8,0);
                            }
                            *puVar68 = &UNK_0f3ea5c0;
                            *(undefined8 **)(pauVar83[0x39] + 8) = puVar68;
                            pauVar83[0x3a] = (undefined1  [16])0x0;
                            pauVar83[0x3b][0] = *(undefined1 *)(puVar62 + 0xe);
                            pauVar83[0x3b][1] = *(undefined1 *)((long)puVar62 + 0x71);
                            plStack_128 = (long *)(pauVar83[0x3b] + 8);
                            *(undefined8 *)(pauVar83[0x3b] + 8) = 0;
                            pauVar63 = (undefined1 (*) [16])
                                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                            if (pauVar63 == (undefined1 (*) [16])0x0) {
                              func_0x0eec74c0(0x38,0);
                            }
                            pauVar63[2] = (undefined1  [16])0x0;
                            pauVar63[1] = (undefined1  [16])0x0;
                            *pauVar63 = (undefined1  [16])0x0;
                            *(undefined8 *)pauVar63[3] = 0;
                            puVar68 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                            if (puVar68 == (undefined8 *)0x0) {
                              func_0x0eec74c0(0x18,0);
                            }
                            *puVar68 = &UNK_0f534768;
                            puVar65 = (undefined8 *)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                            if (puVar65 == (undefined8 *)0x0) {
                              func_0x0eec74c0(0x20,0);
                            }
                            pauStack_130 = pauVar83 + 0x3c;
                            *(undefined1 (*) [16])(puVar65 + 1) = (undefined1  [16])0x0;
                            *puVar65 = &UNK_0ef44a60;
                            *(undefined1 *)(puVar65 + 3) = 1;
                            puVar68[1] = puVar65 + 3;
                            puVar68[2] = puVar65;
                            *(undefined8 **)pauVar83[0x3c] = puVar68;
                            *(undefined1 (**) [16])(pauVar83[0x3c] + 8) = pauVar63;
                            if (*(char *)(puVar62 + 0x24) == '\x01') {
                              puVar62 = (undefined8 *)
                                        (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                              if (puVar62 == (undefined8 *)0x0) {
                                func_0x0eec74c0(0x20,0);
                              }
                              *puVar62 = &UNK_0f3eaa48;
                              *(undefined1 (*) [16])(puVar62 + 1) = (undefined1  [16])0x0;
                              puVar62[3] = 0;
                              pcVar79 = *(char **)(*pauVar83 + 8);
                              lVar66 = *(long *)pauVar83[1];
                              if (lVar66 == 0) {
                                puVar62[1] = pcVar79;
                                puVar62[2] = 0;
                              }
                              else {
                                LOCK();
                                *(long *)(lVar66 + 8) = *(long *)(lVar66 + 8) + 1;
                                UNLOCK();
                                plVar69 = (long *)puVar62[2];
                                puVar62[1] = pcVar79;
                                puVar62[2] = lVar66;
                                if (plVar69 != (long *)0x0) {
                                  LOCK();
                                  plVar75 = plVar69 + 1;
                                  lVar66 = *plVar75;
                                  *plVar75 = *plVar75 + -1;
                                  UNLOCK();
                                  if (lVar66 == 0) {
                                    (**(code **)(*plVar69 + 0x10))(plVar69);
                                    func_0x0412c2d0(plVar69);
                                  }
                                  pcVar79 = (char *)puVar62[1];
                                }
                              }
                              if ((pcVar79 != (char *)0x0) &&
                                 (puVar62[3] = pauVar83, *pcVar79 != '\0')) {
                                puVar68 = (undefined8 *)
                                          (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x160);
                                if (puVar68 == (undefined8 *)0x0) {
                                  func_0x0eec74c0(0x160,0);
                                }
                                lVar66 = *(long *)*pauStack_130;
                                if (lVar66 != 0) {
                                  pcVar79 = *(char **)(lVar66 + 8);
                                  plVar69 = *(long **)(lVar66 + 0x10);
                                  if (plVar69 != (long *)0x0) {
                                    LOCK();
                                    plVar69[1] = plVar69[1] + 1;
                                    UNLOCK();
                                  }
                                  if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0')) {
                                    uVar64 = *(undefined8 *)(pauVar83[0x3c] + 8);
                                    *puVar68 = &UNK_0f3eb770;
                                    *(undefined1 (*) [16])(puVar68 + 1) = (undefined1  [16])0x0;
                                    puVar68[3] = 0;
                                    puVar68[4] = puVar62;
                                    puVar68[5] = pcVar79;
                                    puVar68[6] = plVar69;
                                    if (plVar69 != (long *)0x0) {
                                      LOCK();
                                      plVar69[1] = plVar69[1] + 1;
                                      UNLOCK();
                                      pcVar79 = (char *)puVar68[5];
                                      puVar68[7] = uVar64;
                                      goto joined_r0x0c980cee;
                                    }
LAB_0c980cfe:
                                    puVar68[7] = uVar64;
                                    cVar56 = *pcVar79;
joined_r0x0c980d05:
                                    if (cVar56 != '\0') {
                                      puVar68[9] = puVar68 + 9;
                                      puVar68[10] = puVar68 + 9;
                                      *(undefined4 *)(puVar68 + 0xb) = 0;
                                      *(undefined1 (*) [16])(puVar68 + 0xc) = (undefined1  [16])0x0;
                                      *(undefined1 (*) [16])(puVar68 + 0xe) = (undefined1  [16])0x0;
                                      *(undefined1 (*) [16])(puVar68 + 0x10) = (undefined1  [16])0x0
                                      ;
                                      puVar68[8] = &UNK_0f3eba48;
                                      puVar68[0x12] = &UNK_0f3eba78;
                                      puVar68[0x14] = puVar68 + 0x14;
                                      puVar68[0x15] = puVar68 + 0x14;
                                      *(undefined4 *)(puVar68 + 0x16) = 0;
                                      *(undefined1 (*) [16])(puVar68 + 0x17) = (undefined1  [16])0x0
                                      ;
                                      *(undefined1 (*) [16])(puVar68 + 0x19) = (undefined1  [16])0x0
                                      ;
                                      *(undefined1 (*) [16])(puVar68 + 0x1b) = (undefined1  [16])0x0
                                      ;
                                      puVar68[0x13] = &UNK_0f3ebb88;
                                      puVar68[0x1d] = &UNK_0f3ebbb8;
                                      puVar68[0x1f] = puVar68 + 0x1f;
                                      puVar68[0x20] = puVar68 + 0x1f;
                                      *(undefined4 *)(puVar68 + 0x21) = 0;
                                      *(undefined1 (*) [16])(puVar68 + 0x26) = (undefined1  [16])0x0
                                      ;
                                      *(undefined1 (*) [16])(puVar68 + 0x24) = (undefined1  [16])0x0
                                      ;
                                      *(undefined1 (*) [16])(puVar68 + 0x22) = (undefined1  [16])0x0
                                      ;
                                      puVar68[0x1e] = &UNK_0f3eba48;
                                      puVar68[0x28] = &UNK_0f3eba78;
                                      *(undefined1 *)(puVar68 + 0x29) = 0;
                                      *(undefined1 (*) [16])(puVar68 + 0x2a) = (undefined1  [16])0x0
                                      ;
                                      if (plVar69 != (long *)0x0) {
                                        LOCK();
                                        plVar75 = plVar69 + 1;
                                        lVar66 = *plVar75;
                                        *plVar75 = *plVar75 + -1;
                                        UNLOCK();
                                        if (lVar66 == 0) {
                                          (**(code **)(*plVar69 + 0x10))(plVar69);
                                          func_0x0412c2d0(plVar69);
                                        }
                                      }
                                      puVar62 = (undefined8 *)
                                                (**(code **)(_DAT_0f5463b0 + 0x10))
                                                          (&DAT_0f5463b0,0x18);
                                      if (puVar62 == (undefined8 *)0x0) {
                                        func_0x0eec74c0(0x18,0);
                                      }
                                      *puVar62 = &UNK_0f534768;
                                      puVar65 = (undefined8 *)
                                                (**(code **)(_DAT_0f5463b0 + 0x10))
                                                          (&DAT_0f5463b0,0x20);
                                      if (puVar65 == (undefined8 *)0x0) {
                                        func_0x0eec74c0(0x20,0);
                                      }
                                      *(undefined1 (*) [16])(puVar65 + 1) = (undefined1  [16])0x0;
                                      *puVar65 = &UNK_0ef44a60;
                                      *(undefined1 *)(puVar65 + 3) = 1;
                                      puVar62[1] = puVar65 + 3;
                                      puVar62[2] = puVar65;
                                      *(undefined8 **)pauVar83[0x3d] = puVar62;
                                      *(undefined8 **)(pauVar83[0x3d] + 8) = puVar68;
                                      pauVar83[0x3e] = (undefined1  [16])0x0;
                                      if ((*(long *)pauVar83[0x31] == 0) &&
                                         (cVar56 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,
                                                                   &UNK_0142bd41,&UNK_013b6dd1),
                                         cVar56 != '\0')) {
                                        _DAT_00000000 = 0xdeadc0de;
                                      }
                                      if ((**(char **)*pauStack_228 == '\0') &&
                                         (cVar56 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130
                                                                   ,&UNK_0142bd41,&UNK_013b6dd1),
                                         cVar56 != '\0')) {
                                        _DAT_00000000 = 0xdeadc0de;
                                      }
                                      (**(code **)(**(long **)pauVar83[0x32] + 0x10))(auStack_288);
                                      pauStack_138 = pauVar83 + 0x3d;
                                      lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                         (&DAT_0f5463b0,0xa8);
                                      if (lVar66 == 0) {
                                        func_0x0eec74c0(0xa8,0);
                                      }
                                      auVar14 = auStack_288;
                                      pauStack_2b8 = (undefined1 (*) [16])auStack_288._0_8_;
                                      bVar85 = (undefined1 (*) [16])auStack_288._0_8_ !=
                                               (undefined1 (*) [16])0x0;
                                      auStack_288 = ZEXT816(0);
                                      cStack_2b0 = auVar14[8];
                                      uStack_2af = auVar14._9_6_;
                                      uStack_2a9 = auVar14[0xf];
                                      _auStack_2d8 = ZEXT816(0);
                                      if (bVar85) {
                                        cStack_310 = '\0';
                                        uStack_30f = 0;
                                        uStack_30d = 0;
                                        uVar54 = uStack_309._1_3_;
                                        uStack_309 = (uint)uStack_309._1_3_ << 8;
                                        lVar72 = *(long *)pauVar83[0x3d];
                                        if (lVar72 != 0) {
                                          pcVar79 = *(char **)(lVar72 + 8);
                                          lVar72 = *(long *)(lVar72 + 0x10);
                                          if (lVar72 != 0) {
                                            LOCK();
                                            *(long *)(lVar72 + 8) = *(long *)(lVar72 + 8) + 1;
                                            UNLOCK();
                                            cStack_310 = (char)lVar72;
                                            uStack_30f = (undefined2)((ulong)lVar72 >> 8);
                                            uStack_30d = (undefined4)((ulong)lVar72 >> 0x18);
                                            uStack_309._0_1_ = (byte)((ulong)lVar72 >> 0x38);
                                            uStack_309 = CONCAT31(uVar54,(byte)uStack_309);
                                          }
                                          uStack_318._0_1_ = (char)pcVar79;
                                          uStack_318._1_6_ = (undefined6)((ulong)pcVar79 >> 8);
                                          uStack_318._7_1_ = (undefined1)((ulong)pcVar79 >> 0x38);
                                          if (pcVar79 != (char *)0x0) {
                                            uVar64 = *(undefined8 *)(pauVar83[0x3d] + 8);
                                            uStack_309._1_3_ = (uint3)uVar64;
                                            uStack_305 = (undefined4)((ulong)uVar64 >> 0x18);
                                            uStack_301 = (undefined1)((ulong)uVar64 >> 0x38);
                                            if (*pcVar79 != '\0') {
                                              func_0x0c9c0770(lVar66,&pauStack_2b8,&uStack_318);
                                              plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                                         CONCAT43(uStack_30d,
                                                                                  CONCAT21(
                                                  uStack_30f,cStack_310)));
                                              uStack_318._0_1_ = '\0';
                                              uStack_318._1_6_ = 0;
                                              uStack_318._7_1_ = 0;
                                              cStack_310 = '\0';
                                              uStack_30f = 0;
                                              uStack_30d = 0;
                                              uStack_309 = uStack_309 & 0xffffff00;
                                              if (plVar69 == (long *)0x0) {
                                                uStack_309 = 0;
                                                uStack_305 = 0;
                                                uStack_301 = 0;
                                              }
                                              else {
                                                LOCK();
                                                plVar75 = plVar69 + 1;
                                                lVar72 = *plVar75;
                                                *plVar75 = *plVar75 + -1;
                                                UNLOCK();
                                                if (lVar72 == 0) {
                                                  (**(code **)(*plVar69 + 0x10))(plVar69);
                                                  func_0x0412c2d0(plVar69);
                                                }
                                                plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                                           CONCAT43(uStack_30d,
                                                                                    CONCAT21(
                                                  uStack_30f,cStack_310)));
                                                uStack_309 = uStack_309 & 0xff;
                                                uStack_305 = 0;
                                                uStack_301 = 0;
                                                if (plVar69 != (long *)0x0) {
                                                  LOCK();
                                                  plVar75 = plVar69 + 1;
                                                  lVar72 = *plVar75;
                                                  *plVar75 = *plVar75 + -1;
                                                  UNLOCK();
                                                  if (lVar72 == 0) {
                                                    (**(code **)(*plVar69 + 0x10))(plVar69);
                                                    func_0x0412c2d0(plVar69);
                                                  }
                                                }
                                              }
                                              plVar69 = (long *)CONCAT17(uStack_2a9,
                                                                         CONCAT61(uStack_2af,
                                                                                  cStack_2b0));
                                              if (plVar69 != (long *)0x0) {
                                                LOCK();
                                                plVar75 = plVar69 + 1;
                                                lVar72 = *plVar75;
                                                *plVar75 = *plVar75 + -1;
                                                UNLOCK();
                                                if (lVar72 == 0) {
                                                  (**(code **)(*plVar69 + 0x10))(plVar69);
                                                  func_0x0412c2d0(plVar69);
                                                }
                                              }
                                              plVar69 = plStack_2d0;
                                              if (plStack_2d0 != (long *)0x0) {
                                                LOCK();
                                                plVar75 = plStack_2d0 + 1;
                                                lVar72 = *plVar75;
                                                *plVar75 = *plVar75 + -1;
                                                UNLOCK();
                                                if (lVar72 == 0) {
                                                  (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
                                                  func_0x0412c2d0(plVar69);
                                                }
                                              }
                                              puVar62 = (undefined8 *)
                                                        (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                  (&DAT_0f5463b0,0x18);
                                              if (puVar62 == (undefined8 *)0x0) {
                                                func_0x0eec74c0(0x18,0);
                                              }
                                              *puVar62 = &UNK_0f534768;
                                              puVar68 = (undefined8 *)
                                                        (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                  (&DAT_0f5463b0,0x20);
                                              if (puVar68 == (undefined8 *)0x0) {
                                                func_0x0eec74c0(0x20,0);
                                              }
                                              *(undefined1 (*) [16])(puVar68 + 1) =
                                                   (undefined1  [16])0x0;
                                              *puVar68 = &UNK_0ef44a60;
                                              *(undefined1 *)(puVar68 + 3) = 1;
                                              puVar62[1] = puVar68 + 3;
                                              puVar62[2] = puVar68;
                                              *(undefined8 **)pauVar83[0x3f] = puVar62;
                                              *(long *)(pauVar83[0x3f] + 8) = lVar66;
                                              uVar64 = auStack_288._8_8_;
                                              if ((long *)auStack_288._8_8_ != (long *)0x0) {
                                                LOCK();
                                                plVar69 = (long *)(auStack_288._8_8_ + 8);
                                                lVar66 = *plVar69;
                                                *plVar69 = *plVar69 + -1;
                                                UNLOCK();
                                                if (lVar66 == 0) {
                                                  (**(code **)(*(long *)auStack_288._8_8_ + 0x10))
                                                            (auStack_288._8_8_);
                                                  func_0x0412c2d0(uVar64);
                                                }
                                              }
                                              lVar66 = *(long *)pauVar83[0x2f];
                                              puVar62 = (undefined8 *)
                                                        (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                  (&DAT_0f5463b0,0x18);
                                              if (puVar62 == (undefined8 *)0x0) {
                                                func_0x0eec74c0(0x18,0);
                                              }
                                              puVar68 = puStack_2c0;
                                              lVar72 = *(long *)(lVar66 + 0x10);
                                              if (lVar72 != 0) {
                                                pcVar79 = *(char **)(lVar72 + 8);
                                                plVar69 = *(long **)(lVar72 + 0x10);
                                                if (plVar69 != (long *)0x0) {
                                                  LOCK();
                                                  plVar69[1] = plVar69[1] + 1;
                                                  UNLOCK();
                                                }
                                                if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0'))
                                                {
                                                  uVar64 = *(undefined8 *)(lVar66 + 0x18);
                                                  *puVar62 = pcVar79;
                                                  puVar62[1] = plVar69;
                                                  if (plVar69 == (long *)0x0) {
                                                    puVar62[2] = uVar64;
                                                  }
                                                  else {
                                                    LOCK();
                                                    plVar69[1] = plVar69[1] + 1;
                                                    UNLOCK();
                                                    puVar62[2] = uVar64;
                                                    if (((char *)*puVar62 == (char *)0x0) ||
                                                       (*(char *)*puVar62 == '\0'))
                                                    goto LAB_0c98886f;
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar66 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar66 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                  }
                                                  puVar65 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar65 = &UNK_0f534768;
                                                  puVar70 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar70 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar70 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar70 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar70 + 3) = 1;
                                                  puVar65[1] = puVar70 + 3;
                                                  puVar65[2] = puVar70;
                                                  *(undefined8 **)pauVar83[0x40] = puVar65;
                                                  *(undefined8 **)(pauVar83[0x40] + 8) = puVar62;
                                                  if (*(char *)(puVar68 + 0x24) == '\x01') {
                                                    puVar62 = (undefined8 *)
                                                              (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                        (&DAT_0f5463b0,8);
                                                    if (puVar62 == (undefined8 *)0x0) {
                                                      func_0x0eec74c0(8,0);
                                                    }
                                                    puVar82 = &UNK_0f3e7ff0;
                                                  }
                                                  else {
                                                    puVar62 = (undefined8 *)
                                                              (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                        (&DAT_0f5463b0,8);
                                                    if (puVar62 == (undefined8 *)0x0) {
                                                      func_0x0eec74c0(8,0);
                                                    }
                                                    puVar82 = &UNK_0f1f97d0;
                                                  }
                                                  *puVar62 = puVar82;
                                                  puVar68 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x2b0);
                                                  if (puVar68 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x2b0,0);
                                                  }
                                                  *puVar68 = &UNK_0f3e7030;
                                                  *(undefined1 (*) [16])(puVar68 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 3) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 5) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 7) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 9) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0xb) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0xe] = puVar68 + 0xe;
                                                  puVar68[0xf] = puVar68 + 0xe;
                                                  *(undefined4 *)(puVar68 + 0x10) = 0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x11) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x13) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x15) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0xd] = &UNK_0f3e8748;
                                                  puVar68[0x17] = &UNK_0f3e8778;
                                                  puVar68[0x19] = puVar68 + 0x19;
                                                  puVar68[0x1a] = puVar68 + 0x19;
                                                  *(undefined4 *)(puVar68 + 0x1b) = 0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x20) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x1e) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x1c) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0x18] = &UNK_0f3e8888;
                                                  puVar68[0x22] = &UNK_0f3e88b8;
                                                  puVar68[0x24] = puVar68 + 0x24;
                                                  puVar68[0x25] = puVar68 + 0x24;
                                                  *(undefined4 *)(puVar68 + 0x26) = 0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x27) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x29) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x2b) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0x23] = &UNK_0f3e8888;
                                                  puVar68[0x2d] = &UNK_0f3e88b8;
                                                  puVar68[0x2f] = puVar68 + 0x2f;
                                                  puVar68[0x30] = puVar68 + 0x2f;
                                                  *(undefined4 *)(puVar68 + 0x31) = 0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x36) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x34) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x32) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0x2e] = &UNK_0f3e89c8;
                                                  puVar68[0x38] = &UNK_0f3e89f8;
                                                  puVar68[0x3a] = puVar68 + 0x3a;
                                                  puVar68[0x3b] = puVar68 + 0x3a;
                                                  *(undefined4 *)(puVar68 + 0x3c) = 0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x41) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x3f) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x3d) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0x39] = &UNK_0f3e8748;
                                                  puVar68[0x43] = &UNK_0f3e8778;
                                                  puVar68[0x45] = puVar68 + 0x45;
                                                  puVar68[0x46] = puVar68 + 0x45;
                                                  *(undefined4 *)(puVar68 + 0x47) = 0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x4c) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x4a) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x48) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0x44] = &UNK_0ef437f0;
                                                  puVar68[0x4e] = &UNK_0ef43820;
                                                  *(undefined1 (*) [16])(puVar68 + 0x53) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x51) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar68 + 0x4f) =
                                                       (undefined1  [16])0x0;
                                                  puVar68[0x55] = puVar62;
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar65 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  pauStack_230 = pauVar83 + 0x41;
                                                  *(undefined1 (*) [16])(puVar65 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar65 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar65 + 3) = 1;
                                                  puVar62[1] = puVar65 + 3;
                                                  puVar62[2] = puVar65;
                                                  *(undefined8 **)pauVar83[0x41] = puVar62;
                                                  *(undefined8 **)(pauVar83[0x41] + 8) = puVar68;
                                                  pauStack_158 = pauVar83 + 0x42;
                                                  pauStack_160 = pauVar83 + 0x43;
                                                  pauStack_168 = pauVar83 + 0x44;
                                                  pauVar83[0x42] = (undefined1  [16])0x0;
                                                  pauVar83[0x43] = (undefined1  [16])0x0;
                                                  pauVar83[0x44] = (undefined1  [16])0x0;
                                                  pauVar83[0x45] = (undefined1  [16])0x0;
                                                  *(undefined8 *)pauVar83[0x46] = 0;
                                                  pauStack_78 = pauVar83 + 8;
                                                  pauVar63 = (undefined1 (*) [16])
                                                             (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                       (&DAT_0f5463b0,0xa8);
                                                  if (pauVar63 == (undefined1 (*) [16])0x0) {
                                                    func_0x0eec74c0(0xa8,0);
                                                  }
                                                  lVar66 = *(long *)*pauStack_230;
                                                  if (lVar66 != 0) {
                                                    pcVar79 = *(char **)(lVar66 + 8);
                                                    plVar69 = *(long **)(lVar66 + 0x10);
                                                    if (plVar69 != (long *)0x0) {
                                                      LOCK();
                                                      plVar69[1] = plVar69[1] + 1;
                                                      UNLOCK();
                                                    }
                                                    if ((pcVar79 != (char *)0x0) &&
                                                       (*pcVar79 != '\0')) {
                                                      uVar64 = *(undefined8 *)(pauVar83[0x41] + 8);
                                                      pauVar63[1] = (undefined1  [16])0x0;
                                                      *pauVar63 = (undefined1  [16])0x0;
                                                      *(undefined8 *)pauVar63[2] = 0;
                                                      *(undefined4 *)(pauVar63[2] + 8) = 0x3f800000;
                                                      *(char **)pauVar63[3] = pcVar79;
                                                      *(long **)(pauVar63[3] + 8) = plVar69;
                                                      if (plVar69 == (long *)0x0) {
                                                        *(undefined8 *)pauVar63[4] = uVar64;
                                                        if (*pcVar79 != '\0') {
                                                          *(undefined1 (*) [16])(pauVar63[9] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[8] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[7] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[6] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[5] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[4] + 8) =
                                                               (undefined1  [16])0x0;
                                                          goto LAB_0c9817c2;
                                                        }
                                                      }
                                                      else {
                                                        LOCK();
                                                        plVar69[1] = plVar69[1] + 1;
                                                        UNLOCK();
                                                        *(undefined8 *)pauVar63[4] = uVar64;
                                                        if ((*(char **)pauVar63[3] != (char *)0x0)
                                                           && (**(char **)pauVar63[3] != '\0')) {
                                                          *(undefined1 (*) [16])(pauVar63[9] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[8] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[7] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[6] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[5] + 8) =
                                                               (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar63[4] + 8) =
                                                               (undefined1  [16])0x0;
                                                          LOCK();
                                                          plVar75 = plVar69 + 1;
                                                          lVar66 = *plVar75;
                                                          *plVar75 = *plVar75 + -1;
                                                          UNLOCK();
                                                          if (lVar66 == 0) {
                                                            (**(code **)(*plVar69 + 0x10))(plVar69);
                                                            func_0x0412c2d0(plVar69);
                                                          }
LAB_0c9817c2:
                                                          puVar62 = (undefined8 *)
                                                                    (**(code **)(_DAT_0f5463b0 +
                                                                                0x10))(&DAT_0f5463b0
                                                                                       ,0x18);
                                                          if (puVar62 == (undefined8 *)0x0) {
                                                            func_0x0eec74c0(0x18,0);
                                                          }
                                                          *puVar62 = &UNK_0f534768;
                                                          puVar68 = (undefined8 *)
                                                                    (**(code **)(_DAT_0f5463b0 +
                                                                                0x10))(&DAT_0f5463b0
                                                                                       ,0x20);
                                                          if (puVar68 == (undefined8 *)0x0) {
                                                            func_0x0eec74c0(0x20,0);
                                                          }
                                                          *(undefined1 (*) [16])(puVar68 + 1) =
                                                               (undefined1  [16])0x0;
                                                          *puVar68 = &UNK_0ef44a60;
                                                          *(undefined1 *)(puVar68 + 3) = 1;
                                                          puVar62[1] = puVar68 + 3;
                                                          puVar62[2] = puVar68;
                                                          *(undefined8 **)(pauVar83[0x46] + 8) =
                                                               puVar62;
                                                          *(undefined1 (**) [16])pauVar83[0x47] =
                                                               pauVar63;
                                                          *(undefined1 (*) [16])(pauVar83[0x47] + 8)
                                                               = (undefined1  [16])0x0;
                                                          *(undefined1 (*) [16])(pauVar83[0x48] + 8)
                                                               = (undefined1  [16])0x0;
                                                          pauVar63 = (undefined1 (*) [16])
                                                                     (**(code **)(_DAT_0f5463b0 +
                                                                                 0x10))(&
                                                  DAT_0f5463b0,0x158);
                                                  if (pauVar63 == (undefined1 (*) [16])0x0) {
                                                    func_0x0eec74c0(0x158,0);
                                                  }
                                                  pauVar63[1] = (undefined1  [16])0x0;
                                                  *pauVar63 = (undefined1  [16])0x0;
                                                  *(undefined4 *)pauVar63[2] = 0x3f800000;
                                                  *(undefined1 (*) [16])(pauVar63[2] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(pauVar63[3] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(pauVar63[4] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(pauVar63[5] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined8 *)(pauVar63[6] + 8) = 0;
                                                  *(undefined1 **)(pauVar63[7] + 8) =
                                                       pauVar63[7] + 8;
                                                  *(undefined1 **)pauVar63[8] = pauVar63[7] + 8;
                                                  *(undefined4 *)(pauVar63[8] + 8) = 0;
                                                  pauVar63[9] = (undefined1  [16])0x0;
                                                  pauVar63[10] = (undefined1  [16])0x0;
                                                  pauVar63[0xb] = (undefined1  [16])0x0;
                                                  *(undefined **)pauVar63[7] = &UNK_0f3e4ac0;
                                                  *(undefined **)pauVar63[0xc] = &UNK_0f3e4af0;
                                                  *(undefined1 (**) [16])pauVar63[0xd] =
                                                       pauVar63 + 0xd;
                                                  *(undefined1 (**) [16])(pauVar63[0xd] + 8) =
                                                       pauVar63 + 0xd;
                                                  *(undefined4 *)pauVar63[0xe] = 0;
                                                  *(undefined1 (*) [16])(pauVar63[0x10] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(pauVar63[0xf] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(pauVar63[0xe] + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined **)(pauVar63[0xc] + 8) = &UNK_0f3e4ac0
                                                  ;
                                                  *(undefined **)(pauVar63[0x11] + 8) =
                                                       &UNK_0f3e4af0;
                                                  pauVar63[0x12] = (undefined1  [16])0x0;
                                                  pauVar63[0x13] = (undefined1  [16])0x0;
                                                  pauVar63[0x14] = (undefined1  [16])0x0;
                                                  *(undefined8 *)pauVar63[0x15] = 0;
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar68 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar68 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar68 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar68 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar68 + 3) = 1;
                                                  puVar62[1] = puVar68 + 3;
                                                  puVar62[2] = puVar68;
                                                  *(undefined8 **)(pauVar83[0x49] + 8) = puVar62;
                                                  *(undefined1 (**) [16])pauVar83[0x4a] = pauVar63;
                                                  lVar66 = *(long *)pauVar83[0x2f];
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,8);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(8,0);
                                                  }
                                                  *puVar62 = &UNK_0f3e5b10;
                                                  puVar68 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x40);
                                                  if (puVar68 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x40,0);
                                                  }
                                                  puVar65 = puStack_2c0;
                                                  lVar72 = *(long *)(lVar66 + 0x10);
                                                  if (lVar72 != 0) {
                                                    pcVar79 = *(char **)(lVar72 + 8);
                                                    plVar69 = *(long **)(lVar72 + 0x10);
                                                    if (plVar69 != (long *)0x0) {
                                                      LOCK();
                                                      plVar69[1] = plVar69[1] + 1;
                                                      UNLOCK();
                                                    }
                                                    if (((pcVar79 != (char *)0x0) &&
                                                        (*pcVar79 != '\0')) &&
                                                       (lVar72 = *(long *)*pauStack_230, lVar72 != 0
                                                       )) {
                                                      uVar64 = *(undefined8 *)(lVar66 + 0x18);
                                                      pcVar9 = *(char **)(lVar72 + 8);
                                                      param_1 = *(undefined1 (*) [8])(lVar72 + 0x10)
                                                      ;
                                                      if (param_1 != (undefined1  [8])0x0) {
                                                        LOCK();
                                                        *(long *)(*(undefined1 (*) [16])param_1 + 8)
                                                             = *(long *)(*(undefined1 (*) [16])
                                                                          param_1 + 8) + 1;
                                                        UNLOCK();
                                                      }
                                                      if ((pcVar9 != (char *)0x0) &&
                                                         (*pcVar9 != '\0')) {
                                                        uVar77 = *(undefined8 *)(pauVar83[0x41] + 8)
                                                        ;
                                                        uVar5 = *(undefined1 *)(puStack_2c0 + 0x24);
                                                        *puVar68 = pcVar79;
                                                        puVar68[1] = plVar69;
                                                        if (plVar69 == (long *)0x0) {
                                                          puVar68[2] = uVar64;
                                                          cVar56 = *pcVar79;
                                                        }
                                                        else {
                                                          LOCK();
                                                          plVar69[1] = plVar69[1] + 1;
                                                          UNLOCK();
                                                          puVar68[2] = uVar64;
                                                          if ((char *)*puVar68 == (char *)0x0)
                                                          goto LAB_0c98886f;
                                                          cVar56 = *(char *)*puVar68;
                                                        }
                                                        if (cVar56 != '\0') {
                                                          puVar68[3] = pcVar9;
                                                          puVar68[4] = param_1;
                                                          if (param_1 == (undefined1  [8])0x0) {
                                                            puVar68[5] = uVar77;
                                                            if (*pcVar9 != '\0') {
                                                              puVar68[6] = puVar62;
                                                              *(undefined1 *)(puVar68 + 7) = uVar5;
                                                              goto LAB_0c981b7e;
                                                            }
                                                          }
                                                          else {
                                                            LOCK();
                                                            *(long *)(*(undefined1 (*) [16])param_1
                                                                     + 8) =
                                                                 *(long *)(*(undefined1 (*) [16])
                                                                            param_1 + 8) + 1;
                                                            UNLOCK();
                                                            puVar68[5] = uVar77;
                                                            if (((char *)puVar68[3] != (char *)0x0)
                                                               && (*(char *)puVar68[3] != '\0')) {
                                                              puVar68[6] = puVar62;
                                                              *(undefined1 *)(puVar68 + 7) = uVar5;
                                                              LOCK();
                                                              plVar75 = (long *)(*(undefined1
                                                                                   (*) [16])param_1
                                                                                + 8);
                                                              lVar66 = *plVar75;
                                                              *plVar75 = *plVar75 + -1;
                                                              UNLOCK();
                                                              if (lVar66 == 0) {
                                                                (**(code **)(*(long *)*(undefined1
                                                                                        (*) [16])
                                                                                       param_1 +
                                                                            0x10))(param_1);
                                                                func_0x0412c2d0(param_1);
                                                              }
LAB_0c981b7e:
                                                              if (plVar69 != (long *)0x0) {
                                                                LOCK();
                                                                plVar75 = plVar69 + 1;
                                                                lVar66 = *plVar75;
                                                                *plVar75 = *plVar75 + -1;
                                                                UNLOCK();
                                                                if (lVar66 == 0) {
                                                                  (**(code **)(*plVar69 + 0x10))
                                                                            (plVar69);
                                                                  func_0x0412c2d0(plVar69);
                                                                }
                                                              }
                                                              puVar62 = (undefined8 *)
                                                                        (**(code **)(_DAT_0f5463b0 +
                                                                                    0x10))(&
                                                  DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar70 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar70 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar70 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar70 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar70 + 3) = 1;
                                                  puVar62[1] = puVar70 + 3;
                                                  puVar62[2] = puVar70;
                                                  *(undefined8 **)(pauVar83[0x4a] + 8) = puVar62;
                                                  *(undefined8 **)pauVar83[0x4b] = puVar68;
                                                  puVar71 = (undefined1 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar71 == (undefined1 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *puVar71 = pauVar83[0x21][8];
                                                  *(undefined1 (*) [16])(puVar71 + 8) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined8 *)(puVar71 + 0x18) = 0;
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar68 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar68 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar68 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar68 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar68 + 3) = 1;
                                                  puVar62[1] = puVar68 + 3;
                                                  puVar62[2] = puVar68;
                                                  *(undefined8 **)(pauVar83[0x4b] + 8) = puVar62;
                                                  *(undefined1 **)pauVar83[0x4c] = puVar71;
                                                  lVar66 = puVar65[0x25];
                                                  puVar65[0x25] = 0;
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar68 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar68 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  puVar65 = puStack_2c0;
                                                  *(undefined1 (*) [16])(puVar68 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar68 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar68 + 3) = 1;
                                                  puVar62[1] = puVar68 + 3;
                                                  puVar62[2] = puVar68;
                                                  *(undefined8 **)(pauVar83[0x4c] + 8) = puVar62;
                                                  *(long *)pauVar83[0x4d] = lVar66;
                                                  param_1 = (undefined1  [8])pauVar83;
                                                  if (lVar66 != 0) {
                                                    ppauStack_170 =
                                                         (undefined1 (**) [16])(pauVar83[0x4d] + 8);
                                                    ppauStack_178 =
                                                         (undefined1 (**) [16])(pauVar83[0x4e] + 8);
                                                    ppauStack_180 =
                                                         (undefined1 (**) [16])(pauVar83[0x4f] + 8);
                                                    ppauStack_188 =
                                                         (undefined1 (**) [16])(pauVar83[0x50] + 8);
                                                    ppauStack_190 =
                                                         (undefined1 (**) [16])(pauVar83[0x51] + 8);
                                                    *(undefined1 (*) [16])(pauVar83[0x51] + 8) =
                                                         (undefined1  [16])0x0;
                                                    *(undefined1 (*) [16])(pauVar83[0x50] + 8) =
                                                         (undefined1  [16])0x0;
                                                    *(undefined1 (*) [16])(pauVar83[0x4f] + 8) =
                                                         (undefined1  [16])0x0;
                                                    *(undefined1 (*) [16])(pauVar83[0x4e] + 8) =
                                                         (undefined1  [16])0x0;
                                                    *(undefined1 (*) [16])(pauVar83[0x4d] + 8) =
                                                         (undefined1  [16])0x0;
                                                    if ((puStack_2c0[0x21] == 0) &&
                                                       (cVar56 = func_0x0eeddcf0(&UNK_01411d19,
                                                                                 &UNK_0135b312,300,
                                                                                 &UNK_0142bd41,
                                                                                 &UNK_013f91c7),
                                                       cVar56 != '\0')) {
                                                      _DAT_00000000 = 0xdeadc0de;
                                                    }
                                                    if ((*(char *)puVar65[0x21] == '\0') &&
                                                       (cVar56 = func_0x0eeddcf0(&UNK_0130991f,
                                                                                 &UNK_0147828b,0x130
                                                                                 ,&UNK_0142bd41,
                                                                                 &UNK_013f91c7),
                                                       cVar56 != '\0')) {
                                                      _DAT_00000000 = 0xdeadc0de;
                                                    }
                                                    uVar7 = *(undefined4 *)(puVar65[0x23] + 0x328);
                                                    FUN_0412d550(0xf5522b8);
                                                    LOCK();
                                                    _DAT_0f552388 = _DAT_0f552388 + 1;
                                                    UNLOCK();
                                                    func_0x0412d610(0xf5522b8);
                                                    plVar69 = _DAT_0f5523a0;
                                                    pcVar79 = _DAT_0f552398;
                                                    if ((_DAT_0f552398 == (char *)0x0) ||
                                                       (*_DAT_0f552398 != '\x01')) {
                                                      uStack_318._0_1_ = '\0';
                                                      uStack_318._1_6_ = 0;
                                                      uStack_318._7_1_ = 0;
                                                      cStack_310 = '\0';
                                                      uStack_309._1_3_ = 0;
                                                      uStack_305 = 0;
                                                      uStack_301 = 0;
                                                      cStack_300 = 0;
                                                      uStack_2ff = 0;
                                                      auVar14._8_8_ = 0;
                                                      auVar14._0_8_ = auStack_2f8._8_8_;
                                                      auStack_2f8 = auVar14 << 0x40;
                                                      func_0x0eee02f0(0xf5522b8);
                                                      pcVar79 = (char *)CONCAT17(uStack_301,
                                                                                 CONCAT43(uStack_305
                                                                                          ,
                                                  uStack_309._1_3_));
                                                  if (pcVar79 != (char *)0x0) goto LAB_0c981f49;
                                                  }
                                                  else {
                                                    if (_DAT_0f5523a0 != (long *)0x0) {
                                                      LOCK();
                                                      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
                                                      UNLOCK();
                                                    }
                                                    uStack_318._0_1_ = -0x48;
                                                    uStack_318._1_6_ = 0xf5522;
                                                    uStack_318._7_1_ = 0;
                                                    cStack_310 = '\x01';
                                                    uStack_309._1_3_ = (uint3)pcVar79;
                                                    uStack_305 = (undefined4)
                                                                 ((ulong)pcVar79 >> 0x18);
                                                    uStack_301 = (undefined1)
                                                                 ((ulong)pcVar79 >> 0x38);
                                                    cStack_300 = (char)plVar69;
                                                    uStack_2ff = (undefined7)((ulong)plVar69 >> 8);
                                                    auStack_2f8._0_8_ = _DAT_0f5523a8;
LAB_0c981f49:
                                                    if ((*pcVar79 == '\0') &&
                                                       (cVar56 = func_0x0eeddcf0(&UNK_0123c452,
                                                                                 &UNK_012072da,0xea,
                                                                                 &UNK_0142bd41,
                                                                                 &UNK_014ad871),
                                                       cVar56 != '\0')) {
                                                      _DAT_00000000 = 0xdeadc0de;
                                                    }
                                                  }
                                                  uVar60 = (**(code **)(*(long *)auStack_2f8._0_8_ +
                                                                       0x4a8))();
                                                  pauVar63 = (undefined1 (*) [16])
                                                             (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                       (&DAT_0f5463b0,0x18);
                                                  if (pauVar63 == (undefined1 (*) [16])0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *pauVar63 = (undefined1  [16])0x0;
                                                  *(undefined4 *)pauVar63[1] = uVar7;
                                                  *(undefined4 *)(pauVar63[1] + 4) = uVar60;
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar68 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar68 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar68 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar68 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar68 + 3) = 1;
                                                  puVar62[1] = puVar68 + 3;
                                                  puVar62[2] = puVar68;
                                                  *(undefined8 **)(pauVar83[0x52] + 8) = puVar62;
                                                  *(undefined1 (**) [16])pauVar83[0x53] = pauVar63;
                                                  plVar69 = (long *)CONCAT71(uStack_2ff,cStack_300);
                                                  uStack_309 = (uint)(byte)uStack_309;
                                                  uStack_305 = 0;
                                                  uStack_301 = 0;
                                                  cStack_300 = '\0';
                                                  uStack_2ff = 0;
                                                  if (plVar69 == (long *)0x0) {
                                                    auVar16._8_8_ = 0;
                                                    auVar16._0_8_ = auStack_2f8._8_8_;
                                                    auStack_2f8 = auVar16 << 0x40;
                                                  }
                                                  else {
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar66 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar66 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                    plVar69 = (long *)CONCAT71(uStack_2ff,cStack_300
                                                                              );
                                                    auVar15._8_8_ = 0;
                                                    auVar15._0_8_ = auStack_2f8._8_8_;
                                                    auStack_2f8 = auVar15 << 0x40;
                                                    if (plVar69 != (long *)0x0) {
                                                      LOCK();
                                                      plVar75 = plVar69 + 1;
                                                      lVar66 = *plVar75;
                                                      *plVar75 = *plVar75 + -1;
                                                      UNLOCK();
                                                      if (lVar66 == 0) {
                                                        (**(code **)(*plVar69 + 0x10))(plVar69);
                                                        func_0x0412c2d0(plVar69);
                                                      }
                                                    }
                                                  }
                                                  if (cStack_310 == '\x01') {
                                                    func_0x0eee02f0(CONCAT17(uStack_318._7_1_,
                                                                             CONCAT61(uStack_318.
                                                                                      _1_6_,(char)
                                                  uStack_318)));
                                                  }
                                                  lVar66 = *(long *)pauVar83[0x2f];
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x48);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x48,0);
                                                  }
                                                  puVar68 = puStack_2c0;
                                                  lVar72 = *(long *)(lVar66 + 0x10);
                                                  if (lVar72 != 0) {
                                                    pcVar79 = *(char **)(lVar72 + 8);
                                                    plVar69 = *(long **)(lVar72 + 0x10);
                                                    if (plVar69 != (long *)0x0) {
                                                      LOCK();
                                                      plVar69[1] = plVar69[1] + 1;
                                                      UNLOCK();
                                                    }
                                                    if (((pcVar79 != (char *)0x0) &&
                                                        (*pcVar79 != '\0')) &&
                                                       (lVar72 = *(long *)*pauStack_230, lVar72 != 0
                                                       )) {
                                                      uVar64 = *(undefined8 *)(lVar66 + 0x18);
                                                      pcVar9 = *(char **)(lVar72 + 8);
                                                      plVar75 = *(long **)(lVar72 + 0x10);
                                                      if (plVar75 != (long *)0x0) {
                                                        LOCK();
                                                        plVar75[1] = plVar75[1] + 1;
                                                        UNLOCK();
                                                      }
                                                      if ((pcVar9 != (char *)0x0) &&
                                                         (*pcVar9 != '\0')) {
                                                        uVar77 = *(undefined8 *)(pauVar83[0x41] + 8)
                                                        ;
                                                        *puVar62 = pcVar79;
                                                        puVar62[1] = plVar69;
                                                        if (plVar69 == (long *)0x0) {
                                                          puVar62[2] = uVar64;
                                                          cVar56 = *pcVar79;
                                                        }
                                                        else {
                                                          LOCK();
                                                          plVar69[1] = plVar69[1] + 1;
                                                          UNLOCK();
                                                          puVar62[2] = uVar64;
                                                          if ((char *)*puVar62 == (char *)0x0)
                                                          goto LAB_0c98886f;
                                                          cVar56 = *(char *)*puVar62;
                                                        }
                                                        if (cVar56 != '\0') {
                                                          puVar62[3] = pcVar9;
                                                          puVar62[4] = plVar75;
                                                          if (plVar75 == (long *)0x0) {
                                                            puVar62[5] = uVar77;
                                                            if (*pcVar9 != '\0') {
                                                              *(undefined1 (*) [16])(puVar62 + 6) =
                                                                   (undefined1  [16])0x0;
                                                              puVar62[8] = 0;
                                                              goto LAB_0c982239;
                                                            }
                                                          }
                                                          else {
                                                            LOCK();
                                                            plVar75[1] = plVar75[1] + 1;
                                                            UNLOCK();
                                                            puVar62[5] = uVar77;
                                                            if (((char *)puVar62[3] != (char *)0x0)
                                                               && (*(char *)puVar62[3] != '\0')) {
                                                              *(undefined1 (*) [16])(puVar62 + 6) =
                                                                   (undefined1  [16])0x0;
                                                              puVar62[8] = 0;
                                                              LOCK();
                                                              plVar84 = plVar75 + 1;
                                                              lVar66 = *plVar84;
                                                              *plVar84 = *plVar84 + -1;
                                                              UNLOCK();
                                                              if (lVar66 == 0) {
                                                                (**(code **)(*plVar75 + 0x10))
                                                                          (plVar75);
                                                                func_0x0412c2d0(plVar75);
                                                              }
LAB_0c982239:
                                                              if (plVar69 != (long *)0x0) {
                                                                LOCK();
                                                                plVar75 = plVar69 + 1;
                                                                lVar66 = *plVar75;
                                                                *plVar75 = *plVar75 + -1;
                                                                UNLOCK();
                                                                if (lVar66 == 0) {
                                                                  (**(code **)(*plVar69 + 0x10))
                                                                            (plVar69);
                                                                  func_0x0412c2d0(plVar69);
                                                                }
                                                              }
                                                              puVar65 = (undefined8 *)
                                                                        (**(code **)(_DAT_0f5463b0 +
                                                                                    0x10))(&
                                                  DAT_0f5463b0,0x18);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar65 = &UNK_0f534768;
                                                  puVar70 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar70 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar70 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar70 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar70 + 3) = 1;
                                                  puVar65[1] = puVar70 + 3;
                                                  puVar65[2] = puVar70;
                                                  *(undefined8 **)(pauVar83[0x53] + 8) = puVar65;
                                                  *(undefined8 **)pauVar83[0x54] = puVar62;
                                                  if (*(char *)(puVar68 + 0x24) == '\0') {
                                                    lVar66 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                       (&DAT_0f5463b0,1);
                                                    if (lVar66 == 0) {
                                                      lVar66 = 0;
                                                      func_0x0eec74c0(1,0);
                                                    }
                                                  }
                                                  else {
                                                    lVar66 = 0;
                                                  }
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar65 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar65 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar65 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar65 + 3) = 1;
                                                  puVar62[1] = puVar65 + 3;
                                                  puVar62[2] = puVar65;
                                                  *(undefined8 **)(pauVar83[0x54] + 8) = puVar62;
                                                  *(long *)pauVar83[0x55] = lVar66;
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x88);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x88,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar62 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar62 = &UNK_0f3e9760;
                                                  *(undefined1 (*) [16])(puVar62 + 0xb) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 3) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 5) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 7) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 9) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 0xd) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 0xf) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined4 *)(puVar62 + 0xc) = 0x3f600000;
                                                  func_0x048af640(puVar62 + 6,8);
                                                  *(undefined1 (*) [16])((long)puVar62 + 0x72) =
                                                       (undefined1  [16])0x0;
                                                  *(undefined1 (*) [16])(puVar62 + 0xd) =
                                                       (undefined1  [16])0x0;
                                                  puVar62[3] = &UNK_0f534768;
                                                  puVar65 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar65 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar65 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar65 + 3) = 1;
                                                  puVar62[4] = puVar65 + 3;
                                                  puVar62[5] = puVar65;
                                                  puVar62[3] = &UNK_0ef471f0;
                                                  *(undefined8 **)(pauVar83[0x55] + 8) = puVar62 + 3
                                                  ;
                                                  *(undefined8 **)pauVar83[0x56] = puVar62;
                                                  if ((puVar68[0x21] == 0) &&
                                                     (cVar56 = func_0x0eeddcf0(&UNK_01411d19,
                                                                               &UNK_0135b312,300,
                                                                               &UNK_0142bd41,
                                                                               &UNK_013f91c7),
                                                     cVar56 != '\0')) {
                                                    _DAT_00000000 = 0xdeadc0de;
                                                  }
                                                  if ((*(char *)puVar68[0x21] == '\0') &&
                                                     (cVar56 = func_0x0eeddcf0(&UNK_0130991f,
                                                                               &UNK_0147828b,0x130,
                                                                               &UNK_0142bd41,
                                                                               &UNK_013f91c7),
                                                     cVar56 != '\0')) {
                                                    _DAT_00000000 = 0xdeadc0de;
                                                  }
                                                  lVar66 = puVar68[0x23];
                                                  lVar72 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                     (&DAT_0f5463b0,0xb8);
                                                  if (lVar72 == 0) {
                                                    func_0x0eec74c0(0xb8,0);
                                                  }
                                                  cStack_310 = '\0';
                                                  uStack_30f = 0;
                                                  uStack_30d = 0;
                                                  uStack_309._0_1_ = 0;
                                                  pcVar79 = *(char **)(*pauVar83 + 8);
                                                  plVar69 = *(long **)pauVar83[1];
                                                  if (plVar69 != (long *)0x0) {
                                                    LOCK();
                                                    plVar69[1] = plVar69[1] + 1;
                                                    UNLOCK();
                                                    cStack_310 = (char)plVar69;
                                                    uStack_30f = (undefined2)((ulong)plVar69 >> 8);
                                                    uStack_30d = (undefined4)
                                                                 ((ulong)plVar69 >> 0x18);
                                                    uStack_309._0_1_ =
                                                         (byte)((ulong)plVar69 >> 0x38);
                                                  }
                                                  uStack_318._0_1_ = (char)pcVar79;
                                                  uStack_318._1_6_ =
                                                       (undefined6)((ulong)pcVar79 >> 8);
                                                  uStack_318._7_1_ =
                                                       (undefined1)((ulong)pcVar79 >> 0x38);
                                                  if (pcVar79 != (char *)0x0) {
                                                    uStack_309._1_3_ = (uint3)pauVar83;
                                                    uStack_305 = (undefined4)
                                                                 ((ulong)pauVar83 >> 0x18);
                                                    uVar7 = uStack_305;
                                                    uStack_301 = (undefined1)
                                                                 ((ulong)pauVar83 >> 0x38);
                                                    uVar5 = uStack_301;
                                                    if (*pcVar79 != '\0') {
                                                      func_0x0b04df80(lVar72,&uStack_318,
                                                                      lVar66 + 0x138);
                                                      uStack_318._0_1_ = '\0';
                                                      uStack_318._1_6_ = 0;
                                                      uStack_318._7_1_ = 0;
                                                      cStack_310 = '\0';
                                                      uStack_30f = 0;
                                                      uStack_30d = 0;
                                                      uStack_309 = uStack_309 & 0xffffff00;
                                                      if (plVar69 != (long *)0x0) {
                                                        LOCK();
                                                        plVar75 = plVar69 + 1;
                                                        lVar66 = *plVar75;
                                                        *plVar75 = *plVar75 + -1;
                                                        UNLOCK();
                                                        if (lVar66 == 0) {
                                                          (**(code **)(*plVar69 + 0x10))(plVar69);
                                                          func_0x0412c2d0(plVar69);
                                                        }
                                                        plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                                                   CONCAT43(
                                                  uStack_30d,CONCAT21(uStack_30f,cStack_310)));
                                                  uStack_309 = uStack_309 & 0xff;
                                                  uStack_305 = 0;
                                                  uStack_301 = 0;
                                                  if (plVar69 != (long *)0x0) {
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar66 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar66 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                  }
                                                  }
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar65 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  plVar69 = (long *)(pauVar83[0x56] + 8);
                                                  *(undefined1 (*) [16])(puVar65 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar65 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar65 + 3) = 1;
                                                  puVar62[1] = puVar65 + 3;
                                                  puVar62[2] = puVar65;
                                                  *(undefined8 **)(pauVar83[0x56] + 8) = puVar62;
                                                  *(long *)pauVar83[0x57] = lVar72;
                                                  plStack_80 = plVar69;
                                                  if (*(char *)(puVar68 + 0x24) == '\0') {
                                                    puVar73 = (undefined4 *)
                                                              (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                        (&DAT_0f5463b0,4);
                                                    if (puVar73 == (undefined4 *)0x0) {
                                                      func_0x0eec74c0(4,0);
                                                    }
                                                    *puVar73 = 0;
                                                  }
                                                  else {
                                                    puVar73 = (undefined4 *)0x0;
                                                  }
                                                  puVar62 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x18);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x18,0);
                                                  }
                                                  *puVar62 = &UNK_0f534768;
                                                  puVar65 = (undefined8 *)
                                                            (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,0x20);
                                                  if (puVar65 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  *(undefined1 (*) [16])(puVar65 + 1) =
                                                       (undefined1  [16])0x0;
                                                  *puVar65 = &UNK_0ef44a60;
                                                  *(undefined1 *)(puVar65 + 3) = 1;
                                                  puVar62[1] = puVar65 + 3;
                                                  puVar62[2] = puVar65;
                                                  *(undefined8 **)(pauVar83[0x57] + 8) = puVar62;
                                                  *(undefined4 **)pauVar83[0x58] = puVar73;
                                                  lVar66 = *(long *)(pauVar83[7] + 8);
                                                  auStack_1f8 = (undefined1  [16])0x0;
                                                  uStack_1e8 = 0;
                                                  lVar72 = *(long *)pauVar83[0x3d];
                                                  if (lVar72 != 0) {
                                                    pcVar79 = *(char **)*(undefined1 (*) [16])
                                                                         (lVar72 + 8);
                                                    auStack_1f8 = *(undefined1 (*) [16])(lVar72 + 8)
                                                    ;
                                                    if (*(long *)(lVar72 + 0x10) == 0) {
                                                      auStack_1f8._8_8_ = 0;
                                                      auStack_1f8._0_8_ = pcVar79;
                                                    }
                                                    else {
                                                      LOCK();
                                                      plVar75 = (long *)(*(long *)(lVar72 + 0x10) +
                                                                        8);
                                                      *plVar75 = *plVar75 + 1;
                                                      UNLOCK();
                                                    }
                                                    if ((pcVar79 != (char *)0x0) &&
                                                       (uStack_1e8 = *(undefined8 *)
                                                                      (pauVar83[0x3d] + 8),
                                                       *pcVar79 != '\0')) {
                                                      auStack_118 = (undefined1  [16])0x0;
                                                      lVar72 = *plVar69;
                                                      if (lVar72 != 0) {
                                                        pcVar79 = *(char **)*(undefined1 (*) [16])
                                                                             (lVar72 + 8);
                                                        plVar69 = *(long **)(lVar72 + 0x10);
                                                        auStack_118 = *(undefined1 (*) [16])
                                                                       (lVar72 + 8);
                                                        if (plVar69 == (long *)0x0) {
                                                          auStack_118._8_8_ = 0;
                                                          auStack_118._0_8_ = pcVar79;
                                                        }
                                                        else {
                                                          LOCK();
                                                          plVar69[1] = plVar69[1] + 1;
                                                          UNLOCK();
                                                        }
                                                        if ((pcVar79 != (char *)0x0) &&
                                                           (ppauStack_108 =
                                                                 *(undefined1 (***) [16])
                                                                  pauVar83[0x57], *pcVar79 != '\0'))
                                                        {
                                                          plStack_c8 = (long *)(pauVar83[0x57] + 8);
                                                          if (lVar66 == 0) {
                                                            pauStack_220 = (undefined1 (*) [16])0x0;
LAB_0c982b66:
                                                            puVar62 = (undefined8 *)
                                                                      (**(code **)(_DAT_0f5463b0 +
                                                                                  0x10))(&
                                                  DAT_0f5463b0,8);
                                                  if (puVar62 == (undefined8 *)0x0) {
                                                    func_0x0eec74c0(8,0);
                                                  }
                                                  *puVar62 = &UNK_0f3e6c78;
                                                  plVar69 = (long *)(**(code **)(_DAT_0f5463b0 +
                                                                                0x10))(&DAT_0f5463b0
                                                                                       ,0x20);
                                                  if (plVar69 == (long *)0x0) {
                                                    func_0x0eec74c0(0x20,0);
                                                  }
                                                  pcVar79 = (char *)puVar68[0x21];
                                                  plVar75 = (long *)puVar68[0x22];
                                                  if (plVar75 != (long *)0x0) {
                                                    LOCK();
                                                    plVar75[1] = plVar75[1] + 1;
                                                    UNLOCK();
                                                  }
                                                  param_1 = (undefined1  [8])pauVar83;
                                                  if ((pcVar79 != (char *)0x0) && (*pcVar79 != '\0')
                                                     ) {
                                                    lVar66 = puVar68[0x23];
                                                    *plVar69 = (long)&UNK_0f3e3b20;
                                                    plVar69[1] = (long)pcVar79;
                                                    plVar69[2] = (long)plVar75;
                                                    if (plVar75 == (long *)0x0) {
                                                      plVar69[3] = lVar66;
                                                      lVar66 = *(long *)(pauVar83[7] + 8);
joined_r0x0c982cd5:
                                                      if (lVar66 == 0) {
LAB_0c982cdb:
                                                        auStack_288 = (undefined1  [16])0x0;
                                                        uStack_278 = 0;
LAB_0c982cf4:
                                                        pauVar63 = (undefined1 (*) [16])
                                                                   (**(code **)(_DAT_0f5463b0 + 0x10
                                                                               ))(&DAT_0f5463b0,
                                                                                  0x1e0);
                                                        if (pauVar63 == (undefined1 (*) [16])0x0) {
                                                          func_0x0eec74c0(0x1e0,0);
                                                        }
                                                        auStack_268._0_8_ = puVar62;
                                                        uVar58 = *(undefined1 *)(puVar68 + 0x24);
                                                        uStack_318._0_1_ = '\0';
                                                        uStack_318._1_6_ = 0;
                                                        uStack_318._7_1_ = 0;
                                                        cStack_310 = '\0';
                                                        uStack_30f = 0;
                                                        uStack_30d = 0;
                                                        uStack_309 = 0;
                                                        uStack_305 = 0;
                                                        uStack_301 = 0;
                                                        lVar72 = *(long *)*pauStack_120;
                                                        param_1 = (undefined1  [8])pauVar63;
                                                        if (lVar72 != 0) {
                                                          pcVar79 = *(char **)(lVar72 + 8);
                                                          lVar72 = *(long *)(lVar72 + 0x10);
                                                          uStack_318._0_1_ = (char)pcVar79;
                                                          uStack_318._7_1_ =
                                                               (undefined1)((ulong)pcVar79 >> 0x38);
                                                          uStack_318._1_6_ =
                                                               (undefined6)((ulong)pcVar79 >> 8);
                                                          if (lVar72 == 0) {
                                                            cStack_310 = '\0';
                                                            uStack_30f = 0;
                                                            uStack_30d = 0;
                                                            uStack_309 = 0;
                                                          }
                                                          else {
                                                            LOCK();
                                                            *(long *)(lVar72 + 8) =
                                                                 *(long *)(lVar72 + 8) + 1;
                                                            UNLOCK();
                                                            cStack_310 = (char)lVar72;
                                                            uStack_30f = (undefined2)
                                                                         ((ulong)lVar72 >> 8);
                                                            uStack_30d = (undefined4)
                                                                         ((ulong)lVar72 >> 0x18);
                                                            uStack_309._0_1_ =
                                                                 (byte)((ulong)lVar72 >> 0x38);
                                                            uStack_309 = (uint)(byte)uStack_309;
                                                          }
                                                          if (pcVar79 != (char *)0x0) {
                                                            uVar64 = *(undefined8 *)
                                                                      (pauVar83[0x17] + 8);
                                                            uStack_309._1_3_ = (uint3)uVar64;
                                                            uStack_305 = (undefined4)
                                                                         ((ulong)uVar64 >> 0x18);
                                                            uStack_301 = (undefined1)
                                                                         ((ulong)uVar64 >> 0x38);
                                                            if (*pcVar79 != '\0') {
                                                              cStack_2b0 = auStack_288[8];
                                                              uStack_2af = auStack_288._9_6_;
                                                              uStack_2a9 = auStack_288[0xf];
                                                              if (auStack_288._8_8_ != 0) {
                                                                LOCK();
                                                                *(long *)(auStack_288._8_8_ + 8) =
                                                                     *(long *)(auStack_288._8_8_ + 8
                                                                              ) + 1;
                                                                UNLOCK();
                                                              }
                                                              uStack_2a8 = (undefined7)uStack_278;
                                                              uStack_2a1 = (undefined1)
                                                                           ((ulong)uStack_278 >>
                                                                           0x38);
                                                              auStack_2d8 = (undefined1  [8])0x0;
                                                              plStack_2d0 = (long *)0x0;
                                                              uStack_2c8 = 0;
                                                              lVar72 = *plStack_c8;
                                                              if (lVar72 != 0) {
                                                                auStack_2d8 = *(undefined1 (*) [8])
                                                                               (lVar72 + 8);
                                                                plStack_2d0 = *(long **)(lVar72 + 
                                                  0x10);
                                                  if (plStack_2d0 == (long *)0x0) {
                                                    plStack_2d0 = (long *)0x0;
                                                  }
                                                  else {
                                                    LOCK();
                                                    plStack_2d0[1] = plStack_2d0[1] + 1;
                                                    UNLOCK();
                                                  }
                                                  uStack_2c8 = 0;
                                                  if (auStack_2d8 != (undefined1  [8])0x0) {
                                                    uStack_2c8 = *(undefined8 *)pauVar83[0x58];
                                                  }
                                                  }
                                                  pauStack_2b8 = (undefined1 (*) [16])
                                                                 auStack_288._0_8_;
                                                  plStack_208 = plVar69;
                                                  func_0x0c906d90(pauVar63,auStack_268,uVar58,
                                                                  &uStack_318,&plStack_208,
                                                                  &pauStack_2b8,auStack_2d8);
                                                  plVar69 = plStack_2d0;
                                                  _auStack_2d8 = (undefined1  [16])0x0;
                                                  if (plVar69 == (long *)0x0) {
                                                    uStack_2c8 = 0;
                                                  }
                                                  else {
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar72 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar72 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                    plVar69 = plStack_2d0;
                                                    uStack_2c8 = 0;
                                                    if (plStack_2d0 != (long *)0x0) {
                                                      LOCK();
                                                      plVar75 = plStack_2d0 + 1;
                                                      lVar72 = *plVar75;
                                                      *plVar75 = *plVar75 + -1;
                                                      UNLOCK();
                                                      if (lVar72 == 0) {
                                                        (**(code **)(*plStack_2d0 + 0x10))
                                                                  (plStack_2d0);
                                                        func_0x0412c2d0(plVar69);
                                                      }
                                                    }
                                                  }
                                                  plVar69 = (long *)CONCAT17(uStack_2a9,
                                                                             CONCAT61(uStack_2af,
                                                                                      cStack_2b0));
                                                  pauStack_2b8 = (undefined1 (*) [16])0x0;
                                                  cStack_2b0 = '\0';
                                                  uStack_2af = 0;
                                                  uStack_2a9 = 0;
                                                  if (plVar69 == (long *)0x0) {
                                                    uStack_2a8 = 0;
                                                    uStack_2a1 = 0;
                                                  }
                                                  else {
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar72 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar72 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                    plVar69 = (long *)CONCAT17(uStack_2a9,
                                                                               CONCAT61(uStack_2af,
                                                                                        cStack_2b0))
                                                    ;
                                                    uStack_2a8 = 0;
                                                    uStack_2a1 = 0;
                                                    if (plVar69 != (long *)0x0) {
                                                      LOCK();
                                                      plVar75 = plVar69 + 1;
                                                      lVar72 = *plVar75;
                                                      *plVar75 = *plVar75 + -1;
                                                      UNLOCK();
                                                      if (lVar72 == 0) {
                                                        (**(code **)(*plVar69 + 0x10))(plVar69);
                                                        func_0x0412c2d0(plVar69);
                                                      }
                                                    }
                                                  }
                                                  plVar69 = plStack_208;
                                                  plStack_208 = (long *)0x0;
                                                  if (plVar69 != (long *)0x0) {
                                                    (**(code **)(*plVar69 + 8))();
                                                  }
                                                  plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                                             CONCAT43(uStack_30d,
                                                                                      CONCAT21(
                                                  uStack_30f,cStack_310)));
                                                  uStack_318._0_1_ = '\0';
                                                  uStack_318._1_6_ = 0;
                                                  uStack_318._7_1_ = 0;
                                                  cStack_310 = 0;
                                                  uStack_30f = 0;
                                                  uStack_30d = 0;
                                                  uStack_309 = uStack_309 & 0xffffff00;
                                                  if (plVar69 == (long *)0x0) {
                                                    uStack_309 = 0;
                                                    uStack_305 = 0;
                                                    uStack_301 = 0;
                                                  }
                                                  else {
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar72 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar72 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                    plVar69 = (long *)CONCAT17((byte)uStack_309,
                                                                               CONCAT43(uStack_30d,
                                                                                        CONCAT21(
                                                  uStack_30f,cStack_310)));
                                                  uStack_309 = uStack_309 & 0xff;
                                                  uStack_305 = 0;
                                                  uStack_301 = 0;
                                                  if (plVar69 != (long *)0x0) {
                                                    LOCK();
                                                    plVar75 = plVar69 + 1;
                                                    lVar72 = *plVar75;
                                                    *plVar75 = *plVar75 + -1;
                                                    UNLOCK();
                                                    if (lVar72 == 0) {
                                                      (**(code **)(*plVar69 + 0x10))(plVar69);
                                                      func_0x0412c2d0(plVar69);
                                                    }
                                                  }
                                                  }
                                                  uVar64 = auStack_268._0_8_;
                                                  auVar17._8_8_ = 0;
                                                  auVar17._0_8_ = auStack_268._8_8_;
                                                  auStack_268 = auVar17 << 0x40;
                                                  if ((long *)uVar64 != (long *)0x0) {
                                                    (**(code **)(*(long *)uVar64 + 8))();
                                                  }
                                                  lVar72 = *(long *)*pauStack_1e0;
                                                  if ((*(long *)*pauStack_228 == 0) &&
                                                     (cVar56 = func_0x0eeddcf0(&UNK_01411d19,
                                                                               &UNK_0135b312,300,
                                                                               &UNK_0142bd41,
                                                                               &UNK_013b6dd1),
                                                     cVar56 != '\0')) {
                                                    _DAT_00000000 = 0xdeadc0de;
                                                  }
                                                  if ((**(char **)*pauStack_228 == '\0') &&
                                                     (cVar56 = func_0x0eeddcf0(&UNK_0130991f,
                                                                               &UNK_0147828b,0x130,
                                                                               &UNK_0142bd41,
                                                                               &UNK_013b6dd1),
                                                     cVar56 != '\0')) {
                                                    _DAT_00000000 = 0xdeadc0de;
                                                  }
                                                  (**(code **)(**(long **)pauVar83[0x32] + 0x10))
                                                            (&plStack_208);
                                                  (*(code *)puVar68[0x15])
                                                            (&plStack_210,puVar68[0x16]);
                                                  lVar74 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                                     (&DAT_0f5463b0,0x70);
                                                  if (lVar74 == 0) {
                                                    func_0x0eec74c0(0x70,0);
                                                  }
                                                  plVar84 = plStack_200;
                                                  plVar75 = plStack_208;
                                                  plVar69 = plStack_210;
                                                  pauStack_150 = pauStack_220;
                                                  pauStack_220 = (undefined1 (*) [16])0x0;
                                                  uStack_318._0_1_ = '\0';
                                                  uStack_318._1_6_ = 0;
                                                  uStack_318._7_1_ = 0;
                                                  cStack_310 = '\0';
                                                  uStack_30f = 0;
                                                  uStack_30d = 0;
                                                  uStack_309 = 0;
                                                  uStack_305 = 0;
                                                  uStack_301 = 0;
                                                  lVar81 = *(long *)(lVar72 + 0x10);
                                                  param_1 = (undefined1  [8])pauVar83;
                                                  pauStack_1d0 = pauVar63;
                                                  if (lVar81 != 0) {
                                                    pcVar79 = *(char **)(lVar81 + 8);
                                                    lVar81 = *(long *)(lVar81 + 0x10);
                                                    uStack_318._0_1_ = (char)pcVar79;
                                                    uStack_318._7_1_ =
                                                         (undefined1)((ulong)pcVar79 >> 0x38);
                                                    uStack_318._1_6_ =
                                                         (undefined6)((ulong)pcVar79 >> 8);
                                                    if (lVar81 == 0) {
                                                      cStack_310 = '\0';
                                                      uStack_30f = 0;
                                                      uStack_30d = 0;
                                                      uStack_309 = 0;
                                                    }
                                                    else {
                                                      LOCK();
                                                    
/* truncated by DecompileTargets.java */

