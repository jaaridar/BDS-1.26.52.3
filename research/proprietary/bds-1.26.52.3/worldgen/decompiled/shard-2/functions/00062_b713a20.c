/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb713a20
 * Label: string:Invalid Custom Biome Source
 * Body:  [[0b713a20, 0b713bf0] [0b713c24, 0b713c34]]
 * Ghidra: FUN_0b713a20
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b713a20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_RAX;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  char in_CL;
  undefined1 *unaff_RBX;
  long *unaff_R14;
  long unaff_R15;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)((long)in_RAX + -0x75) = *(char *)((long)in_RAX + -0x75) + in_CL;
  *(char *)((long)in_RAX + -0x7d) = *(char *)((long)in_RAX + -0x7d) + in_CL;
  out(0xfe,(char)in_RAX);
  uRam000000000001481c = 0xb713a34;
  func_0x0412a280();
  if (cRam0000000000014904 == '\x01') {
    uRam000000000001481c = 0xb713a4b;
    uVar4 = func_0x05f929d0(0x14904);
    uRam000000000001481c = 0xb713a5b;
    func_0x048fb860(0x14a94,uVar4);
    *unaff_RBX = 1;
    uRam000000000001481c = 0xb713a72;
    func_0x05e91e00(unaff_RBX + 8,0x14a94);
    uRam000000000001481c = 0xb713a7f;
    func_0x048fb670(0x14a94);
  }
  else {
    uRam000000000001481c = 0xb713a9b;
    plVar5 = (long *)func_0x0b714380(0x14904);
    if ((*plVar5 == *(long *)(unaff_R15 + 8)) && (plVar5[1] == *(long *)(unaff_R15 + 0x10))) {
      uRam000000000001481c = 0xb713abb;
      func_0x0b714380(0x14904);
      uRam000000000001481c = 0xb713acd;
      (**(code **)(*unaff_R14 + 0x88))();
    }
    else {
      uRam000000000001481c = 0xb713b0c;
      puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar6 == (undefined4 *)0x0) {
        uRam000000000001481c = 0xb713c30;
        func_0x0eec74c0(0x48,0);
      }
      uVar4 = _UNK_01334910;
      uRam0000000000014874 = 0x49;
      uRam000000000001487c = 0x41;
      puRam0000000000014884 = puVar6;
      *(undefined8 *)(puVar6 + 0xc) = _DAT_01334908;
      *(undefined8 *)(puVar6 + 0xe) = uVar4;
      uVar4 = _UNK_01334900;
      *(undefined8 *)(puVar6 + 8) = _DAT_013348f8;
      *(undefined8 *)(puVar6 + 10) = uVar4;
      uVar4 = _UNK_013348f0;
      *(undefined8 *)(puVar6 + 4) = _DAT_013348e8;
      *(undefined8 *)(puVar6 + 6) = uVar4;
      uVar3 = _UNK_013348e4;
      uVar2 = _UNK_013348e0;
      uVar1 = _UNK_013348dc;
      *puVar6 = _DAT_013348d8;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      *(undefined2 *)(puVar6 + 0x10) = 0x2e;
      uRam00000000000149c4 = 10;
      uRam00000000000149c5 = _DAT_013f776f;
      uRam00000000000149c9 = DAT_013f7773;
      uRam00000000000149ca = 0;
      uRam000000000001481c = 0xb713baa;
      func_0x0d858ce0(0x14a94,0x149c4,0x14874);
      *unaff_RBX = 1;
      uRam000000000001481c = 0xb713bc1;
      func_0x05e91e00(unaff_RBX + 8,0x14a94);
      uRam000000000001481c = 0xb713bce;
      func_0x048fb670(0x14a94);
      uRam000000000001481c = 0xb713bdb;
      func_0x0412a280(puVar6,0x48);
    }
  }
  if (pcRam0000000000014924 != (code *)0x0) {
    uRam000000000001481c = 0xb713ae4;
    (*pcRam0000000000014924)(0x1490c);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13348d8  Prefab snapshot instance ID does not match operation instance ID.
 * 0x13348e8  instance ID does not match operation instance ID.
 * 0x13348f8   not match operation instance ID.
 * 0x1334908  tion instance ID.
 * 0x13f776f  Error
 */
