/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc91fc20 (ELF vaddr 0xc81fc20)
 * Label: string:world_gen
 * Body:  [[0c91fc20, 0c920344] [0c92039a, 0c92039e] [0c9203bc, 0c9203e9] [0c92040c, 0c920456]]
 * Ghidra: FUN_0c91fc20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c91fc20(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 uVar8;
  ulong uVar9;
  bool bVar10;
  float fVar11;
  undefined2 uStack_122;
  undefined8 *****pppppuStack_120;
  uint uStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined6 uStack_fe;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_c0;
  char cStack_b8;
  undefined8 *****pppppuStack_b0;
  uint uStack_a8;
  float fStack_9c;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 ******ppppppuStack_70;
  uint uStack_58;
  char cStack_50;
  undefined8 ******ppppppuStack_48;
  undefined8 ******ppppppuStack_40;
  undefined8 ******ppppppuStack_38;
  
  pppppuStack_b0 = (undefined8 ******)0x0;
  uStack_a8 = 0;
  uStack_fe = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108._1_3_ = (undefined3)_DAT_0159187c;
  uStack_108._0_4_ = (float)CONCAT31(uStack_108._1_3_,0x12);
  uStack_108._4_4_ = (undefined4)((ulong)_DAT_0159187c >> 0x18);
  uStack_100 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
  uStack_ff = DAT_01591884;
  ppppppuStack_110 = (undefined8 *******)0x838dddc83a29ed6c;
  ppppppuStack_98 = (undefined8 *******)0x1;
  uVar8 = (undefined2)param_3;
  pppppuStack_120 = (undefined8 *****)CONCAT62(pppppuStack_120._2_6_,uVar8);
  pppppuStack_78 = &pppppuStack_120;
  ppppppuStack_70 = &ppppppuStack_98;
  ppppppuStack_90 = &ppppppuStack_110;
  ppppppuStack_80 = &pppppuStack_b0;
  if ((ulong)*(uint *)(param_2 + 0x20) == 0xffffffff) {
    func_0x04931450();
LAB_0c920324:
    func_0x04931450();
LAB_0c920329:
    func_0x04931450();
    goto LAB_0c92032e;
  }
  ppppppuStack_48 = &ppppppuStack_80;
  (**(code **)(&UNK_0f3e4eb8 + (ulong)*(uint *)(param_2 + 0x20) * 8))(&ppppppuStack_48);
  if (((uint)(float)uStack_108 & 1) != 0) {
    func_0x0412a280(uStack_f8,CONCAT44(uStack_108._4_4_,(float)uStack_108) & 0xfffffffffffffffe);
  }
  if (uStack_a8 == 1) {
    bVar10 = true;
    fVar5 = pppppuStack_b0._0_4_;
LAB_0c91fdc7:
    if ((!bVar10) || (0.0 <= fVar5)) goto LAB_0c91fe2f;
    func_0x0c4930c0(1,3,param_4,&UNK_012683c3);
    uVar2 = *(uint *)(param_1 + 0xd0);
    if ((ulong)uVar2 == 0xffffffff) {
LAB_0c920029:
      *(undefined4 *)(param_1 + 200) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xd0) = 1;
      cVar1 = *(char *)(param_2 + 0x60);
      uStack_108 = (undefined8 *******)CONCAT44(uStack_108._4_4_,(float)uStack_108);
    }
    else {
      if (uVar2 != 1) {
        (**(code **)(&UNK_0f2bc840 + (ulong)uVar2 * 8))(&ppppppuStack_110);
        goto LAB_0c920029;
      }
      *(undefined4 *)(param_1 + 200) = 0x3f800000;
      cVar1 = *(char *)(param_2 + 0x60);
    }
  }
  else {
    func_0x0b5bfbb0(&ppppppuStack_110,&pppppuStack_b0);
    if (cStack_b8 != '\0') {
      iVar7 = (int)ppppppuStack_110;
      bVar10 = (int)ppppppuStack_110 == 0;
      fVar11 = (float)uStack_108;
      if ((ulong)uStack_c0 != 0xffffffff) {
        fStack_9c = (float)uStack_108;
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_c0 * 8))(&ppppppuStack_80,&uStack_100);
        fVar11 = fStack_9c;
      }
      fVar5 = 0.0;
      if (iVar7 == 0) {
        fVar5 = fVar11;
      }
      goto LAB_0c91fdc7;
    }
