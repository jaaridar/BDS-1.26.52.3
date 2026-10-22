/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3efe20
 * Label: caller-of-seed
 * Body:  [[0e3efe20, 0e3effab]]
 * Ghidra: FUN_0e3efe20
 */


void FUN_0e3efe20(char param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,char param_6)

{
  byte *pbVar1;
  uint *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  uint in_EAX;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_RBX;
  ulong uVar8;
  long unaff_RBP;
  
  pbVar1 = (byte *)((long)param_4 + 0xf);
  bVar5 = (byte)param_4 & 7;
  *pbVar1 = *pbVar1 << bVar5 | *pbVar1 >> 8 - bVar5;
  plVar6 = (long *)((ulong)&stack0x00000000 & 0xffffffff);
  uVar8 = (ulong)in_EAX;
  puVar2 = (uint *)(unaff_RBP + 8);
  *puVar2 = *puVar2 << 1 | *puVar2 >> 0x1f;
  if (param_6 == '\x01') {
    pcVar3 = (code *)unaff_RBX[7];
    if (pcVar3 != (code *)0x0) {
      uVar4 = unaff_RBX[5];
      lVar7 = unaff_RBX[6];
      if (lVar7 == 0) {
        *(undefined8 *)(uVar8 - 8) = 0xe3efe51;
        (*pcVar3)(0);
        lVar7 = unaff_RBX[6];
      }
      *(undefined8 *)(uVar8 - 8) = 0xe3efe71;
      param_3 = (undefined8 *)func_0x0488e200(uVar4,lVar7,0xd67dcee5);
      if (param_3 != (undefined8 *)0x0) goto LAB_0e3efe7c;
      param_1 = *(char *)((long)unaff_RBX + 0x24);
      param_4 = (undefined8 *)*unaff_RBX;
      param_2 = *(int *)(unaff_RBX + 4);
    }
    param_3 = param_4;
    if (param_1 == '\x02') {
      param_3 = unaff_RBX;
    }
    if ((param_2 != -0x2982311b) || (param_3 == (undefined8 *)0x0)) {
      pcVar3 = (code *)unaff_RBX[7];
      if (pcVar3 == (code *)0x0) {
LAB_0e3eff72:
        lVar7 = unaff_RBX[5];
        plVar6[2] = (long)&UNK_0488e0b0;
        *(undefined4 *)(plVar6 + 4) = 0x48b5725f;
        plVar6[3] = 0;
        *(undefined1 *)((long)plVar6 + 0x24) = 0;
        *plVar6 = 0;
        plVar6[5] = lVar7;
        plVar6[6] = 0;
        plVar6[7] = 0;
        return;
      }
      uVar4 = unaff_RBX[5];
      lVar7 = unaff_RBX[6];
      if (lVar7 == 0) {
        *(undefined8 *)(uVar8 - 8) = 0xe3efefd;
        (*pcVar3)(0);
        lVar7 = unaff_RBX[6];
      }
      *(undefined8 *)(uVar8 - 8) = 0xe3eff1e;
      param_3 = (undefined8 *)func_0x0488e200(uVar4,lVar7,0xd67dcee5);
      if (param_3 == (undefined8 *)0x0) goto LAB_0e3eff72;
    }
    lVar7 = unaff_RBX[5];
    plVar6[2] = (long)&UNK_0e1b59c0;
    *(undefined4 *)(plVar6 + 4) = 0x42684b58;
    plVar6[3] = 0;
    *(undefined1 *)((long)plVar6 + 0x24) = 4;
  }
  else {
LAB_0e3efe7c:
    lVar7 = unaff_RBX[5];
    plVar6[2] = (long)&UNK_0e1b59c0;
    *(undefined4 *)(plVar6 + 4) = 0x42684b58;
    plVar6[3] = 0;
    *(undefined1 *)((long)plVar6 + 0x24) = 3;
  }
  *plVar6 = (long)param_3 + 0x21a;
  plVar6[5] = lVar7;
  plVar6[6] = 0;
  plVar6[7] = (long)&UNK_0e1b58e0;
  return;
}


