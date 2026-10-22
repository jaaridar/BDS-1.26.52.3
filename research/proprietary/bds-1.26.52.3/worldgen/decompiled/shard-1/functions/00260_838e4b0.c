/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x848e4b0 (ELF vaddr 0x838e4b0)
 * Label: callee-of:0x82ea790
 * Body:  [[0848e4b0, 0848e53b] [0848e540, 0848e588] [0d6c9500, 0d6c9575]]
 * Ghidra: FUN_0848e4b0
 */


/* WARNING: Possible PIC construction at 0x0d6c9512: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d6c955c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0848e520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0848e563: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d6c9517) */
/* WARNING: Removing unreachable block (ram,0x0d6c9530) */
/* WARNING: Removing unreachable block (ram,0x0d6c9543) */
/* WARNING: Removing unreachable block (ram,0x0d6c9561) */
/* WARNING: Removing unreachable block (ram,0x0d6c9550) */
/* WARNING: Removing unreachable block (ram,0x0848e568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0848e4b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *in_RAX;
  undefined8 *unaff_RBX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_R14;
  long lVar7;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &UNK_0f47e0b0;
    puVar5 = (undefined8 *)param_1[2];
    while( true ) {
      *(undefined8 **)((long)register0x00000020 + -8) = unaff_R14;
      *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_RBX;
      *(undefined **)((long)register0x00000020 + -0x18) = &UNK_0f47e0b0;
      if (puVar5 == (undefined8 *)0x0) break;
      puVar2 = (undefined8 *)*puVar5;
      puVar4 = (undefined8 *)((long)register0x00000020 + -0x20);
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x20);
      *puVar4 = 0xd6c9517;
      unaff_RBX = puVar5;
      puVar5 = puVar2;
      unaff_R14 = param_1 + 1;
    }
    return &UNK_0f47e0b0;
  }
  lVar1 = param_1[5];
  if (lVar1 == 0) {
    lVar1 = param_1[2];
    if (lVar1 == 0) {
      return in_RAX;
    }
    lVar7 = param_1[3];
    lVar6 = lVar1;
    if (lVar1 != lVar7) {
      do {
        if ((*(char *)(lVar7 + -8) == '\x01') && ((*(byte *)(lVar7 + -0x30) & 1) != 0)) {
          lVar6 = *(long *)(lVar7 + -0x20);
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0x848e568;
          goto SUB_0412a280;
        }
        lVar7 = lVar7 + -0x50;
      } while (lVar7 != lVar1);
      lVar6 = param_1[2];
    }
    param_1[3] = lVar1;
  }
  else {
    lVar7 = param_1[6];
    lVar6 = lVar1;
    if (lVar1 != lVar7) {
      do {
        lVar7 = lVar7 + -0x40;
        uStack_20 = 0x848e50c;
        in_RAX = (undefined *)func_0x048b3e80(lVar7);
      } while (lVar7 != lVar1);
      lVar6 = param_1[5];
    }
    param_1[6] = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x848e525;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = in_RAX;
  if (lVar6 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar6);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


