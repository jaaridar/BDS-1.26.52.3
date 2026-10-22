/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb045f50 (ELF vaddr 0xaf45f50)
 * Label: string:is_temperature_value
 * Body:  [[0b045f50, 0b0472d7] [0b04822d, 0b04917e] [0b04b023, 0b04b084] [0b04b090, 0b04b765] [0b04b799, 0b04b7ba]]
 * Ghidra: FUN_0b045f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b045f50(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  uint uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  uint auStack_68 [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  iVar10 = (int)param_2;
  uStack_58 = param_1;
  uStack_50 = param_2;
  if (iVar10 < 0xb35) {
    if (((iVar10 - 0x133U < 0xb) && ((0x421U >> (iVar10 - 0x133U & 0x1f) & 1) != 0)) ||
       (iVar10 - 0x314U < 2)) goto LAB_0b045fce;
LAB_0b0460e2:
    if (iVar10 < 0x530e) goto LAB_0b046096;
LAB_0b0460ea:
    iVar10 = (int)uStack_50;
    if (0x110b21 < iVar10) {
      if (iVar10 < 0x400044) {
        if ((((iVar10 - 0x110b22U < 0xf) && ((0x5001U >> (iVar10 - 0x110b22U & 0x1f) & 1) != 0)) ||
            (iVar10 - 0x205317U < 3)) || (iVar10 - 0x21531aU < 2)) goto LAB_0b0465bb;
      }
      else if (iVar10 < 0xc00049) {
        if ((iVar10 - 0x400044U < 0x23) &&
           ((0x604ae6801U >> ((ulong)(iVar10 - 0x400044U) & 0x3f) & 1) != 0)) goto LAB_0b0465bb;
      }
      else if (iVar10 < 0x100030f) {
        if (iVar10 == 0xc00049) goto LAB_0b0465bb;
        if (iVar10 == 0xc00050) goto LAB_0b046344;
      }
      else if ((iVar10 == 0x100030f) || (iVar10 == 0x1000373)) goto LAB_0b0465bb;
      goto LAB_0b046818;
    }
    if (0x30b73 < iVar10) {
      uVar5 = iVar10 - 0x80054;
      if (0x10 < uVar5) {
LAB_0b0461f7:
        if (((iVar10 - 0x40b23U < 0x15) && ((0x100031U >> (iVar10 - 0x40b23U & 0x1f) & 1) != 0)) ||
           (iVar10 == 0x30b74)) goto LAB_0b0465bb;
        goto LAB_0b046818;
      }
      if ((0x1d001U >> (uVar5 & 0x1f) & 1) != 0) goto LAB_0b0465bb;
      if (uVar5 != 0xd) goto LAB_0b0461f7;
      goto LAB_0b046344;
    }
    if (iVar10 < 0x30b20) {
      if (((0x3d < iVar10 - 0x530eU) ||
          ((0x2000000000010101U >> ((ulong)(iVar10 - 0x530eU) & 0x3f) & 1) == 0)) &&
         ((0x16 < iVar10 - 0x10b24U || ((0x410001U >> (iVar10 - 0x10b24U & 0x1f) & 1) == 0))))
      goto LAB_0b046818;
      goto LAB_0b0465bb;
    }
    if (((iVar10 - 0x30b20U < 0x10) && ((0x9001U >> (iVar10 - 0x30b20U & 0x1f) & 1) != 0)) ||
       (iVar10 == 0x30b6e)) goto LAB_0b0465bb;
    goto LAB_0b046818;
  }
  if (iVar10 < 0x10b34) {
    if ((iVar10 == 0xb35) || (iVar10 == 0xb68)) goto LAB_0b045fce;
    goto LAB_0b0460e2;
  }
  if ((iVar10 != 0x10b34) && ((iVar10 != 0x1000373 && (iVar10 != 0x100030f)))) goto LAB_0b0460e2;
LAB_0b045fce:
  uVar7 = func_0x04864680(param_1,&UNK_0146768a);
  uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
  func_0x04863060(auStack_68,7);
  uStack_80._1_3_ = (undefined3)_DAT_013ba1c8;
  uStack_80 = CONCAT31(uStack_80._1_3_,0x28);
  uStack_7c = (undefined1)((uint)_DAT_013ba1c8 >> 0x18);
  uStack_7b = (undefined1)_UNK_013ba1cc;
  uStack_7a = (undefined1)((uint)_UNK_013ba1cc >> 8);
  uStack_79 = (undefined1)((uint)_UNK_013ba1cc >> 0x10);
  uStack_78 = (undefined1)((uint)_UNK_013ba1cc >> 0x18);
  uStack_77 = (undefined1)_UNK_013ba1d0;
  uStack_76 = (undefined1)((uint)_UNK_013ba1d0 >> 8);
  uStack_75 = (undefined1)((uint)_UNK_013ba1d0 >> 0x10);
  uStack_74 = (undefined1)((uint)_UNK_013ba1d0 >> 0x18);
  uStack_73 = (undefined1)_UNK_013ba1d4;
  uStack_72 = (undefined1)((uint)_UNK_013ba1d4 >> 8);
  uStack_71 = (undefined1)((uint)_UNK_013ba1d4 >> 0x10);
  uStack_70 = (undefined1)((uint)_UNK_013ba1d4 >> 0x18);
  uStack_6f = 0x74;
  uStack_6e = 0x65;
  uStack_6d = 0x6e;
  uStack_6c = 0x74;
  uStack_6b = 0;
  cVar4 = func_0x04864260(uVar7);
  if (cVar4 == '\0') {
    cVar4 = func_0x04865190(uVar7,&uStack_80);
    uVar8 = func_0x04864970(uVar7,&uStack_80);
    if (cVar4 == '\0') {
      func_0x04863740(uVar8,auStack_68);
      func_0x04864970(uVar7,&uStack_80);
    }
  }
  if ((uStack_80 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_69,
                             CONCAT16(uStack_6a,
                                      CONCAT15(uStack_6b,
                                               CONCAT14(uStack_6c,
                                                        CONCAT13(uStack_6d,
                                                                 CONCAT12(uStack_6e,
                                                                          CONCAT11(uStack_6f,
                                                                                   uStack_70))))))),
                    CONCAT17(uStack_79,
                             CONCAT16(uStack_7a,CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80))))
                    & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_68);
  if (0x530d < (int)uStack_50) goto LAB_0b0460ea;
