//3.2.a 22BCI0198
ORG 0000H
XX: MOV DPTR, #MYDATA
MOV TMOD, #20H
MOV TH1, #-3 //FREQ/BAUD RATE
MOV SCON, #50H	//RECEIVER ENABLE + TIMER MODE1
SETB TR1
MOV R1, #14	//LENGTH OF VIT UNIVERSITY
AGAIN: CLR A
MOVC A, @A+DPTR
MOV SBUF, A
HERE: JNB TI, HERE
CLR TI
INC DPTR
DJNZ R1, AGAIN
SJMP XX
MYDATA: DB'VIT UNIVERSITY'0
END