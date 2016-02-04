 .data
foodata: .word 42
 .text
footext:
	.text
	.global nop
nop:
	nop r0,#0
	nop r7,#63
	nop r4,#32
	nop r3,#31
	nop r1,#1
	nop r2,#57
	nop r2,#62
	nop r2,#39
	.text
	.global add
add:
	add r0,r0,r0
	add r7,r7,r7
	add r4,r4,r4
	add r3,r3,r3
	add r1,r1,r1
	add r3,r7,r7
	add r7,r1,r0
	add r5,r6,r6
	.text
	.global sub
sub:
	sub r0,r0,r0
	sub r7,r7,r7
	sub r4,r4,r4
	sub r3,r3,r3
	sub r1,r1,r1
	sub r5,r3,r1
	sub r0,r4,r6
	sub r1,r4,r3
	.text
	.global and
and:
	and r0,r0,r0
	and r7,r7,r7
	and r4,r4,r4
	and r3,r3,r3
	and r1,r1,r1
	and r5,r7,r6
	and r0,r3,r3
	and r2,r5,r4
	.text
	.global or
or:
	or r0,r0,r0
	or r7,r7,r7
	or r4,r4,r4
	or r3,r3,r3
	or r1,r1,r1
	or r5,r1,r6
	or r0,r4,r7
	or r4,r1,r1
	.text
	.global xor
xor:
	xor r0,r0,r0
	xor r7,r7,r7
	xor r4,r4,r4
	xor r3,r3,r3
	xor r1,r1,r1
	xor r3,r3,r6
	xor r2,r4,r4
	xor r7,r6,r6
	.text
	.global asr
asr:
	asr r0,r0,r0
	asr r7,r7,r7
	asr r4,r4,r4
	asr r3,r3,r3
	asr r1,r1,r1
	asr r3,r7,r5
	asr r6,r4,r4
	asr r6,r7,r4
	.text
	.global lsl
lsl:
	lsl r0,r0,r0
	lsl r7,r7,r7
	lsl r4,r4,r4
	lsl r3,r3,r3
	lsl r1,r1,r1
	lsl r7,r4,r5
	lsl r6,r6,r0
	lsl r5,r7,r6
	.text
	.global lsr
lsr:
	lsr r0,r0,r0
	lsr r7,r7,r7
	lsr r4,r4,r4
	lsr r3,r3,r3
	lsr r1,r1,r1
	lsr r0,r2,r1
	lsr r7,r6,r1
	lsr r7,r1,r1
	.text
	.global mov
mov:
	mov r0,r0
	mov r7,r7
	mov r4,r4
	mov r3,r3
	mov r1,r1
	mov r5,r4
	mov r7,r0
	mov r3,r0
	.text
	.global addi
addi:
	addi r0,r0,#0
	addi r7,r7,#7
	addi r4,r4,#4
	addi r3,r3,#3
	addi r1,r1,#1
	addi r7,r5,#3
	addi r5,r4,#2
	addi r6,r0,#5
	.text
	.global subi
subi:
	subi r0,r0,#0
	subi r7,r7,#7
	subi r4,r4,#4
	subi r3,r3,#3
	subi r1,r1,#1
	subi r3,r7,#3
	subi r3,r0,#0
	subi r5,r4,#3
	.text
	.global asri
asri:
	asri r0,r0,#0
	asri r7,r7,#7
	asri r4,r4,#4
	asri r3,r3,#3
	asri r1,r1,#1
	asri r7,r2,#5
	asri r2,r0,#1
	asri r5,r6,#2
	.text
	.global lsli
lsli:
	lsli r0,r0,#0
	lsli r7,r7,#7
	lsli r4,r4,#4
	lsli r3,r3,#3
	lsli r1,r1,#1
	lsli r4,r4,#6
	lsli r2,r2,#2
	lsli r2,r1,#7
	.text
	.global lsri
lsri:
	lsri r0,r0,#0
	lsri r7,r7,#7
	lsri r4,r4,#4
	lsri r3,r3,#3
	lsri r1,r1,#1
	lsri r0,r1,#5
	lsri r3,r1,#3
	lsri r1,r1,#7
	.text
	.global movi
movi:
	movi r0,#0
	movi r7,#63
	movi r4,#32
	movi r3,#31
	movi r1,#1
	movi r7,#58
	movi r0,#42
	movi r2,#56
	.text
	.global ldb_post_inc
ldb_post_inc:
	ldb r0,(r0+,0)
	ldb r7,(r7+,-1)
	ldb r4,(r4+,-4)
	ldb r3,(r3+,3)
	ldb r1,(r1+,1)
	ldb r0,(r7+,2)
	ldb r3,(r3+,1)
	ldb r4,(r2+,2)
	.text
	.global ldw_post_inc
ldw_post_inc:
	ldw r0,(r0+,0)
	ldw r7,(r7+,-1)
	ldw r4,(r4+,-4)
	ldw r3,(r3+,3)
	ldw r1,(r1+,1)
	ldw r1,(r4+,-2)
	ldw r4,(r3+,-1)
	ldw r2,(r0+,1)
	.text
	.global stb_post_inc