LAB_0b046096:
  iVar10 = (int)uStack_50;
  if (0x1309 < iVar10) {
    if (iVar10 < 0x1379) {
      switch(iVar10) {
      case 0x130a:
      case 0x130b:
      case 0x130c:
      case 0x130d:
      case 0x1310:
      case 0x1312:
      case 0x131c:
      case 0x131d:
      case 0x134a:
        goto LAB_0b0465bb;
      case 0x130e:
      case 0x130f:
      case 0x1311:
      case 0x1313:
      case 0x1314:
      case 0x1315:
      case 0x1316:
      case 0x1317:
      case 0x1318:
      case 0x1319:
      case 0x131a:
      case 0x131b:
      case 0x131e:
      case 0x131f:
      case 0x1320:
      case 0x1321:
      case 0x1322:
      case 0x1323:
      case 0x1324:
      case 0x1325:
      case 0x1326:
      case 0x1327:
      case 0x1328:
      case 0x1329:
      case 0x132a:
      case 0x132b:
      case 0x132c:
      case 0x132d:
      case 0x132e:
      case 0x132f:
      case 0x1330:
      case 0x1331:
      case 0x1332:
      case 0x1333:
      case 0x1334:
      case 0x1335:
      case 0x1336:
      case 0x1337:
      case 0x1338:
      case 0x1339:
      case 0x133a:
      case 0x133b:
      case 0x133c:
      case 0x133d:
      case 0x133e:
      case 0x133f:
      case 0x1340:
      case 0x1341:
      case 0x1342:
      case 0x1343:
      case 0x1344:
      case 0x1345:
      case 0x1346:
      case 0x1347:
      case 0x1348:
      case 0x1349:
        break;
      default:
        if (iVar10 == 0x1371) goto LAB_0b0465bb;
      }
    }
    else if (iVar10 < 0x236c) {
      if (((iVar10 == 0x1379) || (iVar10 == 0x2311)) || (iVar10 == 0x231f)) goto LAB_0b0465bb;
    }
    else if ((iVar10 - 0x236cU < 5) && (iVar10 - 0x236cU != 2)) goto LAB_0b0465bb;
    goto LAB_0b046818;
  }
  if (iVar10 < 0x314) {
    if (iVar10 < 0x100) {
      uVar5 = iVar10 - 0x41;
      if (uVar5 < 0x1a) {
        if ((0x20000e1U >> (uVar5 & 0x1f) & 1) != 0) goto LAB_0b0465bb;
        if (uVar5 == 0xc) goto LAB_0b046344;
      }
    }
    else {
      if (0x13c < iVar10) {
        if ((iVar10 != 0x13d) && (iVar10 != 0x13f)) goto LAB_0b046818;
LAB_0b046344:
        uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
        uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
        func_0x04863060(auStack_68,7);
        uStack_80._1_3_ = (undefined3)_DAT_0127eef2;
        uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
        uStack_7c = (undefined1)((uint)_DAT_0127eef2 >> 0x18);
        uStack_7b = (undefined1)_UNK_0127eef6;
        uStack_7a = (undefined1)((uint)_UNK_0127eef6 >> 8);
        uStack_79 = (undefined1)((uint)_UNK_0127eef6 >> 0x10);
        uStack_78 = (undefined1)((uint)_UNK_0127eef6 >> 0x18);
        uStack_77 = (undefined1)_UNK_0127eefa;
        uStack_76 = (undefined1)((uint)_UNK_0127eefa >> 8);
        uStack_75 = (undefined1)((uint)_UNK_0127eefa >> 0x10);
        uStack_74 = (undefined1)((uint)_UNK_0127eefa >> 0x18);
        uStack_73 = (undefined1)_UNK_0127eefe;
        uStack_72 = (undefined1)((uint)_UNK_0127eefe >> 8);
        uStack_71 = (undefined1)((uint)_UNK_0127eefe >> 0x10);
        uStack_70 = (undefined1)((uint)_UNK_0127eefe >> 0x18);
        uStack_6f = 0x6c;
        uStack_6e = 0x65;
        uStack_6d = 0;
        cVar4 = func_0x04864260(uVar7);
        if (cVar4 == '\0') {
          cVar4 = func_0x04865190(uVar7,&uStack_80);
          uVar8 = func_0x04864970(uVar7,&uStack_80);
          if (cVar4 == '\0') {
            func_0x04863740(uVar8,auStack_68);
            func_0x04864970(uVar7,&uStack_80);
          }
        }
        if ((uStack_80 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_69,
                                   CONCAT16(uStack_6a,
                                            CONCAT15(uStack_6b,
                                                     CONCAT14(uStack_6c,
                                                              CONCAT13(uStack_6d,
                                                                       CONCAT12(uStack_6e,
                                                                                CONCAT11(uStack_6f,
                                                                                         uStack_70))
                                                                      ))))),
                          CONCAT17(uStack_79,
                                   CONCAT16(uStack_7a,
                                            CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                          0xfffffffffffffffe);
        }
        func_0x04863610(auStack_68);
        uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
        uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
        uVar7 = func_0x04864680(uVar7,&DAT_0127eef2);
        func_0x04863290(auStack_68,0);
        uStack_80 = 0x5f736916;
        uStack_7c = 0x70;
        uStack_7b = 0x75;
        uStack_7a = 0x73;
        uStack_79 = 0x68;
        uStack_78 = 0x61;
        uStack_77 = 0x62;
        uStack_76 = 0x6c;
        uStack_75 = 0x65;
        uStack_74 = 0;
        cVar4 = func_0x04864260(uVar7);
        if (cVar4 == '\0') {
          cVar4 = func_0x04865190(uVar7,&uStack_80);
          uVar8 = func_0x04864970(uVar7,&uStack_80);
          if (cVar4 == '\0') {
            func_0x04863740(uVar8,auStack_68);
            func_0x04864970(uVar7,&uStack_80);
          }
        }
        if ((uStack_80 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_69,
                                   CONCAT16(uStack_6a,
                                            CONCAT15(uStack_6b,
                                                     CONCAT14(uStack_6c,
                                                              CONCAT13(uStack_6d,
                                                                       CONCAT12(uStack_6e,
                                                                                CONCAT11(uStack_6f,
                                                                                         uStack_70))
                                                                      ))))),
                          CONCAT17(uStack_79,
                                   CONCAT16(uStack_7a,
                                            CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                          0xfffffffffffffffe);
        }
        func_0x04863610(auStack_68);
        uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
        uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
        uVar7 = func_0x04864680(uVar7,&DAT_0127eef2);
        func_0x04863290(auStack_68,1);
        uStack_80._1_3_ = (undefined3)_DAT_0131845c;
        uStack_80 = CONCAT31(uStack_80._1_3_,0x2a);
        uStack_7c = (undefined1)((uint)_DAT_0131845c >> 0x18);
        uStack_7b = (undefined1)_UNK_01318460;
        uStack_7a = (undefined1)((uint)_UNK_01318460 >> 8);
        uStack_79 = (undefined1)((uint)_UNK_01318460 >> 0x10);
        uStack_78 = (undefined1)((uint)_UNK_01318460 >> 0x18);
        uStack_77 = (undefined1)_UNK_01318464;
        uStack_76 = (undefined1)((uint)_UNK_01318464 >> 8);
        uStack_75 = (undefined1)((uint)_UNK_01318464 >> 0x10);
        uStack_74 = (undefined1)((uint)_UNK_01318464 >> 0x18);
        uStack_73 = (undefined1)_UNK_01318468;
        uStack_72 = 0x79;
        uStack_71 = 0x5f;
        uStack_70 = 0x70;
        uStack_6f = 0x69;
        uStack_6e = 0x73;
        uStack_6d = 0x74;
        uStack_6c = 0x6f;
        uStack_6b = 0x6e;
        uStack_6a = 0;
        cVar4 = func_0x04864260(uVar7);
        if (cVar4 == '\0') {
          cVar4 = func_0x04865190(uVar7,&uStack_80);
          uVar8 = func_0x04864970(uVar7,&uStack_80);
          if (cVar4 == '\0') {
            func_0x04863740(uVar8,auStack_68);
            func_0x04864970(uVar7,&uStack_80);
          }
        }
        goto LAB_0b0467ef;
      }
      if (iVar10 == 0x100) goto LAB_0b0465bb;
      if (iVar10 == 0x138) goto LAB_0b046344;
    }
  }
  else {
    switch(iVar10) {
    case 0xb21:
    case 0xb25:
    case 0xb26:
    case 0xb29:
    case 0xb2a:
    case 0xb2b:
    case 0xb2d:
    case 0xb31:
    case 0xb32:
    case 0xb39:
    case 0xb68:
    case 0xb72:
    case 0xb78:
LAB_0b0465bb:
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      func_0x04863060(auStack_68,7);
      uStack_80._1_3_ = (undefined3)_DAT_0127eef2;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_0127eef2 >> 0x18);
      uStack_7b = (undefined1)_UNK_0127eef6;
      uStack_7a = (undefined1)((uint)_UNK_0127eef6 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0127eef6 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0127eef6 >> 0x18);
      uStack_77 = (undefined1)_UNK_0127eefa;
      uStack_76 = (undefined1)((uint)_UNK_0127eefa >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0127eefa >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0127eefa >> 0x18);
      uStack_73 = (undefined1)_UNK_0127eefe;
      uStack_72 = (undefined1)((uint)_UNK_0127eefe >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0127eefe >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0127eefe >> 0x18);
      uStack_6f = 0x6c;
      uStack_6e = 0x65;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_0127eef2);
      func_0x04863290(auStack_68,1);
      uStack_80 = 0x5f736916;
      uStack_7c = 0x70;
      uStack_7b = 0x75;
      uStack_7a = 0x73;
      uStack_79 = 0x68;
      uStack_78 = 0x61;
      uStack_77 = 0x62;
      uStack_76 = 0x6c;
      uStack_75 = 0x65;
      uStack_74 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_0127eef2);
      func_0x04863290(auStack_68,1);
      uStack_80._1_3_ = (undefined3)_DAT_0131845c;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x2a);
      uStack_7c = (undefined1)((uint)_DAT_0131845c >> 0x18);
      uStack_7b = (undefined1)_UNK_01318460;
      uStack_7a = (undefined1)((uint)_UNK_01318460 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_01318460 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_01318460 >> 0x18);
      uStack_77 = (undefined1)_UNK_01318464;
      uStack_76 = (undefined1)((uint)_UNK_01318464 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_01318464 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_01318464 >> 0x18);
      uStack_73 = (undefined1)_UNK_01318468;
      uStack_72 = 0x79;
      uStack_71 = 0x5f;
      uStack_70 = 0x70;
      uStack_6f = 0x69;
      uStack_6e = 0x73;
      uStack_6d = 0x74;
      uStack_6c = 0x6f;
      uStack_6b = 0x6e;
      uStack_6a = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
LAB_0b0467ef:
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      iVar10 = (int)uStack_50;
      break;
    case 0xb22:
    case 0xb23:
    case 0xb24:
    case 0xb27:
    case 0xb28:
    case 0xb2c:
    case 0xb2e:
    case 0xb2f:
    case 0xb30:
    case 0xb33:
    case 0xb34:
    case 0xb35:
    case 0xb36:
    case 0xb37:
    case 0xb38:
    case 0xb3a:
    case 0xb3b:
    case 0xb3c:
    case 0xb3d:
    case 0xb3e:
    case 0xb3f:
    case 0xb40:
    case 0xb41:
    case 0xb42:
    case 0xb43:
    case 0xb44:
    case 0xb45:
    case 0xb46:
    case 0xb47:
    case 0xb48:
    case 0xb49:
    case 0xb4a:
    case 0xb4b:
    case 0xb4c:
    case 0xb4d:
    case 0xb4e:
    case 0xb4f:
    case 0xb50:
    case 0xb51:
    case 0xb52:
    case 0xb53:
    case 0xb54:
    case 0xb55:
    case 0xb56:
    case 0xb57:
    case 0xb58:
    case 0xb59:
    case 0xb5a:
    case 0xb5b:
    case 0xb5c:
    case 0xb5d:
    case 0xb5e:
    case 0xb5f:
    case 0xb60:
    case 0xb61:
    case 0xb62:
    case 0xb63:
    case 0xb64:
    case 0xb65:
    case 0xb66:
    case 0xb67:
    case 0xb69:
    case 0xb6a:
    case 0xb6b:
    case 0xb6c:
    case 0xb6d:
    case 0xb6e:
    case 0xb6f:
    case 0xb70:
    case 0xb71:
    case 0xb73:
    case 0xb74:
    case 0xb75:
    case 0xb76:
    case 0xb77:
      break;
    default:
      if ((iVar10 - 0x314U < 2) || (iVar10 == 0x376)) goto LAB_0b0465bb;
    }
  }
