/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeecc050 (ELF vaddr 0xedcc050)
 * Label: callee-of:0xc961580
 * Body:  [[0eecc050, 0eecc241]]
 * Ghidra: FUN_0eecc050
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0eecc050(long *******param_1,long param_2,byte *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  long *******ppppppplStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  byte bStack_90;
  long *******ppppppplStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte bStack_60;
  long *******ppppppplStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  
  bVar2 = *(byte *)((long)*param_1 + 0x24) & *(byte *)(param_1 + 1);
  if (bVar2 != 0) {
    ppppppplStack_88 = param_1;
    pbStack_80 = param_3;
    if (*(int *)(param_1 + 0xb) != -1) {
      ppppppplStack_58 = (long *******)&ppppppplStack_88;
      func_0x0eedc720(param_1 + 0xb,&UNK_0eeccca0,&ppppppplStack_58);
    }
    if (param_3[0x30] == 1) {
      if ((*param_3 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_3 + 0x10);
        ppppppplStack_b8 = *(long ********)param_3;
        pbStack_b0 = *(byte **)(param_3 + 8);
      }
      else {
        func_0x0412e5e0(&ppppppplStack_b8,*(undefined8 *)(param_3 + 0x10),
                        *(undefined8 *)(param_3 + 8));
      }
      bStack_90 = param_3[0x28];
      uStack_a0 = *(undefined4 *)(param_3 + 0x18);
      uStack_9c = *(undefined4 *)(param_3 + 0x1c);
      uStack_98 = *(undefined4 *)(param_3 + 0x20);
      uStack_94 = *(undefined4 *)(param_3 + 0x24);
      if (((ulong)ppppppplStack_b8 & 1) == 0) {
        uStack_78 = uStack_a8;
        ppppppplStack_88 = ppppppplStack_b8;
        pbStack_80 = pbStack_b0;
      }
      else {
        func_0x0412e5e0(&ppppppplStack_88,uStack_a8,pbStack_b0);
      }
      bStack_60 = bStack_90;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      (**(code **)(_DAT_0f5463d0 + 0x78))(&DAT_0f5463d0,param_2,param_1 + 0xc);
      if (((ulong)ppppppplStack_b8 & 1) == 0) {
        uStack_48 = uStack_a8;
        ppppppplStack_58 = ppppppplStack_b8;
        pbStack_50 = pbStack_b0;
      }
      else {
        func_0x0412e5e0(&ppppppplStack_58,uStack_a8,pbStack_b0);
      }
      bStack_30 = bStack_90;
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      uStack_38 = uStack_98;
      uStack_34 = uStack_94;
      (**(code **)(_DAT_0f5463d8 + 0x78))(&DAT_0f5463d8,param_2,param_1 + 0xc);
      if (((ulong)ppppppplStack_58 & 1) != 0) {
        func_0x0412a280(uStack_48,(ulong)ppppppplStack_58 & 0xfffffffffffffffe);
      }
      if (((ulong)ppppppplStack_88 & 1) != 0) {
        func_0x0412a280(uStack_78,(ulong)ppppppplStack_88 & 0xfffffffffffffffe);
      }
      if (((ulong)ppppppplStack_b8 & 1) != 0) {
        func_0x0412a280(uStack_a8,(ulong)ppppppplStack_b8 & 0xfffffffffffffffe);
      }
    }
    else if ((_DAT_0f7b9d68 != 0) && (*(char *)(param_1 + 0x11) == '\x01')) {
      uVar1 = func_0x0417cc60();
      *(undefined8 *)(param_2 + 8) = uVar1;
    }
  }
  return bVar2 != 0;
}


