//Write a program to get data from a single bit of P1.2 and send it to P1.7
//continously while an interrupt will do the following. A serial interuppt service
//routine will receive data from a PC and display it on P2 ports
ORG 0000H
LJMP MAIN

ORG 0023H
LJMP SERIAL
ORG 0030H
MAIN: SETB P1.2
MOV TMOD, #20H
MOV TH1, #-3
MOV SCON, #50H
MOV IE, #10010000B;
SETB TR1
BACK: MOV C, P1.2
MOV P1.7, C
SJMP BACK

SERIAL: JB TI, TRANS
MOV A, SBUF
MOV P2, A
CLR RI
RETI
TRANS: CLR TI
RETI
END