LAB_0c91fe2f:
    pppppppuVar4 = (undefined8 *******)CONCAT44(uStack_108._4_4_,(float)uStack_108);
    uStack_108 = (undefined8 *******)(param_1 + 200);
    if (uStack_108 != (undefined8 *******)&pppppuStack_b0) {
      ppppppuStack_110 = uStack_108;
      if ((ulong)uStack_a8 == 0xffffffff) goto LAB_0c920324;
      ppppppuStack_80 = &ppppppuStack_110;
      (**(code **)(&UNK_0f2bc850 + (ulong)uStack_a8 * 8))(&ppppppuStack_80,&pppppuStack_b0);
      pppppppuVar4 = uStack_108;
    }
    cVar1 = *(char *)(param_2 + 0x60);
    uStack_108 = pppppppuVar4;
  }
  if (cVar1 != '\x01') goto LAB_0c920218;
  ppppppuStack_80 = *(undefined8 *******)(param_2 + 0x28);
  pppppuStack_78 = (undefined8 *****)((ulong)pppppuStack_78 & 0xffffffffffffff00);
  cStack_50 = '\0';
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uStack_58 = 0xffffffff;
    uVar2 = *(uint *)(param_2 + 0x50);
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0xffffffff) {
      ppppppuStack_110 = &pppppuStack_78;
      (**(code **)(&UNK_0f3e4ed8 + uVar9 * 8))(&ppppppuStack_110,param_2 + 0x30);
      uStack_58 = uVar2;
    }
    cStack_50 = '\x01';
    pppppuStack_120 = (undefined8 ******)0x0;
    uStack_118 = 0;
    uStack_fe = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108._1_3_ = (undefined3)_DAT_0159187c;
    uStack_108._0_4_ = (float)CONCAT31(uStack_108._1_3_,0x12);
    uStack_108._4_4_ = (undefined4)((ulong)_DAT_0159187c >> 0x18);
    uStack_100 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
    uStack_ff = DAT_01591884;
    ppppppuStack_110 = (undefined8 *******)0x838dddc83a29ed6c;
    ppppppuStack_48 = (undefined8 *******)0x1;
    ppppppuStack_98 = &pppppuStack_120;
    ppppppuStack_90 = (undefined8 ******)&uStack_122;
    ppppppuStack_88 = &ppppppuStack_48;
    uStack_122 = uVar8;
    ppppppuStack_40 = &ppppppuStack_110;
    if (uVar2 == 0xffffffff) goto LAB_0c920329;
    ppppppuStack_38 = &ppppppuStack_98;
    (**(code **)(&UNK_0f3e4eb8 + uVar9 * 8))(&ppppppuStack_38,&pppppuStack_78);
    if (((uint)(float)uStack_108 & 1) != 0) {
      func_0x0412a280(uStack_f8,CONCAT44(uStack_108._4_4_,(float)uStack_108) & 0xfffffffffffffffe);
    }
    if (uStack_118 == 1) {
      fVar11 = pppppuStack_120._0_4_;
joined_r0x0c9200f7:
      if (fVar11 <= 0.0) goto LAB_0c920154;
LAB_0c9200f9:
      pppppppuVar4 = (undefined8 *******)CONCAT44(uStack_108._4_4_,(float)uStack_108);
      if (_DAT_01198c58 < fVar11) goto LAB_0c920154;
      uStack_108 = (undefined8 *******)(param_1 + 0xb0);
      if (uStack_108 != (undefined8 *******)&pppppuStack_120) {
        ppppppuStack_110 = uStack_108;
        if ((ulong)uStack_118 == 0xffffffff) {
LAB_0c92032e:
          uVar6 = func_0x04931450();
          uVar6 = func_0x04882e20(uVar6);
          uVar6 = func_0x04882e20(uVar6);
          func_0x04a8b170(&pppppuStack_120);
          func_0x0c920460(&ppppppuStack_80);
          func_0x04a8b170(&pppppuStack_b0);
          uVar6 = func_0x0eee2d70(uVar6);
          func_0x04a8b170(&pppppuStack_b0);
          uVar6 = func_0x0eee2d70(uVar6);
          if (((ulong)uStack_108 & 1) != 0) {
            func_0x0412a280(uStack_f8,(ulong)uStack_108 & 0xfffffffffffffffe);
          }
          func_0x04a8b170(&pppppuStack_b0);
          func_0x0eee2d70(uVar6);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ppppppuStack_98 = &ppppppuStack_110;
        (**(code **)(&UNK_0f2bc850 + (ulong)uStack_118 * 8))(&ppppppuStack_98,&pppppuStack_120);
        pppppppuVar4 = uStack_108;
      }
    }
    else {
      func_0x0b5bfbb0(&ppppppuStack_110,&pppppuStack_120);
      fVar5 = (float)uStack_108;
      fVar11 = _DAT_01198c58;
      if (cStack_b8 == '\0') goto joined_r0x0c9200f7;
      iVar7 = (int)ppppppuStack_110;
      if ((ulong)uStack_c0 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_c0 * 8))(&ppppppuStack_98,&uStack_100);
      }
      fVar11 = fVar5;
      if (iVar7 != 0) {
        fVar11 = _DAT_01198c58;
      }
      if (0.0 < fVar11) goto LAB_0c9200f9;
