/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6ba180 (ELF vaddr 0xd5ba180)
 * Label: callee-of:0x82e9b50
 * Body:  [[0d6ba010, 0d6ba04a] [0d6ba050, 0d6ba0f9] [0d6ba100, 0d6ba23b] [0d6c05d0, 0d6c062c] [0d6c0630, 0d6c066d] [0d6c0670, 0d6c0687]]
 * Ghidra: FUN_0d6ba180
 */


/* WARNING: Possible PIC construction at 0x0d6ba0ea: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d6ba10a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d6c0667: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d6c0638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d6ba0ef) */
/* WARNING: Removing unreachable block (ram,0x0d6ba0f8) */
/* WARNING: Removing unreachable block (ram,0x0d6c066c) */

void FUN_0d6ba180(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 in_RAX;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *unaff_RBX;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *unaff_RBP;
  byte *unaff_R12;
  byte *unaff_R13;
  byte *unaff_R14;
  byte *unaff_R15;
  bool bVar17;
  undefined1 auVar18 [16];
  
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = in_RAX;
code_r0x0d6ba180:
  pbVar11 = auVar18._8_8_;
  *(byte **)((long)register0x00000020 + -8) = unaff_RBP;
  *(byte **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(byte **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(byte **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(long *)((long)register0x00000020 + -0x28) = auVar18._0_8_;
  pbVar10 = (byte *)(param_4 & 0xffffffff);
  pcVar2 = *(code **)(*(long *)param_2 + 0x30);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6ba19b;
  cVar5 = (*pcVar2)(param_2);
  pcVar2 = *(code **)(*(long *)pbVar11 + 0x30);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6ba1a7;
  (*pcVar2)(pbVar11,(int)cVar5);
  pcVar2 = *(code **)(*(long *)param_2 + 0x30);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6ba1b0;
  cVar5 = (*pcVar2)(param_2);
  if (cVar5 == '\0') {
    return;
  }
  bVar17 = (*param_1 & 1) != 0;
  pbVar8 = param_1 + 1;
  if (bVar17) {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  uVar9 = (ulong)(*param_1 >> 1);
  if (bVar17) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  pcVar2 = *(code **)(*(long *)pbVar11 + 0x10);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6ba1d5;
  (*pcVar2)(pbVar11,pbVar8,uVar9);
  pcVar2 = *(code **)(*(long *)param_2 + 0x30);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6ba1de;
  cVar5 = (*pcVar2)(param_2);
  pbVar8 = param_2;
  if (cVar5 == '\t') {
    unaff_RBP = *(byte **)((long)register0x00000020 + -8);
    pbVar7 = pbVar10;
    pbVar10 = *(byte **)((long)register0x00000020 + -0x20);
    unaff_R14 = *(byte **)((long)register0x00000020 + -0x18);
    unaff_R15 = *(byte **)((long)register0x00000020 + -0x10);
    goto SUB_0d6c05d0;
  }
  if (cVar5 != '\n') {
                    /* WARNING: Could not recover jumptable at 0x0d6ba23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0x18))(param_2,pbVar11);
    return;
  }
  unaff_RBP = *(byte **)((long)register0x00000020 + -8);
  pbVar7 = *(byte **)((long)register0x00000020 + -0x20);
  unaff_R14 = *(byte **)((long)register0x00000020 + -0x18);
  unaff_R15 = *(byte **)((long)register0x00000020 + -0x10);
SUB_0d6ba010:
  *(byte **)((long)register0x00000020 + -8) = unaff_RBP;
  *(byte **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(byte **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(byte **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(byte **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(byte **)((long)register0x00000020 + -0x30) = pbVar7;
  *(int *)((long)register0x00000020 + -0x40) = (int)pbVar10;
  unaff_RBP = *(byte **)(pbVar8 + 8);
  unaff_R14 = pbVar8 + 0x10;
  if (unaff_RBP == unaff_R14) {
LAB_0d6ba161:
    pcVar2 = *(code **)(*(long *)pbVar11 + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba16c;
    (*pcVar2)(pbVar11,0);
    return;
  }
  *(int *)((long)register0x00000020 + -0x40) = *(int *)((long)register0x00000020 + -0x40) + 1;
  unaff_R13 = &UNK_0f47e980;
  unaff_R15 = (byte *)((long)register0x00000020 + -0x38);
  param_2 = pbVar11;
  param_1 = pbVar8;
  pbVar8 = unaff_R12;
  do {
    uVar12 = *(uint *)(unaff_RBP + 0x60);
    param_4 = 0xffffffff;
    if ((ulong)uVar12 == 0xffffffff) {
      *(code **)((long)register0x00000020 + -0x50) = FUN_0d6ba180;
      auVar18 = FUN_04931450();
      unaff_RBX = pbVar11;
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
      unaff_R12 = pbVar8;
      goto code_r0x0d6ba180;
    }
    *(undefined1 **)((long)register0x00000020 + -0x38) =
         (undefined1 *)((long)register0x00000020 + -0x39);
    pcVar2 = *(code **)(&UNK_0f47e980 + (ulong)uVar12 * 8);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba083;
    pbVar8 = (byte *)(*pcVar2)(unaff_R15,unaff_RBP + 0x38);
    pcVar2 = *(code **)(*(long *)pbVar8 + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba08f;
    cVar5 = (*pcVar2)(pbVar8);
    param_2 = (byte *)(ulong)(uint)(int)cVar5;
    pcVar2 = *(code **)(*(long *)pbVar11 + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba09b;
    (*pcVar2)(pbVar11);
    pcVar2 = *(code **)(*(long *)pbVar8 + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba0a5;
    param_1 = pbVar8;
    cVar5 = (*pcVar2)();
    if (cVar5 == '\0') {
      pbVar10 = *(byte **)(unaff_RBP + 8);
      if (*(byte **)(unaff_RBP + 8) != (byte *)0x0) goto LAB_0d6ba120;
LAB_0d6ba150:
      do {
        pbVar7 = *(byte **)(unaff_RBP + 0x10);
        bVar17 = unaff_RBP != *(byte **)pbVar7;
        unaff_RBP = pbVar7;
      } while (bVar17);
    }
    else {
      bVar17 = (unaff_RBP[0x20] & 1) != 0;
      pbVar10 = unaff_RBP + 0x21;
      if (bVar17) {
        pbVar10 = *(byte **)(unaff_RBP + 0x30);
      }
      uVar9 = (ulong)(unaff_RBP[0x20] >> 1);
      if (bVar17) {
        uVar9 = *(ulong *)(unaff_RBP + 0x28);
      }
      pcVar2 = *(code **)(*(long *)pbVar11 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba0ca;
      (*pcVar2)(pbVar11,pbVar10,uVar9);
      pcVar2 = *(code **)(*(long *)pbVar8 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba0d4;
      cVar5 = (*pcVar2)(pbVar8);
      unaff_R12 = pbVar8;
      if (cVar5 == '\t') {
        puVar1 = (uint *)((long)register0x00000020 + -0x40);
        puVar14 = (undefined8 *)((long)register0x00000020 + -0x50);
        register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x50);
        *puVar14 = 0xd6ba10f;
        pbVar7 = (byte *)(ulong)*puVar1;
        pbVar10 = pbVar11;
SUB_0d6c05d0:
        do {
          *(byte **)((long)register0x00000020 + -8) = unaff_R15;
          *(byte **)((long)register0x00000020 + -0x10) = unaff_R14;
          *(byte **)((long)register0x00000020 + -0x18) = unaff_R13;
          *(byte **)((long)register0x00000020 + -0x20) = unaff_R12;
          *(byte **)((long)register0x00000020 + -0x28) = pbVar10;
          if (*(undefined8 **)(pbVar8 + 8) == *(undefined8 **)(pbVar8 + 0x10)) {
            bVar6 = pbVar8[0x20];
          }
          else {
            pcVar2 = *(code **)(*(long *)**(undefined8 **)(pbVar8 + 8) + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6c05f4;
            bVar6 = (*pcVar2)();
          }
          pcVar2 = *(code **)(*(long *)pbVar11 + 0x30);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6c0607;
          (*pcVar2)(pbVar11,(int)(char)bVar6);
          lVar3 = *(long *)(pbVar8 + 0x10);
          lVar4 = *(long *)(pbVar8 + 8);
          pcVar2 = *(code **)(*(long *)pbVar11 + 0x40);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6c061c;
          (*pcVar2)(pbVar11,(ulong)(lVar3 - lVar4) >> 3);
          unaff_R12 = *(byte **)(pbVar8 + 8);
          unaff_R13 = *(byte **)(pbVar8 + 0x10);
          if (unaff_R12 == unaff_R13) {
            return;
          }
          uVar12 = (int)pbVar7 + 1;
          pbVar7 = (byte *)(ulong)uVar12;
          while( true ) {
            pbVar8 = *(byte **)unaff_R12;
            pcVar2 = *(code **)(*(long *)pbVar8 + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6c0653;
            cVar5 = (*pcVar2)(pbVar8);
            unaff_R15 = pbVar8;
            if (cVar5 == '\t') break;
            if (cVar5 == '\n') {
              pbVar10 = (byte *)(ulong)uVar12;
              puVar16 = (undefined8 *)((long)register0x00000020 + -0x30);
              register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
              *puVar16 = 0xd6c066c;
              unaff_R14 = pbVar11;
              goto SUB_0d6ba010;
            }
            pcVar2 = *(code **)(*(long *)pbVar8 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0xd6c067c;
            (*pcVar2)(pbVar8,pbVar11);
            unaff_R12 = unaff_R12 + 8;
            if (unaff_R12 == unaff_R13) {
              return;
            }
          }
          puVar15 = (undefined8 *)((long)register0x00000020 + -0x30);
          register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
          *puVar15 = 0xd6c063d;
          pbVar10 = pbVar7;
          unaff_R14 = pbVar11;
        } while( true );
      }
      if (cVar5 == '\n') break;
      pcVar2 = *(code **)(*(long *)pbVar8 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0xd6ba13d;
      param_2 = pbVar11;
      param_1 = pbVar8;
      (*pcVar2)();
      pbVar10 = *(byte **)(unaff_RBP + 8);
      if (*(byte **)(unaff_RBP + 8) == (byte *)0x0) goto LAB_0d6ba150;
LAB_0d6ba120:
      do {
        pbVar7 = pbVar10;
        pbVar10 = *(byte **)pbVar7;
      } while (*(byte **)pbVar7 != (byte *)0x0);
    }
    unaff_RBP = pbVar7;
    if (pbVar7 == unaff_R14) goto LAB_0d6ba161;
  } while( true );
  pbVar10 = (byte *)(ulong)*(uint *)((long)register0x00000020 + -0x40);
  puVar13 = (undefined8 *)((long)register0x00000020 + -0x50);
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x50);
  *puVar13 = 0xd6ba0ef;
  pbVar7 = pbVar11;
  goto SUB_0d6ba010;
}


