/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x519ba70
 * Label: OverworldGenerator2d::vslot0
 * Body:  [[0519b70b, 0519b9ad] [0519ba70, 0519bcdf] [0519bce1, 051a2d0f] [051a2e99, 051a2ef0] [051a4f1c, 051a62fa] [051a69cb, 051a6dae]]
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

void wg_OverworldGenerator2d__vslot0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong *puVar8;
  long lVar9;
  char *pcVar10;
  undefined4 *puVar11;
  long *unaff_RBX;
  long *unaff_R12;
  long *unaff_R13;
  bool in_ZF;
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
  long *in_stack_000003c0;
  long *in_stack_00000400;
  long *in_stack_00000440;
  long *in_stack_00000480;
  long *in_stack_000004c0;
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
  
  if (in_ZF) {
    lVar9 = 0x20;
LAB_0519ba7b:
    (**(code **)(*param_1 + lVar9))();
    if (in_stack_000004c0 == (long *)&stack0x000004a0) goto LAB_0519ba9a;
LAB_0519b732:
    lVar9 = 0x28;
    if (in_stack_000004c0 != (long *)0x0) goto LAB_0519ba9f;
    if (in_stack_00000480 == (long *)&stack0x00000460) goto LAB_0519babe;
LAB_0519b759:
    lVar9 = 0x28;
    if (in_stack_00000480 != (long *)0x0) goto LAB_0519bac3;
    if (in_stack_00000440 == (long *)&stack0x00000420) goto LAB_0519bae2;
LAB_0519b780:
    lVar9 = 0x28;
    if (in_stack_00000440 != (long *)0x0) goto LAB_0519bae7;
    if (in_stack_00000400 == (long *)&stack0x000003e0) goto LAB_0519bb06;
LAB_0519b7a7:
    lVar9 = 0x28;
    if (in_stack_00000400 != (long *)0x0) goto LAB_0519bb0b;
    if (in_stack_000003c0 == (long *)&stack0x000003a0) goto LAB_0519bb2a;
LAB_0519b7ce:
    lVar9 = 0x28;
    if (in_stack_000003c0 != (long *)0x0) goto LAB_0519bb2f;
    if (in_stack_00000380 == (long *)&stack0x00000360) goto LAB_0519bb4e;
LAB_0519b7f5:
    lVar9 = 0x28;
    if (in_stack_00000380 != (long *)0x0) goto LAB_0519bb53;
    if (in_stack_00000340 == (long *)&stack0x00000320) goto LAB_0519bb72;
LAB_0519b81c:
    lVar9 = 0x28;
    if (in_stack_00000340 != (long *)0x0) goto LAB_0519bb77;
    if (in_stack_00000300 != (long *)&stack0x000002e0) goto LAB_0519b843;
LAB_0519bb96:
    lVar9 = 0x20;
LAB_0519bb9b:
    (**(code **)(*in_stack_00000300 + lVar9))();
    if (in_stack_000002c0 == (long *)&stack0x000002a0) goto LAB_0519bbba;
LAB_0519b86a:
    lVar9 = 0x28;
    if (in_stack_000002c0 != (long *)0x0) goto LAB_0519bbbf;
    if (in_stack_00000280 == (long *)&stack0x00000260) goto LAB_0519bbde;
LAB_0519b891:
    lVar9 = 0x28;
    if (in_stack_00000280 != (long *)0x0) goto LAB_0519bbe3;
    if (in_stack_00000240 == (long *)&stack0x00000220) goto LAB_0519bc02;
LAB_0519b8b8:
    lVar9 = 0x28;
    if (in_stack_00000240 != (long *)0x0) goto LAB_0519bc07;
    if (in_stack_00000200 == (long *)&stack0x000001e0) goto LAB_0519bc26;
LAB_0519b8df:
    lVar9 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519bc2b;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519bc4a;
LAB_0519b906:
    lVar9 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519bc4f;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519bc6e;
LAB_0519b92d:
    lVar9 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519bc73;
    if (in_stack_00000140 == unaff_R12) goto LAB_0519bc8a;
LAB_0519b94c:
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519bc8f;
    if (in_stack_00000100 != unaff_RBX) goto LAB_0519b96b;
LAB_0519bca6:
    lVar9 = 0x20;
LAB_0519bcab:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519bcca;
LAB_0519b992:
    lVar9 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0519bccf;
  }
  else {
    lVar9 = 0x28;
    if (param_1 != (long *)0x0) goto LAB_0519ba7b;
    if (in_stack_000004c0 != (long *)&stack0x000004a0) goto LAB_0519b732;
LAB_0519ba9a:
    lVar9 = 0x20;
LAB_0519ba9f:
    (**(code **)(*in_stack_000004c0 + lVar9))();
    if (in_stack_00000480 != (long *)&stack0x00000460) goto LAB_0519b759;
LAB_0519babe:
    lVar9 = 0x20;
LAB_0519bac3:
    (**(code **)(*in_stack_00000480 + lVar9))();
    if (in_stack_00000440 != (long *)&stack0x00000420) goto LAB_0519b780;
LAB_0519bae2:
    lVar9 = 0x20;
LAB_0519bae7:
    (**(code **)(*in_stack_00000440 + lVar9))();
    if (in_stack_00000400 != (long *)&stack0x000003e0) goto LAB_0519b7a7;
LAB_0519bb06:
    lVar9 = 0x20;
LAB_0519bb0b:
    (**(code **)(*in_stack_00000400 + lVar9))();
    if (in_stack_000003c0 != (long *)&stack0x000003a0) goto LAB_0519b7ce;
LAB_0519bb2a:
    lVar9 = 0x20;
LAB_0519bb2f:
    (**(code **)(*in_stack_000003c0 + lVar9))();
    if (in_stack_00000380 != (long *)&stack0x00000360) goto LAB_0519b7f5;
LAB_0519bb4e:
    lVar9 = 0x20;
LAB_0519bb53:
    (**(code **)(*in_stack_00000380 + lVar9))();
    if (in_stack_00000340 != (long *)&stack0x00000320) goto LAB_0519b81c;
LAB_0519bb72:
    lVar9 = 0x20;
LAB_0519bb77:
    (**(code **)(*in_stack_00000340 + lVar9))();
    if (in_stack_00000300 == (long *)&stack0x000002e0) goto LAB_0519bb96;
LAB_0519b843:
    lVar9 = 0x28;
    if (in_stack_00000300 != (long *)0x0) goto LAB_0519bb9b;
    if (in_stack_000002c0 != (long *)&stack0x000002a0) goto LAB_0519b86a;
LAB_0519bbba:
    lVar9 = 0x20;
LAB_0519bbbf:
    (**(code **)(*in_stack_000002c0 + lVar9))();
    if (in_stack_00000280 != (long *)&stack0x00000260) goto LAB_0519b891;
LAB_0519bbde:
    lVar9 = 0x20;
LAB_0519bbe3:
    (**(code **)(*in_stack_00000280 + lVar9))();
    if (in_stack_00000240 != (long *)&stack0x00000220) goto LAB_0519b8b8;
LAB_0519bc02:
    lVar9 = 0x20;
LAB_0519bc07:
    (**(code **)(*in_stack_00000240 + lVar9))();
    if (in_stack_00000200 != (long *)&stack0x000001e0) goto LAB_0519b8df;
LAB_0519bc26:
    lVar9 = 0x20;
LAB_0519bc2b:
    (**(code **)(*in_stack_00000200 + lVar9))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519b906;
LAB_0519bc4a:
    lVar9 = 0x20;
LAB_0519bc4f:
    (**(code **)(*in_stack_000001c0 + lVar9))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519b92d;
LAB_0519bc6e:
    lVar9 = 0x20;
LAB_0519bc73:
    (**(code **)(*in_stack_00000180 + lVar9))();
    if (in_stack_00000140 != unaff_R12) goto LAB_0519b94c;
LAB_0519bc8a:
    lVar9 = 0x20;
LAB_0519bc8f:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 == unaff_RBX) goto LAB_0519bca6;
LAB_0519b96b:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519bcab;
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519b992;
LAB_0519bcca:
    lVar9 = 0x20;
LAB_0519bccf:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  if (unaff_R13 != (long *)0x0) {
    LOCK();
    plVar3 = unaff_R13 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*unaff_R13 + 0x10))();
      func_0x0412c2d0();
    }
  }
  if (in_stack_00000748 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000748 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000748 + 0x10))(in_stack_00000748);
      func_0x0412c2d0(in_stack_00000748);
    }
  }
  if (in_stack_00000758 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000758 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000758 + 0x10))(in_stack_00000758);
      func_0x0412c2d0(in_stack_00000758);
    }
  }
  if (in_stack_00000768 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000768 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000768 + 0x10))(in_stack_00000768);
      func_0x0412c2d0(in_stack_00000768);
    }
  }
  if (in_stack_00000778 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000778 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000778 + 0x10))(in_stack_00000778);
      func_0x0412c2d0(in_stack_00000778);
    }
  }
  if (in_stack_00000788 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000788 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000788 + 0x10))(in_stack_00000788);
      func_0x0412c2d0(in_stack_00000788);
    }
  }
  if (in_stack_00000798 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000798 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000798 + 0x10))(in_stack_00000798);
      func_0x0412c2d0(in_stack_00000798);
    }
  }
  if (in_stack_000007a8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007a8 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_000007a8 + 0x10))(in_stack_000007a8);
      func_0x0412c2d0(in_stack_000007a8);
    }
  }
  if (in_stack_000007b8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007b8 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_000007b8 + 0x10))(in_stack_000007b8);
      func_0x0412c2d0(in_stack_000007b8);
    }
  }
  if (in_stack_000007c8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007c8 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_000007c8 + 0x10))(in_stack_000007c8);
      func_0x0412c2d0(in_stack_000007c8);
    }
  }
  if (in_stack_000007d8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007d8 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_000007d8 + 0x10))(in_stack_000007d8);
      func_0x0412c2d0(in_stack_000007d8);
    }
  }
  if (in_stack_000007e8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007e8 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_000007e8 + 0x10))(in_stack_000007e8);
      func_0x0412c2d0(in_stack_000007e8);
    }
  }
  if (in_stack_000007f8 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_000007f8 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_000007f8 + 0x10))(in_stack_000007f8);
      func_0x0412c2d0(in_stack_000007f8);
    }
  }
  if (in_stack_00000808 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000808 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000808 + 0x10))(in_stack_00000808);
      func_0x0412c2d0(in_stack_00000808);
    }
  }
  if (in_stack_00000818 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000818 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000818 + 0x10))(in_stack_00000818);
      func_0x0412c2d0(in_stack_00000818);
    }
  }
  if (in_stack_00000828 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000828 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000828 + 0x10))(in_stack_00000828);
      func_0x0412c2d0(in_stack_00000828);
    }
  }
  if (in_stack_00000838 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000838 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000838 + 0x10))(in_stack_00000838);
      func_0x0412c2d0(in_stack_00000838);
    }
  }
  if (in_stack_00000848 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000848 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000848 + 0x10))(in_stack_00000848);
      func_0x0412c2d0(in_stack_00000848);
    }
  }
  if (in_stack_00000858 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000858 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000858 + 0x10))(in_stack_00000858);
      func_0x0412c2d0(in_stack_00000858);
    }
  }
  if (in_stack_00000868 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000868 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000868 + 0x10))(in_stack_00000868);
      func_0x0412c2d0(in_stack_00000868);
    }
  }
  if (in_stack_00000878 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000878 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*in_stack_00000878 + 0x10))(in_stack_00000878);
      func_0x0412c2d0(in_stack_00000878);
    }
  }
  if (in_stack_00000888 != (long *)0x0) {
    LOCK();
    plVar3 = in_stack_00000888 + 1;
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
    lVar9 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/corridor/addon/staircase";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_012085ce;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_012085c6;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012085c2;
        uVar6 = _UNK_012085be;
        uVar5 = _UNK_012085ba;
        *puVar11 = _DAT_012085b6;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x6573616372696174;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519c31c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012085dd - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012085b6;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c31c:
  func_0x0d337b80(&stack0x000000e0,&DAT_012085b6,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar9 = 0x22;
  pcVar10 = "trial_chambers/corridor/addon/wall";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_013c54ea;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x22;
        *(undefined8 *)(puVar11 + 4) = _DAT_013c54e2;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_013c54de;
        uVar6 = _UNK_013c54da;
        uVar5 = _UNK_013c54d6;
        *puVar11 = _DAT_013c54d2;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined2 *)(puVar11 + 8) = 0x6c6c;
        *(undefined1 *)((long)puVar11 + 0x22) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519c40c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_013c54f4 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013c54d2;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c40c:
  func_0x0d337b80(&stack0x00000120,&DAT_013c54d2,0x22,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar9 = 0x2e;
  pcVar10 = "trial_chambers/corridor/addon/ladder_to_middle";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01376bad;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2e;
        *(ulong *)((long)puVar11 + 0x1e) = CONCAT62(_UNK_01376ba7,_DAT_01376ba5);
        *(undefined8 *)((long)puVar11 + 0x26) = uVar4;
        uVar4 = CONCAT26(_DAT_01376ba5,_UNK_01376b9f);
        *(undefined8 *)(puVar11 + 4) = _DAT_01376b97;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01376b93;
        uVar6 = _UNK_01376b8f;
        uVar5 = _UNK_01376b8b;
        *puVar11 = _DAT_01376b87;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2e) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519c4fc;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01376bb5 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01376b87;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c4fc:
  func_0x0d337b80(&stack0x00000160,&DAT_01376b87,0x2e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  lVar9 = 0x2d;
  pcVar10 = "trial_chambers/corridor/addon/arrow_dispenser";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0119d028;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar11 + 0x1d) = CONCAT53(_UNK_0119d023,_DAT_0119d020);
        *(undefined8 *)((long)puVar11 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_0119d020,_UNK_0119d01b);
        *(undefined8 *)(puVar11 + 4) = _DAT_0119d013;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0119d00f;
        uVar6 = _UNK_0119d00b;
        uVar5 = _UNK_0119d007;
        *puVar11 = _DAT_0119d003;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519c5ec;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0119d030 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0119d003;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519c5ec:
  func_0x0d337b80(&stack0x000001a0,&DAT_0119d003,0x2d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar9 = 0x2a;
  pcVar10 = "trial_chambers/corridor/addon/bridge_lower";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01325b69;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2a;
        *(ulong *)((long)puVar11 + 0x1a) = CONCAT26(_UNK_01325b67,_DAT_01325b61);
        *(undefined8 *)((long)puVar11 + 0x22) = uVar4;
        uVar4 = CONCAT62(_DAT_01325b61,_UNK_01325b5f);
        *(undefined8 *)(puVar11 + 4) = _DAT_01325b57;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01325b53;
        uVar6 = _UNK_01325b4f;
        uVar5 = _UNK_01325b4b;
        *puVar11 = _DAT_01325b47;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2a) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519c6d9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01325b71 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519c8df:
    (**(code **)(*in_stack_00000200 + lVar9))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519c828;
LAB_0519c8f6:
    lVar9 = 0x20;
LAB_0519c8fb:
    (**(code **)(*in_stack_000001c0 + lVar9))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519c847;
LAB_0519c912:
    lVar9 = 0x20;
LAB_0519c917:
    (**(code **)(*in_stack_00000180 + lVar9))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519c866;
LAB_0519c92e:
    lVar9 = 0x20;
LAB_0519c933:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519c885;
LAB_0519c94a:
    lVar9 = 0x20;
LAB_0519c94f:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519c8ac;
LAB_0519c96e:
    lVar9 = 0x20;
LAB_0519c973:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519c8df;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519c8f6;
LAB_0519c828:
    lVar9 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519c8fb;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519c912;
LAB_0519c847:
    lVar9 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519c917;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519c92e;
LAB_0519c866:
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519c933;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519c94a;
LAB_0519c885:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519c94f;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519c96e;
LAB_0519c8ac:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x2a;
  pcVar10 = "trial_chambers/corridor/addon/open_walkway";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_012229b3;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2a;
        *(ulong *)((long)puVar11 + 0x1a) = CONCAT26(_UNK_012229b1,_DAT_012229ab);
        *(undefined8 *)((long)puVar11 + 0x22) = uVar4;
        uVar4 = CONCAT62(_DAT_012229ab,_UNK_012229a9);
        *(undefined8 *)(puVar11 + 4) = _DAT_012229a1;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0122299d;
        uVar6 = _UNK_01222999;
        uVar5 = _UNK_01222995;
        *puVar11 = _DAT_01222991;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2a) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519cbbc;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012229bb - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01222991;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519cbbc:
  func_0x0d337b80(&stack0x000000e0,&DAT_01222991,0x2a,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 2;
  lVar9 = 0x2c;
  pcVar10 = "trial_chambers/corridor/addon/walled_walkway";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0135c3d7;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar11 + 7) = CONCAT44(_UNK_0135c3d3,_DAT_0135c3cf);
        *(undefined8 *)(puVar11 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_0135c3cf,_UNK_0135c3cb);
        *(undefined8 *)(puVar11 + 4) = _DAT_0135c3c3;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0135c3bf;
        uVar6 = _UNK_0135c3bb;
        uVar5 = _UNK_0135c3b7;
        *puVar11 = _DAT_0135c3b3;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xb) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519cca9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0135c3df - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519ce33:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519cdec;
LAB_0519ce46:
    lVar9 = 0x20;
LAB_0519ce4b:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519ce0b;
LAB_0519ce66:
    lVar9 = 0x20;
LAB_0519ce6b:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519ce33;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519ce46;
LAB_0519cdec:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519ce4b;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519ce66;
LAB_0519ce0b:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x30;
  pcVar10 = "trial_chambers/corridor/addon/open_walkway_upper";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_013c551d;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar11 + 8) = _DAT_013c5515;
        *(undefined8 *)(puVar11 + 10) = uVar4;
        uVar4 = _UNK_013c550d;
        *(undefined8 *)(puVar11 + 4) = _DAT_013c5505;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_013c5501;
        uVar6 = _UNK_013c54fd;
        uVar5 = _UNK_013c54f9;
        *puVar11 = _DAT_013c54f5;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xc) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519d0bc;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_013c5525 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013c54f5;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d0bc:
  func_0x0d337b80(&stack0x000000e0,&DAT_013c54f5,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 2;
  lVar9 = 0x2e;
  pcVar10 = "trial_chambers/corridor/addon/chandelier_upper";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_014ae750;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2e;
        *(ulong *)((long)puVar11 + 0x1e) = CONCAT62(_UNK_014ae74a,_DAT_014ae748);
        *(undefined8 *)((long)puVar11 + 0x26) = uVar4;
        uVar4 = CONCAT26(_DAT_014ae748,_UNK_014ae742);
        *(undefined8 *)(puVar11 + 4) = _DAT_014ae73a;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_014ae736;
        uVar6 = _UNK_014ae732;
        uVar5 = _UNK_014ae72e;
        *puVar11 = _DAT_014ae72a;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2e) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519d1ac;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_014ae758 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014ae72a;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d1ac:
  func_0x0d337b80(&stack0x00000120,&DAT_014ae72a,0x2e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar9 = 0x2e;
  pcVar10 = "trial_chambers/corridor/addon/decoration_upper";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01272484;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2e;
        *(ulong *)((long)puVar11 + 0x1e) = CONCAT62(_UNK_0127247e,_DAT_0127247c);
        *(undefined8 *)((long)puVar11 + 0x26) = uVar4;
        uVar4 = CONCAT26(_DAT_0127247c,_UNK_01272476);
        *(undefined8 *)(puVar11 + 4) = _DAT_0127246e;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0127246a;
        uVar6 = _UNK_01272466;
        uVar5 = _UNK_01272462;
        *puVar11 = _DAT_0127245e;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2e) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519d29c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0127248c - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0127245e;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d29c:
  func_0x0d337b80(&stack0x00000160,&DAT_0127245e,0x2e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  lVar9 = 0x28;
  pcVar10 = "trial_chambers/corridor/addon/head_upper";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_014ae771;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar11 + 4) = _DAT_014ae769;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_014ae765;
        uVar6 = _UNK_014ae761;
        uVar5 = _UNK_014ae75d;
        *puVar11 = _DAT_014ae759;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)(puVar11 + 8) = 0x72657070755f6461;
        *(undefined1 *)(puVar11 + 10) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519d38c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_014ae781 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014ae759;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d38c:
  func_0x0d337b80(&stack0x000001a0,&DAT_014ae759,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar9 = 0x2a;
  pcVar10 = "trial_chambers/corridor/addon/reward_upper";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_014ae7a4;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2a;
        *(ulong *)((long)puVar11 + 0x1a) = CONCAT26(_UNK_014ae7a2,_DAT_014ae79c);
        *(undefined8 *)((long)puVar11 + 0x22) = uVar4;
        uVar4 = CONCAT62(_DAT_014ae79c,_UNK_014ae79a);
        *(undefined8 *)(puVar11 + 4) = _DAT_014ae792;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_014ae78e;
        uVar6 = _UNK_014ae78a;
        uVar5 = _UNK_014ae786;
        *puVar11 = _DAT_014ae782;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2a) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519d479;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_014ae7ac - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519d67f:
    (**(code **)(*in_stack_00000200 + lVar9))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519d5c8;
LAB_0519d696:
    lVar9 = 0x20;
LAB_0519d69b:
    (**(code **)(*in_stack_000001c0 + lVar9))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519d5e7;
LAB_0519d6b2:
    lVar9 = 0x20;
LAB_0519d6b7:
    (**(code **)(*in_stack_00000180 + lVar9))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519d606;
LAB_0519d6ce:
    lVar9 = 0x20;
LAB_0519d6d3:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519d625;
LAB_0519d6ea:
    lVar9 = 0x20;
LAB_0519d6ef:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519d64c;
LAB_0519d70e:
    lVar9 = 0x20;
LAB_0519d713:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519d67f;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519d696;
LAB_0519d5c8:
    lVar9 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519d69b;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519d6b2;
LAB_0519d5e7:
    lVar9 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519d6b7;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519d6ce;
LAB_0519d606:
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519d6d3;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519d6ea;
LAB_0519d625:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519d6ef;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519d70e;
LAB_0519d64c:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x2c;
  pcVar10 = "trial_chambers/corridor/atrium/bogged_relief";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_013dfc31;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar11 + 7) = CONCAT44(_UNK_013dfc2d,_DAT_013dfc29);
        *(undefined8 *)(puVar11 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_013dfc29,_UNK_013dfc25);
        *(undefined8 *)(puVar11 + 4) = _DAT_013dfc1d;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_013dfc19;
        uVar6 = _UNK_013dfc15;
        uVar5 = _UNK_013dfc11;
        *puVar11 = _DAT_013dfc0d;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xb) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519d929;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_013dfc39 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013dfc0d;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519d929:
  func_0x0d337b80(&stack0x000000a0,&DAT_013dfc0d,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  lVar9 = 0x2c;
  pcVar10 = "trial_chambers/corridor/atrium/breeze_relief";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0128b4ce;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar11 + 7) = CONCAT44(_UNK_0128b4ca,_DAT_0128b4c6);
        *(undefined8 *)(puVar11 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_0128b4c6,_UNK_0128b4c2);
        *(undefined8 *)(puVar11 + 4) = _DAT_0128b4ba;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0128b4b6;
        uVar6 = _UNK_0128b4b2;
        uVar5 = _UNK_0128b4ae;
        *puVar11 = _DAT_0128b4aa;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xb) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519da1c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0128b4d6 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0128b4aa;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519da1c:
  func_0x0d337b80(&stack0x000000e0,&DAT_0128b4aa,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar9 = 0x2c;
  pcVar10 = "trial_chambers/corridor/atrium/spiral_relief";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01208628;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar11 + 7) = CONCAT44(_UNK_01208624,_DAT_01208620);
        *(undefined8 *)(puVar11 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_01208620,_UNK_0120861c);
        *(undefined8 *)(puVar11 + 4) = _DAT_01208614;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01208610;
        uVar6 = _UNK_0120860c;
        uVar5 = _UNK_01208608;
        *puVar11 = _DAT_01208604;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xb) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519db01;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01208630 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01208604;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519db01:
  func_0x0d337b80(&stack0x00000120,&DAT_01208604,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar9 = 0x2c;
  pcVar10 = "trial_chambers/corridor/atrium/spider_relief";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01376bda;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2c;
        *(ulong *)(puVar11 + 7) = CONCAT44(_UNK_01376bd6,_DAT_01376bd2);
        *(undefined8 *)(puVar11 + 9) = uVar4;
        uVar4 = CONCAT44(_DAT_01376bd2,_UNK_01376bce);
        *(undefined8 *)(puVar11 + 4) = _DAT_01376bc6;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01376bc2;
        uVar6 = _UNK_01376bbe;
        uVar5 = _UNK_01376bba;
        *puVar11 = _DAT_01376bb6;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xb) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519dbf1;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01376be2 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01376bb6;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519dbf1:
  func_0x0d337b80(&stack0x00000160,&DAT_01376bb6,0x2c,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 1;
  lVar9 = 0x30;
  pcVar10 = "trial_chambers/corridor/atrium/grand_staircase_1";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_01376c0b;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar11 + 8) = _DAT_01376c03;
        *(undefined8 *)(puVar11 + 10) = uVar4;
        uVar4 = _UNK_01376bfb;
        *(undefined8 *)(puVar11 + 4) = _DAT_01376bf3;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01376bef;
        uVar6 = _UNK_01376beb;
        uVar5 = _UNK_01376be7;
        *puVar11 = _DAT_01376be3;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xc) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519dcdc;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01376c13 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01376be3;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519dcdc:
  func_0x0d337b80(&stack0x000001a0,&DAT_01376be3,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar9 = 0x30;
  pcVar10 = "trial_chambers/corridor/atrium/grand_staircase_2";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_012bdda5;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar11 + 8) = _DAT_012bdd9d;
        *(undefined8 *)(puVar11 + 10) = uVar4;
        uVar4 = _UNK_012bdd95;
        *(undefined8 *)(puVar11 + 4) = _DAT_012bdd8d;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012bdd89;
        uVar6 = _UNK_012bdd85;
        uVar5 = _UNK_012bdd81;
        *puVar11 = _DAT_012bdd7d;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xc) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519ddcc;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012bddad - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012bdd7d;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ddcc:
  func_0x0d337b80(&stack0x000001e0,&DAT_012bdd7d,0x30,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x30;
  pcVar10 = "trial_chambers/corridor/atrium/grand_staircase_3";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uVar4 = _UNK_012bddd6;
        in_stack_00000010 = (undefined *)0x39;
        in_stack_00000018 = 0x30;
        *(undefined8 *)(puVar11 + 8) = _DAT_012bddce;
        *(undefined8 *)(puVar11 + 10) = uVar4;
        uVar4 = _UNK_012bddc6;
        *(undefined8 *)(puVar11 + 4) = _DAT_012bddbe;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012bddba;
        uVar6 = _UNK_012bddb6;
        uVar5 = _UNK_012bddb2;
        *puVar11 = _DAT_012bddae;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 0xc) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519deb9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012bddde - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519e0e0:
    (**(code **)(*in_stack_00000240 + lVar9))();
    if (in_stack_00000200 != (long *)&stack0x000001e0) goto LAB_0519e002;
LAB_0519e0f7:
    lVar9 = 0x20;
LAB_0519e0fc:
    (**(code **)(*in_stack_00000200 + lVar9))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519e021;
LAB_0519e113:
    lVar9 = 0x20;
LAB_0519e118:
    (**(code **)(*in_stack_000001c0 + lVar9))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519e048;
LAB_0519e137:
    lVar9 = 0x20;
LAB_0519e13c:
    (**(code **)(*in_stack_00000180 + lVar9))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519e06f;
LAB_0519e15b:
    lVar9 = 0x20;
LAB_0519e160:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519e08e;
LAB_0519e177:
    lVar9 = 0x20;
LAB_0519e17c:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519e0ad;
LAB_0519e193:
    lVar9 = 0x20;
LAB_0519e198:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000240 != (long *)0x0) goto LAB_0519e0e0;
    if (in_stack_00000200 == (long *)&stack0x000001e0) goto LAB_0519e0f7;
LAB_0519e002:
    lVar9 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519e0fc;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519e113;
LAB_0519e021:
    lVar9 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519e118;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519e137;
LAB_0519e048:
    lVar9 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519e13c;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519e15b;
