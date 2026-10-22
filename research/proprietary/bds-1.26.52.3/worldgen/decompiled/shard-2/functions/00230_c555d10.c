/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc555d10
 * Label: JigsawBlock::vslot107
 * Body:  [[0c555d10, 0c555ed3]]
 * Ghidra: wg_JigsawBlock__vslot107
 */


void wg_JigsawBlock__vslot107
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,long param_7,long param_8,undefined8 param_9,undefined8 *param_10)

{
  char cVar1;
  undefined8 *unaff_RBX;
  long unaff_R14;
  undefined1 *unaff_R15;
  long lVar2;
  long unaff_retaddr;
  
  do {
    if (((((*(char *)(param_3 + 0x23) == '\x01') && (*(long **)(param_3 + 8) != (long *)0x0)) &&
         (**(long **)(param_3 + 8) != 0)) &&
        ((cVar1 = func_0x0c4562c0(param_3), cVar1 == '\0' && (*(char *)(param_3 + 0x22) != '\0'))))
       && ((*(long *)(param_3 + 0x10) != 0 &&
           ((cVar1 = func_0x0c020060(0x1b,param_3), cVar1 != '\0' ||
            (cVar1 = func_0x0c020060(0x1c,param_3), cVar1 != '\0')))))) {
      func_0x0c012b50(param_3);
      *unaff_R15 = 1;
    }
    param_3 = param_3 + 0x98;
  } while (param_3 != param_4);
  func_0x0c021500();
  lVar2 = unaff_retaddr;
  if (unaff_retaddr != param_7) {
    do {
      func_0x0c012dd0();
      lVar2 = lVar2 + 8;
    } while (lVar2 != param_7);
    if (3 < (ulong)(param_7 - unaff_retaddr >> 3)) {
      func_0x0c44ed40();
      *unaff_RBX = &UNK_0f371da8;
      *(undefined4 *)(unaff_RBX + 0x10) = 0;
      *(undefined4 *)(unaff_RBX + 0x12) = 0;
      goto joined_r0x0c555e9c;
    }
  }
  func_0x0c45e140();
  func_0x0c4510a0();
  *unaff_RBX = &UNK_0f371da8;
  *(undefined4 *)(unaff_RBX + 0x10) = 0;
  *(undefined4 *)(unaff_RBX + 0x12) = 0;
  if ((ulong)*(uint *)(unaff_R14 + 0x90) == 0xffffffff) {
    *(undefined4 *)(unaff_RBX + 0x12) = 0xffffffff;
  }
  else {
    param_10 = unaff_RBX + 0x10;
    (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(unaff_R14 + 0x90) * 8))
              (&param_10,param_10,unaff_R14 + 0x80);
  }
joined_r0x0c555e9c:
  if (unaff_retaddr != 0) {
    func_0x0412a280(unaff_retaddr,param_8 - unaff_retaddr);
  }
  return;
}


