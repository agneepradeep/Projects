//22BCI0198
ORG 0000H
START: MOV R0, #10
MOV DPTR, #STRING
AGAIN: CLR A
MOVC A, @A+DPTR
MOV P1,A
ACALL DELAY
INC DPTR
DJNZ R0, AGAIN
SJMP START

DELAY: MOV R1, #255
L3: MOV R2, #255
L2: MOV R3, #255
L1: DJNZ R3, L1
DJNZ R2, L2
DJNZ R1, L3
RET

STRING: DB 3FH,06H,5BH,4FH,66H,6DH,7DH,07H,7FH,6FH
END