LAB_0519e06f:
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519e160;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519e177;
LAB_0519e08e:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519e17c;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519e193;
LAB_0519e0ad:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x1e;
  pcVar10 = "trial_chambers/decor/EMPTY_pot";
  in_stack_000000c0 = (long *)&stack0x000000a0;
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01340ac7;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1e;
        *(ulong *)((long)puVar11 + 0xe) = CONCAT62(_UNK_01340ac1,_DAT_01340abf);
        *(undefined8 *)((long)puVar11 + 0x16) = uVar4;
        uVar7 = _UNK_01340ab9;
        uVar6 = _UNK_01340ab5;
        uVar5 = CONCAT22(_DAT_01340abf,_UNK_01340abd);
        *puVar11 = _DAT_01340ab1;
        puVar11[1] = uVar6;
        puVar11[2] = uVar7;
        puVar11[3] = uVar5;
        *(undefined1 *)((long)puVar11 + 0x1e) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e3dc;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01340acf - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01340ab1;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e3dc:
  func_0x0d337b80(&stack0x000000e0,&DAT_01340ab1,0x1e,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 2;
  lVar9 = 0x22;
  pcVar10 = "trial_chambers/decor/dead_bush_pot";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_012229d4;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x22;
        *(undefined8 *)(puVar11 + 4) = _DAT_012229cc;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012229c8;
        uVar6 = _UNK_012229c4;
        uVar5 = _UNK_012229c0;
        *puVar11 = _DAT_012229bc;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined2 *)(puVar11 + 8) = 0x746f;
        *(undefined1 *)((long)puVar11 + 0x22) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e4c1;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012229de - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012229bc;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e4c1:
  func_0x0d337b80(&stack0x00000120,&DAT_012229bc,0x22,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 2;
  lVar9 = 0x24;
  pcVar10 = "trial_chambers/decor/undecorated_pot";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_014793f6;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x24;
        *(undefined8 *)(puVar11 + 4) = _DAT_014793ee;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_014793ea;
        uVar6 = _UNK_014793e6;
        uVar5 = _UNK_014793e2;
        *puVar11 = _DAT_014793de;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        puVar11[8] = 0x746f705f;
        *(undefined1 *)(puVar11 + 9) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e5b1;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01479402 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_014793de;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e5b1:
  func_0x0d337b80(&stack0x00000160,&DAT_014793de,0x24,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000190 = 10;
  lVar9 = 0x1d;
  pcVar10 = "trial_chambers/decor/flow_pot";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012a47c6;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar11 + 0xd) = CONCAT53(_UNK_012a47c1,_DAT_012a47be);
        *(undefined8 *)((long)puVar11 + 0x15) = uVar4;
        uVar7 = _UNK_012a47bd;
        uVar6 = _UNK_012a47b9;
        uVar5 = _UNK_012a47b5;
        *puVar11 = _DAT_012a47b1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e6a1;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012a47ce - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012a47b1;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e6a1:
  func_0x0d337b80(&stack0x000001a0,&DAT_012a47b1,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000001d0 = 1;
  lVar9 = 0x1f;
  pcVar10 = "trial_chambers/decor/guster_pot";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_0147941a;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1f;
        *(ulong *)((long)puVar11 + 0xf) = CONCAT71(_UNK_01479413,DAT_01479412);
        *(undefined8 *)((long)puVar11 + 0x17) = uVar4;
        uVar7 = _UNK_0147940f;
        uVar6 = _UNK_0147940b;
        uVar5 = _UNK_01479407;
        *puVar11 = _DAT_01479403;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1f) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e791;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01479422 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01479403;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e791:
  func_0x0d337b80(&stack0x000001e0,&DAT_01479403,0x1f,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x1f;
  pcVar10 = "trial_chambers/decor/scrape_pot";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_013f9e3c;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1f;
        *(ulong *)((long)puVar11 + 0xf) = CONCAT71(_UNK_013f9e35,DAT_013f9e34);
        *(undefined8 *)((long)puVar11 + 0x17) = uVar4;
        uVar7 = _UNK_013f9e31;
        uVar6 = _UNK_013f9e2d;
        uVar5 = _UNK_013f9e29;
        *puVar11 = _DAT_013f9e25;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1f) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e881;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_013f9e44 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_013f9e25;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e881:
  func_0x0d337b80(&stack0x00000220,&DAT_013f9e25,0x1f,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x1d;
  pcVar10 = "trial_chambers/decor/candle_1";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012a47e4;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar11 + 0xd) = CONCAT53(_UNK_012a47df,_DAT_012a47dc);
        *(undefined8 *)((long)puVar11 + 0x15) = uVar4;
        uVar7 = _UNK_012a47db;
        uVar6 = _UNK_012a47d7;
        uVar5 = _UNK_012a47d3;
        *puVar11 = _DAT_012a47cf;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519e971;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012a47ec - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012a47cf;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519e971:
  func_0x0d337b80(&stack0x00000260,&DAT_012a47cf,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x1d;
  pcVar10 = "trial_chambers/decor/candle_2";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012229f4;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar11 + 0xd) = CONCAT53(_UNK_012229ef,_DAT_012229ec);
        *(undefined8 *)((long)puVar11 + 0x15) = uVar4;
        uVar7 = _UNK_012229eb;
        uVar6 = _UNK_012229e7;
        uVar5 = _UNK_012229e3;
        *puVar11 = _DAT_012229df;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519ea61;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012229fc - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012229df;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ea61:
  func_0x0d337b80(&stack0x000002a0,&DAT_012229df,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x1d;
  pcVar10 = "trial_chambers/decor/candle_3";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01479438;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar11 + 0xd) = CONCAT53(_UNK_01479433,_DAT_01479430);
        *(undefined8 *)((long)puVar11 + 0x15) = uVar4;
        uVar7 = _UNK_0147942f;
        uVar6 = _UNK_0147942b;
        uVar5 = _UNK_01479427;
        *puVar11 = _DAT_01479423;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519eb4c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01479440 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01479423;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519eb4c:
  func_0x0d337b80(&stack0x000002e0,&DAT_01479423,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x1d;
  pcVar10 = "trial_chambers/decor/candle_4";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_012f1dca;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1d;
        *(ulong *)((long)puVar11 + 0xd) = CONCAT53(_UNK_012f1dc5,_DAT_012f1dc2);
        *(undefined8 *)((long)puVar11 + 0x15) = uVar4;
        uVar7 = _UNK_012f1dc1;
        uVar6 = _UNK_012f1dbd;
        uVar5 = _UNK_012f1db9;
        *puVar11 = _DAT_012f1db5;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519ec3c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012f1dd2 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012f1db5;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519ec3c:
  func_0x0d337b80(&stack0x00000320,&DAT_012f1db5,0x1d,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar9 = 0x1b;
  pcVar10 = "trial_chambers/decor/barrel";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01447f9b;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1b;
        *(ulong *)((long)puVar11 + 0xb) =
             CONCAT35(_UNK_01447f98,CONCAT41(_UNK_01447f94,DAT_01447f93));
        *(undefined8 *)((long)puVar11 + 0x13) = uVar4;
        uVar7 = _UNK_01447f94;
        uVar6 = _UNK_01447f90;
        uVar5 = _UNK_01447f8c;
        *puVar11 = _DAT_01447f88;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1b) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519ed29;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01447fa3 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519f00f:
    (**(code **)(*in_stack_00000380 + lVar9))();
    if (in_stack_00000340 != (long *)&stack0x00000320) goto LAB_0519ee6e;
LAB_0519f026:
    lVar9 = 0x20;
LAB_0519f02b:
    (**(code **)(*in_stack_00000340 + lVar9))();
    if (in_stack_00000300 != (long *)&stack0x000002e0) goto LAB_0519ee8d;
LAB_0519f042:
    lVar9 = 0x20;
LAB_0519f047:
    (**(code **)(*in_stack_00000300 + lVar9))();
    if (in_stack_000002c0 != (long *)&stack0x000002a0) goto LAB_0519eeb4;
LAB_0519f066:
    lVar9 = 0x20;
LAB_0519f06b:
    (**(code **)(*in_stack_000002c0 + lVar9))();
    if (in_stack_00000280 != (long *)&stack0x00000260) goto LAB_0519eedb;
LAB_0519f08a:
    lVar9 = 0x20;
LAB_0519f08f:
    (**(code **)(*in_stack_00000280 + lVar9))();
    if (in_stack_00000240 != (long *)&stack0x00000220) goto LAB_0519ef02;
LAB_0519f0ae:
    lVar9 = 0x20;
LAB_0519f0b3:
    (**(code **)(*in_stack_00000240 + lVar9))();
    if (in_stack_00000200 != (long *)&stack0x000001e0) goto LAB_0519ef29;
LAB_0519f0d2:
    lVar9 = 0x20;
LAB_0519f0d7:
    (**(code **)(*in_stack_00000200 + lVar9))();
    if (in_stack_000001c0 != (long *)&stack0x000001a0) goto LAB_0519ef50;
LAB_0519f0f6:
    lVar9 = 0x20;
LAB_0519f0fb:
    (**(code **)(*in_stack_000001c0 + lVar9))();
    if (in_stack_00000180 != (long *)&stack0x00000160) goto LAB_0519ef77;
LAB_0519f11a:
    lVar9 = 0x20;
LAB_0519f11f:
    (**(code **)(*in_stack_00000180 + lVar9))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_0519ef9e;
LAB_0519f13e:
    lVar9 = 0x20;
LAB_0519f143:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519efbd;
LAB_0519f15a:
    lVar9 = 0x20;
LAB_0519f15f:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519efdc;
LAB_0519f176:
    lVar9 = 0x20;
LAB_0519f17b:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000380 != (long *)0x0) goto LAB_0519f00f;
    if (in_stack_00000340 == (long *)&stack0x00000320) goto LAB_0519f026;
LAB_0519ee6e:
    lVar9 = 0x28;
    if (in_stack_00000340 != (long *)0x0) goto LAB_0519f02b;
    if (in_stack_00000300 == (long *)&stack0x000002e0) goto LAB_0519f042;
LAB_0519ee8d:
    lVar9 = 0x28;
    if (in_stack_00000300 != (long *)0x0) goto LAB_0519f047;
    if (in_stack_000002c0 == (long *)&stack0x000002a0) goto LAB_0519f066;
LAB_0519eeb4:
    lVar9 = 0x28;
    if (in_stack_000002c0 != (long *)0x0) goto LAB_0519f06b;
    if (in_stack_00000280 == (long *)&stack0x00000260) goto LAB_0519f08a;
LAB_0519eedb:
    lVar9 = 0x28;
    if (in_stack_00000280 != (long *)0x0) goto LAB_0519f08f;
    if (in_stack_00000240 == (long *)&stack0x00000220) goto LAB_0519f0ae;
LAB_0519ef02:
    lVar9 = 0x28;
    if (in_stack_00000240 != (long *)0x0) goto LAB_0519f0b3;
    if (in_stack_00000200 == (long *)&stack0x000001e0) goto LAB_0519f0d2;
LAB_0519ef29:
    lVar9 = 0x28;
    if (in_stack_00000200 != (long *)0x0) goto LAB_0519f0d7;
    if (in_stack_000001c0 == (long *)&stack0x000001a0) goto LAB_0519f0f6;
LAB_0519ef50:
    lVar9 = 0x28;
    if (in_stack_000001c0 != (long *)0x0) goto LAB_0519f0fb;
    if (in_stack_00000180 == (long *)&stack0x00000160) goto LAB_0519f11a;
LAB_0519ef77:
    lVar9 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_0519f11f;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_0519f13e;
LAB_0519ef9e:
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519f143;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519f15a;
LAB_0519efbd:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519f15f;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519f176;
LAB_0519efdc:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/corridor/addon/display_1";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_012a4805;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_012a47fd;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012a47f9;
        uVar6 = _UNK_012a47f5;
        uVar5 = _UNK_012a47f1;
        *puVar11 = _DAT_012a47ed;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x315f79616c707369;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519f399;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012a4814 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012a47ed;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519f399:
  func_0x0d337b80(&stack0x000000a0,&DAT_012a47ed,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/corridor/addon/display_2";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_0119d049;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_0119d041;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0119d03d;
        uVar6 = _UNK_0119d039;
        uVar5 = _UNK_0119d035;
        *puVar11 = _DAT_0119d031;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x325f79616c707369;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519f48c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0119d058 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_0119d031;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_0519f48c:
  func_0x0d337b80(&stack0x000000e0,&DAT_0119d031,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/corridor/addon/display_3";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01447fbc;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_01447fb4;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01447fb0;
        uVar6 = _UNK_01447fac;
        uVar5 = _UNK_01447fa8;
        *puVar11 = _DAT_01447fa4;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x335f79616c707369;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519f579;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01447fcb - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519f6f1:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_0519f6b2;
LAB_0519f704:
    lVar9 = 0x20;
LAB_0519f709:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519f6c9;
LAB_0519f71c:
    lVar9 = 0x20;
LAB_0519f721:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_0519f6f1;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_0519f704;
LAB_0519f6b2:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519f709;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519f71c;
LAB_0519f6c9:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x24;
  pcVar10 = "trial_chambers/decor/undecorated_pot";
  in_stack_000000c0 = (long *)&stack0x000000a0;
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_014793f6;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x24;
        *(undefined8 *)(puVar11 + 4) = _DAT_014793ee;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_014793ea;
        uVar6 = _UNK_014793e6;
        uVar5 = _UNK_014793e2;
        *puVar11 = _DAT_014793de;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        puVar11[8] = 0x746f705f;
        *(undefined1 *)(puVar11 + 9) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519f969;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01479402 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519faca:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_0519faa2;
LAB_0519fadd:
    lVar9 = 0x20;
LAB_0519fae2:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_0519faca;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_0519fadd;
LAB_0519faa2:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x1b;
  pcVar10 = "trial_chambers/reward/vault";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01390e12;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1b;
        *(ulong *)((long)puVar11 + 0xb) =
             CONCAT35(_UNK_01390e0f,CONCAT41(_UNK_01390e0b,DAT_01390e0a));
        *(undefined8 *)((long)puVar11 + 0x13) = uVar4;
        uVar7 = _UNK_01390e0b;
        uVar6 = _UNK_01390e07;
        uVar5 = _UNK_01390e03;
        *puVar11 = _DAT_01390dff;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1b) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_0519fcf9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01390e1a - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_0519fe50:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x23;
  pcVar10 = "trial_chambers/reward/ominous_vault";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_013ac962;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x23;
        *(undefined8 *)(puVar11 + 4) = _DAT_013ac95a;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_013ac956;
        uVar6 = _UNK_013ac952;
        uVar5 = _UNK_013ac94e;
        *puVar11 = _DAT_013ac94a;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined4 *)((long)puVar11 + 0x1f) = 0x746c7561;
        *(undefined1 *)((long)puVar11 + 0x23) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a0069;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_013ac96d - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a01b9:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x1b;
  pcVar10 = "trial_chambers/reward/vault";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01390e12;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1b;
        *(ulong *)((long)puVar11 + 0xb) =
             CONCAT35(_UNK_01390e0f,CONCAT41(_UNK_01390e0b,DAT_01390e0a));
        *(undefined8 *)((long)puVar11 + 0x13) = uVar4;
        uVar7 = _UNK_01390e0b;
        uVar6 = _UNK_01390e07;
        uVar5 = _UNK_01390e03;
        *puVar11 = _DAT_01390dff;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x1b) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a03c9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01390e1a - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a051d:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/chests/connectors/supply";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01390e33;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_01390e2b;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01390e27;
        uVar6 = _UNK_01390e23;
        uVar5 = _UNK_01390e1f;
        *puVar11 = _DAT_01390e1b;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x796c707075732f73;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a0739;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01390e42 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a088d:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x1c;
  pcVar10 = "trial_chambers/chests/supply";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_01325b86;
        in_stack_00000010 = (undefined *)0x21;
        in_stack_00000018 = 0x1c;
        *(ulong *)(puVar11 + 3) = CONCAT44(_UNK_01325b82,_DAT_01325b7e);
        *(undefined8 *)(puVar11 + 5) = uVar4;
        uVar7 = _DAT_01325b7e;
        uVar6 = _UNK_01325b7a;
        uVar5 = _UNK_01325b76;
        *puVar11 = _DAT_01325b72;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)(puVar11 + 7) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a0a99;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01325b8e - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a0bed:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x28;
  pcVar10 = "trial_chambers/spawner/connectors/ranged";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01390e5b;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar11 + 4) = _DAT_01390e53;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01390e4f;
        uVar6 = _UNK_01390e4b;
        uVar5 = _UNK_01390e47;
        *puVar11 = _DAT_01390e43;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)(puVar11 + 8) = 0x6465676e61722f73;
        *(undefined1 *)(puVar11 + 10) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a0e09;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01390e6b - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a0f60:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x2d;
  pcVar10 = "trial_chambers/spawner/connectors/slow_ranged";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01340af5;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar11 + 0x1d) = CONCAT53(_UNK_01340af0,_DAT_01340aed);
        *(undefined8 *)((long)puVar11 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_01340aed,_UNK_01340ae8);
        *(undefined8 *)(puVar11 + 4) = _DAT_01340ae0;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01340adc;
        uVar6 = _UNK_01340ad8;
        uVar5 = _UNK_01340ad4;
        *puVar11 = _DAT_01340ad0;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a1179;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01340afd - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a12cd:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/spawner/connectors/melee";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01340b16;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_01340b0e;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01340b0a;
        uVar6 = _UNK_01340b06;
        uVar5 = _UNK_01340b02;
        *puVar11 = _DAT_01340afe;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x65656c656d2f7372;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a14e9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01340b25 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a1642:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x2d;
  pcVar10 = "trial_chambers/spawner/connectors/small_melee";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0145f4e1;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar11 + 0x1d) = CONCAT53(_UNK_0145f4dc,_DAT_0145f4d9);
        *(undefined8 *)((long)puVar11 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_0145f4d9,_UNK_0145f4d4);
        *(undefined8 *)(puVar11 + 4) = _DAT_0145f4cc;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0145f4c8;
        uVar6 = _UNK_0145f4c4;
        uVar5 = _UNK_0145f4c0;
        *puVar11 = _DAT_0145f4bc;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a1859;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0145f4e9 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a19b0:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x28;
  pcVar10 = "trial_chambers/spawner/connectors/breeze";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_012bddf7;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar11 + 4) = _DAT_012bddef;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012bddeb;
        uVar6 = _UNK_012bdde7;
        uVar5 = _UNK_012bdde3;
        *puVar11 = _DAT_012bdddf;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)(puVar11 + 8) = 0x657a656572622f73;
        *(undefined1 *)(puVar11 + 10) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a1bc9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012bde07 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a1d1d:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x28;
  pcVar10 = "trial_chambers/spawner/connectors/ranged";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_01390e5b;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar11 + 4) = _DAT_01390e53;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01390e4f;
        uVar6 = _UNK_01390e4b;
        uVar5 = _UNK_01390e47;
        *puVar11 = _DAT_01390e43;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)(puVar11 + 8) = 0x6465676e61722f73;
        *(undefined1 *)(puVar11 + 10) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a1f29;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01390e6b - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01390e43;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a1f29:
  func_0x0d337b80(&stack0x000000a0,&DAT_01390e43,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_000000d0 = 1;
  lVar9 = 0x27;
  pcVar10 = "trial_chambers/spawner/connectors/melee";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01340b16;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x27;
        *(undefined8 *)(puVar11 + 4) = _DAT_01340b0e;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01340b0a;
        uVar6 = _UNK_01340b06;
        uVar5 = _UNK_01340b02;
        *puVar11 = _DAT_01340afe;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)((long)puVar11 + 0x1f) = 0x65656c656d2f7372;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a200c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01340b25 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01340afe;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a200c:
  func_0x0d337b80(&stack0x000000e0,&DAT_01340afe,0x27,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar9 = 0x2d;
  pcVar10 = "trial_chambers/spawner/connectors/small_melee";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_0145f4e1;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x2d;
        *(ulong *)((long)puVar11 + 0x1d) = CONCAT53(_UNK_0145f4dc,_DAT_0145f4d9);
        *(undefined8 *)((long)puVar11 + 0x25) = uVar4;
        uVar4 = CONCAT35(_DAT_0145f4d9,_UNK_0145f4d4);
        *(undefined8 *)(puVar11 + 4) = _DAT_0145f4cc;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0145f4c8;
        uVar6 = _UNK_0145f4c4;
        uVar5 = _UNK_0145f4c0;
        *puVar11 = _DAT_0145f4bc;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x2d) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a20e9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0145f4e9 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a2263:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_051a2224;
LAB_051a2276:
    lVar9 = 0x20;
LAB_051a227b:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_051a223b;
LAB_051a228e:
    lVar9 = 0x20;
LAB_051a2293:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_051a2263;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_051a2276;
LAB_051a2224:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_051a227b;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_051a228e;
LAB_051a223b:
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x24;
  pcVar10 = "trial_chambers/spawner/breeze/breeze";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01258367;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x24;
        *(undefined8 *)(puVar11 + 4) = _DAT_0125835f;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_0125835b;
        uVar6 = _UNK_01258357;
        uVar5 = _UNK_01258353;
        *puVar11 = _DAT_0125834f;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        puVar11[8] = 0x657a6565;
        *(undefined1 *)(puVar11 + 9) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a24a9;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_01258373 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a25fd:
    (**(code **)(*in_stack_000000c0 + lVar9))();
  }
  else {
    lVar9 = 0x28;
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
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
  lVar9 = 0x21;
  pcVar10 = "trial_chambers/dispensers/chamber";
  in_stack_000000c0 = (long *)&stack0x000000a0;
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uVar4 = _UNK_01448001;
        in_stack_00000010 = (undefined *)0x29;
        in_stack_00000018 = 0x21;
        *(undefined8 *)(puVar11 + 4) = _DAT_01447ff9;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_01447ff5;
        uVar6 = _UNK_01447ff1;
        uVar5 = _UNK_01447fed;
        *puVar11 = _DAT_01447fe9;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined2 *)(puVar11 + 8) = 0x72;
        in_stack_00000020 = puVar11;
        goto LAB_051a283c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_0144800a - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_01447fe9;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a283c:
  func_0x0d337b80(&stack0x000000e0,&DAT_01447fe9,0x21,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000110 = 1;
  lVar9 = 0x28;
  pcVar10 = "trial_chambers/dispensers/wall_dispenser";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_012bde20;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x28;
        *(undefined8 *)(puVar11 + 4) = _DAT_012bde18;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_012bde14;
        uVar6 = _UNK_012bde10;
        uVar5 = _UNK_012bde0c;
        *puVar11 = _DAT_012bde08;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined8 *)(puVar11 + 8) = 0x7265736e65707369;
        *(undefined1 *)(puVar11 + 10) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a292c;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_012bde30 - (long)pcVar10;
  } while (0 < lVar9);
  in_stack_00000030 = &UNK_013abf4c;
  in_stack_00000040 = &DAT_012bde08;
  func_0x0470d9a0(&stack0x00000010,&UNK_011ed16e,5,0xcc,&stack0x00000030);
