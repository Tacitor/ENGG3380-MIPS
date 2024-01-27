	.data
arrayA:	.word	10 : 10
arrayB:	.word	11 : 10
	.text	
main:
	addi $s3, $0, 12
	addi $s4, $0, 4
	la $s6, arrayA
	la $s7, arrayB
	sw $s3, 8($s6)

ans:	sub $t0, $s3, $s4
	add $t0, $t0, $s6
	lw $t1, 0($t0)
	sw $t1, 32($s7)
