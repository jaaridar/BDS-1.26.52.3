/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4a03c0 (ELF vaddr 0xe3a03c0)
 * Label: string:virtual bool cereal::internal::TypeSchema<std::unordered_map
 * Body:  [[0e4a03c0, 0e4a079c] [0e4a07a0, 0e4a085d] [0e4a0860, 0e4a08c6] [0e4a08d0, 0e4a0a34] [0e4a0a40, 0e4a0a79] [0e4a0a80, 0e4a0ab6] [0e4a0ac0, 0e4a0b42] [0e4a0b50, 0e4a0c67]]
 * Ghidra: FUN_0e4a03c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0e4a03c0(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  ulong auStack_338 [2];
  undefined4 *puStack_328;
  undefined8 *puStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 *apuStack_308 [2];
  undefined *puStack_2f8;
  code *pcStack_2f0;
  undefined4 uStack_2e8;
  undefined1 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 *apuStack_2c8 [2];
  undefined *puStack_2b8;
  code *pcStack_2b0;
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  long lStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined1 auStack_240 [8];
  code *pcStack_238;
  undefined8 *******apppppppuStack_230 [2];
  code *pcStack_220;
  code *pcStack_218;
  int iStack_210;
  char cStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 *******apppppppuStack_190 [3];
  code *pcStack_178;
  int iStack_170;
  char cStack_16c;
  long alStack_168 [4];
  long *plStack_148;
  long lStack_138;
  undefined8 uStack_130;
  code *pcStack_120;
  undefined1 auStack_f8 [24];
  code *pcStack_e0;
  undefined1 auStack_b0 [24];
  code *pcStack_98;
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  if (*(code **)(param_2 + 0x38) == (code *)0x0) {
    lStack_138 = 0;
    uStack_130 = 0;
    func_0x048b1dc0(&lStack_138);
    lVar9 = lStack_138;
    uVar12 = uStack_130;
joined_r0x0e4a04cc:
    if (lVar9 == 0) {
      lVar9 = func_0x048aead0(uVar12);
      bVar1 = *(byte *)(lVar9 + 0x19);
      goto joined_r0x0e4a04d6;
    }
  }
  else {
    lVar9 = *(long *)(param_2 + 0x30);
    if (lVar9 == 0) {
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      (**(code **)(param_2 + 0x38))(0,param_2,0);
      lVar9 = *(long *)(param_2 + 0x30);
      goto joined_r0x0e4a04cc;
    }
  }
  bVar1 = *(byte *)(lVar9 + 0x19);
joined_r0x0e4a04d6:
  if ((bVar1 & 8) == 0) {
    puStack_328 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_328 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar12 = _UNK_01258ebc;
    auStack_338[0] = 0x31;
    auStack_338[1] = 0x2b;
    *(ulong *)((long)puStack_328 + 0x1b) = CONCAT35(_UNK_01258eb9,_DAT_01258eb4);
    *(undefined8 *)((long)puStack_328 + 0x23) = uVar12;
    uVar12 = CONCAT53(_DAT_01258eb4,_UNK_01258eb1);
    *(undefined8 *)(puStack_328 + 4) = _DAT_01258ea9;
    *(undefined8 *)(puStack_328 + 6) = uVar12;
    uVar5 = _UNK_01258ea5;
    uVar4 = _UNK_01258ea1;
    uVar3 = _UNK_01258e9d;
    *puStack_328 = _DAT_01258e99;
    puStack_328[1] = uVar3;
    puStack_328[2] = uVar4;
    puStack_328[3] = uVar5;
    *(undefined1 *)((long)puStack_328 + 0x2b) = 0;
    (**(code **)(*param_4 + 0x10))(param_4,auStack_338);
    if ((auStack_338[0] & 1) != 0) {
      func_0x0412a280(puStack_328,auStack_338[0] & 0xfffffffffffffffe);
    }
    uVar8 = 0;
  }
  else {
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    pcStack_1c8 = (code *)0x0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    pcStack_1f0 = (code *)0x0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1a8 = 0;
    if ((*(code **)(param_2 + 0x38) == (code *)0x0) ||
       ((**(code **)(param_2 + 0x38))(0x800,param_2,&uStack_208), pcStack_1f0 == (code *)0x0)) {
      lStack_138 = 0;
      uStack_130 = 0;
      func_0x048b1dc0(&lStack_138);
      if ((lStack_138 == 0) &&
         (cVar7 = func_0x0eeddcf0(&UNK_0130b358,&UNK_011b9795,0x728,&UNK_013ab8cc,&UNK_013565bb),
         cVar7 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    else {
      (*pcStack_1f0)(uStack_208);
    }
    cVar7 = *(char *)((long)param_3 + 0x24);
    puVar11 = (undefined8 *)*param_3;
    puStack_320 = puVar11;
    if (cVar7 == '\x02') {
      puStack_320 = param_3;
    }
    if (puStack_320 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0xac3330e) {
      uVar12 = param_3[5];
      lVar9 = param_3[6];
      if (lVar9 == 0) {
        (*(code *)param_3[7])(0,param_3,0);
        lVar9 = param_3[6];
        cVar7 = *(char *)((long)param_3 + 0x24);
        puVar11 = (undefined8 *)*param_3;
      }
      if (cVar7 == '\x02') {
        puVar11 = param_3;
      }
      puStack_320 = (undefined8 *)func_0x0488e200(uVar12,lVar9,0xf53cccf2,puVar11);
    }
    puStack_278 = &UNK_0f01ae00;
    puStack_280 = &UNK_0f4bc090;
    uStack_2e0 = param_3[5];
    puStack_2b8 = &UNK_0488e0b0;
    uStack_2a8 = 0x48b5725f;
    pcStack_2b0 = (code *)0x0;
    uStack_2a4 = 0;
    apuStack_2c8[0] = (undefined8 *)0x0;
    uStack_298 = 0;
    puStack_290 = (undefined *)0x0;
    puStack_2f8 = &UNK_0488e0b0;
    uStack_2e8 = 0x48b5725f;
    pcStack_2f0 = (code *)0x0;
    uStack_2e4 = 0;
    apuStack_308[0] = (undefined8 *)0x0;
    uStack_2d8 = 0;
    puStack_2d0 = (undefined *)0x0;
    uVar12 = 0;
    if ((char)uStack_1a8 == '\0') {
      uVar12 = uStack_200;
    }
    uStack_2a0 = uStack_2e0;
    (*pcStack_1c8)(auStack_240,uStack_208,uVar12,uStack_200,0);
    uVar12 = 0;
    if ((char)uStack_1a8 == '\0') {
      uVar12 = uStack_200;
    }
    (*pcStack_1c8)(auStack_1a0,uStack_208,uVar12,uStack_200,1);
    lStack_318 = 0;
    if (cStack_16c == '\0') goto LAB_0e4a07a0;
LAB_0e4a0760:
    if (iStack_210 != iStack_170) goto LAB_0e4a07a0;
    pppppppuVar13 = apppppppuStack_190;
    if (cStack_16c != '\x02') {
      pppppppuVar13 = apppppppuStack_190[0];
    }
    lVar9 = (*pcStack_220)(3,apppppppuStack_230,pppppppuVar13);
    if (lVar9 == 0) {
      do {
        uStack_310 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_250 = 0;
        uStack_24f = 0;
        uStack_248 = 0;
        lStack_260 = 0;
        uStack_258 = 0;
        uStack_257 = 0;
        if (pcStack_2b0 != (code *)0x0) {
          (*pcStack_2b0)(apuStack_2c8);
        }
        puVar6 = puStack_290;
        puStack_2b8 = &UNK_0602fa80;
        uStack_2a8 = 0x3aa0f67c;
        pcStack_2b0 = (code *)0x0;
        uStack_2a4 = 3;
        puStack_290 = &UNK_0602fa60;
        if (puVar6 != &UNK_0602fa60) {
          uStack_298 = 0;
        }
        apuStack_2c8[0] = &uStack_310;
        if (pcStack_2f0 != (code *)0x0) {
          (*pcStack_2f0)(apuStack_308);
        }
        puVar6 = puStack_2d0;
        puStack_2f8 = &UNK_0e499640;
        uStack_2e8 = 0xc4ff4819;
        pcStack_2f0 = (code *)0x0;
        uStack_2e4 = 3;
        apuStack_308[0] = &uStack_270;
        puStack_2d0 = &UNK_0e499560;
        if (puVar6 != &UNK_0e499560) {
          uStack_2d8 = 0;
        }
        puStack_288 = &UNK_0f4e39e8;
        func_0x05ea0220(&lStack_138,auStack_240);
        func_0x05ea04f0(auStack_b0,&lStack_138);
        if (pcStack_e0 != (code *)0x0) {
          (*pcStack_e0)(auStack_f8);
        }
        if (pcStack_120 != (code *)0x0) {
          (*pcStack_120)(&lStack_138);
        }
        func_0x0ed75470(&puStack_278,&puStack_288,auStack_b0,apuStack_2c8,param_4);
        if (pcStack_58 != (code *)0x0) {
          (*pcStack_58)(auStack_70);
        }
        if (pcStack_98 != (code *)0x0) {
          (*pcStack_98)(auStack_b0);
        }
        plStack_148 = (long *)0x0;
        plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (plVar10 == (long *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        *plVar10 = (long)&UNK_0f4bc108;
        plVar10[1] = (long)&puStack_280;
        plVar10[2] = (long)auStack_240;
        plVar10[3] = (long)apuStack_308;
        plVar10[4] = (long)param_4;
        plVar10[5] = (long)puStack_320;
        plVar10[6] = (long)&uStack_310;
        plVar10[7] = (long)&uStack_270;
        plStack_148 = plVar10;
        (**(code **)(*param_4 + 0x30))(param_4,lStack_318,alStack_168);
        if (plStack_148 == alStack_168) {
          lVar9 = 0x20;
LAB_0e4a0a45:
          (**(code **)(*plStack_148 + lVar9))();
          lVar2 = lStack_260;
        }
        else {
          lVar9 = 0x28;
          lVar2 = lStack_260;
          if (plStack_148 != (long *)0x0) goto LAB_0e4a0a45;
        }
        lStack_260 = lVar2;
        if (lVar2 != 0) {
          for (lVar9 = CONCAT71(uStack_257,uStack_258); lVar2 != lVar9; lVar9 = lVar9 + -0x90) {
            if ((*(byte *)(lVar9 + -0x30) & 1) == 0) {
              if ((*(byte *)(lVar9 + -0x48) & 1) != 0) goto LAB_0e4a0ad8;
LAB_0e4a0a9a:
              if ((*(byte *)(lVar9 + -0x60) & 1) != 0) goto LAB_0e4a0af0;
LAB_0e4a0aa1:
              if ((*(byte *)(lVar9 + -0x78) & 1) != 0) goto LAB_0e4a0b08;
LAB_0e4a0aa8:
              bVar1 = *(byte *)(lVar9 + -0x90);
            }
            else {
              func_0x0412a280(*(undefined8 *)(lVar9 + -0x20),
                              *(ulong *)(lVar9 + -0x30) & 0xfffffffffffffffe);
              if ((*(byte *)(lVar9 + -0x48) & 1) == 0) goto LAB_0e4a0a9a;
LAB_0e4a0ad8:
              func_0x0412a280(*(undefined8 *)(lVar9 + -0x38),
                              *(ulong *)(lVar9 + -0x48) & 0xfffffffffffffffe);
              if ((*(byte *)(lVar9 + -0x60) & 1) == 0) goto LAB_0e4a0aa1;
LAB_0e4a0af0:
              func_0x0412a280(*(undefined8 *)(lVar9 + -0x50),
                              *(ulong *)(lVar9 + -0x60) & 0xfffffffffffffffe);
              if ((*(byte *)(lVar9 + -0x78) & 1) == 0) goto LAB_0e4a0aa8;
LAB_0e4a0b08:
              func_0x0412a280(*(undefined8 *)(lVar9 + -0x68),
                              *(ulong *)(lVar9 + -0x78) & 0xfffffffffffffffe);
              bVar1 = *(byte *)(lVar9 + -0x90);
            }
            if ((bVar1 & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar9 + -0x80),
                              *(ulong *)(lVar9 + -0x90) & 0xfffffffffffffffe);
            }
          }
          uStack_258 = (undefined1)lVar2;
          uStack_257 = (undefined7)((ulong)lVar2 >> 8);
          func_0x0412a280(lStack_260,CONCAT71(uStack_24f,uStack_250) - lStack_260);
        }
        pppppppuVar13 = apppppppuStack_230;
        if (cStack_20c != '\x02') {
          pppppppuVar13 = apppppppuStack_230[0];
        }
        if (cStack_20c == '\x04') {
          pppppppuVar13 = (undefined8 *******)0x0;
        }
        (*pcStack_238)(pppppppuVar13,0);
        lStack_318 = lStack_318 + 1;
        if (cStack_16c != '\0') goto LAB_0e4a0760;
LAB_0e4a07a0:
        if (cStack_16c == '\0' && cStack_20c == '\0') break;
      } while( true );
    }
    if (pcStack_178 != (code *)0x0) {
      (*pcStack_178)(apppppppuStack_190);
    }
    if (pcStack_218 != (code *)0x0) {
      (*pcStack_218)(apppppppuStack_230);
    }
    uVar8 = (**(code **)(*param_4 + 0x18))(param_4);
    if (pcStack_2f0 != (code *)0x0) {
      (*pcStack_2f0)(apuStack_308);
    }
    if (pcStack_2b0 != (code *)0x0) {
      (*pcStack_2b0)(apuStack_2c8);
    }
    uVar8 = uVar8 ^ 1;
  }
  return uVar8;
}



/* ---- referenced strings ----
 * 0x1258e99  source type is not an associative container
 * 0x1258ea9  ot an associative container
 * 0x1258eb4  iative container
 */
