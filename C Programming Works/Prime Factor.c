/*A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number*/
#include <stdio.h>
void PrimeFactors(int);
int main(){
	int Number;
	printf("Type Number :");
	scanf("%d",&Number);
	PrimeFactors(Number);
	return 0;
}

void PrimeFactors(int Number){
	int i = 2;
	while (Number != 1){
		if  (Number%i == 0){
			Number = Number/i;
			printf("%d ",i);
		}
		else{
			i = i + 1;
		}
	}
}
