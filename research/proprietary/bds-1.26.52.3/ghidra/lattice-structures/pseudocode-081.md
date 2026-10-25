# FUN_09e20de0

- entry: `0x9e20de0`
- body size: 804 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e20de0(ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined7 *puVar2;
  long *plVar3;
  undefined7 *unaff_R12;
  byte *unaff_R13;
  ulong uVar4;
  long lVar5;
  byte bStack_168;
  undefined7 uStack_167;
  ulong uStack_160;
  undefined7 *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined7 *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  long lStack_120;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  undefined1 auStack_c8 [152];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  *(int *)(param_1 + 3) = (int)((ulong)((long)plVar1 - (long)plVar3) >> 3);
  func_0x04a3b850(&lStack_138);
  if (plVar3 != plVar1) {
    unaff_R12 = &uStack_167;
    if (*plVar3 == 0) {
      func_0x04885260(&lStack_138,&UNK_0149f576,6);
    }
    else {
      func_0x09dbc310(&bStack_168);
      uVar4 = (ulong)(bStack_168 >> 1);
      puVar2 = unaff_R12;
      if ((bStack_168 & 1) != 0) {
        uVar4 = uStack_160;
        puVar2 = puStack_158;
      }
      func_0x04885260(&lStack_138,puVar2,uVar4);
      if ((bStack_168 & 1) != 0) {
        func_0x0412a280(puStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
      }
    }
    plVar3 = plVar3 + 1;
    if (plVar3 != plVar1) {
      unaff_R13 = &bStack_168;
      do {
        func_0x04885260(&lStack_138,&UNK_0121f022,2);
        if (*plVar3 == 0) {
          func_0x04885260(&lStack_138,&UNK_0149f576,6);
        }
        else {
          func_0x09dbc310(unaff_R13);
          uVar4 = (ulong)(bStack_168 >> 1);
          puVar2 = unaff_R12;
          if ((bStack_168 & 1) != 0) {
            uVar4 = uStack_160;
            puVar2 = puStack_158;
          }
          func_0x04885260(&lStack_138,puVar2,uVar4);
          if ((bStack_168 & 1) != 0) {
            func_0x0412a280(puStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  if ((uStack_d0 & 0x10) == 0) {
    if ((uStack_d0 & 8) == 0) {
      uStack_150 = (ulong)uStack_150._1_7_ << 8;
      unaff_R12 = (undefined7 *)((long)&uStack_150 + 1);
      uVar4 = 0;
      goto LAB_09e2100a;
    }
    uVar4 = lStack_110 - lStack_120;
    lVar5 = lStack_120;
    if (uVar4 < 0xfffffffffffffff8) goto LAB_09e20f93;
LAB_09e210f7:
    FUN_04882e30();
LAB_09e210fc:
    FUN_0eec74c0(unaff_R13,0);
LAB_09e20fe9:
    uStack_150 = (ulong)unaff_R13 | 1;
    uStack_148 = uVar4;
    puStack_140 = unaff_R12;
  }
  else {
    if (uStack_d8 < uStack_100) {
      uStack_d8 = uStack_100;
    }
    uVar4 = uStack_d8 - lStack_108;
    lVar5 = lStack_108;
    if (0xfffffffffffffff7 < uVar4) goto LAB_09e210f7;
LAB_09e20f93:
    if (0x16 < uVar4) {
      unaff_R13 = (byte *)0x1a;
      if ((uVar4 | 7) != 0x17) {
        unaff_R13 = (byte *)((uVar4 | 7) + 1);
      }
      unaff_R12 = (undefined7 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R13);
      if (unaff_R12 == (undefined7 *)0x0) goto LAB_09e210fc;
      goto LAB_09e20fe9;
    }
    uStack_150 = CONCAT71(uStack_150._1_7_,(char)uVar4 * '\x02');
    unaff_R12 = (undefined7 *)((long)&uStack_150 + 1);
    if (uVar4 == 0) {
      uVar4 = 0;
      goto LAB_09e2100a;
    }
  }
  memmove(unaff_R12,lVar5,uVar4);
LAB_09e2100a:
  *(undefined1 *)((long)unaff_R12 + uVar4) = 0;
  lStack_138 = _UNK_0eeed6a8;
  *(undefined8 *)((long)&lStack_138 + *(long *)(_UNK_0eeed6a8 + -0x18)) = _UNK_0eeed6c0;
  puStack_130 = &UNK_0eeed150;
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  puStack_130 = &UNK_0eeece20;
  func_0x04167a40(auStack_128);
  func_0x0413aec0(&lStack_138,&UNK_0eeed6b0);
  func_0x04138180(auStack_c8);
  if ((*param_1 & 1) != 0) {
    func_0x0412a280(param_1[2],*param_1 & 0xfffffffffffffffe);
  }
  param_1[2] = (ulong)puStack_140;
  *param_1 = uStack_150;
  param_1[1] = uStack_148;
  return;
}


```
