ORG 0000H
SETB ACC.0;
SETB ACC.1;
CLR ACC.2;
CLR ACC.3;
//22BCI0198
MOV C,ACC.0
ANL C,ACC.1
ORL C,ACC.2
CPL C

MOV ACC.7,C
MOV C,ACC.2
CPL C
ANL C,ACC.3
CPL C

ANL C,ACC.7
HALT: SJMP HALT
END