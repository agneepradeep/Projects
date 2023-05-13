/*Write a program to print all prime numbers from 1 to 300.*/
#include <stdio.h>
int main(){
	int i,j,Factors;
	
	printf("\nPrime Numbers between 1 and 300\n");
	for (i = 1;i<=300;i=i+1){
		Factors = 0;
		for (j=1;j<=i;j=j+1){
			if (i%j == 0)
				Factors += 1;
		}
		if (Factors == 2)
			printf("\t%d",i);
	}
	return 0;
}