LAB_0b046818:
  if (0x236b < iVar10) {
    if (iVar10 < 0x30b74) {
      if (iVar10 < 0x8113) {
        if (((iVar10 - 0x236cU < 5) && (iVar10 - 0x236cU != 2)) ||
           ((iVar10 - 0x530eU < 0x3e &&
            ((0x2000000000010101U >> ((ulong)(iVar10 - 0x530eU) & 0x3f) & 1) != 0))))
        goto LAB_0b047280;
      }
      else if (iVar10 < 0x30b20) {
        if ((iVar10 == 0x8113) || (iVar10 == 0x10b3a)) goto LAB_0b047280;
      }
      else if (((iVar10 - 0x30b20U < 0x10) && ((0x9001U >> (iVar10 - 0x30b20U & 0x1f) & 1) != 0)) ||
              (iVar10 == 0x30b6e)) goto LAB_0b047280;
    }
    else if (iVar10 < 0x205317) {
      if (iVar10 < 0x110b22) {
        if (((iVar10 - 0x40b23U < 0x15) && ((0x100031U >> (iVar10 - 0x40b23U & 0x1f) & 1) != 0)) ||
           (iVar10 == 0x30b74)) goto LAB_0b047280;
      }
      else if ((iVar10 == 0x110b22) || (iVar10 == 0x110b2e)) goto LAB_0b047280;
    }
    else if (iVar10 < 0x21531a) {
      if (iVar10 - 0x205317U < 3) goto LAB_0b047280;
    }
    else if (iVar10 < 0x100030f) {
      if ((iVar10 - 0x21531aU < 2) || (iVar10 == 0xc00050)) goto LAB_0b047280;
    }
    else if ((iVar10 == 0x100030f) || (iVar10 == 0x1000373)) goto LAB_0b047280;
    goto LAB_0b0472ad;
  }
  if (0x1309 < iVar10) {
    if (iVar10 < 0x1371) {
      switch(iVar10) {
      case 0x130a:
      case 0x130b:
      case 0x130c:
      case 0x130d:
      case 0x1310:
      case 0x1312:
      case 0x131c:
      case 0x131d:
      case 0x134a:
        goto LAB_0b047280;
      }
    }
    else if (((iVar10 == 0x1371) || (iVar10 == 0x2311)) || (iVar10 == 0x231f)) goto LAB_0b047280;
    goto LAB_0b0472ad;
  }
  if (iVar10 < 0x315) {
    if ((2 < iVar10 - 0x13dU) && (iVar10 != 0x5a)) {
      if (iVar10 != 0x314) goto LAB_0b0472ad;
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      func_0x04863060(auStack_68,7);
      puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar9 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar8 = _UNK_0123d492;
      uStack_70 = SUB81(puVar9,0);
      uStack_6f = (undefined1)((ulong)puVar9 >> 8);
      uStack_6e = (undefined1)((ulong)puVar9 >> 0x10);
      uStack_6d = (undefined1)((ulong)puVar9 >> 0x18);
      uStack_6c = (undefined1)((ulong)puVar9 >> 0x20);
      uStack_6b = (undefined1)((ulong)puVar9 >> 0x28);
      uStack_6a = (undefined1)((ulong)puVar9 >> 0x30);
      uStack_69 = (undefined1)((ulong)puVar9 >> 0x38);
      uStack_80 = 0x29;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      uStack_79 = 0;
      uStack_78 = 0x25;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      *(undefined8 *)(puVar9 + 4) = _DAT_0123d48a;
      *(undefined8 *)(puVar9 + 6) = uVar8;
      uVar3 = _UNK_0123d486;
      uVar2 = _UNK_0123d482;
      uVar1 = _UNK_0123d47e;
      *puVar9 = _DAT_0123d47a;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      *(undefined8 *)((long)puVar9 + 0x1d) = 0x6465687375705f6e;
      *(undefined1 *)((long)puVar9 + 0x25) = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_0123d47a);
      func_0x048630e0(auStack_68,1);
      uStack_80 = 0x69727010;
      uStack_7c = 0x6f;
      uStack_7b = 0x72;
      uStack_7a = 0x69;
      uStack_79 = 0x74;
      uStack_78 = 0x79;
      uStack_77 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_0123d47a);
      func_0x04863110((int)_DAT_014f0550,auStack_68);
      uStack_80 = 0x7265701c;
      uStack_7c = 99;
      uStack_7b = 0x65;
      uStack_7a = 0x6e;
      uStack_79 = 0x74;
      uStack_78 = 0x5f;
      uStack_77 = 99;
      uStack_76 = 0x68;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 99;
      uStack_72 = 0x65;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_0123d47a);
      uVar7 = func_0x04864680(uVar7,&UNK_011c68f8);
      cVar4 = func_0x04864270(uVar7);
      if ((cVar4 == '\0') || (cVar4 = func_0x04864260(uVar7), cVar4 != '\0')) {
        func_0x04863060(&uStack_80,6);
        func_0x04863790(uVar7,&uStack_80);
        func_0x04863610(&uStack_80);
      }
      uVar8 = func_0x04864610(uVar7,0);
      func_0x04863060(auStack_68,7);
      uStack_80._1_3_ = (undefined3)_DAT_0127ef05;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x22);
      uStack_7c = (undefined1)((uint)_DAT_0127ef05 >> 0x18);
      uStack_7b = (undefined1)_UNK_0127ef09;
      uStack_7a = (undefined1)((uint)_UNK_0127ef09 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0127ef09 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0127ef09 >> 0x18);
      uStack_77 = (undefined1)_UNK_0127ef0d;
      uStack_76 = (undefined1)((uint)_UNK_0127ef0d >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0127ef0d >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0127ef0d >> 0x18);
      uStack_73 = (undefined1)_UNK_0127ef11;
      uStack_72 = (undefined1)((uint)_UNK_0127ef11 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0127ef11 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0127ef11 >> 0x18);
      uStack_6f = 0x73;
      uStack_6e = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864610(uVar7,0);
      uVar7 = func_0x04864680(uVar7,&DAT_0127ef05);
      uVar7 = func_0x04864680(uVar7,&UNK_012303d0);
      cVar4 = func_0x04864270(uVar7);
      if ((cVar4 == '\0') || (cVar4 = func_0x04864260(uVar7), cVar4 != '\0')) {
        func_0x04863060(&uStack_80,6);
        func_0x04863790(uVar7,&uStack_80);
        func_0x04863610(&uStack_80);
      }
      uVar8 = func_0x04864610(uVar7,0);
      func_0x04863120(auStack_68,&UNK_0142cbf2);
      uStack_80 = 0x73657408;
      uStack_7c = 0x74;
      uStack_7b = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar8 = func_0x04864610(uVar7,0);
      func_0x04863120(auStack_68,&UNK_0121f913);
      uStack_80 = 0x6275730e;
      uStack_7c = 0x6a;
      uStack_7b = 0x65;
      uStack_7a = 99;
      uStack_79 = 0x74;
      uStack_78 = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar8 = func_0x04864610(uVar7,0);
      func_0x04863120(auStack_68,&UNK_013fd409);
      uStack_80 = 0x6c61760a;
      uStack_7c = 0x75;
      uStack_7b = 0x65;
      uStack_7a = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar8 = func_0x04864610(uVar7,1);
      func_0x04863120(auStack_68,&UNK_0142cbf2);
      uStack_80 = 0x73657408;
      uStack_7c = 0x74;
      uStack_7b = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar8 = func_0x04864610(uVar7,1);
      func_0x04863120(auStack_68,&UNK_0121f913);
      uStack_80 = 0x6275730e;
      uStack_7c = 0x6a;
      uStack_7b = 0x65;
      uStack_7a = 99;
      uStack_79 = 0x74;
      uStack_78 = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar8 = func_0x04864610(uVar7,1);
      func_0x04863120(auStack_68,&UNK_012fdcf9);
      uStack_80 = 0x65706f10;
      uStack_7c = 0x72;
      uStack_7b = 0x61;
      uStack_7a = 0x74;
      uStack_79 = 0x6f;
      uStack_78 = 0x72;
      uStack_77 = 0;
      cVar4 = func_0x04864260(uVar8);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar8,&uStack_80);
        uVar6 = func_0x04864970(uVar8,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar6,auStack_68);
          func_0x04864970(uVar8,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864610(uVar7,1);
      func_0x04863120(auStack_68,&UNK_011fb5f5);
      uStack_80 = 0x6c61760a;
      uStack_7c = 0x75;
      uStack_7b = 0x65;
      uStack_7a = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
    }
LAB_0b047280:
    uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
    uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
    func_0x0b0b22b0(uVar7);
    iVar10 = (int)uStack_50;
