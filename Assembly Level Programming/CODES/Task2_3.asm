ORG	0000H
CLR ACC.0;
SETB ACC.1;

//22BCI0198
MOV C,ACC.0
CPL C		
ANL C, ACC.1	 	//ABar.B
MOV ACC.2,C		//MOV ABar.B -> ACC.2

MOV C,ACC.1		//B -> C
CPL C				//C -> BBar
ANL C,ACC.0	 	//C -> BBar.A	
ORL C,ACC.2  	//C -> A.BBar + ABar.B
MOV PSW.1,C   	//Move Difference/Sum to PSW.1

MOV C,ACC.0		//A -> C
ANL C,ACC.1		//C -> C*B
MOV PSW.5,C		//C ->PSW.5

MOV C,ACC.0
CPL C
ANL C,ACC.1
MOV ACC.0,C		

HERE: SJMP HERE
END