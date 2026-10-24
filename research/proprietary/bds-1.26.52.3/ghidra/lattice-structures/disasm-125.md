# FUN_0eee2940 (disassembly)

```
0eee2940  MOV RAX,qword ptr [RDI + 0x8]
0eee2944  MOV RCX,qword ptr [RDI + 0x10]
0eee2948  SUB RAX,RCX
0eee294b  JZ 0x0eee295c
0eee294d  ADD RAX,0x7
0eee2951  AND RAX,-0x8
0eee2955  ADD RCX,RAX
0eee2958  MOV qword ptr [RDI + 0x10],RCX
0eee295c  MOV RAX,qword ptr [RDI]
0eee295f  TEST RAX,RAX
0eee2962  JZ 0x0eee2973
0eee2964  MOV RSI,qword ptr [RDI + 0x18]
0eee2968  SUB RSI,RAX
0eee296b  MOV RDI,RAX
0eee296e  JMP 0x0412a280
0eee2973  RET
```