LAB_0c920154:
      func_0x06e9e870(1,3,param_4,&UNK_01409869);
      uVar2 = *(uint *)(param_1 + 0xb8);
      if ((ulong)uVar2 != 0xffffffff) {
        if (uVar2 == 1) {
          *(undefined4 *)(param_1 + 0xb0) = 0x42c80000;
          pppppppuVar4 = (undefined8 *******)CONCAT44(uStack_108._4_4_,(float)uStack_108);
          goto joined_r0x0c92019b;
        }
        (**(code **)(&UNK_0f2bc840 + (ulong)uVar2 * 8))(&ppppppuStack_110);
      }
      *(undefined4 *)(param_1 + 0xb0) = 0x42c80000;
      *(undefined4 *)(param_1 + 0xb8) = 1;
      pppppppuVar4 = (undefined8 *******)CONCAT44(uStack_108._4_4_,(float)uStack_108);
    }
joined_r0x0c92019b:
    uStack_108 = pppppppuVar4;
    if ((ulong)uStack_118 != 0xffffffff) {
      (**(code **)(&UNK_0f3e4e98 + (ulong)uStack_118 * 8))(&ppppppuStack_110,&pppppuStack_120);
    }
  }
  else {
    *(int *)(param_1 + 0xc0) = (int)ppppppuStack_80;
    iVar7 = (int)((ulong)ppppppuStack_80 >> 0x20);
    if ((int)ppppppuStack_80 < iVar7) {
      *(int *)(param_1 + 0xc4) = iVar7;
    }
    else {
      func_0x0b6042d0(1,3,param_4,&UNK_0124f3e7);
      *(undefined4 *)(param_1 + 0xc4) = 1;
    }
  }
  if ((cStack_50 == '\x01') && ((ulong)uStack_58 != 0xffffffff)) {
    (**(code **)(&UNK_0f3e4ec8 + (ulong)uStack_58 * 8))(&ppppppuStack_110,&pppppuStack_78);
  }
LAB_0c920218:
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x68);
  ppppppuStack_110 = (undefined8 ******)CONCAT53(ppppppuStack_110._3_5_,0x7802);
  func_0x0c9204b0(&ppppppuStack_110,param_1,param_2 + 0x70,param_3,param_4);
  if (((ulong)ppppppuStack_110 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_fe,CONCAT11(uStack_ff,uStack_100)),
                    (ulong)ppppppuStack_110 & 0xfffffffffffffffe);
  }
  ppppppuStack_110 = (undefined8 ******)CONCAT53(ppppppuStack_110._3_5_,0x7902);
  func_0x0c9204b0(&ppppppuStack_110,param_1 + 0x38,param_2 + 0x108,param_3,param_4);
  if (((ulong)ppppppuStack_110 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_fe,CONCAT11(uStack_ff,uStack_100)),
                    (ulong)ppppppuStack_110 & 0xfffffffffffffffe);
  }
  ppppppuStack_110 = (undefined8 ******)CONCAT53(ppppppuStack_110._3_5_,0x7a02);
  func_0x0c9204b0(&ppppppuStack_110,param_1 + 0x70,param_2 + 0x1a0,param_3,param_4);
  if (((ulong)ppppppuStack_110 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_fe,CONCAT11(uStack_ff,uStack_100)),
                    (ulong)ppppppuStack_110 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_a8 != 0xffffffff) {
    (**(code **)(&UNK_0f3e4e98 + (ulong)uStack_a8 * 8))(&ppppppuStack_110,&pppppuStack_b0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x159187c  world_gen
 */
