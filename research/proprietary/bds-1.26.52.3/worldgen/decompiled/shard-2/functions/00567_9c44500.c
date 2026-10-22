/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9d44500 (ELF vaddr 0x9c44500)
 * Label: caller-of-callee
 * Body:  [[09d44500, 09d44b3c] [09d44b9b, 09d44c03]]
 * Ghidra: FUN_09d44500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_09d44500(undefined4 *param_1,ulong *param_2,byte *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  bool bVar14;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  undefined1 auStack_1b1 [9];
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined4 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte bStack_168;
  ulong *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined4 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  undefined4 *puStack_110;
  undefined4 *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_70 [64];
  
  if (((*param_3 & 1) != 0) && (&UNK_063fffff < *(undefined **)(param_3 + 8))) {
    uVar8 = func_0x0412dc70();
    func_0x09d44c10(auStack_70,0x1b,uVar8,param_2);
    func_0x09d44e40(param_1,auStack_70);
    func_0x048e6d60(auStack_70);
    return param_1;
  }
  plStack_208 = (long *)0x0;
  plStack_200 = (long *)0x0;
  if ((*param_2 & 1) == 0) {
    puStack_1e8 = (undefined4 *)param_2[2];
    uStack_1f8 = *param_2;
    uStack_1f0 = param_2[1];
  }
  else {
    func_0x0412e5e0(&uStack_1f8,param_2[2],param_2[1]);
  }
  puVar7 = puStack_1e8;
  uVar9 = uStack_1f0;
  if ((uStack_1f8 & 1) == 0) {
    puVar7 = (undefined4 *)((long)&uStack_1f8 + 1);
    uVar9 = uStack_1f8 >> 1 & 0x7f;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  puStack_108 = puVar7;
  uStack_100 = uVar9;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_1a8,&DAT_0f7b8f98,&puStack_108,&plStack_208,0x12e,0);
  bStack_118 = bStack_168;
  if (bStack_168 == 0) {
    uStack_158 = uStack_1a8;
    uStack_150 = uStack_1a0;
    puStack_148 = puStack_198;
    uStack_140 = uStack_190;
    uStack_138 = uStack_188;
    puStack_198 = (undefined4 *)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_130 = uStack_180;
    uStack_128 = uStack_178;
    uStack_120 = uStack_170;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x048e6d60(&uStack_1a8);
    if ((uStack_1f8 & 1) != 0) goto LAB_09d44742;
LAB_09d445ec:
    if (bStack_118 != 0) goto LAB_09d445fa;
LAB_09d44763:
    func_0x09d44ec0(&uStack_158,param_2);
    uStack_b8 = uStack_158;
    uStack_b0 = uStack_150;
    puStack_a8 = puStack_148;
    uStack_a0 = uStack_140;
    uStack_98 = uStack_138;
    puStack_148 = (undefined4 *)0x0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_90 = (undefined4)uStack_130;
    uStack_8c = uStack_130._4_4_;
    uStack_88 = (undefined4)uStack_128;
    uStack_84 = uStack_128._4_4_;
    uStack_80 = uStack_120;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x09d44e40(param_1,&uStack_b8);
    puVar11 = &uStack_b8;
  }
  else {
    if ((uStack_1f8 & 1) == 0) goto LAB_09d445ec;
LAB_09d44742:
    func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
    if (bStack_118 == 0) goto LAB_09d44763;
LAB_09d445fa:
    bVar14 = (*param_3 & 1) != 0;
    pbVar10 = param_3 + 1;
    if (bVar14) {
      pbVar10 = *(byte **)(param_3 + 0x10);
    }
    uVar9 = (ulong)(*param_3 >> 1);
    if (bVar14) {
      uVar9 = *(ulong *)(param_3 + 8);
    }
    func_0x0ee76e70(&uStack_1f8,plStack_208,pbVar10,uVar9);
    bStack_168 = bStack_1b8;
    if (bStack_1b8 == 0) {
      uStack_1a8 = uStack_1f8;
      uStack_1a0 = uStack_1f0;
      puStack_198 = puStack_1e8;
      uStack_190 = uStack_1e0;
      uStack_188 = uStack_1d8;
      puStack_1e8 = (undefined4 *)0x0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_180 = uStack_1d0;
      uStack_178 = uStack_1c8;
      uStack_170 = uStack_1c0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      func_0x048e6d60(&uStack_1f8);
    }
    if ((bStack_168 & 1) == 0) {
      func_0x09d45100(&uStack_1a8,param_2);
      uStack_f8 = uStack_1a8;
      uStack_f0 = uStack_1a0;
      puStack_e8 = puStack_198;
      uStack_e0 = uStack_190;
      uStack_d8 = uStack_188;
      puStack_198 = (undefined4 *)0x0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_d0 = (undefined4)uStack_180;
      uStack_cc = uStack_180._4_4_;
      uStack_c8 = (undefined4)uStack_178;
      uStack_c4 = uStack_178._4_4_;
      uStack_c0 = uStack_170;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x09d44e40(param_1,&uStack_f8);
      func_0x048e6d60(&uStack_f8);
    }
    else {
      bVar3 = (byte)*param_2;
      if ((bVar3 & 1) == 0) {
        uVar9 = (ulong)(bVar3 >> 1);
      }
      else {
        uVar9 = param_2[1];
      }
      uVar1 = uVar9 + 0x46;
      if (0xfffffffffffffff7 < uVar1) {
        uVar8 = FUN_04882e30();
        func_0x041084d6(&DAT_0f7b8fb8);
        if ((uStack_1f8 & 1) != 0) {
          func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
          func_0x048f9be0(&plStack_208);
          uVar8 = func_0x0eee2d70(uVar8);
          if (bStack_168 == 0) {
            func_0x048e6d60(&uStack_1a8);
          }
          if (bStack_118 == 0) {
            func_0x048e6d60(&uStack_158);
          }
        }
        func_0x048f9be0(&plStack_208);
        func_0x0eee2d70(uVar8);
        pcVar4 = (code *)swi(3);
        puVar7 = (undefined4 *)(*pcVar4)();
        return puVar7;
      }
      puStack_160 = param_2;
      puStack_110 = param_1;
      if (uVar1 < 0x17) {
        uStack_1f0 = 0;
        puStack_1e8 = (undefined4 *)0x0;
        uStack_1f8 = (ulong)(byte)((char)uVar1 * '\x02');
      }
      else {
        uVar12 = 0x1a;
        if ((uVar1 | 7) != 0x17) {
          uVar12 = (uVar1 | 7) + 1;
        }
        puVar7 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (puVar7 == (undefined4 *)0x0) {
          func_0x0eec74c0(uVar12,0);
        }
        uStack_1f8 = uVar12 | 1;
        uStack_1f0 = uVar1;
        puStack_1e8 = puVar7;
      }
      puVar2 = (undefined1 *)((long)puStack_1e8 + 0x46);
      bVar14 = (uStack_1f8 & 1) != 0;
      puVar7 = (undefined4 *)((long)&uStack_1f8 + 1);
      if (bVar14) {
        puVar7 = puStack_1e8;
      }
      *(undefined8 *)(puVar7 + 0xc) = _DAT_014517d2;
      *(undefined8 *)(puVar7 + 0xe) = _UNK_014517da;
      *(undefined8 *)(puVar7 + 8) = _DAT_014517c2;
      *(undefined8 *)(puVar7 + 10) = _UNK_014517ca;
      *(undefined8 *)(puVar7 + 4) = _DAT_014517b2;
      *(undefined8 *)(puVar7 + 6) = _UNK_014517ba;
      *puVar7 = _DAT_014517a2;
      puVar7[1] = _UNK_014517a6;
      puVar7[2] = _UNK_014517aa;
      puVar7[3] = _UNK_014517ae;
      *(undefined8 *)((long)puVar7 + 0x3e) = 0x20746120656c6966;
      puVar13 = auStack_1b1;
      if (bVar14) {
        puVar13 = puVar2;
      }
      if (uVar9 != 0) {
        if ((bVar3 & 1) == 0) {
          pbVar10 = (byte *)((long)puStack_160 + 1);
        }
        else {
          pbVar10 = (byte *)puStack_160[2];
        }
        func_0x0eee2ee0(puVar13,pbVar10,uVar9);
      }
      puVar13[uVar9] = 0;
      *(undefined1 *)(puStack_110 + 0x10) = 1;
      *puStack_110 = (undefined4)uStack_1f8;
      puStack_110[1] = uStack_1f8._4_4_;
      puStack_110[2] = (undefined4)uStack_1f0;
      puStack_110[3] = uStack_1f0._4_4_;
      *(undefined4 **)(puStack_110 + 4) = puStack_1e8;
      param_1 = puStack_110;
    }
    if (bStack_168 != 0) goto LAB_09d4495a;
    puVar11 = &uStack_1a8;
  }
  func_0x048e6d60(puVar11);
LAB_09d4495a:
  if (bStack_118 == 0) {
    func_0x048e6d60(&uStack_158);
  }
  if ((plStack_208 != (long *)0x0) && (func_0x0ee56810(&uStack_158,&plStack_208), bStack_118 == 0))
  {
    func_0x048e6d60(&uStack_158);
  }
  plVar5 = plStack_200;
  plStack_200 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = plStack_208;
  plStack_208 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x14517a2  Successfully wrote to file for MakeCode request to write to a file at 
 * 0x14517b2  te to file for MakeCode request to write to a file at 
 * 0x14517c2  akeCode request to write to a file at 
 * 0x14517d2  to write to a file at 
 */
