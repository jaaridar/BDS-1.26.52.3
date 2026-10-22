/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcafd630 (ELF vaddr 0xc9fd630)
 * Label: callee-of:0x517cd10
 * Body:  [[0cafd630, 0cafd66e] [0cafd670, 0cafd6d7] [0cafd6e0, 0cafd76c]]
 * Ghidra: FUN_0cafd630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cafd630(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar4 = *(long **)(param_1 + 0x13e0);
  if (plVar4 != (long *)0x0) {
    do {
      while( true ) {
        uVar6 = (ulong)(short)((uint)(int)*(short *)((long)plVar4 + 0x12) >> 4);
        lVar3 = *(long *)(param_1 + 0x108);
        uVar7 = (*(long *)(param_1 + 0x110) - lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5;
        if ((uVar7 < uVar6 || uVar7 - uVar6 == 0) ||
           (plVar1 = *(long **)(lVar3 + 0x30 + uVar6 * 0x68), plVar1 == (long *)0x0)) {
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar2 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901)
             , cVar2 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          lVar3 = *(long *)(*_DAT_0f6ffb10 + 0x200);
        }
        else {
          iVar5 = (uint)*(byte *)((long)plVar4 + 0x11) * 0x10 +
                  ((int)*(short *)((long)plVar4 + 0x12) & 0xfU | (uint)*(byte *)(plVar4 + 2) << 8);
          lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,(short)iVar5,lVar3,iVar5);
        }
        cVar2 = func_0x0c6cef20(*(undefined8 *)(lVar3 + 0x68));
        if (cVar2 == *(char *)(plVar4[3] + 0x14)) break;
        plVar4 = (long *)func_0x0cadd7c0(param_1 + 0x13c8,plVar4);
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


