/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d59a0
 * Label: br::worldgen::WorldGenRandom::vslot2
 * Body:  [[0d1d59a0, 0d1d5a07] [0d1d5a10, 0d1d5a3d]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1d66a9) */
/* WARNING: Removing unreachable block (ram,0x0d1d66e3) */
/* WARNING: Removing unreachable block (ram,0x0d1d66f5) */
/* WARNING: Removing unreachable block (ram,0x0d1d672c) */
/* WARNING: Removing unreachable block (ram,0x0d1d6741) */
/* WARNING: Removing unreachable block (ram,0x0d1d6751) */
/* WARNING: Removing unreachable block (ram,0x0d1d6760) */
/* WARNING: Removing unreachable block (ram,0x0d1d6771) */
/* WARNING: Removing unreachable block (ram,0x0d1d6779) */
/* WARNING: Removing unreachable block (ram,0x0d1d6791) */
/* WARNING: Removing unreachable block (ram,0x0d1d679e) */
/* WARNING: Removing unreachable block (ram,0x0d1d67b9) */
/* WARNING: Removing unreachable block (ram,0x0d1d67c0) */
/* WARNING: Removing unreachable block (ram,0x0d1d67c7) */
/* WARNING: Removing unreachable block (ram,0x0d1d67b0) */
/* WARNING: Removing unreachable block (ram,0x0d1d67da) */
/* WARNING: Removing unreachable block (ram,0x0d1d67ae) */
/* WARNING: Removing unreachable block (ram,0x0d1d67e2) */
/* WARNING: Removing unreachable block (ram,0x0d1d67fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__WorldGenRandom__vslot2(void)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  byte bVar8;
  int iVar9;
  char *in_RAX;
  char in_CL;
  ulong uVar10;
  long unaff_RBX;
  undefined8 unaff_RBP;
  byte *pbVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 unaff_R13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte *unaff_R15;
  bool bVar17;
  undefined8 *unaff_retaddr;
  
  pcVar1 = (char *)(CONCAT71((int7)((ulong)in_RAX >> 8),(char)in_RAX + *in_RAX) + -0x75);
  *pcVar1 = *pcVar1 + in_CL;
  if (unaff_RBX != 0) {
    lVar15 = unaff_retaddr[6];
    while (unaff_RBX != lVar15) {
      lVar15 = lVar15 + -0x40;
      unaff_retaddr[-1] = 0xd1d59cc;
      func_0x048b3e80(lVar15);
    }
    unaff_retaddr[6] = unaff_RBX;
    unaff_retaddr[-1] = 0xd1d59e8;
    func_0x0412a280();
  }
  lVar15 = unaff_retaddr[2];
  if (lVar15 != 0) {
    lVar16 = unaff_retaddr[3];
    lVar12 = lVar15;
    if (lVar15 != lVar16) {
      do {
        if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
          uVar14 = *(ulong *)(lVar16 + -0x30);
          uVar6 = *(undefined8 *)(lVar16 + -0x20);
          unaff_retaddr[-1] = 0xd1d5a3c;
          func_0x0412a280(uVar6,uVar14 & 0xfffffffffffffffe);
        }
        lVar16 = lVar16 + -0x50;
      } while (lVar16 != lVar15);
      lVar12 = unaff_retaddr[2];
    }
    unaff_retaddr[3] = lVar15;
    unaff_retaddr[-1] = &LAB_0d1d5bbf;
    func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
  }
  unaff_retaddr[0x2f] = 0;
  plVar4 = (long *)unaff_retaddr[0xe];
  lVar15 = plVar4[3];
  if (lVar15 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = (undefined *)(lVar15 + 8);
    unaff_retaddr[-1] = 0xd1d5be5;
    func_0x0412d770(puVar13);
  }
  pcVar5 = *(code **)(*plVar4 + 0x80);
  unaff_retaddr[-1] = 0xd1d5c01;
  (*pcVar5)(unaff_retaddr,plVar4,unaff_retaddr + 0x2f);
  if (lVar15 != 0) {
    unaff_retaddr[-1] = &LAB_0d1d5c0e;
    func_0x0412d790(puVar13);
  }
  unaff_retaddr[0x14] = unaff_R13;
  unaff_retaddr[0x15] = &UNK_0140f690;
  unaff_retaddr[0x16] = 1;
  *(undefined4 *)(unaff_retaddr + 0x17) = 0x1f8;
  bVar8 = *(byte *)(unaff_retaddr + 8);
  if (bVar8 == 0) {
    *(undefined1 (*) [16])(unaff_retaddr + 10) = (undefined1  [16])0x0;
    unaff_retaddr[0xc] = 0;
    unaff_retaddr[-1] = 0xd1d5c77;
    func_0x0eedeb80(2,0x2d,unaff_retaddr,unaff_retaddr + 10,unaff_retaddr + 0x14);
    if ((*(byte *)(unaff_retaddr + 10) & 1) != 0) {
      unaff_retaddr[-1] = &LAB_0d1d5c91;
      func_0x0412a280(unaff_retaddr[0xc],unaff_retaddr[10] & 0xfffffffffffffffe);
    }
    bVar8 = *(byte *)(unaff_retaddr + 8);
  }
  if ((bVar8 & 1) == 0) {
    lVar15 = unaff_retaddr[5];
    if (lVar15 != 0) {
      lVar16 = unaff_retaddr[6];
      lVar12 = lVar15;
      if (lVar15 != lVar16) {
        do {
          lVar16 = lVar16 + -0x40;
          unaff_retaddr[-1] = 0xd1d5ccc;
          func_0x048b3e80(lVar16);
        } while (lVar16 != lVar15);
        lVar12 = unaff_retaddr[5];
      }
      unaff_retaddr[6] = lVar15;
      unaff_retaddr[-1] = &LAB_0d1d5ce8;
      func_0x0412a280(lVar12,unaff_retaddr[7] - lVar12);
    }
    lVar15 = unaff_retaddr[2];
    if (lVar15 != 0) {
      lVar16 = unaff_retaddr[3];
      lVar12 = lVar15;
      if (lVar15 != lVar16) {
        do {
          if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
            uVar14 = *(ulong *)(lVar16 + -0x30);
            uVar6 = *(undefined8 *)(lVar16 + -0x20);
            unaff_retaddr[-1] = 0xd1d5d38;
            func_0x0412a280(uVar6,uVar14 & 0xfffffffffffffffe);
          }
          lVar16 = lVar16 + -0x50;
        } while (lVar16 != lVar15);
        lVar12 = unaff_retaddr[2];
      }
      unaff_retaddr[3] = lVar15;
      unaff_retaddr[-1] = &LAB_0d1d5d51;
      func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
    }
  }
  uVar14 = unaff_retaddr[0x32];
  if (uVar14 - 1 < (ulong)unaff_retaddr[0x2f]) {
    if (uVar14 < 0xfffffffffffffff8) {
      if (uVar14 < 0x17) {
        *(char *)(unaff_retaddr + 0x11) = (char)uVar14 * '\x02';
        lVar15 = (long)unaff_retaddr + 0x89;
      }
      else {
        uVar10 = 0x1a;
        if ((uVar14 | 7) != 0x17) {
          uVar10 = (uVar14 | 7) + 1;
        }
        pcVar5 = *(code **)(_DAT_0f5463b0 + 0x10);
        unaff_retaddr[-1] = 0xd1d5df4;
        lVar15 = (*pcVar5)(&DAT_0f5463b0,uVar10);
        if (lVar15 == 0) {
          unaff_retaddr[-1] = 0xd1d6943;
          func_0x0eec74c0(uVar10,0);
        }
        unaff_retaddr[0x13] = lVar15;
        unaff_retaddr[0x11] = uVar10 | 1;
        unaff_retaddr[0x12] = uVar14;
      }
      lVar16 = (long)unaff_retaddr + 0x89;
      unaff_retaddr[-1] = 0xd1d5e31;
      func_0x0eee2dd0(lVar15,0,uVar14);
      *(undefined1 *)(lVar15 + uVar14) = 0;
      if ((*(byte *)(unaff_retaddr + 0x11) & 1) != 0) {
        lVar16 = unaff_retaddr[0x13];
      }
      unaff_retaddr[-1] = 0xd1d5e5b;
      func_0x0ee76a70(unaff_retaddr,unaff_retaddr[0xe],lVar16,uVar14);
      puVar13 = &UNK_0140f690;
      uVar14 = 0xa18c50c1ac79b4c3;
      unaff_retaddr[0x14] = 0xa18c50c1ac79b4c3;
      unaff_retaddr[0x15] = &UNK_0140f690;
      unaff_retaddr[0x16] = 1;
      *(undefined4 *)(unaff_retaddr + 0x17) = 0x1fd;
      bVar8 = *(byte *)(unaff_retaddr + 8);
      if (bVar8 == 0) {
        *(undefined1 (*) [16])(unaff_retaddr + 10) = (undefined1  [16])0x0;
        unaff_retaddr[0xc] = 0;
        unaff_retaddr[-1] = 0xd1d5ece;
        func_0x0eedeb80(2,0x2d,unaff_retaddr,unaff_retaddr + 10,unaff_retaddr + 0x14);
        if ((*(byte *)(unaff_retaddr + 10) & 1) != 0) {
          unaff_retaddr[-1] = &LAB_0d1d5ee8;
          func_0x0412a280(unaff_retaddr[0xc],unaff_retaddr[10] & 0xfffffffffffffffe);
        }
        bVar8 = *(byte *)(unaff_retaddr + 8);
      }
      if ((bVar8 & 1) == 0) {
        lVar15 = unaff_retaddr[5];
        if (lVar15 != 0) {
          lVar16 = unaff_retaddr[6];
          lVar12 = lVar15;
          if (lVar15 != lVar16) {
            do {
              lVar16 = lVar16 + -0x40;
              unaff_retaddr[-1] = 0xd1d5f1c;
              func_0x048b3e80(lVar16);
            } while (lVar16 != lVar15);
            lVar12 = unaff_retaddr[5];
          }
          unaff_retaddr[6] = lVar15;
          unaff_retaddr[-1] = &LAB_0d1d5f38;
          func_0x0412a280(lVar12,unaff_retaddr[7] - lVar12);
        }
        lVar15 = unaff_retaddr[2];
        if (lVar15 != 0) {
          lVar16 = unaff_retaddr[3];
          lVar12 = lVar15;
          if (lVar15 != lVar16) {
            do {
              if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
                uVar10 = *(ulong *)(lVar16 + -0x30);
                uVar6 = *(undefined8 *)(lVar16 + -0x20);
                unaff_retaddr[-1] = 0xd1d5f88;
                func_0x0412a280(uVar6,uVar10 & 0xfffffffffffffffe);
              }
              lVar16 = lVar16 + -0x50;
            } while (lVar16 != lVar15);
            lVar12 = unaff_retaddr[2];
          }
          unaff_retaddr[3] = lVar15;
          unaff_retaddr[-1] = 0xd1d5fa1;
          func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
        }
      }
      unaff_retaddr[-1] = 0xd1d5fae;
      func_0x0ee56810(unaff_retaddr,unaff_retaddr + 0xe);
      unaff_retaddr[0x14] = 0xa18c50c1ac79b4c3;
      unaff_retaddr[0x15] = &UNK_0140f690;
      unaff_retaddr[0x16] = 1;
      *(undefined4 *)(unaff_retaddr + 0x17) = 0x1fe;
      bVar8 = *(byte *)(unaff_retaddr + 8);
      if (bVar8 == 0) {
        *(undefined1 (*) [16])(unaff_retaddr + 10) = (undefined1  [16])0x0;
        unaff_retaddr[0xc] = 0;
        unaff_retaddr[-1] = 0xd1d6010;
        func_0x0eedeb80(2,0x2d,unaff_retaddr,unaff_retaddr + 10,unaff_retaddr + 0x14);
        if ((*(byte *)(unaff_retaddr + 10) & 1) != 0) {
          unaff_retaddr[-1] = 0xd1d602a;
          func_0x0412a280(unaff_retaddr[0xc],unaff_retaddr[10] & 0xfffffffffffffffe);
        }
        bVar8 = *(byte *)(unaff_retaddr + 8);
      }
      if ((bVar8 & 1) == 0) {
        lVar15 = unaff_retaddr[5];
        if (lVar15 != 0) {
          lVar16 = unaff_retaddr[6];
          lVar12 = lVar15;
          if (lVar15 != lVar16) {
            do {
              lVar16 = lVar16 + -0x40;
              unaff_retaddr[-1] = 0xd1d605c;
              func_0x048b3e80(lVar16);
            } while (lVar16 != lVar15);
            lVar12 = unaff_retaddr[5];
          }
          unaff_retaddr[6] = lVar15;
          unaff_retaddr[-1] = 0xd1d6078;
          func_0x0412a280(lVar12,unaff_retaddr[7] - lVar12);
        }
        lVar15 = unaff_retaddr[2];
        if (lVar15 != 0) {
          lVar16 = unaff_retaddr[3];
          lVar12 = lVar15;
          if (lVar15 != lVar16) {
            do {
              if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
                uVar10 = *(ulong *)(lVar16 + -0x30);
                uVar6 = *(undefined8 *)(lVar16 + -0x20);
                unaff_retaddr[-1] = 0xd1d60c8;
                func_0x0412a280(uVar6,uVar10 & 0xfffffffffffffffe);
              }
              lVar16 = lVar16 + -0x50;
            } while (lVar16 != lVar15);
            lVar12 = unaff_retaddr[2];
          }
          unaff_retaddr[3] = lVar15;
          unaff_retaddr[-1] = 0xd1d60e1;
          func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
        }
      }
      if (DAT_0f7b8fb8 == '\0') goto LAB_0d1d699d;
    }
    else {
      unaff_retaddr[-1] = 0xd1d699d;
      func_0x04882e30();
LAB_0d1d699d:
      unaff_retaddr[-1] = 0xd1d69a9;
      iVar9 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar9 != 0) {
        unaff_retaddr[-1] = 0xd1d69bd;
        func_0x0ee5ea20(&DAT_0f7b8f98);
        unaff_retaddr[-1] = 0xd1d69d7;
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        unaff_retaddr[-1] = 0xd1d69e3;
        func_0x0410844d(&DAT_0f7b8fb8);
        uVar14 = 0xa18c50c1ac79b4c3;
        puVar13 = &UNK_0140f690;
      }
    }
    bVar17 = (*(byte *)(unaff_retaddr + 0x2b) & 1) != 0;
    if (bVar17) {
      unaff_RBP = unaff_retaddr[0x2d];
    }
    uVar10 = (ulong)(*(byte *)(unaff_retaddr + 0x2b) >> 1);
    if (bVar17) {
      uVar10 = unaff_retaddr[0x2c];
    }
    unaff_retaddr[0x35] = unaff_RBP;
    unaff_retaddr[0x36] = uVar10;
    pcVar5 = *(code **)(_DAT_0f7b8f98 + 0x20);
    unaff_retaddr[-1] = 0xd1d613c;
    (*pcVar5)(unaff_retaddr,&DAT_0f7b8f98,unaff_retaddr + 0x35);
    unaff_retaddr[0x14] = uVar14;
    unaff_retaddr[0x15] = puVar13;
    unaff_retaddr[0x16] = 1;
    *(undefined4 *)(unaff_retaddr + 0x17) = 0x201;
    bVar8 = *(byte *)(unaff_retaddr + 8);
    if (bVar8 == 0) {
      *(undefined1 (*) [16])(unaff_retaddr + 10) = (undefined1  [16])0x0;
      unaff_retaddr[0xc] = 0;
      unaff_retaddr[-1] = 0xd1d619e;
      func_0x0eedeb80(2,0x2d,unaff_retaddr,unaff_retaddr + 10,unaff_retaddr + 0x14);
      if ((*(byte *)(unaff_retaddr + 10) & 1) != 0) {
        unaff_retaddr[-1] = 0xd1d61b8;
        func_0x0412a280(unaff_retaddr[0xc],unaff_retaddr[10] & 0xfffffffffffffffe);
      }
      bVar8 = *(byte *)(unaff_retaddr + 8);
    }
    if ((bVar8 & 1) == 0) {
      lVar15 = unaff_retaddr[5];
      if (lVar15 != 0) {
        lVar16 = unaff_retaddr[6];
        lVar12 = lVar15;
        if (lVar15 != lVar16) {
          do {
            lVar16 = lVar16 + -0x40;
            unaff_retaddr[-1] = 0xd1d61ec;
            func_0x048b3e80(lVar16);
          } while (lVar16 != lVar15);
          lVar12 = unaff_retaddr[5];
        }
        unaff_retaddr[6] = lVar15;
        unaff_retaddr[-1] = 0xd1d6208;
        func_0x0412a280(lVar12,unaff_retaddr[7] - lVar12);
      }
      lVar15 = unaff_retaddr[2];
      if (lVar15 != 0) {
        lVar16 = unaff_retaddr[3];
        lVar12 = lVar15;
        if (lVar15 != lVar16) {
          do {
            if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
              uVar10 = *(ulong *)(lVar16 + -0x30);
              uVar6 = *(undefined8 *)(lVar16 + -0x20);
              unaff_retaddr[-1] = 0xd1d6258;
              func_0x0412a280(uVar6,uVar10 & 0xfffffffffffffffe);
            }
            lVar16 = lVar16 + -0x50;
          } while (lVar16 != lVar15);
          lVar12 = unaff_retaddr[2];
        }
        unaff_retaddr[3] = lVar15;
        unaff_retaddr[-1] = 0xd1d6271;
        func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
      }
    }
    if (DAT_0f7b8fb8 == '\0') {
      unaff_retaddr[-1] = 0xd1d6a05;
      iVar9 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar9 != 0) {
        unaff_retaddr[-1] = 0xd1d6a19;
        func_0x0ee5ea20(&DAT_0f7b8f98);
        unaff_retaddr[-1] = 0xd1d6a33;
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        unaff_retaddr[-1] = 0xd1d6a3f;
        func_0x0410844d(&DAT_0f7b8fb8);
        uVar14 = 0xa18c50c1ac79b4c3;
        puVar13 = &UNK_0140f690;
      }
    }
    unaff_retaddr[0x33] = unaff_retaddr + 0x39;
    unaff_retaddr[0x34] = unaff_retaddr[0xb9];
    pcVar5 = *(code **)(_DAT_0f7b8f98 + 0x90);
    unaff_retaddr[-1] = 0xd1d62bf;
    (*pcVar5)(unaff_retaddr,&DAT_0f7b8f98,unaff_retaddr + 0x33);
    unaff_retaddr[0x14] = uVar14;
    unaff_retaddr[0x15] = puVar13;
    unaff_retaddr[0x16] = 1;
    *(undefined4 *)(unaff_retaddr + 0x17) = 0x202;
    bVar8 = *(byte *)(unaff_retaddr + 8);
    if (bVar8 == 0) {
      *(undefined1 (*) [16])(unaff_retaddr + 10) = (undefined1  [16])0x0;
      unaff_retaddr[0xc] = 0;
      unaff_retaddr[-1] = 0xd1d6321;
      func_0x0eedeb80(2,0x2d,unaff_retaddr,unaff_retaddr + 10,unaff_retaddr + 0x14);
      if ((*(byte *)(unaff_retaddr + 10) & 1) != 0) {
        unaff_retaddr[-1] = 0xd1d633b;
        func_0x0412a280(unaff_retaddr[0xc],unaff_retaddr[10] & 0xfffffffffffffffe);
      }
      bVar8 = *(byte *)(unaff_retaddr + 8);
    }
    if ((bVar8 & 1) == 0) {
      lVar15 = unaff_retaddr[5];
      if (lVar15 != 0) {
        lVar16 = unaff_retaddr[6];
        lVar12 = lVar15;
        if (lVar15 != lVar16) {
          do {
            lVar16 = lVar16 + -0x40;
            unaff_retaddr[-1] = 0xd1d636c;
            func_0x048b3e80(lVar16);
          } while (lVar16 != lVar15);
          lVar12 = unaff_retaddr[5];
        }
        unaff_retaddr[6] = lVar15;
        unaff_retaddr[-1] = 0xd1d6388;
        func_0x0412a280(lVar12,unaff_retaddr[7] - lVar12);
      }
      lVar15 = unaff_retaddr[2];
      if (lVar15 != 0) {
        lVar16 = unaff_retaddr[3];
        lVar12 = lVar15;
        if (lVar15 != lVar16) {
          do {
            if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
              uVar10 = *(ulong *)(lVar16 + -0x30);
              uVar6 = *(undefined8 *)(lVar16 + -0x20);
              unaff_retaddr[-1] = 0xd1d63d8;
              func_0x0412a280(uVar6,uVar10 & 0xfffffffffffffffe);
            }
            lVar16 = lVar16 + -0x50;
          } while (lVar16 != lVar15);
          lVar12 = unaff_retaddr[2];
        }
        unaff_retaddr[3] = lVar15;
        unaff_retaddr[-1] = 0xd1d63f1;
        func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
      }
    }
    bVar17 = (*(byte *)(unaff_retaddr + 0x11) & 1) != 0;
    lVar15 = (long)unaff_retaddr + 0x89;
    if (bVar17) {
      lVar15 = unaff_retaddr[0x13];
    }
    uVar10 = (ulong)(*(byte *)(unaff_retaddr + 0x11) >> 1);
    if (bVar17) {
      uVar10 = unaff_retaddr[0x12];
    }
    *unaff_retaddr = &UNK_0ef9fd98;
    unaff_retaddr[1] = 0;
    unaff_retaddr[2] = lVar15;
    unaff_retaddr[3] = uVar10;
    unaff_retaddr[-1] = 0xd1d6444;
    func_0x0d6c71b0(unaff_retaddr + 10,unaff_retaddr);
    *(undefined1 *)(unaff_retaddr + 0x1c) = 1;
    unaff_retaddr[0x14] = unaff_retaddr[10];
    if ((*(byte *)(unaff_retaddr + 0x11) & 1) != 0) {
      unaff_retaddr[-1] = 0xd1d647c;
      func_0x0412a280(unaff_retaddr[0x13],unaff_retaddr[0x11] & 0xfffffffffffffffe);
    }
    cVar3 = *(char *)(unaff_retaddr + 0x2a);
  }
  else {
    *(undefined1 *)(unaff_retaddr + 0x1c) = 1;
    unaff_retaddr[0x14] = 0;
    uVar14 = 0xa18c50c1ac79b4c3;
    cVar3 = *(char *)(unaff_retaddr + 0x2a);
  }
  if (cVar3 == '\0') {
    lVar15 = unaff_retaddr[0x27];
    if (lVar15 != 0) {
      lVar16 = unaff_retaddr[0x28];
      lVar12 = lVar15;
      if (lVar15 != lVar16) {
        do {
          lVar16 = lVar16 + -0x40;
          unaff_retaddr[-1] = 0xd1d64bc;
          func_0x048b3e80(lVar16);
        } while (lVar16 != lVar15);
        lVar12 = unaff_retaddr[0x27];
      }
      unaff_retaddr[0x28] = lVar15;
      unaff_retaddr[-1] = 0xd1d64e1;
      func_0x0412a280(lVar12,unaff_retaddr[0x29] - lVar12);
    }
    lVar15 = unaff_retaddr[0x24];
    if (lVar15 != 0) {
      lVar16 = unaff_retaddr[0x25];
      lVar12 = lVar15;
      if (lVar15 != lVar16) {
        do {
          if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
            uVar10 = *(ulong *)(lVar16 + -0x30);
            uVar6 = *(undefined8 *)(lVar16 + -0x20);
            unaff_retaddr[-1] = 0xd1d6528;
            func_0x0412a280(uVar6,uVar10 & 0xfffffffffffffffe);
          }
          lVar16 = lVar16 + -0x50;
        } while (lVar16 != lVar15);
        lVar12 = unaff_retaddr[0x24];
      }
      unaff_retaddr[0x25] = lVar15;
      unaff_retaddr[-1] = 0xd1d654a;
      func_0x0412a280(lVar12,unaff_retaddr[0x26] - lVar12);
    }
  }
  if (unaff_retaddr[0xe] != 0) {
    unaff_retaddr[-1] = 0xd1d6563;
    func_0x0ee56810(unaff_retaddr,unaff_retaddr + 0xe);
    if (*(char *)(unaff_retaddr + 8) == '\0') {
      lVar15 = unaff_retaddr[5];
      if (lVar15 != 0) {
        lVar16 = unaff_retaddr[6];
        lVar12 = lVar15;
        if (lVar15 != lVar16) {
          do {
            lVar16 = lVar16 + -0x40;
            unaff_retaddr[-1] = 0xd1d659c;
            func_0x048b3e80(lVar16);
          } while (lVar16 != lVar15);
          lVar12 = unaff_retaddr[5];
        }
        unaff_retaddr[6] = lVar15;
        unaff_retaddr[-1] = 0xd1d65b8;
        func_0x0412a280(lVar12,unaff_retaddr[7] - lVar12);
      }
      lVar15 = unaff_retaddr[2];
      if (lVar15 != 0) {
        lVar16 = unaff_retaddr[3];
        lVar12 = lVar15;
        if (lVar15 != lVar16) {
          do {
            if ((*(char *)(lVar16 + -8) == '\x01') && ((*(byte *)(lVar16 + -0x30) & 1) != 0)) {
              uVar10 = *(ulong *)(lVar16 + -0x30);
              uVar6 = *(undefined8 *)(lVar16 + -0x20);
              unaff_retaddr[-1] = 0xd1d6608;
              func_0x0412a280(uVar6,uVar10 & 0xfffffffffffffffe);
            }
            lVar16 = lVar16 + -0x50;
          } while (lVar16 != lVar15);
          lVar12 = unaff_retaddr[2];
        }
        unaff_retaddr[3] = lVar15;
        unaff_retaddr[-1] = 0xd1d6621;
        func_0x0412a280(lVar12,unaff_retaddr[4] - lVar12);
      }
    }
  }
  plVar4 = (long *)unaff_retaddr[0xf];
  unaff_retaddr[0xf] = 0;
  if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 8);
    unaff_retaddr[-1] = 0xd1d663a;
    (*pcVar5)();
  }
  plVar4 = (long *)unaff_retaddr[0xe];
  unaff_retaddr[0xe] = 0;
  if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 8);
    unaff_retaddr[-1] = 0xd1d6653;
    (*pcVar5)();
  }
  if ((*(byte *)(unaff_retaddr + 0x2b) & 1) != 0) {
    unaff_retaddr[-1] = 0xd1d6676;
    func_0x0412a280(unaff_retaddr[0x2d],unaff_retaddr[0x2b] & 0xfffffffffffffffe);
  }
  unaff_retaddr[0x39] = uVar14;
  unaff_retaddr[0x3a] = &UNK_0140f690;
  unaff_retaddr[0x3b] = 1;
  *(undefined4 *)(unaff_retaddr + 0x3c) = 0x20a;
  plVar4 = (long *)unaff_retaddr[0xd];
  uVar6 = unaff_retaddr[0x2e];
  plVar7 = (long *)*plVar4;
  *plVar4 = unaff_retaddr[0x14];
  if (plVar7 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar7 + 8);
    unaff_retaddr[-1] = 0xd1d6812;
    (*pcVar5)();
  }
  if ((*(byte *)(unaff_retaddr + 0x1e) & 1) != 0) {
    unaff_retaddr[-1] = 0xd1d6835;
    func_0x0412a280(unaff_retaddr[0x20],unaff_retaddr[0x1e] & 0xfffffffffffffffe);
  }
  lVar15 = *plVar4;
  if (lVar15 == 0) goto LAB_0d1d68c9;
  bVar17 = (*unaff_R15 & 1) != 0;
  pbVar11 = unaff_R15 + 1;
  if (bVar17) {
    pbVar11 = *(byte **)(unaff_R15 + 0x10);
  }
  uVar14 = (ulong)(*unaff_R15 >> 1);
  if (bVar17) {
    uVar14 = *(ulong *)(unaff_R15 + 8);
  }
  unaff_retaddr[-1] = 0xd1d6866;
  func_0x0d1d3090(unaff_retaddr + 0x39,pbVar11,uVar14);
  unaff_retaddr[-1] = 0xd1d6887;
  func_0x0d21ed30(unaff_retaddr + 0x37,uVar6,unaff_retaddr + 0x39,lVar15,8);
  plVar7 = (long *)unaff_retaddr[0x38];
  if (plVar7 == (long *)0x0) {
LAB_0d1d68a6:
    bVar8 = *(byte *)(unaff_retaddr + 0x39);
  }
  else {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 != 0) goto LAB_0d1d68a6;
    pcVar5 = *(code **)(*plVar7 + 0x10);
    unaff_retaddr[-1] = 0xd1d68f4;
    (*pcVar5)(plVar7);
    unaff_retaddr[-1] = 0xd1d68fc;
    func_0x0412c2d0(plVar7);
    bVar8 = *(byte *)(unaff_retaddr + 0x39);
  }
  if ((bVar8 & 1) != 0) {
    unaff_retaddr[-1] = 0xd1d68c9;
    func_0x0412a280(unaff_retaddr[0x3b],unaff_retaddr[0x39] & 0xfffffffffffffffe);
  }
LAB_0d1d68c9:
  unaff_retaddr[-1] = 0xd1d68d6;
  func_0x0d20be50(unaff_retaddr + 0xba);
  return plVar4;
}


