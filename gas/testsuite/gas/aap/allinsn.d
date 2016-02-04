#as:
#objdump: -dr
#name: allinsn

.*: +file format .*


Disassembly of section \.text:

00000000 <nop>:
   0:	0000      	nop r0,#0x0
   2:	01ff      	nop r7,#0x3f
   4:	0120      	nop r4,#0x20
   6:	00df      	nop r3,#0x1f
   8:	0041      	nop r1,#0x1
   a:	00b9      	nop r2,#0x39
   c:	00be      	nop r2,#0x3e
   e:	00a7      	nop r2,#0x27

00000010 <add>:
  10:	0200      	add r0,r0,r0
  12:	03ff      	add r7,r7,r7
  14:	0324      	add r4,r4,r4
  16:	02db      	add r3,r3,r3
  18:	0249      	add r1,r1,r1
  1a:	02ff      	add r3,r7,r7
  1c:	03c8      	add r7,r1,r0
  1e:	0376      	add r5,r6,r6

00000020 <sub>:
  20:	0400      	sub r0,r0,r0
  22:	05ff      	sub r7,r7,r7
  24:	0524      	sub r4,r4,r4
  26:	04db      	sub r3,r3,r3
  28:	0449      	sub r1,r1,r1
  2a:	0559      	sub r5,r3,r1
  2c:	0426      	sub r0,r4,r6
  2e:	0463      	sub r1,r4,r3

00000030 <and>:
  30:	0600      	and r0,r0,r0
  32:	07ff      	and r7,r7,r7
  34:	0724      	and r4,r4,r4
  36:	06db      	and r3,r3,r3
  38:	0649      	and r1,r1,r1
  3a:	077e      	and r5,r7,r6
  3c:	061b      	and r0,r3,r3
  3e:	06ac      	and r2,r5,r4

00000040 <or>:
  40:	0800      	or r0,r0,r0
  42:	09ff      	or r7,r7,r7
  44:	0924      	or r4,r4,r4
  46:	08db      	or r3,r3,r3
  48:	0849      	or r1,r1,r1
  4a:	094e      	or r5,r1,r6
  4c:	0827      	or r0,r4,r7
  4e:	0909      	or r4,r1,r1

00000050 <xor>:
  50:	0a00      	xor r0,r0,r0
  52:	0bff      	xor r7,r7,r7
  54:	0b24      	xor r4,r4,r4
  56:	0adb      	xor r3,r3,r3
  58:	0a49      	xor r1,r1,r1
  5a:	0ade      	xor r3,r3,r6
  5c:	0aa4      	xor r2,r4,r4
  5e:	0bf6      	xor r7,r6,r6

00000060 <asr>:
  60:	0c00      	asr r0,r0,r0
  62:	0dff      	asr r7,r7,r7
  64:	0d24      	asr r4,r4,r4
  66:	0cdb      	asr r3,r3,r3
  68:	0c49      	asr r1,r1,r1
  6a:	0cfd      	asr r3,r7,r5
  6c:	0da4      	asr r6,r4,r4
  6e:	0dbc      	asr r6,r7,r4

00000070 <lsl>:
  70:	0e00      	lsl r0,r0,r0
  72:	0fff      	lsl r7,r7,r7
  74:	0f24      	lsl r4,r4,r4
  76:	0edb      	lsl r3,r3,r3
  78:	0e49      	lsl r1,r1,r1
  7a:	0fe5      	lsl r7,r4,r5
  7c:	0fb0      	lsl r6,r6,r0
  7e:	0f7e      	lsl r5,r7,r6

00000080 <lsr>:
  80:	1000      	lsr r0,r0,r0
  82:	11ff      	lsr r7,r7,r7
  84:	1124      	lsr r4,r4,r4
  86:	10db      	lsr r3,r3,r3
  88:	1049      	lsr r1,r1,r1
  8a:	1011      	lsr r0,r2,r1
  8c:	11f1      	lsr r7,r6,r1
  8e:	11c9      	lsr r7,r1,r1

00000090 <mov>:
  90:	1200      	mov r0,r0
  92:	13f8      	mov r7,r7
  94:	1320      	mov r4,r4
  96:	12d8      	mov r3,r3
  98:	1248      	mov r1,r1
  9a:	1360      	mov r5,r4
  9c:	13c0      	mov r7,r0
  9e:	12c0      	mov r3,r0

000000a0 <addi>:
  a0:	1400      	addi r0,r0,#0x0
  a2:	15ff      	addi r7,r7,#0x7
  a4:	1524      	addi r4,r4,#0x4
  a6:	14db      	addi r3,r3,#0x3
  a8:	1449      	addi r1,r1,#0x1
  aa:	15eb      	addi r7,r5,#0x3
  ac:	1562      	addi r5,r4,#0x2
  ae:	1585      	addi r6,r0,#0x5