stb_post_inc:
	stb (r0+,0),r0
	stb (r7+,-1),r7
	stb (r4+,-4),r4
	stb (r3+,3),r3
	stb (r1+,1),r1
	stb (r6+,-1),r1
	stb (r4+,2),r7
	stb (r5+,-2),r7
	.text
	.global stw_post_inc
stw_post_inc:
	stw (r0+,0),r0
	stw (r7+,-1),r7
	stw (r4+,-4),r4
	stw (r3+,3),r3
	stw (r1+,1),r1
	stw (r7+,-4),r5
	stw (r3+,3),r1
	stw (r4+,2),r2
	.text
	.global bra
bra:
	bra -4
	bra foodata
	bra -4
	bra 4
	bra footext
	bra 4
	bra foodata
	bra 4
	.text
	.global bal
bal:
	bal 4,r0
	bal foodata,r7
	bal foodata,r4
	bal 4,r3
	bal 4,r1
	bal footext,r4
	bal -4,r1
	bal footext,r7
	.text
	.global beq
beq:
	beq -4,r0,r0
	beq -4,r7,r7
	beq foodata,r4,r4
	beq -4,r3,r3
	beq footext,r1,r1
	beq -4,r5,r3
	beq footext,r4,r3
	beq 4,r2,r3
	.text
	.global bne
bne:
	bne foodata,r0,r0
	bne footext,r7,r7
	bne 4,r4,r4
	bne footext,r3,r3
	bne foodata,r1,r1
	bne footext,r4,r0
	bne footext,r4,r7
	bne foodata,r3,r5
	.text
	.global blts
blts:
	blts -4,r0,r0
	blts -4,r7,r7
	blts foodata,r4,r4
	blts footext,r3,r3
	blts 4,r1,r1
	blts foodata,r5,r2
	blts footext,r5,r6
	blts foodata,r2,r6
	.text
	.global bgts
bgts:
	bgts foodata,r0,r0
	bgts footext,r7,r7
	bgts -4,r4,r4
	bgts foodata,r3,r3
	bgts -4,r1,r1
	bgts footext,r4,r1
	bgts footext,r6,r0
	bgts -4,r4,r2
	.text
	.global bltu
bltu:
	bltu -4,r0,r0
	bltu foodata,r7,r7
	bltu -4,r4,r4
	bltu foodata,r3,r3
	bltu -4,r1,r1
	bltu footext,r4,r2
	bltu footext,r1,r4
	bltu foodata,r6,r7
	.text
	.global bgtu
bgtu:
	bgtu -4,r0,r0
	bgtu footext,r7,r7
	bgtu foodata,r4,r4
	bgtu 4,r3,r3
	bgtu 4,r1,r1
	bgtu -4,r0,r4
	bgtu -4,r3,r6
	bgtu foodata,r7,r0
	.text
	.global jmp
jmp:
	jmp r0
	jmp r7
	jmp r4
	jmp r3
	jmp r1
	jmp r3
	jmp r3
	jmp r4
	.text
	.global jal
jal:
	jal r0,r0
	jal r7,r7
	jal r4,r4
	jal r3,r3
	jal r1,r1
	jal r4,r4
	jal r4,r0
	jal r2,r6
	.text
	.global jeq
jeq:
	jeq r0,r0,r0
	jeq r7,r7,r7
	jeq r4,r4,r4
	jeq r3,r3,r3
	jeq r1,r1,r1
	jeq r0,r4,r5
	jeq r0,r7,r1
	jeq r1,r7,r2
	.text
	.global jne
jne:
	jne r0,r0,r0
	jne r7,r7,r7
	jne r4,r4,r4
	jne r3,r3,r3
	jne r1,r1,r1
	jne r2,r4,r0
	jne r1,r6,r3
	jne r2,r7,r3
	.text
	.global jlts
jlts:
	jlts r0,r0,r0
	jlts r7,r7,r7
	jlts r4,r4,r4
	jlts r3,r3,r3
	jlts r1,r1,r1
	jlts r3,r4,r4
	jlts r0,r0,r6
	jlts r3,r1,r5
	.text
	.global jgts
jgts:
	jgts r0,r0,r0
	jgts r7,r7,r7
	jgts r4,r4,r4
	jgts r3,r3,r3
	jgts r1,r1,r1
	jgts r7,r7,r4
	jgts r5,r1,r5
	jgts r5,r1,r4
	.text
	.global jltu
jltu:
	jltu r0,r0,r0
	jltu r7,r7,r7
	jltu r4,r4,r4
	jltu r3,r3,r3
	jltu r1,r1,r1
	jltu r3,r5,r6
	jltu r6,r6,r4
	jltu r7,r0,r6
	.text
	.global jgtu
jgtu:
	jgtu r0,r0,r0
	jgtu r7,r7,r7
	jgtu r4,r4,r4
	jgtu r3,r3,r3
	jgtu r1,r1,r1
	jgtu r3,r7,r4
	jgtu r4,r7,r6
	jgtu r3,r6,r1
	.text
	.global rte
rte:
	rte r0
	rte r7
	rte r4
	rte r3
	rte r1
	rte r6
	rte r1
	rte r5
