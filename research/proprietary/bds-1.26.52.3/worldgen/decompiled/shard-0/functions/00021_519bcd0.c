/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x519bcd0
 * Label: OverworldGenerator2d::vslot0
 * Body:  [[0519bcd0, 051a2d0f] [051a2e99, 051a2ef0]]
 * Ghidra: wg_OverworldGenerator2d__vslot0
 */


/* WARNING: Removing unreachable block (ram,0x051a26e1) */
/* WARNING: Removing unreachable block (ram,0x051a26f3) */
/* WARNING: Removing unreachable block (ram,0x051a1e01) */
/* WARNING: Removing unreachable block (ram,0x051a1e13) */
/* WARNING: Removing unreachable block (ram,0x051a1726) */
/* WARNING: Removing unreachable block (ram,0x051a1738) */
/* WARNING: Removing unreachable block (ram,0x051a1044) */
/* WARNING: Removing unreachable block (ram,0x051a1056) */
/* WARNING: Removing unreachable block (ram,0x051a0971) */
/* WARNING: Removing unreachable block (ram,0x051a0983) */
/* WARNING: Removing unreachable block (ram,0x051a029d) */
/* WARNING: Removing unreachable block (ram,0x051a02af) */
/* WARNING: Removing unreachable block (ram,0x0519fbc6) */
/* WARNING: Removing unreachable block (ram,0x0519fbd8) */
/* WARNING: Removing unreachable block (ram,0x0519f25f) */
/* WARNING: Removing unreachable block (ram,0x0519f271) */
/* WARNING: Removing unreachable block (ram,0x0519d7f7) */
/* WARNING: Removing unreachable block (ram,0x0519d809) */
/* WARNING: Removing unreachable block (ram,0x0519ca57) */
/* WARNING: Removing unreachable block (ram,0x0519ca69) */
/* WARNING: Removing unreachable block (ram,0x0519c1b2) */
/* WARNING: Removing unreachable block (ram,0x0519c1c4) */
/* WARNING: Removing unreachable block (ram,0x0519cf4f) */
/* WARNING: Removing unreachable block (ram,0x0519cf61) */
/* WARNING: Removing unreachable block (ram,0x0519e27c) */
/* WARNING: Removing unreachable block (ram,0x0519e28e) */
/* WARNING: Removing unreachable block (ram,0x0519f805) */
/* WARNING: Removing unreachable block (ram,0x0519f817) */
/* WARNING: Removing unreachable block (ram,0x0519ff34) */
/* WARNING: Removing unreachable block (ram,0x0519ff46) */
/* WARNING: Removing unreachable block (ram,0x051a0601) */
/* WARNING: Removing unreachable block (ram,0x051a0613) */
/* WARNING: Removing unreachable block (ram,0x051a0cd1) */
/* WARNING: Removing unreachable block (ram,0x051a0ce3) */
/* WARNING: Removing unreachable block (ram,0x051a13b1) */
/* WARNING: Removing unreachable block (ram,0x051a13c3) */
/* WARNING: Removing unreachable block (ram,0x051a1a94) */
/* WARNING: Removing unreachable block (ram,0x051a1aa6) */
/* WARNING: Removing unreachable block (ram,0x051a2377) */
/* WARNING: Removing unreachable block (ram,0x051a2389) */
/* WARNING: Removing unreachable block (ram,0x051a2cdb) */
/* WARNING: Removing unreachable block (ram,0x051a2ced) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGenerator2d__vslot0(uint *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong *puVar8;
  long in_RAX;
  char *pcVar9;
  undefined4 *puVar10;
  long lVar11;
  long *unaff_R13;
  undefined1 uStack000000000000000f;
  undefined *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 *in_stack_00000020;
  ulong *in_stack_00000028;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined *in_stack_00000040;
  long in_stack_00000058;
  long *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined *in_stack_000000a0;
  long *in_stack_000000c0;
  undefined4 in_stack_000000d0;
  long *in_stack_00000100;
  undefined4 in_stack_00000110;
  long *in_stack_00000140;
  undefined4 in_stack_00000150;
  long *in_stack_00000180;
  undefined4 in_stack_00000190;
  long *in_stack_000001c0;
  undefined4 in_stack_000001d0;
  long *in_stack_00000200;
  long *in_stack_00000240;
  long *in_stack_00000280;
  long *in_stack_000002c0;
  long *in_stack_00000300;
  long *in_stack_00000340;
  long *in_stack_00000380;
  long *in_stack_00000748;
  long *in_stack_00000758;
  long *in_stack_00000768;
  long *in_stack_00000778;
  long *in_stack_00000788;
  long *in_stack_00000798;
  long *in_stack_000007a8;
  long *in_stack_000007b8;
  long *in_stack_000007c8;
  long *in_stack_000007d8;
  long *in_stack_000007e8;
  long *in_stack_000007f8;
  long *in_stack_00000808;
  long *in_stack_00000818;
  long *in_stack_00000828;
  long *in_stack_00000838;
  long *in_stack_00000848;
  long *in_stack_00000858;
  long *in_stack_00000868;
  long *in_stack_00000878;
  long *in_stack_00000888;
  ulong in_stack_00000a00;
  ulong in_stack_00000a08;
  ulong in_stack_00000a50;
  ulong in_stack_00000a58;
  ulong in_stack_00000aa0;
  ulong in_stack_00000aa8;
  ulong in_stack_00000af0;
  ulong in_stack_00000af8;
  ulong in_stack_00000b40;
  ulong in_stack_00000b48;
  ulong in_stack_00000b90;
  ulong in_stack_00000b98;
  ulong in_stack_00000be0;
  ulong in_stack_00000be8;
  ulong in_stack_00000c30;
  ulong in_stack_00000c38;
  ulong in_stack_00000c80;
  ulong in_stack_00000c88;
  ulong in_stack_00000cd0;
  ulong in_stack_00000cd8;
  ulong in_stack_00000d20;
  ulong in_stack_00000d28;
  ulong in_stack_00000d70;
  ulong in_stack_00000d78;
  ulong in_stack_00000dc0;
  ulong in_stack_00000dc8;
  ulong in_stack_00000e10;
  ulong in_stack_00000e18;
  ulong in_stack_00000e60;
  ulong in_stack_00000e68;
  ulong in_stack_00000eb0;
  ulong in_stack_00000eb8;
  ulong in_stack_00000f00;
  ulong in_stack_00000f08;
  ulong in_stack_00000f50;
  ulong in_stack_00000f58;
  ulong in_stack_00000fa0;
  ulong in_stack_00000fa8;
  long *in_stack_00000fc8;
  ulong in_stack_00000ff0;
  ulong in_stack_00000ff8;
  ulong in_stack_000013b0;
  ulong in_stack_000013b8;
  
  (**(code **)((ulong)*param_1 + in_RAX))();
  if (unaff_R13 != (long *)0x0) {
    LOCK();
    plVar3 = unaff_R13 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*unaff_R13 + 0x10))();
      func_0x0412c2d0();
    }
  }
  if (in_stack_00000748 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000748 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000748 + 0x10))(in_stack_00000748);
      func_0x0412c2d0(in_stack_00000748);
    }
  }
  if (in_stack_00000758 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000758 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000758 + 0x10))(in_stack_00000758);
      func_0x0412c2d0(in_stack_00000758);
    }
  }
  if (in_stack_00000768 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000768 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000768 + 0x10))(in_stack_00000768);
      func_0x0412c2d0(in_stack_00000768);
    }
  }
  if (in_stack_00000778 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000778 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000778 + 0x10))(in_stack_00000778);
      func_0x0412c2d0(in_stack_00000778);
    }
  }
  if (in_stack_00000788 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000788 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000788 + 0x10))(in_stack_00000788);
      func_0x0412c2d0(in_stack_00000788);
    }
  }
  if (in_stack_00000798 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000798 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000798 + 0x10))(in_stack_00000798);
      func_0x0412c2d0(in_stack_00000798);
    }
  }
  if (in_stack_000007a8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007a8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000007a8 + 0x10))(in_stack_000007a8);
      func_0x0412c2d0(in_stack_000007a8);
    }
  }
  if (in_stack_000007b8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007b8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000007b8 + 0x10))(in_stack_000007b8);
      func_0x0412c2d0(in_stack_000007b8);
    }
  }
  if (in_stack_000007c8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007c8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000007c8 + 0x10))(in_stack_000007c8);
      func_0x0412c2d0(in_stack_000007c8);
    }
  }
  if (in_stack_000007d8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007d8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000007d8 + 0x10))(in_stack_000007d8);
      func_0x0412c2d0(in_stack_000007d8);
    }
  }
  if (in_stack_000007e8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007e8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000007e8 + 0x10))(in_stack_000007e8);
      func_0x0412c2d0(in_stack_000007e8);
    }
  }
  if (in_stack_000007f8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007f8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_000007f8 + 0x10))(in_stack_000007f8);
      func_0x0412c2d0(in_stack_000007f8);
    }
  }
  if (in_stack_00000808 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000808 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000808 + 0x10))(in_stack_00000808);
      func_0x0412c2d0(in_stack_00000808);
    }
  }
  if (in_stack_00000818 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000818 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000818 + 0x10))(in_stack_00000818);
      func_0x0412c2d0(in_stack_00000818);
    }
  }
  if (in_stack_00000828 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000828 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000828 + 0x10))(in_stack_00000828);
      func_0x0412c2d0(in_stack_00000828);
    }
  }
  if (in_stack_00000838 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000838 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000838 + 0x10))(in_stack_00000838);
      func_0x0412c2d0(in_stack_00000838);
    }
  }
  if (in_stack_00000848 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000848 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000848 + 0x10))(in_stack_00000848);
      func_0x0412c2d0(in_stack_00000848);
    }
  }
  if (in_stack_00000858 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000858 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000858 + 0x10))(in_stack_00000858);
      func_0x0412c2d0(in_stack_00000858);
    }
  }
  if (in_stack_00000868 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000868 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000868 + 0x10))(in_stack_00000868);
      func_0x0412c2d0(in_stack_00000868);
    }
  }
  if (in_stack_00000878 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000878 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000878 + 0x10))(in_stack_00000878);
      func_0x0412c2d0(in_stack_00000878);
    }
  }
  if (in_stack_00000888 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000888 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000888 + 0x10))(in_stack_00000888);
      func_0x0412c2d0(in_stack_00000888);
    }
  }
  if ((in_stack_00000ff8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000ff8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000ff0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000ff0 & 0xff00ffffffffffff) - 8);
  }
  if (in_stack_00000fc8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000fc8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000fc8 + 0x10))(in_stack_00000fc8);
      func_0x0412c2d0(in_stack_00000fc8);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000f98,in_stack_00000088);
  in_stack_000000a0 = &UNK_0f460d78;
  in_stack_000000c0 = (long *)&stack0x000000a0;
  in_stack_000000d0 = 8;
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/corridor/addon/staircase";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_012085ce;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_012085c6;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012085c2;
        uVar6 = _UNK_012085be;
        uVar5 = _UNK_012085ba;
        *puVar10 = _DAT_012085b6;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x6573616372696174;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519c31c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012085dd - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012085b6;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c31c:
  func_0x0d337b80(&stack0x000000e0,&DAT_012085b6,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar11 = 0x22;
  pcVar9 = "trial_chambers/corridor/addon/wall";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_013c54ea;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x22;
        *(undefined8 *)(puVar10 + 4) = _DAT_013c54e2;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_013c54de;
        uVar6 = _UNK_013c54da;
        uVar5 = _UNK_013c54d6;
        *puVar10 = _DAT_013c54d2;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined2 *)(puVar10 + 8) = 0x6c6c;
        *(undefined1 *)((long)puVar10 + 0x22) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519c40c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_013c54f4 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013c54d2;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c40c:
  func_0x0d337b80(&stack0x00000120,&DAT_013c54d2,0x22,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar11 = 0x2e;
  pcVar9 = "trial_chambers/corridor/addon/ladder_to_middle";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01376bad;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2e;
        *(ulong *)((long)puVar10 + 0x1e) = CONCAT62(_UNK_01376ba7,_DAT_01376ba5);
        *(undefined8 *)((long)puVar10 + 0x26) = uVar4;
        uVar4 = CONCAT26(_DAT_01376ba5,_UNK_01376b9f);
        *(undefined8 *)(puVar10 + 4) = _DAT_01376b97;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01376b93;
        uVar6 = _UNK_01376b8f;
        uVar5 = _UNK_01376b8b;
        *puVar10 = _DAT_01376b87;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2e) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519c4fc;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01376bb5 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01376b87;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c4fc:
  func_0x0d337b80(&stack0x00000160,&DAT_01376b87,0x2e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  lVar11 = 0x2d;
  pcVar9 = "trial_chambers/corridor/addon/arrow_dispenser";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0119d028;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar10 + 0x1d) = CONCAT53(_UNK_0119d023,_DAT_0119d020);
        *(undefined8 *)((long)puVar10 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_0119d020,_UNK_0119d01b);
        *(undefined8 *)(puVar10 + 4) = _DAT_0119d013;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0119d00f;
        uVar6 = _UNK_0119d00b;
        uVar5 = _UNK_0119d007;
        *puVar10 = _DAT_0119d003;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519c5ec;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0119d030 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0119d003;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c5ec:
  func_0x0d337b80(&stack0x000001a0,&DAT_0119d003,0x2d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar11 = 0x2a;
  pcVar9 = "trial_chambers/corridor/addon/bridge_lower";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01325b69;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2a;
        *(ulong *)((long)puVar10 + 0x1a) = CONCAT26(_UNK_01325b67,_DAT_01325b61);
        *(undefined8 *)((long)puVar10 + 0x22) = uVar4;
        uVar4 = CONCAT62(_DAT_01325b61,_UNK_01325b5f);
        *(undefined8 *)(puVar10 + 4) = _DAT_01325b57;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01325b53;
        uVar6 = _UNK_01325b4f;
        uVar5 = _UNK_01325b4b;
        *puVar10 = _DAT_01325b47;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2a) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519c6d9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01325b71 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01325b47;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c6d9:
  func_0x0d337b80(&stack0x000001e0,&DAT_01325b47,0x2a,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000068 = (long *)&stack0x000000a0;
  in_stack_00000070 = 6;
  in_stack_00000030 = &UNK_012a478c;
  in_stack_00000038 = 0x24;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000f70,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000200 == (long *)&stack0x000001e0) {
    lVar11 = 0x20;
LAB_0519c8df:
    (**(code **)(*in_stack_00000200 + lVar11))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519c828;
LAB_0519c8f6:
    lVar11 = 0x20;
LAB_0519c8fb:
    (**(code **)(*in_stack_000001c0 + lVar11))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519c847;
LAB_0519c912:
    lVar11 = 0x20;
LAB_0519c917:
    (**(code **)(*in_stack_00000180 + lVar11))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519c866;
LAB_0519c92e:
    lVar11 = 0x20;
LAB_0519c933:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519c885;
LAB_0519c94a:
    lVar11 = 0x20;
LAB_0519c94f:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519c8ac;
LAB_0519c96e:
    lVar11 = 0x20;
LAB_0519c973:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519c8df;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519c8f6;
LAB_0519c828:
    lVar11 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519c8fb;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519c912;
LAB_0519c847:
    lVar11 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519c917;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519c92e;
LAB_0519c866:
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519c933;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519c94a;
LAB_0519c885:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519c94f;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519c96e;
LAB_0519c8ac:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519c973;
  }
  if ((in_stack_00000fa8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000fa8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000fa0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000fa0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000f48,in_stack_00000088);
  in_stack_000000a0 = &UNK_0f460d78;
  in_stack_000000c0 = (long *)&stack0x000000a0;
  in_stack_000000d0 = 8;
  lVar11 = 0x2a;
  pcVar9 = "trial_chambers/corridor/addon/open_walkway";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_012229b3;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2a;
        *(ulong *)((long)puVar10 + 0x1a) = CONCAT26(_UNK_012229b1,_DAT_012229ab);
        *(undefined8 *)((long)puVar10 + 0x22) = uVar4;
        uVar4 = CONCAT62(_DAT_012229ab,_UNK_012229a9);
        *(undefined8 *)(puVar10 + 4) = _DAT_012229a1;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0122299d;
        uVar6 = _UNK_01222999;
        uVar5 = _UNK_01222995;
        *puVar10 = _DAT_01222991;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2a) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519cbbc;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012229bb - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01222991;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519cbbc:
  func_0x0d337b80(&stack0x000000e0,&DAT_01222991,0x2a,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 2;
  lVar11 = 0x2c;
  pcVar9 = "trial_chambers/corridor/addon/walled_walkway";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0135c3d7;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar10 + 7) = CONCAT44(_UNK_0135c3d3,_DAT_0135c3cf);
        *(undefined8 *)(puVar10 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_0135c3cf,_UNK_0135c3cb);
        *(undefined8 *)(puVar10 + 4) = _DAT_0135c3c3;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0135c3bf;
        uVar6 = _UNK_0135c3bb;
        uVar5 = _UNK_0135c3b7;
        *puVar10 = _DAT_0135c3b3;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xb) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519cca9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0135c3df - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0135c3b3;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519cca9:
  func_0x0d337b80(&stack0x00000120,&DAT_0135c3b3,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  in_stack_00000068 = (long *)&stack0x000000a0;
  in_stack_00000070 = 3;
  in_stack_00000030 = &UNK_012085de;
  in_stack_00000038 = 0x25;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000f20,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000140 == (long *)&stack0x00000120) {
    lVar11 = 0x20;
LAB_0519ce33:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519cdec;
LAB_0519ce46:
    lVar11 = 0x20;
LAB_0519ce4b:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519ce0b;
LAB_0519ce66:
    lVar11 = 0x20;
LAB_0519ce6b:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519ce33;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519ce46;
LAB_0519cdec:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519ce4b;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519ce66;
LAB_0519ce0b:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519ce6b;
  }
  if ((in_stack_00000f58 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000f58 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000f50 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000f50 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000ef8,in_stack_00000088);
  in_stack_000000a0 = &UNK_0f460d78;
  in_stack_000000c0 = (long *)&stack0x000000a0;
  in_stack_000000d0 = 6;
  lVar11 = 0x30;
  pcVar9 = "trial_chambers/corridor/addon/open_walkway_upper";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_013c551d;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar10 + 8) = _DAT_013c5515;
        *(undefined8 *)(puVar10 + 10) = uVar4;
        uVar4 = _UNK_013c550d;
        *(undefined8 *)(puVar10 + 4) = _DAT_013c5505;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_013c5501;
        uVar6 = _UNK_013c54fd;
        uVar5 = _UNK_013c54f9;
        *puVar10 = _DAT_013c54f5;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xc) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519d0bc;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_013c5525 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013c54f5;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d0bc:
  func_0x0d337b80(&stack0x000000e0,&DAT_013c54f5,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 2;
  lVar11 = 0x2e;
  pcVar9 = "trial_chambers/corridor/addon/chandelier_upper";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_014ae750;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2e;
        *(ulong *)((long)puVar10 + 0x1e) = CONCAT62(_UNK_014ae74a,_DAT_014ae748);
        *(undefined8 *)((long)puVar10 + 0x26) = uVar4;
        uVar4 = CONCAT26(_DAT_014ae748,_UNK_014ae742);
        *(undefined8 *)(puVar10 + 4) = _DAT_014ae73a;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_014ae736;
        uVar6 = _UNK_014ae732;
        uVar5 = _UNK_014ae72e;
        *puVar10 = _DAT_014ae72a;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2e) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519d1ac;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_014ae758 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014ae72a;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d1ac:
  func_0x0d337b80(&stack0x00000120,&DAT_014ae72a,0x2e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar11 = 0x2e;
  pcVar9 = "trial_chambers/corridor/addon/decoration_upper";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01272484;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2e;
        *(ulong *)((long)puVar10 + 0x1e) = CONCAT62(_UNK_0127247e,_DAT_0127247c);
        *(undefined8 *)((long)puVar10 + 0x26) = uVar4;
        uVar4 = CONCAT26(_DAT_0127247c,_UNK_01272476);
        *(undefined8 *)(puVar10 + 4) = _DAT_0127246e;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0127246a;
        uVar6 = _UNK_01272466;
        uVar5 = _UNK_01272462;
        *puVar10 = _DAT_0127245e;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2e) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519d29c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0127248c - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0127245e;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d29c:
  func_0x0d337b80(&stack0x00000160,&DAT_0127245e,0x2e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  lVar11 = 0x28;
  pcVar9 = "trial_chambers/corridor/addon/head_upper";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_014ae771;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar10 + 4) = _DAT_014ae769;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_014ae765;
        uVar6 = _UNK_014ae761;
        uVar5 = _UNK_014ae75d;
        *puVar10 = _DAT_014ae759;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)(puVar10 + 8) = 0x72657070755f6461;
        *(undefined1 *)(puVar10 + 10) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519d38c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_014ae781 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014ae759;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d38c:
  func_0x0d337b80(&stack0x000001a0,&DAT_014ae759,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar11 = 0x2a;
  pcVar9 = "trial_chambers/corridor/addon/reward_upper";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_014ae7a4;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2a;
        *(ulong *)((long)puVar10 + 0x1a) = CONCAT26(_UNK_014ae7a2,_DAT_014ae79c);
        *(undefined8 *)((long)puVar10 + 0x22) = uVar4;
        uVar4 = CONCAT62(_DAT_014ae79c,_UNK_014ae79a);
        *(undefined8 *)(puVar10 + 4) = _DAT_014ae792;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_014ae78e;
        uVar6 = _UNK_014ae78a;
        uVar5 = _UNK_014ae786;
        *puVar10 = _DAT_014ae782;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2a) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519d479;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_014ae7ac - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014ae782;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d479:
  func_0x0d337b80(&stack0x000001e0,&DAT_014ae782,0x2a,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000068 = (long *)&stack0x000000a0;
  in_stack_00000070 = 6;
  in_stack_00000030 = &UNK_013dfbe1;
  in_stack_00000038 = 0x2b;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000ed0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000200 == (long *)&stack0x000001e0) {
    lVar11 = 0x20;
LAB_0519d67f:
    (**(code **)(*in_stack_00000200 + lVar11))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519d5c8;
LAB_0519d696:
    lVar11 = 0x20;
LAB_0519d69b:
    (**(code **)(*in_stack_000001c0 + lVar11))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519d5e7;
LAB_0519d6b2:
    lVar11 = 0x20;
LAB_0519d6b7:
    (**(code **)(*in_stack_00000180 + lVar11))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519d606;
LAB_0519d6ce:
    lVar11 = 0x20;
LAB_0519d6d3:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519d625;
LAB_0519d6ea:
    lVar11 = 0x20;
LAB_0519d6ef:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519d64c;
LAB_0519d70e:
    lVar11 = 0x20;
LAB_0519d713:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519d67f;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519d696;
LAB_0519d5c8:
    lVar11 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519d69b;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519d6b2;
LAB_0519d5e7:
    lVar11 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519d6b7;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519d6ce;
LAB_0519d606:
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519d6d3;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519d6ea;
LAB_0519d625:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519d6ef;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519d70e;
LAB_0519d64c:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519d713;
  }
  if ((in_stack_00000f08 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000f08 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000f00 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000f00 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000ea8,in_stack_00000088);
  lVar11 = 0x2c;
  pcVar9 = "trial_chambers/corridor/atrium/bogged_relief";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_013dfc31;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar10 + 7) = CONCAT44(_UNK_013dfc2d,_DAT_013dfc29);
        *(undefined8 *)(puVar10 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_013dfc29,_UNK_013dfc25);
        *(undefined8 *)(puVar10 + 4) = _DAT_013dfc1d;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_013dfc19;
        uVar6 = _UNK_013dfc15;
        uVar5 = _UNK_013dfc11;
        *puVar10 = _DAT_013dfc0d;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xb) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519d929;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_013dfc39 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013dfc0d;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d929:
  func_0x0d337b80(&stack0x000000a0,&DAT_013dfc0d,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  lVar11 = 0x2c;
  pcVar9 = "trial_chambers/corridor/atrium/breeze_relief";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0128b4ce;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar10 + 7) = CONCAT44(_UNK_0128b4ca,_DAT_0128b4c6);
        *(undefined8 *)(puVar10 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_0128b4c6,_UNK_0128b4c2);
        *(undefined8 *)(puVar10 + 4) = _DAT_0128b4ba;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0128b4b6;
        uVar6 = _UNK_0128b4b2;
        uVar5 = _UNK_0128b4ae;
        *puVar10 = _DAT_0128b4aa;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xb) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519da1c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0128b4d6 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0128b4aa;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519da1c:
  func_0x0d337b80(&stack0x000000e0,&DAT_0128b4aa,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar11 = 0x2c;
  pcVar9 = "trial_chambers/corridor/atrium/spiral_relief";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01208628;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar10 + 7) = CONCAT44(_UNK_01208624,_DAT_01208620);
        *(undefined8 *)(puVar10 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_01208620,_UNK_0120861c);
        *(undefined8 *)(puVar10 + 4) = _DAT_01208614;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01208610;
        uVar6 = _UNK_0120860c;
        uVar5 = _UNK_01208608;
        *puVar10 = _DAT_01208604;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xb) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519db01;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01208630 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01208604;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519db01:
  func_0x0d337b80(&stack0x00000120,&DAT_01208604,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar11 = 0x2c;
  pcVar9 = "trial_chambers/corridor/atrium/spider_relief";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01376bda;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar10 + 7) = CONCAT44(_UNK_01376bd6,_DAT_01376bd2);
        *(undefined8 *)(puVar10 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_01376bd2,_UNK_01376bce);
        *(undefined8 *)(puVar10 + 4) = _DAT_01376bc6;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01376bc2;
        uVar6 = _UNK_01376bbe;
        uVar5 = _UNK_01376bba;
        *puVar10 = _DAT_01376bb6;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xb) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519dbf1;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01376be2 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01376bb6;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519dbf1:
  func_0x0d337b80(&stack0x00000160,&DAT_01376bb6,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  lVar11 = 0x30;
  pcVar9 = "trial_chambers/corridor/atrium/grand_staircase_1";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_01376c0b;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar10 + 8) = _DAT_01376c03;
        *(undefined8 *)(puVar10 + 10) = uVar4;
        uVar4 = _UNK_01376bfb;
        *(undefined8 *)(puVar10 + 4) = _DAT_01376bf3;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01376bef;
        uVar6 = _UNK_01376beb;
        uVar5 = _UNK_01376be7;
        *puVar10 = _DAT_01376be3;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xc) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519dcdc;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01376c13 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01376be3;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519dcdc:
  func_0x0d337b80(&stack0x000001a0,&DAT_01376be3,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar11 = 0x30;
  pcVar9 = "trial_chambers/corridor/atrium/grand_staircase_2";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_012bdda5;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar10 + 8) = _DAT_012bdd9d;
        *(undefined8 *)(puVar10 + 10) = uVar4;
        uVar4 = _UNK_012bdd95;
        *(undefined8 *)(puVar10 + 4) = _DAT_012bdd8d;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012bdd89;
        uVar6 = _UNK_012bdd85;
        uVar5 = _UNK_012bdd81;
        *puVar10 = _DAT_012bdd7d;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xc) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519ddcc;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012bddad - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012bdd7d;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ddcc:
  func_0x0d337b80(&stack0x000001e0,&DAT_012bdd7d,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x30;
  pcVar9 = "trial_chambers/corridor/atrium/grand_staircase_3";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_012bddd6;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar10 + 8) = _DAT_012bddce;
        *(undefined8 *)(puVar10 + 10) = uVar4;
        uVar4 = _UNK_012bddc6;
        *(undefined8 *)(puVar10 + 4) = _DAT_012bddbe;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012bddba;
        uVar6 = _UNK_012bddb6;
        uVar5 = _UNK_012bddb2;
        *puVar10 = _DAT_012bddae;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 0xc) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519deb9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012bddde - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012bddae;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519deb9:
  func_0x0d337b80(&stack0x00000220,&DAT_012bddae,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000070 = 7;
  in_stack_00000030 = &UNK_01258324;
  in_stack_00000038 = 0x15;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000e80,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000240 == (long *)&stack0x00000220) {
    lVar11 = 0x20;
LAB_0519e0e0:
    (**(code **)(*in_stack_00000240 + lVar11))();
    if (in_stack_00000200 != (long *)&stack0x000001e0) goto LAB_0519e002;
LAB_0519e0f7:
    lVar11 = 0x20;
LAB_0519e0fc:
    (**(code **)(*in_stack_00000200 + lVar11))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519e021;
LAB_0519e113:
    lVar11 = 0x20;
LAB_0519e118:
    (**(code **)(*in_stack_000001c0 + lVar11))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519e048;
LAB_0519e137:
    lVar11 = 0x20;
LAB_0519e13c:
    (**(code **)(*in_stack_00000180 + lVar11))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519e06f;
LAB_0519e15b:
    lVar11 = 0x20;
LAB_0519e160:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519e08e;
LAB_0519e177:
    lVar11 = 0x20;
LAB_0519e17c:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519e0ad;
LAB_0519e193:
    lVar11 = 0x20;
LAB_0519e198:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000240 != (long *)0x0) goto LAB_0519e0e0;
    if (in_stack_00000200 == (long *)&stack0x000001e0) goto LAB_0519e0f7;
LAB_0519e002:
    lVar11 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519e0fc;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519e113;
LAB_0519e021:
    lVar11 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519e118;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519e137;
LAB_0519e048:
    lVar11 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519e13c;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519e15b;
LAB_0519e06f:
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519e160;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519e177;
LAB_0519e08e:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519e17c;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519e193;
LAB_0519e0ad:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519e198;
  }
  if ((in_stack_00000eb8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000eb8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000eb0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000eb0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000e58,in_stack_00000088);
  in_stack_000000a0 = &UNK_0f460d78;
  in_stack_000000d0 = 0x16;
  lVar11 = 0x1e;
  pcVar9 = "trial_chambers/decor/EMPTY_pot";
  in_stack_000000c0 = (long *)&stack0x000000a0;
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01340ac7;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1e;
        *(ulong *)((long)puVar10 + 0xe) = CONCAT62(_UNK_01340ac1,_DAT_01340abf);
        *(undefined8 *)((long)puVar10 + 0x16) = uVar4;
        uVar7 = _UNK_01340ab9;
        uVar6 = _UNK_01340ab5;
        uVar5 = CONCAT22(_DAT_01340abf,_UNK_01340abd);
        *puVar10 = _DAT_01340ab1;
        puVar10[1] = uVar6;
        puVar10[2] = uVar7;
        puVar10[3] = uVar5;
        *(undefined1 *)((long)puVar10 + 0x1e) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e3dc;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01340acf - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01340ab1;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e3dc:
  func_0x0d337b80(&stack0x000000e0,&DAT_01340ab1,0x1e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 2;
  lVar11 = 0x22;
  pcVar9 = "trial_chambers/decor/dead_bush_pot";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_012229d4;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x22;
        *(undefined8 *)(puVar10 + 4) = _DAT_012229cc;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012229c8;
        uVar6 = _UNK_012229c4;
        uVar5 = _UNK_012229c0;
        *puVar10 = _DAT_012229bc;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined2 *)(puVar10 + 8) = 0x746f;
        *(undefined1 *)((long)puVar10 + 0x22) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e4c1;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012229de - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012229bc;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e4c1:
  func_0x0d337b80(&stack0x00000120,&DAT_012229bc,0x22,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 2;
  lVar11 = 0x24;
  pcVar9 = "trial_chambers/decor/undecorated_pot";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_014793f6;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x24;
        *(undefined8 *)(puVar10 + 4) = _DAT_014793ee;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_014793ea;
        uVar6 = _UNK_014793e6;
        uVar5 = _UNK_014793e2;
        *puVar10 = _DAT_014793de;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        puVar10[8] = 0x746f705f;
        *(undefined1 *)(puVar10 + 9) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e5b1;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01479402 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014793de;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e5b1:
  func_0x0d337b80(&stack0x00000160,&DAT_014793de,0x24,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 10;
  lVar11 = 0x1d;
  pcVar9 = "trial_chambers/decor/flow_pot";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012a47c6;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar10 + 0xd) = CONCAT53(_UNK_012a47c1,_DAT_012a47be);
        *(undefined8 *)((long)puVar10 + 0x15) = uVar4;
        uVar7 = _UNK_012a47bd;
        uVar6 = _UNK_012a47b9;
        uVar5 = _UNK_012a47b5;
        *puVar10 = _DAT_012a47b1;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e6a1;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012a47ce - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012a47b1;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e6a1:
  func_0x0d337b80(&stack0x000001a0,&DAT_012a47b1,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar11 = 0x1f;
  pcVar9 = "trial_chambers/decor/guster_pot";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_0147941a;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1f;
        *(ulong *)((long)puVar10 + 0xf) = CONCAT71(_UNK_01479413,DAT_01479412);
        *(undefined8 *)((long)puVar10 + 0x17) = uVar4;
        uVar7 = _UNK_0147940f;
        uVar6 = _UNK_0147940b;
        uVar5 = _UNK_01479407;
        *puVar10 = _DAT_01479403;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1f) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e791;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01479422 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01479403;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e791:
  func_0x0d337b80(&stack0x000001e0,&DAT_01479403,0x1f,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x1f;
  pcVar9 = "trial_chambers/decor/scrape_pot";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_013f9e3c;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1f;
        *(ulong *)((long)puVar10 + 0xf) = CONCAT71(_UNK_013f9e35,DAT_013f9e34);
        *(undefined8 *)((long)puVar10 + 0x17) = uVar4;
        uVar7 = _UNK_013f9e31;
        uVar6 = _UNK_013f9e2d;
        uVar5 = _UNK_013f9e29;
        *puVar10 = _DAT_013f9e25;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1f) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e881;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_013f9e44 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013f9e25;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e881:
  func_0x0d337b80(&stack0x00000220,&DAT_013f9e25,0x1f,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x1d;
  pcVar9 = "trial_chambers/decor/candle_1";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012a47e4;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar10 + 0xd) = CONCAT53(_UNK_012a47df,_DAT_012a47dc);
        *(undefined8 *)((long)puVar10 + 0x15) = uVar4;
        uVar7 = _UNK_012a47db;
        uVar6 = _UNK_012a47d7;
        uVar5 = _UNK_012a47d3;
        *puVar10 = _DAT_012a47cf;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519e971;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012a47ec - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012a47cf;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e971:
  func_0x0d337b80(&stack0x00000260,&DAT_012a47cf,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x1d;
  pcVar9 = "trial_chambers/decor/candle_2";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012229f4;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar10 + 0xd) = CONCAT53(_UNK_012229ef,_DAT_012229ec);
        *(undefined8 *)((long)puVar10 + 0x15) = uVar4;
        uVar7 = _UNK_012229eb;
        uVar6 = _UNK_012229e7;
        uVar5 = _UNK_012229e3;
        *puVar10 = _DAT_012229df;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519ea61;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012229fc - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012229df;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ea61:
  func_0x0d337b80(&stack0x000002a0,&DAT_012229df,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x1d;
  pcVar9 = "trial_chambers/decor/candle_3";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01479438;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar10 + 0xd) = CONCAT53(_UNK_01479433,_DAT_01479430);
        *(undefined8 *)((long)puVar10 + 0x15) = uVar4;
        uVar7 = _UNK_0147942f;
        uVar6 = _UNK_0147942b;
        uVar5 = _UNK_01479427;
        *puVar10 = _DAT_01479423;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519eb4c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01479440 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01479423;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519eb4c:
  func_0x0d337b80(&stack0x000002e0,&DAT_01479423,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x1d;
  pcVar9 = "trial_chambers/decor/candle_4";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012f1dca;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar10 + 0xd) = CONCAT53(_UNK_012f1dc5,_DAT_012f1dc2);
        *(undefined8 *)((long)puVar10 + 0x15) = uVar4;
        uVar7 = _UNK_012f1dc1;
        uVar6 = _UNK_012f1dbd;
        uVar5 = _UNK_012f1db9;
        *puVar10 = _DAT_012f1db5;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519ec3c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012f1dd2 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012f1db5;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ec3c:
  func_0x0d337b80(&stack0x00000320,&DAT_012f1db5,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar11 = 0x1b;
  pcVar9 = "trial_chambers/decor/barrel";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01447f9b;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1b;
        *(ulong *)((long)puVar10 + 0xb) =
             CONCAT35(_UNK_01447f98,CONCAT41(_UNK_01447f94,DAT_01447f93));
        *(undefined8 *)((long)puVar10 + 0x13) = uVar4;
        uVar7 = _UNK_01447f94;
        uVar6 = _UNK_01447f90;
        uVar5 = _UNK_01447f8c;
        *puVar10 = _DAT_01447f88;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1b) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519ed29;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01447fa3 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01447f88;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ed29:
  func_0x0d337b80(&stack0x00000360,&DAT_01447f88,0x1b,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000070 = 0xc;
  in_stack_00000030 = &UNK_0125833a;
  in_stack_00000038 = 0x14;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000e30,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000380 == (long *)&stack0x00000360) {
    lVar11 = 0x20;
LAB_0519f00f:
    (**(code **)(*in_stack_00000380 + lVar11))();
    if (in_stack_00000340 != (long *)&stack0x00000320) goto LAB_0519ee6e;
LAB_0519f026:
    lVar11 = 0x20;
LAB_0519f02b:
    (**(code **)(*in_stack_00000340 + lVar11))();
    if (in_stack_00000300 != (long *)&stack0x000002e0) goto LAB_0519ee8d;
LAB_0519f042:
    lVar11 = 0x20;
LAB_0519f047:
    (**(code **)(*in_stack_00000300 + lVar11))();
    if (in_stack_000002c0 != (long *)&stack0x000002a0) goto LAB_0519eeb4;
LAB_0519f066:
    lVar11 = 0x20;
LAB_0519f06b:
    (**(code **)(*in_stack_000002c0 + lVar11))();
    if (in_stack_00000280 != (long *)&stack0x00000260) goto LAB_0519eedb;
LAB_0519f08a:
    lVar11 = 0x20;
LAB_0519f08f:
    (**(code **)(*in_stack_00000280 + lVar11))();
    if (in_stack_00000240 != (long *)&stack0x00000220) goto LAB_0519ef02;
LAB_0519f0ae:
    lVar11 = 0x20;
LAB_0519f0b3:
    (**(code **)(*in_stack_00000240 + lVar11))();
    if (in_stack_00000200 != (long *)&stack0x000001e0) goto LAB_0519ef29;
LAB_0519f0d2:
    lVar11 = 0x20;
LAB_0519f0d7:
    (**(code **)(*in_stack_00000200 + lVar11))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519ef50;
LAB_0519f0f6:
    lVar11 = 0x20;
LAB_0519f0fb:
    (**(code **)(*in_stack_000001c0 + lVar11))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519ef77;
LAB_0519f11a:
    lVar11 = 0x20;
LAB_0519f11f:
    (**(code **)(*in_stack_00000180 + lVar11))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519ef9e;
LAB_0519f13e:
    lVar11 = 0x20;
LAB_0519f143:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519efbd;
LAB_0519f15a:
    lVar11 = 0x20;
LAB_0519f15f:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519efdc;
LAB_0519f176:
    lVar11 = 0x20;
LAB_0519f17b:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000380 != (long *)0x0) goto LAB_0519f00f;
    if (in_stack_00000340 == (long *)&stack0x00000320) goto LAB_0519f026;
LAB_0519ee6e:
    lVar11 = 0x28;
    if (in_stack_00000340 != (long *)0x0) goto LAB_0519f02b;
    if (in_stack_00000300 == (long *)&stack0x000002e0) goto LAB_0519f042;
LAB_0519ee8d:
    lVar11 = 0x28;
    if (in_stack_00000300 != (long *)0x0) goto LAB_0519f047;
    if (in_stack_000002c0 == (long *)&stack0x000002a0) goto LAB_0519f066;
LAB_0519eeb4:
    lVar11 = 0x28;
    if (in_stack_000002c0 != (long *)0x0) goto LAB_0519f06b;
    if (in_stack_00000280 == (long *)&stack0x00000260) goto LAB_0519f08a;
LAB_0519eedb:
    lVar11 = 0x28;
    if (in_stack_00000280 != (long *)0x0) goto LAB_0519f08f;
    if (in_stack_00000240 == (long *)&stack0x00000220) goto LAB_0519f0ae;
LAB_0519ef02:
    lVar11 = 0x28;
    if (in_stack_00000240 != (long *)0x0) goto LAB_0519f0b3;
    if (in_stack_00000200 == (long *)&stack0x000001e0) goto LAB_0519f0d2;
LAB_0519ef29:
    lVar11 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519f0d7;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519f0f6;
LAB_0519ef50:
    lVar11 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519f0fb;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519f11a;
LAB_0519ef77:
    lVar11 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519f11f;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519f13e;
LAB_0519ef9e:
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519f143;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519f15a;
LAB_0519efbd:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519f15f;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519f176;
LAB_0519efdc:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519f17b;
  }
  if ((in_stack_00000e68 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000e68 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000e60 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000e60 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000e08,in_stack_00000088);
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/corridor/addon/display_1";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_012a4805;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_012a47fd;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012a47f9;
        uVar6 = _UNK_012a47f5;
        uVar5 = _UNK_012a47f1;
        *puVar10 = _DAT_012a47ed;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x315f79616c707369;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519f399;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012a4814 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012a47ed;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519f399:
  func_0x0d337b80(&stack0x000000a0,&DAT_012a47ed,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/corridor/addon/display_2";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_0119d049;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_0119d041;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0119d03d;
        uVar6 = _UNK_0119d039;
        uVar5 = _UNK_0119d035;
        *puVar10 = _DAT_0119d031;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x325f79616c707369;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519f48c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0119d058 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0119d031;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519f48c:
  func_0x0d337b80(&stack0x000000e0,&DAT_0119d031,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/corridor/addon/display_3";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01447fbc;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_01447fb4;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01447fb0;
        uVar6 = _UNK_01447fac;
        uVar5 = _UNK_01447fa8;
        *puVar10 = _DAT_01447fa4;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x335f79616c707369;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519f579;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01447fcb - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01447fa4;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519f579:
  func_0x0d337b80(&stack0x00000120,&DAT_01447fa4,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  in_stack_00000070 = 3;
  in_stack_00000030 = &UNK_012d74e7;
  in_stack_00000038 = 0x17;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000de0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000140 == (long *)&stack0x00000120) {
    lVar11 = 0x20;
LAB_0519f6f1:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519f6b2;
LAB_0519f704:
    lVar11 = 0x20;
LAB_0519f709:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519f6c9;
LAB_0519f71c:
    lVar11 = 0x20;
LAB_0519f721:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519f6f1;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519f704;
LAB_0519f6b2:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519f709;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519f71c;
LAB_0519f6c9:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519f721;
  }
  if ((in_stack_00000e18 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000e18 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000e10 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000e10 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000db8,in_stack_00000088);
  in_stack_000000a0 = &UNK_0f460d78;
  in_stack_000000d0 = 4;
  lVar11 = 0x24;
  pcVar9 = "trial_chambers/decor/undecorated_pot";
  in_stack_000000c0 = (long *)&stack0x000000a0;
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_014793f6;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x24;
        *(undefined8 *)(puVar10 + 4) = _DAT_014793ee;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_014793ea;
        uVar6 = _UNK_014793e6;
        uVar5 = _UNK_014793e2;
        *puVar10 = _DAT_014793de;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        puVar10[8] = 0x746f705f;
        *(undefined1 *)(puVar10 + 9) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519f969;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01479402 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014793de;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519f969:
  func_0x0d337b80(&stack0x000000e0,&DAT_014793de,0x24,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  in_stack_00000070 = 2;
  in_stack_00000030 = &UNK_01447fcc;
  in_stack_00000038 = 0x1c;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000d90,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000100 == (long *)&stack0x000000e0) {
    lVar11 = 0x20;
LAB_0519faca:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519faa2;
LAB_0519fadd:
    lVar11 = 0x20;
LAB_0519fae2:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519faca;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519fadd;
LAB_0519faa2:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519fae2;
  }
  if ((in_stack_00000dc8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000dc8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000dc0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000dc0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000d68,in_stack_00000088);
  lVar11 = 0x1b;
  pcVar9 = "trial_chambers/reward/vault";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01390e12;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1b;
        *(ulong *)((long)puVar10 + 0xb) =
             CONCAT35(_UNK_01390e0f,CONCAT41(_UNK_01390e0b,DAT_01390e0a));
        *(undefined8 *)((long)puVar10 + 0x13) = uVar4;
        uVar7 = _UNK_01390e0b;
        uVar6 = _UNK_01390e07;
        uVar5 = _UNK_01390e03;
        *puVar10 = _DAT_01390dff;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1b) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_0519fcf9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01390e1a - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01390dff;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519fcf9:
  func_0x0d337b80(&stack0x000000a0,&DAT_01390dff,0x1b,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_01479441;
  in_stack_00000038 = 0x19;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000d40,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_0519fe50:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519fe50;
  }
  if ((in_stack_00000d78 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000d78 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000d70 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000d70 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000d18,in_stack_00000088);
  lVar11 = 0x23;
  pcVar9 = "trial_chambers/reward/ominous_vault";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_013ac962;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x23;
        *(undefined8 *)(puVar10 + 4) = _DAT_013ac95a;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_013ac956;
        uVar6 = _UNK_013ac952;
        uVar5 = _UNK_013ac94e;
        *puVar10 = _DAT_013ac94a;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined4 *)((long)puVar10 + 0x1f) = 0x746c7561;
        *(undefined1 *)((long)puVar10 + 0x23) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a0069;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_013ac96d - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013ac94a;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a0069:
  func_0x0d337b80(&stack0x000000a0,&DAT_013ac94a,0x23,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &DAT_013ac94a;
  in_stack_00000038 = 0x23;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000cf0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a01b9:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a01b9;
  }
  if ((in_stack_00000d28 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000d28 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000d20 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000d20 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000cc8,in_stack_00000088);
  lVar11 = 0x1b;
  pcVar9 = "trial_chambers/reward/vault";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01390e12;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1b;
        *(ulong *)((long)puVar10 + 0xb) =
             CONCAT35(_UNK_01390e0f,CONCAT41(_UNK_01390e0b,DAT_01390e0a));
        *(undefined8 *)((long)puVar10 + 0x13) = uVar4;
        uVar7 = _UNK_01390e0b;
        uVar6 = _UNK_01390e07;
        uVar5 = _UNK_01390e03;
        *puVar10 = _DAT_01390dff;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x1b) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a03c9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01390e1a - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01390dff;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a03c9:
  func_0x0d337b80(&stack0x000000a0,&DAT_01390dff,0x1b,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_014c9863;
  in_stack_00000038 = 0x26;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000ca0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a051d:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a051d;
  }
  if ((in_stack_00000cd8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000cd8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000cd0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000cd0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000c78,in_stack_00000088);
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/chests/connectors/supply";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01390e33;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_01390e2b;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01390e27;
        uVar6 = _UNK_01390e23;
        uVar5 = _UNK_01390e1f;
        *puVar10 = _DAT_01390e1b;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x796c707075732f73;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a0739;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01390e42 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01390e1b;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a0739:
  func_0x0d337b80(&stack0x000000a0,&DAT_01390e1b,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &DAT_01325b72;
  in_stack_00000038 = 0x1c;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000c50,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a088d:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a088d;
  }
  if ((in_stack_00000c88 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000c88 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000c80 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000c80 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000c28,in_stack_00000088);
  lVar11 = 0x1c;
  pcVar9 = "trial_chambers/chests/supply";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01325b86;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1c;
        *(ulong *)(puVar10 + 3) = CONCAT44(_UNK_01325b82,_DAT_01325b7e);
        *(undefined8 *)(puVar10 + 5) = uVar4;
        uVar7 = _DAT_01325b7e;
        uVar6 = _UNK_01325b7a;
        uVar5 = _UNK_01325b76;
        *puVar10 = _DAT_01325b72;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)(puVar10 + 7) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a0a99;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01325b8e - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01325b72;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a0a99:
  func_0x0d337b80(&stack0x000000a0,&DAT_01325b72,0x1c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_0119d059;
  in_stack_00000038 = 0x25;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000c00,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a0bed:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a0bed;
  }
  if ((in_stack_00000c38 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000c38 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000c30 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000c30 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000bd8,in_stack_00000088);
  lVar11 = 0x28;
  pcVar9 = "trial_chambers/spawner/connectors/ranged";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01390e5b;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar10 + 4) = _DAT_01390e53;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01390e4f;
        uVar6 = _UNK_01390e4b;
        uVar5 = _UNK_01390e47;
        *puVar10 = _DAT_01390e43;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)(puVar10 + 8) = 0x6465676e61722f73;
        *(undefined1 *)(puVar10 + 10) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a0e09;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01390e6b - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01390e43;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a0e09:
  func_0x0d337b80(&stack0x000000a0,&DAT_01390e43,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_012d74ff;
  in_stack_00000038 = 0x1d;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000bb0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a0f60:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a0f60;
  }
  if ((in_stack_00000be8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000be8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000be0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000be0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000b88,in_stack_00000088);
  lVar11 = 0x2d;
  pcVar9 = "trial_chambers/spawner/connectors/slow_ranged";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01340af5;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar10 + 0x1d) = CONCAT53(_UNK_01340af0,_DAT_01340aed);
        *(undefined8 *)((long)puVar10 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_01340aed,_UNK_01340ae8);
        *(undefined8 *)(puVar10 + 4) = _DAT_01340ae0;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01340adc;
        uVar6 = _UNK_01340ad8;
        uVar5 = _UNK_01340ad4;
        *puVar10 = _DAT_01340ad0;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a1179;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01340afd - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01340ad0;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a1179:
  func_0x0d337b80(&stack0x000000a0,&DAT_01340ad0,0x2d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_0119d07f;
  in_stack_00000038 = 0x22;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000b60,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a12cd:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a12cd;
  }
  if ((in_stack_00000b98 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000b98 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000b90 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000b90 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000b38,in_stack_00000088);
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/spawner/connectors/melee";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01340b16;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_01340b0e;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01340b0a;
        uVar6 = _UNK_01340b06;
        uVar5 = _UNK_01340b02;
        *puVar10 = _DAT_01340afe;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x65656c656d2f7372;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a14e9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01340b25 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01340afe;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a14e9:
  func_0x0d337b80(&stack0x000000a0,&DAT_01340afe,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_01208631;
  in_stack_00000038 = 0x1c;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000b10,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a1642:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a1642;
  }
  if ((in_stack_00000b48 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000b48 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000b40 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000b40 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000ae8,in_stack_00000088);
  lVar11 = 0x2d;
  pcVar9 = "trial_chambers/spawner/connectors/small_melee";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0145f4e1;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar10 + 0x1d) = CONCAT53(_UNK_0145f4dc,_DAT_0145f4d9);
        *(undefined8 *)((long)puVar10 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_0145f4d9,_UNK_0145f4d4);
        *(undefined8 *)(puVar10 + 4) = _DAT_0145f4cc;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0145f4c8;
        uVar6 = _UNK_0145f4c4;
        uVar5 = _UNK_0145f4c0;
        *puVar10 = _DAT_0145f4bc;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a1859;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0145f4e9 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0145f4bc;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a1859:
  func_0x0d337b80(&stack0x000000a0,&DAT_0145f4bc,0x2d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_01340b26;
  in_stack_00000038 = 0x22;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000ac0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a19b0:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a19b0;
  }
  if ((in_stack_00000af8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000af8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000af0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000af0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000a98,in_stack_00000088);
  lVar11 = 0x28;
  pcVar9 = "trial_chambers/spawner/connectors/breeze";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_012bddf7;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar10 + 4) = _DAT_012bddef;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012bddeb;
        uVar6 = _UNK_012bdde7;
        uVar5 = _UNK_012bdde3;
        *puVar10 = _DAT_012bdddf;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)(puVar10 + 8) = 0x657a656572622f73;
        *(undefined1 *)(puVar10 + 10) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a1bc9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012bde07 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012bdddf;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a1bc9:
  func_0x0d337b80(&stack0x000000a0,&DAT_012bdddf,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_01340b49;
  in_stack_00000038 = 0x1d;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000a70,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a1d1d:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a1d1d;
  }
  if ((in_stack_00000aa8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000aa8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000aa0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000aa0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x00000a48,in_stack_00000088);
  lVar11 = 0x28;
  pcVar9 = "trial_chambers/spawner/connectors/ranged";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01390e5b;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar10 + 4) = _DAT_01390e53;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01390e4f;
        uVar6 = _UNK_01390e4b;
        uVar5 = _UNK_01390e47;
        *puVar10 = _DAT_01390e43;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)(puVar10 + 8) = 0x6465676e61722f73;
        *(undefined1 *)(puVar10 + 10) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a1f29;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01390e6b - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01390e43;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a1f29:
  func_0x0d337b80(&stack0x000000a0,&DAT_01390e43,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  lVar11 = 0x27;
  pcVar9 = "trial_chambers/spawner/connectors/melee";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01340b16;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar10 + 4) = _DAT_01340b0e;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01340b0a;
        uVar6 = _UNK_01340b06;
        uVar5 = _UNK_01340b02;
        *puVar10 = _DAT_01340afe;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)((long)puVar10 + 0x1f) = 0x65656c656d2f7372;
        *(undefined1 *)((long)puVar10 + 0x27) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a200c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01340b25 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01340afe;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a200c:
  func_0x0d337b80(&stack0x000000e0,&DAT_01340afe,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar11 = 0x2d;
  pcVar9 = "trial_chambers/spawner/connectors/small_melee";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0145f4e1;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar10 + 0x1d) = CONCAT53(_UNK_0145f4dc,_DAT_0145f4d9);
        *(undefined8 *)((long)puVar10 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_0145f4d9,_UNK_0145f4d4);
        *(undefined8 *)(puVar10 + 4) = _DAT_0145f4cc;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0145f4c8;
        uVar6 = _UNK_0145f4c4;
        uVar5 = _UNK_0145f4c0;
        *puVar10 = _DAT_0145f4bc;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x2d) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a20e9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0145f4e9 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0145f4bc;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a20e9:
  func_0x0d337b80(&stack0x00000120,&DAT_0145f4bc,0x2d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  in_stack_00000070 = 3;
  in_stack_00000030 = &UNK_012229fd;
  in_stack_00000038 = 0x1a;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00000a20,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000140 == (long *)&stack0x00000120) {
    lVar11 = 0x20;
LAB_051a2263:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_051a2224;
LAB_051a2276:
    lVar11 = 0x20;
LAB_051a227b:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_051a223b;
LAB_051a228e:
    lVar11 = 0x20;
LAB_051a2293:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_051a2263;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_051a2276;
LAB_051a2224:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_051a227b;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_051a228e;
LAB_051a223b:
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a2293;
  }
  if ((in_stack_00000a58 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000a58 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000a50 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000a50 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x000009f8,in_stack_00000088);
  lVar11 = 0x24;
  pcVar9 = "trial_chambers/spawner/breeze/breeze";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01258367;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x24;
        *(undefined8 *)(puVar10 + 4) = _DAT_0125835f;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_0125835b;
        uVar6 = _UNK_01258357;
        uVar5 = _UNK_01258353;
        *puVar10 = _DAT_0125834f;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        puVar10[8] = 0x657a6565;
        *(undefined1 *)(puVar10 + 9) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a24a9;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_01258373 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0125834f;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a24a9:
  func_0x0d337b80(&stack0x000000a0,&DAT_0125834f,0x24,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  in_stack_00000070 = 1;
  in_stack_00000030 = &UNK_011b8e7d;
  in_stack_00000038 = 0x26;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x000009d0,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if ((undefined **)in_stack_000000c0 == &stack0x000000a0) {
    lVar11 = 0x20;
LAB_051a25fd:
    (**(code **)(*in_stack_000000c0 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_051a25fd;
  }
  if ((in_stack_00000a08 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000a08 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000a00 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000a00 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = *(long **)(in_stack_00000058 + 8);
  if (*(long *)(in_stack_00000058 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(in_stack_00000058 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0d88e390(&stack0x000013a8,in_stack_00000088);
  in_stack_000000a0 = &UNK_0f460d78;
  in_stack_000000d0 = 1;
  lVar11 = 0x21;
  pcVar9 = "trial_chambers/dispensers/chamber";
  in_stack_000000c0 = (long *)&stack0x000000a0;
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01448001;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x21;
        *(undefined8 *)(puVar10 + 4) = _DAT_01447ff9;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_01447ff5;
        uVar6 = _UNK_01447ff1;
        uVar5 = _UNK_01447fed;
        *puVar10 = _DAT_01447fe9;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined2 *)(puVar10 + 8) = 0x72;
        in_stack_00000020 = puVar10;
        goto LAB_051a283c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_0144800a - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01447fe9;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a283c:
  func_0x0d337b80(&stack0x000000e0,&DAT_01447fe9,0x21,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar11 = 0x28;
  pcVar9 = "trial_chambers/dispensers/wall_dispenser";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_012bde20;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar10 + 4) = _DAT_012bde18;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_012bde14;
        uVar6 = _UNK_012bde10;
        uVar5 = _UNK_012bde0c;
        *puVar10 = _DAT_012bde08;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined8 *)(puVar10 + 8) = 0x7265736e65707369;
        *(undefined1 *)(puVar10 + 10) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a292c;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_012bde30 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012bde08;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a292c:
  func_0x0d337b80(&stack0x00000120,&DAT_012bde08,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar11 = 0x29;
  pcVar9 = "trial_chambers/dispensers/floor_dispenser";
  do {
    pcVar9 = (char *)func_0x0eee2ef0(pcVar9,0x3a,lVar11);
    if (pcVar9 == (char *)0x0) break;
    if (*pcVar9 == ':') {
      if (pcVar9 != "" && pcVar9 != "") {
        puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar10 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_011ed0a0;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x29;
        *(ulong *)((long)puVar10 + 0x19) = CONCAT17(UNK_011ed09f,_DAT_011ed098);
        *(undefined8 *)((long)puVar10 + 0x21) = uVar4;
        uVar4 = CONCAT71(_DAT_011ed098,UNK_011ed097);
        *(undefined8 *)(puVar10 + 4) = _DAT_011ed08f;
        *(undefined8 *)(puVar10 + 6) = uVar4;
        uVar7 = _UNK_011ed08b;
        uVar6 = _UNK_011ed087;
        uVar5 = _UNK_011ed083;
        *puVar10 = _DAT_011ed07f;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        *(undefined1 *)((long)puVar10 + 0x29) = 0;
        in_stack_00000020 = puVar10;
        goto LAB_051a2a19;
      }
      break;
    }
    pcVar9 = pcVar9 + 1;
    lVar11 = (long)&UNK_011ed0a8 - (long)pcVar9;
  } while (0 < lVar11);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_011ed07f;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a2a19:
  func_0x0d337b80(&stack0x00000160,&DAT_011ed07f,0x29,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  in_stack_00000070 = 4;
  in_stack_00000030 = &DAT_01447fe9;
  in_stack_00000038 = 0x21;
  in_stack_00000010 = &UNK_013df34a;
  in_stack_00000018 = 5;
  uStack000000000000000f = 0;
  in_stack_00000068 = (long *)&stack0x000000a0;
  func_0x0d33dd60(&stack0x00000028,&stack0x00001380,&stack0x00000030,&stack0x00000010,
                  &stack0x0000000f,&stack0x00000068);
  func_0x0d3301c0(in_stack_00000078,&stack0x00000028);
  puVar8 = in_stack_00000028;
  in_stack_00000028 = (ulong *)0x0;
  if (puVar8 != (ulong *)0x0) {
    if ((puVar8[6] & 1) != 0) {
      func_0x0412a280(puVar8[8],puVar8[6] & 0xfffffffffffffffe);
    }
    uVar2 = puVar8[3];
    if (uVar2 != 0) {
      puVar8[4] = uVar2;
      func_0x0412a280(uVar2,puVar8[5] - uVar2);
    }
    if ((*puVar8 & 1) != 0) {
      func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar8,0x48);
  }
  if (in_stack_00000180 == (long *)&stack0x00000160) {
    lVar11 = 0x20;
LAB_051a2baf:
    (**(code **)(*in_stack_00000180 + lVar11))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_051a2b56;
LAB_051a2bc2:
    lVar11 = 0x20;
LAB_051a2bc7:
    (**(code **)(*in_stack_00000140 + lVar11))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_051a2b6d;
LAB_051a2bda:
    lVar11 = 0x20;
LAB_051a2bdf:
    (**(code **)(*in_stack_00000100 + lVar11))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_051a2b84;
LAB_051a2bf2:
    lVar11 = 0x20;
  }
  else {
    lVar11 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_051a2baf;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_051a2bc2;
LAB_051a2b56:
    lVar11 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_051a2bc7;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_051a2bda;
LAB_051a2b6d:
    lVar11 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_051a2bdf;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_051a2bf2;
LAB_051a2b84:
    lVar11 = 0x28;
    if (in_stack_000000c0 == (long *)0x0) goto joined_r0x051a2c12;
  }
  (**(code **)(*in_stack_000000c0 + lVar11))();
joined_r0x051a2c12:
  if ((in_stack_000013b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000013b8 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_000013b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000013b0 & 0xff00ffffffffffff) - 8);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  return;
}