000000b0 <subi>:
  b0:	1600      	subi r0,r0,#0x0
  b2:	17ff      	subi r7,r7,#0x7
  b4:	1724      	subi r4,r4,#0x4
  b6:	16db      	subi r3,r3,#0x3
  b8:	1649      	subi r1,r1,#0x1
  ba:	16fb      	subi r3,r7,#0x3
  bc:	16c0      	subi r3,r0,#0x0
  be:	1763      	subi r5,r4,#0x3

000000c0 <asri>:
  c0:	1800      	asri r0,r0,#0x0
  c2:	19ff      	asri r7,r7,#0x7
  c4:	1924      	asri r4,r4,#0x4
  c6:	18db      	asri r3,r3,#0x3
  c8:	1849      	asri r1,r1,#0x1
  ca:	19d5      	asri r7,r2,#0x5
  cc:	1881      	asri r2,r0,#0x1
  ce:	1972      	asri r5,r6,#0x2

000000d0 <lsli>:
  d0:	1a00      	lsli r0,r0,#0x0
  d2:	1bff      	lsli r7,r7,#0x7
  d4:	1b24      	lsli r4,r4,#0x4
  d6:	1adb      	lsli r3,r3,#0x3
  d8:	1a49      	lsli r1,r1,#0x1
  da:	1b26      	lsli r4,r4,#0x6
  dc:	1a92      	lsli r2,r2,#0x2
  de:	1a8f      	lsli r2,r1,#0x7

000000e0 <lsri>:
  e0:	1c00      	lsri r0,r0,#0x0
  e2:	1dff      	lsri r7,r7,#0x7
  e4:	1d24      	lsri r4,r4,#0x4
  e6:	1cdb      	lsri r3,r3,#0x3
  e8:	1c49      	lsri r1,r1,#0x1
  ea:	1c0d      	lsri r0,r1,#0x5
  ec:	1ccb      	lsri r3,r1,#0x3
  ee:	1c4f      	lsri r1,r1,#0x7

000000f0 <movi>:
  f0:	1e00      	movi r0,#0x0
  f2:	1fff      	movi r7,#0x3f
  f4:	1f20      	movi r4,#0x20
  f6:	1edf      	movi r3,#0x1f
  f8:	1e41      	movi r1,#0x1
  fa:	1ffa      	movi r7,#0x3a
  fc:	1e2a      	movi r0,#0x2a
  fe:	1eb8      	movi r2,#0x38

00000100 <ldb_post_inc>:
 100:	2200      	ldb r0,\(r0\+,0\)
 102:	23ff      	ldb r7,\(r7\+,-1\)
 104:	2324      	ldb r4,\(r4\+,-4\)
 106:	22db      	ldb r3,\(r3\+,3\)
 108:	2249      	ldb r1,\(r1\+,1\)
 10a:	223a      	ldb r0,\(r7\+,2\)
 10c:	22d9      	ldb r3,\(r3\+,1\)
 10e:	2312      	ldb r4,\(r2\+,2\)

00000110 <ldw_post_inc>:
 110:	2a00      	ldw r0,\(r0\+,0\)
 112:	2bff      	ldw r7,\(r7\+,-1\)
 114:	2b24      	ldw r4,\(r4\+,-4\)
 116:	2adb      	ldw r3,\(r3\+,3\)
 118:	2a49      	ldw r1,\(r1\+,1\)
 11a:	2a66      	ldw r1,\(r4\+,-2\)
 11c:	2b1f      	ldw r4,\(r3\+,-1\)
 11e:	2a81      	ldw r2,\(r0\+,1\)

00000120 <stb_post_inc>:
 120:	3200      	stb \(r0\+,0\),r0
 122:	33ff      	stb \(r7\+,-1\),r7
 124:	3324      	stb \(r4\+,-4\),r4
 126:	32db      	stb \(r3\+,3\),r3
 128:	3249      	stb \(r1\+,1\),r1
 12a:	338f      	stb \(r6\+,-1\),r1
 12c:	333a      	stb \(r4\+,2\),r7
 12e:	337e      	stb \(r5\+,-2\),r7

00000130 <stw_post_inc>:
 130:	3a00      	stw \(r0\+,0\),r0
 132:	3bff      	stw \(r7\+,-1\),r7
 134:	3b24      	stw \(r4\+,-4\),r4
 136:	3adb      	stw \(r3\+,3\),r3
 138:	3a49      	stw \(r1\+,1\),r1
 13a:	3bec      	stw \(r7\+,-4\),r5
 13c:	3acb      	stw \(r3\+,3\),r1
 13e:	3b12      	stw \(r4\+,2\),r2

