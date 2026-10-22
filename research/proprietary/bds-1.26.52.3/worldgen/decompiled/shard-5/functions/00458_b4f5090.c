/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb5f5090 (ELF vaddr 0xb4f5090)
 * Label: caller-of-callee
 * Body:  [[0b5f5090, 0b5f5131] [0b5f5140, 0b5f5691]]
 * Ghidra: FUN_0b5f5090
 */


/* WARNING: Removing unreachable block (ram,0x0b5f54ce) */
/* WARNING: Removing unreachable block (ram,0x0b5f54df) */
/* WARNING: Removing unreachable block (ram,0x0b5f54ec) */
/* WARNING: Removing unreachable block (ram,0x0b5f54ff) */
/* WARNING: Removing unreachable block (ram,0x0b5f550c) */
/* WARNING: Removing unreachable block (ram,0x0b5f551a) */
/* WARNING: Removing unreachable block (ram,0x0b5f552d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0b5f5090(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  char cVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  int *piStack_c8;
  int *piStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  *param_1 = 0;
  puStack_78 = param_1;
  cVar4 = func_0x04864270(param_2);
  if (cVar4 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 6) = 0;
    *puStack_78 = puVar6;
    func_0x04865530(auStack_40,param_2);
    func_0x048655b0(auStack_50,param_2);
    while (cVar4 = func_0x04862c80(auStack_40,auStack_50), cVar4 == '\0') {
      uVar7 = func_0x04862b80(auStack_40);
      piStack_c8 = (int *)0x0;
      cVar4 = func_0x04864290(uVar7);
      if (cVar4 != '\0') {
        uVar8 = func_0x048648e0(uVar7,&UNK_01410416);
        uVar7 = func_0x048648e0(uVar7,&UNK_0138e8dd);
        cVar4 = func_0x04865490(uVar8);
        if (((cVar4 != '\0') && (cVar4 = func_0x04864260(uVar7), cVar4 == '\0')) &&
           (func_0x0b5f5b80(&piStack_c0,uVar7), piStack_c0 != (int *)0x0)) {
          bStack_70 = 0;
          uStack_6f = 0;
          func_0x04863cb0(&uStack_b8,uVar8,&bStack_70);
          uStack_a0 = 0;
          if (((ulong)uStack_b8 & 1) == 0) {
            pbStack_88 = pbStack_a8;
            uStack_98 = (uint)uStack_b8;
            uStack_94 = uStack_b8._4_4_;
            uStack_90 = uStack_b0;
            uStack_8c = uStack_ac;
          }
          else {
            func_0x0412e5e0(&uStack_98,pbStack_a8,CONCAT44(uStack_ac,uStack_b0));
          }
          uStack_80 = 0;
          if ((uStack_98 & 1) == 0) {
            if ((byte)uStack_98 >> 1 != 0) goto LAB_0b5f526d;
joined_r0x0b5f5490:
            uStack_a0 = 0;
          }
          else {
            if (CONCAT44(uStack_8c,uStack_90) == 0) goto joined_r0x0b5f5490;
LAB_0b5f526d:
            pbVar11 = (byte *)((long)&uStack_98 + 1);
            if ((uStack_98 & 1) != 0) {
              pbVar11 = pbStack_88;
            }
            if ((pbVar11 == (byte *)0x0) || (*pbVar11 == 0)) goto joined_r0x0b5f5490;
            uVar9 = func_0x0eee2e90(pbVar11);
            uStack_a0 = 0xcbf29ce484222325;
            if (uVar9 != 0) {
              if (7 < uVar9) {
                uVar10 = uVar9 & 0xfffffffffffffff8;
                do {
                  uStack_a0 = (((((((uStack_a0 * 0x100000001b3 ^ (ulong)*pbVar11) * 0x100000001b3 ^
                                   (ulong)pbVar11[1]) * 0x100000001b3 ^ (ulong)pbVar11[2]) *
                                  0x100000001b3 ^ (ulong)pbVar11[3]) * 0x100000001b3 ^
                                (ulong)pbVar11[4]) * 0x100000001b3 ^ (ulong)pbVar11[5]) *
                               0x100000001b3 ^ (ulong)pbVar11[6]) * 0x100000001b3 ^
                              (ulong)pbVar11[7];
                  pbVar11 = pbVar11 + 8;
                  uVar10 = uVar10 - 8;
                } while (uVar10 != 0);
              }
              if ((uVar9 & 7) != 0) {
                uVar10 = 0;
                do {
                  uStack_a0 = uStack_a0 * 0x100000001b3 ^ (ulong)pbVar11[uVar10];
                  uVar10 = uVar10 + 1;
                } while (((uint)uVar9 & 7) != uVar10);
              }
            }
          }
          if (((ulong)uStack_b8 & 1) != 0) {
            func_0x0412a280(pbStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
          }
          if ((bStack_70 & 1) != 0) {
            func_0x0412a280(uStack_60,
                            CONCAT62(uStack_6e,CONCAT11(uStack_6f,bStack_70)) & 0xfffffffffffffffe);
          }
          pbVar11 = (byte *)((long)&uStack_98 + 1);
          if ((uStack_98 & 1) != 0) {
            pbVar11 = pbStack_88;
          }
          uVar5 = func_0x0b5f6f50(uStack_a0,pbVar11,0);
          piVar3 = piStack_c0;
          piStack_c8 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
          if (piStack_c8 == (int *)0x0) {
            func_0x0eec74c0(0x68,0);
          }
          *piStack_c8 = -1;
          piStack_c8[2] = 0;
          piStack_c8[3] = 0;
          piStack_c8[4] = 0;
          piStack_c8[5] = 0;
          piStack_c8[6] = 0;
          piStack_c8[7] = 0;
          piStack_c8[8] = 0;
          piStack_c8[9] = 0;
          piStack_c8[10] = 0;
          piStack_c8[0xb] = 0;
          piStack_c8[0xc] = 0;
          piStack_c8[0xd] = 0;
          piStack_c8[0xe] = 0;
          piStack_c8[0xf] = 0;
          piStack_c8[0x10] = 0;
          piStack_c8[0x11] = 0;
          piStack_c8[0x11] = 0;
          piStack_c8[0x12] = 0;
          piStack_c8[0x13] = 0;
          piStack_c8[0x14] = 0;
          if (piStack_c8 != piVar3) {
            iVar1 = *piVar3;
            *piStack_c8 = iVar1;
            if (iVar1 != -1) {
              if (iVar1 == 7) {
                if ((ulong)(uint)piVar3[0x14] == 0xffffffff) {
                  piStack_c8[0x14] = -1;
                }
                else {
                  uStack_b8 = piStack_c8 + 4;
                  puStack_58 = puVar6;
                  (**(code **)(&UNK_0f2be818 + (ulong)(uint)piVar3[0x14] * 8))
                            (&uStack_b8,uStack_b8,piVar3 + 4);
                  puVar6 = puStack_58;
                }
              }
              else {
                *(undefined8 *)(piStack_c8 + 2) = *(undefined8 *)(piVar3 + 2);
              }
            }
          }
          piStack_c8[0x16] = 0;
          piStack_c8[0x17] = 0;
          *(undefined2 *)(piStack_c8 + 0x18) = uVar5;
          piStack_c8[0x19] = 0;
          if ((uStack_98 & 1) != 0) {
            func_0x0412a280(pbStack_88,CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe);
          }
          piVar3 = piStack_c0;
          piStack_c0 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if ((ulong)(uint)piVar3[0x14] != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)(uint)piVar3[0x14] * 8))(&uStack_a0,piVar3 + 4);
            }
            func_0x0412a280(piVar3,0x58);
          }
        }
      }
      if (piStack_c8 != (int *)0x0) {
        uVar7 = func_0x0b5da6b0((short)piStack_c8[0x18]);
        func_0x0b5f57a0(puVar6,uVar7,piStack_c8);
        if (piStack_c8 != (int *)0x0) {
          lVar2 = *(long *)(piStack_c8 + 0x16);
          piStack_c8[0x16] = 0;
          piStack_c8[0x17] = 0;
          if (lVar2 != 0) {
            if ((ulong)*(uint *)(lVar2 + 0x50) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar2 + 0x50) * 8))
                        (&uStack_a0,lVar2 + 0x10);
            }
            func_0x0412a280(lVar2,0x58);
          }
          if ((ulong)(uint)piStack_c8[0x14] != 0xffffffff) {
            (**(code **)(&UNK_0f2be788 + (ulong)(uint)piStack_c8[0x14] * 8))
                      (&uStack_a0,piStack_c8 + 4);
          }
          func_0x0412a280(piStack_c8,0x68);
        }
      }
      func_0x04862ba0(auStack_40);
    }
    func_0x04862b40(auStack_50);
    func_0x04862b40(auStack_40);
  }
  return puStack_78;
}


