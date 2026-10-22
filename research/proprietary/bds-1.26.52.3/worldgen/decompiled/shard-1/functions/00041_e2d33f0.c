/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2d33f0
 * Label: string:Jigsaw Structure Metadata
 * Body:  [[0e2d33f0, 0e2d3927] [0e2d3a16, 0e2d3a37] [0e2d3a7c, 0e2d3a9d]]
 * Ghidra: FUN_0e2d33f0
 */


/* WARNING: Removing unreachable block (ram,0x0e2d3906) */
/* WARNING: Removing unreachable block (ram,0x0e2d3754) */
/* WARNING: Removing unreachable block (ram,0x0e2d3766) */
/* WARNING: Removing unreachable block (ram,0x0e2d38c6) */
/* WARNING: Removing unreachable block (ram,0x0e2d38d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2d33f0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_RBX;
  code *unaff_RBP;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  code *pcStack0000000000000020;
  undefined *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined4 in_stack_00000080;
  code *in_stack_00000088;
  char cStack000000000000009c;
  ulong in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 *in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined1 in_stack_00000170;
  undefined4 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  undefined4 uStack00000000000001ec;
  undefined1 uStack00000000000001f0;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined1 in_stack_00000240;
  undefined8 in_stack_00000248;
  
  pcStack0000000000000020 = (code *)&UNK_048b49f0;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar3 = 0x21;
  puVar3[1] = 0x1e;
  puVar3[2] = unaff_RBX;
  *(undefined2 *)(puVar3 + 3) = 0x1200;
  puVar3[4] = 0x1005000150001;
  puVar3[5] = &UNK_01254d89;
  puVar3[6] = &UNK_01254d89;
  in_stack_00000070 = &UNK_048b46e0;
  cStack000000000000009c = '\x01';
  in_stack_00000008 = 0;
  in_stack_00000078 = puVar3;
  in_stack_00000088 = unaff_RBP;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar1 = _UNK_014518c1;
  in_stack_00000140 = 0x29;
  in_stack_00000148 = 0x24;
  puVar3[2] = _DAT_014518b9;
  puVar3[3] = uVar1;
  uVar1 = _UNK_014518b1;
  *puVar3 = _DAT_014518a9;
  puVar3[1] = uVar1;
  *(undefined4 *)(puVar3 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar3 + 0x24) = 0;
  in_stack_00000150 = puVar3;
  lVar4 = func_0x048b5060();
  *(undefined **)(lVar4 + 0x20) = &UNK_048b46e0;
  if ((undefined **)(lVar4 + 0x20) == &stack0x00000070) goto LAB_0e2d35b4;
  puVar3 = (undefined8 *)(lVar4 + 0x28);
  if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
LAB_0e2d3577:
    puVar2 = in_stack_00000078;
    in_stack_00000078 = (undefined8 *)0x0;
    *puVar3 = puVar2;
  }
  else {
    (**(code **)(lVar4 + 0x40))(puVar3);
    if (cStack000000000000009c != '\0') {
      if (cStack000000000000009c != '\x02') goto LAB_0e2d3577;
      (*in_stack_00000088)(5,&stack0x00000078,puVar3);
    }
  }
  *(code **)(lVar4 + 0x38) = in_stack_00000088;
  *(undefined **)(lVar4 + 0x40) = &UNK_048b49f0;
  *(undefined4 *)(lVar4 + 0x48) = 0xd33bd9c5;
  *(char *)(lVar4 + 0x4c) = cStack000000000000009c;
LAB_0e2d35b4:
  if ((in_stack_00000140 & 1) != 0) {
    func_0x0412a280(in_stack_00000150,in_stack_00000140 & 0xfffffffffffffffe);
  }
  (*(code *)&UNK_048b49f0)(&stack0x00000078);
  if (pcStack0000000000000020 != (code *)0x0) {
    (*pcStack0000000000000020)(&stack0x00000008);
  }
  in_stack_000001e8 = in_stack_000001b0;
  uStack00000000000001ec = in_stack_000001b8._4_4_;
  in_stack_000001c0 = in_stack_00000248;
  in_stack_000001c8 = in_stack_00000200;
  in_stack_000001d0 = in_stack_00000208;
  in_stack_000001d8 = in_stack_00000210;
  in_stack_000001e0 = in_stack_00000218;
  uStack00000000000001f0 = in_stack_00000240;
  func_0x0e3afef0(&stack0x00000070,&stack0x000001c0,&UNK_013771cd,0xe);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef44b00;
  if (in_stack_00000088 != (code *)0x0) {
    lVar4 = *(long *)in_stack_00000088;
    in_stack_00000088 = (code *)plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = (long *)in_stack_00000088;
  }
  in_stack_00000088 = (code *)plVar5;
  in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,in_stack_00000080);
  in_stack_00000010 = 0;
  pcStack0000000000000020 = (code *)0x1;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e3b0150(&stack0x00000070);
  in_stack_00000170 = uStack00000000000001f0;
  in_stack_00000168 = CONCAT44(uStack00000000000001ec,in_stack_000001e8);
  in_stack_00000160 = in_stack_000001e0;
  in_stack_00000150 = (undefined8 *)in_stack_000001d0;
  in_stack_00000158 = in_stack_000001d8;
  in_stack_00000140 = in_stack_000001c0;
  in_stack_00000148 = in_stack_000001c8;
  func_0x048b0bc0(&stack0x00000088);
  func_0x0e3afef0(&stack0x00000070,&stack0x00000140,&UNK_0147125d,0x23);
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar3 = &UNK_0f4b8090;
  if (in_stack_00000088 != (code *)0x0) {
    lVar4 = *(long *)in_stack_00000088;
    in_stack_00000088 = (code *)puVar3;
    (**(code **)(lVar4 + 8))();
    puVar3 = (undefined8 *)in_stack_00000088;
  }
  in_stack_00000088 = (code *)puVar3;
  in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,in_stack_00000080);
  in_stack_00000010 = 0;
  pcStack0000000000000020 = (code *)0x1;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e3b0150(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