00000140 <bra>:
 140:	41fe      	bra 13c <stw_post_inc\+0xc>
 142:	4000      	bra 142 <bra\+0x2>
 144:	41fe      	bra 140 <bra>
 146:	4002      	bra 14a <bra\+0xa>
 148:	4000      	bra 148 <bra\+0x8>
 14a:	4002      	bra 14e <bra\+0xe>
 14c:	4000      	bra 14c <bra\+0xc>
 14e:	4002      	bra 152 <bal\+0x2>

00000150 <bal>:
 150:	4210      	bal 154 <bal\+0x4>,r0
 152:	4207      	bal 152 <bal\+0x2>,r7
 154:	4204      	bal 154 <bal\+0x4>,r4
 156:	4213      	bal 15a <bal\+0xa>,r3
 158:	4211      	bal 15c <bal\+0xc>,r1
 15a:	4204      	bal 15a <bal\+0xa>,r4
 15c:	43f1      	bal 158 <bal\+0x8>,r1
 15e:	4207      	bal 15e <bal\+0xe>,r7

00000160 <beq>:
 160:	4580      	beq 15c <bal\+0xc>,r0,r0
 162:	45bf      	beq 15e <bal\+0xe>,r7,r7
 164:	4424      	beq 164 <beq\+0x4>,r4,r4
 166:	459b      	beq 162 <beq\+0x2>,r3,r3
 168:	4409      	beq 168 <beq\+0x8>,r1,r1
 16a:	45ab      	beq 166 <beq\+0x6>,r5,r3
 16c:	4423      	beq 16c <beq\+0xc>,r4,r3
 16e:	4493      	beq 172 <bne\+0x2>,r2,r3

00000170 <bne>:
 170:	4600      	bne 170 <bne>,r0,r0
 172:	463f      	bne 172 <bne\+0x2>,r7,r7
 174:	46a4      	bne 178 <bne\+0x8>,r4,r4
 176:	461b      	bne 176 <bne\+0x6>,r3,r3
 178:	4609      	bne 178 <bne\+0x8>,r1,r1
 17a:	4620      	bne 17a <bne\+0xa>,r4,r0
 17c:	4627      	bne 17c <bne\+0xc>,r4,r7
 17e:	461d      	bne 17e <bne\+0xe>,r3,r5

00000180 <blts>:
 180:	4980      	blts 17c <bne\+0xc>,r0,r0
 182:	49bf      	blts 17e <bne\+0xe>,r7,r7
 184:	4824      	blts 184 <blts\+0x4>,r4,r4
 186:	481b      	blts 186 <blts\+0x6>,r3,r3
 188:	4889      	blts 18c <blts\+0xc>,r1,r1
 18a:	482a      	blts 18a <blts\+0xa>,r5,r2
 18c:	482e      	blts 18c <blts\+0xc>,r5,r6
 18e:	4816      	blts 18e <blts\+0xe>,r2,r6

00000190 <bgts>:
 190:	4a00      	bgts 190 <bgts>,r0,r0
 192:	4a3f      	bgts 192 <bgts\+0x2>,r7,r7
 194:	4ba4      	bgts 190 <bgts>,r4,r4
 196:	4a1b      	bgts 196 <bgts\+0x6>,r3,r3
 198:	4b89      	bgts 194 <bgts\+0x4>,r1,r1
 19a:	4a21      	bgts 19a <bgts\+0xa>,r4,r1
 19c:	4a30      	bgts 19c <bgts\+0xc>,r6,r0
 19e:	4ba2      	bgts 19a <bgts\+0xa>,r4,r2

000001a0 <bltu>:
 1a0:	4d80      	bltu 19c <bgts\+0xc>,r0,r0
 1a2:	4c3f      	bltu 1a2 <bltu\+0x2>,r7,r7
 1a4:	4da4      	bltu 1a0 <bltu>,r4,r4
 1a6:	4c1b      	bltu 1a6 <bltu\+0x6>,r3,r3
 1a8:	4d89      	bltu 1a4 <bltu\+0x4>,r1,r1
 1aa:	4c22      	bltu 1aa <bltu\+0xa>,r4,r2
 1ac:	4c0c      	bltu 1ac <bltu\+0xc>,r1,r4
 1ae:	4c37      	bltu 1ae <bltu\+0xe>,r6,r7

