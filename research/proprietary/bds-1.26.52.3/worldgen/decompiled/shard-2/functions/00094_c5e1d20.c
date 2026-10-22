/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5e1d20
 * Label: JigsawBlock::vslot0
 * Body:  [[0c5e1d20, 0c5e1d67] [0c5e1d70, 0c5e1f5b] [0c5e1f60, 0c5e1fa9] [0c5e1fb0, 0c5e22aa]]
 * Ghidra: wg_JigsawBlock__vslot0
 */


undefined8
wg_JigsawBlock__vslot0
          (undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4,ulong param_5,
          ulong param_6,undefined8 param_7,byte *param_8,undefined8 param_9,long *param_10,
          undefined8 param_11,undefined8 param_12,ulong param_13,undefined8 param_14,byte *param_15,
          undefined8 param_16)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long *in_RAX;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong *unaff_RBX;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long in_R10;
  uint in_R11D;
  byte *pbVar15;
  bool bVar16;
  uint in_stack_000000a8;
  
  if (in_RAX == (long *)0x0) {
    return 1;
  }
  plVar13 = (long *)*in_RAX;
  if (plVar13 == (long *)0x0) {
    return 1;
  }
  if (1 < in_R11D) {
    do {
      uVar6 = plVar13[1];
      if (uVar6 == param_2) {
        if (in_R10 == plVar13[2]) goto LAB_0c5e1dbf;
      }
      else {
        if (param_6 <= uVar6) {
          if ((uVar6 | param_6) >> 0x20 == 0) {
            if ((uVar6 & 0xffffffff) % (param_6 & 0xffffffff) != param_5) {
              return 1;
            }
            goto LAB_0c5e1d76;
          }
          uVar6 = uVar6 % param_6;
        }
        if (uVar6 != param_5) {
          return 1;
        }
      }
LAB_0c5e1d76:
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        return 1;
      }
    } while( true );
  }
  do {
    if (plVar13[1] == param_2) {
      if (in_R10 == plVar13[2]) break;
    }
    else if ((plVar13[1] & param_6 - 1) != param_5) {
      return 1;
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
      return 1;
    }
  } while( true );