LAB_0b0472ad:
    if (iVar10 < 0x236c) {
      if (iVar10 == 0x315) goto LAB_0b04b3e4;
      if (iVar10 == 0x134a) {
        uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
        uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
        uVar7 = func_0x0b0ad8a0(uVar7);
        func_0x04865630(&uStack_80,uVar7);
        uStack_38 = uVar7;
        func_0x048656b0(auStack_68,uVar7);
        while (cVar4 = func_0x04862c80(&uStack_80,auStack_68), cVar4 == '\0') {
          uVar7 = func_0x04862b80(&uStack_80);
          cVar4 = func_0x04865100(uVar7,&UNK_0125b2fb);
          if (cVar4 != '\0') {
            uVar8 = func_0x04864680(uVar7,&UNK_0125b2fb);
            func_0x04863120(auStack_48,&UNK_0125b7c4);
            cVar4 = func_0x04863a80(uVar8,auStack_48);
            func_0x04863610(auStack_48);
            if (cVar4 != '\0') {
              cVar4 = func_0x04865100(uVar7,&UNK_011bc52b);
              if (cVar4 == '\0') {
LAB_0b04b149:
                func_0x04863110((int)_DAT_014f0a60,auStack_48);
                uVar7 = func_0x04864680(uVar7,&UNK_01240c39);
                func_0x04863790(uVar7,auStack_48);
                func_0x04863610(auStack_48);
              }
              else {
                uVar8 = func_0x04864680(uVar7,&UNK_011bc52b);
                func_0x04863290(auStack_48,0);
                cVar4 = func_0x04863a80(uVar8,auStack_48);
                func_0x04863610(auStack_48);
                if (cVar4 == '\0') goto LAB_0b04b149;
              }
              func_0x04862b40(auStack_68);
              func_0x04862b40(&uStack_80);
              goto LAB_0b04b284;
            }
          }
          func_0x04862ba0(&uStack_80);
        }
        func_0x04862b40(auStack_68);
        func_0x04862b40(&uStack_80);
        func_0x04863060(&uStack_80,7);
        func_0x04863120(auStack_68,&UNK_0125b7c4);
        uVar7 = func_0x04864680(&uStack_80,&UNK_0125b2fb);
        func_0x04863790(uVar7,auStack_68);
        func_0x04863610(auStack_68);
        func_0x04863290(auStack_68,1);
        uVar7 = func_0x04864680(&uStack_80,&UNK_011bc52b);
        func_0x04863790(uVar7,auStack_68);
        func_0x04863610(auStack_68);
        func_0x04863110((int)_DAT_014f0a60,auStack_68);
        uVar7 = func_0x04864680(&uStack_80,&UNK_01240c39);
        func_0x04863790(uVar7,auStack_68);
        func_0x04863610(auStack_68);
        func_0x04864a50(uStack_38,&uStack_80);
        puVar11 = &uStack_80;
        goto code_r0x0b04b27f;
      }
      if (iVar10 != 0x231f) goto LAB_0b04b284;
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      func_0x04863060(auStack_68,7);
      uStack_80._1_3_ = (undefined3)_DAT_01486ac4;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_01486ac4 >> 0x18);
      uStack_7b = (undefined1)_UNK_01486ac8;
      uStack_7a = (undefined1)((uint)_UNK_01486ac8 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_01486ac8 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_01486ac8 >> 0x18);
      uStack_77 = (undefined1)_UNK_01486acc;
      uStack_76 = (undefined1)((uint)_UNK_01486acc >> 8);
      uStack_75 = (undefined1)((uint)_UNK_01486acc >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_01486acc >> 0x18);
      uStack_73 = (undefined1)_UNK_01486ad0;
      uStack_72 = (undefined1)((uint)_UNK_01486ad0 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_01486ad0 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_01486ad0 >> 0x18);
      uStack_6f = 0x6e;
      uStack_6e = 0x67;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80 = 0x5f6e6910;
      uStack_7c = 0x77;
      uStack_7b = 0x61;
      uStack_7a = 0x74;
      uStack_79 = 0x65;
      uStack_78 = 0x72;
      uStack_77 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80 = 0x74616d1c;
      uStack_7c = 99;
      uStack_7b = 0x68;
      uStack_7a = 0x5f;
      uStack_79 = 0x76;
      uStack_78 = 0x61;
      uStack_77 = 0x72;
      uStack_76 = 0x69;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 0x74;
      uStack_72 = 0x73;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80._1_3_ = (undefined3)_DAT_0139edfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_0139edfc >> 0x18);
      uStack_7b = (undefined1)_UNK_0139ee00;
      uStack_7a = (undefined1)((uint)_UNK_0139ee00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0139ee00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0139ee00 >> 0x18);
      uStack_77 = (undefined1)_UNK_0139ee04;
      uStack_76 = (undefined1)((uint)_UNK_0139ee04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0139ee04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0139ee04 >> 0x18);
      uStack_73 = (undefined1)_UNK_0139ee08;
      uStack_72 = (undefined1)((uint)_UNK_0139ee08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0139ee08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0139ee08 >> 0x18);
      uStack_6f = 0x73;
      uStack_6e = 0x73;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,4);
      uStack_80 = 0x776f6c1e;
      uStack_7c = 0x5f;
      uStack_7b = 0x66;
      uStack_7a = 0x6c;
      uStack_79 = 0x6f;
      uStack_78 = 99;
      uStack_77 = 0x6b;
      uStack_76 = 0x5f;
      uStack_75 = 0x6c;
      uStack_74 = 0x69;
      uStack_73 = 0x6d;
      uStack_72 = 0x69;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,8);
      uStack_80._1_3_ = (undefined3)_DAT_0124b8c5;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_0124b8c5 >> 0x18);
      uStack_7b = (undefined1)_UNK_0124b8c9;
      uStack_7a = (undefined1)((uint)_UNK_0124b8c9 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0124b8c9 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0124b8c9 >> 0x18);
      uStack_77 = (undefined1)_UNK_0124b8cd;
      uStack_76 = (undefined1)((uint)_UNK_0124b8cd >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0124b8cd >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0124b8cd >> 0x18);
      uStack_73 = (undefined1)_UNK_0124b8d1;
      uStack_72 = (undefined1)((uint)_UNK_0124b8d1 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0124b8d1 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0124b8d1 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x616f6716;
      uStack_7c = 0x6c;
      uStack_7b = 0x5f;
      uStack_7a = 0x77;
      uStack_79 = 0x65;
      uStack_78 = 0x69;
      uStack_77 = 0x67;
      uStack_76 = 0x68;
      uStack_75 = 0x74;
      uStack_74 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0268,auStack_68);
      uStack_80 = 0x6e6f6c18;
      uStack_7c = 0x65;
      uStack_7b = 0x72;
      uStack_7a = 0x5f;
      uStack_79 = 99;
      uStack_78 = 0x68;
      uStack_77 = 0x61;
      uStack_76 = 0x6e;
      uStack_75 = 99;
      uStack_74 = 0x65;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0168,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014207d8;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_014207d8 >> 0x18);
      uStack_7b = (undefined1)_UNK_014207dc;
      uStack_7a = (undefined1)((uint)_UNK_014207dc >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014207dc >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014207dc >> 0x18);
      uStack_77 = (undefined1)_UNK_014207e0;
      uStack_76 = (undefined1)((uint)_UNK_014207e0 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014207e0 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014207e0 >> 0x18);
      uStack_73 = (undefined1)_UNK_014207e4;
      uStack_72 = (undefined1)((uint)_UNK_014207e4 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014207e4 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014207e4 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110(0,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_012fdcfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_012fdcfc >> 0x18);
      uStack_7b = (undefined1)_UNK_012fdd00;
      uStack_7a = (undefined1)((uint)_UNK_012fdd00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_012fdd00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_012fdd00 >> 0x18);
      uStack_77 = (undefined1)_UNK_012fdd04;
      uStack_76 = (undefined1)((uint)_UNK_012fdd04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_012fdd04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_012fdd04 >> 0x18);
      uStack_73 = (undefined1)_UNK_012fdd08;
      uStack_72 = (undefined1)((uint)_UNK_012fdd08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_012fdd08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_012fdd08 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0278,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011e097e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x22);
      uStack_7c = (undefined1)((uint)_DAT_011e097e >> 0x18);
      uStack_7b = (undefined1)_UNK_011e0982;
      uStack_7a = (undefined1)((uint)_UNK_011e0982 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011e0982 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011e0982 >> 0x18);
      uStack_77 = (undefined1)_UNK_011e0986;
      uStack_76 = (undefined1)((uint)_UNK_011e0986 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011e0986 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011e0986 >> 0x18);
      uStack_73 = (undefined1)_UNK_011e098a;
      uStack_72 = (undefined1)((uint)_UNK_011e098a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011e098a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011e098a >> 0x18);
      uStack_6f = 0x74;
      uStack_6e = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06b0,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014a211e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x28);
      uStack_7c = (undefined1)((uint)_DAT_014a211e >> 0x18);
      uStack_7b = (undefined1)_UNK_014a2122;
      uStack_7a = (undefined1)((uint)_UNK_014a2122 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014a2122 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014a2122 >> 0x18);
      uStack_77 = (undefined1)_UNK_014a2126;
      uStack_76 = (undefined1)((uint)_UNK_014a2126 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014a2126 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014a2126 >> 0x18);
      uStack_73 = (undefined1)_UNK_014a212a;
      uStack_72 = (undefined1)((uint)_UNK_014a212a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014a212a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014a212a >> 0x18);
      uStack_6f = 0x68;
      uStack_6e = 0x6f;
      uStack_6d = 0x6c;
      uStack_6c = 100;
      uStack_6b = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0738,auStack_68);
      uStack_80 = 0x686f631e;
      uStack_7c = 0x65;
      uStack_7b = 0x73;
      uStack_7a = 0x69;
      uStack_79 = 0x6f;
      uStack_78 = 0x6e;
      uStack_77 = 0x5f;
      uStack_76 = 0x77;
      uStack_75 = 0x65;
      uStack_74 = 0x69;
      uStack_73 = 0x67;
      uStack_72 = 0x68;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0568,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011fb5fd;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_011fb5fd >> 0x18);
      uStack_7b = (undefined1)_UNK_011fb601;
      uStack_7a = (undefined1)((uint)_UNK_011fb601 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011fb601 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011fb601 >> 0x18);
      uStack_77 = (undefined1)_UNK_011fb605;
      uStack_76 = (undefined1)((uint)_UNK_011fb605 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011fb605 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011fb605 >> 0x18);
      uStack_73 = (undefined1)_UNK_011fb609;
      uStack_72 = (undefined1)((uint)_UNK_011fb609 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011fb609 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011fb609 >> 0x18);
      uStack_6f = 0x6c;
      uStack_6e = 100;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0618,auStack_68);
      puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar9 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar8 = _UNK_012b0ca9;
      uStack_70 = SUB81(puVar9,0);
      uStack_6f = (undefined1)((ulong)puVar9 >> 8);
      uStack_6e = (undefined1)((ulong)puVar9 >> 0x10);
      uStack_6d = (undefined1)((ulong)puVar9 >> 0x18);
      uStack_6c = (undefined1)((ulong)puVar9 >> 0x20);
      uStack_6b = (undefined1)((ulong)puVar9 >> 0x28);
      uStack_6a = (undefined1)((ulong)puVar9 >> 0x30);
      uStack_69 = (undefined1)((ulong)puVar9 >> 0x38);
      uStack_80 = 0x21;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      uStack_79 = 0;
      uStack_78 = 0x19;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      *(ulong *)((long)puVar9 + 9) = CONCAT17(UNK_012b0ca8,CONCAT43(_UNK_012b0ca4,_DAT_012b0ca1));
      *(undefined8 *)((long)puVar9 + 0x11) = uVar8;
      uVar3 = _UNK_012b0ca4;
      uVar2 = _UNK_012b0ca0;
      uVar1 = _UNK_012b0c9c;
      *puVar9 = _DAT_012b0c98;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      *(undefined1 *)((long)puVar9 + 0x19) = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01a8,auStack_68);
      uStack_80 = 0x6e696d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01a8,auStack_68);
      uStack_80 = 0x78616d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0478,auStack_68);
      uStack_80 = 0x6f6c621c;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_79 = 100;
      uStack_78 = 0x69;
      uStack_77 = 0x73;
      uStack_76 = 0x74;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 99;
      uStack_72 = 0x65;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110(0,auStack_68);
      uStack_80 = 0x6f6c6218;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_79 = 0x77;
      uStack_78 = 0x65;
      uStack_77 = 0x69;
      uStack_76 = 0x67;
      uStack_75 = 0x68;
      uStack_74 = 0x74;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      goto LAB_0b04b6cf;
    }
    switch(iVar10) {
    case 0x236c:
    case 0x2370:
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      func_0x04863060(auStack_68,7);
      uStack_80._1_3_ = (undefined3)_DAT_01486ac4;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_01486ac4 >> 0x18);
      uStack_7b = (undefined1)_UNK_01486ac8;
      uStack_7a = (undefined1)((uint)_UNK_01486ac8 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_01486ac8 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_01486ac8 >> 0x18);
      uStack_77 = (undefined1)_UNK_01486acc;
      uStack_76 = (undefined1)((uint)_UNK_01486acc >> 8);
      uStack_75 = (undefined1)((uint)_UNK_01486acc >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_01486acc >> 0x18);
      uStack_73 = (undefined1)_UNK_01486ad0;
      uStack_72 = (undefined1)((uint)_UNK_01486ad0 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_01486ad0 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_01486ad0 >> 0x18);
      uStack_6f = 0x6e;
      uStack_6e = 0x67;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,1);
      uStack_80 = 0x5f6e6910;
      uStack_7c = 0x77;
      uStack_7b = 0x61;
      uStack_7a = 0x74;
      uStack_79 = 0x65;
      uStack_78 = 0x72;
      uStack_77 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80 = 0x74616d1c;
      uStack_7c = 99;
      uStack_7b = 0x68;
      uStack_7a = 0x5f;
      uStack_79 = 0x76;
      uStack_78 = 0x61;
      uStack_77 = 0x72;
      uStack_76 = 0x69;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 0x74;
      uStack_72 = 0x73;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,1);
      uStack_80._1_3_ = (undefined3)_DAT_0139edfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_0139edfc >> 0x18);
      uStack_7b = (undefined1)_UNK_0139ee00;
      uStack_7a = (undefined1)((uint)_UNK_0139ee00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0139ee00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0139ee00 >> 0x18);
      uStack_77 = (undefined1)_UNK_0139ee04;
      uStack_76 = (undefined1)((uint)_UNK_0139ee04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0139ee04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0139ee04 >> 0x18);
      uStack_73 = (undefined1)_UNK_0139ee08;
      uStack_72 = (undefined1)((uint)_UNK_0139ee08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0139ee08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0139ee08 >> 0x18);
      uStack_6f = 0x73;
      uStack_6e = 0x73;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,4);
      uStack_80 = 0x776f6c1e;
      uStack_7c = 0x5f;
      uStack_7b = 0x66;
      uStack_7a = 0x6c;
      uStack_79 = 0x6f;
      uStack_78 = 99;
      uStack_77 = 0x6b;
      uStack_76 = 0x5f;
      uStack_75 = 0x6c;
      uStack_74 = 0x69;
      uStack_73 = 0x6d;
      uStack_72 = 0x69;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,8);
      uStack_80._1_3_ = (undefined3)_DAT_0124b8c5;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_0124b8c5 >> 0x18);
      uStack_7b = (undefined1)_UNK_0124b8c9;
      uStack_7a = (undefined1)((uint)_UNK_0124b8c9 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0124b8c9 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0124b8c9 >> 0x18);
      uStack_77 = (undefined1)_UNK_0124b8cd;
      uStack_76 = (undefined1)((uint)_UNK_0124b8cd >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0124b8cd >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0124b8cd >> 0x18);
      uStack_73 = (undefined1)_UNK_0124b8d1;
      uStack_72 = (undefined1)((uint)_UNK_0124b8d1 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0124b8d1 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0124b8d1 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x616f6716;
      uStack_7c = 0x6c;
      uStack_7b = 0x5f;
      uStack_7a = 0x77;
      uStack_79 = 0x65;
      uStack_78 = 0x69;
      uStack_77 = 0x67;
      uStack_76 = 0x68;
      uStack_75 = 0x74;
      uStack_74 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0268,auStack_68);
      uStack_80 = 0x6e6f6c18;
      uStack_7c = 0x65;
      uStack_7b = 0x72;
      uStack_7a = 0x5f;
      uStack_79 = 99;
      uStack_78 = 0x68;
      uStack_77 = 0x61;
      uStack_76 = 0x6e;
      uStack_75 = 99;
      uStack_74 = 0x65;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06b0,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014207d8;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_014207d8 >> 0x18);
      uStack_7b = (undefined1)_UNK_014207dc;
      uStack_7a = (undefined1)((uint)_UNK_014207dc >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014207dc >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014207dc >> 0x18);
      uStack_77 = (undefined1)_UNK_014207e0;
      uStack_76 = (undefined1)((uint)_UNK_014207e0 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014207e0 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014207e0 >> 0x18);
      uStack_73 = (undefined1)_UNK_014207e4;
      uStack_72 = (undefined1)((uint)_UNK_014207e4 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014207e4 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014207e4 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f0668,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_012fdcfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_012fdcfc >> 0x18);
      uStack_7b = (undefined1)_UNK_012fdd00;
      uStack_7a = (undefined1)((uint)_UNK_012fdd00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_012fdd00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_012fdd00 >> 0x18);
      uStack_77 = (undefined1)_UNK_012fdd04;
      uStack_76 = (undefined1)((uint)_UNK_012fdd04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_012fdd04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_012fdd04 >> 0x18);
      uStack_73 = (undefined1)_UNK_012fdd08;
      uStack_72 = (undefined1)((uint)_UNK_012fdd08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_012fdd08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_012fdd08 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0278,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011e097e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x22);
      uStack_7c = (undefined1)((uint)_DAT_011e097e >> 0x18);
      uStack_7b = (undefined1)_UNK_011e0982;
      uStack_7a = (undefined1)((uint)_UNK_011e0982 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011e0982 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011e0982 >> 0x18);
      uStack_77 = (undefined1)_UNK_011e0986;
      uStack_76 = (undefined1)((uint)_UNK_011e0986 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011e0986 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011e0986 >> 0x18);
      uStack_73 = (undefined1)_UNK_011e098a;
      uStack_72 = (undefined1)((uint)_UNK_011e098a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011e098a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011e098a >> 0x18);
      uStack_6f = 0x74;
      uStack_6e = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f0768,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014a211e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x28);
      uStack_7c = (undefined1)((uint)_DAT_014a211e >> 0x18);
      uStack_7b = (undefined1)_UNK_014a2122;
      uStack_7a = (undefined1)((uint)_UNK_014a2122 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014a2122 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014a2122 >> 0x18);
      uStack_77 = (undefined1)_UNK_014a2126;
      uStack_76 = (undefined1)((uint)_UNK_014a2126 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014a2126 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014a2126 >> 0x18);
      uStack_73 = (undefined1)_UNK_014a212a;
      uStack_72 = (undefined1)((uint)_UNK_014a212a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014a212a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014a212a >> 0x18);
      uStack_6f = 0x68;
      uStack_6e = 0x6f;
      uStack_6d = 0x6c;
      uStack_6c = 100;
      uStack_6b = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x686f631e;
      uStack_7c = 0x65;
      uStack_7b = 0x73;
      uStack_7a = 0x69;
      uStack_79 = 0x6f;
      uStack_78 = 0x6e;
      uStack_77 = 0x5f;
      uStack_76 = 0x77;
      uStack_75 = 0x65;
      uStack_74 = 0x69;
      uStack_73 = 0x67;
      uStack_72 = 0x68;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f06e8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011fb5fd;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_011fb5fd >> 0x18);
      uStack_7b = (undefined1)_UNK_011fb601;
      uStack_7a = (undefined1)((uint)_UNK_011fb601 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011fb601 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011fb601 >> 0x18);
      uStack_77 = (undefined1)_UNK_011fb605;
      uStack_76 = (undefined1)((uint)_UNK_011fb605 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011fb605 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011fb605 >> 0x18);
      uStack_73 = (undefined1)_UNK_011fb609;
      uStack_72 = (undefined1)((uint)_UNK_011fb609 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011fb609 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011fb609 >> 0x18);
      uStack_6f = 0x6c;
      uStack_6e = 100;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f0560,auStack_68);
      puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar9 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar8 = _UNK_012b0ca9;
      uStack_70 = SUB81(puVar9,0);
      uStack_6f = (undefined1)((ulong)puVar9 >> 8);
      uStack_6e = (undefined1)((ulong)puVar9 >> 0x10);
      uStack_6d = (undefined1)((ulong)puVar9 >> 0x18);
      uStack_6c = (undefined1)((ulong)puVar9 >> 0x20);
      uStack_6b = (undefined1)((ulong)puVar9 >> 0x28);
      uStack_6a = (undefined1)((ulong)puVar9 >> 0x30);
      uStack_69 = (undefined1)((ulong)puVar9 >> 0x38);
      uStack_80 = 0x21;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      uStack_79 = 0;
      uStack_78 = 0x19;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      *(ulong *)((long)puVar9 + 9) = CONCAT17(UNK_012b0ca8,CONCAT43(_UNK_012b0ca4,_DAT_012b0ca1));
      *(undefined8 *)((long)puVar9 + 0x11) = uVar8;
      uVar3 = _UNK_012b0ca4;
      uVar2 = _UNK_012b0ca0;
      uVar1 = _UNK_012b0c9c;
      *puVar9 = _DAT_012b0c98;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      *(undefined1 *)((long)puVar9 + 0x19) = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06d8,auStack_68);
      uStack_80 = 0x6e696d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0168,auStack_68);
      uStack_80 = 0x78616d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x6f6c621c;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_79 = 100;
      uStack_78 = 0x69;
      uStack_77 = 0x73;
      uStack_76 = 0x74;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 99;
      uStack_72 = 0x65;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f02b8,auStack_68);
      uStack_80 = 0x6f6c6218;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_79 = 0x77;
      uStack_78 = 0x65;
      uStack_77 = 0x69;
      uStack_76 = 0x67;
      uStack_75 = 0x68;
      uStack_74 = 0x74;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      puVar11 = auStack_68;
