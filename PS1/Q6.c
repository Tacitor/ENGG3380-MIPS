sll $t0, $s0, 2 		#$t0 = f * 4 	//shift left by 4
add $t0, $s6, $t0		#$t0 = &A[f]	//$t0 = &A + $t0	
sll $t1, $s1, 2 		# | $t1 = g * 4 //$t1 = g * 4
add $t1, $s7, $t1 		#$t1 = &B[g]	// $t1 = $t1 + &B
lw $s0, 0($t0) 			#t = A[f ]		//f = A[f]
addi $t2, $t0, 4		//$t2 = f + 1(word)
lw $t0, 0($t2)			//$t0 = A[f + 1]
add $t0, $t0, $s0		//$t0 = A[f + 1] + A[f]
sw $t0, 0($t1)			//B[g] = A[f + 1] + A[f]

The C code would be: B[g] = A[f + 1] + A[f]

