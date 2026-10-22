/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x46457ec (ELF vaddr 0x45457ec)
 * Label: caller-of-callee
 * Body:  [[046457ec, 04646b9b] [04646c57, 04646c68] [04646cb2, 04646ccb] [04646d6f, 04646d7c] [04646e62, 04647301] [0eee2d60, 0eee2d65]]
 * Ghidra: FUN_046457ec
 */


/* WARNING: Possible PIC construction at 0x04645853: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046463e7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04646326: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0464590f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0464632b) */
/* WARNING: Removing unreachable block (ram,0x046463ec) */
/* WARNING: Removing unreachable block (ram,0x04645858) */
/* WARNING: Removing unreachable block (ram,0x04645861) */
/* WARNING: Removing unreachable block (ram,0x046459a3) */
/* WARNING: Removing unreachable block (ram,0x04645a5b) */
/* WARNING: Removing unreachable block (ram,0x04645bed) */
/* WARNING: Removing unreachable block (ram,0x04645b06) */
/* WARNING: Removing unreachable block (ram,0x04645b14) */
/* WARNING: Removing unreachable block (ram,0x04645bf2) */
/* WARNING: Removing unreachable block (ram,0x046459b0) */
/* WARNING: Removing unreachable block (ram,0x04645b19) */
/* WARNING: Removing unreachable block (ram,0x046459c5) */
/* WARNING: Removing unreachable block (ram,0x04645e50) */
/* WARNING: Removing unreachable block (ram,0x04645e7e) */
/* WARNING: Removing unreachable block (ram,0x04645e95) */
/* WARNING: Removing unreachable block (ram,0x04645ec3) */
/* WARNING: Removing unreachable block (ram,0x04645ed7) */
/* WARNING: Removing unreachable block (ram,0x046459d5) */
/* WARNING: Removing unreachable block (ram,0x04645a08) */
/* WARNING: Removing unreachable block (ram,0x04645a1b) */
/* WARNING: Removing unreachable block (ram,0x04645a2d) */
/* WARNING: Removing unreachable block (ram,0x04645f87) */
/* WARNING: Removing unreachable block (ram,0x04645fb5) */
/* WARNING: Removing unreachable block (ram,0x04645fcc) */
/* WARNING: Removing unreachable block (ram,0x04646009) */
/* WARNING: Removing unreachable block (ram,0x04646022) */
/* WARNING: Removing unreachable block (ram,0x04646032) */
/* WARNING: Removing unreachable block (ram,0x04646036) */
/* WARNING: Removing unreachable block (ram,0x0464603c) */
/* WARNING: Removing unreachable block (ram,0x04646068) */
/* WARNING: Removing unreachable block (ram,0x046460cc) */
/* WARNING: Removing unreachable block (ram,0x046460df) */
/* WARNING: Removing unreachable block (ram,0x046460e6) */
/* WARNING: Removing unreachable block (ram,0x046460f9) */
/* WARNING: Removing unreachable block (ram,0x04646a48) */
/* WARNING: Removing unreachable block (ram,0x04646a5c) */
/* WARNING: Removing unreachable block (ram,0x0464610a) */
/* WARNING: Removing unreachable block (ram,0x04646111) */
/* WARNING: Removing unreachable block (ram,0x04646124) */
/* WARNING: Removing unreachable block (ram,0x0464616f) */
/* WARNING: Removing unreachable block (ram,0x04646188) */
/* WARNING: Removing unreachable block (ram,0x046461ca) */
/* WARNING: Removing unreachable block (ram,0x04645a3e) */
/* WARNING: Removing unreachable block (ram,0x04645b4d) */
/* WARNING: Removing unreachable block (ram,0x04645b5f) */
/* WARNING: Removing unreachable block (ram,0x046462fa) */
/* WARNING: Removing unreachable block (ram,0x04646323) */
/* WARNING: Removing unreachable block (ram,0x04645b69) */
/* WARNING: Removing unreachable block (ram,0x04645ba9) */
/* WARNING: Removing unreachable block (ram,0x04645bbc) */
/* WARNING: Removing unreachable block (ram,0x04645bc6) */
/* WARNING: Removing unreachable block (ram,0x04645bdf) */
/* WARNING: Removing unreachable block (ram,0x04645be3) */
/* WARNING: Removing unreachable block (ram,0x04645bfd) */
/* WARNING: Removing unreachable block (ram,0x04645be8) */
/* WARNING: Removing unreachable block (ram,0x04645c0e) */
/* WARNING: Removing unreachable block (ram,0x04645d2e) */
/* WARNING: Removing unreachable block (ram,0x04645d78) */
/* WARNING: Removing unreachable block (ram,0x04645d8a) */
/* WARNING: Removing unreachable block (ram,0x04645d9b) */
/* WARNING: Removing unreachable block (ram,0x04645da2) */
/* WARNING: Removing unreachable block (ram,0x04645db5) */
/* WARNING: Removing unreachable block (ram,0x04645f10) */
/* WARNING: Removing unreachable block (ram,0x04645f3e) */
/* WARNING: Removing unreachable block (ram,0x04645f55) */
/* WARNING: Removing unreachable block (ram,0x04645dc2) */
/* WARNING: Removing unreachable block (ram,0x04646330) */
/* WARNING: Removing unreachable block (ram,0x0464633d) */
/* WARNING: Removing unreachable block (ram,0x0464636b) */
/* WARNING: Removing unreachable block (ram,0x04646382) */
/* WARNING: Removing unreachable block (ram,0x04645dd2) */
/* WARNING: Removing unreachable block (ram,0x04645df4) */
/* WARNING: Removing unreachable block (ram,0x04646ae2) */
/* WARNING: Removing unreachable block (ram,0x04646ae7) */
/* WARNING: Removing unreachable block (ram,0x04645e09) */
/* WARNING: Removing unreachable block (ram,0x04645e24) */
/* WARNING: Removing unreachable block (ram,0x04645e29) */
/* WARNING: Removing unreachable block (ram,0x0464645b) */
/* WARNING: Removing unreachable block (ram,0x04645e36) */
/* WARNING: Removing unreachable block (ram,0x046463af) */
/* WARNING: Removing unreachable block (ram,0x046469f8) */
/* WARNING: Removing unreachable block (ram,0x04646a0c) */
/* WARNING: Removing unreachable block (ram,0x04645c34) */
/* WARNING: Removing unreachable block (ram,0x046461e4) */
/* WARNING: Removing unreachable block (ram,0x0464623f) */
/* WARNING: Removing unreachable block (ram,0x04646252) */
/* WARNING: Removing unreachable block (ram,0x04646a95) */
/* WARNING: Removing unreachable block (ram,0x04646aa9) */
/* WARNING: Removing unreachable block (ram,0x04646274) */
/* WARNING: Removing unreachable block (ram,0x046463f1) */
/* WARNING: Removing unreachable block (ram,0x04646534) */
/* WARNING: Removing unreachable block (ram,0x046465a9) */
/* WARNING: Removing unreachable block (ram,0x0464653d) */
/* WARNING: Removing unreachable block (ram,0x046465ab) */
/* WARNING: Removing unreachable block (ram,0x046465b0) */
/* WARNING: Removing unreachable block (ram,0x04646606) */
/* WARNING: Removing unreachable block (ram,0x0464661f) */
/* WARNING: Removing unreachable block (ram,0x046463f9) */
/* WARNING: Removing unreachable block (ram,0x04646544) */
/* WARNING: Removing unreachable block (ram,0x0464644e) */
/* WARNING: Removing unreachable block (ram,0x0464654c) */
/* WARNING: Removing unreachable block (ram,0x04646570) */
/* WARNING: Removing unreachable block (ram,0x04646589) */
/* WARNING: Removing unreachable block (ram,0x04646594) */
/* WARNING: Removing unreachable block (ram,0x04646624) */
/* WARNING: Removing unreachable block (ram,0x04646660) */
/* WARNING: Removing unreachable block (ram,0x04646672) */
/* WARNING: Removing unreachable block (ram,0x04646684) */
/* WARNING: Removing unreachable block (ram,0x0464688c) */
/* WARNING: Removing unreachable block (ram,0x046468ba) */
/* WARNING: Removing unreachable block (ram,0x046468d1) */
/* WARNING: Removing unreachable block (ram,0x04646692) */
/* WARNING: Removing unreachable block (ram,0x046466b5) */
/* WARNING: Removing unreachable block (ram,0x046466d0) */
/* WARNING: Removing unreachable block (ram,0x04646b92) */
/* WARNING: Removing unreachable block (ram,0x04646c57) */
/* WARNING: Removing unreachable block (ram,0x04646cb2) */
/* WARNING: Removing unreachable block (ram,0x04646cbd) */
/* WARNING: Removing unreachable block (ram,0x04646d6f) */
/* WARNING: Removing unreachable block (ram,0x04646e62) */
/* WARNING: Removing unreachable block (ram,0x04646e6a) */
/* WARNING: Removing unreachable block (ram,0x04646e8f) */
/* WARNING: Removing unreachable block (ram,0x04646ebe) */
/* WARNING: Removing unreachable block (ram,0x04646ece) */
/* WARNING: Removing unreachable block (ram,0x04646e9c) */
/* WARNING: Removing unreachable block (ram,0x04646e7b) */
/* WARNING: Removing unreachable block (ram,0x046466e5) */
/* WARNING: Removing unreachable block (ram,0x04646702) */
/* WARNING: Removing unreachable block (ram,0x04646707) */
/* WARNING: Removing unreachable block (ram,0x04646900) */
/* WARNING: Removing unreachable block (ram,0x04646909) */
/* WARNING: Removing unreachable block (ram,0x0464691a) */
/* WARNING: Removing unreachable block (ram,0x0464692f) */
/* WARNING: Removing unreachable block (ram,0x04646b42) */
/* WARNING: Removing unreachable block (ram,0x04646b56) */
/* WARNING: Removing unreachable block (ram,0x04646715) */
/* WARNING: Removing unreachable block (ram,0x0464674a) */
/* WARNING: Removing unreachable block (ram,0x04646761) */
/* WARNING: Removing unreachable block (ram,0x0464695a) */
/* WARNING: Removing unreachable block (ram,0x046467a4) */
/* WARNING: Removing unreachable block (ram,0x04646825) */
/* WARNING: Removing unreachable block (ram,0x04646838) */
/* WARNING: Removing unreachable block (ram,0x04646851) */
/* WARNING: Removing unreachable block (ram,0x04646864) */
/* WARNING: Removing unreachable block (ram,0x04646298) */
/* WARNING: Removing unreachable block (ram,0x0464646a) */
/* WARNING: Removing unreachable block (ram,0x046462ed) */
/* WARNING: Removing unreachable block (ram,0x04646472) */
/* WARNING: Removing unreachable block (ram,0x04646496) */
/* WARNING: Removing unreachable block (ram,0x046464af) */
/* WARNING: Removing unreachable block (ram,0x046464b6) */
/* WARNING: Removing unreachable block (ram,0x046464c9) */
/* WARNING: Removing unreachable block (ram,0x046464f7) */
/* WARNING: Removing unreachable block (ram,0x0464650e) */
/* WARNING: Removing unreachable block (ram,0x04646937) */
/* WARNING: Removing unreachable block (ram,0x04646942) */
/* WARNING: Removing unreachable block (ram,0x04645c56) */
/* WARNING: Removing unreachable block (ram,0x04645c97) */
/* WARNING: Removing unreachable block (ram,0x04645ca0) */
/* WARNING: Removing unreachable block (ram,0x04645caa) */
/* WARNING: Removing unreachable block (ram,0x04645cc3) */
/* WARNING: Removing unreachable block (ram,0x04645cf1) */
/* WARNING: Removing unreachable block (ram,0x04645d08) */
/* WARNING: Removing unreachable block (ram,0x046463b7) */
/* WARNING: Removing unreachable block (ram,0x046463cf) */
/* WARNING: Removing unreachable block (ram,0x046463dc) */
/* WARNING: Removing unreachable block (ram,0x04646f04) */
/* WARNING: Removing unreachable block (ram,0x04647268) */
/* WARNING: Removing unreachable block (ram,0x0464727c) */
/* WARNING: Removing unreachable block (ram,0x04646f2e) */
/* WARNING: Removing unreachable block (ram,0x04646f3b) */
/* WARNING: Removing unreachable block (ram,0x04646f45) */
/* WARNING: Removing unreachable block (ram,0x04646f64) */
/* WARNING: Removing unreachable block (ram,0x04646f8f) */
/* WARNING: Removing unreachable block (ram,0x04646fa6) */
/* WARNING: Removing unreachable block (ram,0x046472b5) */
/* WARNING: Removing unreachable block (ram,0x046472c9) */
/* WARNING: Removing unreachable block (ram,0x04646fc2) */
/* WARNING: Removing unreachable block (ram,0x04646f56) */
/* WARNING: Removing unreachable block (ram,0x04646fdb) */
/* WARNING: Removing unreachable block (ram,0x04646ffe) */
/* WARNING: Removing unreachable block (ram,0x04647010) */
/* WARNING: Removing unreachable block (ram,0x04647049) */
/* WARNING: Removing unreachable block (ram,0x0464704d) */
/* WARNING: Removing unreachable block (ram,0x0464705b) */
/* WARNING: Removing unreachable block (ram,0x04647055) */
/* WARNING: Removing unreachable block (ram,0x0464705d) */
/* WARNING: Removing unreachable block (ram,0x04647063) */
/* WARNING: Removing unreachable block (ram,0x04647075) */
/* WARNING: Removing unreachable block (ram,0x0464707e) */
/* WARNING: Removing unreachable block (ram,0x04647093) */
/* WARNING: Removing unreachable block (ram,0x0464708a) */
/* WARNING: Removing unreachable block (ram,0x04647095) */
/* WARNING: Removing unreachable block (ram,0x046470dd) */
/* WARNING: Removing unreachable block (ram,0x046470a1) */
/* WARNING: Removing unreachable block (ram,0x046470f3) */
/* WARNING: Removing unreachable block (ram,0x046470f9) */
/* WARNING: Removing unreachable block (ram,0x0464710b) */
/* WARNING: Removing unreachable block (ram,0x04647125) */
/* WARNING: Removing unreachable block (ram,0x04647117) */
/* WARNING: Removing unreachable block (ram,0x04647130) */
/* WARNING: Removing unreachable block (ram,0x04647141) */
/* WARNING: Removing unreachable block (ram,0x04647158) */
/* WARNING: Removing unreachable block (ram,0x046471d8) */
/* WARNING: Removing unreachable block (ram,0x046471dc) */
/* WARNING: Removing unreachable block (ram,0x046471e3) */
/* WARNING: Removing unreachable block (ram,0x046471e7) */
/* WARNING: Removing unreachable block (ram,0x0464724b) */
/* WARNING: Removing unreachable block (ram,0x0464723f) */
/* WARNING: Removing unreachable block (ram,0x04647250) */
/* WARNING: Removing unreachable block (ram,0x04647249) */
/* WARNING: Removing unreachable block (ram,0x04647256) */
/* WARNING: Removing unreachable block (ram,0x0464588e) */
/* WARNING: Removing unreachable block (ram,0x046469ab) */
/* WARNING: Removing unreachable block (ram,0x046469bf) */
/* WARNING: Removing unreachable block (ram,0x046458c0) */
/* WARNING: Removing unreachable block (ram,0x04645914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_046457ec(long param_1,int *param_2)

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
       (*(int *)(param_1 + 0xc20) != 3)) {
      func_0x046388b8(param_1,0x10,&UNK_014106fc,&iStack_1d8);
      func_0x04637c74(param_1,&iStack_1d8);
    }
    return;
  }
  func_0x0412d680(param_1 + 0xc28);
  if ((*(int *)(param_1 + 0xc20) != 3) &&
     ((*(int *)(param_1 + 0xc20) != 0 || (*(int *)(param_1 + 0xc24) != 2)))) {
    if ((cRam000000000f54ca90 == '\0') && (iVar1 = func_0x04108328(0xf54ca90), iVar1 != 0)) {
      _DAT_0f54ca88 = &UNK_0ef10598;
      func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
      func_0x0410844d(0xf54ca90);
    }
    iStack_1d8 = 9;
    puStack_1d0 = &DAT_0f54ca88;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(param_1 + 0xc28);
  return;
}


