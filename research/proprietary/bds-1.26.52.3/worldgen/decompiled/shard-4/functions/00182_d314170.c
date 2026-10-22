/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd414170 (ELF vaddr 0xd314170)
 * Label: callee-of:0x4de9260
 * Body:  [[0d414170, 0d415a7a] [0d415a80, 0d41606d] [0d416070, 0d4160ad] [0d4160b0, 0d41647b] [0d416745, 0d416757] [0d416c07, 0d41717f]]
 * Ghidra: FUN_0d414170
 */


/* WARNING: Possible PIC construction at 0x0d414a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d414ae1: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d414a15) */
/* WARNING: Removing unreachable block (ram,0x0d414a47) */
/* WARNING: Removing unreachable block (ram,0x0d414a60) */
/* WARNING: Removing unreachable block (ram,0x0d414a71) */
/* WARNING: Removing unreachable block (ram,0x0d414ae6) */
/* WARNING: Removing unreachable block (ram,0x0d414b18) */
/* WARNING: Removing unreachable block (ram,0x0d414b31) */
/* WARNING: Removing unreachable block (ram,0x0d414b3e) */
/* WARNING: Removing unreachable block (ram,0x0d414b46) */
/* WARNING: Removing unreachable block (ram,0x0d414b49) */
/* WARNING: Removing unreachable block (ram,0x0d414b50) */
/* WARNING: Removing unreachable block (ram,0x0d414b63) */
/* WARNING: Removing unreachable block (ram,0x0d414b70) */
/* WARNING: Removing unreachable block (ram,0x0d414b88) */
/* WARNING: Removing unreachable block (ram,0x0d414ba1) */
/* WARNING: Removing unreachable block (ram,0x0d414bb9) */
/* WARNING: Removing unreachable block (ram,0x0d4163b8) */
/* WARNING: Removing unreachable block (ram,0x0d414c41) */
/* WARNING: Removing unreachable block (ram,0x0d414d6b) */
/* WARNING: Removing unreachable block (ram,0x0d414d5a) */
/* WARNING: Removing unreachable block (ram,0x0d414d6d) */
/* WARNING: Removing unreachable block (ram,0x0d414da6) */
/* WARNING: Removing unreachable block (ram,0x0d414ddb) */
/* WARNING: Removing unreachable block (ram,0x0d414de8) */
/* WARNING: Removing unreachable block (ram,0x0d414df0) */
/* WARNING: Removing unreachable block (ram,0x0d414df8) */
/* WARNING: Removing unreachable block (ram,0x0d414dc0) */
/* WARNING: Removing unreachable block (ram,0x0d414e04) */
/* WARNING: Removing unreachable block (ram,0x0d414dc4) */
/* WARNING: Removing unreachable block (ram,0x0d414e1c) */
/* WARNING: Removing unreachable block (ram,0x0d414e44) */
/* WARNING: Removing unreachable block (ram,0x0d414e4c) */
/* WARNING: Removing unreachable block (ram,0x0d414e60) */
/* WARNING: Removing unreachable block (ram,0x0d414e6b) */
/* WARNING: Removing unreachable block (ram,0x0d4163c9) */
/* WARNING: Removing unreachable block (ram,0x0d414e92) */
/* WARNING: Removing unreachable block (ram,0x0d414f43) */
/* WARNING: Removing unreachable block (ram,0x0d414efe) */
/* WARNING: Removing unreachable block (ram,0x0d414f17) */
/* WARNING: Removing unreachable block (ram,0x0d414f61) */
/* WARNING: Removing unreachable block (ram,0x0d414f20) */
/* WARNING: Removing unreachable block (ram,0x0d414f2e) */
/* WARNING: Removing unreachable block (ram,0x0d414f95) */
/* WARNING: Removing unreachable block (ram,0x0d414f9a) */
/* WARNING: Removing unreachable block (ram,0x0d414fa5) */
/* WARNING: Removing unreachable block (ram,0x0d414fb9) */
/* WARNING: Removing unreachable block (ram,0x0d414fbe) */
/* WARNING: Removing unreachable block (ram,0x0d414fcc) */
/* WARNING: Removing unreachable block (ram,0x0d414fde) */
/* WARNING: Removing unreachable block (ram,0x0d414fef) */
/* WARNING: Removing unreachable block (ram,0x0d415007) */
/* WARNING: Removing unreachable block (ram,0x0d415019) */
/* WARNING: Removing unreachable block (ram,0x0d41502a) */
/* WARNING: Removing unreachable block (ram,0x0d41543c) */
/* WARNING: Removing unreachable block (ram,0x0d41504b) */
/* WARNING: Removing unreachable block (ram,0x0d41545c) */
/* WARNING: Removing unreachable block (ram,0x0d41505a) */
/* WARNING: Removing unreachable block (ram,0x0d41508e) */
/* WARNING: Removing unreachable block (ram,0x0d4150a7) */
/* WARNING: Removing unreachable block (ram,0x0d4150b4) */
/* WARNING: Removing unreachable block (ram,0x0d4150bf) */
/* WARNING: Removing unreachable block (ram,0x0d4150c6) */
/* WARNING: Removing unreachable block (ram,0x0d4150dc) */
/* WARNING: Removing unreachable block (ram,0x0d41516a) */
/* WARNING: Removing unreachable block (ram,0x0d415183) */
/* WARNING: Removing unreachable block (ram,0x0d415190) */
/* WARNING: Removing unreachable block (ram,0x0d41519b) */
/* WARNING: Removing unreachable block (ram,0x0d4151a2) */
/* WARNING: Removing unreachable block (ram,0x0d4151b5) */
/* WARNING: Removing unreachable block (ram,0x0d415251) */
/* WARNING: Removing unreachable block (ram,0x0d41526a) */
/* WARNING: Removing unreachable block (ram,0x0d415277) */
/* WARNING: Removing unreachable block (ram,0x0d415282) */
/* WARNING: Removing unreachable block (ram,0x0d415289) */
/* WARNING: Removing unreachable block (ram,0x0d41529c) */
/* WARNING: Removing unreachable block (ram,0x0d41533b) */
/* WARNING: Removing unreachable block (ram,0x0d415354) */
/* WARNING: Removing unreachable block (ram,0x0d415361) */
/* WARNING: Removing unreachable block (ram,0x0d41536c) */
/* WARNING: Removing unreachable block (ram,0x0d415373) */
/* WARNING: Removing unreachable block (ram,0x0d415386) */
/* WARNING: Removing unreachable block (ram,0x0d4163da) */
/* WARNING: Removing unreachable block (ram,0x0d4153f9) */
/* WARNING: Removing unreachable block (ram,0x0d415472) */
/* WARNING: Removing unreachable block (ram,0x0d415420) */
/* WARNING: Removing unreachable block (ram,0x0d415474) */
/* WARNING: Removing unreachable block (ram,0x0d41553e) */
/* WARNING: Removing unreachable block (ram,0x0d415559) */
/* WARNING: Removing unreachable block (ram,0x0d415548) */
/* WARNING: Removing unreachable block (ram,0x0d41555b) */
/* WARNING: Removing unreachable block (ram,0x0d415567) */
/* WARNING: Removing unreachable block (ram,0x0d41557e) */
/* WARNING: Removing unreachable block (ram,0x0d4155a7) */
/* WARNING: Removing unreachable block (ram,0x0d4155b4) */
/* WARNING: Removing unreachable block (ram,0x0d4155bc) */
/* WARNING: Removing unreachable block (ram,0x0d4155c4) */
/* WARNING: Removing unreachable block (ram,0x0d41558b) */
/* WARNING: Removing unreachable block (ram,0x0d4155ce) */
/* WARNING: Removing unreachable block (ram,0x0d41558f) */
/* WARNING: Removing unreachable block (ram,0x0d4155e4) */
/* WARNING: Removing unreachable block (ram,0x0d415610) */
/* WARNING: Removing unreachable block (ram,0x0d415618) */
/* WARNING: Removing unreachable block (ram,0x0d4163eb) */
/* WARNING: Removing unreachable block (ram,0x0d415643) */
/* WARNING: Removing unreachable block (ram,0x0d415704) */
/* WARNING: Removing unreachable block (ram,0x0d4156ac) */
/* WARNING: Removing unreachable block (ram,0x0d4156ca) */
/* WARNING: Removing unreachable block (ram,0x0d415727) */
/* WARNING: Removing unreachable block (ram,0x0d4156d9) */
/* WARNING: Removing unreachable block (ram,0x0d4156e7) */
/* WARNING: Removing unreachable block (ram,0x0d415763) */
/* WARNING: Removing unreachable block (ram,0x0d415768) */
/* WARNING: Removing unreachable block (ram,0x0d415773) */
/* WARNING: Removing unreachable block (ram,0x0d415786) */
/* WARNING: Removing unreachable block (ram,0x0d41578b) */
/* WARNING: Removing unreachable block (ram,0x0d415799) */
/* WARNING: Removing unreachable block (ram,0x0d4157ac) */
/* WARNING: Removing unreachable block (ram,0x0d4157be) */
/* WARNING: Removing unreachable block (ram,0x0d4157d6) */
/* WARNING: Removing unreachable block (ram,0x0d4157e8) */
/* WARNING: Removing unreachable block (ram,0x0d4157f9) */
/* WARNING: Removing unreachable block (ram,0x0d415997) */
/* WARNING: Removing unreachable block (ram,0x0d415815) */
/* WARNING: Removing unreachable block (ram,0x0d4159b6) */
/* WARNING: Removing unreachable block (ram,0x0d415823) */
/* WARNING: Removing unreachable block (ram,0x0d4163fc) */
/* WARNING: Removing unreachable block (ram,0x0d41589f) */
/* WARNING: Removing unreachable block (ram,0x0d4159cc) */
/* WARNING: Removing unreachable block (ram,0x0d415986) */
/* WARNING: Removing unreachable block (ram,0x0d4159ce) */
/* WARNING: Removing unreachable block (ram,0x0d4159e2) */
/* WARNING: Removing unreachable block (ram,0x0d4159ed) */
/* WARNING: Removing unreachable block (ram,0x0d41640d) */
/* WARNING: Removing unreachable block (ram,0x0d415a18) */
/* WARNING: Removing unreachable block (ram,0x0d415a76) */
/* WARNING: Removing unreachable block (ram,0x0d415a8c) */
/* WARNING: Removing unreachable block (ram,0x0d415a93) */
/* WARNING: Removing unreachable block (ram,0x0d415a80) */
/* WARNING: Removing unreachable block (ram,0x0d415aa2) */
/* WARNING: Removing unreachable block (ram,0x0d415ac9) */
/* WARNING: Removing unreachable block (ram,0x0d415af7) */
/* WARNING: Removing unreachable block (ram,0x0d415b13) */
/* WARNING: Removing unreachable block (ram,0x0d415b17) */
/* WARNING: Removing unreachable block (ram,0x0d415b24) */
/* WARNING: Removing unreachable block (ram,0x0d415b28) */
/* WARNING: Removing unreachable block (ram,0x0d415b71) */
/* WARNING: Removing unreachable block (ram,0x0d415b3a) */
/* WARNING: Removing unreachable block (ram,0x0d415b43) */
/* WARNING: Removing unreachable block (ram,0x0d415b63) */
/* WARNING: Removing unreachable block (ram,0x0d415b73) */
/* WARNING: Removing unreachable block (ram,0x0d415bce) */
/* WARNING: Removing unreachable block (ram,0x0d415be0) */
/* WARNING: Removing unreachable block (ram,0x0d415d00) */
/* WARNING: Removing unreachable block (ram,0x0d415d14) */
/* WARNING: Removing unreachable block (ram,0x0d415d24) */
/* WARNING: Removing unreachable block (ram,0x0d415d4f) */
/* WARNING: Removing unreachable block (ram,0x0d415aae) */
/* WARNING: Removing unreachable block (ram,0x0d415d5a) */
/* WARNING: Removing unreachable block (ram,0x0d415d75) */
/* WARNING: Removing unreachable block (ram,0x0d415d6d) */
/* WARNING: Removing unreachable block (ram,0x0d415d81) */
/* WARNING: Removing unreachable block (ram,0x0d415a9d) */
/* WARNING: Removing unreachable block (ram,0x0d415dc0) */
/* WARNING: Removing unreachable block (ram,0x0d415e27) */
/* WARNING: Removing unreachable block (ram,0x0d415e5c) */
/* WARNING: Removing unreachable block (ram,0x0d415e6e) */
/* WARNING: Removing unreachable block (ram,0x0d415e72) */
/* WARNING: Removing unreachable block (ram,0x0d415e86) */
/* WARNING: Removing unreachable block (ram,0x0d415e8a) */
/* WARNING: Removing unreachable block (ram,0x0d415ede) */
/* WARNING: Removing unreachable block (ram,0x0d415ea1) */
/* WARNING: Removing unreachable block (ram,0x0d416442) */
/* WARNING: Removing unreachable block (ram,0x0d416447) */
/* WARNING: Removing unreachable block (ram,0x0d41644c) */
/* WARNING: Removing unreachable block (ram,0x0d41645a) */
/* WARNING: Removing unreachable block (ram,0x0d41646d) */
/* WARNING: Removing unreachable block (ram,0x0d416c07) */
/* WARNING: Removing unreachable block (ram,0x0d416c1d) */
/* WARNING: Removing unreachable block (ram,0x0d416c33) */
/* WARNING: Removing unreachable block (ram,0x0d416745) */
/* WARNING: Removing unreachable block (ram,0x0d416753) */
/* WARNING: Removing unreachable block (ram,0x0d416c54) */
/* WARNING: Removing unreachable block (ram,0x0d416c69) */
/* WARNING: Removing unreachable block (ram,0x0d416c82) */
/* WARNING: Removing unreachable block (ram,0x0d416c8f) */
/* WARNING: Removing unreachable block (ram,0x0d416c9a) */
/* WARNING: Removing unreachable block (ram,0x0d416ca1) */
/* WARNING: Removing unreachable block (ram,0x0d416cb7) */
/* WARNING: Removing unreachable block (ram,0x0d415eaa) */
/* WARNING: Removing unreachable block (ram,0x0d415ecd) */
/* WARNING: Removing unreachable block (ram,0x0d415ee0) */
/* WARNING: Removing unreachable block (ram,0x0d415f23) */
/* WARNING: Removing unreachable block (ram,0x0d415fa0) */
/* WARNING: Removing unreachable block (ram,0x0d415f38) */
/* WARNING: Removing unreachable block (ram,0x0d415fc6) */
/* WARNING: Removing unreachable block (ram,0x0d416010) */
/* WARNING: Removing unreachable block (ram,0x0d416020) */
/* WARNING: Removing unreachable block (ram,0x0d416064) */
/* WARNING: Removing unreachable block (ram,0x0d416079) */
/* WARNING: Removing unreachable block (ram,0x0d416082) */
/* WARNING: Removing unreachable block (ram,0x0d4160b0) */
/* WARNING: Removing unreachable block (ram,0x0d4160c8) */
/* WARNING: Removing unreachable block (ram,0x0d416095) */
/* WARNING: Removing unreachable block (ram,0x0d41609b) */
/* WARNING: Removing unreachable block (ram,0x0d416070) */
/* WARNING: Removing unreachable block (ram,0x0d4160ca) */
/* WARNING: Removing unreachable block (ram,0x0d4160dc) */
/* WARNING: Removing unreachable block (ram,0x0d416107) */
/* WARNING: Removing unreachable block (ram,0x0d415de1) */
/* WARNING: Removing unreachable block (ram,0x0d415dfc) */
/* WARNING: Removing unreachable block (ram,0x0d415f4e) */
/* WARNING: Removing unreachable block (ram,0x0d415e12) */
/* WARNING: Removing unreachable block (ram,0x0d415f74) */
/* WARNING: Removing unreachable block (ram,0x0d416112) */
/* WARNING: Removing unreachable block (ram,0x0d416126) */
/* WARNING: Removing unreachable block (ram,0x0d41612b) */
/* WARNING: Removing unreachable block (ram,0x0d416139) */
/* WARNING: Removing unreachable block (ram,0x0d41614b) */
/* WARNING: Removing unreachable block (ram,0x0d41615c) */
/* WARNING: Removing unreachable block (ram,0x0d416307) */
/* WARNING: Removing unreachable block (ram,0x0d41618b) */
/* WARNING: Removing unreachable block (ram,0x0d41632c) */
/* WARNING: Removing unreachable block (ram,0x0d41619e) */
/* WARNING: Removing unreachable block (ram,0x0d416353) */
/* WARNING: Removing unreachable block (ram,0x0d416375) */
/* WARNING: Removing unreachable block (ram,0x0d4161b4) */
/* WARNING: Removing unreachable block (ram,0x0d4161c1) */
/* WARNING: Removing unreachable block (ram,0x0d4161cc) */
/* WARNING: Removing unreachable block (ram,0x0d4161d6) */
/* WARNING: Removing unreachable block (ram,0x0d4161ef) */
/* WARNING: Removing unreachable block (ram,0x0d4161fc) */
/* WARNING: Removing unreachable block (ram,0x0d416207) */
/* WARNING: Removing unreachable block (ram,0x0d41620e) */
/* WARNING: Removing unreachable block (ram,0x0d416224) */
/* WARNING: Removing unreachable block (ram,0x0d4162aa) */
/* WARNING: Removing unreachable block (ram,0x0d4162c3) */
/* WARNING: Removing unreachable block (ram,0x0d4162d0) */
/* WARNING: Removing unreachable block (ram,0x0d4162db) */
/* WARNING: Removing unreachable block (ram,0x0d4162e2) */
/* WARNING: Removing unreachable block (ram,0x0d4162f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d414170(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined8 **ppuVar22;
  bool bVar23;
  undefined1 uStack_5c9;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  long *plStack_5b0;
  uint *puStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  undefined8 **ppuStack_520;
  undefined **ppuStack_518;
  undefined8 *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4d9;
  undefined8 *puStack_4d8;
  undefined1 uStack_4d0;
  undefined7 uStack_4cf;
  undefined1 uStack_4c8;
  undefined4 uStack_4c7;
  undefined1 uStack_4c3;
  undefined2 uStack_4c2;
  undefined1 uStack_4c0;
  undefined5 uStack_4bf;
  undefined2 uStack_4ba;
  undefined8 **ppuStack_4b8;
  long *plStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  byte *pbStack_480;
  undefined8 uStack_478;
  byte bStack_470;
  undefined7 uStack_46f;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_448;
  undefined **ppuStack_440;
  undefined8 **ppuStack_438;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *apuStack_128 [4];
  undefined **ppuStack_108;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_460 = 0;
  uStack_458 = 0;
  bStack_470 = 0x1e;
  uStack_46f = 0x65727574616566;
  uStack_468 = 0x5f;
  uStack_467 = 0x70616e735f6f74;
  uStack_478 = 0xd3338d03022785a6;
  uStack_70 = 0;
  ppuStack_440 = (undefined **)0x0;
  lStack_78 = 0;
  puStack_448 = (undefined8 *)&UNK_0f470ab8;
  uStack_4f0 = 0xd414208;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar10 == (long *)0x0) {
    uStack_4f0 = 0xd4163a2;
    func_0x0eec74c0(0x1e0,0);
  }
  puStack_4d8 = puStack_448;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f46ab48;
  uStack_4d0 = 0;
  uStack_4cf = 0;
  puStack_448 = (undefined8 *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  uStack_4f0 = 0xd41427d;
  func_0x04aa75f0(plVar10 + 0xe,&uStack_4d9,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0f46ab98;
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  if (puStack_4d8 == (undefined8 *)0x0) {
    plVar10[0x3a] = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uStack_4f0 = 0xd4142ff;
    (*(code *)*puStack_4d8)(&puStack_4d8,plVar10 + 0x2e);
    puVar11 = puStack_4d8;
    puStack_4d8 = (undefined8 *)0x0;
    plVar10[0x2e] = (long)puVar11;
    plVar10[0x3a] = 0;
    if ((*(byte *)(plVar10 + 0x12) & 1) == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      uStack_4f0 = 0xd414361;
      func_0x0412a280(plVar10[0x14],plVar10[0x12] & 0xfffffffffffffffe);
      puVar11 = puStack_4d8;
    }
  }
  pbVar2 = (byte *)(plVar10 + 0x12);
  pbVar2[0] = 0x22;
  uVar7 = _UNK_01207d03;
  uVar6 = _UNK_01207cff;
  uVar5 = _UNK_01207cfb;
  pbVar2[1] = 0x66;
  *(undefined4 *)((long)plVar10 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar10 + 0x96) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x9a) = uVar6;
  *(undefined4 *)((long)plVar10 + 0x9e) = uVar7;
  *(undefined4 *)((long)plVar10 + 0xa2) = 0;
  *(undefined2 *)((long)plVar10 + 0xa6) = 0;
  plVar10[0x11] = 0xf6c39062bb9edf3;
  plVar10[0x15] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    uStack_4f0 = 0xd4143bd;
    (*(code *)puVar11[1])(&puStack_4d8);
  }
  plVar15 = plVar10 + 1;
  if (puStack_448 != (undefined8 *)0x0) {
    uStack_4f0 = 0xd4143d9;
    (*(code *)puStack_448[1])(&puStack_448);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  uStack_4f0 = 0xd4143fd;
  plStack_498 = plVar15;
  uStack_488 = param_2;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    uStack_4f0 = 0xd4163b3;
    func_0x0eec74c0(0x80,0);
  }
  plStack_490 = plVar10 + 4;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0f46ac78;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0f46acc8;
  puVar11[0xe] = plStack_490;
  puVar11[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  uStack_4d0 = SUB81(puVar11,0);
  uStack_4cf = (undefined7)((ulong)puVar11 >> 8);
  uStack_4f0 = 0xd41446b;
  uStack_4e8 = param_1;
  puStack_4d8 = puVar11 + 4;
  pbStack_480 = pbVar2;
  puVar12 = (undefined4 *)func_0x05060a00(param_1,&uStack_478,1);
  plVar15 = plVar10 + 0x11;
  plVar16 = *(long **)(puVar12 + 0x24);
  if (plVar16 < *(long **)(puVar12 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar15) {
LAB_0d4144b9:
      *plVar16 = *plVar15;
      plVar16[5] = (long)(puVar11 + 4);
      plVar16[6] = (long)puVar11;
LAB_0d414516:
      LOCK();
      puVar11[1] = puVar11[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbStack_480 & 1) == 0) {
        plVar16[3] = *(long *)(pbStack_480 + 0x10);
        lVar13 = *(long *)(pbStack_480 + 8);
        plVar16[1] = *(long *)pbStack_480;
        plVar16[2] = lVar13;
        goto LAB_0d4144b9;
      }
      uStack_4f0 = 0xd4144fc;
      func_0x04885070(plVar16 + 1,plVar10[0x14],plVar10[0x13]);
      *plVar16 = *plVar15;
      puVar11 = (undefined8 *)CONCAT71(uStack_4cf,uStack_4d0);
      plVar16[5] = (long)puStack_4d8;
      plVar16[6] = CONCAT71(uStack_4cf,uStack_4d0);
      if (puVar11 != (undefined8 *)0x0) goto LAB_0d414516;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar12 + 0x24) = plVar16;
  }
  else {
    uStack_4f0 = 0xd4144e1;
    plVar16 = (long *)func_0x05064100(puVar12 + 0x22,plVar15,&puStack_4d8);
  }
  uVar19 = uStack_4e8;
  *(long **)(puVar12 + 0x24) = plVar16;
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
  *(undefined4 *)(plVar10 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      uStack_4f0 = 0xd41456d;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uStack_4f0 = 0xd414575;
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  plVar15 = (long *)CONCAT71(uStack_4cf,uStack_4d0);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      uStack_4f0 = 0xd4145a9;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uStack_4f0 = 0xd4145b1;
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_498;
  LOCK();
  lVar13 = *plStack_498;
  *plStack_498 = *plStack_498 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    uStack_4f0 = 0xd414662;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    uStack_4f0 = 0xd41466a;
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plStack_498;
    *plStack_498 = *plStack_498 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    uStack_4f0 = 0xd414681;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    uStack_4f0 = 0xd414689;
    func_0x0412c2d0(plVar10);
  }
  apuStack_128[0] = &UNK_0f470ae0;
  ppuVar14 = apuStack_128;
  ppuStack_108 = ppuVar14;
  ppuVar22 = (undefined8 **)(plVar10 + 0x36);
  ppuStack_4b8 = &puStack_4d8;
  puStack_4d8 = (undefined8 *)&UNK_0f470ae0;
  puVar11 = (undefined8 *)0x20;
  if (ppuVar22 == &puStack_4d8) {
LAB_0d414714:
    uStack_4f0 = 0xd41471b;
    (**(code **)((long)*ppuStack_4b8 + (long)puVar11))();
  }
  else {
    ppuVar3 = (undefined8 **)plVar10[0x3a];
    if (ppuVar3 == ppuVar22) {
      puStack_448 = (undefined8 *)&UNK_0f470ae0;
      ppuStack_4b8 = (undefined8 **)0x0;
      uStack_4f0 = 0xd4146ad;
      (*(code *)(*ppuVar3)[3])(ppuVar3,&puStack_4d8);
      uStack_4f0 = 0xd4146ba;
      (**(code **)(*(long *)plVar10[0x3a] + 0x20))();
      plVar10[0x3a] = 0;
      uStack_4f0 = 0xd4146e0;
      ppuStack_4b8 = &puStack_4d8;
      (*(code *)puStack_448[3])(&puStack_448,ppuVar22);
      uStack_4f0 = 0xd4146f3;
      (*(code *)puStack_448[4])(&puStack_448);
      plVar10[0x3a] = (long)ppuVar22;
      if (ppuStack_4b8 != &puStack_4d8) goto LAB_0d414709;
      goto LAB_0d414714;
    }
    plVar10[0x36] = (long)&UNK_0f470ae0;
    ppuStack_4b8 = ppuVar3;
    plVar10[0x3a] = (long)ppuVar22;
    if (ppuVar3 == &puStack_4d8) goto LAB_0d414714;
LAB_0d414709:
    puVar11 = (undefined8 *)0x28;
    if (ppuStack_4b8 != (undefined8 **)0x0) goto LAB_0d414714;
  }
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_4f0 = 0xd414745;
  (**(code **)(*plStack_490 + 0x10))(plStack_490,&uStack_308);
  if ((uStack_308 & 1) != 0) {
    uStack_4f0 = 0xd414768;
    func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
  }
  if (ppuStack_108 == ppuVar14) {
    lVar13 = 0x20;
LAB_0d4147f1:
    uStack_4f0 = 0xd4147f7;
    (**(code **)(*ppuStack_108 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto LAB_0d4147f1;
  }
  if (lStack_78 != 0) {
    uStack_4f0 = 0xd414797;
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_470 & 1) != 0) {
    uStack_4f0 = 0xd4147b4;
    func_0x0412a280(uStack_460,CONCAT71(uStack_46f,bStack_470) & 0xfffffffffffffffe);
  }
  if (_DAT_0f71ffb8 == 6) {
    puVar11 = (undefined8 *)0xf71ff80;
LAB_0d414850:
    puStack_448 = (undefined8 *)*puVar11;
    ppuStack_440 = (undefined **)0x0;
    ppuVar21 = (undefined **)puVar11[1];
    if (((ulong)ppuVar21 & 0x80000000000000) != 0) {
      lVar13 = *(long *)(((ulong)ppuVar21 & 0xff00ffffffffffff) - 8);
      lVar20 = lVar13 + 9;
      uStack_4f0 = 0xd41489c;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar20,8);
      if (plVar10 == (long *)0x0 && lVar20 != 0) {
        uStack_4f0 = 0xd41642b;
        func_0x0eec74c0(lVar20,8);
      }
      *plVar10 = lVar13;
      uStack_4f0 = 0xd4148c6;
      func_0x0eee2f00(plVar10 + 1,(ulong)ppuVar21 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar10 + lVar13 + 8) = 0;
      ppuVar21 = (undefined **)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      uVar19 = uStack_4e8;
      ppuVar14 = ppuVar21;
    }
    ppuStack_438 = (undefined8 **)0x0;
    ppuVar22 = (undefined8 **)puVar11[2];
    ppuStack_440 = ppuVar21;
    ppuVar3 = ppuVar22;
    if (((ulong)ppuVar22 & 0x80000000000000) != 0) {
      puVar4 = *(undefined **)(((ulong)ppuVar22 & 0xff00ffffffffffff) - 8);
      puVar11 = (undefined8 *)(puVar4 + 9);
      uStack_4f0 = 0xd41493d;
      ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,puVar11,8);
      if (puVar11 != (undefined8 *)0x0 && ppuVar14 == (undefined **)0x0) {
        uStack_4f0 = 0xd41643d;
        func_0x0eec74c0(puVar11,8);
      }
      *ppuVar14 = puVar4;
      uStack_4f0 = 0xd41496d;
      func_0x0eee2f00(ppuVar14 + 1,(ulong)ppuVar22 & 0xff00ffffffffffff,puVar4);
      *(undefined1 *)((long)ppuVar14 + (long)(puVar4 + 8)) = 0;
      ppuVar22 = (undefined8 **)((ulong)(ppuVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      uVar19 = uStack_4e8;
      ppuVar3 = ppuVar22;
    }
  }
  else {
    if (_DAT_0f71fff8 == 6) {
      puVar11 = (undefined8 *)0xf71ffc0;
      goto LAB_0d414850;
    }
    if (_DAT_0f720038 == 6) {
      puVar11 = (undefined8 *)0xf720000;
      goto LAB_0d414850;
    }
    if (_DAT_0f720078 == 6) {
      puVar11 = (undefined8 *)0xf720040;
      goto LAB_0d414850;
    }
    if (_DAT_0f7200b8 == 6) {
      puVar11 = (undefined8 *)0xf720080;
      goto LAB_0d414850;
    }
    if (_DAT_0f7200f8 == 6) {
      puVar11 = (undefined8 *)0xf7200c0;
      goto LAB_0d414850;
    }
    puStack_448 = (undefined8 *)0x0;
    ppuStack_440 = (undefined **)0x0;
    ppuStack_438 = (undefined8 **)0x0;
    ppuVar3 = ppuStack_438;
  }
  ppuStack_438 = ppuVar3;
  uStack_4f0 = 0xd4149aa;
  cVar9 = func_0x04fa7a10(uStack_488,&puStack_448);
  if (cVar9 == '\0') {
    uStack_4c3 = 0;
    uStack_4c2 = 0;
    uStack_4c0 = 0;
    uStack_4bf = 0;
    uStack_4ba = 0;
    ppuStack_4b8 = (undefined8 **)0x0;
    uStack_4d0 = 0x18;
    uStack_4cf = 0x5f686372616573;
    uStack_4c8 = 0x72;
    uStack_4c7 = 0x65676e61;
    puStack_4d8 = (undefined8 *)0x89a464a97df9e87;
    uStack_160 = 0;
    puStack_168 = &UNK_0f470b60;
    ppuVar21 = &puStack_168;
    uStack_4f0 = 0xd414ae6;
  }
  else {
    uStack_4ba = 0;
    ppuStack_4b8 = (undefined8 **)0x0;
    uStack_4d0 = 0x2a;
    uStack_4cf = (undefined7)_DAT_0138902f;
    uStack_4c8 = (undefined1)((ulong)_DAT_0138902f >> 0x38);
    uStack_4c7 = (undefined4)_UNK_01389037;
    uStack_4c3 = (undefined1)((ulong)_UNK_01389037 >> 0x20);
    uStack_4c2 = 0x6863;
    uStack_4c0 = 0x5f;
    uStack_4bf = 0x65676e6172;
    puStack_4d8 = (undefined8 *)0x5cc71243abeb6304;
    uStack_1a0 = 0;
    puStack_1a8 = &UNK_0f470b78;
    ppuVar21 = &puStack_1a8;
    uStack_4f0 = 0xd414a15;
  }
  ppuStack_4b8 = (undefined8 **)0x0;
  uStack_4ba = 0;
  uStack_500 = 0x80000000000000;
  uStack_508 = 0xff00ffffffffffff;
  plStack_568 = (long *)0x0;
  uStack_560 = 0;
  ppuStack_520 = ppuVar22;
  ppuStack_518 = ppuVar14;
  puStack_510 = puVar11;
  uStack_4f8 = uVar19;
  if ((undefined8 *)*ppuVar21 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    (**(code **)*ppuVar21)(ppuVar21,&plStack_568);
    plVar10 = (long *)*ppuVar21;
  }
  *ppuVar21 = (undefined *)0x0;
  plStack_568 = plVar10;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46ad28;
  plStack_5b8 = (long *)0x0;
  plStack_5b0 = (long *)0x0;
  if (plVar10 == (long *)0x0) {
    plStack_5b8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar10)(&plStack_568,&plStack_5b8);
    plStack_5b8 = plStack_568;
  }
  plStack_568 = (long *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_5c9,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plStack_5c8 = plVar15 + 0x11;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f46ad78;
  plVar15[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (plStack_5b8 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_5b8)(&plStack_5b8,plVar15 + 0x30);
    plVar10 = plStack_5b8;
  }
  plStack_5b8 = (long *)0x0;
  plVar15[0x30] = (long)plVar10;
  puStack_570 = (uint *)(plVar15 + 0x12);
  if (plStack_5c8 == (long *)&DAT_0f552078) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puStack_570 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552090;
        uVar7 = uRam000000000f55208c;
        uVar6 = _DAT_0f552088;
        uVar5 = uRam000000000f552084;
        *puStack_570 = _DAT_0f552080;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar5;
        *(undefined4 *)(plVar15 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puStack_570,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar23 = (_DAT_0f552080 & 1) != 0;
      lVar13 = 0xf552081;
      if (bVar23) {
        lVar13 = _DAT_0f552090;
      }
      uVar18 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar23) {
        uVar18 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      FUN_04885120(puStack_570,lVar13,uVar18);
    }
    plVar15[0x11] = _DAT_0f552078;
    plVar15[0x15] = 0;
    if (plStack_5b8 != (long *)0x0) {
      (*(code *)plStack_5b8[1])(&plStack_5b8);
    }
  }
  plVar10 = plVar15 + 1;
  if (plStack_568 != (long *)0x0) {
    (*(code *)plStack_568[1])(&plStack_568);
  }
  LOCK();
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f46ae58;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[4] = (long)&UNK_0f46aea8;
  plVar16[0xe] = (long)(plVar15 + 4);
  plVar16[0xf] = (long)plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  plStack_5c0 = plVar15 + 4;
  plStack_5b8 = plVar16 + 4;
  plStack_5b0 = plVar16;
  puVar12 = (undefined4 *)func_0x05060a00(uVar19,&puStack_4d8,1);
  plVar17 = *(long **)(puVar12 + 0x24);
  if (*(long **)(puVar12 + 0x26) <= plVar17) {
    plVar17 = (long *)func_0x05064100(puVar12 + 0x22,plStack_5c8,&plStack_5b8);
    goto LAB_0d417074;
  }
  plVar17[2] = 0;
  plVar17[3] = 0;
  *plVar17 = 0;
  plVar17[1] = 0;
  plVar17[4] = 0;
  if (plVar17 == plStack_5c8) {
LAB_0d416fed:
    *plVar17 = *plStack_5c8;
    plVar17[5] = (long)(plVar16 + 4);
    plVar17[6] = (long)plVar16;
LAB_0d417064:
    LOCK();
    plVar16[1] = plVar16[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_570 & 1) == 0) {
      plVar17[3] = *(long *)(puStack_570 + 4);
      lVar13 = *(long *)(puStack_570 + 2);
      plVar17[1] = *(long *)puStack_570;
      plVar17[2] = lVar13;
      goto LAB_0d416fed;
    }
    func_0x04885070(plVar17 + 1,plVar15[0x14],plVar15[0x13]);
    *plVar17 = *plStack_5c8;
    plVar17[5] = (long)plStack_5b8;
    plVar17[6] = (long)plStack_5b0;
    plVar16 = plStack_5b0;
    if (plStack_5b0 != (long *)0x0) goto LAB_0d417064;
  }
  plVar17 = plVar17 + 7;
  *(long **)(puVar12 + 0x24) = plVar17;
LAB_0d417074:
  plVar16 = plStack_5c0;
  *(long **)(puVar12 + 0x24) = plVar17;
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar6;
  *(undefined4 *)(plVar15 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_5b0;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  if (plStack_5b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5b0 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_5b0 + 0x10))(plStack_5b0);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar13 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  return plVar16;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1234c88  allow_air_placement
 * 0x138902f  vertical_search_range
 * 0x1494d5d  <any array element>
 * 0x14c1172  embed_in_surface
 * 0x14dc19c  allowed_surface_blocks
 */
