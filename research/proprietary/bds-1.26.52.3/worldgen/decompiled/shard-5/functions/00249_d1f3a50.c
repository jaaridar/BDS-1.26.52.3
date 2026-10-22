/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f3a50 (ELF vaddr 0xd1f3a50)
 * Label: callee-of:0x61416e0
 * Body:  [[0d2f3a50, 0d2f3c33] [0d2f3c40, 0d2f3d33] [0d2f3d40, 0d2f3e30] [0d2f3e40, 0d2f3f98]]
 * Ghidra: FUN_0d2f3a50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d2f3a50(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  bool bVar10;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (lVar1 != 0) {
    func_0x049e9990(lVar1);
    FUN_0412a280(lVar1,0x60);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_80 = 0x3f800000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  plVar6 = param_2 + 1;
  plVar4 = plVar6;
  plVar3 = (long *)param_2[1];
  do {
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (plVar3 == (long *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      *(undefined1 *)(plVar3 + 4) = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = (long)plVar4;
      *plVar4 = (long)plVar3;
      if (*(long *)*param_2 != 0) {
        *param_2 = *(long *)*param_2;
      }
      func_0x048bed00(param_2[1],plVar3);
      param_2[2] = param_2[2] + 1;
      pbVar9 = (byte *)plVar3[5];
      if (pbVar9 != (byte *)plVar3[6]) {
LAB_0d2f3bf0:
        do {
          bVar10 = (*pbVar9 & 1) != 0;
          pbVar7 = pbVar9 + 1;
          if (bVar10) {
            pbVar7 = *(byte **)(pbVar9 + 0x10);
          }
          uVar5 = (ulong)(*pbVar9 >> 1);
          if (bVar10) {
            uVar5 = *(ulong *)(pbVar9 + 8);
          }
          FUN_0d2f3fc0(param_1,pbVar7,uVar5,pbVar9 + 0x18,&uStack_138);
          pbVar9 = pbVar9 + 0x30;
        } while (pbVar9 != (byte *)plVar3[6]);
      }
LAB_0d2f3c28:
      plVar4 = (long *)*plVar6;
      plVar3 = plVar6;
      while (plVar8 = plVar3, plVar4 != (long *)0x0) {
        while (plVar3 = plVar4, *(byte *)(plVar3 + 4) < 2) {
          if (*(byte *)(plVar3 + 4) != 0) {
            pbVar9 = (byte *)plVar3[5];
            if (pbVar9 != (byte *)plVar3[6]) goto LAB_0d2f3cf0;
            goto LAB_0d2f3d28;
          }
          plVar4 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar8 = plVar3 + 1;
            goto LAB_0d2f3c6a;
          }
        }
        plVar4 = (long *)*plVar3;
      }
LAB_0d2f3c6a:
      plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (plVar4 == (long *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      *(undefined1 *)(plVar4 + 4) = 1;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar3;
      *plVar8 = (long)plVar4;
      if (*(long *)*param_2 != 0) {
        *param_2 = *(long *)*param_2;
      }
      func_0x048bed00(param_2[1],plVar4);
      param_2[2] = param_2[2] + 1;
      pbVar9 = (byte *)plVar4[5];
      plVar3 = plVar4;
      if (pbVar9 != (byte *)plVar4[6]) {
LAB_0d2f3cf0:
        do {
          bVar10 = (*pbVar9 & 1) != 0;
          pbVar7 = pbVar9 + 1;
          if (bVar10) {
            pbVar7 = *(byte **)(pbVar9 + 0x10);
          }
          uVar5 = (ulong)(*pbVar9 >> 1);
          if (bVar10) {
            uVar5 = *(ulong *)(pbVar9 + 8);
          }
          func_0x0d2f5270(param_1,pbVar7,uVar5,pbVar9 + 0x18,&uStack_138);
          pbVar9 = pbVar9 + 0x30;
        } while (pbVar9 != (byte *)plVar3[6]);
      }
LAB_0d2f3d28:
      plVar4 = (long *)*plVar6;
      plVar3 = plVar6;
      while (plVar8 = plVar3, plVar4 != (long *)0x0) {
        while (plVar3 = plVar4, *(byte *)(plVar3 + 4) < 3) {
          if (*(byte *)(plVar3 + 4) == 2) {
            pbVar9 = (byte *)plVar3[5];
            if (pbVar9 != (byte *)plVar3[6]) goto LAB_0d2f3df0;
            goto LAB_0d2f3e28;
          }
          plVar4 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar8 = plVar3 + 1;
            goto LAB_0d2f3d6a;
          }
        }
        plVar4 = (long *)*plVar3;
      }
LAB_0d2f3d6a:
      plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (plVar4 == (long *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      *(undefined1 *)(plVar4 + 4) = 2;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar3;
      *plVar8 = (long)plVar4;
      if (*(long *)*param_2 != 0) {
        *param_2 = *(long *)*param_2;
      }
      func_0x048bed00(param_2[1],plVar4);
      param_2[2] = param_2[2] + 1;
      pbVar9 = (byte *)plVar4[5];
      plVar3 = plVar4;
      if (pbVar9 != (byte *)plVar4[6]) {
LAB_0d2f3df0:
        do {
          bVar10 = (*pbVar9 & 1) != 0;
          pbVar7 = pbVar9 + 1;
          if (bVar10) {
            pbVar7 = *(byte **)(pbVar9 + 0x10);
          }
          uVar5 = (ulong)(*pbVar9 >> 1);
          if (bVar10) {
            uVar5 = *(ulong *)(pbVar9 + 8);
          }
          func_0x0d2f68b0(param_1,pbVar7,uVar5,pbVar9 + 0x18,&uStack_138);
          pbVar9 = pbVar9 + 0x30;
        } while (pbVar9 != (byte *)plVar3[6]);
      }
LAB_0d2f3e28:
      plVar4 = (long *)*plVar6;
      do {
        plVar3 = plVar6;
        if (plVar4 == (long *)0x0) {
LAB_0d2f3e6a:
          plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (plVar4 == (long *)0x0) {
            func_0x0eec74c0(0x40,0);
          }
          *(undefined1 *)(plVar4 + 4) = 3;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          *plVar4 = 0;
          plVar4[1] = 0;
          plVar4[2] = (long)plVar3;
          *plVar6 = (long)plVar4;
          if (*(long *)*param_2 != 0) {
            *param_2 = *(long *)*param_2;
          }
          func_0x048bed00(param_2[1],plVar4);
          param_2[2] = param_2[2] + 1;
          pbVar9 = (byte *)plVar4[5];
          plVar3 = plVar4;
          if (pbVar9 != (byte *)plVar4[6]) {
LAB_0d2f3ef0:
            do {
              bVar10 = (*pbVar9 & 1) != 0;
              pbVar7 = pbVar9 + 1;
              if (bVar10) {
                pbVar7 = *(byte **)(pbVar9 + 0x10);
              }
              uVar5 = (ulong)(*pbVar9 >> 1);
              if (bVar10) {
                uVar5 = *(ulong *)(pbVar9 + 8);
              }
              func_0x0d2f7bb0(param_1,pbVar7,uVar5,pbVar9 + 0x18,&uStack_138);
              pbVar9 = pbVar9 + 0x30;
            } while (pbVar9 != (byte *)plVar3[6]);
          }
LAB_0d2f3f24:
          func_0x05f43b50(&uStack_138);
          return;
        }
        while (plVar3 = plVar4, *(byte *)(plVar3 + 4) < 4) {
          if (*(byte *)(plVar3 + 4) == 3) {
            pbVar9 = (byte *)plVar3[5];
            if (pbVar9 != (byte *)plVar3[6]) goto LAB_0d2f3ef0;
            goto LAB_0d2f3f24;
          }
          plVar4 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar6 = plVar3 + 1;
            goto LAB_0d2f3e6a;
          }
        }
        plVar4 = (long *)*plVar3;
        plVar6 = plVar3;
      } while( true );
    }
    if ((char)plVar3[4] == '\0') {
      pbVar9 = (byte *)plVar3[5];
      if (pbVar9 != (byte *)plVar3[6]) goto LAB_0d2f3bf0;
      goto LAB_0d2f3c28;
    }
    plVar4 = plVar3;
    plVar3 = (long *)*plVar3;
  } while( true );
}


