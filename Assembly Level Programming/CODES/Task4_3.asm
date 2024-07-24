/*Write a program that continously get 8-bit data from P0 and sends it
P1 while INT0 pin is connected to a switch which is normally high. Whenever
it goes LOW, it should turn ON a LED. The LED is connected to P2.1 and is
normally off. When it is turned ON, it should stay ON for 100us. As long as
the switch is pressed LOW, the LED should stay ON.
*/
//22BCI0198
ORG 0000H
LJMP MAIN //BY-PASS INTERRUPT VECTOR TABLE
//ISR FOR INT0 TO TURN ON LED
ORG 0003H //INT0 ISR
SETB P2.1 //TURN ON LED
MOV TMOD, #02H
MOV TH0, #-92
SETB TR0
BACK: JNB TF0,BACK//KEEP LED ON FOR A WHILE
CLR TR0
CLR TF0
CLR P2.1 //TURN OFF THE LED
RETI //RETURN FROM ISR

//MAIN PROGRAM FOR INITIALIZATION

ORG 30H 
MAIN: MOV P0, #0FFH //P1 AS INPUT
MOV P1, #00H //P2 AS OUTPUT
CLR P2.1 //LED OUTPUT
MOV IE, #10000001B //ENABLE EXTERNAL INT 0
HERE: MOV A, P0
MOV P1,A
SJMP HERE //STAY HERE UNTILL GET INTERUPPTED
END