LAB_051a292c:
  func_0x0d337b80(&stack0x00000120,&DAT_012bde08,0x28,&stack0x00000010);
  if (((ulong)in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
  }
  in_stack_00000150 = 1;
  lVar9 = 0x29;
  pcVar10 = "trial_chambers/dispensers/floor_dispenser";
  do {
    pcVar10 = (char *)func_0x0eee2ef0(pcVar10,0x3a,lVar9);
    if (pcVar10 == (char *)0x0) break;
    if (*pcVar10 == ':') {
      if (pcVar10 != "" && pcVar10 != "") {
        puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        uVar4 = _UNK_011ed0a0;
        in_stack_00000010 = (undefined *)0x31;
        in_stack_00000018 = 0x29;
        *(ulong *)((long)puVar11 + 0x19) = CONCAT17(UNK_011ed09f,_DAT_011ed098);
        *(undefined8 *)((long)puVar11 + 0x21) = uVar4;
        uVar4 = CONCAT71(_DAT_011ed098,UNK_011ed097);
        *(undefined8 *)(puVar11 + 4) = _DAT_011ed08f;
        *(undefined8 *)(puVar11 + 6) = uVar4;
        uVar7 = _UNK_011ed08b;
        uVar6 = _UNK_011ed087;
        uVar5 = _UNK_011ed083;
        *puVar11 = _DAT_011ed07f;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        *(undefined1 *)((long)puVar11 + 0x29) = 0;
        in_stack_00000020 = puVar11;
        goto LAB_051a2a19;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
    lVar9 = (long)&UNK_011ed0a8 - (long)pcVar10;
  } while (0 < lVar9);
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
    lVar9 = 0x20;
LAB_051a2baf:
    (**(code **)(*in_stack_00000180 + lVar9))();
    if (in_stack_00000140 != (long *)&stack0x00000120) goto LAB_051a2b56;
LAB_051a2bc2:
    lVar9 = 0x20;
LAB_051a2bc7:
    (**(code **)(*in_stack_00000140 + lVar9))();
    if (in_stack_00000100 != (long *)&stack0x000000e0) goto LAB_051a2b6d;
LAB_051a2bda:
    lVar9 = 0x20;
LAB_051a2bdf:
    (**(code **)(*in_stack_00000100 + lVar9))();
    if ((undefined **)in_stack_000000c0 != &stack0x000000a0) goto LAB_051a2b84;
LAB_051a2bf2:
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000180 != (long *)0x0) goto LAB_051a2baf;
    if (in_stack_00000140 == (long *)&stack0x00000120) goto LAB_051a2bc2;
LAB_051a2b56:
    lVar9 = 0x28;
    if (in_stack_00000140 != (long *)0x0) goto LAB_051a2bc7;
    if (in_stack_00000100 == (long *)&stack0x000000e0) goto LAB_051a2bda;
LAB_051a2b6d:
    lVar9 = 0x28;
    if (in_stack_00000100 != (long *)0x0) goto LAB_051a2bdf;
    if ((undefined **)in_stack_000000c0 == &stack0x000000a0) goto LAB_051a2bf2;
LAB_051a2b84:
    lVar9 = 0x28;
    if (in_stack_000000c0 == (long *)0x0) goto joined_r0x051a2c12;
  }
  (**(code **)(*in_stack_000000c0 + lVar9))();
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
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x119d003  trial_chambers/corridor/addon/arrow_dispenser
 * 0x119d013  orridor/addon/arrow_dispenser
 * 0x119d020  /arrow_dispenser
 * 0x12085b6  trial_chambers/corridor/addon/staircase
 * 0x12085c6  orridor/addon/staircase
 * 0x1222991  trial_chambers/corridor/addon/open_walkway
 * 0x12229a1  orridor/addon/open_walkway
 * 0x12229ab  don/open_walkway
 * 0x1325b47  trial_chambers/corridor/addon/bridge_lower
 * 0x1325b57  orridor/addon/bridge_lower
 * 0x1325b61  don/bridge_lower
 * 0x135c3b3  trial_chambers/corridor/addon/walled_walkway
 * 0x135c3c3  orridor/addon/walled_walkway
 * 0x135c3cf  n/walled_walkway
 * 0x1376b87  trial_chambers/corridor/addon/ladder_to_middle
 * 0x1376b97  orridor/addon/ladder_to_middle
 * 0x1376ba5  ladder_to_middle
 * 0x13c54d2  trial_chambers/corridor/addon/wall
 * 0x13c54e2  orridor/addon/wall
 * 0x13c54f5  trial_chambers/corridor/addon/open_walkway_upper
 * 0x13c5505  orridor/addon/open_walkway_upper
 * 0x13c5515  en_walkway_upper
 * 0x14ae73a  orridor/addon/chandelier_upper
 * 0x14ae748  chandelier_upper
 */

/* ---- assembly ---- */
/* 0519b70b */  MOV EAX,0x28
/* 0519b710 */  TEST RDI,RDI
/* 0519b713 */  JNZ 0x0519ba7b
/* 0519b719 */  MOV RDI,qword ptr [RSP + 0x4c0]
/* 0519b721 */  LEA RAX,[RSP + 0x4a0]
/* 0519b729 */  CMP RDI,RAX
/* 0519b72c */  JZ 0x0519ba9a
/* 0519b732 */  MOV EAX,0x28
/* 0519b737 */  TEST RDI,RDI
/* 0519b73a */  JNZ 0x0519ba9f
/* 0519b740 */  MOV RDI,qword ptr [RSP + 0x480]
/* 0519b748 */  LEA RAX,[RSP + 0x460]
/* 0519b750 */  CMP RDI,RAX
/* 0519b753 */  JZ 0x0519babe
/* 0519b759 */  MOV EAX,0x28
/* 0519b75e */  TEST RDI,RDI
/* 0519b761 */  JNZ 0x0519bac3
/* 0519b767 */  MOV RDI,qword ptr [RSP + 0x440]
/* 0519b76f */  LEA RAX,[RSP + 0x420]
/* 0519b777 */  CMP RDI,RAX
/* 0519b77a */  JZ 0x0519bae2
/* 0519b780 */  MOV EAX,0x28
/* 0519b785 */  TEST RDI,RDI
/* 0519b788 */  JNZ 0x0519bae7
/* 0519b78e */  MOV RDI,qword ptr [RSP + 0x400]
/* 0519b796 */  LEA RAX,[RSP + 0x3e0]
/* 0519b79e */  CMP RDI,RAX
/* 0519b7a1 */  JZ 0x0519bb06
/* 0519b7a7 */  MOV EAX,0x28
/* 0519b7ac */  TEST RDI,RDI
/* 0519b7af */  JNZ 0x0519bb0b
/* 0519b7b5 */  MOV RDI,qword ptr [RSP + 0x3c0]
/* 0519b7bd */  LEA RAX,[RSP + 0x3a0]
/* 0519b7c5 */  CMP RDI,RAX
/* 0519b7c8 */  JZ 0x0519bb2a
/* 0519b7ce */  MOV EAX,0x28
/* 0519b7d3 */  TEST RDI,RDI
/* 0519b7d6 */  JNZ 0x0519bb2f
/* 0519b7dc */  MOV RDI,qword ptr [RSP + 0x380]
/* 0519b7e4 */  LEA RAX,[RSP + 0x360]
/* 0519b7ec */  CMP RDI,RAX
/* 0519b7ef */  JZ 0x0519bb4e
/* 0519b7f5 */  MOV EAX,0x28
/* 0519b7fa */  TEST RDI,RDI
/* 0519b7fd */  JNZ 0x0519bb53
/* 0519b803 */  MOV RDI,qword ptr [RSP + 0x340]
/* 0519b80b */  LEA RAX,[RSP + 0x320]
/* 0519b813 */  CMP RDI,RAX
/* 0519b816 */  JZ 0x0519bb72
/* 0519b81c */  MOV EAX,0x28
/* 0519b821 */  TEST RDI,RDI
/* 0519b824 */  JNZ 0x0519bb77
/* 0519b82a */  MOV RDI,qword ptr [RSP + 0x300]
/* 0519b832 */  LEA RAX,[RSP + 0x2e0]
/* 0519b83a */  CMP RDI,RAX
/* 0519b83d */  JZ 0x0519bb96
/* 0519b843 */  MOV EAX,0x28
/* 0519b848 */  TEST RDI,RDI
/* 0519b84b */  JNZ 0x0519bb9b
/* 0519b851 */  MOV RDI,qword ptr [RSP + 0x2c0]
/* 0519b859 */  LEA RAX,[RSP + 0x2a0]
/* 0519b861 */  CMP RDI,RAX
/* 0519b864 */  JZ 0x0519bbba
/* 0519b86a */  MOV EAX,0x28
/* 0519b86f */  TEST RDI,RDI
/* 0519b872 */  JNZ 0x0519bbbf
/* 0519b878 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0519b880 */  LEA RAX,[RSP + 0x260]
/* 0519b888 */  CMP RDI,RAX
/* 0519b88b */  JZ 0x0519bbde
/* 0519b891 */  MOV EAX,0x28
/* 0519b896 */  TEST RDI,RDI
/* 0519b899 */  JNZ 0x0519bbe3
/* 0519b89f */  MOV RDI,qword ptr [RSP + 0x240]
/* 0519b8a7 */  LEA RAX,[RSP + 0x220]
/* 0519b8af */  CMP RDI,RAX
/* 0519b8b2 */  JZ 0x0519bc02
/* 0519b8b8 */  MOV EAX,0x28
/* 0519b8bd */  TEST RDI,RDI
/* 0519b8c0 */  JNZ 0x0519bc07
/* 0519b8c6 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519b8ce */  LEA RAX,[RSP + 0x1e0]
/* 0519b8d6 */  CMP RDI,RAX
/* 0519b8d9 */  JZ 0x0519bc26
/* 0519b8df */  MOV EAX,0x28
/* 0519b8e4 */  TEST RDI,RDI
/* 0519b8e7 */  JNZ 0x0519bc2b
/* 0519b8ed */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519b8f5 */  LEA RAX,[RSP + 0x1a0]
/* 0519b8fd */  CMP RDI,RAX
/* 0519b900 */  JZ 0x0519bc4a
/* 0519b906 */  MOV EAX,0x28
/* 0519b90b */  TEST RDI,RDI
/* 0519b90e */  JNZ 0x0519bc4f
/* 0519b914 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519b91c */  LEA RAX,[RSP + 0x160]
/* 0519b924 */  CMP RDI,RAX
/* 0519b927 */  JZ 0x0519bc6e
/* 0519b92d */  MOV EAX,0x28
/* 0519b932 */  TEST RDI,RDI
/* 0519b935 */  JNZ 0x0519bc73
/* 0519b93b */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519b943 */  CMP RDI,R12
/* 0519b946 */  JZ 0x0519bc8a
/* 0519b94c */  MOV EAX,0x28
/* 0519b951 */  TEST RDI,RDI
/* 0519b954 */  JNZ 0x0519bc8f
/* 0519b95a */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519b962 */  CMP RDI,RBX
/* 0519b965 */  JZ 0x0519bca6
/* 0519b96b */  MOV EAX,0x28
/* 0519b970 */  TEST RDI,RDI
/* 0519b973 */  JNZ 0x0519bcab
/* 0519b979 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519b981 */  LEA RAX,[RSP + 0xa0]
/* 0519b989 */  CMP RDI,RAX
/* 0519b98c */  JZ 0x0519bcca
/* 0519b992 */  MOV EAX,0x28
/* 0519b997 */  TEST RDI,RDI
/* 0519b99a */  JNZ 0x0519bccf
/* 0519b9a0 */  TEST R13,R13
/* 0519b9a3 */  JNZ 0x0519bcda
/* 0519b9a9 */  JMP 0x0519bcfe
/* 0519ba70 */  JNZ 0x0519b70b
/* 0519ba76 */  MOV EAX,0x20
/* 0519ba7b */  MOV RCX,qword ptr [RDI]
/* 0519ba7e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519ba81 */  MOV RDI,qword ptr [RSP + 0x4c0]
/* 0519ba89 */  LEA RAX,[RSP + 0x4a0]
/* 0519ba91 */  CMP RDI,RAX
/* 0519ba94 */  JNZ 0x0519b732
/* 0519ba9a */  MOV EAX,0x20
/* 0519ba9f */  MOV RCX,qword ptr [RDI]
/* 0519baa2 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519baa5 */  MOV RDI,qword ptr [RSP + 0x480]
/* 0519baad */  LEA RAX,[RSP + 0x460]
/* 0519bab5 */  CMP RDI,RAX
/* 0519bab8 */  JNZ 0x0519b759
/* 0519babe */  MOV EAX,0x20
/* 0519bac3 */  MOV RCX,qword ptr [RDI]
/* 0519bac6 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bac9 */  MOV RDI,qword ptr [RSP + 0x440]
/* 0519bad1 */  LEA RAX,[RSP + 0x420]
/* 0519bad9 */  CMP RDI,RAX
/* 0519badc */  JNZ 0x0519b780
/* 0519bae2 */  MOV EAX,0x20
/* 0519bae7 */  MOV RCX,qword ptr [RDI]
/* 0519baea */  CALL qword ptr [RCX + RAX*0x1]
/* 0519baed */  MOV RDI,qword ptr [RSP + 0x400]
/* 0519baf5 */  LEA RAX,[RSP + 0x3e0]
/* 0519bafd */  CMP RDI,RAX
/* 0519bb00 */  JNZ 0x0519b7a7
/* 0519bb06 */  MOV EAX,0x20
/* 0519bb0b */  MOV RCX,qword ptr [RDI]
/* 0519bb0e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bb11 */  MOV RDI,qword ptr [RSP + 0x3c0]
/* 0519bb19 */  LEA RAX,[RSP + 0x3a0]
/* 0519bb21 */  CMP RDI,RAX
/* 0519bb24 */  JNZ 0x0519b7ce
/* 0519bb2a */  MOV EAX,0x20
/* 0519bb2f */  MOV RCX,qword ptr [RDI]
/* 0519bb32 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bb35 */  MOV RDI,qword ptr [RSP + 0x380]
/* 0519bb3d */  LEA RAX,[RSP + 0x360]
/* 0519bb45 */  CMP RDI,RAX
/* 0519bb48 */  JNZ 0x0519b7f5
/* 0519bb4e */  MOV EAX,0x20
/* 0519bb53 */  MOV RCX,qword ptr [RDI]
/* 0519bb56 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bb59 */  MOV RDI,qword ptr [RSP + 0x340]
/* 0519bb61 */  LEA RAX,[RSP + 0x320]
/* 0519bb69 */  CMP RDI,RAX
/* 0519bb6c */  JNZ 0x0519b81c
/* 0519bb72 */  MOV EAX,0x20
/* 0519bb77 */  MOV RCX,qword ptr [RDI]
/* 0519bb7a */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bb7d */  MOV RDI,qword ptr [RSP + 0x300]
/* 0519bb85 */  LEA RAX,[RSP + 0x2e0]
/* 0519bb8d */  CMP RDI,RAX
/* 0519bb90 */  JNZ 0x0519b843
/* 0519bb96 */  MOV EAX,0x20
/* 0519bb9b */  MOV RCX,qword ptr [RDI]
/* 0519bb9e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bba1 */  MOV RDI,qword ptr [RSP + 0x2c0]
/* 0519bba9 */  LEA RAX,[RSP + 0x2a0]
/* 0519bbb1 */  CMP RDI,RAX
/* 0519bbb4 */  JNZ 0x0519b86a
/* 0519bbba */  MOV EAX,0x20
/* 0519bbbf */  MOV RCX,qword ptr [RDI]
/* 0519bbc2 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bbc5 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0519bbcd */  LEA RAX,[RSP + 0x260]
/* 0519bbd5 */  CMP RDI,RAX
/* 0519bbd8 */  JNZ 0x0519b891
/* 0519bbde */  MOV EAX,0x20
/* 0519bbe3 */  MOV RCX,qword ptr [RDI]
/* 0519bbe6 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bbe9 */  MOV RDI,qword ptr [RSP + 0x240]
/* 0519bbf1 */  LEA RAX,[RSP + 0x220]
/* 0519bbf9 */  CMP RDI,RAX
/* 0519bbfc */  JNZ 0x0519b8b8
/* 0519bc02 */  MOV EAX,0x20
/* 0519bc07 */  MOV RCX,qword ptr [RDI]
/* 0519bc0a */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bc0d */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519bc15 */  LEA RAX,[RSP + 0x1e0]
/* 0519bc1d */  CMP RDI,RAX
/* 0519bc20 */  JNZ 0x0519b8df
/* 0519bc26 */  MOV EAX,0x20
/* 0519bc2b */  MOV RCX,qword ptr [RDI]
/* 0519bc2e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bc31 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519bc39 */  LEA RAX,[RSP + 0x1a0]
/* 0519bc41 */  CMP RDI,RAX
/* 0519bc44 */  JNZ 0x0519b906
/* 0519bc4a */  MOV EAX,0x20
/* 0519bc4f */  MOV RCX,qword ptr [RDI]
/* 0519bc52 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bc55 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519bc5d */  LEA RAX,[RSP + 0x160]
/* 0519bc65 */  CMP RDI,RAX
/* 0519bc68 */  JNZ 0x0519b92d
/* 0519bc6e */  MOV EAX,0x20
/* 0519bc73 */  MOV RCX,qword ptr [RDI]
/* 0519bc76 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bc79 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519bc81 */  CMP RDI,R12
/* 0519bc84 */  JNZ 0x0519b94c
/* 0519bc8a */  MOV EAX,0x20
/* 0519bc8f */  MOV RCX,qword ptr [RDI]
/* 0519bc92 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bc95 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519bc9d */  CMP RDI,RBX
/* 0519bca0 */  JNZ 0x0519b96b
/* 0519bca6 */  MOV EAX,0x20
/* 0519bcab */  MOV RCX,qword ptr [RDI]
/* 0519bcae */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bcb1 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519bcb9 */  LEA RAX,[RSP + 0xa0]
/* 0519bcc1 */  CMP RDI,RAX
/* 0519bcc4 */  JNZ 0x0519b992
/* 0519bcca */  MOV EAX,0x20
/* 0519bccf */  MOV RCX,qword ptr [RDI]
/* 0519bcd2 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519bcd5 */  TEST R13,R13
/* 0519bcd8 */  JZ 0x0519bcfe
/* 0519bcda */  MOV RAX,-0x1
/* 0519bce1 */  XADD.LOCK qword ptr [R13 + 0x8],RAX
/* 0519bce7 */  TEST RAX,RAX
/* 0519bcea */  JNZ 0x0519bcfe
/* 0519bcec */  MOV RAX,qword ptr [R13]
/* 0519bcf0 */  MOV RDI,R13
/* 0519bcf3 */  CALL qword ptr [RAX + 0x10]
/* 0519bcf6 */  MOV RDI,R13
/* 0519bcf9 */  CALL 0x0412c2d0
/* 0519bcfe */  MOV RBX,qword ptr [RSP + 0x748]
/* 0519bd06 */  TEST RBX,RBX
/* 0519bd09 */  JZ 0x0519bd2e
/* 0519bd0b */  MOV RAX,-0x1
/* 0519bd12 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bd18 */  TEST RAX,RAX
/* 0519bd1b */  JNZ 0x0519bd2e
/* 0519bd1d */  MOV RAX,qword ptr [RBX]
/* 0519bd20 */  MOV RDI,RBX
/* 0519bd23 */  CALL qword ptr [RAX + 0x10]
/* 0519bd26 */  MOV RDI,RBX
/* 0519bd29 */  CALL 0x0412c2d0
/* 0519bd2e */  MOV RBX,qword ptr [RSP + 0x758]
/* 0519bd36 */  TEST RBX,RBX
/* 0519bd39 */  JZ 0x0519bd5e
/* 0519bd3b */  MOV RAX,-0x1
/* 0519bd42 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bd48 */  TEST RAX,RAX
/* 0519bd4b */  JNZ 0x0519bd5e
/* 0519bd4d */  MOV RAX,qword ptr [RBX]
/* 0519bd50 */  MOV RDI,RBX
/* 0519bd53 */  CALL qword ptr [RAX + 0x10]
/* 0519bd56 */  MOV RDI,RBX
/* 0519bd59 */  CALL 0x0412c2d0
/* 0519bd5e */  MOV RBX,qword ptr [RSP + 0x768]
/* 0519bd66 */  TEST RBX,RBX
/* 0519bd69 */  JZ 0x0519bd8e
/* 0519bd6b */  MOV RAX,-0x1
/* 0519bd72 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bd78 */  TEST RAX,RAX
/* 0519bd7b */  JNZ 0x0519bd8e
/* 0519bd7d */  MOV RAX,qword ptr [RBX]
/* 0519bd80 */  MOV RDI,RBX
/* 0519bd83 */  CALL qword ptr [RAX + 0x10]
/* 0519bd86 */  MOV RDI,RBX
/* 0519bd89 */  CALL 0x0412c2d0
/* 0519bd8e */  MOV RBX,qword ptr [RSP + 0x778]
/* 0519bd96 */  TEST RBX,RBX
/* 0519bd99 */  JZ 0x0519bdbe
/* 0519bd9b */  MOV RAX,-0x1
/* 0519bda2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bda8 */  TEST RAX,RAX
/* 0519bdab */  JNZ 0x0519bdbe
/* 0519bdad */  MOV RAX,qword ptr [RBX]
/* 0519bdb0 */  MOV RDI,RBX
/* 0519bdb3 */  CALL qword ptr [RAX + 0x10]
/* 0519bdb6 */  MOV RDI,RBX
/* 0519bdb9 */  CALL 0x0412c2d0
/* 0519bdbe */  MOV RBX,qword ptr [RSP + 0x788]
/* 0519bdc6 */  TEST RBX,RBX
/* 0519bdc9 */  JZ 0x0519bdee
/* 0519bdcb */  MOV RAX,-0x1
/* 0519bdd2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bdd8 */  TEST RAX,RAX
/* 0519bddb */  JNZ 0x0519bdee
/* 0519bddd */  MOV RAX,qword ptr [RBX]
/* 0519bde0 */  MOV RDI,RBX
/* 0519bde3 */  CALL qword ptr [RAX + 0x10]
/* 0519bde6 */  MOV RDI,RBX
/* 0519bde9 */  CALL 0x0412c2d0
/* 0519bdee */  MOV RBX,qword ptr [RSP + 0x798]
/* 0519bdf6 */  TEST RBX,RBX
/* 0519bdf9 */  JZ 0x0519be1e
/* 0519bdfb */  MOV RAX,-0x1
/* 0519be02 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519be08 */  TEST RAX,RAX
/* 0519be0b */  JNZ 0x0519be1e
/* 0519be0d */  MOV RAX,qword ptr [RBX]
/* 0519be10 */  MOV RDI,RBX
/* 0519be13 */  CALL qword ptr [RAX + 0x10]
/* 0519be16 */  MOV RDI,RBX
/* 0519be19 */  CALL 0x0412c2d0
/* 0519be1e */  MOV RBX,qword ptr [RSP + 0x7a8]
/* 0519be26 */  TEST RBX,RBX
/* 0519be29 */  JZ 0x0519be4e
/* 0519be2b */  MOV RAX,-0x1
/* 0519be32 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519be38 */  TEST RAX,RAX
/* 0519be3b */  JNZ 0x0519be4e
/* 0519be3d */  MOV RAX,qword ptr [RBX]
/* 0519be40 */  MOV RDI,RBX
/* 0519be43 */  CALL qword ptr [RAX + 0x10]
/* 0519be46 */  MOV RDI,RBX
/* 0519be49 */  CALL 0x0412c2d0
/* 0519be4e */  MOV RBX,qword ptr [RSP + 0x7b8]
/* 0519be56 */  TEST RBX,RBX
/* 0519be59 */  JZ 0x0519be7e
/* 0519be5b */  MOV RAX,-0x1
/* 0519be62 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519be68 */  TEST RAX,RAX
/* 0519be6b */  JNZ 0x0519be7e
/* 0519be6d */  MOV RAX,qword ptr [RBX]
/* 0519be70 */  MOV RDI,RBX
/* 0519be73 */  CALL qword ptr [RAX + 0x10]
/* 0519be76 */  MOV RDI,RBX
/* 0519be79 */  CALL 0x0412c2d0
/* 0519be7e */  MOV RBX,qword ptr [RSP + 0x7c8]
/* 0519be86 */  TEST RBX,RBX
/* 0519be89 */  JZ 0x0519beae
/* 0519be8b */  MOV RAX,-0x1
/* 0519be92 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519be98 */  TEST RAX,RAX
/* 0519be9b */  JNZ 0x0519beae
/* 0519be9d */  MOV RAX,qword ptr [RBX]
/* 0519bea0 */  MOV RDI,RBX
/* 0519bea3 */  CALL qword ptr [RAX + 0x10]
/* 0519bea6 */  MOV RDI,RBX
/* 0519bea9 */  CALL 0x0412c2d0
/* 0519beae */  MOV RBX,qword ptr [RSP + 0x7d8]
/* 0519beb6 */  TEST RBX,RBX
/* 0519beb9 */  JZ 0x0519bede
/* 0519bebb */  MOV RAX,-0x1
/* 0519bec2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bec8 */  TEST RAX,RAX
/* 0519becb */  JNZ 0x0519bede
/* 0519becd */  MOV RAX,qword ptr [RBX]
/* 0519bed0 */  MOV RDI,RBX
/* 0519bed3 */  CALL qword ptr [RAX + 0x10]
/* 0519bed6 */  MOV RDI,RBX
/* 0519bed9 */  CALL 0x0412c2d0
/* 0519bede */  MOV RBX,qword ptr [RSP + 0x7e8]
/* 0519bee6 */  TEST RBX,RBX
/* 0519bee9 */  JZ 0x0519bf0e
/* 0519beeb */  MOV RAX,-0x1
/* 0519bef2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bef8 */  TEST RAX,RAX
/* 0519befb */  JNZ 0x0519bf0e
/* 0519befd */  MOV RAX,qword ptr [RBX]
/* 0519bf00 */  MOV RDI,RBX
/* 0519bf03 */  CALL qword ptr [RAX + 0x10]
/* 0519bf06 */  MOV RDI,RBX
/* 0519bf09 */  CALL 0x0412c2d0
/* 0519bf0e */  MOV RBX,qword ptr [RSP + 0x7f8]
/* 0519bf16 */  TEST RBX,RBX
/* 0519bf19 */  JZ 0x0519bf3e
/* 0519bf1b */  MOV RAX,-0x1
/* 0519bf22 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bf28 */  TEST RAX,RAX
/* 0519bf2b */  JNZ 0x0519bf3e
/* 0519bf2d */  MOV RAX,qword ptr [RBX]
/* 0519bf30 */  MOV RDI,RBX
/* 0519bf33 */  CALL qword ptr [RAX + 0x10]
/* 0519bf36 */  MOV RDI,RBX
/* 0519bf39 */  CALL 0x0412c2d0
/* 0519bf3e */  MOV RBX,qword ptr [RSP + 0x808]
/* 0519bf46 */  TEST RBX,RBX
/* 0519bf49 */  JZ 0x0519bf6e
/* 0519bf4b */  MOV RAX,-0x1
/* 0519bf52 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bf58 */  TEST RAX,RAX
/* 0519bf5b */  JNZ 0x0519bf6e
/* 0519bf5d */  MOV RAX,qword ptr [RBX]
/* 0519bf60 */  MOV RDI,RBX
/* 0519bf63 */  CALL qword ptr [RAX + 0x10]
/* 0519bf66 */  MOV RDI,RBX
/* 0519bf69 */  CALL 0x0412c2d0
/* 0519bf6e */  MOV RBX,qword ptr [RSP + 0x818]
/* 0519bf76 */  TEST RBX,RBX
/* 0519bf79 */  JZ 0x0519bf9e
/* 0519bf7b */  MOV RAX,-0x1
/* 0519bf82 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bf88 */  TEST RAX,RAX
/* 0519bf8b */  JNZ 0x0519bf9e
/* 0519bf8d */  MOV RAX,qword ptr [RBX]
/* 0519bf90 */  MOV RDI,RBX
/* 0519bf93 */  CALL qword ptr [RAX + 0x10]
/* 0519bf96 */  MOV RDI,RBX
/* 0519bf99 */  CALL 0x0412c2d0
/* 0519bf9e */  MOV RBX,qword ptr [RSP + 0x828]
/* 0519bfa6 */  TEST RBX,RBX
/* 0519bfa9 */  JZ 0x0519bfce
/* 0519bfab */  MOV RAX,-0x1
/* 0519bfb2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bfb8 */  TEST RAX,RAX
/* 0519bfbb */  JNZ 0x0519bfce
/* 0519bfbd */  MOV RAX,qword ptr [RBX]
/* 0519bfc0 */  MOV RDI,RBX
/* 0519bfc3 */  CALL qword ptr [RAX + 0x10]
/* 0519bfc6 */  MOV RDI,RBX
/* 0519bfc9 */  CALL 0x0412c2d0
/* 0519bfce */  MOV RBX,qword ptr [RSP + 0x838]
/* 0519bfd6 */  TEST RBX,RBX
/* 0519bfd9 */  JZ 0x0519bffe
/* 0519bfdb */  MOV RAX,-0x1
/* 0519bfe2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519bfe8 */  TEST RAX,RAX
/* 0519bfeb */  JNZ 0x0519bffe
/* 0519bfed */  MOV RAX,qword ptr [RBX]
/* 0519bff0 */  MOV RDI,RBX
/* 0519bff3 */  CALL qword ptr [RAX + 0x10]
/* 0519bff6 */  MOV RDI,RBX
/* 0519bff9 */  CALL 0x0412c2d0
/* 0519bffe */  MOV RBX,qword ptr [RSP + 0x848]
/* 0519c006 */  TEST RBX,RBX
/* 0519c009 */  JZ 0x0519c02e
/* 0519c00b */  MOV RAX,-0x1
/* 0519c012 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c018 */  TEST RAX,RAX
/* 0519c01b */  JNZ 0x0519c02e
/* 0519c01d */  MOV RAX,qword ptr [RBX]
/* 0519c020 */  MOV RDI,RBX
/* 0519c023 */  CALL qword ptr [RAX + 0x10]
/* 0519c026 */  MOV RDI,RBX
/* 0519c029 */  CALL 0x0412c2d0
/* 0519c02e */  MOV RBX,qword ptr [RSP + 0x858]
/* 0519c036 */  TEST RBX,RBX
/* 0519c039 */  JZ 0x0519c05e
/* 0519c03b */  MOV RAX,-0x1
/* 0519c042 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c048 */  TEST RAX,RAX
/* 0519c04b */  JNZ 0x0519c05e
/* 0519c04d */  MOV RAX,qword ptr [RBX]
/* 0519c050 */  MOV RDI,RBX
/* 0519c053 */  CALL qword ptr [RAX + 0x10]
/* 0519c056 */  MOV RDI,RBX
/* 0519c059 */  CALL 0x0412c2d0
/* 0519c05e */  MOV RBX,qword ptr [RSP + 0x868]
/* 0519c066 */  TEST RBX,RBX
/* 0519c069 */  JZ 0x0519c08e
/* 0519c06b */  MOV RAX,-0x1
/* 0519c072 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c078 */  TEST RAX,RAX
/* 0519c07b */  JNZ 0x0519c08e
/* 0519c07d */  MOV RAX,qword ptr [RBX]
/* 0519c080 */  MOV RDI,RBX
/* 0519c083 */  CALL qword ptr [RAX + 0x10]
/* 0519c086 */  MOV RDI,RBX
/* 0519c089 */  CALL 0x0412c2d0
/* 0519c08e */  MOV RBX,qword ptr [RSP + 0x878]
/* 0519c096 */  TEST RBX,RBX
/* 0519c099 */  JZ 0x0519c0b1
/* 0519c09b */  MOV RAX,-0x1
/* 0519c0a2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c0a8 */  TEST RAX,RAX
/* 0519c0ab */  JZ 0x051a2e99
/* 0519c0b1 */  MOV RBX,qword ptr [RSP + 0x888]
/* 0519c0b9 */  TEST RBX,RBX
/* 0519c0bc */  JZ 0x0519c0d4
/* 0519c0be */  MOV RAX,-0x1
/* 0519c0c5 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c0cb */  TEST RAX,RAX
/* 0519c0ce */  JZ 0x051a2ec0
/* 0519c0d4 */  MOV RSI,qword ptr [RSP + 0xff8]
/* 0519c0dc */  MOV RAX,0x80000000000000
/* 0519c0e6 */  TEST RSI,RAX
/* 0519c0e9 */  JZ 0x0519c10d
/* 0519c0eb */  MOV RAX,-0xff000000000001
/* 0519c0f5 */  AND RSI,RAX
/* 0519c0f8 */  ADD RSI,-0x8
/* 0519c0fc */  LEA RDI,[0xf5463b0]
/* 0519c103 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519c10a */  CALL qword ptr [RAX + 0x28]
/* 0519c10d */  MOV qword ptr [RSP + 0xff8],0x0
/* 0519c119 */  MOV RSI,qword ptr [RSP + 0xff0]
/* 0519c121 */  MOV RAX,0x80000000000000
/* 0519c12b */  TEST RSI,RAX
/* 0519c12e */  JZ 0x0519c152
/* 0519c130 */  MOV RAX,-0xff000000000001
/* 0519c13a */  AND RSI,RAX
/* 0519c13d */  ADD RSI,-0x8
/* 0519c141 */  LEA RDI,[0xf5463b0]
/* 0519c148 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519c14f */  CALL qword ptr [RAX + 0x28]
/* 0519c152 */  MOV qword ptr [RSP + 0xff0],0x0
/* 0519c15e */  XORPS XMM0,XMM0
/* 0519c161 */  MOV RBX,qword ptr [RSP + 0xfc8]
/* 0519c169 */  MOVAPS xmmword ptr [RSP + 0xfc0],XMM0
/* 0519c171 */  TEST RBX,RBX
/* 0519c174 */  JZ 0x0519c1d7
/* 0519c176 */  MOV RAX,-0x1
/* 0519c17d */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c183 */  TEST RAX,RAX
/* 0519c186 */  JNZ 0x0519c199
/* 0519c188 */  MOV RAX,qword ptr [RBX]
/* 0519c18b */  MOV RDI,RBX
/* 0519c18e */  CALL qword ptr [RAX + 0x10]
/* 0519c191 */  MOV RDI,RBX
/* 0519c194 */  CALL 0x0412c2d0
/* 0519c199 */  MOV RBX,qword ptr [RSP + 0xfc8]
/* 0519c1a1 */  MOV qword ptr [RSP + 0xfd0],0x0
/* 0519c1ad */  TEST RBX,RBX
/* 0519c1b0 */  JZ 0x0519c1e3
/* 0519c1b2 */  MOV RAX,-0x1
/* 0519c1b9 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519c1bf */  TEST RAX,RAX
/* 0519c1c2 */  JNZ 0x0519c1e3
/* 0519c1c4 */  MOV RAX,qword ptr [RBX]
/* 0519c1c7 */  MOV RDI,RBX
/* 0519c1ca */  CALL qword ptr [RAX + 0x10]
/* 0519c1cd */  MOV RDI,RBX
/* 0519c1d0 */  CALL 0x0412c2d0
/* 0519c1d5 */  JMP 0x0519c1e3
/* 0519c1d7 */  MOV qword ptr [RSP + 0xfd0],0x0
/* 0519c1e3 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519c1e8 */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519c1ec */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519c1ef */  MOVAPS xmmword ptr [RSP + 0xf70],XMM0
/* 0519c1f7 */  TEST RAX,RAX
/* 0519c1fa */  JZ 0x0519c201
/* 0519c1fc */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519c201 */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519c206 */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519c20a */  MOV qword ptr [RSP + 0xf80],RAX
/* 0519c212 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519c21a */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519c21d */  MOVUPS xmmword ptr [RSP + 0xf88],XMM0
/* 0519c225 */  LEA RDI,[RSP + 0xf98]
/* 0519c22d */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519c235 */  CALL 0x0d88e390
/* 0519c23a */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519c23e */  MOV qword ptr [RSP + 0xfb8],RAX
/* 0519c246 */  LEA RAX,[0xf460d78]
/* 0519c24d */  MOV qword ptr [RSP + 0xa0],RAX
/* 0519c255 */  LEA RAX,[RSP + 0xa0]
/* 0519c25d */  MOV qword ptr [RSP + 0xc0],RAX
/* 0519c265 */  MOV dword ptr [RSP + 0xd0],0x8
/* 0519c270 */  LEA RBX,[RSP + 0xe0]
/* 0519c278 */  LEA R14,[0x12085b6]
/* 0519c27f */  MOV EDX,0x27
/* 0519c284 */  MOV RAX,R14
/* 0519c287 */  NOP word ptr [RAX + RAX*0x1]
/* 0519c290 */  MOV RDI,RAX
/* 0519c293 */  MOV ESI,0x3a
/* 0519c298 */  CALL 0x0eee2ef0
/* 0519c29d */  TEST RAX,RAX
/* 0519c2a0 */  JZ 0x0519c2e1
/* 0519c2a2 */  CMP byte ptr [RAX],0x3a
/* 0519c2a5 */  JZ 0x0519c2bb
/* 0519c2a7 */  INC RAX
/* 0519c2aa */  MOV RDX,R14
/* 0519c2ad */  SUB RDX,RAX
/* 0519c2b0 */  ADD RDX,0x27
/* 0519c2b4 */  TEST RDX,RDX
/* 0519c2b7 */  JG 0x0519c290
/* 0519c2b9 */  JMP 0x0519c2e1
/* 0519c2bb */  LEA RCX,[0x12085dd]
/* 0519c2c2 */  CMP RAX,RCX
/* 0519c2c5 */  SETNZ CL
/* 0519c2c8 */  LEA RDX,[0x12085b6]
/* 0519c2cf */  SUB RAX,RDX
/* 0519c2d2 */  CMP RAX,-0x1
/* 0519c2d6 */  SETNZ AL
/* 0519c2d9 */  TEST CL,AL
/* 0519c2db */  JNZ 0x051a4f1c
/* 0519c2e1 */  LEA RAX,[0x13abf4c]
/* 0519c2e8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519c2ed */  LEA RAX,[0x12085b6]
/* 0519c2f4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519c2f9 */  LEA RSI,[0x11ed16e]
/* 0519c300 */  LEA RDI,[RSP + 0x10]
/* 0519c305 */  LEA R8,[RSP + 0x30]
/* 0519c30a */  MOV EDX,0x5
/* 0519c30f */  MOV ECX,0xcc
/* 0519c314 */  MOV R13,RBX
/* 0519c317 */  CALL 0x0470d9a0
/* 0519c31c */  LEA RSI,[0x12085b6]
/* 0519c323 */  LEA RCX,[RSP + 0x10]
/* 0519c328 */  MOV EDX,0x27
/* 0519c32d */  MOV RDI,RBX
/* 0519c330 */  CALL 0x0d337b80
/* 0519c335 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519c33a */  JZ 0x0519c34f
/* 0519c33c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519c341 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519c346 */  AND RSI,-0x2
/* 0519c34a */  CALL 0x0412a280
/* 0519c34f */  MOV dword ptr [RSP + 0x110],0x1
/* 0519c35a */  LEA R15,[RSP + 0x120]
/* 0519c362 */  LEA R14,[0x13c54d2]
/* 0519c369 */  MOV EDX,0x22
/* 0519c36e */  MOV RAX,R14
/* 0519c371 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519c380 */  MOV RDI,RAX
/* 0519c383 */  MOV ESI,0x3a
/* 0519c388 */  CALL 0x0eee2ef0
/* 0519c38d */  TEST RAX,RAX
/* 0519c390 */  JZ 0x0519c3d1
/* 0519c392 */  CMP byte ptr [RAX],0x3a
/* 0519c395 */  JZ 0x0519c3ab
/* 0519c397 */  INC RAX
/* 0519c39a */  MOV RDX,R14
/* 0519c39d */  SUB RDX,RAX
/* 0519c3a0 */  ADD RDX,0x22
/* 0519c3a4 */  TEST RDX,RDX
/* 0519c3a7 */  JG 0x0519c380
/* 0519c3a9 */  JMP 0x0519c3d1
/* 0519c3ab */  LEA RCX,[0x13c54f4]
/* 0519c3b2 */  CMP RAX,RCX
/* 0519c3b5 */  SETNZ CL
/* 0519c3b8 */  LEA RDX,[0x13c54d2]
/* 0519c3bf */  SUB RAX,RDX
/* 0519c3c2 */  CMP RAX,-0x1
/* 0519c3c6 */  SETNZ AL
/* 0519c3c9 */  TEST CL,AL
/* 0519c3cb */  JNZ 0x051a4f87
/* 0519c3d1 */  LEA RAX,[0x13abf4c]
/* 0519c3d8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519c3dd */  LEA RAX,[0x13c54d2]
/* 0519c3e4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519c3e9 */  LEA RSI,[0x11ed16e]
/* 0519c3f0 */  LEA RDI,[RSP + 0x10]
/* 0519c3f5 */  LEA R8,[RSP + 0x30]
/* 0519c3fa */  MOV EDX,0x5
/* 0519c3ff */  MOV ECX,0xcc
/* 0519c404 */  MOV R13,R15
/* 0519c407 */  CALL 0x0470d9a0
/* 0519c40c */  LEA RSI,[0x13c54d2]
/* 0519c413 */  LEA RCX,[RSP + 0x10]
/* 0519c418 */  MOV EDX,0x22
/* 0519c41d */  MOV RDI,R15
/* 0519c420 */  CALL 0x0d337b80
/* 0519c425 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519c42a */  JZ 0x0519c43f
/* 0519c42c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519c431 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519c436 */  AND RSI,-0x2
/* 0519c43a */  CALL 0x0412a280
/* 0519c43f */  MOV dword ptr [RSP + 0x150],0x1
/* 0519c44a */  LEA R12,[RSP + 0x160]
/* 0519c452 */  LEA R14,[0x1376b87]
/* 0519c459 */  MOV EDX,0x2e
/* 0519c45e */  MOV RAX,R14
/* 0519c461 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519c470 */  MOV RDI,RAX
/* 0519c473 */  MOV ESI,0x3a
/* 0519c478 */  CALL 0x0eee2ef0
/* 0519c47d */  TEST RAX,RAX
/* 0519c480 */  JZ 0x0519c4c1
/* 0519c482 */  CMP byte ptr [RAX],0x3a
/* 0519c485 */  JZ 0x0519c49b
/* 0519c487 */  INC RAX
/* 0519c48a */  MOV RDX,R14
/* 0519c48d */  SUB RDX,RAX
/* 0519c490 */  ADD RDX,0x2e
/* 0519c494 */  TEST RDX,RDX
/* 0519c497 */  JG 0x0519c470
/* 0519c499 */  JMP 0x0519c4c1
/* 0519c49b */  LEA RCX,[0x1376bb5]
/* 0519c4a2 */  CMP RAX,RCX
/* 0519c4a5 */  SETNZ CL
/* 0519c4a8 */  LEA RDX,[0x1376b87]
/* 0519c4af */  SUB RAX,RDX
/* 0519c4b2 */  CMP RAX,-0x1
/* 0519c4b6 */  SETNZ AL
/* 0519c4b9 */  TEST CL,AL
/* 0519c4bb */  JNZ 0x051a4feb
/* 0519c4c1 */  LEA RAX,[0x13abf4c]
/* 0519c4c8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519c4cd */  LEA RAX,[0x1376b87]
/* 0519c4d4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519c4d9 */  LEA RSI,[0x11ed16e]
/* 0519c4e0 */  LEA RDI,[RSP + 0x10]
/* 0519c4e5 */  LEA R8,[RSP + 0x30]
/* 0519c4ea */  MOV EDX,0x5
/* 0519c4ef */  MOV ECX,0xcc
/* 0519c4f4 */  MOV R13,R12
/* 0519c4f7 */  CALL 0x0470d9a0
/* 0519c4fc */  LEA RSI,[0x1376b87]
/* 0519c503 */  LEA RCX,[RSP + 0x10]
/* 0519c508 */  MOV EDX,0x2e
/* 0519c50d */  MOV RDI,R12
/* 0519c510 */  CALL 0x0d337b80
/* 0519c515 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519c51a */  JZ 0x0519c52f
/* 0519c51c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519c521 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519c526 */  AND RSI,-0x2
/* 0519c52a */  CALL 0x0412a280
/* 0519c52f */  MOV dword ptr [RSP + 0x190],0x1
/* 0519c53a */  LEA R14,[RSP + 0x1a0]
/* 0519c542 */  LEA R13,[0x119d003]
/* 0519c549 */  MOV EDX,0x2d
/* 0519c54e */  MOV RAX,R13
/* 0519c551 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519c560 */  MOV RDI,RAX
/* 0519c563 */  MOV ESI,0x3a
/* 0519c568 */  CALL 0x0eee2ef0
/* 0519c56d */  TEST RAX,RAX
/* 0519c570 */  JZ 0x0519c5b1
/* 0519c572 */  CMP byte ptr [RAX],0x3a
/* 0519c575 */  JZ 0x0519c58b
/* 0519c577 */  INC RAX
/* 0519c57a */  MOV RDX,R13
/* 0519c57d */  SUB RDX,RAX
/* 0519c580 */  ADD RDX,0x2d
/* 0519c584 */  TEST RDX,RDX
/* 0519c587 */  JG 0x0519c560
/* 0519c589 */  JMP 0x0519c5b1
/* 0519c58b */  LEA RCX,[0x119d030]
/* 0519c592 */  CMP RAX,RCX
/* 0519c595 */  SETNZ CL
/* 0519c598 */  LEA RDX,[0x119d003]
/* 0519c59f */  SUB RAX,RDX
/* 0519c5a2 */  CMP RAX,-0x1
/* 0519c5a6 */  SETNZ AL
/* 0519c5a9 */  TEST CL,AL
/* 0519c5ab */  JNZ 0x051a5054
/* 0519c5b1 */  LEA RAX,[0x13abf4c]
/* 0519c5b8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519c5bd */  LEA RAX,[0x119d003]
/* 0519c5c4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519c5c9 */  LEA RSI,[0x11ed16e]
/* 0519c5d0 */  LEA RDI,[RSP + 0x10]
/* 0519c5d5 */  LEA R8,[RSP + 0x30]
/* 0519c5da */  MOV EDX,0x5
/* 0519c5df */  MOV ECX,0xcc
/* 0519c5e4 */  MOV R13,R14
/* 0519c5e7 */  CALL 0x0470d9a0
/* 0519c5ec */  LEA RSI,[0x119d003]
/* 0519c5f3 */  LEA RCX,[RSP + 0x10]
/* 0519c5f8 */  MOV EDX,0x2d
/* 0519c5fd */  MOV RDI,R14
/* 0519c600 */  CALL 0x0d337b80
/* 0519c605 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519c60a */  JZ 0x0519c61f
/* 0519c60c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519c611 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519c616 */  AND RSI,-0x2
/* 0519c61a */  CALL 0x0412a280
/* 0519c61f */  MOV dword ptr [RSP + 0x1d0],0x1
/* 0519c62a */  LEA R13,[RSP + 0x1e0]
/* 0519c632 */  LEA RBP,[0x1325b47]
/* 0519c639 */  MOV EDX,0x2a
/* 0519c63e */  MOV RAX,RBP
/* 0519c641 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519c650 */  MOV RDI,RAX
/* 0519c653 */  MOV ESI,0x3a
/* 0519c658 */  CALL 0x0eee2ef0
/* 0519c65d */  TEST RAX,RAX
/* 0519c660 */  JZ 0x0519c6a1
/* 0519c662 */  CMP byte ptr [RAX],0x3a
/* 0519c665 */  JZ 0x0519c67b
/* 0519c667 */  INC RAX
/* 0519c66a */  MOV RDX,RBP
/* 0519c66d */  SUB RDX,RAX
/* 0519c670 */  ADD RDX,0x2a
/* 0519c674 */  TEST RDX,RDX
/* 0519c677 */  JG 0x0519c650
/* 0519c679 */  JMP 0x0519c6a1
/* 0519c67b */  LEA RCX,[0x1325b71]
/* 0519c682 */  CMP RAX,RCX
/* 0519c685 */  SETNZ CL
/* 0519c688 */  LEA RDX,[0x1325b47]
/* 0519c68f */  SUB RAX,RDX
/* 0519c692 */  CMP RAX,-0x1
/* 0519c696 */  SETNZ AL
/* 0519c699 */  TEST CL,AL
/* 0519c69b */  JNZ 0x051a50ba
/* 0519c6a1 */  LEA RAX,[0x13abf4c]
/* 0519c6a8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519c6ad */  LEA RAX,[0x1325b47]
/* 0519c6b4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519c6b9 */  LEA RSI,[0x11ed16e]
/* 0519c6c0 */  LEA RDI,[RSP + 0x10]
/* 0519c6c5 */  LEA R8,[RSP + 0x30]
/* 0519c6ca */  MOV EDX,0x5
/* 0519c6cf */  MOV ECX,0xcc
/* 0519c6d4 */  CALL 0x0470d9a0
/* 0519c6d9 */  LEA RSI,[0x1325b47]
/* 0519c6e0 */  LEA RCX,[RSP + 0x10]
/* 0519c6e5 */  MOV EDX,0x2a
/* 0519c6ea */  MOV RDI,R13
/* 0519c6ed */  CALL 0x0d337b80
/* 0519c6f2 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519c6f7 */  JZ 0x0519c70c
/* 0519c6f9 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519c6fe */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519c703 */  AND RSI,-0x2
/* 0519c707 */  CALL 0x0412a280
/* 0519c70c */  MOV dword ptr [RSP + 0x210],0x2
/* 0519c717 */  LEA RAX,[RSP + 0xa0]
/* 0519c71f */  MOV qword ptr [RSP + 0x68],RAX
/* 0519c724 */  MOV qword ptr [RSP + 0x70],0x6
/* 0519c72d */  LEA RAX,[0x12a478c]
/* 0519c734 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519c739 */  MOV qword ptr [RSP + 0x38],0x24
/* 0519c742 */  LEA RAX,[0x13df34a]
/* 0519c749 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519c74e */  MOV qword ptr [RSP + 0x18],0x5
/* 0519c757 */  MOV byte ptr [RSP + 0xf],0x0
/* 0519c75c */  LEA RDI,[RSP + 0x28]
/* 0519c761 */  LEA RSI,[RSP + 0xf70]
/* 0519c769 */  LEA RDX,[RSP + 0x30]
/* 0519c76e */  LEA RCX,[RSP + 0x10]
/* 0519c773 */  LEA R8,[RSP + 0xf]
/* 0519c778 */  LEA R9,[RSP + 0x68]
/* 0519c77d */  CALL 0x0d33dd60
/* 0519c782 */  LEA RSI,[RSP + 0x28]
/* 0519c787 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519c78c */  CALL 0x0d3301c0
/* 0519c791 */  MOV RBP,qword ptr [RSP + 0x28]
/* 0519c796 */  MOV qword ptr [RSP + 0x28],0x0
/* 0519c79f */  TEST RBP,RBP
/* 0519c7a2 */  JZ 0x0519c7f8
/* 0519c7a4 */  TEST byte ptr [RBP + 0x30],0x1
/* 0519c7a8 */  JZ 0x0519c7bb
/* 0519c7aa */  MOV RSI,qword ptr [RBP + 0x30]
/* 0519c7ae */  MOV RDI,qword ptr [RBP + 0x40]
/* 0519c7b2 */  AND RSI,-0x2
/* 0519c7b6 */  CALL 0x0412a280
/* 0519c7bb */  MOV RDI,qword ptr [RBP + 0x18]
/* 0519c7bf */  TEST RDI,RDI
/* 0519c7c2 */  JZ 0x0519c7d4
/* 0519c7c4 */  MOV qword ptr [RBP + 0x20],RDI
/* 0519c7c8 */  MOV RSI,qword ptr [RBP + 0x28]
/* 0519c7cc */  SUB RSI,RDI
/* 0519c7cf */  CALL 0x0412a280
/* 0519c7d4 */  TEST byte ptr [RBP],0x1
/* 0519c7d8 */  JZ 0x0519c7eb
/* 0519c7da */  MOV RSI,qword ptr [RBP]
/* 0519c7de */  MOV RDI,qword ptr [RBP + 0x10]
/* 0519c7e2 */  AND RSI,-0x2
/* 0519c7e6 */  CALL 0x0412a280
/* 0519c7eb */  MOV ESI,0x48
/* 0519c7f0 */  MOV RDI,RBP
/* 0519c7f3 */  CALL 0x0412a280
/* 0519c7f8 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519c800 */  CMP RDI,R13
/* 0519c803 */  JZ 0x0519c8da
/* 0519c809 */  MOV EAX,0x28
/* 0519c80e */  TEST RDI,RDI
/* 0519c811 */  JNZ 0x0519c8df
/* 0519c817 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519c81f */  CMP RDI,R14
/* 0519c822 */  JZ 0x0519c8f6
/* 0519c828 */  MOV EAX,0x28
/* 0519c82d */  TEST RDI,RDI
/* 0519c830 */  JNZ 0x0519c8fb
/* 0519c836 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519c83e */  CMP RDI,R12
/* 0519c841 */  JZ 0x0519c912
/* 0519c847 */  MOV EAX,0x28
/* 0519c84c */  TEST RDI,RDI
/* 0519c84f */  JNZ 0x0519c917
/* 0519c855 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519c85d */  CMP RDI,R15
/* 0519c860 */  JZ 0x0519c92e
/* 0519c866 */  MOV EAX,0x28
/* 0519c86b */  TEST RDI,RDI
/* 0519c86e */  JNZ 0x0519c933
/* 0519c874 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519c87c */  CMP RDI,RBX
/* 0519c87f */  JZ 0x0519c94a
/* 0519c885 */  MOV EAX,0x28
/* 0519c88a */  TEST RDI,RDI
/* 0519c88d */  JNZ 0x0519c94f
/* 0519c893 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519c89b */  LEA RAX,[RSP + 0xa0]
/* 0519c8a3 */  CMP RDI,RAX
/* 0519c8a6 */  JZ 0x0519c96e
/* 0519c8ac */  MOV EAX,0x28
/* 0519c8b1 */  TEST RDI,RDI
/* 0519c8b4 */  JNZ 0x0519c973
/* 0519c8ba */  MOV RSI,qword ptr [RSP + 0xfa8]
/* 0519c8c2 */  MOV RAX,0x80000000000000
/* 0519c8cc */  TEST RSI,RAX
/* 0519c8cf */  JNZ 0x0519c990
/* 0519c8d5 */  JMP 0x0519c9b2
/* 0519c8da */  MOV EAX,0x20
/* 0519c8df */  MOV RCX,qword ptr [RDI]
/* 0519c8e2 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519c8e5 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519c8ed */  CMP RDI,R14
/* 0519c8f0 */  JNZ 0x0519c828
/* 0519c8f6 */  MOV EAX,0x20
/* 0519c8fb */  MOV RCX,qword ptr [RDI]
/* 0519c8fe */  CALL qword ptr [RCX + RAX*0x1]
/* 0519c901 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519c909 */  CMP RDI,R12
/* 0519c90c */  JNZ 0x0519c847
/* 0519c912 */  MOV EAX,0x20
/* 0519c917 */  MOV RCX,qword ptr [RDI]
/* 0519c91a */  CALL qword ptr [RCX + RAX*0x1]
/* 0519c91d */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519c925 */  CMP RDI,R15
/* 0519c928 */  JNZ 0x0519c866
/* 0519c92e */  MOV EAX,0x20
/* 0519c933 */  MOV RCX,qword ptr [RDI]
/* 0519c936 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519c939 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519c941 */  CMP RDI,RBX
/* 0519c944 */  JNZ 0x0519c885
/* 0519c94a */  MOV EAX,0x20
/* 0519c94f */  MOV RCX,qword ptr [RDI]
/* 0519c952 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519c955 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519c95d */  LEA RAX,[RSP + 0xa0]
/* 0519c965 */  CMP RDI,RAX
/* 0519c968 */  JNZ 0x0519c8ac
/* 0519c96e */  MOV EAX,0x20
/* 0519c973 */  MOV RCX,qword ptr [RDI]
/* 0519c976 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519c979 */  MOV RSI,qword ptr [RSP + 0xfa8]
/* 0519c981 */  MOV RAX,0x80000000000000
/* 0519c98b */  TEST RSI,RAX
/* 0519c98e */  JZ 0x0519c9b2
/* 0519c990 */  MOV RAX,-0xff000000000001
/* 0519c99a */  AND RSI,RAX
/* 0519c99d */  ADD RSI,-0x8
/* 0519c9a1 */  LEA RDI,[0xf5463b0]
/* 0519c9a8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519c9af */  CALL qword ptr [RAX + 0x28]
/* 0519c9b2 */  MOV qword ptr [RSP + 0xfa8],0x0
/* 0519c9be */  MOV RSI,qword ptr [RSP + 0xfa0]
/* 0519c9c6 */  MOV RAX,0x80000000000000
/* 0519c9d0 */  TEST RSI,RAX
/* 0519c9d3 */  JZ 0x0519c9f7
/* 0519c9d5 */  MOV RAX,-0xff000000000001
/* 0519c9df */  AND RSI,RAX
/* 0519c9e2 */  ADD RSI,-0x8
/* 0519c9e6 */  LEA RDI,[0xf5463b0]
/* 0519c9ed */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519c9f4 */  CALL qword ptr [RAX + 0x28]
/* 0519c9f7 */  MOV qword ptr [RSP + 0xfa0],0x0
/* 0519ca03 */  XORPS XMM0,XMM0
/* 0519ca06 */  MOV RBX,qword ptr [RSP + 0xf78]
/* 0519ca0e */  MOVAPS xmmword ptr [RSP + 0xf70],XMM0
/* 0519ca16 */  TEST RBX,RBX
/* 0519ca19 */  JZ 0x0519ca7c
/* 0519ca1b */  MOV RAX,-0x1
/* 0519ca22 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519ca28 */  TEST RAX,RAX
/* 0519ca2b */  JNZ 0x0519ca3e
/* 0519ca2d */  MOV RAX,qword ptr [RBX]
/* 0519ca30 */  MOV RDI,RBX
/* 0519ca33 */  CALL qword ptr [RAX + 0x10]
/* 0519ca36 */  MOV RDI,RBX
/* 0519ca39 */  CALL 0x0412c2d0
/* 0519ca3e */  MOV RBX,qword ptr [RSP + 0xf78]
/* 0519ca46 */  MOV qword ptr [RSP + 0xf80],0x0
/* 0519ca52 */  TEST RBX,RBX
/* 0519ca55 */  JZ 0x0519ca88
/* 0519ca57 */  MOV RAX,-0x1
/* 0519ca5e */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519ca64 */  TEST RAX,RAX
/* 0519ca67 */  JNZ 0x0519ca88
/* 0519ca69 */  MOV RAX,qword ptr [RBX]
/* 0519ca6c */  MOV RDI,RBX
/* 0519ca6f */  CALL qword ptr [RAX + 0x10]
/* 0519ca72 */  MOV RDI,RBX
/* 0519ca75 */  CALL 0x0412c2d0
/* 0519ca7a */  JMP 0x0519ca88
/* 0519ca7c */  MOV qword ptr [RSP + 0xf80],0x0
/* 0519ca88 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519ca8d */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519ca91 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519ca94 */  MOVAPS xmmword ptr [RSP + 0xf20],XMM0
/* 0519ca9c */  TEST RAX,RAX
/* 0519ca9f */  JZ 0x0519caa6
/* 0519caa1 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519caa6 */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519caab */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519caaf */  MOV qword ptr [RSP + 0xf30],RAX
/* 0519cab7 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519cabf */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519cac2 */  MOVUPS xmmword ptr [RSP + 0xf38],XMM0
/* 0519caca */  LEA RDI,[RSP + 0xf48]
/* 0519cad2 */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519cada */  CALL 0x0d88e390
/* 0519cadf */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519cae3 */  MOV qword ptr [RSP + 0xf68],RAX
/* 0519caeb */  LEA RAX,[0xf460d78]
/* 0519caf2 */  MOV qword ptr [RSP + 0xa0],RAX
/* 0519cafa */  LEA RAX,[RSP + 0xa0]
/* 0519cb02 */  MOV qword ptr [RSP + 0xc0],RAX
/* 0519cb0a */  MOV dword ptr [RSP + 0xd0],0x8
/* 0519cb15 */  LEA RBX,[RSP + 0xe0]
/* 0519cb1d */  LEA R14,[0x1222991]
/* 0519cb24 */  MOV EDX,0x2a
/* 0519cb29 */  MOV RAX,R14
/* 0519cb2c */  NOP dword ptr [RAX]
/* 0519cb30 */  MOV RDI,RAX
/* 0519cb33 */  MOV ESI,0x3a
/* 0519cb38 */  CALL 0x0eee2ef0
/* 0519cb3d */  TEST RAX,RAX
/* 0519cb40 */  JZ 0x0519cb81
/* 0519cb42 */  CMP byte ptr [RAX],0x3a
/* 0519cb45 */  JZ 0x0519cb5b
/* 0519cb47 */  INC RAX
/* 0519cb4a */  MOV RDX,R14
/* 0519cb4d */  SUB RDX,RAX
/* 0519cb50 */  ADD RDX,0x2a
/* 0519cb54 */  TEST RDX,RDX
/* 0519cb57 */  JG 0x0519cb30
/* 0519cb59 */  JMP 0x0519cb81
/* 0519cb5b */  LEA RCX,[0x12229bb]
/* 0519cb62 */  CMP RAX,RCX
/* 0519cb65 */  SETNZ CL
/* 0519cb68 */  LEA RDX,[0x1222991]
/* 0519cb6f */  SUB RAX,RDX
/* 0519cb72 */  CMP RAX,-0x1
/* 0519cb76 */  SETNZ AL
/* 0519cb79 */  TEST CL,AL
/* 0519cb7b */  JNZ 0x051a511d
/* 0519cb81 */  LEA RAX,[0x13abf4c]
/* 0519cb88 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519cb8d */  LEA RAX,[0x1222991]
/* 0519cb94 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519cb99 */  LEA RSI,[0x11ed16e]
/* 0519cba0 */  LEA RDI,[RSP + 0x10]
/* 0519cba5 */  LEA R8,[RSP + 0x30]
/* 0519cbaa */  MOV EDX,0x5
/* 0519cbaf */  MOV ECX,0xcc
/* 0519cbb4 */  MOV R14,RBX
/* 0519cbb7 */  CALL 0x0470d9a0
/* 0519cbbc */  LEA RSI,[0x1222991]
/* 0519cbc3 */  LEA RCX,[RSP + 0x10]
/* 0519cbc8 */  MOV EDX,0x2a
/* 0519cbcd */  MOV RDI,RBX
/* 0519cbd0 */  CALL 0x0d337b80
/* 0519cbd5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519cbda */  JZ 0x0519cbef
/* 0519cbdc */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519cbe1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519cbe6 */  AND RSI,-0x2
/* 0519cbea */  CALL 0x0412a280
/* 0519cbef */  MOV dword ptr [RSP + 0x110],0x2
/* 0519cbfa */  LEA R14,[RSP + 0x120]
/* 0519cc02 */  LEA R15,[0x135c3b3]
/* 0519cc09 */  MOV EDX,0x2c
/* 0519cc0e */  MOV RAX,R15
/* 0519cc11 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519cc20 */  MOV RDI,RAX
/* 0519cc23 */  MOV ESI,0x3a
/* 0519cc28 */  CALL 0x0eee2ef0
/* 0519cc2d */  TEST RAX,RAX
/* 0519cc30 */  JZ 0x0519cc71
/* 0519cc32 */  CMP byte ptr [RAX],0x3a
/* 0519cc35 */  JZ 0x0519cc4b
/* 0519cc37 */  INC RAX
/* 0519cc3a */  MOV RDX,R15
/* 0519cc3d */  SUB RDX,RAX
/* 0519cc40 */  ADD RDX,0x2c
/* 0519cc44 */  TEST RDX,RDX
/* 0519cc47 */  JG 0x0519cc20
/* 0519cc49 */  JMP 0x0519cc71
/* 0519cc4b */  LEA RCX,[0x135c3df]
/* 0519cc52 */  CMP RAX,RCX
/* 0519cc55 */  SETNZ CL
/* 0519cc58 */  LEA RDX,[0x135c3b3]
/* 0519cc5f */  SUB RAX,RDX
/* 0519cc62 */  CMP RAX,-0x1
/* 0519cc66 */  SETNZ AL
/* 0519cc69 */  TEST CL,AL
/* 0519cc6b */  JNZ 0x051a5186
/* 0519cc71 */  LEA RAX,[0x13abf4c]
/* 0519cc78 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519cc7d */  LEA RAX,[0x135c3b3]
/* 0519cc84 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519cc89 */  LEA RSI,[0x11ed16e]
/* 0519cc90 */  LEA RDI,[RSP + 0x10]
/* 0519cc95 */  LEA R8,[RSP + 0x30]
/* 0519cc9a */  MOV EDX,0x5
/* 0519cc9f */  MOV ECX,0xcc
/* 0519cca4 */  CALL 0x0470d9a0
/* 0519cca9 */  LEA RSI,[0x135c3b3]
/* 0519ccb0 */  LEA RCX,[RSP + 0x10]
/* 0519ccb5 */  MOV EDX,0x2c
/* 0519ccba */  MOV RDI,R14
/* 0519ccbd */  CALL 0x0d337b80
/* 0519ccc2 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519ccc7 */  JZ 0x0519ccdc
/* 0519ccc9 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519ccce */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519ccd3 */  AND RSI,-0x2
/* 0519ccd7 */  CALL 0x0412a280
/* 0519ccdc */  MOV dword ptr [RSP + 0x150],0x1
/* 0519cce7 */  LEA RAX,[RSP + 0xa0]
/* 0519ccef */  MOV qword ptr [RSP + 0x68],RAX
/* 0519ccf4 */  MOV qword ptr [RSP + 0x70],0x3
/* 0519ccfd */  LEA RAX,[0x12085de]
/* 0519cd04 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519cd09 */  MOV qword ptr [RSP + 0x38],0x25
/* 0519cd12 */  LEA RAX,[0x13df34a]
/* 0519cd19 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519cd1e */  MOV qword ptr [RSP + 0x18],0x5
/* 0519cd27 */  MOV byte ptr [RSP + 0xf],0x0
/* 0519cd2c */  LEA RDI,[RSP + 0x28]
/* 0519cd31 */  LEA RSI,[RSP + 0xf20]
/* 0519cd39 */  LEA RDX,[RSP + 0x30]
/* 0519cd3e */  LEA RCX,[RSP + 0x10]
/* 0519cd43 */  LEA R8,[RSP + 0xf]
/* 0519cd48 */  LEA R9,[RSP + 0x68]
/* 0519cd4d */  CALL 0x0d33dd60
/* 0519cd52 */  LEA RSI,[RSP + 0x28]
/* 0519cd57 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519cd5c */  CALL 0x0d3301c0
/* 0519cd61 */  MOV R15,qword ptr [RSP + 0x28]
/* 0519cd66 */  MOV qword ptr [RSP + 0x28],0x0
/* 0519cd6f */  TEST R15,R15
/* 0519cd72 */  JZ 0x0519cdc8
/* 0519cd74 */  TEST byte ptr [R15 + 0x30],0x1
/* 0519cd79 */  JZ 0x0519cd8c
/* 0519cd7b */  MOV RSI,qword ptr [R15 + 0x30]
/* 0519cd7f */  MOV RDI,qword ptr [R15 + 0x40]
/* 0519cd83 */  AND RSI,-0x2
/* 0519cd87 */  CALL 0x0412a280
/* 0519cd8c */  MOV RDI,qword ptr [R15 + 0x18]
/* 0519cd90 */  TEST RDI,RDI
/* 0519cd93 */  JZ 0x0519cda5
/* 0519cd95 */  MOV qword ptr [R15 + 0x20],RDI
/* 0519cd99 */  MOV RSI,qword ptr [R15 + 0x28]
/* 0519cd9d */  SUB RSI,RDI
/* 0519cda0 */  CALL 0x0412a280
/* 0519cda5 */  TEST byte ptr [R15],0x1
/* 0519cda9 */  JZ 0x0519cdbb
/* 0519cdab */  MOV RSI,qword ptr [R15]
/* 0519cdae */  MOV RDI,qword ptr [R15 + 0x10]
/* 0519cdb2 */  AND RSI,-0x2
/* 0519cdb6 */  CALL 0x0412a280
/* 0519cdbb */  MOV ESI,0x48
/* 0519cdc0 */  MOV RDI,R15
/* 0519cdc3 */  CALL 0x0412a280
/* 0519cdc8 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519cdd0 */  CMP RDI,R14
/* 0519cdd3 */  JZ 0x0519ce2e
/* 0519cdd5 */  MOV EAX,0x28
/* 0519cdda */  TEST RDI,RDI
/* 0519cddd */  JNZ 0x0519ce33
/* 0519cddf */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519cde7 */  CMP RDI,RBX
/* 0519cdea */  JZ 0x0519ce46
/* 0519cdec */  MOV EAX,0x28
/* 0519cdf1 */  TEST RDI,RDI
/* 0519cdf4 */  JNZ 0x0519ce4b
/* 0519cdf6 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519cdfe */  LEA RAX,[RSP + 0xa0]
/* 0519ce06 */  CMP RDI,RAX
/* 0519ce09 */  JZ 0x0519ce66
/* 0519ce0b */  MOV EAX,0x28
/* 0519ce10 */  TEST RDI,RDI
/* 0519ce13 */  JNZ 0x0519ce6b
/* 0519ce15 */  MOV RSI,qword ptr [RSP + 0xf58]
/* 0519ce1d */  MOV RAX,0x80000000000000
/* 0519ce27 */  TEST RSI,RAX
/* 0519ce2a */  JNZ 0x0519ce88
/* 0519ce2c */  JMP 0x0519ceaa
/* 0519ce2e */  MOV EAX,0x20
/* 0519ce33 */  MOV RCX,qword ptr [RDI]
/* 0519ce36 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519ce39 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519ce41 */  CMP RDI,RBX
/* 0519ce44 */  JNZ 0x0519cdec
/* 0519ce46 */  MOV EAX,0x20
/* 0519ce4b */  MOV RCX,qword ptr [RDI]
/* 0519ce4e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519ce51 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519ce59 */  LEA RAX,[RSP + 0xa0]
/* 0519ce61 */  CMP RDI,RAX
/* 0519ce64 */  JNZ 0x0519ce0b
/* 0519ce66 */  MOV EAX,0x20
/* 0519ce6b */  MOV RCX,qword ptr [RDI]
/* 0519ce6e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519ce71 */  MOV RSI,qword ptr [RSP + 0xf58]
/* 0519ce79 */  MOV RAX,0x80000000000000
/* 0519ce83 */  TEST RSI,RAX
/* 0519ce86 */  JZ 0x0519ceaa
/* 0519ce88 */  MOV RAX,-0xff000000000001
/* 0519ce92 */  AND RSI,RAX
/* 0519ce95 */  ADD RSI,-0x8
/* 0519ce99 */  LEA RDI,[0xf5463b0]
/* 0519cea0 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519cea7 */  CALL qword ptr [RAX + 0x28]
/* 0519ceaa */  MOV qword ptr [RSP + 0xf58],0x0
/* 0519ceb6 */  MOV RSI,qword ptr [RSP + 0xf50]
/* 0519cebe */  MOV RAX,0x80000000000000
/* 0519cec8 */  TEST RSI,RAX
/* 0519cecb */  JZ 0x0519ceef
/* 0519cecd */  MOV RAX,-0xff000000000001
/* 0519ced7 */  AND RSI,RAX
/* 0519ceda */  ADD RSI,-0x8
/* 0519cede */  LEA RDI,[0xf5463b0]
/* 0519cee5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519ceec */  CALL qword ptr [RAX + 0x28]
/* 0519ceef */  MOV qword ptr [RSP + 0xf50],0x0
/* 0519cefb */  XORPS XMM0,XMM0
/* 0519cefe */  MOV RBX,qword ptr [RSP + 0xf28]
/* 0519cf06 */  MOVAPS xmmword ptr [RSP + 0xf20],XMM0
/* 0519cf0e */  TEST RBX,RBX
/* 0519cf11 */  JZ 0x0519cf74
/* 0519cf13 */  MOV RAX,-0x1
/* 0519cf1a */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519cf20 */  TEST RAX,RAX
/* 0519cf23 */  JNZ 0x0519cf36
/* 0519cf25 */  MOV RAX,qword ptr [RBX]
/* 0519cf28 */  MOV RDI,RBX
/* 0519cf2b */  CALL qword ptr [RAX + 0x10]
/* 0519cf2e */  MOV RDI,RBX
/* 0519cf31 */  CALL 0x0412c2d0
/* 0519cf36 */  MOV RBX,qword ptr [RSP + 0xf28]
/* 0519cf3e */  MOV qword ptr [RSP + 0xf30],0x0
/* 0519cf4a */  TEST RBX,RBX
/* 0519cf4d */  JZ 0x0519cf80
/* 0519cf4f */  MOV RAX,-0x1
/* 0519cf56 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519cf5c */  TEST RAX,RAX
/* 0519cf5f */  JNZ 0x0519cf80
/* 0519cf61 */  MOV RAX,qword ptr [RBX]
/* 0519cf64 */  MOV RDI,RBX
/* 0519cf67 */  CALL qword ptr [RAX + 0x10]
/* 0519cf6a */  MOV RDI,RBX
/* 0519cf6d */  CALL 0x0412c2d0
/* 0519cf72 */  JMP 0x0519cf80
/* 0519cf74 */  MOV qword ptr [RSP + 0xf30],0x0
/* 0519cf80 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519cf85 */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519cf89 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519cf8c */  MOVAPS xmmword ptr [RSP + 0xed0],XMM0
/* 0519cf94 */  TEST RAX,RAX
/* 0519cf97 */  JZ 0x0519cf9e
/* 0519cf99 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519cf9e */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519cfa3 */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519cfa7 */  MOV qword ptr [RSP + 0xee0],RAX
/* 0519cfaf */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519cfb7 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519cfba */  MOVUPS xmmword ptr [RSP + 0xee8],XMM0
/* 0519cfc2 */  LEA RDI,[RSP + 0xef8]
/* 0519cfca */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519cfd2 */  CALL 0x0d88e390
/* 0519cfd7 */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519cfdb */  MOV qword ptr [RSP + 0xf18],RAX
/* 0519cfe3 */  LEA RAX,[0xf460d78]
/* 0519cfea */  MOV qword ptr [RSP + 0xa0],RAX
/* 0519cff2 */  LEA RAX,[RSP + 0xa0]
/* 0519cffa */  MOV qword ptr [RSP + 0xc0],RAX
/* 0519d002 */  MOV dword ptr [RSP + 0xd0],0x6
/* 0519d00d */  LEA RBX,[RSP + 0xe0]
/* 0519d015 */  LEA R14,[0x13c54f5]
/* 0519d01c */  MOV EDX,0x30
/* 0519d021 */  MOV RAX,R14
/* 0519d024 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0519d030 */  MOV RDI,RAX
/* 0519d033 */  MOV ESI,0x3a
/* 0519d038 */  CALL 0x0eee2ef0
/* 0519d03d */  TEST RAX,RAX
/* 0519d040 */  JZ 0x0519d081
/* 0519d042 */  CMP byte ptr [RAX],0x3a
/* 0519d045 */  JZ 0x0519d05b
/* 0519d047 */  INC RAX
/* 0519d04a */  MOV RDX,R14
/* 0519d04d */  SUB RDX,RAX
/* 0519d050 */  ADD RDX,0x30
/* 0519d054 */  TEST RDX,RDX
/* 0519d057 */  JG 0x0519d030
/* 0519d059 */  JMP 0x0519d081
/* 0519d05b */  LEA RCX,[0x13c5525]
/* 0519d062 */  CMP RAX,RCX
/* 0519d065 */  SETNZ CL
/* 0519d068 */  LEA RDX,[0x13c54f5]
/* 0519d06f */  SUB RAX,RDX
/* 0519d072 */  CMP RAX,-0x1
/* 0519d076 */  SETNZ AL
/* 0519d079 */  TEST CL,AL
/* 0519d07b */  JNZ 0x051a51ec
/* 0519d081 */  LEA RAX,[0x13abf4c]
/* 0519d088 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d08d */  LEA RAX,[0x13c54f5]
/* 0519d094 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d099 */  LEA RSI,[0x11ed16e]
/* 0519d0a0 */  LEA RDI,[RSP + 0x10]
/* 0519d0a5 */  LEA R8,[RSP + 0x30]
/* 0519d0aa */  MOV EDX,0x5
/* 0519d0af */  MOV ECX,0xcc
/* 0519d0b4 */  MOV R13,RBX
/* 0519d0b7 */  CALL 0x0470d9a0
/* 0519d0bc */  LEA RSI,[0x13c54f5]
/* 0519d0c3 */  LEA RCX,[RSP + 0x10]
/* 0519d0c8 */  MOV EDX,0x30
/* 0519d0cd */  MOV RDI,RBX
/* 0519d0d0 */  CALL 0x0d337b80
/* 0519d0d5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519d0da */  JZ 0x0519d0ef
/* 0519d0dc */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519d0e1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519d0e6 */  AND RSI,-0x2
/* 0519d0ea */  CALL 0x0412a280
/* 0519d0ef */  MOV dword ptr [RSP + 0x110],0x2
/* 0519d0fa */  LEA R15,[RSP + 0x120]
/* 0519d102 */  LEA R14,[0x14ae72a]
/* 0519d109 */  MOV EDX,0x2e
/* 0519d10e */  MOV RAX,R14
/* 0519d111 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519d120 */  MOV RDI,RAX
/* 0519d123 */  MOV ESI,0x3a
/* 0519d128 */  CALL 0x0eee2ef0
/* 0519d12d */  TEST RAX,RAX
/* 0519d130 */  JZ 0x0519d171
/* 0519d132 */  CMP byte ptr [RAX],0x3a
/* 0519d135 */  JZ 0x0519d14b
/* 0519d137 */  INC RAX
/* 0519d13a */  MOV RDX,R14
/* 0519d13d */  SUB RDX,RAX
/* 0519d140 */  ADD RDX,0x2e
/* 0519d144 */  TEST RDX,RDX
/* 0519d147 */  JG 0x0519d120
/* 0519d149 */  JMP 0x0519d171
/* 0519d14b */  LEA RCX,[0x14ae758]
/* 0519d152 */  CMP RAX,RCX
/* 0519d155 */  SETNZ CL
/* 0519d158 */  LEA RDX,[0x14ae72a]
/* 0519d15f */  SUB RAX,RDX
/* 0519d162 */  CMP RAX,-0x1
/* 0519d166 */  SETNZ AL
/* 0519d169 */  TEST CL,AL
/* 0519d16b */  JNZ 0x051a5255
/* 0519d171 */  LEA RAX,[0x13abf4c]
/* 0519d178 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d17d */  LEA RAX,[0x14ae72a]
/* 0519d184 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d189 */  LEA RSI,[0x11ed16e]
/* 0519d190 */  LEA RDI,[RSP + 0x10]
/* 0519d195 */  LEA R8,[RSP + 0x30]
/* 0519d19a */  MOV EDX,0x5
/* 0519d19f */  MOV ECX,0xcc
/* 0519d1a4 */  MOV R13,R15
/* 0519d1a7 */  CALL 0x0470d9a0
/* 0519d1ac */  LEA RSI,[0x14ae72a]
/* 0519d1b3 */  LEA RCX,[RSP + 0x10]
/* 0519d1b8 */  MOV EDX,0x2e
/* 0519d1bd */  MOV RDI,R15
/* 0519d1c0 */  CALL 0x0d337b80
/* 0519d1c5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519d1ca */  JZ 0x0519d1df
/* 0519d1cc */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519d1d1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519d1d6 */  AND RSI,-0x2
/* 0519d1da */  CALL 0x0412a280
/* 0519d1df */  MOV dword ptr [RSP + 0x150],0x1
/* 0519d1ea */  LEA R12,[RSP + 0x160]
/* 0519d1f2 */  LEA R14,[0x127245e]
/* 0519d1f9 */  MOV EDX,0x2e
/* 0519d1fe */  MOV RAX,R14
/* 0519d201 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519d210 */  MOV RDI,RAX
/* 0519d213 */  MOV ESI,0x3a
/* 0519d218 */  CALL 0x0eee2ef0
/* 0519d21d */  TEST RAX,RAX
/* 0519d220 */  JZ 0x0519d261
/* 0519d222 */  CMP byte ptr [RAX],0x3a
/* 0519d225 */  JZ 0x0519d23b
/* 0519d227 */  INC RAX
/* 0519d22a */  MOV RDX,R14
/* 0519d22d */  SUB RDX,RAX
/* 0519d230 */  ADD RDX,0x2e
/* 0519d234 */  TEST RDX,RDX
/* 0519d237 */  JG 0x0519d210
/* 0519d239 */  JMP 0x0519d261
/* 0519d23b */  LEA RCX,[0x127248c]
/* 0519d242 */  CMP RAX,RCX
/* 0519d245 */  SETNZ CL
/* 0519d248 */  LEA RDX,[0x127245e]
/* 0519d24f */  SUB RAX,RDX
/* 0519d252 */  CMP RAX,-0x1
/* 0519d256 */  SETNZ AL
/* 0519d259 */  TEST CL,AL
/* 0519d25b */  JNZ 0x051a52be
/* 0519d261 */  LEA RAX,[0x13abf4c]
/* 0519d268 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d26d */  LEA RAX,[0x127245e]
/* 0519d274 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d279 */  LEA RSI,[0x11ed16e]
/* 0519d280 */  LEA RDI,[RSP + 0x10]
/* 0519d285 */  LEA R8,[RSP + 0x30]
/* 0519d28a */  MOV EDX,0x5
/* 0519d28f */  MOV ECX,0xcc
/* 0519d294 */  MOV R13,R12
/* 0519d297 */  CALL 0x0470d9a0
/* 0519d29c */  LEA RSI,[0x127245e]
/* 0519d2a3 */  LEA RCX,[RSP + 0x10]
/* 0519d2a8 */  MOV EDX,0x2e
/* 0519d2ad */  MOV RDI,R12
/* 0519d2b0 */  CALL 0x0d337b80
/* 0519d2b5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519d2ba */  JZ 0x0519d2cf
/* 0519d2bc */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519d2c1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519d2c6 */  AND RSI,-0x2
/* 0519d2ca */  CALL 0x0412a280
/* 0519d2cf */  MOV dword ptr [RSP + 0x190],0x1
/* 0519d2da */  LEA R14,[RSP + 0x1a0]
/* 0519d2e2 */  LEA R13,[0x14ae759]
/* 0519d2e9 */  MOV EDX,0x28
/* 0519d2ee */  MOV RAX,R13
/* 0519d2f1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519d300 */  MOV RDI,RAX
/* 0519d303 */  MOV ESI,0x3a
/* 0519d308 */  CALL 0x0eee2ef0
/* 0519d30d */  TEST RAX,RAX
/* 0519d310 */  JZ 0x0519d351
/* 0519d312 */  CMP byte ptr [RAX],0x3a
/* 0519d315 */  JZ 0x0519d32b
/* 0519d317 */  INC RAX
/* 0519d31a */  MOV RDX,R13
/* 0519d31d */  SUB RDX,RAX
/* 0519d320 */  ADD RDX,0x28
/* 0519d324 */  TEST RDX,RDX
/* 0519d327 */  JG 0x0519d300
/* 0519d329 */  JMP 0x0519d351
/* 0519d32b */  LEA RCX,[0x14ae781]
/* 0519d332 */  CMP RAX,RCX
/* 0519d335 */  SETNZ CL
/* 0519d338 */  LEA RDX,[0x14ae759]
/* 0519d33f */  SUB RAX,RDX
/* 0519d342 */  CMP RAX,-0x1
/* 0519d346 */  SETNZ AL
/* 0519d349 */  TEST CL,AL
/* 0519d34b */  JNZ 0x051a5327
/* 0519d351 */  LEA RAX,[0x13abf4c]
/* 0519d358 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d35d */  LEA RAX,[0x14ae759]
/* 0519d364 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d369 */  LEA RSI,[0x11ed16e]
/* 0519d370 */  LEA RDI,[RSP + 0x10]
/* 0519d375 */  LEA R8,[RSP + 0x30]
/* 0519d37a */  MOV EDX,0x5
/* 0519d37f */  MOV ECX,0xcc
/* 0519d384 */  MOV R13,R14
/* 0519d387 */  CALL 0x0470d9a0
/* 0519d38c */  LEA RSI,[0x14ae759]
/* 0519d393 */  LEA RCX,[RSP + 0x10]
/* 0519d398 */  MOV EDX,0x28
/* 0519d39d */  MOV RDI,R14
/* 0519d3a0 */  CALL 0x0d337b80
/* 0519d3a5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519d3aa */  JZ 0x0519d3bf
/* 0519d3ac */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519d3b1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519d3b6 */  AND RSI,-0x2
/* 0519d3ba */  CALL 0x0412a280
/* 0519d3bf */  MOV dword ptr [RSP + 0x1d0],0x1
/* 0519d3ca */  LEA R13,[RSP + 0x1e0]
/* 0519d3d2 */  LEA RBP,[0x14ae782]
/* 0519d3d9 */  MOV EDX,0x2a
/* 0519d3de */  MOV RAX,RBP
/* 0519d3e1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519d3f0 */  MOV RDI,RAX
/* 0519d3f3 */  MOV ESI,0x3a
/* 0519d3f8 */  CALL 0x0eee2ef0
/* 0519d3fd */  TEST RAX,RAX
/* 0519d400 */  JZ 0x0519d441
/* 0519d402 */  CMP byte ptr [RAX],0x3a
/* 0519d405 */  JZ 0x0519d41b
/* 0519d407 */  INC RAX
/* 0519d40a */  MOV RDX,RBP
/* 0519d40d */  SUB RDX,RAX
/* 0519d410 */  ADD RDX,0x2a
/* 0519d414 */  TEST RDX,RDX
/* 0519d417 */  JG 0x0519d3f0
/* 0519d419 */  JMP 0x0519d441
/* 0519d41b */  LEA RCX,[0x14ae7ac]
/* 0519d422 */  CMP RAX,RCX
/* 0519d425 */  SETNZ CL
/* 0519d428 */  LEA RDX,[0x14ae782]
/* 0519d42f */  SUB RAX,RDX
/* 0519d432 */  CMP RAX,-0x1
/* 0519d436 */  SETNZ AL
/* 0519d439 */  TEST CL,AL
/* 0519d43b */  JNZ 0x051a5390
/* 0519d441 */  LEA RAX,[0x13abf4c]
/* 0519d448 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d44d */  LEA RAX,[0x14ae782]
/* 0519d454 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d459 */  LEA RSI,[0x11ed16e]
/* 0519d460 */  LEA RDI,[RSP + 0x10]
/* 0519d465 */  LEA R8,[RSP + 0x30]
/* 0519d46a */  MOV EDX,0x5
/* 0519d46f */  MOV ECX,0xcc
/* 0519d474 */  CALL 0x0470d9a0
/* 0519d479 */  LEA RSI,[0x14ae782]
/* 0519d480 */  LEA RCX,[RSP + 0x10]
/* 0519d485 */  MOV EDX,0x2a
/* 0519d48a */  MOV RDI,R13
/* 0519d48d */  CALL 0x0d337b80
/* 0519d492 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519d497 */  JZ 0x0519d4ac
/* 0519d499 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519d49e */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519d4a3 */  AND RSI,-0x2
/* 0519d4a7 */  CALL 0x0412a280
/* 0519d4ac */  MOV dword ptr [RSP + 0x210],0x1
/* 0519d4b7 */  LEA RAX,[RSP + 0xa0]
/* 0519d4bf */  MOV qword ptr [RSP + 0x68],RAX
/* 0519d4c4 */  MOV qword ptr [RSP + 0x70],0x6
/* 0519d4cd */  LEA RAX,[0x13dfbe1]
/* 0519d4d4 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d4d9 */  MOV qword ptr [RSP + 0x38],0x2b
/* 0519d4e2 */  LEA RAX,[0x13df34a]
/* 0519d4e9 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519d4ee */  MOV qword ptr [RSP + 0x18],0x5
/* 0519d4f7 */  MOV byte ptr [RSP + 0xf],0x0
/* 0519d4fc */  LEA RDI,[RSP + 0x28]
/* 0519d501 */  LEA RSI,[RSP + 0xed0]
/* 0519d509 */  LEA RDX,[RSP + 0x30]
/* 0519d50e */  LEA RCX,[RSP + 0x10]
/* 0519d513 */  LEA R8,[RSP + 0xf]
/* 0519d518 */  LEA R9,[RSP + 0x68]
/* 0519d51d */  CALL 0x0d33dd60
/* 0519d522 */  LEA RSI,[RSP + 0x28]
/* 0519d527 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519d52c */  CALL 0x0d3301c0
/* 0519d531 */  MOV RBP,qword ptr [RSP + 0x28]
/* 0519d536 */  MOV qword ptr [RSP + 0x28],0x0
/* 0519d53f */  TEST RBP,RBP
/* 0519d542 */  JZ 0x0519d598
/* 0519d544 */  TEST byte ptr [RBP + 0x30],0x1
/* 0519d548 */  JZ 0x0519d55b
/* 0519d54a */  MOV RSI,qword ptr [RBP + 0x30]
/* 0519d54e */  MOV RDI,qword ptr [RBP + 0x40]
/* 0519d552 */  AND RSI,-0x2
/* 0519d556 */  CALL 0x0412a280
/* 0519d55b */  MOV RDI,qword ptr [RBP + 0x18]
/* 0519d55f */  TEST RDI,RDI
/* 0519d562 */  JZ 0x0519d574
/* 0519d564 */  MOV qword ptr [RBP + 0x20],RDI
/* 0519d568 */  MOV RSI,qword ptr [RBP + 0x28]
/* 0519d56c */  SUB RSI,RDI
/* 0519d56f */  CALL 0x0412a280
/* 0519d574 */  TEST byte ptr [RBP],0x1
/* 0519d578 */  JZ 0x0519d58b
/* 0519d57a */  MOV RSI,qword ptr [RBP]
/* 0519d57e */  MOV RDI,qword ptr [RBP + 0x10]
/* 0519d582 */  AND RSI,-0x2
/* 0519d586 */  CALL 0x0412a280
/* 0519d58b */  MOV ESI,0x48
/* 0519d590 */  MOV RDI,RBP
/* 0519d593 */  CALL 0x0412a280
/* 0519d598 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519d5a0 */  CMP RDI,R13
/* 0519d5a3 */  JZ 0x0519d67a
/* 0519d5a9 */  MOV EAX,0x28
/* 0519d5ae */  TEST RDI,RDI
/* 0519d5b1 */  JNZ 0x0519d67f
/* 0519d5b7 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519d5bf */  CMP RDI,R14
/* 0519d5c2 */  JZ 0x0519d696
/* 0519d5c8 */  MOV EAX,0x28
/* 0519d5cd */  TEST RDI,RDI
/* 0519d5d0 */  JNZ 0x0519d69b
/* 0519d5d6 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519d5de */  CMP RDI,R12
/* 0519d5e1 */  JZ 0x0519d6b2
/* 0519d5e7 */  MOV EAX,0x28
/* 0519d5ec */  TEST RDI,RDI
/* 0519d5ef */  JNZ 0x0519d6b7
/* 0519d5f5 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519d5fd */  CMP RDI,R15
/* 0519d600 */  JZ 0x0519d6ce
/* 0519d606 */  MOV EAX,0x28
/* 0519d60b */  TEST RDI,RDI
/* 0519d60e */  JNZ 0x0519d6d3
/* 0519d614 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519d61c */  CMP RDI,RBX
/* 0519d61f */  JZ 0x0519d6ea
/* 0519d625 */  MOV EAX,0x28
/* 0519d62a */  TEST RDI,RDI
/* 0519d62d */  JNZ 0x0519d6ef
/* 0519d633 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519d63b */  LEA RAX,[RSP + 0xa0]
/* 0519d643 */  CMP RDI,RAX
/* 0519d646 */  JZ 0x0519d70e
/* 0519d64c */  MOV EAX,0x28
/* 0519d651 */  TEST RDI,RDI
/* 0519d654 */  JNZ 0x0519d713
/* 0519d65a */  MOV RSI,qword ptr [RSP + 0xf08]
/* 0519d662 */  MOV RAX,0x80000000000000
/* 0519d66c */  TEST RSI,RAX
/* 0519d66f */  JNZ 0x0519d730
/* 0519d675 */  JMP 0x0519d752
/* 0519d67a */  MOV EAX,0x20
/* 0519d67f */  MOV RCX,qword ptr [RDI]
/* 0519d682 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519d685 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519d68d */  CMP RDI,R14
/* 0519d690 */  JNZ 0x0519d5c8
/* 0519d696 */  MOV EAX,0x20
/* 0519d69b */  MOV RCX,qword ptr [RDI]
/* 0519d69e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519d6a1 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519d6a9 */  CMP RDI,R12
/* 0519d6ac */  JNZ 0x0519d5e7
/* 0519d6b2 */  MOV EAX,0x20
/* 0519d6b7 */  MOV RCX,qword ptr [RDI]
/* 0519d6ba */  CALL qword ptr [RCX + RAX*0x1]
/* 0519d6bd */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519d6c5 */  CMP RDI,R15
/* 0519d6c8 */  JNZ 0x0519d606
/* 0519d6ce */  MOV EAX,0x20
/* 0519d6d3 */  MOV RCX,qword ptr [RDI]
/* 0519d6d6 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519d6d9 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519d6e1 */  CMP RDI,RBX
/* 0519d6e4 */  JNZ 0x0519d625
/* 0519d6ea */  MOV EAX,0x20
/* 0519d6ef */  MOV RCX,qword ptr [RDI]
/* 0519d6f2 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519d6f5 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519d6fd */  LEA RAX,[RSP + 0xa0]
/* 0519d705 */  CMP RDI,RAX
/* 0519d708 */  JNZ 0x0519d64c
/* 0519d70e */  MOV EAX,0x20
/* 0519d713 */  MOV RCX,qword ptr [RDI]
/* 0519d716 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519d719 */  MOV RSI,qword ptr [RSP + 0xf08]
/* 0519d721 */  MOV RAX,0x80000000000000
/* 0519d72b */  TEST RSI,RAX
/* 0519d72e */  JZ 0x0519d752
/* 0519d730 */  MOV RAX,-0xff000000000001
/* 0519d73a */  AND RSI,RAX
/* 0519d73d */  ADD RSI,-0x8
/* 0519d741 */  LEA RDI,[0xf5463b0]
/* 0519d748 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519d74f */  CALL qword ptr [RAX + 0x28]
/* 0519d752 */  MOV qword ptr [RSP + 0xf08],0x0
/* 0519d75e */  MOV RSI,qword ptr [RSP + 0xf00]
/* 0519d766 */  MOV RAX,0x80000000000000
/* 0519d770 */  TEST RSI,RAX
/* 0519d773 */  JZ 0x0519d797
/* 0519d775 */  MOV RAX,-0xff000000000001
/* 0519d77f */  AND RSI,RAX
/* 0519d782 */  ADD RSI,-0x8
/* 0519d786 */  LEA RDI,[0xf5463b0]
/* 0519d78d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519d794 */  CALL qword ptr [RAX + 0x28]
/* 0519d797 */  MOV qword ptr [RSP + 0xf00],0x0
/* 0519d7a3 */  XORPS XMM0,XMM0
/* 0519d7a6 */  MOV RBX,qword ptr [RSP + 0xed8]
/* 0519d7ae */  MOVAPS xmmword ptr [RSP + 0xed0],XMM0
/* 0519d7b6 */  TEST RBX,RBX
/* 0519d7b9 */  JZ 0x0519d81c
/* 0519d7bb */  MOV RAX,-0x1
/* 0519d7c2 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519d7c8 */  TEST RAX,RAX
/* 0519d7cb */  JNZ 0x0519d7de
/* 0519d7cd */  MOV RAX,qword ptr [RBX]
/* 0519d7d0 */  MOV RDI,RBX
/* 0519d7d3 */  CALL qword ptr [RAX + 0x10]
/* 0519d7d6 */  MOV RDI,RBX
/* 0519d7d9 */  CALL 0x0412c2d0
/* 0519d7de */  MOV RBX,qword ptr [RSP + 0xed8]
/* 0519d7e6 */  MOV qword ptr [RSP + 0xee0],0x0
/* 0519d7f2 */  TEST RBX,RBX
/* 0519d7f5 */  JZ 0x0519d828
/* 0519d7f7 */  MOV RAX,-0x1
/* 0519d7fe */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519d804 */  TEST RAX,RAX
/* 0519d807 */  JNZ 0x0519d828
/* 0519d809 */  MOV RAX,qword ptr [RBX]
/* 0519d80c */  MOV RDI,RBX
/* 0519d80f */  CALL qword ptr [RAX + 0x10]
/* 0519d812 */  MOV RDI,RBX
/* 0519d815 */  CALL 0x0412c2d0
/* 0519d81a */  JMP 0x0519d828
/* 0519d81c */  MOV qword ptr [RSP + 0xee0],0x0
/* 0519d828 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519d82d */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519d831 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519d834 */  MOVAPS xmmword ptr [RSP + 0xe80],XMM0
/* 0519d83c */  TEST RAX,RAX
/* 0519d83f */  JZ 0x0519d846
/* 0519d841 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519d846 */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519d84b */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519d84f */  MOV qword ptr [RSP + 0xe90],RAX
/* 0519d857 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519d85f */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519d862 */  MOVUPS xmmword ptr [RSP + 0xe98],XMM0
/* 0519d86a */  LEA RDI,[RSP + 0xea8]
/* 0519d872 */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519d87a */  CALL 0x0d88e390
/* 0519d87f */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519d883 */  MOV qword ptr [RSP + 0xec8],RAX
/* 0519d88b */  LEA RBX,[0x13dfc0d]
/* 0519d892 */  MOV EDX,0x2c
/* 0519d897 */  MOV RAX,RBX
/* 0519d89a */  NOP word ptr [RAX + RAX*0x1]
/* 0519d8a0 */  MOV RDI,RAX
/* 0519d8a3 */  MOV ESI,0x3a
/* 0519d8a8 */  CALL 0x0eee2ef0
/* 0519d8ad */  TEST RAX,RAX
/* 0519d8b0 */  JZ 0x0519d8f1
/* 0519d8b2 */  CMP byte ptr [RAX],0x3a
/* 0519d8b5 */  JZ 0x0519d8cb
/* 0519d8b7 */  INC RAX
/* 0519d8ba */  MOV RDX,RBX
/* 0519d8bd */  SUB RDX,RAX
/* 0519d8c0 */  ADD RDX,0x2c
/* 0519d8c4 */  TEST RDX,RDX
/* 0519d8c7 */  JG 0x0519d8a0
/* 0519d8c9 */  JMP 0x0519d8f1
/* 0519d8cb */  LEA RCX,[0x13dfc39]
/* 0519d8d2 */  CMP RAX,RCX
/* 0519d8d5 */  SETNZ CL
/* 0519d8d8 */  LEA RDX,[0x13dfc0d]
/* 0519d8df */  SUB RAX,RDX
/* 0519d8e2 */  CMP RAX,-0x1
/* 0519d8e6 */  SETNZ AL
/* 0519d8e9 */  TEST CL,AL
/* 0519d8eb */  JNZ 0x051a53f3
/* 0519d8f1 */  LEA RAX,[0x13abf4c]
/* 0519d8f8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d8fd */  LEA RAX,[0x13dfc0d]
/* 0519d904 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d909 */  LEA RSI,[0x11ed16e]
/* 0519d910 */  LEA RDI,[RSP + 0x10]
/* 0519d915 */  LEA R8,[RSP + 0x30]
/* 0519d91a */  MOV EDX,0x5
/* 0519d91f */  MOV ECX,0xcc
/* 0519d924 */  CALL 0x0470d9a0
/* 0519d929 */  LEA RSI,[0x13dfc0d]
/* 0519d930 */  LEA R12,[RSP + 0xa0]
/* 0519d938 */  LEA RCX,[RSP + 0x10]
/* 0519d93d */  MOV EDX,0x2c
/* 0519d942 */  MOV RDI,R12
/* 0519d945 */  CALL 0x0d337b80
/* 0519d94a */  TEST byte ptr [RSP + 0x10],0x1
/* 0519d94f */  JZ 0x0519d964
/* 0519d951 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519d956 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519d95b */  AND RSI,-0x2
/* 0519d95f */  CALL 0x0412a280
/* 0519d964 */  MOV dword ptr [RSP + 0xd0],0x1
/* 0519d96f */  LEA RBX,[RSP + 0xe0]
/* 0519d977 */  LEA R14,[0x128b4aa]
/* 0519d97e */  MOV EDX,0x2c
/* 0519d983 */  MOV RAX,R14
/* 0519d986 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0519d990 */  MOV RDI,RAX
/* 0519d993 */  MOV ESI,0x3a
/* 0519d998 */  CALL 0x0eee2ef0
/* 0519d99d */  TEST RAX,RAX
/* 0519d9a0 */  JZ 0x0519d9e1
/* 0519d9a2 */  CMP byte ptr [RAX],0x3a
/* 0519d9a5 */  JZ 0x0519d9bb
/* 0519d9a7 */  INC RAX
/* 0519d9aa */  MOV RDX,R14
/* 0519d9ad */  SUB RDX,RAX
/* 0519d9b0 */  ADD RDX,0x2c
/* 0519d9b4 */  TEST RDX,RDX
/* 0519d9b7 */  JG 0x0519d990
/* 0519d9b9 */  JMP 0x0519d9e1
/* 0519d9bb */  LEA RCX,[0x128b4d6]
/* 0519d9c2 */  CMP RAX,RCX
/* 0519d9c5 */  SETNZ CL
/* 0519d9c8 */  LEA RDX,[0x128b4aa]
/* 0519d9cf */  SUB RAX,RDX
/* 0519d9d2 */  CMP RAX,-0x1
/* 0519d9d6 */  SETNZ AL
/* 0519d9d9 */  TEST CL,AL
/* 0519d9db */  JNZ 0x051a5455
/* 0519d9e1 */  LEA RAX,[0x13abf4c]
/* 0519d9e8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519d9ed */  LEA RAX,[0x128b4aa]
/* 0519d9f4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519d9f9 */  LEA RSI,[0x11ed16e]
/* 0519da00 */  LEA RDI,[RSP + 0x10]
/* 0519da05 */  LEA R8,[RSP + 0x30]
/* 0519da0a */  MOV EDX,0x5
/* 0519da0f */  MOV ECX,0xcc
/* 0519da14 */  MOV R15,RBX
/* 0519da17 */  CALL 0x0470d9a0
/* 0519da1c */  LEA RSI,[0x128b4aa]
/* 0519da23 */  LEA RCX,[RSP + 0x10]
/* 0519da28 */  MOV EDX,0x2c
/* 0519da2d */  MOV RDI,RBX
/* 0519da30 */  CALL 0x0d337b80
/* 0519da35 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519da3a */  JZ 0x0519da4f
/* 0519da3c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519da41 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519da46 */  AND RSI,-0x2
/* 0519da4a */  CALL 0x0412a280
/* 0519da4f */  MOV dword ptr [RSP + 0x110],0x1
/* 0519da5a */  LEA R14,[0x1208604]
/* 0519da61 */  MOV EDX,0x2c
/* 0519da66 */  MOV RAX,R14
/* 0519da69 */  NOP dword ptr [RAX]
/* 0519da70 */  MOV RDI,RAX
/* 0519da73 */  MOV ESI,0x3a
/* 0519da78 */  CALL 0x0eee2ef0
/* 0519da7d */  TEST RAX,RAX
/* 0519da80 */  JZ 0x0519dac1
/* 0519da82 */  CMP byte ptr [RAX],0x3a
/* 0519da85 */  JZ 0x0519da9b
/* 0519da87 */  INC RAX
/* 0519da8a */  MOV RDX,R14
/* 0519da8d */  SUB RDX,RAX
/* 0519da90 */  ADD RDX,0x2c
/* 0519da94 */  TEST RDX,RDX
/* 0519da97 */  JG 0x0519da70
/* 0519da99 */  JMP 0x0519dac1
/* 0519da9b */  LEA RCX,[0x1208630]
/* 0519daa2 */  CMP RAX,RCX
/* 0519daa5 */  SETNZ CL
/* 0519daa8 */  LEA RDX,[0x1208604]
/* 0519daaf */  SUB RAX,RDX
/* 0519dab2 */  CMP RAX,-0x1
/* 0519dab6 */  SETNZ AL
/* 0519dab9 */  TEST CL,AL
/* 0519dabb */  JNZ 0x051a54be
/* 0519dac1 */  LEA RAX,[0x13abf4c]
/* 0519dac8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519dacd */  LEA RAX,[0x1208604]
/* 0519dad4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519dad9 */  LEA RSI,[0x11ed16e]
/* 0519dae0 */  LEA RDI,[RSP + 0x10]
/* 0519dae5 */  LEA R8,[RSP + 0x30]
/* 0519daea */  MOV EDX,0x5
/* 0519daef */  MOV ECX,0xcc
/* 0519daf4 */  LEA R15,[RSP + 0x120]
/* 0519dafc */  CALL 0x0470d9a0
/* 0519db01 */  LEA RSI,[0x1208604]
/* 0519db08 */  LEA RCX,[RSP + 0x10]
/* 0519db0d */  MOV EDX,0x2c
/* 0519db12 */  LEA RDI,[RSP + 0x120]
/* 0519db1a */  CALL 0x0d337b80
/* 0519db1f */  TEST byte ptr [RSP + 0x10],0x1
/* 0519db24 */  JZ 0x0519db39
/* 0519db26 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519db2b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519db30 */  AND RSI,-0x2
/* 0519db34 */  CALL 0x0412a280
/* 0519db39 */  MOV dword ptr [RSP + 0x150],0x1
/* 0519db44 */  LEA R14,[0x1376bb6]
/* 0519db4b */  MOV EDX,0x2c
/* 0519db50 */  MOV RAX,R14
/* 0519db53 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519db60 */  MOV RDI,RAX
/* 0519db63 */  MOV ESI,0x3a
/* 0519db68 */  CALL 0x0eee2ef0
/* 0519db6d */  TEST RAX,RAX
/* 0519db70 */  JZ 0x0519dbb1
/* 0519db72 */  CMP byte ptr [RAX],0x3a
/* 0519db75 */  JZ 0x0519db8b
/* 0519db77 */  INC RAX
/* 0519db7a */  MOV RDX,R14
/* 0519db7d */  SUB RDX,RAX
/* 0519db80 */  ADD RDX,0x2c
/* 0519db84 */  TEST RDX,RDX
/* 0519db87 */  JG 0x0519db60
/* 0519db89 */  JMP 0x0519dbb1
/* 0519db8b */  LEA RCX,[0x1376be2]
/* 0519db92 */  CMP RAX,RCX
/* 0519db95 */  SETNZ CL
/* 0519db98 */  LEA RDX,[0x1376bb6]
/* 0519db9f */  SUB RAX,RDX
/* 0519dba2 */  CMP RAX,-0x1
/* 0519dba6 */  SETNZ AL
/* 0519dba9 */  TEST CL,AL
/* 0519dbab */  JNZ 0x051a552c
/* 0519dbb1 */  LEA RAX,[0x13abf4c]
/* 0519dbb8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519dbbd */  LEA RAX,[0x1376bb6]
/* 0519dbc4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519dbc9 */  LEA RSI,[0x11ed16e]
/* 0519dbd0 */  LEA RDI,[RSP + 0x10]
/* 0519dbd5 */  LEA R8,[RSP + 0x30]
/* 0519dbda */  MOV EDX,0x5
/* 0519dbdf */  MOV ECX,0xcc
/* 0519dbe4 */  LEA R15,[RSP + 0x160]
/* 0519dbec */  CALL 0x0470d9a0
/* 0519dbf1 */  LEA RSI,[0x1376bb6]
/* 0519dbf8 */  LEA RCX,[RSP + 0x10]
/* 0519dbfd */  MOV EDX,0x2c
/* 0519dc02 */  LEA RDI,[RSP + 0x160]
/* 0519dc0a */  CALL 0x0d337b80
/* 0519dc0f */  TEST byte ptr [RSP + 0x10],0x1
/* 0519dc14 */  JZ 0x0519dc29
/* 0519dc16 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519dc1b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519dc20 */  AND RSI,-0x2
/* 0519dc24 */  CALL 0x0412a280
/* 0519dc29 */  MOV dword ptr [RSP + 0x190],0x1
/* 0519dc34 */  LEA RBP,[RSP + 0x1a0]
/* 0519dc3c */  LEA R14,[0x1376be3]
/* 0519dc43 */  MOV EDX,0x30
/* 0519dc48 */  MOV RAX,R14
/* 0519dc4b */  NOP dword ptr [RAX + RAX*0x1]
/* 0519dc50 */  MOV RDI,RAX
/* 0519dc53 */  MOV ESI,0x3a
/* 0519dc58 */  CALL 0x0eee2ef0
/* 0519dc5d */  TEST RAX,RAX
/* 0519dc60 */  JZ 0x0519dca1
/* 0519dc62 */  CMP byte ptr [RAX],0x3a
/* 0519dc65 */  JZ 0x0519dc7b
/* 0519dc67 */  INC RAX
/* 0519dc6a */  MOV RDX,R14
/* 0519dc6d */  SUB RDX,RAX
/* 0519dc70 */  ADD RDX,0x30
/* 0519dc74 */  TEST RDX,RDX
/* 0519dc77 */  JG 0x0519dc50
/* 0519dc79 */  JMP 0x0519dca1
/* 0519dc7b */  LEA RCX,[0x1376c13]
/* 0519dc82 */  CMP RAX,RCX
/* 0519dc85 */  SETNZ CL
/* 0519dc88 */  LEA RDX,[0x1376be3]
/* 0519dc8f */  SUB RAX,RDX
/* 0519dc92 */  CMP RAX,-0x1
/* 0519dc96 */  SETNZ AL
/* 0519dc99 */  TEST CL,AL
/* 0519dc9b */  JNZ 0x051a559a
/* 0519dca1 */  LEA RAX,[0x13abf4c]
/* 0519dca8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519dcad */  LEA RAX,[0x1376be3]
/* 0519dcb4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519dcb9 */  LEA RSI,[0x11ed16e]
/* 0519dcc0 */  LEA RDI,[RSP + 0x10]
/* 0519dcc5 */  LEA R8,[RSP + 0x30]
/* 0519dcca */  MOV EDX,0x5
/* 0519dccf */  MOV ECX,0xcc
/* 0519dcd4 */  MOV R15,RBP
/* 0519dcd7 */  CALL 0x0470d9a0
/* 0519dcdc */  LEA RSI,[0x1376be3]
/* 0519dce3 */  LEA RCX,[RSP + 0x10]
/* 0519dce8 */  MOV EDX,0x30
/* 0519dced */  MOV RDI,RBP
/* 0519dcf0 */  CALL 0x0d337b80
/* 0519dcf5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519dcfa */  JZ 0x0519dd0f
/* 0519dcfc */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519dd01 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519dd06 */  AND RSI,-0x2
/* 0519dd0a */  CALL 0x0412a280
/* 0519dd0f */  MOV dword ptr [RSP + 0x1d0],0x1
/* 0519dd1a */  LEA R14,[RSP + 0x1e0]
/* 0519dd22 */  LEA R15,[0x12bdd7d]
/* 0519dd29 */  MOV EDX,0x30
/* 0519dd2e */  MOV RAX,R15
/* 0519dd31 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519dd40 */  MOV RDI,RAX
/* 0519dd43 */  MOV ESI,0x3a
/* 0519dd48 */  CALL 0x0eee2ef0
/* 0519dd4d */  TEST RAX,RAX
/* 0519dd50 */  JZ 0x0519dd91
/* 0519dd52 */  CMP byte ptr [RAX],0x3a
/* 0519dd55 */  JZ 0x0519dd6b
/* 0519dd57 */  INC RAX
/* 0519dd5a */  MOV RDX,R15
/* 0519dd5d */  SUB RDX,RAX
/* 0519dd60 */  ADD RDX,0x30
/* 0519dd64 */  TEST RDX,RDX
/* 0519dd67 */  JG 0x0519dd40
/* 0519dd69 */  JMP 0x0519dd91
/* 0519dd6b */  LEA RCX,[0x12bddad]
/* 0519dd72 */  CMP RAX,RCX
/* 0519dd75 */  SETNZ CL
/* 0519dd78 */  LEA RDX,[0x12bdd7d]
/* 0519dd7f */  SUB RAX,RDX
/* 0519dd82 */  CMP RAX,-0x1
/* 0519dd86 */  SETNZ AL
/* 0519dd89 */  TEST CL,AL
/* 0519dd8b */  JNZ 0x051a5603
/* 0519dd91 */  LEA RAX,[0x13abf4c]
/* 0519dd98 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519dd9d */  LEA RAX,[0x12bdd7d]
/* 0519dda4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519dda9 */  LEA RSI,[0x11ed16e]
/* 0519ddb0 */  LEA RDI,[RSP + 0x10]
/* 0519ddb5 */  LEA R8,[RSP + 0x30]
/* 0519ddba */  MOV EDX,0x5
/* 0519ddbf */  MOV ECX,0xcc
/* 0519ddc4 */  MOV R15,R14
/* 0519ddc7 */  CALL 0x0470d9a0
/* 0519ddcc */  LEA RSI,[0x12bdd7d]
/* 0519ddd3 */  LEA RCX,[RSP + 0x10]
/* 0519ddd8 */  MOV EDX,0x30
/* 0519dddd */  MOV RDI,R14
/* 0519dde0 */  CALL 0x0d337b80
/* 0519dde5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519ddea */  JZ 0x0519ddff
/* 0519ddec */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519ddf1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519ddf6 */  AND RSI,-0x2
/* 0519ddfa */  CALL 0x0412a280
/* 0519ddff */  MOV dword ptr [RSP + 0x210],0x1
/* 0519de0a */  LEA R15,[RSP + 0x220]
/* 0519de12 */  LEA R13,[0x12bddae]
/* 0519de19 */  MOV EDX,0x30
/* 0519de1e */  MOV RAX,R13
/* 0519de21 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519de30 */  MOV RDI,RAX
/* 0519de33 */  MOV ESI,0x3a
/* 0519de38 */  CALL 0x0eee2ef0
/* 0519de3d */  TEST RAX,RAX
/* 0519de40 */  JZ 0x0519de81
/* 0519de42 */  CMP byte ptr [RAX],0x3a
/* 0519de45 */  JZ 0x0519de5b
/* 0519de47 */  INC RAX
/* 0519de4a */  MOV RDX,R13
/* 0519de4d */  SUB RDX,RAX
/* 0519de50 */  ADD RDX,0x30
/* 0519de54 */  TEST RDX,RDX
/* 0519de57 */  JG 0x0519de30
/* 0519de59 */  JMP 0x0519de81
/* 0519de5b */  LEA RCX,[0x12bddde]
/* 0519de62 */  CMP RAX,RCX
/* 0519de65 */  SETNZ CL
/* 0519de68 */  LEA RDX,[0x12bddae]
/* 0519de6f */  SUB RAX,RDX
/* 0519de72 */  CMP RAX,-0x1
/* 0519de76 */  SETNZ AL
/* 0519de79 */  TEST CL,AL
/* 0519de7b */  JNZ 0x051a566d
/* 0519de81 */  LEA RAX,[0x13abf4c]
/* 0519de88 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519de8d */  LEA RAX,[0x12bddae]
/* 0519de94 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519de99 */  LEA RSI,[0x11ed16e]
/* 0519dea0 */  LEA RDI,[RSP + 0x10]
/* 0519dea5 */  LEA R8,[RSP + 0x30]
/* 0519deaa */  MOV EDX,0x5
/* 0519deaf */  MOV ECX,0xcc
/* 0519deb4 */  CALL 0x0470d9a0
/* 0519deb9 */  LEA RSI,[0x12bddae]
/* 0519dec0 */  LEA RCX,[RSP + 0x10]
/* 0519dec5 */  MOV EDX,0x30
/* 0519deca */  MOV RDI,R15
/* 0519decd */  CALL 0x0d337b80
/* 0519ded2 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519ded7 */  JZ 0x0519deec
/* 0519ded9 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519dede */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519dee3 */  AND RSI,-0x2
/* 0519dee7 */  CALL 0x0412a280
/* 0519deec */  MOV dword ptr [RSP + 0x250],0x1
/* 0519def7 */  MOV qword ptr [RSP + 0x68],R12
/* 0519defc */  MOV qword ptr [RSP + 0x70],0x7
/* 0519df05 */  LEA RAX,[0x1258324]
/* 0519df0c */  MOV qword ptr [RSP + 0x30],RAX
/* 0519df11 */  MOV qword ptr [RSP + 0x38],0x15
/* 0519df1a */  LEA RAX,[0x13df34a]
/* 0519df21 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519df26 */  MOV qword ptr [RSP + 0x18],0x5
/* 0519df2f */  MOV byte ptr [RSP + 0xf],0x0
/* 0519df34 */  LEA RDI,[RSP + 0x28]
/* 0519df39 */  LEA RSI,[RSP + 0xe80]
/* 0519df41 */  LEA RDX,[RSP + 0x30]
/* 0519df46 */  LEA RCX,[RSP + 0x10]
/* 0519df4b */  LEA R8,[RSP + 0xf]
/* 0519df50 */  LEA R9,[RSP + 0x68]
/* 0519df55 */  CALL 0x0d33dd60
/* 0519df5a */  LEA RSI,[RSP + 0x28]
/* 0519df5f */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519df64 */  CALL 0x0d3301c0
/* 0519df69 */  MOV R13,qword ptr [RSP + 0x28]
/* 0519df6e */  MOV qword ptr [RSP + 0x28],0x0
/* 0519df77 */  TEST R13,R13
/* 0519df7a */  JZ 0x0519dfd2
/* 0519df7c */  TEST byte ptr [R13 + 0x30],0x1
/* 0519df81 */  JZ 0x0519df94
/* 0519df83 */  MOV RSI,qword ptr [R13 + 0x30]
/* 0519df87 */  MOV RDI,qword ptr [R13 + 0x40]
/* 0519df8b */  AND RSI,-0x2
/* 0519df8f */  CALL 0x0412a280
/* 0519df94 */  MOV RDI,qword ptr [R13 + 0x18]
/* 0519df98 */  TEST RDI,RDI
/* 0519df9b */  JZ 0x0519dfad
/* 0519df9d */  MOV qword ptr [R13 + 0x20],RDI
/* 0519dfa1 */  MOV RSI,qword ptr [R13 + 0x28]
/* 0519dfa5 */  SUB RSI,RDI
/* 0519dfa8 */  CALL 0x0412a280
/* 0519dfad */  TEST byte ptr [R13],0x1
/* 0519dfb2 */  JZ 0x0519dfc5
/* 0519dfb4 */  MOV RSI,qword ptr [R13]
/* 0519dfb8 */  MOV RDI,qword ptr [R13 + 0x10]
/* 0519dfbc */  AND RSI,-0x2
/* 0519dfc0 */  CALL 0x0412a280
/* 0519dfc5 */  MOV ESI,0x48
/* 0519dfca */  MOV RDI,R13
/* 0519dfcd */  CALL 0x0412a280
/* 0519dfd2 */  MOV RDI,qword ptr [RSP + 0x240]
/* 0519dfda */  CMP RDI,R15
/* 0519dfdd */  JZ 0x0519e0db
/* 0519dfe3 */  MOV EAX,0x28
/* 0519dfe8 */  TEST RDI,RDI
/* 0519dfeb */  JNZ 0x0519e0e0
/* 0519dff1 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519dff9 */  CMP RDI,R14
/* 0519dffc */  JZ 0x0519e0f7
/* 0519e002 */  MOV EAX,0x28
/* 0519e007 */  TEST RDI,RDI
/* 0519e00a */  JNZ 0x0519e0fc
/* 0519e010 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519e018 */  CMP RDI,RBP
/* 0519e01b */  JZ 0x0519e113
/* 0519e021 */  MOV EAX,0x28
/* 0519e026 */  TEST RDI,RDI
/* 0519e029 */  JNZ 0x0519e118
/* 0519e02f */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519e037 */  LEA RAX,[RSP + 0x160]
/* 0519e03f */  CMP RDI,RAX
/* 0519e042 */  JZ 0x0519e137
/* 0519e048 */  MOV EAX,0x28
/* 0519e04d */  TEST RDI,RDI
/* 0519e050 */  JNZ 0x0519e13c
/* 0519e056 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519e05e */  LEA RAX,[RSP + 0x120]
/* 0519e066 */  CMP RDI,RAX
/* 0519e069 */  JZ 0x0519e15b
/* 0519e06f */  MOV EAX,0x28
/* 0519e074 */  TEST RDI,RDI
/* 0519e077 */  JNZ 0x0519e160
/* 0519e07d */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519e085 */  CMP RDI,RBX
/* 0519e088 */  JZ 0x0519e177
/* 0519e08e */  MOV EAX,0x28
/* 0519e093 */  TEST RDI,RDI
/* 0519e096 */  JNZ 0x0519e17c
/* 0519e09c */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519e0a4 */  CMP RDI,R12
/* 0519e0a7 */  JZ 0x0519e193
/* 0519e0ad */  MOV EAX,0x28
/* 0519e0b2 */  TEST RDI,RDI
/* 0519e0b5 */  JNZ 0x0519e198
/* 0519e0bb */  MOV RSI,qword ptr [RSP + 0xeb8]
/* 0519e0c3 */  MOV RAX,0x80000000000000
/* 0519e0cd */  TEST RSI,RAX
/* 0519e0d0 */  JNZ 0x0519e1b5
/* 0519e0d6 */  JMP 0x0519e1d7
/* 0519e0db */  MOV EAX,0x20
/* 0519e0e0 */  MOV RCX,qword ptr [RDI]
/* 0519e0e3 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e0e6 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519e0ee */  CMP RDI,R14
/* 0519e0f1 */  JNZ 0x0519e002
/* 0519e0f7 */  MOV EAX,0x20
/* 0519e0fc */  MOV RCX,qword ptr [RDI]
/* 0519e0ff */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e102 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519e10a */  CMP RDI,RBP
/* 0519e10d */  JNZ 0x0519e021
/* 0519e113 */  MOV EAX,0x20
/* 0519e118 */  MOV RCX,qword ptr [RDI]
/* 0519e11b */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e11e */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519e126 */  LEA RAX,[RSP + 0x160]
/* 0519e12e */  CMP RDI,RAX
/* 0519e131 */  JNZ 0x0519e048
/* 0519e137 */  MOV EAX,0x20
/* 0519e13c */  MOV RCX,qword ptr [RDI]
/* 0519e13f */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e142 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519e14a */  LEA RAX,[RSP + 0x120]
/* 0519e152 */  CMP RDI,RAX
/* 0519e155 */  JNZ 0x0519e06f
/* 0519e15b */  MOV EAX,0x20
/* 0519e160 */  MOV RCX,qword ptr [RDI]
/* 0519e163 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e166 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519e16e */  CMP RDI,RBX
/* 0519e171 */  JNZ 0x0519e08e
/* 0519e177 */  MOV EAX,0x20
/* 0519e17c */  MOV RCX,qword ptr [RDI]
/* 0519e17f */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e182 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519e18a */  CMP RDI,R12
/* 0519e18d */  JNZ 0x0519e0ad
/* 0519e193 */  MOV EAX,0x20
/* 0519e198 */  MOV RCX,qword ptr [RDI]
/* 0519e19b */  CALL qword ptr [RCX + RAX*0x1]
/* 0519e19e */  MOV RSI,qword ptr [RSP + 0xeb8]
/* 0519e1a6 */  MOV RAX,0x80000000000000
/* 0519e1b0 */  TEST RSI,RAX
/* 0519e1b3 */  JZ 0x0519e1d7
/* 0519e1b5 */  MOV RAX,-0xff000000000001
/* 0519e1bf */  AND RSI,RAX
/* 0519e1c2 */  ADD RSI,-0x8
/* 0519e1c6 */  LEA RDI,[0xf5463b0]
/* 0519e1cd */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519e1d4 */  CALL qword ptr [RAX + 0x28]
/* 0519e1d7 */  MOV qword ptr [RSP + 0xeb8],0x0
/* 0519e1e3 */  MOV RSI,qword ptr [RSP + 0xeb0]
/* 0519e1eb */  MOV RAX,0x80000000000000
/* 0519e1f5 */  TEST RSI,RAX
/* 0519e1f8 */  JZ 0x0519e21c
/* 0519e1fa */  MOV RAX,-0xff000000000001
/* 0519e204 */  AND RSI,RAX
/* 0519e207 */  ADD RSI,-0x8
/* 0519e20b */  LEA RDI,[0xf5463b0]
/* 0519e212 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519e219 */  CALL qword ptr [RAX + 0x28]
/* 0519e21c */  MOV qword ptr [RSP + 0xeb0],0x0
/* 0519e228 */  XORPS XMM0,XMM0
/* 0519e22b */  MOV RBX,qword ptr [RSP + 0xe88]
/* 0519e233 */  MOVAPS xmmword ptr [RSP + 0xe80],XMM0
/* 0519e23b */  TEST RBX,RBX
/* 0519e23e */  JZ 0x0519e2a1
/* 0519e240 */  MOV RAX,-0x1
/* 0519e247 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519e24d */  TEST RAX,RAX
/* 0519e250 */  JNZ 0x0519e263
/* 0519e252 */  MOV RAX,qword ptr [RBX]
/* 0519e255 */  MOV RDI,RBX
/* 0519e258 */  CALL qword ptr [RAX + 0x10]
/* 0519e25b */  MOV RDI,RBX
/* 0519e25e */  CALL 0x0412c2d0
/* 0519e263 */  MOV RBX,qword ptr [RSP + 0xe88]
/* 0519e26b */  MOV qword ptr [RSP + 0xe90],0x0
/* 0519e277 */  TEST RBX,RBX
/* 0519e27a */  JZ 0x0519e2ad
/* 0519e27c */  MOV RAX,-0x1
/* 0519e283 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519e289 */  TEST RAX,RAX
/* 0519e28c */  JNZ 0x0519e2ad
/* 0519e28e */  MOV RAX,qword ptr [RBX]
/* 0519e291 */  MOV RDI,RBX
/* 0519e294 */  CALL qword ptr [RAX + 0x10]
/* 0519e297 */  MOV RDI,RBX
/* 0519e29a */  CALL 0x0412c2d0
/* 0519e29f */  JMP 0x0519e2ad
/* 0519e2a1 */  MOV qword ptr [RSP + 0xe90],0x0
/* 0519e2ad */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519e2b2 */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519e2b6 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519e2b9 */  MOVAPS xmmword ptr [RSP + 0xe30],XMM0
/* 0519e2c1 */  TEST RAX,RAX
/* 0519e2c4 */  JZ 0x0519e2cb
/* 0519e2c6 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519e2cb */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519e2d0 */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519e2d4 */  MOV qword ptr [RSP + 0xe40],RAX
/* 0519e2dc */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519e2e4 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519e2e7 */  MOVUPS xmmword ptr [RSP + 0xe48],XMM0
/* 0519e2ef */  LEA RDI,[RSP + 0xe58]
/* 0519e2f7 */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519e2ff */  CALL 0x0d88e390
/* 0519e304 */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519e308 */  MOV qword ptr [RSP + 0xe78],RAX
/* 0519e310 */  LEA RAX,[0xf460d78]
/* 0519e317 */  MOV qword ptr [RSP + 0xa0],RAX
/* 0519e31f */  MOV qword ptr [RSP + 0xc0],R12
/* 0519e327 */  MOV dword ptr [RSP + 0xd0],0x16
/* 0519e332 */  LEA R15,[RSP + 0xe0]
/* 0519e33a */  LEA RBX,[0x1340ab1]
/* 0519e341 */  MOV EDX,0x1e
/* 0519e346 */  MOV RAX,RBX
/* 0519e349 */  NOP dword ptr [RAX]
/* 0519e350 */  MOV RDI,RAX
/* 0519e353 */  MOV ESI,0x3a
/* 0519e358 */  CALL 0x0eee2ef0
/* 0519e35d */  TEST RAX,RAX
/* 0519e360 */  JZ 0x0519e3a1
/* 0519e362 */  CMP byte ptr [RAX],0x3a
/* 0519e365 */  JZ 0x0519e37b
/* 0519e367 */  INC RAX
/* 0519e36a */  MOV RDX,RBX
/* 0519e36d */  SUB RDX,RAX
/* 0519e370 */  ADD RDX,0x1e
/* 0519e374 */  TEST RDX,RDX
/* 0519e377 */  JG 0x0519e350
/* 0519e379 */  JMP 0x0519e3a1
/* 0519e37b */  LEA RCX,[0x1340acf]
/* 0519e382 */  CMP RAX,RCX
/* 0519e385 */  SETNZ CL
/* 0519e388 */  LEA RDX,[0x1340ab1]
/* 0519e38f */  SUB RAX,RDX
/* 0519e392 */  CMP RAX,-0x1
/* 0519e396 */  SETNZ AL
/* 0519e399 */  TEST CL,AL
/* 0519e39b */  JNZ 0x051a56d4
/* 0519e3a1 */  LEA RAX,[0x13abf4c]
/* 0519e3a8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e3ad */  LEA RAX,[0x1340ab1]
/* 0519e3b4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e3b9 */  LEA RSI,[0x11ed16e]
/* 0519e3c0 */  LEA RDI,[RSP + 0x10]
/* 0519e3c5 */  LEA R8,[RSP + 0x30]
/* 0519e3ca */  MOV EDX,0x5
/* 0519e3cf */  MOV ECX,0xcc
/* 0519e3d4 */  MOV R14,R15
/* 0519e3d7 */  CALL 0x0470d9a0
/* 0519e3dc */  LEA RSI,[0x1340ab1]
/* 0519e3e3 */  LEA RCX,[RSP + 0x10]
/* 0519e3e8 */  MOV EDX,0x1e
/* 0519e3ed */  MOV RDI,R15
/* 0519e3f0 */  CALL 0x0d337b80
/* 0519e3f5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e3fa */  JZ 0x0519e40f
/* 0519e3fc */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e401 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e406 */  AND RSI,-0x2
/* 0519e40a */  CALL 0x0412a280
/* 0519e40f */  MOV dword ptr [RSP + 0x110],0x2
/* 0519e41a */  LEA RBX,[0x12229bc]
/* 0519e421 */  MOV EDX,0x22
/* 0519e426 */  MOV RAX,RBX
/* 0519e429 */  NOP dword ptr [RAX]
/* 0519e430 */  MOV RDI,RAX
/* 0519e433 */  MOV ESI,0x3a
/* 0519e438 */  CALL 0x0eee2ef0
/* 0519e43d */  TEST RAX,RAX
/* 0519e440 */  JZ 0x0519e481
/* 0519e442 */  CMP byte ptr [RAX],0x3a
/* 0519e445 */  JZ 0x0519e45b
/* 0519e447 */  INC RAX
/* 0519e44a */  MOV RDX,RBX
/* 0519e44d */  SUB RDX,RAX
/* 0519e450 */  ADD RDX,0x22
/* 0519e454 */  TEST RDX,RDX
/* 0519e457 */  JG 0x0519e430
/* 0519e459 */  JMP 0x0519e481
/* 0519e45b */  LEA RCX,[0x12229de]
/* 0519e462 */  CMP RAX,RCX
/* 0519e465 */  SETNZ CL
/* 0519e468 */  LEA RDX,[0x12229bc]
/* 0519e46f */  SUB RAX,RDX
/* 0519e472 */  CMP RAX,-0x1
/* 0519e476 */  SETNZ AL
/* 0519e479 */  TEST CL,AL
/* 0519e47b */  JNZ 0x051a572e
/* 0519e481 */  LEA RAX,[0x13abf4c]
/* 0519e488 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e48d */  LEA RAX,[0x12229bc]
/* 0519e494 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e499 */  LEA RSI,[0x11ed16e]
/* 0519e4a0 */  LEA RDI,[RSP + 0x10]
/* 0519e4a5 */  LEA R8,[RSP + 0x30]
/* 0519e4aa */  MOV EDX,0x5
/* 0519e4af */  MOV ECX,0xcc
/* 0519e4b4 */  LEA R14,[RSP + 0x120]
/* 0519e4bc */  CALL 0x0470d9a0
/* 0519e4c1 */  LEA RSI,[0x12229bc]
/* 0519e4c8 */  LEA RCX,[RSP + 0x10]
/* 0519e4cd */  MOV EDX,0x22
/* 0519e4d2 */  LEA RDI,[RSP + 0x120]
/* 0519e4da */  CALL 0x0d337b80
/* 0519e4df */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e4e4 */  JZ 0x0519e4f9
/* 0519e4e6 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e4eb */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e4f0 */  AND RSI,-0x2
/* 0519e4f4 */  CALL 0x0412a280
/* 0519e4f9 */  MOV dword ptr [RSP + 0x150],0x2
/* 0519e504 */  LEA RBX,[0x14793de]
/* 0519e50b */  MOV EDX,0x24
/* 0519e510 */  MOV RAX,RBX
/* 0519e513 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519e520 */  MOV RDI,RAX
/* 0519e523 */  MOV ESI,0x3a
/* 0519e528 */  CALL 0x0eee2ef0
/* 0519e52d */  TEST RAX,RAX
/* 0519e530 */  JZ 0x0519e571
/* 0519e532 */  CMP byte ptr [RAX],0x3a
/* 0519e535 */  JZ 0x0519e54b
/* 0519e537 */  INC RAX
/* 0519e53a */  MOV RDX,RBX
/* 0519e53d */  SUB RDX,RAX
/* 0519e540 */  ADD RDX,0x24
/* 0519e544 */  TEST RDX,RDX
/* 0519e547 */  JG 0x0519e520
/* 0519e549 */  JMP 0x0519e571
/* 0519e54b */  LEA RCX,[0x1479402]
/* 0519e552 */  CMP RAX,RCX
/* 0519e555 */  SETNZ CL
/* 0519e558 */  LEA RDX,[0x14793de]
/* 0519e55f */  SUB RAX,RDX
/* 0519e562 */  CMP RAX,-0x1
/* 0519e566 */  SETNZ AL
/* 0519e569 */  TEST CL,AL
/* 0519e56b */  JNZ 0x051a5793
/* 0519e571 */  LEA RAX,[0x13abf4c]
/* 0519e578 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e57d */  LEA RAX,[0x14793de]
/* 0519e584 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e589 */  LEA RSI,[0x11ed16e]
/* 0519e590 */  LEA RDI,[RSP + 0x10]
/* 0519e595 */  LEA R8,[RSP + 0x30]
/* 0519e59a */  MOV EDX,0x5
/* 0519e59f */  MOV ECX,0xcc
/* 0519e5a4 */  LEA R14,[RSP + 0x160]
/* 0519e5ac */  CALL 0x0470d9a0
/* 0519e5b1 */  LEA RSI,[0x14793de]
/* 0519e5b8 */  LEA RCX,[RSP + 0x10]
/* 0519e5bd */  MOV EDX,0x24
/* 0519e5c2 */  LEA RDI,[RSP + 0x160]
/* 0519e5ca */  CALL 0x0d337b80
/* 0519e5cf */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e5d4 */  JZ 0x0519e5e9
/* 0519e5d6 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e5db */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e5e0 */  AND RSI,-0x2
/* 0519e5e4 */  CALL 0x0412a280
/* 0519e5e9 */  MOV dword ptr [RSP + 0x190],0xa
/* 0519e5f4 */  LEA RBX,[0x12a47b1]
/* 0519e5fb */  MOV EDX,0x1d
/* 0519e600 */  MOV RAX,RBX
/* 0519e603 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519e610 */  MOV RDI,RAX
/* 0519e613 */  MOV ESI,0x3a
/* 0519e618 */  CALL 0x0eee2ef0
/* 0519e61d */  TEST RAX,RAX
/* 0519e620 */  JZ 0x0519e661
/* 0519e622 */  CMP byte ptr [RAX],0x3a
/* 0519e625 */  JZ 0x0519e63b
/* 0519e627 */  INC RAX
/* 0519e62a */  MOV RDX,RBX
/* 0519e62d */  SUB RDX,RAX
/* 0519e630 */  ADD RDX,0x1d
/* 0519e634 */  TEST RDX,RDX
/* 0519e637 */  JG 0x0519e610
/* 0519e639 */  JMP 0x0519e661
/* 0519e63b */  LEA RCX,[0x12a47ce]
/* 0519e642 */  CMP RAX,RCX
/* 0519e645 */  SETNZ CL
/* 0519e648 */  LEA RDX,[0x12a47b1]
/* 0519e64f */  SUB RAX,RDX
/* 0519e652 */  CMP RAX,-0x1
/* 0519e656 */  SETNZ AL
/* 0519e659 */  TEST CL,AL
/* 0519e65b */  JNZ 0x051a57f9
/* 0519e661 */  LEA RAX,[0x13abf4c]
/* 0519e668 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e66d */  LEA RAX,[0x12a47b1]
/* 0519e674 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e679 */  LEA RSI,[0x11ed16e]
/* 0519e680 */  LEA RDI,[RSP + 0x10]
/* 0519e685 */  LEA R8,[RSP + 0x30]
/* 0519e68a */  MOV EDX,0x5
/* 0519e68f */  MOV ECX,0xcc
/* 0519e694 */  LEA R14,[RSP + 0x1a0]
/* 0519e69c */  CALL 0x0470d9a0
/* 0519e6a1 */  LEA RSI,[0x12a47b1]
/* 0519e6a8 */  LEA RCX,[RSP + 0x10]
/* 0519e6ad */  MOV EDX,0x1d
/* 0519e6b2 */  LEA RDI,[RSP + 0x1a0]
/* 0519e6ba */  CALL 0x0d337b80
/* 0519e6bf */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e6c4 */  JZ 0x0519e6d9
/* 0519e6c6 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e6cb */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e6d0 */  AND RSI,-0x2
/* 0519e6d4 */  CALL 0x0412a280
/* 0519e6d9 */  MOV dword ptr [RSP + 0x1d0],0x1
/* 0519e6e4 */  LEA RBX,[0x1479403]
/* 0519e6eb */  MOV EDX,0x1f
/* 0519e6f0 */  MOV RAX,RBX
/* 0519e6f3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519e700 */  MOV RDI,RAX
/* 0519e703 */  MOV ESI,0x3a
/* 0519e708 */  CALL 0x0eee2ef0
/* 0519e70d */  TEST RAX,RAX
/* 0519e710 */  JZ 0x0519e751
/* 0519e712 */  CMP byte ptr [RAX],0x3a
/* 0519e715 */  JZ 0x0519e72b
/* 0519e717 */  INC RAX
/* 0519e71a */  MOV RDX,RBX
/* 0519e71d */  SUB RDX,RAX
/* 0519e720 */  ADD RDX,0x1f
/* 0519e724 */  TEST RDX,RDX
/* 0519e727 */  JG 0x0519e700
/* 0519e729 */  JMP 0x0519e751
/* 0519e72b */  LEA RCX,[0x1479422]
/* 0519e732 */  CMP RAX,RCX
/* 0519e735 */  SETNZ CL
/* 0519e738 */  LEA RDX,[0x1479403]
/* 0519e73f */  SUB RAX,RDX
/* 0519e742 */  CMP RAX,-0x1
/* 0519e746 */  SETNZ AL
/* 0519e749 */  TEST CL,AL
/* 0519e74b */  JNZ 0x051a5858
/* 0519e751 */  LEA RAX,[0x13abf4c]
/* 0519e758 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e75d */  LEA RAX,[0x1479403]
/* 0519e764 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e769 */  LEA RSI,[0x11ed16e]
/* 0519e770 */  LEA RDI,[RSP + 0x10]
/* 0519e775 */  LEA R8,[RSP + 0x30]
/* 0519e77a */  MOV EDX,0x5
/* 0519e77f */  MOV ECX,0xcc
/* 0519e784 */  LEA R14,[RSP + 0x1e0]
/* 0519e78c */  CALL 0x0470d9a0
/* 0519e791 */  LEA RSI,[0x1479403]
/* 0519e798 */  LEA RCX,[RSP + 0x10]
/* 0519e79d */  MOV EDX,0x1f
/* 0519e7a2 */  LEA RDI,[RSP + 0x1e0]
/* 0519e7aa */  CALL 0x0d337b80
/* 0519e7af */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e7b4 */  JZ 0x0519e7c9
/* 0519e7b6 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e7bb */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e7c0 */  AND RSI,-0x2
/* 0519e7c4 */  CALL 0x0412a280
/* 0519e7c9 */  MOV dword ptr [RSP + 0x210],0x1
/* 0519e7d4 */  LEA RBX,[0x13f9e25]
/* 0519e7db */  MOV EDX,0x1f
/* 0519e7e0 */  MOV RAX,RBX
/* 0519e7e3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519e7f0 */  MOV RDI,RAX
/* 0519e7f3 */  MOV ESI,0x3a
/* 0519e7f8 */  CALL 0x0eee2ef0
/* 0519e7fd */  TEST RAX,RAX
/* 0519e800 */  JZ 0x0519e841
/* 0519e802 */  CMP byte ptr [RAX],0x3a
/* 0519e805 */  JZ 0x0519e81b
/* 0519e807 */  INC RAX
/* 0519e80a */  MOV RDX,RBX
/* 0519e80d */  SUB RDX,RAX
/* 0519e810 */  ADD RDX,0x1f
/* 0519e814 */  TEST RDX,RDX
/* 0519e817 */  JG 0x0519e7f0
/* 0519e819 */  JMP 0x0519e841
/* 0519e81b */  LEA RCX,[0x13f9e44]
/* 0519e822 */  CMP RAX,RCX
/* 0519e825 */  SETNZ CL
/* 0519e828 */  LEA RDX,[0x13f9e25]
/* 0519e82f */  SUB RAX,RDX
/* 0519e832 */  CMP RAX,-0x1
/* 0519e836 */  SETNZ AL
/* 0519e839 */  TEST CL,AL
/* 0519e83b */  JNZ 0x051a58b7
/* 0519e841 */  LEA RAX,[0x13abf4c]
/* 0519e848 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e84d */  LEA RAX,[0x13f9e25]
/* 0519e854 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e859 */  LEA RSI,[0x11ed16e]
/* 0519e860 */  LEA RDI,[RSP + 0x10]
/* 0519e865 */  LEA R8,[RSP + 0x30]
/* 0519e86a */  MOV EDX,0x5
/* 0519e86f */  MOV ECX,0xcc
/* 0519e874 */  LEA R14,[RSP + 0x220]
/* 0519e87c */  CALL 0x0470d9a0
/* 0519e881 */  LEA RSI,[0x13f9e25]
/* 0519e888 */  LEA RCX,[RSP + 0x10]
/* 0519e88d */  MOV EDX,0x1f
/* 0519e892 */  LEA RDI,[RSP + 0x220]
/* 0519e89a */  CALL 0x0d337b80
/* 0519e89f */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e8a4 */  JZ 0x0519e8b9
/* 0519e8a6 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e8ab */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e8b0 */  AND RSI,-0x2
/* 0519e8b4 */  CALL 0x0412a280
/* 0519e8b9 */  MOV dword ptr [RSP + 0x250],0x1
/* 0519e8c4 */  LEA RBX,[0x12a47cf]
/* 0519e8cb */  MOV EDX,0x1d
/* 0519e8d0 */  MOV RAX,RBX
/* 0519e8d3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519e8e0 */  MOV RDI,RAX
/* 0519e8e3 */  MOV ESI,0x3a
/* 0519e8e8 */  CALL 0x0eee2ef0
/* 0519e8ed */  TEST RAX,RAX
/* 0519e8f0 */  JZ 0x0519e931
/* 0519e8f2 */  CMP byte ptr [RAX],0x3a
/* 0519e8f5 */  JZ 0x0519e90b
/* 0519e8f7 */  INC RAX
/* 0519e8fa */  MOV RDX,RBX
/* 0519e8fd */  SUB RDX,RAX
/* 0519e900 */  ADD RDX,0x1d
/* 0519e904 */  TEST RDX,RDX
/* 0519e907 */  JG 0x0519e8e0
/* 0519e909 */  JMP 0x0519e931
/* 0519e90b */  LEA RCX,[0x12a47ec]
/* 0519e912 */  CMP RAX,RCX
/* 0519e915 */  SETNZ CL
/* 0519e918 */  LEA RDX,[0x12a47cf]
/* 0519e91f */  SUB RAX,RDX
/* 0519e922 */  CMP RAX,-0x1
/* 0519e926 */  SETNZ AL
/* 0519e929 */  TEST CL,AL
/* 0519e92b */  JNZ 0x051a5916
/* 0519e931 */  LEA RAX,[0x13abf4c]
/* 0519e938 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519e93d */  LEA RAX,[0x12a47cf]
/* 0519e944 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519e949 */  LEA RSI,[0x11ed16e]
/* 0519e950 */  LEA RDI,[RSP + 0x10]
/* 0519e955 */  LEA R8,[RSP + 0x30]
/* 0519e95a */  MOV EDX,0x5
/* 0519e95f */  MOV ECX,0xcc
/* 0519e964 */  LEA R14,[RSP + 0x260]
/* 0519e96c */  CALL 0x0470d9a0
/* 0519e971 */  LEA RSI,[0x12a47cf]
/* 0519e978 */  LEA RCX,[RSP + 0x10]
/* 0519e97d */  MOV EDX,0x1d
/* 0519e982 */  LEA RDI,[RSP + 0x260]
/* 0519e98a */  CALL 0x0d337b80
/* 0519e98f */  TEST byte ptr [RSP + 0x10],0x1
/* 0519e994 */  JZ 0x0519e9a9
/* 0519e996 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519e99b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519e9a0 */  AND RSI,-0x2
/* 0519e9a4 */  CALL 0x0412a280
/* 0519e9a9 */  MOV dword ptr [RSP + 0x290],0x1
/* 0519e9b4 */  LEA RBX,[0x12229df]
/* 0519e9bb */  MOV EDX,0x1d
/* 0519e9c0 */  MOV RAX,RBX
/* 0519e9c3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519e9d0 */  MOV RDI,RAX
/* 0519e9d3 */  MOV ESI,0x3a
/* 0519e9d8 */  CALL 0x0eee2ef0
/* 0519e9dd */  TEST RAX,RAX
/* 0519e9e0 */  JZ 0x0519ea21
/* 0519e9e2 */  CMP byte ptr [RAX],0x3a
/* 0519e9e5 */  JZ 0x0519e9fb
/* 0519e9e7 */  INC RAX
/* 0519e9ea */  MOV RDX,RBX
/* 0519e9ed */  SUB RDX,RAX
/* 0519e9f0 */  ADD RDX,0x1d
/* 0519e9f4 */  TEST RDX,RDX
/* 0519e9f7 */  JG 0x0519e9d0
/* 0519e9f9 */  JMP 0x0519ea21
/* 0519e9fb */  LEA RCX,[0x12229fc]
/* 0519ea02 */  CMP RAX,RCX
/* 0519ea05 */  SETNZ CL
/* 0519ea08 */  LEA RDX,[0x12229df]
/* 0519ea0f */  SUB RAX,RDX
/* 0519ea12 */  CMP RAX,-0x1
/* 0519ea16 */  SETNZ AL
/* 0519ea19 */  TEST CL,AL
/* 0519ea1b */  JNZ 0x051a5975
/* 0519ea21 */  LEA RAX,[0x13abf4c]
/* 0519ea28 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519ea2d */  LEA RAX,[0x12229df]
/* 0519ea34 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519ea39 */  LEA RSI,[0x11ed16e]
/* 0519ea40 */  LEA RDI,[RSP + 0x10]
/* 0519ea45 */  LEA R8,[RSP + 0x30]
/* 0519ea4a */  MOV EDX,0x5
/* 0519ea4f */  MOV ECX,0xcc
/* 0519ea54 */  LEA R14,[RSP + 0x2a0]
/* 0519ea5c */  CALL 0x0470d9a0
/* 0519ea61 */  LEA RSI,[0x12229df]
/* 0519ea68 */  LEA RCX,[RSP + 0x10]
/* 0519ea6d */  MOV EDX,0x1d
/* 0519ea72 */  LEA RDI,[RSP + 0x2a0]
/* 0519ea7a */  CALL 0x0d337b80
/* 0519ea7f */  TEST byte ptr [RSP + 0x10],0x1
/* 0519ea84 */  JZ 0x0519ea99
/* 0519ea86 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519ea8b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519ea90 */  AND RSI,-0x2
/* 0519ea94 */  CALL 0x0412a280
/* 0519ea99 */  MOV dword ptr [RSP + 0x2d0],0x1
/* 0519eaa4 */  LEA RBP,[RSP + 0x2e0]
/* 0519eaac */  LEA RBX,[0x1479423]
/* 0519eab3 */  MOV EDX,0x1d
/* 0519eab8 */  MOV RAX,RBX
/* 0519eabb */  NOP dword ptr [RAX + RAX*0x1]
/* 0519eac0 */  MOV RDI,RAX
/* 0519eac3 */  MOV ESI,0x3a
/* 0519eac8 */  CALL 0x0eee2ef0
/* 0519eacd */  TEST RAX,RAX
/* 0519ead0 */  JZ 0x0519eb11
/* 0519ead2 */  CMP byte ptr [RAX],0x3a
/* 0519ead5 */  JZ 0x0519eaeb
/* 0519ead7 */  INC RAX
/* 0519eada */  MOV RDX,RBX
/* 0519eadd */  SUB RDX,RAX
/* 0519eae0 */  ADD RDX,0x1d
/* 0519eae4 */  TEST RDX,RDX
/* 0519eae7 */  JG 0x0519eac0
/* 0519eae9 */  JMP 0x0519eb11
/* 0519eaeb */  LEA RCX,[0x1479440]
/* 0519eaf2 */  CMP RAX,RCX
/* 0519eaf5 */  SETNZ CL
/* 0519eaf8 */  LEA RDX,[0x1479423]
/* 0519eaff */  SUB RAX,RDX
/* 0519eb02 */  CMP RAX,-0x1
/* 0519eb06 */  SETNZ AL
/* 0519eb09 */  TEST CL,AL
/* 0519eb0b */  JNZ 0x051a59d4
/* 0519eb11 */  LEA RAX,[0x13abf4c]
/* 0519eb18 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519eb1d */  LEA RAX,[0x1479423]
/* 0519eb24 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519eb29 */  LEA RSI,[0x11ed16e]
/* 0519eb30 */  LEA RDI,[RSP + 0x10]
/* 0519eb35 */  LEA R8,[RSP + 0x30]
/* 0519eb3a */  MOV EDX,0x5
/* 0519eb3f */  MOV ECX,0xcc
/* 0519eb44 */  MOV R14,RBP
/* 0519eb47 */  CALL 0x0470d9a0
/* 0519eb4c */  LEA RSI,[0x1479423]
/* 0519eb53 */  LEA RCX,[RSP + 0x10]
/* 0519eb58 */  MOV EDX,0x1d
/* 0519eb5d */  MOV RDI,RBP
/* 0519eb60 */  CALL 0x0d337b80
/* 0519eb65 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519eb6a */  JZ 0x0519eb7f
/* 0519eb6c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519eb71 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519eb76 */  AND RSI,-0x2
/* 0519eb7a */  CALL 0x0412a280
/* 0519eb7f */  MOV dword ptr [RSP + 0x310],0x1
/* 0519eb8a */  LEA R13,[RSP + 0x320]
/* 0519eb92 */  LEA RBX,[0x12f1db5]
/* 0519eb99 */  MOV EDX,0x1d
/* 0519eb9e */  MOV RAX,RBX
/* 0519eba1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519ebb0 */  MOV RDI,RAX
/* 0519ebb3 */  MOV ESI,0x3a
/* 0519ebb8 */  CALL 0x0eee2ef0
/* 0519ebbd */  TEST RAX,RAX
/* 0519ebc0 */  JZ 0x0519ec01
/* 0519ebc2 */  CMP byte ptr [RAX],0x3a
/* 0519ebc5 */  JZ 0x0519ebdb
/* 0519ebc7 */  INC RAX
/* 0519ebca */  MOV RDX,RBX
/* 0519ebcd */  SUB RDX,RAX
/* 0519ebd0 */  ADD RDX,0x1d
/* 0519ebd4 */  TEST RDX,RDX
/* 0519ebd7 */  JG 0x0519ebb0
/* 0519ebd9 */  JMP 0x0519ec01
/* 0519ebdb */  LEA RCX,[0x12f1dd2]
/* 0519ebe2 */  CMP RAX,RCX
/* 0519ebe5 */  SETNZ CL
/* 0519ebe8 */  LEA RDX,[0x12f1db5]
/* 0519ebef */  SUB RAX,RDX
/* 0519ebf2 */  CMP RAX,-0x1
/* 0519ebf6 */  SETNZ AL
/* 0519ebf9 */  TEST CL,AL
/* 0519ebfb */  JNZ 0x051a5a2e
/* 0519ec01 */  LEA RAX,[0x13abf4c]
/* 0519ec08 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519ec0d */  LEA RAX,[0x12f1db5]
/* 0519ec14 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519ec19 */  LEA RSI,[0x11ed16e]
/* 0519ec20 */  LEA RDI,[RSP + 0x10]
/* 0519ec25 */  LEA R8,[RSP + 0x30]
/* 0519ec2a */  MOV EDX,0x5
/* 0519ec2f */  MOV ECX,0xcc
/* 0519ec34 */  MOV R14,R13
/* 0519ec37 */  CALL 0x0470d9a0
/* 0519ec3c */  LEA RSI,[0x12f1db5]
/* 0519ec43 */  LEA RCX,[RSP + 0x10]
/* 0519ec48 */  MOV EDX,0x1d
/* 0519ec4d */  MOV RDI,R13
/* 0519ec50 */  CALL 0x0d337b80
/* 0519ec55 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519ec5a */  JZ 0x0519ec6f
/* 0519ec5c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519ec61 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519ec66 */  AND RSI,-0x2
/* 0519ec6a */  CALL 0x0412a280
/* 0519ec6f */  MOV dword ptr [RSP + 0x350],0x1
/* 0519ec7a */  LEA R14,[RSP + 0x360]
/* 0519ec82 */  LEA RBX,[0x1447f88]
/* 0519ec89 */  MOV EDX,0x1b
/* 0519ec8e */  MOV RAX,RBX
/* 0519ec91 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519eca0 */  MOV RDI,RAX
/* 0519eca3 */  MOV ESI,0x3a
/* 0519eca8 */  CALL 0x0eee2ef0
/* 0519ecad */  TEST RAX,RAX
/* 0519ecb0 */  JZ 0x0519ecf1
/* 0519ecb2 */  CMP byte ptr [RAX],0x3a
/* 0519ecb5 */  JZ 0x0519eccb
/* 0519ecb7 */  INC RAX
/* 0519ecba */  MOV RDX,RBX
/* 0519ecbd */  SUB RDX,RAX
/* 0519ecc0 */  ADD RDX,0x1b
/* 0519ecc4 */  TEST RDX,RDX
/* 0519ecc7 */  JG 0x0519eca0
/* 0519ecc9 */  JMP 0x0519ecf1
/* 0519eccb */  LEA RCX,[0x1447fa3]
/* 0519ecd2 */  CMP RAX,RCX
/* 0519ecd5 */  SETNZ CL
/* 0519ecd8 */  LEA RDX,[0x1447f88]
/* 0519ecdf */  SUB RAX,RDX
/* 0519ece2 */  CMP RAX,-0x1
/* 0519ece6 */  SETNZ AL
/* 0519ece9 */  TEST CL,AL
/* 0519eceb */  JNZ 0x051a5a88
/* 0519ecf1 */  LEA RAX,[0x13abf4c]
/* 0519ecf8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519ecfd */  LEA RAX,[0x1447f88]
/* 0519ed04 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519ed09 */  LEA RSI,[0x11ed16e]
/* 0519ed10 */  LEA RDI,[RSP + 0x10]
/* 0519ed15 */  LEA R8,[RSP + 0x30]
/* 0519ed1a */  MOV EDX,0x5
/* 0519ed1f */  MOV ECX,0xcc
/* 0519ed24 */  CALL 0x0470d9a0
/* 0519ed29 */  LEA RSI,[0x1447f88]
/* 0519ed30 */  LEA RCX,[RSP + 0x10]
/* 0519ed35 */  MOV EDX,0x1b
/* 0519ed3a */  MOV RDI,R14
/* 0519ed3d */  CALL 0x0d337b80
/* 0519ed42 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519ed47 */  JZ 0x0519ed5c
/* 0519ed49 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519ed4e */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519ed53 */  AND RSI,-0x2
/* 0519ed57 */  CALL 0x0412a280
/* 0519ed5c */  MOV dword ptr [RSP + 0x390],0x2
/* 0519ed67 */  MOV qword ptr [RSP + 0x68],R12
/* 0519ed6c */  MOV qword ptr [RSP + 0x70],0xc
/* 0519ed75 */  LEA RAX,[0x125833a]
/* 0519ed7c */  MOV qword ptr [RSP + 0x30],RAX
/* 0519ed81 */  MOV qword ptr [RSP + 0x38],0x14
/* 0519ed8a */  LEA RAX,[0x13df34a]
/* 0519ed91 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519ed96 */  MOV qword ptr [RSP + 0x18],0x5
/* 0519ed9f */  MOV byte ptr [RSP + 0xf],0x0
/* 0519eda4 */  LEA RDI,[RSP + 0x28]
/* 0519eda9 */  LEA RSI,[RSP + 0xe30]
/* 0519edb1 */  LEA RDX,[RSP + 0x30]
/* 0519edb6 */  LEA RCX,[RSP + 0x10]
/* 0519edbb */  LEA R8,[RSP + 0xf]
/* 0519edc0 */  LEA R9,[RSP + 0x68]
/* 0519edc5 */  CALL 0x0d33dd60
/* 0519edca */  LEA RSI,[RSP + 0x28]
/* 0519edcf */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519edd4 */  CALL 0x0d3301c0
/* 0519edd9 */  MOV RBX,qword ptr [RSP + 0x28]
/* 0519edde */  MOV qword ptr [RSP + 0x28],0x0
/* 0519ede7 */  TEST RBX,RBX
/* 0519edea */  JZ 0x0519ee3e
/* 0519edec */  TEST byte ptr [RBX + 0x30],0x1
/* 0519edf0 */  JZ 0x0519ee03
/* 0519edf2 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0519edf6 */  MOV RDI,qword ptr [RBX + 0x40]
/* 0519edfa */  AND RSI,-0x2
/* 0519edfe */  CALL 0x0412a280
/* 0519ee03 */  MOV RDI,qword ptr [RBX + 0x18]
/* 0519ee07 */  TEST RDI,RDI
/* 0519ee0a */  JZ 0x0519ee1c
/* 0519ee0c */  MOV qword ptr [RBX + 0x20],RDI
/* 0519ee10 */  MOV RSI,qword ptr [RBX + 0x28]
/* 0519ee14 */  SUB RSI,RDI
/* 0519ee17 */  CALL 0x0412a280
/* 0519ee1c */  TEST byte ptr [RBX],0x1
/* 0519ee1f */  JZ 0x0519ee31
/* 0519ee21 */  MOV RSI,qword ptr [RBX]
/* 0519ee24 */  MOV RDI,qword ptr [RBX + 0x10]
/* 0519ee28 */  AND RSI,-0x2
/* 0519ee2c */  CALL 0x0412a280
/* 0519ee31 */  MOV ESI,0x48
/* 0519ee36 */  MOV RDI,RBX
/* 0519ee39 */  CALL 0x0412a280
/* 0519ee3e */  MOV RDI,qword ptr [RSP + 0x380]
/* 0519ee46 */  CMP RDI,R14
/* 0519ee49 */  JZ 0x0519f00a
/* 0519ee4f */  MOV EAX,0x28
/* 0519ee54 */  TEST RDI,RDI
/* 0519ee57 */  JNZ 0x0519f00f
/* 0519ee5d */  MOV RDI,qword ptr [RSP + 0x340]
/* 0519ee65 */  CMP RDI,R13
/* 0519ee68 */  JZ 0x0519f026
/* 0519ee6e */  MOV EAX,0x28
/* 0519ee73 */  TEST RDI,RDI
/* 0519ee76 */  JNZ 0x0519f02b
/* 0519ee7c */  MOV RDI,qword ptr [RSP + 0x300]
/* 0519ee84 */  CMP RDI,RBP
/* 0519ee87 */  JZ 0x0519f042
/* 0519ee8d */  MOV EAX,0x28
/* 0519ee92 */  TEST RDI,RDI
/* 0519ee95 */  JNZ 0x0519f047
/* 0519ee9b */  MOV RDI,qword ptr [RSP + 0x2c0]
/* 0519eea3 */  LEA RAX,[RSP + 0x2a0]
/* 0519eeab */  CMP RDI,RAX
/* 0519eeae */  JZ 0x0519f066
/* 0519eeb4 */  MOV EAX,0x28
/* 0519eeb9 */  TEST RDI,RDI
/* 0519eebc */  JNZ 0x0519f06b
/* 0519eec2 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0519eeca */  LEA RAX,[RSP + 0x260]
/* 0519eed2 */  CMP RDI,RAX
/* 0519eed5 */  JZ 0x0519f08a
/* 0519eedb */  MOV EAX,0x28
/* 0519eee0 */  TEST RDI,RDI
/* 0519eee3 */  JNZ 0x0519f08f
/* 0519eee9 */  MOV RDI,qword ptr [RSP + 0x240]
/* 0519eef1 */  LEA RAX,[RSP + 0x220]
/* 0519eef9 */  CMP RDI,RAX
/* 0519eefc */  JZ 0x0519f0ae
/* 0519ef02 */  MOV EAX,0x28
/* 0519ef07 */  TEST RDI,RDI
/* 0519ef0a */  JNZ 0x0519f0b3
/* 0519ef10 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519ef18 */  LEA RAX,[RSP + 0x1e0]
/* 0519ef20 */  CMP RDI,RAX
/* 0519ef23 */  JZ 0x0519f0d2
/* 0519ef29 */  MOV EAX,0x28
/* 0519ef2e */  TEST RDI,RDI
/* 0519ef31 */  JNZ 0x0519f0d7
/* 0519ef37 */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519ef3f */  LEA RAX,[RSP + 0x1a0]
/* 0519ef47 */  CMP RDI,RAX
/* 0519ef4a */  JZ 0x0519f0f6
/* 0519ef50 */  MOV EAX,0x28
/* 0519ef55 */  TEST RDI,RDI
/* 0519ef58 */  JNZ 0x0519f0fb
/* 0519ef5e */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519ef66 */  LEA RAX,[RSP + 0x160]
/* 0519ef6e */  CMP RDI,RAX
/* 0519ef71 */  JZ 0x0519f11a
/* 0519ef77 */  MOV EAX,0x28
/* 0519ef7c */  TEST RDI,RDI
/* 0519ef7f */  JNZ 0x0519f11f
/* 0519ef85 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519ef8d */  LEA RAX,[RSP + 0x120]
/* 0519ef95 */  CMP RDI,RAX
/* 0519ef98 */  JZ 0x0519f13e
/* 0519ef9e */  MOV EAX,0x28
/* 0519efa3 */  TEST RDI,RDI
/* 0519efa6 */  JNZ 0x0519f143
/* 0519efac */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519efb4 */  CMP RDI,R15
/* 0519efb7 */  JZ 0x0519f15a
/* 0519efbd */  MOV EAX,0x28
/* 0519efc2 */  TEST RDI,RDI
/* 0519efc5 */  JNZ 0x0519f15f
/* 0519efcb */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519efd3 */  CMP RDI,R12
/* 0519efd6 */  JZ 0x0519f176
/* 0519efdc */  MOV EAX,0x28
/* 0519efe1 */  TEST RDI,RDI
/* 0519efe4 */  JNZ 0x0519f17b
/* 0519efea */  MOV RSI,qword ptr [RSP + 0xe68]
/* 0519eff2 */  MOV RAX,0x80000000000000
/* 0519effc */  TEST RSI,RAX
/* 0519efff */  JNZ 0x0519f198
/* 0519f005 */  JMP 0x0519f1ba
/* 0519f00a */  MOV EAX,0x20
/* 0519f00f */  MOV RCX,qword ptr [RDI]
/* 0519f012 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f015 */  MOV RDI,qword ptr [RSP + 0x340]
/* 0519f01d */  CMP RDI,R13
/* 0519f020 */  JNZ 0x0519ee6e
/* 0519f026 */  MOV EAX,0x20
/* 0519f02b */  MOV RCX,qword ptr [RDI]
/* 0519f02e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f031 */  MOV RDI,qword ptr [RSP + 0x300]
/* 0519f039 */  CMP RDI,RBP
/* 0519f03c */  JNZ 0x0519ee8d
/* 0519f042 */  MOV EAX,0x20
/* 0519f047 */  MOV RCX,qword ptr [RDI]
/* 0519f04a */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f04d */  MOV RDI,qword ptr [RSP + 0x2c0]
/* 0519f055 */  LEA RAX,[RSP + 0x2a0]
/* 0519f05d */  CMP RDI,RAX
/* 0519f060 */  JNZ 0x0519eeb4
/* 0519f066 */  MOV EAX,0x20
/* 0519f06b */  MOV RCX,qword ptr [RDI]
/* 0519f06e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f071 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0519f079 */  LEA RAX,[RSP + 0x260]
/* 0519f081 */  CMP RDI,RAX
/* 0519f084 */  JNZ 0x0519eedb
/* 0519f08a */  MOV EAX,0x20
/* 0519f08f */  MOV RCX,qword ptr [RDI]
/* 0519f092 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f095 */  MOV RDI,qword ptr [RSP + 0x240]
/* 0519f09d */  LEA RAX,[RSP + 0x220]
/* 0519f0a5 */  CMP RDI,RAX
/* 0519f0a8 */  JNZ 0x0519ef02
/* 0519f0ae */  MOV EAX,0x20
/* 0519f0b3 */  MOV RCX,qword ptr [RDI]
/* 0519f0b6 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f0b9 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0519f0c1 */  LEA RAX,[RSP + 0x1e0]
/* 0519f0c9 */  CMP RDI,RAX
/* 0519f0cc */  JNZ 0x0519ef29
/* 0519f0d2 */  MOV EAX,0x20
/* 0519f0d7 */  MOV RCX,qword ptr [RDI]
/* 0519f0da */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f0dd */  MOV RDI,qword ptr [RSP + 0x1c0]
/* 0519f0e5 */  LEA RAX,[RSP + 0x1a0]
/* 0519f0ed */  CMP RDI,RAX
/* 0519f0f0 */  JNZ 0x0519ef50
/* 0519f0f6 */  MOV EAX,0x20
/* 0519f0fb */  MOV RCX,qword ptr [RDI]
/* 0519f0fe */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f101 */  MOV RDI,qword ptr [RSP + 0x180]
/* 0519f109 */  LEA RAX,[RSP + 0x160]
/* 0519f111 */  CMP RDI,RAX
/* 0519f114 */  JNZ 0x0519ef77
/* 0519f11a */  MOV EAX,0x20
/* 0519f11f */  MOV RCX,qword ptr [RDI]
/* 0519f122 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f125 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519f12d */  LEA RAX,[RSP + 0x120]
/* 0519f135 */  CMP RDI,RAX
/* 0519f138 */  JNZ 0x0519ef9e
/* 0519f13e */  MOV EAX,0x20
/* 0519f143 */  MOV RCX,qword ptr [RDI]
/* 0519f146 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f149 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519f151 */  CMP RDI,R15
/* 0519f154 */  JNZ 0x0519efbd
/* 0519f15a */  MOV EAX,0x20
/* 0519f15f */  MOV RCX,qword ptr [RDI]
/* 0519f162 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f165 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519f16d */  CMP RDI,R12
/* 0519f170 */  JNZ 0x0519efdc
/* 0519f176 */  MOV EAX,0x20
/* 0519f17b */  MOV RCX,qword ptr [RDI]
/* 0519f17e */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f181 */  MOV RSI,qword ptr [RSP + 0xe68]
/* 0519f189 */  MOV RAX,0x80000000000000
/* 0519f193 */  TEST RSI,RAX
/* 0519f196 */  JZ 0x0519f1ba
/* 0519f198 */  MOV RAX,-0xff000000000001
/* 0519f1a2 */  AND RSI,RAX
/* 0519f1a5 */  ADD RSI,-0x8
/* 0519f1a9 */  LEA RDI,[0xf5463b0]
/* 0519f1b0 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519f1b7 */  CALL qword ptr [RAX + 0x28]
/* 0519f1ba */  MOV qword ptr [RSP + 0xe68],0x0
/* 0519f1c6 */  MOV RSI,qword ptr [RSP + 0xe60]
/* 0519f1ce */  MOV RAX,0x80000000000000
/* 0519f1d8 */  TEST RSI,RAX
/* 0519f1db */  JZ 0x0519f1ff
/* 0519f1dd */  MOV RAX,-0xff000000000001
/* 0519f1e7 */  AND RSI,RAX
/* 0519f1ea */  ADD RSI,-0x8
/* 0519f1ee */  LEA RDI,[0xf5463b0]
/* 0519f1f5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519f1fc */  CALL qword ptr [RAX + 0x28]
/* 0519f1ff */  MOV qword ptr [RSP + 0xe60],0x0
/* 0519f20b */  XORPS XMM0,XMM0
/* 0519f20e */  MOV RBX,qword ptr [RSP + 0xe38]
/* 0519f216 */  MOVAPS xmmword ptr [RSP + 0xe30],XMM0
/* 0519f21e */  TEST RBX,RBX
/* 0519f221 */  JZ 0x0519f284
/* 0519f223 */  MOV RAX,-0x1
/* 0519f22a */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519f230 */  TEST RAX,RAX
/* 0519f233 */  JNZ 0x0519f246
/* 0519f235 */  MOV RAX,qword ptr [RBX]
/* 0519f238 */  MOV RDI,RBX
/* 0519f23b */  CALL qword ptr [RAX + 0x10]
/* 0519f23e */  MOV RDI,RBX
/* 0519f241 */  CALL 0x0412c2d0
/* 0519f246 */  MOV RBX,qword ptr [RSP + 0xe38]
/* 0519f24e */  MOV qword ptr [RSP + 0xe40],0x0
/* 0519f25a */  TEST RBX,RBX
/* 0519f25d */  JZ 0x0519f290
/* 0519f25f */  MOV RAX,-0x1
/* 0519f266 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519f26c */  TEST RAX,RAX
/* 0519f26f */  JNZ 0x0519f290
/* 0519f271 */  MOV RAX,qword ptr [RBX]
/* 0519f274 */  MOV RDI,RBX
/* 0519f277 */  CALL qword ptr [RAX + 0x10]
/* 0519f27a */  MOV RDI,RBX
/* 0519f27d */  CALL 0x0412c2d0
/* 0519f282 */  JMP 0x0519f290
/* 0519f284 */  MOV qword ptr [RSP + 0xe40],0x0
/* 0519f290 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519f295 */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519f299 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519f29c */  MOVAPS xmmword ptr [RSP + 0xde0],XMM0
/* 0519f2a4 */  TEST RAX,RAX
/* 0519f2a7 */  JZ 0x0519f2ae
/* 0519f2a9 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519f2ae */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519f2b3 */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519f2b7 */  MOV qword ptr [RSP + 0xdf0],RAX
/* 0519f2bf */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519f2c7 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519f2ca */  MOVUPS xmmword ptr [RSP + 0xdf8],XMM0
/* 0519f2d2 */  LEA RDI,[RSP + 0xe08]
/* 0519f2da */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519f2e2 */  CALL 0x0d88e390
/* 0519f2e7 */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519f2eb */  MOV qword ptr [RSP + 0xe28],RAX
/* 0519f2f3 */  LEA RBX,[0x12a47ed]
/* 0519f2fa */  MOV EDX,0x27
/* 0519f2ff */  MOV RAX,RBX
/* 0519f302 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0519f310 */  MOV RDI,RAX
/* 0519f313 */  MOV ESI,0x3a
/* 0519f318 */  CALL 0x0eee2ef0
/* 0519f31d */  TEST RAX,RAX
/* 0519f320 */  JZ 0x0519f361
/* 0519f322 */  CMP byte ptr [RAX],0x3a
/* 0519f325 */  JZ 0x0519f33b
/* 0519f327 */  INC RAX
/* 0519f32a */  MOV RDX,RBX
/* 0519f32d */  SUB RDX,RAX
/* 0519f330 */  ADD RDX,0x27
/* 0519f334 */  TEST RDX,RDX
/* 0519f337 */  JG 0x0519f310
/* 0519f339 */  JMP 0x0519f361
/* 0519f33b */  LEA RCX,[0x12a4814]
/* 0519f342 */  CMP RAX,RCX
/* 0519f345 */  SETNZ CL
/* 0519f348 */  LEA RDX,[0x12a47ed]
/* 0519f34f */  SUB RAX,RDX
/* 0519f352 */  CMP RAX,-0x1
/* 0519f356 */  SETNZ AL
/* 0519f359 */  TEST CL,AL
/* 0519f35b */  JNZ 0x051a5adf
/* 0519f361 */  LEA RAX,[0x13abf4c]
/* 0519f368 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519f36d */  LEA RAX,[0x12a47ed]
/* 0519f374 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519f379 */  LEA RSI,[0x11ed16e]
/* 0519f380 */  LEA RDI,[RSP + 0x10]
/* 0519f385 */  LEA R8,[RSP + 0x30]
/* 0519f38a */  MOV EDX,0x5
/* 0519f38f */  MOV ECX,0xcc
/* 0519f394 */  CALL 0x0470d9a0
/* 0519f399 */  LEA RSI,[0x12a47ed]
/* 0519f3a0 */  LEA R15,[RSP + 0xa0]
/* 0519f3a8 */  LEA RCX,[RSP + 0x10]
/* 0519f3ad */  MOV EDX,0x27
/* 0519f3b2 */  MOV RDI,R15
/* 0519f3b5 */  CALL 0x0d337b80
/* 0519f3ba */  TEST byte ptr [RSP + 0x10],0x1
/* 0519f3bf */  JZ 0x0519f3d4
/* 0519f3c1 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519f3c6 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519f3cb */  AND RSI,-0x2
/* 0519f3cf */  CALL 0x0412a280
/* 0519f3d4 */  MOV dword ptr [RSP + 0xd0],0x1
/* 0519f3df */  LEA R14,[RSP + 0xe0]
/* 0519f3e7 */  LEA RBX,[0x119d031]
/* 0519f3ee */  MOV EDX,0x27
/* 0519f3f3 */  MOV RAX,RBX
/* 0519f3f6 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0519f400 */  MOV RDI,RAX
/* 0519f403 */  MOV ESI,0x3a
/* 0519f408 */  CALL 0x0eee2ef0
/* 0519f40d */  TEST RAX,RAX
/* 0519f410 */  JZ 0x0519f451
/* 0519f412 */  CMP byte ptr [RAX],0x3a
/* 0519f415 */  JZ 0x0519f42b
/* 0519f417 */  INC RAX
/* 0519f41a */  MOV RDX,RBX
/* 0519f41d */  SUB RDX,RAX
/* 0519f420 */  ADD RDX,0x27
/* 0519f424 */  TEST RDX,RDX
/* 0519f427 */  JG 0x0519f400
/* 0519f429 */  JMP 0x0519f451
/* 0519f42b */  LEA RCX,[0x119d058]
/* 0519f432 */  CMP RAX,RCX
/* 0519f435 */  SETNZ CL
/* 0519f438 */  LEA RDX,[0x119d031]
/* 0519f43f */  SUB RAX,RDX
/* 0519f442 */  CMP RAX,-0x1
/* 0519f446 */  SETNZ AL
/* 0519f449 */  TEST CL,AL
/* 0519f44b */  JNZ 0x051a5b44
/* 0519f451 */  LEA RAX,[0x13abf4c]
/* 0519f458 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519f45d */  LEA RAX,[0x119d031]
/* 0519f464 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519f469 */  LEA RSI,[0x11ed16e]
/* 0519f470 */  LEA RDI,[RSP + 0x10]
/* 0519f475 */  LEA R8,[RSP + 0x30]
/* 0519f47a */  MOV EDX,0x5
/* 0519f47f */  MOV ECX,0xcc
/* 0519f484 */  MOV R12,R14
/* 0519f487 */  CALL 0x0470d9a0
/* 0519f48c */  LEA RSI,[0x119d031]
/* 0519f493 */  LEA RCX,[RSP + 0x10]
/* 0519f498 */  MOV EDX,0x27
/* 0519f49d */  MOV RDI,R14
/* 0519f4a0 */  CALL 0x0d337b80
/* 0519f4a5 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519f4aa */  JZ 0x0519f4bf
/* 0519f4ac */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519f4b1 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519f4b6 */  AND RSI,-0x2
/* 0519f4ba */  CALL 0x0412a280
/* 0519f4bf */  MOV dword ptr [RSP + 0x110],0x1
/* 0519f4ca */  LEA R12,[RSP + 0x120]
/* 0519f4d2 */  LEA RBX,[0x1447fa4]
/* 0519f4d9 */  MOV EDX,0x27
/* 0519f4de */  MOV RAX,RBX
/* 0519f4e1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0519f4f0 */  MOV RDI,RAX
/* 0519f4f3 */  MOV ESI,0x3a
/* 0519f4f8 */  CALL 0x0eee2ef0
/* 0519f4fd */  TEST RAX,RAX
/* 0519f500 */  JZ 0x0519f541
/* 0519f502 */  CMP byte ptr [RAX],0x3a
/* 0519f505 */  JZ 0x0519f51b
/* 0519f507 */  INC RAX
/* 0519f50a */  MOV RDX,RBX
/* 0519f50d */  SUB RDX,RAX
/* 0519f510 */  ADD RDX,0x27
/* 0519f514 */  TEST RDX,RDX
/* 0519f517 */  JG 0x0519f4f0
/* 0519f519 */  JMP 0x0519f541
/* 0519f51b */  LEA RCX,[0x1447fcb]
/* 0519f522 */  CMP RAX,RCX
/* 0519f525 */  SETNZ CL
/* 0519f528 */  LEA RDX,[0x1447fa4]
/* 0519f52f */  SUB RAX,RDX
/* 0519f532 */  CMP RAX,-0x1
/* 0519f536 */  SETNZ AL
/* 0519f539 */  TEST CL,AL
/* 0519f53b */  JNZ 0x051a5bac
/* 0519f541 */  LEA RAX,[0x13abf4c]
/* 0519f548 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519f54d */  LEA RAX,[0x1447fa4]
/* 0519f554 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519f559 */  LEA RSI,[0x11ed16e]
/* 0519f560 */  LEA RDI,[RSP + 0x10]
/* 0519f565 */  LEA R8,[RSP + 0x30]
/* 0519f56a */  MOV EDX,0x5
/* 0519f56f */  MOV ECX,0xcc
/* 0519f574 */  CALL 0x0470d9a0
/* 0519f579 */  LEA RSI,[0x1447fa4]
/* 0519f580 */  LEA RCX,[RSP + 0x10]
/* 0519f585 */  MOV EDX,0x27
/* 0519f58a */  MOV RDI,R12
/* 0519f58d */  CALL 0x0d337b80
/* 0519f592 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519f597 */  JZ 0x0519f5ac
/* 0519f599 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519f59e */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519f5a3 */  AND RSI,-0x2
/* 0519f5a7 */  CALL 0x0412a280
/* 0519f5ac */  MOV dword ptr [RSP + 0x150],0x1
/* 0519f5b7 */  MOV qword ptr [RSP + 0x68],R15
/* 0519f5bc */  MOV qword ptr [RSP + 0x70],0x3
/* 0519f5c5 */  LEA RAX,[0x12d74e7]
/* 0519f5cc */  MOV qword ptr [RSP + 0x30],RAX
/* 0519f5d1 */  MOV qword ptr [RSP + 0x38],0x17
/* 0519f5da */  LEA RAX,[0x13df34a]
/* 0519f5e1 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519f5e6 */  MOV qword ptr [RSP + 0x18],0x5
/* 0519f5ef */  MOV byte ptr [RSP + 0xf],0x0
/* 0519f5f4 */  LEA RDI,[RSP + 0x28]
/* 0519f5f9 */  LEA RSI,[RSP + 0xde0]
/* 0519f601 */  LEA RDX,[RSP + 0x30]
/* 0519f606 */  LEA RCX,[RSP + 0x10]
/* 0519f60b */  LEA R8,[RSP + 0xf]
/* 0519f610 */  LEA R9,[RSP + 0x68]
/* 0519f615 */  CALL 0x0d33dd60
/* 0519f61a */  LEA RSI,[RSP + 0x28]
/* 0519f61f */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519f624 */  CALL 0x0d3301c0
/* 0519f629 */  MOV RBX,qword ptr [RSP + 0x28]
/* 0519f62e */  MOV qword ptr [RSP + 0x28],0x0
/* 0519f637 */  TEST RBX,RBX
/* 0519f63a */  JZ 0x0519f68e
/* 0519f63c */  TEST byte ptr [RBX + 0x30],0x1
/* 0519f640 */  JZ 0x0519f653
/* 0519f642 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0519f646 */  MOV RDI,qword ptr [RBX + 0x40]
/* 0519f64a */  AND RSI,-0x2
/* 0519f64e */  CALL 0x0412a280
/* 0519f653 */  MOV RDI,qword ptr [RBX + 0x18]
/* 0519f657 */  TEST RDI,RDI
/* 0519f65a */  JZ 0x0519f66c
/* 0519f65c */  MOV qword ptr [RBX + 0x20],RDI
/* 0519f660 */  MOV RSI,qword ptr [RBX + 0x28]
/* 0519f664 */  SUB RSI,RDI
/* 0519f667 */  CALL 0x0412a280
/* 0519f66c */  TEST byte ptr [RBX],0x1
/* 0519f66f */  JZ 0x0519f681
/* 0519f671 */  MOV RSI,qword ptr [RBX]
/* 0519f674 */  MOV RDI,qword ptr [RBX + 0x10]
/* 0519f678 */  AND RSI,-0x2
/* 0519f67c */  CALL 0x0412a280
/* 0519f681 */  MOV ESI,0x48
/* 0519f686 */  MOV RDI,RBX
/* 0519f689 */  CALL 0x0412a280
/* 0519f68e */  MOV RDI,qword ptr [RSP + 0x140]
/* 0519f696 */  CMP RDI,R12
/* 0519f699 */  JZ 0x0519f6ec
/* 0519f69b */  MOV EAX,0x28
/* 0519f6a0 */  TEST RDI,RDI
/* 0519f6a3 */  JNZ 0x0519f6f1
/* 0519f6a5 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519f6ad */  CMP RDI,R14
/* 0519f6b0 */  JZ 0x0519f704
/* 0519f6b2 */  MOV EAX,0x28
/* 0519f6b7 */  TEST RDI,RDI
/* 0519f6ba */  JNZ 0x0519f709
/* 0519f6bc */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519f6c4 */  CMP RDI,R15
/* 0519f6c7 */  JZ 0x0519f71c
/* 0519f6c9 */  MOV EAX,0x28
/* 0519f6ce */  TEST RDI,RDI
/* 0519f6d1 */  JNZ 0x0519f721
/* 0519f6d3 */  MOV RSI,qword ptr [RSP + 0xe18]
/* 0519f6db */  MOV RAX,0x80000000000000
/* 0519f6e5 */  TEST RSI,RAX
/* 0519f6e8 */  JNZ 0x0519f73e
/* 0519f6ea */  JMP 0x0519f760
/* 0519f6ec */  MOV EAX,0x20
/* 0519f6f1 */  MOV RCX,qword ptr [RDI]
/* 0519f6f4 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f6f7 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519f6ff */  CMP RDI,R14
/* 0519f702 */  JNZ 0x0519f6b2
/* 0519f704 */  MOV EAX,0x20
/* 0519f709 */  MOV RCX,qword ptr [RDI]
/* 0519f70c */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f70f */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519f717 */  CMP RDI,R15
/* 0519f71a */  JNZ 0x0519f6c9
/* 0519f71c */  MOV EAX,0x20
/* 0519f721 */  MOV RCX,qword ptr [RDI]
/* 0519f724 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519f727 */  MOV RSI,qword ptr [RSP + 0xe18]
/* 0519f72f */  MOV RAX,0x80000000000000
/* 0519f739 */  TEST RSI,RAX
/* 0519f73c */  JZ 0x0519f760
/* 0519f73e */  MOV RAX,-0xff000000000001
/* 0519f748 */  AND RSI,RAX
/* 0519f74b */  ADD RSI,-0x8
/* 0519f74f */  LEA RDI,[0xf5463b0]
/* 0519f756 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519f75d */  CALL qword ptr [RAX + 0x28]
/* 0519f760 */  MOV qword ptr [RSP + 0xe18],0x0
/* 0519f76c */  MOV RSI,qword ptr [RSP + 0xe10]
/* 0519f774 */  MOV RAX,0x80000000000000
/* 0519f77e */  TEST RSI,RAX
/* 0519f781 */  JZ 0x0519f7a5
/* 0519f783 */  MOV RAX,-0xff000000000001
/* 0519f78d */  AND RSI,RAX
/* 0519f790 */  ADD RSI,-0x8
/* 0519f794 */  LEA RDI,[0xf5463b0]
/* 0519f79b */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519f7a2 */  CALL qword ptr [RAX + 0x28]
/* 0519f7a5 */  MOV qword ptr [RSP + 0xe10],0x0
/* 0519f7b1 */  XORPS XMM0,XMM0
/* 0519f7b4 */  MOV RBX,qword ptr [RSP + 0xde8]
/* 0519f7bc */  MOVAPS xmmword ptr [RSP + 0xde0],XMM0
/* 0519f7c4 */  TEST RBX,RBX
/* 0519f7c7 */  JZ 0x0519f82a
/* 0519f7c9 */  MOV RAX,-0x1
/* 0519f7d0 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519f7d6 */  TEST RAX,RAX
/* 0519f7d9 */  JNZ 0x0519f7ec
/* 0519f7db */  MOV RAX,qword ptr [RBX]
/* 0519f7de */  MOV RDI,RBX
/* 0519f7e1 */  CALL qword ptr [RAX + 0x10]
/* 0519f7e4 */  MOV RDI,RBX
/* 0519f7e7 */  CALL 0x0412c2d0
/* 0519f7ec */  MOV RBX,qword ptr [RSP + 0xde8]
/* 0519f7f4 */  MOV qword ptr [RSP + 0xdf0],0x0
/* 0519f800 */  TEST RBX,RBX
/* 0519f803 */  JZ 0x0519f836
/* 0519f805 */  MOV RAX,-0x1
/* 0519f80c */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519f812 */  TEST RAX,RAX
/* 0519f815 */  JNZ 0x0519f836
/* 0519f817 */  MOV RAX,qword ptr [RBX]
/* 0519f81a */  MOV RDI,RBX
/* 0519f81d */  CALL qword ptr [RAX + 0x10]
/* 0519f820 */  MOV RDI,RBX
/* 0519f823 */  CALL 0x0412c2d0
/* 0519f828 */  JMP 0x0519f836
/* 0519f82a */  MOV qword ptr [RSP + 0xdf0],0x0
/* 0519f836 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519f83b */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519f83f */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519f842 */  MOVAPS xmmword ptr [RSP + 0xd90],XMM0
/* 0519f84a */  TEST RAX,RAX
/* 0519f84d */  JZ 0x0519f854
/* 0519f84f */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519f854 */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519f859 */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519f85d */  MOV qword ptr [RSP + 0xda0],RAX
/* 0519f865 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519f86d */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519f870 */  MOVUPS xmmword ptr [RSP + 0xda8],XMM0
/* 0519f878 */  LEA RDI,[RSP + 0xdb8]
/* 0519f880 */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519f888 */  CALL 0x0d88e390
/* 0519f88d */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519f891 */  MOV qword ptr [RSP + 0xdd8],RAX
/* 0519f899 */  LEA RAX,[0xf460d78]
/* 0519f8a0 */  MOV qword ptr [RSP + 0xa0],RAX
/* 0519f8a8 */  MOV qword ptr [RSP + 0xc0],R15
/* 0519f8b0 */  MOV dword ptr [RSP + 0xd0],0x4
/* 0519f8bb */  LEA R12,[RSP + 0xe0]
/* 0519f8c3 */  MOV EDX,0x24
/* 0519f8c8 */  LEA RBX,[0x14793de]
/* 0519f8cf */  MOV RAX,RBX
/* 0519f8d2 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0519f8e0 */  MOV RDI,RAX
/* 0519f8e3 */  MOV ESI,0x3a
/* 0519f8e8 */  CALL 0x0eee2ef0
/* 0519f8ed */  TEST RAX,RAX
/* 0519f8f0 */  JZ 0x0519f931
/* 0519f8f2 */  CMP byte ptr [RAX],0x3a
/* 0519f8f5 */  JZ 0x0519f90b
/* 0519f8f7 */  INC RAX
/* 0519f8fa */  MOV RDX,RBX
/* 0519f8fd */  SUB RDX,RAX
/* 0519f900 */  ADD RDX,0x24
/* 0519f904 */  TEST RDX,RDX
/* 0519f907 */  JG 0x0519f8e0
/* 0519f909 */  JMP 0x0519f931
/* 0519f90b */  LEA RCX,[0x1479402]
/* 0519f912 */  CMP RAX,RCX
/* 0519f915 */  SETNZ CL
/* 0519f918 */  LEA RDX,[0x14793de]
/* 0519f91f */  SUB RAX,RDX
/* 0519f922 */  CMP RAX,-0x1
/* 0519f926 */  SETNZ AL
/* 0519f929 */  TEST CL,AL
/* 0519f92b */  JNZ 0x051a5c11
/* 0519f931 */  LEA RAX,[0x13abf4c]
/* 0519f938 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519f93d */  LEA RAX,[0x14793de]
/* 0519f944 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519f949 */  LEA RSI,[0x11ed16e]
/* 0519f950 */  LEA RDI,[RSP + 0x10]
/* 0519f955 */  LEA R8,[RSP + 0x30]
/* 0519f95a */  MOV EDX,0x5
/* 0519f95f */  MOV ECX,0xcc
/* 0519f964 */  CALL 0x0470d9a0
/* 0519f969 */  LEA RSI,[0x14793de]
/* 0519f970 */  LEA RCX,[RSP + 0x10]
/* 0519f975 */  MOV EDX,0x24
/* 0519f97a */  MOV RDI,R12
/* 0519f97d */  CALL 0x0d337b80
/* 0519f982 */  TEST byte ptr [RSP + 0x10],0x1
/* 0519f987 */  JZ 0x0519f99c
/* 0519f989 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519f98e */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519f993 */  AND RSI,-0x2
/* 0519f997 */  CALL 0x0412a280
/* 0519f99c */  MOV dword ptr [RSP + 0x110],0x1
/* 0519f9a7 */  MOV qword ptr [RSP + 0x68],R15
/* 0519f9ac */  MOV qword ptr [RSP + 0x70],0x2
/* 0519f9b5 */  LEA RAX,[0x1447fcc]
/* 0519f9bc */  MOV qword ptr [RSP + 0x30],RAX
/* 0519f9c1 */  MOV qword ptr [RSP + 0x38],0x1c
/* 0519f9ca */  LEA RAX,[0x13df34a]
/* 0519f9d1 */  MOV qword ptr [RSP + 0x10],RAX
/* 0519f9d6 */  MOV qword ptr [RSP + 0x18],0x5
/* 0519f9df */  MOV byte ptr [RSP + 0xf],0x0
/* 0519f9e4 */  LEA RDI,[RSP + 0x28]
/* 0519f9e9 */  LEA RSI,[RSP + 0xd90]
/* 0519f9f1 */  LEA RDX,[RSP + 0x30]
/* 0519f9f6 */  LEA RCX,[RSP + 0x10]
/* 0519f9fb */  LEA R8,[RSP + 0xf]
/* 0519fa00 */  LEA R9,[RSP + 0x68]
/* 0519fa05 */  CALL 0x0d33dd60
/* 0519fa0a */  LEA RSI,[RSP + 0x28]
/* 0519fa0f */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519fa14 */  CALL 0x0d3301c0
/* 0519fa19 */  MOV RBX,qword ptr [RSP + 0x28]
/* 0519fa1e */  MOV qword ptr [RSP + 0x28],0x0
/* 0519fa27 */  TEST RBX,RBX
/* 0519fa2a */  JZ 0x0519fa7e
/* 0519fa2c */  TEST byte ptr [RBX + 0x30],0x1
/* 0519fa30 */  JZ 0x0519fa43
/* 0519fa32 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0519fa36 */  MOV RDI,qword ptr [RBX + 0x40]
/* 0519fa3a */  AND RSI,-0x2
/* 0519fa3e */  CALL 0x0412a280
/* 0519fa43 */  MOV RDI,qword ptr [RBX + 0x18]
/* 0519fa47 */  TEST RDI,RDI
/* 0519fa4a */  JZ 0x0519fa5c
/* 0519fa4c */  MOV qword ptr [RBX + 0x20],RDI
/* 0519fa50 */  MOV RSI,qword ptr [RBX + 0x28]
/* 0519fa54 */  SUB RSI,RDI
/* 0519fa57 */  CALL 0x0412a280
/* 0519fa5c */  TEST byte ptr [RBX],0x1
/* 0519fa5f */  JZ 0x0519fa71
/* 0519fa61 */  MOV RSI,qword ptr [RBX]
/* 0519fa64 */  MOV RDI,qword ptr [RBX + 0x10]
/* 0519fa68 */  AND RSI,-0x2
/* 0519fa6c */  CALL 0x0412a280
/* 0519fa71 */  MOV ESI,0x48
/* 0519fa76 */  MOV RDI,RBX
/* 0519fa79 */  CALL 0x0412a280
/* 0519fa7e */  MOV RDI,qword ptr [RSP + 0x100]
/* 0519fa86 */  CMP RDI,R12
/* 0519fa89 */  JZ 0x0519fac5
/* 0519fa8b */  MOV EAX,0x28
/* 0519fa90 */  TEST RDI,RDI
/* 0519fa93 */  JNZ 0x0519faca
/* 0519fa95 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519fa9d */  CMP RDI,R15
/* 0519faa0 */  JZ 0x0519fadd
/* 0519faa2 */  MOV EAX,0x28
/* 0519faa7 */  TEST RDI,RDI
/* 0519faaa */  JNZ 0x0519fae2
/* 0519faac */  MOV RSI,qword ptr [RSP + 0xdc8]
/* 0519fab4 */  MOV RAX,0x80000000000000
/* 0519fabe */  TEST RSI,RAX
/* 0519fac1 */  JNZ 0x0519faff
/* 0519fac3 */  JMP 0x0519fb21
/* 0519fac5 */  MOV EAX,0x20
/* 0519faca */  MOV RCX,qword ptr [RDI]
/* 0519facd */  CALL qword ptr [RCX + RAX*0x1]
/* 0519fad0 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519fad8 */  CMP RDI,R15
/* 0519fadb */  JNZ 0x0519faa2
/* 0519fadd */  MOV EAX,0x20
/* 0519fae2 */  MOV RCX,qword ptr [RDI]
/* 0519fae5 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519fae8 */  MOV RSI,qword ptr [RSP + 0xdc8]
/* 0519faf0 */  MOV RAX,0x80000000000000
/* 0519fafa */  TEST RSI,RAX
/* 0519fafd */  JZ 0x0519fb21
/* 0519faff */  MOV RAX,-0xff000000000001
/* 0519fb09 */  AND RSI,RAX
/* 0519fb0c */  ADD RSI,-0x8
/* 0519fb10 */  LEA RDI,[0xf5463b0]
/* 0519fb17 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519fb1e */  CALL qword ptr [RAX + 0x28]
/* 0519fb21 */  MOV qword ptr [RSP + 0xdc8],0x0
/* 0519fb2d */  MOV RSI,qword ptr [RSP + 0xdc0]
/* 0519fb35 */  MOV RAX,0x80000000000000
/* 0519fb3f */  TEST RSI,RAX
/* 0519fb42 */  JZ 0x0519fb66
/* 0519fb44 */  MOV RAX,-0xff000000000001
/* 0519fb4e */  AND RSI,RAX
/* 0519fb51 */  ADD RSI,-0x8
/* 0519fb55 */  LEA RDI,[0xf5463b0]
/* 0519fb5c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519fb63 */  CALL qword ptr [RAX + 0x28]
/* 0519fb66 */  MOV qword ptr [RSP + 0xdc0],0x0
/* 0519fb72 */  XORPS XMM0,XMM0
/* 0519fb75 */  MOV RBX,qword ptr [RSP + 0xd98]
/* 0519fb7d */  MOVAPS xmmword ptr [RSP + 0xd90],XMM0
/* 0519fb85 */  TEST RBX,RBX
/* 0519fb88 */  JZ 0x0519fbeb
/* 0519fb8a */  MOV RAX,-0x1
/* 0519fb91 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519fb97 */  TEST RAX,RAX
/* 0519fb9a */  JNZ 0x0519fbad
/* 0519fb9c */  MOV RAX,qword ptr [RBX]
/* 0519fb9f */  MOV RDI,RBX
/* 0519fba2 */  CALL qword ptr [RAX + 0x10]
/* 0519fba5 */  MOV RDI,RBX
/* 0519fba8 */  CALL 0x0412c2d0
/* 0519fbad */  MOV RBX,qword ptr [RSP + 0xd98]
/* 0519fbb5 */  MOV qword ptr [RSP + 0xda0],0x0
/* 0519fbc1 */  TEST RBX,RBX
/* 0519fbc4 */  JZ 0x0519fbf7
/* 0519fbc6 */  MOV RAX,-0x1
/* 0519fbcd */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0519fbd3 */  TEST RAX,RAX
/* 0519fbd6 */  JNZ 0x0519fbf7
/* 0519fbd8 */  MOV RAX,qword ptr [RBX]
/* 0519fbdb */  MOV RDI,RBX
/* 0519fbde */  CALL qword ptr [RAX + 0x10]
/* 0519fbe1 */  MOV RDI,RBX
/* 0519fbe4 */  CALL 0x0412c2d0
/* 0519fbe9 */  JMP 0x0519fbf7
/* 0519fbeb */  MOV qword ptr [RSP + 0xda0],0x0
/* 0519fbf7 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519fbfc */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519fc00 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519fc03 */  MOVAPS xmmword ptr [RSP + 0xd40],XMM0
/* 0519fc0b */  TEST RAX,RAX
/* 0519fc0e */  JZ 0x0519fc15
/* 0519fc10 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519fc15 */  MOV RBX,qword ptr [RSP + 0x58]
/* 0519fc1a */  MOV RAX,qword ptr [RBX + 0x10]
/* 0519fc1e */  MOV qword ptr [RSP + 0xd50],RAX
/* 0519fc26 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519fc2e */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519fc31 */  MOVUPS xmmword ptr [RSP + 0xd58],XMM0
/* 0519fc39 */  LEA RDI,[RSP + 0xd68]
/* 0519fc41 */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519fc49 */  CALL 0x0d88e390
/* 0519fc4e */  MOV RAX,qword ptr [RBX + 0x48]
/* 0519fc52 */  MOV qword ptr [RSP + 0xd88],RAX
/* 0519fc5a */  LEA RBX,[0x1390dff]
/* 0519fc61 */  MOV EDX,0x1b
/* 0519fc66 */  MOV RAX,RBX
/* 0519fc69 */  NOP dword ptr [RAX]
/* 0519fc70 */  MOV RDI,RAX
/* 0519fc73 */  MOV ESI,0x3a
/* 0519fc78 */  CALL 0x0eee2ef0
/* 0519fc7d */  TEST RAX,RAX
/* 0519fc80 */  JZ 0x0519fcc1
/* 0519fc82 */  CMP byte ptr [RAX],0x3a
/* 0519fc85 */  JZ 0x0519fc9b
/* 0519fc87 */  INC RAX
/* 0519fc8a */  MOV RDX,RBX
/* 0519fc8d */  SUB RDX,RAX
/* 0519fc90 */  ADD RDX,0x1b
/* 0519fc94 */  TEST RDX,RDX
/* 0519fc97 */  JG 0x0519fc70
/* 0519fc99 */  JMP 0x0519fcc1
/* 0519fc9b */  LEA RCX,[0x1390e1a]
/* 0519fca2 */  CMP RAX,RCX
/* 0519fca5 */  SETNZ CL
/* 0519fca8 */  LEA RDX,[0x1390dff]
/* 0519fcaf */  SUB RAX,RDX
/* 0519fcb2 */  CMP RAX,-0x1
/* 0519fcb6 */  SETNZ AL
/* 0519fcb9 */  TEST CL,AL
/* 0519fcbb */  JNZ 0x051a5c6f
/* 0519fcc1 */  LEA RAX,[0x13abf4c]
/* 0519fcc8 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519fccd */  LEA RAX,[0x1390dff]
/* 0519fcd4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0519fcd9 */  LEA RSI,[0x11ed16e]
/* 0519fce0 */  LEA RDI,[RSP + 0x10]
/* 0519fce5 */  LEA R8,[RSP + 0x30]
/* 0519fcea */  MOV EDX,0x5
/* 0519fcef */  MOV ECX,0xcc
/* 0519fcf4 */  CALL 0x0470d9a0
/* 0519fcf9 */  LEA RBX,[0x1390dff]
/* 0519fd00 */  LEA R14,[RSP + 0xa0]
/* 0519fd08 */  LEA RCX,[RSP + 0x10]
/* 0519fd0d */  MOV EDX,0x1b
/* 0519fd12 */  MOV RDI,R14
/* 0519fd15 */  MOV RSI,RBX
/* 0519fd18 */  CALL 0x0d337b80
/* 0519fd1d */  TEST byte ptr [RSP + 0x10],0x1
/* 0519fd22 */  JZ 0x0519fd37
/* 0519fd24 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0519fd29 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0519fd2e */  AND RSI,-0x2
/* 0519fd32 */  CALL 0x0412a280
/* 0519fd37 */  MOV dword ptr [RSP + 0xd0],0x1
/* 0519fd42 */  MOV qword ptr [RSP + 0x68],R14
/* 0519fd47 */  MOV qword ptr [RSP + 0x70],0x1
/* 0519fd50 */  LEA RAX,[0x1479441]
/* 0519fd57 */  MOV qword ptr [RSP + 0x30],RAX
/* 0519fd5c */  MOV qword ptr [RSP + 0x38],0x19
/* 0519fd65 */  LEA RAX,[0x13df34a]
/* 0519fd6c */  MOV qword ptr [RSP + 0x10],RAX
/* 0519fd71 */  MOV qword ptr [RSP + 0x18],0x5
/* 0519fd7a */  MOV byte ptr [RSP + 0xf],0x0
/* 0519fd7f */  LEA RDI,[RSP + 0x28]
/* 0519fd84 */  LEA RSI,[RSP + 0xd40]
/* 0519fd8c */  LEA RDX,[RSP + 0x30]
/* 0519fd91 */  LEA RCX,[RSP + 0x10]
/* 0519fd96 */  LEA R8,[RSP + 0xf]
/* 0519fd9b */  LEA R9,[RSP + 0x68]
/* 0519fda0 */  CALL 0x0d33dd60
/* 0519fda5 */  LEA RSI,[RSP + 0x28]
/* 0519fdaa */  MOV RDI,qword ptr [RSP + 0x78]
/* 0519fdaf */  CALL 0x0d3301c0
/* 0519fdb4 */  MOV R15,qword ptr [RSP + 0x28]
/* 0519fdb9 */  MOV qword ptr [RSP + 0x28],0x0
/* 0519fdc2 */  TEST R15,R15
/* 0519fdc5 */  JZ 0x0519fe1b
/* 0519fdc7 */  TEST byte ptr [R15 + 0x30],0x1
/* 0519fdcc */  JZ 0x0519fddf
/* 0519fdce */  MOV RSI,qword ptr [R15 + 0x30]
/* 0519fdd2 */  MOV RDI,qword ptr [R15 + 0x40]
/* 0519fdd6 */  AND RSI,-0x2
/* 0519fdda */  CALL 0x0412a280
/* 0519fddf */  MOV RDI,qword ptr [R15 + 0x18]
/* 0519fde3 */  TEST RDI,RDI
/* 0519fde6 */  JZ 0x0519fdf8
/* 0519fde8 */  MOV qword ptr [R15 + 0x20],RDI
/* 0519fdec */  MOV RSI,qword ptr [R15 + 0x28]
/* 0519fdf0 */  SUB RSI,RDI
/* 0519fdf3 */  CALL 0x0412a280
/* 0519fdf8 */  TEST byte ptr [R15],0x1
/* 0519fdfc */  JZ 0x0519fe0e
/* 0519fdfe */  MOV RSI,qword ptr [R15]
/* 0519fe01 */  MOV RDI,qword ptr [R15 + 0x10]
/* 0519fe05 */  AND RSI,-0x2
/* 0519fe09 */  CALL 0x0412a280
/* 0519fe0e */  MOV ESI,0x48
/* 0519fe13 */  MOV RDI,R15
/* 0519fe16 */  CALL 0x0412a280
/* 0519fe1b */  MOV RDI,qword ptr [RSP + 0xc0]
/* 0519fe23 */  CMP RDI,R14
/* 0519fe26 */  JZ 0x0519fe4b
/* 0519fe28 */  MOV EAX,0x28
/* 0519fe2d */  TEST RDI,RDI
/* 0519fe30 */  JNZ 0x0519fe50
/* 0519fe32 */  MOV RSI,qword ptr [RSP + 0xd78]
/* 0519fe3a */  MOV RAX,0x80000000000000
/* 0519fe44 */  TEST RSI,RAX
/* 0519fe47 */  JNZ 0x0519fe6d
/* 0519fe49 */  JMP 0x0519fe8f
/* 0519fe4b */  MOV EAX,0x20
/* 0519fe50 */  MOV RCX,qword ptr [RDI]
/* 0519fe53 */  CALL qword ptr [RCX + RAX*0x1]
/* 0519fe56 */  MOV RSI,qword ptr [RSP + 0xd78]
/* 0519fe5e */  MOV RAX,0x80000000000000
/* 0519fe68 */  TEST RSI,RAX
/* 0519fe6b */  JZ 0x0519fe8f
/* 0519fe6d */  MOV RAX,-0xff000000000001
/* 0519fe77 */  AND RSI,RAX
/* 0519fe7a */  ADD RSI,-0x8
/* 0519fe7e */  LEA RDI,[0xf5463b0]
/* 0519fe85 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519fe8c */  CALL qword ptr [RAX + 0x28]
/* 0519fe8f */  MOV qword ptr [RSP + 0xd78],0x0
/* 0519fe9b */  MOV RSI,qword ptr [RSP + 0xd70]
/* 0519fea3 */  MOV RAX,0x80000000000000
/* 0519fead */  TEST RSI,RAX
/* 0519feb0 */  JZ 0x0519fed4
/* 0519feb2 */  MOV RAX,-0xff000000000001
/* 0519febc */  AND RSI,RAX
/* 0519febf */  ADD RSI,-0x8
/* 0519fec3 */  LEA RDI,[0xf5463b0]
/* 0519feca */  MOV RAX,qword ptr [0x0f5463b0]
/* 0519fed1 */  CALL qword ptr [RAX + 0x28]
/* 0519fed4 */  MOV qword ptr [RSP + 0xd70],0x0
/* 0519fee0 */  XORPS XMM0,XMM0
/* 0519fee3 */  MOV R14,qword ptr [RSP + 0xd48]
/* 0519feeb */  MOVAPS xmmword ptr [RSP + 0xd40],XMM0
/* 0519fef3 */  TEST R14,R14
/* 0519fef6 */  JZ 0x0519ff59
/* 0519fef8 */  MOV RAX,-0x1
/* 0519feff */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0519ff05 */  TEST RAX,RAX
/* 0519ff08 */  JNZ 0x0519ff1b
/* 0519ff0a */  MOV RAX,qword ptr [R14]
/* 0519ff0d */  MOV RDI,R14
/* 0519ff10 */  CALL qword ptr [RAX + 0x10]
/* 0519ff13 */  MOV RDI,R14
/* 0519ff16 */  CALL 0x0412c2d0
/* 0519ff1b */  MOV R14,qword ptr [RSP + 0xd48]
/* 0519ff23 */  MOV qword ptr [RSP + 0xd50],0x0
/* 0519ff2f */  TEST R14,R14
/* 0519ff32 */  JZ 0x0519ff65
/* 0519ff34 */  MOV RAX,-0x1
/* 0519ff3b */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0519ff41 */  TEST RAX,RAX
/* 0519ff44 */  JNZ 0x0519ff65
/* 0519ff46 */  MOV RAX,qword ptr [R14]
/* 0519ff49 */  MOV RDI,R14
/* 0519ff4c */  CALL qword ptr [RAX + 0x10]
/* 0519ff4f */  MOV RDI,R14
/* 0519ff52 */  CALL 0x0412c2d0
/* 0519ff57 */  JMP 0x0519ff65
/* 0519ff59 */  MOV qword ptr [RSP + 0xd50],0x0
/* 0519ff65 */  MOV RCX,qword ptr [RSP + 0x58]
/* 0519ff6a */  MOV RAX,qword ptr [RCX + 0x8]
/* 0519ff6e */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0519ff71 */  MOVAPS xmmword ptr [RSP + 0xcf0],XMM0
/* 0519ff79 */  TEST RAX,RAX
/* 0519ff7c */  JZ 0x0519ff83
/* 0519ff7e */  INC.LOCK qword ptr [RAX + 0x8]
/* 0519ff83 */  MOV R14,qword ptr [RSP + 0x58]
/* 0519ff88 */  MOV RAX,qword ptr [R14 + 0x10]
/* 0519ff8c */  MOV qword ptr [RSP + 0xd00],RAX
/* 0519ff94 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0519ff9c */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0519ff9f */  MOVUPS xmmword ptr [RSP + 0xd08],XMM0
/* 0519ffa7 */  LEA RDI,[RSP + 0xd18]
/* 0519ffaf */  MOV RSI,qword ptr [RSP + 0x88]
/* 0519ffb7 */  CALL 0x0d88e390
/* 0519ffbc */  MOV RAX,qword ptr [R14 + 0x48]
/* 0519ffc0 */  MOV qword ptr [RSP + 0xd38],RAX
/* 0519ffc8 */  LEA R14,[0x13ac94a]
/* 0519ffcf */  MOV EDX,0x23
/* 0519ffd4 */  MOV RAX,R14
/* 0519ffd7 */  NOP word ptr [RAX + RAX*0x1]
/* 0519ffe0 */  MOV RDI,RAX
/* 0519ffe3 */  MOV ESI,0x3a
/* 0519ffe8 */  CALL 0x0eee2ef0
/* 0519ffed */  TEST RAX,RAX
/* 0519fff0 */  JZ 0x051a0031
/* 0519fff2 */  CMP byte ptr [RAX],0x3a
/* 0519fff5 */  JZ 0x051a000b
/* 0519fff7 */  INC RAX
/* 0519fffa */  MOV RDX,R14
/* 0519fffd */  SUB RDX,RAX
/* 051a0000 */  ADD RDX,0x23
/* 051a0004 */  TEST RDX,RDX
/* 051a0007 */  JG 0x0519ffe0
/* 051a0009 */  JMP 0x051a0031
/* 051a000b */  LEA RCX,[0x13ac96d]
/* 051a0012 */  CMP RAX,RCX
/* 051a0015 */  SETNZ CL
/* 051a0018 */  LEA RDX,[0x13ac94a]
/* 051a001f */  SUB RAX,RDX
/* 051a0022 */  CMP RAX,-0x1
/* 051a0026 */  SETNZ AL
/* 051a0029 */  TEST CL,AL
/* 051a002b */  JNZ 0x051a5cc6
/* 051a0031 */  LEA RAX,[0x13abf4c]
/* 051a0038 */  MOV qword ptr [RSP + 0x30],RAX
/* 051a003d */  LEA RAX,[0x13ac94a]
/* 051a0044 */  MOV qword ptr [RSP + 0x40],RAX
/* 051a0049 */  LEA RSI,[0x11ed16e]
/* 051a0050 */  LEA RDI,[RSP + 0x10]
/* 051a0055 */  LEA R8,[RSP + 0x30]
/* 051a005a */  MOV EDX,0x5
/* 051a005f */  MOV ECX,0xcc
/* 051a0064 */  CALL 0x0470d9a0
/* 051a0069 */  LEA R15,[0x13ac94a]
/* 051a0070 */  LEA R14,[RSP + 0xa0]
/* 051a0078 */  LEA RCX,[RSP + 0x10]
/* 051a007d */  MOV EDX,0x23
/* 051a0082 */  MOV RDI,R14
/* 051a0085 */  MOV RSI,R15
/* 051a0088 */  CALL 0x0d337b80
/* 051a008d */  TEST byte ptr [RSP + 0x10],0x1
/* 051a0092 */  JZ 0x051a00a7
/* 051a0094 */  MOV RSI,qword ptr [RSP + 0x10]
/* 051a0099 */  MOV RDI,qword ptr [RSP + 0x20]
/* 051a009e */  AND RSI,-0x2
/* 051a00a2 */  CALL 0x0412a280
/* 051a00a7 */  MOV dword ptr [RSP + 0xd0],0x1
/* 051a00b2 */  MOV qword ptr [RSP + 0x68],R14
/* 051a00b7 */  MOV qword ptr [RSP + 0x70],0x1
/* 051a00c0 */  MOV qword ptr [RSP + 0x30],R15
/* 051a00c5 */  MOV qword ptr [RSP + 0x38],0x23
/* 051a00ce */  LEA RAX,[0x13df34a]
/* 051a00d5 */  MOV qword ptr [RSP + 0x10],RAX
/* 051a00da */  MOV qword ptr [RSP + 0x18],0x5
/* 051a00e3 */  MOV byte ptr [RSP + 0xf],0x0
/* 051a00e8 */  LEA RDI,[RSP + 0x28]
/* 051a00ed */  LEA RSI,[RSP + 0xcf0]
/* 051a00f5 */  LEA RDX,[RSP + 0x30]
/* 051a00fa */  LEA RCX,[RSP + 0x10]
/* 051a00ff */  LEA R8,[RSP + 0xf]
/* 051a0104 */  LEA R9,[RSP + 0x68]
/* 051a0109 */  CALL 0x0d33dd60
/* 051a010e */  LEA RSI,[RSP + 0x28]
/* 051a0113 */  MOV RDI,qword ptr [RSP + 0x78]
/* 051a0118 */  CALL 0x0d3301c0
/* 051a011d */  MOV R15,qword ptr [RSP + 0x28]
/* 051a0122 */  MOV qword ptr [RSP + 0x28],0x0
/* 051a012b */  TEST R15,R15
/* 051a012e */  JZ 0x051a0184
/* 051a0130 */  TEST byte ptr [R15 + 0x30],0x1
/* 051a0135 */  JZ 0x051a0148
/* 051a0137 */  MOV RSI,qword ptr [R15 + 0x30]
/* 051a013b */  MOV RDI,qword ptr [R15 + 0x40]
/* 051a013f */  AND RSI,-0x2
/* 051a0143 */  CALL 0x0412a280
/* 051a0148 */  MOV RDI,qword ptr [R15 + 0x18]
/* 051a014c */  TEST RDI,RDI
/* 051a014f */  JZ 0x051a0161
/* 051a0151 */  MOV qword ptr [R15 + 0x20],RDI
/* 051a0155 */  MOV RSI,qword ptr [R15 + 0x28]
/* 051a0159 */  SUB RSI,RDI
/* 051a015c */  CALL 0x0412a280
/* 051a0161 */  TEST byte ptr [R15],0x1
/* 051a0165 */  JZ 0x051a0177
/* 051a0167 */  MOV RSI,qword ptr [R15]
/* 051a016a */  MOV RDI,qword ptr [R15 + 0x10]
/* 051a016e */  AND RSI,-0x2
/* 051a0172 */  CALL 0x0412a280
/* 051a0177 */  MOV ESI,0x48
/* 051a017c */  MOV RDI,R15
/* 051a017f */  CALL 0x0412a280
/* 051a0184 */  MOV RDI,qword ptr [RSP + 0xc0]
/* 051a018c */  CMP RDI,R14
/* 051a018f */  JZ 0x051a01b4
/* 051a0191 */  MOV EAX,0x28
/* 051a0196 */  TEST RDI,RDI
/* 051a0199 */  JNZ 0x051a01b9
/* 051a019b */  MOV RSI,qword ptr [RSP + 0xd28]
/* 051a01a3 */  MOV RAX,0x80000000000000
/* 051a01ad */  TEST RSI,RAX
/* 051a01b0 */  JNZ 0x051a01d6
/* 051a01b2 */  JMP 0x051a01f8
/* 051a01b4 */  MOV EAX,0x20
/* 051a01b9 */  MOV RCX,qword ptr [RDI]
/* 051a01bc */  CALL qword ptr [RCX + RAX*0x1]
/* 051a01bf */  MOV RSI,qword ptr [RSP + 0xd28]
/* 051a01c7 */  MOV RAX,0x80000000000000
/* 051a01d1 */  TEST RSI,RAX
/* 051a01d4 */  JZ 0x051a01f8
/* 051a01d6 */  MOV RAX,-0xff000000000001
/* 051a01e0 */  AND RSI,RAX
/* 051a01e3 */  ADD RSI,-0x8
/* 051a01e7 */  LEA RDI,[0xf5463b0]
/* 051a01ee */  MOV RAX,qword ptr [0x0f5463b0]
/* 051a01f5 */  CALL qword ptr [RAX + 0x28]
/* 051a01f8 */  MOV qword ptr [RSP + 0xd28],0x0
/* 051a0204 */  MOV RSI,qword ptr [RSP + 0xd20]
/* 051a020c */  MOV RAX,0x80000000000000
/* 051a0216 */  TEST RSI,RAX
/* 051a0219 */  JZ 0x051a023d
/* 051a021b */  MOV RAX,-0xff000000000001
/* 051a0225 */  AND RSI,RAX
/* 051a0228 */  ADD RSI,-0x8
/* 051a022c */  LEA RDI,[0xf5463b0]
/* 051a0233 */  MOV RAX,qword ptr [0x0f5463b0]
/* 051a023a */  CALL qword ptr [RAX + 0x28]
/* 051a023d */  MOV qword ptr [RSP + 0xd20],0x0
/* 051a0249 */  XORPS XMM0,XMM0
/* 051a024c */  MOV R14,qword ptr [RSP + 0xcf8]
/* 051a0254 */  MOVAPS xmmword ptr [RSP + 0xcf0],XMM0
/* 051a025c */  TEST R14,R14
/* 051a025f */  JZ 0x051a02c2
/* 051a0261 */  MOV RAX,-0x1
/* 051a0268 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 051a026e */  TEST RAX,RAX
/* 051a0271 */  JNZ 0x051a0284
/* 051a0273 */  MOV RAX,qword ptr [R14]
/* 051a0276 */  MOV RDI,R14
/* 051a0279 */  CALL qword ptr [RAX + 0x10]
/* 051a027c */  MOV RDI,R14
/* 051a027f */  CALL 0x0412c2d0
/* 051a0284 */  MOV R14,qword ptr [RSP + 0xcf8]
/* 051a028c */  MOV qword ptr [RSP + 0xd00],0x0
/* 051a0298 */  TEST R14,R14
/* 051a029b */  JZ 0x051a02ce
/* 051a029d */  MOV RAX,-0x1
/* 051a02a4 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 051a02aa */  TEST RAX,RAX
/* 051a02ad */  JNZ 0x051a02ce
/* 051a02af */  MOV RAX,qword ptr [R14]
/* 051a02b2 */  MOV RDI,R14
/* 051a02b5 */  CALL qword ptr [RAX + 0x10]
/* 051a02b8 */  MOV RDI,R14
/* 051a02bb */  CALL 0x0412c2d0
/* 051a02c0 */  JMP 0x051a02ce
/* 051a02c2 */  MOV qword ptr [RSP + 0xd00],0x0
/* 051a02ce */  MOV RCX,qword ptr [RSP + 0x58]
/* 051a02d3 */  MOV RAX,qword ptr [RCX + 0x8]
/* 051a02d7 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 051a02da */  MOVAPS xmmword ptr [RSP + 0xca0],XMM0
/* 051a02e2 */  TEST RAX,RAX
/* 051a02e5 */  JZ 0x051a02ec
/* 051a02e7 */  INC.LOCK qword ptr [RAX + 0x8]
/* 051a02ec */  MOV R14,qword ptr [RSP + 0x58]
/* 051a02f1 */  MOV RAX,qword ptr [R14 + 0x10]
/* 051a02f5 */  MOV qword ptr [RSP + 0xcb0],RAX
/* 051a02fd */  MOV RAX,qword ptr [RSP + 0x80]
/* 051a0305 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 051a0308 */  MOVUPS xmmword ptr [RSP + 0xcb8],XMM0
/* 051a0310 */  LEA RDI,[RSP + 0xcc8]
/* 051a0318 */  MOV RSI,qword ptr [RSP + 0x88]
/* 051a0320 */  CALL 0x0d88e390
/* 051a0325 */  MOV RAX,qword ptr [R14 + 0x48]
/* 051a0329 */  MOV qword ptr [RSP + 0xce8],RAX
/* 051a0331 */  MOV EDX,0x1b
/* 051a0336 */  MOV RAX,RBX
/* 051a0339 */  NOP dword ptr [RAX]
/* 051a0340 */  MOV RDI,RAX
/* 051a0343 */  MOV ESI,0x3a
/* 051a0348 */  CALL 0x0eee2ef0
/* 051a034d */  TEST RAX,RAX
/* 051a0350 */  JZ 0x051a0391
/* 051a0352 */  CMP byte ptr [RAX],0x3a
/* 051a0355 */  JZ 0x051a036b
/* 051a0357 */  INC RAX
/* 051a035a */  MOV RDX,RBX
/* 051a035d */  SUB RDX,RAX
/* 051a0360 */  ADD RDX,0x1b
/* 051a0364 */  TEST RDX,RDX
/* 051a0367 */  JG 0x051a0340
/* 051a0369 */  JMP 0x051a0391
/* 051a036b */  LEA RCX,[0x1390e1a]
/* 051a0372 */  CMP RAX,RCX
/* 051a0375 */  SETNZ CL
/* 051a0378 */  LEA RDX,[0x1390dff]
/* 051a037f */  SUB RAX,RDX
/* 051a0382 */  CMP RAX,-0x1
/* 051a0386 */  SETNZ AL
/* 051a0389 */  TEST CL,AL
/* 051a038b */  JNZ 0x051a5d28
/* 051a0391 */  LEA RAX,[0x13abf4c]
/* 051a0398 */  MOV qword ptr [RSP + 0x30],RAX
/* 051a039d */  LEA RAX,[0x1390dff]
/* 051a03a4 */  MOV qword ptr [RSP + 0x40],RAX
/* 051a03a9 */  LEA RSI,[0x11ed16e]
; truncated
