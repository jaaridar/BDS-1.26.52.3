/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf74f00 (ELF vaddr 0xce74f00)
 * Label: string:JigsawBlock
 * Body:  [[0cf74f00, 0cf75670]]
 * Ghidra: FUN_0cf74f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf74f00(void)

{
  int iVar1;
  long lVar2;
  ulong auStack_778 [4];
  undefined1 auStack_758 [32];
  undefined1 auStack_738 [32];
  undefined1 auStack_718 [32];
  undefined1 auStack_6f8 [32];
  undefined1 auStack_6d8 [32];
  undefined1 auStack_6b8 [32];
  undefined1 auStack_698 [32];
  undefined1 auStack_678 [32];
  undefined1 uStack_658;
  undefined1 uStack_650;
  undefined4 uStack_64f;
  undefined4 uStack_64b;
  undefined4 uStack_647;
  undefined4 uStack_643;
  undefined1 uStack_63f;
  undefined1 auStack_638 [32];
  undefined1 auStack_618 [32];
  undefined1 auStack_5f8 [32];
  undefined1 auStack_5d8 [32];
  undefined1 auStack_5b8 [32];
  undefined1 auStack_598 [32];
  undefined1 auStack_578 [32];
  undefined1 auStack_558 [32];
  undefined1 auStack_538 [32];
  undefined1 auStack_518 [32];
  undefined1 auStack_4f8 [32];
  undefined1 auStack_4d8 [32];
  undefined1 auStack_4b8 [32];
  undefined1 auStack_498 [32];
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [32];
  undefined1 auStack_438 [32];
  undefined1 auStack_418 [32];
  undefined1 uStack_3f8;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined1 auStack_3d8 [32];
  undefined1 auStack_3b8 [32];
  undefined1 uStack_398;
  undefined1 uStack_390;
  undefined4 uStack_38f;
  undefined1 auStack_378 [32];
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [32];
  undefined1 auStack_318 [32];
  undefined1 auStack_2f8 [32];
  undefined1 auStack_2d8 [32];
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [32];
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [32];
  undefined1 auStack_1f8 [32];
  undefined1 uStack_1d8;
  undefined1 uStack_1d0;
  undefined5 uStack_1cf;
  undefined3 uStack_1ca;
  undefined5 uStack_1c7;
  undefined1 uStack_1c2;
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined3 uStack_1ab;
  undefined1 uStack_1a8;
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined4 uStack_107;
  undefined1 uStack_103;
  undefined3 uStack_102;
  undefined5 uStack_ff;
  undefined1 uStack_fa;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  if (DAT_0f70b5b8 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f70b5b8);
    if (iVar1 != 0) {
      func_0x0cf765c0(auStack_778,1,&UNK_0130fe00);
      func_0x0cf76680(auStack_758,2,&UNK_01478aaf);
      func_0x0cf76740(auStack_738,3,&UNK_011cb0a2);
      func_0x0cf76800(auStack_718,4,&UNK_011bee95);
      func_0x0cf768c0(auStack_6f8,5,&UNK_01352cae);
      func_0x0cf76980(auStack_6d8,9,&UNK_01424290);
      func_0x0cf76680(auStack_6b8,6,&UNK_01337f9d);
      func_0x0cf76a40(auStack_698,7,&UNK_014c02f5);
      func_0x0cf76980(auStack_678,8,&UNK_013e2c30);
      uStack_658 = 10;
      uStack_650 = 0x20;
      uStack_64f = _DAT_0123400f;
      uStack_64b = _UNK_01234013;
      uStack_647 = _UNK_01234017;
      uStack_643 = _UNK_0123401b;
      uStack_63f = 0;
      func_0x0cf76680(auStack_638,0xb,&UNK_013d725f);
      func_0x0cf765c0(auStack_618,0x21,&UNK_01457ba6);
      func_0x0cf768c0(auStack_5f8,0xc,&UNK_0143f60a);
      func_0x0cf76a40(auStack_5d8,0xd,&UNK_0122de4d);
      func_0x0cf765c0(auStack_5b8,0xe,&UNK_012195c7);
      func_0x0cf765c0(auStack_598,0x37,&UNK_013d7265);
      func_0x0cf76b00(auStack_578,0xf,&UNK_0140a776);
      func_0x0cf76bc0(auStack_558,0x10,&UNK_012c1140);
      func_0x0cf76a40(auStack_538,0x11,&UNK_013d726d);
      func_0x0cf76a40(auStack_518,0x12,&UNK_013d7277);
      func_0x0cf76b00(auStack_4f8,0x15,&UNK_0148b92b);
      func_0x0cf76c80(auStack_4d8,0x13,&UNK_0130f0bd);
      func_0x0cf76a40(auStack_4b8,0x16,&UNK_01470b47);
      func_0x0cf768c0(auStack_498,0x17,&UNK_01337fa3);
      func_0x0cf768c0(auStack_478,0x18,&UNK_014a5fcf);
      func_0x0cf76b00(auStack_458,0x1c,&UNK_014a5fda);
      func_0x0cf76d40(auStack_438,0x20,&UNK_012e95fc);
      func_0x0cf76c80(auStack_418,0x24,&UNK_011af406);
      uStack_3f8 = 0x14;
      uStack_3f0 = 0x1e;
      uStack_3ef = 0x6f626b6c616843;
      uStack_3e8 = 0x61;
      uStack_3e7 = 0x6b636f6c426472;
      uStack_3e0 = 0;
      func_0x0cf768c0(auStack_3d8,0x19,&UNK_01268ca8);
      func_0x0cf76980(auStack_3b8,0x1a,&UNK_01277206);
      uStack_398 = 0x1b;
      uStack_390 = 6;
      uStack_38f = 0x646542;
      func_0x0cf76d40(auStack_378,0x22,&UNK_01268cb3);
      func_0x0cf765c0(auStack_358,0x23,&UNK_013f0f51);
      func_0x0cf765c0(auStack_338,0x25,&UNK_01275a21);
      func_0x0cf76980(auStack_318,0x26,&UNK_013293bb);
      func_0x0cf76800(auStack_2f8,0x28,&UNK_011f11d1);
      func_0x0cf76b00(auStack_2d8,0x27,&UNK_013fcc60);
      func_0x0cf76bc0(auStack_2b8,0x29,&UNK_013e2c3d);
      func_0x0cf76b00(auStack_298,0x2a,&UNK_011a0d27);
      func_0x0cf76a40(auStack_278,0x2c,&UNK_01282af3);
      func_0x0cf76740(auStack_258,0x2f,&UNK_01234020);
      func_0x0cf76c80(auStack_238,0x2d,&UNK_013f0f59);
      func_0x0cf76980(auStack_218,0x2e,&UNK_01337fae);
      func_0x0cf76740(auStack_1f8,0x30,&UNK_012195cf);
      uStack_1d8 = 0x31;
      uStack_1d0 = 0x1a;
      uStack_1cf = 0x6b6c756353;
      uStack_1ca = 0x726853;
      uStack_1c7 = 0x72656b6569;
      uStack_1c2 = 0;
      uStack_1b8 = 0x2b;
      uStack_1b0 = 0xe;
      uStack_1af = 0x68656542;
      uStack_1ab = 0x657669;
      uStack_1a8 = 0;
      func_0x0cf76c80(auStack_198,0x32,&UNK_014db83b);
      func_0x0cf76e00(auStack_178,0x33,&UNK_01301c62);
      func_0x0cf76d40(auStack_158,0x34,&UNK_01234036);
      func_0x0cf76980(auStack_138,0x35,&UNK_0148b932);
      uStack_118 = 0x36;
      uStack_110 = 0x2a;
      uStack_10f = _DAT_012e960b;
      uStack_10b = _UNK_012e960f;
      uStack_107 = _UNK_012e9613;
      _uStack_103 = CONCAT31(0x536b6c,(char)_UNK_012e9617);
      uStack_ff = 0x726f736e65;
      uStack_fa = 0;
      func_0x0cf76980(auStack_f8,0x38,&UNK_011de44f);
      func_0x0cf76680(auStack_d8,0x39,&UNK_01282afd);
      func_0x0cf76740(auStack_b8,0x3a,&UNK_01301c74);
      func_0x0cf76680(auStack_98,0x3b,&UNK_01301c82);
      func_0x0cf76e00(auStack_78,0x3c,&UNK_013d7281);
      func_0x0cf76e00(auStack_58,0x3d,&UNK_0136eb85);
      func_0x0cf768c0(auStack_38,0x3e,&UNK_01241c3e);
      func_0x0cf76ec0(auStack_778);
      lVar2 = 0x748;
      do {
        if ((*(byte *)((long)auStack_778 + lVar2) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)((long)auStack_778 + lVar2 + 0x10),
                          *(ulong *)((long)auStack_778 + lVar2) & 0xfffffffffffffffe);
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != -0x18);
      func_0x0eee2f40(&UNK_0cf77680,&DAT_0f70b590,0xf53dab8);
      func_0x0410844d(&DAT_0f70b5b8);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x123400f  DaylightDetector
 * 0x12e960b  CalibratedSculkSensor
 */
