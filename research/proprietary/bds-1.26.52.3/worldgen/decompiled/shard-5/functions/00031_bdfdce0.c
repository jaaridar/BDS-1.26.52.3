/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbefdce0 (ELF vaddr 0xbdfdce0)
 * Label: caller-of-callee
 * Body:  [[0befdce0, 0befdec6] [0befded0, 0befe6ac] [0befe6b0, 0befe6ea] [0befe6f0, 0befe809] [0befe810, 0beffdf2] [0beffe00, 0befff75] [0befff80, 0bf000a0] [0bf000b0, 0bf00199] [0bf001a0, 0bf00ab1] [0bf00ac0, 0bf00bf2] [0bf00c00, 0bf012fd] [0bf01300, 0bf0138e] [0bf01390, 0bf01bc9] [0bf01bd0, 0bf02017] [0bf02020, 0bf0260d] [0bf02610, 0bf02654] [0bf02660, 0bf02745] [0bf02750, 0bf02794] [0bf027a0, 0bf029ec] [0bf029f0, 0bf02ab9] [0bf02ac0, 0bf02b69] [0bf02b70, 0bf02d7b] [0bf02d80, 0bf02e63] [0bf02e70, 0bf03566] [0bf03570, 0bf03619] [0bf03620, 0bf036d8] [0bf036e0, 0bf03701] [0bf03710, 0bf03790] [0bf037a0, 0bf038b9] [0bf038c0, 0bf03b23] [0bf03b30, 0bf03b72] [0bf03b80, 0bf03ba2] [0bf03bb0, 0bf03c70] [0bf03c80, 0bf03ca6] [0bf03cb0, 0bf03cf6] [0bf03d00, 0bf04153] [0bf04160, 0bf041c0] [0bf041d0, 0bf045c6] [0bf047df, 0bf047fe] [0bf04817, 0bf04821] [0bf04878, 0bf048ae] [0bf04d39, 0bf04d45] [0bf04dcf, 0bf04ddc]]
 * Ghidra: FUN_0befdce0
 */


