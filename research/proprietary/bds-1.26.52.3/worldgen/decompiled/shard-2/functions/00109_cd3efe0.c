/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3efe0 (ELF vaddr 0xcd3efe0)
 * Label: JigsawBlockActor::vslot58
 * Body:  [[0ce3efe0, 0ce3f031]]
 * Ghidra: wg_JigsawBlockActor__vslot58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * wg_JigsawBlockActor__vslot58(long param_1,ulong *param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong *in_RAX;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  
  puVar8 = (ulong *)(param_1 + 0xc0);
  if (puVar8 != param_2) {
    bVar1 = (byte)*param_2;
    if ((*(byte *)puVar8 & 1) != 0) {
      bVar12 = (bVar1 & 1) != 0;
      pbVar5 = (byte *)((long)param_2 + 1);
      if (bVar12) {
        pbVar5 = (byte *)param_2[2];
      }
      uVar7 = (ulong)(bVar1 >> 1);
      if (bVar12) {
        uVar7 = param_2[1];
      }
      uVar11 = *puVar8 & 0xfffffffffffffffe;
      if (uVar7 < uVar11) {
        lVar3 = *(long *)(param_1 + 0xd0);
        *(ulong *)(param_1 + 200) = uVar7;
        if (uVar7 != 0) {
          func_0x0eee2ee0(lVar3,pbVar5,uVar7);
        }
      }
      else {
        if (-uVar11 - 9 < (uVar7 - uVar11) + 1) {
          FUN_04882e30();
          pcVar2 = (code *)swi(3);
          puVar8 = (ulong *)(*pcVar2)();
          return puVar8;
        }
        if ((*puVar8 & 1) == 0) {
          lVar10 = param_1 + 0xc1;
        }
        else {
          lVar10 = *(long *)(param_1 + 0xd0);
        }
        uVar9 = 0xfffffffffffffff7;
        if (uVar11 - 1 < 0x7ffffffffffffff3) {
          uVar4 = (uVar11 - 1) * 2;
          if (uVar4 < uVar7) {
            uVar4 = uVar7;
          }
          uVar6 = 0x1a;
          if ((uVar4 | 7) != 0x17) {
            uVar6 = (uVar4 | 7) + 1;
          }
          uVar9 = 0x17;
          if (0x16 < uVar4) {
            uVar9 = uVar6;
          }
        }
        lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
        if (uVar9 != 0 && lVar3 == 0) {
          FUN_0eec74c0(uVar9,0);
        }
        if (uVar7 != 0) {
          memcpy(lVar3,pbVar5,uVar7);
        }
        func_0x0412a280(lVar10,uVar11);
        *(long *)(param_1 + 0xd0) = lVar3;
        *puVar8 = uVar9 | 1;
        *(ulong *)(param_1 + 200) = uVar7;
      }
      *(undefined1 *)(lVar3 + uVar7) = 0;
      return puVar8;
    }
    if ((bVar1 & 1) != 0) {
      uVar7 = param_2[1];
      uVar11 = param_2[2];
      if (uVar7 < 0x17) {
        lVar3 = param_1 + 0xc1;
        *(char *)puVar8 = (char)uVar7 * '\x02';
        if (uVar7 != 0) {
          func_0x0eee2ee0(lVar3,uVar11,uVar7);
        }
      }
      else {
        if (uVar7 + 9 < 0x1f) {
          FUN_04882e30();
          pcVar2 = (code *)swi(3);
          puVar8 = (ulong *)(*pcVar2)();
          return puVar8;
        }
        uVar9 = 0x2c;
        if (0x2c < uVar7) {
          uVar9 = uVar7;
        }
        uVar9 = (uVar9 | 7) + 1;
        lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
        if (lVar3 == 0) {
          FUN_0eec74c0(uVar9,0);
        }
        memcpy(lVar3,uVar11,uVar7);
        *(long *)(param_1 + 0xd0) = lVar3;
        *puVar8 = uVar9 | 1;
        *(ulong *)(param_1 + 200) = uVar7;
      }
      *(undefined1 *)(lVar3 + uVar7) = 0;
      return puVar8;
    }
    in_RAX = (ulong *)param_2[2];
    *(ulong **)(param_1 + 0xd0) = in_RAX;
    uVar7 = param_2[1];
    *puVar8 = *param_2;
    *(ulong *)(param_1 + 200) = uVar7;
  }
  return in_RAX;
}


