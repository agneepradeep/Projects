/*Write a program to receive an integer and find its octal equivalent.*/
#include <stdio.h>
#include <math.h>
int main()
{
	int Number,Dividend,Remainder,Octal,i;
	printf("Type any integer.\n");
	scanf("%d",&Number);
	i = 0;
	while (Number != 0)
	{
		Dividend = Number/8;
		Remainder = Number%8;
		Number = Dividend;
	
		Octal = Octal + Remainder*pow(10,i);
		i = i + 1;
	}
	printf("Octal Equivalent = %d",Octal);
	return 0;
}

