/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4954120
 * Label: string:minecraft:surface_builder
 * Body:  [[04954120, 04954132] [049541fa, 049542e4] [049542f0, 04954394] [049543a0, 049546c1]]
 * Ghidra: FUN_04954120
 */


/* WARNING: Removing unreachable block (ram,0x04954518) */
/* WARNING: Removing unreachable block (ram,0x04954548) */
/* WARNING: Removing unreachable block (ram,0x04954489) */
/* WARNING: Removing unreachable block (ram,0x04954465) */
/* WARNING: Removing unreachable block (ram,0x049542d3) */
/* WARNING: Removing unreachable block (ram,0x0495469a) */
/* WARNING: Removing unreachable block (ram,0x0495468c) */

undefined8 FUN_04954120(byte *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  long in_RAX;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  ulong uVar7;
  int iVar8;
  int unaff_EBP;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined4 *unaff_R12;
  undefined4 unaff_R15D;
  int *unaff_retaddr;
  char *pcStack0000000000000010;
  long lStack0000000000000028;
  
  *(char *)(in_RAX + -0x7d) = *(char *)(in_RAX + -0x7d) + (char)param_4;
  pbVar1 = (byte *)(in_RAX + 0xf);
  *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  pcVar3 = (char *)(param_4 * 5 + -10);
  *pcVar3 = *pcVar3 + (char)param_4;
  lStack0000000000000028 = (long)unaff_EBP;
  *unaff_R12 = unaff_R15D;
  *(undefined1 *)(unaff_R12 + 1) = 0;
  unaff_R12[2] = 0;
  *param_2 = 0xffffffffffffffff;
  pcVar3 = (char *)(unaff_R12 + 3);
  pcVar2 = (char *)((long)unaff_R12 + 0xd);
  pcStack0000000000000010 = (char *)((long)unaff_R12 + 0x13);
  uVar10 = 0;
  do {
    while (uVar9 = (uint)uVar10, uVar9 == 0) {
      if (*(char *)(unaff_R12 + 1) != '\0') goto LAB_04954470;
LAB_049542a1:
      syscall();
      *(undefined1 *)(unaff_R12 + 1) = 1;
      uVar10 = (ulong)(uint)unaff_R12[2];
    }
    uVar7 = 0;
    do {
      if ((pcVar3[uVar7] == '\0') || (pcVar3[uVar7] == '\n')) {
        pcVar3[uVar7] = '\0';
        uVar9 = (uint)uVar7;
        cVar6 = *pcVar3;
        goto joined_r0x04954300;
      }
      uVar7 = uVar7 + 1;
    } while (uVar10 != uVar7);
    if (uVar9 == 0x200) {
LAB_04954470:
      syscall();
      if ((unaff_retaddr[1] == -1) || (*unaff_retaddr == -1)) {
        uVar5 = 0;
      }
      else {
        syscall();
        syscall();
        syscall();
        syscall();
        syscall();
        syscall();
        syscall();
        syscall();
        syscall();
        syscall();
        *(undefined8 *)(unaff_retaddr + 2) = *(undefined8 *)(unaff_retaddr + 0x2a);
        uVar5 = CONCAT71((int7)((ulong)*(undefined8 *)(unaff_retaddr + 0x2a) >> 8),1);
      }
      return uVar5;
    }
    if ((*(byte *)(unaff_R12 + 1) & 1) == 0) goto LAB_049542a1;
    *(undefined1 *)((long)unaff_R12 + uVar10 + 0xc) = 0;
    unaff_R12[2] = uVar9 + 1;
    cVar6 = *pcVar3;
joined_r0x04954300:
    if (cVar6 == 'P') {
      if ((((*pcVar2 == 'P') && (*(char *)((long)unaff_R12 + 0xe) == 'i')) &&
          (*(char *)((long)unaff_R12 + 0xf) == 'd')) &&
         (((*(char *)(unaff_R12 + 4) == ':' && (*(char *)((long)unaff_R12 + 0x11) == '\t')) &&
          (cVar6 = *(char *)((long)unaff_R12 + 0x12), cVar6 != '\0')))) {
        pcVar4 = pcStack0000000000000010;
        iVar8 = 0;
        do {
          if (((byte)(cVar6 - 0x3aU) < 0xf6) ||
             (iVar11 = (uint)(byte)(cVar6 - 0x30) + iVar8 * 10, iVar11 < iVar8)) goto LAB_04954240;
          cVar6 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          iVar8 = iVar11;
        } while (cVar6 != '\0');
        unaff_retaddr[1] = iVar11;
      }
    }
    else if (((((cVar6 == 'T') && (*pcVar2 == 'g')) && (*(char *)((long)unaff_R12 + 0xe) == 'i')) &&
             ((*(char *)((long)unaff_R12 + 0xf) == 'd' && (*(char *)(unaff_R12 + 4) == ':')))) &&
            ((*(char *)((long)unaff_R12 + 0x11) == '\t' &&
             (cVar6 = *(char *)((long)unaff_R12 + 0x12), cVar6 != '\0')))) {
      pcVar4 = pcStack0000000000000010;
      iVar8 = 0;
      do {
        if (((byte)(cVar6 - 0x3aU) < 0xf6) ||
           (iVar11 = (uint)(byte)(cVar6 - 0x30) + iVar8 * 10, iVar11 < iVar8)) goto LAB_04954240;
        cVar6 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        iVar8 = iVar11;
      } while (cVar6 != '\0');
      *unaff_retaddr = iVar11;
    }
LAB_04954240:
    uVar10 = (ulong)(~uVar9 + unaff_R12[2]);
    unaff_R12[2] = ~uVar9 + unaff_R12[2];
    func_0x0eee2ee0(pcVar3,pcVar2 + uVar9,uVar10);
  } while( true );
}


