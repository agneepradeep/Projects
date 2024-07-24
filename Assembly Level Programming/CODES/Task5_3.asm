//Write a program to display SCOPE on LCD from Line 2 to Position 6, 
//also store the display value starting from RAM Location 40H
ORG 0000H
MOV A, #38H
ACALL COMNWRT
ACALL DELAY
MOV A, #0EH
ACALL COMNWRT
ACALL DELAY
MOV A, #01H
ACALL COMNWRT
ACALL DELAY
MOV A, #06H
ACALL COMNWRT
ACALL DELAY
MOV A, #0C6H //Line 2 Position 6
ACALL COMNWRT
ACALL DELAY

MOV DPTR, #MYDATA
MOV R0, #40H
D1: CLR A
MOVC A, @A+DPTR
MOV @R0,A
ACALL DATAWRT 	;call command subroutine
ACALL DELAY		;give LCD some time
INC DPTR
INC R0
JZ AGAIN
SJMP D1
AGAIN: SJMP AGAIN ;stay here

COMNWRT: 		;send command to LCD
MOV P1, A		;copy reg A to P1
CLR P2.0		;RS = 0 for command
CLR P2.1		;R/W= 0 fro write
SETB P2.2		;E=1 for high pulse
ACALL DELAY		;give LCD some time
CLR P2.2		;E=0 for H-to-L pulse
RET

DATAWRT:		;write data to LCD
MOV P1,A		;copy reg A to port 1
SETB P2.0		;RS = 1 for data
CLR P2.1		;R/W = 0 for write
SETB P2.2		;E = 1 for high pulse
ACALL DELAY		;give LCD some time
CLR P2.2		;E = 0 for H-to-L pulse
RET

DELAY: MOV R3, #250		;50 or higher for fast CPUs
HERE2: MOV R4, #255		;R4 = 255
HERE: DJNZ R4, HERE		;stay until R4 becomes 0
DJNZ R3, HERE2
RET
;22BCI0198
ORG 300H
MYDATA: DB "SCOPE",0
END