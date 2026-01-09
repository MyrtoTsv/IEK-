.data #etsi ksekiname,tmhma dedomenwn
.text #thma kwdika

main: #edw grafoume ton kwdika , mesa sth main
   	
   	#fortwnw oti exei h dieuthnsh mnhmhs 
	lw $t0 ,0x10010000
	lw $t1 0x10010020
	#prosthesh ston kataxwrhth t2 , t2=t1+t0
	add $t2 ,$t1 , $t0
	#apothikeuoume to apotelesma sthn mnhmh RAM
	sw $t2 0x10010040
	li $v0 , 10 #klhsh eksodou(call code for exit=10)
	syscall #call operating sys

#times sthn Mnhmh Ram 54 , 6 sta duo prwta kai sto apo katw tha einai h prosthesh 54+6=60
