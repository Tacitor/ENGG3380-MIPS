	.data
	.text	
main:
	addi $s0, $0, 0x80000000
	addi $s1, $0, 0xD0000000

ans:	add $t0, $s0, $s1