LAB_0c5e1dbf:
  param_12 = (undefined *)0x0;
  param_9._4_4_ = param_4;
  if ((*unaff_RBX & 1) == 0) {
    param_15 = (byte *)unaff_RBX[2];
    param_13 = *unaff_RBX;
    param_14._0_4_ = (uint)unaff_RBX[1];
    param_14._4_4_ = *(uint *)((long)unaff_RBX + 0xc);
    param_16 = 0;
    uVar6 = (ulong)(uint)*unaff_RBX & 0xff;
    if (((uint)*unaff_RBX & 1) == 0) goto LAB_0c5e1df6;
LAB_0c5e1e2e:
    uVar14 = CONCAT44(param_14._4_4_,(uint)param_14);
    param_7._4_4_ = (uint)uVar6;
    if (uVar14 != 0) goto LAB_0c5e1e45;
LAB_0c5e1f22:
    param_16 = 0;
    uVar12 = 0;
  }
  else {
    func_0x0412e5e0(&param_13,unaff_RBX[2],unaff_RBX[1]);
    param_16 = 0;
    uVar6 = param_13 & 0xff;
    if ((param_13 & 1) != 0) goto LAB_0c5e1e2e;
LAB_0c5e1df6:
    param_7._4_4_ = (uint)uVar6;
    uVar14 = uVar6 >> 1;
    if (uVar14 == 0) goto LAB_0c5e1f22;
LAB_0c5e1e45:
    param_16 = 0;
    pbVar15 = param_15;
    if ((uVar6 & 1) == 0) {
      pbVar15 = (byte *)((long)&param_13 + 1);
    }
    if ((pbVar15 == (byte *)0x0) || (*pbVar15 == 0)) goto LAB_0c5e1f22;
    uVar12 = 0xcbf29ce484222325;
    uVar6 = func_0x0eee2e90(pbVar15);
    if (uVar6 != 0) {
      uVar10 = (ulong)((uint)uVar6 & 7);
      if (7 < uVar6) {
        uVar6 = uVar6 & 0xfffffffffffffff8;
        do {
          uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)*pbVar15) * 0x100000001b3 ^
                        (ulong)pbVar15[1]) * 0x100000001b3 ^ (ulong)pbVar15[2]) * 0x100000001b3 ^
                      (ulong)pbVar15[3]) * 0x100000001b3 ^ (ulong)pbVar15[4]) * 0x100000001b3 ^
                    (ulong)pbVar15[5]) * 0x100000001b3 ^ (ulong)pbVar15[6]) * 0x100000001b3 ^
                   (ulong)pbVar15[7];
          pbVar15 = pbVar15 + 8;
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
      if (uVar10 != 0) {
        uVar6 = 0;
        do {
          uVar12 = uVar12 * 0x100000001b3 ^ (ulong)pbVar15[uVar6];
          uVar6 = uVar6 + 1;
        } while (uVar10 != uVar6);
      }
    }
  }
  plVar8 = plVar13 + 8;
  plVar11 = (long *)plVar13[8];
  plVar7 = plVar8;
  param_12 = (undefined *)uVar12;
  if (plVar11 == (long *)0x0) {
LAB_0c5e203d:
    plVar8 = plVar7;
  }
  else {
    param_8 = param_15;
    param_10 = plVar8;
    if ((param_7._4_4_ & 1) == 0) {
      param_8 = (byte *)((long)&param_13 + 1);
    }
    do {
      uVar6 = plVar11[4];
      bVar4 = (uVar12 < uVar6) - (uVar6 < uVar12);
      if (uVar6 == uVar12) {
        if ((*(byte *)(plVar11 + 5) & 1) == 0) {
          uVar6 = (ulong)(*(byte *)(plVar11 + 5) >> 1);
          lVar9 = (long)plVar11 + 0x29;
        }
        else {
          uVar6 = plVar11[6];
          lVar9 = plVar11[7];
        }
        uVar10 = uVar6;
        if (uVar14 < uVar6) {
          uVar10 = uVar14;
        }
        iVar5 = func_0x0eee2ff0(lVar9,param_8,uVar10);
        if (iVar5 == 0) {
          iVar5 = (int)(char)((uVar14 < uVar6) - (uVar6 < uVar14));
        }
        bVar4 = (0 < iVar5) - (iVar5 < 0);
      }
      if (-1 < (char)bVar4) {
        plVar8 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + (ulong)(bVar4 >> 4 & 8));
    } while (plVar11 != (long *)0x0);
    plVar7 = param_10;
    if (plVar8 == param_10) goto LAB_0c5e203d;
    if (uVar12 == plVar8[4]) {
      bVar16 = (*(byte *)(plVar8 + 5) & 1) != 0;
      lVar9 = (long)plVar8 + 0x29;
      if (bVar16) {
        lVar9 = plVar8[7];
      }
      uVar6 = (ulong)(*(byte *)(plVar8 + 5) >> 1);
      if (bVar16) {
        uVar6 = plVar8[6];
      }
      uVar12 = uVar14;
      if (uVar6 < uVar14) {
        uVar12 = uVar6;
      }
      iVar5 = func_0x0eee2ff0(param_8,lVar9,uVar12);
      bVar16 = uVar14 < uVar6;
      if (iVar5 != 0) {
        bVar16 = iVar5 < 0;
      }
      plVar7 = param_10;
      if (bVar16) goto LAB_0c5e203d;
    }
    else if (uVar12 < (ulong)plVar8[4]) goto LAB_0c5e203d;
  }
  if ((param_7._4_4_ & 1) != 0) {
    func_0x0412a280(param_15,param_13 & 0xfffffffffffffffe);
  }
  if (plVar8 == plVar7) {
    return 1;
  }
  param_12 = (undefined *)((ulong)param_12 & 0xffffffffffffff00);
  param_15 = (byte *)((ulong)param_15 & 0xffffffffffffff00);
  if (((plVar13[5] != 0) && ((*(uint *)(plVar13 + 6) & 0x3ffff) != 0x3ffff)) &&
     (plVar8 = (long *)func_0x0412c300(), plVar8 != (long *)0x0)) {
    uVar6 = plVar13[4];
    if (uVar6 != 0) {
      uVar1 = *(uint *)(plVar13 + 6);
      uVar14 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
      if (((uVar14 < (ulong)(*(long *)(uVar6 + 0xe0) - *(long *)(uVar6 + 0xd8) >> 3)) &&
          (lVar9 = *(long *)(*(long *)(uVar6 + 0xd8) + uVar14 * 8), lVar9 != 0)) &&
         ((uVar2 = *(uint *)(lVar9 + (ulong)(uVar1 & 0x7ff) * 4),
          (uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff &&
          ((ulong)(uVar2 & 0x3ffff) < *(ulong *)(uVar6 + 0x118))))) {
        param_13 = uVar6 + 0x28;
        param_15 = (byte *)CONCAT71(param_15._1_7_,1);
        param_12 = (undefined *)uVar6;
        param_14._0_4_ = uVar1;
      }
    }
    LOCK();
    plVar13 = plVar8 + 1;
    lVar9 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((char)param_15 == '\0') {
    return 1;
  }
  lVar9 = func_0x0bc62290(&param_12,0);
  if (lVar9 == 0) {
    return 1;
  }
  func_0x08408980(&param_12,lVar9,unaff_RBX,param_9._4_4_);
  plVar8 = (long *)(**(code **)(**(long **)(lVar9 + 0x1d0) + 0xa48))();
  lVar3 = *(long *)(lVar9 + 0x10);
  uVar1 = *(uint *)(lVar9 + 0x18);
  plVar13 = (long *)(*(long *)(lVar3 + 0x38) +
                    (ulong)(((uint)(*(int *)(lVar3 + 0x40) - (int)*(long *)(lVar3 + 0x38)) >> 3) - 1
                           & 0xb845379) * 8);
  do {
    if (*plVar13 == -1) {
      plVar11 = *(long **)(lVar3 + 0x58);
      plVar13 = plVar11;
      goto LAB_0c5e21e3;
    }
    lVar9 = *plVar13 * 0x20;
    plVar13 = (long *)(*(long *)(lVar3 + 0x50) + lVar9);
  } while (*(int *)(*(long *)(lVar3 + 0x50) + 8 + lVar9) != 0xb845379);
  plVar11 = *(long **)(lVar3 + 0x58);
LAB_0c5e21e3:
  if ((plVar13 != plVar11) && (lVar9 = plVar13[2], lVar9 != 0)) {
    uVar6 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
    if ((uVar6 < (ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8) >> 3)) &&
       ((lVar3 = *(long *)(*(long *)(lVar9 + 8) + uVar6 * 8), lVar3 != 0 &&
        (uVar2 = *(uint *)(lVar3 + (ulong)(uVar1 & 0x7ff) * 4),
        (uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff)))) {
      lVar9 = (ulong)(uVar2 & 0x7f) * 0x1f8 +
              *(long *)(*(long *)(lVar9 + 0x50) + (ulong)((uVar2 & 0x3ff80) >> 4));
      goto LAB_0c5e2255;
    }
  }
  lVar9 = 0;
LAB_0c5e2255:
  (**(code **)(*plVar8 + 0x30))(plVar8,lVar9,&param_12);
  param_12 = &UNK_0f11f878;
  if ((ulong)in_stack_000000a8 != 0xffffffff) {
    (**(code **)(&UNK_0f396a40 + (ulong)in_stack_000000a8 * 8))
              ((undefined1 *)((long)register0x00000020 + 0xb),&stack0x00000070);
  }
  return 1;
}