000001b0 <bgtu>:
 1b0:	4f80      	bgtu 1ac <bltu\+0xc>,r0,r0
 1b2:	4e3f      	bgtu 1b2 <bgtu\+0x2>,r7,r7
 1b4:	4e24      	bgtu 1b4 <bgtu\+0x4>,r4,r4
 1b6:	4e9b      	bgtu 1ba <bgtu\+0xa>,r3,r3
 1b8:	4e89      	bgtu 1bc <bgtu\+0xc>,r1,r1
 1ba:	4f84      	bgtu 1b6 <bgtu\+0x6>,r0,r4
 1bc:	4f9e      	bgtu 1b8 <bgtu\+0x8>,r3,r6
 1be:	4e38      	bgtu 1be <bgtu\+0xe>,r7,r0

000001c0 <jmp>:
 1c0:	5000      	jmp r0
 1c2:	51c0      	jmp r7
 1c4:	5100      	jmp r4
 1c6:	50c0      	jmp r3
 1c8:	5040      	jmp r1
 1ca:	50c0      	jmp r3
 1cc:	50c0      	jmp r3
 1ce:	5100      	jmp r4

000001d0 <jal>:
 1d0:	5200      	jal r0,r0
 1d2:	53c7      	jal r7,r7
 1d4:	5304      	jal r4,r4
 1d6:	52c3      	jal r3,r3
 1d8:	5241      	jal r1,r1
 1da:	5304      	jal r4,r4
 1dc:	5300      	jal r4,r0
 1de:	5286      	jal r2,r6

000001e0 <jeq>:
 1e0:	5400      	jeq r0,r0,r0
 1e2:	55ff      	jeq r7,r7,r7
 1e4:	5524      	jeq r4,r4,r4
 1e6:	54db      	jeq r3,r3,r3
 1e8:	5449      	jeq r1,r1,r1
 1ea:	5425      	jeq r0,r4,r5
 1ec:	5439      	jeq r0,r7,r1
 1ee:	547a      	jeq r1,r7,r2

000001f0 <jne>:
 1f0:	5600      	jne r0,r0,r0
 1f2:	57ff      	jne r7,r7,r7
 1f4:	5724      	jne r4,r4,r4
 1f6:	56db      	jne r3,r3,r3
 1f8:	5649      	jne r1,r1,r1
 1fa:	56a0      	jne r2,r4,r0
 1fc:	5673      	jne r1,r6,r3
 1fe:	56bb      	jne r2,r7,r3

00000200 <jlts>:
 200:	5800      	jlts r0,r0,r0
 202:	59ff      	jlts r7,r7,r7
 204:	5924      	jlts r4,r4,r4
 206:	58db      	jlts r3,r3,r3
 208:	5849      	jlts r1,r1,r1
 20a:	58e4      	jlts r3,r4,r4
 20c:	5806      	jlts r0,r0,r6
 20e:	58cd      	jlts r3,r1,r5

00000210 <jgts>:
 210:	5a00      	jgts r0,r0,r0
 212:	5bff      	jgts r7,r7,r7
 214:	5b24      	jgts r4,r4,r4
 216:	5adb      	jgts r3,r3,r3
 218:	5a49      	jgts r1,r1,r1
 21a:	5bfc      	jgts r7,r7,r4
 21c:	5b4d      	jgts r5,r1,r5
 21e:	5b4c      	jgts r5,r1,r4

00000220 <jltu>:
 220:	5c00      	jltu r0,r0,r0
 222:	5dff      	jltu r7,r7,r7
 224:	5d24      	jltu r4,r4,r4
 226:	5cdb      	jltu r3,r3,r3
 228:	5c49      	jltu r1,r1,r1
 22a:	5cee      	jltu r3,r5,r6
 22c:	5db4      	jltu r6,r6,r4
 22e:	5dc6      	jltu r7,r0,r6

00000230 <jgtu>:
 230:	5e00      	jgtu r0,r0,r0
 232:	5fff      	jgtu r7,r7,r7
 234:	5f24      	jgtu r4,r4,r4
 236:	5edb      	jgtu r3,r3,r3
 238:	5e49      	jgtu r1,r1,r1
 23a:	5efc      	jgtu r3,r7,r4
 23c:	5f3e      	jgtu r4,r7,r6
 23e:	5ef1      	jgtu r3,r6,r1

00000240 <rte>:
 240:	6000      	rte r0
 242:	61c0      	rte r7
 244:	6100      	rte r4
 246:	60c0      	rte r3
 248:	6040      	rte r1
 24a:	6180      	rte r6
 24c:	6040      	rte r1
 24e:	6140      	rte r5
