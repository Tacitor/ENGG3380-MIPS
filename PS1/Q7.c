addi $t0, $s6, 4	//$t0 = &A + 4(bytes) = &A[1]
add $t1, $s6, $s0	//$t1 = &A + f
sw $t1, 0($t0)		//A[1] = &A + f
lw $t0, 0($t0)		//$t0 = &A + f
add $s0, $t1, $t0	//f = 2*(&A) + 2*f

The final C code is: 
f = 2*(&A) + 2*f