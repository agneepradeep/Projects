//Write a program that continously get 8 bit data from P1 and send it to P2
//while INT1 pin is connected to a switch which is normally high. Whenever it goes
//low, it should tunr ON a LED. The led is connected to P0.3 and is normally OFF. When
//it is turned ON, it should stay on for fraction of second. As long as the switch
//pressed low, the LED should stay ON.

ORG 0000H
LJMP MAIN //BY-PASS INTERRUPT VECTOR TABLE
//ISR FOR INT1 TO TURN ON LED
ORG 0013H //INT1 ISR
SETB P0.3 //TURN ON LED
MOV R3, #255
BACK: DJNZ R3,BACK  //KEEP LED ON FOR A WHILE
CLR P0.3 //TURN OFF THE LED
RETI //RETURN FROM ISR
//MAIN PROGRAM FOR INITIALIZATION
ORG 30H 
MAIN: MOV P1, #0FFH //P1 AS INPUT
MOV P2, #00H //P2 AS OUTPUT
CLR P0.3 //LED OUTPUT
MOV IE, #10000100B //ENABLE EXTERNAL INT 1
HERE: MOV A, P1
MOV P2,A
SJMP HERE //STAY HERE UNTILL GET INTERUPPTED
END