/* WARNING: Removing unreachable block (ram,0x0bf000e2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0befdce0(byte *param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  short sVar3;
  char *pcVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  float fVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char *pcVar30;
  undefined2 uVar31;
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
  undefined7 *puVar46;
  undefined2 uVar47;
  ulong *puVar48;
  int *piVar49;
  char cVar50;
  byte bVar51;
  int iVar52;
  int iVar53;
  undefined8 uVar54;
  int *piVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined1 auVar59 [8];
  int *piVar60;
  long lVar61;
  byte *pbVar62;
  int *piVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  byte bVar66;
  undefined8 *puVar67;
  ulong **ppuVar68;
  ulong *puVar69;
  int iVar70;
  undefined8 *puVar71;
  ulong **ppuVar72;
  undefined1 uVar73;
  ulong *puVar74;
  ulong *puVar75;
  undefined1 *puVar76;
  long *plVar77;
  char *pcVar78;
  ulong uVar79;
  byte *pbVar80;
  ulong uVar81;
  undefined1 auVar82 [8];
  uint uVar83;
  ulong uVar84;
  int *piVar85;
  undefined8 *puVar86;
  byte *pbVar87;
  ulong *puVar88;
  undefined8 *puVar89;
  ulong uVar90;
  int *piVar91;
  ulong uVar92;
  undefined8 *puVar93;
  undefined4 uVar94;
  float fVar95;
  float fVar96;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  byte bVar101;
  byte bVar102;
  byte bVar104;
  byte bVar106;
  byte bVar108;
  byte bVar110;
  byte bVar112;
  byte bVar114;
  byte bVar115;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  undefined1 auVar142 [16];
  int *piStack_308;
  ulong auStack_2f8 [2];
  undefined8 uStack_2e8;
  int *piStack_2e0;
  byte bStack_2d8;
  undefined1 auStack_2d7 [7];
  undefined4 uStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  byte bStack_2c4;
  char cStack_2c3;
  short sStack_2c2;
  byte bStack_2c0;
  undefined1 uStack_2bf;
  undefined2 uStack_2be;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  byte bStack_2a8;
  undefined7 uStack_2a7;
  uint uStack_2a0;
  undefined4 uStack_29c;
  byte bStack_298;
  undefined7 uStack_297;
  byte bStack_290;
  undefined4 uStack_28f;
  undefined1 uStack_28b;
  undefined2 uStack_28a;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [8];
  ulong *puStack_270;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  undefined1 auStack_220 [16];
  ulong *puStack_210;
  undefined1 auStack_208 [8];
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong **ppuStack_1e8;
  undefined8 uStack_1e0;
  byte bStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1c8;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b0;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 *apuStack_168 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 **ppuStack_148;
  uint uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined1 uStack_104;
  int iStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined4 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  ulong auStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  undefined7 *puStack_70;
  ulong **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  char cVar103;
  char cVar105;
  char cVar107;
  char cVar109;
  char cVar111;
  char cVar113;
  
  uVar54 = func_0x048648e0(*param_2,&UNK_01239c94);
  cVar50 = func_0x04864260(uVar54);
  if (cVar50 == '\0') {
    param_3 = func_0x04863e00(uVar54,0);
  }
  *(undefined4 *)(param_1 + 0x18) = param_3;
  piVar55 = (int *)func_0x048648e0(*param_2,&UNK_01340d69);
  if (DAT_0f6d0378 == '\0') goto LAB_0bf04390;
LAB_0befdd53:
  if (_DAT_0f6d0368 == 0) {
    bStack_2d8 = 8;
    auStack_2d7[0] = 'm';
    auStack_2d7._1_2_ = 0x766f;
    auStack_2d7[3] = 0x65;
    auStack_2d7[4] = 0;
    auStack_208 = (undefined1  [8])&bStack_2d8;
    lVar56 = func_0x0bf070c0(&DAT_0f6d0350,&bStack_2d8,&UNK_01563a4f,auStack_208,&uStack_158);
    *(undefined4 *)(lVar56 + 0x28) = 1;
    if ((bStack_2d8 & 1) != 0) {
      func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                      CONCAT26(auStack_2d7._5_2_,
                               CONCAT15(auStack_2d7[4],
                                        CONCAT14(auStack_2d7[3],
                                                 CONCAT22(auStack_2d7._1_2_,
                                                          CONCAT11(auStack_2d7[0],bStack_2d8))))) &
                      0xfffffffffffffffe);
    }
    bStack_2d8 = 8;
    auStack_2d7[0] = 'l';
    auStack_2d7._1_2_ = 0x6f6f;
    auStack_2d7[3] = 0x6b;
    auStack_2d7[4] = 0;
    lVar56 = func_0x0bf070c0(&DAT_0f6d0350,&bStack_2d8,&UNK_01563a4f,auStack_208,&uStack_158);
    *(undefined4 *)(lVar56 + 0x28) = 2;
    if ((bStack_2d8 & 1) != 0) {
      func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                      CONCAT26(auStack_2d7._5_2_,
                               CONCAT15(auStack_2d7[4],
                                        CONCAT14(auStack_2d7[3],
                                                 CONCAT22(auStack_2d7._1_2_,
                                                          CONCAT11(auStack_2d7[0],bStack_2d8))))) &
                      0xfffffffffffffffe);
    }
    bStack_2d8 = 8;
    auStack_2d7[0] = 'j';
    auStack_2d7._1_2_ = 0x6d75;
    auStack_2d7[3] = 0x70;
    auStack_2d7[4] = '\0';
    lVar56 = func_0x0bf070c0(&DAT_0f6d0350,&bStack_2d8,&UNK_01563a4f,auStack_208,&uStack_158);
    *(undefined4 *)(lVar56 + 0x28) = 4;
    if ((bStack_2d8 & 1) != 0) {
      func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                      CONCAT26(auStack_2d7._5_2_,
                               CONCAT15(auStack_2d7[4],
                                        CONCAT14(auStack_2d7[3],
                                                 CONCAT22(auStack_2d7._1_2_,
                                                          CONCAT11(auStack_2d7[0],bStack_2d8))))) &
                      0xfffffffffffffffe);
    }
  }
  func_0x04865530(&uStack_158,piVar55);
  func_0x048655b0(auStack_2f8,piVar55);
  uVar83 = 0;
  while( true ) {
    cVar50 = func_0x04862c80(&uStack_158,auStack_2f8);
    if (cVar50 != '\0') break;
    uVar54 = func_0x04862b80(&uStack_158);
    auVar32._14_2_ = 0;
    auVar32._0_14_ = stack0xfffffffffffffdfa;
    _auStack_208 = auVar32 << 0x10;
    func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
    if ((auStack_208[0] & 1) != 0) {
      func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
    }
    auStack_208 = (undefined1  [8])&bStack_2d8;
    lVar56 = func_0x0b0be840(&DAT_0f6d0350,&bStack_2d8,&UNK_01563a4f,auStack_208);
    uVar83 = uVar83 | *(uint *)(lVar56 + 0x28);
    if ((bStack_2d8 & 1) != 0) {
      func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                      CONCAT26(auStack_2d7._5_2_,
                               CONCAT15(auStack_2d7[4],
                                        CONCAT14(auStack_2d7[3],
                                                 CONCAT22(auStack_2d7._1_2_,
                                                          CONCAT11(auStack_2d7[0],bStack_2d8))))) &
                      0xfffffffffffffffe);
    }
    func_0x04862ba0(&uStack_158);
  }
  func_0x04862b40(auStack_2f8);
  func_0x04862b40(&uStack_158);
  *(uint *)(param_1 + 0x1c) = uVar83;
  uVar54 = func_0x048648e0(*param_2,&UNK_0130aa65);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x34) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&DAT_0135c5dd);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x38) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&DAT_014ae931);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x3c) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_0119d260);
  bVar51 = func_0x04863ff0(uVar54,0);
  *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xfffe | (ushort)bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_0127271c);
  bVar51 = func_0x04863ff0(uVar54,0);
  *(ushort *)(param_1 + 0x5f9) = (*(ushort *)(param_1 + 0x5f9) & 0xfffd) + (ushort)bVar51 * 2;
  uVar54 = func_0x048648e0(*param_2,&UNK_012179c6);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x30) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&DAT_0128b68f);
  fVar95 = (float)func_0x04863f80(uVar54);
  *(int *)(param_1 + 0x5fc) = (int)(fVar95 * _DAT_011987c0);
  uVar54 = func_0x048648e0(*param_2,&UNK_011fdaa0);
  bVar51 = func_0x04863ff0(uVar54,0);
  *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xff7f | (ushort)bVar51 << 7;
  uVar54 = func_0x048648e0(*param_2,&UNK_0128e8d0);
  bVar51 = func_0x04863ff0(uVar54,0);
  param_1[0x5fb] = bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_014bdcaa);
  bVar51 = func_0x04863ff0(uVar54,0);
  *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xfeff | (ushort)bVar51 << 8;
  uVar54 = func_0x048648e0(*param_2,&UNK_013d4c7c);
  uVar94 = func_0x04863e00(uVar54,10);
  *(undefined4 *)(param_1 + 0x20) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_01455f81);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x24) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_01222e13);
  fVar95 = (float)func_0x04863f80(uVar54);
  *(int *)(param_1 + 0x28) = (int)(fVar95 * _DAT_011987c0);
  uVar54 = func_0x048648e0(*param_2,&UNK_012d798f);
  bVar51 = func_0x04863ff0(uVar54,0);
  param_1[0x2c] = bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_0131a5b1);
  auVar118._14_2_ = 0;
  auVar118._0_14_ = stack0xfffffffffffffdfa;
  _auStack_208 = auVar118 << 0x10;
  func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
  if ((param_1[0x60] & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(param_1 + 0x70),*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffe)
    ;
  }
  *(ulong *)(param_1 + 0x70) =
       CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
  *(ulong *)(param_1 + 0x60) =
       CONCAT26(auStack_2d7._5_2_,
                CONCAT15(auStack_2d7[4],
                         CONCAT14(auStack_2d7[3],
                                  CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)))))
  ;
  *(ulong *)(param_1 + 0x68) =
       CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
  bStack_2d8 = 0;
  auStack_2d7[0] = '\0';
  if ((auStack_208[0] & 1) != 0) {
    func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
  }
  uVar54 = func_0x048648e0(*param_2,&UNK_013ecc40);
  bVar51 = func_0x04863ff0(uVar54,0);
  param_1[0x78] = bVar51;
  cVar50 = func_0x04865100(*param_2,&UNK_01340d28);
  if (cVar50 != '\0') {
    uVar54 = func_0x048648e0(*param_2,&UNK_01340d28);
    func_0x0b05abc0(param_1 + 0x80,&bStack_2d8,uVar54);
  }
  uVar54 = func_0x048648e0(*param_2,&UNK_012be13a);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0xc0) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_0119d269);
  cVar50 = func_0x04864260(uVar54);
  uVar94 = 0;
  if (cVar50 == '\0') {
    uVar94 = func_0x04863f80(uVar54);
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar94;
  param_1[200] = cVar50 == '\0';
  uVar54 = func_0x048648e0(*param_2,&UNK_013a0fc1);
  bVar51 = func_0x04863ff0(uVar54,1);
  param_1[0xcc] = bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_0146ca6c);
  uVar94 = func_0x04863e00(uVar54,0xffffffff);
  *(undefined4 *)(param_1 + 0xd0) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_01455f96);
  bVar51 = func_0x04863ff0(uVar54,1);
  param_1[0xd4] = bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_012f20b5);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0xd8) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_014a4579);
  uVar94 = func_0x04863e00(uVar54,1);
  *(undefined4 *)(param_1 + 0x5b4) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_012e7308);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x858) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_014d94ab);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x85c) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_011c8e1d);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x860) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_011e1f36);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x868) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_013d4ca0);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x864) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_01226e4e);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x870) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_0133575b);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x86c) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_01340eda);
  func_0x0bf0da90(uVar54,param_1 + 0x318,0);
  uVar54 = func_0x048648e0(*param_2,&DAT_0129a381);
  fVar95 = (float)func_0x04863f80(uVar54);
  *(int *)(param_1 + 0x378) = (int)(fVar95 * _DAT_011987c0);
  uStack_2d0 = CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0);
  if ((*param_1 & 1) == 0) goto LAB_0befed65;
  uStack_2d0 = CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0);
  if (*(long *)(param_1 + 8) != 0x1a) goto LAB_0befed65;
  pcVar4 = *(char **)(param_1 + 0x10);
  auVar100[0] = -(pcVar4[10] == DAT_014e9e20);
  auVar100[1] = -(pcVar4[0xb] == UNK_014e9e21);
  auVar100[2] = -(pcVar4[0xc] == UNK_014e9e22);
  auVar100[3] = -(pcVar4[0xd] == UNK_014e9e23);
  auVar100[4] = -(pcVar4[0xe] == UNK_014e9e24);
  auVar100[5] = -(pcVar4[0xf] == UNK_014e9e25);
  auVar100[6] = -(pcVar4[0x10] == UNK_014e9e26);
  auVar100[7] = -(pcVar4[0x11] == UNK_014e9e27);
  auVar100[8] = -(pcVar4[0x12] == UNK_014e9e28);
  auVar100[9] = -(pcVar4[0x13] == UNK_014e9e29);
  auVar100[10] = -(pcVar4[0x14] == UNK_014e9e2a);
  auVar100[0xb] = -(pcVar4[0x15] == UNK_014e9e2b);
  auVar100[0xc] = -(pcVar4[0x16] == UNK_014e9e2c);
  auVar100[0xd] = -(pcVar4[0x17] == UNK_014e9e2d);
  auVar100[0xe] = -(pcVar4[0x18] == UNK_014e9e2e);
  auVar100[0xf] = -(pcVar4[0x19] == UNK_014e9e2f);
  auVar97[0] = -(*pcVar4 == DAT_014ea650);
  auVar97[1] = -(pcVar4[1] == UNK_014ea651);
  auVar97[2] = -(pcVar4[2] == UNK_014ea652);
  auVar97[3] = -(pcVar4[3] == UNK_014ea653);
  auVar97[4] = -(pcVar4[4] == UNK_014ea654);
  auVar97[5] = -(pcVar4[5] == UNK_014ea655);
  auVar97[6] = -(pcVar4[6] == UNK_014ea656);
  auVar97[7] = -(pcVar4[7] == UNK_014ea657);
  auVar97[8] = -(pcVar4[8] == UNK_014ea658);
  auVar97[9] = -(pcVar4[9] == UNK_014ea659);
  auVar97[10] = -(pcVar4[10] == UNK_014ea65a);
  auVar97[0xb] = -(pcVar4[0xb] == UNK_014ea65b);
  auVar97[0xc] = -(pcVar4[0xc] == UNK_014ea65c);
  auVar97[0xd] = -(pcVar4[0xd] == UNK_014ea65d);
  auVar97[0xe] = -(pcVar4[0xe] == UNK_014ea65e);
  auVar97[0xf] = -(pcVar4[0xf] == UNK_014ea65f);
  auVar97 = auVar97 & auVar100;
  uStack_2d0 = CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0);
  if ((ushort)((ushort)(SUB161(auVar97 >> 7,0) & 1) | (ushort)(SUB161(auVar97 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar97 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar97 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar97 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar97 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar97 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar97 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar97 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar97 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar97 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar97 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar97 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar97 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar97 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar97[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0befed65;
  cVar50 = func_0x04865100(*param_2,&UNK_01391037);
  if (cVar50 != '\0') {
    puVar93 = *(undefined8 **)(param_1 + 0x380);
    puVar86 = *(undefined8 **)(param_1 + 0x388);
    while (puVar93 != puVar86) {
      puVar86 = puVar86 + -2;
      (**(code **)*puVar86)(puVar86);
    }
    *(undefined8 **)(param_1 + 0x388) = puVar93;
    uVar54 = func_0x048648e0(*param_2,&UNK_01391037);
    func_0x0bf0d730(uVar54,(int)*(short *)((long)param_2 + 0x3c),param_1 + 0x380);
  }
  cVar50 = func_0x04865100(*param_2,&UNK_012179d5);
  if (cVar50 != '\0') {
    bStack_2d8 = 0;
    auStack_2d7[0] = '\0';
    auStack_2d7._1_2_ = 0;
    auStack_2d7[3] = 0;
    auStack_2d7[4] = '\0';
    auStack_2d7._5_2_ = 0;
    uStack_2d0._0_2_ = 0;
    uStack_2d0._2_2_ = 0;
    iStack_2cc = 0;
    iStack_2c8 = 0;
    bStack_2c4 = 0;
    cStack_2c3 = '\0';
    sStack_2c2 = 0;
    uVar54 = func_0x048648e0(*param_2,&UNK_012179d5);
    func_0x0b6cb570(uVar54,&bStack_2d8,1);
    *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x398);
    lVar56 = CONCAT26(auStack_2d7._5_2_,
                      CONCAT15(auStack_2d7[4],
                               CONCAT14(auStack_2d7[3],
                                        CONCAT22(auStack_2d7._1_2_,
                                                 CONCAT11(auStack_2d7[0],bStack_2d8)))));
    lVar61 = CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
    if (lVar56 != lVar61) {
      piStack_2e0 = (int *)0x7fffffffffffffff;
      do {
        lVar57 = func_0x0bf06450(lVar56);
        if (lVar57 == 0) {
          func_0x052f3ea0(1,2,0x11,&UNK_014d94c1);
          uVar73 = 0;
        }
        else {
          uVar73 = *(undefined1 *)(lVar57 + 0x28);
        }
        puVar76 = *(undefined1 **)(param_1 + 0x3a0);
        if (puVar76 < *(undefined1 **)(param_1 + 0x3a8)) {
          *puVar76 = uVar73;
          puVar76 = puVar76 + 1;
        }
        else {
          pbVar80 = *(byte **)(param_1 + 0x398);
          lVar57 = (long)puVar76 - (long)pbVar80;
          piVar55 = (int *)(lVar57 + 1);
          if ((long)piVar55 < 0) {
            func_0x0537cb70();
            goto LAB_0bf043f2;
          }
          uVar79 = (long)*(undefined1 **)(param_1 + 0x3a8) - (long)pbVar80;
          if (piVar55 < (int *)(uVar79 * 2)) {
            piVar55 = (int *)(uVar79 * 2);
          }
          if (0x3ffffffffffffffe < uVar79) {
            piVar55 = piStack_2e0;
          }
          pbStack_178 = pbVar80;
          if (piVar55 == (int *)0x0) {
            lVar58 = 0;
          }
          else {
            lVar58 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,piVar55);
            if (lVar58 == 0) {
              func_0x0eec74c0(piVar55,0);
              lVar58 = 0;
            }
          }
          pbVar80 = pbStack_178;
          *(undefined1 *)(lVar58 + lVar57) = uVar73;
          puVar76 = (undefined1 *)(lVar58 + lVar57 + 1);
          func_0x0eee2f00(lVar58,pbStack_178,lVar57);
          *(long *)(param_1 + 0x398) = lVar58;
          *(undefined1 **)(param_1 + 0x3a0) = puVar76;
          *(long *)(param_1 + 0x3a8) = (long)piVar55 + lVar58;
          if (pbVar80 != (byte *)0x0) {
            func_0x0412a280(pbVar80,uVar79);
          }
        }
        *(undefined1 **)(param_1 + 0x3a0) = puVar76;
        lVar56 = lVar56 + 0x18;
      } while (lVar56 != lVar61);
      lVar56 = CONCAT26(auStack_2d7._5_2_,
                        CONCAT15(auStack_2d7[4],
                                 CONCAT14(auStack_2d7[3],
                                          CONCAT22(auStack_2d7._1_2_,
                                                   CONCAT11(auStack_2d7[0],bStack_2d8)))));
    }
    if (lVar56 != 0) {
      lVar61 = CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      lVar57 = lVar56;
      if (lVar56 != lVar61) {
        do {
          if ((*(byte *)(lVar61 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar61 + -8),
                            *(ulong *)(lVar61 + -0x18) & 0xfffffffffffffffe);
          }
          lVar61 = lVar61 + -0x18;
        } while (lVar61 != lVar56);
        lVar57 = CONCAT26(auStack_2d7._5_2_,
                          CONCAT15(auStack_2d7[4],
                                   CONCAT14(auStack_2d7[3],
                                            CONCAT22(auStack_2d7._1_2_,
                                                     CONCAT11(auStack_2d7[0],bStack_2d8)))));
      }
      uStack_2d0._0_2_ = (undefined2)lVar56;
      uStack_2d0._2_2_ = (short)((ulong)lVar56 >> 0x10);
      iStack_2cc = (int)((ulong)lVar56 >> 0x20);
      func_0x0412a280(lVar57,CONCAT26(sStack_2c2,
                                      CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))) - lVar57
                     );
    }
  }
  uVar54 = func_0x048648e0(*param_2,&UNK_01422174);
  bVar51 = func_0x04863ff0(uVar54,param_1[0x3b0]);
  param_1[0x3b0] = bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_0131a5c6);
  bVar51 = func_0x04863ff0(uVar54,param_1[0x3b1]);
  param_1[0x3b1] = bVar51;
  uVar54 = func_0x048648e0(*param_2,&UNK_012cc817);
  uVar94 = func_0x04863f80(uVar54);
  *(undefined4 *)(param_1 + 0x3b4) = uVar94;
  uVar54 = func_0x048648e0(*param_2,&UNK_012b2e08);
  sVar3 = *(short *)((long)param_2 + 0x3c);
  cVar50 = func_0x04864260(uVar54);
  if (cVar50 == '\0') {
    func_0x0c4ad150(&bStack_2d8,uVar54,(int)sVar3);
    uVar54 = CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
    uStack_2d0._0_2_ = 0;
    uStack_2d0._2_2_ = 0;
    iStack_2cc = 0;
    plVar77 = *(long **)(param_1 + 0x3c0);
    *(undefined8 *)(param_1 + 0x3c0) = uVar54;
    if (plVar77 != (long *)0x0) {
      (**(code **)(*plVar77 + 0x90))();
      plVar77 = (long *)CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      bStack_2d8 = 0xc0;
      auStack_2d7[0] = 's';
      auStack_2d7._1_2_ = 0xf37;
      auStack_2d7[3] = 0;
      auStack_2d7[4] = '\0';
      auStack_2d7._5_2_ = 0;
      uStack_2d0._0_2_ = 0;
      uStack_2d0._2_2_ = 0;
      iStack_2cc = 0;
      if (plVar77 != (long *)0x0) {
        (**(code **)(*plVar77 + 0x90))();
      }
    }
  }
  uVar54 = func_0x048648e0(*param_2,&UNK_01335768);
  func_0x0bf0da90(uVar54,param_1 + 0x3c8,0);
  uVar54 = func_0x048648e0(*param_2,&UNK_0140835b);
  func_0x04863cb0(&bStack_2d8,uVar54,param_1 + 0x428);
  if ((param_1[0x428] & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(param_1 + 0x438),
                    *(ulong *)(param_1 + 0x428) & 0xfffffffffffffffe);
  }
  *(ulong *)(param_1 + 0x438) =
       CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
  *(ulong *)(param_1 + 0x428) =
       CONCAT26(auStack_2d7._5_2_,
                CONCAT15(auStack_2d7[4],
                         CONCAT14(auStack_2d7[3],
                                  CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)))))
  ;
  *(ulong *)(param_1 + 0x430) =
       CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
  if (*(long *)(param_1 + 0x380) == *(long *)(param_1 + 0x388)) {
    uVar54 = func_0x0cc422f0(&DAT_0f6ff9e0,&DAT_0f714c90,0,0,0);
    uVar79 = *(ulong *)(param_1 + 0x388);
    if (uVar79 < *(ulong *)(param_1 + 0x390)) {
      func_0x0c4ac5f0(uVar79,uVar54);
      lVar56 = uVar79 + 0x10;
      *(long *)(param_1 + 0x388) = lVar56;
    }
    else {
      pbVar80 = param_1 + 0x380;
      lVar56 = uVar79 - *(long *)pbVar80;
      uVar79 = (lVar56 >> 4) + 1;
      if (uVar79 >> 0x3c != 0) {
        func_0x0537cb60();
LAB_0bf0453d:
        func_0x0488efe0();
LAB_0bf04542:
        FUN_04882eb0();
        pbVar80 = uStack_2b8;
LAB_0bf04547:
        uStack_2b8 = pbVar80;
        uVar54 = FUN_04882eb0();
        if ((bStack_298 & 1) != 0) {
          func_0x0412a280(auStack_288._0_8_,CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_2b8 & 1) != 0) {
          func_0x0412a280(CONCAT71(uStack_2a7,bStack_2a8),(ulong)uStack_2b8 & 0xfffffffffffffffe);
        }
        if ((bStack_2d8 & 1) != 0) {
          func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                          CONCAT26(auStack_2d7._5_2_,
                                   CONCAT15(auStack_2d7[4],
                                            CONCAT14(auStack_2d7[3],
                                                     CONCAT22(auStack_2d7._1_2_,
                                                              CONCAT11(auStack_2d7[0],bStack_2d8))))
                                  ) & 0xfffffffffffffffe);
        }
        func_0x041084d6(&DAT_0f6d0348);
        if ((bStack_80 & 1) != 0) {
          func_0x0412a280(puStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
        }
        if ((auStack_208[0] & 1) != 0) {
          func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
          uVar54 = func_0x0eee2d70(uVar54);
          func_0x04862b40(&uStack_158);
        }
        func_0x0eee2d70(uVar54);
        pcVar5 = (code *)swi(3);
        uVar54 = (*pcVar5)();
        return uVar54;
      }
      uVar84 = *(ulong *)(param_1 + 0x390) - *(long *)pbVar80;
      uVar90 = (long)uVar84 >> 3;
      if (uVar90 <= uVar79) {
        uVar90 = uVar79;
      }
      if (0x7fffffffffffffef < uVar84) {
        uVar90 = 0xfffffffffffffff;
      }
      uStack_2b8 = pbVar80;
      if (uVar90 == 0) {
        lVar61 = 0;
      }
      else {
        if (0xfffffffffffffff < uVar90) goto LAB_0bf04547;
        lVar61 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar90 << 4);
        if (lVar61 == 0) {
          lVar61 = 0;
          func_0x0eec74c0(uVar90 << 4,0);
        }
      }
      bStack_2d8 = (byte)lVar61;
      auStack_2d7[0] = (char)((ulong)lVar61 >> 8);
      auStack_2d7._1_2_ = (undefined2)((ulong)lVar61 >> 0x10);
      auStack_2d7[3] = (byte)((ulong)lVar61 >> 0x20);
      auStack_2d7[4] = (char)((ulong)lVar61 >> 0x28);
      auStack_2d7._5_2_ = (undefined2)((ulong)lVar61 >> 0x30);
      lVar56 = lVar56 + lVar61;
      iStack_2c8 = (int)lVar56;
      bStack_2c4 = (byte)((ulong)lVar56 >> 0x20);
      cStack_2c3 = (char)((ulong)lVar56 >> 0x28);
      sStack_2c2 = (short)((ulong)lVar56 >> 0x30);
      uStack_2d0._0_2_ = (undefined2)lVar56;
      uStack_2d0._2_2_ = (short)((ulong)lVar56 >> 0x10);
      iStack_2cc = (int)((ulong)lVar56 >> 0x20);
      lVar61 = uVar90 * 0x10 + lVar61;
      bStack_2c0 = (byte)lVar61;
      uStack_2bf = (undefined1)((ulong)lVar61 >> 8);
      uStack_2be = (undefined2)((ulong)lVar61 >> 0x10);
      uStack_2bc = (undefined4)((ulong)lVar61 >> 0x20);
      func_0x0c4ac5f0(lVar56,uVar54);
      lVar56 = CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))) + 0x10;
      puVar93 = *(undefined8 **)(param_1 + 0x380);
      puVar86 = *(undefined8 **)(param_1 + 0x388);
      puVar89 = (undefined8 *)
                ((long)puVar93 +
                (CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0)) -
                (long)puVar86));
      puVar67 = puVar93;
      puVar71 = puVar89;
      if (puVar93 != puVar86) {
        do {
          *puVar71 = &UNK_0f3773c0;
          uVar54 = puVar67[1];
          puVar67[1] = 0;
          puVar71[1] = uVar54;
          puVar67 = puVar67 + 2;
          puVar71 = puVar71 + 2;
        } while (puVar67 != puVar86);
        do {
          (**(code **)*puVar93)(puVar93);
          puVar93 = puVar93 + 2;
        } while (puVar93 != puVar86);
        puVar93 = *(undefined8 **)pbVar80;
      }
      *(undefined8 **)(param_1 + 0x380) = puVar89;
      *(long *)(param_1 + 0x388) = lVar56;
      lVar61 = *(long *)(param_1 + 0x390);
      *(ulong *)(param_1 + 0x390) =
           CONCAT44(uStack_2bc,CONCAT22(uStack_2be,CONCAT11(uStack_2bf,bStack_2c0)));
      if (puVar93 != (undefined8 *)0x0) {
        func_0x0412a280(puVar93,lVar61 - (long)puVar93);
      }
    }
    *(long *)(param_1 + 0x388) = lVar56;
    puVar75 = *(ulong **)(param_1 + 0x398);
    puVar69 = *(ulong **)(param_1 + 0x3a0);
    if (puVar75 == puVar69) {
LAB_0befebec:
      if (*(ulong **)(param_1 + 0x3a8) <= puVar75) {
        piVar55 = (int *)((long)*(ulong **)(param_1 + 0x3a8) - (long)puVar75);
        auVar82 = (undefined1  [8])(undefined8 *)0x7fffffffffffffff;
        if (piVar55 < (int *)0x3fffffffffffffff) {
          auVar82 = (undefined1  [8])((long)piVar55 * 2 + (ulong)((long)piVar55 * 2 == 0));
        }
        auVar59 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,auVar82);
        puVar93 = (undefined8 *)auVar59;
        if (auVar59 == (undefined1  [8])0x0) goto LAB_0bf04363;
        goto LAB_0befec55;
      }
      *(undefined1 *)puVar69 = 0;
      puVar76 = (undefined1 *)((long)puVar69 + 1);
      goto LAB_0befec89;
    }
  }
  else {
    puVar75 = *(ulong **)(param_1 + 0x398);
    puVar69 = *(ulong **)(param_1 + 0x3a0);
    if (puVar75 == puVar69) goto LAB_0befebec;
  }
  plVar77 = *(long **)(param_1 + 0x3c0);
  if (plVar77 != (long *)0x0) goto LAB_0befeca0;
  do {
    uVar54 = func_0x0cc422f0(&DAT_0f6ff9e0,&DAT_0f716910,0,0,0);
    func_0x0c4ac5f0(&bStack_2d8,uVar54);
    plVar77 = *(long **)(param_1 + 0x3c0);
    *(ulong *)(param_1 + 0x3c0) = CONCAT44(iStack_2cc,uStack_2d0);
    if (plVar77 != (long *)0x0) {
      (**(code **)(*plVar77 + 0x90))();
    }
LAB_0befed65:
    do {
      uVar54 = func_0x048648e0(*param_2,&UNK_0142218c);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xdc) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011e1f43);
      bVar51 = func_0x04863ff0(uVar54,1);
      *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xffdf | (ushort)bVar51 << 5;
      uVar54 = func_0x048648e0(*param_2,&UNK_012d798f);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0xe0] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_011e1f55);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xe4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0143da0d);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xe8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0142218f);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xec) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013eea1f);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xf0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011c8e32);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xf4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0142219b);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x9d0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011ad90c);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0xfc) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01385f86);
      uVar94 = func_0x04863f80(_DAT_01198724,uVar54);
      *(undefined4 *)(param_1 + 0xf8) = uVar94;
      cVar50 = func_0x04865100(*param_2,&UNK_011ad917);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_011ad917);
        cVar50 = func_0x0b05abc0(param_1 + 0x100,&bStack_2d8,uVar54);
        if (cVar50 == '\0') {
          return 0;
        }
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_012d798f);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x140] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_014d75f1);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x144) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013fcdf9);
      uVar94 = func_0x04863f80(_DAT_01198b4c,uVar54);
      *(undefined4 *)(param_1 + 0x150) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012672c0);
      uVar94 = func_0x04863e00(uVar54,0x168);
      *(undefined4 *)(param_1 + 0x148) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01280db5);
      uVar94 = func_0x04863e00(uVar54,0x168);
      *(undefined4 *)(param_1 + 0x14c) = uVar94;
      cVar50 = func_0x04865100(*param_2,&UNK_01340d28);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_01340d28);
        cVar50 = func_0x0b05abc0(param_1 + 0x158,&bStack_2d8,uVar54);
        if (cVar50 == '\0') {
          return 0;
        }
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_011c68ee);
      pbVar80 = param_1 + 0x198;
      pbVar87 = param_1 + 0x19c;
      cVar50 = func_0x0b636af0(uVar54,pbVar80,pbVar87);
      if (cVar50 == '\0') {
        pbVar80[0] = 2;
        pbVar80[1] = 0;
        pbVar80[2] = 0;
        pbVar80[3] = 0;
        pbVar87[0] = 4;
        pbVar87[1] = 0;
        pbVar87[2] = 0;
        pbVar87[3] = 0;
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_0136cee2);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x1b4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011e096f);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x288) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01222d15);
      bVar51 = func_0x04863ff0(uVar54,0);
      *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xffbf | (ushort)bVar51 << 6;
      uVar54 = func_0x048648e0(*param_2,&UNK_01222d22);
      auVar33._14_2_ = 0;
      auVar33._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar33 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      uVar94 = func_0x09bff590(&bStack_2d8);
      *(undefined4 *)(param_1 + 0x28c) = uVar94;
      if ((bStack_2d8 & 1) != 0) {
        func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                        CONCAT26(auStack_2d7._5_2_,
                                 CONCAT15(auStack_2d7[4],
                                          CONCAT14(auStack_2d7[3],
                                                   CONCAT22(auStack_2d7._1_2_,
                                                            CONCAT11(auStack_2d7[0],bStack_2d8)))))
                        & 0xfffffffffffffffe);
      }
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&DAT_01325d5a);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x290) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&DAT_011d475e);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x294) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0135c6a6);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x29c] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_012726b8);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x298) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012bdfd6);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x2a4] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_01391092);
      func_0x0bf0da90(uVar54,param_1 + 0x2a8,0);
      uVar54 = func_0x048648e0(*param_2,&UNK_011e1f61);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x2a0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012e52fa);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x4a0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01222d15);
      bVar51 = func_0x04863ff0(uVar54,0);
      *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xffbf | (ushort)bVar51 << 6;
      uVar54 = func_0x048648e0(*param_2,&DAT_0145f6ec);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x4a4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01488fd9);
      bVar51 = func_0x04863ff0(uVar54,0);
      *(ushort *)(param_1 + 0x5f9) = *(ushort *)(param_1 + 0x5f9) & 0xffef | (ushort)bVar51 << 4;
      uVar54 = func_0x048648e0(*param_2,&UNK_01280d7a);
      auStack_208._0_5_ = 0x796e4106;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      lVar56 = func_0x0bf06450(&bStack_2d8);
      if ((bStack_2d8 & 1) == 0) {
        if ((auStack_208[0] & 1) != 0) goto LAB_0beff3c0;
LAB_0beff398:
        if (lVar56 == 0) goto LAB_0beff3de;
LAB_0beff39d:
        bVar51 = *(byte *)(lVar56 + 0x28);
      }
      else {
        func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                        CONCAT26(auStack_2d7._5_2_,
                                 CONCAT15(auStack_2d7[4],
                                          CONCAT14(auStack_2d7[3],
                                                   CONCAT22(auStack_2d7._1_2_,
                                                            CONCAT11(auStack_2d7[0],bStack_2d8)))))
                        & 0xfffffffffffffffe);
        if ((auStack_208[0] & 1) == 0) goto LAB_0beff398;
LAB_0beff3c0:
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
        if (lVar56 != 0) goto LAB_0beff39d;
LAB_0beff3de:
        bVar51 = 0x19;
      }
      param_1[0x4a8] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_0123d56f);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x4ac) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011d45df);
      uVar94 = func_0x04863e00(uVar54,1);
      *(undefined4 *)(param_1 + 0x4b0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012a4a19);
      uVar94 = func_0x04863e00(uVar54,10);
      *(undefined4 *)(param_1 + 0x4b4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_014c9bcf);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x4b8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&DAT_0145f6ec);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x4c0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0145f6de);
      uVar94 = func_0x04863e00(uVar54,*(undefined4 *)(param_1 + 0x4c4));
      *(undefined4 *)(param_1 + 0x4c4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013eea29);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x4c8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011e1f36);
      uVar94 = func_0x04863f80(*(undefined4 *)(param_1 + 0x524),uVar54);
      *(undefined4 *)(param_1 + 0x524) = uVar94;
      func_0x0bf0b3f0(*param_2,param_1 + 0x518,&UNK_013c5813);
      uVar54 = func_0x048648e0(*param_2,&UNK_01258525);
      auVar34._14_2_ = 0;
      auVar34._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar34 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      bVar51 = bStack_2d8 & 1;
      if (bVar51 == 0) {
        uVar79 = (ulong)(bStack_2d8 >> 1);
        if (uVar79 != 0) goto LAB_0beff580;
LAB_0beff61c:
        bVar66 = 0;
      }
      else {
        uVar79 = CONCAT44(iStack_2cc,uStack_2d0);
        if (uVar79 == 0) goto LAB_0beff61c;
LAB_0beff580:
        if (uVar79 != 6) {
          if (uVar79 == 7) {
            ppuVar68 = (ulong **)
                       CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
            ppuVar72 = (ulong **)auStack_2d7;
            if (bVar51 != 0) {
              ppuVar72 = ppuVar68;
            }
            if (*(int *)((long)ppuVar72 + 3) == 0x74736572 && *(int *)ppuVar72 == 0x7261656e)
            goto LAB_0beff61c;
          }
          else {
            ppuVar68 = (ulong **)
                       CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
          }
LAB_0beff5df:
          uStack_158 = (ulong **)auStack_2d7;
          if (bVar51 != 0) {
            uStack_158 = ppuVar68;
          }
          func_0x0b5b89e0(1,2,10);
          bVar51 = bStack_2d8 & 1;
          goto LAB_0beff61c;
        }
        ppuVar68 = (ulong **)
                   CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
        ppuVar72 = (ulong **)auStack_2d7;
        if (bVar51 != 0) {
          ppuVar72 = ppuVar68;
        }
        if (*(short *)((long)ppuVar72 + 4) != 0x6d6f || *(int *)ppuVar72 != 0x646e6172)
        goto LAB_0beff5df;
        bVar66 = 1;
      }
      param_1[0x528] = bVar66;
      if (bVar51 != 0) {
        func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                        CONCAT26(auStack_2d7._5_2_,
                                 CONCAT15(auStack_2d7[4],
                                          CONCAT14(auStack_2d7[3],
                                                   CONCAT22(auStack_2d7._1_2_,
                                                            CONCAT11(auStack_2d7[0],bStack_2d8)))))
                        & 0xfffffffffffffffe);
      }
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      cVar50 = func_0x04865100(*param_2,&UNK_014221a9);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_014221a9);
        cVar50 = func_0x04864270(uVar54);
        if (cVar50 == '\0') {
          uStack_2b0 = 0;
          bStack_2a8 = 0;
          uStack_2a7 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          bStack_298 = 0;
          uStack_297 = 0;
          bStack_290 = 0;
          uStack_28f = 0;
          uStack_28b = 0;
          uStack_28a = 0;
          auStack_288 = (undefined1  [16])0x0;
          bStack_2d8 = 0;
          auStack_2d7[0] = '\0';
          auStack_2d7._1_2_ = 0;
          auStack_2d7[3] = 0;
          auStack_2d7[4] = '\0';
          auStack_2d7._5_2_ = 0;
          uStack_2d0._0_2_ = 0;
          uStack_2d0._2_2_ = 0;
          iStack_2cc = 0;
          iStack_2c8 = 0;
          bStack_2c4 = 0;
          cStack_2c3 = '\0';
          sStack_2c2 = 0;
          bStack_2c0 = 0;
          uStack_2bf = 0;
          uStack_2b8._0_4_ = 0xf299f40;
          uStack_2b8._4_4_ = 0;
          cVar50 = func_0x0bf0da90(uVar54,&bStack_2d8,0);
          if (cVar50 != '\0') {
            func_0x05604130(param_1 + 0x4d0,&bStack_2d8);
          }
          func_0x049d2400(&uStack_2b8);
          if ((bStack_2d8 & 1) != 0) {
            func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))
                                    ),
                            CONCAT26(auStack_2d7._5_2_,
                                     CONCAT15(auStack_2d7[4],
                                              CONCAT14(auStack_2d7[3],
                                                       CONCAT22(auStack_2d7._1_2_,
                                                                CONCAT11(auStack_2d7[0],bStack_2d8))
                                                      ))) & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x0bf0eb40(uVar54,param_1 + 0x4d0);
        }
      }
      cVar50 = func_0x04865100(*param_2,&UNK_011e1f6d);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_011e1f6d);
        cVar50 = func_0x04864270(uVar54);
        if (cVar50 == '\0') {
          uStack_2b0 = 0;
          bStack_2a8 = 0;
          uStack_2a7 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          bStack_298 = 0;
          uStack_297 = 0;
          bStack_290 = 0;
          uStack_28f = 0;
          uStack_28b = 0;
          uStack_28a = 0;
          auStack_288 = (undefined1  [16])0x0;
          bStack_2d8 = 0;
          auStack_2d7[0] = '\0';
          auStack_2d7._1_2_ = 0;
          auStack_2d7[3] = 0;
          auStack_2d7[4] = '\0';
          auStack_2d7._5_2_ = 0;
          uStack_2d0._0_2_ = 0;
          uStack_2d0._2_2_ = 0;
          iStack_2cc = 0;
          iStack_2c8 = 0;
          bStack_2c4 = 0;
          cStack_2c3 = '\0';
          sStack_2c2 = 0;
          bStack_2c0 = 0;
          uStack_2bf = 0;
          uStack_2b8._0_4_ = 0xf299f40;
          uStack_2b8._4_4_ = 0;
          cVar50 = func_0x0bf0da90(uVar54,&bStack_2d8,0);
          if (cVar50 != '\0') {
            func_0x05604130(param_1 + 0x4e8,&bStack_2d8);
          }
          func_0x049d2400(&uStack_2b8);
          if ((bStack_2d8 & 1) != 0) {
            func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))
                                    ),
                            CONCAT26(auStack_2d7._5_2_,
                                     CONCAT15(auStack_2d7[4],
                                              CONCAT14(auStack_2d7[3],
                                                       CONCAT22(auStack_2d7._1_2_,
                                                                CONCAT11(auStack_2d7[0],bStack_2d8))
                                                      ))) & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x0bf0eb40(uVar54,param_1 + 0x4e8);
        }
      }
      cVar50 = func_0x04865100(*param_2,&UNK_0143da1c);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_0143da1c);
        cVar50 = func_0x0b05abc0(param_1 + 0x530,&bStack_2d8,uVar54);
        if (cVar50 == '\0') {
          return 0;
        }
      }
      cVar50 = func_0x04865100(*param_2,&UNK_01391037);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_01391037);
        cVar50 = func_0x04864270(uVar54);
        if (cVar50 == '\0') {
          _auStack_208 = ZEXT816(0xf3773c0);
          sVar3 = *(short *)((long)param_2 + 0x3c);
          cVar50 = func_0x04864260(uVar54);
          if (cVar50 == '\0') {
            func_0x0c4ad150(&bStack_2d8,uVar54,(int)sVar3);
            puVar75 = (ulong *)CONCAT44(iStack_2cc,uStack_2d0);
            uStack_2d0._0_2_ = 0;
            uStack_2d0._2_2_ = 0;
            iStack_2cc = 0;
            puVar69 = puStack_200;
            puStack_200 = puVar75;
            if (puVar69 != (ulong *)0x0) {
              (**(code **)(*puVar69 + 0x90))();
              plVar77 = (long *)CONCAT44(iStack_2cc,
                                         CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
              bStack_2d8 = 0xc0;
              auStack_2d7[0] = 's';
              auStack_2d7._1_2_ = 0xf37;
              auStack_2d7[3] = 0;
              auStack_2d7[4] = '\0';
              auStack_2d7._5_2_ = 0;
              uStack_2d0._0_2_ = 0;
              uStack_2d0._2_2_ = 0;
              iStack_2cc = 0;
              if (plVar77 != (long *)0x0) {
                (**(code **)(*plVar77 + 0x90))();
              }
              puVar75 = puStack_200;
            }
            if (puVar75 != (undefined8 *)0x0) {
              puVar93 = *(undefined8 **)(param_1 + 0x508);
              if (puVar93 < *(undefined8 **)(param_1 + 0x510)) {
                *puVar93 = &UNK_0f3773c0;
                (**(code **)*puVar75)(puVar93 + 1);
                puVar93 = puVar93 + 2;
                *(undefined8 **)(param_1 + 0x508) = puVar93;
              }
              else {
                puVar93 = (undefined8 *)func_0x06fcd5d0(param_1 + 0x500,auStack_208);
              }
              *(undefined8 **)(param_1 + 0x508) = puVar93;
            }
          }
          puVar75 = puStack_200;
          _auStack_208 = ZEXT816(0xf3773c0);
          if (puVar75 != (ulong *)0x0) {
            (**(code **)(*puVar75 + 0x90))();
          }
        }
        else {
          func_0x0bf0d730(uVar54,(int)*(short *)((long)param_2 + 0x3c),param_1 + 0x500);
        }
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_0130ab68);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x570) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_014bdd39);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x574] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_0124de63);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x575] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_014bdd4b);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x819] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_013bb77c);
      auVar35._14_2_ = 0;
      auVar35._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar35 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      if ((param_1[0x578] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_1 + 0x588),
                        *(ulong *)(param_1 + 0x578) & 0xfffffffffffffffe);
      }
      *(ulong *)(param_1 + 0x588) =
           CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      *(ulong *)(param_1 + 0x578) =
           CONCAT26(auStack_2d7._5_2_,
                    CONCAT15(auStack_2d7[4],
                             CONCAT14(auStack_2d7[3],
                                      CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)
                                              ))));
      *(ulong *)(param_1 + 0x580) = CONCAT44(iStack_2cc,uStack_2d0);
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      auStack_2d7._1_2_ = 0;
      auStack_2d7[3] = 0;
      auStack_2d7[4] = '\0';
      auStack_2d7._5_2_ = 0;
      uStack_2d0._0_2_ = 0;
      uStack_2d0._2_2_ = 0;
      iStack_2cc = 0;
      iStack_2c8 = 0;
      bStack_2c4 = 0;
      cStack_2c3 = '\0';
      sStack_2c2 = 0;
      cVar50 = func_0x04865100(*param_2,&UNK_013fa038);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_013fa038);
        cVar50 = func_0x04864270(uVar54);
        if (cVar50 == '\0') {
          cVar50 = func_0x04865490(uVar54);
          if (cVar50 == '\0') {
            func_0x09a0d120(1,3,0x11,&UNK_013d4ce5);
          }
          else {
            uStack_158 = (ulong **)((ulong)uStack_158 & 0xffffffffffff0000);
            func_0x04863cb0(auStack_208,uVar54,&uStack_158);
            puVar93 = (undefined8 *)
                      CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
            puVar86 = (undefined8 *)
                      CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
            if (puVar93 < puVar86) {
              puVar93[2] = puStack_1f8;
              *puVar93 = auStack_208;
              puVar93[1] = puStack_200;
              _auStack_208 = (undefined1  [16])0x0;
              puStack_1f8 = (ulong *)0x0;
              puVar93 = puVar93 + 3;
              uStack_2d0._0_2_ = SUB82(puVar93,0);
              uStack_2d0._2_2_ = (short)((ulong)puVar93 >> 0x10);
              iStack_2cc = (int)((ulong)puVar93 >> 0x20);
            }
            else {
              lVar56 = CONCAT26(auStack_2d7._5_2_,
                                CONCAT15(auStack_2d7[4],
                                         CONCAT14(auStack_2d7[3],
                                                  CONCAT22(auStack_2d7._1_2_,
                                                           CONCAT11(auStack_2d7[0],bStack_2d8)))));
              lVar61 = (long)puVar93 - lVar56;
              uVar79 = (lVar61 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar79) goto LAB_0bf0453d;
              lVar58 = (long)puVar86 - lVar56;
              lVar57 = lVar58 >> 3;
              uVar90 = lVar57 * 0x5555555555555556;
              if (uVar79 < uVar90) {
                uVar79 = uVar90;
              }
              if (0x555555555555554 < (ulong)(lVar57 * -0x5555555555555555)) {
                uVar79 = 0xaaaaaaaaaaaaaaa;
              }
              if (0xaaaaaaaaaaaaaaa < uVar79) goto LAB_0bf04542;
              lVar57 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar79 * 0x18);
              if (lVar57 == 0) {
                func_0x0eec74c0(uVar79 * 0x18,0);
              }
              lVar1 = lVar57 + uVar79 * 0x18;
              *(ulong **)(lVar57 + 0x10 + lVar61) = puStack_1f8;
              *(undefined8 *)(lVar57 + lVar61) = auStack_208;
              ((undefined8 *)(lVar57 + lVar61))[1] = puStack_200;
              _auStack_208 = (undefined1  [16])0x0;
              puStack_1f8 = (ulong *)0x0;
              lVar2 = lVar57 + 0x18 + lVar61;
              func_0x0eee2f00(lVar57,lVar56,lVar61);
              bStack_2d8 = (byte)lVar57;
              auStack_2d7[0] = (char)((ulong)lVar57 >> 8);
              auStack_2d7._1_2_ = (undefined2)((ulong)lVar57 >> 0x10);
              auStack_2d7[3] = (byte)((ulong)lVar57 >> 0x20);
              auStack_2d7[4] = (char)((ulong)lVar57 >> 0x28);
              auStack_2d7._5_2_ = (undefined2)((ulong)lVar57 >> 0x30);
              uStack_2d0._0_2_ = (undefined2)lVar2;
              uVar31 = (undefined2)uStack_2d0;
              uStack_2d0._2_2_ = (short)((ulong)lVar2 >> 0x10);
              sVar3 = uStack_2d0._2_2_;
              iStack_2cc = (int)((ulong)lVar2 >> 0x20);
              iVar52 = iStack_2cc;
              iStack_2c8 = (int)lVar1;
              bStack_2c4 = (byte)((ulong)lVar1 >> 0x20);
              cStack_2c3 = (char)((ulong)lVar1 >> 0x28);
              sStack_2c2 = (short)((ulong)lVar1 >> 0x30);
              uStack_2d0._0_2_ = uVar31;
              uStack_2d0._2_2_ = sVar3;
              iStack_2cc = iVar52;
              if (lVar56 != 0) {
                func_0x0412a280(lVar56,lVar58);
                uStack_2d0._0_2_ = uVar31;
                uStack_2d0._2_2_ = sVar3;
                iStack_2cc = iVar52;
                if ((auStack_208[0] & 1) != 0) {
                  func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
                }
              }
            }
            if (((ulong)uStack_158 & 1) != 0) {
              func_0x0412a280(ppuStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
            }
          }
        }
        else {
          uVar54 = func_0x048648e0(*param_2,&UNK_013fa038);
          func_0x0b6cb570(uVar54,&bStack_2d8,1);
        }
      }
      pbVar80 = (byte *)CONCAT26(auStack_2d7._5_2_,
                                 CONCAT15(auStack_2d7[4],
                                          CONCAT14(auStack_2d7[3],
                                                   CONCAT22(auStack_2d7._1_2_,
                                                            CONCAT11(auStack_2d7[0],bStack_2d8)))));
      pbVar87 = (byte *)CONCAT44(iStack_2cc,uStack_2d0);
      lVar56 = (long)pbVar87 - (long)pbVar80;
      if (lVar56 == 0) {
        piVar55 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (piVar55 == (int *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        piVar60 = piVar55 + 0x12;
        func_0x0eee2f00(piVar55,&UNK_01cbff5c,0x48);
        piVar85 = piVar60;
        piStack_308 = piVar60;
        piStack_2e0 = piVar55;
      }
      else {
        lVar56 = lVar56 >> 3;
        if ((ulong)(lVar56 * -0x5555555555555555) >> 0x3e != 0) goto LAB_0bf044ee;
        piVar60 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                   (&DAT_0f5463b0,lVar56 * -0x5555555555555554);
        if (piVar60 == (int *)0x0) {
          func_0x0eec74c0(lVar56 * -0x5555555555555554,0);
        }
        piStack_308 = piVar60 + lVar56 * -0x1555555555555555;
        uStack_88 = 0x7ffffffffffffffc;
        piVar85 = piVar60;
        piVar55 = piVar60;
        piStack_2e0 = piVar60;
        do {
          lVar56 = func_0x0b58e9c0(0xf6b2ee8,pbVar80);
          if (lVar56 == 0) {
            if ((*pbVar80 & 1) == 0) {
              pbVar62 = pbVar80 + 1;
            }
            else {
              pbVar62 = *(byte **)(pbVar80 + 0x10);
            }
            auStack_208 = (undefined1  [8])pbVar62;
            func_0x09e34180(1,3,0x11,&UNK_012fe30a);
          }
          else {
            iVar52 = *(int *)(lVar56 + 0x28);
            if (iVar52 != -1) {
              pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,iVar52);
              if ((iVar52 == 0x23) &&
                 (1 < (ulong)((CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0)
                                       ) -
                               CONCAT26(auStack_2d7._5_2_,
                                        CONCAT15(auStack_2d7[4],
                                                 CONCAT14(auStack_2d7[3],
                                                          CONCAT22(auStack_2d7._1_2_,
                                                                   CONCAT11(auStack_2d7[0],
                                                                            bStack_2d8))))) >> 3) *
                             -0x5555555555555555))) {
                func_0x0b61d030(1,2,0x11,&UNK_013eea71);
              }
              if (piVar60 < piStack_308) {
                *piVar60 = (int)pbStack_178._0_4_;
                piVar85 = piStack_2e0;
              }
              else {
                lStack_98 = (long)piVar60 - (long)piStack_2e0;
                lVar56 = lStack_98 >> 2;
                uVar79 = lVar56 + 1;
                if (0x3fffffffffffffff < uVar79) goto LAB_0bf0438b;
                uVar84 = (long)piStack_308 - (long)piStack_2e0;
                uVar90 = (long)uVar84 >> 1;
                if ((ulong)((long)uVar84 >> 1) <= uVar79) {
                  uVar90 = uVar79;
                }
                if (uStack_88 <= uVar84) {
                  uVar90 = 0x3fffffffffffffff;
                }
                if (0x3fffffffffffffff < uVar90) goto LAB_0bf04386;
                lVar61 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar90 * 4);
                if (lVar61 == 0) {
                  func_0x0eec74c0(uVar90 * 4,0);
                }
                piVar63 = piStack_2e0;
                piStack_308 = (int *)(uVar90 * 4 + lVar61);
                *(float *)(lVar61 + lStack_98) = pbStack_178._0_4_;
                piVar60 = (int *)(lVar61 + lStack_98);
                piVar55 = (int *)(lStack_98 + lVar61 + lVar56 * -4);
                func_0x0eee2f00(piVar55,piStack_2e0);
                piVar85 = piVar55;
                if (piVar63 != (int *)0x0) {
                  func_0x0412a280(piVar63,uVar84);
                }
              }
              piStack_2e0 = piVar85;
              piVar60 = piVar60 + 1;
              piVar85 = piVar60;
            }
          }
          pbVar80 = pbVar80 + 0x18;
        } while (pbVar80 != pbVar87);
      }
      piVar63 = piStack_2e0;
      uVar79 = (long)piVar60 - (long)piStack_2e0 >> 2;
      lVar56 = 0x3f;
      if (uVar79 != 0) {
        for (; uVar79 >> lVar56 == 0; lVar56 = lVar56 + -1) {
        }
      }
      uVar83 = 0;
      if (piVar60 != piStack_2e0) {
        uVar83 = ((uint)lVar56 ^ 0x3f) * 2 ^ 0x7e;
      }
      func_0x0bf076d0(piStack_2e0,piVar60,uVar83,1);
      piVar49 = piStack_2e0;
      if (piVar60 == piVar63) {
LAB_0bf0008e:
        piVar91 = piVar63;
        if (piVar91 != piVar60) goto LAB_0bf00093;
      }
      else {
        do {
          piVar91 = piVar49;
          piVar63 = piVar91 + 1;
          if (piVar63 == piVar60) goto LAB_0bf0008e;
          piVar49 = piVar63;
        } while (*piVar91 != *piVar63);
LAB_0bf00093:
        piVar63 = piVar91 + 2;
        if (piVar63 != piVar60) {
          iVar52 = *piVar91;
          do {
            iVar53 = *piVar63;
            if (iVar52 != iVar53) {
              piVar91[1] = iVar53;
              piVar91 = piVar91 + 1;
            }
            piVar63 = piVar63 + 1;
            iVar52 = iVar53;
          } while (piVar63 != piVar60);
        }
        if (piVar91 + 1 != piVar60) {
          piVar85 = piVar91 + 1;
        }
      }
      uVar79 = (long)piStack_308 - (long)piStack_2e0;
      uVar90 = (long)piVar85 - (long)piStack_2e0;
      if (uVar90 < uVar79) {
        if (piVar85 == piStack_2e0) {
          lVar56 = 0;
        }
        else {
          if ((ulong)((long)uVar90 >> 2) >> 0x3e != 0) goto LAB_0bf044f3;
          lVar56 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar90);
          if (lVar56 == 0) {
            func_0x0eec74c0(uVar90,0);
            lVar56 = 0;
          }
        }
        piVar60 = piStack_2e0;
        piVar85 = (int *)(lVar56 + uVar90);
        piVar55 = piVar85 + -((long)uVar90 >> 2);
        func_0x0eee2f00(piVar55,piStack_2e0,uVar90);
        piStack_308 = piVar85;
        if (piVar60 != (int *)0x0) {
          func_0x0412a280(piVar60,uVar79);
        }
      }
      uVar47 = auStack_2d7._1_2_;
      uVar31 = CONCAT11(auStack_2d7[0],bStack_2d8);
      lVar56 = CONCAT26(auStack_2d7._5_2_,
                        CONCAT15(auStack_2d7[4],
                                 CONCAT14(auStack_2d7[3],CONCAT22(auStack_2d7._1_2_,uVar31))));
      if (lVar56 != 0) {
        lVar61 = CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
        lVar57 = lVar56;
        if (lVar56 != lVar61) {
          do {
            if ((*(byte *)(lVar61 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar61 + -8),
                              *(ulong *)(lVar61 + -0x18) & 0xfffffffffffffffe);
            }
            lVar61 = lVar61 + -0x18;
          } while (lVar61 != lVar56);
          lVar57 = CONCAT26(auStack_2d7._5_2_,
                            CONCAT15(auStack_2d7[4],
                                     CONCAT14(auStack_2d7[3],
                                              CONCAT22(auStack_2d7._1_2_,
                                                       CONCAT11(auStack_2d7[0],bStack_2d8)))));
        }
        uStack_2d0._2_2_ = uVar47;
        iStack_2cc = (int)((ulong)lVar56 >> 0x20);
        uStack_2d0._0_2_ = uVar31;
        func_0x0412a280(lVar57,CONCAT26(sStack_2c2,
                                        CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))) -
                               lVar57);
      }
      lVar56 = *(long *)(param_1 + 0x590);
      if (lVar56 != 0) {
        *(long *)(param_1 + 0x598) = lVar56;
        func_0x0412a280(lVar56,*(long *)(param_1 + 0x5a0) - lVar56);
        *(undefined1 (*) [16])(param_1 + 0x590) = (undefined1  [16])0x0;
        param_1[0x5a0] = 0;
        param_1[0x5a1] = 0;
        param_1[0x5a2] = 0;
        param_1[0x5a3] = 0;
        param_1[0x5a4] = 0;
        param_1[0x5a5] = 0;
        param_1[0x5a6] = 0;
        param_1[0x5a7] = 0;
      }
      *(int **)(param_1 + 0x590) = piVar55;
      *(int **)(param_1 + 0x598) = piVar85;
      *(int **)(param_1 + 0x5a0) = piStack_308;
      uVar54 = func_0x048648e0(*param_2,&UNK_013509c6);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x5b0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013d2be0);
      iVar52 = func_0x04863e00(uVar54,10);
      if (iVar52 < 2) {
        iVar52 = 1;
      }
      *(int *)(param_1 + 0x5b8) = iVar52;
      uVar54 = func_0x048648e0(*param_2,&UNK_01265290);
      iVar53 = func_0x04863e00(uVar54,7);
      iVar52 = 1;
      if (1 < iVar53) {
        iVar52 = iVar53;
      }
      *(int *)(param_1 + 0x5bc) = iVar52;
      uVar54 = func_0x048648e0(*param_2,&UNK_0147c53e);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x5c0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012b2e11);
      bVar51 = func_0x04863ff0(uVar54,1);
      param_1[0x5c8] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_014221b2);
      func_0x04863480(auStack_40,uVar54);
      func_0x0b634500(param_1 + 0x740,auStack_40,0,0);
      func_0x04863610(auStack_40);
      iVar52 = *(int *)(param_1 + 0x740);
      iVar53 = *(int *)(param_1 + 0x744);
      if (iVar52 < 1) {
        iVar52 = 0;
      }
      iVar70 = 100;
      if (iVar52 < 100) {
        iVar70 = iVar52;
      }
      *(int *)(param_1 + 0x740) = iVar70;
      if (iVar70 < iVar53) {
        iVar70 = iVar53;
      }
      iVar52 = 0x6e;
      if (iVar53 < 0x6f) {
        iVar52 = iVar70;
      }
      *(int *)(param_1 + 0x744) = iVar52;
      uVar54 = func_0x048648e0(*param_2,&UNK_014922fb);
      uVar94 = func_0x04863e00(uVar54,0x78);
      *(undefined4 *)(param_1 + 0x5c4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011ed250);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x5cc) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01280dce);
      bVar51 = func_0x04863ff0(uVar54,1);
      param_1[0x5d0] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&DAT_01413295);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x5d8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0128b928);
      cVar50 = func_0x04865470(uVar54);
      if (cVar50 != '\0') {
        uVar94 = func_0x04863e00(uVar54,0);
        *(undefined4 *)(param_1 + 0x5dc) = uVar94;
        *(undefined4 *)(param_1 + 0x5d8) = uVar94;
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_012d798f);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x5f8] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_01222e20);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x748) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01455fa7);
      bVar51 = func_0x04863ff0(uVar54,1);
      *(ushort *)(param_1 + 0x5f9) = (*(ushort *)(param_1 + 0x5f9) & 0xfffb) + (ushort)bVar51 * 4;
      uVar54 = func_0x048648e0(*param_2,&UNK_014a4586);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x618] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_01455fb8);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x619] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_012322f2);
      auVar36._14_2_ = 0;
      auVar36._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar36 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      if ((param_1[0x620] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_1 + 0x630),
                        *(ulong *)(param_1 + 0x620) & 0xfffffffffffffffe);
      }
      *(ulong *)(param_1 + 0x630) =
           CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      *(ulong *)(param_1 + 0x620) =
           CONCAT26(auStack_2d7._5_2_,
                    CONCAT15(auStack_2d7[4],
                             CONCAT14(auStack_2d7[3],
                                      CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)
                                              ))));
      *(ulong *)(param_1 + 0x628) =
           CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_012ffba4);
      func_0x0bf0da90(uVar54,param_1 + 0x638,0);
      uVar54 = func_0x048648e0(*param_2,&UNK_0136cefe);
      func_0x0bf0da90(uVar54,param_1 + 0x698,0);
      uVar54 = func_0x048648e0(*param_2,&UNK_012d8a23);
      func_0x0bf0d730(uVar54,(int)*(short *)((long)param_2 + 0x3c),param_1 + 0x600);
      uVar54 = func_0x048648e0(*param_2,&UNK_011dddc1);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x818] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_011c8cd2);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x810) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013509d3);
      uVar94 = func_0x04863e00(uVar54,0x14);
      *(undefined4 *)(param_1 + 0x814) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0129a395);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x81a] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_012ffbb3);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x81c) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01222d0e);
      sVar3 = *(short *)((long)param_2 + 0x3c);
      func_0x04863480(&bStack_2d8,uVar54);
      func_0x0b6c3f10(&bStack_2d8,(int)sVar3,param_1 + 0x708);
      func_0x04863610(&bStack_2d8);
      uVar54 = func_0x048648e0(*param_2,&UNK_01408369);
      bVar51 = func_0x04863ff0(uVar54,0);
      *(ushort *)(param_1 + 0x5f9) = (*(ushort *)(param_1 + 0x5f9) & 0xfff7) + (ushort)bVar51 * 8;
      uVar54 = func_0x048648e0(*param_2,&UNK_014bdd58);
      uVar94 = func_0x04863e00(uVar54,*(undefined4 *)(param_1 + 0x6f8));
      *(undefined4 *)(param_1 + 0x6f8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0124de69);
      uVar94 = func_0x04863e00(uVar54,*(undefined4 *)(param_1 + 0x6fc));
      *(undefined4 *)(param_1 + 0x6fc) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013d4cac);
      uVar94 = func_0x04863e00(uVar54,*(undefined4 *)(param_1 + 0x700));
      *(undefined4 *)(param_1 + 0x700) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012179f2);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x704) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013bb788);
      uVar94 = func_0x04863f80(*(undefined4 *)(param_1 + 0x720),uVar54);
      *(undefined4 *)(param_1 + 0x720) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0123033e);
      bVar51 = func_0x04863ff0(uVar54,param_1[0x724]);
      param_1[0x724] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_01383ab4);
      func_0x0b632a50(0,0,param_1 + 0x728,uVar54);
      uVar54 = func_0x048648e0(*param_2,&UNK_013ecc40);
      bVar51 = func_0x04863ff0(uVar54,1);
      param_1[0x730] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_014bbeea);
      bVar51 = func_0x04863ff0(uVar54,1);
      param_1[0x731] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_01280de0);
      uVar94 = func_0x04863e00(uVar54,8);
      *(undefined4 *)(param_1 + 0x734) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011fdab0);
      uVar94 = func_0x04863e00(uVar54,8);
      *(undefined4 *)(param_1 + 0x738) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012b2e1f);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x73c] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_013eea37);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x73d] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_0131a5dc);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x73e] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_011d3584);
      cVar50 = func_0x04864260(uVar54);
      if (cVar50 == '\0') {
        cVar50 = func_0x04864270(uVar54);
        if (cVar50 == '\0') {
          cVar50 = func_0x04864260(uVar54);
          if (cVar50 == '\0') {
            func_0x0bf066e0(param_1,uVar54);
          }
        }
        else {
          func_0x04865530(&bStack_2d8,uVar54);
          func_0x048655b0(auStack_208,uVar54);
          while( true ) {
            cVar50 = func_0x04862c80(&bStack_2d8,auStack_208);
            if (cVar50 != '\0') break;
            uVar54 = func_0x04862b80(&bStack_2d8);
            func_0x0bf066e0(param_1,uVar54);
            func_0x04862ba0(&bStack_2d8);
          }
          func_0x04862b40(auStack_208);
          func_0x04862b40(&bStack_2d8);
        }
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_013ba1dd);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x838) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_014d510d);
      cVar50 = func_0x04864270(uVar54);
      if (cVar50 != '\0') {
        func_0x04865530(&uStack_158,uVar54);
        func_0x048655b0(auStack_2f8,uVar54);
        while( true ) {
          cVar50 = func_0x04862c80(&uStack_158,auStack_2f8);
          if (cVar50 != '\0') break;
          uVar54 = func_0x04862b80(&uStack_158);
          bStack_2d8 = 0;
          auStack_2d7[0] = '\0';
          auStack_2d7._1_2_ = 0;
          auStack_2d7[3] = 0;
          auStack_2d7[4] = 0;
          auStack_2d7._5_2_ = 0x3f80;
          iStack_2c8 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          bStack_298 = 0;
          uStack_297 = 0;
          uStack_2b0 = 0;
          uStack_2ac = 0;
          bStack_2a8 = 0;
          uStack_2a7 = 0;
          bStack_2c0 = 0;
          uStack_2bf = 0;
          uStack_2be = 0;
          uStack_2bc = 0;
          uStack_2b8._0_4_ = 0;
          uStack_2b8._4_4_ = 0;
          uStack_2d0._0_2_ = 0x9f40;
          uStack_2d0._2_2_ = 0xf29;
          iStack_2cc = 0;
          uVar64 = func_0x048648e0(uVar54,&UNK_0133e2b9);
          uVar94 = func_0x04863e00(uVar64,0xffffffff);
          bStack_2d8 = (byte)uVar94;
          auStack_2d7[0] = (char)((uint)uVar94 >> 8);
          auStack_2d7._1_2_ = (undefined2)((uint)uVar94 >> 0x10);
          uVar64 = func_0x048648e0(uVar54,&UNK_01272634);
          uVar94 = func_0x04863f80(_DAT_011983f0,uVar64);
          auStack_2d7[3] = (byte)uVar94;
          auStack_2d7[4] = (char)((uint)uVar94 >> 8);
          auStack_2d7._5_2_ = (undefined2)((uint)uVar94 >> 0x10);
          uVar54 = func_0x048648e0(uVar54,&UNK_01340d28);
          cVar50 = func_0x0b05abc0(&uStack_2d0,auStack_208,uVar54);
          if (cVar50 == '\0') {
            func_0x049d2400(&uStack_2d0);
            func_0x04862b40(auStack_2f8);
            func_0x04862b40(&uStack_158);
            return 0;
          }
          if ((short)auStack_2d7._1_2_ < 0) {
            func_0x05666480(1,3,10,&UNK_0130ab12);
          }
          else {
            puVar93 = *(undefined8 **)(param_1 + 0x828);
            if (puVar93 < *(undefined8 **)(param_1 + 0x830)) {
              *puVar93 = CONCAT26(auStack_2d7._5_2_,
                                  CONCAT15(auStack_2d7[4],
                                           CONCAT14(auStack_2d7[3],
                                                    CONCAT22(auStack_2d7._1_2_,
                                                             CONCAT11(auStack_2d7[0],bStack_2d8)))))
              ;
              func_0x049d00c0(puVar93 + 1,&uStack_2d0);
              puVar93[1] = &UNK_0f299f40;
              *(undefined8 **)(param_1 + 0x828) = puVar93 + 9;
              *(undefined8 **)(param_1 + 0x828) = puVar93 + 9;
            }
            else {
              uVar54 = func_0x058e3380(param_1 + 0x820,&bStack_2d8);
              *(undefined8 *)(param_1 + 0x828) = uVar54;
            }
          }
          func_0x049d2400(&uStack_2d0);
          func_0x04862ba0(&uStack_158);
        }
        func_0x04862b40(auStack_2f8);
        func_0x04862b40(&uStack_158);
      }
      uVar54 = func_0x048648e0(*param_2,&DAT_01495a1a);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x83c) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01448288);
      auVar37._14_2_ = 0;
      auVar37._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar37 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      if ((param_1[0x840] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_1 + 0x850),
                        *(ulong *)(param_1 + 0x840) & 0xfffffffffffffffe);
      }
      *(ulong *)(param_1 + 0x850) =
           CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      *(ulong *)(param_1 + 0x840) =
           CONCAT26(auStack_2d7._5_2_,
                    CONCAT15(auStack_2d7[4],
                             CONCAT14(auStack_2d7[3],
                                      CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)
                                              ))));
      *(ulong *)(param_1 + 0x848) =
           CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_014af274);
      auVar38._14_2_ = 0;
      auVar38._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar38 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      if ((param_1[0x878] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_1 + 0x888),
                        *(ulong *)(param_1 + 0x878) & 0xfffffffffffffffe);
      }
      *(ulong *)(param_1 + 0x888) =
           CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      *(ulong *)(param_1 + 0x878) =
           CONCAT26(auStack_2d7._5_2_,
                    CONCAT15(auStack_2d7[4],
                             CONCAT14(auStack_2d7[3],
                                      CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)
                                              ))));
      *(ulong *)(param_1 + 0x880) =
           CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_01280df0);
      auVar39._14_2_ = 0;
      auVar39._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar39 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      if ((param_1[0x890] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_1 + 0x8a0),
                        *(ulong *)(param_1 + 0x890) & 0xfffffffffffffffe);
      }
      *(ulong *)(param_1 + 0x8a0) =
           CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      *(ulong *)(param_1 + 0x890) =
           CONCAT26(auStack_2d7._5_2_,
                    CONCAT15(auStack_2d7[4],
                             CONCAT14(auStack_2d7[3],
                                      CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)
                                              ))));
      *(ulong *)(param_1 + 0x898) =
           CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_012ffbc2);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x8a8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01385f92);
      auVar40._14_2_ = 0;
      auVar40._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar40 << 0x10;
      func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
      if ((param_1[0x8b0] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_1 + 0x8c0),
                        *(ulong *)(param_1 + 0x8b0) & 0xfffffffffffffffe);
      }
      *(ulong *)(param_1 + 0x8c0) =
           CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      *(ulong *)(param_1 + 0x8b0) =
           CONCAT26(auStack_2d7._5_2_,
                    CONCAT15(auStack_2d7[4],
                             CONCAT14(auStack_2d7[3],
                                      CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)
                                              ))));
      *(ulong *)(param_1 + 0x8b8) =
           CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
      bStack_2d8 = 0;
      auStack_2d7[0] = '\0';
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_01408378);
      func_0x0bf0da90(uVar54,param_1 + 0x8c8,0);
      uVar54 = func_0x048648e0(*param_2,&UNK_0139c4f7);
      auVar41._14_2_ = 0;
      auVar41._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar41 << 0x10;
      func_0x04863cb0(&bStack_80,uVar54,auStack_208);
      if (DAT_0f6d0348 == '\0') goto LAB_0bf04401;
LAB_0bf00f70:
      uVar79 = (ulong)(bStack_80 >> 1);
      puVar46 = &uStack_7f;
      if ((bStack_80 & 1) != 0) {
        uVar79 = uStack_78;
        puVar46 = puStack_70;
      }
      if (0xfffffffffffffff7 < uVar79) {
        func_0x04882e30();
LAB_0bf044e9:
        FUN_04882eb0();
LAB_0bf044ee:
        func_0x053d85c0();
LAB_0bf044f3:
        FUN_04882eb0();
        goto LAB_0bf044f8;
      }
      if (uVar79 < 0x17) {
        bStack_2d8 = (char)uVar79 * '\x02';
        puVar76 = auStack_2d7;
        if (uVar79 != 0) goto LAB_0bf01007;
      }
      else {
        lVar56 = 0x1a;
        if ((uVar79 | 7) != 0x17) {
          lVar56 = (uVar79 | 7) + 1;
        }
        puVar76 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar56);
        if (puVar76 == (undefined1 *)0x0) {
          func_0x0eec74c0(lVar56,0);
        }
        iStack_2c8 = (int)puVar76;
        bStack_2c4 = (byte)((ulong)puVar76 >> 0x20);
        cStack_2c3 = (char)((ulong)puVar76 >> 0x28);
        sStack_2c2 = (short)((ulong)puVar76 >> 0x30);
        bStack_2d8 = (byte)lVar56 | 1;
        auStack_2d7[0] = (char)((ulong)lVar56 >> 8);
        auStack_2d7._1_2_ = (undefined2)((ulong)lVar56 >> 0x10);
        auStack_2d7[3] = (byte)((ulong)lVar56 >> 0x20);
        auStack_2d7[4] = (char)((ulong)lVar56 >> 0x28);
        auStack_2d7._5_2_ = (undefined2)((ulong)lVar56 >> 0x30);
        uStack_2d0 = (int)uVar79;
        iStack_2cc = (int)(uVar79 >> 0x20);
LAB_0bf01007:
        func_0x0eee2f00(puVar76,puVar46,uVar79);
      }
      puVar76[uVar79] = 0;
      uVar84 = (ulong)(bStack_2d8 >> 1);
      uVar79 = CONCAT44(iStack_2cc,uStack_2d0);
      pcVar78 = (char *)CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
      pcVar4 = auStack_2d7;
      uVar90 = uVar79;
      pcVar30 = pcVar78;
      if ((bStack_2d8 & 1) == 0) {
        uVar90 = uVar84;
        pcVar30 = pcVar4;
      }
      if (uVar90 != 0) {
        pcVar78 = pcVar30;
        if (uVar90 < 8) {
LAB_0bf0117c:
          do {
            cVar50 = *pcVar78;
            cVar103 = cVar50 + ' ';
            if (0x19 < (byte)(cVar50 + 0xbfU)) {
              cVar103 = cVar50;
            }
            *pcVar78 = cVar103;
            pcVar78 = pcVar78 + 1;
          } while (pcVar78 != pcVar30 + uVar90);
        }
        else if (uVar90 < 0x20) {
          uVar79 = 0;
LAB_0bf01115:
          uVar84 = uVar90 & 0xfffffffffffffff8;
          pcVar78 = pcVar30 + uVar84;
          do {
            uVar54 = *(undefined8 *)(pcVar30 + uVar79);
            bVar101 = (char)uVar54 + DAT_014e9110;
            cVar103 = (char)((ulong)uVar54 >> 8);
            bVar102 = cVar103 + DAT_014e9110._1_1_;
            cVar105 = (char)((ulong)uVar54 >> 0x10);
            bVar104 = cVar105 + DAT_014e9110._2_1_;
            cVar107 = (char)((ulong)uVar54 >> 0x18);
            bVar106 = cVar107 + DAT_014e9110._3_1_;
            cVar109 = (char)((ulong)uVar54 >> 0x20);
            bVar108 = cVar109 + DAT_014e9110._4_1_;
            cVar111 = (char)((ulong)uVar54 >> 0x28);
            bVar110 = cVar111 + DAT_014e9110._5_1_;
            cVar113 = (char)((ulong)uVar54 >> 0x30);
            cVar50 = (char)((ulong)uVar54 >> 0x38);
            bVar112 = cVar113 + DAT_014e9110._6_1_;
            bVar114 = cVar50 + DAT_014e9110._7_1_;
            bVar115 = DAT_014e9110._8_1_;
            bVar119 = DAT_014e9110._9_1_;
            bVar120 = DAT_014e9110._10_1_;
            bVar121 = DAT_014e9110._11_1_;
            bVar122 = DAT_014e9110._12_1_;
            bVar123 = DAT_014e9110._13_1_;
            bVar124 = DAT_014e9110._14_1_;
            bVar125 = DAT_014e9110._15_1_;
            bVar51 = DAT_014e8cb0;
            bVar66 = DAT_014e8cb0._1_1_;
            bVar6 = DAT_014e8cb0._2_1_;
            bVar7 = DAT_014e8cb0._3_1_;
            bVar8 = DAT_014e8cb0._4_1_;
            bVar9 = DAT_014e8cb0._5_1_;
            bVar10 = DAT_014e8cb0._6_1_;
            bVar11 = DAT_014e8cb0._7_1_;
            bVar12 = DAT_014e8cb0._8_1_;
            bVar13 = DAT_014e8cb0._9_1_;
            bVar14 = DAT_014e8cb0._10_1_;
            bVar15 = DAT_014e8cb0._11_1_;
            bVar16 = DAT_014e8cb0._12_1_;
            bVar17 = DAT_014e8cb0._13_1_;
            bVar18 = DAT_014e8cb0._14_1_;
            bVar19 = DAT_014e8cb0._15_1_;
            auVar117[0] = -((byte)((bVar101 < bVar51) * bVar51 | (bVar101 >= bVar51) * bVar101) ==
                           bVar101);
            auVar117[1] = -((byte)((bVar102 < bVar66) * bVar66 | (bVar102 >= bVar66) * bVar102) ==
                           bVar102);
            auVar117[2] = -((byte)((bVar104 < bVar6) * bVar6 | (bVar104 >= bVar6) * bVar104) ==
                           bVar104);
            auVar117[3] = -((byte)((bVar106 < bVar7) * bVar7 | (bVar106 >= bVar7) * bVar106) ==
                           bVar106);
            auVar117[4] = -((byte)((bVar108 < bVar8) * bVar8 | (bVar108 >= bVar8) * bVar108) ==
                           bVar108);
            auVar117[5] = -((byte)((bVar110 < bVar9) * bVar9 | (bVar110 >= bVar9) * bVar110) ==
                           bVar110);
            auVar117[6] = -((byte)((bVar112 < bVar10) * bVar10 | (bVar112 >= bVar10) * bVar112) ==
                           bVar112);
            auVar117[7] = -((byte)((bVar114 < bVar11) * bVar11 | (bVar114 >= bVar11) * bVar114) ==
                           bVar114);
            auVar117[8] = -((byte)((bVar115 < bVar12) * bVar12 | (bVar115 >= bVar12) * bVar115) ==
                           bVar115);
            auVar117[9] = -((byte)((bVar119 < bVar13) * bVar13 | (bVar119 >= bVar13) * bVar119) ==
                           bVar119);
            auVar117[10] = -((byte)((bVar120 < bVar14) * bVar14 | (bVar120 >= bVar14) * bVar120) ==
                            bVar120);
            auVar117[0xb] =
                 -((byte)((bVar121 < bVar15) * bVar15 | (bVar121 >= bVar15) * bVar121) == bVar121);
            auVar117[0xc] =
                 -((byte)((bVar122 < bVar16) * bVar16 | (bVar122 >= bVar16) * bVar122) == bVar122);
            auVar117[0xd] =
                 -((byte)((bVar123 < bVar17) * bVar17 | (bVar123 >= bVar17) * bVar123) == bVar123);
            auVar117[0xe] =
                 -((byte)((bVar124 < bVar18) * bVar18 | (bVar124 >= bVar18) * bVar124) == bVar124);
            auVar117[0xf] =
                 -((byte)((bVar125 < bVar19) * bVar19 | (bVar125 >= bVar19) * bVar125) == bVar125);
            auVar118 = ~auVar117 & _DAT_014ea360;
            *(ulong *)(pcVar30 + uVar79) =
                 CONCAT17(auVar118[7] + cVar50,
                          CONCAT16(auVar118[6] + cVar113,
                                   CONCAT15(auVar118[5] + cVar111,
                                            CONCAT14(auVar118[4] + cVar109,
                                                     CONCAT13(auVar118[3] + cVar107,
                                                              CONCAT12(auVar118[2] + cVar105,
                                                                       CONCAT11(auVar118[1] +
                                                                                cVar103,auVar118[0]
                                                                                        + (char)
                                                  uVar54)))))));
            uVar79 = uVar79 + 8;
          } while (uVar84 != uVar79);
          if (uVar90 != uVar84) goto LAB_0bf0117c;
        }
        else {
          uVar79 = uVar90 & 0xffffffffffffffe0;
          uVar84 = 0;
          do {
            auVar118 = *(undefined1 (*) [16])(pcVar30 + uVar84);
            pcVar78 = pcVar30 + uVar84 + 0x10;
            cVar50 = *pcVar78;
            cVar103 = pcVar78[1];
            cVar105 = pcVar78[2];
            cVar107 = pcVar78[3];
            cVar109 = pcVar78[4];
            cVar111 = pcVar78[5];
            cVar113 = pcVar78[6];
            cVar21 = pcVar78[7];
            cVar22 = pcVar78[8];
            cVar23 = pcVar78[9];
            cVar24 = pcVar78[10];
            cVar25 = pcVar78[0xb];
            cVar26 = pcVar78[0xc];
            cVar27 = pcVar78[0xd];
            cVar28 = pcVar78[0xe];
            cVar29 = pcVar78[0xf];
            bVar115 = auVar118[0] + DAT_014e86b0;
            bVar119 = auVar118[1] + DAT_014e86b0._1_1_;
            bVar120 = auVar118[2] + DAT_014e86b0._2_1_;
            bVar121 = auVar118[3] + DAT_014e86b0._3_1_;
            bVar122 = auVar118[4] + DAT_014e86b0._4_1_;
            bVar123 = auVar118[5] + DAT_014e86b0._5_1_;
            bVar124 = auVar118[6] + DAT_014e86b0._6_1_;
            bVar125 = auVar118[7] + DAT_014e86b0._7_1_;
            bVar101 = auVar118[8] + DAT_014e86b0._8_1_;
            bVar102 = auVar118[9] + DAT_014e86b0._9_1_;
            bVar104 = auVar118[10] + DAT_014e86b0._10_1_;
            bVar106 = auVar118[0xb] + DAT_014e86b0._11_1_;
            bVar108 = auVar118[0xc] + DAT_014e86b0._12_1_;
            bVar110 = auVar118[0xd] + DAT_014e86b0._13_1_;
            bVar112 = auVar118[0xe] + DAT_014e86b0._14_1_;
            bVar114 = auVar118[0xf] + DAT_014e86b0._15_1_;
            bVar126 = cVar50 + DAT_014e86b0;
            bVar127 = cVar103 + DAT_014e86b0._1_1_;
            bVar128 = cVar105 + DAT_014e86b0._2_1_;
            bVar129 = cVar107 + DAT_014e86b0._3_1_;
            bVar130 = cVar109 + DAT_014e86b0._4_1_;
            bVar131 = cVar111 + DAT_014e86b0._5_1_;
            bVar132 = cVar113 + DAT_014e86b0._6_1_;
            bVar133 = cVar21 + DAT_014e86b0._7_1_;
            bVar134 = cVar22 + DAT_014e86b0._8_1_;
            bVar135 = cVar23 + DAT_014e86b0._9_1_;
            bVar136 = cVar24 + DAT_014e86b0._10_1_;
            bVar137 = cVar25 + DAT_014e86b0._11_1_;
            bVar138 = cVar26 + DAT_014e86b0._12_1_;
            bVar139 = cVar27 + DAT_014e86b0._13_1_;
            bVar140 = cVar28 + DAT_014e86b0._14_1_;
            bVar141 = cVar29 + DAT_014e86b0._15_1_;
            bVar51 = DAT_014e4170;
            bVar66 = DAT_014e4170._1_1_;
            bVar6 = DAT_014e4170._2_1_;
            bVar7 = DAT_014e4170._3_1_;
            bVar8 = DAT_014e4170._4_1_;
            bVar9 = DAT_014e4170._5_1_;
            bVar10 = DAT_014e4170._6_1_;
            bVar11 = DAT_014e4170._7_1_;
            bVar12 = DAT_014e4170._8_1_;
            bVar13 = DAT_014e4170._9_1_;
            bVar14 = DAT_014e4170._10_1_;
            bVar15 = DAT_014e4170._11_1_;
            bVar16 = DAT_014e4170._12_1_;
            bVar17 = DAT_014e4170._13_1_;
            bVar18 = DAT_014e4170._14_1_;
            bVar19 = DAT_014e4170._15_1_;
            auVar142[0] = -((byte)((bVar51 < bVar115) * bVar51 | (bVar51 >= bVar115) * bVar115) ==
                           bVar115);
            auVar142[1] = -((byte)((bVar66 < bVar119) * bVar66 | (bVar66 >= bVar119) * bVar119) ==
                           bVar119);
            auVar142[2] = -((byte)((bVar6 < bVar120) * bVar6 | (bVar6 >= bVar120) * bVar120) ==
                           bVar120);
            auVar142[3] = -((byte)((bVar7 < bVar121) * bVar7 | (bVar7 >= bVar121) * bVar121) ==
                           bVar121);
            auVar142[4] = -((byte)((bVar8 < bVar122) * bVar8 | (bVar8 >= bVar122) * bVar122) ==
                           bVar122);
            auVar142[5] = -((byte)((bVar9 < bVar123) * bVar9 | (bVar9 >= bVar123) * bVar123) ==
                           bVar123);
            auVar142[6] = -((byte)((bVar10 < bVar124) * bVar10 | (bVar10 >= bVar124) * bVar124) ==
                           bVar124);
            auVar142[7] = -((byte)((bVar11 < bVar125) * bVar11 | (bVar11 >= bVar125) * bVar125) ==
                           bVar125);
            auVar142[8] = -((byte)((bVar12 < bVar101) * bVar12 | (bVar12 >= bVar101) * bVar101) ==
                           bVar101);
            auVar142[9] = -((byte)((bVar13 < bVar102) * bVar13 | (bVar13 >= bVar102) * bVar102) ==
                           bVar102);
            auVar142[10] = -((byte)((bVar14 < bVar104) * bVar14 | (bVar14 >= bVar104) * bVar104) ==
                            bVar104);
            auVar142[0xb] =
                 -((byte)((bVar15 < bVar106) * bVar15 | (bVar15 >= bVar106) * bVar106) == bVar106);
            auVar142[0xc] =
                 -((byte)((bVar16 < bVar108) * bVar16 | (bVar16 >= bVar108) * bVar108) == bVar108);
            auVar142[0xd] =
                 -((byte)((bVar17 < bVar110) * bVar17 | (bVar17 >= bVar110) * bVar110) == bVar110);
            auVar142[0xe] =
                 -((byte)((bVar18 < bVar112) * bVar18 | (bVar18 >= bVar112) * bVar112) == bVar112);
            auVar142[0xf] =
                 -((byte)((bVar19 < bVar114) * bVar19 | (bVar19 >= bVar114) * bVar114) == bVar114);
            auVar116[0] = -((byte)((bVar51 < bVar126) * bVar51 | (bVar51 >= bVar126) * bVar126) ==
                           bVar126);
            auVar116[1] = -((byte)((bVar66 < bVar127) * bVar66 | (bVar66 >= bVar127) * bVar127) ==
                           bVar127);
            auVar116[2] = -((byte)((bVar6 < bVar128) * bVar6 | (bVar6 >= bVar128) * bVar128) ==
                           bVar128);
            auVar116[3] = -((byte)((bVar7 < bVar129) * bVar7 | (bVar7 >= bVar129) * bVar129) ==
                           bVar129);
            auVar116[4] = -((byte)((bVar8 < bVar130) * bVar8 | (bVar8 >= bVar130) * bVar130) ==
                           bVar130);
            auVar116[5] = -((byte)((bVar9 < bVar131) * bVar9 | (bVar9 >= bVar131) * bVar131) ==
                           bVar131);
            auVar116[6] = -((byte)((bVar10 < bVar132) * bVar10 | (bVar10 >= bVar132) * bVar132) ==
                           bVar132);
            auVar116[7] = -((byte)((bVar11 < bVar133) * bVar11 | (bVar11 >= bVar133) * bVar133) ==
                           bVar133);
            auVar116[8] = -((byte)((bVar12 < bVar134) * bVar12 | (bVar12 >= bVar134) * bVar134) ==
                           bVar134);
            auVar116[9] = -((byte)((bVar13 < bVar135) * bVar13 | (bVar13 >= bVar135) * bVar135) ==
                           bVar135);
            auVar116[10] = -((byte)((bVar14 < bVar136) * bVar14 | (bVar14 >= bVar136) * bVar136) ==
                            bVar136);
            auVar116[0xb] =
                 -((byte)((bVar15 < bVar137) * bVar15 | (bVar15 >= bVar137) * bVar137) == bVar137);
            auVar116[0xc] =
                 -((byte)((bVar16 < bVar138) * bVar16 | (bVar16 >= bVar138) * bVar138) == bVar138);
            auVar116[0xd] =
                 -((byte)((bVar17 < bVar139) * bVar17 | (bVar17 >= bVar139) * bVar139) == bVar139);
            auVar116[0xe] =
                 -((byte)((bVar18 < bVar140) * bVar18 | (bVar18 >= bVar140) * bVar140) == bVar140);
            auVar116[0xf] =
                 -((byte)((bVar19 < bVar141) * bVar19 | (bVar19 >= bVar141) * bVar141) == bVar141);
            auVar142 = auVar142 & _DAT_014ead50;
            auVar116 = auVar116 & _DAT_014ead50;
            pcVar78 = pcVar30 + uVar84;
            *pcVar78 = auVar142[0] + auVar118[0];
            pcVar78[1] = auVar142[1] + auVar118[1];
            pcVar78[2] = auVar142[2] + auVar118[2];
            pcVar78[3] = auVar142[3] + auVar118[3];
            pcVar78[4] = auVar142[4] + auVar118[4];
            pcVar78[5] = auVar142[5] + auVar118[5];
            pcVar78[6] = auVar142[6] + auVar118[6];
            pcVar78[7] = auVar142[7] + auVar118[7];
            pcVar78[8] = auVar142[8] + auVar118[8];
            pcVar78[9] = auVar142[9] + auVar118[9];
            pcVar78[10] = auVar142[10] + auVar118[10];
            pcVar78[0xb] = auVar142[0xb] + auVar118[0xb];
            pcVar78[0xc] = auVar142[0xc] + auVar118[0xc];
            pcVar78[0xd] = auVar142[0xd] + auVar118[0xd];
            pcVar78[0xe] = auVar142[0xe] + auVar118[0xe];
            pcVar78[0xf] = auVar142[0xf] + auVar118[0xf];
            pcVar78 = pcVar30 + uVar84 + 0x10;
            *pcVar78 = auVar116[0] + cVar50;
            pcVar78[1] = auVar116[1] + cVar103;
            pcVar78[2] = auVar116[2] + cVar105;
            pcVar78[3] = auVar116[3] + cVar107;
            pcVar78[4] = auVar116[4] + cVar109;
            pcVar78[5] = auVar116[5] + cVar111;
            pcVar78[6] = auVar116[6] + cVar113;
            pcVar78[7] = auVar116[7] + cVar21;
            pcVar78[8] = auVar116[8] + cVar22;
            pcVar78[9] = auVar116[9] + cVar23;
            pcVar78[10] = auVar116[10] + cVar24;
            pcVar78[0xb] = auVar116[0xb] + cVar25;
            pcVar78[0xc] = auVar116[0xc] + cVar26;
            pcVar78[0xd] = auVar116[0xd] + cVar27;
            pcVar78[0xe] = auVar116[0xe] + cVar28;
            pcVar78[0xf] = auVar116[0xf] + cVar29;
            uVar84 = uVar84 + 0x20;
          } while (uVar79 != uVar84);
          if (uVar90 != uVar79) {
            if ((uVar90 & 0x18) == 0) {
              pcVar78 = pcVar30 + uVar79;
              goto LAB_0bf0117c;
            }
            goto LAB_0bf01115;
          }
        }
        uVar79 = CONCAT44(iStack_2cc,uStack_2d0);
        pcVar78 = (char *)CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
        uVar84 = (ulong)(bStack_2d8 >> 1);
      }
      pcVar30 = pcVar4;
      if ((bStack_2d8 & 1) != 0) {
        uVar84 = uVar79;
        pcVar30 = pcVar78;
      }
      uVar90 = func_0x04883620(&uStack_158,pcVar30,uVar84);
      uVar79 = _DAT_0f6d0328;
      if (_DAT_0f6d0328 != 0) {
        uVar84 = _DAT_0f6d0328 - (_DAT_0f6d0328 >> 1 & 0x5555555555555555);
        uVar84 = (uVar84 >> 2 & 0x3333333333333333) + (uVar84 & 0x3333333333333333);
        uVar84 = ((uVar84 >> 4) + uVar84 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar84 >> 0x38 < 2) {
          uVar92 = _DAT_0f6d0328 - 1 & uVar90;
          plVar77 = *(long **)(_DAT_0f6d0320 + uVar92 * 8);
        }
        else if (uVar90 < _DAT_0f6d0328) {
          plVar77 = *(long **)(_DAT_0f6d0320 + uVar90 * 8);
          uVar92 = uVar90;
        }
        else if ((uVar90 | _DAT_0f6d0328) >> 0x20 == 0) {
          uVar92 = (uVar90 & 0xffffffff) % (_DAT_0f6d0328 & 0xffffffff);
          plVar77 = *(long **)(_DAT_0f6d0320 + uVar92 * 8);
        }
        else {
          plVar77 = *(long **)(_DAT_0f6d0320 + (uVar90 % _DAT_0f6d0328) * 8);
          uVar92 = uVar90 % _DAT_0f6d0328;
        }
        if ((plVar77 != (long *)0x0) && (plVar77 = (long *)*plVar77, plVar77 != (long *)0x0)) {
          if ((bStack_2d8 & 1) == 0) {
            uVar81 = (ulong)(bStack_2d8 >> 1);
          }
          else {
            uVar81 = CONCAT44(iStack_2cc,uStack_2d0);
            pcVar4 = (char *)CONCAT26(sStack_2c2,
                                      CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
          }
          if ((byte)(uVar84 >> 0x38) < 2) {
            uVar79 = _DAT_0f6d0328 - 1;
            do {
              if (uVar90 == plVar77[1]) {
                bVar51 = *(byte *)(plVar77 + 2);
                if ((bVar51 & 1) == 0) {
                  uVar84 = (ulong)(bVar51 >> 1);
                }
                else {
                  uVar84 = plVar77[3];
                }
                if (uVar84 == uVar81) {
                  if ((bVar51 & 1) == 0) {
                    lVar56 = (long)plVar77 + 0x11;
                  }
                  else {
                    lVar56 = plVar77[4];
                  }
                  iVar52 = func_0x0eee3000(lVar56,pcVar4,uVar81);
                  if (iVar52 == 0) goto LAB_0bf013d4;
                }
              }
              else if ((plVar77[1] & uVar79) != uVar92) break;
              plVar77 = (long *)*plVar77;
            } while (plVar77 != (long *)0x0);
          }
          else {
            do {
              uVar84 = plVar77[1];
              if (uVar90 == uVar84) {
                bVar51 = *(byte *)(plVar77 + 2);
                if ((bVar51 & 1) == 0) {
                  uVar84 = (ulong)(bVar51 >> 1);
                }
                else {
                  uVar84 = plVar77[3];
                }
                if (uVar84 == uVar81) {
                  if ((bVar51 & 1) == 0) {
                    lVar56 = (long)plVar77 + 0x11;
                  }
                  else {
                    lVar56 = plVar77[4];
                  }
                  iVar52 = func_0x0eee3000(lVar56,pcVar4,uVar81);
                  if (iVar52 == 0) goto LAB_0bf013d4;
                }
              }
              else {
                if (uVar79 <= uVar84) {
                  if ((uVar84 | uVar79) >> 0x20 == 0) {
                    uVar84 = (uVar84 & 0xffffffff) % (uVar79 & 0xffffffff);
                  }
                  else {
                    uVar84 = uVar84 % uVar79;
                  }
                }
                if (uVar84 != uVar92) break;
              }
              plVar77 = (long *)*plVar77;
            } while (plVar77 != (long *)0x0);
          }
        }
      }
      plVar77 = (long *)0x0;
LAB_0bf013d4:
      if ((bStack_2d8 & 1) != 0) {
        func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                        CONCAT26(auStack_2d7._5_2_,
                                 CONCAT15(auStack_2d7[4],
                                          CONCAT14(auStack_2d7[3],
                                                   CONCAT22(auStack_2d7._1_2_,
                                                            CONCAT11(auStack_2d7[0],bStack_2d8)))))
                        & 0xfffffffffffffffe);
      }
      if (plVar77 == (long *)0x0) {
        param_1[0x788] = 0xff;
        param_1[0x789] = 0xff;
        param_1[0x78a] = 0xff;
        param_1[0x78b] = 0xff;
      }
      else {
        *(int *)(param_1 + 0x788) = (int)plVar77[5];
      }
      if ((bStack_80 & 1) != 0) {
        func_0x0412a280(puStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
      }
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_01280dfe);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x92c) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013509e7);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x930) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01488fe7);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x928) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_014bbebf);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x934] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_0124de73);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x935] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_012ffbcf);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x938) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0131a5fd);
      fVar95 = (float)func_0x04863f80(uVar54);
      *(float *)(param_1 + 0x93c) = fVar95;
      if (*(float *)(param_1 + 0x938) <= 0.0 && *(float *)(param_1 + 0x938) != 0.0) {
        func_0x0b6042d0(1,3,2,&UNK_013509fc);
        param_1[0x938] = 0;
        param_1[0x939] = 0;
        param_1[0x93a] = 0;
        param_1[0x93b] = 0;
        fVar95 = *(float *)(param_1 + 0x93c);
      }
      if (fVar95 < 0.0) {
        func_0x0b610b50(1,3,2,&UNK_0129a3a3);
        param_1[0x93c] = 0;
        param_1[0x93d] = 0;
        param_1[0x93e] = 0;
        param_1[0x93f] = 0;
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_011fdabf);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x940) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013bb795);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x944) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0124de88);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x948) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0131a625);
      uVar94 = func_0x04863f80(_DAT_011985dc,uVar54);
      *(undefined4 *)(param_1 + 0x94c) = uVar94;
      cVar50 = func_0x04865100(*param_2,&UNK_0133576f);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_0133576f);
        cVar50 = func_0x0b05abc0(param_1 + 0x950,&bStack_2d8,uVar54);
        if (cVar50 == '\0') {
          return 0;
        }
      }
      cVar50 = func_0x04865100(*param_2,&UNK_01280e14);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_01280e14);
        cVar50 = func_0x0b05abc0(param_1 + 0x990,&bStack_2d8,uVar54);
        if (cVar50 == '\0') {
          return 0;
        }
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_0142219b);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x9d0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013d4cb7);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x9d4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011c8e42);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x9d8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01226e4e);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x9dc) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_014c9c6b);
      uVar94 = func_0x04863f80(_DAT_01198494,uVar54);
      *(undefined4 *)(param_1 + 0x9e0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013dfda1);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x78c) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_013dfdaf);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x790) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012a49fb);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x794) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0142cbba);
      uVar94 = func_0x04863e00(uVar54,0);
      *(undefined4 *)(param_1 + 0x798) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&DAT_01376dbd);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x79c] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&DAT_01340dd3);
      uVar94 = func_0x04863e00(uVar54,0xffffffff);
      *(undefined4 *)(param_1 + 0x7a0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011ed245);
      func_0x0bf0da90(uVar54,param_1 + 0x440,0);
      if (*(int *)(param_1 + 0x790) < 0) {
        param_1[0x790] = 0;
        param_1[0x791] = 0;
        param_1[0x792] = 0;
        param_1[0x793] = 0;
        func_0x0b625e50(1,2,10,&UNK_013a0fce);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_01325eb3);
      uVar94 = func_0x04863f80(0,uVar54);
      *(undefined4 *)(param_1 + 0x7a4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012b2e3b);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x7a8] = bVar51;
      cVar50 = func_0x04865100(*param_2,&UNK_014a2163);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(*param_2,&UNK_014a2163);
        cVar50 = func_0x0b05abc0(param_1 + 0x7b0,&bStack_2d8,uVar54);
        if (cVar50 == '\0') {
          func_0x0bf04de0();
          return 0;
        }
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_012fdd0d);
      uVar94 = func_0x04863e00(uVar54,0x14);
      *(undefined4 *)(param_1 + 0x7f0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_01383b4e);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x7f4) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_012e5313);
      uVar94 = func_0x04863e00(uVar54,0x14);
      *(undefined4 *)(param_1 + 0x198) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011fb5e7);
      uVar94 = func_0x04863e00(uVar54,0x28);
      *(undefined4 *)(param_1 + 0x19c) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011fdacc);
      iVar52 = func_0x04863e00(uVar54,0xffffff4c);
      *(float *)(param_1 + 0x1a4) = (float)iVar52;
      uVar54 = func_0x048648e0(*param_2,&UNK_011e1f7f);
      iVar52 = func_0x04863e00(uVar54,0xb4);
      *(float *)(param_1 + 0x1a8) = (float)iVar52;
      uVar54 = func_0x048648e0(*param_2,&UNK_0136cf0b);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x1a0] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_011fdae9);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x1a1] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_012e731a);
      uVar94 = func_0x04863e00(uVar54,1);
      *(undefined4 *)(param_1 + 0x1ac) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0143da31);
      uVar94 = func_0x04863e00(uVar54,2);
      *(undefined4 *)(param_1 + 0x1b0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_011e1f9c);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x1b8) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0144b447);
      bVar51 = func_0x04863ff0(uVar54,0);
      param_1[0x1bc] = bVar51;
      uVar54 = func_0x048648e0(*param_2,&UNK_013a1027);
      uVar94 = func_0x04863f80(uVar54);
      *(undefined4 *)(param_1 + 0x1c0) = uVar94;
      uVar54 = func_0x048648e0(*param_2,&UNK_0146eb08);
      func_0x0bf0da90(uVar54,param_1 + 0x1c8,0);
      uVar54 = func_0x048648e0(*param_2,&UNK_012b2e52);
      func_0x0bf0da90(uVar54,param_1 + 0x228,0);
      uVar54 = func_0x048648e0(*param_2,&UNK_01350a4c);
      cVar50 = func_0x04864270(uVar54);
      if (cVar50 != '\0') {
        func_0x04865530(&puStack_d8,uVar54);
        func_0x048655b0(apuStack_168,uVar54);
        pbStack_178 = param_1 + 0x770;
        puVar93 = (undefined8 *)auStack_208;
        while( true ) {
          cVar50 = func_0x04862c80(&puStack_d8,apuStack_168);
          if (cVar50 != '\0') break;
          uVar54 = func_0x04862b80(&puStack_d8);
          uStack_158 = (ulong **)_DAT_014ea1c0;
          uStack_150 = (undefined8 **)0x0;
          uStack_140 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_138 = 0;
          uStack_130 = 0;
          ppuStack_148 = (undefined8 **)&UNK_0f299f40;
          fStack_108 = -1.0;
          uStack_104 = 1;
          iStack_100 = 0xffffffff;
          puStack_f8 = (ulong *)0x0;
          puStack_f0 = (ulong *)0x0;
          puStack_e8 = (ulong *)0x0;
          uStack_e0 = 0x266;
          uVar64 = func_0x048648e0(uVar54,&UNK_01350a5b);
          uVar94 = func_0x04863f80(uVar64);
          uStack_158 = (ulong **)CONCAT44(uStack_158._4_4_,uVar94);
          uVar64 = func_0x048648e0(uVar54,&UNK_012ffbe8);
          fVar95 = (float)func_0x04863f80(uVar64);
          uStack_158 = (ulong **)CONCAT44(fVar95,(float)uStack_158);
          fVar96 = (float)uStack_158;
          if ((float)uStack_158 < 0.0) {
            func_0x05896f50(1,2,0x11,&UNK_011c8e5b);
            uStack_158 = (ulong **)CONCAT44(uStack_158._4_4_,0x3f800000);
            fVar96 = _DAT_011983f0;
            fVar95 = uStack_158._4_4_;
          }
          if (fVar95 < 0.0) {
            func_0x05896f50(1,2,0x11,&UNK_012672d7);
            uStack_158 = (ulong **)CONCAT44(0x44000000,(float)uStack_158);
            fVar95 = _DAT_01198580;
            fVar96 = (float)uStack_158;
          }
          if (fVar95 < fVar96) {
            func_0x056660c0(1,2,0x11,&UNK_01222c63);
            uStack_158 = (ulong **)CONCAT44((int)uStack_158,(int)((ulong)uStack_158 >> 0x20));
          }
          uVar64 = func_0x048648e0(uVar54,&UNK_011ed250);
          fVar95 = (float)func_0x04863f80(uVar64);
          uStack_150 = (undefined8 **)CONCAT44(uStack_150._4_4_,(int)(fVar95 * _DAT_011987c0));
          uVar64 = func_0x048648e0(uVar54,&UNK_0123ca5a);
          uVar94 = func_0x04863f80(uVar64);
          uStack_150 = (undefined8 **)CONCAT44(uVar94,(undefined4)uStack_150);
          puStack_c8 = _DAT_01e7b1bc;
          uStack_c0 = _UNK_01e7b1c4;
          uVar64 = func_0x048648e0(uVar54,&UNK_013eea4f);
          uStack_104 = func_0x04863ff0(uVar64,1);
          uVar64 = func_0x048648e0(uVar54,&UNK_013d4cc8);
          func_0x0ee1c110(uVar64,&puStack_c8,1);
          fVar95 = 0.0;
          if (0.0 <= (float)uStack_c0) {
            fVar95 = (float)uStack_c0;
          }
          fVar96 = _DAT_011983f0;
          if (fVar95 <= _DAT_011983f0) {
            fVar96 = fVar95;
          }
          fVar95 = 0.0;
          if (0.0 <= uStack_c0._4_4_) {
            fVar95 = uStack_c0._4_4_;
          }
          fVar20 = _DAT_011983f0;
          if (fVar95 <= _DAT_011983f0) {
            fVar20 = fVar95;
          }
          auVar98._8_8_ = 0;
          auVar98._0_8_ = puStack_c8;
          auVar118 = maxps(ZEXT416(0),auVar98);
          auVar118 = minps(_DAT_014e5300,auVar118);
          iStack_100 = (int)(auVar118._4_4_ * _UNK_014ea904) * 0x100 +
                       (int)(auVar118._0_4_ * _DAT_014ea900) * 0x10000 +
                       (int)(fVar20 * _DAT_011989ec) * 0x1000000 + (int)(fVar96 * _DAT_011989ec);
          cVar50 = func_0x04865100(uVar54,&UNK_01340d28);
          if (cVar50 != '\0') {
            uVar64 = func_0x048648e0(uVar54,&UNK_01340d28);
            cVar50 = func_0x0b05abc0(&ppuStack_148,&bStack_2d8,uVar64);
            puVar75 = puStack_f8;
            if (cVar50 == '\0') {
              puVar69 = puStack_f0;
              if (puStack_f8 != (ulong *)0x0) {
                for (; puVar75 != puVar69; puVar69 = puVar69 + -0x1a) {
                  if ((puVar69[-3] & 1) != 0) {
                    func_0x0412a280(puVar69[-1],puVar69[-3] & 0xfffffffffffffffe);
                  }
                  func_0x04a3a0b0(puVar69 + -0x16);
                }
                puStack_f0 = puVar75;
                func_0x0412a280(puStack_f8,(long)puStack_e8 - (long)puStack_f8);
              }
              func_0x049d2400(&ppuStack_148);
              func_0x04862b40(apuStack_168);
              func_0x04862b40(&puStack_d8);
              return 0;
            }
          }
          uVar64 = func_0x048648e0(uVar54,&UNK_014221bf);
          auVar42._14_2_ = 0;
          auVar42._0_14_ = stack0xfffffffffffffdfa;
          _auStack_208 = auVar42 << 0x10;
          func_0x04863cb0(&bStack_2d8,uVar64,puVar93);
          uStack_e0 = func_0x0c635490(&bStack_2d8);
          if ((bStack_2d8 & 1) != 0) {
            func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))
                                    ),
                            CONCAT26(auStack_2d7._5_2_,
                                     CONCAT15(auStack_2d7[4],
                                              CONCAT14(auStack_2d7[3],
                                                       CONCAT22(auStack_2d7._1_2_,
                                                                CONCAT11(auStack_2d7[0],bStack_2d8))
                                                      ))) & 0xfffffffffffffffe);
          }
          if ((auStack_208[0] & 1) != 0) {
            func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
          }
          uVar64 = func_0x048648e0(uVar54,&UNK_0119ed3b);
          func_0x04865530(auStack_60,uVar64);
          func_0x048655b0(auStack_50,uVar64);
          fVar95 = 0.0;
          while( true ) {
            cVar50 = func_0x04862c80(auStack_60,auStack_50);
            if (cVar50 != '\0') break;
            uVar64 = func_0x04862b80(auStack_60);
            bStack_2d8 = 1;
            auStack_2d7[0] = '\0';
            auStack_2d7._1_2_ = 0;
            auStack_2d7[3] = 0;
            auStack_2d7[4] = 0;
            auStack_2d7._5_2_ = 0;
            uStack_2d0._0_2_ = 0;
            uStack_2d0._2_2_ = 0x3f80;
            iStack_2cc = 0;
            iStack_2c8 = 0;
            bStack_2c4 = 0;
            cStack_2c3 = 0;
            sStack_2c2 = 0;
            bStack_2c0 = 0;
            uStack_2bf = 0;
            uStack_2be = 0;
            auStack_248 = (undefined1  [16])0x0;
            auStack_258 = (undefined1  [16])0x0;
            auStack_268 = (undefined1  [16])0x0;
            _auStack_278 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            bStack_298 = 0;
            uStack_297 = 0;
            bStack_290 = 0;
            uStack_28f = 0;
            uStack_28b = 0;
            uStack_28a = 0;
            bStack_2a8 = 0;
            uStack_2a7 = 0;
            uStack_2a0 = 0;
            uStack_29c = 0;
            uStack_2b8._0_4_ = 0;
            uStack_2b8._4_4_ = 0;
            uStack_2b0 = 0;
            uStack_2ac = 0;
            uStack_238 = 0;
            uStack_230 = 0x1ffffffff;
            iStack_228 = 0x266;
            auStack_220 = (undefined1  [16])0x0;
            puStack_210 = (ulong *)0x0;
            uVar65 = func_0x048648e0(uVar64,&UNK_0147c3bf);
            auStack_2f8[0] = CONCAT26(auStack_2f8[0]._6_2_,0x656e696c08);
            func_0x04863cb0(puVar93,uVar65,auStack_2f8);
            if ((auStack_208[0] & 1) == 0) {
              puVar75 = (ulong *)(ulong)(auStack_208[0] >> 1);
              if (puVar75 != (ulong *)0x4) goto LAB_0bf02130;
LAB_0bf02621:
              puVar75 = (ulong *)(auStack_208 + 1);
              if ((auStack_208[0] & 1) != 0) {
                puVar75 = puStack_1f8;
              }
              bStack_2d8 = ((int)*puVar75 != _DAT_013dd1f7) + 1;
            }
            else {
              puVar75 = puStack_200;
              if (puStack_200 == (ulong *)0x4) goto LAB_0bf02621;
LAB_0bf02130:
              bStack_2d8 = 2;
              if (puVar75 == (ulong *)0x6) {
                puVar75 = (ulong *)(auStack_208 + 1);
                if ((auStack_208[0] & 1) != 0) {
                  puVar75 = puStack_1f8;
                }
                bStack_2d8 = (*(short *)((long)puVar75 + 4) != _DAT_01350668 ||
                             (int)*puVar75 != _DAT_01350664) * '\x02';
              }
            }
            auStack_2d7._1_2_ = 0;
            auStack_2d7[0] = '\0';
            if ((auStack_208[0] & 1) != 0) {
              auStack_2d7._1_2_ = 0;
              auStack_2d7[0] = '\0';
              func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
            }
            if ((auStack_2f8[0] & 1) != 0) {
              func_0x0412a280(uStack_2e8,auStack_2f8[0] & 0xfffffffffffffffe);
            }
            uVar65 = func_0x048648e0(uVar64,&UNK_0146eb1c);
            fVar96 = (float)func_0x04863f80(0,uVar65);
            iStack_2cc = (int)(fVar96 * _DAT_011987c0);
            uVar65 = func_0x048648e0(uVar64,&UNK_011c8e9a);
            fVar96 = (float)func_0x04863f80(uVar65);
            iStack_2c8 = (int)(fVar96 * _DAT_011987c0);
            uVar65 = func_0x048648e0(uVar64,&UNK_014d94ef);
            uVar94 = func_0x04863e00(uVar65,1);
            uStack_230 = CONCAT44(uVar94,(undefined4)uStack_230);
            uVar65 = func_0x048648e0(uVar64,&UNK_013264d5);
            auStack_b0[0] = auStack_b0[0] & 0xffffffffffff0000;
            puVar75 = auStack_2f8;
            func_0x04863cb0(puVar75,uVar65,auStack_b0);
            func_0x0b04cfb0(puVar93,puVar75);
            func_0x0b04d350(&uStack_2b8,puVar93);
            if ((bStack_1a0 & 1) == 0) {
              if ((bStack_1c0 & 1) != 0) goto LAB_0bf02687;
LAB_0bf02284:
              if ((bStack_1d8 & 1) != 0) goto LAB_0bf026ae;
LAB_0bf02292:
              if (((ulong)puStack_1f0 & 1) != 0) goto LAB_0bf026d5;
LAB_0bf022a0:
            }
            else {
              func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
              if ((bStack_1c0 & 1) == 0) goto LAB_0bf02284;
LAB_0bf02687:
              func_0x0412a280(uStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
              if ((bStack_1d8 & 1) == 0) goto LAB_0bf02292;
LAB_0bf026ae:
              func_0x0412a280(uStack_1c8,CONCAT71(uStack_1d7,bStack_1d8) & 0xfffffffffffffffe);
              if (((ulong)puStack_1f0 & 1) == 0) goto LAB_0bf022a0;
LAB_0bf026d5:
              func_0x0412a280(uStack_1e0,(ulong)puStack_1f0 & 0xfffffffffffffffe);
            }
            if ((auStack_208[0] & 1) != 0) {
              func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
            }
            if ((auStack_2f8[0] & 1) != 0) {
              func_0x0412a280(uStack_2e8,auStack_2f8[0] & 0xfffffffffffffffe);
            }
            if ((auStack_b0[0] & 1) != 0) {
              func_0x0412a280(uStack_a0,auStack_b0[0] & 0xfffffffffffffffe);
            }
            uVar65 = func_0x048648e0(uVar64,&UNK_01385f9e);
            fVar96 = (float)func_0x04863f80(uVar65);
            uStack_230 = CONCAT44(uStack_230._4_4_,(int)(fVar96 * _DAT_011987c0));
            uVar65 = func_0x048648e0(uVar64,&UNK_01492c33);
            uVar94 = func_0x04863f80(_DAT_011983f0,uVar65);
            uStack_2d0._0_2_ = (undefined2)uVar94;
            uStack_2d0._2_2_ = (short)((uint)uVar94 >> 0x10);
            uVar65 = func_0x048648e0(uVar64,&DAT_0142cb75);
            auStack_2f8[0] = CONCAT26(auStack_2f8[0]._6_2_,0x666c657308);
            func_0x04863cb0(puVar93,uVar65,auStack_2f8);
            if ((auStack_208[0] & 1) == 0) {
              puVar69 = (ulong *)(ulong)(auStack_208[0] >> 1);
              if (puVar69 != (ulong *)0x4) goto LAB_0bf02386;
LAB_0bf02761:
              puVar69 = (ulong *)(auStack_208 + 1);
              if ((auStack_208[0] & 1) != 0) {
                puVar69 = puStack_1f8;
              }
              auStack_2d7[3] = ((int)*puVar69 != _DAT_011a145b) * '\x02';
            }
            else {
              puVar69 = puStack_200;
              if (puStack_200 == (ulong *)0x4) goto LAB_0bf02761;
LAB_0bf02386:
              auStack_2d7[3] = 2;
              if (puVar69 == (ulong *)0x6) {
                puVar69 = (ulong *)(auStack_208 + 1);
                if ((auStack_208[0] & 1) != 0) {
                  puVar69 = puStack_1f8;
                }
                auStack_2d7[3] =
                     (*(short *)((long)puVar69 + 4) != _DAT_0142cb79 ||
                     (int)*puVar69 != _DAT_0142cb75) + 1;
              }
            }
            auStack_2d7._5_2_ = 0;
            auStack_2d7[4] = '\0';
            if ((auStack_208[0] & 1) != 0) {
              auStack_2d7._5_2_ = 0;
              auStack_2d7[4] = '\0';
              func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
            }
            if ((auStack_2f8[0] & 1) != 0) {
              func_0x0412a280(uStack_2e8,auStack_2f8[0] & 0xfffffffffffffffe);
            }
            uVar65 = func_0x048648e0(uVar64,&UNK_01217a04);
            uVar94 = func_0x04863e00(uVar65,0);
            bStack_2c4 = (byte)uVar94;
            cStack_2c3 = (char)((uint)uVar94 >> 8);
            sStack_2c2 = (short)((uint)uVar94 >> 0x10);
            uVar65 = func_0x048648e0(uVar64,&UNK_01217a0f);
            uVar94 = func_0x04863f80(0,uVar65);
            bStack_2c0 = (byte)uVar94;
            uStack_2bf = (undefined1)((uint)uVar94 >> 8);
            uStack_2be = (undefined2)((uint)uVar94 >> 0x10);
            uVar65 = func_0x048648e0(uVar64,&UNK_01483087);
            auStack_2f8[0] = auStack_2f8[0] & 0xffffffffffff0000;
            func_0x04863cb0(puVar93,uVar65,auStack_2f8);
            iStack_228 = func_0x0c635490(puVar93);
            if ((auStack_208[0] & 1) != 0) {
              func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
            }
            if ((auStack_2f8[0] & 1) != 0) {
              func_0x0412a280(uStack_2e8,auStack_2f8[0] & 0xfffffffffffffffe);
            }
            uVar64 = func_0x048648e0(uVar64,&UNK_0143da40);
            auStack_2f8[0] = auStack_2f8[0] & 0xffffffffffff0000;
            func_0x04863cb0(puVar93,uVar64,auStack_2f8);
            if ((auStack_220[0] & 1) != 0) {
              func_0x0412a280(puStack_210,auStack_220._0_8_ & 0xfffffffffffffffe);
            }
            puStack_210 = puStack_1f8;
            auStack_220 = _auStack_208;
            auVar43._14_2_ = 0;
            auVar43._0_14_ = stack0xfffffffffffffdfa;
            _auStack_208 = auVar43 << 0x10;
            if ((auStack_2f8[0] & 1) != 0) {
              func_0x0412a280(uStack_2e8,auStack_2f8[0] & 0xfffffffffffffffe);
            }
            puVar69 = puStack_f0;
            fVar95 = fVar95 + (float)iStack_2cc;
            if (1 < uStack_230._4_4_) {
              fVar95 = fVar95 + (float)((uStack_230._4_4_ + -1) * iStack_2c8);
            }
            puVar74 = puStack_f8;
            if ((CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)) != 2) &&
               (CONCAT22(auStack_2d7._5_2_,CONCAT11(auStack_2d7[4],auStack_2d7[3])) != 2)) {
              if (puStack_f0 < puStack_e8) {
                *(ulong *)((long)puStack_f0 + 0xc) = CONCAT44(iStack_2c8,iStack_2cc);
                *(ulong *)((long)puStack_f0 + 0x14) =
                     CONCAT26(uStack_2be,
                              CONCAT15(uStack_2bf,
                                       CONCAT14(bStack_2c0,
                                                CONCAT22(sStack_2c2,CONCAT11(cStack_2c3,bStack_2c4))
                                               )));
                *puStack_f0 = CONCAT26(auStack_2d7._5_2_,
                                       CONCAT15(auStack_2d7[4],
                                                CONCAT14(auStack_2d7[3],
                                                         CONCAT22(auStack_2d7._1_2_,
                                                                  CONCAT11(auStack_2d7[0],bStack_2d8
                                                                          )))));
                puStack_f0[1] =
                     CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
                func_0x0b04c660(puStack_f0 + 4,&uStack_2b8);
                *(int *)(puVar69 + 0x16) = iStack_228;
                puVar69[0x15] = uStack_230;
                if ((auStack_220[0] & 1) == 0) {
                  puVar69[0x19] = (ulong)puStack_210;
                  puVar69[0x17] = auStack_220._0_8_;
                  puVar69[0x18] = auStack_220._8_8_;
                }
                else {
                  func_0x0412e5e0(puVar69 + 0x17,puStack_210,auStack_220._8_8_);
                }
                puVar74 = puStack_f8;
                puStack_f0 = puVar69 + 0x1a;
              }
              else {
                piVar55 = (int *)((long)puStack_f0 - (long)puStack_f8);
                auVar82 = (undefined1  [8])(((long)piVar55 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1);
                auVar59 = (undefined1  [8])&uStack_2b8;
                if ((undefined8 *)0x13b13b13b13b13b < (ulong)auVar82) goto LAB_0bf0435e;
                lVar56 = (long)puStack_e8 - (long)puStack_f8 >> 4;
                puVar86 = (undefined8 *)(lVar56 * -0x6276276276276276);
                if ((ulong)auVar82 < puVar86) {
                  auVar82 = (undefined1  [8])puVar86;
                }
                if (0x9d89d89d89d89c < (ulong)(lVar56 * 0x4ec4ec4ec4ec4ec5)) {
                  auVar82 = (undefined1  [8])0x13b13b13b13b13b;
                }
                ppuStack_1e8 = &puStack_f8;
                if (auVar82 == (undefined1  [8])0x0) {
                  lVar56 = 0;
                }
                else {
                  if ((undefined8 *)0x13b13b13b13b13b < (ulong)auVar82) {
                    FUN_04882eb0();
                    goto LAB_0bf04386;
                  }
                  lVar56 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)auVar82 * 0xd0);
                  if (lVar56 == 0) {
                    func_0x0eec74c0((long)auVar82 * 0xd0,0);
                    lVar56 = 0;
                  }
                }
                lVar61 = lVar56 + (long)piVar55;
                puStack_200 = (ulong *)lVar61;
                auStack_208 = (undefined1  [8])lVar56;
                puStack_1f0 = (ulong *)((long)auVar82 * 0xd0 + lVar56);
                puVar86 = (undefined8 *)(lVar56 + 0xc + (long)piVar55);
                *puVar86 = CONCAT44(iStack_2c8,iStack_2cc);
                puVar86[1] = CONCAT26(uStack_2be,
                                      CONCAT15(uStack_2bf,
                                               CONCAT14(bStack_2c0,
                                                        CONCAT22(sStack_2c2,
                                                                 CONCAT11(cStack_2c3,bStack_2c4)))))
                ;
                *(undefined8 *)(lVar56 + (long)piVar55) =
                     CONCAT26(auStack_2d7._5_2_,
                              CONCAT15(auStack_2d7[4],
                                       CONCAT14(auStack_2d7[3],
                                                CONCAT22(auStack_2d7._1_2_,
                                                         CONCAT11(auStack_2d7[0],bStack_2d8)))));
                ((undefined8 *)(lVar56 + (long)piVar55))[1] =
                     CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
                puStack_1f8 = (ulong *)lVar61;
                func_0x0b04c660(lVar56 + 0x20 + (long)piVar55,&uStack_2b8);
                *(int *)(lVar61 + 0xb0) = iStack_228;
                *(ulong *)(lVar61 + 0xa8) = uStack_230;
                if ((auStack_220[0] & 1) == 0) {
                  *(ulong **)(lVar61 + 200) = puStack_210;
                  *(undefined8 *)(lVar61 + 0xb8) = auStack_220._0_8_;
                  *(undefined8 *)(lVar61 + 0xc0) = auStack_220._8_8_;
                }
                else {
                  func_0x0412e5e0((undefined8 *)(lVar61 + 0xb8),puStack_210,auStack_220._8_8_);
                }
                puVar88 = (ulong *)((long)puStack_1f8 + 0xd0);
                puVar74 = (ulong *)((long)puStack_f8 + ((long)puStack_200 - (long)puStack_f0));
                puStack_1f8 = puVar88;
                func_0x056a8220(&puStack_f8,puStack_f8,puStack_f0,puVar74);
                puVar69 = puStack_e8;
                puVar75 = puStack_f8;
                puStack_e8 = puStack_1f0;
                puStack_f0 = puVar88;
                if (puStack_f8 != (ulong *)0x0) {
                  lVar56 = (long)puVar69 - (long)puStack_f8;
                  puStack_f8 = puVar74;
                  func_0x0412a280(puVar75,lVar56);
                  puVar74 = puStack_f8;
                  puStack_f0 = puVar88;
                }
              }
            }
            puStack_f8 = puVar74;
            if ((auStack_220[0] & 1) == 0) {
              if ((auStack_258[8] & 1) != 0) goto LAB_0bf02a13;
LAB_0bf029ba:
              if (((byte)puStack_270 & 1) != 0) goto LAB_0bf02a36;
LAB_0bf029c4:
            }
            else {
              func_0x0412a280(puStack_210,auStack_220._0_8_ & 0xfffffffffffffffe);
              if ((auStack_258[8] & 1) == 0) goto LAB_0bf029ba;
LAB_0bf02a13:
              func_0x0412a280(auStack_248._8_8_,auStack_258._8_8_ & 0xfffffffffffffffe);
              if (((byte)puStack_270 & 1) == 0) goto LAB_0bf029c4;
LAB_0bf02a36:
              func_0x0412a280(auStack_268._8_8_,(ulong)puStack_270 & 0xfffffffffffffffe);
            }
            if ((auStack_288[0] & 1) != 0) {
              func_0x0412a280(auStack_278,auStack_288._0_8_ & 0xfffffffffffffffe);
            }
            if ((uStack_2a0 & 1) != 0) {
              func_0x0412a280(CONCAT26(uStack_28a,
                                       CONCAT15(uStack_28b,CONCAT41(uStack_28f,bStack_290))),
                              CONCAT44(uStack_29c,uStack_2a0) & 0xfffffffffffffffe);
            }
            if (((uint)uStack_2b8 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_2a7,bStack_2a8),
                              CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8) & 0xfffffffffffffffe);
            }
            func_0x04862ba0(auStack_60);
          }
          func_0x04862b40(auStack_50);
          func_0x04862b40(auStack_60);
          uVar54 = func_0x048648e0(uVar54,&UNK_013d4cd7);
          fVar95 = (float)func_0x04863f80(fVar95 / _DAT_011987c0,uVar54);
          fStack_108 = (float)(int)(fVar95 * _DAT_011987c0);
          if (puStack_f0 != puStack_f8) {
            uVar79 = *(ulong *)(param_1 + 0x778);
            if (uVar79 < *(ulong *)(param_1 + 0x780)) {
              func_0x056a7af0(uVar79,&uStack_158);
              lVar61 = uVar79 + 0x80;
              *(long *)(param_1 + 0x778) = lVar61;
            }
            else {
              lVar56 = uVar79 - *(long *)pbStack_178;
              uVar79 = (lVar56 >> 7) + 1;
              if (0x1ffffffffffffff < uVar79) goto LAB_0bf043f7;
              uVar84 = *(ulong *)(param_1 + 0x780) - *(long *)pbStack_178;
              uVar90 = (long)uVar84 >> 6;
              if (uVar90 <= uVar79) {
                uVar90 = uVar79;
              }
              if (0x7fffffffffffff7f < uVar84) {
                uVar90 = 0x1ffffffffffffff;
              }
              uStack_2b8 = pbStack_178;
              if (uVar90 == 0) {
                lVar61 = 0;
              }
              else {
                if (0x1ffffffffffffff < uVar90) goto LAB_0bf044e9;
                lVar61 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar90 << 7);
                if (lVar61 == 0) {
                  func_0x0eec74c0(uVar90 << 7,0);
                  lVar61 = 0;
                }
              }
              bStack_2d8 = (byte)lVar61;
              auStack_2d7[0] = (char)((ulong)lVar61 >> 8);
              auStack_2d7._1_2_ = (undefined2)((ulong)lVar61 >> 0x10);
              auStack_2d7[3] = (byte)((ulong)lVar61 >> 0x20);
              auStack_2d7[4] = (char)((ulong)lVar61 >> 0x28);
              auStack_2d7._5_2_ = (undefined2)((ulong)lVar61 >> 0x30);
              lVar56 = lVar56 + lVar61;
              iStack_2c8 = (int)lVar56;
              bStack_2c4 = (byte)((ulong)lVar56 >> 0x20);
              cStack_2c3 = (char)((ulong)lVar56 >> 0x28);
              sStack_2c2 = (short)((ulong)lVar56 >> 0x30);
              uStack_2d0._0_2_ = (undefined2)lVar56;
              uStack_2d0._2_2_ = (short)((ulong)lVar56 >> 0x10);
              iStack_2cc = (int)((ulong)lVar56 >> 0x20);
              lVar61 = uVar90 * 0x80 + lVar61;
              bStack_2c0 = (byte)lVar61;
              uStack_2bf = (undefined1)((ulong)lVar61 >> 8);
              uStack_2be = (undefined2)((ulong)lVar61 >> 0x10);
              uStack_2bc = (undefined4)((ulong)lVar61 >> 0x20);
              func_0x056a7af0(lVar56,&uStack_158);
              lVar56 = CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))) +
                       0x80;
              iStack_2c8 = (int)lVar56;
              bStack_2c4 = (byte)((ulong)lVar56 >> 0x20);
              cStack_2c3 = (char)((ulong)lVar56 >> 0x28);
              sStack_2c2 = (short)((ulong)lVar56 >> 0x30);
              lVar56 = *(long *)(param_1 + 0x770);
              lVar61 = *(long *)(param_1 + 0x778);
              uVar79 = (lVar56 - lVar61) +
                       CONCAT44(iStack_2cc,CONCAT22(uStack_2d0._2_2_,(undefined2)uStack_2d0));
              puStack_200 = auStack_b0;
              auStack_208 = (undefined1  [8])pbStack_178;
              puStack_1f8 = auStack_2f8;
              puStack_1f0 = (ulong *)((ulong)puStack_1f0 & 0xffffffffffffff00);
              auStack_2f8[0] = uVar79;
              auStack_b0[0] = uVar79;
              for (lVar57 = lVar56; lVar57 != lVar61; lVar57 = lVar57 + 0x80) {
                func_0x056a7af0(auStack_2f8[0],lVar57);
                auStack_2f8[0] = auStack_2f8[0] + 0x80;
              }
              uVar90 = (ulong)puStack_1f0 >> 8;
              puStack_1f0 = (ulong *)CONCAT71((int7)uVar90,1);
              func_0x056a7930(pbStack_178,lVar56,lVar61);
              uVar54 = *(undefined8 *)(param_1 + 0x770);
              *(ulong *)(param_1 + 0x770) = uVar79;
              uStack_2d0._0_2_ = (undefined2)uVar54;
              uStack_2d0._2_2_ = (short)((ulong)uVar54 >> 0x10);
              iStack_2cc = (int)((ulong)uVar54 >> 0x20);
              uVar64 = *(undefined8 *)(param_1 + 0x780);
              uVar65 = CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
              lVar61 = CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
              iStack_2c8 = (int)uVar54;
              bStack_2c4 = (byte)((ulong)uVar54 >> 0x20);
              cStack_2c3 = (char)((ulong)uVar54 >> 0x28);
              sStack_2c2 = (short)((ulong)uVar54 >> 0x30);
              *(undefined8 *)(param_1 + 0x778) = uVar65;
              *(ulong *)(param_1 + 0x780) =
                   CONCAT44(uStack_2bc,CONCAT22(uStack_2be,CONCAT11(uStack_2bf,bStack_2c0)));
              bStack_2c0 = (byte)uVar64;
              uStack_2bf = (undefined1)((ulong)uVar64 >> 8);
              uStack_2be = (undefined2)((ulong)uVar64 >> 0x10);
              uStack_2bc = (undefined4)((ulong)uVar64 >> 0x20);
              bStack_2d8 = (byte)uVar54;
              auStack_2d7[0] = (char)((ulong)uVar54 >> 8);
              auStack_2d7._1_2_ = uStack_2d0._2_2_;
              auStack_2d7[3] = bStack_2c4;
              auStack_2d7[4] = cStack_2c3;
              auStack_2d7._5_2_ = sStack_2c2;
              func_0x056a8020(&bStack_2d8);
              lVar56 = CONCAT26(auStack_2d7._5_2_,
                                CONCAT15(auStack_2d7[4],
                                         CONCAT14(auStack_2d7[3],
                                                  CONCAT22(auStack_2d7._1_2_,
                                                           CONCAT11(auStack_2d7[0],bStack_2d8)))));
              if (lVar56 != 0) {
                func_0x0412a280(lVar56,CONCAT44(uStack_2bc,
                                                CONCAT22(uStack_2be,CONCAT11(uStack_2bf,bStack_2c0))
                                               ) - lVar56);
              }
            }
            *(long *)(param_1 + 0x778) = lVar61;
          }
          puVar69 = puStack_f8;
          puVar75 = puStack_f0;
          if (puStack_f8 != (ulong *)0x0) {
            for (; puVar69 != puVar75; puVar75 = puVar75 + -0x1a) {
              if ((puVar75[-3] & 1) != 0) {
                func_0x0412a280(puVar75[-1],puVar75[-3] & 0xfffffffffffffffe);
              }
              func_0x04a3a0b0(puVar75 + -0x16);
            }
            puStack_f0 = puVar69;
            func_0x0412a280(puStack_f8,(long)puStack_e8 - (long)puStack_f8);
          }
          func_0x049d2400(&ppuStack_148);
          func_0x04862ba0(&puStack_d8);
        }
        func_0x04862b40(apuStack_168);
        func_0x04862b40(&puStack_d8);
      }
      uVar54 = func_0x048648e0(*param_2,&UNK_01455fcf);
      cVar50 = func_0x04864270(uVar54);
      if (cVar50 == '\0') {
LAB_0bf03d3f:
        uVar54 = func_0x048648e0(*param_2,&UNK_0136cf26);
        cVar50 = func_0x04865490(uVar54);
        if (cVar50 != '\0') {
          bStack_2d8 = 0;
          auStack_2d7[0] = '\0';
          func_0x04863cb0(auStack_208,uVar54,&bStack_2d8);
          if ((bStack_2d8 & 1) != 0) {
            func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))
                                    ),
                            CONCAT26(auStack_2d7._5_2_,
                                     CONCAT15(auStack_2d7[4],
                                              CONCAT14(auStack_2d7[3],
                                                       CONCAT22(auStack_2d7._1_2_,
                                                                CONCAT11(auStack_2d7[0],bStack_2d8))
                                                      ))) & 0xfffffffffffffffe);
          }
          bVar51 = auStack_208[0] & 1;
          if (bVar51 == 0) {
            puVar75 = (ulong *)(ulong)(auStack_208[0] >> 1);
          }
          else {
            puVar75 = puStack_200;
          }
          if (puVar75 != (ulong *)0x0) {
            func_0x0b04cfb0(&bStack_2d8,auStack_208);
            func_0x0b04d350(param_1 + 0x9e8,&bStack_2d8);
            if (((byte)puStack_270 & 1) != 0) {
              func_0x0412a280(auStack_268._8_8_,(ulong)puStack_270 & 0xfffffffffffffffe);
            }
            if ((bStack_290 & 1) != 0) {
              func_0x0412a280(auStack_288._8_8_,
                              CONCAT26(uStack_28a,
                                       CONCAT15(uStack_28b,CONCAT41(uStack_28f,bStack_290))) &
                              0xfffffffffffffffe);
            }
            if ((bStack_2a8 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_297,bStack_298),
                              CONCAT71(uStack_2a7,bStack_2a8) & 0xfffffffffffffffe);
            }
            if ((bStack_2c0 & 1) != 0) {
              func_0x0412a280(CONCAT44(uStack_2ac,uStack_2b0),
                              CONCAT44(uStack_2bc,
                                       CONCAT22(uStack_2be,CONCAT11(uStack_2bf,bStack_2c0))) &
                              0xfffffffffffffffe);
            }
            if ((bStack_2d8 & 1) != 0) {
              func_0x0412a280(CONCAT26(sStack_2c2,
                                       CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                              CONCAT26(auStack_2d7._5_2_,
                                       CONCAT15(auStack_2d7[4],
                                                CONCAT14(auStack_2d7[3],
                                                         CONCAT22(auStack_2d7._1_2_,
                                                                  CONCAT11(auStack_2d7[0],bStack_2d8
                                                                          ))))) & 0xfffffffffffffffe
                             );
            }
            bVar51 = auStack_208[0] & 1;
          }
          if (bVar51 != 0) {
            func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
          }
        }
        uVar54 = func_0x048648e0(*param_2,&UNK_01267316);
        uVar94 = func_0x04863f80(uVar54);
        *(undefined4 *)(param_1 + 0xa70) = uVar94;
        uVar54 = func_0x048648e0(*param_2,&UNK_013eea5a);
        bVar51 = func_0x04863ff0(uVar54,0);
        param_1[0xa74] = bVar51;
        uVar54 = func_0x048648e0(*param_2,&UNK_012e7329);
        bVar51 = func_0x04863ff0(uVar54,0);
        param_1[0xa75] = bVar51;
        uVar54 = func_0x048648e0(*param_2,&UNK_0119dc14);
        uVar94 = func_0x04863e00(uVar54,0);
        *(undefined4 *)(param_1 + 0xa78) = uVar94;
        uVar54 = func_0x048648e0(*param_2,&UNK_01408388);
        bVar51 = func_0x04863ff0(uVar54,1);
        param_1[0xa7c] = bVar51;
        uVar54 = func_0x048648e0(*param_2,&UNK_0143da4d);
        bVar51 = func_0x04863ff0(uVar54,0);
        param_1[0xa7d] = bVar51;
        uVar54 = func_0x048648e0(*param_2,&UNK_011d7538);
        func_0x0bf0d730(uVar54,(int)*(short *)((long)param_2 + 0x3c),param_1 + 0xb40);
        uVar54 = func_0x048648e0(*param_2,&UNK_01217a21);
        func_0x0bf0da90(uVar54,param_1 + 0xa80,0);
        uVar54 = func_0x048648e0(*param_2,&UNK_012b2e67);
        func_0x0bf0da90(uVar54,param_1 + 0xae0,0);
        uVar54 = func_0x048648e0(*param_2,&UNK_012d798f);
        bVar51 = func_0x04863ff0(uVar54,0);
        param_1[0xb58] = bVar51;
        uVar54 = func_0x048648e0(*param_2,&UNK_0131a637);
        auVar45._14_2_ = 0;
        auVar45._0_14_ = stack0xfffffffffffffdfa;
        _auStack_208 = auVar45 << 0x10;
        func_0x04863cb0(&bStack_2d8,uVar54,auStack_208);
        if ((param_1[0xb60] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(param_1 + 0xb70),
                          *(ulong *)(param_1 + 0xb60) & 0xfffffffffffffffe);
        }
        *(ulong *)(param_1 + 0xb70) =
             CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8)));
        *(ulong *)(param_1 + 0xb60) =
             CONCAT26(auStack_2d7._5_2_,
                      CONCAT15(auStack_2d7[4],
                               CONCAT14(auStack_2d7[3],
                                        CONCAT22(auStack_2d7._1_2_,
                                                 CONCAT11(auStack_2d7[0],bStack_2d8)))));
        *(ulong *)(param_1 + 0xb68) = CONCAT44(iStack_2cc,uStack_2d0);
        bStack_2d8 = 0;
        auStack_2d7[0] = '\0';
        if ((auStack_208[0] & 1) != 0) {
          func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
        }
        uVar54 = func_0x048648e0(*param_2,&UNK_013dfd27);
        func_0x0b632a50(0,param_1 + 0xb78,uVar54);
        uVar54 = func_0x048648e0(*param_2,&UNK_0136cf3a);
        func_0x0bf0da90(uVar54,param_1 + 0xb80,0);
        uVar54 = func_0x048648e0(*param_2,&UNK_012e733d);
        func_0x0bf0da90(uVar54,param_1 + 0xbe0,0);
        uVar54 = func_0x048648e0(*param_2,&UNK_011ad924);
        uVar94 = func_0x04863f80(0,uVar54);
        *(undefined4 *)(param_1 + 0xc44) = uVar94;
        uVar54 = func_0x048648e0(*param_2,&UNK_0124de98);
        uVar94 = func_0x04863f80(0,uVar54);
        *(undefined4 *)(param_1 + 0xc48) = uVar94;
        uVar54 = func_0x048648e0(*param_2,&UNK_012322fe);
        func_0x04863f80(0,uVar54);
        *(undefined4 *)(param_1 + 0xc40) = extraout_XMM0_Da;
        return 1;
      }
      func_0x04865530(auStack_2f8,uVar54);
      func_0x048655b0(auStack_b0,uVar54);
      ppuVar68 = (ulong **)(param_1 + 0x7f8);
      ppuStack_68 = ppuVar68;
LAB_0bf02ea5:
      cVar50 = func_0x04862c80(auStack_2f8,auStack_b0);
      if (cVar50 != '\0') {
        func_0x04862b40(auStack_b0);
        func_0x04862b40(auStack_2f8);
        goto LAB_0bf03d3f;
      }
      uStack_170 = func_0x04862b80(auStack_2f8);
      bStack_2d8 = (byte)_DAT_014ea1c0;
      auStack_2d7[0] = (char)((ulong)_DAT_014ea1c0 >> 8);
      auStack_2d7._1_2_ = (undefined2)((ulong)_DAT_014ea1c0 >> 0x10);
      auStack_2d7[3] = (byte)((ulong)_DAT_014ea1c0 >> 0x20);
      auStack_2d7[4] = (char)((ulong)_DAT_014ea1c0 >> 0x28);
      auStack_2d7._5_2_ = (undefined2)((ulong)_DAT_014ea1c0 >> 0x30);
      uStack_2d0._0_2_ = 0;
      uStack_2d0._2_2_ = 0;
      iStack_2cc = 0;
      iStack_2c8 = 0;
      bStack_2c4 = 1;
      cStack_2c3 = 1;
      bStack_2c0 = 0xff;
      uStack_2bf = 0xff;
      uStack_2be = 0xffff;
      uStack_2b0 = 0;
      auStack_288 = ZEXT816(0);
      bStack_298 = 0;
      uStack_297 = 0;
      bStack_290 = 0;
      uStack_28f = 0;
      uStack_28b = 0;
      uStack_28a = 0;
      bStack_2a8 = 0;
      uStack_2a7 = 0;
      uStack_2a0 = 0;
      uStack_29c = 0;
      uStack_2b8._0_4_ = 0xf299f40;
      uStack_2b8._4_4_ = 0;
      auStack_278._0_4_ = 0x266;
      puStack_270 = (ulong *)0x0;
      auStack_268 = ZEXT816(0);
      uVar54 = func_0x048648e0(uStack_170,&UNK_01350a5b);
      uVar94 = func_0x04863f80(uVar54);
      bStack_2d8 = (byte)uVar94;
      auStack_2d7[0] = (char)((uint)uVar94 >> 8);
      auStack_2d7._1_2_ = (undefined2)((uint)uVar94 >> 0x10);
      uVar54 = func_0x048648e0(uStack_170,&UNK_012ffbe8);
      fVar96 = (float)func_0x04863f80(uVar54);
      auStack_2d7[3] = SUB41(fVar96,0);
      auStack_2d7[4] = (char)((uint)fVar96 >> 8);
      auStack_2d7._5_2_ = (undefined2)((uint)fVar96 >> 0x10);
      fVar95 = (float)CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8));
      if (fVar95 < 0.0) {
        func_0x05896f50(1,2,0x11,&UNK_011c8e5b);
        bStack_2d8 = 0;
        auStack_2d7[0] = '\0';
        auStack_2d7._1_2_ = 0x3f80;
        fVar96 = (float)CONCAT22(auStack_2d7._5_2_,CONCAT11(auStack_2d7[4],auStack_2d7[3]));
        fVar95 = _DAT_011983f0;
      }
      if (fVar96 < 0.0) {
        func_0x05896f50(1,2,0x11,&UNK_012672d7);
        auStack_2d7[3] = 0;
        auStack_2d7[4] = '\0';
        auStack_2d7._5_2_ = 0x4400;
        fVar95 = (float)CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8));
        fVar96 = _DAT_01198580;
      }
      if (fVar96 < fVar95) {
        func_0x056660c0(1,2,0x11,&UNK_01222c63);
        uVar31 = auStack_2d7._1_2_;
        cVar50 = auStack_2d7[0];
        bVar51 = bStack_2d8;
        bStack_2d8 = auStack_2d7[3];
        auStack_2d7[0] = auStack_2d7[4];
        auStack_2d7._1_2_ = auStack_2d7._5_2_;
        auStack_2d7[3] = bVar51;
        auStack_2d7[4] = cVar50;
        auStack_2d7._5_2_ = uVar31;
      }
      uVar54 = func_0x048648e0(uStack_170,&UNK_011ed250);
      fVar95 = (float)func_0x04863f80(uVar54);
      uStack_2d0 = (int)(fVar95 * _DAT_011987c0);
      uVar54 = func_0x048648e0(uStack_170,&UNK_0123ca5a);
      iStack_2c8 = func_0x04863f80(uVar54);
      uVar54 = func_0x048648e0(uStack_170,&UNK_014bdd63);
      cStack_2c3 = func_0x04863ff0(uVar54,1);
      puStack_d8 = _DAT_01e7b1bc;
      uStack_d0 = _UNK_01e7b1c4;
      uVar54 = func_0x048648e0(uStack_170,&UNK_013eea4f);
      bStack_2c4 = func_0x04863ff0(uVar54,1);
      uVar54 = func_0x048648e0(uStack_170,&UNK_013d4cc8);
      func_0x0ee1c110(uVar54,&puStack_d8,1);
      fVar95 = 0.0;
      if (0.0 <= (float)uStack_d0) {
        fVar95 = (float)uStack_d0;
      }
      fVar96 = _DAT_011983f0;
      if (fVar95 <= _DAT_011983f0) {
        fVar96 = fVar95;
      }
      fVar95 = 0.0;
      if (0.0 <= uStack_d0._4_4_) {
        fVar95 = uStack_d0._4_4_;
      }
      fVar20 = _DAT_011983f0;
      if (fVar95 <= _DAT_011983f0) {
        fVar20 = fVar95;
      }
      auVar99._8_8_ = 0;
      auVar99._0_8_ = puStack_d8;
      auVar118 = maxps(ZEXT416(0),auVar99);
      auVar118 = minps(_DAT_014e5300,auVar118);
      iVar52 = (int)(auVar118._4_4_ * _UNK_014ea904) * 0x100 +
               (int)(auVar118._0_4_ * _DAT_014ea900) * 0x10000 +
               (int)(fVar20 * _DAT_011989ec) * 0x1000000 + (int)(fVar96 * _DAT_011989ec);
      bStack_2c0 = (byte)iVar52;
      uStack_2bf = (undefined1)((uint)iVar52 >> 8);
      uStack_2be = (undefined2)((uint)iVar52 >> 0x10);
      uVar54 = func_0x048648e0(uStack_170,&UNK_014221bf);
      uStack_158 = (ulong **)((ulong)uStack_158 & 0xffffffffffff0000);
      func_0x04863cb0(auStack_208,uVar54,&uStack_158);
      uVar94 = func_0x0c635490(auStack_208);
      auStack_278._0_4_ = uVar94;
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_158 & 1) != 0) {
        func_0x0412a280(ppuStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
      }
      cVar50 = func_0x04865100(uStack_170,&UNK_01340d28);
      if (cVar50 != '\0') {
        uVar54 = func_0x048648e0(uStack_170,&UNK_01340d28);
        cVar50 = func_0x0b05abc0(&uStack_2b8,auStack_208,uVar54);
        if (cVar50 == '\0') {
          puVar75 = puStack_270;
          if (puStack_270 != (ulong *)0x0) {
            lVar56 = auStack_268._0_8_;
            if (puStack_270 != (ulong *)auStack_268._0_8_) {
              do {
                if ((*(byte *)(lVar56 + -0x20) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar56 + -0x10),
                                  *(ulong *)(lVar56 + -0x20) & 0xfffffffffffffffe);
                }
                lVar56 = lVar56 + -0x28;
              } while ((ulong *)lVar56 != puVar75);
            }
            auStack_268._0_8_ = puVar75;
            func_0x0412a280(puStack_270,auStack_268._8_8_ - (long)puStack_270);
          }
          func_0x049d2400(&uStack_2b8);
          func_0x04862b40(auStack_b0);
          func_0x04862b40(auStack_2f8);
          return 0;
        }
      }
      uVar54 = uStack_170;
      uVar64 = func_0x048648e0(uStack_170,&UNK_0119ed3b);
      func_0x04865530(apuStack_168,uVar64);
      func_0x048655b0(&puStack_c8,uVar64);
      fVar95 = 0.0;
LAB_0bf032f9:
      cVar50 = func_0x04862c80(apuStack_168,&puStack_c8);
      if (cVar50 != '\0') goto LAB_0bf037a0;
      uVar64 = func_0x04862b80(apuStack_168);
      uVar65 = func_0x048648e0(uVar64,&UNK_0146eb1c);
      fVar96 = (float)func_0x04863f80(0,uVar65);
      pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,fVar96 * _DAT_011987c0);
      uVar65 = func_0x048648e0(uVar64,&UNK_01410553);
      uStack_158 = (ulong **)((ulong)uStack_158 & 0xffffffffffff0000);
      func_0x04863cb0(auStack_208,uVar65,&uStack_158);
      puVar69 = puStack_1f8;
      auVar118 = _auStack_208;
      auVar82 = auStack_208;
      puVar75 = puStack_200;
      auVar44._14_2_ = 0;
      auVar44._0_14_ = stack0xfffffffffffffdfa;
      _auStack_208 = auVar44 << 0x10;
      if (((ulong)uStack_158 & 1) != 0) {
        func_0x0412a280(ppuStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
      }
      uVar64 = func_0x048648e0(uVar64,&UNK_01483087);
      uStack_158 = (ulong **)((ulong)uStack_158 & 0xffffffffffff0000);
      func_0x04863cb0(auStack_208,uVar64,&uStack_158);
      iVar52 = func_0x0c635490(auStack_208);
      if ((auStack_208[0] & 1) != 0) {
        func_0x0412a280(puStack_1f8,(ulong)auStack_208 & 0xfffffffffffffffe);
      }
      piStack_2e0 = (int *)puVar75;
      if (((ulong)uStack_158 & 1) != 0) {
        func_0x0412a280(ppuStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
      }
      iVar53 = (int)pbStack_178._0_4_;
      piVar55 = (int *)auStack_268._0_8_;
      if ((ulong)auStack_268._0_8_ < (ulong)auStack_268._8_8_) {
        *(int *)auStack_268._0_8_ = iVar53;
        pbStack_178 = (byte *)(CONCAT71(pbStack_178._1_7_,auVar118[0]) & 0xffffffffffffff01);
        if (((ulong)auVar82 & 1) == 0) {
          *(undefined1 (*) [8])(auStack_268._0_8_ + 8) = auVar82;
          *(int **)(auStack_268._0_8_ + 0x10) = piStack_2e0;
          *(ulong **)(auStack_268._0_8_ + 0x18) = puVar69;
        }
        else {
          func_0x0412e5e0((int *)(auStack_268._0_8_ + 8),puVar69,piStack_2e0);
        }
        *(int *)((undefined8)piVar55 + 8) = iVar52;
        auStack_268._0_8_ = (int *)((undefined8)piVar55 + 10);
joined_r0x0bf0359e:
        if ((char)pbStack_178 != '\0') {
          func_0x0412a280(puVar69,(ulong)auVar82 & 0xfffffffffffffffe);
        }
        fVar95 = fVar95 + (float)iVar53;
        func_0x04862ba0(apuStack_168);
        goto LAB_0bf032f9;
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,iVar52);
      puVar74 = puStack_270;
      puVar93 = (undefined8 *)(auStack_268._0_8_ - (long)puStack_270);
      puVar75 = (ulong *)(((long)puVar93 >> 3) * -0x3333333333333333 + 1);
      if (puVar75 < (ulong *)0x666666666666667) {
        lStack_98 = CONCAT44(lStack_98._4_4_,iVar53);
        lVar56 = auStack_268._8_8_ - (long)puStack_270 >> 3;
        puVar88 = (ulong *)(lVar56 * -0x6666666666666666);
        if (puVar75 < puVar88) {
          puVar75 = puVar88;
        }
        if (0x333333333333332 < (ulong)(lVar56 * -0x3333333333333333)) {
          puVar75 = (ulong *)0x666666666666666;
        }
        ppuStack_1e8 = (ulong **)(auStack_278 + 8);
        if (puVar75 == (ulong *)0x0) {
          lVar56 = 0;
        }
        else {
          if ((ulong *)0x666666666666666 < puVar75) goto LAB_0bf04359;
          lVar56 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar75 * 0x28);
          if (lVar56 == 0) {
            func_0x0eec74c0((long)puVar75 * 0x28,0);
            lVar56 = 0;
          }
        }
        puVar88 = (ulong *)(lVar56 + (long)puVar93);
        puStack_200 = puVar88;
        auStack_208 = (undefined1  [8])lVar56;
        puStack_1f0 = (ulong *)(lVar56 + (long)puVar75 * 0x28);
        *(int *)(lVar56 + (long)puVar93) = (int)lStack_98;
        puStack_90 = (undefined8 *)auVar82;
        pbStack_178 = (byte *)(CONCAT71(pbStack_178._1_7_,auVar118[0]) & 0xffffffffffffff01);
        puStack_1f8 = puVar88;
        if (((ulong)auVar82 & 1) == 0) {
          puVar88[1] = (ulong)auVar82;
          puVar88[2] = (ulong)piStack_2e0;
          puVar88[3] = (ulong)puVar69;
          puVar75 = puVar88;
        }
        else {
          func_0x0412e5e0((undefined1 *)((long)puVar93 + lVar56 + 8),puVar69,piStack_2e0);
          puVar93 = (undefined8 *)(auStack_268._0_8_ - (long)puStack_270);
          puVar74 = puStack_270;
          puVar75 = puStack_200;
          piVar55 = (int *)auStack_268._0_8_;
        }
        auVar82 = (undefined1  [8])puStack_90;
        uVar54 = uStack_170;
        puVar48 = puStack_1f8;
        lVar56 = (long)puVar75 - (long)puVar93;
        *(int *)(puVar88 + 4) = (int)uStack_88;
        if (puVar74 != (ulong *)piVar55) {
          lVar61 = 0;
          do {
            *(undefined4 *)(lVar56 + lVar61) = *(undefined4 *)((long)puVar74 + lVar61);
            *(undefined8 *)(lVar56 + 0x18 + lVar61) = *(undefined8 *)((long)puVar74 + lVar61 + 0x18)
            ;
            puVar93 = (undefined8 *)((long)puVar74 + lVar61 + 8);
            uVar64 = puVar93[1];
            puVar86 = (undefined8 *)(lVar56 + 8 + lVar61);
            *puVar86 = *puVar93;
            puVar86[1] = uVar64;
            *(undefined1 (*) [16])((long)puVar74 + lVar61 + 8) = (undefined1  [16])0x0;
            *(undefined8 *)((long)puVar74 + lVar61 + 0x18) = 0;
            *(undefined4 *)(lVar56 + 0x20 + lVar61) = *(undefined4 *)((long)puVar74 + lVar61 + 0x20)
            ;
            lVar57 = lVar61 + 0x28;
            lVar61 = lVar61 + 0x28;
          } while ((int *)((long)puVar74 + lVar57) != piVar55);
          do {
            if ((*(byte *)((long)puVar74 + 8) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)((long)puVar74 + 0x18),
                              *(ulong *)((long)puVar74 + 8) & 0xfffffffffffffffe);
            }
            puVar74 = (ulong *)((long)puVar74 + 0x28);
          } while (puVar74 != (ulong *)piVar55);
          puVar74 = puStack_270;
        }
        puStack_270 = (ulong *)lVar56;
        uVar64 = auStack_268._8_8_;
        auStack_268._8_8_ = puStack_1f0;
        if (puVar74 != (ulong *)0x0) {
          auStack_268._0_8_ = puVar48 + 5;
          func_0x0412a280(puVar74,uVar64 - (long)puVar74);
        }
        auStack_268._0_8_ = puVar48 + 5;
        iVar53 = (int)lStack_98;
        ppuVar68 = ppuStack_68;
        goto joined_r0x0bf0359e;
      }
      func_0x0b0cb480();
LAB_0bf04359:
      FUN_04882eb0();
      auVar59 = auVar82;
LAB_0bf0435e:
      func_0x056a7e10();
LAB_0bf04363:
      func_0x0eec74c0(auVar82,0);
LAB_0befec55:
      *(undefined1 *)auVar59 = 0;
      puVar76 = (undefined1 *)((long)puVar93 + 1);
      *(undefined1 (*) [8])(param_1 + 0x398) = auVar59;
      *(undefined1 **)(param_1 + 0x3a0) = puVar76;
      *(undefined1 **)(param_1 + 0x3a8) = (undefined1 *)((long)auVar82 + (long)puVar93);
      if (puVar75 != (ulong *)0x0) {
        func_0x0412a280(puVar75,piVar55);
      }
LAB_0befec89:
      *(undefined1 **)(param_1 + 0x3a0) = puVar76;
      plVar77 = *(long **)(param_1 + 0x3c0);
      if (plVar77 == (long *)0x0) break;
LAB_0befeca0:
      cVar50 = (**(code **)(*plVar77 + 0x78))();
      plVar77 = *(long **)(param_1 + 0x3c0);
      if (cVar50 != '\0') {
        (**(code **)(*plVar77 + 0x80))(&bStack_2d8);
        uVar54 = CONCAT26(auStack_2d7._5_2_,
                          CONCAT15(auStack_2d7[4],
                                   CONCAT14(auStack_2d7[3],
                                            CONCAT22(auStack_2d7._1_2_,
                                                     CONCAT11(auStack_2d7[0],bStack_2d8)))));
        bStack_2d8 = 0;
        auStack_2d7[0] = '\0';
        auStack_2d7._1_2_ = 0;
        auStack_2d7[3] = 0;
        auStack_2d7[4] = '\0';
        auStack_2d7._5_2_ = 0;
        plVar77 = *(long **)(param_1 + 0x3c0);
        *(undefined8 *)(param_1 + 0x3c0) = uVar54;
        if (plVar77 != (long *)0x0) {
          (**(code **)(*plVar77 + 0x90))();
          plVar77 = (long *)CONCAT26(auStack_2d7._5_2_,
                                     CONCAT15(auStack_2d7[4],
                                              CONCAT14(auStack_2d7[3],
                                                       CONCAT22(auStack_2d7._1_2_,
                                                                CONCAT11(auStack_2d7[0],bStack_2d8))
                                                      )));
          bStack_2d8 = 0;
          auStack_2d7[0] = '\0';
          auStack_2d7._1_2_ = 0;
          auStack_2d7[3] = 0;
          auStack_2d7[4] = '\0';
          auStack_2d7._5_2_ = 0;
          if (plVar77 != (long *)0x0) {
            (**(code **)(*plVar77 + 0x90))();
          }
        }
        plVar77 = *(long **)(param_1 + 0x3c0);
      }
    } while (plVar77 != (long *)0x0);
  } while( true );
LAB_0bf04386:
  FUN_04882eb0();
LAB_0bf0438b:
  func_0x053d85c0();
LAB_0bf04390:
  iVar52 = func_0x04108328(&DAT_0f6d0378);
  if (iVar52 != 0) {
    _DAT_0f6d0360 = (undefined1  [16])0x0;
    _DAT_0f6d0350 = (undefined1  [16])0x0;
    _DAT_0f6d0370 = 0x3f800000;
    func_0x0eee2f40(&SUB_05fa3960,&DAT_0f6d0350,0xf53dab8);
    FUN_0410844d(&DAT_0f6d0378);
  }
  goto LAB_0befdd53;
LAB_0bf037a0:
  func_0x04862b40(&puStack_c8);
  func_0x04862b40(apuStack_168);
  uVar54 = func_0x048648e0(uVar54,&UNK_013d4cd7);
  fVar95 = (float)func_0x04863f80(fVar95 / _DAT_011987c0,uVar54);
  iStack_2cc = (int)(fVar95 * _DAT_011987c0);
  puVar93 = *(undefined8 **)(param_1 + 0x800);
  if (puVar93 < *(undefined8 **)(param_1 + 0x808)) {
    *(ulong *)((long)puVar93 + 0xc) = CONCAT44(iStack_2c8,iStack_2cc);
    *(ulong *)((long)puVar93 + 0x14) =
         CONCAT26(uStack_2be,
                  CONCAT15(uStack_2bf,
                           CONCAT14(bStack_2c0,CONCAT22(sStack_2c2,CONCAT11(cStack_2c3,bStack_2c4)))
                          ));
    *puVar93 = CONCAT26(auStack_2d7._5_2_,
                        CONCAT15(auStack_2d7[4],
                                 CONCAT14(auStack_2d7[3],
                                          CONCAT22(auStack_2d7._1_2_,
                                                   CONCAT11(auStack_2d7[0],bStack_2d8)))));
    puVar93[1] = CONCAT44(iStack_2cc,uStack_2d0);
    func_0x049d00c0(puVar93 + 4,&uStack_2b8);
    puVar93[4] = &UNK_0f299f40;
    *(undefined4 *)(puVar93 + 0xc) = auStack_278._0_4_;
    *(undefined1 (*) [16])(puVar93 + 0xd) = (undefined1  [16])0x0;
    puVar93[0xf] = 0;
    func_0x0b0cb270(puVar93 + 0xd,puStack_270,auStack_268._0_8_,
                    (auStack_268._0_8_ - (long)puStack_270 >> 3) * -0x3333333333333333);
    *(undefined8 **)(param_1 + 0x800) = puVar93 + 0x10;
    *(undefined8 **)(param_1 + 0x800) = puVar93 + 0x10;
    puVar75 = puStack_270;
  }
  else {
    lVar56 = (long)puVar93 - (long)*ppuVar68;
    uVar79 = (lVar56 >> 7) + 1;
    if (0x1ffffffffffffff < uVar79) goto LAB_0bf043f2;
    uVar84 = (long)*(undefined8 **)(param_1 + 0x808) - (long)*ppuVar68;
    uVar90 = (long)uVar84 >> 6;
    if (uVar90 <= uVar79) {
      uVar90 = uVar79;
    }
    if (0x7fffffffffffff7f < uVar84) {
      uVar90 = 0x1ffffffffffffff;
    }
    ppuStack_1e8 = ppuVar68;
    if (uVar90 == 0) {
      lVar61 = 0;
    }
    else {
      if (0x1ffffffffffffff < uVar90) goto LAB_0bf043fc;
      lVar61 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar90 << 7);
      if (lVar61 == 0) {
        func_0x0eec74c0(uVar90 << 7,0);
        lVar61 = 0;
      }
    }
    lVar57 = lVar61 + lVar56;
    puStack_1f0 = (ulong *)(uVar90 * 0x80 + lVar61);
    puVar93 = (undefined8 *)(lVar61 + 0xc + lVar56);
    *puVar93 = CONCAT44(iStack_2c8,iStack_2cc);
    puVar93[1] = CONCAT26(uStack_2be,
                          CONCAT15(uStack_2bf,
                                   CONCAT14(bStack_2c0,
                                            CONCAT22(sStack_2c2,CONCAT11(cStack_2c3,bStack_2c4)))));
    *(undefined8 *)(lVar61 + lVar56) =
         CONCAT26(auStack_2d7._5_2_,
                  CONCAT15(auStack_2d7[4],
                           CONCAT14(auStack_2d7[3],
                                    CONCAT22(auStack_2d7._1_2_,CONCAT11(auStack_2d7[0],bStack_2d8)))
                          ));
    ((undefined8 *)(lVar61 + lVar56))[1] = CONCAT44(iStack_2cc,uStack_2d0);
    puStack_1f8 = (ulong *)lVar57;
    auStack_208 = (undefined1  [8])lVar61;
    puStack_200 = (ulong *)lVar57;
    func_0x049d00c0(lVar61 + 0x20 + lVar56,&uStack_2b8);
    *(undefined **)(lVar57 + 0x20) = &UNK_0f299f40;
    *(undefined4 *)(lVar57 + 0x60) = auStack_278._0_4_;
    *(undefined1 (*) [16])(lVar57 + 0x68) = (undefined1  [16])0x0;
    *(undefined8 *)(lVar57 + 0x78) = 0;
    func_0x0b0cb270(lVar57 + 0x68,puStack_270,auStack_268._0_8_,
                    (auStack_268._0_8_ - (long)puStack_270 >> 3) * -0x3333333333333333);
    puStack_1f8 = (ulong *)((long)puStack_1f8 + 0x80);
    puVar93 = *(undefined8 **)(param_1 + 0x7f8);
    puVar86 = *(undefined8 **)(param_1 + 0x800);
    puVar89 = (undefined8 *)((long)puVar93 + ((long)puStack_200 - (long)puVar86));
    uStack_150 = &puStack_c8;
    ppuStack_148 = apuStack_168;
    uStack_140 = uStack_140 & 0xffffff00;
    puVar67 = puVar93;
    puVar71 = puVar89;
    apuStack_168[0] = puVar89;
    uStack_158 = ppuVar68;
    puStack_c8 = puVar89;
    if (puVar93 != puVar86) {
      do {
        uVar54 = *puVar67;
        uVar64 = puVar67[1];
        uVar65 = *(undefined8 *)((long)puVar67 + 0x14);
        *(undefined8 *)((long)puVar71 + 0xc) = *(undefined8 *)((long)puVar67 + 0xc);
        *(undefined8 *)((long)puVar71 + 0x14) = uVar65;
        *puVar71 = uVar54;
        puVar71[1] = uVar64;
        apuStack_168[0] = puVar71;
        func_0x049d00c0(puVar71 + 4,puVar67 + 4);
        puVar71[4] = &UNK_0f299f40;
        *(undefined4 *)(puVar71 + 0xc) = *(undefined4 *)(puVar67 + 0xc);
        *(undefined1 (*) [16])(puVar71 + 0xd) = (undefined1  [16])0x0;
        puVar71[0xf] = 0;
        func_0x0b0cb270(puVar71 + 0xd,puVar67[0xd],puVar67[0xe],
                        ((long)(puVar67[0xe] - puVar67[0xd]) >> 3) * -0x3333333333333333);
        ppuVar68 = ppuStack_68;
        apuStack_168[0] = apuStack_168[0] + 0x10;
        puVar67 = puVar67 + 0x10;
        puVar71 = apuStack_168[0];
      } while (puVar67 != puVar86);
      uStack_140 = CONCAT31(uStack_140._1_3_,1);
      do {
        lVar56 = puVar93[0xd];
        if (lVar56 != 0) {
          lVar61 = puVar93[0xe];
          lVar57 = lVar56;
          if (lVar56 != lVar61) {
            do {
              if ((*(byte *)(lVar61 + -0x20) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar61 + -0x10),
                                *(ulong *)(lVar61 + -0x20) & 0xfffffffffffffffe);
              }
              lVar61 = lVar61 + -0x28;
            } while (lVar61 != lVar56);
            lVar57 = puVar93[0xd];
          }
          puVar93[0xe] = lVar56;
          func_0x0412a280(lVar57,puVar93[0xf] - lVar57);
        }
        func_0x049d2400(puVar93 + 4);
        puVar93 = puVar93 + 0x10;
      } while (puVar93 != puVar86);
      if ((uStack_140 & 1) == 0) {
        puVar86 = *uStack_150;
        for (puVar93 = *ppuStack_148; puVar93 != puVar86; puVar93 = puVar93 + -0x10) {
          lVar56 = puVar93[-3];
          if (lVar56 != 0) {
            lVar61 = puVar93[-2];
            lVar57 = lVar56;
            if (lVar56 != lVar61) {
              do {
                if ((*(byte *)(lVar61 + -0x20) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar61 + -0x10),
                                  *(ulong *)(lVar61 + -0x20) & 0xfffffffffffffffe);
                }
                lVar61 = lVar61 + -0x28;
              } while (lVar61 != lVar56);
              lVar57 = puVar93[-3];
            }
            puVar93[-2] = lVar56;
            func_0x0412a280(lVar57,puVar93[-1] - lVar57);
          }
          func_0x049d2400(puVar93 + -0xc);
        }
      }
    }
    puVar69 = puStack_1f8;
    puStack_200 = *(ulong **)(param_1 + 0x7f8);
    *(undefined8 **)(param_1 + 0x7f8) = puVar89;
    puVar75 = *(ulong **)(param_1 + 0x808);
    *(ulong **)(param_1 + 0x800) = puStack_1f8;
    *(ulong **)(param_1 + 0x808) = puStack_1f0;
    auStack_208 = (undefined1  [8])puStack_200;
    puStack_1f8 = puStack_200;
    puStack_1f0 = puVar75;
    func_0x0bf06390(auStack_208);
    *(ulong **)(param_1 + 0x800) = puVar69;
    puVar75 = puStack_270;
  }
  if (puVar75 != (ulong *)0x0) {
    puVar69 = puVar75;
    lVar56 = auStack_268._0_8_;
    if (puVar75 != (ulong *)auStack_268._0_8_) {
      do {
        if ((*(byte *)(lVar56 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar56 + -0x10),
                          *(ulong *)(lVar56 + -0x20) & 0xfffffffffffffffe);
        }
        lVar56 = lVar56 + -0x28;
      } while ((ulong *)lVar56 != puVar75);
      puVar69 = puStack_270;
    }
    auStack_268._0_8_ = puVar75;
    func_0x0412a280(puVar69,auStack_268._8_8_ - (long)puVar69);
  }
  func_0x049d2400(&uStack_2b8);
  func_0x04862ba0(auStack_2f8);
  goto LAB_0bf02ea5;
LAB_0bf043f2:
  func_0x0b0cb090();
LAB_0bf043f7:
  func_0x056a78f0();
LAB_0bf043fc:
  FUN_04882eb0();
LAB_0bf04401:
  iVar52 = func_0x04108328(&DAT_0f6d0348);
  if (iVar52 == 0) goto LAB_0bf00f70;
  bStack_2d8 = 6;
  auStack_2d7[0] = 'b';
  auStack_2d7._1_2_ = 0x6465;
  auStack_2d7[3] = 0;
  bStack_2c0 = 0;
  uStack_2bf = 0;
  uStack_2be = 0;
  uStack_2b8._0_4_ = 0x626f6a0e;
  uStack_2b8._4_4_ = 0x65746973;
  uStack_2b0 = uStack_2b0 & 0xffffff00;
  uStack_2a0 = 2;
  bStack_298 = 0x18;
  uStack_297 = 0x676e697465656d;
  bStack_290 = 0x5f;
  uStack_28f = 0x61657261;
  uStack_28b = 0;
  auStack_288._8_4_ = 1;
  func_0x0bf05390(&bStack_2d8);
  if ((bStack_298 & 1) == 0) {
    if (((uint)uStack_2b8 & 1) == 0) goto joined_r0x0bf04530;
  }
  else {
LAB_0bf044f8:
    func_0x0412a280(auStack_288._0_8_,CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
    if (((ulong)uStack_2b8 & 1) == 0) goto joined_r0x0bf04530;
  }
  func_0x0412a280(CONCAT71(uStack_2a7,bStack_2a8),(ulong)uStack_2b8 & 0xfffffffffffffffe);
joined_r0x0bf04530:
  if ((bStack_2d8 & 1) != 0) {
    func_0x0412a280(CONCAT26(sStack_2c2,CONCAT15(cStack_2c3,CONCAT14(bStack_2c4,iStack_2c8))),
                    CONCAT26(auStack_2d7._5_2_,
                             CONCAT15(auStack_2d7[4],
                                      CONCAT14(auStack_2d7[3],
                                               CONCAT22(auStack_2d7._1_2_,
                                                        CONCAT11(auStack_2d7[0],bStack_2d8))))) &
                    0xfffffffffffffffe);
  }
  func_0x0eee2f40(&UNK_0bf05c40,&DAT_0f6d0320,0xf53dab8);
  FUN_0410844d(&DAT_0f6d0348);
  goto LAB_0bf00f70;
}



/* ---- referenced strings ----
 * 0x11a145b  self
 * 0x1350664  circle
 * 0x13dd1f7  line
 * 0x142cb75  target
 * 0x14ea360          
 * 0x14ea650  minecraft:behavi
 */
