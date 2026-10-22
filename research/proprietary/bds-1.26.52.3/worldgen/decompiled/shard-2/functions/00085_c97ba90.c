/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc97ba90
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot3
 * Body:  [[0c97b396, 0c97b461] [0c97b470, 0c97b48d] [0c97b936, 0c97ba7f] [0c97ba90, 0c97bae6]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot3(void)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong unaff_RBX;
  long lVar11;
  undefined8 *unaff_R13;
  uint *puVar12;
  undefined8 *unaff_R15;
  bool bVar13;
  undefined1 uVar14;
  undefined7 uVar15;
  undefined1 uStack0000000000000010;
  undefined1 uStack0000000000000011;
  undefined1 uStack0000000000000012;
  undefined1 uStack0000000000000013;
  undefined4 uStack0000000000000014;
  byte bStack0000000000000018;
  undefined5 uStack0000000000000019;
  undefined2 uStack000000000000001e;
  undefined1 in_stack_00000020;
  undefined5 uStack0000000000000021;
  undefined1 uStack0000000000000026;
  undefined8 in_stack_00000028;
  byte bStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  long *in_stack_00000088;
  undefined8 in_stack_00000090;
  long *in_stack_00000098;
  
  puVar8 = (undefined8 *)(unaff_RBX & 0xffffffff);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &UNK_0f3e9428;
  puVar7 = puVar8 + 4;
  puVar8[4] = &UNK_0f2ce220;
  puVar8[8] = puVar7;
  puVar8[10] = &UNK_0f2ce2b0;
  puVar8[0xe] = puVar8 + 10;
  puVar8[0x10] = &UNK_0f2ce330;
  puVar8[0x14] = puVar8 + 0x10;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0xffffffffffffffff;
  *(undefined4 *)(puVar8 + 0x1a) = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x22] = 0;
  puVar8[0x23] = 0;
  *unaff_R13 = puVar7;
  unaff_R13[1] = puVar8;
  puVar10 = (undefined4 *)*unaff_R15;
  puVar2 = (undefined4 *)unaff_R15[1];
  if (puVar10 != puVar2) {
    do {
      switch(*puVar10) {
      case 0:
      case 4:
      case 5:
        uVar3 = *unaff_R13;
        if ((DAT_0f5ea4a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ea4a0), iVar6 != 0)) {
          func_0x08b670e0(&DAT_0f5ea138);
          func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
          func_0x0410844d(&DAT_0f5ea4a0);
        }
        uVar14 = 0x24;
        bVar13 = false;
        uVar15 = (undefined7)_UNK_011ff121;
        uStack0000000000000010 = (undefined1)((ulong)_UNK_011ff129 >> 0x38);
        uStack0000000000000011 = 0x6c;
        uStack0000000000000012 = 100;
        uStack0000000000000013 = 0;
        in_stack_00000090 = 0;
        in_stack_00000098 = (long *)0x0;
        (**(code **)(_DAT_0f5ea138 + 0x90))
                  (&stack0x00000018,&DAT_0f5ea138,&stack0x00000000,&stack0x00000090);
        func_0x0b69abb0(uVar3,&UNK_01d3f290,&stack0x00000018,1);
        plVar5 = in_stack_00000098;
        if ((bStack0000000000000018 & 1) != 0) {
          func_0x0412a280(in_stack_00000028,
                          CONCAT26(uStack000000000000001e,
                                   CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                          0xfffffffffffffffe);
          plVar5 = in_stack_00000098;
        }
        break;
      case 1:
        uVar3 = *unaff_R13;
        if ((DAT_0f5ea4a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ea4a0), iVar6 != 0)) {
          func_0x08b670e0(&DAT_0f5ea138);
          func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
          func_0x0410844d(&DAT_0f5ea4a0);
        }
        uVar14 = 0x22;
        bVar13 = false;
        uVar15 = (undefined7)_UNK_012337ce;
        uStack0000000000000010 = (undefined1)((ulong)_UNK_012337d6 >> 0x38);
        uStack0000000000000011 = 0x65;
        uStack0000000000000012 = 0;
        in_stack_00000080 = 0;
        in_stack_00000088 = (long *)0x0;
        (**(code **)(_DAT_0f5ea138 + 0x90))
                  (&stack0x00000018,&DAT_0f5ea138,&stack0x00000000,&stack0x00000080);
        func_0x0b69abb0(uVar3,&UNK_01d3f2c0,&stack0x00000018,1);
        plVar5 = in_stack_00000088;
        if ((bStack0000000000000018 & 1) != 0) {
          func_0x0412a280(in_stack_00000028,
                          CONCAT26(uStack000000000000001e,
                                   CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                          0xfffffffffffffffe);
          plVar5 = in_stack_00000088;
        }
        break;
      case 2:
        uVar3 = *unaff_R13;
        if ((DAT_0f5ea4a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ea4a0), iVar6 != 0)) {
          func_0x08b670e0(&DAT_0f5ea138);
          func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
          func_0x0410844d(&DAT_0f5ea4a0);
        }
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar7 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_013f02fd;
        uStack0000000000000010 = SUB81(puVar7,0);
        uStack0000000000000011 = (undefined1)((ulong)puVar7 >> 8);
        uStack0000000000000012 = (undefined1)((ulong)puVar7 >> 0x10);
        uStack0000000000000013 = (undefined1)((ulong)puVar7 >> 0x18);
        uStack0000000000000014 = (undefined4)((ulong)puVar7 >> 0x20);
        *(ulong *)((long)puVar7 + 0xb) = CONCAT35(_UNK_013f02fa,_UNK_013f02f5);
        *(undefined8 *)((long)puVar7 + 0x13) = uVar4;
        uVar4 = CONCAT53(_UNK_013f02f5,_UNK_013f02f2);
        *puVar7 = _UNK_013f02ea;
        puVar7[1] = uVar4;
        *(undefined1 *)((long)puVar7 + 0x1b) = 0;
        in_stack_00000070 = 0;
        in_stack_00000078 = (long *)0x0;
        (**(code **)(_DAT_0f5ea138 + 0x90))
                  (&stack0x00000018,&DAT_0f5ea138,&stack0x00000000,&stack0x00000070);
        func_0x0b69abb0(uVar3,&UNK_01d3f2a8,&stack0x00000018,1);
        plVar5 = in_stack_00000078;
        if ((bStack0000000000000018 & 1) != 0) {
          func_0x0412a280(in_stack_00000028,
                          CONCAT26(uStack000000000000001e,
                                   CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                          0xfffffffffffffffe);
          plVar5 = in_stack_00000078;
        }
        goto joined_r0x0c97b6a3;
      case 3:
        uVar3 = *unaff_R13;
        if ((DAT_0f5ea4a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ea4a0), iVar6 != 0)) {
          func_0x08b670e0(&DAT_0f5ea138);
          func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
          func_0x0410844d(&DAT_0f5ea4a0);
        }
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar7 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar4 = _UNK_0148a9aa;
        uStack0000000000000010 = SUB81(puVar7,0);
        uStack0000000000000011 = (undefined1)((ulong)puVar7 >> 8);
        uStack0000000000000012 = (undefined1)((ulong)puVar7 >> 0x10);
        uStack0000000000000013 = (undefined1)((ulong)puVar7 >> 0x18);
        uStack0000000000000014 = (undefined4)((ulong)puVar7 >> 0x20);
        *(ulong *)((long)puVar7 + 0xd) = CONCAT53(_UNK_0148a9a5,_UNK_0148a9a2);
        *(undefined8 *)((long)puVar7 + 0x15) = uVar4;
        uVar4 = CONCAT35(_UNK_0148a9a2,_UNK_0148a99d);
        *puVar7 = _UNK_0148a995;
        puVar7[1] = uVar4;
        *(undefined1 *)((long)puVar7 + 0x1d) = 0;
        in_stack_00000060 = 0;
        in_stack_00000068 = (long *)0x0;
        (**(code **)(_DAT_0f5ea138 + 0x90))
                  (&stack0x00000018,&DAT_0f5ea138,&stack0x00000000,&stack0x00000060);
        func_0x0b69abb0(uVar3,&UNK_01d3f290,&stack0x00000018,1);
        plVar5 = in_stack_00000068;
        if ((bStack0000000000000018 & 1) != 0) {
          func_0x0412a280(in_stack_00000028,
                          CONCAT26(uStack000000000000001e,
                                   CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                          0xfffffffffffffffe);
          plVar5 = in_stack_00000068;
        }
joined_r0x0c97b6a3:
        bVar13 = true;
        uVar15 = 0;
        uVar14 = 0x21;
        break;
      default:
        goto LAB_0c97b470;
      }
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
      }
      if (bVar13) {
        func_0x0412a280(CONCAT44(uStack0000000000000014,
                                 CONCAT13(uStack0000000000000013,
                                          CONCAT12(uStack0000000000000012,
                                                   CONCAT11(uStack0000000000000011,
                                                            uStack0000000000000010)))),
                        CONCAT71(uVar15,uVar14) & 0xfffffffffffffffe);
      }
LAB_0c97b470:
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar2);
    puVar7 = (undefined8 *)*unaff_R13;
  }
  if ((DAT_0f5ea4a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ea4a0), iVar6 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
  }
  bStack0000000000000018 = 0x1a;
  uStack0000000000000019 = 0x702e697567;
  uStack000000000000001e = 0x6369;
  in_stack_00000020 = 0x6b;
  uStack0000000000000021 = 0x646c726f57;
  uStack0000000000000026 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = (long *)0x0;
  (**(code **)(_DAT_0f5ea138 + 0x90))
            (&stack0x00000038,&DAT_0f5ea138,&stack0x00000018,&stack0x00000050);
  puVar12 = (uint *)(puVar7 + 0x1d);
  if (puVar12 != (uint *)&stack0x00000038) {
    if ((*puVar12 & 1) == 0) {
      if ((_bStack0000000000000038 & 1) == 0) {
        puVar7[0x1f] = in_stack_00000048;
        *puVar12 = _bStack0000000000000038;
        *(undefined4 *)((long)puVar7 + 0xec) = uStack000000000000003c;
        *(undefined4 *)(puVar7 + 0x1e) = uStack0000000000000040;
        *(undefined4 *)((long)puVar7 + 0xf4) = uStack0000000000000044;
      }
      else {
        func_0x04885070(puVar12,in_stack_00000048,
                        CONCAT44(uStack0000000000000044,uStack0000000000000040));
      }
    }
    else {
      bVar13 = (_bStack0000000000000038 & 1) != 0;
      lVar11 = (long)&stack0x00000038 + 1;
      if (bVar13) {
        lVar11 = in_stack_00000048;
      }
      uVar9 = (ulong)(bStack0000000000000038 >> 1);
      if (bVar13) {
        uVar9 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      }
      func_0x04885120(puVar12,lVar11,uVar9);
    }
  }
  if ((_bStack0000000000000038 & 1) != 0) {
    func_0x0412a280(in_stack_00000048,
                    CONCAT44(uStack000000000000003c,_bStack0000000000000038) & 0xfffffffffffffffe);
  }
  plVar5 = in_stack_00000058;
  if (in_stack_00000058 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000058 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
      func_0x0412c2d0(plVar5);
    }
  }
  if ((bStack0000000000000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,
                    CONCAT26(uStack000000000000001e,
                             CONCAT51(uStack0000000000000019,bStack0000000000000018)) &
                    0xfffffffffffffffe);
  }
  return unaff_R13;
}