code_r0x0b04b27f:
      func_0x04863610(puVar11);
    default:
LAB_0b04b284:
      func_0x0b0b26f0(uStack_58,uStack_50);
      iVar10 = (int)uStack_50;
      if (iVar10 < 0x80060) {
        if (iVar10 < 0x13f) {
          if ((iVar10 - 0x41U < 0x1f) && ((0x520010f1U >> (iVar10 - 0x41U & 0x1f) & 1) != 0)) {
            return;
          }
          if (iVar10 == 0x138) {
            return;
          }
        }
        else if (iVar10 < 0x236f) {
          if (iVar10 == 0x13f) {
            return;
          }
          if (iVar10 == 0x236c) {
            func_0x0b0b4aa0(uStack_58);
            return;
          }
          if (iVar10 == 0x236d) {
            return;
          }
        }
        else {
          if (iVar10 - 0x236fU < 2) {
            return;
          }
          if (iVar10 == 0x80000) {
            return;
          }
        }
      }
      else if (iVar10 < 0x400044) {
        if ((iVar10 - 0x80060U < 5) && (iVar10 - 0x80060U != 3)) {
          return;
        }
      }
      else {
        if ((iVar10 - 0x400044U < 0x23) &&
           ((0x604ae4901U >> ((ulong)(iVar10 - 0x400044U) & 0x3f) & 1) != 0)) {
          return;
        }
        if (iVar10 == 0xc00049) {
          return;
        }
        if (iVar10 == 0xc00050) {
          return;
        }
      }
