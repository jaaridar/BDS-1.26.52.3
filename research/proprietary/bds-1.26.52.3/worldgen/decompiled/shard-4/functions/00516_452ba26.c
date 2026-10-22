/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x462ba26 (ELF vaddr 0x452ba26)
 * Label: caller-of-callee
 * Body:  [[0462ba26, 0462cdd5] [0462ce91, 0462cea2] [0462ceec, 0462cf05] [0462cfa9, 0462cfb6] [0462d09c, 0462d53b]]
 * Ghidra: FUN_0462ba26
 */


/* WARNING: Possible PIC construction at 0x0462ba8d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0462c621: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0462c560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0462bb49: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0462c565) */
/* WARNING: Removing unreachable block (ram,0x0462c626) */
/* WARNING: Removing unreachable block (ram,0x0462ba92) */
/* WARNING: Removing unreachable block (ram,0x0462ba9b) */
/* WARNING: Removing unreachable block (ram,0x0462bbdd) */
/* WARNING: Removing unreachable block (ram,0x0462bc95) */
/* WARNING: Removing unreachable block (ram,0x0462be27) */
/* WARNING: Removing unreachable block (ram,0x0462bd40) */
/* WARNING: Removing unreachable block (ram,0x0462bd4e) */
/* WARNING: Removing unreachable block (ram,0x0462be2c) */
/* WARNING: Removing unreachable block (ram,0x0462bbea) */
/* WARNING: Removing unreachable block (ram,0x0462bd53) */
/* WARNING: Removing unreachable block (ram,0x0462bbff) */
/* WARNING: Removing unreachable block (ram,0x0462c08a) */
/* WARNING: Removing unreachable block (ram,0x0462c0b8) */
/* WARNING: Removing unreachable block (ram,0x0462c0cf) */
/* WARNING: Removing unreachable block (ram,0x0462c0fd) */
/* WARNING: Removing unreachable block (ram,0x0462c111) */
/* WARNING: Removing unreachable block (ram,0x0462bc0f) */
/* WARNING: Removing unreachable block (ram,0x0462bc42) */
/* WARNING: Removing unreachable block (ram,0x0462bc55) */
/* WARNING: Removing unreachable block (ram,0x0462bc67) */
/* WARNING: Removing unreachable block (ram,0x0462c1c1) */
/* WARNING: Removing unreachable block (ram,0x0462c1ef) */
/* WARNING: Removing unreachable block (ram,0x0462c206) */
/* WARNING: Removing unreachable block (ram,0x0462c243) */
/* WARNING: Removing unreachable block (ram,0x0462c25c) */
/* WARNING: Removing unreachable block (ram,0x0462c26c) */
/* WARNING: Removing unreachable block (ram,0x0462c270) */
/* WARNING: Removing unreachable block (ram,0x0462c276) */
/* WARNING: Removing unreachable block (ram,0x0462c2a2) */
/* WARNING: Removing unreachable block (ram,0x0462c306) */
/* WARNING: Removing unreachable block (ram,0x0462c319) */
/* WARNING: Removing unreachable block (ram,0x0462c320) */
/* WARNING: Removing unreachable block (ram,0x0462c333) */
/* WARNING: Removing unreachable block (ram,0x0462cc82) */
/* WARNING: Removing unreachable block (ram,0x0462cc96) */
/* WARNING: Removing unreachable block (ram,0x0462c344) */
/* WARNING: Removing unreachable block (ram,0x0462c34b) */
/* WARNING: Removing unreachable block (ram,0x0462c35e) */
/* WARNING: Removing unreachable block (ram,0x0462c3a9) */
/* WARNING: Removing unreachable block (ram,0x0462c3c2) */
/* WARNING: Removing unreachable block (ram,0x0462c404) */
/* WARNING: Removing unreachable block (ram,0x0462bc78) */
/* WARNING: Removing unreachable block (ram,0x0462bd87) */
/* WARNING: Removing unreachable block (ram,0x0462bd99) */
/* WARNING: Removing unreachable block (ram,0x0462c534) */
/* WARNING: Removing unreachable block (ram,0x0462c55d) */
/* WARNING: Removing unreachable block (ram,0x0462bda3) */
/* WARNING: Removing unreachable block (ram,0x0462bde3) */
/* WARNING: Removing unreachable block (ram,0x0462bdf6) */
/* WARNING: Removing unreachable block (ram,0x0462be00) */
/* WARNING: Removing unreachable block (ram,0x0462be19) */
/* WARNING: Removing unreachable block (ram,0x0462be1d) */
/* WARNING: Removing unreachable block (ram,0x0462be37) */
/* WARNING: Removing unreachable block (ram,0x0462be22) */
/* WARNING: Removing unreachable block (ram,0x0462be48) */
/* WARNING: Removing unreachable block (ram,0x0462bf68) */
/* WARNING: Removing unreachable block (ram,0x0462bfb2) */
/* WARNING: Removing unreachable block (ram,0x0462bfc4) */
/* WARNING: Removing unreachable block (ram,0x0462bfd5) */
/* WARNING: Removing unreachable block (ram,0x0462bfdc) */
/* WARNING: Removing unreachable block (ram,0x0462bfef) */
/* WARNING: Removing unreachable block (ram,0x0462c14a) */
/* WARNING: Removing unreachable block (ram,0x0462c178) */
/* WARNING: Removing unreachable block (ram,0x0462c18f) */
/* WARNING: Removing unreachable block (ram,0x0462bffc) */
/* WARNING: Removing unreachable block (ram,0x0462c56a) */
/* WARNING: Removing unreachable block (ram,0x0462c577) */
/* WARNING: Removing unreachable block (ram,0x0462c5a5) */
/* WARNING: Removing unreachable block (ram,0x0462c5bc) */
/* WARNING: Removing unreachable block (ram,0x0462c00c) */
/* WARNING: Removing unreachable block (ram,0x0462c02e) */
/* WARNING: Removing unreachable block (ram,0x0462cd1c) */
/* WARNING: Removing unreachable block (ram,0x0462cd21) */
/* WARNING: Removing unreachable block (ram,0x0462c043) */
/* WARNING: Removing unreachable block (ram,0x0462c05e) */
/* WARNING: Removing unreachable block (ram,0x0462c063) */
/* WARNING: Removing unreachable block (ram,0x0462c695) */
/* WARNING: Removing unreachable block (ram,0x0462c070) */
/* WARNING: Removing unreachable block (ram,0x0462c5e9) */
/* WARNING: Removing unreachable block (ram,0x0462cc32) */
/* WARNING: Removing unreachable block (ram,0x0462cc46) */
/* WARNING: Removing unreachable block (ram,0x0462be6e) */
/* WARNING: Removing unreachable block (ram,0x0462c41e) */
/* WARNING: Removing unreachable block (ram,0x0462c479) */
/* WARNING: Removing unreachable block (ram,0x0462c48c) */
/* WARNING: Removing unreachable block (ram,0x0462cccf) */
/* WARNING: Removing unreachable block (ram,0x0462cce3) */
/* WARNING: Removing unreachable block (ram,0x0462c4ae) */
/* WARNING: Removing unreachable block (ram,0x0462c62b) */
/* WARNING: Removing unreachable block (ram,0x0462c76e) */
/* WARNING: Removing unreachable block (ram,0x0462c7e3) */
/* WARNING: Removing unreachable block (ram,0x0462c777) */
/* WARNING: Removing unreachable block (ram,0x0462c7e5) */
/* WARNING: Removing unreachable block (ram,0x0462c7ea) */
/* WARNING: Removing unreachable block (ram,0x0462c840) */
/* WARNING: Removing unreachable block (ram,0x0462c859) */
/* WARNING: Removing unreachable block (ram,0x0462c633) */
/* WARNING: Removing unreachable block (ram,0x0462c77e) */
/* WARNING: Removing unreachable block (ram,0x0462c688) */
/* WARNING: Removing unreachable block (ram,0x0462c786) */
/* WARNING: Removing unreachable block (ram,0x0462c7aa) */
/* WARNING: Removing unreachable block (ram,0x0462c7c3) */
/* WARNING: Removing unreachable block (ram,0x0462c7ce) */
/* WARNING: Removing unreachable block (ram,0x0462c85e) */
/* WARNING: Removing unreachable block (ram,0x0462c89a) */
/* WARNING: Removing unreachable block (ram,0x0462c8ac) */
/* WARNING: Removing unreachable block (ram,0x0462c8be) */
/* WARNING: Removing unreachable block (ram,0x0462cac6) */
/* WARNING: Removing unreachable block (ram,0x0462caf4) */
/* WARNING: Removing unreachable block (ram,0x0462cb0b) */
/* WARNING: Removing unreachable block (ram,0x0462c8cc) */
/* WARNING: Removing unreachable block (ram,0x0462c8ef) */
/* WARNING: Removing unreachable block (ram,0x0462c90a) */
/* WARNING: Removing unreachable block (ram,0x0462cdcc) */
/* WARNING: Removing unreachable block (ram,0x0462ce91) */
/* WARNING: Removing unreachable block (ram,0x0462ceec) */
/* WARNING: Removing unreachable block (ram,0x0462cef7) */
/* WARNING: Removing unreachable block (ram,0x0462cfa9) */
/* WARNING: Removing unreachable block (ram,0x0462d09c) */
/* WARNING: Removing unreachable block (ram,0x0462d0a4) */
/* WARNING: Removing unreachable block (ram,0x0462d0c9) */
/* WARNING: Removing unreachable block (ram,0x0462d0f8) */
/* WARNING: Removing unreachable block (ram,0x0462d108) */
/* WARNING: Removing unreachable block (ram,0x0462d0d6) */
/* WARNING: Removing unreachable block (ram,0x0462d0b5) */
/* WARNING: Removing unreachable block (ram,0x0462c91f) */
/* WARNING: Removing unreachable block (ram,0x0462c93c) */
/* WARNING: Removing unreachable block (ram,0x0462c941) */
/* WARNING: Removing unreachable block (ram,0x0462cb3a) */
/* WARNING: Removing unreachable block (ram,0x0462cb43) */
/* WARNING: Removing unreachable block (ram,0x0462cb54) */
/* WARNING: Removing unreachable block (ram,0x0462cb69) */
/* WARNING: Removing unreachable block (ram,0x0462cd7c) */
/* WARNING: Removing unreachable block (ram,0x0462cd90) */
/* WARNING: Removing unreachable block (ram,0x0462c94f) */
/* WARNING: Removing unreachable block (ram,0x0462c984) */
/* WARNING: Removing unreachable block (ram,0x0462c99b) */
/* WARNING: Removing unreachable block (ram,0x0462cb94) */
/* WARNING: Removing unreachable block (ram,0x0462c9de) */
/* WARNING: Removing unreachable block (ram,0x0462ca5f) */
/* WARNING: Removing unreachable block (ram,0x0462ca72) */
/* WARNING: Removing unreachable block (ram,0x0462ca8b) */
/* WARNING: Removing unreachable block (ram,0x0462ca9e) */
/* WARNING: Removing unreachable block (ram,0x0462c4d2) */
/* WARNING: Removing unreachable block (ram,0x0462c6a4) */
/* WARNING: Removing unreachable block (ram,0x0462c527) */
/* WARNING: Removing unreachable block (ram,0x0462c6ac) */
/* WARNING: Removing unreachable block (ram,0x0462c6d0) */
/* WARNING: Removing unreachable block (ram,0x0462c6e9) */
/* WARNING: Removing unreachable block (ram,0x0462c6f0) */
/* WARNING: Removing unreachable block (ram,0x0462c703) */
/* WARNING: Removing unreachable block (ram,0x0462c731) */
/* WARNING: Removing unreachable block (ram,0x0462c748) */
/* WARNING: Removing unreachable block (ram,0x0462cb71) */
/* WARNING: Removing unreachable block (ram,0x0462cb7c) */
/* WARNING: Removing unreachable block (ram,0x0462be90) */
/* WARNING: Removing unreachable block (ram,0x0462bed1) */
/* WARNING: Removing unreachable block (ram,0x0462beda) */
/* WARNING: Removing unreachable block (ram,0x0462bee4) */
/* WARNING: Removing unreachable block (ram,0x0462befd) */
/* WARNING: Removing unreachable block (ram,0x0462bf2b) */
/* WARNING: Removing unreachable block (ram,0x0462bf42) */
/* WARNING: Removing unreachable block (ram,0x0462c5f1) */
/* WARNING: Removing unreachable block (ram,0x0462c609) */
/* WARNING: Removing unreachable block (ram,0x0462c616) */
/* WARNING: Removing unreachable block (ram,0x0462d13e) */
/* WARNING: Removing unreachable block (ram,0x0462d4a2) */
/* WARNING: Removing unreachable block (ram,0x0462d4b6) */
/* WARNING: Removing unreachable block (ram,0x0462d168) */
/* WARNING: Removing unreachable block (ram,0x0462d175) */
/* WARNING: Removing unreachable block (ram,0x0462d17f) */
/* WARNING: Removing unreachable block (ram,0x0462d19e) */
/* WARNING: Removing unreachable block (ram,0x0462d1c9) */
/* WARNING: Removing unreachable block (ram,0x0462d1e0) */
/* WARNING: Removing unreachable block (ram,0x0462d4ef) */
/* WARNING: Removing unreachable block (ram,0x0462d503) */
/* WARNING: Removing unreachable block (ram,0x0462d1fc) */
/* WARNING: Removing unreachable block (ram,0x0462d190) */
/* WARNING: Removing unreachable block (ram,0x0462d215) */
/* WARNING: Removing unreachable block (ram,0x0462d238) */
/* WARNING: Removing unreachable block (ram,0x0462d24a) */
/* WARNING: Removing unreachable block (ram,0x0462d283) */
/* WARNING: Removing unreachable block (ram,0x0462d287) */
/* WARNING: Removing unreachable block (ram,0x0462d295) */
/* WARNING: Removing unreachable block (ram,0x0462d28f) */
/* WARNING: Removing unreachable block (ram,0x0462d297) */
/* WARNING: Removing unreachable block (ram,0x0462d29d) */
/* WARNING: Removing unreachable block (ram,0x0462d2af) */
/* WARNING: Removing unreachable block (ram,0x0462d2b8) */
/* WARNING: Removing unreachable block (ram,0x0462d2cd) */
/* WARNING: Removing unreachable block (ram,0x0462d2c4) */
/* WARNING: Removing unreachable block (ram,0x0462d2cf) */
/* WARNING: Removing unreachable block (ram,0x0462d317) */
/* WARNING: Removing unreachable block (ram,0x0462d2db) */
/* WARNING: Removing unreachable block (ram,0x0462d32d) */
/* WARNING: Removing unreachable block (ram,0x0462d333) */
/* WARNING: Removing unreachable block (ram,0x0462d345) */
/* WARNING: Removing unreachable block (ram,0x0462d35f) */
/* WARNING: Removing unreachable block (ram,0x0462d351) */
/* WARNING: Removing unreachable block (ram,0x0462d36a) */
/* WARNING: Removing unreachable block (ram,0x0462d37b) */
/* WARNING: Removing unreachable block (ram,0x0462d392) */
/* WARNING: Removing unreachable block (ram,0x0462d412) */
/* WARNING: Removing unreachable block (ram,0x0462d416) */
/* WARNING: Removing unreachable block (ram,0x0462d41d) */
/* WARNING: Removing unreachable block (ram,0x0462d421) */
/* WARNING: Removing unreachable block (ram,0x0462d485) */
/* WARNING: Removing unreachable block (ram,0x0462d479) */
/* WARNING: Removing unreachable block (ram,0x0462d48a) */
/* WARNING: Removing unreachable block (ram,0x0462d483) */
/* WARNING: Removing unreachable block (ram,0x0462d490) */
/* WARNING: Removing unreachable block (ram,0x0462bac8) */
/* WARNING: Removing unreachable block (ram,0x0462cbe5) */
/* WARNING: Removing unreachable block (ram,0x0462cbf9) */
/* WARNING: Removing unreachable block (ram,0x0462bafa) */
/* WARNING: Removing unreachable block (ram,0x0462bb4e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0462ba26(long param_1,int *param_2)

{
  int iVar1;
  int iStack_1d8;
  int iStack_1d4;
  undefined *puStack_1d0;
  int aiStack_1c8 [2];
  undefined *puStack_1c0;
  
  iVar1 = *param_2;
  iStack_1d4 = param_2[1];
  puStack_1d0 = *(undefined **)(param_2 + 2);
  iStack_1d8 = iVar1;
  if (iVar1 != 0) {
    func_0x046556ce(aiStack_1c8,7);
    if (((puStack_1d0 != puStack_1c0) || (iVar1 != aiStack_1c8[0])) ||
       (*(int *)(param_1 + 0xc90) != 3)) {
      func_0x0461cfb2(param_1,0x10,&UNK_014106fc,&iStack_1d8);
      func_0x0461c36e(param_1,&iStack_1d8);
    }
    return;
  }
  func_0x0412d680(param_1 + 0xc98);
  if ((*(int *)(param_1 + 0xc90) != 3) &&
     ((*(int *)(param_1 + 0xc90) != 0 || (*(int *)(param_1 + 0xc94) != 2)))) {
    if ((cRam000000000f54ca90 == '\0') && (iVar1 = FUN_04108328(0xf54ca90), iVar1 != 0)) {
      _DAT_0f54ca88 = &UNK_0ef10598;
      __cxa_atexit(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
      func_0x0410844d(0xf54ca90);
    }
    iStack_1d8 = 9;
    puStack_1d0 = &DAT_0f54ca88;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(param_1 + 0xc98);
  return;
}


