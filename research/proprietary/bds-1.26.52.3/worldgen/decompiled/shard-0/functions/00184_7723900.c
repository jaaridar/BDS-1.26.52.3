/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7823900 (ELF vaddr 0x7723900)
 * Label: string:Temperature
 * Body:  [[07823900, 07823cfd]]
 * Ghidra: FUN_07823900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07823900(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [48];
  char cStack_28;
  undefined1 uStack_24;
  undefined1 uStack_20;
  
  if ((DAT_0f5afb30 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5afb30), iVar1 != 0)) {
    func_0x07892120(0xf5afb18);
    FUN_0410844d(&DAT_0f5afb30);
  }
  uVar3 = _DAT_0f5afb28;
  lVar4 = _DAT_0f5afb20;
  lVar2 = func_0x0788e4a0(param_1 + 0x18);
  if ((*(int *)(lVar2 + 0x60) == -0x2b3da790) && (lVar2 = *(long *)(lVar2 + 0x68), lVar2 != 0)) {
    bVar5 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar4 = lVar2 + 9;
    if (bVar5) {
      lVar4 = *(long *)(lVar2 + 0x18);
    }
    uVar3 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar5) {
      uVar3 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x0788e890(auStack_58,param_1,lVar4,uVar3,0);
  uStack_24 = 0;
  uStack_20 = 0;
  if (cStack_28 == '\0') {
    func_0x07823d00(auStack_98,auStack_58,&UNK_013610de,8);
    func_0x078240e0(auStack_98,auStack_58,&UNK_0120c576,7);
    func_0x078244c0(auStack_98,auStack_58,&UNK_012dbce7,0xc);
    func_0x078248a0(auStack_98,auStack_58,&UNK_0144bd66,10);
    func_0x07824c80(auStack_98,auStack_58,&UNK_014cdc46,0xb);
    func_0x07825060(auStack_98,auStack_58,&UNK_01417355,4);
    func_0x07825440(auStack_98,auStack_58,&UNK_013b0ed2,4);
    func_0x07825820(auStack_98,auStack_58,&UNK_01431197,8);
    func_0x07825c00(auStack_98,auStack_58,&UNK_013e3632,4);
    func_0x07825fe0(auStack_98,auStack_58,&UNK_014311a0,8);
    func_0x078263c0(auStack_98,auStack_58,&UNK_011d7e92,0xe);
    func_0x078267a0(auStack_98,auStack_58,&UNK_01344d9a,0xf);
    func_0x07826b80(auStack_98,auStack_58,&UNK_014630a0,4);
    func_0x07826f60(auStack_98,auStack_58,&UNK_014cdc52,0xc);
    func_0x07827340(auStack_98,auStack_58,&UNK_01395dca,5);
    func_0x07827720(auStack_98,auStack_58,&UNK_01276b0a,6);
    func_0x07827b00(auStack_98,auStack_58,&UNK_0120c57e,6);
    func_0x07827ee0(auStack_98,auStack_58,&UNK_012f5c3a,5);
    func_0x078282c0(auStack_98,auStack_58,&UNK_014cdc5f,6);
    func_0x078286a0(auStack_98,auStack_58,&UNK_0137ae80,0xc);
    func_0x07828a80(auStack_98,auStack_58,&UNK_0144bd71,6);
    func_0x07828e60(auStack_98,auStack_58,&UNK_01241853,0xb);
    func_0x07829240(auStack_98,auStack_58,&UNK_01499ddd,5);
    func_0x07829620(auStack_98,auStack_58,&UNK_011bd010,9);
    func_0x07829a00(auStack_98,auStack_58,&UNK_0137ae8d,9);
    func_0x07829de0(auStack_98,auStack_58,&UNK_011a1a5c,8);
    func_0x0782a1c0(auStack_98,auStack_58,&UNK_01463d67,0xb);
    func_0x0782a5a0(auStack_98,auStack_58,&UNK_012f5c40,8);
    func_0x0782a980(auStack_98,auStack_58,&UNK_01499de3,10);
    func_0x0782ad60(auStack_98,auStack_58,&UNK_013fd850,10);
    func_0x0782b140(auStack_98,auStack_58,&UNK_011a1a65,9);
    func_0x0782b520(auStack_98,auStack_58,&UNK_0120c585,9);
    func_0x0782b900(auStack_98,auStack_58,&UNK_013e2c3d,8);
    func_0x0782bce0(auStack_98,auStack_58,&UNK_012276cc,0xc);
    func_0x0782c0c0(auStack_98,auStack_58,&UNK_0124185f,9);
  }
  return;
}


