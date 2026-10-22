/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4dc7a0
 * Label: string:caves_and_cliffs
 * Body:  [[0d4dc700, 0d4dc79e] [0d4dc7a0, 0d4dc7c5] [0d4dc7c9, 0d4dc7fc] [0d4dc800, 0d4dc91b] [0d4dc920, 0d4dc938] [0d4dc940, 0d4dca4b]]
 * Ghidra: FUN_0d4dc7a0
 */


/* WARNING: Instruction at (ram,0x0d4dc7a1) overlaps instruction at (ram,0x0d4dc7a0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d4dc7a0(long param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  char *in_RAX;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  long unaff_RBX;
  long lVar10;
  char unaff_BPL;
  long unaff_R12;
  long lVar11;
  ulong unaff_R13;
  byte *unaff_R14;
  char in_CF;
  bool bVar12;
  
  cVar6 = (char)param_4 + in_RAX[-0x77];
  cVar8 = cVar6 + in_CF;
  if ((SCARRY1((char)param_4,in_RAX[-0x77]) != SCARRY1(cVar6,in_CF)) != cVar8 < '\0') {
    *in_RAX = *in_RAX + (char)in_RAX;
    pcVar1 = (char *)(CONCAT71((int7)((ulong)param_4 >> 8),cVar8) + 0x39);
    *pcVar1 = *pcVar1 + cVar8;
    in(param_3);
    goto code_r0x0d4dc7bc;
  }
  register0x00000020 = (BADSPACEBASE *)&stack0x00000008;
  do {
    *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc7b3;
    func_0x0412a280(param_1,*(long *)((long)register0x00000020 + 0x60) - param_1);
    do {
      if (unaff_BPL != '\0') {
code_r0x0d4dc7bc:
        lVar10 = unaff_RBX + unaff_R12;
        lVar11 = *(long *)(lVar10 + 0x88);
        lVar4 = *(long *)(lVar10 + 0x90);
        while( true ) {
          if (lVar11 == lVar4) goto LAB_0d4dc849;
          pcVar5 = *(code **)(**(long **)(lVar11 + 0x28) + 0x10);
          *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc7ee;
          cVar6 = (*pcVar5)();
          if (cVar6 != '\0') break;
          lVar11 = lVar11 + 0x38;
        }
        lVar11 = *(long *)(lVar11 + 0x28);
        if (lVar11 == 0) {
LAB_0d4dc849:
          bVar12 = (*unaff_R14 & 1) != 0;
          uVar7 = *(undefined8 *)((long)register0x00000020 + 0x38);
          if (bVar12) {
            uVar7 = *(undefined8 *)(unaff_R14 + 0x10);
          }
          uVar9 = (ulong)(*unaff_R14 >> 1);
          if (bVar12) {
            uVar9 = *(ulong *)(unaff_R14 + 8);
          }
          *(undefined8 *)((long)register0x00000020 + 0x50) = uVar7;
          *(ulong *)((long)register0x00000020 + 0x58) = uVar9;
          *(undefined1 *)((long)register0x00000020 + 0x60) = 1;
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x10) =
               *(undefined8 *)((long)register0x00000020 + 0x60);
          *(undefined4 *)register0x00000020 = *(undefined4 *)((long)register0x00000020 + 0x50);
          *(undefined4 *)((long)register0x00000020 + 4) =
               *(undefined4 *)((long)register0x00000020 + 0x54);
          *(undefined4 *)((long)register0x00000020 + 8) =
               *(undefined4 *)((long)register0x00000020 + 0x58);
          *(undefined4 *)((long)register0x00000020 + 0xc) =
               *(undefined4 *)((long)register0x00000020 + 0x5c);
          *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc89f;
          func_0x0eeb79f0((undefined4 *)((long)register0x00000020 + 0xf0),
                          (undefined4 *)((long)register0x00000020 + 0x20));
          if ((*(ulong *)((long)register0x00000020 + 0x20) >> 0x37 & 1) != 0) {
            pcVar5 = *(code **)(_DAT_0f5463b0 + 0x28);
            *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc8cd;
            (*pcVar5)(&DAT_0f5463b0,
                      (*(ulong *)((long)register0x00000020 + 0x20) & 0xff00ffffffffffff) - 8);
          }
          uVar3 = *(undefined4 *)(*(long *)((long)register0x00000020 + 0x40) + 8);
          lVar11 = *(long *)(lVar10 + 0x88);
          lVar4 = *(long *)(lVar10 + 0x90);
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
          if (lVar11 == lVar4) {
            lVar11 = (long)register0x00000020 + 0x21;
          }
          else {
            *(undefined4 *)((long)register0x00000020 + 0x38) = uVar3;
            do {
              if ((*(byte *)(lVar11 + 8) & 1) == 0) {
                lVar10 = lVar11 + 9;
              }
              else {
                lVar10 = *(long *)(lVar11 + 0x18);
              }
              *(long *)((long)register0x00000020 + 0xe0) = lVar10;
              *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc964;
              func_0x0470d9a0((undefined4 *)((long)register0x00000020 + 0x50),&UNK_0134024e,5,0xc,
                              (undefined4 *)((long)register0x00000020 + 0xe0));
              bVar12 = (*(byte *)((long)register0x00000020 + 0x50) & 1) == 0;
              lVar10 = *(long *)((long)register0x00000020 + 0x60);
              if (bVar12) {
                lVar10 = (long)register0x00000020 + 0x51;
              }
              uVar9 = (ulong)(*(byte *)((long)register0x00000020 + 0x50) >> 1);
              if (!bVar12) {
                uVar9 = *(ulong *)((long)register0x00000020 + 0x58);
              }
              *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc98b;
              func_0x0412f8c0((undefined4 *)((long)register0x00000020 + 0x20),lVar10,uVar9);
              if ((*(byte *)((long)register0x00000020 + 0x50) & 1) != 0) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc9a5;
                func_0x0412a280(*(undefined8 *)((long)register0x00000020 + 0x60),
                                *(ulong *)((long)register0x00000020 + 0x50) & 0xfffffffffffffffe);
              }
              lVar11 = lVar11 + 0x38;
            } while (lVar11 != lVar4);
            if ((*(byte *)((long)register0x00000020 + 0x20) & 1) == 0) {
              lVar11 = (long)register0x00000020 + 0x21;
            }
            else {
              lVar11 = *(long *)((long)register0x00000020 + 0x30);
            }
            uVar3 = *(undefined4 *)((long)register0x00000020 + 0x38);
          }
          *(long *)((long)register0x00000020 + 0xd8) = lVar11;
          *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dca0e;
          func_0x04b0ace0(1,3,uVar3,&UNK_013c4ba9,(undefined4 *)((long)register0x00000020 + 0xd8));
          if ((*(byte *)((long)register0x00000020 + 0x20) & 1) != 0) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dca28;
            func_0x0412a280(*(undefined8 *)((long)register0x00000020 + 0x30),
                            *(ulong *)((long)register0x00000020 + 0x20) & 0xfffffffffffffffe);
          }
          *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dca35;
          func_0x0eeb81b0((undefined4 *)((long)register0x00000020 + 0xf0));
          return 0;
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
LAB_0d4dc825:
          puVar2 = (ulong *)(*(long *)(*(long *)((long)register0x00000020 + 0x40) + 0x40) +
                            (unaff_R13 >> 6) * 8);
          *puVar2 = *puVar2 | 1L << ((byte)unaff_R13 & 0x3f);
          return lVar11;
        }
        pcVar5 = *(code **)(*(long *)(lVar11 + 0x10) + 0x10);
        *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc81d;
        cVar6 = (*pcVar5)(lVar11 + 0x10);
        if (cVar6 != '\0') goto LAB_0d4dc825;
      }
      unaff_R13 = unaff_R13 + 1;
      if (unaff_R13 == *(ulong *)((long)register0x00000020 + 200)) {
        if (*(char *)((long)register0x00000020 + 0x4c) == '\0') {
          *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc9c8;
          func_0x0b63c650();
          return 0;
        }
        return 0;
      }
      unaff_RBX = *(long *)(*(long *)((long)register0x00000020 + 0xd0) + 0xb8);
      unaff_R12 = unaff_R13 * 0xa8;
      bVar12 = (*unaff_R14 & 1) != 0;
      uVar9 = (ulong)(*unaff_R14 >> 1);
      if (bVar12) {
        uVar9 = *(ulong *)(unaff_R14 + 8);
      }
      lVar11 = *(long *)(unaff_R14 + 0x10);
      if (!bVar12) {
        lVar11 = *(long *)((long)register0x00000020 + 0x38);
      }
      *(undefined8 *)((long)register0x00000020 + 0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x88) = 0;
      *(undefined1 *)((long)register0x00000020 + 0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x98) = 0;
      *(undefined8 *)((long)register0x00000020 + 0xa0) = 0;
      *(undefined1 *)((long)register0x00000020 + 0xa8) = 0;
      *(undefined1 *)((long)register0x00000020 + 0xb0) = 0;
      *(undefined8 *)((long)register0x00000020 + 0xb8) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x69) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x71) = 0;
      *(undefined8 *)((long)register0x00000020 + -8) = 0xd4dc795;
      unaff_BPL = func_0x04af20a0(lVar11,uVar9 + lVar11,
                                  (undefined1 *)((long)register0x00000020 + 0x50),
                                  unaff_RBX + unaff_R12 + 0x38,0);
      param_1 = *(long *)((long)register0x00000020 + 0x50);
    } while (param_1 == 0);
    *(long *)((long)register0x00000020 + 0x58) = param_1;
  } while( true );
}


