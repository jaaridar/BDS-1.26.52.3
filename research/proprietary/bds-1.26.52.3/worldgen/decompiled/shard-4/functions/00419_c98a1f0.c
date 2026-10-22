/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca8a1f0 (ELF vaddr 0xc98a1f0)
 * Label: callee-of:0x517c470
 * Body:  [[0ca8a1f0, 0ca8a250] [0ca8a260, 0ca8a27b] [0ca8a280, 0ca8a4a6] [0ca8a4b0, 0ca8a5cc] [0ca8a5d0, 0ca8a6a4]]
 * Ghidra: FUN_0ca8a1f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0ca8a1f0(ulong *param_1,undefined8 param_2,uint *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  ulong *puStack_60;
  long *plStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_50 = (ulong)*param_3;
  uStack_38 = (ulong)param_3[1];
  iVar11 = *param_3 - 1;
  uVar17 = (ulong)(param_3[1] - 1);
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  puStack_60 = param_1;
  plStack_58 = param_4;
  uStack_40 = uVar17;
  do {
    uStack_90 = CONCAT44((int)uVar17,iVar11);
    do {
      (**(code **)(*param_4 + 0x20))(&lStack_70,param_4,&uStack_90);
      lVar13 = lStack_70;
      plVar2 = plStack_88;
      plVar19 = plStack_80;
      plVar14 = plStack_78;
      if (lStack_70 != 0) {
        cVar10 = func_0x0412d6a0(lStack_70);
        plVar2 = plStack_68;
        plVar19 = plStack_80;
        if (cVar10 == '\0') {
          *(undefined1 *)puStack_60 = 0;
          *(undefined1 *)(puStack_60 + 3) = 0;
          if (plStack_68 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_68 + 1;
            lVar13 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              func_0x0412c2d0(plStack_68);
            }
          }
          plVar19 = plStack_88;
          plVar2 = plStack_80;
          if (plStack_88 == (long *)0x0) {
            return puStack_60;
          }
          for (; plVar19 != plVar2; plVar2 = plVar2 + -4) {
            if ((char)plVar2[-1] == '\x01') {
              func_0x0412d6b0(plVar2[-2]);
            }
            plVar14 = (long *)plVar2[-3];
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar20 = plVar14 + 1;
              lVar13 = *plVar20;
              *plVar20 = *plVar20 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
          }
          func_0x0412a280(plStack_88,(long)plStack_78 - (long)plStack_88);
          return puStack_60;
        }
        if (plStack_80 < plStack_78) {
          if (plStack_68 == (long *)0x0) {
            *plStack_80 = lStack_70;
            plStack_80[1] = 0;
            plStack_80[2] = lVar13;
            *(char *)(plStack_80 + 3) = cVar10;
            uVar17 = uStack_40;
            plVar2 = plStack_88;
            plVar19 = plStack_80 + 4;
            plVar14 = plStack_78;
          }
          else {
            LOCK();
            plStack_68[1] = plStack_68[1] + 1;
            UNLOCK();
            *plStack_80 = lStack_70;
            plStack_80[1] = (long)plStack_68;
            LOCK();
            plStack_68[1] = plStack_68[1] + 1;
            UNLOCK();
            plStack_80[2] = lVar13;
            *(char *)(plStack_80 + 3) = cVar10;
            LOCK();
            plVar14 = plStack_68 + 1;
            lVar13 = *plVar14;
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              func_0x0412c2d0(plVar2);
            }
            uVar17 = uStack_40;
            plVar2 = plStack_88;
            plVar19 = plVar19 + 4;
            plVar14 = plStack_78;
          }
        }
        else {
          lVar18 = (long)plStack_80 - (long)plStack_88;
          uVar17 = (lVar18 >> 5) + 1;
          if (0x7ffffffffffffff < uVar17) {
            func_0x0caad8e0();
LAB_0ca8a661:
            uVar15 = func_0x04882eb0();
            func_0x0412d6b0(lVar13);
            func_0x04a7efb0(&lStack_70);
            func_0x0ca8a6b0(&plStack_88);
            uVar15 = func_0x0eee2d70(uVar15);
            func_0x0ca8a6b0(&plStack_88);
            func_0x0eee2d70(uVar15);
            pcVar6 = (code *)swi(3);
            puVar16 = (ulong *)(*pcVar6)();
            return puVar16;
          }
          uVar21 = (long)plStack_78 - (long)plStack_88 >> 4;
          if (uVar21 <= uVar17) {
            uVar21 = uVar17;
          }
          if (0x7fffffffffffffdf < (ulong)((long)plStack_78 - (long)plStack_88)) {
            uVar21 = 0x7ffffffffffffff;
          }
          if (uVar21 == 0) {
            lVar12 = 0;
          }
          else {
            if (0x7ffffffffffffff < uVar21) goto LAB_0ca8a661;
            lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21 << 5);
            if (lVar12 == 0) {
              func_0x0eec74c0(uVar21 << 5,0);
              lVar12 = 0;
            }
          }
          plVar2 = plStack_68;
          plVar19 = (long *)(lVar18 + lVar12);
          lStack_48 = lVar12;
          if (plStack_68 == (long *)0x0) {
            *plVar19 = lStack_70;
            plVar19[1] = 0;
            plVar19[2] = lVar13;
            *(char *)(plVar19 + 3) = cVar10;
          }
          else {
            LOCK();
            plStack_68[1] = plStack_68[1] + 1;
            UNLOCK();
            *plVar19 = lStack_70;
            plVar19[1] = (long)plStack_68;
            LOCK();
            plStack_68[1] = plStack_68[1] + 1;
            UNLOCK();
            plVar19[2] = lVar13;
            *(char *)(plVar19 + 3) = cVar10;
            LOCK();
            plVar14 = plStack_68 + 1;
            lVar13 = *plVar14;
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              func_0x0412c2d0(plVar2);
            }
          }
          plVar14 = plStack_80;
          plVar2 = (long *)((long)plVar19 + ((long)plStack_88 - (long)plStack_80));
          if ((long)plStack_88 - (long)plStack_80 != 0) {
            lVar13 = 0;
            do {
              puVar3 = (undefined4 *)((long)plStack_88 + lVar13);
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              puVar4 = (undefined4 *)((long)plVar2 + lVar13);
              *puVar4 = *puVar3;
              puVar4[1] = uVar7;
              puVar4[2] = uVar8;
              puVar4[3] = uVar9;
              *(undefined8 *)((long)plStack_88 + lVar13) = 0;
              ((undefined8 *)((long)plStack_88 + lVar13))[1] = 0;
              *(undefined8 *)((long)plVar2 + lVar13 + 0x10) =
                   *(undefined8 *)((long)plStack_88 + lVar13 + 0x10);
              *(undefined1 *)((long)plVar2 + lVar13 + 0x18) =
                   *(undefined1 *)((long)plStack_88 + lVar13 + 0x18);
              *(undefined8 *)((long)plStack_88 + lVar13 + 0x10) = 0;
              *(undefined1 *)((long)plStack_88 + lVar13 + 0x18) = 0;
              lVar18 = lVar13 + 0x20;
              lVar13 = lVar13 + 0x20;
              plVar20 = plStack_88;
            } while ((long *)((long)plStack_88 + lVar18) != plStack_80);
            do {
              if ((char)plVar20[3] == '\x01') {
                func_0x0412d6b0(plVar20[2]);
              }
              plVar5 = (long *)plVar20[1];
              if (plVar5 != (long *)0x0) {
                LOCK();
                plVar1 = plVar5 + 1;
                lVar13 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                  func_0x0412c2d0(plVar5);
                }
              }
              plVar20 = plVar20 + 4;
            } while (plVar20 != plVar14);
          }
          plVar14 = (long *)(lStack_48 + uVar21 * 0x20);
          uVar17 = uStack_40;
          param_4 = plStack_58;
          plVar19 = plVar19 + 4;
          if (plStack_88 != (long *)0x0) {
            lVar13 = (long)plStack_78 - (long)plStack_88;
            plVar20 = plStack_88;
            plStack_88 = plVar2;
            plStack_78 = plVar14;
            func_0x0412a280(plVar20,lVar13);
            uVar17 = uStack_40;
            param_4 = plStack_58;
            plVar2 = plStack_88;
            plVar14 = plStack_78;
          }
        }
      }
      plStack_78 = plVar14;
      plStack_80 = plVar19;
      plStack_88 = plVar2;
      plVar2 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        LOCK();
        plVar19 = plStack_68 + 1;
        lVar13 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          func_0x0412c2d0(plVar2);
        }
      }
      iVar11 = uStack_90._4_4_;
      uStack_90 = CONCAT44(uStack_90._4_4_ + 1,(int)uStack_90);
    } while (iVar11 <= (int)uStack_38);
    iVar11 = (int)uStack_90 + 1;
    if ((int)uStack_50 < (int)uStack_90) {
      *puStack_60 = (ulong)plStack_88;
      puStack_60[1] = (ulong)plStack_80;
      puStack_60[2] = (ulong)plStack_78;
      *(undefined1 *)(puStack_60 + 3) = 1;
      return puStack_60;
    }
  } while( true );
}


