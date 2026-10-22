/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcafad60 (ELF vaddr 0xc9fad60)
 * Label: callee-of:0x517ab30
 * Body:  [[0cafad60, 0cafaddb] [0cafade0, 0cafaeab] [0cafaeb0, 0cafaf42] [0cafaf50, 0cafafba] [0cafafc0, 0cafb136] [0cafb140, 0cafb1b4] [0cafb1c0, 0cafb70b] [0cafb710, 0cafb7a1] [0cafb7b0, 0cafb873] [0cafb880, 0cafb8ac] [0cafb8b0, 0cafb8f9] [0cafb900, 0cafb974] [0cafb980, 0cafb9d5] [0cafb9e0, 0cafba08] [0cafba10, 0cafba32] [0cafba40, 0cafbab8]]
 * Ghidra: FUN_0cafad60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cafad60(long param_1,char param_2)

{
  byte *pbVar1;
  long *plVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  short sVar115;
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  short sVar128;
  short sVar129;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  short sVar138;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar142;
  short sVar143;
  short sVar144;
  short sVar145;
  short sVar146;
  short sVar147;
  short sVar148;
  short sVar149;
  short sVar150;
  short sVar151;
  short sVar152;
  short sVar153;
  short sVar154;
  short sVar155;
  short sVar156;
  short sVar157;
  short sVar158;
  short sVar159;
  short sVar160;
  short sVar161;
  short sVar162;
  short sVar163;
  short sVar164;
  short sVar165;
  short sVar166;
  short sVar167;
  short sVar168;
  short sVar169;
  short sVar170;
  short sVar171;
  short sVar172;
  short sVar173;
  short sVar174;
  short sVar175;
  short sVar176;
  short sVar177;
  short sVar178;
  short sVar179;
  short sVar180;
  short sVar181;
  short sVar182;
  short sVar183;
  short sVar184;
  short sVar185;
  short sVar186;
  short sVar187;
  short sVar188;
  short sVar189;
  short sVar190;
  short sVar191;
  short sVar192;
  short sVar193;
  short sVar194;
  short sVar195;
  short sVar196;
  short sVar197;
  short sVar198;
  short sVar199;
  short sVar200;
  short sVar201;
  short sVar202;
  short sVar203;
  short sVar204;
  short sVar205;
  short sVar206;
  short sVar207;
  short sVar208;
  short sVar209;
  short sVar210;
  short sVar211;
  short sVar212;
  short sVar213;
  short sVar214;
  short sVar215;
  short sVar216;
  short sVar217;
  short sVar218;
  short sVar219;
  short sVar220;
  short sVar221;
  short sVar222;
  short sVar223;
  short sVar224;
  short sVar225;
  short sVar226;
  short sVar227;
  short sVar228;
  short sVar229;
  undefined6 uVar230;
  undefined6 uVar231;
  undefined6 uVar232;
  undefined6 uVar233;
  undefined6 uVar234;
  undefined6 uVar235;
  undefined6 uVar236;
  undefined6 uVar237;
  char cVar238;
  char cVar239;
  byte bVar240;
  uint uVar241;
  int iVar242;
  long lVar243;
  long lVar244;
  short sVar245;
  short sVar246;
  short sVar247;
  undefined8 uVar248;
  uint uVar249;
  int iVar250;
  long lVar251;
  short *psVar252;
  short sVar253;
  uint uVar254;
  uint uVar255;
  short sVar256;
  ulong uVar257;
  uint uVar258;
  long lVar259;
  long lVar260;
  long lVar261;
  ushort uVar262;
  ushort uVar264;
  ushort uVar265;
  ushort uVar266;
  ushort uVar267;
  ushort uVar268;
  ushort uVar269;
  ushort uVar270;
  undefined1 auVar263 [16];
  ushort uVar271;
  ushort uVar272;
  ushort uVar273;
  ushort uVar274;
  ushort uVar275;
  ushort uVar276;
  ushort uVar277;
  ushort uVar278;
  ushort uVar279;
  ushort uVar280;
  ushort uVar281;
  ushort uVar282;
  ushort uVar283;
  ushort uVar284;
  ushort uVar285;
  ushort uVar286;
  ushort uVar287;
  ushort uVar288;
  short sStack_178;
  short sStack_176;
  short sStack_174;
  short sStack_168;
  short sStack_166;
  short sStack_164;
  short sStack_158;
  short sStack_156;
  short sStack_154;
  uint uStack_148;
  short sStack_138;
  short sStack_136;
  short sStack_134;
  short sStack_128;
  short sStack_126;
  short sStack_124;
  short sStack_118;
  short sStack_116;
  short sStack_114;
  short sStack_108;
  short sStack_106;
  short sStack_104;
  short sStack_e8;
  short sStack_e6;
  short sStack_e4;
  
  sVar245 = *(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
            *(short *)(*(long *)(param_1 + 0x30) + 0xa8);
  lVar259 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5 + -1
  ;
  uVar255 = 0xffff;
  if (-1 < (short)lVar259) {
    do {
      uVar255 = (uint)lVar259;
      lVar251 = (ulong)(uVar255 & 0x7fff) * 0x68 + *(long *)(param_1 + 0x108);
      if ((_DAT_0f6ffb10 == (long *)0x0) &&
         (cVar238 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868),
         cVar238 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar248 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
      plVar2 = *(long **)(lVar251 + 0x30);
      cVar238 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar248);
      if ((cVar238 == '\0') ||
         ((plVar2 = *(long **)(lVar251 + 0x38), plVar2 != (long *)0x0 &&
          (cVar238 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar248), cVar238 == '\0'))))
      goto LAB_0cafae8a;
      lVar259 = lVar259 + -1;
    } while (-1 < (short)lVar259);
    uVar255 = 0xffff;
LAB_0cafae8a:
    uVar255 = uVar255 << 4 | 0xf;
  }
  cVar238 = *(char *)(param_1 + 0x1488);
  lVar259 = 0;
  do {
    uVar241 = (int)lVar259 << 8;
    lVar251 = 0;
    do {
      uVar254 = (uint)(lVar251 * 0x10);
      uVar249 = uVar255;
      if (_DAT_0f6f9e58 <= (short)uVar255) {
        uVar258 = uVar254 | uVar241;
        while( true ) {
          lVar244 = *(long *)(param_1 + 0x108);
          lVar260 = (long)(short)((uint)(int)(short)uVar249 >> 4) * 0x68;
          plVar2 = *(long **)(lVar244 + 0x30 + lVar260);
          lVar243 = (**(code **)(*plVar2 + 0x20))(plVar2,(ushort)(uVar249 & 0xf) | (ushort)uVar258);
          plVar2 = *(long **)(lVar244 + 0x38 + lVar260);
          if (plVar2 == (long *)0x0) {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar239 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                          &UNK_013a2901), cVar239 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar244 = *(long *)(*_DAT_0f6ffb10 + 0x200);
            cVar239 = *(char *)(lVar243 + 0xa5);
          }
          else {
            lVar244 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar249 & 0xf | uVar258 & 0xffff);
            cVar239 = *(char *)(lVar243 + 0xa5);
          }
          if ((cVar239 != '\0') || (*(char *)(lVar244 + 0xa5) != '\0')) break;
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar239 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar239 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if (((*(long *)(lVar243 + 0x110) != *(long *)(*(long *)(*_DAT_0f6ffb10 + 0x200) + 0x110))
              && ((*(byte *)(*(long *)(lVar243 + 0x68) + 0x108) & 2) != 0)) ||
             (uVar249 = uVar249 - 1, (short)uVar249 < _DAT_0f6f9e58)) break;
        }
      }
      sVar256 = _DAT_0f6f9e58;
      lVar244 = lVar251 * 0x10 + lVar259;
      sVar246 = (short)uVar249 + 1;
      if (sVar245 < sVar246) {
        sVar246 = sVar245;
      }
      *(short *)(param_1 + 0xbd0 + lVar244 * 2) = sVar246;
      sVar247 = (short)*(undefined4 *)(param_1 + 0xfd8);
      sVar253 = sVar246;
      if (sVar246 < sVar247) {
        sVar253 = sVar247;
      }
      *(short *)(param_1 + 0xfd8) = sVar253;
      *(undefined2 *)(param_1 + 0x1198 + lVar244 * 2) = _DAT_0f6f9e5a;
      if (sVar256 <= (short)uVar249) {
        uVar254 = uVar254 | uVar241;
        do {
          sVar256 = (short)uVar249;
          lVar243 = *(long *)(param_1 + 0x108);
          lVar261 = (long)(short)((uint)(int)sVar256 >> 4) * 0x68;
          plVar2 = *(long **)(lVar243 + 0x30 + lVar261);
          lVar260 = (**(code **)(*plVar2 + 0x20))(plVar2,(ushort)(uVar249 & 0xf) | (ushort)uVar254);
          plVar2 = *(long **)(lVar243 + 0x38 + lVar261);
          if (plVar2 == (long *)0x0) {
            if ((_DAT_0f6ffb10 == (long *)0x0) &&
               (cVar239 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                          &UNK_013a2901), cVar239 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar243 = *(long *)(*_DAT_0f6ffb10 + 0x200);
            cVar239 = **(char **)(*(long *)(lVar260 + 0x68) + 0x20);
          }
          else {
            lVar243 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar249 & 0xf | uVar254 & 0xffff);
            cVar239 = **(char **)(*(long *)(lVar260 + 0x68) + 0x20);
          }
          if (((cVar239 != '\x05') && (*(char *)(lVar260 + 0xa5) != '\0')) ||
             ((**(char **)(*(long *)(lVar243 + 0x68) + 0x20) != '\x05' &&
              (*(char *)(lVar243 + 0xa5) != '\0')))) break;
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar239 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                        &UNK_013a2901), cVar239 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(long *)(lVar260 + 0x110) != *(long *)(*(long *)(*_DAT_0f6ffb10 + 0x200) + 0x110))
             && ((*(byte *)(*(long *)(lVar260 + 0x68) + 0x108) & 2) != 0)) break;
          uVar249 = uVar249 - 1;
          sVar256 = (short)uVar249;
        } while (_DAT_0f6f9e58 <= sVar256);
        sVar246 = sVar256 + 1;
        if (sVar245 < (short)(sVar256 + 1)) {
          sVar246 = sVar245;
        }
      }
      *(short *)(param_1 + 0xdd0 + lVar244 * 2) = sVar246;
      lVar251 = lVar251 + 1;
    } while (lVar251 != 0x10);
    lVar259 = lVar259 + 1;
  } while (lVar259 != 0x10);
  if (param_2 != '\0') {
    cVar239 = func_0x0cadee90(*(undefined8 *)(param_1 + 0x28));
    bVar240 = (**(code **)(**(long **)(param_1 + 0x28) + 0x9f0))();
    lVar259 = 0xbd0;
    if (cVar239 != '\0') {
      lVar259 = (ulong)bVar240 * 0x200 + 0xbd0;
    }
    psVar252 = (short *)(lVar259 + param_1);
    lVar259 = *(long *)(param_1 + 0x108);
    lVar251 = *(long *)(param_1 + 0x110);
    uVar241 = (int)((ulong)(lVar251 - lVar259) >> 3) * -0x3b13b13b;
    uVar255 = uVar241;
    uStack_148 = uVar241;
    if (*(char *)(param_1 + 0x1488) != '\0') {
      sVar245 = psVar252[8];
      sVar246 = psVar252[9];
      sVar256 = psVar252[10];
      uVar230 = *(undefined6 *)(psVar252 + 8);
      sVar253 = psVar252[0xb];
      sVar247 = psVar252[0xc];
      sVar3 = psVar252[0xd];
      sVar4 = psVar252[0xe];
      sVar5 = psVar252[0xf];
      sVar6 = psVar252[0x18];
      sVar7 = psVar252[0x19];
      sVar8 = psVar252[0x1a];
      uVar231 = *(undefined6 *)(psVar252 + 0x18);
      sVar9 = psVar252[0x1b];
      sVar10 = psVar252[0x1c];
      sVar11 = psVar252[0x1d];
      sVar12 = psVar252[0x1e];
      sVar13 = psVar252[0x1f];
      uVar262 = (ushort)(sVar245 < sVar6) * sVar6 | (ushort)(sVar245 >= sVar6) * sVar245;
      uVar264 = (ushort)(sVar246 < sVar7) * sVar7 | (ushort)(sVar246 >= sVar7) * sVar246;
      uVar265 = (ushort)(sVar256 < sVar8) * sVar8 | (ushort)(sVar256 >= sVar8) * sVar256;
      uVar266 = (ushort)(sVar253 < sVar9) * sVar9 | (ushort)(sVar253 >= sVar9) * sVar253;
      uVar267 = (ushort)(sVar247 < sVar10) * sVar10 | (ushort)(sVar247 >= sVar10) * sVar247;
      uVar268 = (ushort)(sVar3 < sVar11) * sVar11 | (ushort)(sVar3 >= sVar11) * sVar3;
      uVar269 = (ushort)(sVar4 < sVar12) * sVar12 | (ushort)(sVar4 >= sVar12) * sVar4;
      uVar270 = (ushort)(sVar5 < sVar13) * sVar13 | (ushort)(sVar5 >= sVar13) * sVar5;
      sVar256 = psVar252[0x28];
      sVar6 = psVar252[0x29];
      sVar7 = psVar252[0x2a];
      sVar8 = psVar252[0x2b];
      sVar14 = psVar252[0x2c];
      sVar15 = psVar252[0x2d];
      sVar16 = psVar252[0x2e];
      sVar17 = psVar252[0x2f];
      sVar245 = psVar252[0x38];
      sVar246 = psVar252[0x39];
      sVar18 = psVar252[0x3a];
      uVar232 = *(undefined6 *)(psVar252 + 0x38);
      sVar19 = psVar252[0x3b];
      sVar20 = psVar252[0x3c];
      sVar21 = psVar252[0x3d];
      sVar22 = psVar252[0x3e];
      sVar23 = psVar252[0x3f];
      uVar271 = (ushort)(sVar256 < sVar245) * sVar245 | (ushort)(sVar256 >= sVar245) * sVar256;
      uVar272 = (ushort)(sVar6 < sVar246) * sVar246 | (ushort)(sVar6 >= sVar246) * sVar6;
      uVar273 = (ushort)(sVar7 < sVar18) * sVar18 | (ushort)(sVar7 >= sVar18) * sVar7;
      uVar274 = (ushort)(sVar8 < sVar19) * sVar19 | (ushort)(sVar8 >= sVar19) * sVar8;
      uVar275 = (ushort)(sVar14 < sVar20) * sVar20 | (ushort)(sVar14 >= sVar20) * sVar14;
      uVar276 = (ushort)(sVar15 < sVar21) * sVar21 | (ushort)(sVar15 >= sVar21) * sVar15;
      uVar277 = (ushort)(sVar16 < sVar22) * sVar22 | (ushort)(sVar16 >= sVar22) * sVar16;
      uVar278 = (ushort)(sVar17 < sVar23) * sVar23 | (ushort)(sVar17 >= sVar23) * sVar17;
      uVar271 = ((short)uVar271 < (short)uVar262) * uVar262 |
                ((short)uVar271 >= (short)uVar262) * uVar271;
      uVar272 = ((short)uVar272 < (short)uVar264) * uVar264 |
                ((short)uVar272 >= (short)uVar264) * uVar272;
      uVar273 = ((short)uVar273 < (short)uVar265) * uVar265 |
                ((short)uVar273 >= (short)uVar265) * uVar273;
      uVar274 = ((short)uVar274 < (short)uVar266) * uVar266 |
                ((short)uVar274 >= (short)uVar266) * uVar274;
      uVar275 = ((short)uVar275 < (short)uVar267) * uVar267 |
                ((short)uVar275 >= (short)uVar267) * uVar275;
      uVar276 = ((short)uVar276 < (short)uVar268) * uVar268 |
                ((short)uVar276 >= (short)uVar268) * uVar276;
      uVar277 = ((short)uVar277 < (short)uVar269) * uVar269 |
                ((short)uVar277 >= (short)uVar269) * uVar277;
      uVar278 = ((short)uVar278 < (short)uVar270) * uVar270 |
                ((short)uVar278 >= (short)uVar270) * uVar278;
      sVar18 = psVar252[0x48];
      sVar24 = psVar252[0x49];
      sVar25 = psVar252[0x4a];
      sVar26 = psVar252[0x4b];
      sVar27 = psVar252[0x4c];
      sVar28 = psVar252[0x4d];
      sVar29 = psVar252[0x4e];
      sVar30 = psVar252[0x4f];
      sVar245 = psVar252[0x58];
      sVar246 = psVar252[0x59];
      sVar31 = psVar252[0x5a];
      uVar233 = *(undefined6 *)(psVar252 + 0x58);
      sVar32 = psVar252[0x5b];
      sVar33 = psVar252[0x5c];
      sVar34 = psVar252[0x5d];
      sVar35 = psVar252[0x5e];
      sVar36 = psVar252[0x5f];
      uVar262 = (ushort)(sVar18 < sVar245) * sVar245 | (ushort)(sVar18 >= sVar245) * sVar18;
      uVar264 = (ushort)(sVar24 < sVar246) * sVar246 | (ushort)(sVar24 >= sVar246) * sVar24;
      uVar265 = (ushort)(sVar25 < sVar31) * sVar31 | (ushort)(sVar25 >= sVar31) * sVar25;
      uVar266 = (ushort)(sVar26 < sVar32) * sVar32 | (ushort)(sVar26 >= sVar32) * sVar26;
      uVar267 = (ushort)(sVar27 < sVar33) * sVar33 | (ushort)(sVar27 >= sVar33) * sVar27;
      uVar268 = (ushort)(sVar28 < sVar34) * sVar34 | (ushort)(sVar28 >= sVar34) * sVar28;
      uVar269 = (ushort)(sVar29 < sVar35) * sVar35 | (ushort)(sVar29 >= sVar35) * sVar29;
      uVar270 = (ushort)(sVar30 < sVar36) * sVar36 | (ushort)(sVar30 >= sVar36) * sVar30;
      sVar245 = psVar252[0x68];
      sVar246 = psVar252[0x69];
      sVar31 = psVar252[0x6a];
      uVar234 = *(undefined6 *)(psVar252 + 0x68);
      sVar37 = psVar252[0x6b];
      sVar38 = psVar252[0x6c];
      sVar39 = psVar252[0x6d];
      sVar40 = psVar252[0x6e];
      sVar41 = psVar252[0x6f];
      uVar262 = (ushort)((short)uVar262 < sVar245) * sVar245 | ((short)uVar262 >= sVar245) * uVar262
      ;
      uVar264 = (ushort)((short)uVar264 < sVar246) * sVar246 | ((short)uVar264 >= sVar246) * uVar264
      ;
      uVar265 = (ushort)((short)uVar265 < sVar31) * sVar31 | ((short)uVar265 >= sVar31) * uVar265;
      uVar266 = (ushort)((short)uVar266 < sVar37) * sVar37 | ((short)uVar266 >= sVar37) * uVar266;
      uVar267 = (ushort)((short)uVar267 < sVar38) * sVar38 | ((short)uVar267 >= sVar38) * uVar267;
      uVar268 = (ushort)((short)uVar268 < sVar39) * sVar39 | ((short)uVar268 >= sVar39) * uVar268;
      uVar269 = (ushort)((short)uVar269 < sVar40) * sVar40 | ((short)uVar269 >= sVar40) * uVar269;
      uVar270 = (ushort)((short)uVar270 < sVar41) * sVar41 | ((short)uVar270 >= sVar41) * uVar270;
      uVar262 = ((short)uVar262 < (short)uVar271) * uVar271 |
                ((short)uVar262 >= (short)uVar271) * uVar262;
      uVar264 = ((short)uVar264 < (short)uVar272) * uVar272 |
                ((short)uVar264 >= (short)uVar272) * uVar264;
      uVar265 = ((short)uVar265 < (short)uVar273) * uVar273 |
                ((short)uVar265 >= (short)uVar273) * uVar265;
      uVar266 = ((short)uVar266 < (short)uVar274) * uVar274 |
                ((short)uVar266 >= (short)uVar274) * uVar266;
      uVar267 = ((short)uVar267 < (short)uVar275) * uVar275 |
                ((short)uVar267 >= (short)uVar275) * uVar267;
      uVar268 = ((short)uVar268 < (short)uVar276) * uVar276 |
                ((short)uVar268 >= (short)uVar276) * uVar268;
      uVar269 = ((short)uVar269 < (short)uVar277) * uVar277 |
                ((short)uVar269 >= (short)uVar277) * uVar269;
      uVar270 = ((short)uVar270 < (short)uVar278) * uVar278 |
                ((short)uVar270 >= (short)uVar278) * uVar270;
      sVar31 = psVar252[0x78];
      sVar42 = psVar252[0x79];
      sVar43 = psVar252[0x7a];
      sVar44 = psVar252[0x7b];
      sVar45 = psVar252[0x7c];
      sVar46 = psVar252[0x7d];
      sVar47 = psVar252[0x7e];
      sVar48 = psVar252[0x7f];
      sVar245 = psVar252[0x88];
      sVar246 = psVar252[0x89];
      sVar49 = psVar252[0x8a];
      uVar235 = *(undefined6 *)(psVar252 + 0x88);
      sVar50 = psVar252[0x8b];
      sVar51 = psVar252[0x8c];
      sVar52 = psVar252[0x8d];
      sVar53 = psVar252[0x8e];
      sVar54 = psVar252[0x8f];
      uVar271 = (ushort)(sVar31 < sVar245) * sVar245 | (ushort)(sVar31 >= sVar245) * sVar31;
      uVar272 = (ushort)(sVar42 < sVar246) * sVar246 | (ushort)(sVar42 >= sVar246) * sVar42;
      uVar273 = (ushort)(sVar43 < sVar49) * sVar49 | (ushort)(sVar43 >= sVar49) * sVar43;
      uVar274 = (ushort)(sVar44 < sVar50) * sVar50 | (ushort)(sVar44 >= sVar50) * sVar44;
      uVar275 = (ushort)(sVar45 < sVar51) * sVar51 | (ushort)(sVar45 >= sVar51) * sVar45;
      uVar276 = (ushort)(sVar46 < sVar52) * sVar52 | (ushort)(sVar46 >= sVar52) * sVar46;
      uVar277 = (ushort)(sVar47 < sVar53) * sVar53 | (ushort)(sVar47 >= sVar53) * sVar47;
      uVar278 = (ushort)(sVar48 < sVar54) * sVar54 | (ushort)(sVar48 >= sVar54) * sVar48;
      sVar49 = psVar252[0x98];
      sVar55 = psVar252[0x99];
      sVar56 = psVar252[0x9a];
      sVar57 = psVar252[0x9b];
      sVar58 = psVar252[0x9c];
      sVar59 = psVar252[0x9d];
      sVar60 = psVar252[0x9e];
      sVar61 = psVar252[0x9f];
      uVar271 = (ushort)((short)uVar271 < sVar49) * sVar49 | ((short)uVar271 >= sVar49) * uVar271;
      uVar272 = (ushort)((short)uVar272 < sVar55) * sVar55 | ((short)uVar272 >= sVar55) * uVar272;
      uVar273 = (ushort)((short)uVar273 < sVar56) * sVar56 | ((short)uVar273 >= sVar56) * uVar273;
      uVar274 = (ushort)((short)uVar274 < sVar57) * sVar57 | ((short)uVar274 >= sVar57) * uVar274;
      uVar275 = (ushort)((short)uVar275 < sVar58) * sVar58 | ((short)uVar275 >= sVar58) * uVar275;
      uVar276 = (ushort)((short)uVar276 < sVar59) * sVar59 | ((short)uVar276 >= sVar59) * uVar276;
      uVar277 = (ushort)((short)uVar277 < sVar60) * sVar60 | ((short)uVar277 >= sVar60) * uVar277;
      uVar278 = (ushort)((short)uVar278 < sVar61) * sVar61 | ((short)uVar278 >= sVar61) * uVar278;
      sVar245 = psVar252[0xa8];
      sVar246 = psVar252[0xa9];
      sVar62 = psVar252[0xaa];
      uVar236 = *(undefined6 *)(psVar252 + 0xa8);
      sVar63 = psVar252[0xab];
      sVar64 = psVar252[0xac];
      sVar65 = psVar252[0xad];
      sVar66 = psVar252[0xae];
      sVar67 = psVar252[0xaf];
      uVar271 = (ushort)((short)uVar271 < sVar245) * sVar245 | ((short)uVar271 >= sVar245) * uVar271
      ;
      uVar272 = (ushort)((short)uVar272 < sVar246) * sVar246 | ((short)uVar272 >= sVar246) * uVar272
      ;
      uVar273 = (ushort)((short)uVar273 < sVar62) * sVar62 | ((short)uVar273 >= sVar62) * uVar273;
      uVar274 = (ushort)((short)uVar274 < sVar63) * sVar63 | ((short)uVar274 >= sVar63) * uVar274;
      uVar275 = (ushort)((short)uVar275 < sVar64) * sVar64 | ((short)uVar275 >= sVar64) * uVar275;
      uVar276 = (ushort)((short)uVar276 < sVar65) * sVar65 | ((short)uVar276 >= sVar65) * uVar276;
      uVar277 = (ushort)((short)uVar277 < sVar66) * sVar66 | ((short)uVar277 >= sVar66) * uVar277;
      uVar278 = (ushort)((short)uVar278 < sVar67) * sVar67 | ((short)uVar278 >= sVar67) * uVar278;
      uVar262 = ((short)uVar271 < (short)uVar262) * uVar262 |
                ((short)uVar271 >= (short)uVar262) * uVar271;
      uVar264 = ((short)uVar272 < (short)uVar264) * uVar264 |
                ((short)uVar272 >= (short)uVar264) * uVar272;
      uVar265 = ((short)uVar273 < (short)uVar265) * uVar265 |
                ((short)uVar273 >= (short)uVar265) * uVar273;
      uVar266 = ((short)uVar274 < (short)uVar266) * uVar266 |
                ((short)uVar274 >= (short)uVar266) * uVar274;
      uVar267 = ((short)uVar275 < (short)uVar267) * uVar267 |
                ((short)uVar275 >= (short)uVar267) * uVar275;
      uVar268 = ((short)uVar276 < (short)uVar268) * uVar268 |
                ((short)uVar276 >= (short)uVar268) * uVar276;
      uVar269 = ((short)uVar277 < (short)uVar269) * uVar269 |
                ((short)uVar277 >= (short)uVar269) * uVar277;
      uVar270 = ((short)uVar278 < (short)uVar270) * uVar270 |
                ((short)uVar278 >= (short)uVar270) * uVar278;
      sVar62 = psVar252[0xb8];
      sVar68 = psVar252[0xb9];
      sVar69 = psVar252[0xba];
      sVar70 = psVar252[0xbb];
      sVar71 = psVar252[0xbc];
      sVar72 = psVar252[0xbd];
      sVar73 = psVar252[0xbe];
      sVar74 = psVar252[0xbf];
      sVar245 = psVar252[200];
      sVar246 = psVar252[0xc9];
      sVar75 = psVar252[0xca];
      uVar237 = *(undefined6 *)(psVar252 + 200);
      sVar76 = psVar252[0xcb];
      sVar77 = psVar252[0xcc];
      sVar78 = psVar252[0xcd];
      sVar79 = psVar252[0xce];
      sVar80 = psVar252[0xcf];
      uVar271 = (ushort)(sVar62 < sVar245) * sVar245 | (ushort)(sVar62 >= sVar245) * sVar62;
      uVar272 = (ushort)(sVar68 < sVar246) * sVar246 | (ushort)(sVar68 >= sVar246) * sVar68;
      uVar273 = (ushort)(sVar69 < sVar75) * sVar75 | (ushort)(sVar69 >= sVar75) * sVar69;
      uVar274 = (ushort)(sVar70 < sVar76) * sVar76 | (ushort)(sVar70 >= sVar76) * sVar70;
      uVar275 = (ushort)(sVar71 < sVar77) * sVar77 | (ushort)(sVar71 >= sVar77) * sVar71;
      uVar276 = (ushort)(sVar72 < sVar78) * sVar78 | (ushort)(sVar72 >= sVar78) * sVar72;
      uVar277 = (ushort)(sVar73 < sVar79) * sVar79 | (ushort)(sVar73 >= sVar79) * sVar73;
      uVar278 = (ushort)(sVar74 < sVar80) * sVar80 | (ushort)(sVar74 >= sVar80) * sVar74;
      sVar75 = psVar252[0xd8];
      sVar81 = psVar252[0xd9];
      sVar82 = psVar252[0xda];
      sVar83 = psVar252[0xdb];
      sVar84 = psVar252[0xdc];
      sVar85 = psVar252[0xdd];
      sVar86 = psVar252[0xde];
      sVar87 = psVar252[0xdf];
      uVar271 = (ushort)((short)uVar271 < sVar75) * sVar75 | ((short)uVar271 >= sVar75) * uVar271;
      uVar272 = (ushort)((short)uVar272 < sVar81) * sVar81 | ((short)uVar272 >= sVar81) * uVar272;
      uVar273 = (ushort)((short)uVar273 < sVar82) * sVar82 | ((short)uVar273 >= sVar82) * uVar273;
      uVar274 = (ushort)((short)uVar274 < sVar83) * sVar83 | ((short)uVar274 >= sVar83) * uVar274;
      uVar275 = (ushort)((short)uVar275 < sVar84) * sVar84 | ((short)uVar275 >= sVar84) * uVar275;
      uVar276 = (ushort)((short)uVar276 < sVar85) * sVar85 | ((short)uVar276 >= sVar85) * uVar276;
      uVar277 = (ushort)((short)uVar277 < sVar86) * sVar86 | ((short)uVar277 >= sVar86) * uVar277;
      uVar278 = (ushort)((short)uVar278 < sVar87) * sVar87 | ((short)uVar278 >= sVar87) * uVar278;
      sVar88 = psVar252[0xe8];
      sVar89 = psVar252[0xe9];
      sVar90 = psVar252[0xea];
      sVar91 = psVar252[0xeb];
      sVar92 = psVar252[0xec];
      sVar93 = psVar252[0xed];
      sVar94 = psVar252[0xee];
      sVar95 = psVar252[0xef];
      uVar271 = (ushort)((short)uVar271 < sVar88) * sVar88 | ((short)uVar271 >= sVar88) * uVar271;
      uVar272 = (ushort)((short)uVar272 < sVar89) * sVar89 | ((short)uVar272 >= sVar89) * uVar272;
      uVar273 = (ushort)((short)uVar273 < sVar90) * sVar90 | ((short)uVar273 >= sVar90) * uVar273;
      uVar274 = (ushort)((short)uVar274 < sVar91) * sVar91 | ((short)uVar274 >= sVar91) * uVar274;
      uVar275 = (ushort)((short)uVar275 < sVar92) * sVar92 | ((short)uVar275 >= sVar92) * uVar275;
      uVar276 = (ushort)((short)uVar276 < sVar93) * sVar93 | ((short)uVar276 >= sVar93) * uVar276;
      uVar277 = (ushort)((short)uVar277 < sVar94) * sVar94 | ((short)uVar277 >= sVar94) * uVar277;
      uVar278 = (ushort)((short)uVar278 < sVar95) * sVar95 | ((short)uVar278 >= sVar95) * uVar278;
      sVar96 = psVar252[0xf8];
      sVar97 = psVar252[0xf9];
      sVar98 = psVar252[0xfa];
      sVar99 = psVar252[0xfb];
      sVar100 = psVar252[0xfc];
      sVar101 = psVar252[0xfd];
      sVar102 = psVar252[0xfe];
      sVar103 = psVar252[0xff];
      uVar271 = (ushort)((short)uVar271 < sVar96) * sVar96 | ((short)uVar271 >= sVar96) * uVar271;
      uVar272 = (ushort)((short)uVar272 < sVar97) * sVar97 | ((short)uVar272 >= sVar97) * uVar272;
      uVar273 = (ushort)((short)uVar273 < sVar98) * sVar98 | ((short)uVar273 >= sVar98) * uVar273;
      uVar274 = (ushort)((short)uVar274 < sVar99) * sVar99 | ((short)uVar274 >= sVar99) * uVar274;
      uVar275 = (ushort)((short)uVar275 < sVar100) * sVar100 | ((short)uVar275 >= sVar100) * uVar275
      ;
      uVar276 = (ushort)((short)uVar276 < sVar101) * sVar101 | ((short)uVar276 >= sVar101) * uVar276
      ;
      uVar277 = (ushort)((short)uVar277 < sVar102) * sVar102 | ((short)uVar277 >= sVar102) * uVar277
      ;
      uVar278 = (ushort)((short)uVar278 < sVar103) * sVar103 | ((short)uVar278 >= sVar103) * uVar278
      ;
      uVar279 = ((short)uVar271 < (short)uVar262) * uVar262 |
                ((short)uVar271 >= (short)uVar262) * uVar271;
      uVar280 = ((short)uVar272 < (short)uVar264) * uVar264 |
                ((short)uVar272 >= (short)uVar264) * uVar272;
      uVar281 = ((short)uVar273 < (short)uVar265) * uVar265 |
                ((short)uVar273 >= (short)uVar265) * uVar273;
      uVar282 = ((short)uVar274 < (short)uVar266) * uVar266 |
                ((short)uVar274 >= (short)uVar266) * uVar274;
      uVar283 = ((short)uVar275 < (short)uVar267) * uVar267 |
                ((short)uVar275 >= (short)uVar267) * uVar275;
      uVar284 = ((short)uVar276 < (short)uVar268) * uVar268 |
                ((short)uVar276 >= (short)uVar268) * uVar276;
      uVar285 = ((short)uVar277 < (short)uVar269) * uVar269 |
                ((short)uVar277 >= (short)uVar269) * uVar277;
      uVar286 = ((short)uVar278 < (short)uVar270) * uVar270 |
                ((short)uVar278 >= (short)uVar270) * uVar278;
      sVar246 = *psVar252;
      sVar104 = psVar252[1];
      sVar105 = psVar252[2];
      sVar106 = psVar252[3];
      sVar107 = psVar252[4];
      sVar108 = psVar252[5];
      sVar109 = psVar252[6];
      sVar110 = psVar252[7];
      sVar245 = psVar252[0x10];
      sVar111 = psVar252[0x11];
      sVar112 = psVar252[0x12];
      sVar113 = psVar252[0x13];
      sVar114 = psVar252[0x14];
      sVar115 = psVar252[0x15];
      sVar116 = psVar252[0x16];
      sVar117 = psVar252[0x17];
      uVar262 = (ushort)(sVar246 < sVar245) * sVar245 | (ushort)(sVar246 >= sVar245) * sVar246;
      uVar264 = (ushort)(sVar104 < sVar111) * sVar111 | (ushort)(sVar104 >= sVar111) * sVar104;
      uVar265 = (ushort)(sVar105 < sVar112) * sVar112 | (ushort)(sVar105 >= sVar112) * sVar105;
      uVar266 = (ushort)(sVar106 < sVar113) * sVar113 | (ushort)(sVar106 >= sVar113) * sVar106;
      uVar267 = (ushort)(sVar107 < sVar114) * sVar114 | (ushort)(sVar107 >= sVar114) * sVar107;
      uVar268 = (ushort)(sVar108 < sVar115) * sVar115 | (ushort)(sVar108 >= sVar115) * sVar108;
      uVar269 = (ushort)(sVar109 < sVar116) * sVar116 | (ushort)(sVar109 >= sVar116) * sVar109;
      uVar270 = (ushort)(sVar110 < sVar117) * sVar117 | (ushort)(sVar110 >= sVar117) * sVar110;
      sVar118 = psVar252[0x20];
      sVar119 = psVar252[0x21];
      sVar120 = psVar252[0x22];
      sVar121 = psVar252[0x23];
      sVar122 = psVar252[0x24];
      sVar123 = psVar252[0x25];
      sVar124 = psVar252[0x26];
      sVar125 = psVar252[0x27];
      sVar126 = psVar252[0x30];
      sVar127 = psVar252[0x31];
      sVar128 = psVar252[0x32];
      sVar129 = psVar252[0x33];
      sVar130 = psVar252[0x34];
      sVar131 = psVar252[0x35];
      sVar132 = psVar252[0x36];
      sVar133 = psVar252[0x37];
      uVar271 = (ushort)(sVar118 < sVar126) * sVar126 | (ushort)(sVar118 >= sVar126) * sVar118;
      uVar272 = (ushort)(sVar119 < sVar127) * sVar127 | (ushort)(sVar119 >= sVar127) * sVar119;
      uVar273 = (ushort)(sVar120 < sVar128) * sVar128 | (ushort)(sVar120 >= sVar128) * sVar120;
      uVar274 = (ushort)(sVar121 < sVar129) * sVar129 | (ushort)(sVar121 >= sVar129) * sVar121;
      uVar275 = (ushort)(sVar122 < sVar130) * sVar130 | (ushort)(sVar122 >= sVar130) * sVar122;
      uVar276 = (ushort)(sVar123 < sVar131) * sVar131 | (ushort)(sVar123 >= sVar131) * sVar123;
      uVar277 = (ushort)(sVar124 < sVar132) * sVar132 | (ushort)(sVar124 >= sVar132) * sVar124;
      uVar278 = (ushort)(sVar125 < sVar133) * sVar133 | (ushort)(sVar125 >= sVar133) * sVar125;
      uVar271 = ((short)uVar271 < (short)uVar262) * uVar262 |
                ((short)uVar271 >= (short)uVar262) * uVar271;
      uVar272 = ((short)uVar272 < (short)uVar264) * uVar264 |
                ((short)uVar272 >= (short)uVar264) * uVar272;
      uVar273 = ((short)uVar273 < (short)uVar265) * uVar265 |
                ((short)uVar273 >= (short)uVar265) * uVar273;
      uVar274 = ((short)uVar274 < (short)uVar266) * uVar266 |
                ((short)uVar274 >= (short)uVar266) * uVar274;
      uVar275 = ((short)uVar275 < (short)uVar267) * uVar267 |
                ((short)uVar275 >= (short)uVar267) * uVar275;
      uVar276 = ((short)uVar276 < (short)uVar268) * uVar268 |
                ((short)uVar276 >= (short)uVar268) * uVar276;
      uVar277 = ((short)uVar277 < (short)uVar269) * uVar269 |
                ((short)uVar277 >= (short)uVar269) * uVar277;
      uVar278 = ((short)uVar278 < (short)uVar270) * uVar270 |
                ((short)uVar278 >= (short)uVar270) * uVar278;
      sVar134 = psVar252[0x40];
      sVar135 = psVar252[0x41];
      sVar136 = psVar252[0x42];
      sVar137 = psVar252[0x43];
      sVar138 = psVar252[0x44];
      sVar139 = psVar252[0x45];
      sVar140 = psVar252[0x46];
      sVar141 = psVar252[0x47];
      sVar142 = psVar252[0x50];
      sVar143 = psVar252[0x51];
      sVar144 = psVar252[0x52];
      sVar145 = psVar252[0x53];
      sVar146 = psVar252[0x54];
      sVar147 = psVar252[0x55];
      sVar148 = psVar252[0x56];
      sVar149 = psVar252[0x57];
      uVar262 = (ushort)(sVar134 < sVar142) * sVar142 | (ushort)(sVar134 >= sVar142) * sVar134;
      uVar264 = (ushort)(sVar135 < sVar143) * sVar143 | (ushort)(sVar135 >= sVar143) * sVar135;
      uVar265 = (ushort)(sVar136 < sVar144) * sVar144 | (ushort)(sVar136 >= sVar144) * sVar136;
      uVar266 = (ushort)(sVar137 < sVar145) * sVar145 | (ushort)(sVar137 >= sVar145) * sVar137;
      uVar267 = (ushort)(sVar138 < sVar146) * sVar146 | (ushort)(sVar138 >= sVar146) * sVar138;
      uVar268 = (ushort)(sVar139 < sVar147) * sVar147 | (ushort)(sVar139 >= sVar147) * sVar139;
      uVar269 = (ushort)(sVar140 < sVar148) * sVar148 | (ushort)(sVar140 >= sVar148) * sVar140;
      uVar270 = (ushort)(sVar141 < sVar149) * sVar149 | (ushort)(sVar141 >= sVar149) * sVar141;
      sVar150 = psVar252[0x60];
      sVar151 = psVar252[0x61];
      sVar152 = psVar252[0x62];
      sVar153 = psVar252[99];
      sVar154 = psVar252[100];
      sVar155 = psVar252[0x65];
      sVar156 = psVar252[0x66];
      sVar157 = psVar252[0x67];
      uVar262 = (ushort)((short)uVar262 < sVar150) * sVar150 | ((short)uVar262 >= sVar150) * uVar262
      ;
      uVar264 = (ushort)((short)uVar264 < sVar151) * sVar151 | ((short)uVar264 >= sVar151) * uVar264
      ;
      uVar265 = (ushort)((short)uVar265 < sVar152) * sVar152 | ((short)uVar265 >= sVar152) * uVar265
      ;
      uVar266 = (ushort)((short)uVar266 < sVar153) * sVar153 | ((short)uVar266 >= sVar153) * uVar266
      ;
      uVar267 = (ushort)((short)uVar267 < sVar154) * sVar154 | ((short)uVar267 >= sVar154) * uVar267
      ;
      uVar268 = (ushort)((short)uVar268 < sVar155) * sVar155 | ((short)uVar268 >= sVar155) * uVar268
      ;
      uVar269 = (ushort)((short)uVar269 < sVar156) * sVar156 | ((short)uVar269 >= sVar156) * uVar269
      ;
      uVar270 = (ushort)((short)uVar270 < sVar157) * sVar157 | ((short)uVar270 >= sVar157) * uVar270
      ;
      uVar262 = ((short)uVar262 < (short)uVar271) * uVar271 |
                ((short)uVar262 >= (short)uVar271) * uVar262;
      uVar264 = ((short)uVar264 < (short)uVar272) * uVar272 |
                ((short)uVar264 >= (short)uVar272) * uVar264;
      uVar265 = ((short)uVar265 < (short)uVar273) * uVar273 |
                ((short)uVar265 >= (short)uVar273) * uVar265;
      uVar266 = ((short)uVar266 < (short)uVar274) * uVar274 |
                ((short)uVar266 >= (short)uVar274) * uVar266;
      uVar267 = ((short)uVar267 < (short)uVar275) * uVar275 |
                ((short)uVar267 >= (short)uVar275) * uVar267;
      uVar268 = ((short)uVar268 < (short)uVar276) * uVar276 |
                ((short)uVar268 >= (short)uVar276) * uVar268;
      uVar269 = ((short)uVar269 < (short)uVar277) * uVar277 |
                ((short)uVar269 >= (short)uVar277) * uVar269;
      uVar270 = ((short)uVar270 < (short)uVar278) * uVar278 |
                ((short)uVar270 >= (short)uVar278) * uVar270;
      sVar158 = psVar252[0x70];
      sVar159 = psVar252[0x71];
      sVar160 = psVar252[0x72];
      sVar161 = psVar252[0x73];
      sVar162 = psVar252[0x74];
      sVar163 = psVar252[0x75];
      sVar164 = psVar252[0x76];
      sVar165 = psVar252[0x77];
      sVar166 = psVar252[0x80];
      sVar167 = psVar252[0x81];
      sVar168 = psVar252[0x82];
      sVar169 = psVar252[0x83];
      sVar170 = psVar252[0x84];
      sVar171 = psVar252[0x85];
      sVar172 = psVar252[0x86];
      sVar173 = psVar252[0x87];
      uVar271 = (ushort)(sVar158 < sVar166) * sVar166 | (ushort)(sVar158 >= sVar166) * sVar158;
      uVar272 = (ushort)(sVar159 < sVar167) * sVar167 | (ushort)(sVar159 >= sVar167) * sVar159;
      uVar273 = (ushort)(sVar160 < sVar168) * sVar168 | (ushort)(sVar160 >= sVar168) * sVar160;
      uVar274 = (ushort)(sVar161 < sVar169) * sVar169 | (ushort)(sVar161 >= sVar169) * sVar161;
      uVar275 = (ushort)(sVar162 < sVar170) * sVar170 | (ushort)(sVar162 >= sVar170) * sVar162;
      uVar276 = (ushort)(sVar163 < sVar171) * sVar171 | (ushort)(sVar163 >= sVar171) * sVar163;
      uVar277 = (ushort)(sVar164 < sVar172) * sVar172 | (ushort)(sVar164 >= sVar172) * sVar164;
      uVar278 = (ushort)(sVar165 < sVar173) * sVar173 | (ushort)(sVar165 >= sVar173) * sVar165;
      sVar174 = psVar252[0x90];
      sVar175 = psVar252[0x91];
      sVar176 = psVar252[0x92];
      sVar177 = psVar252[0x93];
      sVar178 = psVar252[0x94];
      sVar179 = psVar252[0x95];
      sVar180 = psVar252[0x96];
      sVar181 = psVar252[0x97];
      uVar271 = (ushort)((short)uVar271 < sVar174) * sVar174 | ((short)uVar271 >= sVar174) * uVar271
      ;
      uVar272 = (ushort)((short)uVar272 < sVar175) * sVar175 | ((short)uVar272 >= sVar175) * uVar272
      ;
      uVar273 = (ushort)((short)uVar273 < sVar176) * sVar176 | ((short)uVar273 >= sVar176) * uVar273
      ;
      uVar274 = (ushort)((short)uVar274 < sVar177) * sVar177 | ((short)uVar274 >= sVar177) * uVar274
      ;
      uVar275 = (ushort)((short)uVar275 < sVar178) * sVar178 | ((short)uVar275 >= sVar178) * uVar275
      ;
      uVar276 = (ushort)((short)uVar276 < sVar179) * sVar179 | ((short)uVar276 >= sVar179) * uVar276
      ;
      uVar277 = (ushort)((short)uVar277 < sVar180) * sVar180 | ((short)uVar277 >= sVar180) * uVar277
      ;
      uVar278 = (ushort)((short)uVar278 < sVar181) * sVar181 | ((short)uVar278 >= sVar181) * uVar278
      ;
      sVar182 = psVar252[0xa0];
      sVar183 = psVar252[0xa1];
      sVar184 = psVar252[0xa2];
      sVar185 = psVar252[0xa3];
      sVar186 = psVar252[0xa4];
      sVar187 = psVar252[0xa5];
      sVar188 = psVar252[0xa6];
      sVar189 = psVar252[0xa7];
      uVar271 = (ushort)((short)uVar271 < sVar182) * sVar182 | ((short)uVar271 >= sVar182) * uVar271
      ;
      uVar272 = (ushort)((short)uVar272 < sVar183) * sVar183 | ((short)uVar272 >= sVar183) * uVar272
      ;
      uVar273 = (ushort)((short)uVar273 < sVar184) * sVar184 | ((short)uVar273 >= sVar184) * uVar273
      ;
      uVar274 = (ushort)((short)uVar274 < sVar185) * sVar185 | ((short)uVar274 >= sVar185) * uVar274
      ;
      uVar275 = (ushort)((short)uVar275 < sVar186) * sVar186 | ((short)uVar275 >= sVar186) * uVar275
      ;
      uVar276 = (ushort)((short)uVar276 < sVar187) * sVar187 | ((short)uVar276 >= sVar187) * uVar276
      ;
      uVar277 = (ushort)((short)uVar277 < sVar188) * sVar188 | ((short)uVar277 >= sVar188) * uVar277
      ;
      uVar278 = (ushort)((short)uVar278 < sVar189) * sVar189 | ((short)uVar278 >= sVar189) * uVar278
      ;
      uVar271 = ((short)uVar271 < (short)uVar262) * uVar262 |
                ((short)uVar271 >= (short)uVar262) * uVar271;
      uVar272 = ((short)uVar272 < (short)uVar264) * uVar264 |
                ((short)uVar272 >= (short)uVar264) * uVar272;
      uVar273 = ((short)uVar273 < (short)uVar265) * uVar265 |
                ((short)uVar273 >= (short)uVar265) * uVar273;
      uVar274 = ((short)uVar274 < (short)uVar266) * uVar266 |
                ((short)uVar274 >= (short)uVar266) * uVar274;
      uVar275 = ((short)uVar275 < (short)uVar267) * uVar267 |
                ((short)uVar275 >= (short)uVar267) * uVar275;
      uVar276 = ((short)uVar276 < (short)uVar268) * uVar268 |
                ((short)uVar276 >= (short)uVar268) * uVar276;
      uVar277 = ((short)uVar277 < (short)uVar269) * uVar269 |
                ((short)uVar277 >= (short)uVar269) * uVar277;
      uVar278 = ((short)uVar278 < (short)uVar270) * uVar270 |
                ((short)uVar278 >= (short)uVar270) * uVar278;
      sVar190 = psVar252[0xb0];
      sVar191 = psVar252[0xb1];
      sVar192 = psVar252[0xb2];
      sVar193 = psVar252[0xb3];
      sVar194 = psVar252[0xb4];
      sVar195 = psVar252[0xb5];
      sVar196 = psVar252[0xb6];
      sVar197 = psVar252[0xb7];
      sVar198 = psVar252[0xc0];
      sVar199 = psVar252[0xc1];
      sVar200 = psVar252[0xc2];
      sVar201 = psVar252[0xc3];
      sVar202 = psVar252[0xc4];
      sVar203 = psVar252[0xc5];
      sVar204 = psVar252[0xc6];
      sVar205 = psVar252[199];
      uVar262 = (ushort)(sVar190 < sVar198) * sVar198 | (ushort)(sVar190 >= sVar198) * sVar190;
      uVar264 = (ushort)(sVar191 < sVar199) * sVar199 | (ushort)(sVar191 >= sVar199) * sVar191;
      uVar265 = (ushort)(sVar192 < sVar200) * sVar200 | (ushort)(sVar192 >= sVar200) * sVar192;
      uVar266 = (ushort)(sVar193 < sVar201) * sVar201 | (ushort)(sVar193 >= sVar201) * sVar193;
      uVar267 = (ushort)(sVar194 < sVar202) * sVar202 | (ushort)(sVar194 >= sVar202) * sVar194;
      uVar268 = (ushort)(sVar195 < sVar203) * sVar203 | (ushort)(sVar195 >= sVar203) * sVar195;
      uVar269 = (ushort)(sVar196 < sVar204) * sVar204 | (ushort)(sVar196 >= sVar204) * sVar196;
      uVar270 = (ushort)(sVar197 < sVar205) * sVar205 | (ushort)(sVar197 >= sVar205) * sVar197;
      sVar206 = psVar252[0xd0];
      sVar207 = psVar252[0xd1];
      sVar208 = psVar252[0xd2];
      sVar209 = psVar252[0xd3];
      sVar210 = psVar252[0xd4];
      sVar211 = psVar252[0xd5];
      sVar212 = psVar252[0xd6];
      sVar213 = psVar252[0xd7];
      uVar262 = (ushort)((short)uVar262 < sVar206) * sVar206 | ((short)uVar262 >= sVar206) * uVar262
      ;
      uVar264 = (ushort)((short)uVar264 < sVar207) * sVar207 | ((short)uVar264 >= sVar207) * uVar264
      ;
      uVar265 = (ushort)((short)uVar265 < sVar208) * sVar208 | ((short)uVar265 >= sVar208) * uVar265
      ;
      uVar266 = (ushort)((short)uVar266 < sVar209) * sVar209 | ((short)uVar266 >= sVar209) * uVar266
      ;
      uVar267 = (ushort)((short)uVar267 < sVar210) * sVar210 | ((short)uVar267 >= sVar210) * uVar267
      ;
      uVar268 = (ushort)((short)uVar268 < sVar211) * sVar211 | ((short)uVar268 >= sVar211) * uVar268
      ;
      uVar269 = (ushort)((short)uVar269 < sVar212) * sVar212 | ((short)uVar269 >= sVar212) * uVar269
      ;
      uVar270 = (ushort)((short)uVar270 < sVar213) * sVar213 | ((short)uVar270 >= sVar213) * uVar270
      ;
      sVar214 = psVar252[0xe0];
      sVar215 = psVar252[0xe1];
      sVar216 = psVar252[0xe2];
      sVar217 = psVar252[0xe3];
      sVar218 = psVar252[0xe4];
      sVar219 = psVar252[0xe5];
      sVar220 = psVar252[0xe6];
      sVar221 = psVar252[0xe7];
      uVar262 = (ushort)((short)uVar262 < sVar214) * sVar214 | ((short)uVar262 >= sVar214) * uVar262
      ;
      uVar264 = (ushort)((short)uVar264 < sVar215) * sVar215 | ((short)uVar264 >= sVar215) * uVar264
      ;
      uVar265 = (ushort)((short)uVar265 < sVar216) * sVar216 | ((short)uVar265 >= sVar216) * uVar265
      ;
      uVar266 = (ushort)((short)uVar266 < sVar217) * sVar217 | ((short)uVar266 >= sVar217) * uVar266
      ;
      uVar267 = (ushort)((short)uVar267 < sVar218) * sVar218 | ((short)uVar267 >= sVar218) * uVar267
      ;
      uVar268 = (ushort)((short)uVar268 < sVar219) * sVar219 | ((short)uVar268 >= sVar219) * uVar268
      ;
      uVar269 = (ushort)((short)uVar269 < sVar220) * sVar220 | ((short)uVar269 >= sVar220) * uVar269
      ;
      uVar270 = (ushort)((short)uVar270 < sVar221) * sVar221 | ((short)uVar270 >= sVar221) * uVar270
      ;
      sVar222 = psVar252[0xf0];
      sVar223 = psVar252[0xf1];
      sVar224 = psVar252[0xf2];
      sVar225 = psVar252[0xf3];
      sVar226 = psVar252[0xf4];
      sVar227 = psVar252[0xf5];
      sVar228 = psVar252[0xf6];
      sVar229 = psVar252[0xf7];
      uVar262 = (ushort)((short)uVar262 < sVar222) * sVar222 | ((short)uVar262 >= sVar222) * uVar262
      ;
      uVar264 = (ushort)((short)uVar264 < sVar223) * sVar223 | ((short)uVar264 >= sVar223) * uVar264
      ;
      uVar265 = (ushort)((short)uVar265 < sVar224) * sVar224 | ((short)uVar265 >= sVar224) * uVar265
      ;
      uVar266 = (ushort)((short)uVar266 < sVar225) * sVar225 | ((short)uVar266 >= sVar225) * uVar266
      ;
      uVar267 = (ushort)((short)uVar267 < sVar226) * sVar226 | ((short)uVar267 >= sVar226) * uVar267
      ;
      uVar268 = (ushort)((short)uVar268 < sVar227) * sVar227 | ((short)uVar268 >= sVar227) * uVar268
      ;
      uVar269 = (ushort)((short)uVar269 < sVar228) * sVar228 | ((short)uVar269 >= sVar228) * uVar269
      ;
      uVar270 = (ushort)((short)uVar270 < sVar229) * sVar229 | ((short)uVar270 >= sVar229) * uVar270
      ;
      uVar262 = ((short)uVar262 < (short)uVar271) * uVar271 |
                ((short)uVar262 >= (short)uVar271) * uVar262;
      uVar264 = ((short)uVar264 < (short)uVar272) * uVar272 |
                ((short)uVar264 >= (short)uVar272) * uVar264;
      uVar265 = ((short)uVar265 < (short)uVar273) * uVar273 |
                ((short)uVar265 >= (short)uVar273) * uVar265;
      uVar266 = ((short)uVar266 < (short)uVar274) * uVar274 |
                ((short)uVar266 >= (short)uVar274) * uVar266;
      uVar267 = ((short)uVar267 < (short)uVar275) * uVar275 |
                ((short)uVar267 >= (short)uVar275) * uVar267;
      uVar268 = ((short)uVar268 < (short)uVar276) * uVar276 |
                ((short)uVar268 >= (short)uVar276) * uVar268;
      uVar269 = ((short)uVar269 < (short)uVar277) * uVar277 |
                ((short)uVar269 >= (short)uVar277) * uVar269;
      uVar270 = ((short)uVar270 < (short)uVar278) * uVar278 |
                ((short)uVar270 >= (short)uVar278) * uVar270;
      uVar262 = ((short)uVar262 < (short)uVar279) * uVar279 |
                ((short)uVar262 >= (short)uVar279) * uVar262;
      uVar264 = ((short)uVar264 < (short)uVar280) * uVar280 |
                ((short)uVar264 >= (short)uVar280) * uVar264;
      uVar265 = ((short)uVar265 < (short)uVar281) * uVar281 |
                ((short)uVar265 >= (short)uVar281) * uVar265;
      uVar266 = ((short)uVar266 < (short)uVar282) * uVar282 |
                ((short)uVar266 >= (short)uVar282) * uVar266;
      uVar267 = ((short)uVar267 < (short)uVar283) * uVar283 |
                ((short)uVar267 >= (short)uVar283) * uVar267;
      uVar268 = ((short)uVar268 < (short)uVar284) * uVar284 |
                ((short)uVar268 >= (short)uVar284) * uVar268;
      uVar269 = ((short)uVar269 < (short)uVar285) * uVar285 |
                ((short)uVar269 >= (short)uVar285) * uVar269;
      uVar270 = ((short)uVar270 < (short)uVar286) * uVar286 |
                ((short)uVar270 >= (short)uVar286) * uVar270;
      uVar262 = (-1 < (short)uVar262) * uVar262 | -(ushort)(-1 >= (short)uVar262);
      uVar264 = (-1 < (short)uVar264) * uVar264 | -(ushort)(-1 >= (short)uVar264);
      uVar265 = (-1 < (short)uVar265) * uVar265 | -(ushort)(-1 >= (short)uVar265);
      uVar266 = (-1 < (short)uVar266) * uVar266 | -(ushort)(-1 >= (short)uVar266);
      uVar267 = (-1 < (short)uVar267) * uVar267 | -(ushort)(-1 >= (short)uVar267);
      uVar268 = (-1 < (short)uVar268) * uVar268 | -(ushort)(-1 >= (short)uVar268);
      uVar269 = (-1 < (short)uVar269) * uVar269 | -(ushort)(-1 >= (short)uVar269);
      uVar270 = (-1 < (short)uVar270) * uVar270 | -(ushort)(-1 >= (short)uVar270);
      uVar262 = ((short)uVar267 < (short)uVar262) * uVar262 |
                ((short)uVar267 >= (short)uVar262) * uVar267;
      uVar264 = ((short)uVar268 < (short)uVar264) * uVar264 |
                ((short)uVar268 >= (short)uVar264) * uVar268;
      uVar265 = ((short)uVar269 < (short)uVar265) * uVar265 |
                ((short)uVar269 >= (short)uVar265) * uVar269;
      uVar266 = ((short)uVar270 < (short)uVar266) * uVar266 |
                ((short)uVar270 >= (short)uVar266) * uVar270;
      uVar267 = ((short)uVar265 < (short)uVar262) * uVar262 |
                ((short)uVar265 >= (short)uVar262) * uVar265;
      uVar268 = ((short)uVar266 < (short)uVar264) * uVar264 |
                ((short)uVar266 >= (short)uVar264) * uVar266;
      uVar262 = (ushort)(sVar245 < sVar118) * sVar245 | (ushort)(sVar245 >= sVar118) * sVar118;
      uVar264 = (ushort)(sVar111 < sVar119) * sVar111 | (ushort)(sVar111 >= sVar119) * sVar119;
      uVar265 = (ushort)(sVar112 < sVar120) * sVar112 | (ushort)(sVar112 >= sVar120) * sVar120;
      uVar266 = (ushort)(sVar113 < sVar121) * sVar113 | (ushort)(sVar113 >= sVar121) * sVar121;
      uVar269 = (ushort)(sVar114 < sVar122) * sVar114 | (ushort)(sVar114 >= sVar122) * sVar122;
      uVar270 = (ushort)(sVar115 < sVar123) * sVar115 | (ushort)(sVar115 >= sVar123) * sVar123;
      uVar271 = (ushort)(sVar116 < sVar124) * sVar116 | (ushort)(sVar116 >= sVar124) * sVar124;
      uVar272 = (ushort)(sVar117 < sVar125) * sVar117 | (ushort)(sVar117 >= sVar125) * sVar125;
      auVar263 = ZEXT216((ushort)(*(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
                                 *(short *)(*(long *)(param_1 + 0x30) + 0xa8)));
      auVar263 = pshuflw(auVar263,auVar263,0);
      sVar245 = auVar263._0_2_;
      uVar273 = (ushort)(sVar245 < sVar246) * sVar245 | (ushort)(sVar245 >= sVar246) * sVar246;
      sVar246 = auVar263._2_2_;
      uVar274 = (ushort)(sVar246 < sVar104) * sVar246 | (ushort)(sVar246 >= sVar104) * sVar104;
      uVar275 = (ushort)(sVar245 < sVar105) * sVar245 | (ushort)(sVar245 >= sVar105) * sVar105;
      uVar276 = (ushort)(sVar246 < sVar106) * sVar246 | (ushort)(sVar246 >= sVar106) * sVar106;
      uVar277 = (ushort)(sVar245 < sVar107) * sVar245 | (ushort)(sVar245 >= sVar107) * sVar107;
      uVar278 = (ushort)(sVar246 < sVar108) * sVar246 | (ushort)(sVar246 >= sVar108) * sVar108;
      uVar279 = (ushort)(sVar245 < sVar109) * sVar245 | (ushort)(sVar245 >= sVar109) * sVar109;
      uVar280 = (ushort)(sVar246 < sVar110) * sVar246 | (ushort)(sVar246 >= sVar110) * sVar110;
      uVar273 = ((short)uVar273 < (short)uVar262) * uVar273 |
                ((short)uVar273 >= (short)uVar262) * uVar262;
      uVar274 = ((short)uVar274 < (short)uVar264) * uVar274 |
                ((short)uVar274 >= (short)uVar264) * uVar264;
      uVar275 = ((short)uVar275 < (short)uVar265) * uVar275 |
                ((short)uVar275 >= (short)uVar265) * uVar265;
      uVar276 = ((short)uVar276 < (short)uVar266) * uVar276 |
                ((short)uVar276 >= (short)uVar266) * uVar266;
      uVar277 = ((short)uVar277 < (short)uVar269) * uVar277 |
                ((short)uVar277 >= (short)uVar269) * uVar269;
      uVar278 = ((short)uVar278 < (short)uVar270) * uVar278 |
                ((short)uVar278 >= (short)uVar270) * uVar270;
      uVar279 = ((short)uVar279 < (short)uVar271) * uVar279 |
                ((short)uVar279 >= (short)uVar271) * uVar271;
      uVar280 = ((short)uVar280 < (short)uVar272) * uVar280 |
                ((short)uVar280 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar126 < sVar134) * sVar126 | (ushort)(sVar126 >= sVar134) * sVar134;
      uVar264 = (ushort)(sVar127 < sVar135) * sVar127 | (ushort)(sVar127 >= sVar135) * sVar135;
      uVar265 = (ushort)(sVar128 < sVar136) * sVar128 | (ushort)(sVar128 >= sVar136) * sVar136;
      uVar266 = (ushort)(sVar129 < sVar137) * sVar129 | (ushort)(sVar129 >= sVar137) * sVar137;
      uVar269 = (ushort)(sVar130 < sVar138) * sVar130 | (ushort)(sVar130 >= sVar138) * sVar138;
      uVar270 = (ushort)(sVar131 < sVar139) * sVar131 | (ushort)(sVar131 >= sVar139) * sVar139;
      uVar271 = (ushort)(sVar132 < sVar140) * sVar132 | (ushort)(sVar132 >= sVar140) * sVar140;
      uVar272 = (ushort)(sVar133 < sVar141) * sVar133 | (ushort)(sVar133 >= sVar141) * sVar141;
      uVar262 = (ushort)(sVar142 < (short)uVar262) * sVar142 | (sVar142 >= (short)uVar262) * uVar262
      ;
      uVar264 = (ushort)(sVar143 < (short)uVar264) * sVar143 | (sVar143 >= (short)uVar264) * uVar264
      ;
      uVar265 = (ushort)(sVar144 < (short)uVar265) * sVar144 | (sVar144 >= (short)uVar265) * uVar265
      ;
      uVar266 = (ushort)(sVar145 < (short)uVar266) * sVar145 | (sVar145 >= (short)uVar266) * uVar266
      ;
      uVar269 = (ushort)(sVar146 < (short)uVar269) * sVar146 | (sVar146 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar147 < (short)uVar270) * sVar147 | (sVar147 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar148 < (short)uVar271) * sVar148 | (sVar148 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar149 < (short)uVar272) * sVar149 | (sVar149 >= (short)uVar272) * uVar272
      ;
      uVar273 = ((short)uVar273 < (short)uVar262) * uVar273 |
                ((short)uVar273 >= (short)uVar262) * uVar262;
      uVar274 = ((short)uVar274 < (short)uVar264) * uVar274 |
                ((short)uVar274 >= (short)uVar264) * uVar264;
      uVar275 = ((short)uVar275 < (short)uVar265) * uVar275 |
                ((short)uVar275 >= (short)uVar265) * uVar265;
      uVar276 = ((short)uVar276 < (short)uVar266) * uVar276 |
                ((short)uVar276 >= (short)uVar266) * uVar266;
      uVar277 = ((short)uVar277 < (short)uVar269) * uVar277 |
                ((short)uVar277 >= (short)uVar269) * uVar269;
      uVar278 = ((short)uVar278 < (short)uVar270) * uVar278 |
                ((short)uVar278 >= (short)uVar270) * uVar270;
      uVar279 = ((short)uVar279 < (short)uVar271) * uVar279 |
                ((short)uVar279 >= (short)uVar271) * uVar271;
      uVar280 = ((short)uVar280 < (short)uVar272) * uVar280 |
                ((short)uVar280 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar150 < sVar158) * sVar150 | (ushort)(sVar150 >= sVar158) * sVar158;
      uVar264 = (ushort)(sVar151 < sVar159) * sVar151 | (ushort)(sVar151 >= sVar159) * sVar159;
      uVar265 = (ushort)(sVar152 < sVar160) * sVar152 | (ushort)(sVar152 >= sVar160) * sVar160;
      uVar266 = (ushort)(sVar153 < sVar161) * sVar153 | (ushort)(sVar153 >= sVar161) * sVar161;
      uVar269 = (ushort)(sVar154 < sVar162) * sVar154 | (ushort)(sVar154 >= sVar162) * sVar162;
      uVar270 = (ushort)(sVar155 < sVar163) * sVar155 | (ushort)(sVar155 >= sVar163) * sVar163;
      uVar271 = (ushort)(sVar156 < sVar164) * sVar156 | (ushort)(sVar156 >= sVar164) * sVar164;
      uVar272 = (ushort)(sVar157 < sVar165) * sVar157 | (ushort)(sVar157 >= sVar165) * sVar165;
      uVar262 = (ushort)(sVar166 < (short)uVar262) * sVar166 | (sVar166 >= (short)uVar262) * uVar262
      ;
      uVar264 = (ushort)(sVar167 < (short)uVar264) * sVar167 | (sVar167 >= (short)uVar264) * uVar264
      ;
      uVar265 = (ushort)(sVar168 < (short)uVar265) * sVar168 | (sVar168 >= (short)uVar265) * uVar265
      ;
      uVar266 = (ushort)(sVar169 < (short)uVar266) * sVar169 | (sVar169 >= (short)uVar266) * uVar266
      ;
      uVar269 = (ushort)(sVar170 < (short)uVar269) * sVar170 | (sVar170 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar171 < (short)uVar270) * sVar171 | (sVar171 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar172 < (short)uVar271) * sVar172 | (sVar172 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar173 < (short)uVar272) * sVar173 | (sVar173 >= (short)uVar272) * uVar272
      ;
      uVar262 = (ushort)(sVar174 < (short)uVar262) * sVar174 | (sVar174 >= (short)uVar262) * uVar262
      ;
      uVar264 = (ushort)(sVar175 < (short)uVar264) * sVar175 | (sVar175 >= (short)uVar264) * uVar264
      ;
      uVar265 = (ushort)(sVar176 < (short)uVar265) * sVar176 | (sVar176 >= (short)uVar265) * uVar265
      ;
      uVar266 = (ushort)(sVar177 < (short)uVar266) * sVar177 | (sVar177 >= (short)uVar266) * uVar266
      ;
      uVar269 = (ushort)(sVar178 < (short)uVar269) * sVar178 | (sVar178 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar179 < (short)uVar270) * sVar179 | (sVar179 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar180 < (short)uVar271) * sVar180 | (sVar180 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar181 < (short)uVar272) * sVar181 | (sVar181 >= (short)uVar272) * uVar272
      ;
      uVar273 = ((short)uVar273 < (short)uVar262) * uVar273 |
                ((short)uVar273 >= (short)uVar262) * uVar262;
      uVar274 = ((short)uVar274 < (short)uVar264) * uVar274 |
                ((short)uVar274 >= (short)uVar264) * uVar264;
      uVar275 = ((short)uVar275 < (short)uVar265) * uVar275 |
                ((short)uVar275 >= (short)uVar265) * uVar265;
      uVar276 = ((short)uVar276 < (short)uVar266) * uVar276 |
                ((short)uVar276 >= (short)uVar266) * uVar266;
      uVar277 = ((short)uVar277 < (short)uVar269) * uVar277 |
                ((short)uVar277 >= (short)uVar269) * uVar269;
      uVar278 = ((short)uVar278 < (short)uVar270) * uVar278 |
                ((short)uVar278 >= (short)uVar270) * uVar270;
      uVar279 = ((short)uVar279 < (short)uVar271) * uVar279 |
                ((short)uVar279 >= (short)uVar271) * uVar271;
      uVar280 = ((short)uVar280 < (short)uVar272) * uVar280 |
                ((short)uVar280 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar182 < sVar190) * sVar182 | (ushort)(sVar182 >= sVar190) * sVar190;
      uVar264 = (ushort)(sVar183 < sVar191) * sVar183 | (ushort)(sVar183 >= sVar191) * sVar191;
      uVar265 = (ushort)(sVar184 < sVar192) * sVar184 | (ushort)(sVar184 >= sVar192) * sVar192;
      uVar266 = (ushort)(sVar185 < sVar193) * sVar185 | (ushort)(sVar185 >= sVar193) * sVar193;
      uVar269 = (ushort)(sVar186 < sVar194) * sVar186 | (ushort)(sVar186 >= sVar194) * sVar194;
      uVar270 = (ushort)(sVar187 < sVar195) * sVar187 | (ushort)(sVar187 >= sVar195) * sVar195;
      uVar271 = (ushort)(sVar188 < sVar196) * sVar188 | (ushort)(sVar188 >= sVar196) * sVar196;
      uVar272 = (ushort)(sVar189 < sVar197) * sVar189 | (ushort)(sVar189 >= sVar197) * sVar197;
      uVar262 = (ushort)(sVar198 < (short)uVar262) * sVar198 | (sVar198 >= (short)uVar262) * uVar262
      ;
      uVar264 = (ushort)(sVar199 < (short)uVar264) * sVar199 | (sVar199 >= (short)uVar264) * uVar264
      ;
      uVar265 = (ushort)(sVar200 < (short)uVar265) * sVar200 | (sVar200 >= (short)uVar265) * uVar265
      ;
      uVar266 = (ushort)(sVar201 < (short)uVar266) * sVar201 | (sVar201 >= (short)uVar266) * uVar266
      ;
      uVar269 = (ushort)(sVar202 < (short)uVar269) * sVar202 | (sVar202 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar203 < (short)uVar270) * sVar203 | (sVar203 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar204 < (short)uVar271) * sVar204 | (sVar204 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar205 < (short)uVar272) * sVar205 | (sVar205 >= (short)uVar272) * uVar272
      ;
      uVar262 = (ushort)(sVar206 < (short)uVar262) * sVar206 | (sVar206 >= (short)uVar262) * uVar262
      ;
      uVar264 = (ushort)(sVar207 < (short)uVar264) * sVar207 | (sVar207 >= (short)uVar264) * uVar264
      ;
      uVar265 = (ushort)(sVar208 < (short)uVar265) * sVar208 | (sVar208 >= (short)uVar265) * uVar265
      ;
      uVar266 = (ushort)(sVar209 < (short)uVar266) * sVar209 | (sVar209 >= (short)uVar266) * uVar266
      ;
      uVar269 = (ushort)(sVar210 < (short)uVar269) * sVar210 | (sVar210 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar211 < (short)uVar270) * sVar211 | (sVar211 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar212 < (short)uVar271) * sVar212 | (sVar212 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar213 < (short)uVar272) * sVar213 | (sVar213 >= (short)uVar272) * uVar272
      ;
      uVar262 = (ushort)(sVar214 < (short)uVar262) * sVar214 | (sVar214 >= (short)uVar262) * uVar262
      ;
      uVar264 = (ushort)(sVar215 < (short)uVar264) * sVar215 | (sVar215 >= (short)uVar264) * uVar264
      ;
      uVar265 = (ushort)(sVar216 < (short)uVar265) * sVar216 | (sVar216 >= (short)uVar265) * uVar265
      ;
      uVar266 = (ushort)(sVar217 < (short)uVar266) * sVar217 | (sVar217 >= (short)uVar266) * uVar266
      ;
      uVar269 = (ushort)(sVar218 < (short)uVar269) * sVar218 | (sVar218 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar219 < (short)uVar270) * sVar219 | (sVar219 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar220 < (short)uVar271) * sVar220 | (sVar220 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar221 < (short)uVar272) * sVar221 | (sVar221 >= (short)uVar272) * uVar272
      ;
      uVar262 = ((short)uVar273 < (short)uVar262) * uVar273 |
                ((short)uVar273 >= (short)uVar262) * uVar262;
      uVar264 = ((short)uVar274 < (short)uVar264) * uVar274 |
                ((short)uVar274 >= (short)uVar264) * uVar264;
      uVar265 = ((short)uVar275 < (short)uVar265) * uVar275 |
                ((short)uVar275 >= (short)uVar265) * uVar265;
      uVar266 = ((short)uVar276 < (short)uVar266) * uVar276 |
                ((short)uVar276 >= (short)uVar266) * uVar266;
      uVar269 = ((short)uVar277 < (short)uVar269) * uVar277 |
                ((short)uVar277 >= (short)uVar269) * uVar269;
      uVar270 = ((short)uVar278 < (short)uVar270) * uVar278 |
                ((short)uVar278 >= (short)uVar270) * uVar270;
      uVar271 = ((short)uVar279 < (short)uVar271) * uVar279 |
                ((short)uVar279 >= (short)uVar271) * uVar271;
      uVar272 = ((short)uVar280 < (short)uVar272) * uVar280 |
                ((short)uVar280 >= (short)uVar272) * uVar272;
      uVar273 = (ushort)(sVar222 < (short)uVar262) * sVar222 | (sVar222 >= (short)uVar262) * uVar262
      ;
      uVar274 = (ushort)(sVar223 < (short)uVar264) * sVar223 | (sVar223 >= (short)uVar264) * uVar264
      ;
      uVar275 = (ushort)(sVar224 < (short)uVar265) * sVar224 | (sVar224 >= (short)uVar265) * uVar265
      ;
      uVar276 = (ushort)(sVar225 < (short)uVar266) * sVar225 | (sVar225 >= (short)uVar266) * uVar266
      ;
      uVar277 = (ushort)(sVar226 < (short)uVar269) * sVar226 | (sVar226 >= (short)uVar269) * uVar269
      ;
      uVar278 = (ushort)(sVar227 < (short)uVar270) * sVar227 | (sVar227 >= (short)uVar270) * uVar270
      ;
      uVar279 = (ushort)(sVar228 < (short)uVar271) * sVar228 | (sVar228 >= (short)uVar271) * uVar271
      ;
      uVar280 = (ushort)(sVar229 < (short)uVar272) * sVar229 | (sVar229 >= (short)uVar272) * uVar272
      ;
      sStack_118 = (short)uVar230;
      sStack_116 = (short)((uint6)uVar230 >> 0x10);
      sStack_114 = (short)((uint6)uVar230 >> 0x20);
      uVar262 = (ushort)(sVar245 < sStack_118) * sVar245 |
                (ushort)(sVar245 >= sStack_118) * sStack_118;
      uVar264 = (ushort)(sVar246 < sStack_116) * sVar246 |
                (ushort)(sVar246 >= sStack_116) * sStack_116;
      uVar265 = (ushort)(sVar245 < sStack_114) * sVar245 |
                (ushort)(sVar245 >= sStack_114) * sStack_114;
      uVar266 = (ushort)(sVar246 < sVar253) * sVar246 | (ushort)(sVar246 >= sVar253) * sVar253;
      uVar269 = (ushort)(sVar245 < sVar247) * sVar245 | (ushort)(sVar245 >= sVar247) * sVar247;
      uVar270 = (ushort)(sVar246 < sVar3) * sVar246 | (ushort)(sVar246 >= sVar3) * sVar3;
      uVar271 = (ushort)(sVar245 < sVar4) * sVar245 | (ushort)(sVar245 >= sVar4) * sVar4;
      uVar272 = (ushort)(sVar246 < sVar5) * sVar246 | (ushort)(sVar246 >= sVar5) * sVar5;
      sStack_158 = (short)uVar231;
      sStack_156 = (short)((uint6)uVar231 >> 0x10);
      sStack_154 = (short)((uint6)uVar231 >> 0x20);
      uVar281 = (ushort)(sStack_158 < sVar256) * sStack_158 |
                (ushort)(sStack_158 >= sVar256) * sVar256;
      uVar282 = (ushort)(sStack_156 < sVar6) * sStack_156 | (ushort)(sStack_156 >= sVar6) * sVar6;
      uVar283 = (ushort)(sStack_154 < sVar7) * sStack_154 | (ushort)(sStack_154 >= sVar7) * sVar7;
      uVar284 = (ushort)(sVar9 < sVar8) * sVar9 | (ushort)(sVar9 >= sVar8) * sVar8;
      uVar285 = (ushort)(sVar10 < sVar14) * sVar10 | (ushort)(sVar10 >= sVar14) * sVar14;
      uVar286 = (ushort)(sVar11 < sVar15) * sVar11 | (ushort)(sVar11 >= sVar15) * sVar15;
      uVar287 = (ushort)(sVar12 < sVar16) * sVar12 | (ushort)(sVar12 >= sVar16) * sVar16;
      uVar288 = (ushort)(sVar13 < sVar17) * sVar13 | (ushort)(sVar13 >= sVar17) * sVar17;
      uVar281 = ((short)uVar262 < (short)uVar281) * uVar262 |
                ((short)uVar262 >= (short)uVar281) * uVar281;
      uVar282 = ((short)uVar264 < (short)uVar282) * uVar264 |
                ((short)uVar264 >= (short)uVar282) * uVar282;
      uVar283 = ((short)uVar265 < (short)uVar283) * uVar265 |
                ((short)uVar265 >= (short)uVar283) * uVar283;
      uVar284 = ((short)uVar266 < (short)uVar284) * uVar266 |
                ((short)uVar266 >= (short)uVar284) * uVar284;
      uVar285 = ((short)uVar269 < (short)uVar285) * uVar269 |
                ((short)uVar269 >= (short)uVar285) * uVar285;
      uVar286 = ((short)uVar270 < (short)uVar286) * uVar270 |
                ((short)uVar270 >= (short)uVar286) * uVar286;
      uVar287 = ((short)uVar271 < (short)uVar287) * uVar271 |
                ((short)uVar271 >= (short)uVar287) * uVar287;
      uVar288 = ((short)uVar272 < (short)uVar288) * uVar272 |
                ((short)uVar272 >= (short)uVar288) * uVar288;
      sStack_e8 = (short)uVar232;
      sStack_e6 = (short)((uint6)uVar232 >> 0x10);
      sStack_e4 = (short)((uint6)uVar232 >> 0x20);
      uVar262 = (ushort)(sStack_e8 < sVar18) * sStack_e8 | (ushort)(sStack_e8 >= sVar18) * sVar18;
      uVar264 = (ushort)(sStack_e6 < sVar24) * sStack_e6 | (ushort)(sStack_e6 >= sVar24) * sVar24;
      uVar265 = (ushort)(sStack_e4 < sVar25) * sStack_e4 | (ushort)(sStack_e4 >= sVar25) * sVar25;
      uVar266 = (ushort)(sVar19 < sVar26) * sVar19 | (ushort)(sVar19 >= sVar26) * sVar26;
      uVar269 = (ushort)(sVar20 < sVar27) * sVar20 | (ushort)(sVar20 >= sVar27) * sVar27;
      uVar270 = (ushort)(sVar21 < sVar28) * sVar21 | (ushort)(sVar21 >= sVar28) * sVar28;
      uVar271 = (ushort)(sVar22 < sVar29) * sVar22 | (ushort)(sVar22 >= sVar29) * sVar29;
      uVar272 = (ushort)(sVar23 < sVar30) * sVar23 | (ushort)(sVar23 >= sVar30) * sVar30;
      sStack_168 = (short)uVar233;
      sStack_166 = (short)((uint6)uVar233 >> 0x10);
      sStack_164 = (short)((uint6)uVar233 >> 0x20);
      uVar262 = (ushort)(sStack_168 < (short)uVar262) * sStack_168 |
                (sStack_168 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sStack_166 < (short)uVar264) * sStack_166 |
                (sStack_166 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sStack_164 < (short)uVar265) * sStack_164 |
                (sStack_164 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar32 < (short)uVar266) * sVar32 | (sVar32 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar33 < (short)uVar269) * sVar33 | (sVar33 >= (short)uVar269) * uVar269;
      uVar270 = (ushort)(sVar34 < (short)uVar270) * sVar34 | (sVar34 >= (short)uVar270) * uVar270;
      uVar271 = (ushort)(sVar35 < (short)uVar271) * sVar35 | (sVar35 >= (short)uVar271) * uVar271;
      uVar272 = (ushort)(sVar36 < (short)uVar272) * sVar36 | (sVar36 >= (short)uVar272) * uVar272;
      uVar281 = ((short)uVar281 < (short)uVar262) * uVar281 |
                ((short)uVar281 >= (short)uVar262) * uVar262;
      uVar282 = ((short)uVar282 < (short)uVar264) * uVar282 |
                ((short)uVar282 >= (short)uVar264) * uVar264;
      uVar283 = ((short)uVar283 < (short)uVar265) * uVar283 |
                ((short)uVar283 >= (short)uVar265) * uVar265;
      uVar284 = ((short)uVar284 < (short)uVar266) * uVar284 |
                ((short)uVar284 >= (short)uVar266) * uVar266;
      uVar285 = ((short)uVar285 < (short)uVar269) * uVar285 |
                ((short)uVar285 >= (short)uVar269) * uVar269;
      uVar286 = ((short)uVar286 < (short)uVar270) * uVar286 |
                ((short)uVar286 >= (short)uVar270) * uVar270;
      uVar287 = ((short)uVar287 < (short)uVar271) * uVar287 |
                ((short)uVar287 >= (short)uVar271) * uVar271;
      uVar288 = ((short)uVar288 < (short)uVar272) * uVar288 |
                ((short)uVar288 >= (short)uVar272) * uVar272;
      sStack_128 = (short)uVar234;
      sStack_126 = (short)((uint6)uVar234 >> 0x10);
      sStack_124 = (short)((uint6)uVar234 >> 0x20);
      uVar262 = (ushort)(sStack_128 < sVar31) * sStack_128 | (ushort)(sStack_128 >= sVar31) * sVar31
      ;
      uVar264 = (ushort)(sStack_126 < sVar42) * sStack_126 | (ushort)(sStack_126 >= sVar42) * sVar42
      ;
      uVar265 = (ushort)(sStack_124 < sVar43) * sStack_124 | (ushort)(sStack_124 >= sVar43) * sVar43
      ;
      uVar266 = (ushort)(sVar37 < sVar44) * sVar37 | (ushort)(sVar37 >= sVar44) * sVar44;
      uVar269 = (ushort)(sVar38 < sVar45) * sVar38 | (ushort)(sVar38 >= sVar45) * sVar45;
      uVar270 = (ushort)(sVar39 < sVar46) * sVar39 | (ushort)(sVar39 >= sVar46) * sVar46;
      uVar271 = (ushort)(sVar40 < sVar47) * sVar40 | (ushort)(sVar40 >= sVar47) * sVar47;
      uVar272 = (ushort)(sVar41 < sVar48) * sVar41 | (ushort)(sVar41 >= sVar48) * sVar48;
      sStack_178 = (short)uVar235;
      sStack_176 = (short)((uint6)uVar235 >> 0x10);
      sStack_174 = (short)((uint6)uVar235 >> 0x20);
      uVar262 = (ushort)(sStack_178 < (short)uVar262) * sStack_178 |
                (sStack_178 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sStack_176 < (short)uVar264) * sStack_176 |
                (sStack_176 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sStack_174 < (short)uVar265) * sStack_174 |
                (sStack_174 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar50 < (short)uVar266) * sVar50 | (sVar50 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar51 < (short)uVar269) * sVar51 | (sVar51 >= (short)uVar269) * uVar269;
      uVar270 = (ushort)(sVar52 < (short)uVar270) * sVar52 | (sVar52 >= (short)uVar270) * uVar270;
      uVar271 = (ushort)(sVar53 < (short)uVar271) * sVar53 | (sVar53 >= (short)uVar271) * uVar271;
      uVar272 = (ushort)(sVar54 < (short)uVar272) * sVar54 | (sVar54 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar49 < (short)uVar262) * sVar49 | (sVar49 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sVar55 < (short)uVar264) * sVar55 | (sVar55 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sVar56 < (short)uVar265) * sVar56 | (sVar56 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar57 < (short)uVar266) * sVar57 | (sVar57 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar58 < (short)uVar269) * sVar58 | (sVar58 >= (short)uVar269) * uVar269;
      uVar270 = (ushort)(sVar59 < (short)uVar270) * sVar59 | (sVar59 >= (short)uVar270) * uVar270;
      uVar271 = (ushort)(sVar60 < (short)uVar271) * sVar60 | (sVar60 >= (short)uVar271) * uVar271;
      uVar272 = (ushort)(sVar61 < (short)uVar272) * sVar61 | (sVar61 >= (short)uVar272) * uVar272;
      uVar281 = ((short)uVar281 < (short)uVar262) * uVar281 |
                ((short)uVar281 >= (short)uVar262) * uVar262;
      uVar282 = ((short)uVar282 < (short)uVar264) * uVar282 |
                ((short)uVar282 >= (short)uVar264) * uVar264;
      uVar283 = ((short)uVar283 < (short)uVar265) * uVar283 |
                ((short)uVar283 >= (short)uVar265) * uVar265;
      uVar284 = ((short)uVar284 < (short)uVar266) * uVar284 |
                ((short)uVar284 >= (short)uVar266) * uVar266;
      uVar285 = ((short)uVar285 < (short)uVar269) * uVar285 |
                ((short)uVar285 >= (short)uVar269) * uVar269;
      uVar286 = ((short)uVar286 < (short)uVar270) * uVar286 |
                ((short)uVar286 >= (short)uVar270) * uVar270;
      uVar287 = ((short)uVar287 < (short)uVar271) * uVar287 |
                ((short)uVar287 >= (short)uVar271) * uVar271;
      uVar288 = ((short)uVar288 < (short)uVar272) * uVar288 |
                ((short)uVar288 >= (short)uVar272) * uVar272;
      sStack_138 = (short)uVar236;
      sStack_136 = (short)((uint6)uVar236 >> 0x10);
      sStack_134 = (short)((uint6)uVar236 >> 0x20);
      uVar262 = (ushort)(sStack_138 < sVar62) * sStack_138 | (ushort)(sStack_138 >= sVar62) * sVar62
      ;
      uVar264 = (ushort)(sStack_136 < sVar68) * sStack_136 | (ushort)(sStack_136 >= sVar68) * sVar68
      ;
      uVar265 = (ushort)(sStack_134 < sVar69) * sStack_134 | (ushort)(sStack_134 >= sVar69) * sVar69
      ;
      uVar266 = (ushort)(sVar63 < sVar70) * sVar63 | (ushort)(sVar63 >= sVar70) * sVar70;
      uVar269 = (ushort)(sVar64 < sVar71) * sVar64 | (ushort)(sVar64 >= sVar71) * sVar71;
      uVar270 = (ushort)(sVar65 < sVar72) * sVar65 | (ushort)(sVar65 >= sVar72) * sVar72;
      uVar271 = (ushort)(sVar66 < sVar73) * sVar66 | (ushort)(sVar66 >= sVar73) * sVar73;
      uVar272 = (ushort)(sVar67 < sVar74) * sVar67 | (ushort)(sVar67 >= sVar74) * sVar74;
      sStack_108 = (short)uVar237;
      sStack_106 = (short)((uint6)uVar237 >> 0x10);
      sStack_104 = (short)((uint6)uVar237 >> 0x20);
      uVar262 = (ushort)(sStack_108 < (short)uVar262) * sStack_108 |
                (sStack_108 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sStack_106 < (short)uVar264) * sStack_106 |
                (sStack_106 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sStack_104 < (short)uVar265) * sStack_104 |
                (sStack_104 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar76 < (short)uVar266) * sVar76 | (sVar76 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar77 < (short)uVar269) * sVar77 | (sVar77 >= (short)uVar269) * uVar269;
      uVar270 = (ushort)(sVar78 < (short)uVar270) * sVar78 | (sVar78 >= (short)uVar270) * uVar270;
      uVar271 = (ushort)(sVar79 < (short)uVar271) * sVar79 | (sVar79 >= (short)uVar271) * uVar271;
      uVar272 = (ushort)(sVar80 < (short)uVar272) * sVar80 | (sVar80 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar75 < (short)uVar262) * sVar75 | (sVar75 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sVar81 < (short)uVar264) * sVar81 | (sVar81 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sVar82 < (short)uVar265) * sVar82 | (sVar82 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar83 < (short)uVar266) * sVar83 | (sVar83 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar84 < (short)uVar269) * sVar84 | (sVar84 >= (short)uVar269) * uVar269;
      uVar270 = (ushort)(sVar85 < (short)uVar270) * sVar85 | (sVar85 >= (short)uVar270) * uVar270;
      uVar271 = (ushort)(sVar86 < (short)uVar271) * sVar86 | (sVar86 >= (short)uVar271) * uVar271;
      uVar272 = (ushort)(sVar87 < (short)uVar272) * sVar87 | (sVar87 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar88 < (short)uVar262) * sVar88 | (sVar88 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sVar89 < (short)uVar264) * sVar89 | (sVar89 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sVar90 < (short)uVar265) * sVar90 | (sVar90 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar91 < (short)uVar266) * sVar91 | (sVar91 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar92 < (short)uVar269) * sVar92 | (sVar92 >= (short)uVar269) * uVar269;
      uVar270 = (ushort)(sVar93 < (short)uVar270) * sVar93 | (sVar93 >= (short)uVar270) * uVar270;
      uVar271 = (ushort)(sVar94 < (short)uVar271) * sVar94 | (sVar94 >= (short)uVar271) * uVar271;
      uVar272 = (ushort)(sVar95 < (short)uVar272) * sVar95 | (sVar95 >= (short)uVar272) * uVar272;
      uVar262 = ((short)uVar281 < (short)uVar262) * uVar281 |
                ((short)uVar281 >= (short)uVar262) * uVar262;
      uVar264 = ((short)uVar282 < (short)uVar264) * uVar282 |
                ((short)uVar282 >= (short)uVar264) * uVar264;
      uVar265 = ((short)uVar283 < (short)uVar265) * uVar283 |
                ((short)uVar283 >= (short)uVar265) * uVar265;
      uVar266 = ((short)uVar284 < (short)uVar266) * uVar284 |
                ((short)uVar284 >= (short)uVar266) * uVar266;
      uVar269 = ((short)uVar285 < (short)uVar269) * uVar285 |
                ((short)uVar285 >= (short)uVar269) * uVar269;
      uVar270 = ((short)uVar286 < (short)uVar270) * uVar286 |
                ((short)uVar286 >= (short)uVar270) * uVar270;
      uVar271 = ((short)uVar287 < (short)uVar271) * uVar287 |
                ((short)uVar287 >= (short)uVar271) * uVar271;
      uVar272 = ((short)uVar288 < (short)uVar272) * uVar288 |
                ((short)uVar288 >= (short)uVar272) * uVar272;
      uVar262 = (ushort)(sVar96 < (short)uVar262) * sVar96 | (sVar96 >= (short)uVar262) * uVar262;
      uVar264 = (ushort)(sVar97 < (short)uVar264) * sVar97 | (sVar97 >= (short)uVar264) * uVar264;
      uVar265 = (ushort)(sVar98 < (short)uVar265) * sVar98 | (sVar98 >= (short)uVar265) * uVar265;
      uVar266 = (ushort)(sVar99 < (short)uVar266) * sVar99 | (sVar99 >= (short)uVar266) * uVar266;
      uVar269 = (ushort)(sVar100 < (short)uVar269) * sVar100 | (sVar100 >= (short)uVar269) * uVar269
      ;
      uVar270 = (ushort)(sVar101 < (short)uVar270) * sVar101 | (sVar101 >= (short)uVar270) * uVar270
      ;
      uVar271 = (ushort)(sVar102 < (short)uVar271) * sVar102 | (sVar102 >= (short)uVar271) * uVar271
      ;
      uVar272 = (ushort)(sVar103 < (short)uVar272) * sVar103 | (sVar103 >= (short)uVar272) * uVar272
      ;
      uVar262 = ((short)uVar273 < (short)uVar262) * uVar273 |
                ((short)uVar273 >= (short)uVar262) * uVar262;
      uVar264 = ((short)uVar274 < (short)uVar264) * uVar274 |
                ((short)uVar274 >= (short)uVar264) * uVar264;
      uVar265 = ((short)uVar275 < (short)uVar265) * uVar275 |
                ((short)uVar275 >= (short)uVar265) * uVar265;
      uVar266 = ((short)uVar276 < (short)uVar266) * uVar276 |
                ((short)uVar276 >= (short)uVar266) * uVar266;
      uVar269 = ((short)uVar277 < (short)uVar269) * uVar277 |
                ((short)uVar277 >= (short)uVar269) * uVar269;
      uVar270 = ((short)uVar278 < (short)uVar270) * uVar278 |
                ((short)uVar278 >= (short)uVar270) * uVar270;
      uVar271 = ((short)uVar279 < (short)uVar271) * uVar279 |
                ((short)uVar279 >= (short)uVar271) * uVar271;
      uVar272 = ((short)uVar280 < (short)uVar272) * uVar280 |
                ((short)uVar280 >= (short)uVar272) * uVar272;
      uVar262 = ((short)uVar262 < (short)uVar269) * uVar262 |
                ((short)uVar262 >= (short)uVar269) * uVar269;
      uVar264 = ((short)uVar264 < (short)uVar270) * uVar264 |
                ((short)uVar264 >= (short)uVar270) * uVar270;
      uVar265 = ((short)uVar265 < (short)uVar271) * uVar265 |
                ((short)uVar265 >= (short)uVar271) * uVar271;
      uVar266 = ((short)uVar266 < (short)uVar272) * uVar266 |
                ((short)uVar266 >= (short)uVar272) * uVar272;
      uVar262 = ((short)uVar262 < (short)uVar265) * uVar262 |
                ((short)uVar262 >= (short)uVar265) * uVar265;
      uVar264 = ((short)uVar264 < (short)uVar266) * uVar264 |
                ((short)uVar264 >= (short)uVar266) * uVar266;
      uVar264 = ((short)uVar262 < (short)uVar264) * uVar262 |
                ((short)uVar262 >= (short)uVar264) * uVar264;
      uVar262 = uVar264 + 0xf;
      if (-1 < (short)uVar264) {
        uVar262 = uVar264;
      }
      uVar255 = (int)(short)uVar262 >> 4;
      uStack_148 = (int)(short)(((short)uVar268 < (short)uVar267) * uVar267 |
                               ((short)uVar268 >= (short)uVar267) * uVar268) + 0xfU >> 4;
    }
    if (0 < (int)uVar255) {
      lVar244 = 0x1c;
      uVar257 = 0;
      do {
        lVar259 = *(long *)(param_1 + 0x108);
        lVar251 = *(long *)(param_1 + 0x110);
        uVar241 = (int)(lVar251 - lVar259 >> 3) * -0x3b13b13b;
        if ((long)(int)uVar241 <= (long)uVar257) goto LAB_0cafb78d;
        *(undefined1 *)(lVar259 + lVar244) = 0;
        lVar259 = *(long *)(lVar259 + -0x14 + lVar244);
        if (lVar259 != 0) {
          func_0x0eee2dd0(lVar259,0,0x800);
        }
        uVar257 = uVar257 + 1;
        lVar244 = lVar244 + 0x68;
      } while (uVar255 != uVar257);
      lVar259 = *(long *)(param_1 + 0x108);
      lVar251 = *(long *)(param_1 + 0x110);
      uVar241 = (int)(lVar251 - lVar259 >> 3) * -0x3b13b13b;
    }
LAB_0cafb78d:
    if ((int)uStack_148 < (int)uVar241) {
      lVar244 = (long)(int)uStack_148;
      lVar243 = lVar244 * 0x68 + 0x1c;
      do {
        *(undefined1 *)(lVar259 + lVar243) = 1;
        lVar260 = *(long *)(lVar259 + -0x14 + lVar243);
        if (lVar260 != 0) {
          func_0x0eee2dd0(lVar260,0xff,0x800);
          lVar259 = *(long *)(param_1 + 0x108);
          lVar251 = *(long *)(param_1 + 0x110);
        }
        lVar244 = lVar244 + 1;
        lVar243 = lVar243 + 0x68;
      } while (lVar244 < (int)((ulong)(lVar251 - lVar259) >> 3) * -0x3b13b13b);
    }
    if ((int)uVar255 < (int)uStack_148) {
      lVar259 = (long)(int)uVar255;
      if (cVar238 == '\0') {
        do {
          uVar255 = (int)lVar259 * 0x10;
          if ((uVar255 & 0xffff) != 0x7ff0) {
            sStack_e8 = (short)uVar255 + 0x10;
            iVar242 = 0;
            do {
              iVar250 = 0;
              do {
                uVar249 = iVar250 << 4 | iVar242 << 8;
                uVar241 = uVar255;
                bVar240 = 0;
                do {
                  lVar244 = *(long *)(param_1 + 0x108);
                  lVar251 = lVar259 * 0x68 + lVar244;
                  func_0x0ca92d00(lVar251,uVar249 & 0xffff,0);
                  if ((*(int *)(lVar244 + 0x18 + lVar259 * 0x68) != 1) &&
                     (lVar251 = *(long *)(lVar251 + 0x10), lVar251 != 0)) {
                    pbVar1 = (byte *)(lVar251 + (ulong)((uVar249 & 0xffff) >> 1));
                    *pbVar1 = *pbVar1 & ~(byte)(0xf << (bVar240 & 4));
                  }
                  uVar241 = uVar241 + 1;
                  uVar249 = uVar249 + 1;
                  bVar240 = bVar240 + 4;
                } while ((short)uVar241 < sStack_e8);
                iVar250 = iVar250 + 1;
              } while ((short)iVar250 != 0x10);
              iVar242 = iVar242 + 1;
            } while ((short)iVar242 != 0x10);
          }
          lVar259 = lVar259 + 1;
        } while (uStack_148 != (uint)lVar259);
      }
      else {
        do {
          uVar255 = (int)lVar259 * 0x10;
          if ((uVar255 & 0xffff) != 0x7ff0) {
            sStack_118 = (short)uVar255 + 0x10;
            lVar251 = 0;
            do {
              lVar244 = 0;
              do {
                sVar245 = psVar252[lVar244 * 0x10 + lVar251];
                uVar249 = (uint)(lVar244 * 0x10) | (int)lVar251 << 8;
                uVar241 = uVar255;
                bVar240 = 0;
                do {
                  lVar260 = *(long *)(param_1 + 0x108);
                  lVar243 = lVar260 + lVar259 * 0x68;
                  uVar248 = 0xf;
                  if ((short)uVar241 < sVar245) {
                    uVar248 = 0;
                  }
                  func_0x0ca92d00(lVar243,uVar249 & 0xffff,uVar248);
                  if ((*(int *)(lVar260 + 0x18 + lVar259 * 0x68) != 1) &&
                     (lVar243 = *(long *)(lVar243 + 0x10), lVar243 != 0)) {
                    pbVar1 = (byte *)(lVar243 + (ulong)((uVar249 & 0xffff) >> 1));
                    *pbVar1 = *pbVar1 & ~(byte)(0xf << (bVar240 & 4));
                  }
                  uVar241 = uVar241 + 1;
                  uVar249 = uVar249 + 1;
                  bVar240 = bVar240 + 4;
                } while ((short)uVar241 < sStack_118);
                lVar244 = lVar244 + 1;
              } while (lVar244 != 0x10);
              lVar251 = lVar251 + 1;
            } while (lVar251 != 0x10);
          }
          lVar259 = lVar259 + 1;
        } while (uStack_148 != (uint)lVar259);
      }
    }
  }
  return;
}


