# FUN_04e5fb80

- entry: `0x4e5fb80`
- body size: 2859 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04e5fb80(void)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *in_FS_OFFSET;
  bool bVar20;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  char cStack0000000000000040;
  undefined7 uStack0000000000000041;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_00000068;
  ulong in_stack_00000070;
  long *in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined8 *in_stack_00000088;
  long *in_stack_00000090;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  
  func_0x04b0a270(in_stack_00000060 + 0x40,
                  (in_stack_00000058[0x18] - in_stack_00000058[0x17] >> 3) * -0x30c30c30c30c30c3,0);
  func_0x04865530(&stack0x000000a8,*(undefined8 *)(in_stack_00000060 + 0x10));
  do {
    func_0x048655b0(&stack0x00000068,*(undefined8 *)(in_stack_00000060 + 0x10));
    cVar4 = func_0x04862c80(&stack0x000000a8,&stack0x00000068);
    func_0x04862b40(&stack0x00000068);
    if (cVar4 != '\0') {
      func_0x04862b40(&stack0x000000a8);
      lVar9 = in_stack_00000058[0x17];
      in_stack_000000d8 = in_stack_00000058[0x18];
      if (lVar9 != in_stack_000000d8) {
        in_stack_00000098 = *in_FS_OFFSET;
        in_stack_000000e8 = in_stack_00000098 + -0x28;
        in_stack_00000058 = (long *)(in_stack_00000098 + -0x20);
        do {
          lVar19 = *(long *)(lVar9 + 0x88);
          in_stack_000000f0 = *(long *)(lVar9 + 0x90);
          in_stack_000000e0 = lVar9;
          if ((lVar19 != in_stack_000000f0) && (in_stack_00000020 != in_stack_00000028)) {
            do {
              in_stack_00000090 = in_stack_00000028;
              plVar8 = in_stack_00000028;
              plVar15 = in_stack_00000020;
              if (in_stack_00000020 != in_stack_00000028) {
                do {
                  if (*(long *)(lVar19 + 0x28) == *plVar15) {
                    bVar20 = (*(byte *)(plVar15 + 1) & 1) != 0;
                    lVar9 = (long)plVar15 + 9;
                    if (bVar20) {
                      lVar9 = plVar15[3];
                    }
                    uVar7 = (ulong)(*(byte *)(plVar15 + 1) >> 1);
                    if (bVar20) {
                      uVar7 = plVar15[2];
                    }
                    in_stack_000000c0 = 0;
                    if (lVar9 == 0) {
                      in_stack_000000c0 = (ulong)((uint)uVar7 & 0x7f) << 0x30;
                    }
                    else {
                      lVar10 = uVar7 + 9;
                      puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8)
                      ;
                      if (lVar10 != 0 && puVar12 == (ulong *)0x0) {
                        func_0x0eec74c0(lVar10,8);
                      }
                      *puVar12 = uVar7;
                      func_0x0eee2f00(puVar12 + 1,lVar9,uVar7);
                      *(undefined1 *)((long)puVar12 + uVar7 + 8) = 0;
                      in_stack_000000c0 =
                           (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                    }
                    in_stack_00000068 = (long *)((ulong)in_stack_00000068 & 0xffffffffffffff00);
                    in_stack_00000078 = (long *)((ulong)in_stack_00000078 & 0xffffffffffffff00);
                    func_0x0eeb79f0(&stack0x00000040,&stack0x000000c0);
                    plVar11 = in_stack_00000058;
                    if ((in_stack_000000c0 & 0x80000000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,(in_stack_000000c0 & 0xff00ffffffffffff) - 8);
                    }
                    (**(code **)(*(long *)*plVar15 + 0x20))
                              ((long *)*plVar15,in_stack_00000060,plVar15 + 1,plVar15[4],0);
                    if (cStack0000000000000040 == '\x01') {
                      plVar8 = in_stack_00000090;
                      if (in_stack_00000050 == (long *)0x0) goto LAB_04e600c8;
                      plVar8 = (long *)func_0x0412c300();
                      uVar7 = _uStack0000000000000048;
                      if (plVar8 == (long *)0x0) goto joined_r0x04e60438;
                      if (_uStack0000000000000048 == 0) {
LAB_04e60410:
                        LOCK();
                        plVar11 = plVar8 + 1;
                        lVar9 = *plVar11;
                        *plVar11 = *plVar11 + -1;
                        UNLOCK();
                      }
                      else {
                        if ((DAT_0f7ba228 == '\0') &&
                           (iVar5 = func_0x04108328(&DAT_0f7ba228), iVar5 != 0)) {
                          _DAT_0f7ba200 = (undefined8 *)0x0;
                          _DAT_0f7ba208 = (undefined8 *)0x0;
                          _DAT_0f7ba1f0 = 0;
                          _DAT_0f7ba1f8 = (undefined8 *)0x0;
                          _DAT_0f7ba1e0 = 0;
                          uRam000000000f7ba1e8 = 0;
                          _DAT_0f7ba1d0 = 0;
                          uRam000000000f7ba1d8 = 0;
                          puVar13 = (undefined8 *)
                                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                          if (puVar13 == (undefined8 *)0x0) {
                            func_0x0eec74c0(0x80,0);
                          }
                          _DAT_0f7ba200 = puVar13 + 0x10;
                          _DAT_0f7ba1f8 = puVar13;
                          _DAT_0f7ba208 = _DAT_0f7ba200;
                          puVar13[0xe] = 0;
                          puVar13[0xf] = 0;
                          puVar13[0xc] = 0;
                          puVar13[0xd] = 0;
                          puVar13[10] = 0;
                          puVar13[0xb] = 0;
                          puVar13[8] = 0;
                          puVar13[9] = 0;
                          puVar13[6] = 0;
                          puVar13[7] = 0;
                          puVar13[4] = 0;
                          puVar13[5] = 0;
                          puVar13[2] = 0;
                          puVar13[3] = 0;
                          *puVar13 = 0;
                          puVar13[1] = 0;
                          _DAT_0f7ba210 = 0;
                          uRam000000000f7ba218 = 0;
                          _DAT_0f7ba220 = 0;
                          _DAT_0f7ba230 = &DAT_0f7ba1d0;
                          func_0x0eee2f40(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
                          func_0x0410844d(&DAT_0f7ba228);
                        }
                        in_stack_000000a0 = uVar7;
                        puVar14 = (uint *)(uVar7 + 0x78);
                        uVar1 = *puVar14;
                        uVar7 = (ulong)uVar1;
                        if (*(char *)(in_stack_00000098 + -8) == '\0') {
                          func_0x0eee07b0(in_stack_00000098 + -0x28,&DAT_0f7ba230);
                          lVar9 = in_stack_00000098;
                          func_0x0417d010(&UNK_0eee0b40,in_stack_00000098 + -0x28,0xf53dab8);
                          *(undefined1 *)(lVar9 + -8) = 1;
                          plVar11 = in_stack_00000058;
                        }
                        if (uVar7 < (ulong)(*(long *)(in_stack_000000e8 + 0x10) -
                                            *(long *)(in_stack_000000e8 + 8) >> 3)) {
                          lVar9 = *(long *)(*(long *)(in_stack_000000e8 + 8) + uVar7 * 8);
                          if (lVar9 != 0) goto LAB_04e602a3;
LAB_04e60350:
                          plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                          if (plVar11 == (long *)0x0) {
                            func_0x0eec74c0(0x40,0);
                          }
                          *plVar11 = (long)plVar11;
                          plVar11[1] = (long)plVar11;
                          plVar18 = plVar11 + 2;
                          plVar11[2] = 0;
                          plVar11[3] = 0;
                          plVar11[4] = 0;
                          plVar11[5] = 0;
                          plVar11[6] = 0;
                          plVar11[7] = 0;
                          plVar2 = *(long **)(in_stack_000000a0 + 0x30);
                          in_stack_00000068 = plVar18;
                          if (plVar2 == (long *)0x0) {
                            func_0x04891200();
                            goto LAB_04e60640;
                          }
                          (**(code **)(*plVar2 + 0x30))(plVar2,&stack0x00000068);
                          func_0x0eee1580(puVar14,plVar11);
                          lVar9 = in_stack_000000a0 + 0x50;
                          func_0x0412d680(lVar9);
                          puVar13 = *(undefined8 **)(in_stack_000000a0 + 0x48);
                          plVar11[1] = (long)puVar13;
                          *plVar11 = in_stack_000000a0 + 0x40;
                          *puVar13 = plVar11;
                          *(long **)(in_stack_000000a0 + 0x48) = plVar11;
                          func_0x0412d6b0(lVar9);
                          lVar9 = plVar11[3];
                          if (*plVar18 == lVar9) goto LAB_04e60410;
                        }
                        else {
                          func_0x0412d680(&DAT_0f7ba1d0);
                          func_0x0eee1060(plVar11,uVar1 + 1);
                          func_0x0412d6b0(&DAT_0f7ba1d0);
                          lVar9 = *(long *)(*plVar11 + uVar7 * 8);
                          if (lVar9 == 0) goto LAB_04e60350;
LAB_04e602a3:
                          plVar18 = (long *)(lVar9 + 0x10);
                          lVar9 = *(long *)(lVar9 + 0x18);
                          if (*plVar18 == lVar9) goto LAB_04e60410;
                        }
                        if ((char *)*(undefined8 **)(lVar9 + -8) != &stack0x00000040)
                        goto LAB_04e60410;
                        if ((*(ulong *)(lVar9 + -0x10) & 0x80000000000000) != 0) {
                          (**(code **)(_DAT_0f5463b0 + 0x28))
                                    (&DAT_0f5463b0,
                                     (*(ulong *)(lVar9 + -0x10) & 0xff00ffffffffffff) - 8);
                        }
                        *(undefined8 *)(lVar9 + -0x10) = 0;
                        plVar18[1] = lVar9 + -0x28;
                        LOCK();
                        plVar11 = plVar8 + 1;
                        lVar9 = *plVar11;
                        *plVar11 = *plVar11 + -1;
                        UNLOCK();
                      }
                      if (lVar9 == 0) {
                        (**(code **)(*plVar8 + 0x10))(plVar8);
                        func_0x0412c2d0(plVar8);
                      }
                    }
joined_r0x04e60438:
                    plVar8 = in_stack_00000090;
                    if (in_stack_00000050 != (long *)0x0) {
                      func_0x0412c2d0();
                      plVar8 = in_stack_00000090;
                    }
                  }
LAB_04e600c8:
                  plVar15 = plVar15 + 5;
                } while (plVar15 != plVar8);
              }
              lVar19 = lVar19 + 0x38;
            } while (lVar19 != in_stack_000000f0);
          }
          lVar9 = in_stack_000000e0 + 0xa8;
        } while (lVar9 != in_stack_000000d8);
      }
      plVar15 = in_stack_00000020;
      plVar8 = in_stack_00000028;
      if (in_stack_00000020 != (long *)0x0) {
        for (; plVar15 != plVar8; plVar8 = plVar8 + -5) {
          if ((*(byte *)(plVar8 + -4) & 1) != 0) {
            func_0x0412a280(plVar8[-2],plVar8[-4] & 0xfffffffffffffffe);
          }
        }
        in_stack_00000028 = plVar15;
        func_0x0412a280(in_stack_00000020,
                        CONCAT44(uStack0000000000000034,uStack0000000000000030) -
                        (long)in_stack_00000020);
      }
      return;
    }
    uVar6 = func_0x04862ca0(&stack0x000000a8);
    uVar7 = func_0x0eee2e90(uVar6);
    if (0xfffffffffffffff7 < uVar7) {
LAB_04e60640:
      func_0x04882e30();
LAB_04e60645:
      func_0x04e61280();
LAB_04e6064a:
      uVar6 = func_0x04882eb0();
      func_0x041084d6(&DAT_0f7ba228);
      uVar6 = func_0x04882e20(uVar6);
      func_0x0412d6b0(&DAT_0f7ba1d0);
      uVar6 = func_0x04882e20(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      func_0x04e61290(&stack0x00000068);
      func_0x04e61210(&stack0x00000020);
      uVar6 = func_0x0eee2d70(uVar6);
      func_0x04e61210(&stack0x00000020);
      uVar6 = func_0x0eee2d70(uVar6);
      func_0x0ee386e0(&stack0x000000c0);
      func_0x04e61210(&stack0x00000020);
      uVar6 = func_0x0eee2d70(uVar6);
      func_0x0eeb81b0(&stack0x00000040);
      func_0x04e61210(&stack0x00000020);
      func_0x0eee2d70(uVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 < 0x17) {
      _cStack0000000000000040 = CONCAT71(uStack0000000000000041,(char)uVar7 * '\x02');
      plVar8 = (long *)((long)&stack0x00000040 + 1);
      if (uVar7 != 0) goto LAB_04e5fcbb;
    }
    else {
      uVar17 = (uVar7 | 7) + 1;
      if ((uVar7 | 7) == 0x17) {
        uVar17 = 0x1a;
      }
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(uVar17,0);
      }
      _cStack0000000000000040 = uVar17 | 1;
      _uStack0000000000000048 = uVar7;
      in_stack_00000050 = plVar8;
LAB_04e5fcbb:
      func_0x0eee2ee0(plVar8,uVar6,uVar7);
    }
    *(undefined1 *)((long)plVar8 + uVar7) = 0;
    in_stack_00000070 = _cStack0000000000000040 >> 1 & 0x7f;
    in_stack_00000068 = (long *)((long)&stack0x00000040 + 1);
    if ((_cStack0000000000000040 & 1) != 0) {
      in_stack_00000070 = _uStack0000000000000048;
      in_stack_00000068 = in_stack_00000050;
    }
    in_stack_00000078 = (long *)CONCAT71(in_stack_00000078._1_7_,1);
    in_stack_000000b8 = 0;
    func_0x0eeb79f0(&stack0x000000c0,&stack0x000000b8);
    if ((in_stack_000000b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000b8 & 0xff00ffffffffffff) - 8);
    }
    uVar6 = func_0x04862b80(&stack0x000000a8);
    lVar9 = func_0x04e60d90(in_stack_00000058,in_stack_00000060,&stack0x00000040,uVar6);
    in_stack_00000090 = (long *)func_0x04862b80(&stack0x000000a8);
    plVar15 = in_stack_00000028;
    plVar8 = in_stack_00000020;
    if (in_stack_00000028 < (long *)CONCAT44(uStack0000000000000034,uStack0000000000000030)) {
      *in_stack_00000028 = lVar9;
      if ((_cStack0000000000000040 & 1) == 0) {
        in_stack_00000028[3] = (long)in_stack_00000050;
        *(undefined4 *)(in_stack_00000028 + 1) = _cStack0000000000000040;
        *(undefined4 *)((long)in_stack_00000028 + 0xc) = uStack0000000000000041._3_4_;
        *(undefined4 *)(in_stack_00000028 + 2) = uStack0000000000000048;
        *(undefined4 *)((long)in_stack_00000028 + 0x14) = uStack000000000000004c;
      }
      else {
        func_0x0412e5e0(in_stack_00000028 + 1,in_stack_00000050,_uStack0000000000000048);
      }
      plVar15[4] = (long)in_stack_00000090;
      plVar15 = plVar15 + 5;
      plVar11 = in_stack_00000020;
    }
    else {
      lVar19 = (long)in_stack_00000028 - (long)in_stack_00000020;
      uVar7 = (lVar19 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar7) goto LAB_04e60645;
      lVar10 = (long)CONCAT44(uStack0000000000000034,uStack0000000000000030) -
               (long)in_stack_00000020 >> 3;
      uVar17 = lVar10 * -0x6666666666666666;
      if (uVar7 < uVar17) {
        uVar7 = uVar17;
      }
      if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
        uVar7 = 0x666666666666666;
      }
      in_stack_00000088 = &stack0x00000020;
      if (uVar7 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        if (0x666666666666666 < uVar7) goto LAB_04e6064a;
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7 * 0x28);
        if (plVar11 == (long *)0x0) {
          func_0x0eec74c0(uVar7 * 0x28,0);
          plVar11 = (long *)0x0;
        }
      }
      uVar17 = (long)plVar11 + lVar19;
      _uStack0000000000000080 = plVar11 + uVar7 * 5;
      *(long *)((long)plVar11 + lVar19) = lVar9;
      puVar16 = (undefined4 *)((long)plVar11 + lVar19 + 8);
      in_stack_00000078 = (long *)uVar17;
      in_stack_00000070 = uVar17;
      in_stack_00000068 = plVar11;
      if ((_cStack0000000000000040 & 1) == 0) {
        *(long **)((long)plVar11 + lVar19 + 0x18) = in_stack_00000050;
        *puVar16 = _cStack0000000000000040;
        *(undefined4 *)((long)plVar11 + lVar19 + 0xc) = uStack0000000000000041._3_4_;
        *(undefined4 *)((long)plVar11 + lVar19 + 0x10) = uStack0000000000000048;
        *(undefined4 *)((long)plVar11 + lVar19 + 0x14) = uStack000000000000004c;
      }
      else {
        func_0x0412e5e0(puVar16,in_stack_00000050,_uStack0000000000000048);
        lVar19 = (long)in_stack_00000028 - (long)in_stack_00000020;
        plVar15 = in_stack_00000028;
        plVar8 = in_stack_00000020;
      }
      plVar11 = (long *)(in_stack_00000070 - lVar19);
      *(long **)(uVar17 + 0x20) = in_stack_00000090;
      in_stack_00000078 = (long *)((long)in_stack_00000078 + 0x28);
      func_0x04e61300(&stack0x00000020,plVar8,plVar15,plVar11);
      plVar15 = in_stack_00000078;
      plVar8 = in_stack_00000020;
      lVar9 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      in_stack_00000028 = in_stack_00000078;
      uStack0000000000000030 = uStack0000000000000080;
      uStack0000000000000034 = uStack0000000000000084;
      if (in_stack_00000020 != (long *)0x0) {
        lVar9 = lVar9 - (long)in_stack_00000020;
        in_stack_00000020 = plVar11;
        func_0x0412a280(plVar8,lVar9);
        plVar11 = in_stack_00000020;
      }
    }
    in_stack_00000020 = plVar11;
    in_stack_00000028 = plVar15;
    func_0x0eeb81b0(&stack0x000000c0);
    if ((_cStack0000000000000040 & 1) != 0) {
      func_0x0412a280(in_stack_00000050,_cStack0000000000000040 & 0xfffffffffffffffe);
    }
    func_0x04862ba0(&stack0x000000a8);
  } while( true );
}


```
