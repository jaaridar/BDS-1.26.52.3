/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf09520 (ELF vaddr 0xce09520)
 * Label: JigsawBlockActor::vslot24
 * Body:  [[0cf09520, 0cf095f4]]
 * Ghidra: wg_JigsawBlockActor__vslot24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlockActor__vslot24(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + -0x28);
  lVar1 = *(long *)(lVar3 + 0x68);
  lVar7 = *(long *)(lVar1 + 0x1b0);
  if (lVar7 != 0) {
    lVar4 = lVar1 + 0x1b0;
    do {
      bVar9 = *(ulong *)(lVar7 + 0x20) < _DAT_0f6ff6b0;
      if (!bVar9) {
        lVar4 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar9 * 8);
    } while (lVar7 != 0);
    if ((lVar4 != lVar1 + 0x1b0) && (*(ulong *)(lVar4 + 0x20) <= _DAT_0f6ff6b0)) {
      cVar6 = (char)*(undefined4 *)(lVar4 + 0x2c);
      bVar2 = (byte)(*(ushort *)(lVar3 + 0x128) >>
                    (((char)*(undefined4 *)(lVar4 + 0x30) - cVar6) + 1U & 0x1f)) &
              (byte)(0xffff >> (0x10U - cVar6 & 0x1f));
      goto LAB_0cf095c6;
    }
  }
  uVar5 = 0;
  for (plVar8 = *(long **)(lVar1 + 0x350); plVar8 != *(long **)(lVar1 + 0x358); plVar8 = plVar8 + 2)
  {
    if (*(ulong *)(((undefined8 *)*plVar8)[1] + 8) == _DAT_0f6ff6b0) {
      uVar5 = (*(code *)**(undefined8 **)*plVar8)();
      break;
    }
  }
  bVar2 = (byte)uVar5;
  if ((uVar5 >> 0x20 & 1) == 0) {
    bVar2 = 0;
  }
LAB_0cf095c6:
  *(bool *)(param_1 + 0x114) = bVar2 < 2;
  return;
}