LAB_0b04b702:
      uStack_80._1_3_ = (undefined3)_DAT_011f6254;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x2a);
      uStack_7c = (undefined1)((uint)_DAT_011f6254 >> 0x18);
      uStack_7b = (undefined1)_UNK_011f6258;
      uStack_7a = (undefined1)((uint)_UNK_011f6258 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011f6258 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011f6258 >> 0x18);
      uStack_77 = (undefined1)_UNK_011f625c;
      uStack_76 = (undefined1)((uint)_UNK_011f625c >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011f625c >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011f625c >> 0x18);
      uStack_73 = (undefined1)_UNK_011f6260;
      uStack_72 = 0x65;
      uStack_71 = 0x5f;
      uStack_70 = 0x66;
      uStack_6f = 0x61;
      uStack_6e = 0x6d;
      uStack_6d = 0x69;
      uStack_6c = 0x6c;
      uStack_6b = 0x79;
      uStack_6a = 0;
      func_0x0b0a5f60(uStack_58,&uStack_80,&UNK_0b0b8290);
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      return;
    case 0x236d:
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      func_0x04863060(auStack_68,7);
      uStack_80._1_3_ = (undefined3)_DAT_01486ac4;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_01486ac4 >> 0x18);
      uStack_7b = (undefined1)_UNK_01486ac8;
      uStack_7a = (undefined1)((uint)_UNK_01486ac8 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_01486ac8 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_01486ac8 >> 0x18);
      uStack_77 = (undefined1)_UNK_01486acc;
      uStack_76 = (undefined1)((uint)_UNK_01486acc >> 8);
      uStack_75 = (undefined1)((uint)_UNK_01486acc >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_01486acc >> 0x18);
      uStack_73 = (undefined1)_UNK_01486ad0;
      uStack_72 = (undefined1)((uint)_UNK_01486ad0 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_01486ad0 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_01486ad0 >> 0x18);
      uStack_6f = 0x6e;
      uStack_6e = 0x67;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,1);
      uStack_80 = 0x5f6e6910;
      uStack_7c = 0x77;
      uStack_7b = 0x61;
      uStack_7a = 0x74;
      uStack_79 = 0x65;
      uStack_78 = 0x72;
      uStack_77 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80 = 0x74616d1c;
      uStack_7c = 99;
      uStack_7b = 0x68;
      uStack_7a = 0x5f;
      uStack_79 = 0x76;
      uStack_78 = 0x61;
      uStack_77 = 0x72;
      uStack_76 = 0x69;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 0x74;
      uStack_72 = 0x73;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80._1_3_ = (undefined3)_DAT_0139edfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_0139edfc >> 0x18);
      uStack_7b = (undefined1)_UNK_0139ee00;
      uStack_7a = (undefined1)((uint)_UNK_0139ee00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0139ee00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0139ee00 >> 0x18);
      uStack_77 = (undefined1)_UNK_0139ee04;
      uStack_76 = (undefined1)((uint)_UNK_0139ee04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0139ee04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0139ee04 >> 0x18);
      uStack_73 = (undefined1)_UNK_0139ee08;
      uStack_72 = (undefined1)((uint)_UNK_0139ee08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0139ee08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0139ee08 >> 0x18);
      uStack_6f = 0x73;
      uStack_6e = 0x73;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,4);
      uStack_80 = 0x776f6c1e;
      uStack_7c = 0x5f;
      uStack_7b = 0x66;
      uStack_7a = 0x6c;
      uStack_79 = 0x6f;
      uStack_78 = 99;
      uStack_77 = 0x6b;
      uStack_76 = 0x5f;
      uStack_75 = 0x6c;
      uStack_74 = 0x69;
      uStack_73 = 0x6d;
      uStack_72 = 0x69;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,8);
      uStack_80._1_3_ = (undefined3)_DAT_0124b8c5;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_0124b8c5 >> 0x18);
      uStack_7b = (undefined1)_UNK_0124b8c9;
      uStack_7a = (undefined1)((uint)_UNK_0124b8c9 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0124b8c9 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0124b8c9 >> 0x18);
      uStack_77 = (undefined1)_UNK_0124b8cd;
      uStack_76 = (undefined1)((uint)_UNK_0124b8cd >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0124b8cd >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0124b8cd >> 0x18);
      uStack_73 = (undefined1)_UNK_0124b8d1;
      uStack_72 = (undefined1)((uint)_UNK_0124b8d1 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0124b8d1 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0124b8d1 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x616f6716;
      uStack_7c = 0x6c;
      uStack_7b = 0x5f;
      uStack_7a = 0x77;
      uStack_79 = 0x65;
      uStack_78 = 0x69;
      uStack_77 = 0x67;
      uStack_76 = 0x68;
      uStack_75 = 0x74;
      uStack_74 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0268,auStack_68);
      uStack_80 = 0x6e6f6c18;
      uStack_7c = 0x65;
      uStack_7b = 0x72;
      uStack_7a = 0x5f;
      uStack_79 = 99;
      uStack_78 = 0x68;
      uStack_77 = 0x61;
      uStack_76 = 0x6e;
      uStack_75 = 99;
      uStack_74 = 0x65;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06b0,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014207d8;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_014207d8 >> 0x18);
      uStack_7b = (undefined1)_UNK_014207dc;
      uStack_7a = (undefined1)((uint)_UNK_014207dc >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014207dc >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014207dc >> 0x18);
      uStack_77 = (undefined1)_UNK_014207e0;
      uStack_76 = (undefined1)((uint)_UNK_014207e0 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014207e0 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014207e0 >> 0x18);
      uStack_73 = (undefined1)_UNK_014207e4;
      uStack_72 = (undefined1)((uint)_UNK_014207e4 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014207e4 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014207e4 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f0668,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_012fdcfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_012fdcfc >> 0x18);
      uStack_7b = (undefined1)_UNK_012fdd00;
      uStack_7a = (undefined1)((uint)_UNK_012fdd00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_012fdd00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_012fdd00 >> 0x18);
      uStack_77 = (undefined1)_UNK_012fdd04;
      uStack_76 = (undefined1)((uint)_UNK_012fdd04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_012fdd04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_012fdd04 >> 0x18);
      uStack_73 = (undefined1)_UNK_012fdd08;
      uStack_72 = (undefined1)((uint)_UNK_012fdd08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_012fdd08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_012fdd08 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f04c8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011e097e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x22);
      uStack_7c = (undefined1)((uint)_DAT_011e097e >> 0x18);
      uStack_7b = (undefined1)_UNK_011e0982;
      uStack_7a = (undefined1)((uint)_UNK_011e0982 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011e0982 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011e0982 >> 0x18);
      uStack_77 = (undefined1)_UNK_011e0986;
      uStack_76 = (undefined1)((uint)_UNK_011e0986 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011e0986 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011e0986 >> 0x18);
      uStack_73 = (undefined1)_UNK_011e098a;
      uStack_72 = (undefined1)((uint)_UNK_011e098a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011e098a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011e098a >> 0x18);
      uStack_6f = 0x74;
      uStack_6e = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f08a8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014a211e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x28);
      uStack_7c = (undefined1)((uint)_DAT_014a211e >> 0x18);
      uStack_7b = (undefined1)_UNK_014a2122;
      uStack_7a = (undefined1)((uint)_UNK_014a2122 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014a2122 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014a2122 >> 0x18);
      uStack_77 = (undefined1)_UNK_014a2126;
      uStack_76 = (undefined1)((uint)_UNK_014a2126 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014a2126 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014a2126 >> 0x18);
      uStack_73 = (undefined1)_UNK_014a212a;
      uStack_72 = (undefined1)((uint)_UNK_014a212a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014a212a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014a212a >> 0x18);
      uStack_6f = 0x68;
      uStack_6e = 0x6f;
      uStack_6d = 0x6c;
      uStack_6c = 100;
      uStack_6b = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f0318,auStack_68);
      uStack_80 = 0x686f631e;
      uStack_7c = 0x65;
      uStack_7b = 0x73;
      uStack_7a = 0x69;
      uStack_79 = 0x6f;
      uStack_78 = 0x6e;
      uStack_77 = 0x5f;
      uStack_76 = 0x77;
      uStack_75 = 0x65;
      uStack_74 = 0x69;
      uStack_73 = 0x67;
      uStack_72 = 0x68;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06d8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011fb5fd;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_011fb5fd >> 0x18);
      uStack_7b = (undefined1)_UNK_011fb601;
      uStack_7a = (undefined1)((uint)_UNK_011fb601 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011fb601 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011fb601 >> 0x18);
      uStack_77 = (undefined1)_UNK_011fb605;
      uStack_76 = (undefined1)((uint)_UNK_011fb605 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011fb605 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011fb605 >> 0x18);
      uStack_73 = (undefined1)_UNK_011fb609;
      uStack_72 = (undefined1)((uint)_UNK_011fb609 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011fb609 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011fb609 >> 0x18);
      uStack_6f = 0x6c;
      uStack_6e = 100;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06d8,auStack_68);
      puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar9 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar8 = _UNK_012b0ca9;
      uStack_70 = SUB81(puVar9,0);
      uStack_6f = (undefined1)((ulong)puVar9 >> 8);
      uStack_6e = (undefined1)((ulong)puVar9 >> 0x10);
      uStack_6d = (undefined1)((ulong)puVar9 >> 0x18);
      uStack_6c = (undefined1)((ulong)puVar9 >> 0x20);
      uStack_6b = (undefined1)((ulong)puVar9 >> 0x28);
      uStack_6a = (undefined1)((ulong)puVar9 >> 0x30);
      uStack_69 = (undefined1)((ulong)puVar9 >> 0x38);
      uStack_80 = 0x21;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      uStack_79 = 0;
      uStack_78 = 0x19;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      *(ulong *)((long)puVar9 + 9) = CONCAT17(UNK_012b0ca8,CONCAT43(_UNK_012b0ca4,_DAT_012b0ca1));
      *(undefined8 *)((long)puVar9 + 0x11) = uVar8;
      uVar3 = _UNK_012b0ca4;
      uVar2 = _UNK_012b0ca0;
      uVar1 = _UNK_012b0c9c;
      *puVar9 = _DAT_012b0c98;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      *(undefined1 *)((long)puVar9 + 0x19) = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01a8,auStack_68);
      uStack_80 = 0x6e696d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01a8,auStack_68);
      uStack_80 = 0x78616d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0478,auStack_68);
      uStack_80 = 0x6f6c621c;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_79 = 100;
      uStack_78 = 0x69;
      uStack_77 = 0x73;
      uStack_76 = 0x74;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 99;
      uStack_72 = 0x65;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0530,auStack_68);
      uStack_80 = 0x6f6c6218;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_79 = 0x77;
      uStack_78 = 0x65;
      uStack_77 = 0x69;
      uStack_76 = 0x67;
      uStack_75 = 0x68;
      uStack_74 = 0x74;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      break;
    case 0x236f:
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      func_0x04863060(auStack_68,7);
      uStack_80._1_3_ = (undefined3)_DAT_01486ac4;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_01486ac4 >> 0x18);
      uStack_7b = (undefined1)_UNK_01486ac8;
      uStack_7a = (undefined1)((uint)_UNK_01486ac8 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_01486ac8 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_01486ac8 >> 0x18);
      uStack_77 = (undefined1)_UNK_01486acc;
      uStack_76 = (undefined1)((uint)_UNK_01486acc >> 8);
      uStack_75 = (undefined1)((uint)_UNK_01486acc >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_01486acc >> 0x18);
      uStack_73 = (undefined1)_UNK_01486ad0;
      uStack_72 = (undefined1)((uint)_UNK_01486ad0 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_01486ad0 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_01486ad0 >> 0x18);
      uStack_6f = 0x6e;
      uStack_6e = 0x67;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,1);
      uStack_80 = 0x5f6e6910;
      uStack_7c = 0x77;
      uStack_7b = 0x61;
      uStack_7a = 0x74;
      uStack_79 = 0x65;
      uStack_78 = 0x72;
      uStack_77 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,1);
      uStack_80 = 0x74616d1c;
      uStack_7c = 99;
      uStack_7b = 0x68;
      uStack_7a = 0x5f;
      uStack_79 = 0x76;
      uStack_78 = 0x61;
      uStack_77 = 0x72;
      uStack_76 = 0x69;
      uStack_75 = 0x61;
      uStack_74 = 0x6e;
      uStack_73 = 0x74;
      uStack_72 = 0x73;
      uStack_71 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863290(auStack_68,0);
      uStack_80._1_3_ = (undefined3)_DAT_0139edfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_0139edfc >> 0x18);
      uStack_7b = (undefined1)_UNK_0139ee00;
      uStack_7a = (undefined1)((uint)_UNK_0139ee00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0139ee00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0139ee00 >> 0x18);
      uStack_77 = (undefined1)_UNK_0139ee04;
      uStack_76 = (undefined1)((uint)_UNK_0139ee04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0139ee04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0139ee04 >> 0x18);
      uStack_73 = (undefined1)_UNK_0139ee08;
      uStack_72 = (undefined1)((uint)_UNK_0139ee08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0139ee08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0139ee08 >> 0x18);
      uStack_6f = 0x73;
      uStack_6e = 0x73;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,4);
      uStack_80 = 0x776f6c1e;
      uStack_7c = 0x5f;
      uStack_7b = 0x66;
      uStack_7a = 0x6c;
      uStack_79 = 0x6f;
      uStack_78 = 99;
      uStack_77 = 0x6b;
      uStack_76 = 0x5f;
      uStack_75 = 0x6c;
      uStack_74 = 0x69;
      uStack_73 = 0x6d;
      uStack_72 = 0x69;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x048630e0(auStack_68,8);
      uStack_80._1_3_ = (undefined3)_DAT_0124b8c5;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_0124b8c5 >> 0x18);
      uStack_7b = (undefined1)_UNK_0124b8c9;
      uStack_7a = (undefined1)((uint)_UNK_0124b8c9 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_0124b8c9 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_0124b8c9 >> 0x18);
      uStack_77 = (undefined1)_UNK_0124b8cd;
      uStack_76 = (undefined1)((uint)_UNK_0124b8cd >> 8);
      uStack_75 = (undefined1)((uint)_UNK_0124b8cd >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_0124b8cd >> 0x18);
      uStack_73 = (undefined1)_UNK_0124b8d1;
      uStack_72 = (undefined1)((uint)_UNK_0124b8d1 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_0124b8d1 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_0124b8d1 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x616f6716;
      uStack_7c = 0x6c;
      uStack_7b = 0x5f;
      uStack_7a = 0x77;
      uStack_79 = 0x65;
      uStack_78 = 0x69;
      uStack_77 = 0x67;
      uStack_76 = 0x68;
      uStack_75 = 0x74;
      uStack_74 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0268,auStack_68);
      uStack_80 = 0x6e6f6c18;
      uStack_7c = 0x65;
      uStack_7b = 0x72;
      uStack_7a = 0x5f;
      uStack_79 = 99;
      uStack_78 = 0x68;
      uStack_77 = 0x61;
      uStack_76 = 0x6e;
      uStack_75 = 99;
      uStack_74 = 0x65;
      uStack_73 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06b0,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014207d8;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_014207d8 >> 0x18);
      uStack_7b = (undefined1)_UNK_014207dc;
      uStack_7a = (undefined1)((uint)_UNK_014207dc >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014207dc >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014207dc >> 0x18);
      uStack_77 = (undefined1)_UNK_014207e0;
      uStack_76 = (undefined1)((uint)_UNK_014207e0 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014207e0 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014207e0 >> 0x18);
      uStack_73 = (undefined1)_UNK_014207e4;
      uStack_72 = (undefined1)((uint)_UNK_014207e4 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014207e4 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014207e4 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f0668,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_012fdcfc;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x20);
      uStack_7c = (undefined1)((uint)_DAT_012fdcfc >> 0x18);
      uStack_7b = (undefined1)_UNK_012fdd00;
      uStack_7a = (undefined1)((uint)_UNK_012fdd00 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_012fdd00 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_012fdd00 >> 0x18);
      uStack_77 = (undefined1)_UNK_012fdd04;
      uStack_76 = (undefined1)((uint)_UNK_012fdd04 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_012fdd04 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_012fdd04 >> 0x18);
      uStack_73 = (undefined1)_UNK_012fdd08;
      uStack_72 = (undefined1)((uint)_UNK_012fdd08 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_012fdd08 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_012fdd08 >> 0x18);
      uStack_6f = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f04c8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011e097e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x22);
      uStack_7c = (undefined1)((uint)_DAT_011e097e >> 0x18);
      uStack_7b = (undefined1)_UNK_011e0982;
      uStack_7a = (undefined1)((uint)_UNK_011e0982 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011e0982 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011e0982 >> 0x18);
      uStack_77 = (undefined1)_UNK_011e0986;
      uStack_76 = (undefined1)((uint)_UNK_011e0986 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011e0986 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011e0986 >> 0x18);
      uStack_73 = (undefined1)_UNK_011e098a;
      uStack_72 = (undefined1)((uint)_UNK_011e098a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011e098a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011e098a >> 0x18);
      uStack_6f = 0x74;
      uStack_6e = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f08a8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_014a211e;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x28);
      uStack_7c = (undefined1)((uint)_DAT_014a211e >> 0x18);
      uStack_7b = (undefined1)_UNK_014a2122;
      uStack_7a = (undefined1)((uint)_UNK_014a2122 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_014a2122 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_014a2122 >> 0x18);
      uStack_77 = (undefined1)_UNK_014a2126;
      uStack_76 = (undefined1)((uint)_UNK_014a2126 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_014a2126 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_014a2126 >> 0x18);
      uStack_73 = (undefined1)_UNK_014a212a;
      uStack_72 = (undefined1)((uint)_UNK_014a212a >> 8);
      uStack_71 = (undefined1)((uint)_UNK_014a212a >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_014a212a >> 0x18);
      uStack_6f = 0x68;
      uStack_6e = 0x6f;
      uStack_6d = 0x6c;
      uStack_6c = 100;
      uStack_6b = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_UNK_014f07f0,auStack_68);
      uStack_80 = 0x686f631e;
      uStack_7c = 0x65;
      uStack_7b = 0x73;
      uStack_7a = 0x69;
      uStack_79 = 0x6f;
      uStack_78 = 0x6e;
      uStack_77 = 0x5f;
      uStack_76 = 0x77;
      uStack_75 = 0x65;
      uStack_74 = 0x69;
      uStack_73 = 0x67;
      uStack_72 = 0x68;
      uStack_71 = 0x74;
      uStack_70 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06d8,auStack_68);
      uStack_80._1_3_ = (undefined3)_DAT_011fb5fd;
      uStack_80 = CONCAT31(uStack_80._1_3_,0x24);
      uStack_7c = (undefined1)((uint)_DAT_011fb5fd >> 0x18);
      uStack_7b = (undefined1)_UNK_011fb601;
      uStack_7a = (undefined1)((uint)_UNK_011fb601 >> 8);
      uStack_79 = (undefined1)((uint)_UNK_011fb601 >> 0x10);
      uStack_78 = (undefined1)((uint)_UNK_011fb601 >> 0x18);
      uStack_77 = (undefined1)_UNK_011fb605;
      uStack_76 = (undefined1)((uint)_UNK_011fb605 >> 8);
      uStack_75 = (undefined1)((uint)_UNK_011fb605 >> 0x10);
      uStack_74 = (undefined1)((uint)_UNK_011fb605 >> 0x18);
      uStack_73 = (undefined1)_UNK_011fb609;
      uStack_72 = (undefined1)((uint)_UNK_011fb609 >> 8);
      uStack_71 = (undefined1)((uint)_UNK_011fb609 >> 0x10);
      uStack_70 = (undefined1)((uint)_UNK_011fb609 >> 0x18);
      uStack_6f = 0x6c;
      uStack_6e = 100;
      uStack_6d = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06d8,auStack_68);
      puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar9 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar8 = _UNK_012b0ca9;
      uStack_70 = SUB81(puVar9,0);
      uStack_6f = (undefined1)((ulong)puVar9 >> 8);
      uStack_6e = (undefined1)((ulong)puVar9 >> 0x10);
      uStack_6d = (undefined1)((ulong)puVar9 >> 0x18);
      uStack_6c = (undefined1)((ulong)puVar9 >> 0x20);
      uStack_6b = (undefined1)((ulong)puVar9 >> 0x28);
      uStack_6a = (undefined1)((ulong)puVar9 >> 0x30);
      uStack_69 = (undefined1)((ulong)puVar9 >> 0x38);
      uStack_80 = 0x21;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      uStack_79 = 0;
      uStack_78 = 0x19;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      *(ulong *)((long)puVar9 + 9) = CONCAT17(UNK_012b0ca8,CONCAT43(_UNK_012b0ca4,_DAT_012b0ca1));
      *(undefined8 *)((long)puVar9 + 0x11) = uVar8;
      uVar3 = _UNK_012b0ca4;
      uVar2 = _UNK_012b0ca0;
      uVar1 = _UNK_012b0c9c;
      *puVar9 = _DAT_012b0c98;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      *(undefined1 *)((long)puVar9 + 0x19) = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f06d8,auStack_68);
      uStack_80 = 0x6e696d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f0168,auStack_68);
      uStack_80 = 0x78616d14;
      uStack_7c = 0x5f;
      uStack_7b = 0x68;
      uStack_7a = 0x65;
      uStack_79 = 0x69;
      uStack_78 = 0x67;
      uStack_77 = 0x68;
      uStack_76 = 0x74;
      uStack_75 = 0;
      cVar4 = func_0x04864260(uVar7);
      if (cVar4 == '\0') {
        cVar4 = func_0x04865190(uVar7,&uStack_80);
        uVar8 = func_0x04864970(uVar7,&uStack_80);
        if (cVar4 == '\0') {
          func_0x04863740(uVar8,auStack_68);
          func_0x04864970(uVar7,&uStack_80);
        }
      }
      if ((uStack_80 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_69,
                                 CONCAT16(uStack_6a,
                                          CONCAT15(uStack_6b,
                                                   CONCAT14(uStack_6c,
                                                            CONCAT13(uStack_6d,
                                                                     CONCAT12(uStack_6e,
                                                                              CONCAT11(uStack_6f,
                                                                                       uStack_70))))
                                                  ))),
                        CONCAT17(uStack_79,
                                 CONCAT16(uStack_7a,
                                          CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)))) &
                        0xfffffffffffffffe);
      }
      func_0x04863610(auStack_68);
      uVar7 = func_0x04864680(uStack_58,&UNK_0146768a);
      uVar7 = func_0x04864680(uVar7,&UNK_011ed181);
      uVar7 = func_0x04864680(uVar7,&DAT_01486ac4);
      func_0x04863110((int)_DAT_014f01e8,auStack_68);
      uStack_80 = 0x6f6c621c;
      uStack_7c = 99;
      uStack_7b = 0x6b;
      uStack_7a = 0x5f;
      uStack_7
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11e097e  separation_weight
 * 0x11f6254  minecraft:type_family
 * 0x11fb5fd  cohesion_threshold
 * 0x123d47a  minecraft:behavior.target_when_pushed
 * 0x123d48a  or.target_when_pushed
 * 0x124b8c5  high_flock_limit
 * 0x127eef2  minecraft:pushable
 * 0x127ef05  minecraft:filters
 * 0x12b0c98  innner_cohesion_threshold
 * 0x12b0ca1  hesion_threshold
 * 0x12fdcfc  breach_influence
 * 0x131845c  is_pushable_by_piston
 * 0x139edfc  use_center_of_mass
 * 0x13ba1c8  minecraft:persistent
 * 0x14207d8  influence_radius
 * 0x1486ac4  minecraft:flocking
 * 0x14a211e  separation_threshold
 */
