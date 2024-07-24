//Write a program that continously gets 8-bit data from P0
//and send it to P1 while simultaneously creating a square wave of
//200 microsec period on pin P2.1
//Use Timer 0 to create the square wave. Assume that XTAL = 11.0592MHz
ORG 0000H
LJMP MAIN // JUMP TO MAIN
ORG 00BH //TIMER 0 INTERRUPT VECTOR LABEL
CPL P2.1
RETI // RETURN FROM ISR
ORG 0030H
MAIN: MOV TMOD, #02H //SET TIMER 0 IN MODE 2
MOV P0, #0FFH //SET P0 AS I/P PORT
MOV TH0, #-92 
MOV IE, #10000010B //ENABLE TIMER 0
SETB TR0 //START THE TIMER
BACK: MOV A, P0 //GET DATA FROM P0
MOV P1,A //MOOV DATA P0 TO P1
SJMP BACK //LOOP IT UNLESS INTERRUPTED
END